#include "sub.h"
double  _twoToTOS(double a1)
{
  _ST6 = a1;
  __asm { frndint }
  //return __FSCALE__(__F2XM1__(-(_ST6 - a1)) + 1.0, _ST6);
  return 0;//?????
}