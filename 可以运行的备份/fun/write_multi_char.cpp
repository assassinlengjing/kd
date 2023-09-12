#include "sub.h"
int __cdecl write_multi_char(int a1, int a2, myFILE *File, int a4)
{
  int result; // eax
  int i; // edi

  result = a2;
  for ( i = a2 - 1; result > 0; result = i-- )
  {
    result = write_char(a1, File, a4);
    if ( *(_DWORD *)a4 == -1 )
      break;
  }
  return result;
}