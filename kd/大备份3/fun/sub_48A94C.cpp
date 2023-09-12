#include "sub.h" 
void sub_48A94C(int thisx, _BYTE* a2, int a3)
{
    int* v3; // esi
    _DWORD* v4; // esi
    _DWORD* v5; // esi
    int v6; // eax
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // eax
    const CHAR* v11; // eax
    int v12; // eax
    const CHAR* v13; // eax
    int v14; // eax
    const CHAR* v15; // eax
    int v16; // eax
    int v17; // eax
    int v18; // esi
    int v19; // eax
    const CHAR* v20; // eax
    int v21; // esi
    int v22; // esi
    unsigned __int8 v23; // al
    char v24; // al
    char* v25; // eax
    int v26; // esi
    int v27; // edi
    unsigned __int16 v28; // ax
    int v29; // eax
    const CHAR* v30; // eax
    int v31; // [esp-Ch] [ebp-1E4h]
    int v32; // [esp-8h] [ebp-1E0h]
    int v33; // [esp-8h] [ebp-1E0h]
    unsigned __int8 v34; // [esp-8h] [ebp-1E0h]
    int v35; // [esp-4h] [ebp-1DCh]
    int v36; // [esp-4h] [ebp-1DCh]
    unsigned __int8 v37; // [esp-4h] [ebp-1DCh]
    int v38; // [esp-4h] [ebp-1DCh]
    int v39; // [esp+10h] [ebp-1C8h]
    char* v41; // [esp+20h] [ebp-1B8h]
    int jj; // [esp+24h] [ebp-1B4h]
    int v43; // [esp+28h] [ebp-1B0h]
    int v44; // [esp+2Ch] [ebp-1ACh]
    int v45; // [esp+34h] [ebp-1A4h]
    int ii; // [esp+38h] [ebp-1A0h]
    int v47; // [esp+3Ch] [ebp-19Ch]
    Concurrency::details::_UnrealizedChore* v48; // [esp+40h] [ebp-198h]
    int v49; // [esp+44h] [ebp-194h]
    int v50; // [esp+48h] [ebp-190h]
    int v51; // [esp+48h] [ebp-190h]
    int RuntimeOwnsLifetime; // [esp+4Ch] [ebp-18Ch]
    int n; // [esp+50h] [ebp-188h]
    int m; // [esp+54h] [ebp-184h]
    int v55; // [esp+58h] [ebp-180h]
    char* v56; // [esp+5Ch] [ebp-17Ch]
    int v57; // [esp+60h] [ebp-178h]
    int v58; // [esp+64h] [ebp-174h]
    int v59; // [esp+68h] [ebp-170h]
    int k; // [esp+6Ch] [ebp-16Ch]
    int v61; // [esp+70h] [ebp-168h]
    int v62; // [esp+74h] [ebp-164h]
    int v63; // [esp+78h] [ebp-160h]
    char* v64; // [esp+7Ch] [ebp-15Ch]
    int v65; // [esp+80h] [ebp-158h]
    int v66; // [esp+84h] [ebp-154h]
    int v67; // [esp+88h] [ebp-150h]
    char* v68; // [esp+8Ch] [ebp-14Ch]
    int v69; // [esp+90h] [ebp-148h]
    int v70; // [esp+94h] [ebp-144h]
    int v71; // [esp+98h] [ebp-140h]
    int v72; // [esp+9Ch] [ebp-13Ch]
    int v73; // [esp+A4h] [ebp-134h]
    int v74; // [esp+A8h] [ebp-130h]
    int v75; // [esp+ACh] [ebp-12Ch]
    int v76; // [esp+B0h] [ebp-128h]
    int v77; // [esp+B4h] [ebp-124h]
    int v78; // [esp+B8h] [ebp-120h]
    int v79; // [esp+BCh] [ebp-11Ch]
    int v80; // [esp+C0h] [ebp-118h]
    int v81; // [esp+C4h] [ebp-114h]
    int v82; // [esp+C8h] [ebp-110h] BYREF
    int v83; // [esp+CCh] [ebp-10Ch]
    char v84; // [esp+D0h] [ebp-108h]
    int v85; // [esp+DCh] [ebp-FCh]
    char* v86; // [esp+E0h] [ebp-F8h]
    char* v87; // [esp+E4h] [ebp-F4h]
    int v88; // [esp+E8h] [ebp-F0h]
    int v89; // [esp+ECh] [ebp-ECh]
    int v90; // [esp+F0h] [ebp-E8h]
    int v91; // [esp+F4h] [ebp-E4h]
    int v92; // [esp+F8h] [ebp-E0h]
    int v93; // [esp+FCh] [ebp-DCh]
    BOOL v94; // [esp+100h] [ebp-D8h]
    int v95; // [esp+104h] [ebp-D4h]
    int v96; // [esp+108h] [ebp-D0h]
    char* v97; // [esp+10Ch] [ebp-CCh]
    int v98; // [esp+110h] [ebp-C8h]
    int v99; // [esp+114h] [ebp-C4h]
    char v100; // [esp+118h] [ebp-C0h]
    int v101; // [esp+11Ch] [ebp-BCh]
    int v102; // [esp+120h] [ebp-B8h]
    int* v103; // [esp+124h] [ebp-B4h]
    char* v104; // [esp+128h] [ebp-B0h]
    int v105; // [esp+12Ch] [ebp-ACh]
    int v106; // [esp+130h] [ebp-A8h]
    int v107; // [esp+134h] [ebp-A4h]
    int v108; // [esp+138h] [ebp-A0h]
    int v109; // [esp+13Ch] [ebp-9Ch]
    char* v110; // [esp+140h] [ebp-98h]
    int v111; // [esp+144h] [ebp-94h]
    int v112; // [esp+148h] [ebp-90h]
    int v113; // [esp+14Ch] [ebp-8Ch]
    int v114; // [esp+150h] [ebp-88h]
    char* v115; // [esp+154h] [ebp-84h]
    int* v116; // [esp+158h] [ebp-80h]
    char* v117; // [esp+15Ch] [ebp-7Ch]
    char* v118; // [esp+160h] [ebp-78h]
    int v119; // [esp+164h] [ebp-74h]
    int v120; // [esp+168h] [ebp-70h]
    struct tagRECT rc; // [esp+16Ch] [ebp-6Ch] BYREF
    char* v122; // [esp+17Ch] [ebp-5Ch]
    char v123; // [esp+180h] [ebp-58h]
    char v124; // [esp+184h] [ebp-54h]
    char v125; // [esp+188h] [ebp-50h]
    int v126; // [esp+18Ch] [ebp-4Ch]
    int j; // [esp+190h] [ebp-48h]
    char v128; // [esp+194h] [ebp-44h]
    char v129; // [esp+195h] [ebp-43h]
    char v130; // [esp+196h] [ebp-42h]
    char v131; // [esp+197h] [ebp-41h]
    char v132; // [esp+198h] [ebp-40h]
    char v133; // [esp+199h] [ebp-3Fh]
    char v134; // [esp+19Ah] [ebp-3Eh]
    int i; // [esp+19Ch] [ebp-3Ch]
    int v136[6]; // [esp+1A0h] [ebp-38h]
    int v137; // [esp+1B8h] [ebp-20h]
    int v138; // [esp+1BCh] [ebp-1Ch]
    int v139; // [esp+1C0h] [ebp-18h]
    int v140; // [esp+1C4h] [ebp-14h]
    int v141; // [esp+1C8h] [ebp-10h]
    int v142; // [esp+1CCh] [ebp-Ch]
    int v143; // [esp+1D0h] [ebp-8h]
    __int16* v144; // [esp+1D4h] [ebp-4h]
    int v145; // [esp+1E4h] [ebp+Ch]

    if (a2 || *(int*)(thisx + 40) >= 0 && *(_DWORD*)(thisx + 40) < unk_4CA1D4)
    {
        if (a2)
            v144 = (__int16*)a2;
        else
            v144 = (__int16*)(50 * *(_DWORD*)(thisx + 40) + unk_4CA1D8);
        LOBYTE(v142) = *(_BYTE*)v144;
        v143 = 1;
        switch ((unsigned __int8)v142)
        {
        case 1u:
            *(_DWORD*)(thisx + 44) = sub_48A4E3(v144, 0);
            *(_WORD*)(thisx + 10) = sub_48A4E3(v144, 1u);
            v143 = 0;
            break;
        case 2u:
            v138 = sub_48A4E3(v144, 0);
            v137 = sub_48A4E3(v144, 1u);
            v139 = sub_48A4E3(v144, 2u);
            v140 = sub_48A4E3(v144, 3u);
            v141 = sub_48A4E3(v144, 4u);
            sub_45612D((_DWORD*)unk_4B9B10, v138, v137, v139, v140, v141);
            break;
        case 3u:
            v136[0] = thisx + 116;
            v136[1] = thisx + 120;
            v136[2] = thisx + 124;
            v136[3] = thisx + 128;
            v136[4] = thisx + 132;
            v136[5] = thisx + 136;
            for (i = 0; i < 6; ++i)
            {
                if (sub_48A4E3(v144, 2 * i) == 1)
                {
                    *(_DWORD*)v136[i] = sub_48A4E3(v144, 2 * i + 1);
                }
                else if (sub_48A4E3(v144, 2 * i) == 2)
                {
                    v3 = (int*)v136[i];
                    *v3 = *v3 * sub_48A4E3(v144, 2 * i + 1) / 100;
                }
                else if (sub_48A4E3(v144, 2 * i) == 3)
                {
                    v4 = (_DWORD*)v136[i];
                    *v4 += sub_48A4E3(v144, 2 * i + 1);
                }
                else if (sub_48A4E3(v144, 2 * i) == 4)
                {
                    v5 = (_DWORD*)v136[i];
                    *v5 *= sub_48A4E3(v144, 2 * i + 1);
                }
                else if (sub_48A4E3(v144, 2 * i) == 5)
                {
                    if (i && i != 3)
                    {
                        *(_DWORD*)v136[i] = sub_48A4E3(v144, 2 * i + 1);
                    }
                    else
                    {
                        *(_DWORD*)v136[i] = sub_48A4E3(v144, 2 * i + 1);
                        if (*(_DWORD*)(thisx + 52))
                            *(_DWORD*)v136[i] = -sub_48A4E3(v144, 2 * i + 1);
                    }
                }
            }
            break;
        case 4u:
            if (sub_48A4E3(v144, 0) || sub_48A4E3(v144, 1u))
            {
                v128 = 0;
                v129 = 5;
                v130 = 1;
                v131 = 2;
                v132 = 3;
                v133 = 4;
                v134 = 6;
                for (j = 0; j < 8; ++j)
                {
                    v126 = sub_48A4E3(v144, 2 * j);
                    if (v126 > 0 && v126 <= 7)
                    {
                        *(_BYTE*)(thisx + 8 * v126 + 160) = v126;
                        *(_DWORD*)(thisx + 8 * v126 + 164) = sub_48A4E3(v144, 2 * j + 1);
                    }
                }
            }
            else
            {
                sub_48E02B((_DWORD*)thisx);
            }
            break;
        case 8u:
            v123 = sub_48A4E3(v144, 0);
            v125 = sub_48A4E3(v144, 1u);
            v124 = sub_48A4E3(v144, 2u);
            v122 = sub_426210((char*)unk_4B9B10);
            if (v122)
            {
                v6 = unknown_libname_10((_DWORD*)v122);
                v119 = v6;
                LOBYTE(v6) = v124;
                LOBYTE(v7) = v125;
                LOBYTE(v8) = v123;
                v120 = sub_49FFEC(v8, v7, v6);
                v35 = sub_48A4E3(v144, 6u);
                v32 = sub_48A4E3(v144, 5u);
                v31 = sub_48A4E3(v144, 4u);
                v9 = sub_48A4E3(v144, 3u);
                SetRect(&rc, v9, v31, v32, v35);
                if (rc.top || rc.left || rc.bottom || rc.right)
                    sub_4A02E9((_DWORD*)unk_4BDC60, (int)&rc, (int)&rc, v120, v119);
                else
                    sub_4A02E9((_DWORD*)unk_4BDC60, v120, 0, v120, v119);
            }
            break;
        case 9u:
            if (sub_48A4E3(v144, 0) == -1)
            {
                sub_440B78(unk_4BDB28);
            }
            else
            {
                v118 = sub_426210((char*)unk_4B9B10);
                if (v118)
                {
                    v33 = sub_48A4E3(v144, 1u);
                    v10 = sub_48A4E3(v144, 0);
                    v11 = (const CHAR*)sub_4893BC((_DWORD*)v118, v10);
                    sub_456D33((char*)unk_4B9B10, v11, v33, 0);
                }
            }
            break;
        case 0xAu:
            v117 = sub_426210((char*)unk_4B9B10);
            if (v117)
            {
                v12 = sub_48A4E3(v144, 0);
                v13 = (const CHAR*)sub_4893BC((_DWORD*)v117, v12);
                sub_48941E((_DWORD*)v117, v13);
            }
            break;
        case 0xBu:
            *(_DWORD*)(thisx + 156) = *(_DWORD*)(thisx + 40);
            *(_DWORD*)(thisx + 40) = sub_48A4E3(v144, 0);
            *(_DWORD*)(thisx + 160) = *(_DWORD*)(thisx + 40);
            *(_BYTE*)(thisx + 148) = sub_48A4E3(v144, 1u);
            *(_DWORD*)(thisx + 152) = sub_48A4E3(v144, 2u);
            sub_48A94C(thisx, 0, 1);
            v143 = 0;
            break;
        case 0xCu:
            *(_DWORD*)(thisx + 140) = sub_48A4E3(v144, 0);
            *(_DWORD*)(thisx + 144) = sub_48A4E3(v144, 1u);
            if (sub_48A4E3(v144, 2u) == 1)
            {
                *(_DWORD*)(thisx + 52) = *(_DWORD*)(thisx + 52) == 0;
            }
            else if (sub_48A4E3(v144, 2u) == 2)
            {
                *(_DWORD*)(thisx + 52) = 0;
            }
            else if (sub_48A4E3(v144, 2u) == 3)
            {
                *(_DWORD*)(thisx + 52) = 1;
            }
            break;
        case 0xDu:
            if (sub_48A4E3(v144, 3u))
            {
                *(_DWORD*)(thisx + 104) += 100 * sub_48A4E3(v144, 0);
                *(_DWORD*)(thisx + 108) += 100 * sub_48A4E3(v144, 1u);
                *(_DWORD*)(thisx + 112) += 100 * sub_48A4E3(v144, 2u);
            }
            else
            {
                *(_DWORD*)(thisx + 104) = 100 * sub_48A4E3(v144, 0);
                *(_DWORD*)(thisx + 108) = 100 * sub_48A4E3(v144, 1u);
                *(_DWORD*)(thisx + 112) = 100 * sub_48A4E3(v144, 2u);
            }
            break;
        case 0xEu:
            v116 = (int*)sub_48E0B0((char*)unk_4B9B10);
            if (sub_48A4E3(v144, 0) < 0)
            {
                sub_47FA81(v116);
            }
            else
            {
                v115 = sub_426210((char*)unk_4B9B10);
                v14 = sub_48A4E3(v144, 0);
                v15 = (const CHAR*)sub_4893BC((_DWORD*)v115, v14);
                sub_47F9D6((int)v116, v15, 4);
            }
            if (sub_48A4E3(v144, 1u) > 0)
            {
                *(_WORD*)(thisx + 10) = sub_48A4E3(v144, 1u);
                v143 = 0;
            }
            break;
        case 0xFu:
            v16 = sub_48A4E3(v144, 0);
            sub_48E0D0((_DWORD*)unk_4B9B10, v16);
            break;
        case 0x10u:
            v112 = sub_48A4E3(v144, 1u);
            v111 = sub_48A4E3(v144, 2u);
            v113 = sub_48A4E3(v144, 3u);
            v114 = sub_48A4E3(v144, 4u) == 1;
            if (v112 >= 0)
            {
                if (v112 >= 60)
                    v112 = 59;
            }
            else
            {
                v112 = 0;
            }
            if (!v111)
                v111 = 100;
            if (!v113)
                v113 = 100;
            if (sub_48A4E3(v144, 0))
            {
                v110 = sub_426210((char*)unk_4B9B10);
                sub_489473((_DWORD*)v110, v112, v111, v113, v114);
            }
            else
            {
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[v112], -1, v111, v113, v114);
            }
            break;
        case 0x11u:
            if (*(_DWORD*)(thisx + 40) != sub_48A4E3(v144, 0))
            {
                *(_DWORD*)(thisx + 40) = sub_48A4E3(v144, 0);
                v143 = 0;
                sub_48A94C(thisx, 0, 1);
            }
            break;
        case 0x12u:
            v107 = sub_48A4E3(v144, 0);
            v105 = sub_48A4E3(v144, 1u);
            v108 = sub_48A4E3(v144, 2u);
            v106 = sub_48A4E3(v144, 3u);
            if (v107)
            {
                v109 = 1;
            }
            else
            {
                v109 = 0;
                if (v105 == 2)
                    v107 = 1;
            }
            v104 = sub_426210((char*)unk_4B9B10);
            sub_489530((_DWORD*)v104, v107 == 0, v109 == 0, v108, v106);
            break;
        case 0x13u:
            v103 = (int*)sub_48E0B0((char*)unk_4B9B10);
            sub_47FA81(v103);
            sub_47FBA3((int)v103);
            break;
        case 0x14u:
            v100 = sub_48A4E3(v144, 0) + 1;
            v102 = sub_48A4E3(v144, 1u);
            if (v102 == -1)
                v102 = 8;
            v101 = sub_48A4E3(v144, 2u);
            sub_4573CB((int)unk_4B9B10, v100, v102, v101);
            break;
        case 0x15u:
            *(_BYTE*)(thisx + 48) = sub_48A4E3(v144, 0);
            break;
        case 0x16u:
            v98 = sub_48A4E3(v144, 0);
            v99 = sub_48A4E3(v144, 1u);
            if (v99 > 6)
            {
                if (v99 == 7)
                {
                    v18 = rand();
                    unk_4B9AEC[v98] = v18 % sub_48A4E3(v144, 2u);
                }
                else if (v99 == 8)
                {
                    v97 = sub_426210((char*)unk_4B9B10);
                    v19 = sub_48A4E3(v144, 2u);
                    v20 = (const CHAR*)sub_4893BC((_DWORD*)v97, v19);
                    unk_4B9AEC[v98] = sub_476DEE(v20);
                }
            }
            else
            {
                v36 = sub_48A4E3(v144, 1u);
                v17 = sub_48A4E3(v144, 0);
                sub_4623AC((int)unk_4B9B10, v17, v36);
            }
            break;
        case 0x17u:
            v95 = sub_48A4E3(v144, 0);
            LOBYTE(v93) = sub_48A4E3(v144, 1u);
            v96 = sub_48A4E3(v144, 2u);
            v94 = 0;
            switch ((char)v93)
            {
            case 0:
                v94 = v95 == v96;
                break;
            case 1:
                v94 = v95 != v96;
                break;
            case 2:
                v94 = v95 < v96;
                break;
            case 3:
                v94 = v95 > v96;
                break;
            case 4:
                v94 = v95 <= v96;
                break;
            case 5:
                v94 = v95 >= v96;
                break;
            default:
                break;
            }
            if (v94 && *(_DWORD*)(thisx + 40) != sub_48A4E3(v144, 3u))
            {
                *(_DWORD*)(thisx + 40) = sub_48A4E3(v144, 3u);
                v143 = 0;
                sub_48A94C(thisx, 0, 1);
            }
            break;
        case 0x18u:
            LOBYTE(v92) = sub_48A4E3(v144, 0);
            v91 = sub_48A4E3(v144, 2u);
            switch (sub_48A4E3(v144, 1u))
            {
            case 0:
                unk_4B9AEC[(unsigned __int8)v92] = v91;
                break;
            case 1:
                unk_4B9AEC[(unsigned __int8)v92] += v91;
                break;
            case 2:
                unk_4B9AEC[(unsigned __int8)v92] -= v91;
                break;
            case 3:
                unk_4B9AEC[(unsigned __int8)v92] *= v91;
                break;
            case 4:
                if (!v91)
                    v91 = 1;
                unk_4B9AEC[(unsigned __int8)v92] /= v91;
                break;
            case 5:
                if (!v91)
                    v91 = 1;
                unk_4B9AEC[(unsigned __int8)v92] %= v91;
                break;
            default:
                goto LABEL_327;
            }
            break;
        case 0x19u:
            v90 = sub_48A4E3(v144, 0);
            v89 = sub_48A4E3(v144, 1u);
            v88 = sub_48A4E3(v144, 2u);
            v87 = sub_426210((char*)unk_4B9B10);
            sub_489629((_DWORD*)v87, v90, v89, v88);
            break;
        case 0x1Au:
            v85 = sub_48A4E3(v144, 0);
            v86 = sub_426210((char*)unk_4B9B10);
            sub_4896E8((_DWORD*)v86, v85, (Concurrency::details::UMSFreeVirtualProcessorRoot*)thisx);
            break;
        case 0x1Bu:
            sub_442863(&v82);
            v84 = sub_48A4E3(v144, 0);
            if (sub_48A4E3(v144, 1u))
            {
                v82 = sub_48A4E3(v144, 2u);
                v83 = sub_48A4E3(v144, 3u);
            }
            else
            {
                v21 = *(_DWORD*)(thisx + 104) / 100;
                v82 = sub_48A4E3(v144, 2u) + v21;
                v22 = *(_DWORD*)(thisx + 108) / 100;
                v83 = sub_48A4E3(v144, 3u) + v22;
            }
            sub_4561A5((char*)unk_4B9B10, (int)&v82);
            break;
        case 0x1Cu:
            *(_DWORD*)(thisx + 92) = sub_48A4E3(v144, 0);
            break;
        case 0x1Du:
            *(_BYTE*)(thisx + 86) = sub_48A4E3(v144, 0);
            break;
        case 0x1Eu:
            v79 = sub_48A4E3(v144, 0);
            v76 = 100 * sub_48A4E3(v144, 1u);
            v78 = sub_48A4E3(v144, 2u);
            v75 = 100 * sub_48A4E3(v144, 3u);
            v80 = sub_48A4E3(v144, 4u);
            v77 = 100 * sub_48A4E3(v144, 5u);
            v81 = sub_48A4E3(v144, 6u);
            if (!v81)
                v81 = 1;
            if (v79)
                *(_DWORD*)(thisx + 116) = (v76 - *(_DWORD*)(thisx + 104)) / v81;
            if (v78)
                *(_DWORD*)(thisx + 120) = (v75 - *(_DWORD*)(thisx + 108)) / v81;
            if (v80)
                *(_DWORD*)(thisx + 124) = (v77 - *(_DWORD*)(thisx + 112)) / v81;
            if (sub_48A4E3(v144, 7u))
            {
                if (v81 <= 0)
                    v39 = -v81;
                else
                    v39 = v81;
                *(_DWORD*)(thisx + 164) = v39;
            }
            break;
        case 0x1Fu:
            if (sub_48A4E3(v144, 0) == 2)
            {
                *(_DWORD*)(thisx + 52) = *(_DWORD*)(thisx + 52) == 0;
            }
            else if (sub_48A4E3(v144, 0) != 3)
            {
                *(_DWORD*)(thisx + 52) = sub_48A4E3(v144, 0) == 1;
            }
            if (sub_48A4E3(v144, 1u) == 1)
            {
                *(_DWORD*)(thisx + 56) = *(_DWORD*)(thisx + 56) == 0;
            }
            else if (sub_48A4E3(v144, 1u))
            {
                *(_DWORD*)(thisx + 56) = sub_48A4E3(v144, 1u) == 3;
            }
            if (sub_48A4E3(v144, 2u) == 1)
            {
                *(_DWORD*)(thisx + 60) = *(_DWORD*)(thisx + 60) == 0;
            }
            else if (sub_48A4E3(v144, 2u))
            {
                *(_DWORD*)(thisx + 60) = sub_48A4E3(v144, 2u) == 3;
            }
            break;
        case 0x20u:
            v73 = sub_48A4E3(v144, 0);
            if (v73 < 0)
                v73 = *(char*)(thisx + 86);
            v74 = sub_48A4E3(v144, 1u);
            if (v73 >= 0 && v74 >= 0 && v74 <= 255)
            {
                v37 = sub_48A4E3(v144, 4u);
                v34 = sub_48A4E3(v144, 3u);
                v23 = sub_48A4E3(v144, 2u);
                sub_4A0B26((unsigned __int16*)(8 * v73 + 4952720), v74, v23, v34, v37);
            }
            break;
        case 0x21u:
            v71 = sub_48A4E3(v144, 0);
            v70 = sub_48A4E3(v144, 1u);
            v72 = sub_48A4E3(v144, 2u);
            if (v72 <= 0)
                v72 = 1;
            v69 = *(_DWORD*)(thisx + 40) + 1;
            if (v69 < unk_4CA1D4)
            {
                v68 = sub_426210((char*)unk_4B9B10);
                sub_489B1D((_DWORD*)v68, v71, v70, (char*)(50 * v69 + unk_4CA1D8), v72);
            }
            ++* (_DWORD*)(thisx + 40);
            break;
        case 0x22u:
            v64 = sub_426210((char*)unk_4B9B10);
            v67 = unknown_libname_11((_DWORD*)v64);
            v66 = sub_48A4E3(v144, 0);
            v65 = sub_48A4E3(v144, 1u);
            if (v66 == 1)
            {
                sub_486947((int*)v64, v65, 0);
            }
            else if (v66 == 2)
            {
                sub_486947((int*)v64, v65 + v67 + 160, 0);
            }
            break;
        case 0x23u:
            v63 = sub_48A4E3(v144, 0);
            v62 = sub_48A4E3(v144, 1u);
            if (v63 > 0)
            {
                if (v63 == 3)
                    *(_DWORD*)(thisx + 64) = *(_DWORD*)(thisx + 64) == 0;
                else
                    *(_DWORD*)(thisx + 64) = v63 == 1;
            }
            if (v62 > 0)
            {
                if (v62 == 3)
                    *(_DWORD*)(thisx + 68) = *(_DWORD*)(thisx + 68) == 0;
                else
                    *(_DWORD*)(thisx + 68) = v62 == 1;
            }
            break;
        case 0x24u:
            if (sub_48A4E3(v144, 0))
                *(_WORD*)(thisx + 72) = sub_48A4E3(v144, 1u);
            if (sub_48A4E3(v144, 2u))
                *(_WORD*)(thisx + 74) = sub_48A4E3(v144, 3u);
            break;
        case 0x25u:
            *(_BYTE*)(thisx + 84) = sub_48A4E3(v144, 0);
            break;
        case 0x26u:
            *(_DWORD*)(thisx + 80) = sub_48A4E3(v144, 0);
            break;
        case 0x27u:
            v38 = sub_48A4E3(v144, 1u);
            v24 = sub_48A4E3(v144, 0);
            sub_440D69((int)unk_4BDB28, v24 + 1, v38);
            break;
        case 0x28u:
            v58 = sub_48A4E3(v144, 0);
            v57 = sub_48A4E3(v144, 1u);
            v61 = v58 + 1;
            v59 = v57 + 1;
            if (v58 == -1 && v57 == -1)
            {
                v58 = unk_4CA1E0;
                v57 = unk_4CA1E4;
                v61 = unk_4CA1E8 + 1;
                v59 = unk_4CA1EC + 1;
            }
            for (k = 0; k < 4; ++k)
            {
                v55 = sub_48A4E3(v144, 3 * k + 2);
                if (v55)
                {
                    sub_4744CC((_DWORD*)unk_4B9B10, 1);
                    v25 = sub_426210((char*)unk_4B9B10);
                    v56 = unknown_libname_20(v25);
                    for (m = v57; m < v59; ++m)
                    {
                        for (n = v58; n < v61; ++n)
                        {
                            v48 = (Concurrency::details::_UnrealizedChore*)sub_4741F8((int)unk_4B9B10, n, m);
                            if (v48)
                            {
                                sub_482A1B((int)v56, n, m, 1);
                                RuntimeOwnsLifetime = 0;
                                v49 = sub_48A4E3(v144, 3 * k + 4);
                                v50 = 0;
                                if (sub_48A4E3(v144, 3 * k + 3) == 1)
                                {
                                    switch (v55)
                                    {
                                    case 1:
                                        RuntimeOwnsLifetime = (unsigned __int8)unknown_libname_5((char*)v48);
                                        break;
                                    case 2:
                                        RuntimeOwnsLifetime = (unsigned __int8)unknown_libname_6((char*)v48);
                                        break;
                                    case 3:
                                        RuntimeOwnsLifetime = (unsigned __int8)sub_425FD0((char*)v48);
                                        break;
                                    case 4:
                                        RuntimeOwnsLifetime = (__int16)sub_426110((short*)v48);
                                        break;
                                    case 5:
                                        RuntimeOwnsLifetime = (__int16)sub_426130((short*)v48);
                                        break;
                                    case 6:
                                        RuntimeOwnsLifetime = (unsigned __int8)sub_425C30((char*)v48);
                                        break;
                                    case 7:
                                        RuntimeOwnsLifetime = sub_425C50((char*)v48);
                                        break;
                                    case 8:
                                        RuntimeOwnsLifetime = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v48);
                                        break;
                                    case 9:
                                        RuntimeOwnsLifetime = (unsigned __int8)sub_426150((char*)v48);
                                        break;
                                    case 10:
                                        RuntimeOwnsLifetime = (unsigned __int16)sub_4260F0((short*)v48);
                                        break;
                                    case 11:
                                        RuntimeOwnsLifetime = (unsigned __int8)sub_425C70((char*)v48);
                                        v50 = sub_425C90((char*)v48);
                                        break;
                                    default:
                                        break;
                                    }
                                }
                                switch (v55)
                                {
                                case 1:
                                    sub_489F80((char*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 2:
                                    sub_489FA0((char*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 3:
                                    sub_489FC0((char*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 4:
                                    sub_489FE0((short*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 5:
                                    sub_48A000((short*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 6:
                                    sub_48A020((char*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 7:
                                    sub_4822B3((char*)v48, v49 + RuntimeOwnsLifetime != 0);
                                    break;
                                case 8:
                                    _SetRuntimeOwnsLifetime(v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 9:
                                    _SetDetached(v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 10:
                                    sub_489F40((short*)v48, v49 + RuntimeOwnsLifetime);
                                    break;
                                case 11:
                                    if (v50)
                                        v51 = v49 / -10 == 0;
                                    else
                                        v51 = v49 / 10;
                                    sub_482AE0((char*)v48, v49 % 10 + RuntimeOwnsLifetime);
                                    sub_482B1C((char*)v48, v51);
                                    break;
                                default:
                                    continue;
                                }
                            }
                        }
                    }
                }
            }
            break;
        case 0x29u:
            unk_4CA1E0 = sub_48A4E3(v144, 0);
            unk_4CA1E4 = sub_48A4E3(v144, 1u);
            unk_4CA1E8 = sub_48A4E3(v144, 2u);
            unk_4CA1EC = sub_48A4E3(v144, 3u);
            break;
        case 0x2Au:
            v47 = sub_48A4E3(v144, 0);
            if (v47)
            {
                switch (v47)
                {
                case 1:
                    *(_BYTE*)(thisx + 224) = sub_48A4E3(v144, 1u);
                    *(_BYTE*)(thisx + 238) = sub_48A4E3(v144, 2u);
                    *(_DWORD*)(thisx + 304) = sub_48A4E3(v144, 3u);
                    *(_WORD*)(thisx + 344) = sub_48A4E3(v144, 4u);
                    *(_BYTE*)(thisx + 313) = sub_48A4E3(v144, 5u);
                    *(_BYTE*)(thisx + 234) = sub_48A4E3(v144, 6u);
                    *(_WORD*)(thisx + 236) = sub_48A4E3(v144, 7u);
                    break;
                case 2:
                    for (ii = 0; ii < 6; ++ii)
                    {
                        *(_BYTE*)(ii + thisx + 239) = sub_48A4E3(v144, 2 * ii + 1);
                        *(_DWORD*)(thisx + 4 * ii + 248) = sub_48A4E3(v144, 2 * ii + 2);
                    }
                    *(_DWORD*)(thisx + 272) = sub_48A4E3(v144, 0xDu);
                    *(_DWORD*)(thisx + 276) = sub_48A4E3(v144, 0xEu);
                    break;
                case 3:
                    v45 = sub_48A4E3(v144, 3u);
                    if (!v45)
                        v45 = 1;
                    v26 = sub_48A4E3(v144, 1u);
                    v27 = sub_48A4E3(v144, 2u);
                    *(_DWORD*)(thisx + 284) = v27 * sub_426970((_DWORD*)unk_4B9B10) / v45 + v26;
                    break;
                default:
                    if (v47 == 4 && sub_48A4E3(v144, 1u) == 1)
                        memset((void*)(thisx + 336), 0, 8u);
                    break;
                }
            }
            else
            {
                *(_BYTE*)(thisx + 346) = sub_48A4E3(v144, 1u);
                *(_DWORD*)(thisx + 348) = sub_48A4E3(v144, 2u);
                *(_DWORD*)(thisx + 352) = sub_48A4E3(v144, 3u);
                *(_DWORD*)(thisx + 356) = sub_48A4E3(v144, 4u);
                *(_DWORD*)(thisx + 360) = sub_48A4E3(v144, 5u);
                *(_DWORD*)(thisx + 380) = sub_48A4E3(v144, 6u);
                *(_DWORD*)(thisx + 384) = sub_48A4E3(v144, 7u);
                if (*(_BYTE*)(thisx + 346) == 2)
                {
                    *(_DWORD*)(thisx + 364) = -sub_48A4E3(v144, 4u);
                    *(_DWORD*)(thisx + 368) = -sub_48A4E3(v144, 5u);
                    *(_DWORD*)(thisx + 372) = -sub_48A4E3(v144, 2u) - *(_DWORD*)(thisx + 364);
                    *(_DWORD*)(thisx + 376) = -sub_48A4E3(v144, 3u) - *(_DWORD*)(thisx + 368);
                }
                else
                {
                    memcpy((void*)(thisx + 364), (const void*)(thisx + 348), 0x10u);
                }
            }
            break;
        case 0x2Bu:
            v28 = sub_48A4E3(v144, 0);
            if (v28)
            {
                v44 = sub_474471((int)unk_4B9B10, v28);
                if (v44)
                {
                    v43 = sub_48A4E3(v144, 1u);
                    if (v43)
                    {
                        if (v43 == 1)
                        {
                            *(_BYTE*)(v44 + 10) = sub_48A4E3(v144, 2u);
                            *(_BYTE*)(v44 + 6) = sub_48A4E3(v144, 3u);
                            *(_WORD*)(v44 + 8) = sub_48A4E3(v144, 4u);
                            *(_BYTE*)(v44 + 52) = sub_48A4E3(v144, 5u);
                        }
                        else if (v43 == 3)
                        {
                            *(_WORD*)v44 = sub_48A4E3(v144, 2u);
                            *(_WORD*)(v44 + 2) = sub_48A4E3(v144, 3u);
                            *(_WORD*)(v44 + 4) = sub_48A4E3(v144, 4u);
                        }
                    }
                    else
                    {
                        for (jj = 0; jj < 6; ++jj)
                        {
                            *(_BYTE*)(jj + v44 + 11) = sub_48A4E3(v144, 2 * jj + 2);
                            *(_DWORD*)(v44 + 4 * jj + 20) = sub_48A4E3(v144, 2 * jj + 3);
                        }
                        *(_DWORD*)(v44 + 44) = sub_48A4E3(v144, 0xEu);
                        *(_DWORD*)(v44 + 48) = sub_48A4E3(v144, 0xFu);
                    }
                }
            }
            break;
        case 0xFDu:
            v41 = sub_426210((char*)unk_4B9B10);
            v29 = sub_48A4E3(v144, 0);
            v30 = (const CHAR*)sub_4893BC((_DWORD*)v41, v29);
            sub_474011((char*)unk_4B9B10, v30);
            sub_48E090((_DWORD*)unk_4B9B10, 1);
            *(_BYTE*)(thisx + 12) = 0;
            return;
        case 0xFEu:
            sub_48E090((_DWORD*)unk_4B9B10, 1);
            *(_BYTE*)(thisx + 12) = 0;
            return;
        case 0xFFu:
            if (*(_BYTE*)(thisx + 148))
            {
                if (*(unsigned __int8*)(thisx + 148) != 255)
                    --* (_BYTE*)(thisx + 148);
                if (*(_BYTE*)(thisx + 148))
                    *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 160);
                else
                    *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 156) + 1;
            }
            else
            {
                *(_DWORD*)(thisx + 40) = *(_DWORD*)(thisx + 16);
            }
            sub_48A94C(thisx, 0, 1);
            v143 = 0;
            break;
        }
    LABEL_327:
        if (v143)
        {
            if (a2)
            {
                v145 = a3 - 1;
                if (v145 > 0)
                    sub_48A94C(thisx, a2 + 50, v145);
            }
            else
            {
                ++* (_DWORD*)(thisx + 40);
                sub_48A94C(thisx, 0, 1);
            }
        }
    }
}