#include "sub.h" 
unsigned __int16* sub_48D421(int thisx, int a2)
{
    unsigned __int16* result; // eax
    int v3; // esi
    int v4; // esi
    int v5; // eax
    int j; // [esp+8h] [ebp-B8h]
    unsigned __int16 v8; // [esp+Ch] [ebp-B4h]
    int v9; // [esp+10h] [ebp-B0h]
    unsigned __int16 v10; // [esp+14h] [ebp-ACh]
    int v11; // [esp+18h] [ebp-A8h]
    int i; // [esp+1Ch] [ebp-A4h]
    int v13; // [esp+20h] [ebp-A0h]
    int v14; // [esp+24h] [ebp-9Ch]
    int v15; // [esp+28h] [ebp-98h]
    int v16; // [esp+2Ch] [ebp-94h]
    int v17; // [esp+30h] [ebp-90h]
    char* v18; // [esp+34h] [ebp-8Ch]
    _DWORD* v19; // [esp+38h] [ebp-88h]
    int v20[2]; // [esp+3Ch] [ebp-84h] BYREF
    unsigned int v21; // [esp+44h] [ebp-7Ch]
    int v22; // [esp+74h] [ebp-4Ch]
    int v23; // [esp+78h] [ebp-48h]
    int v24; // [esp+7Ch] [ebp-44h]
    _BYTE* v25; // [esp+80h] [ebp-40h]
    int v26; // [esp+84h] [ebp-3Ch]
    int v27; // [esp+88h] [ebp-38h] BYREF
    int v28; // [esp+8Ch] [ebp-34h]
    int v29; // [esp+90h] [ebp-30h]
    int v30; // [esp+A0h] [ebp-20h]
    int v31; // [esp+A4h] [ebp-1Ch]
    int v32; // [esp+BCh] [ebp-4h]

    result = (unsigned __int16*)thisx;
    if (*(_BYTE*)(thisx + 12))
    {
        if (*(_DWORD*)(thisx + 44) == -1 || *(_DWORD*)(thisx + 96))
        {
            return sub_48DD3C(thisx);
        }
        else
        {
            sub_49C15E((int)&v27);
            v26 = *(__int16*)(thisx + 72) * sub_446465((char*)unk_4B9B10) / 100;
            if (*(_BYTE*)(thisx + 8) && *(_BYTE*)(thisx + 8) != 1)
            {
                if (*(_BYTE*)(thisx + 8) == 2)
                {
                    v28 = *(_DWORD*)(thisx + 140) + *(_DWORD*)(thisx + 104) / 100 - v26;
                    v3 = *(_DWORD*)(thisx + 108) / 100 - *(_DWORD*)(thisx + 112) / 100;
                    v29 = *(_DWORD*)(thisx + 144) + sub_4464BA((int)unk_4B9B10) + v3;
                }
                else if (*(_BYTE*)(thisx + 8) == 3)
                {
                    v28 = *(_DWORD*)(thisx + 140) + *(_DWORD*)(thisx + 104) / 100;
                    v29 = *(_DWORD*)(thisx + 144) + *(_DWORD*)(thisx + 108) / 100;
                }
            }
            else
            {
                v28 = *(_DWORD*)(thisx + 140) + *(_DWORD*)(thisx + 104) / 100 - v26;
                v29 = *(_DWORD*)(thisx + 144) + *(_DWORD*)(thisx + 108) / 100 - *(_DWORD*)(thisx + 112) / 100;
            }
            if (*(_DWORD*)(thisx + 92))
            {
                v25 = (_BYTE*)sub_4741F8((int)unk_4B9B10, *(_DWORD*)(thisx + 104) / 800, *(_DWORD*)(thisx + 108) / 800);
                v24 = sub_446497((int*)unk_4B9B10, *(_DWORD*)(thisx + 104) / 100, *(_DWORD*)(thisx + 108) / 100);
                if (v25 && sub_425C50(v25))
                    v24 = 4 * (unsigned __int8)unknown_libname_6(v25);
                if (100 * v24 < *(_DWORD*)(thisx + 112))
                {
                    v22 = 0;
                    if (v25)
                        v22 = (unsigned __int8)sub_425C30(v25);
                    LOBYTE(v23) = sub_4464F6((_DWORD*)unk_4B9B10, *(_DWORD*)(thisx + 104) / 800, *(_DWORD*)(thisx + 108) / 800);
                    sub_49C15E((int)v20);
                    v20[0] = unk_4B9214;
                    v20[1] = v28 - *(_DWORD*)(thisx + 140) - 8;
                    v4 = *(_DWORD*)(thisx + 108) / 100 - v24;
                    v21 = v4 + sub_4464BA((int)unk_4B9B10) - 2;
                    if ((unsigned __int8)v23 == 11)
                    {
                        if (!(unk_4B93B0 % 2u))
                        {
                            if (v25)
                                v21 -= v22;
                            sub_49AB05((int)unk_4BDC60, v20);
                        }
                    }
                    else if (!v22)
                    {
                        sub_49AB05((int)unk_4BDC60, v20);
                    }
                }
            }
            v30 = *(_DWORD*)(thisx + 52);
            if (*(_DWORD*)(thisx + 56))
                v30 = *(_DWORD*)(thisx + 52) == 0;
            v31 = *(_DWORD*)(thisx + 60);
            if (*(_BYTE*)(thisx + 48) == 1)
            {
                v18 = sub_426210((char*)unk_4B9B10);
                v19 = (_DWORD*)sub_489A73(v18, *(unsigned __int8*)(thisx + 76));
                if (*(char*)(thisx + 86) >= 0)
                    v32 = 8 * *(char*)(thisx + 86) + 4952720;
                if (v19)
                {
                    if (*(int*)(thisx + 88) < 0)
                        sub_40159F(v19, (int)&v27, *(_DWORD*)(thisx + 44), *(_DWORD*)(thisx + 80));
                    else
                        sub_4015C7((int)v19, (int)&v27, *(_DWORD*)(thisx + 44), *(_DWORD*)(thisx + 88), *(_DWORD*)(thisx + 80));
                }
            }
            else if (*(unsigned __int8*)(thisx + 48) <= 1u)
            {
                v9 = 1;
                v11 = 1;
                v27 = a2 + *(_DWORD*)(thisx + 44);
                if (*(_DWORD*)(thisx + 64))
                {
                    v10 = sub_48E0F0(unk_4BDC60, v27);
                    v9 = (320 % v10 != 0) + 320 / v10;
                    if (v28 % v10)
                    {
                        v28 = v28 % v10 - (v28 > 0) * v10;
                        ++v9;
                    }
                    else
                    {
                        v28 = 0;
                    }
                }
                if (*(_DWORD*)(thisx + 68))
                {
                    v8 = sub_48E110((char*)unk_4BDC60, v27);
                    v11 = (240 % v8 != 0) + 240 / v8;
                    if (v29 % v8)
                    {
                        v29 = v29 % v8 - (v29 > 0) * v8;
                        ++v11;
                    }
                    else
                    {
                        v29 = 0;
                    }
                }
                for (i = 0; i < v11; ++i)
                {
                    for (j = 0; j < v9; ++j)
                    {
                        sub_49AB05((int)unk_4BDC60, &v27);
                        v28 += v10;
                    }
                    v28 -= v10 * v9;
                    v29 += v8;
                }
            }
            else
            {
                v13 = sub_462234((_DWORD*)unk_4B9B10, *(unsigned __int8*)(thisx + 48) - 1, *(_DWORD*)(thisx + 44));
                v14 = sub_46231F((_DWORD*)unk_4B9B10, *(unsigned __int8*)(thisx + 48) - 1);
                v27 = sub_462556((_DWORD*)unk_4B9B10, *(unsigned __int8*)(thisx + 48) - 1 - 2 * (*(unsigned __int8*)(thisx + 48) >= 4u));
                v16 = sub_426590(unk_4B9B10, (*(unsigned __int8*)(thisx + 48) - 2) % 2);
                v15 = (unsigned __int16)sub_4266F0((short*)v16);
                v5 = sub_4682AC((unsigned char*)v16);
                v17 = v5;
                LOBYTE(v5) = *(_BYTE*)(thisx + 84);
                sub_4788FA(&v27, (char*)v13, v14, v15, v17, v5);
            }
            return sub_48DD3C(thisx);
        }
    }
    return result;
}

