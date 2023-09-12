#include "sub.h" 
unsigned __int16* sub_46881A(int thisx)
{
    unsigned __int16 v1; // cx
    int v2; // ecx
    int v3; // esi
    int v4; // edx
    int v5; // eax
    int v6; // esi
    int v7; // ecx
    int v8; // edx
    int v9; // eax
    int v10; // ecx
    int v11; // edx
    int v12; // eax
    int v13; // eax
    char v14; // al
    __int16 v15; // ax
    char v16; // al
    char v17; // al
    int v18; // eax
    char v19; // al
    char* v20; // eax
    char* v21; // eax
    int v22; // eax
    unsigned __int16* result; // eax
    unsigned __int16 v24; // cx
    int v26; // [esp+Ch] [ebp-2B0h]
    int v27; // [esp+10h] [ebp-2ACh]
    int v28; // [esp+14h] [ebp-2A8h]
    int v29; // [esp+1Ch] [ebp-2A0h]
    int v30; // [esp+20h] [ebp-29Ch]
    int v31; // [esp+24h] [ebp-298h]
    int i10; // [esp+28h] [ebp-294h]
    CHAR v33[64]; // [esp+2Ch] [ebp-290h] BYREF
    int i9; // [esp+6Ch] [ebp-250h]
    CHAR v35[4]; // [esp+70h] [ebp-24Ch] BYREF
    int v36; // [esp+74h] [ebp-248h]
    int v37; // [esp+78h] [ebp-244h]
    int v38; // [esp+7Ch] [ebp-240h]
    char String1[64]; // [esp+80h] [ebp-23Ch] BYREF
    int v40; // [esp+C0h] [ebp-1FCh]
    __int16 v41; // [esp+C4h] [ebp-1F8h]
    char v42; // [esp+C6h] [ebp-1F6h]
    __int16 v43; // [esp+C7h] [ebp-1F5h]
    char v44; // [esp+C9h] [ebp-1F3h]
    __int16 v45; // [esp+CAh] [ebp-1F2h]
    char v46; // [esp+CCh] [ebp-1F0h]
    __int16 v47; // [esp+CDh] [ebp-1EFh]
    char v48; // [esp+CFh] [ebp-1EDh]
    int v49[4]; // [esp+D0h] [ebp-1ECh]
    int i8; // [esp+E0h] [ebp-1DCh]
    int v51; // [esp+E4h] [ebp-1D8h]
    int i7; // [esp+E8h] [ebp-1D4h]
    int v53; // [esp+ECh] [ebp-1D0h]
    int v54[4]; // [esp+F0h] [ebp-1CCh]
    int v55; // [esp+100h] [ebp-1BCh]
    int v56; // [esp+104h] [ebp-1B8h]
    int i6; // [esp+108h] [ebp-1B4h]
    int v58; // [esp+10Ch] [ebp-1B0h]
    int i5; // [esp+110h] [ebp-1ACh]
    int v60; // [esp+114h] [ebp-1A8h]
    int v61; // [esp+118h] [ebp-1A4h]
    int v62[4]; // [esp+11Ch] [ebp-1A0h]
    int i4; // [esp+12Ch] [ebp-190h]
    int v64; // [esp+130h] [ebp-18Ch]
    int v65; // [esp+134h] [ebp-188h]
    int i3; // [esp+138h] [ebp-184h]
    int v67; // [esp+13Ch] [ebp-180h]
    int v68; // [esp+140h] [ebp-17Ch]
    int v69; // [esp+144h] [ebp-178h]
    int v70; // [esp+148h] [ebp-174h]
    int v71; // [esp+14Ch] [ebp-170h]
    int i2; // [esp+150h] [ebp-16Ch]
    int v73; // [esp+154h] [ebp-168h]
    int v74; // [esp+158h] [ebp-164h]
    int v75; // [esp+15Ch] [ebp-160h]
    int v76; // [esp+160h] [ebp-15Ch]
    int v77; // [esp+164h] [ebp-158h]
    int i1; // [esp+168h] [ebp-154h]
    int v79; // [esp+16Ch] [ebp-150h]
    int v80; // [esp+170h] [ebp-14Ch]
    int v81; // [esp+174h] [ebp-148h]
    int v82; // [esp+178h] [ebp-144h]
    int v83; // [esp+17Ch] [ebp-140h]
    int nn; // [esp+180h] [ebp-13Ch]
    int v85; // [esp+184h] [ebp-138h]
    int mm; // [esp+188h] [ebp-134h]
    int v87; // [esp+18Ch] [ebp-130h]
    int v88; // [esp+190h] [ebp-12Ch]
    int v89; // [esp+194h] [ebp-128h]
    int v90; // [esp+198h] [ebp-124h]
    int kk; // [esp+19Ch] [ebp-120h]
    int v92; // [esp+1A0h] [ebp-11Ch]
    int v93; // [esp+1A4h] [ebp-118h]
    int v94; // [esp+1A8h] [ebp-114h]
    int v95; // [esp+1ACh] [ebp-110h]
    int v96; // [esp+1B0h] [ebp-10Ch]
    int v97; // [esp+1B4h] [ebp-108h]
    int jj; // [esp+1B8h] [ebp-104h]
    int v99; // [esp+1BCh] [ebp-100h]
    int m; // [esp+1C0h] [ebp-FCh]
    int v101; // [esp+1C4h] [ebp-F8h]
    int k; // [esp+1C8h] [ebp-F4h]
    int v103; // [esp+1CCh] [ebp-F0h]
    int v104[4]; // [esp+1D0h] [ebp-ECh]
    int v105; // [esp+1E0h] [ebp-DCh]
    int v106; // [esp+1E4h] [ebp-D8h]
    int j; // [esp+1E8h] [ebp-D4h]
    int v108; // [esp+1ECh] [ebp-D0h]
    int v109; // [esp+1F0h] [ebp-CCh]
    int ii; // [esp+1F4h] [ebp-C8h]
    int v111; // [esp+1F8h] [ebp-C4h]
    int v112; // [esp+1FCh] [ebp-C0h]
    int v113[4]; // [esp+200h] [ebp-BCh]
    int n; // [esp+210h] [ebp-ACh]
    int v115; // [esp+214h] [ebp-A8h]
    int v116; // [esp+218h] [ebp-A4h]
    int v117; // [esp+21Ch] [ebp-A0h]
    int v118; // [esp+220h] [ebp-9Ch]
    int v119; // [esp+224h] [ebp-98h]
    int v120; // [esp+228h] [ebp-94h]
    int v121; // [esp+22Ch] [ebp-90h]
    int v122; // [esp+230h] [ebp-8Ch]
    int v123; // [esp+234h] [ebp-88h]
    int v124; // [esp+238h] [ebp-84h]
    int v125; // [esp+23Ch] [ebp-80h]
    int v126; // [esp+240h] [ebp-7Ch]
    int v127; // [esp+244h] [ebp-78h]
    int i; // [esp+248h] [ebp-74h]
    int v129; // [esp+24Ch] [ebp-70h]
    CHAR String[32]; // [esp+250h] [ebp-6Ch] BYREF
    int v131[14]; // [esp+270h] [ebp-4Ch] BYREF
    int v132; // [esp+2A8h] [ebp-14h]
    int v133[4]; // [esp+2ACh] [ebp-10h] BYREF

    v132 = (unsigned __int8)unk_4B9986;
    for (i = 0; i < v132; ++i)
        sub_477F0C(i);
    v129 = 0;
    memset(v133, 0, sizeof(v133));
    v127 = 0;
    for (i = 0; i < 4; ++i)
    {
        v122 = 0;
        v121 = 0;
        v120 = 0;
        v118 = 0;
        v126 = 0;
        v125 = 0;
        v119 = 0;
        v1 = *(_WORD*)(thisx + 2 * i + 2572);
        v124 = v1;
        if (!v1)
            continue;
        if (v124 >= 100)
        {
            *(_WORD*)(thisx + 2 * i + 2572) -= 100;
            continue;
        }
        v2 = --v124;
        if (!*(_BYTE*)(thisx + 2516))
        {
            LOBYTE(v2) = v124;
            v3 = sub_476D78(v2);
            LOBYTE(v4) = v124;
            v5 = sub_476D29(v4);
            v121 = v3 - v5;
            LOBYTE(v5) = v124;
            v6 = sub_476CDA(v5);
            LOBYTE(v7) = v124;
            v120 = v6 - sub_476C8B(v7);
            LOBYTE(v8) = v124;
            v9 = sub_476DC7(v8, 0);
            v118 = v9;
            LOBYTE(v9) = v124;
            v126 = sub_476DC7(v9, 1);
            LOBYTE(v10) = v124;
            v125 = sub_476DC7(v10, 2);
            LOBYTE(v11) = v124;
            v12 = sub_476DC7(v11, 5);
            v119 = v12;
            LOBYTE(v12) = v124;
            v13 = sub_476DC7(v12, 6);
            v127 |= v13;
        }
        v123 = *(unsigned __int8*)(i + thisx + 2584);
        if (v119)
        {
            if (*(_BYTE*)(i + thisx + 2604))
                *(_BYTE*)(i + thisx + 2604) = 0;
            else
                *(_BYTE*)(i + thisx + 2604) = 1;
        }
        if (*(_BYTE*)(i + thisx + 2604))
        {
            v121 = 0;
            v120 = 0;
            if ((unsigned __int8)++ * (_BYTE*)(i + thisx + 2604) >= 5u)
                *(_BYTE*)(i + thisx + 2604) = 1;
        }
        if (v123)
        {
            if (v123 != 1)
            {
                if (v123 == 2)
                {
                    if (*(_BYTE*)(i + thisx + 2604) == 1)
                    {
                        v106 = 0;
                        for (j = 0; j < 4; ++j)
                        {
                            v104[j] = *(__int16*)(thisx + 244 * j + 1630);
                            if (v104[j] >= 0)
                                ++v106;
                        }
                        for (j = 0; j < 4; ++j)
                        {
                            v103 = 3;
                            for (k = 2; k >= j; --k)
                            {
                                if (v104[v103] >= 0 && (v104[k] < 0 || v104[v103] < v104[k]))
                                {
                                    v101 = v104[v103];
                                    v104[v103] = v104[k];
                                    v104[k] = v101;
                                }
                                --v103;
                            }
                        }
                        v105 = rand() % (unk_4B99E4 - v106);
                        for (j = 0; j < 4; ++j)
                        {
                            if (v104[j] <= v105 && v104[j] >= 0)
                                ++v105;
                        }
                        *(_WORD*)(thisx + 2 * i + 2564) = v105;
                        sub_476E46(*(unsigned __int16*)(thisx + 2 * i + 2564), (void*)(8 * i + 4952656));
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                        v122 = 1;
                    }
                    if (v121)
                    {
                        *(_BYTE*)(i + thisx + 2600) = (*(unsigned __int8*)(i + thisx + 2600) + v121 + 6) % 6;
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                        v122 = 1;
                    }
                    else if (v120)
                    {
                        *(_WORD*)(thisx + 2 * i + 2564) = (unk_4B99E4 + v120 + *(unsigned __int16*)(thisx + 2 * i + 2564))
                            % unk_4B99E4;
                        sub_476E46(*(unsigned __int16*)(thisx + 2 * i + 2564), (void*)(8 * i + 4952656));
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                        v122 = 1;
                    }
                    else if (v118)
                    {
                        if (!sub_46D56B((__int16*)(thisx + 1392), *(unsigned __int16*)(thisx + 2 * i + 2564), -1))
                        {
                            *(_WORD*)(thisx + 244 * i + 1630) = *(_WORD*)(thisx + 2 * i + 2564);
                            *(_BYTE*)(i + thisx + 2584) = 3;
                            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                            v129 = 1;
                            for (m = 0; m < 4; ++m)
                            {
                                if (!*(_BYTE*)(m + thisx + 2584) && !*(_WORD*)(thisx + 2 * m + 2572))
                                {
                                    *(_WORD*)(thisx + 2 * i + 2572) = 0;
                                    *(_WORD*)(thisx + 2 * m + 2572) = v124 + 101;
                                    *(_BYTE*)(m + thisx + 2554) = i + 1;
                                    goto LABEL_139;
                                }
                            }
                        }
                    }
                    else if (v126)
                    {
                        *(_WORD*)(thisx + 2 * i + 2564) = *(_WORD*)(thisx + 244 * i + 1628);
                        *(_WORD*)(thisx + 244 * i + 1628) = -1;
                        *(_BYTE*)(i + thisx + 2600) = 6;
                        *(_BYTE*)(i + thisx + 2584) = 1;
                        v122 = 1;
                        v129 = 1;
                    }
                }
                else if (v123 == 3 && v126)
                {
                    *(_BYTE*)(i + thisx + 2584) = 2;
                    *(_WORD*)(thisx + 2 * i + 2564) = *(_WORD*)(thisx + 244 * i + 1630);
                    *(_WORD*)(thisx + 244 * i + 1630) = -1;
                    v129 = 1;
                }
                goto LABEL_139;
            }
            v116 = *(unsigned __int8*)(i + thisx + 2600);
            if (*(_BYTE*)(i + thisx + 2604) == 1)
            {
                if (v116 >= 6)
                {
                    if (*(_BYTE*)(thisx + 81))
                    {
                        *(_WORD*)(thisx + 2 * i + 2564) = rand() % unk_4B92D8;
                    }
                    else
                    {
                        v112 = 0;
                        for (n = 0; n < 4; ++n)
                        {
                            v113[n] = *(__int16*)(thisx + 244 * n + 1628);
                            if (v113[n] >= 0)
                                ++v112;
                        }
                        for (n = 0; n < 4; ++n)
                        {
                            v111 = 3;
                            for (ii = 2; ii >= n; --ii)
                            {
                                if (v113[v111] >= 0 && (v113[ii] < 0 || v113[v111] < v113[ii]))
                                {
                                    v109 = v113[v111];
                                    v113[v111] = v113[ii];
                                    v113[ii] = v109;
                                }
                                --v111;
                            }
                        }
                        v115 = rand() % (unk_4B92D8 - v112);
                        for (n = 0; n < 4; ++n)
                        {
                            if (v113[n] <= v115 && v113[n] >= 0)
                                ++v115;
                        }
                        *(_WORD*)(thisx + 2 * i + 2564) = v115;
                    }
                }
                else
                {
                    v15 = sub_46D5C0((char*)thisx);
                    *(_WORD*)(thisx + 2 * i + 2564) = v15;
                    if (*(_BYTE*)(thisx + 98))
                    {
                        *(_BYTE*)(i + thisx + 2580) = rand() % 4;
                    }
                    else
                    {
                        v16 = MarkedForDetachment((_BYTE*)(36 * *(unsigned __int16*)(thisx + 2 * i + 2564) + unk_4B92E0));
                        *(_BYTE*)(i + thisx + 2580) = v16;
                    }
                }
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                v122 = 1;
            }
            if (v121)
            {
                if (v116 >= 6)
                {
                    *(_WORD*)(thisx + 2 * i + 2564) = (unk_4B92D8 + v121 + *(unsigned __int16*)(thisx + 2 * i + 2564))
                        % unk_4B92D8;
                }
                else
                {
                    *(_WORD*)(thisx + 2 * i + 2564) = (int)(Size + v121 + *(unsigned __int16*)(thisx + 2 * i + 2564)) % (int)Size;
                    v17 = MarkedForDetachment((_BYTE*)(unk_4B92E0 + 36 * *(unsigned __int16*)(thisx + 2 * i + 2564)));
                    *(_BYTE*)(i + thisx + 2580) = v17;
                    *(_BYTE*)(i + thisx + 13092) = 0;
                }
            }
            else
            {
                if (!v120)
                {
                    if (v118)
                    {
                        v108 = *(unsigned __int16*)(thisx + 2 * i + 2564);
                        if (*(unsigned __int8*)(i + thisx + 2600) > 5u)
                        {
                            if (*(_BYTE*)(i + thisx + 2600) == 6
                                && (*(_BYTE*)(thisx + 81) || !sub_46D516((__int16*)(thisx + 1392), v108, -1)))
                            {
                                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                                *(_WORD*)(thisx + 244 * i + 1628) = *(_WORD*)(thisx + 2 * i + 2564);
                                *(_BYTE*)(i + thisx + 2600) = 0;
                                *(_BYTE*)(i + thisx + 2584) = 2;
                                if (*(__int16*)(thisx + 244 * i + 1630) < 0)
                                {
                                    *(_WORD*)(thisx + 2 * i + 2564) = i;
                                }
                                else
                                {
                                    *(_WORD*)(thisx + 2 * i + 2564) = *(_WORD*)(thisx + 244 * i + 1630);
                                    *(_WORD*)(thisx + 244 * i + 1630) = -1;
                                }
                                sub_476E46(*(unsigned __int16*)(thisx + 2 * i + 2564), (void*)(8 * i + 4952656));
                            }
                        }
                        else if (*(_BYTE*)(thisx + 81) || !*((_BYTE*)unk_4B92DC + v108))
                        {
                            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                            *(_DWORD*)(thisx + 244 * i + 1392 + 28 * v116) = *(unsigned __int16*)(thisx + 2 * i + 2564);
                            *((_BYTE*)unk_4B92DC + *(unsigned __int16*)(thisx + 2 * i + 2564)) = 1;
                            *(_BYTE*)(thisx + 244 * i + 1392 + 28 * v116 + 4) = *(_BYTE*)(i + thisx + 2580);
                            if (++ * (_BYTE*)(i + thisx + 2600) == 6)
                            {
                                *(_WORD*)(thisx + 2 * i + 2564) = 0;
                                if (*(__int16*)(thisx + 244 * i + 1628) >= 0)
                                {
                                    *(_BYTE*)(i + thisx + 2600) = 0;
                                    *(_BYTE*)(i + thisx + 2584) = 2;
                                    *(_WORD*)(thisx + 2 * i + 2564) = i;
                                }
                            }
                        }
                        v122 = 1;
                        v129 = 1;
                    }
                    else if (v126)
                    {
                        if (--v116 < 0)
                        {
                            *(_BYTE*)(i + thisx + 2584) = 0;
                            *(_WORD*)(thisx + 2 * i + 2564) = 0;
                        }
                        else
                        {
                            *(_WORD*)(thisx + 2 * i + 2564) = *(_WORD*)(thisx + 244 * i + 1392 + 28 * v116);
                            *((_BYTE*)unk_4B92DC + *(unsigned __int16*)(thisx + 2 * i + 2564)) = 0;
                            *(_BYTE*)(i + thisx + 2580) = *(_BYTE*)(thisx + 244 * i + 1392 + 28 * v116 + 4);
                            *(_DWORD*)(thisx + 244 * i + 1392 + 28 * v116) = -1;
                            --* (_BYTE*)(i + thisx + 2600);
                        }
                        v122 = 1;
                        v129 = 1;
                    }
                    else if (v125)
                    {
                        *(_BYTE*)(i + thisx + 2596) = *(_BYTE*)(i + thisx + 2596) == 0;
                        *(_BYTE*)(i + thisx + 13092) = 0;
                        v122 = 1;
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                    }
                    goto LABEL_139;
                }
                if (*(_BYTE*)(i + thisx + 2596) == 1)
                    *(_BYTE*)(i + thisx + 13092) = (*(unsigned __int8*)(i + thisx + 13092) + v120 + 4) % 4;
                else
                    *(_BYTE*)(i + thisx + 2580) = (*(unsigned __int8*)(i + thisx + 2580) + v120 + 4) % 4;
            }
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            v122 = 1;
        }
        else
        {
            if (*(_BYTE*)(i + thisx + 2604) == 1)
            {
                *(_WORD*)(thisx + 2 * i + 2564) = rand() % 2;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
            if (v120)
            {
                *(_WORD*)(thisx + 2 * i + 2564) = *(_WORD*)(thisx + 2 * i + 2564) == 0;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
            else if (v118)
            {
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                *(_BYTE*)(i + thisx + 13092) = 0;
                if (*(_WORD*)(thisx + 2 * i + 2564))
                {
                    *(_BYTE*)(i + thisx + 2584) = 4;
                    v123 = 4;
                    v118 = 0;
                    v120 = *(_DWORD*)(thisx + 15636);
                    *(_WORD*)(thisx + 2 * i + 2564) = 0;
                    v122 = 1;
                }
                else
                {
                    *(_BYTE*)(i + thisx + 2584) = 1;
                    v122 = 1;
                    v14 = MarkedForDetachment((_BYTE*)(36 * *(unsigned __int16*)(thisx + 2 * i + 2564) + unk_4B92E0));
                    *(_BYTE*)(i + thisx + 2580) = v14;
                    *(_BYTE*)(thisx + 244 * i + 1564) = 0;
                }
            }
            else if (v126 && *(_BYTE*)(i + thisx + 2554))
            {
                v117 = *(unsigned __int8*)(i + thisx + 2554) - 1;
                *(_BYTE*)(i + thisx + 2554) = 0;
                *(_WORD*)(thisx + 2 * i + 2572) = 100;
                *(_BYTE*)(v117 + thisx + 2584) = 2;
                *(_WORD*)(thisx + 2 * v117 + 2564) = *(_WORD*)(thisx + 244 * v117 + 1630);
                *(_WORD*)(thisx + 244 * v117 + 1630) = -1;
                *(_WORD*)(thisx + 2 * v117 + 2572) = v124 + 101;
                *(_BYTE*)(v117 + thisx + 2600) = 0;
                v129 = 1;
            }
        }
    LABEL_139:
        if (v123 == 4)
        {
            if (*(_BYTE*)(i + thisx + 2604) == 1)
            {
                if (unk_4B99CD)
                {
                    v99 = rand() % *(_DWORD*)(thisx + 15636);
                }
                else
                {
                    v97 = 0;
                    memset(*(void**)(thisx + 15632), 0, *(_DWORD*)(thisx + 15636));
                    for (jj = 0; jj < *(_DWORD*)(thisx + 15636); ++jj)
                    {
                        v96 = 244 * jj + *(_DWORD*)(thisx + 15628);
                        if (sub_46DCBB((_DWORD*)thisx, jj, 0))
                            *(_BYTE*)(*(_DWORD*)(thisx + 15632) + jj) = 1;
                        else
                            ++v97;
                    }
                    if (v97)
                    {
                        v95 = rand() % v97;
                        v99 = -1;
                        while (v95 >= 0)
                        {
                            ++v99;
                            if (!*(_BYTE*)(*(_DWORD*)(thisx + 15632) + v99))
                                --v95;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(i + thisx + 2604) = 0;
                        v99 = 0;
                    }
                }
                *(_WORD*)(thisx + 2 * i + 2564) = v99;
                v121 = 0;
                v120 = 2 * *(_DWORD*)(thisx + 15636);
            }
            if (v118)
            {
                v129 = 1;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                v89 = *(unsigned __int16*)(thisx + 2 * i + 2564);
                v94 = 244 * v89 + *(_DWORD*)(thisx + 15628);
                v92 = thisx + 244 * i + 1392;
                sub_46D2DE(v92);
                lstrcpyA((LPSTR)(v92 + 172), (LPCSTR)(v94 + 172));
                v88 = 0;
                for (kk = 0; kk < 6; ++kk)
                {
                    v87 = *(_DWORD*)(v94 + 28 * kk);
                    if (v87 >= 0 && (unk_4B99CD || !*((_BYTE*)unk_4B92DC + v87)))
                    {
                        *(_DWORD*)(v92 + 28 * v88) = v87;
                        *(_BYTE*)(v92 + 28 * v88 + 4) = *(_BYTE*)(v94 + 28 * kk + 4);
                        *((_BYTE*)unk_4B92DC + v87) = 1;
                        ++v88;
                    }
                }
                v90 = *(__int16*)(v94 + 236);
                if (v90 >= 0 && (unk_4B99CD || !sub_46D516((__int16*)(thisx + 1392), v90, -1)))
                    *(_WORD*)(v92 + 236) = v90;
                v93 = *(__int16*)(v94 + 238);
                if (v93 < 0 || sub_46D56B((__int16*)(thisx + 1392), v93, -1))
                    *(_WORD*)(v92 + 238) = -1;
                else
                    *(_WORD*)(v92 + 238) = v93;
                *(_WORD*)(thisx + 2 * i + 2564) = 0;
                *(_BYTE*)(i + thisx + 2580) = 0;
                *(_BYTE*)(i + thisx + 2596) = 0;
                if (v88 >= 6)
                {
                    if (*(__int16*)(v92 + 236) == -1)
                    {
                        *(_BYTE*)(i + thisx + 2600) = 6;
                        *(_BYTE*)(i + thisx + 2584) = 1;
                    }
                    else if (*(__int16*)(v92 + 238) == -1)
                    {
                        *(_BYTE*)(i + thisx + 2600) = 0;
                        *(_BYTE*)(i + thisx + 2584) = 2;
                        *(_WORD*)(thisx + 2 * i + 2564) = i;
                        sub_476E46(*(unsigned __int16*)(thisx + 2 * i + 2564), (void*)(8 * i + 4952656));
                    }
                    else
                    {
                        *(_BYTE*)(i + thisx + 2584) = 3;
                        for (mm = 0; mm < 4; ++mm)
                        {
                            if (!*(_BYTE*)(mm + thisx + 2584) && !*(_WORD*)(thisx + 2 * mm + 2572))
                            {
                                *(_WORD*)(thisx + 2 * i + 2572) = 0;
                                *(_WORD*)(thisx + 2 * mm + 2572) = v124 + 101;
                                *(_BYTE*)(mm + thisx + 2554) = i + 1;
                                break;
                            }
                        }
                    }
                }
                else
                {
                    *(_BYTE*)(i + thisx + 2600) = v88;
                    *(_BYTE*)(i + thisx + 2584) = 1;
                }
            }
            else if (v121)
            {
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                *(_BYTE*)(i + thisx + 2600) = (*(unsigned __int8*)(i + thisx + 2600) + v121 + 8) % 8;
                v122 = 1;
            }
            else if (v120)
            {
                if (v120 != *(_DWORD*)(thisx + 15636))
                    sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                *(_WORD*)(thisx + 2 * i + 2564) = (*(_DWORD*)(thisx + 15636) + v120 + *(unsigned __int16*)(thisx + 2 * i + 2564))
                    % *(_DWORD*)(thisx + 15636);
                *(_BYTE*)(i + thisx + 2600) = 7;
                v82 = *(unsigned __int16*)(thisx + 2 * i + 2564);
                v85 = 244 * v82 + *(_DWORD*)(thisx + 15628);
                v83 = thisx + 244 * i + 1392;
                lstrcpyA((LPSTR)(thisx + 244 * i + 1564), (LPCSTR)(v85 + 172));
                for (nn = 0; nn < 6; ++nn)
                {
                    if (*(int*)(v85 + 28 * nn) < 0)
                        *(_DWORD*)(v83 + 28 * nn) = -1;
                    else
                        *(_DWORD*)(v83 + 28 * nn) = -(*(_DWORD*)(v85 + 28 * nn) + 2);
                    *(_BYTE*)(v83 + 28 * nn + 4) = *(_BYTE*)(v85 + 28 * nn + 4);
                }
                if (*(__int16*)(v85 + 236) < 0)
                    *(_WORD*)(v83 + 236) = -1;
                else
                    *(_WORD*)(v83 + 236) = -(__int16)(*(_WORD*)(v85 + 236) + 2);
                if (*(__int16*)(v85 + 238) < 0)
                {
                    *(_WORD*)(v83 + 238) = i;
                    sub_476E46(i, (void*)(8 * i + 4952656));
                }
                else
                {
                    *(_WORD*)(v83 + 238) = -(__int16)(*(_WORD*)(v85 + 238) + 2);
                    sub_476E46(*(__int16*)(v85 + 238), (void*)(8 * i + 4952656));
                }
                v122 = 1;
            }
            else if (v126)
            {
                sub_46D2DE(thisx + 244 * i + 1392);
                *(_BYTE*)(i + thisx + 2584) = 0;
                *(_BYTE*)(i + thisx + 2600) = 0;
                *(_WORD*)(thisx + 2 * i + 2564) = 0;
                v122 = 1;
            }
            else if (v125)
            {
                *(_BYTE*)(i + thisx + 2596) = *(_BYTE*)(i + thisx + 2596) == 0;
                v122 = 1;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
        }
        if (v122)
            v133[i] = 1;
    }
    if (v127)
    {
        for (i = 0; i < 4; ++i)
        {
            v80 = thisx + 244 * i + 1392;
            v81 = *(unsigned __int8*)(i + thisx + 2584);
            if (!v81)
            {
                v18 = rand() % 2;
                v81 = 3 * v18 + 1;
                if (!(3 * v18))
                {
                    *(_BYTE*)(i + thisx + 2600) = 0;
                    *(_BYTE*)(thisx + 244 * i + 1564) = 0;
                }
            }
            if (v81 == 4)
            {
                if (unk_4B99CD)
                {
                    v79 = rand() % *(_DWORD*)(thisx + 15636);
                }
                else
                {
                    v77 = 0;
                    memset(*(void**)(thisx + 15632), 0, *(_DWORD*)(thisx + 15636));
                    for (i1 = 0; i1 < *(_DWORD*)(thisx + 15636); ++i1)
                    {
                        v76 = 244 * i1 + *(_DWORD*)(thisx + 15628);
                        if (sub_46DCBB((_DWORD*)thisx, i1, 1))
                            *(_BYTE*)(*(_DWORD*)(thisx + 15632) + i1) = 1;
                        else
                            ++v77;
                    }
                    if (v77)
                    {
                        v75 = rand() % v77;
                        v79 = -1;
                        while (v75 >= 0)
                        {
                            ++v79;
                            if (!*(_BYTE*)(*(_DWORD*)(thisx + 15632) + v79))
                                --v75;
                        }
                    }
                    else
                    {
                        *(_BYTE*)(i + thisx + 2604) = 0;
                        v79 = -1;
                    }
                }
                if (v79 < 0)
                {
                    *(_BYTE*)(i + thisx + 2600) = 0;
                    v81 = 1;
                }
                else
                {
                    v70 = v79;
                    v74 = 244 * v79 + *(_DWORD*)(thisx + 15628);
                    sub_46D2DE(v80);
                    lstrcpyA((LPSTR)(v80 + 172), (LPCSTR)(v74 + 172));
                    v69 = 0;
                    for (i2 = 0; i2 < 6; ++i2)
                    {
                        v68 = *(_DWORD*)(v74 + 28 * i2);
                        if (v68 >= 0 && (unk_4B99CD || !*((_BYTE*)unk_4B92DC + v68)))
                        {
                            *(_DWORD*)(v80 + 28 * v69) = v68;
                            *(_BYTE*)(v80 + 28 * v69 + 4) = *(_BYTE*)(v74 + 28 * i2 + 4);
                            *((_BYTE*)unk_4B92DC + v68) = 1;
                            ++v69;
                        }
                    }
                    v71 = *(__int16*)(v74 + 236);
                    if (v71 >= 0 && (unk_4B99CD || !sub_46D516((__int16*)(thisx + 1392), v71, -1)))
                        *(_WORD*)(v80 + 236) = v71;
                    v73 = *(__int16*)(v74 + 238);
                    if (v73 >= 0)
                    {
                        if (sub_46D56B((__int16*)(thisx + 1392), v73, i))
                            *(_WORD*)(v80 + 238) = -1;
                        else
                            *(_WORD*)(v80 + 238) = v73;
                    }
                    if (v69 < 6)
                    {
                        *(_BYTE*)(i + thisx + 2600) = v69;
                        v81 = 1;
                    }
                }
            }
            if (v81 == 1)
            {
                v67 = *(unsigned __int8*)(i + thisx + 2600);
                for (i3 = v67; i3 < 6; ++i3)
                {
                    v65 = sub_46D5C0((char*)thisx);
                    *(_DWORD*)(v80 + 28 * i3) = v65;
                    if (*(_BYTE*)(thisx + 98))
                    {
                        *(_BYTE*)(v80 + 28 * i3 + 4) = rand() % 4;
                    }
                    else
                    {
                        v19 = MarkedForDetachment((_BYTE*)(36 * v65 + unk_4B92E0));
                        *(_BYTE*)(v80 + 28 * i3 + 4) = v19;
                    }
                    *((_BYTE*)unk_4B92DC + v65) = 1;
                }
            }
            if (*(__int16*)(v80 + 236) < 0)
            {
                if (*(_BYTE*)(thisx + 81))
                {
                    *(_WORD*)(thisx + 2 * i + 2564) = rand() % unk_4B92D8;
                }
                else
                {
                    v61 = 0;
                    for (i4 = 0; i4 < 4; ++i4)
                    {
                        v62[i4] = *(__int16*)(thisx + 244 * i4 + 1628);
                        if (v62[i4] >= 0)
                            ++v61;
                    }
                    for (i4 = 0; i4 < 4; ++i4)
                    {
                        v60 = 3;
                        for (i5 = 2; i5 >= i4; --i5)
                        {
                            if (v62[v60] >= 0 && (v62[i5] < 0 || v62[v60] < v62[i5]))
                            {
                                v58 = v62[v60];
                                v62[v60] = v62[i5];
                                v62[i5] = v58;
                            }
                            --v60;
                        }
                    }
                    v64 = rand() % (unk_4B92D8 - v61);
                    for (i4 = 0; i4 < 4; ++i4)
                    {
                        if (v62[i4] <= v64 && v62[i4] >= 0)
                            ++v64;
                    }
                    *(_WORD*)(thisx + 2 * i + 2564) = v64;
                }
                *(_WORD*)(v80 + 236) = *(_WORD*)(thisx + 2 * i + 2564);
            }
            if (*(__int16*)(v80 + 238) < 0)
            {
                v56 = 0;
                for (i6 = 0; i6 < 4; ++i6)
                {
                    v54[i6] = *(__int16*)(thisx + 244 * i6 + 1630);
                    if (v54[i6] >= 0)
                        ++v56;
                }
                for (i6 = 0; i6 < 4; ++i6)
                {
                    v53 = 3;
                    for (i7 = 2; i7 >= i6; --i7)
                    {
                        if (v54[v53] >= 0 && (v54[i7] < 0 || v54[v53] < v54[i7]))
                        {
                            v51 = v54[v53];
                            v54[v53] = v54[i7];
                            v54[i7] = v51;
                        }
                        --v53;
                    }
                }
                v55 = rand() % (unk_4B99E4 - v56);
                for (i6 = 0; i6 < 4; ++i6)
                {
                    if (v54[i6] <= v55 && v54[i6] >= 0)
                        ++v55;
                }
                *(_WORD*)(v80 + 238) = v55;
            }
            *(_BYTE*)(i + thisx + 2584) = 3;
        }
    }
    for (i = 0; i < 4; ++i)
    {
        if (v133[i] || v129)
            sub_46B8AE((_BYTE*)thisx, i);
    }
    for (i = 0; i < 4 && *(_BYTE*)(i + thisx + 2584) == 3; ++i)
        ;
    if (i != 4 || *(_BYTE*)(thisx + 2516))
    {
        sub_49C15E((int)v131);
        v131[0] = unk_4B9248;
        result = sub_49AB05((int)unk_4BDC60, v131);
        for (i = 0; ; ++i)
        {
            if (i >= 4)
                return result;
            v27 = -8;
            v26 = -8;
            result = (unsigned __int16*)thisx;
            v24 = *(_WORD*)(thisx + 2 * i + 2572);
            if (v24 && v24 < 0x64u)
            {
                wsprintfA(String, "%d>", v24);
                v28 = *(unsigned __int8*)(i + thisx + 2584);
                if (!*(_BYTE*)(i + thisx + 2584))
                {
                    result = (unsigned __int16*)sub_47B91A(
                        160 * (i / 2) + 64,
                        120 * (i % 2) + 16 * *(unsigned __int16*)(thisx + 2 * i + 2564) + 64,
                        String,
                        0,
                        -1);
                    continue;
                }
                switch (v28)
                {
                case 1:
                    result = (unsigned __int16*)sub_47B91A(160 * (i / 2) + 2, 120 * (i % 2) + 32, String, 0, -1);
                    continue;
                case 2:
                    result = (unsigned __int16*)sub_47B91A(160 * (i / 2) + 48, 120 * (i % 2) + 48, String, 0, -1);
                    continue;
                case 4:
                    if (*(_BYTE*)(i + thisx + 2600) == 7)
                    {
                        result = (unsigned __int16*)sub_47B91A(160 * (i / 2) + 16, 120 * (i % 2) + 88, String, 0, -1);
                        continue;
                    }
                    v27 = 160 * (i / 2) + 2;
                    v26 = 120 * (i % 2) + 32;
                    break;
                }
                result = (unsigned __int16*)sub_47B91A(v27, v26, String, 0, -1);
            }
        }
    }
    for (i8 = 0; i8 < 4; ++i8)
    {
        v40 = thisx + 244 * i8 + 1392;
        if (lstrlenA((LPCSTR)(thisx + 244 * i8 + 1564)) <= 0)
        {
            v20 = (char*)sub_472F91((_DWORD*)v40);
            v21 = unknown_libname_18(v20);
            lstrcpyA(String1, v21);
            v38 = rand() % 5;
            switch (v38)
            {
            case 0:
                wsprintfA(String, &unk_4B3480);
                break;
            case 1:
                wsprintfA(String, &unk_4B348C);
                break;
            case 2:
                wsprintfA(String, &unk_4B349C);
                break;
            case 3:
                wsprintfA(String, &unk_4B34A8);
                break;
            case 4:
                wsprintfA(String, &unk_4B34B0);
                break;
            default:
                break;
            }
            if (!v38)
            {
                v37 = 4;
                v36 = 2;
                while (1)
                {
                    v22 = lstrlenA(String1);
                    if (v22 <= v37)
                        break;
                    v35[0] = String1[v37 - 2];
                    v35[1] = String1[v37 - 1];
                    v35[2] = 0;
                    if (lstrcmpiA(v35, &unk_4B34B8)
                        && lstrcmpiA(v35, &unk_4B34BC)
                        && lstrcmpiA(v35, &unk_4B34C0)
                        && lstrcmpiA(v35, &unk_4B34C4)
                        && lstrcmpiA(v35, &unk_4B34C8)
                        && lstrcmpiA(v35, &unk_4B34CC)
                        && lstrcmpiA(v35, &unk_4B34D0)
                        && lstrcmpiA(v35, &unk_4B34D4)
                        && lstrcmpiA(v35, &unk_4B34D8)
                        && lstrcmpiA(v35, &unk_4B34DC)
                        && lstrcmpiA(v35, &unk_4B34E0)
                        && lstrcmpiA(v35, &unk_4B34E4)
                        && lstrcmpiA(v35, &unk_4B34E8)
                        && lstrcmpiA(v35, &unk_4B34EC)
                        && lstrcmpiA(v35, &unk_4B34F0)
                        && lstrcmpiA(v35, &unk_4B34F4))
                    {
                        if (lstrcmpiA(v35, &unk_4B34F8) && lstrcmpiA(v35, &unk_4B34FC))
                        {
                            String1[v37] = 0;
                            break;
                        }
                        String1[v37 - 2] = -126;
                        String1[v37 - 1] = -63;
                    }
                    else
                    {
                        v37 += 2;
                    }
                }
            }
            wsprintfA((LPSTR)(v40 + 172), "%s%s", String1, String);
        }
    }
    for (i = 0; i < 4; ++i)
    {
        v49[i] = 0;
        for (i9 = i + 1; i9 < 4; ++i9)
        {
            if (!lstrcmpiA((LPCSTR)(thisx + 244 * i + 1564), (LPCSTR)(thisx + 244 * i9 + 1564)))
                ++v49[i];
        }
    }
    v41 = unk_4B3508;
    v42 = unk_4B350A;
    v43 = unk_4B350C;
    v44 = unk_4B350E;
    v45 = unk_4B3510;
    v46 = unk_4B3512;
    v47 = unk_4B3514;
    v48 = unk_4B3516;
    for (i = 0; i < 4; ++i)
    {
        if (v49[i] > 0)
        {
            lstrcpyA(v33, (LPCSTR)(thisx + 244 * i + 1564));
            v31 = 0;
            for (i10 = i; i10 < 4; ++i10)
            {
                v30 = thisx + 244 * i10 + 1392;
                if (!lstrcmpiA(v33, (LPCSTR)(thisx + 244 * i10 + 1564)))
                {
                    v29 = lstrlenA((LPCSTR)(thisx + 244 * i10 + 1564));
                    if (v29 + 3 >= 64)
                        v29 = 61;
                    *(_BYTE*)(v29 + v30 + 172) = *((_BYTE*)&v41 + 3 * v31);
                    *(_BYTE*)(v29 + v30 + 173) = *((_BYTE*)&v41 + 3 * v31 + 1);
                    *(_BYTE*)(v29 + v30 + 174) = 0;
                    v49[i10] = 0;
                    ++v31;
                }
            }
        }
    }
    result = (unsigned __int16*)thisx;
    *(_DWORD*)(thisx + 108) = 21;
    *(_BYTE*)(thisx + 2516) = 2;
    return result;
}

