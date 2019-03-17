/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.3 at Tue Mar 12 00:48:03 2019. */

#include "nanopb.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

const IntSize NanoPBOptions_int_size_default = IntSize_IS_DEFAULT;
const FieldType NanoPBOptions_type_default = FieldType_FT_DEFAULT;
const bool NanoPBOptions_long_names_default = true;
const bool NanoPBOptions_packed_struct_default = false;
const bool NanoPBOptions_packed_enum_default = false;
const bool NanoPBOptions_skip_message_default = false;
const bool NanoPBOptions_no_unions_default = false;
const bool NanoPBOptions_anonymous_oneof_default = false;
const bool NanoPBOptions_proto3_default = false;
const bool NanoPBOptions_enum_to_string_default = false;
const bool NanoPBOptions_fixed_length_default = false;
const bool NanoPBOptions_fixed_count_default = false;
const TypenameMangling NanoPBOptions_mangle_names_default = TypenameMangling_M_NONE;


const pb_field_t NanoPBOptions_fields[18] = {
    PB_FIELD(  1, INT32   , OPTIONAL, STATIC  , FIRST, NanoPBOptions, max_size, max_size, 0),
    PB_FIELD(  2, INT32   , OPTIONAL, STATIC  , OTHER, NanoPBOptions, max_count, max_size, 0),
    PB_FIELD(  3, UENUM   , OPTIONAL, STATIC  , OTHER, NanoPBOptions, type, max_count, &NanoPBOptions_type_default),
    PB_FIELD(  4, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, long_names, type, &NanoPBOptions_long_names_default),
    PB_FIELD(  5, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, packed_struct, long_names, &NanoPBOptions_packed_struct_default),
    PB_FIELD(  6, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, skip_message, packed_struct, &NanoPBOptions_skip_message_default),
    PB_FIELD(  7, UENUM   , OPTIONAL, STATIC  , OTHER, NanoPBOptions, int_size, skip_message, &NanoPBOptions_int_size_default),
    PB_FIELD(  8, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, no_unions, int_size, &NanoPBOptions_no_unions_default),
    PB_FIELD(  9, UINT32  , OPTIONAL, STATIC  , OTHER, NanoPBOptions, msgid, no_unions, 0),
    PB_FIELD( 10, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, packed_enum, msgid, &NanoPBOptions_packed_enum_default),
    PB_FIELD( 11, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, anonymous_oneof, packed_enum, &NanoPBOptions_anonymous_oneof_default),
    PB_FIELD( 12, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, proto3, anonymous_oneof, &NanoPBOptions_proto3_default),
    PB_FIELD( 13, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, enum_to_string, proto3, &NanoPBOptions_enum_to_string_default),
    PB_FIELD( 14, INT32   , OPTIONAL, STATIC  , OTHER, NanoPBOptions, max_length, enum_to_string, 0),
    PB_FIELD( 15, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, fixed_length, max_length, &NanoPBOptions_fixed_length_default),
    PB_FIELD( 16, BOOL    , OPTIONAL, STATIC  , OTHER, NanoPBOptions, fixed_count, fixed_length, &NanoPBOptions_fixed_count_default),
    PB_FIELD( 17, UENUM   , OPTIONAL, STATIC  , OTHER, NanoPBOptions, mangle_names, fixed_count, &NanoPBOptions_mangle_names_default),
    PB_LAST_FIELD
};

typedef struct {
    NanoPBOptions nanopb_fileopt;
} nanopb_fileopt_struct;

static const pb_field_t nanopb_fileopt_field = 
      PB_FIELD(1010, MESSAGE , OPTEXT, STATIC  , FIRST, nanopb_fileopt_struct, nanopb_fileopt, nanopb_fileopt, &NanoPBOptions_fields);

const pb_extension_type_t nanopb_fileopt = {
    NULL,
    NULL,
    &nanopb_fileopt_field
};

typedef struct {
    NanoPBOptions nanopb_msgopt;
} nanopb_msgopt_struct;

static const pb_field_t nanopb_msgopt_field = 
      PB_FIELD(1010, MESSAGE , OPTEXT, STATIC  , FIRST, nanopb_msgopt_struct, nanopb_msgopt, nanopb_msgopt, &NanoPBOptions_fields);

const pb_extension_type_t nanopb_msgopt = {
    NULL,
    NULL,
    &nanopb_msgopt_field
};

typedef struct {
    NanoPBOptions nanopb_enumopt;
} nanopb_enumopt_struct;

static const pb_field_t nanopb_enumopt_field = 
      PB_FIELD(1010, MESSAGE , OPTEXT, STATIC  , FIRST, nanopb_enumopt_struct, nanopb_enumopt, nanopb_enumopt, &NanoPBOptions_fields);

const pb_extension_type_t nanopb_enumopt = {
    NULL,
    NULL,
    &nanopb_enumopt_field
};

typedef struct {
    NanoPBOptions nanopb;
} nanopb_struct;

static const pb_field_t nanopb_field = 
      PB_FIELD(1010, MESSAGE , OPTEXT, STATIC  , FIRST, nanopb_struct, nanopb, nanopb, &NanoPBOptions_fields);

const pb_extension_type_t nanopb = {
    NULL,
    NULL,
    &nanopb_field
};





/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(nanopb_fileopt_struct, nanopb_fileopt) < 65536 && pb_membersize(nanopb_msgopt_struct, nanopb_msgopt) < 65536 && pb_membersize(nanopb_enumopt_struct, nanopb_enumopt) < 65536 && pb_membersize(nanopb_struct, nanopb) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_NanoPBOptions)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
#error Field descriptor for nanopb_struct.nanopb is too large. Define PB_FIELD_16BIT to fix this.
#endif


/* @@protoc_insertion_point(eof) */