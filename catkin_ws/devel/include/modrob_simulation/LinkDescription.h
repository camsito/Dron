// Generated by gencpp from file modrob_simulation/LinkDescription.msg
// DO NOT EDIT!


#ifndef MODROB_SIMULATION_MESSAGE_LINKDESCRIPTION_H
#define MODROB_SIMULATION_MESSAGE_LINKDESCRIPTION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <modrob_simulation/LinkVisual.h>
#include <modrob_simulation/LinkCollision.h>

namespace modrob_simulation
{
template <class ContainerAllocator>
struct LinkDescription_
{
  typedef LinkDescription_<ContainerAllocator> Type;

  LinkDescription_()
    : name()
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , mass(0.0)
    , intertia_ixx(0.0)
    , intertia_ixy(0.0)
    , intertia_ixz(0.0)
    , intertia_iyy(0.0)
    , intertia_iyz(0.0)
    , intertia_izz(0.0)
    , mu1(0.0)
    , mu2(0.0)
    , kp(0.0)
    , kd(0.0)
    , link_visual()
    , link_collision()  {
    }
  LinkDescription_(const ContainerAllocator& _alloc)
    : name(_alloc)
    , origin_x(0.0)
    , origin_y(0.0)
    , origin_z(0.0)
    , origin_r(0.0)
    , origin_p(0.0)
    , origin_yy(0.0)
    , mass(0.0)
    , intertia_ixx(0.0)
    , intertia_ixy(0.0)
    , intertia_ixz(0.0)
    , intertia_iyy(0.0)
    , intertia_iyz(0.0)
    , intertia_izz(0.0)
    , mu1(0.0)
    , mu2(0.0)
    , kp(0.0)
    , kd(0.0)
    , link_visual(_alloc)
    , link_collision(_alloc)  {
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

   typedef double _mass_type;
  _mass_type mass;

   typedef double _intertia_ixx_type;
  _intertia_ixx_type intertia_ixx;

   typedef double _intertia_ixy_type;
  _intertia_ixy_type intertia_ixy;

   typedef double _intertia_ixz_type;
  _intertia_ixz_type intertia_ixz;

   typedef double _intertia_iyy_type;
  _intertia_iyy_type intertia_iyy;

   typedef double _intertia_iyz_type;
  _intertia_iyz_type intertia_iyz;

   typedef double _intertia_izz_type;
  _intertia_izz_type intertia_izz;

   typedef double _mu1_type;
  _mu1_type mu1;

   typedef double _mu2_type;
  _mu2_type mu2;

   typedef double _kp_type;
  _kp_type kp;

   typedef double _kd_type;
  _kd_type kd;

   typedef std::vector< ::modrob_simulation::LinkVisual_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::LinkVisual_<ContainerAllocator> >::other >  _link_visual_type;
  _link_visual_type link_visual;

   typedef std::vector< ::modrob_simulation::LinkCollision_<ContainerAllocator> , typename ContainerAllocator::template rebind< ::modrob_simulation::LinkCollision_<ContainerAllocator> >::other >  _link_collision_type;
  _link_collision_type link_collision;





  typedef boost::shared_ptr< ::modrob_simulation::LinkDescription_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::modrob_simulation::LinkDescription_<ContainerAllocator> const> ConstPtr;

}; // struct LinkDescription_

typedef ::modrob_simulation::LinkDescription_<std::allocator<void> > LinkDescription;

typedef boost::shared_ptr< ::modrob_simulation::LinkDescription > LinkDescriptionPtr;
typedef boost::shared_ptr< ::modrob_simulation::LinkDescription const> LinkDescriptionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::modrob_simulation::LinkDescription_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::modrob_simulation::LinkDescription_<ContainerAllocator> >::stream(s, "", v);
return s;
}


template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator==(const ::modrob_simulation::LinkDescription_<ContainerAllocator1> & lhs, const ::modrob_simulation::LinkDescription_<ContainerAllocator2> & rhs)
{
  return lhs.name == rhs.name &&
    lhs.origin_x == rhs.origin_x &&
    lhs.origin_y == rhs.origin_y &&
    lhs.origin_z == rhs.origin_z &&
    lhs.origin_r == rhs.origin_r &&
    lhs.origin_p == rhs.origin_p &&
    lhs.origin_yy == rhs.origin_yy &&
    lhs.mass == rhs.mass &&
    lhs.intertia_ixx == rhs.intertia_ixx &&
    lhs.intertia_ixy == rhs.intertia_ixy &&
    lhs.intertia_ixz == rhs.intertia_ixz &&
    lhs.intertia_iyy == rhs.intertia_iyy &&
    lhs.intertia_iyz == rhs.intertia_iyz &&
    lhs.intertia_izz == rhs.intertia_izz &&
    lhs.mu1 == rhs.mu1 &&
    lhs.mu2 == rhs.mu2 &&
    lhs.kp == rhs.kp &&
    lhs.kd == rhs.kd &&
    lhs.link_visual == rhs.link_visual &&
    lhs.link_collision == rhs.link_collision;
}

template<typename ContainerAllocator1, typename ContainerAllocator2>
bool operator!=(const ::modrob_simulation::LinkDescription_<ContainerAllocator1> & lhs, const ::modrob_simulation::LinkDescription_<ContainerAllocator2> & rhs)
{
  return !(lhs == rhs);
}


} // namespace modrob_simulation

