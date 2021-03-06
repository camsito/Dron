# generated from genmsg/cmake/pkg-genmsg.cmake.em

message(STATUS "motion_planning: 2 messages, 0 services")

set(MSG_I_FLAGS "-Imotion_planning:/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg;-Istd_msgs:/opt/ros/melodic/share/std_msgs/cmake/../msg;-Igeometry_msgs:/opt/ros/melodic/share/geometry_msgs/cmake/../msg;-Imoveit_msgs:/opt/ros/melodic/share/moveit_msgs/cmake/../msg;-Iactionlib_msgs:/opt/ros/melodic/share/actionlib_msgs/cmake/../msg;-Isensor_msgs:/opt/ros/melodic/share/sensor_msgs/cmake/../msg;-Itrajectory_msgs:/opt/ros/melodic/share/trajectory_msgs/cmake/../msg;-Ishape_msgs:/opt/ros/melodic/share/shape_msgs/cmake/../msg;-Iobject_recognition_msgs:/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg;-Ioctomap_msgs:/opt/ros/melodic/share/octomap_msgs/cmake/../msg")

# Find all generators
find_package(gencpp REQUIRED)
find_package(geneus REQUIRED)
find_package(genlisp REQUIRED)
find_package(gennodejs REQUIRED)
find_package(genpy REQUIRED)

add_custom_target(motion_planning_generate_messages ALL)

# verify that message/service dependencies have not changed since configure



get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_custom_target(_motion_planning_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "motion_planning" "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" "geometry_msgs/Pose:geometry_msgs/Quaternion:geometry_msgs/Point"
)

get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_custom_target(_motion_planning_generate_messages_check_deps_${_filename}
  COMMAND ${CATKIN_ENV} ${PYTHON_EXECUTABLE} ${GENMSG_CHECK_DEPS_SCRIPT} "motion_planning" "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" "shape_msgs/SolidPrimitive:shape_msgs/Mesh:moveit_msgs/CollisionObject:shape_msgs/Plane:shape_msgs/MeshTriangle:object_recognition_msgs/ObjectType:geometry_msgs/Pose:std_msgs/Header:geometry_msgs/Quaternion:geometry_msgs/Point"
)

#
#  langs = gencpp;geneus;genlisp;gennodejs;genpy
#

### Section generating for lang: gencpp
### Generating Messages
_generate_msg_cpp(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/motion_planning
)
_generate_msg_cpp(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/melodic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/motion_planning
)

### Generating Services

### Generating Module File
_generate_module_cpp(motion_planning
  ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/motion_planning
  "${ALL_GEN_OUTPUT_FILES_cpp}"
)

add_custom_target(motion_planning_generate_messages_cpp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_cpp}
)
add_dependencies(motion_planning_generate_messages motion_planning_generate_messages_cpp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_cpp _motion_planning_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_cpp _motion_planning_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(motion_planning_gencpp)
add_dependencies(motion_planning_gencpp motion_planning_generate_messages_cpp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS motion_planning_generate_messages_cpp)

### Section generating for lang: geneus
### Generating Messages
_generate_msg_eus(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/motion_planning
)
_generate_msg_eus(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/melodic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/motion_planning
)

### Generating Services

### Generating Module File
_generate_module_eus(motion_planning
  ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/motion_planning
  "${ALL_GEN_OUTPUT_FILES_eus}"
)

add_custom_target(motion_planning_generate_messages_eus
  DEPENDS ${ALL_GEN_OUTPUT_FILES_eus}
)
add_dependencies(motion_planning_generate_messages motion_planning_generate_messages_eus)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_eus _motion_planning_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_eus _motion_planning_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(motion_planning_geneus)
add_dependencies(motion_planning_geneus motion_planning_generate_messages_eus)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS motion_planning_generate_messages_eus)

### Section generating for lang: genlisp
### Generating Messages
_generate_msg_lisp(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/motion_planning
)
_generate_msg_lisp(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/melodic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/motion_planning
)

### Generating Services

### Generating Module File
_generate_module_lisp(motion_planning
  ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/motion_planning
  "${ALL_GEN_OUTPUT_FILES_lisp}"
)

add_custom_target(motion_planning_generate_messages_lisp
  DEPENDS ${ALL_GEN_OUTPUT_FILES_lisp}
)
add_dependencies(motion_planning_generate_messages motion_planning_generate_messages_lisp)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_lisp _motion_planning_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_lisp _motion_planning_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(motion_planning_genlisp)
add_dependencies(motion_planning_genlisp motion_planning_generate_messages_lisp)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS motion_planning_generate_messages_lisp)

### Section generating for lang: gennodejs
### Generating Messages
_generate_msg_nodejs(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/motion_planning
)
_generate_msg_nodejs(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/melodic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/motion_planning
)

### Generating Services

### Generating Module File
_generate_module_nodejs(motion_planning
  ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/motion_planning
  "${ALL_GEN_OUTPUT_FILES_nodejs}"
)

add_custom_target(motion_planning_generate_messages_nodejs
  DEPENDS ${ALL_GEN_OUTPUT_FILES_nodejs}
)
add_dependencies(motion_planning_generate_messages motion_planning_generate_messages_nodejs)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_nodejs _motion_planning_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_nodejs _motion_planning_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(motion_planning_gennodejs)
add_dependencies(motion_planning_gennodejs motion_planning_generate_messages_nodejs)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS motion_planning_generate_messages_nodejs)

