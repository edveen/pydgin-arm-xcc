/* { dg-do compile } */
/* { dg-mips-options "-O2 -ffast-math -mips4 -mhard-float -mgp64" } */
/* { dg-final { scan-assembler "rsqrt.d" } } */
/* { dg-final { scan-assembler "rsqrt.s" } } */

extern double sqrt(double);
extern float sqrtf(float);

NOMIPS16 double foo(double x)
{
  return sqrt(1.0/x);
}

NOMIPS16 float bar(float x)
{
  return sqrtf(1.0f/x);
}
