#include "sub.h" 
int __cdecl sub_4A246A(int a1, COLORREF color)
{
    COLORREF Pixel; // [esp+0h] [ebp-8Ch]
    int v4; // [esp+4h] [ebp-88h]
    HDC hdc; // [esp+8h] [ebp-84h] BYREF
    int v6; // [esp+Ch] [ebp-80h]
    int v7[21]; // [esp+10h] [ebp-7Ch] BYREF
    unsigned int v8; // [esp+64h] [ebp-28h]

    v4 = -1;
    if (color != -1 && !(*(int(__stdcall**)(int, HDC*))(*(_DWORD*)a1 + 68))(a1, &hdc))
    {
        Pixel = GetPixel(hdc, 0, 0);
        SetPixel(hdc, 0, 0, color);
        (*(void(__stdcall**)(int, HDC))(*(_DWORD*)a1 + 104))(a1, hdc);
    }
    v7[0] = 124;
    do
        v6 = (*(int(__stdcall**)(int, _DWORD, int*, _DWORD, _DWORD))(*(_DWORD*)a1 + 100))(a1, 0, v7, 0, 0);
    while (v6 == -2005532132);
    if (!v6)
    {
        v4 = *(_DWORD*)v7[9];
        if (v8 < 0x20)
            v4 &= (1 << v8) - 1;
        (*(void(__stdcall**)(int, _DWORD))(*(_DWORD*)a1 + 128))(a1, 0);
    }
    if (color != -1 && !(*(int(__stdcall**)(int, HDC*))(*(_DWORD*)a1 + 68))(a1, &hdc))
    {
        SetPixel(hdc, 0, 0, Pixel);
        (*(void(__stdcall**)(int, HDC))(*(_DWORD*)a1 + 104))(a1, hdc);
    }
    return v4;
}
