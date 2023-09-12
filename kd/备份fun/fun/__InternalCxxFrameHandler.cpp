#include "sub.h"
int  __InternalCxxFrameHandler(
        EXCEPTION_POINTERS *a1,
        int a2,
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a4,
        struct _CONTEXT *a5,
        void *a6,
        struct _s_FuncInfo *a7,
        int a8,
        PVOID TargetFrame,
        char a10)
{
  if ( *(_DWORD *)a7 != 429065504 )
    sub_4A4022(a1, a2, 429065504, (int)a7);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( a7->maxState )
    {
      if ( !a8 )
        __FrameUnwindToState((int)a4, (int)a6, (int)a7, -1);
    }
  }
  else if ( a7->nTryBlocks )
  {
    if ( ExceptionRecord->ExceptionCode == -529697949 && ExceptionRecord->ExceptionInformation[0] > 0x19930520 )
    {
      a1 = *(EXCEPTION_POINTERS **)(ExceptionRecord->ExceptionInformation[2] + 8);
      if ( a1 )
        return ((int (__cdecl *)(PEXCEPTION_RECORD, struct EHRegistrationNode *, struct _CONTEXT *, void *, struct _s_FuncInfo *, int, PVOID, _DWORD))a1)(
                 ExceptionRecord,
                 a4,
                 a5,
                 a6,
                 a7,
                 a8,
                 TargetFrame,
                 (unsigned __int8)a10);
    }
    FindHandler(a1, a2, 429065504, (int)a7, ExceptionRecord, a4, a5, a6, a7, a10, a8, TargetFrame);
  }
  return 1;
}