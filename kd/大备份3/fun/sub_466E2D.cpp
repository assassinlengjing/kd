#include "sub.h" 
void sub_466E2D(int thisx)
{
    int i; // [esp+4h] [ebp-4h]
    int j; // [esp+4h] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 6;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_DWORD*)(thisx + 2512) = 0;
    *(_BYTE*)(thisx + 2562) = 0;
    *(_DWORD*)(thisx + 2528) = 0;
    *(_DWORD*)(thisx + 2532) = 0;
    *(_WORD*)(thisx + 2564) = 0;
    *(_WORD*)(thisx + 2566) = 140;
    for (i = 0; i < 14; ++i)
        *(_WORD*)(thisx + 2566) -= *(_WORD*)(thisx + 2 * i + 48);
    if (*(unsigned __int16*)(thisx + 2566) > 0x8Cu)
    {
        for (j = 0; j < 14; ++j)
            *(_WORD*)(thisx + 2 * j + 48) = 10;
        *(_WORD*)(thisx + 2566) = 0;
    }
    sub_466F20(thisx, -1);
}

