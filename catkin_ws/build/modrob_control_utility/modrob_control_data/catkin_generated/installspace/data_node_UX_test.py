#!/usr/bin/env python2
# ===============================
# AUTHOR       : Alex Rohregger (alex.rohregger@tum.de)
# CREATE DATE  : 25.06.2020
# PURPOSE      : Used to automate user testing and data collection
# 1) Listens for data parameters. Stores them during the test.
# 2) After each test, the data is dumped as a .csv
# 3) Data recored: 
#       a) Distance to endpoint
#       b) Distance to trajectory (for trajectory tests)
#       c) Active joints (for all n-joints) or workspace inputs
# ===============================

import time
import rospy
import numpy as np
import pandas as pd
import sys

import math

# Imports needed for the custom message class
from std_msgs.msg import Float64
from std_msgs.msg import Bool

from modrob_control_kinematics.msg import ControlVelocityDesired

from time import sleep

import os
import rospkg

# List that stores the positional data points 
# In the code, each list position is a list of data points.
# Each entry looks as follows.
# [Distance_to_endpoint, (distance_to_path), Joint1_Active, .. , JointN_Active]
distance_endpoint = []

# For storing the currently active joints during control
active_joints_list = []
number_of_joints = rospy.get_param("/number_joints")
active_joints = [0.0] * number_of_joints

# Storing workspace inputs
workspace_list = []
workspace_inputs = [0.0 , 0.0, 0.0, 0.0, 0.0, 0.0]
        
# Used in the data_dump2() function for labelling        
labels = ["x", "y", "z", "alpha", "beta", "gamma"]

# For storing the distance to the trajectory for test type 2.
distance_trajectory = [] 
dist_trajectory = 0.0

# Test threshold value
threshold = 0.1

# Integer keeps track of the current test number
number_of_test = 0
open_input = False
test_case_type = 1
scenario_number = 0
control_device_used = 0

# Publisher node to change the color of the endpoint
node_publish_color = rospy.Publisher('/isGreen', Bool, queue_size=10)

# Global name of our user - user ID
user_id = ""

# This part is used to find the file path for saving the tests.
# They are saved locally on the testers, before being pushed to our git.
rospack = rospkg.RosPack()
file_path = rospack.get_path("modrob_control_data")

def callback_start(data):
    # Callback waiting for start button.
    # Sets color of node back to red
    # Sets the rosparam teststate to true
        
    rospy.set_param("test_state", True)
    node_publish_color.publish(Bool(data=False))

def dump_data():
    # Method for taking all the stored jointspace data, dumping to csv
    # Stored in the data folder

    data_dict = { "Distance Endpoint" : distance_endpoint }

    if test_case_type == 2:
        data_dict.update( {"Distance Trajectory": distance_trajectory} )
    
    temp_array = np.array(active_joints_list)
    # print(active_joints_list)
    # print(temp_array)
    for i in range(temp_array[0].size):
        label = "Joint" + str(i+1)
        print(i)
        data_dict.update( { label : temp_array[:,i] } )
    
    df1 = pd.DataFrame.from_dict(data_dict)
    file_name = file_path + "/src/data/" + "test_" + str(user_id) + "_" + str(number_of_test) + "_" + str(control_device_used) + "_" + str(test_case_type) + "_" + str(scenario_number) + "_1" + ".csv"
    df1.to_csv(file_name)

    # Let the user know a file has been dumped
    print("Dumped file " + file_name)

def dump_data2():
    # Method for taking all the stored workspace data, dumping to csv
    # Stored in the data folder

    data_dict = { "Distance Endpoint" : distance_endpoint }
    if test_case_type == 2:
        data_dict.update( {"Distance Trajectory": distance_trajectory} )
    temp_array = np.array(workspace_list)
    # print(active_joints_list)
    # print(temp_array)
    for i in range(temp_array[0].size):
        data_dict.update( { labels[i] : temp_array[:,i] } )

    df1 = pd.DataFrame.from_dict(data_dict)
    file_name = file_path + "/src/data/" + "test_" + str(user_id) + "_" + str(number_of_test) + "_" + str(control_device_used) + "_" + str(test_case_type) + "_" + str(scenario_number) + "_2" + ".csv"
    df1.to_csv(file_name)

    # Let the user know a file has been dumped
    print("Dumped file " + file_name)