### Section generating for lang: genpy
### Generating Messages
_generate_msg_py(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning
)
_generate_msg_py(motion_planning
  "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg"
  "${MSG_I_FLAGS}"
  "/opt/ros/melodic/share/shape_msgs/cmake/../msg/SolidPrimitive.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Mesh.msg;/opt/ros/melodic/share/moveit_msgs/cmake/../msg/CollisionObject.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/Plane.msg;/opt/ros/melodic/share/shape_msgs/cmake/../msg/MeshTriangle.msg;/opt/ros/melodic/share/object_recognition_msgs/cmake/../msg/ObjectType.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Pose.msg;/opt/ros/melodic/share/std_msgs/cmake/../msg/Header.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Quaternion.msg;/opt/ros/melodic/share/geometry_msgs/cmake/../msg/Point.msg"
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning
)

### Generating Services

### Generating Module File
_generate_module_py(motion_planning
  ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning
  "${ALL_GEN_OUTPUT_FILES_py}"
)

add_custom_target(motion_planning_generate_messages_py
  DEPENDS ${ALL_GEN_OUTPUT_FILES_py}
)
add_dependencies(motion_planning_generate_messages motion_planning_generate_messages_py)

# add dependencies to all check dependencies targets
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Poses.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_py _motion_planning_generate_messages_check_deps_${_filename})
get_filename_component(_filename "/home/camilo/catkin_ws/src/modrob_motion_planning/motion_planning/msg/Environment.msg" NAME_WE)
add_dependencies(motion_planning_generate_messages_py _motion_planning_generate_messages_check_deps_${_filename})

# target for backward compatibility
add_custom_target(motion_planning_genpy)
add_dependencies(motion_planning_genpy motion_planning_generate_messages_py)

# register target for catkin_package(EXPORTED_TARGETS)
list(APPEND ${PROJECT_NAME}_EXPORTED_TARGETS motion_planning_generate_messages_py)



if(gencpp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/motion_planning)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gencpp_INSTALL_DIR}/motion_planning
    DESTINATION ${gencpp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_cpp)
  add_dependencies(motion_planning_generate_messages_cpp std_msgs_generate_messages_cpp)
endif()
if(TARGET geometry_msgs_generate_messages_cpp)
  add_dependencies(motion_planning_generate_messages_cpp geometry_msgs_generate_messages_cpp)
endif()
if(TARGET moveit_msgs_generate_messages_cpp)
  add_dependencies(motion_planning_generate_messages_cpp moveit_msgs_generate_messages_cpp)
endif()

if(geneus_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/motion_planning)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${geneus_INSTALL_DIR}/motion_planning
    DESTINATION ${geneus_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_eus)
  add_dependencies(motion_planning_generate_messages_eus std_msgs_generate_messages_eus)
endif()
if(TARGET geometry_msgs_generate_messages_eus)
  add_dependencies(motion_planning_generate_messages_eus geometry_msgs_generate_messages_eus)
endif()
if(TARGET moveit_msgs_generate_messages_eus)
  add_dependencies(motion_planning_generate_messages_eus moveit_msgs_generate_messages_eus)
endif()

if(genlisp_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/motion_planning)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genlisp_INSTALL_DIR}/motion_planning
    DESTINATION ${genlisp_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_lisp)
  add_dependencies(motion_planning_generate_messages_lisp std_msgs_generate_messages_lisp)
endif()
if(TARGET geometry_msgs_generate_messages_lisp)
  add_dependencies(motion_planning_generate_messages_lisp geometry_msgs_generate_messages_lisp)
endif()
if(TARGET moveit_msgs_generate_messages_lisp)
  add_dependencies(motion_planning_generate_messages_lisp moveit_msgs_generate_messages_lisp)
endif()

if(gennodejs_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/motion_planning)
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${gennodejs_INSTALL_DIR}/motion_planning
    DESTINATION ${gennodejs_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_nodejs)
  add_dependencies(motion_planning_generate_messages_nodejs std_msgs_generate_messages_nodejs)
endif()
if(TARGET geometry_msgs_generate_messages_nodejs)
  add_dependencies(motion_planning_generate_messages_nodejs geometry_msgs_generate_messages_nodejs)
endif()
if(TARGET moveit_msgs_generate_messages_nodejs)
  add_dependencies(motion_planning_generate_messages_nodejs moveit_msgs_generate_messages_nodejs)
endif()

if(genpy_INSTALL_DIR AND EXISTS ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning)
  install(CODE "execute_process(COMMAND \"/usr/bin/python2\" -m compileall \"${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning\")")
  # install generated code
  install(
    DIRECTORY ${CATKIN_DEVEL_PREFIX}/${genpy_INSTALL_DIR}/motion_planning
    DESTINATION ${genpy_INSTALL_DIR}
  )
endif()
if(TARGET std_msgs_generate_messages_py)
  add_dependencies(motion_planning_generate_messages_py std_msgs_generate_messages_py)
endif()
if(TARGET geometry_msgs_generate_messages_py)
  add_dependencies(motion_planning_generate_messages_py geometry_msgs_generate_messages_py)
endif()
if(TARGET moveit_msgs_generate_messages_py)
  add_dependencies(motion_planning_generate_messages_py moveit_msgs_generate_messages_py)
endif()
