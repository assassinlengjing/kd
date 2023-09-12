#include "sub.h" 
BOOL sub_401782(_BYTE* thisx, int a2)
{
    int i; // [esp+4h] [ebp-4h]

    if (thisx[20] == 4)
        return a2 <= 10 || a2 == 16 || a2 == 23;
    for (i = 0; i < 3; ++i)
    {
        if (a2 == (unsigned __int8)thisx[i + 32])
            return 1;
    }
    return 0;
}

