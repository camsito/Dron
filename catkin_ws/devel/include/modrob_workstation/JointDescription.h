// Generated by gencpp from file modrob_workstation/JointDescription.msg
// DO NOT EDIT!


#ifndef MODROB_WORKSTATION_MESSAGE_JOINTDESCRIPTION_H
#define MODROB_WORKSTATION_MESSAGE_JOINTDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace modrob_workstation
{
template <class ContainerAllocator>
struct JointDescription_
{
  typedef JointDescription_<ContainerAllocator> Type;

  JointDescription_()
    : name()
    , type()
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , parent_link()
    , child_link()
    , axis_x(0.0)
    , axis_y(0.0)
    , axis_z(0.0)
    , damping(0.0)
    , friction(0.0)
    , lower(0.0)
    , upper(0.0)
    , effort(0.0)
    , velocity(0.0)
    , soft_lower_limit(0.0)
    , soft_upper_limit(0.0)
    , k_position(0.0)
    , k_velocity(0.0)  {
    }
  JointDescription_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , type(_alloc)
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , parent_link(_alloc)
    , child_link(_alloc)
    , axis_x(0.0)
    , axis_y(0.0)
    , axis_z(0.0)
    , damping(0.0)
    , friction(0.0)
    , lower(0.0)
    , upper(0.0)
    , effort(0.0)
    , velocity(0.0)
    , soft_lower_limit(0.0)
    , soft_upper_limit(0.0)
    , k_position(0.0)
    , k_velocity(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef double _origin_x_type;
  _origin_x_type origin_x;

   typedef double _origin_y_type;
  _origin_y_type origin_y;

   typedef double _origin_z_type;
  _origin_z_type origin_z;

   typedef double _origin_r_type;
  _origin_r_type origin_r;

   typedef double _origin_p_type;
  _origin_p_type origin_p;

   typedef double _origin_yy_type;
  _origin_yy_type origin_yy;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _parent_link_type;
  _parent_link_type parent_link;

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _child_link_type;
  _child_link_type child_link;

   typedef double _axis_x_type;
  _axis_x_type axis_x;

   typedef double _axis_y_type;
  _axis_y_type axis_y;

   typedef double _axis_z_type;
  _axis_z_type axis_z;

   typedef double _damping_type;
  _damping_type damping;

   typedef double _friction_type;
  _friction_type friction;

   typedef double _lower_type;
  _lower_type lower;

   typedef double _upper_type;
  _upper_type upper;

   typedef double _effort_type;
  _effort_type effort;

   typedef double _velocity_type;
  _velocity_type velocity;

   typedef double _soft_lower_limit_type;
  _soft_lower_limit_type soft_lower_limit;

   typedef double _soft_upper_limit_type;
  _soft_upper_limit_type soft_upper_limit;

   typedef double _k_position_type;
  _k_position_type k_position;

   typedef double _k_velocity_type;
  _k_velocity_type k_velocity;





  typedef boost::shared_ptr< ::modrob_workstation::JointDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_workstation::JointDescription_<ContainerAllocator> const> ConstPtr;

}; // struct JointDescription_

typedef ::modrob_workstation::JointDescription_<std::allocator<void> > JointDescription;

typedef boost::shared_ptr< ::modrob_workstation::JointDescription > JointDescriptionPtr;
typedef boost::shared_ptr< ::modrob_workstation::JointDescription const> JointDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_workstation::JointDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_workstation::JointDescription_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_workstation::JointDescription_<ContainerAllocator1> & lhs, const ::modrob_workstation::JointDescription_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.type == rhs.type &&
    lhs.origin_x == rhs.origin_x &&
    lhs.origin_y == rhs.origin_y &&
    lhs.origin_z == rhs.origin_z &&
    lhs.origin_r == rhs.origin_r &&
    lhs.origin_p == rhs.origin_p &&
    lhs.origin_yy == rhs.origin_yy &&
    lhs.parent_link == rhs.parent_link &&
    lhs.child_link == rhs.child_link &&
    lhs.axis_x == rhs.axis_x &&
    lhs.axis_y == rhs.axis_y &&
    lhs.axis_z == rhs.axis_z &&
    lhs.damping == rhs.damping &&
    lhs.friction == rhs.friction &&
    lhs.lower == rhs.lower &&
    lhs.upper == rhs.upper &&
    lhs.effort == rhs.effort &&
    lhs.velocity == rhs.velocity &&
    lhs.soft_lower_limit == rhs.soft_lower_limit &&
    lhs.soft_upper_limit == rhs.soft_upper_limit &&
    lhs.k_position == rhs.k_position &&
    lhs.k_velocity == rhs.k_velocity;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_workstation::JointDescription_<ContainerAllocator1> & lhs, const ::modrob_workstation::JointDescription_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_workstation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_workstation::JointDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_workstation::JointDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_workstation::JointDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_workstation::JointDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_workstation::JointDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_workstation::JointDescription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_workstation::JointDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "89ca2f9be95e85645973f2545078047b";
  }

  static const char* value(const ::modrob_workstation::JointDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x89ca2f9be95e8564ULL;
  static const uint64_t static_value2 = 0x5973f2545078047bULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_workstation::JointDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_workstation/JointDescription";
  }

  static const char* value(const ::modrob_workstation::JointDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_workstation::JointDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Documentation on each attribute, see: http://wiki.ros.org/urdf/XML/joint\n"
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
"#mimic, not needed\n"
"\n"
"#safety_controller\n"
"float64 soft_lower_limit\n"
"float64 soft_upper_limit\n"
"float64 k_position\n"
"float64 k_velocity\n"
"\n"
;
  }

  static const char* value(const ::modrob_workstation::JointDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_workstation::JointDescription_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.type);
      stream.next(m.origin_x);
      stream.next(m.origin_y);
      stream.next(m.origin_z);
      stream.next(m.origin_r);
      stream.next(m.origin_p);
      stream.next(m.origin_yy);
      stream.next(m.parent_link);
      stream.next(m.child_link);
      stream.next(m.axis_x);
      stream.next(m.axis_y);
      stream.next(m.axis_z);
      stream.next(m.damping);
      stream.next(m.friction);
      stream.next(m.lower);
      stream.next(m.upper);
      stream.next(m.effort);
      stream.next(m.velocity);
      stream.next(m.soft_lower_limit);
      stream.next(m.soft_upper_limit);
      stream.next(m.k_position);
      stream.next(m.k_velocity);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct JointDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_workstation::JointDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_workstation::JointDescription_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "origin_x: ";
    Printer<double>::stream(s, indent + "  ", v.origin_x);
    s << indent << "origin_y: ";
    Printer<double>::stream(s, indent + "  ", v.origin_y);
    s << indent << "origin_z: ";
    Printer<double>::stream(s, indent + "  ", v.origin_z);
    s << indent << "origin_r: ";
    Printer<double>::stream(s, indent + "  ", v.origin_r);
    s << indent << "origin_p: ";
    Printer<double>::stream(s, indent + "  ", v.origin_p);
    s << indent << "origin_yy: ";
    Printer<double>::stream(s, indent + "  ", v.origin_yy);
    s << indent << "parent_link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.parent_link);
    s << indent << "child_link: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.child_link);
    s << indent << "axis_x: ";
    Printer<double>::stream(s, indent + "  ", v.axis_x);
    s << indent << "axis_y: ";
    Printer<double>::stream(s, indent + "  ", v.axis_y);
    s << indent << "axis_z: ";
    Printer<double>::stream(s, indent + "  ", v.axis_z);
    s << indent << "damping: ";
    Printer<double>::stream(s, indent + "  ", v.damping);
    s << indent << "friction: ";
    Printer<double>::stream(s, indent + "  ", v.friction);
    s << indent << "lower: ";
    Printer<double>::stream(s, indent + "  ", v.lower);
    s << indent << "upper: ";
    Printer<double>::stream(s, indent + "  ", v.upper);
    s << indent << "effort: ";
    Printer<double>::stream(s, indent + "  ", v.effort);
    s << indent << "velocity: ";
    Printer<double>::stream(s, indent + "  ", v.velocity);
    s << indent << "soft_lower_limit: ";
    Printer<double>::stream(s, indent + "  ", v.soft_lower_limit);
    s << indent << "soft_upper_limit: ";
    Printer<double>::stream(s, indent + "  ", v.soft_upper_limit);
    s << indent << "k_position: ";
    Printer<double>::stream(s, indent + "  ", v.k_position);
    s << indent << "k_velocity: ";
    Printer<double>::stream(s, indent + "  ", v.k_velocity);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_WORKSTATION_MESSAGE_JOINTDESCRIPTION_H
