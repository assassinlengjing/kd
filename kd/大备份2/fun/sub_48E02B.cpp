#include "sub.h" 
int sub_48E02B(_DWORD* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 7; ++i)
    {
        thisx[2 * i + 43] = -1;
        result = i + 1;
    }
    return result;
}

