#include "sub.h"
void  isintTOS(double a1)
{
  _ST6 = a1;
  __asm { frndint }
  if ( _ST6 == a1 )
  {
    _ST5 = a1 * dbl_4B83E2;
    __asm { frndint }
  }
  isintTOSret();
}