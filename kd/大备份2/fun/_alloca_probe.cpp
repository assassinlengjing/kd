#include "sub.h"
void _alloca_probe(unsigned int a1, char a2)
{
  char *i; // ecx

  for ( i = &a2; a1 >= 0x1000; a1 -= 4096 )
    i -= 4096;
  __asm { retn }
}
void* alloca(int a)
{
   _alloca_probe(a,a);//???
   return &a;
}