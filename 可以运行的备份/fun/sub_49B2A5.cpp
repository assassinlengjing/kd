#include "sub.h" 
int sub_49B2A5(_DWORD* thisx, int a2, int a3, int cy, int a5, int a6)
{
    int k; // [esp+8h] [ebp-450h]
    int j; // [esp+Ch] [ebp-44Ch]
    HDC hdcSrc; // [esp+10h] [ebp-448h]
    HGDIOBJ v11; // [esp+14h] [ebp-444h]
    HBITMAP h; // [esp+1Ch] [ebp-43Ch]
    HDC hdc; // [esp+20h] [ebp-438h] BYREF
    int i; // [esp+24h] [ebp-434h]
    void* ppvBits; // [esp+28h] [ebp-430h] BYREF
    BITMAPINFO pbmi; // [esp+2Ch] [ebp-42Ch] BYREF

    if (*thisx)
    {
        if ((*(int(__stdcall**)(_DWORD, HDC*))(*(_DWORD*)*thisx + 68))(*thisx, &hdc))
        {
            MessageBoxA(0, &byte_4B779C, aError_47, 0);
            return 0;
        }
        else
        {
            pbmi.bmiHeader.biSize = 40;
            pbmi.bmiHeader.biWidth = a3;
            pbmi.bmiHeader.biHeight = cy;
            pbmi.bmiHeader.biPlanes = 1;
            pbmi.bmiHeader.biBitCount = 8;
            pbmi.bmiHeader.biCompression = 0;
            pbmi.bmiHeader.biClrUsed = 256;
            pbmi.bmiHeader.biClrImportant = 0;
            for (i = 0; i < 256; ++i)
            {
                pbmi.bmiColors[i].rgbBlue = *(_BYTE*)(a6 + 4 * i + 2);
                pbmi.bmiColors[i].rgbGreen = *(_BYTE*)(a6 + 4 * i + 1);
                pbmi.bmiColors[i].rgbRed = *(_BYTE*)(a6 + 4 * i);
            }
            h = CreateDIBSection(hdc, &pbmi, 0, &ppvBits, 0, 0);
            if (h)
            {
                for (j = 0; j < cy; ++j)
                {
                    for (k = 0; k < a3; ++k)
                        *((_BYTE*)ppvBits + k + ((a3 + 3) & 0xFFFFFFFC) * (cy - j - 1)) = *(_BYTE*)(a5
                            + *(unsigned __int8*)(a2 + k + a3 * j));
                }
                hdcSrc = CreateCompatibleDC(hdc);
                v11 = SelectObject(hdcSrc, h);
                BitBlt(hdc, 0, 0, a3, cy, hdcSrc, 0, 0, 0xCC0020u);
                SelectObject(hdcSrc, v11);
                DeleteObject(h);
                DeleteDC(hdcSrc);
                (*(void(**)(_DWORD, _DWORD, HDC))(*(_DWORD*)*thisx + 104))(*thisx, *thisx, hdc);
                return 1;
            }
            else
            {
                MessageBoxA(0, &byte_4B77C0, aError_48, 0);
                return 0;
            }
        }
    }
    else
    {
        MessageBoxA(0, &byte_4B7758, aError_46, 0);
        return 0;
    }
}
