#include "sub.h" 
int sub_420FC4(int thisx, int a2)
{
    int result; // eax

    result = thisx;
    *(_DWORD*)(thisx + 432) = 82;
    *(_BYTE*)(thisx + 272) = 0;
    if (a2)
    {
        *(_DWORD*)(thisx + 320) = 1;
        return sub_420FC4(*(_DWORD*)(thisx + 312), 0);
    }
    else
    {
        *(_DWORD*)(thisx + 320) = 0;
    }
    return result;
}

