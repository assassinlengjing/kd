#include "sub.h" 
int sub_463F05(int thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = thisx;
    *(_BYTE*)(thisx + 370) = 0;
    *(_BYTE*)(thisx + 255) = 0;
    *(_WORD*)(thisx + 378) = 0;
    for (i = 0; i < 2; ++i)
    {
        *(_BYTE*)(i + thisx + 372) = 0;
        *(_BYTE*)(i + thisx + 374) = 0;
        result = i + 1;
    }
    return result;
}

