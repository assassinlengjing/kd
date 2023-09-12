#include "sub.h"
int __endstdio()
{
  int result; // eax

  result = sub_4AAF2F();
  if ( byte_4CB2AC )
    return _fcloseall();
  return result;
}