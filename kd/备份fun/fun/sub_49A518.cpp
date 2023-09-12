#include "sub.h" 
int sub_49A518(int thisx)
{
    int result; // eax
    struct tagRECT rc; // [esp+4h] [ebp-24h] BYREF
    HDC hdc; // [esp+14h] [ebp-14h]
    HDC hdcSrc; // [esp+18h] [ebp-10h] BYREF
    int v6; // [esp+1Ch] [ebp-Ch]
    struct tagPOINT Point; // [esp+20h] [ebp-8h] BYREF

    Point.y = 0;
    Point.x = 0;
    if (!*(_BYTE*)(thisx + 50442) && !ClientToScreen(*(HWND*)(thisx + 50500), &Point))
        MessageBoxA(*(HWND*)(thisx + 50500), aClienttoscreen, &byte_4B75D4, 0);
    if (*(_BYTE*)(thisx + 50445))
    {
        if ((*(int(__stdcall**)(_DWORD, HDC*))(**(_DWORD**)(thisx + 50520) + 68))(*(_DWORD*)(thisx + 50520), &hdcSrc))
            MessageBoxA(*(HWND*)(thisx + 50500), aMPddssysscGetd, &byte_4B75FC, 0);
        hdc = GetDC(*(HWND*)(thisx + 50500));
        if (*(_WORD*)(thisx + 50446) == 256)
            BitBlt(hdc, 0, 0, *(_DWORD*)(thisx + 50492), *(_DWORD*)(thisx + 50496), hdcSrc, 0, 0, 0xCC0020u);
        else
            StretchBlt(
                hdc,
                0,
                0,
                *(_DWORD*)(thisx + 50476),
                *(_DWORD*)(thisx + 50480),
                hdcSrc,
                0,
                0,
                *(_DWORD*)(thisx + 50492),
                *(_DWORD*)(thisx + 50496),
                0xCC0020u);
        if (hdcSrc)
            (*(void(**)(_DWORD, _DWORD, HDC))(**(_DWORD**)(thisx + 50520) + 104))(
                *(_DWORD*)(thisx + 50520),
                *(_DWORD*)(thisx + 50520),
                hdcSrc);
        result = ReleaseDC(*(HWND*)(thisx + 50500), hdc);
    }
    else if (*(_BYTE*)(thisx + 50443))
    {
        if (*(_BYTE*)(thisx + 50444))
        {
            if (*(_WORD*)(thisx + 50446) == 256)
                v6 = (*(int(__stdcall**)(_DWORD, LONG, LONG, _DWORD, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50516) + 28))(
                    *(_DWORD*)(thisx + 50516),
                    Point.x,
                    Point.x,
                    *(_DWORD*)(thisx + 50520),
                    0,
                    0);
            else
                v6 = (*(int(__stdcall**)(_DWORD, int, _DWORD, int, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50512) + 20))(
                    *(_DWORD*)(thisx + 50512),
                    thisx + 50468,
                    *(_DWORD*)(thisx + 50520),
                    thisx + 50484,
                    0,
                    0);
            result = (*(int(__stdcall**)(_DWORD, _DWORD, int))(**(_DWORD**)(thisx + 50512) + 44))(
                *(_DWORD*)(thisx + 50512),
                0,
                1);
            v6 = result;
        }
        else
        {
            if (*(_WORD*)(thisx + 50446) == 256)
            {
                result = (*(int(__stdcall**)(_DWORD, LONG, LONG, _DWORD, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50512) + 28))(
                    *(_DWORD*)(thisx + 50512),
                    Point.x,
                    Point.y,
                    *(_DWORD*)(thisx + 50520),
                    0,
                    0);
            }
            else
            {
                SetRect(&rc, Point.x, Point.y, Point.x + *(_DWORD*)(thisx + 50476), Point.y + *(_DWORD*)(thisx + 50480));
                result = (*(int(__stdcall**)(_DWORD, struct tagRECT*, _DWORD, int, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50512)
                    + 20))(
                        *(_DWORD*)(thisx + 50512),
                        &rc,
                        *(_DWORD*)(thisx + 50520),
                        thisx + 50484,
                        0,
                        0);
            }
            v6 = result;
        }
    }
    else
    {
        if (*(_BYTE*)(thisx + 50444))
            result = (*(int(**)(_DWORD, _DWORD, _DWORD, int))(**(_DWORD**)(thisx + 50512) + 44))(
                *(_DWORD*)(thisx + 50512),
                *(_DWORD*)(thisx + 50512),
                0,
                1);
        else
            result = (*(int(__stdcall**)(_DWORD, LONG, LONG, _DWORD, _DWORD, _DWORD))(**(_DWORD**)(thisx + 50512) + 28))(
                *(_DWORD*)(thisx + 50512),
                Point.x,
                Point.y,
                *(_DWORD*)(thisx + 50516),
                0,
                0);
        v6 = result;
    }
    if (v6 == -2005532222)
        return (*(int(__stdcall**)(_DWORD))(**(_DWORD**)(thisx + 50512) + 108))(*(_DWORD*)(thisx + 50512));
    return result;
}