namespace ros
{
namespace message_traits
{





template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::modrob_simulation::LinkDescription_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::modrob_simulation::LinkDescription_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::modrob_simulation::LinkDescription_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "f5271258b3aea909f19f1525f4430406";
  }

  static const char* value(const ::modrob_simulation::LinkDescription_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xf5271258b3aea909ULL;
  static const uint64_t static_value2 = 0xf19f1525f4430406ULL;
};

template<class ContainerAllocator>
struct DataType< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "modrob_simulation/LinkDescription";
  }

  static const char* value(const ::modrob_simulation::LinkDescription_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
{
  static const char* value()
  {
    return "#See: http://wiki.ros.org/urdf/XML/link\n"
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
;
  }

  static const char* value(const ::modrob_simulation::LinkDescription_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
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
      stream.next(m.mass);
      stream.next(m.intertia_ixx);
      stream.next(m.intertia_ixy);
      stream.next(m.intertia_ixz);
      stream.next(m.intertia_iyy);
      stream.next(m.intertia_iyz);
      stream.next(m.intertia_izz);
      stream.next(m.mu1);
      stream.next(m.mu2);
      stream.next(m.kp);
      stream.next(m.kd);
      stream.next(m.link_visual);
      stream.next(m.link_collision);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct LinkDescription_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::modrob_simulation::LinkDescription_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::modrob_simulation::LinkDescription_<ContainerAllocator>& v)
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
    s << indent << "mass: ";
    Printer<double>::stream(s, indent + "  ", v.mass);
    s << indent << "intertia_ixx: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_ixx);
    s << indent << "intertia_ixy: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_ixy);
    s << indent << "intertia_ixz: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_ixz);
    s << indent << "intertia_iyy: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_iyy);
    s << indent << "intertia_iyz: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_iyz);
    s << indent << "intertia_izz: ";
    Printer<double>::stream(s, indent + "  ", v.intertia_izz);
    s << indent << "mu1: ";
    Printer<double>::stream(s, indent + "  ", v.mu1);
    s << indent << "mu2: ";
    Printer<double>::stream(s, indent + "  ", v.mu2);
    s << indent << "kp: ";
    Printer<double>::stream(s, indent + "  ", v.kp);
    s << indent << "kd: ";
    Printer<double>::stream(s, indent + "  ", v.kd);
    s << indent << "link_visual[]" << std::endl;
    for (size_t i = 0; i < v.link_visual.size(); ++i)
    {
      s << indent << "  link_visual[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::LinkVisual_<ContainerAllocator> >::stream(s, indent + "    ", v.link_visual[i]);
    }
    s << indent << "link_collision[]" << std::endl;
    for (size_t i = 0; i < v.link_collision.size(); ++i)
    {
      s << indent << "  link_collision[" << i << "]: ";
      s << std::endl;
      s << indent;
      Printer< ::modrob_simulation::LinkCollision_<ContainerAllocator> >::stream(s, indent + "    ", v.link_collision[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // MODROB_SIMULATION_MESSAGE_LINKDESCRIPTION_H
