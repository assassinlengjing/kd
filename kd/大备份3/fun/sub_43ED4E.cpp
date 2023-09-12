#include "sub.h" 
int sub_43ED4E(unsigned __int8* thisx, unsigned __int8 a2)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 3; ++i)
    {
        if (thisx[2 * i + 31] == a2)
            return (int)&thisx[2 * i + 31];
    }
    return 0;
}

