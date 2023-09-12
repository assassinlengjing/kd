#include "sub.h" 
int sub_480016(_DWORD* thisx, int a2)
{
    int result; // eax

    if (a2 < thisx[5])
        a2 = thisx[5];
    if (a2 > thisx[6])
        a2 = thisx[6];
    result = a2;
    thisx[4] = a2;
    return result;
}

