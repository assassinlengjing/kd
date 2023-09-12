#include "sub.h" 
int sub_4554F8(_DWORD* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    result = (int)thisx;
    thisx[2273] = 0;
    for (i = 0; i < 32; ++i)
        result = sub_43F308((int)&thisx[4 * i + 2274]);
    return result;
}

