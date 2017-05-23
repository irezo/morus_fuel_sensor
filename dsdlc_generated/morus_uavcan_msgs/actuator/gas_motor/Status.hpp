/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\actuator\gas_motor\2011.Status.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_STATUS_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_STATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

#include <uavcan\Timestamp.hpp>

/******************************* Source text **********************************
#
# gas motor feedback, if available.
# Unknown fields should be set to NAN.
#

#
# Motor ID defines
#
uint8 FRONT = 1
uint8 RIGHT = 2
uint8 BACK = 3
uint8 LEFT = 4
uint8 ALL = 0

uavcan.Timestamp timestamp

uint8 motor_id	    	    # 1-front, 2-right, 3-back, 4-left

float32 force_M		        # measured force in Newton
float32 speed_M		        # measured rotational velocity radian per minute
float32 temperatureR_M	    # measured temperature right cylinder in Celsius degree
float32 temperatureL_M	    # measured temperature left cylinder in Celsius degree
float32 throttle_M			# measured throttle (0-1)
float32 fuel_level_M		# measured fuel level in % (range 0-1)
uint8 choke_M				# measured choke position (open/close)
float32 engine_hours		# total engine hours of gas motor

uint8 throttle_dyn_error	# throttle dynamixel error
uint8 choke_dyn_error		# throttle dynamixel error

uint8 ignition_S             # set ignition flag (0-off, 1-on)
uint16 starter_ppm_S         # set ppm value for e-starter (range 1000-1900)
float32 speed_S		        # set reference for gm velocity [rad/s]
float32 throttle_S			# set reference for throttle [range 0-1]
uint8 speed_ctl_S			# set value for speed control (0-off, 1-on)
uint8 choke_S				# set value for choke
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.actuator.gas_motor.Status
uavcan.Timestamp timestamp
saturated uint8 motor_id
saturated float32 force_M
saturated float32 speed_M
saturated float32 temperatureR_M
saturated float32 temperatureL_M
saturated float32 throttle_M
saturated float32 fuel_level_M
saturated uint8 choke_M
saturated float32 engine_hours
saturated uint8 throttle_dyn_error
saturated uint8 choke_dyn_error
saturated uint8 ignition_S
saturated uint16 starter_ppm_S
saturated float32 speed_S
saturated float32 throttle_S
saturated uint8 speed_ctl_S
saturated uint8 choke_S
******************************************************************************/

#undef timestamp
#undef motor_id
#undef force_M
#undef speed_M
#undef temperatureR_M
#undef temperatureL_M
#undef throttle_M
#undef fuel_level_M
#undef choke_M
#undef engine_hours
#undef throttle_dyn_error
#undef choke_dyn_error
#undef ignition_S
#undef starter_ppm_S
#undef speed_S
#undef throttle_S
#undef speed_ctl_S
#undef choke_S
#undef FRONT
#undef RIGHT
#undef BACK
#undef LEFT
#undef ALL

namespace morus_uavcan_msgs
{
namespace actuator
{
namespace gas_motor
{

template <int _tmpl>
struct UAVCAN_EXPORT Status_
{
    typedef const Status_<_tmpl>& ParameterType;
    typedef Status_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > FRONT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > RIGHT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > BACK;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > LEFT;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ALL;
    };

    struct FieldTypes
    {
        typedef ::uavcan::Timestamp timestamp;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > motor_id;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > force_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > speed_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > temperatureR_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > temperatureL_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > throttle_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > fuel_level_M;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > choke_M;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > engine_hours;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > throttle_dyn_error;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > choke_dyn_error;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > ignition_S;
        typedef ::uavcan::IntegerSpec< 16, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > starter_ppm_S;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > speed_S;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > throttle_S;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > speed_ctl_S;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > choke_S;
    };

