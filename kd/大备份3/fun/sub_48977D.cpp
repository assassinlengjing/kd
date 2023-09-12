#include "sub.h" 
_DWORD* sub_48977D(_DWORD* thisx, int a2, int a3, int a4, _DWORD* a5)
{
    _DWORD* result; // eax

    if (a5)
    {
        *a5 = a2 / 100 - thisx[7];
        result = a5;
        a5[1] = thisx[9] + a4 / 100 + a3 / 100;
    }
    return result;
}
