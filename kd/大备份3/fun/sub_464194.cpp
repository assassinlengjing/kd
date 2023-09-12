#include "sub.h" 
void sub_464194(_DWORD* thisx, double st5_0, double a3, double a4, int a5)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
    {
        if (!unknown_libname_22(&thisx[49 * i + 1881]))
        {
            sub_490BDC((int)&thisx[49 * i + 1881], st5_0, a3, a4, a5);
            return;
        }
    }
}

