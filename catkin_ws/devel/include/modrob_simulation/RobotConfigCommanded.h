// Generated by gencpp from file modrob_simulation/RobotConfigCommanded.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_ROBOTCONFIGCOMMANDED_H
#define MODROB_SIMULATION_MESSAGE_ROBOTCONFIGCOMMANDED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <modrob_simulation/JointConfigCommanded.h>

namespace modrob_simulation
{
template <class ContainerAllocator>
struct RobotConfigCommanded_
{
  typedef RobotConfigCommanded_<ContainerAllocator> Type;

  RobotConfigCommanded_()
    : joint_config_commanded()
    , tool_activation(false)  {
    }
  RobotConfigCommanded_(const ContainerAllocator& _alloc)
    : joint_config_commanded(_alloc)
    , tool_activation(false)  {
  (void)_alloc;
    }



   typedef std::vector< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >::other >  _joint_config_commanded_type;
  _joint_config_commanded_type joint_config_commanded;

   typedef uint8_t _tool_activation_type;
  _tool_activation_type tool_activation;





  typedef boost::shared_ptr< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> const> ConstPtr;

}; // struct RobotConfigCommanded_

typedef ::modrob_simulation::RobotConfigCommanded_<std::allocator<void> > RobotConfigCommanded;

typedef boost::shared_ptr< ::modrob_simulation::RobotConfigCommanded > RobotConfigCommandedPtr;
typedef boost::shared_ptr< ::modrob_simulation::RobotConfigCommanded const> RobotConfigCommandedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator2> & rhs)
{
  return lhs.joint_config_commanded == rhs.joint_config_commanded &&
    lhs.tool_activation == rhs.tool_activation;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "317b6847d28ab67b3eb3e1fdec1c5d27";
  }

  static const char* value(const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x317b6847d28ab67bULL;
  static const uint64_t static_value2 = 0x3eb3e1fdec1c5d27ULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/RobotConfigCommanded";
  }

  static const char* value(const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message describes a robot arm movement\n"
"# Array indices from 0 to max match joints from base joint to last joint\n"
"JointConfigCommanded[] joint_config_commanded\n"
"bool tool_activation\n"
"\n"
"================================================================================\n"
"MSG: modrob_simulation/JointConfigCommanded\n"
"# This message describes a joint movement\n"
"float64 joint_angle\n"
"float64 joint_velocity\n"
"float64 joint_acceleration\n"
"float64 joint_torque\n"
;
  }

  static const char* value(const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_config_commanded);
      stream.next(m.tool_activation);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotConfigCommanded_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::RobotConfigCommanded_<ContainerAllocator>& v)
  {
    s << indent << "joint_config_commanded[]" << std::endl;
    for (size_t i = 0; i < v.joint_config_commanded.size(); ++i)
    {
      s << indent << "  joint_config_commanded[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >::stream(s, indent + "    ", v.joint_config_commanded[i]);
    }
    s << indent << "tool_activation: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.tool_activation);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_ROBOTCONFIGCOMMANDED_H
