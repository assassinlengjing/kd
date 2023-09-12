#include "sub.h" 
int sub_46D2DE(int thisx)
{
    int result; // eax
    int i; // [esp+4h] [ebp-4h]

    for (i = 0; i < 6; ++i)
    {
        sub_46D26F((_BYTE*)(thisx + 28 * i));
        *(_DWORD*)(thisx + 28 * i + 12) = thisx;
    }
    memset((void*)(thisx + 172), 0, 0x40u);
    *(_BYTE*)(thisx + 240) = -1;
    *(_BYTE*)(thisx + 241) = -1;
    *(_DWORD*)(thisx + 168) = 0;
    *(_WORD*)(thisx + 236) = -1;
    *(_WORD*)(thisx + 238) = -1;
    result = thisx;
    *(_BYTE*)(thisx + 242) = 0;
    *(_BYTE*)(thisx + 243) = 0;
    return result;
}

