#include "sub.h" 
int sub_41F6DE(_DWORD* thisx)
{
    int result; // eax

    result = (int)thisx;
    if (thisx[120])
    {
        result = sub_494979(thisx[120]);
        thisx[120] = 0;
    }
    return result;
}

