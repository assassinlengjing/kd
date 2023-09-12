#include "sub.h" 
int sub_482FAA(_DWORD* thisx)
{
    unsigned int i; // [esp+8h] [ebp-4h]

    unk_4CA1D0 = 0;
    if (!*thisx)
        return 0;
    for (i = thisx[2]; i < thisx[1]; ++i)
    {
        if (*(_BYTE*)(*thisx + i) == 10)
        {
            thisx[2] = i + 1;
            thisx[3] = 0;
            return 1;
        }
    }
    return 0;
}

