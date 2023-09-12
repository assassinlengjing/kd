#include "sub.h"
double  _CIsin(double x)
{
  _checkTOS_withFB(LODWORD(x), HIDWORD(*(unsigned __int64 *)&x));
  return ((double (*)(void))unk_4A2F4D)();
}