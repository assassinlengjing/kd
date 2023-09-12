#include "sub.h" 
LRESULT __stdcall sub_47E7B6(HWND hWnd, UINT Msg, WPARAM wParam, LPARAM lParam)
{
    sub_446497((_DWORD*)unk_4B9B10, 240, 32);
    sub_47EFA0((char*)unk_4B9B10);
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
                sub_453B66((int)unk_4B9B10);
                break;
            case 0x71u:
                unk_4B93A8 = unk_4B93A8 == 0;
                break;
            case 0x72u:
                sub_4685F6((_DWORD*)unk_4B9B10);
                break;
            case 0x73u:
                sub_468667((int)unk_4B9B10);
                break;
            case 0x78u:
                if (unk_4B91D9)
                    unk_4B91D1 = 1;
                break;
            case 0x7Au:
                if (unk_4B91D9)
                    unk_4B91D4 = unk_4B91D4 == 0;
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
            unk_4B99F8 = 1;
            sub_4A1376(unk_4BDC60, 0);
            if (!unk_4B99E6)
            {
                unk_4B99EC = 1;
                if (!sub_47EF80((_DWORD*)unk_4B9B10))
                    sub_440BC2(unk_4BDB28);
            }
        }
        else
        {
            unk_4B99F8 = 0;
            sub_4A1376(unk_4BDC60, 1);
            if (!unk_4B99E6)
            {
                unk_4B99EC = 0;
                sub_440B78((int)unk_4BDB28);
            }
        }
    }
    else if (Msg != 1 && Msg == 2)
    {
        PostQuitMessage(0);
    }
    return DefWindowProcA(hWnd, Msg, wParam, lParam);
}

