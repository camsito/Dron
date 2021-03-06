// Generated by gencpp from file modrob_workstation/RobotConfigMeasured.msg
// DO NOT EDIT!


#ifndef MODROB_WORKSTATION_MESSAGE_ROBOTCONFIGMEASURED_H
#define MODROB_WORKSTATION_MESSAGE_ROBOTCONFIGMEASURED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <modrob_workstation/JointConfigMeasured.h>

namespace modrob_workstation
{
template <class ContainerAllocator>
struct RobotConfigMeasured_
{
  typedef RobotConfigMeasured_<ContainerAllocator> Type;

  RobotConfigMeasured_()
    : joint_config_measured()
    , measured_robot_state(0)
    , tool_activation(false)  {
    }
  RobotConfigMeasured_(const ContainerAllocator& _alloc)
    : joint_config_measured(_alloc)
    , measured_robot_state(0)
    , tool_activation(false)  {
  (void)_alloc;
    }



   typedef std::vector< ::modrob_workstation::JointConfigMeasured_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_workstation::JointConfigMeasured_<ContainerAllocator> >::other >  _joint_config_measured_type;
  _joint_config_measured_type joint_config_measured;

   typedef uint8_t _measured_robot_state_type;
  _measured_robot_state_type measured_robot_state;

   typedef uint8_t _tool_activation_type;
  _tool_activation_type tool_activation;





  typedef boost::shared_ptr< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> const> ConstPtr;

}; // struct RobotConfigMeasured_

typedef ::modrob_workstation::RobotConfigMeasured_<std::allocator<void> > RobotConfigMeasured;

typedef boost::shared_ptr< ::modrob_workstation::RobotConfigMeasured > RobotConfigMeasuredPtr;
typedef boost::shared_ptr< ::modrob_workstation::RobotConfigMeasured const> RobotConfigMeasuredConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator1> & lhs, const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator2> & rhs)
{
  return lhs.joint_config_measured == rhs.joint_config_measured &&
    lhs.measured_robot_state == rhs.measured_robot_state &&
    lhs.tool_activation == rhs.tool_activation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator1> & lhs, const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_workstation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "63d934dedb04d4a03a4dbce708629c90";
  }

  static const char* value(const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x63d934dedb04d4a0ULL;
  static const uint64_t static_value2 = 0x3a4dbce708629c90ULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_workstation/RobotConfigMeasured";
  }

  static const char* value(const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# List of joint configurations\n"
"# Array indices from 0 to max match joints from base joint to last joint\n"
"JointConfigMeasured[] joint_config_measured\n"
"uint8 measured_robot_state\n"
"bool tool_activation\n"
"\n"
"================================================================================\n"
"MSG: modrob_workstation/JointConfigMeasured\n"
"# This message describes a joint movement\n"
"float64 joint_angle\n"
"float64 joint_velocity\n"
"float64 joint_acceleration\n"
"float64 joint_torque\n"
"float64 joint_temperature\n"
;
  }

  static const char* value(const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_config_measured);
      stream.next(m.measured_robot_state);
      stream.next(m.tool_activation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotConfigMeasured_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_workstation::RobotConfigMeasured_<ContainerAllocator>& v)
  {
    s << indent << "joint_config_measured[]" << std::endl;
    for (size_t i = 0; i < v.joint_config_measured.size(); ++i)
    {
      s << indent << "  joint_config_measured[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_workstation::JointConfigMeasured_<ContainerAllocator> >::stream(s, indent + "    ", v.joint_config_measured[i]);
    }
    s << indent << "measured_robot_state: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.measured_robot_state);
    s << indent << "tool_activation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tool_activation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_WORKSTATION_MESSAGE_ROBOTCONFIGMEASURED_H
