/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\control\2030.Mode.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_CONTROL_MODE_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_CONTROL_MODE_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <morus_uavcan_msgs\actuator\gas_motor\Ignition.hpp>
#include <uavcan\Timestamp.hpp>

/******************************* Source text **********************************
#
# Add comment.
#

uavcan.Timestamp timestamp

uint8 ARMED = 1                     # vehicle armed
uint8 DISARMED = 0                 # vehicle disarmed
uint8 AUTO = 1                      # controller in automatic mode
uint8 MANUAL = 0                   # controller in manual mode

uint8 armed                          # values ARMED or DISARMED

uint8 controller_x                   # values AUTO or MAN
uint8 controller_y                   # values AUTO or MAN
uint8 controller_z                   # values AUTO or MAN

uint8 controller_velocity_x          # values AUTO or MAN
uint8 controller_velocity_y          # values AUTO or MAN
uint8 controller_velocity_z          # values AUTO or MAN

uint8 controller_yaw                 # values AUTO or MAN
uint8 controller_yaw_rate            # values AUTO or MAN

morus_uavcan_msgs.actuator.gas_motor.Ignition ignition       # ignition set point
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.control.Mode
uavcan.Timestamp timestamp
saturated uint8 armed
saturated uint8 controller_x
saturated uint8 controller_y
saturated uint8 controller_z
saturated uint8 controller_velocity_x
saturated uint8 controller_velocity_y
saturated uint8 controller_velocity_z
saturated uint8 controller_yaw
saturated uint8 controller_yaw_rate
morus_uavcan_msgs.actuator.gas_motor.Ignition ignition
******************************************************************************/

#undef timestamp
#undef armed
#undef controller_x
#undef controller_y
#undef controller_z
#undef controller_velocity_x
#undef controller_velocity_y
#undef controller_velocity_z
#undef controller_yaw
#undef controller_yaw_rate
#undef ignition
#undef ARMED
#undef DISARMED
#undef AUTO
#undef MANUAL

namespace morus_uavcan_msgs
{
namespace control
{

template <int _tmpl>
struct UAVCAN_EXPORT Mode_
{
    typedef const Mode_<_tmpl>& ParameterType;
    typedef Mode_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ARMED;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > DISARMED;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > AUTO;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MANUAL;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > armed;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_x;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_y;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_z;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_velocity_x;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_velocity_y;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_velocity_z;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_yaw;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > controller_yaw_rate;
        typedef ::morus_uavcan_msgs::actuator::gas_motor::Ignition ignition;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::armed::MinBitLen
            + FieldTypes::controller_x::MinBitLen
            + FieldTypes::controller_y::MinBitLen
            + FieldTypes::controller_z::MinBitLen
            + FieldTypes::controller_velocity_x::MinBitLen
            + FieldTypes::controller_velocity_y::MinBitLen
            + FieldTypes::controller_velocity_z::MinBitLen
            + FieldTypes::controller_yaw::MinBitLen
            + FieldTypes::controller_yaw_rate::MinBitLen
            + FieldTypes::ignition::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::armed::MaxBitLen
            + FieldTypes::controller_x::MaxBitLen
            + FieldTypes::controller_y::MaxBitLen
            + FieldTypes::controller_z::MaxBitLen
            + FieldTypes::controller_velocity_x::MaxBitLen
            + FieldTypes::controller_velocity_y::MaxBitLen
            + FieldTypes::controller_velocity_z::MaxBitLen
            + FieldTypes::controller_yaw::MaxBitLen
            + FieldTypes::controller_yaw_rate::MaxBitLen
            + FieldTypes::ignition::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::ARMED >::Type ARMED; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::DISARMED >::Type DISARMED; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::AUTO >::Type AUTO; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::MANUAL >::Type MANUAL; // 0

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::armed >::Type armed;
    typename ::uavcan::StorageType< typename FieldTypes::controller_x >::Type controller_x;
    typename ::uavcan::StorageType< typename FieldTypes::controller_y >::Type controller_y;
    typename ::uavcan::StorageType< typename FieldTypes::controller_z >::Type controller_z;
    typename ::uavcan::StorageType< typename FieldTypes::controller_velocity_x >::Type controller_velocity_x;
    typename ::uavcan::StorageType< typename FieldTypes::controller_velocity_y >::Type controller_velocity_y;
    typename ::uavcan::StorageType< typename FieldTypes::controller_velocity_z >::Type controller_velocity_z;
    typename ::uavcan::StorageType< typename FieldTypes::controller_yaw >::Type controller_yaw;
    typename ::uavcan::StorageType< typename FieldTypes::controller_yaw_rate >::Type controller_yaw_rate;
    typename ::uavcan::StorageType< typename FieldTypes::ignition >::Type ignition;

    Mode_()
        : timestamp()
        , armed()
        , controller_x()
        , controller_y()
        , controller_z()
        , controller_velocity_x()
        , controller_velocity_y()
        , controller_velocity_z()
        , controller_yaw()
        , controller_yaw_rate()
        , ignition()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<144 == MaxBitLen>::check();
#endif
    }

    bool operator==(ParameterType rhs) const;
    bool operator!=(ParameterType rhs) const { return !operator==(rhs); }

    /**
     * This comparison is based on @ref uavcan::areClose(), which ensures proper comparison of
     * floating point fields at any depth.
     */
    bool isClose(ParameterType rhs) const;

    static int encode(ParameterType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    static int decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
                      ::uavcan::TailArrayOptimizationMode tao_mode = ::uavcan::TailArrayOptEnabled);

