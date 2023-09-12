#include "sub.h"
double  _convertTOStoQNaN(int a1, double result)
{
  if ( (a1 & 0x80000) == 0 )
    return result + 1.0;
  return result;
}