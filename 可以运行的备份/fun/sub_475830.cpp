#include "sub.h" 
_BYTE* sub_475830(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[15] = a2;
    return result;
}
