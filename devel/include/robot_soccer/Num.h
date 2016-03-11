// Generated by gencpp from file robot_soccer/Num.msg
// DO NOT EDIT!


#ifndef ROBOT_SOCCER_MESSAGE_NUM_H
#define ROBOT_SOCCER_MESSAGE_NUM_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace robot_soccer
{
template <class ContainerAllocator>
struct Num_
{
  typedef Num_<ContainerAllocator> Type;

  Num_()
    : home1_x(0.0)
    , home1_y(0.0)
    , home1_theta(0.0)
    , home2_x(0.0)
    , home2_y(0.0)
    , home2_theta(0.0)
    , away1_x(0.0)
    , away1_y(0.0)
    , away1_theta(0.0)
    , away2_x(0.0)
    , away2_y(0.0)
    , away2_theta(0.0)
    , ball_x(0.0)
    , ball_y(0.0)
    , t(0.0)
    , tsys(0.0)  {
    }
  Num_(const ContainerAllocator& _alloc)
    : home1_x(0.0)
    , home1_y(0.0)
    , home1_theta(0.0)
    , home2_x(0.0)
    , home2_y(0.0)
    , home2_theta(0.0)
    , away1_x(0.0)
    , away1_y(0.0)
    , away1_theta(0.0)
    , away2_x(0.0)
    , away2_y(0.0)
    , away2_theta(0.0)
    , ball_x(0.0)
    , ball_y(0.0)
    , t(0.0)
    , tsys(0.0)  {
    }



   typedef float _home1_x_type;
  _home1_x_type home1_x;

   typedef float _home1_y_type;
  _home1_y_type home1_y;

   typedef float _home1_theta_type;
  _home1_theta_type home1_theta;

   typedef float _home2_x_type;
  _home2_x_type home2_x;

   typedef float _home2_y_type;
  _home2_y_type home2_y;

   typedef float _home2_theta_type;
  _home2_theta_type home2_theta;

   typedef float _away1_x_type;
  _away1_x_type away1_x;

   typedef float _away1_y_type;
  _away1_y_type away1_y;

   typedef float _away1_theta_type;
  _away1_theta_type away1_theta;

   typedef float _away2_x_type;
  _away2_x_type away2_x;

   typedef float _away2_y_type;
  _away2_y_type away2_y;

   typedef float _away2_theta_type;
  _away2_theta_type away2_theta;

   typedef float _ball_x_type;
  _ball_x_type ball_x;

   typedef float _ball_y_type;
  _ball_y_type ball_y;

   typedef float _t_type;
  _t_type t;

   typedef float _tsys_type;
  _tsys_type tsys;




  typedef boost::shared_ptr< ::robot_soccer::Num_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_soccer::Num_<ContainerAllocator> const> ConstPtr;

}; // struct Num_

typedef ::robot_soccer::Num_<std::allocator<void> > Num;

typedef boost::shared_ptr< ::robot_soccer::Num > NumPtr;
typedef boost::shared_ptr< ::robot_soccer::Num const> NumConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_soccer::Num_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_soccer::Num_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_soccer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'robot_soccer': ['/home/odroid/catkin_ws/src/robot_soccer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_soccer::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_soccer::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_soccer::Num_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_soccer::Num_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_soccer::Num_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_soccer::Num_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_soccer::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ad34ec599372090ffe818e3fe887923d";
  }

  static const char* value(const ::robot_soccer::Num_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xad34ec599372090fULL;
  static const uint64_t static_value2 = 0xfe818e3fe887923dULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_soccer::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_soccer/Num";
  }

  static const char* value(const ::robot_soccer::Num_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_soccer::Num_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 home1_x\n\
float32 home1_y\n\
float32 home1_theta\n\
float32 home2_x\n\
float32 home2_y\n\
float32 home2_theta\n\
float32 away1_x\n\
float32 away1_y\n\
float32 away1_theta\n\
float32 away2_x\n\
float32 away2_y\n\
float32 away2_theta\n\
float32 ball_x\n\
float32 ball_y\n\
float32 t\n\
float32 tsys\n\
";
  }

  static const char* value(const ::robot_soccer::Num_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_soccer::Num_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.home1_x);
      stream.next(m.home1_y);
      stream.next(m.home1_theta);
      stream.next(m.home2_x);
      stream.next(m.home2_y);
      stream.next(m.home2_theta);
      stream.next(m.away1_x);
      stream.next(m.away1_y);
      stream.next(m.away1_theta);
      stream.next(m.away2_x);
      stream.next(m.away2_y);
      stream.next(m.away2_theta);
      stream.next(m.ball_x);
      stream.next(m.ball_y);
      stream.next(m.t);
      stream.next(m.tsys);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct Num_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_soccer::Num_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_soccer::Num_<ContainerAllocator>& v)
  {
    s << indent << "home1_x: ";
    Printer<float>::stream(s, indent + "  ", v.home1_x);
    s << indent << "home1_y: ";
    Printer<float>::stream(s, indent + "  ", v.home1_y);
    s << indent << "home1_theta: ";
    Printer<float>::stream(s, indent + "  ", v.home1_theta);
    s << indent << "home2_x: ";
    Printer<float>::stream(s, indent + "  ", v.home2_x);
    s << indent << "home2_y: ";
    Printer<float>::stream(s, indent + "  ", v.home2_y);
    s << indent << "home2_theta: ";
    Printer<float>::stream(s, indent + "  ", v.home2_theta);
    s << indent << "away1_x: ";
    Printer<float>::stream(s, indent + "  ", v.away1_x);
    s << indent << "away1_y: ";
    Printer<float>::stream(s, indent + "  ", v.away1_y);
    s << indent << "away1_theta: ";
    Printer<float>::stream(s, indent + "  ", v.away1_theta);
    s << indent << "away2_x: ";
    Printer<float>::stream(s, indent + "  ", v.away2_x);
    s << indent << "away2_y: ";
    Printer<float>::stream(s, indent + "  ", v.away2_y);
    s << indent << "away2_theta: ";
    Printer<float>::stream(s, indent + "  ", v.away2_theta);
    s << indent << "ball_x: ";
    Printer<float>::stream(s, indent + "  ", v.ball_x);
    s << indent << "ball_y: ";
    Printer<float>::stream(s, indent + "  ", v.ball_y);
    s << indent << "t: ";
    Printer<float>::stream(s, indent + "  ", v.t);
    s << indent << "tsys: ";
    Printer<float>::stream(s, indent + "  ", v.tsys);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_SOCCER_MESSAGE_NUM_H
