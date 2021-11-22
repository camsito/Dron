// Generated by gencpp from file motion_planning/Poses.msg
// DO NOT EDIT!


#ifndef MOTION_PLANNING_MESSAGE_POSES_H
#define MOTION_PLANNING_MESSAGE_POSES_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <geometry_msgs/Pose.h>
#include <geometry_msgs/Pose.h>

namespace motion_planning
{
template <class ContainerAllocator>
struct Poses_
{
  typedef Poses_<ContainerAllocator> Type;

  Poses_()
    : pose_pick()
    , pose_place()  {
    }
  Poses_(const ContainerAllocator& _alloc)
    : pose_pick(_alloc)
    , pose_place(_alloc)  {
  (void)_alloc;
    }



   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_pick_type;
  _pose_pick_type pose_pick;

   typedef  ::geometry_msgs::Pose_<ContainerAllocator>  _pose_place_type;
  _pose_place_type pose_place;





  typedef boost::shared_ptr< ::motion_planning::Poses_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::motion_planning::Poses_<ContainerAllocator> const> ConstPtr;

}; // struct Poses_

typedef ::motion_planning::Poses_<std::allocator<void> > Poses;

typedef boost::shared_ptr< ::motion_planning::Poses > PosesPtr;
typedef boost::shared_ptr< ::motion_planning::Poses const> PosesConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::motion_planning::Poses_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::motion_planning::Poses_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::motion_planning::Poses_<ContainerAllocator1> & lhs, const ::motion_planning::Poses_<ContainerAllocator2> & rhs)
{
  return lhs.pose_pick == rhs.pose_pick &&
    lhs.pose_place == rhs.pose_place;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::motion_planning::Poses_<ContainerAllocator1> & lhs, const ::motion_planning::Poses_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace motion_planning

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::motion_planning::Poses_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::motion_planning::Poses_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motion_planning::Poses_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::motion_planning::Poses_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_planning::Poses_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::motion_planning::Poses_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::motion_planning::Poses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "164987af56d708ea6d17beb94fcb0d2c";
  }

  static const char* value(const ::motion_planning::Poses_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x164987af56d708eaULL;
  static const uint64_t static_value2 = 0x6d17beb94fcb0d2cULL;
};

template<class ContainerAllocator>
struct DataType< ::motion_planning::Poses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "motion_planning/Poses";
  }

  static const char* value(const ::motion_planning::Poses_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::motion_planning::Poses_<ContainerAllocator> >
{
  static const char* value()
  {
    return "geometry_msgs/Pose pose_pick\n"
"geometry_msgs/Pose pose_place\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Pose\n"
"# A representation of pose in free space, composed of position and orientation. \n"
"Point position\n"
"Quaternion orientation\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Point\n"
"# This contains the position of a point in free space\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"\n"
"================================================================================\n"
"MSG: geometry_msgs/Quaternion\n"
"# This represents an orientation in free space in quaternion form.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
"float64 w\n"
;
  }

  static const char* value(const ::motion_planning::Poses_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::motion_planning::Poses_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.pose_pick);
      stream.next(m.pose_place);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct Poses_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::motion_planning::Poses_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::motion_planning::Poses_<ContainerAllocator>& v)
  {
    s << indent << "pose_pick: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_pick);
    s << indent << "pose_place: ";
    s << std::endl;
    Printer< ::geometry_msgs::Pose_<ContainerAllocator> >::stream(s, indent + "  ", v.pose_place);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MOTION_PLANNING_MESSAGE_POSES_H