def update_values():
    # After a test is complete, update some global tracker variables
    global number_of_test
    global distance_endpoint
    global active_joints_list
    global active_joints
    global open_input
    global test_state
    global distance_trajectory
    global dist_trajectory
    global workspace_inputs
    global workspace_list

    # Add 1 to the number of tests done (for automatic naming)
    number_of_test += 1

    # We set the marker to green to let user know they reached target.
    node_publish_color.publish(Bool(data=True))

    # Test param is set to false to stop the test.
    # Essentially stops further data being logged
    rospy.set_param("test_state", False)
    test_state = False

    # Reset all the existing values for next test
    # Now ready to take data for the new test
    distance_endpoint = []
    active_joints_list = []
    active_joints = [0.0] * number_of_joints 
    distance_trajectory = []
    dist_trajectory = 0.0
    workspace_inputs = [0.0, 0.0, 0.0, 0.0, 0.0, 0.0]
    workspace_list = []

    # Allow for the next input state
    open_input = True

def update_time( data ):
    # Method for adding data to our distance_endpoint list

    global distance_endpoint
    global active_joints_list
    global distance_trajectory
    global workspace_list

    distance_endpoint.append(data.data)
    distance_trajectory.append(dist_trajectory)
    active_joints_list.append(active_joints[:])
    workspace_list.append(workspace_inputs[:])
    # print(active_joints)
    # print(active_joints_list)

    # Threshold check to see if we reached the goal.
    if data.data < threshold:
        
        if jointspace_mode:
            dump_data()
        else:
            dump_data2()
        
        update_values()

        # Sleep to stop the whole process for a second.
        # Avoids some weird behaviour
        sleep(1)

def callbackjoint(data):
    # Callback for when we take a joint message
    # Value taken directly from the desired velocity message
    # print("in joint callback")

    global active_joints
    global jointspace_mode
    global workspace_inputs

    # Update joints if joint space active
    if data.isJointspace:
        jointspace_mode = True
        active_joints = data.joint_velocities
    
    #print(active_joints)

    # Update xyz and angles for work space
    if not data.isJointspace:
        jointspace_mode = False
        temp_x = data.workspace_velocities.linear.x
        temp_y = data.workspace_velocities.linear.y
        temp_z = data.workspace_velocities.linear.z 
        temp_alpha = data.workspace_velocities.angular.x
        temp_beta = data.workspace_velocities.angular.y
        temp_gamma = data.workspace_velocities.angular.z 

        workspace_inputs = [temp_x,temp_y,temp_z,temp_alpha, temp_beta, temp_gamma]

        # print(temp_data)
        # print("workspace control active")



def callback(data):
    # Callback from the subscriber
    # Only if the test_state is true, we log data.
    if test_state:
        update_time(data)

def callbacktraj(data):
    # Callback for the read trajectory subscriber
    # Updates the global distance to trajectory message

    global dist_trajectory
    dist_trajectory = data.data


def data_node(rate):

    global user_id
    global test_state
    global threshold
    global test_case_type
    global scenario_number
    global open_input
    global control_device_used

    # Initialize a node.
    rospy.init_node("data_listener", anonymous = True)
    r = rospy.Rate(rate)

    # +++++++++ USER INPUTS ++++++++++++++

    # Ask user for ID (used for naming)
    user_id = input("Input your testID: ")

    # Ask user for test threshold - defined by the testers.
    # Lower threshold makes the test harder.
    threshold = input("Input desired threshold value: ")

    # Ask user the current test case being conducted
    test_case_type = input("Enter the test case type: 1 or 2: ")

    # Ask user for the scenario number (1 - 5)
    scenario_number = input("Number of the test case scenario (1-5): ")

    control_device_used = input("Control device used (1: GUI || 2:Spacemouse): ")

    # +++++++++++ Subscriber code. +++++++++

    # Setup our subscriber to the distance_to_endpoint value.
    # If the topic is published, it initiates the callback
    rospy.Subscriber("distance_to_endpoint", Float64, callback, queue_size = 1)

    # Setup subscirber to listen for distance to trajectory message
    rospy.Subscriber("distance_to_trajectory", Float64, callbacktraj, queue_size = 1)

    # Setup subscriber to listen for desired velocity messages
    rospy.Subscriber("ns/control_velocity_desired", ControlVelocityDesired, callbackjoint, queue_size = 1)

    # This while loop ensures we run at the desired Rosrate
    while(not rospy.is_shutdown()):

        # If open input
        if open_input:
            continue_test = raw_input("Continue the test (y/n)? ")
            if continue_test.lower() == 'y':
                test_case_type = input("Enter the test case type: 1 or 2: ")
                scenario_number = input("Number of the test case scenario (1-5): ")
                control_device_used = input("Control device used (1: GUI || 2:Spacemouse): ")
                open_input = False
            else:
                sys.exit()


        # Continously updating the test_state boolean. 
        test_state = rospy.get_param("test_state")
        r.sleep()



if __name__ == "__main__":
    try:
        data_node(rate = 10)
    except rospy.ROSInterruptException:
        pass