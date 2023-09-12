#include "sub.h" 
int sub_4680EF()
{
    const void* v0; // eax
    signed int j; // [esp+4h] [ebp-844h]
    char Src[1024]; // [esp+8h] [ebp-840h] BYREF
    int i; // [esp+408h] [ebp-440h]
    char v5[1024]; // [esp+40Ch] [ebp-43Ch] BYREF
    int v6[15]; // [esp+80Ch] [ebp-3Ch] BYREF

    memset(Src, 0, sizeof(Src));
    memset(v5, 0, sizeof(v5));
    sub_49DB90(v6);
    sub_49B9E0((_DWORD*)unk_4BDC60, aGraphicHeadBmp);
    v0 = (const void*)sub_49CE7F((char**)unk_4BDC60);
    memcpy(Src, v0, sizeof(Src));
    memcpy(v5, Src, sizeof(v5));
    v6[11] = (int)Src;
    for (i = 0; i < unk_4B9368; ++i)
    {
        for (j = 0; j < (int)unk_4B93A0; ++j)
        {
            if (*(_DWORD*)(*((_DWORD*)unk_4B9360 + i) + 4 * j))
            {
                memcpy(Src, v5, sizeof(Src));
                sub_485DFD((int)unk_4B93A4 + 24 * j, (int)Src);
                v6[1] = 0;
                v6[2] = 8 * i;
                v6[3] = -1;
                v6[4] = 8;
                v6[5] = 1;
                v6[9] = 0;
                v6[0] = -1;
                if (!sub_49D318((int)unk_4BDC60, (int)v6))
                    return 0;
                *(_DWORD*)(*((_DWORD*)unk_4B9360 + i) + 4 * j) = v6[0];
            }
        }
    }
    return 1;
}

