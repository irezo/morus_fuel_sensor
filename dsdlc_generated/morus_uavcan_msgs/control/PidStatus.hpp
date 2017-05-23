/*
 * UAVCAN data structure definition for libuavcan.
 *
 * Autogenerated, do not edit.
 *
 * Source file: C:\Users\Marko\Documents\Development\morus_fuel_sensor\morus_uavcan_msgs\control\PidStatus.uavcan
 */

#ifndef MORUS_UAVCAN_MSGS_CONTROL_PIDSTATUS_HPP_INCLUDED
#define MORUS_UAVCAN_MSGS_CONTROL_PIDSTATUS_HPP_INCLUDED

#include <uavcan/build_config.hpp>
#include <uavcan/node/global_data_type_registry.hpp>
#include <uavcan/marshal/types.hpp>

/******************************* Source text **********************************
#
# Add comment.
#

uint8 MANUAL = 0
uint8 AUTO = 1

#uint8   mode                            # mode of the controller use auto or manual

#float32 gain_proportional      	        # proportional gain
#float32 gain_integral      	            # integral gain
#float32 gain_derivative      	        # derivative gain

#float32 sample_rate                     # controller sample time

float32 setpoint			            # controller setpoint
float32 feedback			            # controller measured value

float32 output                          # controller output
#float32 output_proportional             # proportional controller output
#float32 output_integral                 # integral controller output
#float32 output_derivative               # derivative controller output
******************************************************************************/

/********************* DSDL signature source definition ***********************
morus_uavcan_msgs.control.PidStatus
saturated float32 setpoint
saturated float32 feedback
saturated float32 output
******************************************************************************/

#undef setpoint
#undef feedback
#undef output
#undef MANUAL
#undef AUTO

namespace morus_uavcan_msgs
{
namespace control
{

template <int _tmpl>
struct UAVCAN_EXPORT PidStatus_
{
    typedef const PidStatus_<_tmpl>& ParameterType;
    typedef PidStatus_<_tmpl>& ReferenceType;

    struct ConstantTypes
    {
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > MANUAL;
        typedef ::uavcan::IntegerSpec< 8, ::uavcan::SignednessUnsigned, ::uavcan::CastModeSaturate > AUTO;
    };

    struct FieldTypes
    {
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > setpoint;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > feedback;
        typedef ::uavcan::FloatSpec< 32, ::uavcan::CastModeSaturate > output;
    };

    enum
    {
        MinBitLen
            = FieldTypes::setpoint::MinBitLen
            + FieldTypes::feedback::MinBitLen
            + FieldTypes::output::MinBitLen
    };

    enum
    {
        MaxBitLen
            = FieldTypes::setpoint::MaxBitLen
            + FieldTypes::feedback::MaxBitLen
            + FieldTypes::output::MaxBitLen
    };

    // Constants
    static const typename ::uavcan::StorageType< typename ConstantTypes::MANUAL >::Type MANUAL; // 0
    static const typename ::uavcan::StorageType< typename ConstantTypes::AUTO >::Type AUTO; // 1

    // Fields
    typename ::uavcan::StorageType< typename FieldTypes::setpoint >::Type setpoint;
    typename ::uavcan::StorageType< typename FieldTypes::feedback >::Type feedback;
    typename ::uavcan::StorageType< typename FieldTypes::output >::Type output;

