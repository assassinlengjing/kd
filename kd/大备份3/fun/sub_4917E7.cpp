#include "sub.h" 
//int __fastcall sub_4917E7(int a1, int a2, int a3, int a4, int a5, int a6)
//{
//    __int64 v6; // rax
//    int v7; // esi
//    int v8; // esi
//    int v9; // esi
//    int v10; // esi
//    int v11; // esi
//    int v12; // esi
//    int v13; // esi
//    int v14; // esi
//    int v15; // eax
//    int v16; // esi
//    int v17; // esi
//    int v18; // esi
//    int v19; // esi
//    int v20; // esi
//    int v21; // esi
//    int v22; // esi
//    int v23; // esi
//    int v24; // esi
//    int v25; // esi
//    int v26; // esi
//    int v27; // esi
//    int v28; // esi
//    int v29; // esi
//    int v30; // esi
//    int v31; // esi
//    int v32; // esi
//    int v33; // esi
//    int v34; // esi
//    int v36; // [esp+Ch] [ebp-27Ch]
//    int v37; // [esp+2Ch] [ebp-25Ch]
//    int v38; // [esp+30h] [ebp-258h]
//    unsigned int v39; // [esp+34h] [ebp-254h]
//    int v40; // [esp+50h] [ebp-238h]
//    int v41; // [esp+54h] [ebp-234h]
//    int v42; // [esp+68h] [ebp-220h]
//    int v43; // [esp+6Ch] [ebp-21Ch]
//    int v44; // [esp+80h] [ebp-208h]
//    int v45; // [esp+84h] [ebp-204h]
//    int v46; // [esp+98h] [ebp-1F0h]
//    int v47; // [esp+9Ch] [ebp-1ECh]
//    int v48; // [esp+B8h] [ebp-1D0h]
//    int v49; // [esp+BCh] [ebp-1CCh]
//    unsigned int v50; // [esp+C0h] [ebp-1C8h]
//    int v51; // [esp+D4h] [ebp-1B4h]
//    unsigned int v52; // [esp+D8h] [ebp-1B0h]
//    int v53; // [esp+104h] [ebp-184h]
//    int v54; // [esp+108h] [ebp-180h]
//    unsigned int v55; // [esp+10Ch] [ebp-17Ch]
//    int v56; // [esp+118h] [ebp-170h]
//    int v57; // [esp+11Ch] [ebp-16Ch]
//    int v58; // [esp+120h] [ebp-168h]
//    int v59; // [esp+124h] [ebp-164h]
//    int v60; // [esp+128h] [ebp-160h]
//    int v61; // [esp+12Ch] [ebp-15Ch]
//    double v62; // [esp+144h] [ebp-144h]
//    int v63; // [esp+14Ch] [ebp-13Ch]
//    int v64; // [esp+150h] [ebp-138h]
//    int v65; // [esp+164h] [ebp-124h]
//    unsigned int v66; // [esp+168h] [ebp-120h]
//    int v68; // [esp+170h] [ebp-118h]
//    int v69; // [esp+174h] [ebp-114h]
//    int v70; // [esp+178h] [ebp-110h]
//    double v71; // [esp+17Ch] [ebp-10Ch]
//    double v72; // [esp+17Ch] [ebp-10Ch]
//    int v73; // [esp+188h] [ebp-100h]
//    int v74; // [esp+18Ch] [ebp-FCh]
//    int v75; // [esp+190h] [ebp-F8h]
//    double v76; // [esp+194h] [ebp-F4h]
//    double v77; // [esp+194h] [ebp-F4h]
//    int v78; // [esp+1A0h] [ebp-E8h]
//    int v79; // [esp+1A4h] [ebp-E4h]
//    double v80; // [esp+1A8h] [ebp-E0h]
//    int v81; // [esp+1B4h] [ebp-D4h]
//    int v82; // [esp+1B8h] [ebp-D0h]
//    double v83; // [esp+1BCh] [ebp-CCh]
//    int v84; // [esp+1C8h] [ebp-C0h]
//    int v85; // [esp+1CCh] [ebp-BCh]
//    double v86; // [esp+1D0h] [ebp-B8h]
//    int v87; // [esp+1DCh] [ebp-ACh]
//    int v88; // [esp+1E0h] [ebp-A8h]
//    int v89; // [esp+1E4h] [ebp-A4h]
//    double v90; // [esp+1E8h] [ebp-A0h]
//    double v91; // [esp+1E8h] [ebp-A0h]
//    int v92; // [esp+1F4h] [ebp-94h]
//    int v93; // [esp+1F8h] [ebp-90h]
//    double v94; // [esp+1FCh] [ebp-8Ch]
//    int v95; // [esp+208h] [ebp-80h]
//    int v96; // [esp+20Ch] [ebp-7Ch]
//    double v97; // [esp+210h] [ebp-78h]
//    int v98; // [esp+21Ch] [ebp-6Ch]
//    int v99; // [esp+220h] [ebp-68h]
//    int v100; // [esp+224h] [ebp-64h]
//    int v101; // [esp+228h] [ebp-60h]
//    double v102; // [esp+22Ch] [ebp-5Ch]
//    double v103; // [esp+22Ch] [ebp-5Ch]
//    int v104; // [esp+238h] [ebp-50h]
//    int v105; // [esp+23Ch] [ebp-4Ch]
//    int v106; // [esp+240h] [ebp-48h]
//    int v107; // [esp+244h] [ebp-44h]
//    int v108; // [esp+24Ch] [ebp-3Ch]
//    double v109; // [esp+250h] [ebp-38h]
//    double v110; // [esp+250h] [ebp-38h]
//    int v111; // [esp+25Ch] [ebp-2Ch]
//    int v112; // [esp+260h] [ebp-28h]
//    int v113; // [esp+268h] [ebp-20h]
//    double X; // [esp+26Ch] [ebp-1Ch]
//    int v115; // [esp+278h] [ebp-10h]
//    _DWORD* v116; // [esp+27Ch] [ebp-Ch]
//    int v117; // [esp+280h] [ebp-8h]
//    int v118; // [esp+284h] [ebp-4h]
//    int v119; // [esp+284h] [ebp-4h]
//
//    LODWORD(v6) = a1;
//    if (!*(_DWORD*)(a1 + 56))
//        return v6;
//    *(_DWORD*)(a1 + 16) = 2;
//    *(_DWORD*)(a1 + 12) = 2;
//    *(_DWORD*)(a1 + 8) = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//    if (sub_41BA53(135, 0) && rand() % 2 == 1)
//        a3 += 50;
//    v117 = a3;
//    if (a4)
//        v117 = a3 * (unsigned __int16)sub_41CA5F(1) / 250 + a3;
//    if (a5)
//        v117 += a3 * (unsigned __int16)sub_41D067(1) / 250;
//    v118 = *(unsigned __int16*)(a1 + 190);
//    if (sub_41BA53(133, 0) && *(_BYTE*)(a1 + 72) == 12)
//        v118 += 50;
//    switch (*(_DWORD*)(a1 + 8))
//    {
//    case 0xB8:
//        v118 += 25;
//        break;
//    case 0xBA:
//        v118 += 15;
//        break;
//    case 0xBF:
//        v118 += 10;
//        break;
//    case 0xC0:
//        v118 += 20;
//        break;
//    case 0xC2:
//        v118 += 10;
//        break;
//    case 0xC3:
//        v118 /= 2;
//        break;
//    case 0xAB:
//        v118 /= 2;
//        break;
//    case 0xAC:
//        v118 = 3 * v118 / 4;
//        break;
//    case 0xC6:
//        v118 = v118 * (10 * (rand() % 16) + 50) / 100;
//        break;
//    }
//    v119 = v117 * v118 / 100 + 50;
//    if (v119 > 0xFFFF)
//        LOWORD(v119) = -1;
//    *(_WORD*)(a1 + 192) = v119;
//    *(_BYTE*)(a1 + 195) = 5;
//    *(_BYTE*)(a1 + 194) = 0;
//    *(_BYTE*)(a1 + 69) = 1;
//    *(_DWORD*)(a1 + 156) = 0;
//    *(_DWORD*)(a1 + 160) = 0;
//    *(_DWORD*)(a1 + 88) = 0;
//    *(_BYTE*)(a1 + 180) = 0;
//    *(_DWORD*)(a1 + 104) -= 400;
//    *(_DWORD*)(a1 + 172) = 1;
//    *(_DWORD*)(a1 + 168) = 1;
//    *(_DWORD*)(a1 + 140) = 1;
//    *(_DWORD*)(a1 + 136) = 1;
//    *(_DWORD*)(a1 + 132) = 1;
//    *(_DWORD*)(a1 + 76) = 0;
//    if (*(_BYTE*)(a1 + 72) != 11 && *(_BYTE*)(a1 + 72) != 13)
//        *(_DWORD*)(a1 + 80) = 0;
//    sub_499622(a1);
//    memset((void*)(a1 + 181), 0, 8u);
//    *(_BYTE*)(a1 + (unsigned __int8)sub_425EF0(*(_DWORD*)(a1 + 56)) + 181) = 1;
//    *(_BYTE*)(a1 + 68) = 0;
//    *(_BYTE*)(a1 + 71) = 0;
//    *(_BYTE*)(a1 + 70) = -1;
//    if ((*(_BYTE*)(a1 + 72) == 11 || *(_BYTE*)(a1 + 72) == 13) && *(int*)(a1 + 84) < 0)
//    {
//        *(_DWORD*)(a1 + 84) = rand() % 300 + 300;
//        *(_DWORD*)(a1 + 80) = *(_DWORD*)(a1 + 84);
//    }
//    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)171)
//    {
//        v116 = (_DWORD*)sub_464AC9(*(_DWORD*)(a1 + 56), 0, 1);
//        if (v116)
//        {
//            *(_DWORD*)(a1 + 96) = sub_426090(v116);
//            *(_DWORD*)(a1 + 100) = sub_4260B0(v116);
//            LODWORD(v6) = sub_4260D0(v116) - 800;
//            *(_DWORD*)(a1 + 104) = v6;
//            *(_DWORD*)(a1 + 152) = 30;
//            return v6;
//        }
//        goto LABEL_259;
//    }
//    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)172)
//    {
//        v115 = sub_464AC9(*(_DWORD*)(a1 + 56), 0, 1);
//        if (v115)
//        {
//            *(_DWORD*)(a1 + 16) = 4;
//            *(_DWORD*)(a1 + 12) = 4;
//            *(_DWORD*)(a1 + 60) = v115;
//            HIDWORD(v6) = rand() % 60 + 120;
//            LODWORD(v6) = a1;
//            *(_DWORD*)(a1 + 76) = HIDWORD(v6);
//            *(_DWORD*)(a1 + 128) = -1500;
//            return v6;
//        }
//        goto LABEL_259;
//    }
//    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)173)
//    {
//        *(_BYTE*)(a1 + 68) = 1;
//        *(_BYTE*)(a1 + 71) = 1;
//        *(_BYTE*)(a1 + 69) = 0;
//        *(_BYTE*)(a1 + 194) = 3;
//        goto LABEL_259;
//    }
//    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)180)
//    {
//        *(_BYTE*)(a1 + 194) = 11;
//        *(_BYTE*)(a1 + 71) = 1;
//        *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
//        if (*(int*)(a1 + 120) < 440)
//            *(_DWORD*)(a1 + 120) = 440;
//        if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
//            v66 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//        else
//            v66 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//        *(_DWORD*)(a1 + 120) += v66;
//        if (*(int*)(a1 + 120) > 1000)
//            *(_DWORD*)(a1 + 120) = 1000;
//        if (!*(_DWORD*)(a1 + 164))
//            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//        *(_DWORD*)(a1 + 124) = 0;
//        *(_DWORD*)(a1 + 120) *= 1000;
//        *(_DWORD*)(a1 + 140) = 1000;
//        *(_DWORD*)(a1 + 136) = 1000;
//        *(_DWORD*)(a1 + 132) = 1000;
//        if (a6)
//        {
//            if (*(int*)(a1 + 120) <= 0)
//                v65 = -*(_DWORD*)(a1 + 120);
//            else
//                v65 = *(_DWORD*)(a1 + 120);
//            v7 = sub_426090(a6);
//            v112 = v7 - sub_426470(a1);
//            v8 = sub_4260B0(a6);
//            v113 = v8 - sub_426530(a1);
//            sub_4260D0((_DWORD*)a6);
//            Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1);
//            X = sub_4A3090(
//                COERCE_UNSIGNED_INT64((double)v113),
//                HIDWORD(COERCE_UNSIGNED_INT64((double)v113)),
//                COERCE_UNSIGNED_INT64((double)v112),
//                HIDWORD(COERCE_UNSIGNED_INT64((double)v112)));
//            *(_DWORD*)(a1 + 120) = (__int64)(cos(X) * (double)v65);
//            *(_DWORD*)(a1 + 124) = (__int64)(sin(X) * (double)v65);
//        }
//        *(_DWORD*)(a1 + 144) = 0;
//        *(_DWORD*)(a1 + 148) = 0;
//        if (3 * *(_DWORD*)(a1 + 120) / 4 <= 0)
//            v64 = 3 * *(_DWORD*)(a1 + 120) / -4;
//        else
//            v64 = 3 * *(_DWORD*)(a1 + 120) / 4;
//        *(_DWORD*)(a1 + 128) = -v64;
//        LODWORD(v6) = -*(_DWORD*)(a1 + 128) / 30;
//        *(_DWORD*)(a1 + 152) = v6;
//        return v6;
//    }
//    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)183)
//    {
//        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)184)
//        {
//            *(_BYTE*)(a1 + 71) = 1;
//            *(_BYTE*)(a1 + 194) = 11;
//            *(_BYTE*)(a1 + 70) = 5;
//        }
//        else if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)185)
//        {
//            *(_BYTE*)(a1 + 71) = 1;
//            *(_BYTE*)(a1 + 194) = 3;
//            *(_BYTE*)(a1 + 70) = 5;
//        }
//        else
//        {
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)186)
//            {
//                *(_BYTE*)(a1 + 71) = 1;
//                *(_BYTE*)(a1 + 194) = 3;
//                *(_BYTE*)(a1 + 70) = 5;
//                *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
//                if (*(int*)(a1 + 120) < 440)
//                    *(_DWORD*)(a1 + 120) = 440;
//                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
//                    v55 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                else
//                    v55 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                *(_DWORD*)(a1 + 120) += v55;
//                if (*(int*)(a1 + 120) > 1000)
//                    *(_DWORD*)(a1 + 120) = 1000;
//                if (!*(_DWORD*)(a1 + 164))
//                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                *(_DWORD*)(a1 + 120) = 3 * *(_DWORD*)(a1 + 120) / 2;
//                *(_DWORD*)(a1 + 124) = 0;
//                if (sub_425D30(*(_DWORD*)(a1 + 56)))
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v54 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v54 = *(_DWORD*)(a1 + 120);
//                    *(_DWORD*)(a1 + 128) = v54 / 2;
//                }
//                else
//                {
//                    *(_DWORD*)(a1 + 128) = 0;
//                }
//                LODWORD(v6) = a1;
//                *(_DWORD*)(a1 + 152) = 0;
//                *(_DWORD*)(a1 + 144) = 0;
//                *(_DWORD*)(a1 + 148) = 0;
//                if (a6)
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v53 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v53 = *(_DWORD*)(a1 + 120);
//                    v12 = sub_426090(a6);
//                    v99 = v12 - sub_426470(a1);
//                    v13 = sub_4260B0(a6);
//                    v101 = v13 - sub_426530(a1);
//                    v14 = (sub_4260D0((_DWORD*)a6) - 1500) / 100;
//                    v100 = 100
//                        * (v14
//                            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
//                            / 100);
//                    v102 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v101),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v101)),
//                        COERCE_UNSIGNED_INT64((double)v99),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v99)));
//                    *(_DWORD*)(a1 + 120) = (__int64)(cos(v102) * (double)v53);
//                    *(_DWORD*)(a1 + 124) = (__int64)(sin(v102) * (double)v53);
//                    v103 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v100),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v100)),
//                        COERCE_UNSIGNED_INT64((double)v99),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v99)));
//                    v6 = (__int64)(sin(v103) * (double)v53);
//                    *(_DWORD*)(a1 + 128) = v6;
//                }
//                return v6;
//            }
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)189)
//            {
//                *(_DWORD*)(a1 + 88) = *(unsigned __int16*)(a1 + 192) / 85;
//                if (*(int*)(a1 + 88) <= 0)
//                    *(_DWORD*)(a1 + 88) = 1;
//                *(_BYTE*)(a1 + 71) = 1;
//                *(_BYTE*)(a1 + 194) = 3;
//                *(_BYTE*)(a1 + 70) = 5;
//                *(_DWORD*)(a1 + 136) = 1000;
//                *(_DWORD*)(a1 + 132) = 1000;
//                *(_DWORD*)(a1 + 140) = 1;
//                v36 = sub_426530(a1) / 100;
//                v15 = sub_426470(a1);
//                v98 = -100 * sub_446497(v15 / 100, v36);
//                if (v98 == -102000)
//                    *(_DWORD*)(a1 + 128) = -200;
//                else
//                    *(_DWORD*)(a1 + 128) = (v98
//                        - 1200
//                        - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1))
//                    / 30;
//                LODWORD(v6) = a1;
//                *(_DWORD*)(a1 + 120) = 0;
//                *(_DWORD*)(a1 + 144) = 10000;
//                if (!*(_DWORD*)(a1 + 164))
//                {
//                    LODWORD(v6) = a1;
//                    *(_DWORD*)(a1 + 144) = -*(_DWORD*)(a1 + 144);
//                }
//                if (a6)
//                {
//                    v16 = sub_426090(a6);
//                    v95 = v16 - sub_426470(a1);
//                    v17 = sub_4260B0(a6);
//                    v96 = v17 - sub_426530(a1);
//                    v97 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v96),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v96)),
//                        COERCE_UNSIGNED_INT64((double)v95),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v95)));
//                    *(_DWORD*)(a1 + 120) = 0;
//                    *(_DWORD*)(a1 + 124) = 0;
//                    *(_DWORD*)(a1 + 144) = (__int64)(cos(v97) * (double)150000 / 15.0);
//                    v6 = (__int64)(sin(v97) * (double)150000 / 15.0);
//                    *(_DWORD*)(a1 + 148) = v6;
//                }
//                return v6;
//            }
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)190)
//            {
//                *(_BYTE*)(a1 + 68) = 1;
//                *(_BYTE*)(a1 + 71) = 1;
//                *(_BYTE*)(a1 + 194) = 5;
//                *(_BYTE*)(a1 + 70) = 5;
//                *(_DWORD*)(a1 + 120) = 2 * a3 + 200;
//                if (*(int*)(a1 + 120) < 440)
//                    *(_DWORD*)(a1 + 120) = 440;
//                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
//                    v52 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                else
//                    v52 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                *(_DWORD*)(a1 + 120) += v52;
//                if (*(int*)(a1 + 120) > 500)
//                    *(_DWORD*)(a1 + 120) = 500;
//                if (!*(_DWORD*)(a1 + 164))
//                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                *(_DWORD*)(a1 + 124) = 0;
//                *(_DWORD*)(a1 + 128) = 0;
//                *(_DWORD*)(a1 + 152) = 0;
//                LODWORD(v6) = a1;
//                *(_DWORD*)(a1 + 144) = 0;
//                *(_DWORD*)(a1 + 148) = 0;
//                if (a6)
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v51 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v51 = *(_DWORD*)(a1 + 120);
//                    v18 = sub_426090(a6);
//                    v92 = v18 - sub_426470(a1);
//                    v19 = sub_4260B0(a6);
//                    v93 = v19 - sub_426530(a1);
//                    v94 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v93),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v93)),
//                        COERCE_UNSIGNED_INT64((double)v92),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v92)));
//                    *(_DWORD*)(a1 + 120) = (__int64)(cos(v94) * (double)v51);
//                    v6 = (__int64)(sin(v94) * (double)v51);
//                    *(_DWORD*)(a1 + 124) = v6;
//                }
//                return v6;
//            }
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)191)
//            {
//                *(_BYTE*)(a1 + 71) = 1;
//                *(_BYTE*)(a1 + 194) = 3;
//                *(_BYTE*)(a1 + 70) = 5;
//                *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
//                if (*(int*)(a1 + 120) < 440)
//                    *(_DWORD*)(a1 + 120) = 440;
//                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
//                    v50 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                else
//                    v50 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//                *(_DWORD*)(a1 + 120) += v50;
//                if (*(int*)(a1 + 120) > 800)
//                    *(_DWORD*)(a1 + 120) = 800;
//                if (!*(_DWORD*)(a1 + 164))
//                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                *(_DWORD*)(a1 + 124) = 0;
//                if (sub_425D30(*(_DWORD*)(a1 + 56)))
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v49 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v49 = *(_DWORD*)(a1 + 120);
//                    *(_DWORD*)(a1 + 128) = v49 / 2;
//                }
//                else
//                {
//                    *(_DWORD*)(a1 + 128) = 0;
//                }
//                LODWORD(v6) = a1;
//                *(_DWORD*)(a1 + 152) = 0;
//                *(_DWORD*)(a1 + 144) = 0;
//                *(_DWORD*)(a1 + 148) = 0;
//                if (a6)
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v48 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v48 = *(_DWORD*)(a1 + 120);
//                    v20 = sub_426090(a6);
//                    v87 = v20 - sub_426470(a1);
//                    v21 = sub_4260B0(a6);
//                    v89 = v21 - sub_426530(a1);
//                    v22 = (sub_4260D0((_DWORD*)a6) - 1500) / 100;
//                    v88 = 100
//                        * (v22
//                            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
//                            / 100);
//                    v90 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v89),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v89)),
//                        COERCE_UNSIGNED_INT64((double)v87),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v87)));
//                    *(_DWORD*)(a1 + 120) = (__int64)(cos(v90) * (double)v48);
//                    *(_DWORD*)(a1 + 124) = (__int64)(sin(v90) * (double)v48);
//                    v91 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v88),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v88)),
//                        COERCE_UNSIGNED_INT64((double)v87),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v87)));
//                    v6 = (__int64)(sin(v91) * (double)v48);
//                    *(_DWORD*)(a1 + 128) = v6;
//                }
//                return v6;
//            }
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)192)
//            {
//                *(_BYTE*)(a1 + 71) = 1;
//                *(_BYTE*)(a1 + 194) = 3;
//                *(_BYTE*)(a1 + 70) = 5;
//                *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
//                if (*(int*)(a1 + 120) < 200)
//                    *(_DWORD*)(a1 + 120) = 200;
//                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
//                    v47 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / -2;
//                else
//                    v47 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2;
//                *(_DWORD*)(a1 + 120) += v47;
//                if (*(int*)(a1 + 120) > 500)
//                    *(_DWORD*)(a1 + 120) = 500;
//                if (!*(_DWORD*)(a1 + 164))
//                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                *(_DWORD*)(a1 + 124) = 0;
//                *(_DWORD*)(a1 + 128) = 0;
//                *(_DWORD*)(a1 + 152) = 0;
//                *(_DWORD*)(a1 + 144) = 0;
//                LODWORD(v6) = a1;
//                *(_DWORD*)(a1 + 148) = 0;
//                if (a6)
//                {
//                    if (*(int*)(a1 + 120) <= 0)
//                        v46 = -*(_DWORD*)(a1 + 120);
//                    else
//                        v46 = *(_DWORD*)(a1 + 120);
//                    v23 = sub_426090(a6);
//                    v84 = v23 - sub_426470(a1);
//                    v24 = sub_4260B0(a6);
//                    v85 = v24 - sub_426530(a1);
//                    v86 = sub_4A3090(
//                        COERCE_UNSIGNED_INT64((double)v85),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v85)),
//                        COERCE_UNSIGNED_INT64((double)v84),
//                        HIDWORD(COERCE_UNSIGNED_INT64((double)v84)));
//                    *(_DWORD*)(a1 + 120) = (__int64)(cos(v86) * (double)v46);
//                    v6 = (__int64)(sin(v86) * (double)v46);
//                    *(_DWORD*)(a1 + 124) = v6;
//                }
//                return v6;
//            }
//            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)193)
//            {
//                if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)194)
//                {
//                    *(_BYTE*)(a1 + 71) = 1;
//                    *(_BYTE*)(a1 + 194) = 3;
//                    *(_BYTE*)(a1 + 70) = 5;
//                    *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
//                    if (*(int*)(a1 + 120) < 200)
//                        *(_DWORD*)(a1 + 120) = 200;
//                    if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
//                        v45 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / -2;
//                    else
//                        v45 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2;
//                    *(_DWORD*)(a1 + 120) += v45;
//                    if (*(int*)(a1 + 120) > 500)
//                        *(_DWORD*)(a1 + 120) = 500;
//                    if (!*(_DWORD*)(a1 + 164))
//                        *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                    *(_DWORD*)(a1 + 124) = 0;
//                    *(_DWORD*)(a1 + 128) = 0;
//                    *(_DWORD*)(a1 + 152) = 0;
//                    LODWORD(v6) = a1;
//                    *(_DWORD*)(a1 + 144) = 0;
//                    *(_DWORD*)(a1 + 148) = 0;
//                    if (a6)
//                    {
//                        if (*(int*)(a1 + 120) <= 0)
//                            v44 = -*(_DWORD*)(a1 + 120);
//                        else
//                            v44 = *(_DWORD*)(a1 + 120);
//                        v25 = sub_426090(a6);
//                        v81 = v25 - sub_426470(a1);
//                        v26 = sub_4260B0(a6);
//                        v82 = v26 - sub_426530(a1);
//                        v83 = sub_4A3090(
//                            COERCE_UNSIGNED_INT64((double)v82),
//                            HIDWORD(COERCE_UNSIGNED_INT64((double)v82)),
//                            COERCE_UNSIGNED_INT64((double)v81),
//                            HIDWORD(COERCE_UNSIGNED_INT64((double)v81)));
//                        *(_DWORD*)(a1 + 120) = (__int64)(cos(v83) * (double)v44);
//                        v6 = (__int64)(sin(v83) * (double)v44);
//                        *(_DWORD*)(a1 + 124) = v6;
//                    }
//                }
//                else
//                {
//                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)195)
//                    {
//                        *(_DWORD*)(a1 + 60) = sub_464AC9(*(_DWORD*)(a1 + 56), 0, 1);
//                        if (*(_DWORD*)(a1 + 60))
//                        {
//                            *(_BYTE*)(a1 + 71) = 1;
//                            *(_BYTE*)(a1 + 194) = 11;
//                            *(_BYTE*)(a1 + 70) = 5;
//                            *(_DWORD*)(a1 + 120) = 10 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
//                            if (sub_425D30(*(_DWORD*)(a1 + 56)))
//                                *(_DWORD*)(a1 + 128) = 5;
//                            else
//                                *(_DWORD*)(a1 + 128) = 1;
//                            LODWORD(v6) = a1;
//                            *(_DWORD*)(a1 + 152) = 0;
//                            return v6;
//                        }
//                        goto LABEL_259;
//                    }
//                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)196)
//                    {
//                        *(_BYTE*)(a1 + 71) = 1;
//                        *(_BYTE*)(a1 + 68) = 1;
//                        *(_BYTE*)(a1 + 194) = 2;
//                        *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
//                        if (*(int*)(a1 + 120) < 200)
//                            *(_DWORD*)(a1 + 120) = 200;
//                        if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
//                            v43 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56))
//                            / -2;
//                        else
//                            v43 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2;
//                        *(_DWORD*)(a1 + 120) += v43;
//                        if (*(int*)(a1 + 120) > 500)
//                            *(_DWORD*)(a1 + 120) = 500;
//                        if (!*(_DWORD*)(a1 + 164))
//                            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                        *(_DWORD*)(a1 + 124) = 0;
//                        *(_DWORD*)(a1 + 128) = 0;
//                        LODWORD(v6) = a1;
//                        *(_DWORD*)(a1 + 152) = 0;
//                        *(_DWORD*)(a1 + 144) = 0;
//                        *(_DWORD*)(a1 + 148) = 0;
//                        if (a6)
//                        {
//                            if (*(int*)(a1 + 120) <= 0)
//                                v42 = -*(_DWORD*)(a1 + 120);
//                            else
//                                v42 = *(_DWORD*)(a1 + 120);
//                            v27 = sub_426090(a6);
//                            v78 = v27 - sub_426470(a1);
//                            v28 = sub_4260B0(a6);
//                            v79 = v28 - sub_426530(a1);
//                            v80 = sub_4A3090(
//                                COERCE_UNSIGNED_INT64((double)v79),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v79)),
//                                COERCE_UNSIGNED_INT64((double)v78),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v78)));
//                            *(_DWORD*)(a1 + 120) = (__int64)(cos(v80) * (double)v42);
//                            v6 = (__int64)(sin(v80) * (double)v42);
//                            *(_DWORD*)(a1 + 124) = v6;
//                        }
//                    }
//                    else
//                    {
//                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)197)
//                        {
//                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)198)
//                            {
//                                *(_DWORD*)(a1 + 120) = 10 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
//                                *(_BYTE*)(a1 + 71) = 1;
//                                *(_BYTE*)(a1 + 68) = rand() % 3 == 0;
//                                HIDWORD(v6) = rand() % 14;
//                                LODWORD(v6) = a1;
//                                *(_BYTE*)(a1 + 194) = BYTE4(v6);
//                                return v6;
//                            }
//                            goto LABEL_259;
//                        }
//                        *(_BYTE*)(a1 + 71) = 1;
//                        *(_BYTE*)(a1 + 194) = 3;
//                        *(_BYTE*)(a1 + 70) = 5;
//                        *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
//                        if (*(int*)(a1 + 120) < 440)
//                            *(_DWORD*)(a1 + 120) = 440;
//                        if (*(int*)(a1 + 120) > 1000)
//                            *(_DWORD*)(a1 + 120) = 1000;
//                        if (!*(_DWORD*)(a1 + 164))
//                            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//                        *(_DWORD*)(a1 + 124) = 0;
//                        if (sub_425D30(*(_DWORD*)(a1 + 56)))
//                        {
//                            if (*(int*)(a1 + 120) <= 0)
//                                v41 = -*(_DWORD*)(a1 + 120);
//                            else
//                                v41 = *(_DWORD*)(a1 + 120);
//                            *(_DWORD*)(a1 + 128) = v41 / 2;
//                        }
//                        else
//                        {
//                            *(_DWORD*)(a1 + 128) = 0;
//                        }
//                        *(_DWORD*)(a1 + 152) = 0;
//                        *(_DWORD*)(a1 + 144) = 0;
//                        *(_DWORD*)(a1 + 148) = 0;
//                        if (a6)
//                        {
//                            if (*(int*)(a1 + 120) <= 0)
//                                v40 = -*(_DWORD*)(a1 + 120);
//                            else
//                                v40 = *(_DWORD*)(a1 + 120);
//                            v29 = sub_426090(a6);
//                            v73 = v29 - sub_426470(a1);
//                            v30 = sub_4260B0(a6);
//                            v75 = v30 - sub_426530(a1);
//                            v31 = (sub_4260D0((_DWORD*)a6) - 1500) / 100;
//                            v74 = 100
//                                * (v31
//                                    - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
//                                    / 100);
//                            v76 = sub_4A3090(
//                                COERCE_UNSIGNED_INT64((double)v75),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v75)),
//                                COERCE_UNSIGNED_INT64((double)v73),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v73)));
//                            *(_DWORD*)(a1 + 120) = (__int64)(cos(v76) * (double)v40);
//                            *(_DWORD*)(a1 + 124) = (__int64)(sin(v76) * (double)v40);
//                            v77 = sub_4A3090(
//                                COERCE_UNSIGNED_INT64((double)v74),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v74)),
//                                COERCE_UNSIGNED_INT64((double)v73),
//                                HIDWORD(COERCE_UNSIGNED_INT64((double)v73)));
//                            *(_DWORD*)(a1 + 128) = (__int64)(sin(v77) * (double)v40);
//                        }
//                        *(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 120);
//                        LODWORD(v6) = a1;
//                        *(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 124);
//                    }
//                }
//                return v6;
//            }
//            *(_BYTE*)(a1 + 71) = 1;
//            *(_BYTE*)(a1 + 194) = 3;
//            *(_BYTE*)(a1 + 70) = 5;
//        }
//    LABEL_259:
//        if (*(unsigned __int8*)(a1 + 72) < 2u
//            || *(unsigned __int8*)(a1 + 72) >= 4u && *(unsigned __int8*)(a1 + 72) <= 7u
//            || *(_BYTE*)(a1 + 72) == 11
//            || *(_BYTE*)(a1 + 72) == 12)
//        {
//            *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
//            if (*(int*)(a1 + 120) < 440)
//                *(_DWORD*)(a1 + 120) = 440;
//            if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
//                v39 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//            else
//                v39 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
//            *(_DWORD*)(a1 + 120) += v39;
//            if (*(int*)(a1 + 120) > 1000)
//                *(_DWORD*)(a1 + 120) = 1000;
//            if (!*(_DWORD*)(a1 + 164))
//                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//            if (*(_DWORD*)(a1 + 8) == 185)
//            {
//                *(int*)(a1 + 120) /= 4;
//            }
//            else if (*(_DWORD*)(a1 + 8) == 193)
//            {
//                *(int*)(a1 + 120) /= 2;
//            }
//            *(_DWORD*)(a1 + 124) = 0;
//            if (a5)
//            {
//                if (*(int*)(a1 + 120) <= 0)
//                    v38 = -*(_DWORD*)(a1 + 120);
//                else
//                    v38 = *(_DWORD*)(a1 + 120);
//                *(_DWORD*)(a1 + 128) = v38 / 2;
//                *(_DWORD*)(a1 + 152) = 0;
//            }
//            else
//            {
//                *(_DWORD*)(a1 + 128) = 0;
//                *(_DWORD*)(a1 + 152) = 0;
//            }
//            LODWORD(v6) = a1;
//            *(_DWORD*)(a1 + 144) = 0;
//            *(_DWORD*)(a1 + 148) = 0;
//            if (a6)
//            {
//                if (*(int*)(a1 + 120) <= 0)
//                    v37 = -*(_DWORD*)(a1 + 120);
//                else
//                    v37 = *(_DWORD*)(a1 + 120);
//                v32 = sub_426090(a6);
//                v68 = v32 - sub_426470(a1);
//                v33 = sub_4260B0(a6);
//                v70 = v33 - sub_426530(a1);
//                v34 = (sub_4260D0((_DWORD*)a6) - 1500) / 100;
//                v69 = 100
//                    * (v34
//                        - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
//                        / 100);
//                v71 = sub_4A3090(
//                    COERCE_UNSIGNED_INT64((double)v70),
//                    HIDWORD(COERCE_UNSIGNED_INT64((double)v70)),
//                    COERCE_UNSIGNED_INT64((double)v68),
//                    HIDWORD(COERCE_UNSIGNED_INT64((double)v68)));
//                *(_DWORD*)(a1 + 120) = (__int64)(cos(v71) * (double)v37);
//                *(_DWORD*)(a1 + 124) = (__int64)(sin(v71) * (double)v37);
//                v72 = sub_4A3090(
//                    COERCE_UNSIGNED_INT64((double)v69),
//                    HIDWORD(COERCE_UNSIGNED_INT64((double)v69)),
//                    COERCE_UNSIGNED_INT64((double)v68),
//                    HIDWORD(COERCE_UNSIGNED_INT64((double)v68)));
//                v6 = (__int64)(sin(v72) * (double)v37);
//                *(_DWORD*)(a1 + 128) = v6;
//            }
//        }
//        else if (*(_BYTE*)(a1 + 72) == 2)
//        {
//            *(_DWORD*)(a1 + 120) = 150 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
//            *(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 120) + sub_426090(*(_DWORD*)(a1 + 56));
//            *(_DWORD*)(a1 + 124) = 0;
//            *(_DWORD*)(a1 + 128) = -860;
//            *(_DWORD*)(a1 + 144) = 0;
//            LODWORD(v6) = a1;
//            *(_DWORD*)(a1 + 148) = 0;
//            *(_DWORD*)(a1 + 152) = 30;
//        }
//        else if (*(_BYTE*)(a1 + 72) == 3)
//        {
//            *(_DWORD*)(a1 + 120) = 250;
//            if (!*(_DWORD*)(a1 + 164))
//                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//            *(_DWORD*)(a1 + 124) = 0;
//            *(_DWORD*)(a1 + 128) = -300;
//            *(_DWORD*)(a1 + 144) = 0;
//            LODWORD(v6) = a1;
//            *(_DWORD*)(a1 + 148) = 0;
//            *(_DWORD*)(a1 + 152) = 30;
//        }
//        else if (*(_BYTE*)(a1 + 72) == 8
//            || *(_BYTE*)(a1 + 72) == 9
//            || *(_BYTE*)(a1 + 72) == 10
//            || (LODWORD(v6) = *(unsigned __int8*)(a1 + 72), (_DWORD)v6 == 13))
//        {
//            *(_DWORD*)(a1 + 120) = 300;
//            if (!*(_DWORD*)(a1 + 164))
//                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//            *(_DWORD*)(a1 + 124) = 0;
//            *(_DWORD*)(a1 + 128) = -180;
//            *(_DWORD*)(a1 + 144) = 0;
//            LODWORD(v6) = a1;
//            *(_DWORD*)(a1 + 148) = 0;
//            *(_DWORD*)(a1 + 152) = 30;
//        }
//        return v6;
//    }
//    if (!a6)
//        a6 = sub_4682D3(*(_DWORD*)(a1 + 56), 0);
//    if (!a6)
//        goto LABEL_259;
//    *(_BYTE*)(a1 + 70) = 5;
//    *(_DWORD*)(a1 + 60) = a6;
//    *(_BYTE*)(a1 + 194) = 3;
//    *(_BYTE*)(a1 + 71) = 1;
//    sub_44647E(unk_4B9B10);
//    v9 = sub_426090(a6);
//    v106 = v9 - sub_426470(a1);
//    v10 = sub_4260B0(a6);
//    v108 = v10 - sub_426530(a1);
//    v111 = sub_425D70(*(_DWORD*)(a1 + 56));
//    if (!v106)
//    {
//        if (v108 <= 0)
//            v63 = -v108;
//        else
//            v63 = v108;
//        v106 = (v111 - (v111 == 0)) * v63;
//    }
//    v11 = (sub_4260D0((_DWORD*)a6) - 1500) / 100;
//    v107 = 100
//        * (v11
//            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
//            / 100);
//    v62 = sub_4A3090(
//        COERCE_UNSIGNED_INT64((double)v108),
//        HIDWORD(COERCE_UNSIGNED_INT64((double)v108)),
//        COERCE_UNSIGNED_INT64((double)v106),
//        HIDWORD(COERCE_UNSIGNED_INT64((double)v106)));
//    v109 = (double)(2 * (rand() % 2) - 1) * 0.2053981633 + v62;
//    *(_DWORD*)(a1 + 120) = (__int64)(cos(v109) * (double)160);
//    *(_DWORD*)(a1 + 124) = (__int64)(sin(v109) * (double)160);
//    if (*(int*)(a1 + 120) <= 0)
//        v61 = -*(_DWORD*)(a1 + 120);
//    else
//        v61 = *(_DWORD*)(a1 + 120);
//    if (*(int*)(a1 + 124) <= 0)
//        v60 = -*(_DWORD*)(a1 + 124);
//    else
//        v60 = *(_DWORD*)(a1 + 124);
//    if (v61 < v60)
//    {
//        v105 = *(_DWORD*)(a1 + 120);
//        v104 = *(_DWORD*)(a1 + 124);
//        if (v104 <= 0)
//            v59 = -v104;
//        else
//            v59 = *(_DWORD*)(a1 + 124);
//        if (v105 <= 0)
//            v58 = (v105 >= 0) - 1;
//        else
//            v58 = 1;
//        *(_DWORD*)(a1 + 120) = v58 * v59;
//        if (v105 <= 0)
//            v57 = -v105;
//        else
//            v57 = v105;
//        if (v104 <= 0)
//            v56 = (v104 >= 0) - 1;
//        else
//            v56 = 1;
//        *(_DWORD*)(a1 + 124) = v56 * v57;
//    }
//    if (!v111 && *(int*)(a1 + 120) > 0 || v111 && *(int*)(a1 + 120) < 0)
//        *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
//    v110 = sub_4A3090(
//        COERCE_UNSIGNED_INT64((double)v107),
//        HIDWORD(COERCE_UNSIGNED_INT64((double)v107)),
//        COERCE_UNSIGNED_INT64((double)v106),
//        HIDWORD(COERCE_UNSIGNED_INT64((double)v106)));
//    *(_DWORD*)(a1 + 128) = (__int64)(sin(v110) * (double)160);
//    LODWORD(v6) = a1;
//    if (*(int*)(a1 + 128) > 0)
//        *(_DWORD*)(a1 + 128) = 0;
//    *(_DWORD*)(a1 + 124) = 0;
//    return v6;
//}

