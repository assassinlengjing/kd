#include "sub.h"
int __cdecl CallCatchBlock(
    struct EHExceptionRecord* a1,
    struct EHRegistrationNode* a2,
    struct _CONTEXT* a3,
    const struct _s_FuncInfo* a4,
    void* a5,
    int a6,
    unsigned int a7)
{
    int v7; // eax
    int v9; // [esp+Ch] [ebp-2Ch]
    __ehstate_t state; // [esp+10h] [ebp-28h]
    int v11; // [esp+18h] [ebp-20h]
    void* v12; // [esp+1Ch] [ebp-1Ch]

    state = a2[-1].state;
    v12 = lp;
    v11 = dword_4CB23C;
    lp = a1;
    dword_4CB23C = (int)a3;
    _CallCatchBlock2(a2, a4, a5, a6, a7);
    v9 = v7;
    a2[-1].state = state;
    lp = v12;
    dword_4CB23C = v11;
    if (a1->ExceptionCode == -529697949 && a1->NumberParameters == 3 && a1->params.magicNumber == 429065504 && v7)
    {
        //_abnormal_termination();???
        unknown_libname_34((int)a1);
    }
    return v9;
}