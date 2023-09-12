#include "sub.h" 
_DWORD* sub_486476(_DWORD* thisx)
{
    _DWORD* result; // eax
    int i; // [esp+4h] [ebp-3Ch]
    int v4[14]; // [esp+8h] [ebp-38h] BYREF

    sub_49C15E((int)v4);
    v4[1] = -thisx[7];
    v4[2] = 0;
    v4[0] = thisx[8];
    sub_49AB05((int)byte_4BDC60, v4);
    for (i = 0; ; ++i)
    {
        result = thisx;
        if (i >= thisx[77])
            break;
        if (unknown_libname_6((_BYTE*)(432 * i + thisx[82])) != 2)
            sub_48D421(432 * i + thisx[82], thisx[76]);
    }
    return result;
}

