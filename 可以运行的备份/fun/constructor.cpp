#include "sub.h"
void __stdcall eh_vector_constructor_iterator(
        void *a1,
        unsigned int a2,
        int a3,
        void ( *a4)(void *),
        void ( *a5)(void *))
{
  int i; // [esp+10h] [ebp-1Ch]

  for ( i = 0; i < a3; ++i )
  {
    a4(a1);
    a1 = (char *)a1 + a2;
  }
}