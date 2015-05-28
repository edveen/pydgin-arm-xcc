/* Test the `vshll_ns16' ARM Neon intrinsic.  */
/* This file was autogenerated by neon-testgen.  */

/* { dg-do assemble } */
/* { dg-require-effective-target arm_neon_ok } */
/* { dg-options "-save-temps -O0 -mfpu=neon -mfloat-abi=softfp" } */

#include "arm_neon.h"

void test_vshll_ns16 (void)
{
  int32x4_t out_int32x4_t;
  int16x4_t arg0_int16x4_t;

  out_int32x4_t = vshll_n_s16 (arg0_int16x4_t, 1);
}

/* { dg-final { scan-assembler "vshll\.s16\[ 	\]+\[qQ\]\[0-9\]+, \[dD\]\[0-9\]+, #\[0-9\]+!?\(\[ 	\]+@\[a-zA-Z0-9 \]+\)?\n" } } */
/* { dg-final { cleanup-saved-temps } } */
