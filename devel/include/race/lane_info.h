// Generated by gencpp from file race/lane_info.msg
// DO NOT EDIT!


#ifndef RACE_MESSAGE_LANE_INFO_H
#define RACE_MESSAGE_LANE_INFO_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace race
{
template <class ContainerAllocator>
struct lane_info_
{
  typedef lane_info_<ContainerAllocator> Type;

  lane_info_()
    : left_slope(0.0)
    , right_slope(0.0)
    , is_left(false)
    , is_right(false)
    , bias_from_left(0.0)
    , bias_from_right(0.0)  {
    }
  lane_info_(const ContainerAllocator& _alloc)
    : left_slope(0.0)
    , right_slope(0.0)
    , is_left(false)
    , is_right(false)
    , bias_from_left(0.0)
    , bias_from_right(0.0)  {
  (void)_alloc;
    }



   typedef float _left_slope_type;
  _left_slope_type left_slope;

   typedef float _right_slope_type;
  _right_slope_type right_slope;

   typedef uint8_t _is_left_type;
  _is_left_type is_left;

   typedef uint8_t _is_right_type;
  _is_right_type is_right;

   typedef float _bias_from_left_type;
  _bias_from_left_type bias_from_left;

   typedef float _bias_from_right_type;
  _bias_from_right_type bias_from_right;





  typedef boost::shared_ptr< ::race::lane_info_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::race::lane_info_<ContainerAllocator> const> ConstPtr;

}; // struct lane_info_

typedef ::race::lane_info_<std::allocator<void> > lane_info;

typedef boost::shared_ptr< ::race::lane_info > lane_infoPtr;
typedef boost::shared_ptr< ::race::lane_info const> lane_infoConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::race::lane_info_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::race::lane_info_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace race

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'race': ['/home/young43/FOSCAR_ISCC_2021/src/race/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::race::lane_info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::race::lane_info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::race::lane_info_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::race::lane_info_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::race::lane_info_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::race::lane_info_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::race::lane_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e5107cf654a976d33dc89cb06bf8be8e";
  }

  static const char* value(const ::race::lane_info_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe5107cf654a976d3ULL;
  static const uint64_t static_value2 = 0x3dc89cb06bf8be8eULL;
};

template<class ContainerAllocator>
struct DataType< ::race::lane_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "race/lane_info";
  }

  static const char* value(const ::race::lane_info_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::race::lane_info_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 left_slope\n\
float32 right_slope\n\
\n\
bool is_left\n\
bool is_right\n\
\n\
float32 bias_from_left\n\
float32 bias_from_right\n\
";
  }

  static const char* value(const ::race::lane_info_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::race::lane_info_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.left_slope);
      stream.next(m.right_slope);
      stream.next(m.is_left);
      stream.next(m.is_right);
      stream.next(m.bias_from_left);
      stream.next(m.bias_from_right);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct lane_info_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::race::lane_info_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::race::lane_info_<ContainerAllocator>& v)
  {
    s << indent << "left_slope: ";
    Printer<float>::stream(s, indent + "  ", v.left_slope);
    s << indent << "right_slope: ";
    Printer<float>::stream(s, indent + "  ", v.right_slope);
    s << indent << "is_left: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_left);
    s << indent << "is_right: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.is_right);
    s << indent << "bias_from_left: ";
    Printer<float>::stream(s, indent + "  ", v.bias_from_left);
    s << indent << "bias_from_right: ";
    Printer<float>::stream(s, indent + "  ", v.bias_from_right);
  }
};

} // namespace message_operations
} // namespace ros

#endif // RACE_MESSAGE_LANE_INFO_H
