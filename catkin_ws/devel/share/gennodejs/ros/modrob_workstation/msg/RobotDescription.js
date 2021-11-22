// Auto-generated. Do not edit!

// (in-package modrob_workstation.msg)


"use strict";

const _serializer = _ros_msg_utils.Serialize;
const _arraySerializer = _serializer.Array;
const _deserializer = _ros_msg_utils.Deserialize;
const _arrayDeserializer = _deserializer.Array;
const _finder = _ros_msg_utils.Find;
const _getByteLength = _ros_msg_utils.getByteLength;
let JointDescription = require('./JointDescription.js');
let LinkDescription = require('./LinkDescription.js');
let std_msgs = _finder('std_msgs');

//-----------------------------------------------------------

class RobotDescription {
  constructor(initObj={}) {
    if (initObj === null) {
      // initObj === null is a special case for deserialization where we don't initialize fields
      this.header = null;
      this.name = null;
      this.joints = null;
      this.links = null;
    }
    else {
      if (initObj.hasOwnProperty('header')) {
        this.header = initObj.header
      }
      else {
        this.header = new std_msgs.msg.Header();
      }
      if (initObj.hasOwnProperty('name')) {
        this.name = initObj.name
      }
      else {
        this.name = '';
      }
      if (initObj.hasOwnProperty('joints')) {
        this.joints = initObj.joints
      }
      else {
        this.joints = [];
      }
      if (initObj.hasOwnProperty('links')) {
        this.links = initObj.links
      }
      else {
        this.links = [];
      }
    }
  }

  static serialize(obj, buffer, bufferOffset) {
    // Serializes a message object of type RobotDescription
    // Serialize message field [header]
    bufferOffset = std_msgs.msg.Header.serialize(obj.header, buffer, bufferOffset);
    // Serialize message field [name]
    bufferOffset = _serializer.string(obj.name, buffer, bufferOffset);
    // Serialize message field [joints]
    // Serialize the length for message field [joints]
    bufferOffset = _serializer.uint32(obj.joints.length, buffer, bufferOffset);
    obj.joints.forEach((val) => {
      bufferOffset = JointDescription.serialize(val, buffer, bufferOffset);
    });
    // Serialize message field [links]
    // Serialize the length for message field [links]
    bufferOffset = _serializer.uint32(obj.links.length, buffer, bufferOffset);
    obj.links.forEach((val) => {
      bufferOffset = LinkDescription.serialize(val, buffer, bufferOffset);
    });
    return bufferOffset;
  }

