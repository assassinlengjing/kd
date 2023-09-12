#include "sub.h" 
int __cdecl sub_4A202A(int a1, HGDIOBJ h, int xSrc, int ySrc, int wSrc, int hSrc)
{
    int v7; // [esp+0h] [ebp-A8h]
    int v8; // [esp+4h] [ebp-A4h]
    HDC hdcDest; // [esp+8h] [ebp-A0h] BYREF
    char pv[4]; // [esp+Ch] [ebp-9Ch] BYREF
    int v11; // [esp+10h] [ebp-98h]
    int v12; // [esp+14h] [ebp-94h]
    int v13; // [esp+24h] [ebp-84h]
    HDC hdc; // [esp+28h] [ebp-80h]
    int v15[31]; // [esp+2Ch] [ebp-7Ch] BYREF

    if (!h || !a1)
        return -2147467259;
    (*(void(__stdcall**)(int))(*(_DWORD*)a1 + 108))(a1);
    hdc = CreateCompatibleDC(0);
    if (!hdc)
        OutputDebugStringA(OutputString);
    SelectObject(hdc, h);
    GetObjectA(h, 24, pv);
    if (wSrc)
        v8 = wSrc;
    else
        v8 = v11;
    if (hSrc)
        v7 = hSrc;
    else
        v7 = v12;
    v15[0] = 124;
    v15[1] = 6;
    (*(void(__stdcall**)(int, int*))(*(_DWORD*)a1 + 88))(a1, v15);
    v13 = (*(int(__stdcall**)(int, HDC*))(*(_DWORD*)a1 + 68))(a1, &hdcDest);
    if (!v13)
    {
        StretchBlt(hdcDest, 0, 0, v15[3], v15[2], hdc, xSrc, ySrc, v8, v7, 0xCC0020u);
        (*(void(__stdcall**)(int, HDC))(*(_DWORD*)a1 + 104))(a1, hdcDest);
    }
    DeleteDC(hdc);
    return v13;
}
