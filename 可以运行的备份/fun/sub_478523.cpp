#include "sub.h" 
int __cdecl sub_478523(LPCSTR lpFileName, int a2, int a3)
{
    char v4[1024]; // [esp+0h] [ebp-540h] BYREF
    int v5[80]; // [esp+400h] [ebp-140h] BYREF

    memset(v4, 0, sizeof(v4));
    sub_49DB90(v5);
    if (a2 >= 0 && sub_4784EA(a2 + 1, (int)v4))
        v5[11] = (int)v4;
    if (a3 >= 0)
        sub_485DFD((int)dword_4B93A4 + 24 * a3, (int)v4);
    v5[1] = 0;
    v5[2] = 0;
    v5[3] = -1;
    v5[4] = -1;
    v5[5] = 1;
    v5[9] = 0;
    v5[0] = -1;
    if (sub_49DA45((_DWORD*)byte_4BDC60, lpFileName, (int)v5))
        return v5[0];
    else
        return -1;
}

