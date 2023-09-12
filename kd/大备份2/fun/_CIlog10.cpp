#include "sub.h"
double  _CIlog10(double x)
{
  _checkTOS_withFB(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
  return ((double (*)(void))loc_4A323D)();
}