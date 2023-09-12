#include "sub.h" 
int sub_49B9E0(_DWORD* thisx, LPCSTR lpFileName)
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
        if (sub_4A14C0((_WORD*)thisx[12609], lpFileName))
        {
            return 1;
        }
        else
        {
            sub_49B98C(thisx);
            return 0;
        }
    }
    else
    {
        MessageBoxA(0, &byte_4B7988, aError_51, 0);
        return 0;
    }
}
