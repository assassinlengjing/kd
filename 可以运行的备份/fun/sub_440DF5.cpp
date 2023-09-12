#include "sub.h" 
int sub_440DF5(_DWORD* thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 64; ++i)
    {
        sub_43F91E(&thisx[2 * i]);
        result = i + 1;
    }
    return result;
}

