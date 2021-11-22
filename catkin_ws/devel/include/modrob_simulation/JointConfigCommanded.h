// Generated by gencpp from file modrob_simulation/JointConfigCommanded.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_JOINTCONFIGCOMMANDED_H
#define MODROB_SIMULATION_MESSAGE_JOINTCONFIGCOMMANDED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace modrob_simulation
{
template <class ContainerAllocator>
struct JointConfigCommanded_
{
  typedef JointConfigCommanded_<ContainerAllocator> Type;

  JointConfigCommanded_()
    : joint_angle(0.0)
    , joint_velocity(0.0)
    , joint_acceleration(0.0)
    , joint_torque(0.0)  {
    }
  JointConfigCommanded_(const ContainerAllocator& _alloc)
    : joint_angle(0.0)
    , joint_velocity(0.0)
    , joint_acceleration(0.0)
    , joint_torque(0.0)  {
  (void)_alloc;
    }



   typedef double _joint_angle_type;
  _joint_angle_type joint_angle;

   typedef double _joint_velocity_type;
  _joint_velocity_type joint_velocity;

   typedef double _joint_acceleration_type;
  _joint_acceleration_type joint_acceleration;

   typedef double _joint_torque_type;
  _joint_torque_type joint_torque;





  typedef boost::shared_ptr< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> const> ConstPtr;

}; // struct JointConfigCommanded_

typedef ::modrob_simulation::JointConfigCommanded_<std::allocator<void> > JointConfigCommanded;

typedef boost::shared_ptr< ::modrob_simulation::JointConfigCommanded > JointConfigCommandedPtr;
typedef boost::shared_ptr< ::modrob_simulation::JointConfigCommanded const> JointConfigCommandedConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator1> & lhs, const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator2> & rhs)
{
  return lhs.joint_angle == rhs.joint_angle &&
    lhs.joint_velocity == rhs.joint_velocity &&
    lhs.joint_acceleration == rhs.joint_acceleration &&
    lhs.joint_torque == rhs.joint_torque;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator1> & lhs, const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9860cd40cd660e9e43fa6401771d80ff";
  }

  static const char* value(const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9860cd40cd660e9eULL;
  static const uint64_t static_value2 = 0x43fa6401771d80ffULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/JointConfigCommanded";
  }

  static const char* value(const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# This message describes a joint movement\n"
"float64 joint_angle\n"
"float64 joint_velocity\n"
"float64 joint_acceleration\n"
"float64 joint_torque\n"
;
  }

  static const char* value(const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.joint_angle);
      stream.next(m.joint_velocity);
      stream.next(m.joint_acceleration);
      stream.next(m.joint_torque);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointConfigCommanded_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_simulation::JointConfigCommanded_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::JointConfigCommanded_<ContainerAllocator>& v)
  {
    s << indent << "joint_angle: ";
    Printer<double>::stream(s, indent + "  ", v.joint_angle);
    s << indent << "joint_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.joint_velocity);
    s << indent << "joint_acceleration: ";
    Printer<double>::stream(s, indent + "  ", v.joint_acceleration);
    s << indent << "joint_torque: ";
    Printer<double>::stream(s, indent + "  ", v.joint_torque);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_JOINTCONFIGCOMMANDED_H
