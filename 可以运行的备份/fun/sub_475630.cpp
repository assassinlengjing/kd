#include "sub.h" 
_BYTE* sub_475630(_BYTE* thisx, char a2, char a3, char a4, char a5)
{
    _BYTE* result; // eax

    thisx[4] = a2;
    thisx[5] = a3;
    thisx[6] = a4;
    result = thisx;
    thisx[7] = a5;
    return result;
}
