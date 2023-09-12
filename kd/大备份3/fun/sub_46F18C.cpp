#include "sub.h" 
void sub_46F18C(int thisx, int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // edx
    int v6; // eax
    int v7; // edx
    char* v8; // eax
    __int16 v9; // ax
    char v10; // al
    char v11; // al
    char v12; // al
    char v13; // al
    unsigned __int8 v14; // al
    char* v15; // eax
    const CHAR* v16; // eax
    int v17; // [esp-4h] [ebp-230h]
    int v18; // [esp-4h] [ebp-230h]
    int v19; // [esp-4h] [ebp-230h]
    int v20; // [esp-4h] [ebp-230h]
    int v21; // [esp-4h] [ebp-230h]
    int v23; // [esp+8h] [ebp-224h]
    int n; // [esp+Ch] [ebp-220h]
    char* v25; // [esp+10h] [ebp-21Ch]
    int v26; // [esp+18h] [ebp-214h]
    int v27; // [esp+18h] [ebp-214h]
    BOOL v28; // [esp+1Ch] [ebp-210h]
    unsigned __int8 v29; // [esp+20h] [ebp-20Ch]
    unsigned __int8 v30; // [esp+24h] [ebp-208h]
    int v31[4]; // [esp+28h] [ebp-204h]
    int ii; // [esp+38h] [ebp-1F4h]
    _BYTE* v33; // [esp+3Ch] [ebp-1F0h]
    int v34; // [esp+40h] [ebp-1ECh]
    int v35; // [esp+44h] [ebp-1E8h]
    int v36; // [esp+48h] [ebp-1E4h]
    int jj; // [esp+4Ch] [ebp-1E0h]
    int v38; // [esp+50h] [ebp-1DCh]
    int v39; // [esp+54h] [ebp-1D8h]
    int v40; // [esp+58h] [ebp-1D4h]
    int v41; // [esp+5Ch] [ebp-1D0h]
    int v42; // [esp+60h] [ebp-1CCh]
    int v43; // [esp+64h] [ebp-1C8h]
    int v44; // [esp+68h] [ebp-1C4h]
    int v45; // [esp+6Ch] [ebp-1C0h]
    int v46; // [esp+70h] [ebp-1BCh]
    int v47; // [esp+74h] [ebp-1B8h]
    int v48; // [esp+78h] [ebp-1B4h]
    _BYTE* v49; // [esp+7Ch] [ebp-1B0h]
    CHAR v50[4]; // [esp+80h] [ebp-1ACh] BYREF
    __int16 v51; // [esp+84h] [ebp-1A8h]
    char v52; // [esp+86h] [ebp-1A6h]
    __int16 v53; // [esp+87h] [ebp-1A5h]
    int v54; // [esp+89h] [ebp-1A3h]
    int v55; // [esp+8Dh] [ebp-19Fh]
    char v56; // [esp+91h] [ebp-19Bh]
    int v57; // [esp+92h] [ebp-19Ah]
    int v58; // [esp+96h] [ebp-196h]
    char v59; // [esp+9Ah] [ebp-192h]
    int v60; // [esp+9Bh] [ebp-191h]
    char v61; // [esp+9Fh] [ebp-18Dh]
    int v62; // [esp+A0h] [ebp-18Ch]
    int v63; // [esp+A4h] [ebp-188h]
    int v64; // [esp+A8h] [ebp-184h]
    char v65; // [esp+ACh] [ebp-180h]
    int v66; // [esp+ADh] [ebp-17Fh]
    int v67; // [esp+B1h] [ebp-17Bh]
    char v68; // [esp+B5h] [ebp-177h]
    int v69; // [esp+B6h] [ebp-176h]
    int v70; // [esp+BAh] [ebp-172h]
    char v71; // [esp+BEh] [ebp-16Eh]
    int v72; // [esp+BFh] [ebp-16Dh]
    char v73; // [esp+C3h] [ebp-169h]
    int v74; // [esp+C4h] [ebp-168h]
    int v75; // [esp+C8h] [ebp-164h]
    int v76; // [esp+CCh] [ebp-160h]
    char v77; // [esp+D0h] [ebp-15Ch]
    int v78; // [esp+D4h] [ebp-158h]
    _WORD* v79; // [esp+D8h] [ebp-154h]
    int yTop; // [esp+DCh] [ebp-150h]
    int* v81; // [esp+E0h] [ebp-14Ch]
    int xLeft; // [esp+E4h] [ebp-148h]
    int v83; // [esp+E8h] [ebp-144h]
    int v84; // [esp+ECh] [ebp-140h]
    char* v85; // [esp+F0h] [ebp-13Ch]
    int m; // [esp+F4h] [ebp-138h]
    int v87; // [esp+F8h] [ebp-134h]
    int v88; // [esp+FCh] [ebp-130h]
    int v89; // [esp+100h] [ebp-12Ch]
    CHAR Buffer[64]; // [esp+104h] [ebp-128h] BYREF
    struct tagRECT v91; // [esp+144h] [ebp-E8h] BYREF
    int v92; // [esp+154h] [ebp-D8h]
    int v93; // [esp+158h] [ebp-D4h] BYREF
    int v94; // [esp+15Ch] [ebp-D0h]
    int v95; // [esp+160h] [ebp-CCh]
    int v96; // [esp+170h] [ebp-BCh]
    int v97; // [esp+18Ch] [ebp-A0h]
    int v98; // [esp+190h] [ebp-9Ch]
    int j; // [esp+194h] [ebp-98h]
    int v100; // [esp+198h] [ebp-94h]
    int k; // [esp+19Ch] [ebp-90h]
    int i; // [esp+1A0h] [ebp-8Ch]
    CHAR String[64]; // [esp+1A4h] [ebp-88h] BYREF
    struct tagRECT rc; // [esp+1E4h] [ebp-48h] BYREF
    int v105; // [esp+1F4h] [ebp-38h] BYREF
    int v106; // [esp+1F8h] [ebp-34h]
    int v107; // [esp+1FCh] [ebp-30h]

    if (a2 == -1)
    {
        SetRect(&rc, 0, 0, 320, 16);
        sub_4A02E9((_DWORD*)unk_4BDC60, (int)&rc, (int)&rc, 0, unk_4B9248);
        sub_49C15E((int)&v105);
        v105 = unk_4B91F8;
        for (i = 1; i < 31; ++i)
        {
            v106 = 8 * ((i + 1) % 5) - 40;
            v107 = 8 * i + 4;
            for (j = 0; j < 9; ++j)
            {
                sub_49CC5B((short*)unk_4BDC60, unk_4B9248, &v105);
                v106 += 40;
            }
        }
        v100 = 8;
        if (unk_4B99F4)
            v100 += 16;
        wsprintfA(String, "%d/%d", *(unsigned __int8*)(thisx + 2476) + 1, *(unsigned __int8*)(thisx + 2477));
        sub_47B7ED(v100, 2, String, 0, unk_4B9248);
        sub_47B91A(v100 + 24, 2, &unk_4B376C, 0, unk_4B9248);
        sub_47B91A(v100 + 72, 2, &unk_4B3778, 0, unk_4B9248);
        for (k = 0; k < 4; ++k)
            sub_46F18C(thisx, k);
    }
    else if (a2 >= 0 && a2 < 4)
    {
        xLeft = 160 * (a2 / 2) + 4;
        yTop = 112 * (a2 & 0x80000001) + 20;
        SetRect(&v91, xLeft, yTop, 160 * (a2 / 2) + 156, 112 * (a2 & 0x80000001) + 36);
        sub_4A02E9((_DWORD*)unk_4BDC60, v2, (int)&v91, 0, unk_4B9248);
        v98 = 160 * (a2 / 2) + 115;
        v89 = yTop;
        for (m = *(_DWORD*)(thisx + 2368) == 0; m < 2; ++m)
        {
            v98 = xLeft + 19 * m + 114;
            SetRect(&v91, v98, v89, xLeft + 19 * m + 132, v89 + 16);
            v17 = unk_4B9248;
            v3 = sub_49FFEC(198, 113, 0);
            sub_4A02E9((_DWORD*)unk_4BDC60, v4, (int)&v91, v3, v17);
        }
        v98 = xLeft;
        SetRect(&v91, xLeft, yTop + 24, xLeft + 152, yTop + 104);
        sub_4A02E9((_DWORD*)unk_4BDC60, v5, (int)&v91, 0, unk_4B9248);
        v98 = xLeft + 3;
        SetRect(&v91, xLeft + 3, yTop + 56, xLeft + 28, yTop + 100);
        v18 = unk_4B9248;
        v6 = sub_49FFEC(198, 113, 0);
        sub_4A02E9((_DWORD*)unk_4BDC60, v7, (int)&v91, v6, v18);
        v84 = thisx + 244 * a2 + 1392;
        v98 = xLeft + 8;
        sub_47B91A(xLeft + 8, yTop + 4, (LPCSTR)(thisx + 244 * a2 + 1564), 0, unk_4B9248);
        v98 += 126;
        v89 = yTop;
        sub_49C15E((int)&v93);
        v83 = *(unsigned __int8*)(a2 + thisx + 2612) + 1;
        if (*(_DWORD*)(thisx + 2368))
            v98 -= 19;
        else
            v83 = 1;
        for (m = 0; m < v83; ++m)
        {
            v88 = *(unsigned __int8*)(thisx + m + 2 * a2 + 2580);
            if (v88 >= 6)
            {
                if (v88 == 6)
                {
                    v79 = (_WORD*)(84 * *(__int16*)(v84 + 236) + unk_4B92D4);
                    v94 = v98;
                    v95 = v89;
                    v96 = 1;
                    v93 = unk_4B91E0;
                    v78 = (unsigned __int16)sub_475CB0(v79);
                    SetRect(&v91, 8, 16 * v78, 16, 16);
                    sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
                    v96 = 0;
                }
            }
            else
            {
                v81 = (int*)(28 * v88 + v84);
                v87 = *v81;
                v92 = *((char*)v81 + 4);
                v85 = (char*)(36 * v87 + unk_4B92E0);
                v94 = v98;
                v95 = v89;
                sub_47900E(&v93, 1, v87, unk_4B9248);
                v94 = v98;
                v95 = v89 + 8;
                v93 = v92 + unk_4B9234;
                v97 = 8 * (m + 2 * a2) + 4952720;
                SetRect(&v91, 0, 0, 16, 8);
                sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
            }
            v98 += 19;
        }
        v88 = *(unsigned __int8*)(thisx + *(unsigned __int8*)(a2 + thisx + 2612) + 2 * a2 + 2580);
        if (v88 >= 6)
        {
            if (v88 == 6)
            {
                v25 = (char*)(84 * *(__int16*)(v84 + 236) + unk_4B92D4);
                v98 = xLeft + 4;
                v94 = xLeft + 8;
                v95 = yTop + 72;
                v93 = unk_4B91E0 + 1;
                SetRect(&v91, 0, 0, 16, 24);
                sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
                v94 = v98 - 4;
                v95 = yTop + 64;
                v93 = unk_4B91E0;
                v23 = (unsigned __int16)sub_475CB0((short*)v25);
                SetRect(&v91, 0, 16 * v23, 32, 16);
                sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
                v94 = v98 - 4;
                v95 = yTop + 76;
                v93 = unk_4B91E0 + 1;
                SetRect(&v91, 16 * a2 + 16, 0, 16, 16);
                sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
                v94 = v98 + 17;
                v95 = yTop + 76;
                v93 = unk_4B91E0 + 1;
                SetRect(&v91, 16 * a2 + 24, 0, 8, 16);
                sub_4A03B3((short*)unk_4BDC60, unk_4B9248, &v93, (_DWORD*)&v91);
                v98 = xLeft + 8;
                v20 = unk_4B9248;
                v15 = unknown_libname_18(v25);
                sub_47B91A(v98, yTop + 28, v15, 0, v20);
                v98 += 64;
                sub_47B91A(v98, yTop + 28, &unk_4B3824, 0, unk_4B9248);
                v98 = xLeft + 32;
                v89 = yTop + 44;
                for (n = 0; n < 5; ++n)
                {
                    if (sub_475CD0((_DWORD*)v25, n))
                    {
                        v21 = unk_4B9248;
                        v16 = (const CHAR*)sub_475CD0((_DWORD*)v25, n);
                        sub_47B91A(v98, 12 * n + v89, v16, 0, v21);
                    }
                }
            }
        }
        else
        {
            v81 = (int*)(28 * v88 + v84);
            v87 = *v81;
            v92 = *((char*)v81 + 4);
            v85 = (char*)(36 * v87 + unk_4B92E0);
            v98 = xLeft + 8;
            v89 = yTop + 32;
            v19 = unk_4B9248;
            v8 = unknown_libname_18(v85);
            sub_47B91A(v98, yTop + 32, v8, 0, v19);
            v98 += 56;
            v9 = sub_47075A(v81);
            sprintf(Buffer, "HP %3d/%3d", *((__int16*)v81 + 4), v9);
            sub_47B7ED(v98, yTop + 32, Buffer, 0, unk_4B9248);
            if (*(unsigned __int8*)(a2 + thisx + 2596) > 1u)
            {
                if (*(_BYTE*)(a2 + thisx + 2596) == 2)
                {
                    for (ii = 0; ii < 3; ++ii)
                    {
                        v14 = sub_4266B0(v85, ii);
                        v31[ii + 1] = v14;
                    }
                    v33 = (_BYTE*)(84 * *(__int16*)(v84 + 236) + unk_4B92D4);
                    for (ii = 0; ii < 3; ++ii)
                    {
                        v29 = sub_475090(v33, ii);
                        if (v29)
                        {
                            v31[0] = 0;
                            v28 = 0;
                            do
                            {
                                v30 = v31[v31[0] + 1];
                                if (!v30)
                                    break;
                                v28 = sub_47744C(v30, v29);
                                if (v28)
                                    break;
                                ++v31[0];
                            } while (v31[0] != 3);
                            if (v31[0] == 3)
                                break;
                            if (!v28)
                                v31[v31[0] + 1] = v29;
                        }
                    }
                    for (ii = 0; ii < 3; ++ii)
                    {
                        v26 = v31[ii + 1];
                        if (*(_BYTE*)(a2 + thisx + 13092))
                        {
                            if (ii)
                                break;
                            v26 = v31[*(unsigned __int8*)(a2 + thisx + 13092)];
                        }
                        if (v26 >= 73)
                        {
                            v27 = v26 - 128;
                            if (v27 >= 13)
                                sub_47B91A(xLeft + 32, yTop + 16 * ii + 56, &unk_4B3818, 0, unk_4B9248);
                            else
                                sub_47B91A(xLeft + 32, yTop + 16 * ii + 56, (LPCSTR)&unk_4B4E74[21 * v27], 0, unk_4B9248);
                        }
                        else
                        {
                            sub_47B91A(xLeft + 32, yTop + 16 * ii + 56, (LPCSTR)&unk_4B46C0[27 * v26], 0, unk_4B9248);
                        }
                    }
                    if (*(_BYTE*)(a2 + thisx + 13092))
                        sub_47BD8E(xLeft + 32, yTop + 72, v31[*(unsigned __int8*)(a2 + thisx + 13092)], unk_4B9248);
                }
            }
            else
            {
                *(_DWORD*)v50 = unk_4B37B4;
                v51 = unk_4B37B8;
                v52 = unk_4B37BA;
                v53 = 0;
                v54 = unk_4B37BC;
                v55 = unk_4B37C0;
                v56 = unk_4B37C4;
                v57 = unk_4B37C8;
                v58 = unk_4B37CC;
                v59 = unk_4B37D0;
                v60 = unk_4B37D4;
                v61 = unk_4B37D8;
                v62 = 0;
                v63 = unk_4B37DC;
                v64 = unk_4B37E0;
                v65 = unk_4B37E4;
                v66 = unk_4B37E8;
                v67 = unk_4B37EC;
                v68 = unk_4B37F0;
                v69 = unk_4B37F4;
                v70 = unk_4B37F8;
                v71 = unk_4B37FC;
                v72 = unk_4B3800;
                v73 = unk_4B3804;
                v74 = 0;
                v75 = unk_4B3808;
                v76 = unk_4B380C;
                v77 = unk_4B3810;
                v40 = (unsigned __int8)sub_426570(v85);
                v41 = (unsigned __int8)sub_4265D0(v85);
                v42 = (unsigned __int8)sub_4265F0(v85);
                v43 = (unsigned __int8)sub_426610(v85);
                v44 = (unsigned __int8)sub_426550(v85);
                v45 = (unsigned __int8)sub_426670(v85);
                v46 = (unsigned __int8)sub_426630(v85);
                v47 = (unsigned __int8)sub_426650(v85);
                v48 = (unsigned __int8)sub_426690(v85);
                v49 = (_BYTE*)(84 * *(__int16*)(v84 + 236) + unk_4B92D4);
                for (jj = 0; jj < 5; ++jj)
                    *(&v40 + jj) += sub_43EE02((unsigned char*)v49, jj + 1, v84);
                v10 = sub_43EE02((unsigned char*)v49, 9, v84);
                v45 += v10;
                v11 = sub_43EE02((unsigned char*)v49, 6, v84);
                v46 += v11;
                v12 = sub_43EE02((unsigned char*)v49, 7, v84);
                v47 += v12;
                v13 = sub_43EE02((unsigned char*)v49, 8, v84);
                v48 += v13;
                switch (v92)
                {
                case 0:
                    v40 += 5;
                    v41 += 5;
                    v42 += 5;
                    break;
                case 1:
                    v40 += 15;
                    break;
                case 2:
                    v41 += 15;
                    break;
                case 3:
                    v42 += 15;
                    break;
                default:
                    break;
                }
                for (jj = 0; jj < 9; ++jj)
                {
                    if (*(&v40 + jj) <= 0)
                        *(&v40 + jj) = 1;
                }
                v98 = xLeft + 32;
                v89 = yTop + 56;
                v39 = 5 * *(unsigned __int8*)(a2 + thisx + 2596);
                v38 = 4 * *(unsigned __int8*)(a2 + thisx + 2596) + 5;
                v36 = 0;
                for (jj = v39; jj < v38; ++jj)
                {
                    v35 = ((v36 % 2) << 6) + v98;
                    v34 = 16 * (v36 / 2) + v89;
                    sub_47B91A(v35, v34, &v50[9 * jj], 0, unk_4B9248);
                    wsprintfA(Buffer, "%3d", *(&v40 + jj));
                    sub_47B7ED(v35 + 32, v34, Buffer, 0, unk_4B9248);
                    ++v36;
                }
            }
        }
    }
}
