#include "sub.h" 
char sub_4768D5(_DWORD* thisx)
{
    int v1; // eax

    if (*thisx)
        return thisx[1] + 1;
    else
        LOBYTE(v1) = 0;
    return v1;
}

