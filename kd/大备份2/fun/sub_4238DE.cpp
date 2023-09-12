#include "sub.h" 
int sub_4238DE(int thisx, SchedulerProxy* a2)
{
    int result; // eax

    if (*(_DWORD*)(thisx + 392))
        *(_DWORD*)(thisx + 432) = 50;
    else
        *(_DWORD*)(thisx + 432) = 3;
    sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A1C, -1, 100, 100, 0);
    sub_41F24C(thisx, a2);
    if (*(char*)(thisx + 230) > 0 && *(char*)(thisx + 230) < 5)
        *(_BYTE*)(thisx + 230) = 5;
    if (*(char*)(thisx + 231) > 0 && *(char*)(thisx + 231) < 5)
        *(_BYTE*)(thisx + 231) = 5;
    if (*(char*)(thisx + 233) > 0 && *(char*)(thisx + 233) < 5)
        *(_BYTE*)(thisx + 233) = 5;
    result = *(char*)(thisx + 234);
    if (result > 0 && *(char*)(thisx + 234) < 5)
    {
        result = thisx;
        *(_BYTE*)(thisx + 234) = 5;
    }
    return result;
}

