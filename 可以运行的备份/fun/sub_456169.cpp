#include "sub.h" 
int sub_456169(void* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 32; ++i)
    {
        sub_442815((int)thisx + 36 * i + 9608);
        result = i + 1;
    }
    return result;
}

