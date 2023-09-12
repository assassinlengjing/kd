#include "sub.h"
void __stdcall __ArrayUnwind(void *a1, unsigned int a2, int a3, void ( *a4)(void *))
{
  while ( --a3 >= 0 )
  {
    a1 = (char *)a1 - a2;
    ((void (*)(void))a4)();
  }
}