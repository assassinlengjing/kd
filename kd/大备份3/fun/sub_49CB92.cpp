#include "sub.h" 
int  sub_49CB92(int thisx, int a2, int a3, int a4, int a5, COLORREF color)
{
    int v7; // eax
    char v9[4]; // [esp+4h] [ebp-8h] BYREF
    int v10; // [esp+8h] [ebp-4h]

    if (a2 >= 2048 || a2 < -1)
        return -1;
    if (a2 == -1)
        a2 = *(_DWORD*)(thisx + 49152);
    if (!sub_49B578((_DWORD*)(24 * a2 + thisx), *(_DWORD*)(thisx + 50508), a3, a4, *(_BYTE*)(thisx + 50443)))
        return -1;
    if (a5)
    {
        v9[0] = 1;
        v7 = unknown_libname_30((_DWORD*)(void*)(thisx + 24 * a2));
        v10 = sub_4A246A(v7, color);
    }
    else
    {
        v9[0] = 0;
    }
    sub_49CDF4((_DWORD*)(thisx + 24 * a2), (int)v9);
    ++* (_DWORD*)(thisx + 49152);
    return a2;
}
