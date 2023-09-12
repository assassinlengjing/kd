#include "sub.h" 
unsigned __int16* sub_448929(int a1, double a2, double a3, double a4)
{
    int v4; // eax
    int v5; // eax
    struct Concurrency::details::UMSThreadProxy* ExecutingProxy; // esi
    struct Concurrency::details::UMSThreadProxy* v7; // esi
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // eax
    int v9; // eax
    int v10; // esi
    const void* v11; // eax
    int v12; // esi
    int v13; // esi
    int v14; // esi
    int v15; // esi
    int v16; // esi
    int v17; // esi
    struct Concurrency::ISchedulerProxy* v18; // eax
    int v19; // eax
    int v20; // esi
    int v21; // esi
    int v22; // eax
    int v23; // eax
    char v24; // al
    char v25; // al
    int v26; // esi
    int v27; // eax
    int v28; // edx
    unsigned __int16* result; // eax
    int v30; // eax
    int v31; // [esp+14h] [ebp-238h]
    int v32; // [esp+18h] [ebp-234h]
    int yTop; // [esp+20h] [ebp-22Ch]
    CHAR String[64]; // [esp+24h] [ebp-228h] BYREF
    struct tagRECT v36; // [esp+64h] [ebp-1E8h] BYREF
    Concurrency::details::SchedulerBase* v37; // [esp+74h] [ebp-1D8h]
    struct tagRECT v38; // [esp+78h] [ebp-1D4h] BYREF
    struct tagRECT rc; // [esp+88h] [ebp-1C4h] BYREF
    struct Concurrency::ISchedulerProxy* v40; // [esp+98h] [ebp-1B4h]
    struct Concurrency::ISchedulerProxy* v41; // [esp+9Ch] [ebp-1B0h]
    int jj; // [esp+A0h] [ebp-1ACh]
    int v43; // [esp+A4h] [ebp-1A8h]
    Concurrency::details::SchedulerBase* v44; // [esp+A8h] [ebp-1A4h]
    int ii; // [esp+ACh] [ebp-1A0h]
    int v46; // [esp+B0h] [ebp-19Ch]
    char v47[8]; // [esp+B4h] [ebp-198h] BYREF
    int v48; // [esp+BCh] [ebp-190h]
    _DWORD* v49; // [esp+C0h] [ebp-18Ch]
    int v50; // [esp+C4h] [ebp-188h]
    int v51; // [esp+C8h] [ebp-184h]
    int v52; // [esp+CCh] [ebp-180h] BYREF
    char v53; // [esp+D0h] [ebp-17Ch]
    int v54; // [esp+D8h] [ebp-174h]
    char v55; // [esp+DCh] [ebp-170h]
    char v56; // [esp+DDh] [ebp-16Fh]
    int v57; // [esp+E0h] [ebp-16Ch]
    char v58; // [esp+E8h] [ebp-164h]
    int v59; // [esp+ECh] [ebp-160h]
    int v60; // [esp+F0h] [ebp-15Ch]
    char v61; // [esp+F4h] [ebp-158h]
    int v62; // [esp+F8h] [ebp-154h]
    int v63; // [esp+100h] [ebp-14Ch]
    int v64; // [esp+104h] [ebp-148h]
    int v65; // [esp+108h] [ebp-144h]
    int QueueLength; // [esp+10Ch] [ebp-140h]
    int v67; // [esp+110h] [ebp-13Ch]
    int v68; // [esp+114h] [ebp-138h]
    int n; // [esp+118h] [ebp-134h]
    int v70; // [esp+11Ch] [ebp-130h]
    int v71; // [esp+120h] [ebp-12Ch]
    int v72; // [esp+124h] [ebp-128h]
    int v73; // [esp+128h] [ebp-124h] BYREF
    char v74; // [esp+12Ch] [ebp-120h]
    int v75; // [esp+130h] [ebp-11Ch]
    int v76; // [esp+134h] [ebp-118h]
    char v77; // [esp+138h] [ebp-114h]
    char v78; // [esp+139h] [ebp-113h]
    int v79; // [esp+13Ch] [ebp-110h]
    char v80; // [esp+144h] [ebp-108h]
    char v81; // [esp+145h] [ebp-107h]
    char v82; // [esp+146h] [ebp-106h]
    int v83; // [esp+148h] [ebp-104h]
    struct Concurrency::ISchedulerProxy* v84; // [esp+14Ch] [ebp-100h]
    char v85; // [esp+150h] [ebp-FCh]
    int v86; // [esp+154h] [ebp-F8h]
    int v87; // [esp+158h] [ebp-F4h]
    int v88; // [esp+15Ch] [ebp-F0h]
    int v89; // [esp+160h] [ebp-ECh]
    int v90; // [esp+164h] [ebp-E8h]
    int v91; // [esp+168h] [ebp-E4h]
    BOOL v92; // [esp+16Ch] [ebp-E0h]
    int v93; // [esp+170h] [ebp-DCh]
    int m; // [esp+174h] [ebp-D8h]
    int k; // [esp+178h] [ebp-D4h]
    int v96; // [esp+17Ch] [ebp-D0h]
    int v97[13]; // [esp+180h] [ebp-CCh] BYREF
    int v98; // [esp+1B4h] [ebp-98h]
    __int16 v99[28]; // [esp+1B8h] [ebp-94h] BYREF
    Concurrency::details::SchedulerBase* v100; // [esp+1F0h] [ebp-5Ch]
    void* Src; // [esp+1F4h] [ebp-58h]
    int v102; // [esp+1F8h] [ebp-54h]
    int ExecutingCollection; // [esp+1FCh] [ebp-50h]
    Concurrency::details::ContextBase* v104; // [esp+200h] [ebp-4Ch]
    int j; // [esp+204h] [ebp-48h]
    int v106; // [esp+208h] [ebp-44h] BYREF
    int v107; // [esp+210h] [ebp-3Ch]
    int v108; // [esp+214h] [ebp-38h]
    int v109; // [esp+218h] [ebp-34h]
    int v110; // [esp+21Ch] [ebp-30h]
    int v111; // [esp+220h] [ebp-2Ch]
    int v112; // [esp+224h] [ebp-28h]
    int v113; // [esp+228h] [ebp-24h]
    int v114; // [esp+22Ch] [ebp-20h]
    int v115; // [esp+230h] [ebp-1Ch]
    BOOL v116; // [esp+234h] [ebp-18h]
    int v117; // [esp+238h] [ebp-14h]
    BOOL v118; // [esp+23Ch] [ebp-10h]
    int i; // [esp+240h] [ebp-Ch]
    int v120; // [esp+244h] [ebp-8h]
    int v121; // [esp+248h] [ebp-4h]

    if (*(int*)(a1 + 2488) > 100)
        unk_4B99EC = 1;
    *(_DWORD*)(a1 + 2492) += *(_DWORD*)(a1 + 2488);
LABEL_4:
    while (*(int*)(a1 + 2492) >= 100)
    {
        *(_DWORD*)(a1 + 2492) -= 100;
        v118 = unk_4B93B0 % (unsigned int)*(unsigned __int8*)(a1 + 2496) != 0;
        if (*(_BYTE*)(a1 + 2496) == 1)
            v118 = 1;
        if ((!*(_DWORD*)(a1 + 2504) && v118 || *(_DWORD*)(a1 + 2504) && sub_476DC7(0, 5))
            && *(int*)(a1 + 16136) > 0
            && (int)-- * (_DWORD*)(a1 + 16136) > 0)
        {
            for (i = 0; i < 32; ++i)
            {
                if (MarkedForDetachment((_BYTE*)(a1 + 36 * i + 9608)) == 19)
                    sub_4419F6(a1 + 36 * i + 9608);
            }
        }
        if ((!*(_DWORD*)(a1 + 2504) && v118 || *(_DWORD*)(a1 + 2504) && sub_476DC7(0, 5)) && !*(_DWORD*)(a1 + 16136))
        {
            ++unk_4B93AC;
            *(_DWORD*)(a1 + 16400) = 0;
            v113 = sub_446465((char*)(_DWORD*)a1);
            v110 = 0;
            v111 = 0;
            v115 = 0;
            v114 = 0;
            v108 = 0;
            for (i = 0; i < (unsigned __int8)unk_4B9985 && (i <= 0 || *(_DWORD*)(a1 + 116) != 3); ++i)
            {
                if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                    && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80
                    && !Concurrency::details::SchedulerProxy::GetNumExternalThreads((Concurrency::details::SchedulerProxy*)(a1 + 612 * i + 2628)))
                {
                    sub_48651C((_DWORD*)(a1 + 128), (_DWORD*)(a1 + 612 * i + 2628), &v106);
                    if (v106 > 8)
                    {
                        if (v106 >= 311)
                            v108 = 1;
                    }
                    else
                    {
                        v114 = 1;
                    }
                    v107 = sub_426270((int*)a1 + 612 * i + 2628);
                    if (v106 < 80 && v107 < 0 || v106 > 240 && v107 > 0)
                    {
                        if (v107 <= 0)
                            v32 = -v107;
                        else
                            v32 = v107;
                        if (v32 > 8000)
                        {
                            if (v107 <= 0)
                                v31 = (v107 >= 0) - 1;
                            else
                                v31 = 1;
                            v107 = 8000 * v31;
                        }
                        v110 += v107;
                        ++v115;
                    }
                }
            }
            if (v115 > 0)
            {
                v110 /= v115;
                if ((v110 >= 0 || !v108) && (v110 <= 0 || !v114))
                    sub_486947((int*)a1 + 128, v113 + v110 / 100 + 160, 1);
            }
            sub_488981((int*)a1 + 128);
            if (*(_BYTE*)(a1 + 2544))
            {
                if (*(_BYTE*)(a1 + 2544) == 1 && *(unsigned __int8*)(a1 + 2545) >= 4u)
                {
                    *(_BYTE*)(a1 + 2544) = 0;
                    *(_BYTE*)(a1 + 2545) = 0;
                }
                ++* (_BYTE*)(a1 + 2545);
            }
            for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
            {
                if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                    && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                {
                    sub_402C05(a1 + 612 * i + 2628);
                    if (!sub_41BEA6((_DWORD*)(a1 + 612 * i + 2628)) && unk_4B9974)
                    {
                        v4 = sub_425E10((void*)(a1 + 13400), i);
                        sub_4844AE(v4);
                    }
                    if (!sub_41BEA6((_DWORD*)(a1 + 612 * i + 2628)) && unk_4B9978 && !unk_4B9974)
                        sub_4837FA((int*)(a1 + 13400), a1 + 612 * i + 2628);
                }
            }
            unk_4B997C = 0;
            for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
            {
                if (unknown_libname_22((_DWORD*)(a1 + 196 * i + 7524)))
                    sub_4914CC(a1 + 196 * i + 7524, a3, a2, a4);
            }
            if (unk_4B999A && unk_4B999A == unk_4B997C)
            {
                for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
                {
                    if (unknown_libname_22((_DWORD*)(a1 + 196 * i + 7524)))
                        sub_49507B((_DWORD*)(a1 + 196 * i + 7524), a2, a3, a4);
                }
            }
            for (i = 0; ; ++i)
            {
                v5 = sub_4755F0((int*)a1 + 128);
                if (i >= v5)
                    break;
                v104 = (Concurrency::details::ContextBase*)sub_488E1E((_DWORD*)(a1 + 128), i);
                if (sub_4754B0((char*)v104))
                {
                    for (j = 0; j < (unsigned __int8)unk_4B9985; ++j)
                    {
                        if (!sub_475410((char*)v104, j))
                        {
                            v100 = (Concurrency::details::SchedulerBase*)(a1 + 612 * j + 2628);
                            if (unknown_libname_7((int*)v100))
                            {
                                if ((unsigned __int8)sub_475210((char*)v100)
                                    && !sub_4263D0((unsigned __int8*)v100)
                                    && sub_474234((void*)a1, v104, (int)v100))
                                {
                                    ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)v104);
                                    if ((int)ExecutingProxy >= sub_426090((int*)v100))
                                    {
                                        v7 = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot * )v104);
                                        if ((int)v7 <= sub_426090((int*)v100))
                                            ExecutingCollection = (int)Concurrency::details::ContextBase::GetExecutingCollection(v104);
                                        else
                                            ExecutingCollection = 0;
                                    }
                                    else
                                    {
                                        ExecutingCollection = 1;
                                    }
                                    Src = (void*)sub_475490((char*)v104);
                                    v98 = *(_DWORD*)Src;
                                    SchedulerProxy = Concurrency::details::SchedulerBase::GetSchedulerProxy(v100);
                                    LOWORD(v102) = sub_417924((int)v100, (int)SchedulerProxy, 1);
                                    v9 = sub_425D70((int*)v100);
                                    if (ExecutingCollection == v9)
                                        LOWORD(v102) = 85 * (unsigned __int16)v102 / 100;
                                    if (sub_475450((short*)v104))
                                    {
                                        v10 = (unsigned __int16)v102;
                                        LOWORD(v102) = v10 * (unsigned __int16)sub_475450((short*)v104) / 100;
                                        if (!(_WORD)v102)
                                            LOWORD(v102) = 1;
                                        v98 = 4 * v98 / (unsigned __int16)v102;
                                        if (v98 <= 0)
                                            v98 = 1;
                                    }
                                    else
                                    {
                                        v98 = *(_DWORD*)Src;
                                    }
                                    sub_4810C0(v99);
                                    v11 = (const void*)sub_475430((char*)v104);
                                    memcpy(v99, v11, sizeof(v99));
                                    v99[0] = v98;
                                    v99[1] = 0;
                                    v99[2] = 1;
                                    sub_4020B0(v97);
                                    memcpy(v97, Src, sizeof(v97));
                                    v97[6] = 0;
                                    LOBYTE(v97[10]) = j;
                                    if ((unsigned __int8)sub_485120((char*)v104))
                                    {
                                        sub_42455B((int)v100, v99);
                                    }
                                    else
                                    {
                                        if (unk_4B99DF)
                                            v97[0] = v98;
                                        else
                                            v97[0] = 0;
                                        v97[3] = ExecutingCollection;
                                        LOBYTE(v97[1]) = v99[5];
                                        LOBYTE(v97[4]) = v99[3];
                                        BYTE1(v97[4]) = v99[4];
                                        v97[11] = (int)v100;
                                        sub_407756((int)v100, 1, (int)v97, 0);
                                    }
                                    sub_48DC76((int)v104, 0, (int)v97);
                                }
                            }
                        }
                    }
                }
            }
            for (i = 0; ; ++i)
            {
                if (i >= (unsigned __int8)unk_4B9985)
                    goto LABEL_203;
                if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628)) && (unsigned __int8)sub_4751F0((char*)a1 + 612 * i + 2628))
                    break;
            LABEL_120:
                ;
            }
            if (*(_DWORD*)(a1 + 116) != 3 || i < 1 || unk_4B93AC % 2u)
            {
                LOBYTE(v96) = sub_426070((_BYTE*)(a1 + 612 * i + 2628));
                for (k = 0; ; ++k)
                {
                    if (k >= 2)
                        goto LABEL_120;
                    if (k)
                    {
                        if (k == 1)
                            v93 = (unsigned __int8)unk_4B999A;
                    }
                    else
                    {
                        v93 = (unsigned __int8)unk_4B9985;
                    }
                    for (m = 0; m < v93; ++m)
                    {
                        if (k)
                        {
                            if (k == 1
                                && (!unknown_libname_22((_DWORD*)(a1 + 196 * m + 7524)) || sub_4753F0(
                                    (_BYTE*)(a1 + 612 * i + 2628),
                                    m)))
                            {
                                continue;
                            }
                        }
                        else
                        {
                            if (i == m)
                                continue;
                            if (!unknown_libname_7((_DWORD*)(a1 + 612 * m + 2628)))
                                continue;
                            if (sub_4753D0((_BYTE*)(a1 + 612 * i + 2628), m))
                                continue;
                            if (!(unsigned __int8)sub_475210((char*)a1 + 612 * m + 2628))
                                continue;
                            if (sub_4263D0((unsigned __int8*)(a1 + 612 * m + 2628)))
                                continue;
                            if (!unk_4B99CC)
                            {
                                v12 = (unsigned __int8)v96;
                                if (v12 == (unsigned __int8)sub_426070((_BYTE*)(a1 + 612 * m + 2628))
                                    && !(unsigned __int8)sub_4752F0((char*)a1 + 612 * i + 2628))
                                {
                                    continue;
                                }
                            }
                            v13 = (unsigned __int8)v96;
                            if (v13 == (unsigned __int8)sub_426070((_BYTE*)(a1 + 612 * m + 2628))
                                && (unsigned __int8)sub_4752F0((char*)a1 + 612 * i + 2628) == 2)
                            {
                                continue;
                            }
                        }
                        if (k)
                        {
                            if (k == 1)
                                v92 = sub_466BEC(
                                    a1 + 612 * i + 2628,
                                    (Concurrency::details::UMSFreeVirtualProcessorRoot*)(a1 + 196 * m + 7524));
                        }
                        else
                        {
                            v92 = sub_443B2A((_DWORD*)(a1 + 612 * i + 2628), (_DWORD*)(a1 + 612 * m + 2628));
                        }
                        if (v92)
                        {
                            if (k)
                            {
                                if (k != 1)
                                    goto LABEL_174;
                                v16 = sub_426090((_DWORD*)(a1 + 612 * i + 2628));
                                if (v16 < sub_426470((_DWORD*)(a1 + 196 * m + 7524)))
                                {
                                    v91 = 1;
                                    goto LABEL_174;
                                }
                                v17 = sub_426090((_DWORD*)(a1 + 612 * i + 2628));
                                if (v17 > sub_426470((_DWORD*)(a1 + 196 * m + 7524)))
                                {
                                    v91 = 0;
                                    goto LABEL_174;
                                }
                            LABEL_173:
                                v91 = sub_425D70((_DWORD*)(a1 + 612 * i + 2628));
                                goto LABEL_174;
                            }
                            v14 = sub_426090((_DWORD*)(a1 + 612 * i + 2628));
                            if (v14 >= sub_426090((_DWORD*)(a1 + 612 * m + 2628)))
                            {
                                v15 = sub_426090((_DWORD*)(a1 + 612 * i + 2628));
                                if (v15 <= sub_426090((_DWORD*)(a1 + 612 * m + 2628)))
                                    goto LABEL_173;
                                v91 = 0;
                            }
                            else
                            {
                                v91 = 1;
                            }
                        LABEL_174:
                            LOWORD(v89) = sub_4261B0((short*)a1 + 612 * i + 2628);
                            v88 = (unsigned __int16)v89;
                            if (!k)
                            {
                                v18 = Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628));
                                LOWORD(v72) = sub_417924(a1 + 612 * m + 2628, (int)v18, 1);
                                v19 = sub_425D70((_DWORD*)(a1 + 612 * m + 2628));
                                if (v91 == v19)
                                    LOWORD(v72) = 85 * (unsigned __int16)v72 / 100;
                                LOBYTE(v71) = sub_475290((char*)a1 + 612 * i + 2628);
                                if ((unsigned __int8)v71 == 1)
                                    LOWORD(v72) = (unsigned __int16)v72 / 2;
                                if (!(_WORD)v72)
                                    LOWORD(v72) = 1;
                                v88 = 4 * (unsigned __int16)v89 / (unsigned __int16)v72;
                                if ((unsigned __int8)v71 == 2)
                                    v88 = (unsigned __int16)v89;
                            }
                            if (v88 <= 0)
                                v88 = 1;
                            sub_4020B0(&v73);
                            v73 = v88;
                            v84 = Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628));
                            v76 = v91;
                            LOBYTE(v90) = sub_475170((char*)a1 + 612 * i + 2628);
                            if ((_BYTE)v90)
                            {
                                if ((unsigned __int8)v90 == 1)
                                {
                                    v76 = sub_425D70((_DWORD*)(a1 + 612 * i + 2628));
                                }
                                else if ((unsigned __int8)v90 == 2)
                                {
                                    v76 = sub_425D70((_DWORD*)(a1 + 612 * i + 2628)) == 0;
                                }
                            }
                            v74 = sub_4753B0((char*)a1 + 612 * i + 2628);
                            v80 = sub_475250((char*)a1 + 612 * i + 2628);
                            v85 = m;
                            v77 = 0;
                            v78 = sub_475310((char*)a1 + 612 * i + 2628);
                            v75 = sub_4752D0((short*)a1 + 612 * i + 2628);
                            v83 = a1 + 612 * i + 2628;
                            v86 = a1 + 612 * m + 2628;
                            v79 = sub_4752B0((unsigned char*)v83);
                            v87 = sub_475270((int*)a1 + 612 * i + 2628);
                            v81 = sub_4751B0((char*)a1 + 612 * i + 2628);
                            v82 = sub_475190((char*)a1 + 612 * i + 2628);
                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) == (struct Concurrency::ISchedulerProxy*)97)
                            {
                                if (k || !sub_4211AC((char*)a1 + 612 * m + 2628))
                                {
                                    v87 = 83;
                                    v79 = 1;
                                }
                                else
                                {
                                    v73 = 40 * sub_4175B4(a1 + 612 * i + 2628, 1) / 100;
                                }
                            }
                            sub_407756(a1 + 612 * i + 2628, 0, (int)&v73, k > 0);
                            if (k)
                            {
                                if (k == 1)
                                    sub_494257(a1 + 196 * m + 7524, 1, (int)&v73, 0);
                            }
                            else
                            {
                                sub_407756(a1 + 612 * m + 2628, 1, (int)&v73, 0);
                            }
                            continue;
                        }
                    }
                }
            }
        LABEL_203:
            for (i = 0; i < (unsigned __int8)unk_4B999A; ++i)
            {
                if (sub_494209((int*)a1 + 196 * i + 7524))
                {
                    v70 = unknown_libname_12((_DWORD*)(a1 + 196 * i + 7524));
                    v68 = 0;
                    for (n = 0; n < (unsigned __int8)unk_4B9985; ++n)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * n + 2628)) && !sub_4755B0((_BYTE*)(a1 + 196 * i + 7524), n))
                        {
                            if ((unsigned __int8)sub_4751D0((char*)a1 + 612 * n + 2628) && sub_475530((int*)a1 + 196 * i + 7524) && v70 != 8)
                            {
                                QueueLength = Concurrency::details::SchedulerProxy::GetQueueLength((Concurrency::details::SchedulerProxy*)(a1 + 196 * i + 7524));
                                v67 = sub_425D70((_DWORD*)(a1 + 612 * n + 2628));
                                if (!QueueLength || (QueueLength <= 0 || !v67) && (QueueLength >= 0 || v67))
                                {
                                    if (sub_464550(
                                        (Concurrency::details::UMSFreeVirtualProcessorRoot*)(a1 + 196 * i + 7524),
                                        a1 + 612 * n + 2628))
                                    {
                                        sub_4238DE(a1 + 612 * n + 2628, (Concurrency::details::SchedulerProxy*)(a1 + 196 * i + 7524));
                                        v68 = 0;
                                        break;
                                    }
                                }
                            }
                            if (!sub_4263D0((unsigned __int8*)(a1 + 612 * n + 2628))
                                && sub_464550(
                                    (Concurrency::details::UMSFreeVirtualProcessorRoot*)(a1 + 196 * i + 7524),
                                    a1 + 612 * n + 2628))
                            {
                                v20 = sub_426470((_DWORD*)(a1 + 196 * i + 7524));
                                if (v20 >= sub_426090((_DWORD*)(a1 + 612 * n + 2628)))
                                {
                                    v21 = sub_426470((_DWORD*)(a1 + 196 * i + 7524));
                                    if (v21 <= sub_426090((_DWORD*)(a1 + 612 * n + 2628)))
                                        v65 = sub_475590((int*)a1 + 196 * i + 7524);
                                    else
                                        v65 = 0;
                                }
                                else
                                {
                                    v65 = 1;
                                }
                                if ((int)Concurrency::details::SchedulerProxy::GetQueueLength((Concurrency::details::SchedulerProxy*)(a1 + 196 * i + 7524)) <= 0)
                                {
                                    if ((Concurrency::details::SchedulerProxy::GetQueueLength((Concurrency::details::SchedulerProxy*)(a1 + 196 * i + 7524)) & 0x80000000) == 0)
                                        v65 = sub_475590((int*)a1 + 196 * i + 7524);
                                    else
                                        v65 = 0;
                                }
                                else
                                {
                                    v65 = 1;
                                }
                                LOWORD(v64) = sub_475570((short*)a1 + 196 * i + 7524);
                                v63 = (unsigned __int16)v64;
                                if (v70 != 8)
                                {
                                    LOWORD(v51) = sub_417924(a1 + 612 * n + 2628, 3, 1);
                                    v22 = sub_425D70((_DWORD*)(a1 + 612 * n + 2628));
                                    if (v65 == v22)
                                        LOWORD(v51) = 85 * (unsigned __int16)v51 / 100;
                                    if (!(_WORD)v51)
                                        LOWORD(v51) = 1;
                                    v63 = 4 * (unsigned __int16)v64 / (unsigned __int16)v51;
                                }
                                if (v63 <= 0)
                                    v63 = 1;
                                sub_4020B0(&v52);
                                v52 = v63;
                                v60 = 3;
                                v54 = v65;
                                v53 = sub_475550((char*)a1 + 196 * i + 7524);
                                v58 = 6;
                                v61 = n;
                                v55 = 0;
                                v56 = sub_4754F0((char*)a1 + 196 * i + 7524);
                                v59 = unknown_libname_8((_DWORD*)(a1 + 196 * i + 7524));
                                v62 = a1 + 612 * n + 2628;
                                if (v70 == 8)
                                    v57 = 0;
                                else
                                    v57 = sub_475510((unsigned char*)a1 + 196 * i + 7524);
                                v68 = 1;
                                sub_407756(a1 + 612 * n + 2628, 1, (int)&v52, 0);
                                sub_494257(a1 + 196 * i + 7524, 0, (int)&v52, 0);
                            }
                        }
                    }
                    if (v68)
                        sub_494257(a1 + 196 * i + 7524, 0, 0, 1);
                }
            }
            i = 0;
            while (2)
            {
                if (i >= (unsigned __int8)unk_4B9985)
                {
                    v112 = 0;
                    if (*(_DWORD*)(a1 + 116) != 3)
                    {
                        v48 = 0;
                        memset(v47, 0, sizeof(v47));
                        for (i = 0; i < (unsigned __int8)unk_4B9990; ++i)
                        {
                            LOBYTE(v46) = *(_BYTE*)(i + a1 + 2546);
                            if (*(_BYTE*)(i + a1 + 13044))
                            {
                                v112 += (unsigned __int8)v46;
                            }
                            else
                            {
                                for (ii = 0; ii < (unsigned __int8)v46; ++ii)
                                {
                                    v44 = (Concurrency::details::SchedulerBase*)(a1 + 612 * (unsigned __int8)unk_4B9988[ii + v112] + 2628);
                                    if (unknown_libname_7((int*)v44))
                                    {
                                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(v44) != (struct Concurrency::ISchedulerProxy*)80)
                                            break;
                                    }
                                }
                                if (ii == (unsigned __int8)v46)
                                {
                                    v47[i] = 1;
                                    ++v48;
                                }
                                v112 += (unsigned __int8)v46;
                            }
                        }
                        if (v48 > 0)
                        {
                            *(_BYTE*)(a1 + 13042) -= v48;
                            for (i = 0; i < (unsigned __int8)unk_4B9990; ++i)
                            {
                                if (v47[i])
                                {
                                    *(_BYTE*)(i + a1 + 13044) = *(_BYTE*)(a1 + 13042);
                                    if (--v48 <= 0)
                                        break;
                                }
                            }
                        }
                    }
                    v117 = 0;
                    v116 = -1;
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628)))
                        {
                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                            {
                                v24 = sub_426070((_BYTE*)(a1 + 612 * i + 2628));
                                if (v24 != v116)
                                {
                                    ++v117;
                                    LOBYTE(v116) = sub_426070((_BYTE*)(a1 + 612 * i + 2628));
                                    v116 = v116;
                                }
                            }
                        }
                        if (v117 >= 2)
                            break;
                    }
                    if (v117 <= 1 && (v116 || *(_DWORD*)(a1 + 116) != 3))
                    {
                        if (v116 < 0)
                        {
                            if (!v117)
                                sub_44B5EF((_DWORD*)a1, -1);
                        }
                        else
                        {
                            v43 = 1;
                            for (jj = 0; jj < (unsigned __int8)unk_4B9985; ++jj)
                            {
                                if (unknown_libname_7((_DWORD*)(a1 + 612 * jj + 2628)))
                                {
                                    if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * jj + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                                    {
                                        v25 = sub_426070((_BYTE*)(a1 + 612 * jj + 2628));
                                        if (v25 == v116)
                                        {
                                            *(_BYTE*)(jj + a1 + 13052) = 1;
                                            if (!sub_41BEBA(a1 + 612 * jj + 2628))
                                                v43 = 0;
                                        }
                                    }
                                }
                            }
                            if (v43)
                            {
                                sub_44B5EF((_DWORD*)a1, v116);
                                *(_BYTE*)(v116 + a1 + 13044) = 1;
                            }
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628)))
                        {
                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                            {
                                v41 = Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628));
                                if (v41 != (struct Concurrency::ISchedulerProxy*)69
                                    && v41 != (struct Concurrency::ISchedulerProxy*)70)
                                {
                                    sub_408F50(a1 + 612 * i + 2628, a2, a3, a4, 0);
                                }
                            }
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628)))
                        {
                            if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                            {
                                v40 = Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628));
                                if (v40 == (struct Concurrency::ISchedulerProxy*)69
                                    || v40 == (struct Concurrency::ISchedulerProxy*)70)
                                {
                                    sub_408F50(a1 + 612 * i + 2628, a2, a3, a4, 1);
                                }
                            }
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80
                            && !sub_426170((char*)a1 + 612 * i + 2628))
                        {
                            sub_4126CE(a1 + 612 * i + 2628, a2, a3, a4);
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80
                            && sub_426170((char*)a1 + 612 * i + 2628))
                        {
                            sub_4126CE(a1 + 612 * i + 2628, a2, a3, a4);
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                        {
                            sub_417780(a1 + 612 * i + 2628);
                        }
                    }
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (*(__int16*)(a1 + 2 * i + 11404) > 0 && !-- * (_WORD*)(a1 + 2 * i + 11404))
                            sub_456879((_DWORD*)a1, i);
                    }
                    if (unk_4B99F0)
                    {
                        for (i = *(_DWORD*)(a1 + 9092); i < 32; ++i)
                            sub_43F1A3(a1 + 16 * i + 9096);
                        for (i = 0; i < *(_DWORD*)(a1 + 9092); ++i)
                            sub_43F1A3(a1 + 16 * i + 9096);
                    }
                    for (i = 0; i < 32; ++i)
                        sub_4419F6(a1 + 36 * i + 9608);
                    for (i = 0; i < 8; ++i)
                        sub_47F04A(a1 + 40 * i + 10760);
                    for (i = 0; i < 4; ++i)
                        sub_43EF86(a1 + 24 * i + 11080);
                    v109 = 0;
                    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                    {
                        if (*(unsigned __int8*)(i + a1 + 13052) == 255)
                            ++v109;
                    }
                    if (v109 > 0)
                    {
                        *(_BYTE*)(a1 + 13043) -= v109;
                        for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
                        {
                            if (*(unsigned __int8*)(i + a1 + 13052) == 255)
                            {
                                *(_BYTE*)(i + a1 + 13052) = *(_BYTE*)(a1 + 13043);
                                if (--v109 <= 0)
                                    break;
                            }
                        }
                    }
                    sub_4744E5(a1);
                    goto LABEL_4;
                }
                if (unknown_libname_7((_DWORD*)(a1 + 612 * i + 2628))
                    && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
                {
                    if ((unsigned __int8)sub_475370((char*)a1 + 612 * i + 2628) == 2 && sub_4262D0((int*)a1 + 612 * i + 2628))
                    {
                        v50 = sub_4262D0((int*)a1 + 612 * i + 2628);
                        if (sub_475330((int*)a1 + 612 * i + 2628)
                            || sub_475330((int*)v50)
                            || (v23 = sub_4262D0((int*)v50), v23 != a1 + 612 * i + 2628))
                        {
                            sub_425D10((_DWORD*)(a1 + 612 * i + 2628), 0);
                        }
                        else
                        {
                            sub_420FC4(a1 + 612 * i + 2628, 1);
                        }
                        goto LABEL_253;
                    }
                    if ((unsigned __int8)sub_475370((char*)a1 + 612 * i + 2628) == 1)
                    {
                        if (!sub_475330((int*)a1 + 612 * i + 2628))
                        {
                            sub_41242D(a1 + 612 * i + 2628);
                            goto LABEL_253;
                        }
                    }
                    else
                    {
                        if (!sub_475350((int*)a1 + 612 * i + 2628))
                            goto LABEL_253;
                        if (!sub_475330((int*)a1 + 612 * i + 2628))
                        {
                            sub_41B6F5(a1 + 612 * i + 2628);
                            goto LABEL_253;
                        }
                        v49 = (_DWORD*)sub_426430((int*)a1 + 612 * i + 2628);
                        if (v49)
                            sub_41B6CF(v49, 0, 0);
                    }
                    sub_475390((_DWORD*)(a1 + 612 * i + 2628), 0);
                }
            LABEL_253:
                ++i;
                continue;
            }
        }
    }
    sub_477F0C(0);
    v26 = sub_476D78(0);
    v121 = v26 - sub_476D29(0);
    if (sub_476DC7(0, 6))
        *(_DWORD*)(a1 + 2500) = 1;
    for (i = 1; i < (unsigned __int8)unk_4B9986; ++i)
    {
        v27 = sub_477F0C(i);
        LOBYTE(v27) = i;
        if (sub_476DC7(v27, 6))
            *(_DWORD*)(a1 + 2500) = 1;
    }
    if (*(_BYTE*)(a1 + 2544) || *(_DWORD*)(a1 + 16136))
    {
        if (*(int*)(a1 + 16136) <= 0)
        {
            if (*(_BYTE*)(a1 + 2544) == 1)
            {
                SetRect(&v38, 0, 0, 320, 176);
                if (((*(unsigned __int8*)(a1 + 2545) / 2) & 0x80000001) != 0)
                    sub_49EDC1((int)unk_4BDC60, 0, (int*)&v38, 0xFFFFFF);
                else
                    sub_49EDC1((int)unk_4BDC60, 0, (int*)&v38, 0);
                if (*(unsigned __int8*)(a1 + 2545) >= 4u)
                {
                    *(_BYTE*)(a1 + 2544) = 0;
                    *(_BYTE*)(a1 + 2545) = 0;
                }
            }
            ++* (_BYTE*)(a1 + 2545);
        }
        else
        {
            SetRect(&rc, 0, 0, 320, 176);
            sub_49EDC1((int)unk_4BDC60, v28, (int*)&rc, 0);
        }
    }
    else
    {
        sub_486476((_DWORD*)(a1 + 128));
    }
    sub_44325C(a1);
    if (unk_4B99F0)
    {
        for (i = *(_DWORD*)(a1 + 9092); i < 32; ++i)
            sub_43F1F8(a1 + 16 * i + 9096);
        for (i = 0; i < *(_DWORD*)(a1 + 9092); ++i)
            sub_43F1F8(a1 + 16 * i + 9096);
    }
    for (i = 0; i < 32; ++i)
        sub_441DB3(a1 + 36 * i + 9608);
    result = (unsigned __int16*)sub_443E80(a1);
    for (i = 0; i < 4; ++i)
        result = sub_43EEE5((unsigned __int16*)(a1 + 24 * i + 11080));
    if (*(_DWORD*)(a1 + 2500))
    {
        *(_DWORD*)(a1 + 2500) = 0;
        *(_DWORD*)(a1 + 2504) = *(_DWORD*)(a1 + 2504) == 0;
        sub_43FFC3((int*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
        if (*(_DWORD*)(a1 + 2504))
            result = (unsigned __int16*)sub_440B78(unk_4BDB28);
        else
            result = (unsigned __int16*)sub_440BC2(unk_4BDB28);
    }
    v120 = 1;
    for (i = 0; i < 8; ++i)
    {
        v37 = (Concurrency::details::SchedulerBase*)(a1 + 612 * i + 2628);
        result = (unsigned __int16*)unknown_libname_7((int*)v37);
        if (result)
        {
            result = (unsigned __int16*)sub_41BEA6((int*)v37);
            if (!result)
            {
                result = (unsigned __int16*)Concurrency::details::SchedulerBase::GetSchedulerProxy(v37);
                if (result != (unsigned __int16*)80)
                {
                    v120 = 0;
                    break;
                }
            }
        }
    }
    if (unk_4B9974 || v120)
    {
        if (v121)
        {
            sub_43FFC3((int*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            if (v121 + *(_DWORD*)(a1 + 2488) <= 100)
            {
                if (v121 + *(_DWORD*)(a1 + 2488) < 100)
                    *(_DWORD*)(a1 + 2488) += 10 * v121;
            }
            else
            {
                *(_DWORD*)(a1 + 2488) += 100 * v121;
            }
            if (*(int*)(a1 + 2488) >= 10)
            {
                if (*(int*)(a1 + 2488) > 900)
                    *(_DWORD*)(a1 + 2488) = 900;
            }
            else
            {
                *(_DWORD*)(a1 + 2488) = 10;
            }
        }
        yTop = 8 * (unk_4B99F4 == 1);
        wsprintfA(String, "FRAME:%d", unk_4B93AC);
        v30 = lstrlenA(String);
        SetRect(&v36, 0, yTop, 8 * v30, yTop + 8);
        sub_49EF70((int)unk_4BDC60, (int*)&v36, 0, 0, 0, 0x20u);
        sub_47B7ED(0, yTop, String, 0, -1);
        yTop += 8;
        wsprintfA(String, "SPEED:%3d%%", *(_DWORD*)(a1 + 2488));
        SetRect(&v36, 0, yTop, 80, yTop + 8);
        sub_49EF70((int)unk_4BDC60, (int*)&v36, 0, 0, 0, 0x20u);
        return (unsigned __int16*)sub_47B7ED(0, yTop, String, 0, -1);
    }
    return result;
}