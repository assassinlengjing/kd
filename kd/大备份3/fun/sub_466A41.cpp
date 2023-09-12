#include "sub.h" 
int sub_466A41()
{
    char* v0; // eax
    char v2[1024]; // [esp+4h] [ebp-840h] BYREF
    int i; // [esp+404h] [ebp-440h]
    char Src[1024]; // [esp+408h] [ebp-43Ch] BYREF
    int v5; // [esp+808h] [ebp-3Ch] BYREF
    int v6; // [esp+80Ch] [ebp-38h]
    int v7; // [esp+810h] [ebp-34h]
    int v8; // [esp+814h] [ebp-30h]
    int v9; // [esp+818h] [ebp-2Ch]
    int v10; // [esp+81Ch] [ebp-28h]
    int v11; // [esp+82Ch] [ebp-18h]
    char* v12; // [esp+834h] [ebp-10h]

    sub_49B9E0((int*)unk_4BDC60, aGraphicSystem0);
    v0 = sub_49CE7F((char**)unk_4BDC60);
    memcpy(Src, v0, sizeof(Src));
    sub_49DB90(&v5);
    v6 = 64;
    v7 = 8;
    v8 = 16;
    v9 = 16;
    v10 = 1;
    v11 = 0;
    v5 = -1;
    if (sub_49DA45((int*)unk_4BDC60, aGraphicSystem0_0, (int)&v5))
    {
        unk_4B9204 = v5;
        for (i = 0; i < (int)unk_4B93A0; ++i)
        {
            if (*((__int16*)unk_4B9394 + i) >= 0)
            {
                memcpy(v2, Src, sizeof(v2));
                sub_485DFD((int)unk_4B93A4 + 24 * i, (int)v2);
                v6 = 0;
                v7 = 8;
                v8 = 64;
                v9 = 16;
                v10 = 1;
                v11 = 0;
                v5 = -1;
                v12 = v2;
                if (!sub_49DA45((int*)unk_4BDC60, aGraphicSystem0_1, (int)&v5))
                {
                    MessageBoxA(hWnd, &unk_4B3214, aError_12, 0);
                    return 0;
                }
            }
        }
        return 1;
    }
    else
    {
        MessageBoxA(hWnd, &unk_4B31C0, aError_11, 0);
        return 0;
    }
}

