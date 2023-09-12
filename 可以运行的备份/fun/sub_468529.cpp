#include "sub.h" 
int sub_468529(_BYTE* thisx, char a2)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 3; ++i)
    {
        if (thisx[i + 68] == a2)
            return 0;
        if (!thisx[i + 68])
        {
            thisx[i + 68] = a2;
            return 1;
        }
    }
    return 0;
}

