#include "sub.h"
int sub_465AFA(unsigned __int8* thisx)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < (unsigned __int8)byte_4B9990; ++i)
    {
        if (thisx[i + 2546] >= 2u)
            return 1;
    }
    return 0;
}