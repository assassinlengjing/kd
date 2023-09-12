#include "sub.h" 
__int16 __fastcall sub_4181B5(int a1)
{
    struct Concurrency::ISchedulerProxy* v1; // eax
    int v2; // edx
    int v3; // ebx
    int v4; // edx
    int v5; // ebx
    int v6; // esi
    int v7; // esi
    int v8; // esi
    int v9; // esi
    int v10; // esi
    int v11; // eax
    int v12; // eax
    int v13; // ebx
    bool v14; // bl
    unsigned int v15; // esi
    int v16; // esi
    int v17; // esi
    unsigned __int16 v18; // ax
    unsigned __int16 v19; // ax
    int v20; // esi
    int v21; // esi
    unsigned __int16 v22; // ax
    unsigned __int16 v23; // ax
    int v24; // ebx
    int v25; // esi
    int v26; // esi
    unsigned __int8 v27; // al
    int v28; // eax
    int v29; // esi
    unsigned __int8 v30; // al
    unsigned __int8 v31; // al
    unsigned __int8 v32; // al
    int v34; // [esp-4h] [ebp-270h]
    int v35; // [esp+8h] [ebp-264h]
    int v36; // [esp+Ch] [ebp-260h]
    int v37; // [esp+10h] [ebp-25Ch]
    int v38; // [esp+14h] [ebp-258h]
    char v39; // [esp+18h] [ebp-254h]
    int v40; // [esp+1Ch] [ebp-250h]
    int v41; // [esp+20h] [ebp-24Ch]
    int v42; // [esp+24h] [ebp-248h]
    int v43; // [esp+28h] [ebp-244h]
    int v44; // [esp+2Ch] [ebp-240h]
    char v45; // [esp+30h] [ebp-23Ch]
    int v46; // [esp+34h] [ebp-238h]
    int v47; // [esp+38h] [ebp-234h]
    char v48; // [esp+3Ch] [ebp-230h]
    int v49; // [esp+40h] [ebp-22Ch]
    int v50; // [esp+44h] [ebp-228h]
    int v51; // [esp+48h] [ebp-224h]
    int v52; // [esp+4Ch] [ebp-220h]
    char v53; // [esp+50h] [ebp-21Ch]
    char v54; // [esp+54h] [ebp-218h]
    int v55; // [esp+58h] [ebp-214h]
    int v56; // [esp+5Ch] [ebp-210h]
    int v57; // [esp+60h] [ebp-20Ch]
    int v58; // [esp+64h] [ebp-208h]
    int v59; // [esp+68h] [ebp-204h]
    int v60; // [esp+6Ch] [ebp-200h]
    int v61; // [esp+70h] [ebp-1FCh]
    char v62; // [esp+74h] [ebp-1F8h]
    int v63; // [esp+78h] [ebp-1F4h]
    char v64; // [esp+7Ch] [ebp-1F0h]
    int v65; // [esp+80h] [ebp-1ECh]
    int v66; // [esp+84h] [ebp-1E8h]
    char v67; // [esp+88h] [ebp-1E4h]
    int v68; // [esp+8Ch] [ebp-1E0h]
    char v69; // [esp+90h] [ebp-1DCh]
    int v70; // [esp+94h] [ebp-1D8h]
    int v71; // [esp+98h] [ebp-1D4h]
    char v72; // [esp+9Ch] [ebp-1D0h]
    int v73; // [esp+A0h] [ebp-1CCh]
    int v74; // [esp+A4h] [ebp-1C8h]
    int v75; // [esp+A8h] [ebp-1C4h]
    char v76; // [esp+ACh] [ebp-1C0h]
    int v77; // [esp+B0h] [ebp-1BCh]
    int v78; // [esp+B4h] [ebp-1B8h]
    int v79; // [esp+B8h] [ebp-1B4h]
    char v80; // [esp+BCh] [ebp-1B0h]
    int v81; // [esp+C0h] [ebp-1ACh]
    int v82; // [esp+C4h] [ebp-1A8h]
    char v83; // [esp+C8h] [ebp-1A4h]
    int v84; // [esp+CCh] [ebp-1A0h]
    int v85; // [esp+D0h] [ebp-19Ch]
    int v86; // [esp+D4h] [ebp-198h]
    int v87; // [esp+D8h] [ebp-194h]
    int v88; // [esp+DCh] [ebp-190h]
    int v89; // [esp+E0h] [ebp-18Ch]
    int v90; // [esp+E4h] [ebp-188h]
    int v91; // [esp+E8h] [ebp-184h]
    int v92; // [esp+ECh] [ebp-180h]
    int v93; // [esp+F0h] [ebp-17Ch]
    char v94; // [esp+F4h] [ebp-178h]
    int v95; // [esp+F8h] [ebp-174h]
    char v96; // [esp+FCh] [ebp-170h]
    char v97; // [esp+100h] [ebp-16Ch]
    int v98; // [esp+104h] [ebp-168h]
    char v99; // [esp+108h] [ebp-164h]
    int v100; // [esp+10Ch] [ebp-160h]
    int v101; // [esp+110h] [ebp-15Ch]
    int v102; // [esp+114h] [ebp-158h]
    int v103; // [esp+118h] [ebp-154h]
    int v104; // [esp+11Ch] [ebp-150h]
    int v105; // [esp+120h] [ebp-14Ch]
    int v106; // [esp+124h] [ebp-148h]
    char v107; // [esp+128h] [ebp-144h]
    char v108; // [esp+12Ch] [ebp-140h]
    char v109; // [esp+130h] [ebp-13Ch]
    char v110; // [esp+134h] [ebp-138h]
    int v111; // [esp+138h] [ebp-134h]
    int v112; // [esp+13Ch] [ebp-130h]
    int v113; // [esp+140h] [ebp-12Ch]
    int v114; // [esp+144h] [ebp-128h]
    int v115; // [esp+148h] [ebp-124h]
    int v117; // [esp+15Ch] [ebp-110h]
    int v118; // [esp+164h] [ebp-108h]
    int v119; // [esp+168h] [ebp-104h]
    int v120; // [esp+16Ch] [ebp-100h]
    int v121; // [esp+180h] [ebp-ECh]
    int v122; // [esp+184h] [ebp-E8h]
    int v123; // [esp+190h] [ebp-DCh]
    int v124; // [esp+194h] [ebp-D8h]
    char v125; // [esp+198h] [ebp-D4h]
    int v126; // [esp+19Ch] [ebp-D0h]
    signed int v127; // [esp+1A0h] [ebp-CCh]
    int v128; // [esp+1A4h] [ebp-C8h]
    int v129; // [esp+1A8h] [ebp-C4h]
    int v130; // [esp+1ACh] [ebp-C0h]
    int v131; // [esp+1B0h] [ebp-BCh]
    int v132; // [esp+1BCh] [ebp-B0h]
    unsigned int v133; // [esp+1C0h] [ebp-ACh]
    int v134; // [esp+1C4h] [ebp-A8h]
    int v135; // [esp+1C4h] [ebp-A8h]
    int v136; // [esp+1C8h] [ebp-A4h]
    _BYTE* v137; // [esp+1CCh] [ebp-A0h]
    int v138; // [esp+1D0h] [ebp-9Ch]
    int v139[2]; // [esp+1D4h] [ebp-98h] BYREF
    int v140; // [esp+1DCh] [ebp-90h]
    int v141; // [esp+1E4h] [ebp-88h]
    int v142; // [esp+1E8h] [ebp-84h]
    int v143; // [esp+1ECh] [ebp-80h]
    int v144; // [esp+1F0h] [ebp-7Ch]
    int v145; // [esp+1F4h] [ebp-78h]
    int k; // [esp+1F8h] [ebp-74h]
    _DWORD* v147; // [esp+1FCh] [ebp-70h]
    unsigned __int8* v148; // [esp+200h] [ebp-6Ch]
    struct Concurrency::ISchedulerProxy* v149; // [esp+204h] [ebp-68h]
    int v150; // [esp+208h] [ebp-64h]
    int v151; // [esp+20Ch] [ebp-60h]
    int v152; // [esp+210h] [ebp-5Ch]
    int v153; // [esp+214h] [ebp-58h]
    _DWORD* v154; // [esp+218h] [ebp-54h]
    _BYTE* v155; // [esp+21Ch] [ebp-50h]
    _DWORD* v156; // [esp+220h] [ebp-4Ch]
    Concurrency::details::SchedulerBase* v157; // [esp+224h] [ebp-48h]
    struct Concurrency::ISchedulerProxy* v158; // [esp+228h] [ebp-44h]
    int j; // [esp+22Ch] [ebp-40h]
    _BYTE* v160; // [esp+230h] [ebp-3Ch]
    int v161; // [esp+234h] [ebp-38h]
    int v162; // [esp+238h] [ebp-34h]
    int v163; // [esp+23Ch] [ebp-30h]
    int v164; // [esp+240h] [ebp-2Ch]
    int v165; // [esp+244h] [ebp-28h]
    int v166; // [esp+248h] [ebp-24h]
    int v167; // [esp+24Ch] [ebp-20h]
    unsigned int v168; // [esp+250h] [ebp-1Ch]
    int i; // [esp+254h] [ebp-18h]
    int v170; // [esp+258h] [ebp-14h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+25Ch] [ebp-10h]
    struct Concurrency::ISchedulerProxy* v172; // [esp+260h] [ebp-Ch]
    int v173; // [esp+264h] [ebp-8h]
    int v174; // [esp+268h] [ebp-4h]

    *(_BYTE*)(a1 + 141) = 0;
    *(_BYTE*)(a1 + 142) = 0;
    *(_DWORD*)(a1 + 8) = 0;
    for (i = 0; i < 4; ++i)
    {
        if (*(char*)(i + a1 + 143) > 0)
            --* (_BYTE*)(i + a1 + 143);
    }
    LOWORD(v1) = a1;
    if (*(_DWORD*)(a1 + 124))
    {
        LOBYTE(v161) = sub_425E70(*(_BYTE**)(a1 + 124));
        SchedulerProxy = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124));
        if (SchedulerProxy == (struct Concurrency::ISchedulerProxy*)44
            || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)45
            || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)48)
        {
            *(_BYTE*)(a1 + 141) = rand() % 3 - 1;
            v2 = rand() % 3 - 1;
            LOWORD(v1) = a1;
            *(_BYTE*)(a1 + 142) = v2;
            return (__int16)v1;
        }
        if (sub_425D50(*(_DWORD**)(a1 + 124)))
        {
            v160 = (_BYTE*)sub_426430(*(_DWORD**)(a1 + 124));
            if (!v160
                || (v3 = (unsigned __int8)sub_426070(v160), v3 != (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 124)))
                || !byte_4B99C8)
            {
                *(_BYTE*)(a1 + 147) = 2;
                *(_BYTE*)(a1 + 144) = 1;
                *(_BYTE*)(a1 + 143) = 1;
                *(_BYTE*)(a1 + 148) = 0;
                *(_BYTE*)(a1 + 141) = rand() % 3 - 1;
                v4 = rand() % 3 - 1;
                LOWORD(v1) = a1;
                *(_BYTE*)(a1 + 142) = v4;
                return (__int16)v1;
            }
        }
        if (byte_4B99C8)
        {
            if (*(_DWORD*)a1 == 6 || *(_DWORD*)a1 == 7 || *(_DWORD*)a1 == 8)
            {
                for (j = 0; j < 2; ++j)
                {
                    if (j)
                    {
                        if (j == 1)
                            v157 = *(Concurrency::details::SchedulerBase**)(a1 + 128);
                    }
                    else
                    {
                        v157 = *(Concurrency::details::SchedulerBase**)(a1 + 124);
                    }
                    if (v157)
                        v158 = Concurrency::details::SchedulerBase::GetSchedulerProxy(v157);
                    if (!v157
                        || v158 == (struct Concurrency::ISchedulerProxy*)44
                        || v158 == (struct Concurrency::ISchedulerProxy*)45
                        || v158 == (struct Concurrency::ISchedulerProxy*)46
                        || v158 == (struct Concurrency::ISchedulerProxy*)47
                        || v158 == (struct Concurrency::ISchedulerProxy*)84
                        || v158 == (struct Concurrency::ISchedulerProxy*)85)
                    {
                        *(_DWORD*)(a1 + 132) = 0;
                    }
                }
                if (*(_DWORD*)(a1 + 128))
                {
                    if (sub_41BEA6(*(_DWORD**)(a1 + 128)))
                    {
                        v156 = sub_41F0A9(*(_DWORD**)(a1 + 128));
                        if (unknown_libname_30(v156) != 6 && unknown_libname_30(v156) != 7 && unknown_libname_30(v156) != 8)
                            *(_DWORD*)(a1 + 132) = 0;
                    }
                }
            }
            if (sub_426410(*(_DWORD**)(a1 + 124)))
            {
                v155 = (_BYTE*)sub_426430(*(_DWORD**)(a1 + 124));
                if (v155)
                {
                    if (rand() % 100 < 5)
                    {
                        v5 = (unsigned __int8)sub_426070(v155);
                        if (v5 == (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 124)))
                        {
                            v1 = (struct Concurrency::ISchedulerProxy*)sub_420FA1(*(_DWORD**)(a1 + 124));
                            if (v1)
                            {
                                *(_BYTE*)(a1 + 143) = 1;
                                return (__int16)v1;
                            }
                        }
                    }
                }
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)82)
            {
                v154 = (_DWORD*)sub_4262D0(*(_DWORD**)(a1 + 124));
                if (v154)
                {
                    if (sub_41BEA6(v154))
                    {
                        if (rand() % 100 < 5)
                        {
                            if (sub_4262B0(*(_DWORD**)(a1 + 124)))
                            {
                                v1 = (struct Concurrency::ISchedulerProxy*)sub_420FA1(*(_DWORD**)(a1 + 124));
                                if (v1)
                                {
                                    *(_BYTE*)(a1 + 143) = 1;
                                    return (__int16)v1;
                                }
                            }
                        }
                    }
                }
            }
        }
        if ((!(_BYTE)v161 || (unsigned __int8)v161 == 2 || (unsigned __int8)v161 == 3)
            && !sub_426430(*(_DWORD**)(a1 + 124))
            && (sub_4263B0(*(_DWORD**)(a1 + 124))
                || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)10)
            && !sub_425FF0(*(_DWORD**)(a1 + 124)))
        {
            if (sub_456B0D((unsigned char*)byte_4B9B10, *(_DWORD**)(a1 + 124), 1))
            {
                v1 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124));
                if (v1 == (struct Concurrency::ISchedulerProxy*)10)
                {
                    LOWORD(v1) = a1;
                    *(_BYTE*)(a1 + 145) = 1;
                }
                else
                {
                    *(_BYTE*)(a1 + 143) = 1;
                }
                return (__int16)v1;
            }
            *(_DWORD*)(a1 + 76) = sub_456B0D((unsigned char*)byte_4B9B10, *(_DWORD**)(a1 + 124), 0);
            if (*(_DWORD*)(a1 + 76))
            {
                v6 = *(unsigned __int8*)(a1 + 99);
                if (v6 > rand() % 100)
                {
                    *(_DWORD*)a1 = 4;
                    *(_DWORD*)(a1 + 128) = 0;
                    *(_DWORD*)(a1 + 72) = 0;
                    *(_DWORD*)(a1 + 132) = -1;
                }
            }
        }
        if (*(_DWORD*)(a1 + 128))
        {
            if (unknown_libname_7(*(_DWORD**)(a1 + 128))
                && Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 128)) != (struct Concurrency::ISchedulerProxy*)80)
            {
                if (!*(_DWORD*)a1 && sub_4263D0(*(unsigned char**)(a1 + 128)))
                    *(_DWORD*)a1 = 2;
            }
            else
            {
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 132) = 0;
            }
        }
        if (*(_DWORD*)a1 == 3 && *(_DWORD*)(a1 + 72))
        {
            v152 = sub_446465((char*)byte_4B9B10);
            v153 = sub_426470(*(_DWORD**)(a1 + 72)) / 100 - v152;
            if (sub_425CD0((_DWORD*)byte_4B9B10) == 3)
                v153 = 0;
            if (v153 < 8 || v153 >= 312 || unknown_libname_12(*(_DWORD**)(a1 + 72)))
                *(_DWORD*)(a1 + 132) = 0;
        }
        if (*(_DWORD*)a1 == 4)
        {
            if (*(_DWORD*)(a1 + 76))
            {
                v150 = sub_446465((char*)byte_4B9B10);
                v151 = unknown_libname_22(*(_DWORD**)(a1 + 76)) - v150;
                if (v151 < 8 || v151 >= 312 || !sub_426290(*(unsigned __int8**)(a1 + 76)))
                    *(_DWORD*)(a1 + 132) = 0;
            }
        }
        if (*(_DWORD*)a1 == 2)
        {
            if (sub_4263D0(*(unsigned char**)(a1 + 124)))
            {
                *(_DWORD*)a1 = 0;
            }
            else if (*(_DWORD*)(a1 + 128))
            {
                v149 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 128));
                if (v149 == (struct Concurrency::ISchedulerProxy*)91
                    || v149 == (struct Concurrency::ISchedulerProxy*)92
                    || v149 == (struct Concurrency::ISchedulerProxy*)94
                    || v149 == (struct Concurrency::ISchedulerProxy*)82)
                {
                    *(_DWORD*)a1 = 0;
                }
            }
        }
        if (*(_DWORD*)a1 != 3 && *(_DWORD*)a1 != 4 && !*(_DWORD*)(a1 + 128)
            || *(_DWORD*)a1 == 3 && (sub_425FF0(*(_DWORD**)(a1 + 124)) || !*(_DWORD*)(a1 + 72))
            || *(_DWORD*)a1 == 4 && !*(_DWORD*)(a1 + 76)
            || !*(_DWORD*)(a1 + 132))
        {
            if ((unsigned __int8)v161 != 2
                && (unsigned __int8)v161 != 3
                && byte_4B99C8
                && rand() % 100 < 10
                && sub_4666C5((char*)byte_4B9B10, *(_BYTE**)(a1 + 124)) > 0
                && !sub_425FF0(*(_DWORD**)(a1 + 124))
                && !sub_426410(*(_DWORD**)(a1 + 124))
                && !sub_425D50(*(_DWORD**)(a1 + 124))
                && !sub_426430(*(_DWORD**)(a1 + 124)))
            {
                *(_BYTE*)(a1 + 146) = 1;
                *(_BYTE*)(a1 + rand() % 2 + 143) = 1;
            }
            *(_DWORD*)(a1 + 72) = 0;
            if (!(_BYTE)v161 && !sub_425FF0(*(_DWORD**)(a1 + 124)) && rand() % 100 < *(unsigned __int8*)(a1 + 86))
            {
                *(_DWORD*)a1 = 3;
                *(_DWORD*)(a1 + 72) = (_DWORD)sub_41FE85(a1);
                *(_DWORD*)(a1 + 132) = rand() % 300 + 150;
                if (*(_DWORD*)(a1 + 72))
                {
                    v7 = sub_426090(*(_DWORD**)(a1 + 124));
                    if (v7 - sub_426470(*(_DWORD**)(a1 + 72)) <= 0)
                    {
                        v9 = sub_426090(*(_DWORD**)(a1 + 124));
                        v115 = sub_426470(*(_DWORD**)(a1 + 72)) - v9;
                    }
                    else
                    {
                        v8 = sub_426090(*(_DWORD**)(a1 + 124));
                        v115 = v8 - sub_426470(*(_DWORD**)(a1 + 72));
                    }
                    *(_DWORD*)(a1 + 132) += v115 / 100;
                }
            }
            v148 = sub_41B465((_DWORD*)a1);
            if (!v148)
            {
                LOWORD(v1) = a1;
                *(_DWORD*)(a1 + 128) = 0;
                return (__int16)v1;
            }
            *(_DWORD*)(a1 + 132) = rand() % 300 + 150;
            *(_DWORD*)(a1 + 128) = (_DWORD)v148;
            if (!*(_DWORD*)(a1 + 72))
            {
                if ((_BYTE)v161
                    || sub_4263D0(*(unsigned char**)(a1 + 124))
                    || !sub_4263D0(*(unsigned char**)(a1 + 128)) && rand() % 100 >= 20)
                {
                    *(_DWORD*)a1 = 0;
                }
                else
                {
                    *(_DWORD*)a1 = 2;
                }
            }
        }
        if (*(_DWORD*)(a1 + 128))
        {
            v147 = sub_41F0A9(*(_DWORD**)(a1 + 128));
            if (v147)
            {
                if (unknown_libname_30(v147) == 2 && *(_DWORD*)a1 == 2)
                    *(_DWORD*)a1 = 0;
            }
        }
        if (*(int*)(a1 + 132) > 0)
            --* (_DWORD*)(a1 + 132);
        if (sub_4263D0(*(unsigned char**)(a1 + 124))
            || sub_425FF0(*(_DWORD**)(a1 + 124))
            || rand() % 100 >= 50
            && Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) != (struct Concurrency::ISchedulerProxy*)77
            || !sub_41BB24((_DWORD*)a1))
        {
            *(_DWORD*)(a1 + 136) = 0;
        }
        else
        {
            ++* (_DWORD*)(a1 + 136);
            *(_BYTE*)(a1 + 145) = 1;
        }
        if (*(int*)(a1 + 136) >= 120)
            *(_BYTE*)(a1 + 141) = rand() % 3 - 1;
        if (*(_DWORD*)a1 == 2)
        {
            sub_422573((_DWORD*)a1);
            sub_4227A2((_DWORD*)a1);
        }
        sub_4219B1((_DWORD*)a1);
        v172 = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124));
        v163 = *(_DWORD*)(a1 + 24);
        v162 = *(_DWORD*)(a1 + 28);
        v10 = -*(_DWORD*)(a1 + 32);
        v164 = sub_4260D0(*(_DWORD**)(a1 + 124)) + v10;
        v165 = v163 - sub_426090(*(_DWORD**)(a1 + 124));
        v170 = v162 - sub_4260B0(*(_DWORD**)(a1 + 124));
        v168 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124));
        v166 = sub_426390(*(_DWORD**)(a1 + 124));
        if (!*(_DWORD*)a1
            && *(_DWORD*)(a1 + 128)
            && sub_41BEA6(*(_DWORD**)(a1 + 128))
            && Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 128)) == (struct Concurrency::ISchedulerProxy*)200
            || v172 != (struct Concurrency::ISchedulerProxy*)13
            || !*(_BYTE*)(a1 + 94))
        {
            goto LABEL_197;
        }
        for (k = 0; k < 2; ++k)
        {
            if (k)
            {
                v145 = v165;
                v142 = v170;
            }
            else
            {
                v138 = sub_446465((char*)byte_4B9B10);
                v144 = (v163 / 100 - v138 + 32) / 128 - 1;
                v141 = (*(_DWORD*)(a1 + 68) / 2 + v162 / 100) / (3 * *(_DWORD*)(a1 + 68)) - 1;
            }
            sub_42532C(*(_DWORD**)(a1 + 124), *(&v144 + k), *(&v141 + k), k, &v139[2 * k]);
            v139[2 * k] = v163 - v139[2 * k];
            v139[2 * k + 1] = v162 - v139[2 * k + 1];
            if (v139[2 * k] <= 0)
                v114 = -v139[2 * k];
            else
                v114 = v139[2 * k];
            if (v139[2 * k + 1] <= 0)
                v113 = -v139[2 * k + 1];
            else
                v113 = v139[2 * k + 1];
            v139[2 * k] = v113 + v114;
        }
        if (v165 <= 0)
            v112 = -v165;
        else
            v112 = v165;
        if (v170 <= 0)
            v111 = -v170;
        else
            v111 = v170;
        v143 = v111 + v112;
        if (v139[0] < v111 + v112 && v139[0] < v140)
        {
            if (v144 <= 0)
                v110 = (v144 >= 0) - 1;
            else
                v110 = 1;
            *(_BYTE*)(a1 + 141) = v110;
            if (v141 <= 0)
                v109 = (v141 >= 0) - 1;
            else
                v109 = 1;
            *(_BYTE*)(a1 + 142) = v109;
            LOWORD(v1) = a1;
            *(_BYTE*)(a1 + 143) = 1;
            *(_BYTE*)(a1 + 144) = 0;
            *(_BYTE*)(a1 + 145) = 0;
            return (__int16)v1;
        }
        if (v140 >= v143 || v140 >= v139[0])
        {
        LABEL_197:
            if (v165 <= 0)
                v106 = -v165;
            else
                v106 = v165;
            if (v106 > 12800 || (v170 <= 0 ? (v105 = -v170) : (v105 = v170), v105 > 4400))
            {
                if (!sub_425D30(*(_DWORD**)(a1 + 124))
                    && *(_BYTE*)(a1 + 94)
                    && Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(a1 + 124))
                    && !(rand() % 10))
                {
                    *(_BYTE*)(a1 + 147) = 1;
                    *(_BYTE*)(a1 + 144) = 1;
                    *(_BYTE*)(a1 + 143) = 1;
                    *(_BYTE*)(a1 + 148) = 0;
                }
            }
            if (!*(_DWORD*)(a1 + 4) || *(_DWORD*)a1 == 6 || *(_DWORD*)a1 == 7 || *(_DWORD*)a1 == 8)
            {
                v165 = 100 * (v165 / 100);
                v170 = 100 * (v170 / 100);
            }
            else
            {
                v163 = *(_DWORD*)(a1 + 36);
                v162 = *(_DWORD*)(a1 + 40);
                v11 = sub_426090(*(_DWORD**)(a1 + 124));
                v165 = 800 * (v163 - v11 / 800);
                v12 = sub_4260B0(*(_DWORD**)(a1 + 124));
                v170 = 800 * (v162 - v12 / 800);
            }
            v164 = 100 * (v164 / 100);
            if (v165 <= 0)
                v104 = -v165;
            else
                v104 = v165;
            if (v170 <= 0)
                v103 = -v170;
            else
                v103 = v170;
            v167 = v103 + v104;
            if (sub_426410(*(_DWORD**)(a1 + 124)))
            {
                v137 = (_BYTE*)sub_426430(*(_DWORD**)(a1 + 124));
                if (!v137
                    || (v13 = (unsigned __int8)sub_426070(v137), v13 != (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 124))))
                {
                    if (sub_41BA53(*(_DWORD*)(a1 + 124), 0x24u, 0))
                        *(_BYTE*)(a1 + 144) = 1;
                    else
                        *(_BYTE*)(a1 + rand() % 2 + 143) = 1;
                }
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)52
                || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)53
                || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)69)
            {
                if ((unsigned __int8)v161 == 2 || (unsigned __int8)v161 == 3)
                    *(_BYTE*)(a1 + 143) = 1;
                else
                    *(_BYTE*)(a1 + rand() % 2 + 143) = 1;
            }
            if (*(_DWORD*)a1 != 2 && *(_DWORD*)a1 != 6 && *(_DWORD*)a1 != 7 && *(_DWORD*)a1 != 8)
                sub_420119(a1);
            if (*(_DWORD*)a1 != 2 || *(_DWORD*)(a1 + 4))
            {
                if (sub_425D30(*(_DWORD**)(a1 + 124)))
                {
                    if (*(_BYTE*)(a1 + 147))
                    {
                        ++* (_BYTE*)(a1 + 148);
                        if (*(_BYTE*)(a1 + 147) == 1 && *(unsigned __int8*)(a1 + 148) < 3u
                            || *(_BYTE*)(a1 + 147) == 2 && *(unsigned __int8*)(a1 + 148) < 8u)
                        {
                            *(_BYTE*)(a1 + 144) = 1;
                            *(_BYTE*)(a1 + 143) = 1;
                        }
                        else
                        {
                            *(_BYTE*)(a1 + 147) = 0;
                        }
                    }
                    if (*(_DWORD*)(a1 + 4))
                    {
                        if (sub_425D70(*(_DWORD**)(a1 + 124)))
                            *(_BYTE*)(a1 + 141) = 1;
                        else
                            *(_BYTE*)(a1 + 141) = -1;
                    }
                    else if (*(_DWORD*)a1 != 2
                        && *(_DWORD*)a1 != 3
                        && *(_DWORD*)a1 != 6
                        && *(_DWORD*)a1 != 7
                        && *(_DWORD*)a1 != 8)
                    {
                        v57 = v170 <= 0 ? -v170 : v170;
                        if (v57 < 500)
                        {
                            v56 = v165 <= 0 ? -v165 : v165;
                            if (v56 < 6400)
                            {
                                v55 = v164 <= 0 ? -v164 : v164;
                                if (v55 < 3200)
                                {
                                    if (v165 < 0 && sub_425D70(*(_DWORD**)(a1 + 124)))
                                    {
                                        *(_BYTE*)(a1 + 141) = -1;
                                    }
                                    else if (v165 > 0 && !sub_425D70(*(_DWORD**)(a1 + 124)))
                                    {
                                        *(_BYTE*)(a1 + 141) = 1;
                                    }
                                }
                            }
                        }
                    }
                }
                else if (*(_DWORD*)a1 == 6 || *(_DWORD*)a1 == 7 || *(_DWORD*)a1 == 8)
                {
                    if (v165 <= 0)
                        v102 = -v165;
                    else
                        v102 = v165;
                    if (v102 <= 8000 || *(_DWORD*)a1 == 8)
                    {
                        if (v165 <= 0)
                            v101 = -v165;
                        else
                            v101 = v165;
                        if (v101 < 4000 && sub_426350(*(unsigned __int8**)(a1 + 124)))
                        {
                            v14 = sub_425D70(*(_DWORD**)(a1 + 124)) == 0;
                            *(_BYTE*)(a1 + 141) = v14 - sub_425D70(*(_DWORD**)(a1 + 124));
                        }
                        else
                        {
                            if (v165 <= 0)
                                v100 = -v165;
                            else
                                v100 = v165;
                            if (v100 > 1200 && *(_DWORD*)a1 == 7)
                            {
                                if (v165 <= 0)
                                    v99 = (v165 >= 0) - 1;
                                else
                                    v99 = 1;
                                *(_BYTE*)(a1 + 141) = v99;
                            }
                            else
                            {
                                if (v165 <= 0)
                                    v98 = -v165;
                                else
                                    v98 = v165;
                                if (v98 <= 1200 && *(_DWORD*)a1 == 7)
                                {
                                    if (v165)
                                    {
                                        if (v165 <= 0)
                                            v97 = (v165 >= 0) - 1;
                                        else
                                            v97 = 1;
                                        *(_BYTE*)(a1 + 141) = -v97;
                                    }
                                    else
                                    {
                                        *(_BYTE*)(a1 + 141) = 2 * (rand() % 2) - 1;
                                    }
                                }
                                else
                                {
                                    if (v165 <= 0)
                                        v96 = (v165 >= 0) - 1;
                                    else
                                        v96 = 1;
                                    *(_BYTE*)(a1 + 141) = v96;
                                }
                            }
                        }
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 84) = 1;
                    }
                    if (v170 <= 0)
                        v95 = -v170;
                    else
                        v95 = v170;
                    if (v95 > 500)
                    {
                        if (v170 <= 0)
                            v94 = (v170 >= 0) - 1;
                        else
                            v94 = 1;
                        *(_BYTE*)(a1 + 142) = v94;
                    }
                    if (*(_DWORD*)a1 == 6
                        && !sub_425D50(*(_DWORD**)(a1 + 124))
                        && Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(a1 + 124)))
                    {
                        v134 = (3 * sub_41D067(*(_DWORD*)(a1 + 124), 0) / 2 + 405) / 15 - 7;
                        v135 = v134 + (v134 < 0 ? 7 : 0);
                        v15 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) * v135;
                        v133 = sub_426090(*(_DWORD**)(a1 + 124)) + v15;
                        v16 = sub_426390(*(_DWORD**)(a1 + 124)) * v135;
                        v136 = sub_4260B0(*(_DWORD**)(a1 + 124)) + v16;
                        v93 = (int)(v133 - v163) <= 0 ? v163 - v133 : v133 - v163;
                        if (v93 < 400)
                        {
                            v92 = v136 - v162 <= 0 ? v162 - v136 : v136 - v162;
                            if (v92 <= 500)
                            {
                                if (v165 <= 0)
                                    v91 = -v165;
                                else
                                    v91 = v165;
                                if (v91 < 400)
                                    *(_BYTE*)(a1 + 141) = 0;
                                if (v170 <= 0)
                                    v90 = -v170;
                                else
                                    v90 = v170;
                                if (v90 < 500)
                                    *(_BYTE*)(a1 + 142) = 0;
                                *(_BYTE*)(a1 + 147) = 2;
                                *(_BYTE*)(a1 + 144) = 1;
                                *(_BYTE*)(a1 + 143) = 1;
                                *(_BYTE*)(a1 + 148) = 0;
                            }
                        }
                    }
                }
                else
                {
                    if (*(_DWORD*)(a1 + 4))
                    {
                        v132 = sub_426090(*(_DWORD**)(a1 + 124)) / 800;
                        if (v132 - *(_DWORD*)(a1 + 36) <= 0)
                            v89 = *(_DWORD*)(a1 + 36) - v132;
                        else
                            v89 = v132 - *(_DWORD*)(a1 + 36);
                        if (v89 >= 2
                            && *(unsigned __int16*)(*(_DWORD*)(a1 + 52)
                                + 2 * (*(_DWORD*)(a1 + 64) * *(_DWORD*)(a1 + 40) + *(_DWORD*)(a1 + 36)))
                            - *(unsigned __int16*)(*(_DWORD*)(a1 + 52)
                                + 2 * (*(_DWORD*)(a1 + 64) * (sub_4260B0(*(_DWORD**)(a1 + 124)) / 800) + v132)) == 1)
                        {
                            *(_BYTE*)(a1 + 147) = 2;
                            *(_BYTE*)(a1 + 144) = 1;
                            *(_BYTE*)(a1 + 143) = 1;
                            *(_BYTE*)(a1 + 148) = 0;
                        }
                    }
                    else if (*(_DWORD*)a1 == 3
                        && (v165 <= 0 ? (v88 = -v165) : (v88 = v165),
                            v88 <= 700
                            && (v170 <= 0 ? (v87 = -v170) : (v87 = v170),
                                v87 <= 500 && (v164 <= 0 ? (v86 = -v164) : (v86 = v164), v86 <= 300))))
                    {
                        if (sub_4263B0(*(_DWORD**)(a1 + 124)))
                            *(_BYTE*)(a1 + 143) = 1;
                    }
                    else if (*(_DWORD*)a1 == 3
                        || (v170 <= 0 ? (v85 = -v170) : (v85 = v170),
                            v85 >= 500 || (v165 <= 0 ? (v84 = -v165) : (v84 = v165), v84 >= 400)))
                    {
                        if (*(_DWORD*)a1 == 3
                            || !sub_4263B0(*(_DWORD**)(a1 + 124))
                            || rand() % 99 >= 50
                            || (v170 <= 0 ? (v82 = -v170) : (v82 = v170),
                                v82 >= 500 || (v165 <= 0 ? (v81 = -v165) : (v81 = v165), v81 >= 1600 || v164)))
                        {
                            if (*(_DWORD*)a1 != 3)
                            {
                                v79 = v170 <= 0 ? -v170 : v170;
                                if (v79 < 500)
                                {
                                    v78 = v165 <= 0 ? -v165 : v165;
                                    if (v78 < 2400)
                                    {
                                        v77 = v164 <= 0 ? -v164 : v164;
                                        if (v77 < 1600)
                                        {
                                            if (v165 <= 0)
                                                v76 = (v165 >= 0) - 1;
                                            else
                                                v76 = 1;
                                            *(_BYTE*)(a1 + 141) = v76;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            if (v165 <= 0)
                                v80 = (v165 >= 0) - 1;
                            else
                                v80 = 1;
                            *(_BYTE*)(a1 + 141) = v80;
                            *(_BYTE*)(a1 + 143) = 1;
                            *(_BYTE*)(a1 + 145) = 1;
                        }
                    }
                    else if (v165)
                    {
                        if (v165 <= 0)
                            v83 = (v165 >= 0) - 1;
                        else
                            v83 = 1;
                        *(_BYTE*)(a1 + 141) = -v83;
                    }
                    else
                    {
                        *(_BYTE*)(a1 + 141) = 2 * (rand() % 2) - 1;
                    }
                    if (!*(_BYTE*)(a1 + 141) && !*(_BYTE*)(a1 + 142))
                    {
                        v17 = 18 * (3 * sub_41CA5F(*(_DWORD*)(a1 + 124), 0) + 20);
                        v129 = v17 * (unsigned __int8)sub_47421B((char*)byte_4B9B10) / 50;
                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)10
                            || (*(_DWORD*)a1 == 3
                                || *(_DWORD*)a1 == 4
                                || *(_DWORD*)(a1 + 4)
                                || rand() % 100 >= 10
                                || (v170 <= 0 ? (v75 = -v170) : (v75 = v170), v75 >= 500))
                            && (v165 <= 0 ? (v74 = -v165) : (v74 = v165), v74 <= 8000))
                        {
                            if ((*(_DWORD*)a1 == 3 || *(_DWORD*)(a1 + 4))
                                && Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)10
                                && (v165 <= 0 ? (v73 = -v165) : (v73 = v165), v73 < v129))
                            {
                                if (v165 <= 0)
                                    v72 = (v165 >= 0) - 1;
                                else
                                    v72 = 1;
                                *(_BYTE*)(a1 + 141) = -v72;
                            }
                            else if (*(_DWORD*)a1 == 3
                                && (v165 <= 0 ? (v71 = -v165) : (v71 = v165),
                                    v71 > 800 || (v164 <= 0 ? (v70 = -v164) : (v70 = v164), v70 > 400)))
                            {
                                if (v165 <= 0)
                                    v69 = (v165 >= 0) - 1;
                                else
                                    v69 = 1;
                                *(_BYTE*)(a1 + 141) = v69;
                            }
                            else if (*(_DWORD*)(a1 + 4) || (v165 <= 0 ? (v68 = -v165) : (v68 = v165), v68 > 2400 || v164 < -800))
                            {
                                if (v165 <= 0)
                                    v67 = (v165 >= 0) - 1;
                                else
                                    v67 = 1;
                                *(_BYTE*)(a1 + 141) = v67;
                            }
                        }
                        else
                        {
                            *(_BYTE*)(a1 + 84) = 1;
                        }
                        if (*(_DWORD*)a1 == 3
                            && (v170 <= 0 ? (v66 = -v170) : (v66 = v170),
                                v66 > 400 || (v164 <= 0 ? (v65 = -v164) : (v65 = v164), v65 > 400)))
                        {
                            if (v170 <= 0)
                                v64 = (v170 >= 0) - 1;
                            else
                                v64 = 1;
                            *(_BYTE*)(a1 + 142) = v64;
                        }
                        else if (*(_DWORD*)(a1 + 4) || (v170 <= 0 ? (v63 = -v170) : (v63 = v170), v63 > 500))
                        {
                            if (v170 <= 0)
                                v62 = (v170 >= 0) - 1;
                            else
                                v62 = 1;
                            *(_BYTE*)(a1 + 142) = v62;
                        }
                        v18 = sub_41D067(*(_DWORD*)(a1 + 124), 0);
                        v131 = (int)(12 * v168 * ((3 * v18 / 2 + 405) / 15)) / 10;
                        v19 = sub_41D067(*(_DWORD*)(a1 + 124), 0);
                        v130 = 12 * v166 * ((3 * v19 / 2 + 405) / 15) / 10;
                        if (!*(_DWORD*)(a1 + 4)
                            && !(_BYTE)v161
                            && Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(a1 + 124)))
                        {
                            v61 = v130 <= 0 ? (v130 >= 0) - 1 : 1;
                            v60 = v131 <= 0 ? (v131 >= 0) - 1 : 1;
                            if (sub_423F94((_DWORD*)a1, 800 * v60 + v131, 800 * v61 + v130) && !*(_DWORD*)a1)
                            {
                                v59 = v170 <= 0 ? -v170 : v170;
                                if (v59 < 3200)
                                {
                                    v58 = v165 <= 0 ? -v165 : v165;
                                    if (v58 < 8000 && (rand() % 100 < 3 || v164 >= 3200 || sub_425D50(*(_DWORD**)(a1 + 124))))
                                    {
                                        if (v164 < 3200 && rand() % 2)
                                            *(_BYTE*)(a1 + 147) = 1;
                                        else
                                            *(_BYTE*)(a1 + 147) = 2;
                                        *(_BYTE*)(a1 + 144) = 1;
                                        *(_BYTE*)(a1 + 143) = 1;
                                        *(_BYTE*)(a1 + 148) = 0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
            if (Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(a1 + 124)))
            {
                v20 = sub_426090(*(_DWORD**)(a1 + 124));
                v127 = 400 * *(char*)(a1 + 141)
                    + Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124))
                    + v20;
                v21 = sub_4260B0(*(_DWORD**)(a1 + 124));
                v126 = 400 * *(char*)(a1 + 142) + sub_426390(*(_DWORD**)(a1 + 124)) + v21;
                v128 = -100 * sub_446497((_DWORD*)byte_4B9B10, v127 / 100, v126 / 100);
                if (v128 != -102000)
                {
                    if ((v125 = sub_4464F6((_DWORD*)byte_4B9B10, v127 / 800, v126 / 800),
                        v124 = sub_4260D0(*(_DWORD**)(a1 + 124)) - v128,
                        *(_DWORD*)(a1 + 4))
                        && v124 > 800
                        || v124 >= 800 && v124 <= 3200
                        || v125 == 9
                        || v125 == 14
                        || v125 == 15)
                    {
                        *(_BYTE*)(a1 + 147) = 2;
                        *(_BYTE*)(a1 + 144) = 1;
                        *(_BYTE*)(a1 + 143) = 1;
                        *(_BYTE*)(a1 + 148) = 0;
                    }
                }
            }
            if (Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(a1 + 124)))
            {
                if (*(_BYTE*)(a1 + 143) == 1 && *(_BYTE*)(a1 + 144) == 1)
                {
                    v22 = sub_41D067(*(_DWORD*)(a1 + 124), 0);
                    v123 = (int)(12 * v168 * ((3 * v22 / 2 + 405) / 15)) / 10;
                    v23 = sub_41D067(*(_DWORD*)(a1 + 124), 0);
                    if (!sub_4244B5((_DWORD*)a1,(_DWORD)v123, 12 * v166 * ((3 * v23 / 2 + 405) / 15) / 10))
                    {
                        *(_BYTE*)(a1 + 144) = 0;
                        *(_BYTE*)(a1 + 143) = 0;
                    }
                }
            }
            if (*(_DWORD*)(a1 + 128))
            {
                if (!sub_425E70(*(_BYTE**)(a1 + 124))
                    && !*(_BYTE*)(a1 + 85)
                    && Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 128)) == (struct Concurrency::ISchedulerProxy*)91)
                {
                    v24 = (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 124));
                    if (v24 != (unsigned __int8)sub_426070(*(_BYTE**)(a1 + 128)))
                    {
                        if (*(_BYTE*)(a1 + 84))
                        {
                            if (v165 <= 0)
                                v54 = (v165 >= 0) - 1;
                            else
                                v54 = 1;
                            *(_BYTE*)(a1 + 141) = v54;
                            *(_BYTE*)(a1 + 84) = 0;
                        }
                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)10)
                        {
                            if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) <= 0)
                                v53 = ((Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) & 0x80000000) == 0)
                                - 1;
                            else
                                v53 = 1;
                            *(_BYTE*)(a1 + 141) = -v53;
                        }
                        if (v165 <= 0)
                            v52 = -v165;
                        else
                            v52 = v165;
                        if (v52 > 3200)
                            *(_BYTE*)(a1 + 142) = 0;
                    }
                }
            }
            if (*(_BYTE*)(a1 + 84))
            {
                if (v165 <= 0)
                    v51 = (v165 >= 0) - 1;
                else
                    v51 = 1;
                v122 = 0;
                if (!*(_DWORD*)a1)
                {
                    if (v170 <= 0)
                        v50 = (v170 >= 0) - 1;
                    else
                        v50 = 1;
                    v122 = v50;
                }
                v25 = 6 * (3 * sub_41CA5F(*(_DWORD*)(a1 + 124), 0) + 20);
                v34 = 800 * v122 + v122 * (v25 * (unsigned __int8)sub_47421B((char*)byte_4B9B10) / 50);
                v26 = 18 * (3 * sub_41CA5F(*(_DWORD*)(a1 + 124), 0) + 20);
                v27 = sub_47421B((char*)byte_4B9B10);
                if (!sub_423F94((_DWORD*)a1, 800 * v51 + v51 * (v26 * v27 / 50), v34))
                    *(_BYTE*)(a1 + 84) = 0;
            }
            if (*(_BYTE*)(a1 + 84))
            {
                if (v165 <= 0)
                    v49 = (v165 >= 0) - 1;
                else
                    v49 = 1;
                v121 = sub_426090(*(_DWORD**)(a1 + 124)) / 100 + 4 * (v49 / 100);
                v28 = sub_4260B0(*(_DWORD**)(a1 + 124));
                if (sub_446497((int*)byte_4B9B10, v121, v28 / 100) >= 1020)
                {
                    *(_BYTE*)(a1 + 84) = 0;
                }
                else
                {
                    if (!v165)
                        *(_BYTE*)(a1 + 84) = 0;
                    if (v165 <= 0)
                        v48 = (v165 >= 0) - 1;
                    else
                        v48 = 1;
                    *(_BYTE*)(a1 + 141) = dword_4B93AC % 2u * v48;
                    if ((unsigned __int8)sub_4263F0(*(char**)(a1 + 124)) == 2)
                        *(_BYTE*)(a1 + 84) = 0;
                }
            }
            if (*(_BYTE*)(a1 + 85) == 1)
            {
                *(_BYTE*)(a1 + 142) = -(dword_4B93AC % 2u);
                if ((unsigned __int8)sub_426310(*(char**)(a1 + 124)) == 2)
                    *(_BYTE*)(a1 + 85) = 0;
            }
            else if (*(_BYTE*)(a1 + 85) == 2)
            {
                *(_BYTE*)(a1 + 142) = dword_4B93AC % 2u;
                if ((unsigned __int8)sub_4262F0(*(char**)(a1 + 124)) == 2)
                    *(_BYTE*)(a1 + 85) = 0;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 124)) == (struct Concurrency::ISchedulerProxy*)10)
            {
                v117 = 0;
                v29 = sub_426090(*(_DWORD**)(a1 + 124)) / 100;
                v120 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) / 100
                    + v29;
                v119 = sub_4260B0(*(_DWORD**)(a1 + 124)) / 100;
                if (sub_446497((int*)byte_4B9B10, v120, v119) == 1020)
                    v117 = 1;
                v118 = sub_41CA5F(*(_DWORD*)(a1 + 124), 0);
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) <= 0)
                    v47 = ((Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) & 0x80000000) == 0)
                    - 1;
                else
                    v47 = 1;
                if (sub_426390(*(int**)(a1 + 124)) <= 0)
                    v46 = (sub_426390(*(int**)(a1 + 124)) >= 0) - 1;
                else
                    v46 = 1;
                if (v47 < 0 && *(char*)(a1 + 141) > 0 || v47 > 0 && *(char*)(a1 + 141) < 0)
                {
                    if (v46)
                    {
                        v30 = sub_47421B((char*)byte_4B9B10);
                        if (!sub_423F94((int*)a1, 0, v46 * (6 * (3 * v118 + 20) * v30 / 50)))
                            *(_BYTE*)(a1 + 141) = v47;
                    }
                }
                v31 = sub_47421B((char*)byte_4B9B10);
                if (!sub_423F94((int*)a1, 800 * v47 + v47 * (18 * (3 * v118 + 20) * v31 / 50), 0))
                {
                    v117 = 1;
                    *(_BYTE*)(a1 + 84) = 0;
                }
                if (v46 && !sub_423F94((int*)a1, 0, 800 * v46))
                    *(_BYTE*)(a1 + 142) = 0;
                if (v46)
                {
                    v32 = sub_47421B((char*)byte_4B9B10);
                    if (!sub_423F94((int*)a1, 0, v46 * (6 * (3 * v118 + 20) * v32 / 50)))
                    {
                        *(_BYTE*)(a1 + 143) = 0;
                        *(_BYTE*)(a1 + 144) = 0;
                    }
                }
                if (v117)
                {
                    if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) <= 0)
                        v45 = ((Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 124)) & 0x80000000) == 0)
                        - 1;
                    else
                        v45 = 1;
                    *(_BYTE*)(a1 + 141) = -v45;
                }
            }
            v174 = sub_426090(*(_DWORD**)(a1 + 124)) / 100;
            v173 = sub_4260B0(*(_DWORD**)(a1 + 124)) / 100;
            if (*(_DWORD*)a1 == 3 && v174 == *(_DWORD*)(a1 + 12) && v173 == *(_DWORD*)(a1 + 16))
            {
                v44 = *(__int16*)(a1 + 20) <= 0 ? -*(__int16*)(a1 + 20) : *(__int16*)(a1 + 20);
                if (v44 > 60
                    || (*(__int16*)(a1 + 22) <= 0 ? (v43 = -*(__int16*)(a1 + 22)) : (v43 = *(__int16*)(a1 + 22)), v43 > 60))
                {
                    *(_DWORD*)a1 = 0;
                }
            }
            *(_DWORD*)(a1 + 12) = v174;
            *(_DWORD*)(a1 + 16) = v173;
            if (*(_BYTE*)(a1 + 141) && *(_WORD*)(a1 + 20))
            {
                v42 = *(char*)(a1 + 141) <= 0 ? (*(char*)(a1 + 141) >= 0) - 1 : 1;
                v41 = *(__int16*)(a1 + 20) <= 0 ? (*(__int16*)(a1 + 20) >= 0) - 1 : 1;
                if (v42 != v41)
                {
                    v40 = *(__int16*)(a1 + 20) <= 0 ? -*(__int16*)(a1 + 20) : *(__int16*)(a1 + 20);
                    if (v40 <= 5)
                    {
                        if (*(__int16*)(a1 + 20) <= 0)
                            v39 = (*(__int16*)(a1 + 20) >= 0) - 1;
                        else
                            v39 = 1;
                        *(_BYTE*)(a1 + 141) = v39;
                    }
                }
            }
            if (*(_BYTE*)(a1 + 141)
                && (!*(_WORD*)(a1 + 20)
                    || (*(char*)(a1 + 141) <= 0 ? (v38 = (*(char*)(a1 + 141) >= 0) - 1) : (v38 = 1),
                        *(__int16*)(a1 + 20) <= 0 ? (v37 = (*(__int16*)(a1 + 20) >= 0) - 1) : (v37 = 1),
                        v38 == v37)))
            {
                *(_WORD*)(a1 + 20) += *(char*)(a1 + 141);
            }
            else
            {
                *(_WORD*)(a1 + 20) = *(char*)(a1 + 141);
            }
            if (*(_BYTE*)(a1 + 142)
                && (!*(_WORD*)(a1 + 22)
                    || (*(char*)(a1 + 142) <= 0 ? (v36 = (*(char*)(a1 + 142) >= 0) - 1) : (v36 = 1),
                        *(__int16*)(a1 + 22) <= 0 ? (v35 = (*(__int16*)(a1 + 22) >= 0) - 1) : (v35 = 1),
                        v36 == v35)))
            {
                LOWORD(v1) = *(char*)(a1 + 142) + *(_WORD*)(a1 + 22);
                *(_WORD*)(a1 + 22) = (_WORD)v1;
            }
            else
            {
                LOWORD(v1) = *(char*)(a1 + 142);
                *(_WORD*)(a1 + 22) = (_WORD)v1;
            }
            if (v172 == (struct Concurrency::ISchedulerProxy*)13)
            {
                LOWORD(v1) = *(unsigned __int8*)(a1 + 94);
                if (*(_BYTE*)(a1 + 94))
                {
                    *(_BYTE*)(a1 + 143) = 0;
                    *(_BYTE*)(a1 + 144) = 0;
                }
            }
        }
        else
        {
            if (v145 <= 0)
                v108 = (v145 >= 0) - 1;
            else
                v108 = 1;
            *(_BYTE*)(a1 + 141) = v108;
            if (v142 <= 0)
                v107 = (v142 >= 0) - 1;
            else
                v107 = 1;
            *(_BYTE*)(a1 + 142) = v107;
            *(_BYTE*)(a1 + 143) = 0;
            LOWORD(v1) = a1;
            *(_BYTE*)(a1 + 144) = 1;
            *(_BYTE*)(a1 + 145) = 0;
        }
    }
    return (__int16)v1;
}
