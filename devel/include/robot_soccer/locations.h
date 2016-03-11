// Generated by gencpp from file robot_soccer/locations.msg
// DO NOT EDIT!


#ifndef ROBOT_SOCCER_MESSAGE_LOCATIONS_H
#define ROBOT_SOCCER_MESSAGE_LOCATIONS_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace robot_soccer
{
template <class ContainerAllocator>
struct locations_
{
  typedef locations_<ContainerAllocator> Type;

  locations_()
    : header()
    , home1_x(0)
    , home1_y(0)
    , home1_theta(0)
    , ball_x(0)
    , ball_y(0)
    , field_width(0)
    , field_height(0)  {
    }
  locations_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , home1_x(0)
    , home1_y(0)
    , home1_theta(0)
    , ball_x(0)
    , ball_y(0)
    , field_width(0)
    , field_height(0)  {
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int32_t _home1_x_type;
  _home1_x_type home1_x;

   typedef int32_t _home1_y_type;
  _home1_y_type home1_y;

   typedef int32_t _home1_theta_type;
  _home1_theta_type home1_theta;

   typedef int32_t _ball_x_type;
  _ball_x_type ball_x;

   typedef int32_t _ball_y_type;
  _ball_y_type ball_y;

   typedef int32_t _field_width_type;
  _field_width_type field_width;

   typedef int32_t _field_height_type;
  _field_height_type field_height;




  typedef boost::shared_ptr< ::robot_soccer::locations_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::robot_soccer::locations_<ContainerAllocator> const> ConstPtr;

}; // struct locations_

typedef ::robot_soccer::locations_<std::allocator<void> > locations;

typedef boost::shared_ptr< ::robot_soccer::locations > locationsPtr;
typedef boost::shared_ptr< ::robot_soccer::locations const> locationsConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::robot_soccer::locations_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::robot_soccer::locations_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace robot_soccer

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/jade/share/std_msgs/cmake/../msg'], 'robot_soccer': ['/home/odroid/catkin_ws/src/robot_soccer/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::robot_soccer::locations_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::robot_soccer::locations_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_soccer::locations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::robot_soccer::locations_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_soccer::locations_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::robot_soccer::locations_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::robot_soccer::locations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "48d9e5afdb93afb928ab25a7f406ab6f";
  }

  static const char* value(const ::robot_soccer::locations_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x48d9e5afdb93afb9ULL;
  static const uint64_t static_value2 = 0x28ab25a7f406ab6fULL;
};

template<class ContainerAllocator>
struct DataType< ::robot_soccer::locations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "robot_soccer/locations";
  }

  static const char* value(const ::robot_soccer::locations_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::robot_soccer::locations_<ContainerAllocator> >
{
  static const char* value()
  {
    return "Header header\n\
int32 home1_x\n\
int32 home1_y\n\
int32 home1_theta\n\
int32 ball_x\n\
int32 ball_y\n\
int32 field_width\n\
int32 field_height\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::robot_soccer::locations_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::robot_soccer::locations_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.home1_x);
      stream.next(m.home1_y);
      stream.next(m.home1_theta);
      stream.next(m.ball_x);
      stream.next(m.ball_y);
      stream.next(m.field_width);
      stream.next(m.field_height);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER;
  }; // struct locations_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::robot_soccer::locations_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::robot_soccer::locations_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "home1_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.home1_x);
    s << indent << "home1_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.home1_y);
    s << indent << "home1_theta: ";
    Printer<int32_t>::stream(s, indent + "  ", v.home1_theta);
    s << indent << "ball_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ball_x);
    s << indent << "ball_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ball_y);
    s << indent << "field_width: ";
    Printer<int32_t>::stream(s, indent + "  ", v.field_width);
    s << indent << "field_height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.field_height);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROBOT_SOCCER_MESSAGE_LOCATIONS_H
