#include "sub.h"
int  TranslatorGuardHandler(
    struct _EXCEPTION_REGISTRATION_RECORD** a1,
    EXCEPTION_POINTERS* a2,
    PEXCEPTION_RECORD ExceptionRecord,
    PVOID TargetFrame,
    struct _CONTEXT* a5)
{
    if ((ExceptionRecord->ExceptionFlags & 0x66) != 0)
    {
        *((_DWORD*)TargetFrame + 9) = 1;
        return 1;
    }
    else
    {
        __InternalCxxFrameHandler(
            a2,
            (int)a1,
            ExceptionRecord,
            *((struct EHRegistrationNode**)TargetFrame + 3),
            a5,
            0,
            *((struct _s_FuncInfo**)TargetFrame + 2),
            *((_DWORD*)TargetFrame + 4),
            *((PVOID*)TargetFrame + 5),
            1);
        if (!*((_DWORD*)TargetFrame + 9))
            _UnwindNestedFrames(a1, TargetFrame, ExceptionRecord);
        return (*((int (**)(void))TargetFrame + 6))();
    }
}