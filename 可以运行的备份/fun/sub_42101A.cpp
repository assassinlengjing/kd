#include "sub.h" 
_DWORD* sub_42101A(_DWORD* thisx)
{
    _DWORD* result; // eax

    thisx[108] = 85;
    thisx[80] = 0;
    result = thisx;
    thisx[76] = thisx[78];
    return result;
}