int sub_4917E7(int a1, double a2, int a3, int a4, int a5, _DWORD* a6)
{
    int result; // eax
    int v7; // edx
    int v8; // esi
    int v9; // esi
    double v10; // st7
    double v11; // st7
    int v12; // esi
    int v13; // esi
    int v14; // esi
    double v15; // st7
    double v16; // st7
    double v17; // st7
    int v18; // esi
    int v19; // esi
    int v20; // esi
    double v21; // st7
    double v22; // st7
    double v23; // st7
    int v24; // eax
    int v25; // esi
    int v26; // esi
    double v27; // st7
    double v28; // st7
    int v29; // esi
    int v30; // esi
    double v31; // st7
    double v32; // st7
    int v33; // esi
    int v34; // esi
    int v35; // esi
    double v36; // st7
    double v37; // st7
    double v38; // st7
    int v39; // esi
    int v40; // esi
    double v41; // st7
    double v42; // st7
    int v43; // esi
    int v44; // esi
    double v45; // st7
    double v46; // st7
    int v47; // esi
    int v48; // esi
    double v49; // st7
    double v50; // st7
    int v51; // esi
    int v52; // esi
    int v53; // esi
    double v54; // st7
    double v55; // st7
    double v56; // st7
    int v57; // edx
    int v58; // esi
    int v59; // esi
    int v60; // esi
    double v61; // st7
    double v62; // st7
    double v63; // st7
    double v64; // [esp+0h] [ebp-288h]
    double v65; // [esp+0h] [ebp-288h]
    double v66; // [esp+0h] [ebp-288h]
    double v67; // [esp+0h] [ebp-288h]
    double v68; // [esp+0h] [ebp-288h]
    double v69; // [esp+0h] [ebp-288h]
    double v70; // [esp+0h] [ebp-288h]
    double v71; // [esp+0h] [ebp-288h]
    double v72; // [esp+0h] [ebp-288h]
    double v73; // [esp+0h] [ebp-288h]
    double v74; // [esp+0h] [ebp-288h]
    double v75; // [esp+0h] [ebp-288h]
    double v76; // [esp+0h] [ebp-288h]
    double v77; // [esp+0h] [ebp-288h]
    double v78; // [esp+0h] [ebp-288h]
    double v79; // [esp+0h] [ebp-288h]
    double v80; // [esp+8h] [ebp-280h]
    double v81; // [esp+8h] [ebp-280h]
    double v82; // [esp+8h] [ebp-280h]
    double v83; // [esp+8h] [ebp-280h]
    double v84; // [esp+8h] [ebp-280h]
    double v85; // [esp+8h] [ebp-280h]
    double v86; // [esp+8h] [ebp-280h]
    double v87; // [esp+8h] [ebp-280h]
    double v88; // [esp+8h] [ebp-280h]
    double v89; // [esp+8h] [ebp-280h]
    double v90; // [esp+8h] [ebp-280h]
    double v91; // [esp+8h] [ebp-280h]
    double v92; // [esp+8h] [ebp-280h]
    double v93; // [esp+8h] [ebp-280h]
    double v94; // [esp+8h] [ebp-280h]
    double v95; // [esp+8h] [ebp-280h]
    int v96; // [esp+Ch] [ebp-27Ch]
    int v100; // [esp+2Ch] [ebp-25Ch]
    int v101; // [esp+30h] [ebp-258h]
    unsigned int v102; // [esp+34h] [ebp-254h]
    int v106; // [esp+50h] [ebp-238h]
    int v107; // [esp+54h] [ebp-234h]
    int v110; // [esp+68h] [ebp-220h]
    int v111; // [esp+6Ch] [ebp-21Ch]
    int v114; // [esp+80h] [ebp-208h]
    int v115; // [esp+84h] [ebp-204h]
    int v118; // [esp+98h] [ebp-1F0h]
    int v119; // [esp+9Ch] [ebp-1ECh]
    int v123; // [esp+B8h] [ebp-1D0h]
    int v124; // [esp+BCh] [ebp-1CCh]
    unsigned int v125; // [esp+C0h] [ebp-1C8h]
    int v128; // [esp+D4h] [ebp-1B4h]
    unsigned int v129; // [esp+D8h] [ebp-1B0h]
    int v135; // [esp+104h] [ebp-184h]
    int v136; // [esp+108h] [ebp-180h]
    unsigned int v137; // [esp+10Ch] [ebp-17Ch]
    int v139; // [esp+118h] [ebp-170h]
    int v140; // [esp+11Ch] [ebp-16Ch]
    int v141; // [esp+120h] [ebp-168h]
    int v142; // [esp+124h] [ebp-164h]
    int v143; // [esp+128h] [ebp-160h]
    int v144; // [esp+12Ch] [ebp-15Ch]
    int v147; // [esp+140h] [ebp-148h]
    int v149; // [esp+14Ch] [ebp-13Ch]
    int v150; // [esp+150h] [ebp-138h]
    int v153; // [esp+164h] [ebp-124h]
    unsigned int v154; // [esp+168h] [ebp-120h]
    int v156; // [esp+170h] [ebp-118h]
    int v157; // [esp+174h] [ebp-114h]
    int v158; // [esp+178h] [ebp-110h]
    double v159; // [esp+17Ch] [ebp-10Ch]
    double v160; // [esp+17Ch] [ebp-10Ch]
    int v161; // [esp+184h] [ebp-104h]
    int v162; // [esp+188h] [ebp-100h]
    int v163; // [esp+18Ch] [ebp-FCh]
    int v164; // [esp+190h] [ebp-F8h]
    double v165; // [esp+194h] [ebp-F4h]
    double v166; // [esp+194h] [ebp-F4h]
    int v167; // [esp+19Ch] [ebp-ECh]
    int v168; // [esp+1A0h] [ebp-E8h]
    int v169; // [esp+1A4h] [ebp-E4h]
    double v170; // [esp+1A8h] [ebp-E0h]
    int v171; // [esp+1B0h] [ebp-D8h]
    int v172; // [esp+1B4h] [ebp-D4h]
    int v173; // [esp+1B8h] [ebp-D0h]
    double v174; // [esp+1BCh] [ebp-CCh]
    int v175; // [esp+1C4h] [ebp-C4h]
    int v176; // [esp+1C8h] [ebp-C0h]
    int v177; // [esp+1CCh] [ebp-BCh]
    double v178; // [esp+1D0h] [ebp-B8h]
    int v179; // [esp+1D8h] [ebp-B0h]
    int v180; // [esp+1DCh] [ebp-ACh]
    int v181; // [esp+1E0h] [ebp-A8h]
    int v182; // [esp+1E4h] [ebp-A4h]
    double v183; // [esp+1E8h] [ebp-A0h]
    double v184; // [esp+1E8h] [ebp-A0h]
    int v185; // [esp+1F0h] [ebp-98h]
    int v186; // [esp+1F4h] [ebp-94h]
    int v187; // [esp+1F8h] [ebp-90h]
    double v188; // [esp+1FCh] [ebp-8Ch]
    int v189; // [esp+204h] [ebp-84h]
    int v190; // [esp+208h] [ebp-80h]
    int v191; // [esp+20Ch] [ebp-7Ch]
    double v192; // [esp+210h] [ebp-78h]
    int v193; // [esp+218h] [ebp-70h]
    int v194; // [esp+21Ch] [ebp-6Ch]
    int v195; // [esp+220h] [ebp-68h]
    int v196; // [esp+224h] [ebp-64h]
    int v197; // [esp+228h] [ebp-60h]
    double v198; // [esp+22Ch] [ebp-5Ch]
    double v199; // [esp+22Ch] [ebp-5Ch]
    int v200; // [esp+234h] [ebp-54h]
    int v201; // [esp+238h] [ebp-50h]
    int v202; // [esp+23Ch] [ebp-4Ch]
    int v203; // [esp+240h] [ebp-48h]
    int v204; // [esp+244h] [ebp-44h]
    int v205; // [esp+24Ch] [ebp-3Ch]
    double v206; // [esp+250h] [ebp-38h]
    double v207; // [esp+250h] [ebp-38h]
    int v208; // [esp+258h] [ebp-30h]
    int v209; // [esp+25Ch] [ebp-2Ch]
    int v210; // [esp+260h] [ebp-28h]
    int v211; // [esp+268h] [ebp-20h]
    double X; // [esp+26Ch] [ebp-1Ch]
    int v213; // [esp+274h] [ebp-14h]
    char* v214; // [esp+278h] [ebp-10h]
    char* v215; // [esp+27Ch] [ebp-Ch]
    int v216; // [esp+280h] [ebp-8h]
    int v217; // [esp+284h] [ebp-4h]
    int v218; // [esp+284h] [ebp-4h]

    result = a1;
    if (!*(_DWORD*)(a1 + 56))
        return result;
    *(_DWORD*)(a1 + 16) = 2;
    *(_DWORD*)(a1 + 12) = 2;
    *(_DWORD*)(a1 + 8) = (int)Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56));
    if (sub_41BA53(*(_DWORD*)(a1 + 56), 0x87u, 0) && rand() % 2 == 1)
        a3 += 50;
    v216 = a3;
    if (a4)
        v216 = a3 * sub_41CA5F(*(_DWORD*)(a1 + 56), 1) / 250 + a3;
    if (a5)
        v216 += a3 * sub_41D067(*(_DWORD*)(a1 + 56), 1) / 250;
    v217 = *(unsigned __int16*)(a1 + 190);
    if (sub_41BA53(*(_DWORD*)(a1 + 56), 0x85u, 0) && *(_BYTE*)(a1 + 72) == 12)
        v217 += 50;
    switch (*(_DWORD*)(a1 + 8))
    {
    case 0xB8:
        v217 += 25;
        break;
    case 0xBA:
        v217 += 15;
        break;
    case 0xBF:
        v217 += 10;
        break;
    case 0xC0:
        v217 += 20;
        break;
    case 0xC2:
        v217 += 10;
        break;
    case 0xC3:
        v217 /= 2;
        break;
    case 0xAB:
        v217 /= 2;
        break;
    case 0xAC:
        v217 = 3 * v217 / 4;
        break;
    case 0xC6:
        v217 = v217 * (10 * (rand() % 16) + 50) / 100;
        break;
    }
    v218 = v216 * v217 / 100 + 50;
    if (v218 > 0xFFFF)
        LOWORD(v218) = -1;
    *(_WORD*)(a1 + 192) = v218;
    *(_BYTE*)(a1 + 195) = 5;
    *(_BYTE*)(a1 + 194) = 0;
    *(_BYTE*)(a1 + 69) = 1;
    *(_DWORD*)(a1 + 156) = 0;
    *(_DWORD*)(a1 + 160) = 0;
    *(_DWORD*)(a1 + 88) = 0;
    *(_BYTE*)(a1 + 180) = 0;
    *(_DWORD*)(a1 + 104) -= 400;
    *(_DWORD*)(a1 + 172) = 1;
    *(_DWORD*)(a1 + 168) = 1;
    *(_DWORD*)(a1 + 140) = 1;
    *(_DWORD*)(a1 + 136) = 1;
    *(_DWORD*)(a1 + 132) = 1;
    *(_DWORD*)(a1 + 76) = 0;
    if (*(_BYTE*)(a1 + 72) != 11 && *(_BYTE*)(a1 + 72) != 13)
        *(_DWORD*)(a1 + 80) = 0;
    sub_499622(a1);
    memset((void*)(a1 + 181), 0, 8u);
    *(_BYTE*)(a1 + (unsigned __int8)sub_425EF0(*(_BYTE**)(a1 + 56)) + 181) = 1;
    *(_BYTE*)(a1 + 68) = 0;
    *(_BYTE*)(a1 + 71) = 0;
    *(_BYTE*)(a1 + 70) = -1;
    if ((*(_BYTE*)(a1 + 72) == 11 || *(_BYTE*)(a1 + 72) == 13) && *(int*)(a1 + 84) < 0)
    {
        *(_DWORD*)(a1 + 84) = rand() % 300 + 300;
        *(_DWORD*)(a1 + 80) = *(_DWORD*)(a1 + 84);
    }
    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)171)
    {
        v215 = (char*)sub_464AC9((char*)unk_4B9B10, *(_BYTE**)(a1 + 56), 0, 1);
        if (v215)
        {
            *(_DWORD*)(a1 + 96) = sub_426090((int*)v215);
            *(_DWORD*)(a1 + 100) = sub_4260B0((int*)v215);
            result = sub_4260D0((int*)v215) - 800;
            *(_DWORD*)(a1 + 104) = result;
            *(_DWORD*)(a1 + 152) = 30;
            return result;
        }
        goto LABEL_259;
    }
    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)172)
    {
        v214 = (char*)sub_464AC9((char*)unk_4B9B10, *(_BYTE**)(a1 + 56), 0, 1);
        if (v214)
        {
            *(_DWORD*)(a1 + 16) = 4;
            *(_DWORD*)(a1 + 12) = 4;
            *(_DWORD*)(a1 + 60) = (int)v214;
            v7 = rand() % 60 + 120;
            result = a1;
            *(_DWORD*)(a1 + 76) = v7;
            *(_DWORD*)(a1 + 128) = -1500;
            return result;
        }
        goto LABEL_259;
    }
    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)173)
    {
        *(_BYTE*)(a1 + 68) = 1;
        *(_BYTE*)(a1 + 71) = 1;
        *(_BYTE*)(a1 + 69) = 0;
        *(_BYTE*)(a1 + 194) = 3;
        goto LABEL_259;
    }
    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)180)
    {
        *(_BYTE*)(a1 + 194) = 11;
        *(_BYTE*)(a1 + 71) = 1;
        *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
        if (*(int*)(a1 + 120) < 440)
            *(_DWORD*)(a1 + 120) = 440;
        if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
            v154 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
        else
            v154 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
        *(_DWORD*)(a1 + 120) += v154;
        if (*(int*)(a1 + 120) > 1000)
            *(_DWORD*)(a1 + 120) = 1000;
        if (!*(_DWORD*)(a1 + 164))
            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
        *(_DWORD*)(a1 + 124) = 0;
        *(_DWORD*)(a1 + 120) *= 1000;
        *(_DWORD*)(a1 + 140) = 1000;
        *(_DWORD*)(a1 + 136) = 1000;
        *(_DWORD*)(a1 + 132) = 1000;
        if (a6)
        {
            if (*(int*)(a1 + 120) <= 0)
                v153 = -*(_DWORD*)(a1 + 120);
            else
                v153 = *(_DWORD*)(a1 + 120);
            v213 = v153;
            v8 = sub_426090(a6);
            v210 = v8 - sub_426470((_DWORD*)a1);
            v9 = sub_4260B0(a6);
            v211 = v9 - sub_426530((_DWORD*)a1);
            sub_4260D0(a6);
            Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1);
            __asm
            {
               // fild[ebp + var_28]
               // fstp    qword ptr[esp + 280h + var_280]
               // fild[ebp + var_20]
               // fstp[esp + 288h + var_288]
            }
            sub_4A3090(a2, v64, v80);
            __asm
            {
                //fstp[ebp + X]
               // fild[ebp + var_14]
                //fstp[ebp + var_12C]
            }
            v10 = cos(X);
            //__asm { fmul[ebp + var_12C] }
            *(_DWORD*)(a1 + 120) = _ftol(v10);
            __asm
            {
                //fild[ebp + var_14]
                //fstp[ebp + var_134]
            }
            v11 = sin(X);
           // __asm { fmul[ebp + var_134] }
            *(_DWORD*)(a1 + 124) = _ftol(v11);
        }
        *(_DWORD*)(a1 + 144) = 0;
        *(_DWORD*)(a1 + 148) = 0;
        if (3 * *(_DWORD*)(a1 + 120) / 4 <= 0)
            v150 = 3 * *(_DWORD*)(a1 + 120) / -4;
        else
            v150 = 3 * *(_DWORD*)(a1 + 120) / 4;
        *(_DWORD*)(a1 + 128) = -v150;
        result = -*(_DWORD*)(a1 + 128) / 30;
        *(_DWORD*)(a1 + 152) = result;
        return result;
    }
    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)183)
    {
        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)184)
        {
            *(_BYTE*)(a1 + 71) = 1;
            *(_BYTE*)(a1 + 194) = 11;
            *(_BYTE*)(a1 + 70) = 5;
        }
        else if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)185)
        {
            *(_BYTE*)(a1 + 71) = 1;
            *(_BYTE*)(a1 + 194) = 3;
            *(_BYTE*)(a1 + 70) = 5;
        }
        else
        {
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)186)
            {
                *(_BYTE*)(a1 + 71) = 1;
                *(_BYTE*)(a1 + 194) = 3;
                *(_BYTE*)(a1 + 70) = 5;
                *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
                if (*(int*)(a1 + 120) < 440)
                    *(_DWORD*)(a1 + 120) = 440;
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
                    v137 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                else
                    v137 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                *(_DWORD*)(a1 + 120) += v137;
                if (*(int*)(a1 + 120) > 1000)
                    *(_DWORD*)(a1 + 120) = 1000;
                if (!*(_DWORD*)(a1 + 164))
                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 120) = 3 * *(_DWORD*)(a1 + 120) / 2;
                *(_DWORD*)(a1 + 124) = 0;
                if (sub_425D30(*(_DWORD**)(a1 + 56)))
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v136 = -*(_DWORD*)(a1 + 120);
                    else
                        v136 = *(_DWORD*)(a1 + 120);
                    *(_DWORD*)(a1 + 128) = v136 / 2;
                }
                else
                {
                    *(_DWORD*)(a1 + 128) = 0;
                }
                result = a1;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 144) = 0;
                *(_DWORD*)(a1 + 148) = 0;
                if (a6)
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v135 = -*(_DWORD*)(a1 + 120);
                    else
                        v135 = *(_DWORD*)(a1 + 120);
                    v200 = v135;
                    v18 = sub_426090(a6);
                    v195 = v18 - sub_426470((_DWORD*)a1);
                    v19 = sub_4260B0(a6);
                    v197 = v19 - sub_426530((_DWORD*)a1);
                    v20 = (sub_4260D0(a6) - 1500) / 100;
                    v196 = 100
                        * (v20
                            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
                            / 100);
                    __asm
                    {
                       // fild[ebp + var_68]
                       // fstp    qword ptr[esp + 280h + var_280]
                       // fild[ebp + var_60]
                       // fstp[esp + 288h + var_288]
                    }
                    sub_4A3090(a2, v67, v83);
                    __asm
                    {
                       // fstp[ebp + var_5C]
                       // fild[ebp + var_54]
                       // fstp[ebp + var_18C]
                    }
                    v21 = cos(v198);
                   // __asm { fmul[ebp + var_18C] }
                    *(_DWORD*)(a1 + 120) = _ftol(v21);
                    __asm
                    {
                       // fild[ebp + var_54]
                       // fstp[ebp + var_194]
                    }
                    v22 = sin(v198);
                    //__asm { fmul[ebp + var_194] }
                    *(_DWORD*)(a1 + 124) = _ftol(v22);
                    __asm
                    {
                       // fild[ebp + var_68]
                       // fstp    qword ptr[esp + 280h + var_280]
                       // fild[ebp + var_64]
                       // fstp[esp + 288h + var_288]
                    }
                    sub_4A3090(v22, v68, v84);
                    //__asm
                    //{
                    //    fstp[ebp + var_5C]
                    //    fild[ebp + var_54]
                    //    fstp[ebp + var_19C]
                    //}
                    v23 = sin(v199);
                    //__asm { fmul[ebp + var_19C] }
                    result = _ftol(v23);
                    *(_DWORD*)(a1 + 128) = result;
                }
                return result;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)189)
            {
                *(_DWORD*)(a1 + 88) = *(unsigned __int16*)(a1 + 192) / 85;
                if (*(int*)(a1 + 88) <= 0)
                    *(_DWORD*)(a1 + 88) = 1;
                *(_BYTE*)(a1 + 71) = 1;
                *(_BYTE*)(a1 + 194) = 3;
                *(_BYTE*)(a1 + 70) = 5;
                *(_DWORD*)(a1 + 136) = 1000;
                *(_DWORD*)(a1 + 132) = 1000;
                *(_DWORD*)(a1 + 140) = 1;
                v96 = sub_426530((_DWORD*)a1) / 100;
                v24 = sub_426470((_DWORD*)a1);
                v194 = -100 * sub_446497((int*)unk_4B9B10, v24 / 100, v96);
                if (v194 == -102000)
                    *(_DWORD*)(a1 + 128) = -200;
                else
                    *(_DWORD*)(a1 + 128) = (v194
                        - 1200
                        - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1))
                    / 30;
                result = a1;
                *(_DWORD*)(a1 + 120) = 0;
                *(_DWORD*)(a1 + 144) = 10000;
                if (!*(_DWORD*)(a1 + 164))
                {
                    result = a1;
                    *(_DWORD*)(a1 + 144) = -*(_DWORD*)(a1 + 144);
                }
                if (a6)
                {
                    v193 = 150000;
                    v25 = sub_426090(a6);
                    v190 = v25 - sub_426470((_DWORD*)a1);
                    v26 = sub_4260B0(a6);
                    v191 = v26 - sub_426530((_DWORD*)a1);
                    __asm
                    {
                       // fild[ebp + var_80]
                      //  fstp    qword ptr[esp + 280h + var_280]
                      //  fild[ebp + var_7C]
                      //  fstp[esp + 288h + var_288]
                    }
                    sub_4A3090(a2, v69, v85);
                  //  __asm { fstp[ebp + var_78] }
                    *(_DWORD*)(a1 + 120) = 0;
                    *(_DWORD*)(a1 + 124) = 0;
                    __asm
                    {
                       // fild[ebp + var_70]
                       // fstp[ebp + var_1A4]
                    }
                    v27 = cos(v192);
                    __asm
                    {
                       // fmul[ebp + var_1A4]
                        fdiv    ds : unk_4AC3C0
                    }
                    *(_DWORD*)(a1 + 144) = _ftol(v27);
                    __asm
                    {
                        //fild[ebp + var_70]
                       // fstp[ebp + var_1AC]
                    }
                    v28 = sin(v192);
                    __asm
                    {
                       // fmul[ebp + var_1AC]
                        fdiv    ds : unk_4AC3C0
                    }
                    result = _ftol(v28);
                    *(_DWORD*)(a1 + 148) = result;
                }
                return result;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)190)
            {
                *(_BYTE*)(a1 + 68) = 1;
                *(_BYTE*)(a1 + 71) = 1;
                *(_BYTE*)(a1 + 194) = 5;
                *(_BYTE*)(a1 + 70) = 5;
                *(_DWORD*)(a1 + 120) = 2 * a3 + 200;
                if (*(int*)(a1 + 120) < 440)
                    *(_DWORD*)(a1 + 120) = 440;
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
                    v129 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                else
                    v129 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                *(_DWORD*)(a1 + 120) += v129;
                if (*(int*)(a1 + 120) > 500)
                    *(_DWORD*)(a1 + 120) = 500;
                if (!*(_DWORD*)(a1 + 164))
                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 124) = 0;
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
                result = a1;
                *(_DWORD*)(a1 + 144) = 0;
                *(_DWORD*)(a1 + 148) = 0;
                if (a6)
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v128 = -*(_DWORD*)(a1 + 120);
                    else
                        v128 = *(_DWORD*)(a1 + 120);
                    v189 = v128;
                    v29 = sub_426090(a6);
                    v186 = v29 - sub_426470((_DWORD*)a1);
                    v30 = sub_4260B0(a6);
                    v187 = v30 - sub_426530((_DWORD*)a1);
                    //__asm
                    //{
                    //   // fild[ebp + var_94]
                    //    fstp    qword ptr[esp + 280h + var_280]
                    //   // fild[ebp + var_90]
                    //    fstp[esp + 288h + var_288]
                    //}
                    sub_4A3090(a2, v70, v86);
                    __asm
                    {
                     //   fstp[ebp + var_8C]
                       // fild[ebp + var_84]
                        //??fstp[ebp + var_1BC]
                    }
                    v31 = cos(v188);
                   // __asm { fmul[ebp + var_1BC] }
                    *(_DWORD*)(a1 + 120) = _ftol(v31);
                    __asm
                    {
                       // fild[ebp + var_84]
                       // fstp[ebp + var_1C4]
                    }
                    v32 = sin(v188);
                    //__asm { fmul[ebp + var_1C4] }
                    result = _ftol(v32);
                    *(_DWORD*)(a1 + 124) = result;
                }
                return result;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)191)
            {
                *(_BYTE*)(a1 + 71) = 1;
                *(_BYTE*)(a1 + 194) = 3;
                *(_BYTE*)(a1 + 70) = 5;
                *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
                if (*(int*)(a1 + 120) < 440)
                    *(_DWORD*)(a1 + 120) = 440;
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
                    v125 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                else
                    v125 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
                *(_DWORD*)(a1 + 120) += v125;
                if (*(int*)(a1 + 120) > 800)
                    *(_DWORD*)(a1 + 120) = 800;
                if (!*(_DWORD*)(a1 + 164))
                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 124) = 0;
                if (sub_425D30(*(_DWORD**)(a1 + 56)))
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v124 = -*(_DWORD*)(a1 + 120);
                    else
                        v124 = *(_DWORD*)(a1 + 120);
                    *(_DWORD*)(a1 + 128) = v124 / 2;
                }
                else
                {
                    *(_DWORD*)(a1 + 128) = 0;
                }
                result = a1;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 144) = 0;
                *(_DWORD*)(a1 + 148) = 0;
                if (a6)
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v123 = -*(_DWORD*)(a1 + 120);
                    else
                        v123 = *(_DWORD*)(a1 + 120);
                    v185 = v123;
                    v33 = sub_426090(a6);
                    v180 = v33 - sub_426470((_DWORD*)a1);
                    v34 = sub_4260B0(a6);
                    v182 = v34 - sub_426530((_DWORD*)a1);
                    v35 = (sub_4260D0(a6) - 1500) / 100;
                    v181 = 100
                        * (v35
                            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
                            / 100);
                    __asm
                    {
                       // fild[ebp + var_AC]
                       // fstp    qword ptr[esp + 280h + var_280]
                      //  fild[ebp + var_A4]
                       // fstp[esp + 288h + var_288]
                    }
                    sub_4A3090(a2, v71, v87);
                    __asm
                    {
                       // fstp[ebp + var_A0]
                      //  fild[ebp + var_98]
                        //fstp[ebp + var_1D8]
                    }
                    v36 = cos(v183);
                    //__asm { fmul[ebp + var_1D8] }
                    *(_DWORD*)(a1 + 120) = _ftol(v36);
                    __asm
                    {
                      ///  fild[ebp + var_98]
                       // fstp[ebp + var_1E0]
                    }
                    v37 = sin(v183);
                   // __asm { fmul[ebp + var_1E0] }
                    *(_DWORD*)(a1 + 124) = _ftol(v37);
                    //__asm
                    //{
                    //    fild[ebp + var_AC]
                    //    fstp    qword ptr[esp + 280h + var_280]
                    //    //fild[ebp + var_A8]
                    //    fstp[esp + 288h + var_288]
                    //}
                    sub_4A3090(v37, v72, v88);
                    __asm
                    {
                        //fstp[ebp + var_A0]
                     //   fild[ebp + var_98]
                       // fstp[ebp + var_1E8]
                    }
                    v38 = sin(v184);
                    //__asm { fmul[ebp + var_1E8] }
                    result = _ftol(v38);
                    *(_DWORD*)(a1 + 128) = result;
                }
                return result;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)192)
            {
                *(_BYTE*)(a1 + 71) = 1;
                *(_BYTE*)(a1 + 194) = 3;
                *(_BYTE*)(a1 + 70) = 5;
                *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
                if (*(int*)(a1 + 120) < 200)
                    *(_DWORD*)(a1 + 120) = 200;
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
                    v119 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / -2;
                else
                    v119 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2;
                *(_DWORD*)(a1 + 120) += v119;
                if (*(int*)(a1 + 120) > 500)
                    *(_DWORD*)(a1 + 120) = 500;
                if (!*(_DWORD*)(a1 + 164))
                    *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 124) = 0;
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
                *(_DWORD*)(a1 + 144) = 0;
                result = a1;
                *(_DWORD*)(a1 + 148) = 0;
                if (a6)
                {
                    if (*(int*)(a1 + 120) <= 0)
                        v118 = -*(_DWORD*)(a1 + 120);
                    else
                        v118 = *(_DWORD*)(a1 + 120);
                    v179 = v118;
                    v39 = sub_426090(a6);
                    v176 = v39 - sub_426470((_DWORD*)a1);
                    v40 = sub_4260B0(a6);
                    v177 = v40 - sub_426530((_DWORD*)a1);
                    __asm
                    {
                       //?? fild[ebp + var_C0]
                        //fstp    qword ptr[esp + 280h + var_280]
                        //fild[ebp + var_BC]
                        //fstp[esp + 288h + var_288]
                    }
                    sub_4A3090(a2, v73, v89);
                    __asm
                    {
                       // fstp[ebp + var_B8]
                        //fild[ebp + var_B0]
                        //fstp[ebp + var_1F8]
                    }
                    v41 = cos(v178);
                    //__asm { fmul[ebp + var_1F8] }
                    *(_DWORD*)(a1 + 120) = _ftol(v41);
                    __asm
                    {
                        //fild[ebp + var_B0]
                       // fstp[ebp + var_200]
                    }
                    v42 = sin(v178);
                   // __asm { fmul[ebp + var_200] }
                    result = _ftol(v42);
                    *(_DWORD*)(a1 + 124) = result;
                }
                return result;
            }
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)193)
            {
                if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)194)
                {
                    *(_BYTE*)(a1 + 71) = 1;
                    *(_BYTE*)(a1 + 194) = 3;
                    *(_BYTE*)(a1 + 70) = 5;
                    *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
                    if (*(int*)(a1 + 120) < 200)
                        *(_DWORD*)(a1 + 120) = 200;
                    if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
                        v115 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / -2;
                    else
                        v115 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2;
                    *(_DWORD*)(a1 + 120) += v115;
                    if (*(int*)(a1 + 120) > 500)
                        *(_DWORD*)(a1 + 120) = 500;
                    if (!*(_DWORD*)(a1 + 164))
                        *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                    *(_DWORD*)(a1 + 124) = 0;
                    *(_DWORD*)(a1 + 128) = 0;
                    *(_DWORD*)(a1 + 152) = 0;
                    result = a1;
                    *(_DWORD*)(a1 + 144) = 0;
                    *(_DWORD*)(a1 + 148) = 0;
                    if (a6)
                    {
                        if (*(int*)(a1 + 120) <= 0)
                            v114 = -*(_DWORD*)(a1 + 120);
                        else
                            v114 = *(_DWORD*)(a1 + 120);
                        v175 = v114;
                        v43 = sub_426090(a6);
                        v172 = v43 - sub_426470((_DWORD*)a1);
                        v44 = sub_4260B0(a6);
                        v173 = v44 - sub_426530((_DWORD*)a1);
                        __asm
                        {
                            //??fild[ebp + var_D4]
                           // fstp    qword ptr[esp + 280h + var_280]
                           //?? fild[ebp + var_D0]
                           // fstp[esp + 288h + var_288]
                        }
                        sub_4A3090(a2, v74, v90);
                        __asm
                        {
                           //?? fstp[ebp + var_CC]
                           //?? fild[ebp + var_C4]
                           // fstp[ebp + var_210]
                        }
                        v45 = cos(v174);
                       // __asm { fmul[ebp + var_210] }
                        *(_DWORD*)(a1 + 120) = _ftol(v45);
                        __asm
                        {
                           // fild[ebp + var_C4]
                           // fstp[ebp + var_218]
                        }
                        v46 = sin(v174);
                        //__asm { fmul[ebp + var_218] }
                        result = _ftol(v46);
                        *(_DWORD*)(a1 + 124) = result;
                    }
                }
                else
                {
                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)195)
                    {
                        *(_DWORD*)(a1 + 60) = sub_464AC9((char*)unk_4B9B10, *(_BYTE**)(a1 + 56), 0, 1);
                        if (*(_DWORD*)(a1 + 60))
                        {
                            *(_BYTE*)(a1 + 71) = 1;
                            *(_BYTE*)(a1 + 194) = 11;
                            *(_BYTE*)(a1 + 70) = 5;
                            *(_DWORD*)(a1 + 120) = 10 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
                            if (sub_425D30(*(_DWORD**)(a1 + 56)))
                                *(_DWORD*)(a1 + 128) = 5;
                            else
                                *(_DWORD*)(a1 + 128) = 1;
                            result = a1;
                            *(_DWORD*)(a1 + 152) = 0;
                            return result;
                        }
                        goto LABEL_259;
                    }
                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)196)
                    {
                        *(_BYTE*)(a1 + 71) = 1;
                        *(_BYTE*)(a1 + 68) = 1;
                        *(_BYTE*)(a1 + 194) = 2;
                        *(_DWORD*)(a1 + 120) = 2 * a3 + 150;
                        if (*(int*)(a1 + 120) < 200)
                            *(_DWORD*)(a1 + 120) = 200;
                        if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) / 2 <= 0)
                            v111 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56))
                            / -2;
                        else
                            v111 = (int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56))
                            / 2;
                        *(_DWORD*)(a1 + 120) += v111;
                        if (*(int*)(a1 + 120) > 500)
                            *(_DWORD*)(a1 + 120) = 500;
                        if (!*(_DWORD*)(a1 + 164))
                            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                        *(_DWORD*)(a1 + 124) = 0;
                        *(_DWORD*)(a1 + 128) = 0;
                        result = a1;
                        *(_DWORD*)(a1 + 152) = 0;
                        *(_DWORD*)(a1 + 144) = 0;
                        *(_DWORD*)(a1 + 148) = 0;
                        if (a6)
                        {
                            if (*(int*)(a1 + 120) <= 0)
                                v110 = -*(_DWORD*)(a1 + 120);
                            else
                                v110 = *(_DWORD*)(a1 + 120);
                            v171 = v110;
                            v47 = sub_426090(a6);
                            v168 = v47 - sub_426470((_DWORD*)a1);
                            v48 = sub_4260B0(a6);
                            v169 = v48 - sub_426530((_DWORD*)a1);
                            __asm
                            {
                                //??fild[ebp + var_E8]
                                //fstp    qword ptr[esp + 280h + var_280]
                                //??fild[ebp + var_E4]
                                //fstp[esp + 288h + var_288]
                            }
                            sub_4A3090(a2, v75, v91);
                            __asm
                            {
                               //?? fstp[ebp + var_E0]
                               //?? fild[ebp + var_D8]
                              //  fstp[ebp + var_228]
                            }
                            v49 = cos(v170);
                            //__asm { fmul[ebp + var_228] }
                            *(_DWORD*)(a1 + 120) = _ftol(v49);
                            __asm
                            {
                               // fild[ebp + var_D8]
                               // fstp[ebp + var_230]
                            }
                            v50 = sin(v170);
                            //__asm { fmul[ebp + var_230] }
                            result = _ftol(v50);
                            *(_DWORD*)(a1 + 124) = result;
                        }
                    }
                    else
                    {
                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) != (struct Concurrency::ISchedulerProxy*)197)
                        {
                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)198)
                            {
                                *(_DWORD*)(a1 + 120) = 10 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
                                *(_BYTE*)(a1 + 71) = 1;
                                *(_BYTE*)(a1 + 68) = rand() % 3 == 0;
                                v57 = rand() % 14;
                                result = a1;
                                *(_BYTE*)(a1 + 194) = v57;
                                return result;
                            }
                            goto LABEL_259;
                        }
                        *(_BYTE*)(a1 + 71) = 1;
                        *(_BYTE*)(a1 + 194) = 3;
                        *(_BYTE*)(a1 + 70) = 5;
                        *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
                        if (*(int*)(a1 + 120) < 440)
                            *(_DWORD*)(a1 + 120) = 440;
                        if (*(int*)(a1 + 120) > 1000)
                            *(_DWORD*)(a1 + 120) = 1000;
                        if (!*(_DWORD*)(a1 + 164))
                            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                        *(_DWORD*)(a1 + 124) = 0;
                        if (sub_425D30(*(_DWORD**)(a1 + 56)))
                        {
                            if (*(int*)(a1 + 120) <= 0)
                                v107 = -*(_DWORD*)(a1 + 120);
                            else
                                v107 = *(_DWORD*)(a1 + 120);
                            *(_DWORD*)(a1 + 128) = v107 / 2;
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 128) = 0;
                        }
                        *(_DWORD*)(a1 + 152) = 0;
                        *(_DWORD*)(a1 + 144) = 0;
                        *(_DWORD*)(a1 + 148) = 0;
                        if (a6)
                        {
                            if (*(int*)(a1 + 120) <= 0)
                                v106 = -*(_DWORD*)(a1 + 120);
                            else
                                v106 = *(_DWORD*)(a1 + 120);
                            v167 = v106;
                            v51 = sub_426090(a6);
                            v162 = v51 - sub_426470((_DWORD*)a1);
                            v52 = sub_4260B0(a6);
                            v164 = v52 - sub_426530((_DWORD*)a1);
                            v53 = (sub_4260D0(a6) - 1500) / 100;
                            v163 = 100
                                * (v53
                                    - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
                                    / 100);
                            __asm
                            {
                                //??fild[ebp + var_100]
                                //fstp    qword ptr[esp + 280h + var_280]
                               //??? fild[ebp + var_F8]
                                //fstp[esp + 288h + var_288]
                            }
                            sub_4A3090(a2, v76, v92);
                            __asm
                            {
                                //??fstp[ebp + var_F4]
                               //?? fild[ebp + var_EC]
                               // fstp[ebp + var_240]
                            }
                            v54 = cos(v165);
                            //__asm { fmul[ebp + var_240] }
                            *(_DWORD*)(a1 + 120) = _ftol(v54);
                            __asm
                            {
                              //  fild[ebp + var_EC]
                               // fstp[ebp + var_248]
                            }
                            v55 = sin(v165);
                           // __asm { fmul[ebp + var_248] }
                            *(_DWORD*)(a1 + 124) = _ftol(v55);
                            __asm
                            {
                                //fild[ebp + var_100]
                                //fstp    qword ptr[esp + 280h + var_280]
                                //fild[ebp + var_FC]???
                                //fstp[esp + 288h + var_288]
                            }
                            sub_4A3090(v55, v77, v93);
                            __asm
                            {
                                //fstp[ebp + var_F4]
                              //  fild[ebp + var_EC]
                               // fstp[ebp + var_250]
                            }
                            v56 = sin(v166);
                            //__asm { fmul[ebp + var_250] }
                            *(_DWORD*)(a1 + 128) = _ftol(v56);
                        }
                        *(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 120);
                        result = a1;
                        *(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 124);
                    }
                }
                return result;
            }
            *(_BYTE*)(a1 + 71) = 1;
            *(_BYTE*)(a1 + 194) = 3;
            *(_BYTE*)(a1 + 70) = 5;
        }
    LABEL_259:
        if (*(unsigned __int8*)(a1 + 72) < 2u
            || *(unsigned __int8*)(a1 + 72) >= 4u && *(unsigned __int8*)(a1 + 72) <= 7u
            || *(_BYTE*)(a1 + 72) == 11
            || *(_BYTE*)(a1 + 72) == 12)
        {
            *(_DWORD*)(a1 + 120) = 2 * a3 + 320;
            if (*(int*)(a1 + 120) < 440)
                *(_DWORD*)(a1 + 120) = 440;
            if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56)) <= 0)
                v102 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
            else
                v102 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(a1 + 56));
            *(_DWORD*)(a1 + 120) += v102;
            if (*(int*)(a1 + 120) > 1000)
                *(_DWORD*)(a1 + 120) = 1000;
            if (!*(_DWORD*)(a1 + 164))
                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
            if (*(_DWORD*)(a1 + 8) == 185)
            {
                *(int*)(a1 + 120) /= 4;
            }
            else if (*(_DWORD*)(a1 + 8) == 193)
            {
                *(int*)(a1 + 120) /= 2;
            }
            *(_DWORD*)(a1 + 124) = 0;
            if (a5)
            {
                if (*(int*)(a1 + 120) <= 0)
                    v101 = -*(_DWORD*)(a1 + 120);
                else
                    v101 = *(_DWORD*)(a1 + 120);
                *(_DWORD*)(a1 + 128) = v101 / 2;
                *(_DWORD*)(a1 + 152) = 0;
            }
            else
            {
                *(_DWORD*)(a1 + 128) = 0;
                *(_DWORD*)(a1 + 152) = 0;
            }
            result = a1;
            *(_DWORD*)(a1 + 144) = 0;
            *(_DWORD*)(a1 + 148) = 0;
            if (a6)
            {
                if (*(int*)(a1 + 120) <= 0)
                    v100 = -*(_DWORD*)(a1 + 120);
                else
                    v100 = *(_DWORD*)(a1 + 120);
                v161 = v100;
                v58 = sub_426090(a6);
                v156 = v58 - sub_426470((_DWORD*)a1);
                v59 = sub_4260B0(a6);
                v158 = v59 - sub_426530((_DWORD*)a1);
                v60 = (sub_4260D0(a6) - 1500) / 100;
                v157 = 100
                    * (v60
                        - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
                        / 100);
                __asm
                {
                   // fild[ebp + var_118]
                    //fstp    qword ptr[esp + 280h + var_280]
                   // fild[ebp + var_110]
                   // fstp[esp + 288h + var_288]
                }
                sub_4A3090(a2, v78, v94);
                __asm
                {
                  //  fstp[ebp + var_10C]
                  //  fild[ebp + var_104]
                   // fstp[ebp + var_264]
                }
                v61 = cos(v159);
                //__asm { fmul[ebp + var_264] }
                *(_DWORD*)(a1 + 120) = _ftol(v61);
                //__asm
                //{
                //    fild[ebp + var_104]
                //    fstp[ebp + var_26C]
                //}
                v62 = sin(v159);
                //__asm { fmul[ebp + var_26C] }
                *(_DWORD*)(a1 + 124) = _ftol(v62);
                __asm
                {
                   // fild[ebp + var_118]
                   // fstp    qword ptr[esp + 280h + var_280]
                   // fild[ebp + var_114]
                   // fstp[esp + 288h + var_288]
                }
                sub_4A3090(v62, v79, v95);
                __asm
                {
                  //  fstp[ebp + var_10C]
                  //  fild[ebp + var_104]
                  ///  fstp[ebp + var_274]
                }
                v63 = sin(v160);
                //__asm { fmul[ebp + var_274] }
                result = _ftol(v63);
                *(_DWORD*)(a1 + 128) = result;
            }
        }
        else if (*(_BYTE*)(a1 + 72) == 2)
        {
            *(_DWORD*)(a1 + 120) = 150 * (*(_DWORD*)(a1 + 164) - (*(_DWORD*)(a1 + 164) == 0));
            *(_DWORD*)(a1 + 96) = *(_DWORD*)(a1 + 120) + sub_426090(*(_DWORD**)(a1 + 56));
            *(_DWORD*)(a1 + 124) = 0;
            *(_DWORD*)(a1 + 128) = -860;
            *(_DWORD*)(a1 + 144) = 0;
            result = a1;
            *(_DWORD*)(a1 + 148) = 0;
            *(_DWORD*)(a1 + 152) = 30;
        }
        else if (*(_BYTE*)(a1 + 72) == 3)
        {
            *(_DWORD*)(a1 + 120) = 250;
            if (!*(_DWORD*)(a1 + 164))
                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
            *(_DWORD*)(a1 + 124) = 0;
            *(_DWORD*)(a1 + 128) = -300;
            *(_DWORD*)(a1 + 144) = 0;
            result = a1;
            *(_DWORD*)(a1 + 148) = 0;
            *(_DWORD*)(a1 + 152) = 30;
        }
        else if (*(_BYTE*)(a1 + 72) == 8
            || *(_BYTE*)(a1 + 72) == 9
            || *(_BYTE*)(a1 + 72) == 10
            || (result = *(unsigned __int8*)(a1 + 72), result == 13))
        {
            *(_DWORD*)(a1 + 120) = 300;
            if (!*(_DWORD*)(a1 + 164))
                *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
            *(_DWORD*)(a1 + 124) = 0;
            *(_DWORD*)(a1 + 128) = -180;
            *(_DWORD*)(a1 + 144) = 0;
            result = a1;
            *(_DWORD*)(a1 + 148) = 0;
            *(_DWORD*)(a1 + 152) = 30;
        }
        return result;
    }
    if (!a6)
        a6 = (int*)sub_4682D3((char*)unk_4B9B10, *(_DWORD**)(a1 + 56), 0);
    if (!a6)
        goto LABEL_259;
    *(_BYTE*)(a1 + 70) = 5;
    *(_DWORD*)(a1 + 60) = (int)(int*)a6;
    *(_BYTE*)(a1 + 194) = 3;
    *(_BYTE*)(a1 + 71) = 1;
    v208 = 160;
    sub_44647E((char*)unk_4B9B10);
    v12 = sub_426090(a6);
    v203 = v12 - sub_426470((_DWORD*)a1);
    v13 = sub_4260B0(a6);
    v205 = v13 - sub_426530((_DWORD*)a1);
    v209 = sub_425D70(*(_DWORD**)(a1 + 56));
    if (!v203)
    {
        if (v205 <= 0)
            v149 = -v205;
        else
            v149 = v205;
        v203 = (v209 - (v209 == 0)) * v149;
    }
    v14 = (sub_4260D0(a6) - 1500) / 100;
    v204 = 100
        * (v14
            - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
            / 100);
    __asm
    {
       // fild[ebp + var_48]
       // fstp    qword ptr[esp + 280h + var_280]
       // fild[ebp + var_3C]
       // fstp[esp + 288h + var_288]
    }
    sub_4A3090(a2, v65, v81);
    //__asm { fstp[ebp + var_144] }
    v147 = 2 * (rand() % 2) - 1;
    __asm
    {
       // fild[ebp + var_148]
       // fmul    ds : unk_4AC3C8
       // fadd[ebp + var_144]
      // / fstp[ebp + var_38]
       //// fild[ebp + var_30]
       // fstp[ebp + var_150]
    }
    v15 = cos(v206);
    //__asm { fmul[ebp + var_150] }
    *(_DWORD*)(a1 + 120) = _ftol(v15);
    __asm
    {
        //fild[ebp + var_30]
        //fstp[ebp + var_158]
    }
    v16 = sin(v206);
    //__asm { fmul[ebp + var_158] }
    *(_DWORD*)(a1 + 124) = _ftol(v16);
    if (*(int*)(a1 + 120) <= 0)
        v144 = -*(_DWORD*)(a1 + 120);
    else
        v144 = *(_DWORD*)(a1 + 120);
    if (*(int*)(a1 + 124) <= 0)
        v143 = -*(_DWORD*)(a1 + 124);
    else
        v143 = *(_DWORD*)(a1 + 124);
    if (v144 < v143)
    {
        v202 = *(_DWORD*)(a1 + 120);
        v201 = *(_DWORD*)(a1 + 124);
        if (v201 <= 0)
            v142 = -v201;
        else
            v142 = *(_DWORD*)(a1 + 124);
        if (v202 <= 0)
            v141 = (v202 >= 0) - 1;
        else
            v141 = 1;
        *(_DWORD*)(a1 + 120) = v141 * v142;
        if (v202 <= 0)
            v140 = -v202;
        else
            v140 = v202;
        if (v201 <= 0)
            v139 = (v201 >= 0) - 1;
        else
            v139 = 1;
        *(_DWORD*)(a1 + 124) = v139 * v140;
    }
    if (!v209 && *(int*)(a1 + 120) > 0 || v209 && *(int*)(a1 + 120) < 0)
        *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
    __asm
    {
        //fild[ebp + var_48]
       // fstp    qword ptr[esp + 280h + var_280]
       // fild[ebp + var_44]
       // fstp[esp + 288h + var_288]
    }
    sub_4A3090(v16, v66, v82);
    __asm
    {
        //fstp[ebp + var_38]
        //fild[ebp + var_30]
        //fstp[ebp + var_178]
    }
    v17 = sin(v207);
   // __asm { fmul[ebp + var_178] }
    *(_DWORD*)(a1 + 128) = _ftol(v17);
    result = a1;
    if (*(int*)(a1 + 128) > 0)
        *(_DWORD*)(a1 + 128) = 0;
    *(_DWORD*)(a1 + 124) = 0;
    return result;
}