    enum
    {
        MinBitLen
            = FieldTypes::timestamp::MinBitLen
            + FieldTypes::motor_id::MinBitLen
            + FieldTypes::force_M::MinBitLen
            + FieldTypes::speed_M::MinBitLen
            + FieldTypes::temperatureR_M::MinBitLen
            + FieldTypes::temperatureL_M::MinBitLen
            + FieldTypes::throttle_M::MinBitLen
            + FieldTypes::fuel_level_M::MinBitLen
            + FieldTypes::choke_M::MinBitLen
            + FieldTypes::engine_hours::MinBitLen
            + FieldTypes::throttle_dyn_error::MinBitLen
            + FieldTypes::choke_dyn_error::MinBitLen
            + FieldTypes::ignition_S::MinBitLen
            + FieldTypes::starter_ppm_S::MinBitLen
            + FieldTypes::speed_S::MinBitLen
            + FieldTypes::throttle_S::MinBitLen
            + FieldTypes::speed_ctl_S::MinBitLen
            + FieldTypes::choke_S::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::timestamp::MaxBitLen
            + FieldTypes::motor_id::MaxBitLen
            + FieldTypes::force_M::MaxBitLen
            + FieldTypes::speed_M::MaxBitLen
            + FieldTypes::temperatureR_M::MaxBitLen
            + FieldTypes::temperatureL_M::MaxBitLen
            + FieldTypes::throttle_M::MaxBitLen
            + FieldTypes::fuel_level_M::MaxBitLen
            + FieldTypes::choke_M::MaxBitLen
            + FieldTypes::engine_hours::MaxBitLen
            + FieldTypes::throttle_dyn_error::MaxBitLen
            + FieldTypes::choke_dyn_error::MaxBitLen
            + FieldTypes::ignition_S::MaxBitLen
            + FieldTypes::starter_ppm_S::MaxBitLen
            + FieldTypes::speed_S::MaxBitLen
            + FieldTypes::throttle_S::MaxBitLen
            + FieldTypes::speed_ctl_S::MaxBitLen
            + FieldTypes::choke_S::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::FRONT >::Type FRONT; // 1
    static const typename ::uavcan::StorageType< typename ConstantTypes::RIGHT >::Type RIGHT; // 2
    static const typename ::uavcan::StorageType< typename ConstantTypes::BACK >::Type BACK; // 3
    static const typename ::uavcan::StorageType< typename ConstantTypes::LEFT >::Type LEFT; // 4
    static const typename ::uavcan::StorageType< typename ConstantTypes::ALL >::Type ALL; // 0

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::timestamp >::Type timestamp;
    typename ::uavcan::StorageType< typename FieldTypes::motor_id >::Type motor_id;
    typename ::uavcan::StorageType< typename FieldTypes::force_M >::Type force_M;
    typename ::uavcan::StorageType< typename FieldTypes::speed_M >::Type speed_M;
    typename ::uavcan::StorageType< typename FieldTypes::temperatureR_M >::Type temperatureR_M;
    typename ::uavcan::StorageType< typename FieldTypes::temperatureL_M >::Type temperatureL_M;
    typename ::uavcan::StorageType< typename FieldTypes::throttle_M >::Type throttle_M;
    typename ::uavcan::StorageType< typename FieldTypes::fuel_level_M >::Type fuel_level_M;
    typename ::uavcan::StorageType< typename FieldTypes::choke_M >::Type choke_M;
    typename ::uavcan::StorageType< typename FieldTypes::engine_hours >::Type engine_hours;
    typename ::uavcan::StorageType< typename FieldTypes::throttle_dyn_error >::Type throttle_dyn_error;
    typename ::uavcan::StorageType< typename FieldTypes::choke_dyn_error >::Type choke_dyn_error;
    typename ::uavcan::StorageType< typename FieldTypes::ignition_S >::Type ignition_S;
    typename ::uavcan::StorageType< typename FieldTypes::starter_ppm_S >::Type starter_ppm_S;
    typename ::uavcan::StorageType< typename FieldTypes::speed_S >::Type speed_S;
    typename ::uavcan::StorageType< typename FieldTypes::throttle_S >::Type throttle_S;
    typename ::uavcan::StorageType< typename FieldTypes::speed_ctl_S >::Type speed_ctl_S;
    typename ::uavcan::StorageType< typename FieldTypes::choke_S >::Type choke_S;

