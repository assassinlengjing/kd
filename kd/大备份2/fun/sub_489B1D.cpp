#include "sub.h" 
void sub_489B1D(_DWORD* thisx, int a2, int a3, _BYTE* a4, int a5)
{
    int j; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    if (a2 == -1)
    {
        for (i = 0; i < thisx[77]; ++i)
        {
            if (unknown_libname_22((_DWORD*)(432 * i + thisx[82])) == a3)
                sub_48A94C(thisx[82] + 432 * i, a4, a5);
        }
    }
    else
    {
        for (j = a2; j < a3 + 1 && j < thisx[77]; ++j)
            sub_48A94C(432 * j + thisx[82], a4, a5);
    }
}
