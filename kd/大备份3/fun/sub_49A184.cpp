#include "sub.h" 
int sub_49A184(_DWORD** thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 2048; ++i)
        sub_49B04B((int*) & thisx[6 * i]);
    sub_49B882(thisx);
    if (thisx[12630])
    {
        (*(void(**)(_DWORD*, _DWORD*))(*thisx[12630] + 8))(thisx[12630], thisx[12630]);
        thisx[12630] = 0;
    }
    if (thisx[12628])
    {
        (*(void(__stdcall**)(_DWORD*))(*thisx[12628] + 8))(thisx[12628]);
        thisx[12628] = 0;
    }
    if (thisx[12632])
    {
        (*(void(__stdcall**)(_DWORD*))(*thisx[12632] + 8))(thisx[12632]);
        thisx[12632] = 0;
    }
    result = (int)thisx;
    if (thisx[12627])
    {
        result = (*(int(**)(_DWORD*, _DWORD*))(*thisx[12627] + 8))(thisx[12627], thisx[12627]);
        thisx[12627] = 0;
    }
    if (thisx[12626])
    {
        (*(void(__stdcall**)(_DWORD*))(*thisx[12626] + 8))(thisx[12626]);
        result = (int)thisx;
        thisx[12626] = 0;
    }
    return result;
}

