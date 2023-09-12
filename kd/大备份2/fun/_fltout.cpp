#include "sub.h"
int *__cdecl _fltout(int a1)
{
  int v2; // [esp-10h] [ebp-24h]
  __int64 v3; // [esp+8h] [ebp-Ch] BYREF
  __int16 v4; // [esp+10h] [ebp-4h]

  __dtold((unsigned int)&v3, (int)&v3, &a1);
  LOWORD(v2) = v4;
  dword_4CB400 = _I10_OUTPUT(v3, v2, 17, 0, (int)&word_4CB3D8);
  dword_4CB3F8 = byte_4CB3DA;
  dword_4CB3FC = word_4CB3D8;
  dword_4CB404 = (int)&unk_4CB3DC;
  return &dword_4CB3F8;
}