    Status_()
        : timestamp()
        , motor_id()
        , force_M()
        , speed_M()
        , temperatureR_M()
        , temperatureL_M()
        , throttle_M()
        , fuel_level_M()
        , choke_M()
        , engine_hours()
        , throttle_dyn_error()
        , choke_dyn_error()
        , ignition_S()
        , starter_ppm_S()
        , speed_S()
        , throttle_S()
        , speed_ctl_S()
        , choke_S()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<416 == MaxBitLen>::check();
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
    enum { DefaultDataTypeID = 2011 };

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.actuator.gas_motor.Status";
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
bool Status_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        timestamp == rhs.timestamp &&
        motor_id == rhs.motor_id &&
        force_M == rhs.force_M &&
        speed_M == rhs.speed_M &&
        temperatureR_M == rhs.temperatureR_M &&
        temperatureL_M == rhs.temperatureL_M &&
        throttle_M == rhs.throttle_M &&
        fuel_level_M == rhs.fuel_level_M &&
        choke_M == rhs.choke_M &&
        engine_hours == rhs.engine_hours &&
        throttle_dyn_error == rhs.throttle_dyn_error &&
        choke_dyn_error == rhs.choke_dyn_error &&
        ignition_S == rhs.ignition_S &&
        starter_ppm_S == rhs.starter_ppm_S &&
        speed_S == rhs.speed_S &&
        throttle_S == rhs.throttle_S &&
        speed_ctl_S == rhs.speed_ctl_S &&
        choke_S == rhs.choke_S;
}

template <int _tmpl>
bool Status_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(timestamp, rhs.timestamp) &&
        ::uavcan::areClose(motor_id, rhs.motor_id) &&
        ::uavcan::areClose(force_M, rhs.force_M) &&
        ::uavcan::areClose(speed_M, rhs.speed_M) &&
        ::uavcan::areClose(temperatureR_M, rhs.temperatureR_M) &&
        ::uavcan::areClose(temperatureL_M, rhs.temperatureL_M) &&
        ::uavcan::areClose(throttle_M, rhs.throttle_M) &&
        ::uavcan::areClose(fuel_level_M, rhs.fuel_level_M) &&
        ::uavcan::areClose(choke_M, rhs.choke_M) &&
        ::uavcan::areClose(engine_hours, rhs.engine_hours) &&
        ::uavcan::areClose(throttle_dyn_error, rhs.throttle_dyn_error) &&
        ::uavcan::areClose(choke_dyn_error, rhs.choke_dyn_error) &&
        ::uavcan::areClose(ignition_S, rhs.ignition_S) &&
        ::uavcan::areClose(starter_ppm_S, rhs.starter_ppm_S) &&
        ::uavcan::areClose(speed_S, rhs.speed_S) &&
        ::uavcan::areClose(throttle_S, rhs.throttle_S) &&
        ::uavcan::areClose(speed_ctl_S, rhs.speed_ctl_S) &&
        ::uavcan::areClose(choke_S, rhs.choke_S);
}

template <int _tmpl>
int Status_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
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
    res = FieldTypes::motor_id::encode(self.motor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::force_M::encode(self.force_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_M::encode(self.speed_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperatureR_M::encode(self.temperatureR_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperatureL_M::encode(self.temperatureL_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_M::encode(self.throttle_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::fuel_level_M::encode(self.fuel_level_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_M::encode(self.choke_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::engine_hours::encode(self.engine_hours, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_dyn_error::encode(self.throttle_dyn_error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_dyn_error::encode(self.choke_dyn_error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ignition_S::encode(self.ignition_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::starter_ppm_S::encode(self.starter_ppm_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_S::encode(self.speed_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_S::encode(self.throttle_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_ctl_S::encode(self.speed_ctl_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_S::encode(self.choke_S, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int Status_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
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
    res = FieldTypes::motor_id::decode(self.motor_id, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::force_M::decode(self.force_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_M::decode(self.speed_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperatureR_M::decode(self.temperatureR_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::temperatureL_M::decode(self.temperatureL_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_M::decode(self.throttle_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::fuel_level_M::decode(self.fuel_level_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_M::decode(self.choke_M, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::engine_hours::decode(self.engine_hours, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_dyn_error::decode(self.throttle_dyn_error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_dyn_error::decode(self.choke_dyn_error, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::ignition_S::decode(self.ignition_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::starter_ppm_S::decode(self.starter_ppm_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_S::decode(self.speed_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::throttle_S::decode(self.throttle_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::speed_ctl_S::decode(self.speed_ctl_S, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::choke_S::decode(self.choke_S, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature Status_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0x1FB76F6C078BB2DEULL);

    FieldTypes::timestamp::extendDataTypeSignature(signature);
    FieldTypes::motor_id::extendDataTypeSignature(signature);
    FieldTypes::force_M::extendDataTypeSignature(signature);
    FieldTypes::speed_M::extendDataTypeSignature(signature);
    FieldTypes::temperatureR_M::extendDataTypeSignature(signature);
    FieldTypes::temperatureL_M::extendDataTypeSignature(signature);
    FieldTypes::throttle_M::extendDataTypeSignature(signature);
    FieldTypes::fuel_level_M::extendDataTypeSignature(signature);
    FieldTypes::choke_M::extendDataTypeSignature(signature);
    FieldTypes::engine_hours::extendDataTypeSignature(signature);
    FieldTypes::throttle_dyn_error::extendDataTypeSignature(signature);
    FieldTypes::choke_dyn_error::extendDataTypeSignature(signature);
    FieldTypes::ignition_S::extendDataTypeSignature(signature);
    FieldTypes::starter_ppm_S::extendDataTypeSignature(signature);
    FieldTypes::speed_S::extendDataTypeSignature(signature);
    FieldTypes::throttle_S::extendDataTypeSignature(signature);
    FieldTypes::speed_ctl_S::extendDataTypeSignature(signature);
    FieldTypes::choke_S::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::FRONT >::Type
    Status_<_tmpl>::FRONT = 1U; // 1

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::RIGHT >::Type
    Status_<_tmpl>::RIGHT = 2U; // 2

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::BACK >::Type
    Status_<_tmpl>::BACK = 3U; // 3

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::LEFT >::Type
    Status_<_tmpl>::LEFT = 4U; // 4

template <int _tmpl>
const typename ::uavcan::StorageType< typename Status_<_tmpl>::ConstantTypes::ALL >::Type
    Status_<_tmpl>::ALL = 0U; // 0

/*
 * Final typedef
 */
typedef Status_<0> Status;

namespace
{

const ::uavcan::DefaultDataTypeRegistrator< ::morus_uavcan_msgs::actuator::gas_motor::Status > _uavcan_gdtr_registrator_Status;

}

} // Namespace gas_motor
} // Namespace actuator
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::Status::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status >::stream(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::Status::ParameterType obj, const int level)
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
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::timestamp >::stream(s, obj.timestamp, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "motor_id: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::motor_id >::stream(s, obj.motor_id, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "force_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::force_M >::stream(s, obj.force_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "speed_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::speed_M >::stream(s, obj.speed_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "temperatureR_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::temperatureR_M >::stream(s, obj.temperatureR_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "temperatureL_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::temperatureL_M >::stream(s, obj.temperatureL_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "throttle_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::throttle_M >::stream(s, obj.throttle_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "fuel_level_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::fuel_level_M >::stream(s, obj.fuel_level_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "choke_M: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::choke_M >::stream(s, obj.choke_M, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "engine_hours: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::engine_hours >::stream(s, obj.engine_hours, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "throttle_dyn_error: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::throttle_dyn_error >::stream(s, obj.throttle_dyn_error, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "choke_dyn_error: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::choke_dyn_error >::stream(s, obj.choke_dyn_error, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "ignition_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::ignition_S >::stream(s, obj.ignition_S, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "starter_ppm_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::starter_ppm_S >::stream(s, obj.starter_ppm_S, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "speed_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::speed_S >::stream(s, obj.speed_S, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "throttle_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::throttle_S >::stream(s, obj.throttle_S, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "speed_ctl_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::speed_ctl_S >::stream(s, obj.speed_ctl_S, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "choke_S: ";
    YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status::FieldTypes::choke_S >::stream(s, obj.choke_S, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace actuator
{
namespace gas_motor
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::actuator::gas_motor::Status::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::actuator::gas_motor::Status >::stream(s, obj, 0);
    return s;
}

} // Namespace gas_motor
} // Namespace actuator
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_ACTUATOR_GAS_MOTOR_STATUS_HPP_INCLUDED