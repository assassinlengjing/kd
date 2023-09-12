#include "sub.h"
TryBlockMapEntry *__cdecl _GetRangeOfTrysToCheck(
        const struct _s_FuncInfo *a1,
        int a2,
        int a3,
        unsigned int *a4,
        unsigned int *a5)
{
  EXCEPTION_POINTERS *v5; // ecx
  unsigned int nTryBlocks; // esi
  TryBlockMapEntry *pTryBlockMap; // ebx
  unsigned int v9; // eax
  unsigned int v10; // esi
  unsigned int v12; // [esp+Ch] [ebp-4h]
  const struct _s_FuncInfo *v13; // [esp+18h] [ebp+8h]

  nTryBlocks = a1->nTryBlocks;
  pTryBlockMap = (TryBlockMapEntry*)a1->pTryBlockMap;
  v9 = nTryBlocks;
  v13 = (const struct _s_FuncInfo *)nTryBlocks;
  v12 = nTryBlocks;
  if ( a2 >= 0 )
  {
    do
    {
      if ( nTryBlocks == -1 )
        sub_4A4022(v5, (int)pTryBlockMap, (int)a1, -1);
      v5 = (EXCEPTION_POINTERS *)a3;
      if ( pTryBlockMap[--nTryBlocks].tryHigh < a3 && a3 <= pTryBlockMap[nTryBlocks].catchHigh || nTryBlocks == -1 )
      {
        --a2;
        v12 = (unsigned int)v13;
        v13 = (const struct _s_FuncInfo *)nTryBlocks;
      }
    }
    while ( a2 >= 0 );
    v9 = v12;
  }
  v10 = nTryBlocks + 1;
  *a4 = v10;
  *a5 = v9;
  if ( v9 > a1->nTryBlocks || v10 > v9 )
    sub_4A4022((EXCEPTION_POINTERS *)a5, (int)pTryBlockMap, (int)a1, v10);
  return &pTryBlockMap[v10];
}