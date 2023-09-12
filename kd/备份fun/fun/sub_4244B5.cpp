#include "sub.h" 
BOOL sub_4244B5(_DWORD* thisx, int a2, int a3)
{
    int v3; // edx
    int v4; // ecx
    int v7; // [esp+4h] [ebp-8h]
    int v8; // [esp+8h] [ebp-4h]

    v8 = (a2 + sub_426090((_DWORD*)thisx[31])) / 800;
    v7 = (a3 + sub_4260B0((_DWORD*)thisx[31])) / 800;
    if (v8 < 0)
        v8 = 0;
    v3 = (int)thisx;
    if (thisx[16] <= v8)
    {
        v3 = thisx[16] - 1;
        LOBYTE(v8) = v3;
    }
    if (v7 < 0)
        v7 = 0;
    v4 = thisx[17];
    if (v4 <= v7)
    {
        v3 = (int)thisx;
        v7 = thisx[17] - 1;
    }
    LOBYTE(v4) = v7;
    LOBYTE(v3) = v8;
    return sub_4773CC(v3, v4) != 0;
}

