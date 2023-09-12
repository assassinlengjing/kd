#include "sub.h" 
int sub_448750(int thisx)
{
    int v3; // [esp+4h] [ebp-10h]
    int v4; // [esp+8h] [ebp-Ch]
    unsigned __int8 v5; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]
    int j; // [esp+10h] [ebp-4h]
    int k; // [esp+10h] [ebp-4h]

    *(_DWORD*)(thisx + 104) = 8;
    *(_DWORD*)(thisx + 2540) = 0;
    *(_BYTE*)(thisx + 2516) = 1;
    *(_BYTE*)(thisx + 2562) = 0;
    memset((void*)(thisx + 2620), 0, 8u);
    for (i = 0; i < (unsigned __int8)byte_4B9986; ++i)
    {
        v4 = sub_4576F0(i);
        *(_WORD*)(thisx + 2 * v4 + 2564) = 0;
        *(_BYTE*)(v4 + thisx + 2580) = MarkedForDetachment((_BYTE*)dword_4B92E0);
        if (v4 < 0)
            *(_BYTE*)(i + thisx + 2554) = -1;
        else
            *(_BYTE*)(i + thisx + 2554) = v4;
    }
    v5 = 4;
    if (!byte_4B9986)
    {
        v5 = 0;
        *(_BYTE*)(thisx + 2554) = 0;
    }
    for (j = (unsigned __int8)byte_4B9986; j < (unsigned __int8)byte_4B9985; ++j)
    {
        v3 = sub_4576F0(j);
        *(_WORD*)(thisx + 2 * v3 + 2564) = v5;
        *(_BYTE*)(v3 + thisx + 2580) = MarkedForDetachment((_BYTE*)(36 * v5 + dword_4B92E0));
        v5 += 4;
        if (v5 >= 0x10u)
            v5 = 1;
    }
    for (k = 0; k < 8; ++k)
    {
        *(_BYTE*)(k + thisx + 2596) = 0;
        *(_BYTE*)(k + thisx + 2588) = 0;
        *(_BYTE*)(k + thisx + 2604) = 0;
        *(_BYTE*)(k + thisx + 13092) = 0;
    }
    sub_47C427();
    sub_454469((_BYTE*)thisx, -1);
    return sub_456D33((const CHAR*)thisx, aCharselWav, 1, 0);
}

