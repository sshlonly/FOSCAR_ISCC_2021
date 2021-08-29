# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/NavSTATUS.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class NavSTATUS(genpy.Message):
  _md5sum = "68047fb8ca04a038a6b031cd1a908762"
  _type = "ublox_msgs/NavSTATUS"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# NAV-STATUS (0x01 0x03)
# Receiver Navigation Status
#
# See important comments concerning validity of position and velocity given in
# section Navigation Output Filters.
#

uint8 CLASS_ID = 1
uint8 MESSAGE_ID = 3

uint32 iTOW             # GPS Millisecond time of week [ms]

uint8 gpsFix            # GPSfix Type, this value does not qualify a fix as
                        # valid and within the limits. See note on flag gpsFixOk
                        # below
uint8 GPS_NO_FIX = 0
uint8 GPS_DEAD_RECKONING_ONLY = 1
uint8 GPS_2D_FIX = 2
uint8 GPS_3D_FIX = 3
uint8 GPS_GPS_DEAD_RECKONING_COMBINED = 4
uint8 GPS_TIME_ONLY_FIX = 5

uint8 flags             # Navigation Status Flags
uint8 FLAGS_GPS_FIX_OK = 1      # position & velocity valid & within DOP & ACC 
                                # Masks
uint8 FLAGS_DIFF_SOLN = 2       # Differential corrections were applied
uint8 FLAGS_WKNSET = 4          # Week Number valid
uint8 FLAGS_TOWSET = 8          # Time of Week valid

uint8 fixStat           # Fix Status Information
uint8 FIX_STAT_DIFF_CORR_MASK = 1       # 1 = differential corrections available
# map matching status:
uint8 FIX_STAT_MAP_MATCHING_MASK = 192
uint8 MAP_MATCHING_NONE = 0      # none
uint8 MAP_MATCHING_VALID = 64    # valid but not used, i.e. map matching data 
                                 # was received, but was too old
uint8 MAP_MATCHING_USED = 128    # valid and used, map matching data was applied
uint8 MAP_MATCHING_DR = 192      # valid and used, map matching data was 
                                 # applied. In case of sensor unavailability map
                                 # matching data enables dead reckoning. 
                                 # This requires map matched latitude/longitude 
                                 # or heading data.

uint8 flags2            # further information about navigation output
# power safe mode state (Only for FW version >= 7.01; undefined otherwise)
uint8 FLAGS2_PSM_STATE_MASK = 3
uint8 PSM_STATE_ACQUISITION = 0                # ACQUISITION 
                                               # [or when psm disabled]
uint8 PSM_STATE_TRACKING = 1                   # TRACKING
uint8 PSM_STATE_POWER_OPTIMIZED_TRACKING = 2   # POWER OPTIMIZED TRACKING
uint8 PSM_STATE_INACTIVE = 3                   # INACTIVE
# Note that the spoofing state value only reflects the detector state for the 
# current navigation epoch. As spoofing can be detected most easily at the 
# transition from real signal to spoofing signal, this is also where the 
# detector is triggered the most. I.e. a value of 1 - No spoofing indicated does
# not mean that the receiver is not spoofed, it #simply states that the detector
# was not triggered in this epoch.
uint8 FLAGS2_SPOOF_DET_STATE_MASK = 24 
uint8 SPOOF_DET_STATE_UNKNOWN = 0    # Unknown or deactivated
uint8 SPOOF_DET_STATE_NONE = 8       # No spoofing indicated
uint8 SPOOF_DET_STATE_SPOOFING = 16  # Spoofing indicated
uint8 SPOOF_DET_STATE_MULTIPLE = 24  # Multiple spoofing indication

