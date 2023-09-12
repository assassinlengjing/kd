#include "sub.h" 
int sub_48E8E1(int thisx)
{
    int result; // eax
    int v2; // eax
    struct tagRECT rc; // [esp+4h] [ebp-10h] BYREF

    result = thisx;
    if (*(_DWORD*)(thisx + 88))
    {
        --* (_DWORD*)(thisx + 88);
        v2 = lstrlenA((LPCSTR)(thisx + 4));
        SetRect(&rc, 0, 228, 4 * v2, 240);
        sub_49EF70((int)byte_4BDC60, (_DWORD*)&rc, 0, 0, 0, 0x20u);
        return sub_47B91A(0, 232, (LPCSTR)(thisx + 4), 0, -1);
    }
    return result;
}

