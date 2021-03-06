// Generated by gencpp from file modrob_simulation/RobotDescription.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_ROBOTDESCRIPTION_H
#define MODROB_SIMULATION_MESSAGE_ROBOTDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>
#include <modrob_simulation/JointDescription.h>
#include <modrob_simulation/LinkDescription.h>
#include <geometry_msgs/Vector3.h>

namespace modrob_simulation
{
template <class ContainerAllocator>
struct RobotDescription_
{
  typedef RobotDescription_<ContainerAllocator> Type;

  RobotDescription_()
    : header()
    , name()
    , joints()
    , links()
    , base_pos()  {
    }
  RobotDescription_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , name(_alloc)
    , joints(_alloc)
    , links(_alloc)
    , base_pos(_alloc)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::vector< ::modrob_simulation::JointDescription_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::JointDescription_<ContainerAllocator> >::other >  _joints_type;
  _joints_type joints;

   typedef std::vector< ::modrob_simulation::LinkDescription_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::LinkDescription_<ContainerAllocator> >::other >  _links_type;
  _links_type links;

   typedef  ::geometry_msgs::Vector3_<ContainerAllocator>  _base_pos_type;
  _base_pos_type base_pos;





  typedef boost::shared_ptr< ::modrob_simulation::RobotDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::RobotDescription_<ContainerAllocator> const> ConstPtr;

}; // struct RobotDescription_

typedef ::modrob_simulation::RobotDescription_<std::allocator<void> > RobotDescription;

typedef boost::shared_ptr< ::modrob_simulation::RobotDescription > RobotDescriptionPtr;
typedef boost::shared_ptr< ::modrob_simulation::RobotDescription const> RobotDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::RobotDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::RobotDescription_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::RobotDescription_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotDescription_<ContainerAllocator2> & rhs)
{
  return lhs.header == rhs.header &&
    lhs.name == rhs.name &&
    lhs.joints == rhs.joints &&
    lhs.links == rhs.links &&
    lhs.base_pos == rhs.base_pos;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::RobotDescription_<ContainerAllocator1> & lhs, const ::modrob_simulation::RobotDescription_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::RobotDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::RobotDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::RobotDescription_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b436ad26e4c0693d458d531e79ef7f82";
  }

  static const char* value(const ::modrob_simulation::RobotDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb436ad26e4c0693dULL;
  static const uint64_t static_value2 = 0x458d531e79ef7f82ULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/RobotDescription";
  }

  static const char* value(const ::modrob_simulation::RobotDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n"
"string name\n"
"JointDescription[] joints\n"
"LinkDescription[] links\n"
"\n"
"# Base position\n"
"geometry_msgs/Vector3 base_pos\n"
"\n"
"================================================================================\n"
"MSG: std_msgs/Header\n"
"# Standard metadata for higher-level stamped data types.\n"
"# This is generally used to communicate timestamped data \n"
"# in a particular coordinate frame.\n"
"# \n"
"# sequence ID: consecutively increasing ID \n"
"uint32 seq\n"
"#Two-integer timestamp that is expressed as:\n"
"# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n"
"# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n"
"# time-handling sugar is provided by the client library\n"
"time stamp\n"
"#Frame this data is associated with\n"
"string frame_id\n"
"\n"
"================================================================================\n"
"MSG: modrob_simulation/JointDescription\n"
"#Documentation on each attribute, see: http://wiki.ros.org/urdf/XML/joint\n"
"\n"
"string name\n"
"string type\n"
"\n"
"#origin\n"
"float64 origin_x\n"
"float64 origin_y\n"
"float64 origin_z\n"
"\n"
"float64 origin_r\n"
"float64 origin_p\n"
"float64 origin_yy\n"
"\n"
"#parent/child links\n"
"string parent_link\n"
"string child_link\n"
"\n"
"#axis\n"
"float64 axis_x\n"
"float64 axis_y\n"
"float64 axis_z\n"
"\n"
"#calibration, not needed\n"
"\n"
"#dynamics\n"
"float64 damping\n"
"float64 friction\n"
"\n"
"#limit\n"
"float64 lower\n"
"float64 upper\n"
"float64 effort\n"
"float64 velocity\n"
"\n"
"#motor\n"
"float64 gear_ratio\n"
"\n"
"#mimic, not needed\n"
"\n"
"#safety_controller\n"
"float64 soft_lower_limit\n"
"float64 soft_upper_limit\n"
"float64 k_position\n"
"float64 k_velocity\n"
"\n"
"\n"
"================================================================================\n"
"MSG: modrob_simulation/LinkDescription\n"
"#See: http://wiki.ros.org/urdf/XML/link\n"
"\n"
"\n"
"string name\n"
"\n"
"#inertial\n"
"float64 origin_x\n"
"float64 origin_y\n"
"float64 origin_z\n"
"\n"
"float64 origin_r\n"
"float64 origin_p\n"
"float64 origin_yy\n"
"\n"
"float64 mass\n"
"\n"
"float64 intertia_ixx\n"
"float64 intertia_ixy\n"
"float64 intertia_ixz\n"
"float64 intertia_iyy\n"
"float64 intertia_iyz\n"
"float64 intertia_izz\n"
"\n"
"# friction\n"
"float64 mu1\n"
"float64 mu2\n"
"float64 kp\n"
"float64 kd\n"
"\n"
"#visual\n"
"LinkVisual[] link_visual           #List of visual elements\n"
"\n"
"#collision\n"
"LinkCollision[] link_collision     #List of collision elements\n"
"\n"
"================================================================================\n"
"MSG: modrob_simulation/LinkVisual\n"
"#Documentation, see: http://wiki.ros.org/urdf/XML/link\n"
"\n"
"string name\n"
"\n"
"#origin\n"
"float64 origin_x\n"
"float64 origin_y\n"
"float64 origin_z\n"
"\n"
"float64 origin_r\n"
"float64 origin_p\n"
"float64 origin_yy\n"
"\n"
"#geometry\n"
"string type     #box, cylinder, sphere\n"
"float64 arg1    # depending on the chosen type either x or radius\n"
"float64 arg2    # depending on the chosen type either y or length\n"
"float64 arg3    # for boxes: z\n"
"\n"
"#material\n"
"string color_name\n"
"float64 color_r #red\n"
"float64 color_g #green\n"
"float64 color_b #blue\n"
"float64 color_a #transparancy\n"
"\n"
"#gazebo material\n"
"string gazebo_material\n"
"\n"
"string texture\n"
"================================================================================\n"
"MSG: modrob_simulation/LinkCollision\n"
"#Documentation, see: http://wiki.ros.org/urdf/XML/link\n"
"\n"
"string name\n"
"\n"
"#origin\n"
"float64 origin_x\n"
"float64 origin_y\n"
"float64 origin_z\n"
"\n"
"float64 origin_r\n"
"float64 origin_p\n"
"float64 origin_yy\n"
"\n"
"#geometry\n"
"string type     #box, cylinder, sphere\n"
"float64 arg1    # depending on the chosen type either x or radius\n"
"float64 arg2    # depending on the chosen type either y or length\n"
"float64 arg3    # for boxes: z\n"
"================================================================================\n"
"MSG: geometry_msgs/Vector3\n"
"# This represents a vector in free space. \n"
"# It is only meant to represent a direction. Therefore, it does not\n"
"# make sense to apply a translation to it (e.g., when applying a \n"
"# generic rigid transformation to a Vector3, tf2 will only apply the\n"
"# rotation). If you want your data to be translatable too, use the\n"
"# geometry_msgs/Point message instead.\n"
"\n"
"float64 x\n"
"float64 y\n"
"float64 z\n"
;
  }

  static const char* value(const ::modrob_simulation::RobotDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.name);
      stream.next(m.joints);
      stream.next(m.links);
      stream.next(m.base_pos);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RobotDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_simulation::RobotDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::RobotDescription_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "joints[]" << std::endl;
    for (size_t i = 0; i < v.joints.size(); ++i)
    {
      s << indent << "  joints[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::JointDescription_<ContainerAllocator> >::stream(s, indent + "    ", v.joints[i]);
    }
    s << indent << "links[]" << std::endl;
    for (size_t i = 0; i < v.links.size(); ++i)
    {
      s << indent << "  links[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::LinkDescription_<ContainerAllocator> >::stream(s, indent + "    ", v.links[i]);
    }
    s << indent << "base_pos: ";
    s << std::endl;
    Printer< ::geometry_msgs::Vector3_<ContainerAllocator> >::stream(s, indent + "  ", v.base_pos);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_ROBOTDESCRIPTION_H
