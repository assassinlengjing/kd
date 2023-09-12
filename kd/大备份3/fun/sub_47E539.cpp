#include "sub.h" 
int __cdecl sub_47E539(HINSTANCE hInstance)
{
    WNDCLASSA WndClass; // [esp+0h] [ebp-28h] BYREF

    WndClass.style = 3;
    WndClass.lpfnWndProc = sub_47E7B6;
    WndClass.cbClsExtra = 0;
    WndClass.cbWndExtra = 0;
    WndClass.hInstance = hInstance;
    WndClass.hIcon = LoadIconA(hInstance, (LPCSTR)0x69);
    WndClass.hCursor = LoadCursorA(0, (LPCSTR)0x7F00);
    WndClass.hbrBackground = (HBRUSH)GetStockObject(4);
    WndClass.lpszMenuName = 0;
    WndClass.lpszClassName = aLegendOfBurnin;
    return RegisterClassA(&WndClass);
}
