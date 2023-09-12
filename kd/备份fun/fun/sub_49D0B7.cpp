#include "sub.h" 
int  sub_49D0B7(_DWORD* thisx, int a2, int a3, int cy, void* Src)
{
    int j; // [esp+8h] [ebp-44Ch]
    int i; // [esp+Ch] [ebp-448h]
    HDC hdcSrc; // [esp+10h] [ebp-444h]
    HGDIOBJ v10; // [esp+14h] [ebp-440h]
    HBITMAP h; // [esp+1Ch] [ebp-438h]
    HDC hdc; // [esp+20h] [ebp-434h] BYREF
    void* ppvBits; // [esp+24h] [ebp-430h] BYREF
    char pbmi[1064]; // [esp+28h] [ebp-42Ch] BYREF

    if (*thisx || thisx[3])
    {
        if ((*(int(__stdcall**)(_DWORD, HDC*))(*(_DWORD*)*thisx + 68))(*thisx, &hdc))
        {
            sub_499850(&byte_4B7DA4);
            return 0;
        }
        else
        {
            *(_DWORD*)pbmi = 40;
            *(_DWORD*)&pbmi[4] = a3;
            *(_DWORD*)&pbmi[8] = cy;
            *(_WORD*)&pbmi[12] = 1;
            *(_WORD*)&pbmi[14] = 8;
            *(_DWORD*)&pbmi[16] = 0;
            *(_DWORD*)&pbmi[32] = 256;
            *(_DWORD*)&pbmi[36] = 0;
            memcpy(&pbmi[40], Src, 0x400u);
            h = CreateDIBSection(hdc, (const BITMAPINFO*)pbmi, 0, &ppvBits, 0, 0);
            if (h)
            {
                for (i = 0; i < cy; ++i)
                {
                    for (j = 0; j < a3; ++j)
                        *((_BYTE*)ppvBits + j + ((a3 + 3) & 0xFFFFFFFC) * (cy - i - 1)) = *(_BYTE*)(a2 + j + a3 * i);
                }
                hdcSrc = CreateCompatibleDC(hdc);
                v10 = SelectObject(hdcSrc, h);
                BitBlt(hdc, 0, 0, a3, cy, hdcSrc, 0, 0, 0xCC0020u);
                SelectObject(hdcSrc, v10);
                DeleteObject(h);
                DeleteDC(hdcSrc);
                (*(void(**)(_DWORD, _DWORD, HDC))(*(_DWORD*)*thisx + 104))(*thisx, *thisx, hdc);
                return 1;
            }
            else
            {
                sub_499850(&byte_4B7DC0);
                return 0;
            }
        }
    }
    else
    {
        sub_499850(&byte_4B7D68);
        return 0;
    }
}
