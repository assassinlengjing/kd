#include "sub.h" 
int sub_40181C(unsigned __int8* thisx)
{
    int i; // [esp+4h] [ebp-8h]
    int v3; // [esp+8h] [ebp-4h]

    v3 = 0;
    for (i = 0; i < 3; ++i)
        v3 += thisx[i + 32] != 0;
    return v3;
}

