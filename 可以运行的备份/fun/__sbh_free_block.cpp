#include "sub.h"
_DWORD *__cdecl __sbh_free_block(_DWORD *a1, unsigned int a2)
{
  int v2; // eax
  int *v3; // edx
  unsigned int v4; // esi
  int v5; // ebx
  int v6; // ecx
  _BYTE *v7; // ecx
  unsigned int v8; // edi
  bool v9; // zf
  _BYTE *v10; // ecx
  unsigned int v11; // edi
  int v12; // ecx
  int v13; // edi
  unsigned int v14; // edi
  unsigned int v15; // ecx
  _BYTE *v16; // ecx
  unsigned int v17; // edx
  _BYTE *v18; // ecx
  unsigned int v19; // edx
  _DWORD *v20; // ecx
  _DWORD *result; // eax
  LPVOID *v22; // eax
  _DWORD *v23; // [esp+10h] [ebp-10h]
  int v24; // [esp+14h] [ebp-Ch]
  int v25; // [esp+18h] [ebp-8h]
  int *v26; // [esp+18h] [ebp-8h]
  int v27; // [esp+1Ch] [ebp-4h]
  char v28; // [esp+2Fh] [ebp+Fh]

  v2 = a1[4];
  v3 = (int *)(a2 - 4);
  v4 = (a2 - a1[3]) >> 15;
  v5 = *(_DWORD *)(a2 - 4) - 1;
  v27 = *(_DWORD *)(a2 - 8);
  v24 = v5;
  v23 = (_DWORD *)(516 * v4 + v2 + 324);
  v6 = *(_DWORD *)(v5 + a2 - 4);
  v25 = v6;
  if ( (v6 & 1) == 0 )
  {
    a2 = (v6 >> 4) - 1;
    if ( a2 > 0x3F )
      a2 = 63;
    if ( *(int *)((char *)v3 + v5 + 4) == *(int *)((char *)v3 + v5 + 8) )
    {
      if ( a2 >= 0x20 )
      {
        v10 = (_BYTE *)(a2 + v2 + 4);
        v11 = ~(0x80000000 >> (a2 - 32));
        *(_DWORD *)(v2 + 4 * v4 + 196) &= v11;
        v9 = (*v10)-- == 1;
        if ( v9 )
          a1[1] &= v11;
      }
      else
      {
        v7 = (_BYTE *)(a2 + v2 + 4);
        v8 = ~(0x80000000 >> a2);
        *(_DWORD *)(v2 + 4 * v4 + 68) &= v8;
        v9 = (*v7)-- == 1;
        if ( v9 )
          *a1 &= v8;
      }
    }
    *(_DWORD *)(*(int *)((char *)v3 + v5 + 8) + 4) = *(int *)((char *)v3 + v5 + 4);
    v12 = *(int *)((char *)v3 + v5 + 4);
    v13 = *(int *)((char *)v3 + v5 + 8);
    v5 += v25;
    *(_DWORD *)(v12 + 8) = v13;
    v24 = v5;
  }
  v14 = (v5 >> 4) - 1;
  if ( v14 > 0x3F )
    v14 = 63;
  if ( (v27 & 1) == 0 )
  {
    v26 = (int *)((char *)v3 - v27);
    v15 = (v27 >> 4) - 1;
    a2 = v15;
    if ( v15 > 0x3F )
    {
      a2 = 63;
      v15 = 63;
    }
    v5 += v27;
    v24 = v5;
    v14 = (v5 >> 4) - 1;
    if ( v14 > 0x3F )
      v14 = 63;
    if ( v15 != v14 )
    {
      if ( v26[1] == v26[2] )
      {
        if ( a2 >= 0x20 )
        {
          v18 = (_BYTE *)(a2 + v2 + 4);
          v19 = ~(0x80000000 >> (a2 - 32));
          *(_DWORD *)(v2 + 4 * v4 + 196) &= v19;
          v9 = (*v18)-- == 1;
          if ( v9 )
            a1[1] &= v19;
        }
        else
        {
          v16 = (_BYTE *)(a2 + v2 + 4);
          v17 = ~(0x80000000 >> a2);
          *(_DWORD *)(v2 + 4 * v4 + 68) &= v17;
          v9 = (*v16)-- == 1;
          if ( v9 )
            *a1 &= v17;
        }
      }
      *(_DWORD *)(v26[2] + 4) = v26[1];
      *(_DWORD *)(v26[1] + 8) = v26[2];
    }
    v3 = v26;
  }
  if ( (v27 & 1) != 0 || a2 != v14 )
  {
    v3[1] = v23[2 * v14 + 1];
    v20 = &v23[2 * v14];
    v3[2] = (int)v20;
    v20[1] = (_DWORD)v3;
    *(_DWORD *)(v3[1] + 8) = (_DWORD)v3;
    if ( v3[1] == v3[2] )
    {
      v28 = *(_BYTE *)(v14 + v2 + 4);
      *(_BYTE *)(v14 + v2 + 4) = v28 + 1;
      if ( v14 >= 0x20 )
      {
        if ( !v28 )
          a1[1] |= 0x80000000 >> (v14 - 32);
        *(_DWORD *)(v2 + 4 * v4 + 196) |= 0x80000000 >> (v14 - 32);
      }
      else
      {
        if ( !v28 )
          *a1 |= 0x80000000 >> v14;
        *(_DWORD *)(v2 + 4 * v4 + 68) |= 0x80000000 >> v14;
      }
      v5 = v24;
    }
  }
  result = (_DWORD *)(516 * v4 + v2 + 324);
  *v3 = v5;
  *(int *)((char *)v3 + v5 - 4) = v5;
  v9 = (*v23)-- == 1;
  if ( v9 )
  {
    if ( !dword_4CC6B0 )
      goto LABEL_46;
    VirtualFree((LPVOID)(*((_DWORD *)dword_4CC6B0 + 3) + (dword_4CC6A8 << 15)), 0x8000u, 0x4000u);
    *((_DWORD *)dword_4CC6B0 + 2) |= 0x80000000 >> dword_4CC6A8;
    *(_DWORD *)(*((_DWORD *)dword_4CC6B0 + 4) + 4 * dword_4CC6A8 + 196) = 0;
    --*(_BYTE *)(*((_DWORD *)dword_4CC6B0 + 4) + 67);
    v22 = (LPVOID *)dword_4CC6B0;
    if ( !*(_BYTE *)(*((_DWORD *)dword_4CC6B0 + 4) + 67) )
    {
      *((_DWORD *)dword_4CC6B0 + 1) &= ~1u;
      v22 = (LPVOID *)dword_4CC6B0;
    }
    if ( v22[2] == (LPVOID)-1 )
    {
      VirtualFree(v22[3], 0, 0x8000u);
      HeapFree((HANDLE)hHeap, 0, *((LPVOID *)dword_4CC6B0 + 4));
      memcpy_0((void*)dword_4CC6B0, (char *)dword_4CC6B0 + 20, (size_t)lpMem + 20 * dword_4CC6B4 - (_DWORD)dword_4CC6B0 - 20);
      result = a1;
      --dword_4CC6B4;
      if ( (int)a1 > dword_4CC6B0 )
        result = a1 - 5;
      dword_4CC6AC = (int)lpMem;
    }
    else
    {
LABEL_46:
      result = a1;
    }
    dword_4CC6B0 = (_DWORD)result;
    dword_4CC6A8 = v4;
  }
  return result;
}