// Generated by gencpp from file ublox_msgs/MonVER_Extension.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_MONVER_EXTENSION_H
#define UBLOX_MSGS_MESSAGE_MONVER_EXTENSION_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ublox_msgs
{
template <class ContainerAllocator>
struct MonVER_Extension_
{
  typedef MonVER_Extension_<ContainerAllocator> Type;

  MonVER_Extension_()
    : field()  {
      field.assign(0);
  }
  MonVER_Extension_(const ContainerAllocator& _alloc)
    : field()  {
  (void)_alloc;
      field.assign(0);
  }



   typedef boost::array<uint8_t, 30>  _field_type;
  _field_type field;





  typedef boost::shared_ptr< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> const> ConstPtr;

}; // struct MonVER_Extension_

typedef ::ublox_msgs::MonVER_Extension_<std::allocator<void> > MonVER_Extension;

typedef boost::shared_ptr< ::ublox_msgs::MonVER_Extension > MonVER_ExtensionPtr;
typedef boost::shared_ptr< ::ublox_msgs::MonVER_Extension const> MonVER_ExtensionConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::MonVER_Extension_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ublox_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'sensor_msgs': ['/opt/ros/kinetic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/kinetic/share/geometry_msgs/cmake/../msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'ublox_msgs': ['/home/young43/FOSCAR_ISCC_2021/src/gps/ublox/ublox_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ef92c9d93e6bd2c2701384b0595ac2b4";
  }

  static const char* value(const ::ublox_msgs::MonVER_Extension_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xef92c9d93e6bd2c2ULL;
  static const uint64_t static_value2 = 0x701384b0595ac2b4ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/MonVER_Extension";
  }

  static const char* value(const ::ublox_msgs::MonVER_Extension_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# see MonVER message\n\
#\n\
\n\
char[30] field\n\
";
  }

  static const char* value(const ::ublox_msgs::MonVER_Extension_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.field);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MonVER_Extension_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::MonVER_Extension_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::MonVER_Extension_<ContainerAllocator>& v)
  {
    s << indent << "field[]" << std::endl;
    for (size_t i = 0; i < v.field.size(); ++i)
    {
      s << indent << "  field[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.field[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_MONVER_EXTENSION_H
