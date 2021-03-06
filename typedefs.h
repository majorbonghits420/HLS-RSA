//===========================================================================
// typedefs.h
//===========================================================================
// @brief: This header defines the shorthand of several ap_uint data types.

#ifndef TYPEDEFS_H
#define TYPEDEFS_H


// Max uint size can be larger than defualt 1024
#define AP_INT_MAX_W (2048)

#include "ap_int.h"
#include "ap_fixed.h"

typedef ap_uint<4> bit4_t;
typedef ap_uint<6> bit6_t;
typedef ap_uint<32> bit32_t;
typedef ap_uint<64> bit64_t;
typedef ap_uint<49> digit;
typedef ap_fixed<32, 2> fixed32_t;
typedef ap_fixed<11, 2> jss_type;

typedef union {float f; int i;} union_f_i;

#define KEY_SIZE (512)
// Type for RSA messages and keys
typedef ap_uint<KEY_SIZE> rsa_t;

#define NUM_TESTS (10000)

#endif
