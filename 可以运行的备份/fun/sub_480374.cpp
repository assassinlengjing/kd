#include "sub.h" 
_DWORD* sub_480374(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax

    result = thisx;
    if (thisx[1])
    {
        thisx[4] += thisx[7] * a2;
        if (thisx[4] > thisx[6])
            thisx[4] = thisx[5];
        result = thisx;
        if (thisx[4] < thisx[5])
        {
            result = thisx;
            thisx[4] = thisx[6];
        }
    }
    return result;
}
