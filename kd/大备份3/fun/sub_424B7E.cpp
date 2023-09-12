#include "sub.h" 
int __stdcall sub_424B7E(int a1, int a2)
{
    int result; // eax

    if (a1 == 19)
    {
        *(_DWORD*)(a2 + 20) = 100;
        *(_BYTE*)(a2 + 14) = 11;
        *(_DWORD*)(a2 + 32) = 0;
        *(_BYTE*)(a2 + 13) = 11;
        *(_DWORD*)(a2 + 28) = -800;
    }
    else
    {
        *(_DWORD*)(a2 + 20) = 300;
        *(_BYTE*)(a2 + 14) = 11;
        *(_DWORD*)(a2 + 32) = 0;
        *(_BYTE*)(a2 + 13) = 11;
        *(_DWORD*)(a2 + 28) = -550;
    }
    *(_BYTE*)(a2 + 16) = 11;
    *(_DWORD*)(a2 + 40) = 30;
    *(_BYTE*)(a2 + 6) = 0;
    *(_WORD*)(a2 + 8) = 19;
    result = a1;
    switch (a1)
    {
    case 17:
        result = a2;
        *(_BYTE*)(a2 + 10) = 2;
        break;
    case 18:
        *(_BYTE*)(a2 + 10) = 5;
        break;
    case 19:
        *(_BYTE*)(a2 + 10) = 10;
        break;
    case 20:
        result = a2;
        *(_BYTE*)(a2 + 10) = 7;
        break;
    case 21:
        *(_BYTE*)(a2 + 10) = 9;
        break;
    case 22:
        *(_BYTE*)(a2 + 10) = 3;
        break;
    default:
        return result;
    }
    return result;
}

