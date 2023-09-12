#include "sub.h" 
void sub_46B8AE(_BYTE* thisx, int a2)
{
    int v2; // edx
    int v3; // eax
    int v4; // edx
    int v5; // eax
    int v6; // edx
    char* v7; // eax
    char* v8; // eax
    const CHAR* v9; // eax
    int v10; // eax
    int v11; // eax
    int v12; // edx
    int v13; // eax
    int v14; // [esp-4h] [ebp-228h]
    int v15; // [esp-4h] [ebp-228h]
    int v16; // [esp-4h] [ebp-228h]
    int v17; // [esp-4h] [ebp-228h]
    int v18; // [esp-4h] [ebp-228h]
    int v19; // [esp-4h] [ebp-228h]
    int v20; // [esp-4h] [ebp-228h]
    int v21; // [esp-4h] [ebp-228h]
    int v23; // [esp+8h] [ebp-21Ch]
    _WORD* v24; // [esp+Ch] [ebp-218h]
    int v25; // [esp+10h] [ebp-214h]
    int v26; // [esp+14h] [ebp-210h]
    int v27; // [esp+1Ch] [ebp-208h]
    int v28; // [esp+20h] [ebp-204h]
    int v29; // [esp+24h] [ebp-200h]
    int v30; // [esp+28h] [ebp-1FCh]
    int v31; // [esp+2Ch] [ebp-1F8h]
    int v32; // [esp+38h] [ebp-1ECh]
    int v33; // [esp+3Ch] [ebp-1E8h]
    int v34; // [esp+40h] [ebp-1E4h]
    CHAR v35[64]; // [esp+44h] [ebp-1E0h] BYREF
    int v36; // [esp+84h] [ebp-1A0h]
    int v37; // [esp+88h] [ebp-19Ch]
    int m; // [esp+8Ch] [ebp-198h]
    char* v39; // [esp+90h] [ebp-194h]
    int v40; // [esp+94h] [ebp-190h]
    int v41; // [esp+98h] [ebp-18Ch]
    int n; // [esp+9Ch] [ebp-188h]
    int v43; // [esp+A0h] [ebp-184h]
    int v44; // [esp+A4h] [ebp-180h]
    int ii; // [esp+A8h] [ebp-17Ch]
    int v46; // [esp+ACh] [ebp-178h]
    int v47; // [esp+B0h] [ebp-174h]
    int v48; // [esp+B4h] [ebp-170h]
    int v49; // [esp+B8h] [ebp-16Ch]
    int v50; // [esp+BCh] [ebp-168h]
    int v51; // [esp+C0h] [ebp-164h]
    int v52; // [esp+C4h] [ebp-160h]
    int v53; // [esp+C8h] [ebp-15Ch]
    int v54; // [esp+CCh] [ebp-158h]
    int v55; // [esp+D0h] [ebp-154h]
    CHAR v56[4]; // [esp+D4h] [ebp-150h] BYREF
    char v57; // [esp+D8h] [ebp-14Ch]
    int v58; // [esp+D9h] [ebp-14Bh]
    int v59; // [esp+DDh] [ebp-147h]
    int v60; // [esp+E1h] [ebp-143h]
    char v61; // [esp+E5h] [ebp-13Fh]
    int v62; // [esp+E6h] [ebp-13Eh]
    __int16 v63; // [esp+EAh] [ebp-13Ah]
    char v64; // [esp+ECh] [ebp-138h]
    __int16 v65; // [esp+EDh] [ebp-137h]
    int v66; // [esp+EFh] [ebp-135h]
    int v67; // [esp+F3h] [ebp-131h]
    char v68; // [esp+F7h] [ebp-12Dh]
    int v69; // [esp+F8h] [ebp-12Ch]
    char v70; // [esp+FCh] [ebp-128h]
    int v71; // [esp+FDh] [ebp-127h]
    int v72; // [esp+101h] [ebp-123h]
    int v73; // [esp+105h] [ebp-11Fh]
    char v74; // [esp+109h] [ebp-11Bh]
    int v75; // [esp+10Ah] [ebp-11Ah]
    int v76; // [esp+10Eh] [ebp-116h]
    char v77; // [esp+112h] [ebp-112h]
    int v78; // [esp+113h] [ebp-111h]
    int v79; // [esp+117h] [ebp-10Dh]
    char v80; // [esp+11Bh] [ebp-109h]
    int v81; // [esp+11Ch] [ebp-108h]
    char v82; // [esp+120h] [ebp-104h]
    int v83; // [esp+121h] [ebp-103h]
    int v84; // [esp+125h] [ebp-FFh]
    int v85; // [esp+129h] [ebp-FBh]
    char v86; // [esp+12Dh] [ebp-F7h]
    unsigned __int16* v87; // [esp+130h] [ebp-F4h]
    int v88; // [esp+134h] [ebp-F0h]
    int v89; // [esp+138h] [ebp-ECh]
    char* v90; // [esp+13Ch] [ebp-E8h]
    CHAR String[32]; // [esp+140h] [ebp-E4h] BYREF
    int v92; // [esp+160h] [ebp-C4h]
    int v93; // [esp+164h] [ebp-C0h]
    int v94; // [esp+168h] [ebp-BCh]
    int yTop; // [esp+16Ch] [ebp-B8h]
    int v96; // [esp+170h] [ebp-B4h]
    int xLeft; // [esp+174h] [ebp-B0h]
    int v98; // [esp+178h] [ebp-ACh]
    int jj; // [esp+17Ch] [ebp-A8h]
    int v100; // [esp+180h] [ebp-A4h]
    struct tagRECT rc; // [esp+184h] [ebp-A0h] BYREF
    int v102; // [esp+194h] [ebp-90h] BYREF
    int v103; // [esp+198h] [ebp-8Ch]
    int v104; // [esp+19Ch] [ebp-88h]
    int v105; // [esp+1ACh] [ebp-78h]
    int v106; // [esp+1CCh] [ebp-58h]
    int j; // [esp+1D0h] [ebp-54h]
    int k; // [esp+1D4h] [ebp-50h]
    int i; // [esp+1D8h] [ebp-4Ch]
    int v110; // [esp+1ECh] [ebp-38h] BYREF
    int v111; // [esp+1F0h] [ebp-34h]
    int v112; // [esp+1F4h] [ebp-30h]

    if (a2 == -1)
    {
        sub_49C15E((int)&v110);
        v110 = dword_4B91F8;
        for (i = 0; i < 31; ++i)
        {
            v111 = 8 * ((i + 1) % 5) - 40;
            v112 = 8 * i - 4;
            for (j = 0; j < 9; ++j)
            {
                sub_49CC5B((short*)byte_4BDC60, dword_4B9248, &v110);
                v111 += 40;
            }
        }
        for (k = 0; k < 4; ++k)
            sub_46B8AE(thisx, k);
    }
    else
    {
        xLeft = 160 * (a2 / 2) + 4;
        yTop = 120 * (a2 % 2) + 4;
        SetRect(&rc, xLeft, yTop, 160 * (a2 / 2) + 125, 120 * (a2 % 2) + 23);
        sub_4A02E9((_DWORD*)byte_4BDC60, dword_4B9248, (int)&rc, 0, dword_4B9248);
        SetRect(&rc, 160 * (a2 / 2) + 135, yTop, 160 * (a2 / 2) + 156, 120 * (a2 % 2) + 23);
        sub_4A02E9((_DWORD*)byte_4BDC60, v2, (int)&rc, 0, dword_4B9248);
        SetRect(&rc, xLeft, 120 * (a2 % 2) + 28, 160 * (a2 / 2) + 156, 120 * (a2 % 2) + 116);
        sub_4A02E9((_DWORD*)byte_4BDC60, (int)&rc, (int)&rc, 0, dword_4B9248);
        sub_49C15E((int)&v102);
        v100 = (unsigned __int8)thisx[a2 + 2584];
        v96 = (unsigned __int8)thisx[a2 + 2600];
        v106 = 20 * v96 + xLeft;
        if (v96 == 6)
            v106 += 11;
        if (v100 != 3 && v96 <= 6)
        {
            SetRect(&rc, v106, yTop, v106 + 21, yTop + 19);
            v14 = dword_4B9248;
            v3 = sub_49FFEC(255, 255, 255);
            sub_4A02E9((_DWORD*)byte_4BDC60, v4, (int)&rc, v3, v14);
            SetRect(&rc, v106 + 1, yTop + 1, v106 + 20, yTop + 18);
            sub_4A02E9((_DWORD*)byte_4BDC60, (int)&rc, (int)&rc, 0, dword_4B9248);
        }
        if (v100)
        {
            switch (v100)
            {
            case 1:
            case 4:
                v94 = *(unsigned __int16*)&thisx[2 * a2 + 2564];
                if (v100 == 4 && v96 <= 6)
                {
                    if (v96 >= 6)
                        v94 = -(*(__int16*)&thisx[244 * a2 + 1628] + 2);
                    else
                        v94 = -(*(_DWORD*)&thisx[244 * a2 + 1392 + 28 * v96] + 2);
                }
                if (v94 >= 0 || v96 == 7)
                {
                    v106 = xLeft + 2;
                    v93 = yTop + 46;
                    if (v96 <= 6)
                    {
                        SetRect(&rc, v106, v93, v106 + 28, v93 + 40);
                        v15 = dword_4B9248;
                        v5 = sub_49FFEC(198, 113, 0);
                        sub_4A02E9((_DWORD*)byte_4BDC60, v6, (int)&rc, v5, v15);
                    }
                    v106 += 2;
                    v93 += 6;
                    if (v96 >= 6)
                    {
                        if (v96 == 6)
                        {
                            v39 = (char*)(84 * v94 + dword_4B92D4);
                            v103 = v106 + 4;
                            v104 = v93 + 8;
                            v102 = dword_4B91E0 + 1;
                            SetRect(&rc, 0, 0, 16, 24);
                            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                            v103 = v106 - 4;
                            v104 = v93;
                            v102 = dword_4B91E0;
                            v37 = (unsigned __int16)sub_475CB0((short*)v39);
                            SetRect(&rc, 0, 16 * v37, 32, 16);
                            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                            v103 = v106 - 2;
                            v104 = v93 + 12;
                            v102 = dword_4B91E0 + 1;
                            SetRect(&rc, 16 * a2 + 18, 0, 14, 16);
                            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                            v103 = v106 + 17;
                            v104 = v93 + 12;
                            v102 = dword_4B91E0 + 1;
                            SetRect(&rc, 16 * a2 + 24, 0, 8, 16);
                            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                            if (!thisx[81] && sub_46D516((__int16*)thisx + 696, v94, -1))
                            {
                                v103 = v106;
                                v104 = v93 + 4;
                                v102 = dword_4B91E0 + 1;
                                SetRect(&rc, 16, 24, 24, 24);
                                sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                            }
                            v106 = xLeft + 8;
                            v17 = dword_4B9248;
                            v8 = unknown_libname_18(v39);
                            sub_47B91A(v106, yTop + 28, v8, 0, v17);
                            sub_47B91A(v106 + 56, yTop + 28, &byte_4B35C0, 0, dword_4B9248);
                            v106 = xLeft + 32;
                            v93 = yTop + 44;
                            for (m = 0; m < 5; ++m)
                            {
                                if (sub_475CD0((_DWORD*)v39, m))
                                {
                                    v18 = dword_4B9248;
                                    v9 = (const CHAR*)sub_475CD0((_DWORD*)v39, m);
                                    sub_47B91A(v106, v93, v9, 0, v18);
                                }
                                v93 += 14;
                            }
                        }
                        else if (v96 == 7)
                        {
                            v106 = xLeft + 8;
                            sub_47B91A(xLeft + 8, yTop + 32, &byte_4B35D0, 0, dword_4B9248);
                            sub_47B91A(v106, yTop + 48, asc_4B35F0, 0, dword_4B9248);
                            sub_47B91A(v106, yTop + 64, asc_4B3608, 0, dword_4B9248);
                            v93 = yTop + 80;
                            sub_47B91A(v106 + 16, yTop + 84, &thisx[244 * a2 + 1564], 0, dword_4B9248);
                        }
                    }
                    else
                    {
                        v103 = v106 + 4;
                        v104 = v93;
                        sub_47900E(&v102, 1, v94, dword_4B9248);
                        v103 = v106;
                        v104 = v93 + 8;
                        v88 = a2;
                        v89 = (unsigned __int8)sub_401710((_BYTE*)(36 * v94 + dword_4B92E0));
                        v87 = (unsigned short*)word_4B9290;
                        sub_4A1307((int)word_4B9290, (Concurrency::details::HardwareAffinity*)(8 * a2 + 4952656));
                        sub_485E5A((int)dword_4B93A4 + 24 * v89, (unsigned short*)word_4B9290);
                        v92 = (unsigned __int8)thisx[a2 + 2580];
                        if (v100 == 4)
                            v92 = (char)thisx[244 * a2 + 1396 + 28 * v96];
                        SetRect(&rc, 24 * v92, 0, 24, 24);
                        v102 = dword_4B9234;
                        sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                        if (!thisx[81] && *((_BYTE*)dword_4B92DC + v94))
                        {
                            v103 = v106;
                            v104 = v93 + 4;
                            v102 = dword_4B91E0 + 1;
                            SetRect(&rc, 16, 24, 24, 24);
                            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                        }
                        v106 = xLeft + 8;
                        v93 = yTop + 28;
                        v90 = (char*)(36 * v94 + dword_4B92E0);
                        v16 = dword_4B9248;
                        v7 = unknown_libname_18(v90);
                        sub_47B91A(v106, yTop + 28, v7, 0, v16);
                        v106 += 56;
                        sub_47B91A(v106, yTop + 28, (LPCSTR)&byte_4B4664[18 * v92], 0, dword_4B9248);
                        if (thisx[a2 + 2596])
                        {
                            for (n = 0; n < 3; ++n)
                            {
                                v41 = (unsigned __int8)sub_4266B0(v90, n);
                                if (thisx[a2 + 13092])
                                {
                                    if (n)
                                        break;
                                    v41 = (unsigned __int8)sub_4266B0(v90, (unsigned __int8)thisx[a2 + 13092] - 1);
                                }
                                if (v41 >= 73)
                                {
                                    v41 -= 128;
                                    if (v41 >= 13)
                                        sub_47B91A(xLeft + 32, yTop + 16 * n + 44, &byte_4B35B4, 0, dword_4B9248);
                                    else
                                        sub_47B91A(xLeft + 32, yTop + 16 * n + 44, (LPCSTR)&byte_4B4E74[21 * v41], 0, dword_4B9248);
                                }
                                else
                                {
                                    sub_47B91A(xLeft + 32, yTop + 16 * n + 44, (LPCSTR)&byte_4B46C0[27 * v41], 0, dword_4B9248);
                                }
                            }
                            if (thisx[a2 + 13092])
                            {
                                v40 = (unsigned __int8)sub_4266B0(v90, (unsigned __int8)thisx[a2 + 13092] - 1);
                                sub_47BD8E(xLeft + 32, yTop + 60, v40, dword_4B9248);
                            }
                        }
                        else
                        {
                            *(_DWORD*)v56 = dword_4B3548;
                            v57 = byte_4B354C;
                            v58 = 0;
                            v59 = dword_4B3550;
                            v60 = dword_4B3554;
                            v61 = byte_4B3558;
                            v62 = dword_4B355C;
                            v63 = word_4B3560;
                            v64 = byte_4B3562;
                            v65 = 0;
                            v66 = dword_4B3564;
                            v67 = dword_4B3568;
                            v68 = byte_4B356C;
                            v69 = dword_4B3570;
                            v70 = byte_4B3574;
                            v71 = 0;
                            v72 = dword_4B3578;
                            v73 = dword_4B357C;
                            v74 = byte_4B3580;
                            v75 = dword_4B3584;
                            v76 = dword_4B3588;
                            v77 = byte_4B358C;
                            v78 = dword_4B3590;
                            v79 = dword_4B3594;
                            v80 = byte_4B3598;
                            v81 = dword_4B359C;
                            v82 = byte_4B35A0;
                            v83 = 0;
                            v84 = dword_4B35A4;
                            v85 = dword_4B35A8;
                            v86 = byte_4B35AC;
                            v46 = (unsigned __int8)sub_4265B0(v90);
                            v47 = (unsigned __int8)sub_4265D0(v90);
                            v48 = (unsigned __int8)sub_426570(v90);
                            v49 = (unsigned __int8)sub_4265F0(v90);
                            v50 = (unsigned __int8)sub_426610(v90);
                            v51 = (unsigned __int8)sub_426550(v90);
                            v52 = (unsigned __int8)sub_426670(v90);
                            v53 = (unsigned __int8)sub_426630(v90);
                            v54 = (unsigned __int8)sub_426650(v90);
                            v55 = (unsigned __int8)sub_426690(v90);
                            switch (v92)
                            {
                            case 0:
                                v47 += 5;
                                v48 += 5;
                                v49 += 5;
                                break;
                            case 1:
                                v48 += 15;
                                break;
                            case 2:
                                v47 += 15;
                                break;
                            case 3:
                                v49 += 15;
                                break;
                            default:
                                break;
                            }
                            v106 = xLeft + 32;
                            v93 = yTop + 44;
                            for (ii = 0; ii < 10; ++ii)
                            {
                                v44 = ((ii % 2) << 6) + v106;
                                v43 = 14 * (ii / 2) + v93;
                                sub_47B91A(v44, v43, &v56[9 * ii], 0, dword_4B9248);
                                wsprintfA(String, "%3d", *(&v46 + ii));
                                sub_47B7ED(v44 + 32, v43, String, 0, dword_4B9248);
                            }
                        }
                    }
                }
                break;
            case 2:
                v106 = xLeft + 2;
                SetRect(&rc, xLeft + 2, yTop + 46, xLeft + 30, yTop + 86);
                v19 = dword_4B9248;
                v10 = sub_49FFEC(198, 113, 0);
                sub_4A02E9((_DWORD*)byte_4BDC60, (int)&rc, (int)&rc, v10, v19);
                v106 += 2;
                v33 = *(_DWORD*)&thisx[244 * a2 + 1392 + 28 * v96];
                v103 = v106 + 4;
                v104 = yTop + 52;
                sub_47900E(&v102, 1, v33, dword_4B9248);
                v103 = v106;
                v104 = yTop + 60;
                v32 = (unsigned __int8)sub_401710((_BYTE*)(36 * v33 + dword_4B92E0));
                sub_4A1307((int)word_4B9290, (Concurrency::details::HardwareAffinity*)(8 * a2 + 4952656));
                sub_485E5A((int)dword_4B93A4 + 24 * v32, (unsigned short*)word_4B9290);
                v36 = (char)thisx[244 * a2 + 1396 + 28 * v96];
                SetRect(&rc, 24 * v36, 0, 24, 24);
                v102 = dword_4B9234;
                sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                v106 = xLeft + 8;
                v34 = yTop + 28;
                sub_47B91A(xLeft + 8, yTop + 28, &byte_4B362C, 0, dword_4B9248);
                wsprintfA(v35, "%2d/%2d", *(unsigned __int16*)&thisx[2 * a2 + 2564] + 1, word_4B99E4);
                sub_47B7ED(v106 + 48, v34 + 16, v35, 0, dword_4B9248);
                if (sub_46D56B((__int16*)thisx + 696, *(unsigned __int16*)&thisx[2 * a2 + 2564], a2))
                {
                    sub_47B91A(v106 + 32, v34 + 32, &byte_4B3654, 0, dword_4B9248);
                    sub_47B91A(v106 + 32, v34 + 48, &byte_4B366C, 0, dword_4B9248);
                }
                break;
            case 3:
                v106 = xLeft + 36;
                sub_47B91A(xLeft + 36, yTop + 52, &byte_4B3680, 0, dword_4B9248);
                sub_47B91A(v106, yTop + 68, &byte_4B3698, 0, dword_4B9248);
                break;
            }
        }
        else
        {
            sub_47B91A(xLeft + 24, yTop + 44, &byte_4B351C, 0, dword_4B9248);
            sub_47B91A(xLeft + 72, yTop + 60, &byte_4B3538, 0, dword_4B9248);
            sub_47B91A(xLeft + 72, yTop + 76, &byte_4B3540, 0, dword_4B9248);
        }
        for (jj = 0; jj < 6; ++jj)
        {
            v28 = *(_DWORD*)&thisx[244 * a2 + 1392 + 28 * jj];
            v30 = (char)thisx[244 * a2 + 1396 + 28 * jj];
            if (v28 < -1)
                v28 = -(v28 + 2);
            if (v28 >= 0 && v28 < (int)Size && v30 >= 0)
            {
                v31 = xLeft + 20 * jj + 1;
                v29 = yTop + 1;
                SetRect(&rc, v31, yTop + 1, xLeft + 20 * jj + 20, yTop + 18);
                v20 = dword_4B9248;
                v11 = sub_49FFEC(198, 113, 0);
                sub_4A02E9((_DWORD*)byte_4BDC60, v12, (int)&rc, v11, v20);
                v103 = v31 + 3;
                v104 = v29 + 1;
                sub_47900E(&v102, 1, v28, dword_4B9248);
                v103 = v31;
                v104 = v29 + 9;
                v27 = (unsigned __int8)sub_401710((_BYTE*)(36 * v28 + dword_4B92E0));
                sub_4A1307((int)word_4B9290, (Concurrency::details::HardwareAffinity*)(8 * a2 + 4952656));
                sub_485E5A((int)dword_4B93A4 + 24 * v27, (unsigned short*)word_4B9290);
                SetRect(&rc, 24 * v30 + 1, 0, 19, 8);
                v102 = dword_4B9234;
                sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                if (!thisx[81])
                {
                    if (sub_46D48E((_DWORD*)thisx + 348, v28, a2, jj))
                    {
                        v103 = v31 + 1;
                        v104 = v29 + 1;
                        v102 = dword_4B91E0 + 1;
                        SetRect(&rc, 0, 24, 16, 16);
                        sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                    }
                }
            }
        }
        v98 = *(__int16*)&thisx[244 * a2 + 1628];
        if (v98 < -1)
            v98 = -(v98 + 2);
        if (v98 >= 0)
        {
            v24 = (_WORD*)(84 * v98 + dword_4B92D4);
            v26 = xLeft + 132;
            v25 = yTop + 1;
            SetRect(&rc, xLeft + 132, yTop + 1, xLeft + 151, yTop + 18);
            v21 = dword_4B9248;
            v13 = sub_49FFEC(198, 113, 0);
            sub_4A02E9((_DWORD*)byte_4BDC60, (int)&rc, (int)&rc, v13, v21);
            v103 = v26 + 1;
            v104 = v25 + 8;
            v105 = 1;
            v102 = dword_4B91E0 + 1;
            SetRect(&rc, 0, 0, 16, 9);
            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
            v103 = v26;
            v104 = v25;
            v105 = 1;
            v102 = dword_4B91E0;
            v23 = (unsigned __int16)sub_475CB0(v24);
            SetRect(&rc, 6, 16 * v23, 19, 16);
            sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
            if (!thisx[81])
            {
                if (sub_46D516((__int16*)thisx + 696, v98, a2))
                {
                    v103 = v26 + 1;
                    v104 = v25 + 1;
                    v102 = dword_4B91E0 + 1;
                    SetRect(&rc, 0, 24, 16, 16);
                    sub_4A03B3((short*)byte_4BDC60, dword_4B9248, &v102, (_DWORD*)&rc);
                }
            }
        }
    }
}

