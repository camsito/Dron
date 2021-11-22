# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from modrob_simulation/RobotConfigMeasured.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct

import modrob_simulation.msg

class RobotConfigMeasured(genpy.Message):
  _md5sum = "e893c96cbac958ab455a51b048ce201c"
  _type = "modrob_simulation/RobotConfigMeasured"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# List of joint configurations
# Array indices from 0 to max match joints from base joint to last joint
JointConfigMeasured[] joint_config_measured

================================================================================
MSG: modrob_simulation/JointConfigMeasured
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
float64 joint_temperature"""
  __slots__ = ['joint_config_measured']
  _slot_types = ['modrob_simulation/JointConfigMeasured[]']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       joint_config_measured

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(RobotConfigMeasured, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.joint_config_measured is None:
        self.joint_config_measured = []
    else:
      self.joint_config_measured = []

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      length = len(self.joint_config_measured)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_config_measured:
        _x = val1
        buff.write(_get_struct_5d().pack(_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque, _x.joint_temperature))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.joint_config_measured is None:
        self.joint_config_measured = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_config_measured = []
      for i in range(0, length):
        val1 = modrob_simulation.msg.JointConfigMeasured()
        _x = val1
        start = end
        end += 40
        (_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque, _x.joint_temperature,) = _get_struct_5d().unpack(str[start:end])
        self.joint_config_measured.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      length = len(self.joint_config_measured)
      buff.write(_struct_I.pack(length))
      for val1 in self.joint_config_measured:
        _x = val1
        buff.write(_get_struct_5d().pack(_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque, _x.joint_temperature))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    if python3:
      codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      if self.joint_config_measured is None:
        self.joint_config_measured = None
      end = 0
      start = end
      end += 4
      (length,) = _struct_I.unpack(str[start:end])
      self.joint_config_measured = []
      for i in range(0, length):
        val1 = modrob_simulation.msg.JointConfigMeasured()
        _x = val1
        start = end
        end += 40
        (_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque, _x.joint_temperature,) = _get_struct_5d().unpack(str[start:end])
        self.joint_config_measured.append(val1)
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_5d = None
def _get_struct_5d():
    global _struct_5d
    if _struct_5d is None:
        _struct_5d = struct.Struct("<5d")
    return _struct_5d
