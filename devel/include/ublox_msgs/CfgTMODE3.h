// Generated by gencpp from file ublox_msgs/CfgTMODE3.msg
// DO NOT EDIT!


#ifndef UBLOX_MSGS_MESSAGE_CFGTMODE3_H
#define UBLOX_MSGS_MESSAGE_CFGTMODE3_H


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
struct CfgTMODE3_
{
  typedef CfgTMODE3_<ContainerAllocator> Type;

  CfgTMODE3_()
    : version(0)
    , reserved1(0)
    , flags(0)
    , ecefXOrLat(0)
    , ecefYOrLon(0)
    , ecefZOrAlt(0)
    , ecefXOrLatHP(0)
    , ecefYOrLonHP(0)
    , ecefZOrAltHP(0)
    , reserved2(0)
    , fixedPosAcc(0)
    , svinMinDur(0)
    , svinAccLimit(0)
    , reserved3()  {
      reserved3.assign(0);
  }
  CfgTMODE3_(const ContainerAllocator& _alloc)
    : version(0)
    , reserved1(0)
    , flags(0)
    , ecefXOrLat(0)
    , ecefYOrLon(0)
    , ecefZOrAlt(0)
    , ecefXOrLatHP(0)
    , ecefYOrLonHP(0)
    , ecefZOrAltHP(0)
    , reserved2(0)
    , fixedPosAcc(0)
    , svinMinDur(0)
    , svinAccLimit(0)
    , reserved3()  {
  (void)_alloc;
      reserved3.assign(0);
  }



   typedef uint8_t _version_type;
  _version_type version;

   typedef uint8_t _reserved1_type;
  _reserved1_type reserved1;

   typedef uint16_t _flags_type;
  _flags_type flags;

   typedef int32_t _ecefXOrLat_type;
  _ecefXOrLat_type ecefXOrLat;

   typedef int32_t _ecefYOrLon_type;
  _ecefYOrLon_type ecefYOrLon;

   typedef int32_t _ecefZOrAlt_type;
  _ecefZOrAlt_type ecefZOrAlt;

   typedef int8_t _ecefXOrLatHP_type;
  _ecefXOrLatHP_type ecefXOrLatHP;

   typedef int8_t _ecefYOrLonHP_type;
  _ecefYOrLonHP_type ecefYOrLonHP;

   typedef int8_t _ecefZOrAltHP_type;
  _ecefZOrAltHP_type ecefZOrAltHP;

   typedef uint8_t _reserved2_type;
  _reserved2_type reserved2;

   typedef uint32_t _fixedPosAcc_type;
  _fixedPosAcc_type fixedPosAcc;

   typedef uint32_t _svinMinDur_type;
  _svinMinDur_type svinMinDur;

   typedef uint32_t _svinAccLimit_type;
  _svinAccLimit_type svinAccLimit;

   typedef boost::array<uint8_t, 8>  _reserved3_type;
  _reserved3_type reserved3;



  enum {
    CLASS_ID = 6u,
    MESSAGE_ID = 113u,
    FLAGS_MODE_MASK = 255u,
    FLAGS_MODE_DISABLED = 0u,
    FLAGS_MODE_SURVEY_IN = 1u,
    FLAGS_MODE_FIXED = 2u,
    FLAGS_LLA = 256u,
  };


  typedef boost::shared_ptr< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> const> ConstPtr;

}; // struct CfgTMODE3_

typedef ::ublox_msgs::CfgTMODE3_<std::allocator<void> > CfgTMODE3;

typedef boost::shared_ptr< ::ublox_msgs::CfgTMODE3 > CfgTMODE3Ptr;
typedef boost::shared_ptr< ::ublox_msgs::CfgTMODE3 const> CfgTMODE3ConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ublox_msgs::CfgTMODE3_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "818be20c97f2b940a885faaabc0d98a1";
  }

  static const char* value(const ::ublox_msgs::CfgTMODE3_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x818be20c97f2b940ULL;
  static const uint64_t static_value2 = 0xa885faaabc0d98a1ULL;
};

