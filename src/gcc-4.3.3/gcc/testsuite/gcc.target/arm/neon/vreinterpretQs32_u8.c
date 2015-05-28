/* Test the `vreinterpretQs32_u8' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vreinterpretQs32_u8 (void)
{
  int32x4_t out_int32x4_t;
  uint8x16_t arg0_uint8x16_t;

  out_int32x4_t = vreinterpretq_s32_u8 (arg0_uint8x16_t);
}

/* { dg-final { cleanup-saved-temps } } */
