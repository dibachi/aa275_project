// Generated by gencpp from file ccmslam_msgs/MPred.msg
// DO NOT EDIT!


#ifndef CCMSLAM_MSGS_MESSAGE_MPRED_H
#define CCMSLAM_MSGS_MESSAGE_MPRED_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace ccmslam_msgs
{
template <class ContainerAllocator>
struct MPred_
{
  typedef MPred_<ContainerAllocator> Type;

  MPred_()
    : mnId(0)
    , mClientId(0)
    , mUniqueId(0)
    , mbAck(false)
    , mPosPred()
    , mPosPar()
    , mbNormalAndDepthChanged(false)
    , mbServerBA(false)
    , mpPredKFId(0)
    , mpPredKFClientId(0)
    , mpParKFId(0)
    , mpParKFClientId(0)
    , mbBad(false)
    , mbMultiUse(false)  {
      mPosPred.assign(0.0);

      mPosPar.assign(0.0);
  }
  MPred_(const ContainerAllocator& _alloc)
    : mnId(0)
    , mClientId(0)
    , mUniqueId(0)
    , mbAck(false)
    , mPosPred()
    , mPosPar()
    , mbNormalAndDepthChanged(false)
    , mbServerBA(false)
    , mpPredKFId(0)
    , mpPredKFClientId(0)
    , mpParKFId(0)
    , mpParKFClientId(0)
    , mbBad(false)
    , mbMultiUse(false)  {
  (void)_alloc;
      mPosPred.assign(0.0);

      mPosPar.assign(0.0);
  }



   typedef uint32_t _mnId_type;
  _mnId_type mnId;

   typedef uint8_t _mClientId_type;
  _mClientId_type mClientId;

   typedef uint32_t _mUniqueId_type;
  _mUniqueId_type mUniqueId;

   typedef uint8_t _mbAck_type;
  _mbAck_type mbAck;

   typedef boost::array<float, 3>  _mPosPred_type;
  _mPosPred_type mPosPred;

   typedef boost::array<float, 3>  _mPosPar_type;
  _mPosPar_type mPosPar;

   typedef uint8_t _mbNormalAndDepthChanged_type;
  _mbNormalAndDepthChanged_type mbNormalAndDepthChanged;

   typedef uint8_t _mbServerBA_type;
  _mbServerBA_type mbServerBA;

   typedef uint16_t _mpPredKFId_type;
  _mpPredKFId_type mpPredKFId;

   typedef uint8_t _mpPredKFClientId_type;
  _mpPredKFClientId_type mpPredKFClientId;

   typedef uint16_t _mpParKFId_type;
  _mpParKFId_type mpParKFId;

   typedef uint8_t _mpParKFClientId_type;
  _mpParKFClientId_type mpParKFClientId;

   typedef uint8_t _mbBad_type;
  _mbBad_type mbBad;

   typedef uint8_t _mbMultiUse_type;
  _mbMultiUse_type mbMultiUse;





  typedef boost::shared_ptr< ::ccmslam_msgs::MPred_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::ccmslam_msgs::MPred_<ContainerAllocator> const> ConstPtr;

}; // struct MPred_

typedef ::ccmslam_msgs::MPred_<std::allocator<void> > MPred;

typedef boost::shared_ptr< ::ccmslam_msgs::MPred > MPredPtr;
typedef boost::shared_ptr< ::ccmslam_msgs::MPred const> MPredConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::ccmslam_msgs::MPred_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::ccmslam_msgs::MPred_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace ccmslam_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/melodic/share/std_msgs/cmake/../msg'], 'sensor_msgs': ['/opt/ros/melodic/share/sensor_msgs/cmake/../msg'], 'geometry_msgs': ['/opt/ros/melodic/share/geometry_msgs/cmake/../msg'], 'ccmslam_msgs': ['/home/ros-industrial/ccmslam_ws/src/ccm_slam/cslam_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::ccmslam_msgs::MPred_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::ccmslam_msgs::MPred_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ccmslam_msgs::MPred_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::ccmslam_msgs::MPred_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ccmslam_msgs::MPred_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::ccmslam_msgs::MPred_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::ccmslam_msgs::MPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "21094d2cad6492bf5fe5dbf4f7793049";
  }

  static const char* value(const ::ccmslam_msgs::MPred_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x21094d2cad6492bfULL;
  static const uint64_t static_value2 = 0x5fe5dbf4f7793049ULL;
};

template<class ContainerAllocator>
struct DataType< ::ccmslam_msgs::MPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "ccmslam_msgs/MPred";
  }

  static const char* value(const ::ccmslam_msgs::MPred_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::ccmslam_msgs::MPred_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint32 mnId # unique MP id\n\
uint8 mClientId # client id\n\
uint32 mUniqueId\n\
bool mbAck\n\
\n\
#Position in absolute coordinates\n\
     float32[3] mPosPred\n\
     float32[3] mPosPar\n\
\n\
     bool mbNormalAndDepthChanged\n\
\n\
    bool mbServerBA\n\
\n\
#Reference KeyFrame\n\
     uint16 mpPredKFId\n\
     uint8 mpPredKFClientId\n\
     uint16 mpParKFId\n\
     uint8 mpParKFClientId\n\
\n\
#Bad flag\n\
     bool mbBad\n\
\n\
#Visualization\n\
     bool mbMultiUse\n\
";
  }

  static const char* value(const ::ccmslam_msgs::MPred_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::ccmslam_msgs::MPred_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.mnId);
      stream.next(m.mClientId);
      stream.next(m.mUniqueId);
      stream.next(m.mbAck);
      stream.next(m.mPosPred);
      stream.next(m.mPosPar);
      stream.next(m.mbNormalAndDepthChanged);
      stream.next(m.mbServerBA);
      stream.next(m.mpPredKFId);
      stream.next(m.mpPredKFClientId);
      stream.next(m.mpParKFId);
      stream.next(m.mpParKFClientId);
      stream.next(m.mbBad);
      stream.next(m.mbMultiUse);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct MPred_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::ccmslam_msgs::MPred_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::ccmslam_msgs::MPred_<ContainerAllocator>& v)
  {
    s << indent << "mnId: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mnId);
    s << indent << "mClientId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mClientId);
    s << indent << "mUniqueId: ";
    Printer<uint32_t>::stream(s, indent + "  ", v.mUniqueId);
    s << indent << "mbAck: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mbAck);
    s << indent << "mPosPred[]" << std::endl;
    for (size_t i = 0; i < v.mPosPred.size(); ++i)
    {
      s << indent << "  mPosPred[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mPosPred[i]);
    }
    s << indent << "mPosPar[]" << std::endl;
    for (size_t i = 0; i < v.mPosPar.size(); ++i)
    {
      s << indent << "  mPosPar[" << i << "]: ";
      Printer<float>::stream(s, indent + "  ", v.mPosPar[i]);
    }
    s << indent << "mbNormalAndDepthChanged: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mbNormalAndDepthChanged);
    s << indent << "mbServerBA: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mbServerBA);
    s << indent << "mpPredKFId: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mpPredKFId);
    s << indent << "mpPredKFClientId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mpPredKFClientId);
    s << indent << "mpParKFId: ";
    Printer<uint16_t>::stream(s, indent + "  ", v.mpParKFId);
    s << indent << "mpParKFClientId: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mpParKFClientId);
    s << indent << "mbBad: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mbBad);
    s << indent << "mbMultiUse: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.mbMultiUse);
  }
};

} // namespace message_operations
} // namespace ros

#endif // CCMSLAM_MSGS_MESSAGE_MPRED_H