#include "sub.h" 
LRESULT __stdcall sub_47E7B6(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    sub_446497((_DWORD*)byte_4B9B10, 240, 32);
    sub_47EFA0((char*)byte_4B9B10);
    if (Msg > 6)
    {
        if (Msg == 32)
        {
            SetCursor(0);
            return 1;
        }
        if (Msg == 256)
        {
            switch (wParam)
            {
            case 0x1Bu:
            case 0x7Bu:
                PostMessageA(hWnd, 0x10u, 0, 0);
                break;
            case 0x70u:
                sub_453B66((int)byte_4B9B10);
                break;
            case 0x71u:
                dword_4B93A8 = dword_4B93A8 == 0;
                break;
            case 0x72u:
                sub_4685F6((_DWORD*)byte_4B9B10);
                break;
            case 0x73u:
                sub_468667((int)byte_4B9B10);
                break;
            case 0x78u:
                if (byte_4B91D9)
                    byte_4B91D1 = 1;
                break;
            case 0x7Au:
                if (byte_4B91D9)
                    dword_4B91D4 = dword_4B91D4 == 0;
                break;
            default:
                return DefWindowProcA(hWnd, Msg, wParam, lParam);
            }
        }
    }
    else if (Msg == 6)
    {
        if (wParam)
        {
            dword_4B99F8 = 1;
            sub_4A1376(byte_4BDC60, 0);
            if (!byte_4B99E6)
            {
                dword_4B99EC = 1;
                if (!sub_47EF80((_DWORD*)byte_4B9B10))
                    sub_440BC2(dword_4BDB28);
            }
        }
        else
        {
            dword_4B99F8 = 0;
            sub_4A1376(byte_4BDC60, 1);
            if (!byte_4B99E6)
            {
                dword_4B99EC = 0;
                sub_440B78((int)dword_4BDB28);
            }
        }
    }
    else if (Msg != 1 && Msg == 2)
    {
        PostQuitMessage(0);
    }
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
}

