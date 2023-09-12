#include "sub.h"
void  FindHandler(
        EXCEPTION_POINTERS *a1,
        int a2,
        int a3,
        int a4,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a6,
        struct _CONTEXT *a7,
        void *a8,
        const struct _s_FuncInfo *a9,
        char a10,
        int a11,
        PVOID TargetFrame)
{
  PEXCEPTION_RECORD v12; // esi
  int v13; // edi
  const struct _s_TryBlockMapEntry *v14; // ebx
  int *v15; // eax
  const struct _s_CatchableType **v16; // edi
  EXCEPTION_POINTERS *v17; // [esp-10h] [ebp-28h]
  unsigned int v18; // [esp+0h] [ebp-18h] BYREF
  unsigned __int8 v19[4]; // [esp+4h] [ebp-14h]
  int state; // [esp+8h] [ebp-10h]
  int nCatches; // [esp+Ch] [ebp-Ch]
  int v22; // [esp+10h] [ebp-8h]
  unsigned int v23; // [esp+14h] [ebp-4h] BYREF
  const struct _s_HandlerType *ExceptionRecorda; // [esp+20h] [ebp+8h]

  v19[0] = 0;
  state = a6->state;
  if ( state < -1 || (a1 = (EXCEPTION_POINTERS *)a9, state >= a9->maxState) )
    sub_4A4022(a1, a2, a3, a4);
  v12 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode != -529697949 )
    goto LABEL_35;
  if ( ExceptionRecord->NumberParameters == 3
    && ExceptionRecord->ExceptionInformation[0] == 429065504
    && !ExceptionRecord->ExceptionInformation[2] )
  {
    v12 = (PEXCEPTION_RECORD)lp;
    if ( !lp )
      return;
    a7 = (struct _CONTEXT *)dword_4CB23C;
    v19[0] = 1;
    if ( !_ValidateRead(lp, 1u) )
      sub_4A4022(v17, -529697949, 429065504, (int)v12);
    if ( v12->ExceptionCode != -529697949 )
      goto LABEL_35;
    if ( v12->NumberParameters == 3 && v12->ExceptionInformation[0] == 429065504 && !v12->ExceptionInformation[2] )
      sub_4A4022(v17, -529697949, 429065504, (int)v12);
  }
  if ( v12->ExceptionCode != -529697949 || v12->NumberParameters != 3 || v12->ExceptionInformation[0] != 429065504 )
  {
LABEL_35:
    if ( a10 )
      sub_4A3FCC();
    FindHandlerForForeignException(v12, a6, a7, a8, a9, state, a11, TargetFrame);
    return;
  }
  v13 = state;
  v14 = (_s_TryBlockMapEntry*)_GetRangeOfTrysToCheck(a9, a11, state, &v23, &v18);
  while ( v23 < v18 )
  {
    if ( v14->tryLow <= v13 && v13 <= v14->tryHigh )
    {
      ExceptionRecorda = (_s_HandlerType*)v14->pHandlerArray;
      nCatches = v14->nCatches;
      if ( nCatches > 0 )
      {
        while ( 1 )
        {
          v15 = *(int **)(v12->ExceptionInformation[2] + 12);
          v16 = (const struct _s_CatchableType **)(v15 + 1);
          v22 = *v15;
          if ( v22 > 0 )
            break;
LABEL_27:
          --nCatches;
          ++ExceptionRecorda;
          if ( nCatches <= 0 )
            goto LABEL_30;
        }
        while ( !TypeMatch(ExceptionRecorda, *v16, (const struct _s_ThrowInfo *)v12->ExceptionInformation[2]) )
        {
          --v22;
          ++v16;
          if ( v22 <= 0 )
            goto LABEL_27;
        }
        CatchIt(v12, a6, a7, a8, a9, ExceptionRecorda, *v16, v14, a11, TargetFrame);
      }
LABEL_30:
      v13 = state;
    }
    ++v23;
    ++v14;
  }
  if ( a10 )
    unknown_libname_34((int)v12);
}