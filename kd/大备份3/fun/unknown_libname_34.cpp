#include "sub.h"
// Microsoft VisualC 2-14/net runtime
int __cdecl unknown_libname_34(int a1)
{
  int result; // eax
  int v2; // ecx

  result = a1;
  if ( a1 )
  {
    v2 = *(_DWORD *)(*(_DWORD *)(a1 + 28) + 4);
    if ( v2 )
      return sub_4A2738(*(_DWORD *)(a1 + 24), v2);
  }
  return result;
}