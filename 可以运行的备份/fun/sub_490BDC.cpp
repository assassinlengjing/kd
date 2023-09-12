#include "sub.h" 
void sub_490BDC(int a1, double a2, double a3, double a4, int a5)
{
    *(_DWORD*)(a1 + 96) = *(_DWORD*)(a5 + 4);
    *(_DWORD*)(a1 + 100) = *(_DWORD*)(a5 + 8);
    if (*(_DWORD*)(a5 + 16))
    {
        *(_DWORD*)(a1 + 104) = -100 * sub_446497(byte_4B9B10, *(_DWORD*)(a1 + 96) / 100, *(_DWORD*)(a1 + 100) / 100);
        *(_DWORD*)(a1 + 16) = 0;
        *(_DWORD*)(a1 + 12) = 0;
    }
    else
    {
        *(_DWORD*)(a1 + 104) = *(_DWORD*)(a5 + 12);
    }
    if (*(_BYTE*)a5)
    {
        *(_BYTE*)(a1 + 72) = *(_BYTE*)a5 - 1;
    }
    else
    {
        *(_DWORD*)(a1 + 96) = -32000;
        *(_DWORD*)(a1 + 100) = -24000;
    }
    if (*(_DWORD*)(a5 + 24))
        sub_4950AF(a1);
    else
        *(_WORD*)(a1 + 190) = *(_WORD*)(a5 + 20);
    *(_DWORD*)(a1 + 4) = 1;
    memset((void*)(a1 + 181), 0, 8u);
    *(_DWORD*)(a1 + 116) = 0;
    *(_DWORD*)(a1 + 112) = 0;
    *(_DWORD*)(a1 + 108) = 0;
    *(_DWORD*)(a1 + 156) = 0;
    *(_DWORD*)(a1 + 160) = 0;
    *(_BYTE*)(a1 + 22) = 0;
    *(_DWORD*)(a1 + 84) = -1;
    sub_4914CC(a1, a3, a2, a4);
}