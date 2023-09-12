#include "sub.h" 
unsigned __int8*  sub_417BBB(int thisx, int a2)
{
    unsigned __int8* result; // eax
    unsigned __int16 v3; // ax

    *(_DWORD*)(thisx + 304) = a2;
    *(_DWORD*)(thisx + 296) = 1;
    result = (unsigned __int8*)thisx;
    if (!*(_DWORD*)(thisx + 300))
    {
        v3 = sub_423AC3(a2, 1);
        result = sub_41F1A3((unsigned __int8*)thisx, v3 + 60);
    }
    *(_DWORD*)(thisx + 300) = 1;
    return result;
}

