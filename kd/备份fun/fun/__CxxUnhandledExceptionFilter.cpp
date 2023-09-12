#include "sub.h"
LONG __stdcall __CxxUnhandledExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo, int a2, int a3)
{
  PEXCEPTION_RECORD ExceptionRecord; // eax

  ExceptionRecord = ExceptionInfo->ExceptionRecord;
  if ( ExceptionInfo->ExceptionRecord->ExceptionCode == -529697949
    && ExceptionRecord->NumberParameters == 3
    && ExceptionRecord->ExceptionInformation[0] == 429065504 )
  {
      sub_4A3FCC();
  }
  if ( lpfn && _ValidateExecute((FARPROC)lpfn) )
    return lpfn(ExceptionInfo);
  else
    return 0;
}