#include "sub.h" 
BOOL sub_48EB7C(unsigned __int8* thisx)
{
    int i; // [esp+4h] [ebp-Ch]
    int j; // [esp+4h] [ebp-Ch]
    char v5[8]; // [esp+8h] [ebp-8h] BYREF

    memset(v5, 0, sizeof(v5));
    for (i = 0; i < (unsigned __int8)byte_4B9986; ++i)
        ++v5[thisx[i + 36]];
    for (j = 0; j < (unsigned __int8)byte_4B9990 && (unsigned __int8)v5[j] <= (int)thisx[j + 44]; ++j)
        ;
    return j < (unsigned __int8)byte_4B9990;
}

