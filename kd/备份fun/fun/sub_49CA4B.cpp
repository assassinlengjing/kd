#include "sub.h" 
int sub_49CA4B(_DWORD* thisx, int a2, LPCSTR name, char a4)
{
    int v6; // [esp+4h] [ebp-8h] BYREF
    __int16 v7; // [esp+8h] [ebp-4h]

    if (*thisx)
    {
        (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 8))(*thisx, *thisx);
        *thisx = 0;
    }
    *thisx = sub_4A25CE(a2, name, 0, 0, a4, (int)&v6);
    if (!*thisx)
        return 0;
    *((_WORD*)thisx + 3) = v6;
    *((_WORD*)thisx + 4) = v7;
    *((_BYTE*)thisx + 4) = 1;
    return 1;
}

