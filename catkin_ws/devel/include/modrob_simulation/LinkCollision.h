// Generated by gencpp from file modrob_simulation/LinkCollision.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_LINKCOLLISION_H
#define MODROB_SIMULATION_MESSAGE_LINKCOLLISION_H


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
struct LinkCollision_
{
  typedef LinkCollision_<ContainerAllocator> Type;

  LinkCollision_()
    : name()
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , type()
    , arg1(0.0)
    , arg2(0.0)
    , arg3(0.0)  {
    }
  LinkCollision_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , type(_alloc)
    , arg1(0.0)
    , arg2(0.0)
    , arg3(0.0)  {
  (void)_alloc;
    }



   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _name_type;
  _name_type name;

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

   typedef std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other >  _type_type;
  _type_type type;

   typedef double _arg1_type;
  _arg1_type arg1;

   typedef double _arg2_type;
  _arg2_type arg2;

   typedef double _arg3_type;
  _arg3_type arg3;





  typedef boost::shared_ptr< ::modrob_simulation::LinkCollision_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::LinkCollision_<ContainerAllocator> const> ConstPtr;

}; // struct LinkCollision_

typedef ::modrob_simulation::LinkCollision_<std::allocator<void> > LinkCollision;

typedef boost::shared_ptr< ::modrob_simulation::LinkCollision > LinkCollisionPtr;
typedef boost::shared_ptr< ::modrob_simulation::LinkCollision const> LinkCollisionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::LinkCollision_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::LinkCollision_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::LinkCollision_<ContainerAllocator1> & lhs, const ::modrob_simulation::LinkCollision_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.origin_x == rhs.origin_x &&
    lhs.origin_y == rhs.origin_y &&
    lhs.origin_z == rhs.origin_z &&
    lhs.origin_r == rhs.origin_r &&
    lhs.origin_p == rhs.origin_p &&
    lhs.origin_yy == rhs.origin_yy &&
    lhs.type == rhs.type &&
    lhs.arg1 == rhs.arg1 &&
    lhs.arg2 == rhs.arg2 &&
    lhs.arg3 == rhs.arg3;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::LinkCollision_<ContainerAllocator1> & lhs, const ::modrob_simulation::LinkCollision_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::LinkCollision_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::LinkCollision_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::LinkCollision_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "d26543081054487ac88f8ee0543c0fe8";
  }

  static const char* value(const ::modrob_simulation::LinkCollision_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xd26543081054487aULL;
  static const uint64_t static_value2 = 0xc88f8ee0543c0fe8ULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/LinkCollision";
  }

  static const char* value(const ::modrob_simulation::LinkCollision_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#Documentation, see: http://wiki.ros.org/urdf/XML/link\n"
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
;
  }

  static const char* value(const ::modrob_simulation::LinkCollision_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.name);
      stream.next(m.origin_x);
      stream.next(m.origin_y);
      stream.next(m.origin_z);
      stream.next(m.origin_r);
      stream.next(m.origin_p);
      stream.next(m.origin_yy);
      stream.next(m.type);
      stream.next(m.arg1);
      stream.next(m.arg2);
      stream.next(m.arg3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LinkCollision_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_simulation::LinkCollision_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::LinkCollision_<ContainerAllocator>& v)
  {
    s << indent << "name: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.name);
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
    s << indent << "type: ";
    Printer<std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other > >::stream(s, indent + "  ", v.type);
    s << indent << "arg1: ";
    Printer<double>::stream(s, indent + "  ", v.arg1);
    s << indent << "arg2: ";
    Printer<double>::stream(s, indent + "  ", v.arg2);
    s << indent << "arg3: ";
    Printer<double>::stream(s, indent + "  ", v.arg3);
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_LINKCOLLISION_H
