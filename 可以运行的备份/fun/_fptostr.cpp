#include "sub.h"
char *__cdecl _fptostr(void *a1, int a2, int a3)
{
  int v3; // edx
  int v4; // ebx
  char *v6; // ecx
  const char *v7; // edi
  char *result; // eax
  char v9; // dl
  size_t v10; // eax
  char *v11; // [esp+14h] [ebp+8h]

  v3 = a3;
  v4 = a2;
  v6 = *(char **)(a3 + 12);
  v7 = (char *)a1 + 1;
  *(_BYTE *)a1 = 48;
  result = (char *)a1 + 1;
  if ( a2 > 0 )
  {
    v11 = (char *)a2;
    v4 = 0;
    do
    {
      v9 = *v6;
      if ( *v6 )
        ++v6;
      else
        v9 = 48;
      *result++ = v9;
      --v11;
    }
    while ( v11 );
    v3 = a3;
  }
  *result = 0;
  if ( v4 >= 0 && *v6 >= 53 )
  {
    while ( *--result == 57 )
      *result = 48;
    ++*result;
  }
  if ( *(_BYTE *)a1 == 49 )
  {
    ++*(_DWORD *)(v3 + 4);
  }
  else
  {
    v10 = strlen(v7);
    return (char *)memcpy_0(a1, v7, v10 + 1);
  }
  return result;
}