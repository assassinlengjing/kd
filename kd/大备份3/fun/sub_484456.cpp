#include "sub.h" 
int sub_484456(_DWORD* thisx, unsigned __int8 a2, unsigned int a3, char a4)
{
    if (a2 >= 4u)
        return 0;
    if (a3 >= thisx[a2 + 2])
        return 0;
    *(_BYTE*)(thisx[a2 + 62] + a3) = a4;
    return 1;
}