    PidStatus_()
        : setpoint()
        , feedback()
        , output()
    {
        ::uavcan::StaticAssert<_tmpl == 0>::check();  // Usage check

#if UAVCAN_DEBUG
        /*
         * Cross-checking MaxBitLen provided by the DSDL compiler.
         * This check shall never be performed in user code because MaxBitLen value
         * actually depends on the nested types, thus it is not invariant.
         */
        ::uavcan::StaticAssert<96 == MaxBitLen>::check();
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
    // This type has no default data type ID

    static const char* getDataTypeFullName()
    {
        return "morus_uavcan_msgs.control.PidStatus";
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
bool PidStatus_<_tmpl>::operator==(ParameterType rhs) const
{
    return
        setpoint == rhs.setpoint &&
        feedback == rhs.feedback &&
        output == rhs.output;
}

template <int _tmpl>
bool PidStatus_<_tmpl>::isClose(ParameterType rhs) const
{
    return
        ::uavcan::areClose(setpoint, rhs.setpoint) &&
        ::uavcan::areClose(feedback, rhs.feedback) &&
        ::uavcan::areClose(output, rhs.output);
}

template <int _tmpl>
int PidStatus_<_tmpl>::encode(ParameterType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::setpoint::encode(self.setpoint, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::feedback::encode(self.feedback, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output::encode(self.output, codec,  tao_mode);
    return res;
}

template <int _tmpl>
int PidStatus_<_tmpl>::decode(ReferenceType self, ::uavcan::ScalarCodec& codec,
    ::uavcan::TailArrayOptimizationMode tao_mode)
{
    (void)self;
    (void)codec;
    (void)tao_mode;
    int res = 1;
    res = FieldTypes::setpoint::decode(self.setpoint, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::feedback::decode(self.feedback, codec,  ::uavcan::TailArrayOptDisabled);
    if (res <= 0)
    {
        return res;
    }
    res = FieldTypes::output::decode(self.output, codec,  tao_mode);
    return res;
}

/*
 * Out of line type method definitions
 */
template <int _tmpl>
::uavcan::DataTypeSignature PidStatus_<_tmpl>::getDataTypeSignature()
{
    ::uavcan::DataTypeSignature signature(0xD87B1046E7EBB100ULL);

    FieldTypes::setpoint::extendDataTypeSignature(signature);
    FieldTypes::feedback::extendDataTypeSignature(signature);
    FieldTypes::output::extendDataTypeSignature(signature);

    return signature;
}

/*
 * Out of line constant definitions
 */

template <int _tmpl>
const typename ::uavcan::StorageType< typename PidStatus_<_tmpl>::ConstantTypes::MANUAL >::Type
    PidStatus_<_tmpl>::MANUAL = 0U; // 0

template <int _tmpl>
const typename ::uavcan::StorageType< typename PidStatus_<_tmpl>::ConstantTypes::AUTO >::Type
    PidStatus_<_tmpl>::AUTO = 1U; // 1

/*
 * Final typedef
 */
typedef PidStatus_<0> PidStatus;

// No default registration

} // Namespace control
} // Namespace morus_uavcan_msgs

/*
 * YAML streamer specialization
 */
namespace uavcan
{

template <>
class UAVCAN_EXPORT YamlStreamer< ::morus_uavcan_msgs::control::PidStatus >
{
public:
    template <typename Stream>
    static void stream(Stream& s, ::morus_uavcan_msgs::control::PidStatus::ParameterType obj, const int level);
};

template <typename Stream>
void YamlStreamer< ::morus_uavcan_msgs::control::PidStatus >::stream(Stream& s, ::morus_uavcan_msgs::control::PidStatus::ParameterType obj, const int level)
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
    s << "setpoint: ";
    YamlStreamer< ::morus_uavcan_msgs::control::PidStatus::FieldTypes::setpoint >::stream(s, obj.setpoint, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "feedback: ";
    YamlStreamer< ::morus_uavcan_msgs::control::PidStatus::FieldTypes::feedback >::stream(s, obj.feedback, level + 1);
    s << '\n';
    for (int pos = 0; pos < level; pos++)
    {
        s << "  ";
    }
    s << "output: ";
    YamlStreamer< ::morus_uavcan_msgs::control::PidStatus::FieldTypes::output >::stream(s, obj.output, level + 1);
}

}

namespace morus_uavcan_msgs
{
namespace control
{

template <typename Stream>
inline Stream& operator<<(Stream& s, ::morus_uavcan_msgs::control::PidStatus::ParameterType obj)
{
    ::uavcan::YamlStreamer< ::morus_uavcan_msgs::control::PidStatus >::stream(s, obj, 0);
    return s;
}

} // Namespace control
} // Namespace morus_uavcan_msgs

#endif // MORUS_UAVCAN_MSGS_CONTROL_PIDSTATUS_HPP_INCLUDED