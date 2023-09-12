#include "sub.h" 
int __fastcall sub_4219B1(_DWORD* a1)
{
    int result; // eax
    unsigned __int16 v2; // ax
    int v3; // eax
    int v4; // esi
    int v5; // ecx
    int v6; // [esp-4h] [ebp-104h]
    BOOL v7; // [esp+4h] [ebp-FCh]
    BOOL v8; // [esp+8h] [ebp-F8h]
    BOOL v9; // [esp+Ch] [ebp-F4h]
    BOOL v10; // [esp+10h] [ebp-F0h]
    int v11; // [esp+14h] [ebp-ECh]
    int v12; // [esp+18h] [ebp-E8h]
    int v13; // [esp+1Ch] [ebp-E4h]
    int v14; // [esp+20h] [ebp-E0h]
    BOOL v15; // [esp+24h] [ebp-DCh]
    BOOL v16; // [esp+28h] [ebp-D8h]
    BOOL v17; // [esp+2Ch] [ebp-D4h]
    BOOL v18; // [esp+30h] [ebp-D0h]
    BOOL v19; // [esp+34h] [ebp-CCh]
    BOOL v20; // [esp+38h] [ebp-C8h]
    BOOL v21; // [esp+3Ch] [ebp-C4h]
    BOOL v22; // [esp+40h] [ebp-C0h]
    int v24; // [esp+4Ch] [ebp-B4h]
    int v25; // [esp+50h] [ebp-B0h]
    int v26; // [esp+54h] [ebp-ACh]
    int v27; // [esp+58h] [ebp-A8h]
    int v28; // [esp+60h] [ebp-A0h]
    int v29; // [esp+68h] [ebp-98h]
    int v30; // [esp+6Ch] [ebp-94h]
    int v31; // [esp+70h] [ebp-90h]
    int i; // [esp+78h] [ebp-88h]
    int j; // [esp+78h] [ebp-88h]
    int k; // [esp+78h] [ebp-88h]
    int v35; // [esp+80h] [ebp-80h]
    int v36; // [esp+84h] [ebp-7Ch]
    char* v37; // [esp+88h] [ebp-78h]
    int v38; // [esp+8Ch] [ebp-74h]
    int v39; // [esp+90h] [ebp-70h]
    int v40; // [esp+94h] [ebp-6Ch]
    int v41; // [esp+98h] [ebp-68h]
    int v42; // [esp+9Ch] [ebp-64h]
    int v43; // [esp+A4h] [ebp-5Ch]
    int v44[9]; // [esp+ACh] [ebp-54h]
    int v45; // [esp+D0h] [ebp-30h]
    char v46; // [esp+D4h] [ebp-2Ch]
    char v47[11]; // [esp+D5h] [ebp-2Bh] BYREF
    int v48; // [esp+E0h] [ebp-20h]
    int v49; // [esp+E4h] [ebp-1Ch]
    int v50[2]; // [esp+E8h] [ebp-18h]
    int v51; // [esp+F0h] [ebp-10h]
    int v52; // [esp+F4h] [ebp-Ch]
    int v53; // [esp+F8h] [ebp-8h]
    int v54; // [esp+FCh] [ebp-4h]

    result = (int)a1;
    if (a1[13] && a1[31])
    {
        sub_4223AF((int)a1);
        v2 = sub_41D067(a1[31], 0);
        v43 = (3 * v2 / 2 + 405) * ((3 * v2 / 2 + 405) / 30) / 2;
        v37 = sub_426210((char*)byte_4B9B10);
        v6 = sub_4260B0((_DWORD*)a1[31]) / 100;
        v3 = sub_426090((_DWORD*)a1[31]);
        sub_486633((_DWORD*)v37, v3 / 100, v6);
        sub_42142F((LONG)a1);
        v51 = 100 * sub_446465((char*)byte_4B9B10);
        v49 = sub_426090((_DWORD*)a1[31]) - v51;
        v38 = a1[6] - v51;
        v53 = a1[6] / 800;
        v39 = a1[7] / 800;
        if (*a1 == 2)
            goto LABEL_9;
        if (v53 == a1[9] && v39 == a1[10] && (v4 = -a1[8], v43 > sub_4260D0((_DWORD*)a1[31]) + v4))
            a1[1] = 0;
        else
            LABEL_9:
        a1[1] = v49 >= 0 && v49 < 32000 && v38 >= 0 && v38 < 32000;
        result = (int)a1;
        if (a1[1])
        {
            v40 = *(unsigned __int16*)(a1[13] + 2 * (a1[16] * v39 + v53));
            v41 = -1;
            v45 = 0;
            v42 = a1[6] / 800;
            v54 = a1[7] / 800;
            v52 = a1[11];
            v48 = a1[12];
            result = sub_446497((_DWORD*)byte_4B9B10, a1[6] / 100, a1[7] / 100);
            v46 = 16;
            strcpy(v47, "\b ");
            v47[4] = 4;
            v47[5] = 1;
            v47[6] = 64;
            v47[7] = 2;
            while (1)
            {
                if (v53 == v52)
                {
                    result = v39;
                    if (v39 == v48)
                        break;
                }
                if (v40 == 1)
                    break;
                v45 = 0;
                for (i = 0; i < 9; ++i)
                {
                    v44[i] = 0;
                    if (i != 4)
                    {
                        v22 = i == 1 || i == 3 || i == 6;
                        v21 = !i || i == 2 || i == 5;
                        v29 = v22 - v21;
                        v20 = i == 5 || i == 6 || i == 8;
                        v19 = i == 2 || i == 3 || i == 7;
                        v31 = v29 + v53;
                        v30 = v20 - v19 + v39;
                        if (v29 + v53 >= 0
                            && v30 >= 0
                            && v31 < a1[16]
                            && v30 < a1[17]
                            && *(unsigned __int16*)(a1[13] + 2 * (a1[16] * v30 + v31)) == v40 - 1)
                        {
                            ++v45;
                            v44[i] = 1;
                        }
                    }
                }
                for (j = 0; j < 2; ++j)
                {
                    v50[j] = 0;
                    v5 = a1[15] + 2 * (a1[16] * v39 + v53);
                    v28 = *(char*)(v5 + j);
                    if (*(_BYTE*)(v5 + j) && *(unsigned __int16*)(a1[13] + 2 * (a1[16] * v39 + v28 + v53)) == v40 - 1)
                    {
                        ++v45;
                        v50[j] = v28;
                    }
                }
                v35 = -1;
                v36 = 0;
                sub_446497((_DWORD*)byte_4B9B10, 8 * v53 + 4, 8 * v39 + 4);
                result = a1[16] * v39;
                for (k = 0; k < 11; ++k)
                {
                    if (k != 4)
                    {
                        if ((result = k, v44[k] > 0) && k < 9 || v44[k + 6] && k >= 9)
                        {
                            if (k >= 9)
                            {
                                v25 = v44[k + 6];
                                v24 = 0;
                            }
                            else
                            {
                                v18 = k == 1 || k == 3 || k == 6;
                                v17 = !k || k == 2 || k == 5;
                                v25 = v18 - v17;
                                v16 = k == 5 || k == 6 || k == 8;
                                v15 = k == 2 || k == 3 || k == 7;
                                v24 = v16 - v15;
                            }
                            if ((result = v53 + v25, v27 = v53 + v25, v26 = v39 + v24, k < 9)
                                && (result = k, ((unsigned __int8)v47[k - 1] & *(_BYTE*)(a1[14] + a1[16] * v26 + v27)) != 0)
                                || k >= 9)
                            {
                                v14 = v52 - v27 <= 0 ? v27 - v52 : v52 - v27;
                                v13 = v48 - v26 <= 0 ? v26 - v48 : v48 - v26;
                                v12 = v42 - v27 <= 0 ? v27 - v42 : v42 - v27;
                                v11 = v54 - v26 <= 0 ? v26 - v54 : v54 - v26;
                                result = v11 + v12;
                                if (v35 == -1 || v11 + v12 + v13 + v14 < v36)
                                {
                                    result = k;
                                    v35 = k;
                                    v36 = v11 + v12 + v13 + v14;
                                }
                            }
                        }
                    }
                }
                if (v45 <= 0)
                    break;
                if (v35 != v41 || v35 >= 9)
                {
                    a1[9] = v53;
                    a1[10] = v39;
                    result = 100 * sub_446497((_DWORD*)byte_4B9B10, 8 * a1[9] + 4, 8 * a1[10] + 4);
                    v41 = v35;
                }
                if (v35 < 0 || v35 >= 9)
                {
                    if (v35 >= 9)
                    {
                        result = v35;
                        v53 += v44[v35 + 6];
                    }
                }
                else
                {
                    v10 = v35 == 1 || v35 == 3 || v35 == 6;
                    v9 = !v35 || v35 == 2 || v35 == 5;
                    result = v10 - v9 + v53;
                    v53 = result;
                    v8 = v35 == 5 || v35 == 6 || v35 == 8;
                    v7 = v35 == 2 || v35 == 3 || v35 == 7;
                    v39 += v8 - v7;
                }
                --v40;
            }
        }
    }
    return result;
}