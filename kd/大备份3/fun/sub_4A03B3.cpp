#include "sub.h" 
void sub_4A03B3(_WORD* thisx, int a2, int* a3, _DWORD* a4)
{
    int v4; // eax
    int v6[2]; // [esp+4h] [ebp-10h] BYREF
    int v7; // [esp+Ch] [ebp-8h]
    int v8; // [esp+10h] [ebp-4h]

    if (a2 >= 0)
    {
        if (*a3 < 2048 && a2 < 2048)
        {
            v6[1] = 0;
            v6[0] = 0;
            LOWORD(v7) = sub_4260F0(&thisx[12 * a2]);
            v7 = (unsigned __int16)v7;
            LOWORD(v8) = sub_48E130(&thisx[12 * a2]);
            v8 = (unsigned __int16)v8;
            a3[3] = (int)v6;
            v4 = unknown_libname_30((_DWORD*)&thisx[12 * a2]);
            sub_49C541((_DWORD*)&thisx[12 * *a3], v4, (int)a3, (tagRECT*)a4);
        }
    }
    else
    {
        sub_49C8A6((int)thisx, a3, a4);
    }
}
