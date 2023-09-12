#include "sub.h" 
int  sub_49CDF4(_DWORD* thisx, int a2)
{
    int v4[2]; // [esp+4h] [ebp-8h] BYREF

    if (thisx[3] && thisx[4])
    {
        *((_BYTE*)thisx + 5) = *(_BYTE*)a2;
        return 1;
    }
    else if (*thisx)
    {
        if (*(_BYTE*)a2)
        {
            v4[0] = *(_DWORD*)(a2 + 4);
            v4[1] = *(_DWORD*)(a2 + 4);
            (*(void(__stdcall**)(_DWORD, int, int*))(*(_DWORD*)*thisx + 116))(*thisx, 8, v4);
            *((_BYTE*)thisx + 5) = 1;
        }
        else
        {
            *((_BYTE*)thisx + 5) = 0;
        }
        return 1;
    }
    else
    {
        return 0;
    }
}
