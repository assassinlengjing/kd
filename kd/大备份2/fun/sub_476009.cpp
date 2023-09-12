#include "sub.h" 
BOOL sub_476009(char* thisx)
{
    int v1; // eax
    int v2; // eax
    int v3; // eax
    int v4; // eax
    int v5; // eax
    int v6; // eax
    int v7; // eax
    int v8; // eax
    int v9; // eax

    if (*(_DWORD*)thisx)
        return joyGetPosEx(*((_DWORD*)thisx + 1), (LPJOYINFOEX)(thisx + 24)) == 0;
    *((_DWORD*)thisx + 9) = 1;
    *((_DWORD*)thisx + 8) = 1;
    *((_DWORD*)thisx + 14) = 0;
    if (GetAsyncKeyState((unsigned __int8)thisx[92]) < 0)
        *((_DWORD*)thisx + 9) = 0;
    if (GetAsyncKeyState((unsigned __int8)thisx[93]) < 0)
        *((_DWORD*)thisx + 9) = 2;
    if (GetAsyncKeyState((unsigned __int8)thisx[94]) < 0)
        *((_DWORD*)thisx + 8) = 0;
    if (GetAsyncKeyState((unsigned __int8)thisx[95]) < 0)
        *((_DWORD*)thisx + 8) = 2;
    if (GetAsyncKeyState((unsigned __int8)thisx[96]) < 0)
    {
        v1 = *((_DWORD*)thisx + 14);
        LOBYTE(v1) = v1 | 1;
        *((_DWORD*)thisx + 14) = v1;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[97]) < 0)
    {
        v2 = *((_DWORD*)thisx + 14);
        LOBYTE(v2) = v2 | 2;
        *((_DWORD*)thisx + 14) = v2;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[98]) < 0)
    {
        v3 = *((_DWORD*)thisx + 14);
        LOBYTE(v3) = v3 | 4;
        *((_DWORD*)thisx + 14) = v3;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[99]) < 0)
    {
        v4 = *((_DWORD*)thisx + 14);
        LOBYTE(v4) = v4 | 8;
        *((_DWORD*)thisx + 14) = v4;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[100]) < 0)
    {
        v5 = *((_DWORD*)thisx + 14);
        LOBYTE(v5) = v5 | 0x10;
        *((_DWORD*)thisx + 14) = v5;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[101]) < 0)
    {
        v6 = *((_DWORD*)thisx + 14);
        LOBYTE(v6) = v6 | 0x20;
        *((_DWORD*)thisx + 14) = v6;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[102]) < 0)
    {
        v7 = *((_DWORD*)thisx + 14);
        LOBYTE(v7) = v7 | 0x40;
        *((_DWORD*)thisx + 14) = v7;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[103]) < 0)
    {
        v8 = *((_DWORD*)thisx + 14);
        LOBYTE(v8) = v8 | 0x80;
        *((_DWORD*)thisx + 14) = v8;
    }
    if (GetAsyncKeyState((unsigned __int8)thisx[104]) < 0)
    {
        v9 = *((_DWORD*)thisx + 14);
        BYTE1(v9) |= 1u;
        *((_DWORD*)thisx + 14) = v9;
    }
    return 1;
}

