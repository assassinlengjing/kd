#include "sub.h" 
int sub_49F638(_DWORD* thisx, int a2, int a3, int* a4)
{
    int result; // eax
    _WORD* v6; // [esp+4h] [ebp-3D4h]
    _WORD* v7; // [esp+8h] [ebp-3D0h]
    CHAR v8[256]; // [esp+Ch] [ebp-3CCh] BYREF
    CHAR Text[256]; // [esp+10Ch] [ebp-2CCh] BYREF
    int v10; // [esp+20Ch] [ebp-1CCh]
    int v11; // [esp+210h] [ebp-1C8h]
    int v12; // [esp+214h] [ebp-1C4h]
    _WORD* v13; // [esp+218h] [ebp-1C0h]
    int v14; // [esp+21Ch] [ebp-1BCh]
    int v15; // [esp+220h] [ebp-1B8h]
    int v16; // [esp+224h] [ebp-1B4h]
    int v17; // [esp+228h] [ebp-1B0h]
    int v18; // [esp+22Ch] [ebp-1ACh]
    int v19; // [esp+230h] [ebp-1A8h]
    int v20; // [esp+234h] [ebp-1A4h]
    int v21; // [esp+238h] [ebp-1A0h]
    char v22; // [esp+23Ch] [ebp-19Ch]
    __int16 v23; // [esp+240h] [ebp-198h]
    __int16 v24; // [esp+244h] [ebp-194h]
    _WORD* v25; // [esp+248h] [ebp-190h]
    int v26; // [esp+24Ch] [ebp-18Ch]
    int v27; // [esp+254h] [ebp-184h]
    int v28; // [esp+258h] [ebp-180h]
    int v29; // [esp+25Ch] [ebp-17Ch]
    int v30[4]; // [esp+260h] [ebp-178h] BYREF
    int v31; // [esp+270h] [ebp-168h]
    _WORD* v32; // [esp+284h] [ebp-154h]
    __int16 v33; // [esp+2A0h] [ebp-138h]
    char v34; // [esp+2DCh] [ebp-FCh]
    int v35; // [esp+2E0h] [ebp-F8h]
    int v36; // [esp+2E4h] [ebp-F4h]
    char v37; // [esp+2E8h] [ebp-F0h]
    int v38; // [esp+2ECh] [ebp-ECh]
    int v39; // [esp+2F0h] [ebp-E8h] BYREF
    int v40; // [esp+2F4h] [ebp-E4h]
    int v41; // [esp+2F8h] [ebp-E0h]
    int v42; // [esp+2FCh] [ebp-DCh]
    int v43; // [esp+308h] [ebp-D0h]
    __int16 v44; // [esp+30Ch] [ebp-CCh]
    int v45[31]; // [esp+310h] [ebp-C8h] BYREF
    int i; // [esp+38Ch] [ebp-4Ch]
    int v47; // [esp+390h] [ebp-48h]
    int v48; // [esp+394h] [ebp-44h]
    int v49; // [esp+398h] [ebp-40h]
    int v50; // [esp+39Ch] [ebp-3Ch]
    int j; // [esp+3A0h] [ebp-38h]
    int v52; // [esp+3A4h] [ebp-34h]
    int v53; // [esp+3A8h] [ebp-30h] BYREF
    int v54; // [esp+3ACh] [ebp-2Ch]
    int v55; // [esp+3B0h] [ebp-28h]
    int v56; // [esp+3B4h] [ebp-24h]
    int v57; // [esp+3B8h] [ebp-20h]
    int v58; // [esp+3BCh] [ebp-1Ch]
    int v59; // [esp+3C0h] [ebp-18h]
    int v60; // [esp+3C4h] [ebp-14h]
    int v61; // [esp+3C8h] [ebp-10h]
    char v62; // [esp+3CCh] [ebp-Ch]
    int v63; // [esp+3D0h] [ebp-8h]
    __int16 v64; // [esp+3D4h] [ebp-4h]

    v36 = 0;
    v47 = 0;
    v38 = 0;
    v52 = 0;
    v58 = 0;
    v19 = 0;
    v10 = *((unsigned __int16*)thisx + 3);
    v59 = *((unsigned __int16*)thisx + 4);
    if (a4)
    {
        v10 = a4[2];
        v59 = a4[3];
    }
    if (a4)
    {
        v53 = *a4;
        v54 = a4[1];
        v55 = a4[2] + v53;
        v56 = a4[3] + v54;
    }
    else
    {
        v53 = 0;
        v54 = 0;
        v55 = *((unsigned __int16*)thisx + 3);
        v56 = *((unsigned __int16*)thisx + 4);
    }
    if (**(_DWORD**)(a3 + 12) > *(_DWORD*)(a3 + 4))
        v52 = **(_DWORD**)(a3 + 12) - *(_DWORD*)(a3 + 4);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > *(_DWORD*)(a3 + 8))
        v38 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - *(_DWORD*)(a3 + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < v10 + *(_DWORD*)(a3 + 4))
        v47 = v10 + *(_DWORD*)(a3 + 4) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < v59 + *(_DWORD*)(a3 + 8))
        v36 = v59 + *(_DWORD*)(a3 + 8) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
    if (*(_DWORD*)(a3 + 24))
        v53 += v47;
    else
        v53 += v52;
    v55 = v10 + v53 - v52 - v47;
    if (*(_DWORD*)(a3 + 28))
        v54 += v36;
    else
        v54 += v38;
    v56 = v59 + v54 - v38 - v36;
    result = v53;
    if (v53 < v55 && v54 < v56)
    {
        v39 = v52 + *(_DWORD*)(a3 + 4);
        v40 = v38 + *(_DWORD*)(a3 + 8);
        v41 = v10 + v39 - v52 - v47;
        v42 = v59 + v40 - v38 - v36;
        v30[0] = 124;
        v45[0] = 124;
        result = (*(int(**)(_DWORD, _DWORD, int*, int*, int, _DWORD))(*(_DWORD*)*thisx + 100))(
            *thisx,
            *thisx,
            &v53,
            v30,
            1,
            0);
        v60 = result;
        if (result)
        {
            if (v60 == -2147024809)
            {
                wsprintfA(Text, "LockError ( %d, %d )-( %d, %d )", v53, v54, v55, v56);
                return sub_499850(Text);
            }
        }
        else
        {
            v60 = (*(int(__stdcall**)(int, int*, int*, int, _DWORD))(*(_DWORD*)a2 + 100))(a2, &v39, v45, 1, 0);
            if (v60)
            {
                (*(void(**)(_DWORD, _DWORD, int*))(*(_DWORD*)*thisx + 128))(*thisx, *thisx, &v53);
                wsprintfA(v8, "LockError! 2 (%d,%d)-(%d,%d)", v39, v40, v41, v42);
                return sub_499850(v8);
            }
            else
            {
                v25 = v32;
                if (*(_DWORD*)(a3 + 24))
                    v25 = &v25[v55 - v53 - 1];
                if (*(_DWORD*)(a3 + 28))
                    v25 += v31 * (v56 - v54 - 1) / 2;
                v26 = (*(_DWORD*)(a3 + 24) == 0) - *(_DWORD*)(a3 + 24);
                v21 = v31 * ((*(_DWORD*)(a3 + 28) == 0) - *(_DWORD*)(a3 + 28)) / 2;
                v13 = (_WORD*)v45[9];
                v43 = v45[4] / 2;
                LOWORD(v20) = v33;
                v49 = v55 - v53;
                v18 = v56 - v54;
                LOWORD(v61) = unk_4CA1F0[0];
                LOWORD(v50) = unk_4CA1F2;
                LOWORD(v29) = unk_4CA1F4;
                v62 = unk_4CA210[0];
                v22 = unk_4CA211;
                v34 = unk_4CA212;
                LOWORD(v11) = (int)(unsigned __int16)unk_4CA1F0[0] >> unk_4CA210[0];
                LOWORD(v35) = (int)(unsigned __int16)unk_4CA1F2 >> unk_4CA211;
                LOWORD(v15) = (int)(unsigned __int16)unk_4CA1F4 >> unk_4CA212;
                v37 = *(_BYTE*)(a3 + 45);
                v23 = *(_WORD*)(a3 + 46);
                v64 = *(_WORD*)(a3 + 48);
                v24 = *(_WORD*)(a3 + 50);
                if ((v37 == 1 || v37 == 3 || v37 == 4) && unk_4CA210[0] == 11)
                    v64 = 2 * v64 + 1;
                v44 = (v24 << v34) | (v64 << v22) | (v23 << v62);
                for (i = 0; i < v18; ++i)
                {
                    v6 = v25;
                    v7 = v13;
                    for (j = 0; j < v49; ++j)
                    {
                        if (!*((_BYTE*)thisx + 5) || (unsigned __int16)*v25 != (unsigned __int16)v20)
                        {
                            if (v37 == 4)
                            {
                                *v13 = v44;
                            }
                            else
                            {
                                LOWORD(v27) = v61 & *v25;
                                LOWORD(v14) = v50 & *v25;
                                LOWORD(v28) = v29 & *v25;
                                if (v37 == 1 || v37 == 3)
                                {
                                    LOWORD(v27) = (unsigned __int16)v27 >> v62;
                                    LOWORD(v14) = (unsigned __int16)v14 >> v22;
                                    LOWORD(v28) = (unsigned __int16)v28 >> v34;
                                    v12 = v23 + (unsigned __int16)v27;
                                    v63 = v64 + (unsigned __int16)v14;
                                    v57 = v24 + (unsigned __int16)v28;
                                    if (v37 == 3)
                                    {
                                        v12 /= 2;
                                        v63 /= 2;
                                        v57 /= 2;
                                    }
                                    if (v12 <= (unsigned __int16)v11)
                                    {
                                        if (v12 >= 0)
                                            v16 = v12;
                                        else
                                            v16 = 0;
                                    }
                                    else
                                    {
                                        v16 = (unsigned __int16)v11;
                                    }
                                    if (v63 <= (unsigned __int16)v35)
                                    {
                                        if (v63 >= 0)
                                            v48 = v63;
                                        else
                                            v48 = 0;
                                    }
                                    else
                                    {
                                        v48 = (unsigned __int16)v35;
                                    }
                                    if (v57 <= (unsigned __int16)v15)
                                    {
                                        if (v57 >= 0)
                                            v17 = v57;
                                        else
                                            v17 = 0;
                                    }
                                    else
                                    {
                                        v17 = (unsigned __int16)v15;
                                    }
                                    v16 <<= v62;
                                    v48 <<= v22;
                                    v17 <<= v34;
                                }
                                else if (v37 == 2)
                                {
                                    v16 = (unsigned __int16)v61 & (v23 * (unsigned __int16)v27 / 100);
                                    v48 = (unsigned __int16)v50 & (v64 * (unsigned __int16)v14 / 100);
                                    v17 = (unsigned __int16)v29 & (v24 * (unsigned __int16)v28 / 100);
                                }
                                *v13 = v17 | v48 | v16;
                            }
                        }
                        v25 += v26;
                        ++v13;
                    }
                    v25 = &v6[v21];
                    v13 = &v7[v43];
                }
                (*(void(**)(_DWORD, _DWORD, int*))(*(_DWORD*)*thisx + 128))(*thisx, *thisx, &v53);
                return (*(int(__stdcall**)(int, int*))(*(_DWORD*)a2 + 128))(a2, &v39);
            }
        }
    }
    return result;
}
