#include "sub.h"
int __cdecl write_string(int a1, int a2, myFILE *File, int a4)
{
  int result; // eax
  int i; // ebx
  int v7; // eax

  result = a2;
  for ( i = a2 - 1; result > 0; result = i-- )
  {
    v7 = *(char *)a1++;
    result = write_char(v7, File, a4);
    if ( *(_DWORD *)a4 == -1 )
      break;
  }
  return result;
}