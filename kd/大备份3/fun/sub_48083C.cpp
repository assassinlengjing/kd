#include "sub.h" 
_DWORD* sub_48083C(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax

    thisx[6] = a2;
    result = thisx;
    if (thisx[4] > thisx[6])
    {
        result = thisx;
        thisx[4] = thisx[6];
    }
    return result;
}
