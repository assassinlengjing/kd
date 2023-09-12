#include "sub.h" 
char __stdcall sub_401C1E(_DWORD* thisx, char a2, int a3)
{
    int v3; // [esp+4h] [ebp-4h]

    v3 = sub_401BD0(thisx,a2);
    if (v3 && a2 >= 0 && a2 <= 1)
        return *(_BYTE*)(a2 + v3 + 2);
    else
        return 0;
}

