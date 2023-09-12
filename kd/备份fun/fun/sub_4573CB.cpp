#include "sub.h" 
int sub_4573CB(int thisx, char a2, int a3, char a4)
{
    int result; // eax

    *(_BYTE*)(thisx + 11420) = a2;
    *(_DWORD*)(thisx + 11424) = a3;
    *(_DWORD*)(thisx + 11428) = a3;
    result = thisx;
    *(_BYTE*)(thisx + 11421) = a4;
    return result;
}

