#include "sub.h" 
void  sub_49CC5B(_WORD* thisx, int a2, int* a3)
{
    int v3; // eax
    int v5[2]; // [esp+4h] [ebp-10h] BYREF
    int v6; // [esp+Ch] [ebp-8h]
    int v7; // [esp+10h] [ebp-4h]

    if (a2 >= 0)
    {
        if (*a3 < 2048 && a2 < 2048)
        {
            v5[1] = 0;
            v5[0] = 0;
            LOWORD(v6) = sub_4260F0(&thisx[12 * a2]);
            v6 = (unsigned __int16)v6;
            LOWORD(v7) = sub_48E130(&thisx[12 * a2]);
            v7 = (unsigned __int16)v7;
            a3[3] = (int)v5;
            v3 = unknown_libname_30((_DWORD*)&thisx[12 * a2]);
            sub_49ABE2((unsigned short*)&thisx[12 * *a3], v3, (int)a3);
        }
    }
    else
    {
        sub_49AB05((int)thisx, a3);
    }
}
