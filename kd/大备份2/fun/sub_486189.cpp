#include "sub.h" 
int sub_486189(int thisx, int a2, char* Source)
{
    int v4; // esi
    HANDLE hObject; // [esp+8h] [ebp-144h]
    int v7[15]; // [esp+Ch] [ebp-140h] BYREF
    CHAR FileName[260]; // [esp+48h] [ebp-104h] BYREF

    *(_WORD*)(thisx + 300) = a2;
    *(_DWORD*)(thisx + 340) = 100;
    *(_DWORD*)(thisx + 344) = 0;
    if (Source)
        strcpy((char*)(thisx + 40), Source);
    else
        wsprintfA((LPSTR)(thisx + 40), "Stage%02d.wav", a2);
    wsprintfA(FileName, "Stage\\Stage%02d.bmp", a2);
    sub_49DB90(v7);
    v7[1] = 0;
    v7[2] = 0;
    v7[3] = -1;
    v7[4] = -1;
    v7[5] = 1;
    v7[9] = -1;
    if (sub_49DA45((_DWORD*)byte_4BDC60, FileName, (int)v7))
    {
        *(_DWORD*)(thisx + 32) = v7[0];
        wsprintfA(FileName, "Stage\\Stage%02d.dat", a2);
        hObject = CreateFileA(FileName, 0x80000000, 0, 0, 3u, 0x80u, 0);
        if (hObject == (HANDLE)-1)
        {
            return 0;
        }
        else if (sub_481B9F(thisx + 4, hObject))
        {
            CloseHandle(hObject);
            *(_DWORD*)(thisx + 312) = 4 * (unsigned __int8)unknown_libname_25((_BYTE*)(thisx + 4));
            *(_DWORD*)(thisx + 316) = 4 * (unsigned __int8)sub_4261F0((char*)thisx + 4);
            *(_DWORD*)(thisx + 320) = 9 * (8 * (unsigned __int8)sub_4261F0((char*)thisx + 4) / 10);
            *(_DWORD*)(thisx + 324) = 3 * (8 * (unsigned __int8)sub_4261F0((char*)thisx + 4) / 10);
            sub_4869CF(thisx);
            wsprintfA(FileName, "Stage\\Stage%02d_Obj.txt", a2);
            sub_486B0E(thisx, FileName);
            *(_DWORD*)(thisx + 28) = *(_DWORD*)(thisx + 312) - 160;
            v4 = 176 - 8 * (unsigned __int8)sub_4261F0((char*)thisx + 4);
            *(_DWORD*)(thisx + 36) = v4 + 4 * (char)sub_489D40((char*)thisx + 4);
            sub_489C36((const CHAR*)thisx);
            return 1;
        }
        else
        {
            CloseHandle(hObject);
            return 0;
        }
    }
    else
    {
        MessageBoxA(hWnd, &byte_4B6E10, aError_39, 0);
        return 0;
    }
}
