#include "sub.h" 
int sub_49BAAB(_DWORD* thisx, LPCSTR lpFileName)
{
    _DWORD* v3; // [esp+0h] [ebp-1Ch]
    _DWORD* Block; // [esp+8h] [ebp-14h]

    sub_49B98C(thisx);
    Block = (_DWORD*)operator new(0x54Cu);
    if (Block)
        v3 = sub_4A1450(Block);
    else
        v3 = 0;
    thisx[12609] = (_DWORD)v3;
    if (thisx[12609])
    {
        if (sub_4A1ACA(thisx[12609], lpFileName))
        {
            return 1;
        }
        else
        {
            MessageBoxA(0, aImg, aError_53, 0);
            sub_49B98C(thisx);
            return 0;
        }
    }
    else
    {
        MessageBoxA(0, &unk_4B79A8, aError_52, 0);
        return 0;
    }
}