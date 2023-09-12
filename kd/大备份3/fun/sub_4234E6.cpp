#include "sub.h" 
int sub_4234E6(int thisx, int a2)
{
    int result; // eax
    int v3; // [esp+0h] [ebp-28h]
    char v4; // [esp+4h] [ebp-24h]
    int v5; // [esp+8h] [ebp-20h]
    int v6; // [esp+Ch] [ebp-1Ch]
    __int16 v7; // [esp+14h] [ebp-14h]
    int v8; // [esp+18h] [ebp-10h]
    int v9; // [esp+1Ch] [ebp-Ch]
    int v10; // [esp+20h] [ebp-8h]

    v9 = 1000 - ((a2 > 0) - (a2 < 0)) * (50 * *(char*)(thisx + 593) + 2 * *(__int16*)(thisx + 594));
    if (v9 <= 0)
        v9 = 1;
    v10 = v9 * a2 / 100;
    if (!v10)
    {
        if (a2 <= 0)
            v6 = (a2 >= 0) - 1;
        else
            v6 = 1;
        v10 = v6;
    }
    *(_DWORD*)(thisx + 584) += v10;
    v8 = *(_DWORD*)(thisx + 584) / 50;
    if (v8 <= 0)
        v5 = *(_DWORD*)(thisx + 584) / -50;
    else
        v5 = *(_DWORD*)(thisx + 584) / 50;
    if (v5)
    {
        *(_DWORD*)(thisx + 580) += v8;
        *(_DWORD*)(thisx + 588) += v8;
        if (!*(_BYTE*)(thisx + 593))
        {
            *(_DWORD*)(thisx + 580) += a2 / 10;
            *(_DWORD*)(thisx + 588) += a2 / 10;
        }
        if (a2 <= 0)
            v4 = (a2 >= 0) - 1;
        else
            v4 = 1;
        *(_BYTE*)(thisx + 593) += v4;
        *(_WORD*)(thisx + 594) += a2;
        *(int*)(thisx + 584) %= 50;
        *(_BYTE*)(thisx + 592) = 60;
    }
    if (*(char*)(thisx + 593) * *(__int16*)(thisx + 594) <= 0)
        v3 = -(*(char*)(thisx + 593) * *(__int16*)(thisx + 594));
    else
        v3 = *(char*)(thisx + 593) * *(__int16*)(thisx + 594);
    v7 = v3 + 30;
    if (v3 + 30 > 0xFFFF)
        v7 = -1;
    result = thisx;
    *(_WORD*)(thisx + 596) = v7;
    return result;
}

