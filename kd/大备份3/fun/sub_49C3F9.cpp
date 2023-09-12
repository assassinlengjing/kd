#include "sub.h" 
BOOL sub_49C3F9(_DWORD* thisx, _DWORD* a2)
{
    int v4; // [esp+4h] [ebp-4h]

    if (*thisx)
    {
        *a2 = 108;
        v4 = (*(int(__stdcall**)(_DWORD, _DWORD, _DWORD*, _DWORD, _DWORD))(*(_DWORD*)*thisx + 100))(*thisx, 0, a2, 0, 0);
        if (v4 == -2005532222)
        {
            MessageBoxA(0, &unk_4B7C60, aError_59, 0);
            (*(void(__stdcall**)(_DWORD))(*(_DWORD*)*thisx + 108))(*thisx);
            v4 = (*(int(**)(_DWORD, _DWORD, _DWORD, _DWORD*, _DWORD, _DWORD))(*(_DWORD*)*thisx + 100))(
                *thisx,
                *thisx,
                0,
                a2,
                0,
                0);
        }
        return v4 == 0;
    }
    else
    {
        MessageBoxA(0, &unk_4B7C38, aError_58, 0);
        return 0;
    }
}