uint32 ttff             # Time to first fix (millisecond time tag) [ms]
uint32 msss             # Milliseconds since Startup / Reset [ms]
"""
  # Pseudo-constants
  CLASS_ID = 1
  MESSAGE_ID = 3
  GPS_NO_FIX = 0
  GPS_DEAD_RECKONING_ONLY = 1
  GPS_2D_FIX = 2
  GPS_3D_FIX = 3
  GPS_GPS_DEAD_RECKONING_COMBINED = 4
  GPS_TIME_ONLY_FIX = 5
  FLAGS_GPS_FIX_OK = 1
  FLAGS_DIFF_SOLN = 2
  FLAGS_WKNSET = 4
  FLAGS_TOWSET = 8
  FIX_STAT_DIFF_CORR_MASK = 1
  FIX_STAT_MAP_MATCHING_MASK = 192
  MAP_MATCHING_NONE = 0
  MAP_MATCHING_VALID = 64
  MAP_MATCHING_USED = 128
  MAP_MATCHING_DR = 192
  FLAGS2_PSM_STATE_MASK = 3
  PSM_STATE_ACQUISITION = 0
  PSM_STATE_TRACKING = 1
  PSM_STATE_POWER_OPTIMIZED_TRACKING = 2
  PSM_STATE_INACTIVE = 3
  FLAGS2_SPOOF_DET_STATE_MASK = 24
  SPOOF_DET_STATE_UNKNOWN = 0
  SPOOF_DET_STATE_NONE = 8
  SPOOF_DET_STATE_SPOOFING = 16
  SPOOF_DET_STATE_MULTIPLE = 24

  __slots__ = ['iTOW','gpsFix','flags','fixStat','flags2','ttff','msss']
  _slot_types = ['uint32','uint8','uint8','uint8','uint8','uint32','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       iTOW,gpsFix,flags,fixStat,flags2,ttff,msss

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(NavSTATUS, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.iTOW is None:
        self.iTOW = 0
      if self.gpsFix is None:
        self.gpsFix = 0
      if self.flags is None:
        self.flags = 0
      if self.fixStat is None:
        self.fixStat = 0
      if self.flags2 is None:
        self.flags2 = 0
      if self.ttff is None:
        self.ttff = 0
      if self.msss is None:
        self.msss = 0
    else:
      self.iTOW = 0
      self.gpsFix = 0
      self.flags = 0
      self.fixStat = 0
      self.flags2 = 0
      self.ttff = 0
      self.msss = 0

  def _get_types(self):
    """
    internal API method
    """
    return self._slot_types

  def serialize(self, buff):
    """
    serialize message into buffer
    :param buff: buffer, ``StringIO``
    """
    try:
      _x = self
      buff.write(_get_struct_I4B2I().pack(_x.iTOW, _x.gpsFix, _x.flags, _x.fixStat, _x.flags2, _x.ttff, _x.msss))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize(self, str):
    """
    unpack serialized message in str into this message instance
    :param str: byte array of serialized message, ``str``
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 16
      (_x.iTOW, _x.gpsFix, _x.flags, _x.fixStat, _x.flags2, _x.ttff, _x.msss,) = _get_struct_I4B2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill


  def serialize_numpy(self, buff, numpy):
    """
    serialize message with numpy array types into buffer
    :param buff: buffer, ``StringIO``
    :param numpy: numpy python module
    """
    try:
      _x = self
      buff.write(_get_struct_I4B2I().pack(_x.iTOW, _x.gpsFix, _x.flags, _x.fixStat, _x.flags2, _x.ttff, _x.msss))
    except struct.error as se: self._check_types(struct.error("%s: '%s' when writing '%s'" % (type(se), str(se), str(locals().get('_x', self)))))
    except TypeError as te: self._check_types(ValueError("%s: '%s' when writing '%s'" % (type(te), str(te), str(locals().get('_x', self)))))

  def deserialize_numpy(self, str, numpy):
    """
    unpack serialized message in str into this message instance using numpy for array types
    :param str: byte array of serialized message, ``str``
    :param numpy: numpy python module
    """
    codecs.lookup_error("rosmsg").msg_type = self._type
    try:
      end = 0
      _x = self
      start = end
      end += 16
      (_x.iTOW, _x.gpsFix, _x.flags, _x.fixStat, _x.flags2, _x.ttff, _x.msss,) = _get_struct_I4B2I().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_I4B2I = None
def _get_struct_I4B2I():
    global _struct_I4B2I
    if _struct_I4B2I is None:
        _struct_I4B2I = struct.Struct("<I4B2I")
    return _struct_I4B2I
