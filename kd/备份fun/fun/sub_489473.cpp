#include "sub.h" 
void sub_489473(_DWORD* thisx, int a2, int a3, int a4, int a5)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < thisx[88]; ++i)
    {
        if (unknown_libname_22((_DWORD*)(12 * i + thisx[87])) == a2)
        {
            sub_48E1DB((int*)(12 * i + thisx[87]), a3, a4, a5);
            return;
        }
    }
}

