#include "sub.h" 
int __cdecl sub_47C20C(unsigned __int16 a1)
{
    signed int i; // [esp+0h] [ebp-4h]

    for (i = 0; i < (int)unk_4B93A0; ++i)
    {
        if (unknown_libname_22((_DWORD*)unk_4B93A4 + 6 * i) == a1)
            return i;
    }
    return -1;
}

