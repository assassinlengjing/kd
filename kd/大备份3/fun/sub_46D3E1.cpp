#include "sub.h" 
BOOL sub_46D3E1()
{
    int v1; // [esp+4h] [ebp-3Ch] BYREF
    int v2; // [esp+8h] [ebp-38h]
    int v3; // [esp+Ch] [ebp-34h]
    int v4; // [esp+10h] [ebp-30h]
    int v5; // [esp+14h] [ebp-2Ch]
    int v6; // [esp+28h] [ebp-18h]

    sub_49DB90(&v1);
    v2 = 0;
    v3 = 0;
    v4 = -1;
    v5 = -1;
    v1 = -1;
    v6 = 0;
    if (!sub_49DA45((_DWORD*)unk_4BDC60, aGraphicCheergi, (int)&v1))
        return 0;
    unk_4B91E0 = v1;
    v2 = 0;
    v3 = 0;
    v4 = -1;
    v5 = -1;
    v1 = -1;
    v6 = 0;
    return sub_49DA45((_DWORD*)unk_4BDC60, aGraphicCheergi_0, (int)&v1) != 0;
}

