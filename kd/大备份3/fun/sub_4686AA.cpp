#include "sub.h" 
void sub_4686AA(int thisx)
{
    int i; // [esp+4h] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 22;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 2562) = 0;
    sub_46D747(thisx);
    sub_47C427();
    sub_46D3E1();
    sub_46D387((char*)thisx + 1392);
    memset((void*)unk_4B92DC, 0, Size);
    memset((void*)(thisx + 2580), 0, 8u);
    memset((void*)(thisx + 2596), 0, 8u);
    memset((void*)(thisx + 2564), 0, 0x10u);
    memset((void*)(thisx + 2554), 0, 8u);
    memset((void*)(thisx + 2604), 0, 8u);
    memset((void*)(thisx + 13092), 0, 8u);
    for (i = 0; i < 4; ++i)
    {
        *(_WORD*)(thisx + 2 * i + 2572) = (unsigned __int8)unk_4B9988[(*(_DWORD*)(thisx + 2368) + 1) * i] + 1;
        if (*(unsigned __int16*)(thisx + 2 * i + 2572) > (int)(unsigned __int8)unk_4B9986)
            *(_WORD*)(thisx + 2 * i + 2572) = 0;
    }
    sub_46B8AE((_BYTE*)thisx, -1);
}

