#include "sub.h" 
char* sub_420EF3(int thisx, int a2)
{
    char* result; // eax

    *(_DWORD*)(thisx + 304) = a2;
    *(_DWORD*)(thisx + 288) = 1;
    if (*(_DWORD*)(thisx + 428) == 4)
    {
        *(_DWORD*)(thisx + 428) = 3;
        *(_DWORD*)(thisx + 432) = 3;
    }
    result = (char*)(unsigned __int8)byte_4B99C8;
    if (byte_4B99C8)
    {
        result = (char*)(unsigned __int8)sub_426070(*(_BYTE**)(thisx + 304));
        if (result == (char*)*(unsigned __int8*)(thisx + 193))
            return sub_4211F5(thisx);
    }
    return result;
}

