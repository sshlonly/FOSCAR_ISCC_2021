# This Python file uses the following encoding: utf-8
"""autogenerated by genpy from ublox_msgs/CfgSBAS.msg. Do not edit."""
import codecs
import sys
python3 = True if sys.hexversion > 0x03000000 else False
import genpy
import struct


class CfgSBAS(genpy.Message):
  _md5sum = "b03a1b853ac45d2da104aafaa036e7e8"
  _type = "ublox_msgs/CfgSBAS"
  _has_header = False  # flag to mark the presence of a Header object
  _full_text = """# CFG-SBAS (0x06 0x16)
# SBAS Configuration
#
# This message configures the SBAS receiver subsystem (i.e. WAAS, EGNOS, MSAS).
# See the SBAS Configuration Settings Description for a detailed description of
# how these settings affect receiver operation
#

uint8 CLASS_ID = 6
uint8 MESSAGE_ID = 22

uint8 mode              # SBAS Mode
uint8 MODE_ENABLED = 1    # SBAS Enabled (1) / Disabled (0)
                          #  This field is deprecated; use UBX-CFG-GNSS to 
                          # enable/disable SBAS operation
uint8 MODE_TEST = 2       # SBAS Testbed: Use data anyhow (1) / Ignore data when 
                          # in Test Mode (SBAS Msg 0)

uint8 usage             # SBAS Usage
uint8 USAGE_RANGE = 1     # Use SBAS GEOs as a ranging source (for navigation)
uint8 USAGE_DIFF_CORR = 2 # Use SBAS Differential Corrections
uint8 USAGE_INTEGRITY = 4 # Use SBAS Integrity Information

uint8 maxSBAS           # Maximum Number of SBAS prioritized tracking
                        # channels (valid range: 0 - 3) to use
                        # (obsolete and superseeded by UBX-CFG-GNSS in protocol
                        # versions 14+).


uint8 scanmode2         # Continuation of scanmode bitmask below
                        # PRN 152...158
uint32 scanmode1        # Which SBAS PRN numbers to search for (Bitmask)
                        # If all Bits are set to zero, auto-scan (i.e. all valid
                        # PRNs) are searched. Every bit corresponds to a PRN 
                        # number.
                        # PRN 120..151
"""
  # Pseudo-constants
  CLASS_ID = 6
  MESSAGE_ID = 22
  MODE_ENABLED = 1
  MODE_TEST = 2
  USAGE_RANGE = 1
  USAGE_DIFF_CORR = 2
  USAGE_INTEGRITY = 4

  __slots__ = ['mode','usage','maxSBAS','scanmode2','scanmode1']
  _slot_types = ['uint8','uint8','uint8','uint8','uint32']

  def __init__(self, *args, **kwds):
    """
    Constructor. Any message fields that are implicitly/explicitly
    set to None will be assigned a default value. The recommend
    use is keyword arguments as this is more robust to future message
    changes.  You cannot mix in-order arguments and keyword arguments.

    The available fields are:
       mode,usage,maxSBAS,scanmode2,scanmode1

    :param args: complete set of field values, in .msg order
    :param kwds: use keyword arguments corresponding to message field names
    to set specific fields.
    """
    if args or kwds:
      super(CfgSBAS, self).__init__(*args, **kwds)
      # message fields cannot be None, assign default values for those that are
      if self.mode is None:
        self.mode = 0
      if self.usage is None:
        self.usage = 0
      if self.maxSBAS is None:
        self.maxSBAS = 0
      if self.scanmode2 is None:
        self.scanmode2 = 0
      if self.scanmode1 is None:
        self.scanmode1 = 0
    else:
      self.mode = 0
      self.usage = 0
      self.maxSBAS = 0
      self.scanmode2 = 0
      self.scanmode1 = 0

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
      buff.write(_get_struct_4BI().pack(_x.mode, _x.usage, _x.maxSBAS, _x.scanmode2, _x.scanmode1))
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
      end += 8
      (_x.mode, _x.usage, _x.maxSBAS, _x.scanmode2, _x.scanmode1,) = _get_struct_4BI().unpack(str[start:end])
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
      buff.write(_get_struct_4BI().pack(_x.mode, _x.usage, _x.maxSBAS, _x.scanmode2, _x.scanmode1))
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
      end += 8
      (_x.mode, _x.usage, _x.maxSBAS, _x.scanmode2, _x.scanmode1,) = _get_struct_4BI().unpack(str[start:end])
      return self
    except struct.error as e:
      raise genpy.DeserializationError(e)  # most likely buffer underfill

_struct_I = genpy.struct_I
def _get_struct_I():
    global _struct_I
    return _struct_I
_struct_4BI = None
def _get_struct_4BI():
    global _struct_4BI
    if _struct_4BI is None:
        _struct_4BI = struct.Struct("<4BI")
    return _struct_4BI
