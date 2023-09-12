#include "sub.h" 
int __cdecl sub_478C4C(_DWORD* a1, int a2)
{
    int result; // eax
    unsigned __int8 v3; // al
    unsigned __int16 v4; // ax
    char v5; // al
    int v6; // esi
    char v7; // al
    int v8; // esi
    char v9; // al
    int v10; // esi
    int v11; // ebx
    unsigned __int8 v12; // al
    unsigned __int8 v13; // al
    unsigned __int8 v14; // al
    char v15; // al
    char v16; // al
    int v17; // esi
    unsigned __int16 v18; // ax
    char v19; // al
    char v20; // al
    int v21; // [esp-10h] [ebp-E8h]
    int v22; // [esp-Ch] [ebp-E4h]
    int v23; // [esp-Ch] [ebp-E4h]
    int v24; // [esp-8h] [ebp-E0h]
    char v25[4]; // [esp+8h] [ebp-D0h] BYREF
    int v26; // [esp+Ch] [ebp-CCh]
    int v27; // [esp+10h] [ebp-C8h]
    int v28; // [esp+20h] [ebp-B8h]
    void* v29; // [esp+40h] [ebp-98h]
    char v30[4]; // [esp+44h] [ebp-94h] BYREF
    int v31; // [esp+48h] [ebp-90h]
    int v32; // [esp+4Ch] [ebp-8Ch]
    int v33; // [esp+5Ch] [ebp-7Ch]
    int v34; // [esp+7Ch] [ebp-5Ch]
    char* v35; // [esp+80h] [ebp-58h]
    int v36; // [esp+84h] [ebp-54h]
    int v37; // [esp+88h] [ebp-50h]
    int i; // [esp+8Ch] [ebp-4Ch]
    _BYTE* v39; // [esp+90h] [ebp-48h]
    int v40; // [esp+94h] [ebp-44h]
    int v41; // [esp+98h] [ebp-40h]
    int v42; // [esp+9Ch] [ebp-3Ch]
    int Src[6]; // [esp+A0h] [ebp-38h] BYREF
    int v44; // [esp+B8h] [ebp-20h]
    int v45; // [esp+BCh] [ebp-1Ch]
    int v46; // [esp+D4h] [ebp-4h]

    v35 = *(char**)a2;
    v40 = *(_DWORD*)(a2 + 4);
    LOBYTE(v42) = *(_BYTE*)(a2 + 24);
    v41 = (unsigned __int8)sub_401DFE(v35);
    v36 = a1[1];
    v37 = a1[2];
    sub_49C15E((int)Src);
    Src[0] = *(_DWORD*)(a2 + 16);
    v46 = a1[13];
    for (i = 0; ; ++i)
    {
        result = v41 + 1;
        if (i >= v41 + 1)
            break;
        v3 = sub_425C10(v35);
        if (v3 == i && unknown_libname_5(v35))
        {
            v4 = sub_401BEF((_DWORD*)v35, 0);
            v39 = (_BYTE*)(12 * v4 + v40);
            sub_49C15E((int)v30);
            v33 = a1[6];
            v5 = sub_425F90(v35);
            v6 = v5 + v36;
            v31 = sub_401C1E((_DWORD*)v35, 0, a1[6]) + v6;
            v7 = sub_425F50(v35);
            v8 = v7 + v37;
            v32 = sub_401C5B((_DWORD*)v35, 0, 0) + v8;
            v34 = 8;
            if (a1[6])
            {
                v9 = sub_401C1E((_DWORD*)v35, 0, a1[6]);
                v10 = v9 + v36;
                v11 = 8 * (unsigned __int8)sub_425F50(v39);
                v31 = v10 + v11 - sub_425F90(v35) - 8;
                v34 = -v34;
            }
            if (unknown_libname_6(v35))
            {
                v33 = a1[6] == 0;
                v31 += v34;
            }
            if (*(_BYTE*)(a2 + 25))
            {
                if (*(_BYTE*)(a2 + 25) == 1)
                {
                    v24 = *(_DWORD*)(a2 + 8);
                    v23 = *(_DWORD*)(a2 + 28);
                    v13 = unknown_libname_5(v35);
                    sub_478607((_DWORD*)v30, v13, v23, v24, -1);
                }
            }
            else
            {
                v22 = *(_DWORD*)(a2 + 12);
                v21 = *(_DWORD*)(a2 + 32);
                v12 = unknown_libname_5(v35);
                sub_478682((int*)v30, v12, v21, v22, -1, -1);
            }
        }
        if ((_BYTE)v42)
        {
            v14 = sub_475EB0(v35);
            if (v14 == i)
            {
                if (sub_425B70(v35))
                {
                    sub_49C15E((int)v25);
                    v28 = a1[6];
                    v15 = sub_4758D0(v35, a1[6]);
                    v26 = v15 + v36;
                    v16 = sub_4758F0(v35, a1[7]);
                    v27 = v16 + v37;
                    v17 = 44 * ((unsigned __int8)v42 - 1);
                    v29 = (void*)(140 * *(_DWORD*)&unk_4B7180[4 * (unsigned __int8)sub_425B70(v35) + v17] + unk_4B92E8);
                    sub_490A5B(v29, v25);
                }
            }
        }
        if (i != v41)
        {
            v18 = sub_401BEF((_DWORD*)v35, i);
            v39 = (_BYTE*)(12 * v18 + v40);
            v19 = sub_401C1E((_DWORD*)v35, i, a1[6]);
            Src[1] = v19 + v36;
            v20 = sub_401C5B((_DWORD*)v35, i, 0);
            Src[2] = v20 + v37;
            if (sub_401C98((_DWORD*)v35, i))
                v44 = a1[6] == 0;
            else
                v44 = a1[6];
            if (sub_401CC6((_DWORD*)v35, i))
                v45 = 1;
            sub_48FB00((int)v39, (int)Src, (int)unk_4BDC60, Src, 0);
        }
    }
    return result;
}

