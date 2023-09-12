#include "sub.h" 
unsigned __int8* sub_41F1A3(unsigned __int8* thisx, int a2)
{
    unsigned __int8* result; // eax
    int v3; // [esp+4h] [ebp-4h]

    if (a2 > 0)
    {
        a2 = (100 - 5 * thisx[472]) * a2 / 100;
        if (a2 <= 0)
            a2 = 1;
        if (thisx[472] < 0x14u)
            ++thisx[472];
    }
    v3 = a2 + thisx[470];
    if (v3 >= 0)
    {
        if (v3 > 255)
            LOBYTE(v3) = -1;
    }
    else
    {
        LOBYTE(v3) = 0;
    }
    result = thisx;
    thisx[470] = v3;
    return result;
}

