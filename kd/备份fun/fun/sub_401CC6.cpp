#include "sub.h" 
char __stdcall sub_401CC6(_DWORD* thisx, char a2)
{
    int v2; // [esp+4h] [ebp-4h]

    v2 = sub_401BD0(thisx,a2);
    if (v2)
        return *(_BYTE*)(v2 + 7);
    else
        return 0;
}

