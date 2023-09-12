#include "sub.h" 
int __cdecl sub_4788FA(int* a1, char* a2, int a3, int a4, int a5, unsigned __int8 a6)
{
    int result; // eax
    unsigned __int8 v7; // al
    char v8; // al
    int v9; // esi
    char v10; // al
    int v11; // esi
    char v12; // al
    int v13; // esi
    int v14; // ebx
    unsigned __int8 v15; // al
    unsigned __int8 v16; // al
    char v17; // al
    char v18; // al
    char v19; // al
    char v20; // al
    int v21; // edx
    char v22[4]; // [esp+8h] [ebp-C4h] BYREF
    int v23; // [esp+Ch] [ebp-C0h]
    int v24; // [esp+10h] [ebp-BCh]
    int v25; // [esp+20h] [ebp-ACh]
    void* v26; // [esp+40h] [ebp-8Ch]
    int v27; // [esp+44h] [ebp-88h] BYREF
    int v28; // [esp+48h] [ebp-84h]
    int v29; // [esp+4Ch] [ebp-80h]
    int v30; // [esp+5Ch] [ebp-70h]
    int v31; // [esp+7Ch] [ebp-50h]
    int v32; // [esp+80h] [ebp-4Ch]
    int v33; // [esp+84h] [ebp-48h]
    int i; // [esp+88h] [ebp-44h]
    _BYTE* v35; // [esp+8Ch] [ebp-40h]
    int v36; // [esp+90h] [ebp-3Ch]
    int Src[6]; // [esp+94h] [ebp-38h] BYREF
    int v38; // [esp+ACh] [ebp-20h]
    int v39; // [esp+B0h] [ebp-1Ch]

    v36 = (unsigned __int8)sub_401DFE(a2);
    v32 = a1[1];
    v33 = a1[2];
    result = sub_49C15E((int)Src);
    Src[0] = *a1;
    for (i = 0; i < v36 + 1; ++i)
    {
        v7 = sub_425C10(a2);
        if (v7 == i && unknown_libname_5(a2))
        {
            v35 = (_BYTE*)(12 * (unsigned __int16)sub_401BEF((_DWORD*)a2, 0) + a3);
            sub_49C15E((int)&v27);
            v30 = a1[6];
            v8 = sub_425F90(a2);
            v9 = v8 + v32;
            v28 = sub_401C1E((_DWORD*)a2, 0, a1[6]) + v9;
            v10 = sub_425F50(a2);
            v11 = v10 + v33;
            v29 = sub_401C5B((_DWORD*)a2, 0, 0) + v11;
            v31 = 8;
            if (a1[6])
            {
                v12 = sub_401C1E((_DWORD*)a2, 0, a1[6]);
                v13 = v12 + v32;
                v14 = 8 * (unsigned __int8)sub_425F50(v35);
                v28 = v13 + v14 - sub_425F90(a2) - 8;
                v31 = -v31;
            }
            if (unknown_libname_6(a2))
            {
                v30 = a1[6] == 0;
                v28 += v31;
            }
            v15 = unknown_libname_5(a2);
            sub_478682(&v27, v15, a4, a5, -1, -1);
        }
        if (a6)
        {
            v16 = sub_475EB0(a2);
            if (v16 == i)
            {
                if (sub_425B70(a2))
                {
                    sub_49C15E((int)v22);
                    v25 = a1[6];
                    v17 = sub_4758D0(a2, a1[6]);
                    v23 = v17 + v32;
                    v18 = sub_4758F0(a2, a1[7]);
                    v24 = v18 + v33;
                    v26 = (void*)(140 * *(_DWORD*)&unk_4B7180[44 * a6 - 44 + 4 * (unsigned __int8)sub_425B70(a2)]
                        + unk_4B92E8);
                    sub_490A5B(v26, v22);
                }
            }
        }
        if (i != v36)
        {
            v35 = (_BYTE*)(12 * (unsigned __int16)sub_401BEF((_DWORD*)a2, i) + a3);
            v19 = sub_401C1E((_DWORD*)a2, i, a1[6]);
            Src[1] = v19 + v32;
            v20 = sub_401C5B((_DWORD*)a2, i, 0);
            Src[2] = v20 + v33;
            if (sub_401C98((_DWORD*)a2, i))
                v38 = a1[6] == 0;
            else
                v38 = a1[6];
            if (sub_401CC6((_DWORD*)a2, i))
                v39 = 1;
            sub_48FB00((int)v35, v21, (int)unk_4BDC60, Src, 0);
        }
        result = i + 1;
    }
    return result;
}
