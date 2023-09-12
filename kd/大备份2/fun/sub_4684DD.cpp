#include "sub.h" 
char sub_4684DD(_BYTE* thisx)
{
    char v3; // [esp+4h] [ebp-8h]
    int i; // [esp+8h] [ebp-4h]

    v3 = 0;
    for (i = 0; i < 3; ++i)
    {
        if (sub_426850(thisx, i))
            ++v3;
    }
    return v3;
}

