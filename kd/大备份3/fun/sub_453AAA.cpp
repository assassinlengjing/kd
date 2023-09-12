#include "sub.h" 
int sub_453AAA(int thisx)
{
    int result; // eax
    int v3[14]; // [esp+4h] [ebp-38h] BYREF

    sub_49C15E((int)v3);
    v3[1] = 0;
    v3[2] = 0;
    v3[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v3);
    result = *(unsigned __int8*)(thisx + 2516);
    if (!*(_BYTE*)(thisx + 2516))
    {
        sub_477F0C(0);
        if (sub_476DC7(0, 0) || sub_476DC7(0, 1) || (result = sub_476DC7(0, 2)) != 0)
        {
            *(_DWORD*)(thisx + 108) = 3;
            *(_BYTE*)(thisx + 2516) = 2;
            *(_DWORD*)(thisx + 2512) = 0;
            return sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        }
    }
    return result;
}

