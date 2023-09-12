#include "sub.h"
int CatchGuardHandler(
    EXCEPTION_POINTERS* a1,
    int a2,
    PEXCEPTION_RECORD ExceptionRecord,
    PVOID TargetFrame,
    struct _CONTEXT* a5)
{
    return __InternalCxxFrameHandler(
        a1,
        a2,
        ExceptionRecord,
        *((struct EHRegistrationNode**)TargetFrame + 3),
        a5,
        0,
        *((struct _s_FuncInfo**)TargetFrame + 2),
        *((_DWORD*)TargetFrame + 4),
        TargetFrame,
        0);
}