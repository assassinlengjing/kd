#include "sub.h" 
int __cdecl sub_47E5AC(HINSTANCE hInstance, int nCmdShow)
{
    struct tagRECT rc; // [esp+10h] [ebp-38h] BYREF
    int v4[5]; // [esp+20h] [ebp-28h] BYREF
    char v5; // [esp+34h] [ebp-14h]
    char v6; // [esp+35h] [ebp-13h]
    int v7; // [esp+38h] [ebp-10h]
    int v8; // [esp+3Ch] [ebp-Ch]
    int v9; // [esp+40h] [ebp-8h]
    HINSTANCE v10; // [esp+44h] [ebp-4h]

    v7 = 320;
    v8 = 240;
    v9 = 100 * (unsigned __int8)byte_4B99E7;
    byte_4B91D0 = byte_4B99E8;
    byte_4B999A = 4;
    v10 = hInstance;
    if (byte_4B99E9)
    {
        hWnd = CreateWindowExA(
            0,
            ClassName,
            WindowName,
            0x80000000,
            0x80000000,
            0x80000000,
            v9 * v7 / 100 + 10,
            v9 * v8 / 100 + 28,
            0,
            0,
            hInstance,
            0);
    }
    else
    {
        SetRect(&rc, 0, 0, v9 * v7 / 100, v9 * v8 / 100);
        AdjustWindowRectEx(&rc, 0xC80000u, 0, 0x300u);
        hWnd = CreateWindowExA(
            0x300u,
            aLegendOfBurnin_3,
            aLegendOfBurnin_2,
            0xC80000u,
            0x80000000,
            0x80000000,
            rc.right - rc.left,
            rc.bottom - rc.top,
            0,
            0,
            hInstance,
            0);
    }
    if (!hWnd)
        return 0;
    ShowWindow(hWnd, nCmdShow);
    UpdateWindow(hWnd);
    if (sub_43F7F7((long*)dword_4BDB28, (int)hWnd))
    {
        sub_49DB43(v4);
        v4[0] = (int)hWnd;
        v4[4] = (unsigned __int8)byte_4B99E9;
        v4[1] = v7;
        v4[2] = v8;
        v5 = 1;
        v6 = byte_4B91D0;
        v4[3] = (v9 << 8) / 100;
        if (sub_4998E0((int)byte_4BDC60, (int)v4))
        {
            sub_474DB0(byte_4BDC60, 1);
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else
    {
        MessageBoxA(hWnd, &byte_4B6B34, aError_38, 0);
        return 0;
    }
}
