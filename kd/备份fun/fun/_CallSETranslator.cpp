#include "sub.h"
int __cdecl _CallSETranslator(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        void *a3,
        void *a4,
        const struct _s_FuncInfo *a5,
        int a6,
        struct EHRegistrationNode *a7)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ebx
  int v9; // [esp+0h] [ebp-40h] BYREF
  int v10; // [esp+Ch] [ebp-34h]
  int v11[11]; // [esp+10h] [ebp-30h] BYREF
  int v12; // [esp+3Ch] [ebp-4h]
  int savedregs; // [esp+40h] [ebp+0h] BYREF

  v11[3] = (int)TranslatorGuardHandler;
  v11[4] = (int)a5;
  v11[5] = (int)a2;
  v11[6] = a6;
  v11[7] = (int)a7;
  v12 = 0;
  v11[8] = (int)&_ExceptionContinuation_16667;
  v11[9] = (int)&v9;
  v11[10] = (int)&savedregs;
  //v11[2] = (int)NtCurrentTeb()->NtTib.ExceptionList;???
  v10 = 1;
  v11[0] = (int)a1;
  v11[1] = (int)a3;
  //dword_4CB240(a1->ExceptionCode, v11);???
  v10 = 0;
  if ( v12 )
  {
    //ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;???
    ExceptionList->Next = ExceptionList->Next;
  }
  return v10;
}