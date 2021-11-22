# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from modrob_workstation/JointConfigCommanded.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class JointConfigCommanded(genpy.Message):
  _md5sum = "9860cd40cd660e9e43fa6401771d80ff"
  _type = "modrob_workstation/JointConfigCommanded"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# This message describes a joint movement
float64 joint_angle
float64 joint_velocity
float64 joint_acceleration
float64 joint_torque"""
  __slots__ = ['joint_angle','joint_velocity','joint_acceleration','joint_torque']
  _slot_types = ['float64','float64','float64','float64']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       joint_angle,joint_velocity,joint_acceleration,joint_torque

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(JointConfigCommanded, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.joint_angle is None:
        self.joint_angle = 0.
      if self.joint_velocity is None:
        self.joint_velocity = 0.
      if self.joint_acceleration is None:
        self.joint_acceleration = 0.
      if self.joint_torque is None:
        self.joint_torque = 0.
    else:
      self.joint_angle = 0.
      self.joint_velocity = 0.
      self.joint_acceleration = 0.
      self.joint_torque = 0.

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
      _x = self
      buff.write(_get_struct_4d().pack(_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque))
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
      end = 0
      _x = self
      start = end
      end += 32
      (_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque,) = _get_struct_4d().unpack(str[start:end])
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
      _x = self
      buff.write(_get_struct_4d().pack(_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque))
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
      end = 0
      _x = self
      start = end
      end += 32
      (_x.joint_angle, _x.joint_velocity, _x.joint_acceleration, _x.joint_torque,) = _get_struct_4d().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4d = None
def _get_struct_4d():
    global _struct_4d
    if _struct_4d is None:
        _struct_4d = struct.Struct("<4d")
    return _struct_4d
