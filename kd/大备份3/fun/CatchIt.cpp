#include "sub.h"
void __cdecl CatchIt(
    PEXCEPTION_RECORD ExceptionRecord,
    struct EHRegistrationNode* a2,
    struct _CONTEXT* a3,
    void* a4,
    const struct _s_FuncInfo* a5,
    const struct _s_HandlerType* a6,
    const struct _s_CatchableType* a7,
    const struct _s_TryBlockMapEntry* a8,
    int a9,
    PVOID TargetFrame)
{
    void* v10; // eax

    if (a7)
        BuildCatchObject((struct EHExceptionRecord*)a6, (struct EHExceptionRecord*)ExceptionRecord, a2, a6, a7);
    if (TargetFrame)
        _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD**)a6, TargetFrame, ExceptionRecord);
    else
        _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD**)a6, a2, ExceptionRecord);
    __FrameUnwindToState((int)a2, (int)a4, (int)a5, a8->tryLow);
    a2->state = (__ehstate_t)(a8->tryHigh + 1);//a2->state = a8->tryHigh + 1;
    v10 = (void*)CallCatchBlock((struct EHExceptionRecord*)ExceptionRecord, a2, a3, a5, a6->addressOfHandler, a9, 0x100u);
    if (v10)
        _JumpToContinuation(v10, a2);
}