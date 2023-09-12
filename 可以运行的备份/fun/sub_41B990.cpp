#include "sub.h" 
int sub_41B990(int thisx, int a2, int a3)
{
    *(_DWORD*)(thisx + 432) = a3;
    *(_DWORD*)(thisx + 304) = a2;
    *(_DWORD*)(thisx + 284) = 0;
    *(_DWORD*)(thisx + 280) = 0;
    *(_DWORD*)(thisx + 444) = 0;
    *(_DWORD*)(thisx + 340) = 0;
    *(_DWORD*)(thisx + 344) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    if (a3 != 113)
    {
        *(_BYTE*)(thisx + 474) = 0;
        *(_BYTE*)(thisx + 475) = 0;
    }
    if (a3 == 116)
        *(_DWORD*)(thisx + 436) = *(_DWORD*)(thisx + 428) != 44;
    return sub_41F6DE((_DWORD*)thisx);
}

