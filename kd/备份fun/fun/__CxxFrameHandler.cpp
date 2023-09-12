#include "sub.h"
int __CxxFrameHandler(
    struct _s_FuncInfo* a1,
    EXCEPTION_POINTERS* a2,
    int a3,
    PEXCEPTION_RECORD ExceptionRecord,
    struct EHRegistrationNode* a5,
    struct _CONTEXT* a6,
    void* a7)
{
    return __InternalCxxFrameHandler(a2, a3, ExceptionRecord, a5, a6, a7, a1, 0, 0, 0);
}