// Generated by gencpp from file modrob_simulation/RobotConfigMeasured.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_ROBOTCONFIGMEASURED_H
#define MODROB_SIMULATION_MESSAGE_ROBOTCONFIGMEASURED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <modrob_simulation/JointConfigMeasured.h>

namespace modrob_simulation
{
template <class ContainerAllocator>
struct RobotConfigMeasured_
{
  typedef RobotConfigMeasured_<ContainerAllocator> Type;

  RobotConfigMeasured_()
    : joint_config_measured()  {
    }
  RobotConfigMeasured_(const ContainerAllocator& _alloc)
    : joint_config_measured(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector< ::modrob_simulation::JointConfigMeasured_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::JointConfigMeasured_<ContainerAllocator> >::other >  _joint_config_measured_type;
  _joint_config_measured_type joint_config_measured;





  typedef boost::shared_ptr< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> const> ConstPtr;

}; // struct RobotConfigMeasured_

typedef ::modrob_simulation::RobotConfigMeasured_<std::allocator<void> > RobotConfigMeasured;

typedef boost::shared_ptr< ::modrob_simulation::RobotConfigMeasured > RobotConfigMeasuredPtr;
typedef boost::shared_ptr< ::modrob_simulation::RobotConfigMeasured const> RobotConfigMeasuredConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator2> & rhs)
{
  return lhs.joint_config_measured == rhs.joint_config_measured;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e893c96cbac958ab455a51b048ce201c";
  }

  static const char* value(const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe893c96cbac958abULL;
  static const uint64_t static_value2 = 0x455a51b048ce201cULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/RobotConfigMeasured";
  }

  static const char* value(const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# List of joint configurations\n"
"# Array indices from 0 to max match joints from base joint to last joint\n"
"JointConfigMeasured[] joint_config_measured\n"
"\n"
"================================================================================\n"
"MSG: modrob_simulation/JointConfigMeasured\n"
"# This message describes a joint movement\n"
"\n"
"# The angle the joint is currently at\n"
"float64 joint_angle\n"
"\n"
"# The current velocity of the joint\n"
"float64 joint_velocity\n"
"\n"
"# The acceleration the joint currently experiences\n"
"float64 joint_acceleration\n"
"\n"
"# The torque the joint is delivering\n"
"float64 joint_torque\n"
"\n"
"# The current temperature of the joint\n"
"float64 joint_temperature\n"
;
  }

  static const char* value(const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_config_measured);
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
struct Printer< ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::RobotConfigMeasured_<ContainerAllocator>& v)
  {
    s << indent << "joint_config_measured[]" << std::endl;
    for (size_t i = 0; i < v.joint_config_measured.size(); ++i)
    {
      s << indent << "  joint_config_measured[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::JointConfigMeasured_<ContainerAllocator> >::stream(s, indent + "    ", v.joint_config_measured[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_ROBOTCONFIGMEASURED_H