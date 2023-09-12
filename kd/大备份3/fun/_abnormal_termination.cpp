#include "sub.h"
//int __cdecl _abnormal_termination() ????
//{
//  int result; // eax
//  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // ecx
//
//  result = 0;
//  //ExceptionList = NtCurrentTeb()->NtTib.ExceptionList; £¿£¿£¿£¿
//  if ( (int (__cdecl *)(int, int, int, int))ExceptionList->Handler == (int(__cdecl*)(int, int, int, int))_unwind_handler
//    && ExceptionList[1].Next == (struct _EXCEPTION_REGISTRATION_RECORD *)*((_DWORD *)ExceptionList[1].Handler + 3) )
//  {
//    return 1;
//  }
//  return result;
//}