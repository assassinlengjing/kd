#include "sub.h" 
int sub_4893BC(_DWORD* thisx, int a2)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < thisx[84]; ++i)
    {
        if (unknown_libname_30((_DWORD*)thisx[83] + 8 * i) == a2)
            return unknown_libname_22((_DWORD*)(thisx[83] + 8 * i));
    }
    return 0;
}
