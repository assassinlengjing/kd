#include "sub.h" 
int __cdecl sub_476DEE(LPCSTR lpString1)
{
    char* v1; // eax
    signed int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < (int)Size; ++i)
    {
        v1 = unknown_libname_18((char*)(36 * i + unk_4B92E0));
        if (!lstrcmpiA(lpString1, v1))
            return i;
    }
    return -1;
}
