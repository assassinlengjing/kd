#include "sub.h"
int  _clrfp(__int16 a1)
{
  __asm { fnclex }
  return a1;
}