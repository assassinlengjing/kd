#include "sub.h"
int __initstdio()
{
  size_t v0; // eax
  int v1; // ecx
  void **v2; // eax
  int v3; // edx
  _DWORD *v4; // ecx
  int result; // eax

  v0 = Count;
  if ( !Count )
  {
    v0 = 512;
LABEL_5:
    Count = v0;
    goto LABEL_6;
  }
  if ( (int)Count < 20 )
  {
    v0 = 20;
    goto LABEL_5;
  }
LABEL_6:
  dword_4CB688 = (int)calloc(v0, 4u);
  if ( !dword_4CB688 )
  {
    Count = 20;
    dword_4CB688 = (int)calloc(0x14u, 4u);
    if ( !dword_4CB688 )
      _amsg_exit(0x1Au);
  }
  v1 = 0;
  v2 = (void**) & off_4B8900;
  do
  {
    *(_DWORD *)(v1 + dword_4CB688) = (_DWORD)v2;
    v2 += 8;
    v1 += 4;
  }
  while ( (int)v2 < (int)&byte_4B8B80 );
  v3 = 0;
  v4 = (_DWORD*) & unk_4B8910;
  do
  {
    result = *(_DWORD *)(dword_4CC6C0[v3 >> 5] + 8 * (v3 & 0x1F));
    if ( result == -1 || !result )
      *v4 = -1;
    v4 += 8;
    ++v3;
  }
  while ( (int)v4 < (int)byte_4B8970 );
  return result;
}