#include "sub.h" 
int sub_49B106(_DWORD* thisx, int a2, int a3, int a4, int a5, int a6)
{
    int j; // [esp+4h] [ebp-94h]
    int v9; // [esp+8h] [ebp-90h]
    int v10[31]; // [esp+Ch] [ebp-8Ch] BYREF
    int v11; // [esp+88h] [ebp-10h]
    int i; // [esp+8Ch] [ebp-Ch]
    int v13; // [esp+90h] [ebp-8h]
    int v14; // [esp+94h] [ebp-4h]

    if (*thisx)
    {
        v10[0] = 124;
        v9 = (*(int(__stdcall**)(_DWORD, _DWORD, int*, _DWORD, _DWORD))(*(_DWORD*)*thisx + 100))(*thisx, 0, v10, 0, 0);
        if (v9 == -2005532222)
        {
            MessageBoxA(0, &byte_4B7710, aError_44, 0);
            (*(void(__stdcall**)(_DWORD))(*(_DWORD*)*thisx + 108))(*thisx);
            v9 = (*(int(__stdcall**)(_DWORD, _DWORD, int*, _DWORD, _DWORD))(*(_DWORD*)*thisx + 100))(*thisx, 0, v10, 0, 0);
        }
        if (v9)
        {
            return 0;
        }
        else
        {
            v13 = v10[9];
            v14 = v10[4];
            v11 = a2;
            for (i = 0; i < a4; ++i)
            {
                for (j = 0; j < a3; ++j)
                    *(_BYTE*)(j + v13) = *(_BYTE*)(a5 + *(unsigned __int8*)(j + v11));
                v13 += v14;
                v11 += a3;
            }
            if ((*(int(__stdcall**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 128))(*thisx, 0))
            {
                MessageBoxA(0, &byte_4B7720, aError_45, 0);
                return 0;
            }
            else
            {
                return 1;
            }
        }
    }
    else
    {
        MessageBoxA(0, &byte_4B76CC, aError_43, 0);
        return 0;
    }
}
