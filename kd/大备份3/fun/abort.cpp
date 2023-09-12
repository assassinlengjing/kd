#include "sub.h"
void __cdecl  abort()
{
  _NMSG_WRITE(0xAu);
  raise(22);
  _exit(3);
}