    /*
     * Static type info
     */
    enum { DataTypeKind = ::uavcan::DataTypeKindMessage };
    enum { DefaultDataTypeID = 2030 };

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.control.Mode";
    }

    static void extendDataTypeSignature(::uavcan::DataTypeSignature& signature)
    {
        signature.extend(getDataTypeSignature());
    }

    static ::uavcan::DataTypeSignature getDataTypeSignature();

};

/*
 * Out of line struct method definitions
 */

template <int _tmpl>
bool Mode_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        armed == rhs.armed &&
        controller_x == rhs.controller_x &&
        controller_y == rhs.controller_y &&
        controller_z == rhs.controller_z &&
        controller_velocity_x == rhs.controller_velocity_x &&
        controller_velocity_y == rhs.controller_velocity_y &&
        controller_velocity_z == rhs.controller_velocity_z &&
        controller_yaw == rhs.controller_yaw &&
        controller_yaw_rate == rhs.controller_yaw_rate &&
        ignition == rhs.ignition;
}

template <int _tmpl>
bool Mode_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(armed, rhs.armed) &&
        ::uavcan::areClose(controller_x, rhs.controller_x) &&
        ::uavcan::areClose(controller_y, rhs.controller_y) &&
        ::uavcan::areClose(controller_z, rhs.controller_z) &&
        ::uavcan::areClose(controller_velocity_x, rhs.controller_velocity_x) &&
        ::uavcan::areClose(controller_velocity_y, rhs.controller_velocity_y) &&
        ::uavcan::areClose(controller_velocity_z, rhs.controller_velocity_z) &&
        ::uavcan::areClose(controller_yaw, rhs.controller_yaw) &&
        ::uavcan::areClose(controller_yaw_rate, rhs.controller_yaw_rate) &&
        ::uavcan::areClose(ignition, rhs.ignition);
}

template <int _tmpl>
int Mode_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::encode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::armed::encode(self.armed, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_x::encode(self.controller_x, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_y::encode(self.controller_y, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_z::encode(self.controller_z, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_x::encode(self.controller_velocity_x, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_y::encode(self.controller_velocity_y, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_z::encode(self.controller_velocity_z, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_yaw::encode(self.controller_yaw, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_yaw_rate::encode(self.controller_yaw_rate, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ignition::encode(self.ignition, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Mode_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::timestamp::decode(self.timestamp, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::armed::decode(self.armed, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_x::decode(self.controller_x, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_y::decode(self.controller_y, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_z::decode(self.controller_z, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_x::decode(self.controller_velocity_x, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_y::decode(self.controller_velocity_y, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_velocity_z::decode(self.controller_velocity_z, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_yaw::decode(self.controller_yaw, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::controller_yaw_rate::decode(self.controller_yaw_rate, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ignition::decode(self.ignition, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Mode_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x337974C3A50A91A9ULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::armed::extendDataTypeSignature(signature);
    FieldTypes::controller_x::extendDataTypeSignature(signature);
    FieldTypes::controller_y::extendDataTypeSignature(signature);
    FieldTypes::controller_z::extendDataTypeSignature(signature);
    FieldTypes::controller_velocity_x::extendDataTypeSignature(signature);
    FieldTypes::controller_velocity_y::extendDataTypeSignature(signature);
    FieldTypes::controller_velocity_z::extendDataTypeSignature(signature);
    FieldTypes::controller_yaw::extendDataTypeSignature(signature);
    FieldTypes::controller_yaw_rate::extendDataTypeSignature(signature);
    FieldTypes::ignition::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Mode_<_tmpl>::ConstantTypes::ARMED >::Type
    Mode_<_tmpl>::ARMED = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Mode_<_tmpl>::ConstantTypes::DISARMED >::Type
    Mode_<_tmpl>::DISARMED = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename Mode_<_tmpl>::ConstantTypes::AUTO >::Type
    Mode_<_tmpl>::AUTO = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Mode_<_tmpl>::ConstantTypes::MANUAL >::Type
    Mode_<_tmpl>::MANUAL = 0U; // 0

/*
 * Final typedef
 */
typedef Mode_<0> Mode;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::morus_uavcan_msgs::control::Mode > _uavcan_gdtr_registrator_Mode;

}

} // Namespace control
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::control::Mode >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::control::Mode::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::control::Mode >::stream(Stream& s, ::morus_uavcan_msgs::control::Mode::ParameterType obj, const int level)
{
    (void)s;
    (void)obj;
    (void)level;
    if (level > 0)
    {
        s << '\n';
        for (int pos = 0; pos < level; pos++)
        {
            s << "  ";
        }
    }
    s << "timestamp: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "armed: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::armed >::stream(s, obj.armed, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_x: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_x >::stream(s, obj.controller_x, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_y: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_y >::stream(s, obj.controller_y, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_z: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_z >::stream(s, obj.controller_z, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_velocity_x: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_velocity_x >::stream(s, obj.controller_velocity_x, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_velocity_y: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_velocity_y >::stream(s, obj.controller_velocity_y, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_velocity_z: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_velocity_z >::stream(s, obj.controller_velocity_z, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_yaw: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_yaw >::stream(s, obj.controller_yaw, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "controller_yaw_rate: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::controller_yaw_rate >::stream(s, obj.controller_yaw_rate, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ignition: ";
    YamlStreamer< ::morus_uavcan_msgs::control::Mode::FieldTypes::ignition >::stream(s, obj.ignition, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace control
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::control::Mode::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::control::Mode >::stream(s, obj, 0);
    return s;
}

} // Namespace control
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_CONTROL_MODE_HPP_INCLUDED