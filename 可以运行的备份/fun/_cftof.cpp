#include "sub.h"
char *__cdecl _cftof(int a1, char *Str, size_t Size)
{
  int v3; // ebx
  _DWORD *v4; // esi
  char *v5; // eax
  char *v6; // edi
  int v7; // eax
  char *v8; // edi
  int v9; // esi
  char *v10; // edi
  int v11; // esi
  double v13; // [esp+0h] [ebp-18h]

  if ( byte_4CB24C )
  {
    v3 = Size;
    v4 = (_DWORD *)dword_4CB248;
    if ( dword_4CB250 == Size )
    {
      v5 = &Str[dword_4CB250 + (*(_DWORD *)dword_4CB248 == 45)];
      *v5 = 48;
      v5[1] = 0;
    }
  }
  else
  {
    v13 = *(double *)a1;
    v3 = Size;
    v4 = (_DWORD *)_fltout(SLOBYTE(v13));
    _fptostr(&Str[*v4 == 45], Size + v4[1], (int)v4);
  }
  v6 = Str;
  if ( *v4 == 45 )
  {
    *Str = 45;
    v6 = Str + 1;
  }
  v7 = v4[1];
  if ( v7 > 0 )
  {
    v8 = &v6[v7];
  }
  else
  {
    _shift(v6, 1);
    *v6 = 48;
    v8 = v6 + 1;
  }
  if ( v3 > 0 )
  {
    _shift(v8, 1);
    *v8 = byte_4B8624;
    v9 = v4[1];
    v10 = v8 + 1;
    if ( v9 < 0 )
    {
      if ( byte_4CB24C )
      {
        v11 = -v9;
      }
      else
      {
        v11 = -v9;
        if ( v3 < v11 )
        {
LABEL_16:
          _shift(v10, v3);
          memset(v10, 48, v3);
          return Str;
        }
      }
      v3 = v11;
      goto LABEL_16;
    }
  }
  return Str;
}