#include "sub.h" 
void sub_489629(_DWORD* thisx, int a2, int a3, int a4)
{
    int j; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    if (a2 == -1)
    {
        for (i = 0; i < thisx[77]; ++i)
        {
            if (unknown_libname_22((_DWORD*)(432 * i + thisx[82])) == a3)
                sub_48DC0D(432 * i + thisx[82], a4);
        }
    }
    else
    {
        for (j = a2; j < a3 + 1 && j < thisx[77]; ++j)
            sub_48DC0D(432 * j + thisx[82], a4);
    }
}
