#include "sub.h" 
int sub_49B578(_DWORD* thisx, int a2, int a3, int a4, char a5)
{
    int v6; // edx
    int v8[31]; // [esp+4h] [ebp-7Ch] BYREF

    if (a2)
    {
        memset(v8, 0, sizeof(v8));
        v8[0] = 124;
        v8[1] = 7;
        v8[26] = 64;
        if (a5)
        {
            v6 = v8[26];
            BYTE1(v6) = BYTE1(v8[26]) | 8;
            v8[26] = v6;
        }
        v8[3] = a3;
        *((_WORD*)thisx + 3) = a3;
        v8[2] = a4;
        *((_WORD*)thisx + 4) = a4;
        if (*thisx)
        {
            (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 8))(*thisx, *thisx);
            *thisx = 0;
        }
        if ((*(int(__stdcall**)(int, int*, _DWORD*, _DWORD))(*(_DWORD*)a2 + 24))(a2, v8, thisx, 0))
        {
            MessageBoxA(0, &byte_4B7818, aError_50, 0);
            return 0;
        }
        else
        {
            (*(void(**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 108))(*thisx, *thisx);
            return 1;
        }
    }
    else
    {
        MessageBoxA(0, &byte_4B77E8, aError_49, 0);
        return 0;
    }
}