  static deserialize(buffer, bufferOffset=[0]) {
    //deserializes a message object of type RobotDescription
    let len;
    let data = new RobotDescription(null);
    // Deserialize message field [header]
    data.header = std_msgs.msg.Header.deserialize(buffer, bufferOffset);
    // Deserialize message field [name]
    data.name = _deserializer.string(buffer, bufferOffset);
    // Deserialize message field [joints]
    // Deserialize array length for message field [joints]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.joints = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.joints[i] = JointDescription.deserialize(buffer, bufferOffset)
    }
    // Deserialize message field [links]
    // Deserialize array length for message field [links]
    len = _deserializer.uint32(buffer, bufferOffset);
    data.links = new Array(len);
    for (let i = 0; i < len; ++i) {
      data.links[i] = LinkDescription.deserialize(buffer, bufferOffset)
    }
    return data;
  }

  static getMessageSize(object) {
    let length = 0;
    length += std_msgs.msg.Header.getMessageSize(object.header);
    length += object.name.length;
    object.joints.forEach((val) => {
      length += JointDescription.getMessageSize(val);
    });
    object.links.forEach((val) => {
      length += LinkDescription.getMessageSize(val);
    });
    return length + 12;
  }

  static datatype() {
    // Returns string type for a message object
    return 'modrob_workstation/RobotDescription';
  }

  static md5sum() {
    //Returns md5sum for a message object
    return '89e5f5879abfbdfe2f33ee583aee272f';
  }

  static messageDefinition() {
    // Returns full string definition for message
    return `
    Header header
    string name
    JointDescription[] joints
    LinkDescription[] links
    
    
    
    ================================================================================
    MSG: std_msgs/Header
    # Standard metadata for higher-level stamped data types.
    # This is generally used to communicate timestamped data 
    # in a particular coordinate frame.
    # 
    # sequence ID: consecutively increasing ID 
    uint32 seq
    #Two-integer timestamp that is expressed as:
    # * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')
    # * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')
    # time-handling sugar is provided by the client library
    time stamp
    #Frame this data is associated with
    string frame_id
    
    ================================================================================
    MSG: modrob_workstation/JointDescription
    #Documentation on each attribute, see: http://wiki.ros.org/urdf/XML/joint
    
    string name
    string type
    
    #origin
    float64 origin_x
    float64 origin_y
    float64 origin_z
    
    float64 origin_r
    float64 origin_p
    float64 origin_yy
    
    #parent/child links
    string parent_link
    string child_link
    
    #axis
    float64 axis_x
    float64 axis_y
    float64 axis_z
    
    #calibration, not needed
    
    #dynamics
    float64 damping
    float64 friction
    
    #limit
    float64 lower
    float64 upper
    float64 effort
    float64 velocity
    
    #mimic, not needed
    
    #safety_controller
    float64 soft_lower_limit
    float64 soft_upper_limit
    float64 k_position
    float64 k_velocity
    
    
    ================================================================================
    MSG: modrob_workstation/LinkDescription
    #See: http://wiki.ros.org/urdf/XML/link
    
    
    string name
    
    #inertial
    float64 origin_x
    float64 origin_y
    float64 origin_z
    
    float64 origin_r
    float64 origin_p
    float64 origin_yy
    
    float64 mass
    
    float64 intertia_ixx
    float64 intertia_ixy
    float64 intertia_ixz
    float64 intertia_iyy
    float64 intertia_iyz
    float64 intertia_izz
    
    #visual
    LinkVisual[] link_visual           #List of visual elements
    
    #collision
    LinkCollision[] link_collision     #List of collision elements
    
    ================================================================================
    MSG: modrob_workstation/LinkVisual
    #Documentation, see: http://wiki.ros.org/urdf/XML/link
    
    string name
    
    #origin
    float64 origin_x
    float64 origin_y
    float64 origin_z
    
    float64 origin_r
    float64 origin_p
    float64 origin_yy
    
    #geometry
    string type     #box, cylinder, sphere
    float64 arg1    # depending on the chosen type either x or radius
    float64 arg2    # depending on the chosen type either y or length
    float64 arg3    # for boxes: z
    
    #material
    string color_name
    float64 color_r #red
    float64 color_g #green
    float64 color_b #blue
    float64 color_a #transparancy
    
    string texture
    ================================================================================
    MSG: modrob_workstation/LinkCollision
    #Documentation, see: http://wiki.ros.org/urdf/XML/link
    
    string name
    
    #origin
    float64 origin_x
    float64 origin_y
    float64 origin_z
    
    float64 origin_r
    float64 origin_p
    float64 origin_yy
    
    #geometry
    string type     #box, cylinder, sphere
    float64 arg1    # depending on the chosen type either x or radius
    float64 arg2    # depending on the chosen type either y or length
    float64 arg3    # for boxes: z
    `;
  }

  static Resolve(msg) {
    // deep-construct a valid message object instance of whatever was passed in
    if (typeof msg !== 'object' || msg === null) {
      msg = {};
    }
    const resolved = new RobotDescription(null);
    if (msg.header !== undefined) {
      resolved.header = std_msgs.msg.Header.Resolve(msg.header)
    }
    else {
      resolved.header = new std_msgs.msg.Header()
    }

    if (msg.name !== undefined) {
      resolved.name = msg.name;
    }
    else {
      resolved.name = ''
    }

    if (msg.joints !== undefined) {
      resolved.joints = new Array(msg.joints.length);
      for (let i = 0; i < resolved.joints.length; ++i) {
        resolved.joints[i] = JointDescription.Resolve(msg.joints[i]);
      }
    }
    else {
      resolved.joints = []
    }

    if (msg.links !== undefined) {
      resolved.links = new Array(msg.links.length);
      for (let i = 0; i < resolved.links.length; ++i) {
        resolved.links[i] = LinkDescription.Resolve(msg.links[i]);
      }
    }
    else {
      resolved.links = []
    }

    return resolved;
    }
};

module.exports = RobotDescription;
