#include "sub.h" 
int sub_47082B(int thisx)
{
    int j; // [esp+4h] [ebp-Ch]
    int v4; // [esp+8h] [ebp-8h]
    int i; // [esp+Ch] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 24;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 2562) = 0;
    dword_4B91E0 = 0;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = 0;
    v4 = 4;
    for (i = 1; i < 5; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            if (*(unsigned __int8*)(j + thisx + 13044) == i)
            {
                *(_BYTE*)(v4 + thisx + 13044) = j;
                *(_BYTE*)(thisx + 244 * j + 1635) = i;
                ++v4;
            }
            if (v4 >= 8)
                break;
        }
        if (v4 >= 8)
            break;
    }
    sub_4898D3((_DWORD*)(thisx + 128));
    sub_4891E4((_DWORD*)(thisx + 128), aDemoKkResult1T);
    sub_47F958((_DWORD*)(thisx + 736));
    return sub_456D33((const CHAR*)thisx, aCheergirlsWav, 1, 0);
}

