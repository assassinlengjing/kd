#include "sub.h" 
_DWORD* sub_475DB0(_DWORD* thisx, int a2)
{
    _DWORD* result; // eax

    result = thisx;
    thisx[20] = a2;
    return result;
}
