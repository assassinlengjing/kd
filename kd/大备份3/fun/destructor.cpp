#include "sub.h"
void __stdcall eh_vector_destructor_iterator(void *a1, unsigned int a2, int a3, void ( *a4)(void *))
{
  char *i; // [esp+30h] [ebp+8h]

  for ( i = (char *)a1 + a3 * a2; --a3 >= 0; a4(i) )
    i -= a2;
}