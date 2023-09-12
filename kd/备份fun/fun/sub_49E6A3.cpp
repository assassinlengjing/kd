#include "sub.h" 
int sub_49E6A3(_DWORD* thisx, int a2, int a3)
{
    int result; // eax
    _WORD* v5; // [esp+4h] [ebp-2A8h]
    int j; // [esp+8h] [ebp-2A4h]
    _WORD* v7; // [esp+Ch] [ebp-2A0h]
    CHAR Text[256]; // [esp+10h] [ebp-29Ch] BYREF
    int v9; // [esp+110h] [ebp-19Ch]
    _WORD* v10; // [esp+114h] [ebp-198h]
    int v11; // [esp+118h] [ebp-194h]
    unsigned int v12; // [esp+11Ch] [ebp-190h]
    unsigned int v13; // [esp+120h] [ebp-18Ch]
    int v14; // [esp+124h] [ebp-188h]
    int v15; // [esp+128h] [ebp-184h]
    int v16; // [esp+12Ch] [ebp-180h]
    int v17; // [esp+130h] [ebp-17Ch]
    char v18; // [esp+134h] [ebp-178h]
    _WORD* v19; // [esp+138h] [ebp-174h]
    int v20; // [esp+13Ch] [ebp-170h]
    int v21; // [esp+140h] [ebp-16Ch]
    int v22; // [esp+144h] [ebp-168h]
    int v23; // [esp+148h] [ebp-164h]
    int v24; // [esp+14Ch] [ebp-160h]
    int v25[4]; // [esp+150h] [ebp-15Ch] BYREF
    int v26; // [esp+160h] [ebp-14Ch]
    _WORD* v27; // [esp+174h] [ebp-138h]
    __int16 v28; // [esp+190h] [ebp-11Ch]
    char v29; // [esp+1CCh] [ebp-E0h]
    int v30; // [esp+1D0h] [ebp-DCh]
    int v31; // [esp+1D4h] [ebp-D8h]
    int v32; // [esp+1D8h] [ebp-D4h] BYREF
    int v33; // [esp+1DCh] [ebp-D0h]
    int v34; // [esp+1E0h] [ebp-CCh]
    int v35; // [esp+1E4h] [ebp-C8h]
    int v36; // [esp+1E8h] [ebp-C4h]
    int v37; // [esp+1ECh] [ebp-C0h]
    int v38; // [esp+1F0h] [ebp-BCh]
    int v39[31]; // [esp+1F4h] [ebp-B8h] BYREF
    int i; // [esp+270h] [ebp-3Ch]
    int v41; // [esp+274h] [ebp-38h]
    unsigned int v42; // [esp+278h] [ebp-34h]
    int v43; // [esp+27Ch] [ebp-30h]
    int v44; // [esp+280h] [ebp-2Ch]
    int v45; // [esp+284h] [ebp-28h]
    int v46; // [esp+288h] [ebp-24h] BYREF
    int v47; // [esp+28Ch] [ebp-20h]
    int v48; // [esp+290h] [ebp-1Ch]
    int v49; // [esp+294h] [ebp-18h]
    int v50; // [esp+298h] [ebp-14h]
    int v51; // [esp+29Ch] [ebp-10h]
    int v52; // [esp+2A0h] [ebp-Ch]
    int v53; // [esp+2A4h] [ebp-8h]
    char v54; // [esp+2A8h] [ebp-4h]

    v30 = 0;
    v41 = 0;
    v31 = 0;
    v45 = 0;
    v50 = 0;
    v15 = 0;
    v9 = *((unsigned __int16*)thisx + 3);
    v51 = *((unsigned __int16*)thisx + 4);
    if (**(_DWORD**)(a3 + 12) > *(_DWORD*)(a3 + 4))
        v45 = **(_DWORD**)(a3 + 12) - *(_DWORD*)(a3 + 4);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) > *(_DWORD*)(a3 + 8))
        v31 = *(_DWORD*)(*(_DWORD*)(a3 + 12) + 4) - *(_DWORD*)(a3 + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 8) < v9 + *(_DWORD*)(a3 + 4))
        v41 = v9 + *(_DWORD*)(a3 + 4) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 8);
    if (*(_DWORD*)(*(_DWORD*)(a3 + 12) + 12) < v51 + *(_DWORD*)(a3 + 8))
        v30 = v51 + *(_DWORD*)(a3 + 8) - *(_DWORD*)(*(_DWORD*)(a3 + 12) + 12);
    if (*(_DWORD*)(a3 + 24))
    {
        v46 = v41;
        v48 = *((unsigned __int16*)thisx + 3) - v45;
    }
    else
    {
        v46 = v45;
        v48 = *((unsigned __int16*)thisx + 3) - v41;
    }
    if (*(_DWORD*)(a3 + 28))
    {
        v47 = v30;
        result = (int)thisx;
        v49 = *((unsigned __int16*)thisx + 4) - v31;
    }
    else
    {
        v47 = v31;
        result = *((unsigned __int16*)thisx + 4) - v30;
        v49 = result;
    }
    if (v46 < v48 && v47 < v49)
    {
        v32 = v45 + *(_DWORD*)(a3 + 4);
        v33 = v31 + *(_DWORD*)(a3 + 8);
        v34 = v9 + v32 - v45 - v41;
        v35 = v51 + v33 - v31 - v30;
        v25[0] = 124;
        v39[0] = 124;
        result = (*(int(__stdcall**)(_DWORD, int*, int*, int, _DWORD))(*(_DWORD*)*thisx + 100))(*thisx, &v46, v25, 1, 0);
        v52 = result;
        if (result)
        {
            if (v52 == -2147024809)
            {
                wsprintfA(Text, "LockError ( %d, %d )-( %d, %d )", v46, v47, v48, v49);
                return sub_499850(Text);
            }
        }
        else
        {
            v52 = (*(int(__stdcall**)(int, int*, int*, int, _DWORD))(*(_DWORD*)a2 + 100))(a2, &v32, v39, 1, 0);
            if (v52)
            {
                (*(void(__stdcall**)(_DWORD, int*))(*(_DWORD*)*thisx + 128))(*thisx, &v46);
                return sub_499850(aLockerror2_0);
            }
            else
            {
                v19 = v27;
                if (*(_DWORD*)(a3 + 24))
                    v19 = &v19[v48 - v46 - 1];
                if (*(_DWORD*)(a3 + 28))
                    v19 += v26 * (v49 - v47 - 1) / 2;
                v20 = (*(_DWORD*)(a3 + 24) == 0) - *(_DWORD*)(a3 + 24);
                v17 = v26 * ((*(_DWORD*)(a3 + 28) == 0) - *(_DWORD*)(a3 + 28)) / 2;
                v10 = (_WORD*)v39[9];
                v38 = v39[4] / 2;
                LOWORD(v16) = v28;
                v43 = v48 - v46;
                v14 = v49 - v47;
                LOWORD(v53) = word_4CA1F0[0];
                LOWORD(v44) = word_4CA1F2;
                LOWORD(v24) = word_4CA1F4;
                v54 = byte_4CA210[0];
                v18 = byte_4CA211;
                v29 = byte_4CA212;
                for (i = 0; i < v14; ++i)
                {
                    v5 = v19;
                    v7 = v10;
                    for (j = 0; j < v43; ++j)
                    {
                        if (!*((_BYTE*)thisx + 5) || (unsigned __int16)*v19 != (unsigned __int16)v16)
                        {
                            LOWORD(v22) = v53 & *v19;
                            LOWORD(v11) = v44 & *v19;
                            LOWORD(v23) = v24 & *v19;
                            LOWORD(v36) = v53 & *v10;
                            LOWORD(v21) = v44 & *v10;
                            LOWORD(v37) = v24 & *v10;
                            v12 = (unsigned __int16)v36 + (unsigned __int16)v22;
                            v42 = (unsigned __int16)v21 + (unsigned __int16)v11;
                            v13 = (unsigned __int16)v37 + (unsigned __int16)v23;
                            if (v12 > (unsigned __int16)v53)
                                v12 = (unsigned __int16)v53;
                            if (v42 > (unsigned __int16)v44)
                                v42 = (unsigned __int16)v44;
                            if (v13 > (unsigned __int16)v24)
                                v13 = (unsigned __int16)v24;
                            *v10 = v13 | v42 | v12;
                        }
                        v19 += v20;
                        ++v10;
                    }
                    v19 = &v5[v17];
                    v10 = &v7[v38];
                }
                (*(void(__stdcall**)(_DWORD, int*))(*(_DWORD*)*thisx + 128))(*thisx, &v46);
                return (*(int(__stdcall**)(int, int*))(*(_DWORD*)a2 + 128))(a2, &v32);
            }
        }
    }
    return result;
}

