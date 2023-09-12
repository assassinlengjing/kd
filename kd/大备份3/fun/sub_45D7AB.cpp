#include "sub.h" 
int sub_45D7AB(int thisx)
{
    int result; // eax
    int v3[14]; // [esp+4h] [ebp-38h] BYREF

    sub_49C15E((int)v3);
    v3[1] = 0;
    v3[2] = 0;
    v3[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v3);
    sub_477F0C(0);
    result = sub_476DC7(0, 0);
    if (result)
    {
        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        result = thisx;
        *(_DWORD*)(thisx + 108) = 19;
        *(_BYTE*)(thisx + 2516) = 2;
        *(_BYTE*)(thisx + 13100) = 0;
    }
    return result;
}

