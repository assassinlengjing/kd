#include "sub.h"
int __initmbctable()
{
  int result; // eax

  if ( !unk_4CC7C8 )
  {
    result = _setmbcp(-3);
    unk_4CC7C8 = 1;
  }
  return result;
}