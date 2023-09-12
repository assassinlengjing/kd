#include "sub.h"
double  _CIcos(double x)
{
  _checkTOS_withFB(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
  return ((double (*)(void))loc_4A2FFD)();
}