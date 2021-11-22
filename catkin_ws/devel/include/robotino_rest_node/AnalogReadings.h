// Generated by gencpp from file robotino_rest_node/AnalogReadings.msg
// DO NOT EDIT!


#ifndef ROBOTINO_REST_NODE_MESSAGE_ANALOGREADINGS_H
#define ROBOTINO_REST_NODE_MESSAGE_ANALOGREADINGS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robotino_rest_node
{
template <class ContainerAllocator>
struct AnalogReadings_
{
  typedef AnalogReadings_<ContainerAllocator> Type;

  AnalogReadings_()
    : stamp()
    , values()  {
    }
  AnalogReadings_(const ContainerAllocator& _alloc)
    : stamp()
    , values(_alloc)  {
  (void)_alloc;
    }



   typedef ros::Time _stamp_type;
  _stamp_type stamp;

   typedef std::vector<float, typename ContainerAllocator::template rebind<float>::other >  _values_type;
  _values_type values;





  typedef boost::shared_ptr< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> const> ConstPtr;

}; // struct AnalogReadings_

typedef ::robotino_rest_node::AnalogReadings_<std::allocator<void> > AnalogReadings;

typedef boost::shared_ptr< ::robotino_rest_node::AnalogReadings > AnalogReadingsPtr;
typedef boost::shared_ptr< ::robotino_rest_node::AnalogReadings const> AnalogReadingsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robotino_rest_node::AnalogReadings_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::robotino_rest_node::AnalogReadings_<ContainerAllocator1> & lhs, const ::robotino_rest_node::AnalogReadings_<ContainerAllocator2> & rhs)
{
  return lhs.stamp == rhs.stamp &&
    lhs.values == rhs.values;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::robotino_rest_node::AnalogReadings_<ContainerAllocator1> & lhs, const ::robotino_rest_node::AnalogReadings_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace robotino_rest_node

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b18badc07ef45644f603212cc1654669";
  }

  static const char* value(const ::robotino_rest_node::AnalogReadings_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb18badc07ef45644ULL;
  static const uint64_t static_value2 = 0xf603212cc1654669ULL;
};

template<class ContainerAllocator>
struct DataType< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robotino_rest_node/AnalogReadings";
  }

  static const char* value(const ::robotino_rest_node::AnalogReadings_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
{
  static const char* value()
  {
    return "time stamp\n"
"float32[] values\n"
;
  }

  static const char* value(const ::robotino_rest_node::AnalogReadings_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.stamp);
      stream.next(m.values);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct AnalogReadings_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robotino_rest_node::AnalogReadings_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robotino_rest_node::AnalogReadings_<ContainerAllocator>& v)
  {
    s << indent << "stamp: ";
    Printer<ros::Time>::stream(s, indent + "  ", v.stamp);
    s << indent << "values[]" << std::endl;
    for (size_t i = 0; i < v.values.size(); ++i)
    {
      s << indent << "  values[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.values[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOTINO_REST_NODE_MESSAGE_ANALOGREADINGS_H