template<class ContainerAllocator>
struct DataType< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ublox_msgs/CfgTMODE3";
  }

  static const char* value(const ::ublox_msgs::CfgTMODE3_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
{
  static const char* value()
  {
    return "# CFG-TMODE3 (0x06, 0x71)\n\
# Time Mode Settings 3\n\
#\n\
# Configures the receiver to be in Time Mode. The position referred to in this\n\
# message is that of the Antenna Reference Point (ARP). See the Time Mode \n\
# Description for details.\n\
# \n\
# Supported on:\n\
#  - u-blox 8 / u-blox M8 with protocol version 20 (only with High Precision\n\
#    GNSS products)\n\
#\n\
\n\
uint8 CLASS_ID = 6\n\
uint8 MESSAGE_ID = 113\n\
\n\
uint8 version                     # Message version (0x00 for this version)\n\
uint8 reserved1                   # Reserved\n\
\n\
uint16 flags\n\
uint16 FLAGS_MODE_MASK = 255      # Receiver Mode:\n\
uint16 FLAGS_MODE_DISABLED = 0      # Disabled\n\
uint16 FLAGS_MODE_SURVEY_IN = 1     # Survey In\n\
uint16 FLAGS_MODE_FIXED = 2         # Fixed Mode (true ARP position required)\n\
uint16 FLAGS_LLA = 256            # Position is given in LAT/LON/ALT \n\
                                  # (default is ECEF)\n\
\n\
int32 ecefXOrLat                  # WGS84 ECEF X coordinate (or latitude) of\n\
                                  # the ARP position, depending on flags above\n\
                                  # [cm] or [deg / 1e-7]\n\
int32 ecefYOrLon                  # WGS84 ECEF Y coordinate (or longitude) of\n\
                                  # the ARP position, depending on flags above\n\
                                  # [cm] or [deg / 1e-7]\n\
int32 ecefZOrAlt                  # WGS84 ECEF Z coordinate (or altitude) of\n\
                                  # the ARP position, depending on flags above\n\
                                  # [cm]\n\
int8 ecefXOrLatHP                 # High-precision WGS84 ECEF X coordinate (or\n\
                                  # latitude) of the ARP position, depending on\n\
                                  # flags above. Must be in the range -99..+99.\n\
                                  # The precise WGS84 ECEF X coordinate in units\n\
                                  # of cm, or the precise WGS84 ECEF latitude in\n\
                                  # units of 1e-7 degrees, is given by\n\
                                  # ecefXOrLat + (ecefXOrLatHP * 1e-2)\n\
                                  # [0.1 mm] or [deg * 1e-9]\n\
int8 ecefYOrLonHP                 # High-precision WGS84 ECEF Y coordinate (or\n\
                                  # longitude) of the ARP position, depending on\n\
                                  # flags above. Must be in the range -99..+99.\n\
                                  # The precise WGS84 ECEF Y coordinate in units\n\
                                  # of cm, or the precise WGS84 ECEF longitude \n\
                                  # in units of 1e-7 degrees, is given by\n\
                                  # ecefYOrLon + (ecefYOrLonHP * 1e-2)\n\
                                  # [0.1 mm] or [deg * 1e-9]\n\
int8 ecefZOrAltHP                 # High-precision WGS84 ECEF Z coordinate (or\n\
                                  # altitude) of the ARP position, depending on\n\
                                  # flags above. Must be in the range -99..+99.\n\
                                  # The precise WGS84 ECEF Z coordinate, or\n\
                                  # altitude coordinate, in units of cm is given\n\
                                  # by ecefZOrAlt + (ecefZOrAltHP * 1e-2)\n\
                                  # [0.1 mm]\n\
uint8 reserved2                   # Reserved\n\
\n\
uint32 fixedPosAcc                # Fixed position 3D accuracy\n\
                                  # [0.1 mm]\n\
uint32 svinMinDur                 # Survey-in minimum duration\n\
                                  # [s]\n\
uint32 svinAccLimit               # Survey-in position accuracy limit\n\
                                  # [0.1 mm]\n\
\n\
uint8[8] reserved3                # Reserved\n\
";
  }

  static const char* value(const ::ublox_msgs::CfgTMODE3_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.version);
      stream.next(m.reserved1);
      stream.next(m.flags);
      stream.next(m.ecefXOrLat);
      stream.next(m.ecefYOrLon);
      stream.next(m.ecefZOrAlt);
      stream.next(m.ecefXOrLatHP);
      stream.next(m.ecefYOrLonHP);
      stream.next(m.ecefZOrAltHP);
      stream.next(m.reserved2);
      stream.next(m.fixedPosAcc);
      stream.next(m.svinMinDur);
      stream.next(m.svinAccLimit);
      stream.next(m.reserved3);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CfgTMODE3_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ublox_msgs::CfgTMODE3_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ublox_msgs::CfgTMODE3_<ContainerAllocator>& v)
  {
    s << indent << "version: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.version);
    s << indent << "reserved1: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved1);
    s << indent << "flags: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.flags);
    s << indent << "ecefXOrLat: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ecefXOrLat);
    s << indent << "ecefYOrLon: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ecefYOrLon);
    s << indent << "ecefZOrAlt: ";
    Printer<int32_t>::stream(s, indent + "  ", v.ecefZOrAlt);
    s << indent << "ecefXOrLatHP: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ecefXOrLatHP);
    s << indent << "ecefYOrLonHP: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ecefYOrLonHP);
    s << indent << "ecefZOrAltHP: ";
    Printer<int8_t>::stream(s, indent + "  ", v.ecefZOrAltHP);
    s << indent << "reserved2: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.reserved2);
    s << indent << "fixedPosAcc: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.fixedPosAcc);
    s << indent << "svinMinDur: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.svinMinDur);
    s << indent << "svinAccLimit: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.svinAccLimit);
    s << indent << "reserved3[]" << std::endl;
    for (size_t i = 0; i < v.reserved3.size(); ++i)
    {
      s << indent << "  reserved3[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.reserved3[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // UBLOX_MSGS_MESSAGE_CFGTMODE3_H
