#include "sub.h" 
int __fastcall sub_490D23(int a1)
{
    int result; // eax
    int v2; // esi
    unsigned int v3; // eax
    int v4; // esi
    int* v5; // eax
    int* v6; // eax
    char v8[16]; // [esp+8h] [ebp-CCh] BYREF
    char v9[16]; // [esp+18h] [ebp-BCh] BYREF
    int k; // [esp+28h] [ebp-ACh]
    int v11; // [esp+2Ch] [ebp-A8h]
    int v12; // [esp+30h] [ebp-A4h]
    int v13; // [esp+34h] [ebp-A0h]
    int v14; // [esp+38h] [ebp-9Ch]
    char v15; // [esp+3Ch] [ebp-98h]
    char v16; // [esp+40h] [ebp-94h]
    int yTop; // [esp+44h] [ebp-90h]
    int v18; // [esp+48h] [ebp-8Ch]
    int v19; // [esp+4Ch] [ebp-88h]
    int v20; // [esp+50h] [ebp-84h]
    int j; // [esp+54h] [ebp-80h]
    int v22; // [esp+58h] [ebp-7Ch]
    _BYTE* v23; // [esp+5Ch] [ebp-78h]
    int v24; // [esp+60h] [ebp-74h]
    char* v25; // [esp+64h] [ebp-70h]
    char* v26; // [esp+68h] [ebp-6Ch]
    unsigned int v27; // [esp+6Ch] [ebp-68h]
    int v28[2]; // [esp+70h] [ebp-64h] BYREF
    int v29; // [esp+78h] [ebp-5Ch]
    int v30; // [esp+7Ch] [ebp-58h]
    int v31; // [esp+80h] [ebp-54h]
    int v32; // [esp+84h] [ebp-50h]
    int i; // [esp+88h] [ebp-4Ch]
    int v34; // [esp+8Ch] [ebp-48h]
    int v35; // [esp+90h] [ebp-44h]
    char v36; // [esp+94h] [ebp-40h]
    _BYTE* v37; // [esp+98h] [ebp-3Ch]
    int Src; // [esp+9Ch] [ebp-38h] BYREF
    int v39; // [esp+A0h] [ebp-34h]
    int v40; // [esp+A4h] [ebp-30h]
    int v41; // [esp+B4h] [ebp-20h]
    int v42; // [esp+B8h] [ebp-1Ch]
    char v43; // [esp+C9h] [ebp-Bh]
    __int16 v44; // [esp+CAh] [ebp-Ah]
    __int16 v45; // [esp+CCh] [ebp-8h]
    __int16 v46; // [esp+CEh] [ebp-6h]

    result = a1;
    if (!*(_DWORD*)(a1 + 176))
    {
        sub_4641FE((_DWORD*)unk_4B9B10, *(_DWORD*)(a1 + 96), *(_DWORD*)(a1 + 100), *(_DWORD*)(a1 + 104), (int)v28);
        v30 = v28[0];
        v29 = v28[1];
        v35 = sub_446497((_DWORD*)unk_4B9B10, *(_DWORD*)(a1 + 96) / 100, *(_DWORD*)(a1 + 100) / 100);
        v36 = sub_4464F6((_DWORD*)unk_4B9B10, *(_DWORD*)(a1 + 96) / 800, *(_DWORD*)(a1 + 100) / 800);
        v37 = (_BYTE*)sub_4741F8((int)unk_4B9B10, *(_DWORD*)(a1 + 96) / 800, *(_DWORD*)(a1 + 100) / 800);
        if (v37 && sub_425C50(v37))
            v35 = 4 * (unsigned __int8)unknown_libname_6(v37);
        v34 = 0;
        LOBYTE(v31) = 0;
        v32 = 0;
        if (v37)
        {
            LOBYTE(v34) = sub_425C30(v37);
            v34 = (unsigned __int8)v34;
            LOBYTE(v31) = sub_425C70(v37);
            v32 = sub_425C90(v37);
        }
        sub_49C15E((int)&Src);
        if ((_BYTE)v31 && *(_DWORD*)(a1 + 12) != 1 && (*(_DWORD*)(a1 + 172) && v35 < *(_DWORD*)(a1 + 104) / -100 || v32))
        {
            v39 = v30 - 8;
            v2 = *(_DWORD*)(a1 + 100) / 100 - v35;
            v3 = sub_4464BA((int)unk_4B9B10);
            v40 = v2 + v3 - 2 - v34;
            Src = unk_4B9214;
            if ((unsigned __int8)v31 == 2)
            {
                if (!(unk_4B93B0 % 2u))
                    sub_49AB05((int)unk_4BDC60, &Src);
            }
            else if ((unsigned __int8)v31 == 1)
            {
                sub_49AB05((int)unk_4BDC60, &Src);
            }
        }
        if (*(_BYTE*)(a1 + 71) == 1)
        {
            result = ((unsigned int)unk_4B93AC >> 1) / 4;
            v27 = ((unsigned int)unk_4B93AC >> 1) % 4;
            switch (v27)
            {
            case 1u:
                v43 = 4;
                v44 = 31;
                v45 = 15;
                v46 = 0;
                break;
            case 2u:
                v43 = 1;
                v44 = 31;
                v45 = 15;
                v46 = 0;
                break;
            case 3u:
                v43 = 3;
                v44 = 31;
                v45 = 15;
                v46 = 0;
                break;
            }
        }
        else
        {
            result = *(unsigned __int8*)(a1 + 71);
            if (result == 2)
            {
                v43 = 4;
                v44 = 31;
                v45 = 15;
                v46 = 0;
            }
        }
        for (i = 0; ; ++i)
        {
            if (i >= 3)
                return result;
            Src = unk_4B91E8;
            v18 = *(_DWORD*)(a1 + 108) + v30;
            v19 = *(_DWORD*)(a1 + 116) + *(_DWORD*)(a1 + 112) + v29;
            if (i)
            {
                result = *(__int16*)(a1 + 16 * (i - 1) + 24);
                v22 = result;
                if (result == -1)
                {
                    v22 = *(unsigned __int16*)(a1 + 20);
                }
                else if (v22 == -2)
                {
                    continue;
                }
                v18 += *(_DWORD*)(a1 + 16 * (i - 1) + 28);
                result = *(_DWORD*)(a1 + 16 * (i - 1) + 36) + *(_DWORD*)(a1 + 16 * (i - 1) + 32);
                v19 += result;
            }
            else
            {
                result = *(unsigned __int16*)(a1 + 20);
                v22 = result;
            }
            if ((unsigned __int16)unk_4B92EC > v22)
            {
                v26 = (char*)(140 * (*(char*)(a1 + 22) + v22) + unk_4B92E8);
                v25 = sub_47EF20(v26);
                v20 = unknown_libname_2((_DWORD*)v25);
                result = (unsigned __int8)unknown_libname_3(v25);
                v24 = result;
                for (j = 0; j < v24; ++j)
                {
                    v23 = (_BYTE*)(12 * *(unsigned __int16*)(v20 + 8 * j) + unk_4B92F0);
                    v16 = *(_BYTE*)(v20 + 8 * j + *(_DWORD*)(a1 + 164) + 2);
                    v15 = *(_BYTE*)(v20 + 8 * j + 4);
                    v39 = v16 + v18;
                    v40 = v15 + v19;
                    if (*(_BYTE*)(v20 + 8 * j + 6))
                        v41 = *(_DWORD*)(a1 + 164) == 0;
                    else
                        v41 = *(_DWORD*)(a1 + 164);
                    v42 = *(unsigned __int8*)(v20 + 8 * j + 7);
                    yTop = 0;
                    if (*(int*)(a1 + 64) > -1000)
                    {
                        v4 = v15 + *(_DWORD*)(a1 + 64);
                        yTop = v4 + 8 * (unsigned __int8)sub_425F90(v23);
                        if (i > 0)
                            yTop += *(_DWORD*)(a1 + 16 * (i - 1) + 36);
                    }
                    result = sub_48FB00((int)v23, (int)&Src, (int)unk_4BDC60, &Src, yTop);
                }
                if (unk_4B93A8)
                {
                    v41 = 0;
                    v42 = 0;
                    for (k = 0; k < 2; ++k)
                    {
                        if (k)
                        {
                            if (k == 1)
                            {
                                v6 = sub_47EE20(v26, (_DWORD*)v8, *(_DWORD*)(a1 + 164), 0);
                                v11 = *v6;
                                v12 = v6[1];
                                v13 = v6[2];
                                v14 = v6[3];
                            }
                        }
                        else
                        {
                            v5 = sub_47EE60(v26, (_DWORD*)v9, *(_DWORD*)(a1 + 164), 0);
                            v11 = *v5;
                            v12 = v5[1];
                            v13 = v5[2];
                            v14 = v5[3];
                        }
                        if (v11 || v12 || v13 || v14)
                        {
                            v39 = v11 + v18;
                            v40 = v12 + v19;
                            Src = unk_4B9210 + 4 * k;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v39 = v18 + v13 - 8;
                            v40 = v12 + v19;
                            Src = unk_4B9210 + 4 * k + 1;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v39 = v11 + v18;
                            v40 = v19 + v14 - 8;
                            Src = unk_4B9210 + 4 * k + 2;
                            sub_49AB05((int)unk_4BDC60, &Src);
                            v39 = v18 + v13 - 8;
                            v40 = v19 + v14 - 8;
                            Src = unk_4B9210 + 4 * k + 3;
                            sub_49AB05((int)unk_4BDC60, &Src);
                        }
                        result = k + 1;
                    }
                }
            }
        }
    }
    return result;
}
