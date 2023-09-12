#include "sub.h" 
int sub_484410(_DWORD* thisx, unsigned int a2, char a3, char a4)
{
    if (a2 >= thisx[1])
        return 0;
    *(_BYTE*)(thisx[57] + 2 * a2) = a3;
    *(_BYTE*)(thisx[57] + 2 * a2 + 1) = a4;
    return 1;
}

