#include "sub.h" 
unsigned __int8*  sub_463101(unsigned __int8* thisx, int a2, int a3)
{
    int v4; // [esp+4h] [ebp-10h]
    int i; // [esp+8h] [ebp-Ch]

    if (a2 < 0 || a2 >(unsigned __int8)unk_4B9990 || a3 < 0 || a3 > thisx[a2 + 2546])
        return 0;
    v4 = 0;
    for (i = 0; i < a2; ++i)
        v4 += thisx[i + 2546];
    return &thisx[612 * (unsigned __int8)unk_4B9988[a3 + v4] + 2628];
}

