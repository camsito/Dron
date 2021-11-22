// Auto-generated. Do not edit!

// (in-package modrob_simulation.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;

//-----------------------------------------------------------

class JointConfigMeasured {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.joint_angle = null;
      this.joint_velocity = null;
      this.joint_acceleration = null;
      this.joint_torque = null;
      this.joint_temperature = null;
    }
    else {
      if (initObj.hasOwnProperty('joint_angle')) {
        this.joint_angle = initObj.joint_angle
      }
      else {
        this.joint_angle = 0.0;
      }
      if (initObj.hasOwnProperty('joint_velocity')) {
        this.joint_velocity = initObj.joint_velocity
      }
      else {
        this.joint_velocity = 0.0;
      }
      if (initObj.hasOwnProperty('joint_acceleration')) {
        this.joint_acceleration = initObj.joint_acceleration
      }
      else {
        this.joint_acceleration = 0.0;
      }
      if (initObj.hasOwnProperty('joint_torque')) {
        this.joint_torque = initObj.joint_torque
      }
      else {
        this.joint_torque = 0.0;
      }
      if (initObj.hasOwnProperty('joint_temperature')) {
        this.joint_temperature = initObj.joint_temperature
      }
      else {
        this.joint_temperature = 0.0;
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type JointConfigMeasured
    // Serialize message field [joint_angle]
    bufferOffset = _serializer.float64(obj.joint_angle, buffer, bufferOffset);
    // Serialize message field [joint_velocity]
    bufferOffset = _serializer.float64(obj.joint_velocity, buffer, bufferOffset);
    // Serialize message field [joint_acceleration]
    bufferOffset = _serializer.float64(obj.joint_acceleration, buffer, bufferOffset);
    // Serialize message field [joint_torque]
    bufferOffset = _serializer.float64(obj.joint_torque, buffer, bufferOffset);
    // Serialize message field [joint_temperature]
    bufferOffset = _serializer.float64(obj.joint_temperature, buffer, bufferOffset);
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type JointConfigMeasured
    let len;
    let data = new JointConfigMeasured(null);
    // Deserialize message field [joint_angle]
    data.joint_angle = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [joint_velocity]
    data.joint_velocity = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [joint_acceleration]
    data.joint_acceleration = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [joint_torque]
    data.joint_torque = _deserializer.float64(buffer, bufferOffset);
    // Deserialize message field [joint_temperature]
    data.joint_temperature = _deserializer.float64(buffer, bufferOffset);
    return data;
  }

  static getMessageSize(object) {
    return 40;
  }

  static datatype() {
    // Returns string type for a message object
    return 'modrob_simulation/JointConfigMeasured';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '496f803b6910541253167e93f432014e';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    # This message describes a joint movement
    
    # The angle the joint is currently at
    float64 joint_angle
    
    # The current velocity of the joint
    float64 joint_velocity
    
    # The acceleration the joint currently experiences
    float64 joint_acceleration
    
    # The torque the joint is delivering
    float64 joint_torque
    
    # The current temperature of the joint
    float64 joint_temperature
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new JointConfigMeasured(null);
    if (msg.joint_angle !== undefined) {
      resolved.joint_angle = msg.joint_angle;
    }
    else {
      resolved.joint_angle = 0.0
    }

    if (msg.joint_velocity !== undefined) {
      resolved.joint_velocity = msg.joint_velocity;
    }
    else {
      resolved.joint_velocity = 0.0
    }

    if (msg.joint_acceleration !== undefined) {
      resolved.joint_acceleration = msg.joint_acceleration;
    }
    else {
      resolved.joint_acceleration = 0.0
    }

    if (msg.joint_torque !== undefined) {
      resolved.joint_torque = msg.joint_torque;
    }
    else {
      resolved.joint_torque = 0.0
    }

    if (msg.joint_temperature !== undefined) {
      resolved.joint_temperature = msg.joint_temperature;
    }
    else {
      resolved.joint_temperature = 0.0
    }

    return resolved;
    }
};

module.exports = JointConfigMeasured;
