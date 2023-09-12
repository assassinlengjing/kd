#include "sub.h" 
_DWORD* sub_4654DA(char* thisx, _DWORD* a2, _DWORD* a3)
{
    int i; // eax
    _DWORD* result; // eax
    int v6; // [esp+4h] [ebp-14h]
    int v7; // [esp+8h] [ebp-10h]
    int v8; // [esp+Ch] [ebp-Ch]
    int v9; // [esp+10h] [ebp-8h]
    int v10; // [esp+14h] [ebp-4h]

    v10 = sub_4897D0(thisx + 128);
    v7 = 8 * sub_4261D0(thisx + 128);
    v9 = rand() % (v10 - 16) + 8;
    v8 = rand() % v7;
    for (i = sub_486633((_DWORD*)thisx + 32, v9, v8); ; i = sub_486633((_DWORD*)thisx + 32, v9, v8))
    {
        v6 = i;
        if (sub_4773CC(v9 / 8, v8 / 8))
        {
            if (v6 < 1020)
                break;
        }
        v9 = rand() % (v10 - 16) + 8;
        v8 = rand() % v7;
    }
    result = a2;
    *a2 = 100 * v9;
    *a3 = 100 * v8;
    return result;
}

