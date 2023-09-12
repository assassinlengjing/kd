#include "sub.h" 
int sub_401E83(_DWORD* thisx, unsigned __int8 a2)
{
    if (a2 < (int)*(unsigned __int8*)thisx)
        return thisx[1] + 8 * a2;
    else
        return 0;
}


