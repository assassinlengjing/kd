#include "sub.h"
double  fFASN(int a1, long double a2, long double a3)
{
  char v3; // cl
  double result; // st7
  char v5; // ch

  AugmentSinCos(a1, a3);
  result = atan2(a3, a2);
  if ( v5 )
    result = 3.141592653589793116 - result;
  if ( v3 )
    return -result;
  return result;
}