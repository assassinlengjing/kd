#include "sub.h" 
int sub_46D56B(__int16* thisx, int a2, int a3)
{
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 4; ++i)
    {
        if (i != a3 && a2 == thisx[122 * i + 119])
            return 1;
    }
    return 0;
}

