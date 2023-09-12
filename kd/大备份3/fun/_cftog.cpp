#include "sub.h"
char *__cdecl _cftog(int a1, char *Str, size_t Size, int a4)
{
  char *v4; // esi
  bool v5; // cl
  double v7; // [esp+0h] [ebp-14h]

  v7 = *(double *)a1;
  unk_4CB248 = (_DWORD)_fltout(SLOBYTE(v7));
  unk_4CB250 = *(_DWORD *)(unk_4CB248 + 4) - 1;
  v4 = &Str[*(_DWORD *)unk_4CB248 == 45];
  _fptostr(v4, Size, unk_4CB248);
  v5 = unk_4CB250 < *(_DWORD *)(unk_4CB248 + 4) - 1;
  unk_4CB254 = v5;
  unk_4CB250 = *(_DWORD *)(unk_4CB248 + 4) - 1;
  if ( unk_4CB250 < -4 || unk_4CB250 >= (int)Size )
    return _cftoe_g((double *)a1, Str, Size, a4);
  if ( v5 )
    v4[strlen(v4) - 1] = 0;
  return _cftof_g(a1, Str, Size);
}