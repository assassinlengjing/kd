#include "sub.h" 
unsigned __int16* __fastcall sub_441DB3(int a1)
{
    unsigned __int16* result; // eax
    BOOL v2; // [esp+4h] [ebp-DCh]
    BOOL v3; // [esp+8h] [ebp-D8h]
    int v4; // [esp+Ch] [ebp-D4h]
    int v5; // [esp+10h] [ebp-D0h]
    int v7; // [esp+1Ch] [ebp-C4h]
    int ii; // [esp+20h] [ebp-C0h]
    int v9; // [esp+24h] [ebp-BCh]
    int v10; // [esp+28h] [ebp-B8h]
    int n; // [esp+2Ch] [ebp-B4h]
    int v12; // [esp+30h] [ebp-B0h]
    int v13; // [esp+34h] [ebp-ACh]
    int k; // [esp+38h] [ebp-A8h]
    int v15; // [esp+3Ch] [ebp-A4h]
    int v16; // [esp+40h] [ebp-A0h]
    int j; // [esp+44h] [ebp-9Ch]
    unsigned __int16* v18; // [esp+48h] [ebp-98h]
    int v19; // [esp+4Ch] [ebp-94h]
    int v20; // [esp+50h] [ebp-90h]
    char v21[8]; // [esp+54h] [ebp-8Ch]
    int m; // [esp+5Ch] [ebp-84h]
    char v23[8]; // [esp+60h] [ebp-80h]
    unsigned __int16* v24; // [esp+68h] [ebp-78h]
    int v25; // [esp+6Ch] [ebp-74h]
    int v26; // [esp+70h] [ebp-70h]
    int v27; // [esp+74h] [ebp-6Ch]
    int v28; // [esp+78h] [ebp-68h]
    int v29; // [esp+7Ch] [ebp-64h]
    int i; // [esp+80h] [ebp-60h]
    unsigned __int16* v31; // [esp+84h] [ebp-5Ch]
    int kk; // [esp+88h] [ebp-58h]
    int v33; // [esp+8Ch] [ebp-54h]
    int v34; // [esp+90h] [ebp-50h]
    int v35; // [esp+94h] [ebp-4Ch]
    unsigned __int16* jj; // [esp+98h] [ebp-48h]
    int v37; // [esp+9Ch] [ebp-44h]
    int v38[2]; // [esp+A0h] [ebp-40h] BYREF
    int v39; // [esp+A8h] [ebp-38h] BYREF
    int v40; // [esp+ACh] [ebp-34h]
    unsigned __int16* v41; // [esp+B0h] [ebp-30h]
    int v42; // [esp+C0h] [ebp-20h]
    BOOL v43; // [esp+C4h] [ebp-1Ch]

    result = (unsigned __int16*)a1;
    if (*(_BYTE*)(a1 + 20) && !*(_DWORD*)(a1 + 32))
    {
        sub_49C15E((int)&v39);
        if (*(_DWORD*)(a1 + 16))
        {
            sub_4097DF(*(void**)(a1 + 16), (int)v38);
            v40 = *(_DWORD*)(a1 + 4) + v38[0];
            v41 = (unsigned __int16*)(*(_DWORD*)(a1 + 8) + v38[1]);
        }
        else
        {
            v40 = *(_DWORD*)(a1 + 4) - sub_446465((char*)unk_4B9B10);
            v41 = *(unsigned __int16**)(a1 + 8);
        }
        if ((*(unsigned __int8*)(a1 + 20) < 2u || *(unsigned __int8*)(a1 + 20) > 9u)
            && (*(unsigned __int8*)(a1 + 20) < 0xBu || *(unsigned __int8*)(a1 + 20) > 0x10u))
        {
            switch (*(_BYTE*)(a1 + 20))
            {
            case 0xA:
                v40 -= 16;
                v39 = unk_4B91F0 + *(_DWORD*)(a1 + 24) + 17;
                return sub_49AB05((int)unk_4BDC60, &v39);
            case 0x11:
                v39 = unk_4B91F0 + *(_DWORD*)(a1 + 24);
                v42 = *(_DWORD*)(a1 + 28);
                sub_49AB05((int)unk_4BDC60, &v39);
                result = (unsigned __int16*)a1;
                if (*(int*)(a1 + 12) > 55)
                {
                    v29 = v40;
                    v31 = v41;
                    for (i = 0; i < 8; ++i)
                    {
                        switch (i)
                        {
                        case 0:
                            v28 = 0;
                            v27 = -100;
                            break;
                        case 1:
                            v28 = 70;
                            v27 = -70;
                            break;
                        case 2:
                            v28 = 100;
                            v27 = 0;
                            break;
                        case 3:
                            v28 = 70;
                            v27 = 70;
                            break;
                        case 4:
                            v28 = 0;
                            v27 = 100;
                            break;
                        case 5:
                            v28 = -70;
                            v27 = 70;
                            break;
                        case 6:
                            v28 = -100;
                            v27 = 0;
                            break;
                        case 7:
                            v28 = -70;
                            v27 = -70;
                            break;
                        default:
                            break;
                        }
                        v25 = (*(_DWORD*)(a1 + 12) - 50) * v28 / 150;
                        v26 = v27 * (*(_DWORD*)(a1 + 12) - 50) / 150;
                        if (*(int*)(a1 + 12) >= 65)
                        {
                            v25 = v28 * (*(_DWORD*)(a1 + 12) - 65) / 400 + 15 * v28 / 150;
                            v26 = v27 * (*(_DWORD*)(a1 + 12) - 65) / 400 + 15 * v27 / 150;
                        }
                        v40 = v25 + v29;
                        v41 = (unsigned __int16*)((char*)v31 + v26);
                        sub_49AB05((int)unk_4BDC60, &v39);
                        result = (unsigned __int16*)(i + 1);
                    }
                }
                break;
            case 0x13:
                if (*(_DWORD*)(a1 + 24))
                {
                    if (*(_DWORD*)(a1 + 24) == 1)
                    {
                        v40 -= 4;
                        v41 -= 2;
                        v39 = unk_4B91F0 + 3;
                        return sub_49AB05((int)unk_4BDC60, &v39);
                    }
                    else if (*(_DWORD*)(a1 + 24) == 2)
                    {
                        v16 = v40;
                        result = v41;
                        v15 = (int)v41;
                        v39 = unk_4B91F0 + 7;
                        for (j = 0; j < 4; ++j)
                        {
                            v40 = v16 - 8 * (j % 2 == 0);
                            v41 = (unsigned __int16*)(v15 - 8 * (j / -2 == 0));
                            v3 = j == 1 || j == 3;
                            v42 = v3;
                            v43 = j >= 2;
                            result = sub_49AB05((int)unk_4BDC60, &v39);
                        }
                    }
                    else
                    {
                        result = (unsigned __int16*)a1;
                        if (*(_DWORD*)(a1 + 24) == 3 || *(_DWORD*)(a1 + 24) == 4)
                        {
                            v13 = v40;
                            v12 = (int)v41;
                            result = (unsigned __int16*)unk_4B91F0;
                            v39 = unk_4B91F0 + *(_DWORD*)(a1 + 24) + 5;
                            for (k = 0; k < 4; ++k)
                            {
                                v40 = v13 - 16 * (k % 2 == 0);
                                v41 = (unsigned __int16*)(v12 - 16 * (k / -2 == 0));
                                v2 = k == 1 || k == 3;
                                v42 = v2;
                                v43 = k >= 2;
                                result = sub_49AB05((int)unk_4BDC60, &v39);
                            }
                        }
                    }
                }
                else
                {
                    v19 = v40 - 4;
                    v18 = v41 - 2;
                    result = (unsigned __int16*)(*(_DWORD*)(a1 + 12) * *(_DWORD*)(a1 + 12) / 7);
                    v24 = result;
                    v20 = 32 - (_DWORD)result;
                    v23[0] = -10;
                    v23[1] = -7;
                    v23[2] = 0;
                    v23[3] = 7;
                    v23[4] = 10;
                    v23[5] = 7;
                    v23[6] = 0;
                    v23[7] = -7;
                    v21[0] = 0;
                    v21[1] = -7;
                    v21[2] = -10;
                    v21[3] = -7;
                    v21[4] = 0;
                    v21[5] = 7;
                    v21[6] = 10;
                    v21[7] = 7;
                    for (m = 0; m < 8; ++m)
                    {
                        v40 = v23[m] * v20 / 10 + v19;
                        v41 = (unsigned __int16*)((char*)v18 + v21[m] * v20 / 10);
                        v42 = v23[m] > 0;
                        v43 = v21[m] > 0;
                        if (v23[m] <= 0)
                            v5 = -v23[m];
                        else
                            v5 = v23[m];
                        if (v23[m] <= 0)
                            v4 = -v23[m];
                        else
                            v4 = v23[m];
                        v39 = 3 * (v4 == 7) + unk_4B91F0 + (v5 == 10) + 9 + 2 * (v23[m] == 0);
                        sub_49AB05((int)unk_4BDC60, &v39);
                        result = (unsigned __int16*)(m + 1);
                    }
                }
                break;
            case 0x14:
                v10 = v40;
                result = v41;
                v9 = (int)v41;
                for (n = 0; n < 2; ++n)
                {
                    result = (unsigned __int16*)a1;
                    v7 = 5 * n + *(_DWORD*)(a1 + 12);
                    if (*(int*)(a1 + 12) > 12)
                    {
                        result = (unsigned __int16*)(unk_4B93B0 / 2u);
                        if (unk_4B93B0 % 2u == 1)
                            continue;
                    }
                    if (v7 > 20)
                        return result;
                    for (ii = 0; ii < 2; ++ii)
                    {
                        v40 = v10 + (v7 / (3 - n) + 2) * ((__PAIR64__(ii == 1, ii) - 1) >> 32) - 4;
                        v41 = (unsigned __int16*)(v9 + (5 * v7 - 100) * v7 / 100 - 4 - 4 * n);
                        v42 = ii == 1;
                        v39 = unk_4B91F0 + (v7 > 10) + 13;
                        result = sub_49AB05((int)unk_4BDC60, &v39);
                    }
                }
                break;
            default:
                v39 = unk_4B91F0 + *(_DWORD*)(a1 + 24);
                v42 = *(_DWORD*)(a1 + 28);
                return sub_49AB05((int)unk_4BDC60, &v39);
            }
        }
        else
        {
            v35 = 2;
            v37 = 24;
            v34 = v40;
            v40 -= 24;
            if (unk_4B066A[3 * *(unsigned __int8*)(a1 + 20) - 6] >= 0)
            {
                v35 = 3;
                v40 -= v37 / 2;
            }
            for (jj = 0; ; jj = (unsigned __int16*)((char*)jj + 1))
            {
                result = jj;
                if ((int)jj >= v35)
                    break;
                v37 = 24;
                v33 = unk_4B0668[(_DWORD)jj + 3 * *(unsigned __int8*)(a1 + 20) - 6];
                if (v33 == 9)
                    v37 = 32;
                v39 = unk_4B91F0 + v33 + 15;
                sub_49AB05((int)unk_4BDC60, &v39);
                v40 += v37;
            }
            if (*(_BYTE*)(a1 + 20) == 4)
            {
                result = v41 - 4;
                v41 -= 4;
                v40 = v34 - 24;
                for (kk = 0; kk < 2; ++kk)
                {
                    v39 = unk_4B91F0 + unk_4B0671[kk] + 15;
                    result = sub_49AB05((int)unk_4BDC60, &v39);
                    v40 += 24;
                }
            }
        }
    }
    return result;
}

