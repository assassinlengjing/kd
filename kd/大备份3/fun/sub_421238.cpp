#include "sub.h" 
int sub_421238(int thisx)
{
    int v3[15]; // [esp+4h] [ebp-3Ch] BYREF

    sub_49DB90(v3);
    v3[1] = 0;
    v3[2] = 0;
    v3[3] = -1;
    v3[4] = -1;
    v3[5] = 1;
    v3[9] = 0;
    v3[0] = -1;
    if (*(_BYTE*)(thisx + 188) == 1)
    {
        if (!sub_49DA45((_DWORD*)unk_4BDC60, aGraphicMisuzuB, (int)v3))
            return 0;
        *(_DWORD*)(thisx + 196) = v3[0];
    }
    else if (*(_BYTE*)(thisx + 188) == 2 || *(_BYTE*)(thisx + 188) == 3)
    {
        if (!sub_49DA45((_DWORD*)unk_4BDC60, aGraphicDoubleD, (int)v3))
            return 0;
        *(_DWORD*)(thisx + 196) = v3[0];
        *(_DWORD*)(*((_DWORD*)unk_4B9360 + *(unsigned __int8*)(thisx + 192)) + 4 * *(unsigned __int16*)(thisx + 498)) = 1;
    }
    return 1;
}

