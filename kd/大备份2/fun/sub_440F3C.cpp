#include "sub.h" 
int sub_440F3C(_DWORD* thisx)
{
    int i; // eax
    struct Concurrency::IUMSCompletionList* v3; // [esp+0h] [ebp-24h]
    _DWORD* Block; // [esp+8h] [ebp-1Ch]
    Concurrency::details::UMSThreadScheduler* v6; // [esp+10h] [ebp-14h]

    Block = (_DWORD*)operator new(0x20Cu);
    if (Block)
        v3 = (struct Concurrency::IUMSCompletionList*)sub_440D9B(Block);
    else
        v3 = 0;
    if (!v3)
        return 0;
    if (thisx[1])
    {
        v6 = (Concurrency::details::UMSThreadScheduler*)thisx[1];
        for (i = sub_441090((_DWORD*)v6); i; i = sub_441090((_DWORD*)v6))
            v6 = (Concurrency::details::UMSThreadScheduler*)sub_441090((_DWORD*)v6);
        Concurrency::details::UMSThreadScheduler::SetCompletionList(v6, v3);
        sub_441140((_DWORD*)v3, (int)v6);
    }
    else
    {
        thisx[1] = (_DWORD)v3;
    }
    thisx[35] += 64;
    return 1;
}

