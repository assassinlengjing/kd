#include "sub.h"
int __initmbctable()
{
  int result; // eax

  if ( !dword_4CC7C8 )
  {
    result = _setmbcp(-3);
    dword_4CC7C8 = 1;
  }
  return result;
}