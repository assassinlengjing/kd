#include "sub.h" 
LONG(__stdcall* sub_4A655B())(struct _EXCEPTION_POINTERS* ExceptionInfo)
{
    LONG(__stdcall * result)(struct _EXCEPTION_POINTERS*); // eax

    result = SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)__CxxUnhandledExceptionFilter);
    lpfn = result;
    return result;
}

