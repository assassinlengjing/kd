#include "sub.h" 
int sub_417E42(int thisx)
{
    int result; // eax

    *(_DWORD*)(thisx + 292) = 0;
    *(_DWORD*)(thisx + 304) = 0;
    *(_DWORD*)(thisx + 432) = 50;
    result = thisx;
    *(_BYTE*)(thisx + 470) = 0;
    *(_BYTE*)(thisx + 471) = 1;
    return result;
}

