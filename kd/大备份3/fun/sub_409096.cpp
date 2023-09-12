#include "sub.h" 
unsigned __int8 sub_409096(int thisx)
{
    char v1; // al
    int v2; // esi
    int v3; // esi
    char v4; // al
    int v5; // esi
    int v6; // ebx
    unsigned __int8 v7; // al
    int v9; // [esp-10h] [ebp-78h]
    int v10; // [esp-Ch] [ebp-74h]
    int v11; // [esp-4h] [ebp-6Ch]
    int v13[2]; // [esp+Ch] [ebp-5Ch] BYREF
    int v14; // [esp+14h] [ebp-54h]
    int v15; // [esp+18h] [ebp-50h]
    int v16; // [esp+1Ch] [ebp-4Ch]
    _BYTE* v17; // [esp+20h] [ebp-48h] BYREF
    int v18; // [esp+24h] [ebp-44h]
    int v19; // [esp+28h] [ebp-40h]
    _BYTE* v20; // [esp+2Ch] [ebp-3Ch]
    int v21; // [esp+30h] [ebp-38h] BYREF
    int v22; // [esp+34h] [ebp-34h]
    int v23; // [esp+38h] [ebp-30h]
    int v24; // [esp+48h] [ebp-20h]
    int v25; // [esp+4Ch] [ebp-1Ch]

    sub_446442((_DWORD*)unk_4B9B10, thisx, (int)v13);
    v15 = v13[0];
    v14 = v13[1];
    sub_41CA3D((void*)thisx, (_DWORD*)&v17);
    v20 = (_BYTE*)sub_41EEB5((_BYTE*)thisx, (_DWORD*)v17, 0);
    sub_49C15E((int)&v21);
    v24 = *(_DWORD*)(thisx + 424);
    v1 = sub_425F90(v17);
    v2 = v1 + v15;
    v22 = sub_401C1E((_DWORD*)v17, 0, *(_DWORD*)(thisx + 424)) + v2;
    v3 = sub_425F50(v17);
    v16 = sub_401C5B((_DWORD*)v17, 0, 0) + v3;
    v23 = v16 + v14;
    v18 = -1;
    if (*(int*)(thisx + 208) > 0)
    {
        v18 = -*(_DWORD*)(thisx + 208) - v16;
        if (v18 < 0)
            v18 = 0;
    }
    v19 = 8;
    if (*(_DWORD*)(thisx + 424))
    {
        v4 = sub_401C1E((_DWORD*)v17, 0, *(_DWORD*)(thisx + 424));
        v5 = v4 + v15;
        v6 = 8 * (unsigned __int8)sub_425F50(v20);
        v22 = v5 + v6 - sub_425F90(v17) - 8;
        v19 = -v19;
    }
    if (unknown_libname_6(v17))
    {
        v24 = *(_DWORD*)(thisx + 424) == 0;
        v22 += v19;
    }
    if (sub_425FD0(v17))
    {
        v25 = 1;
        v23 += 8;
    }
    v11 = v18;
    v10 = *(_DWORD*)(*((_DWORD*)unk_4B9360 + *(unsigned __int8*)(thisx + 192)) + 4 * *(unsigned __int16*)(thisx + 498));
    v9 = *(unsigned __int16*)(thisx + 190);
    v7 = unknown_libname_5(v17);
    return sub_478682(&v21, v7, v9, v10, -1, v11);
}

