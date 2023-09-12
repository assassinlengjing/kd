#include "sub.h" 
_BYTE* sub_475D90(_BYTE* thisx, char a2)
{
    _BYTE* result; // eax

    result = thisx;
    thisx[72] = a2;
    return result;
}
