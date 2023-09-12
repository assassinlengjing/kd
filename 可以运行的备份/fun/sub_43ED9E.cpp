#include "sub.h" 
int sub_43ED9E(unsigned __int8* thisx, unsigned __int8 a2, unsigned __int8 a3)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 3; ++i)
    {
        if (thisx[2 * i + 31] == a2 && thisx[2 * i + 32] == a3)
            return 1;
    }
    return 0;
}

