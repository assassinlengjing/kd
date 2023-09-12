#include "sub.h" 
_DWORD* sub_451A0A(_DWORD* thisx, char a2, unsigned __int8 a3)
{
    _DWORD* result; // eax
    char v5[16]; // [esp+4h] [ebp-2Ch] BYREF
    int j; // [esp+14h] [ebp-1Ch]
    _DWORD* v7; // [esp+18h] [ebp-18h]
    int i; // [esp+1Ch] [ebp-14h]
    struct tagRECT v9; // [esp+20h] [ebp-10h]

    v9 = *sub_488A07(thisx + 32, (struct tagRECT*)v5, a2, a3);
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        if (sub_41BEA6(&thisx[153 * i + 657]))
        {
            v7 = (_DWORD*)sub_41F0A9(&thisx[153 * i + 657]);
            for (j = v9.left; j < v9.right; ++j)
            {
                sub_422B03((_DWORD*)v7, j, a3);
                sub_422526(v7);
            }
        }
    }
    *((_BYTE*)thisx + 2544) = 1;
    result = thisx;
    *((_BYTE*)thisx + 2545) = 0;
    return result;
}