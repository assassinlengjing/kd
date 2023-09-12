#include "sub.h" 
void* sub_46D387(_BYTE* thisx)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 4; ++i)
        sub_46D2DE((int)&thisx[244 * i]);
    thisx[1084] = 0;
    return memset(thisx + 1086, 0, 9u);
}

