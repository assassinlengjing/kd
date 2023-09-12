#include "sub.h" 
int sub_4995EB(_WORD* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 2; ++i)
    {
        thisx[8 * i + 12] = -2;
        result = i + 1;
    }
    return result;
}

