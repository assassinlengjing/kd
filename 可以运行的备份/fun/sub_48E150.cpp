#include "sub.h" 
_DWORD* sub_48E150(_DWORD* thisx, _DWORD* a2, int a3)
{
    *a2 = thisx[4 * a3 + 98];
    a2[1] = thisx[4 * a3 + 99];
    a2[2] = thisx[4 * a3 + 100];
    a2[3] = thisx[4 * a3 + 101];
    return a2;
}
