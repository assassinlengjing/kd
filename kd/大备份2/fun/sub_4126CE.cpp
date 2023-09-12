#include "sub.h" 
void sub_4126CE(int thisx, double a2, double a3, double a4)
{
    int v4; // eax
    char* v5; // eax
    char* v6; // eax
    char* v7; // eax
    int v8; // esi
    int v9; // eax
    unsigned __int16 v10; // ax
    unsigned __int16 v11; // ax
    unsigned __int8 v12; // al
    int v13; // eax
    unsigned __int8 v14; // al
    int v15; // [esp-8h] [ebp-19Ch]
    int v16; // [esp-8h] [ebp-19Ch]
    int v17; // [esp+4h] [ebp-190h]
    int v18; // [esp+8h] [ebp-18Ch]
    int v19; // [esp+Ch] [ebp-188h]
    int v20; // [esp+10h] [ebp-184h]
    int v21; // [esp+14h] [ebp-180h]
    int v22; // [esp+18h] [ebp-17Ch]
    int v23; // [esp+1Ch] [ebp-178h]
    int v24; // [esp+20h] [ebp-174h]
    int v25; // [esp+24h] [ebp-170h]
    int v26; // [esp+28h] [ebp-16Ch]
    int v27; // [esp+2Ch] [ebp-168h]
    int v28; // [esp+30h] [ebp-164h]
    int v29; // [esp+34h] [ebp-160h]
    int v30; // [esp+38h] [ebp-15Ch]
    int v31; // [esp+3Ch] [ebp-158h]
    int v32; // [esp+40h] [ebp-154h]
    int v33; // [esp+44h] [ebp-150h]
    int v34; // [esp+48h] [ebp-14Ch]
    int v35; // [esp+4Ch] [ebp-148h]
    int v37[2]; // [esp+54h] [ebp-140h] BYREF
    char v38; // [esp+5Ch] [ebp-138h]
    int v39; // [esp+60h] [ebp-134h]
    int v40; // [esp+64h] [ebp-130h]
    int v41[2]; // [esp+68h] [ebp-12Ch] BYREF
    _DWORD* v42; // [esp+70h] [ebp-124h]
    int v43; // [esp+74h] [ebp-120h]
    int v44; // [esp+78h] [ebp-11Ch]
    int v45; // [esp+7Ch] [ebp-118h]
    char v46; // [esp+80h] [ebp-114h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+84h] [ebp-110h]
    int v48; // [esp+88h] [ebp-10Ch]
    int v49; // [esp+8Ch] [ebp-108h]
    __int16* v50; // [esp+90h] [ebp-104h]
    char v51; // [esp+94h] [ebp-100h]
    int v52; // [esp+98h] [ebp-FCh]
    char v53; // [esp+9Ch] [ebp-F8h]
    int v54; // [esp+A0h] [ebp-F4h]
    int v55; // [esp+A4h] [ebp-F0h]
    int v56; // [esp+A8h] [ebp-ECh]
    int v57; // [esp+ACh] [ebp-E8h] BYREF
    int v58; // [esp+B4h] [ebp-E0h]
    int v59; // [esp+B8h] [ebp-DCh]
    int v60; // [esp+BCh] [ebp-D8h]
    int v61; // [esp+C0h] [ebp-D4h]
    int v62; // [esp+C4h] [ebp-D0h]
    int v63; // [esp+C8h] [ebp-CCh]
    int v64; // [esp+CCh] [ebp-C8h]
    int v65; // [esp+D0h] [ebp-C4h]
    int v66; // [esp+D4h] [ebp-C0h]
    int v67; // [esp+D8h] [ebp-BCh]
    int v68; // [esp+DCh] [ebp-B8h]
    int v69; // [esp+E0h] [ebp-B4h]
    int v70; // [esp+E4h] [ebp-B0h]
    int v71; // [esp+E8h] [ebp-ACh]
    int v72; // [esp+ECh] [ebp-A8h]
    int v73; // [esp+F0h] [ebp-A4h]
    int v74; // [esp+F4h] [ebp-A0h]
    int v75; // [esp+F8h] [ebp-9Ch]
    int v76; // [esp+FCh] [ebp-98h]
    int v77; // [esp+100h] [ebp-94h]
    int j; // [esp+104h] [ebp-90h]
    int v79; // [esp+108h] [ebp-8Ch]
    int i; // [esp+10Ch] [ebp-88h]
    int v81; // [esp+110h] [ebp-84h]
    int v82; // [esp+114h] [ebp-80h]
    int v83; // [esp+118h] [ebp-7Ch]
    int v84; // [esp+11Ch] [ebp-78h]
    int v85; // [esp+120h] [ebp-74h]
    int v86; // [esp+124h] [ebp-70h]
    __int16* v87; // [esp+128h] [ebp-6Ch]
    int v88; // [esp+12Ch] [ebp-68h]
    int v89; // [esp+130h] [ebp-64h]
    int v90; // [esp+134h] [ebp-60h]
    int v91; // [esp+138h] [ebp-5Ch]
    int v92; // [esp+13Ch] [ebp-58h]
    int v93; // [esp+140h] [ebp-54h]
    int v94; // [esp+144h] [ebp-50h]
    int v95; // [esp+148h] [ebp-4Ch]
    int v96; // [esp+14Ch] [ebp-48h]
    int v97; // [esp+150h] [ebp-44h]
    int v98; // [esp+154h] [ebp-40h]
    int v99; // [esp+158h] [ebp-3Ch]
    int v100; // [esp+15Ch] [ebp-38h]
    __int16 v101; // [esp+160h] [ebp-34h]
    int v102; // [esp+164h] [ebp-30h]
    int v103; // [esp+168h] [ebp-2Ch]
    int v104; // [esp+16Ch] [ebp-28h]
    int v105; // [esp+170h] [ebp-24h]
    int v106; // [esp+174h] [ebp-20h]
    int v107; // [esp+178h] [ebp-1Ch]
    int v108; // [esp+17Ch] [ebp-18h]
    int v109; // [esp+180h] [ebp-14h]
    int v110; // [esp+184h] [ebp-10h]
    Concurrency::details::_UnrealizedChore* v111; // [esp+188h] [ebp-Ch]
    int v112; // [esp+18Ch] [ebp-8h]
    int v113; // [esp+190h] [ebp-4h]

    if (*(_BYTE*)(thisx + 474))
        return;
    if (*(_DWORD*)(thisx + 292))
    {
        *(_DWORD*)(thisx + 372) = 0;
        *(_DWORD*)(thisx + 376) = 0;
        *(_DWORD*)(thisx + 340) = 0;
        *(_DWORD*)(thisx + 344) = 0;
        *(_DWORD*)(thisx + 348) = 0;
        *(_DWORD*)(thisx + 352) = 0;
        *(_DWORD*)(thisx + 356) = 0;
        *(_DWORD*)(thisx + 360) = 0;
    }
    v82 = *(_DWORD*)(thisx + 364);
    v85 = *(_DWORD*)(thisx + 368);
    *(_DWORD*)(thisx + 364) = 0;
    *(_DWORD*)(thisx + 368) = 0;
    if (*(_DWORD*)(thisx + 180))
    {
        *(_DWORD*)(thisx + 340) += *(_DWORD*)(thisx + 352);
        *(_DWORD*)(thisx + 344) += *(_DWORD*)(thisx + 356);
        *(_DWORD*)(thisx + 348) += *(_DWORD*)(thisx + 360);
        *(_DWORD*)(thisx + 372) += *(_DWORD*)(thisx + 340);
        *(_DWORD*)(thisx + 376) += *(_DWORD*)(thisx + 344);
        *(_DWORD*)(thisx + 328) += *(_DWORD*)(thisx + 372);
        *(_DWORD*)(thisx + 332) += *(_DWORD*)(thisx + 376);
        *(_DWORD*)(thisx + 336) += *(_DWORD*)(thisx + 348);
        return;
    }
    if (!*(_DWORD*)(thisx + 392) && *(_DWORD*)(thisx + 336) == -102000)
    {
        v79 = sub_44647E((char*)byte_4B9B10);
        v81 = sub_446465((char*)byte_4B9B10) / 8;
        for (i = 0; i < v79; ++i)
        {
            for (j = v81; j < v81 + 40; ++j)
            {
                v77 = sub_446497(byte_4B9B10, 8 * j, 8 * i);
                if (v77 != 1020)
                {
                    *(_DWORD*)(thisx + 328) = 800 * j;
                    *(_DWORD*)(thisx + 332) = 800 * i;
                    *(_DWORD*)(thisx + 336) = -100 * v77;
                    return;
                }
            }
        }
    }
    v86 = *(_DWORD*)(thisx + 328);
    v99 = *(_DWORD*)(thisx + 328) / 100;
    v92 = *(_DWORD*)(thisx + 332) / 100;
    v103 = 100 * sub_446497(byte_4B9B10, *(_DWORD*)(thisx + 328) / 100, *(_DWORD*)(thisx + 332) / 100);
    if (*(int*)(thisx + 336) <= 0 || v103 < 0)
    {
        if (*(_DWORD*)(thisx + 428) && *(int*)(thisx + 336) > 3200 && v103 < 0)
        {
        LABEL_22:
            sub_4259A4((_DWORD*)thisx, a2, a3, a4);
            return;
        }
    }
    else
    {
        *(_DWORD*)(thisx + 336) = 0;
    }
    v103 = 100 * sub_446497(byte_4B9B10, *(_DWORD*)(thisx + 328) / 100, *(_DWORD*)(thisx + 332) / 100);
    if (v103 != 102000 && -*(_DWORD*)(thisx + 336) < v103)
        *(_DWORD*)(thisx + 336) = -v103;
    v87 = 0;
    v111 = 0;
    v104 = *(_DWORD*)(thisx + 208);
    *(_DWORD*)(thisx + 208) = 0;
    v111 = (Concurrency::details::_UnrealizedChore*)sub_4741F8(
        (int)byte_4B9B10,
        *(_DWORD*)(thisx + 328) / 800,
        *(_DWORD*)(thisx + 332) / 800);
    if (v111)
    {
        LOWORD(v106) = sub_4260F0((short*)v111);
        v87 = (__int16*)sub_474471((int)byte_4B9B10, v106);
    }
    else
    {
        LOWORD(v106) = 0;
        v87 = 0;
    }
    LOBYTE(v108) = sub_4464F6(byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
    LOBYTE(v76) = sub_4464D3((int)byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
    if (v111 && !*(_DWORD*)(thisx + 392))
    {
        *(_DWORD*)(thisx + 364) = sub_426110((short*)v111);
        *(_DWORD*)(thisx + 368) = sub_426130((short*)v111);
    }
    if (*(_DWORD*)(thisx + 428) && (unsigned __int8)v108 == 7 && -v103 <= *(_DWORD*)(thisx + 336))
        goto LABEL_22;
    if ((_WORD)v106 && (v87[26] & 1) != 0 && -v103 <= *(_DWORD*)(thisx + 336))
    {
        sub_42455B(thisx, v87);
    }
    else if ((unsigned __int8)v108 == 10 && -v103 <= *(_DWORD*)(thisx + 336))
    {
        sub_41D3D7(thisx);
        v85 = 0;
        v82 = 0;
        v99 = *(_DWORD*)(thisx + 328) / 100;
        v92 = *(_DWORD*)(thisx + 332) / 100;
    }
    else if ((_BYTE)v76 && (unsigned __int8)v108 == 13 && !*(_DWORD*)(thisx + 392))
    {
        LOBYTE(v75) = ((unsigned __int8)v76 + 1) / 2;
        switch ((unsigned __int8)v75)
        {
        case 1u:
            *(_DWORD*)(thisx + 364) = 30;
            break;
        case 2u:
            *(_DWORD*)(thisx + 364) = 60;
            break;
        case 3u:
            *(_DWORD*)(thisx + 364) = 120;
            break;
        }
        if ((v76 & 1) == 1)
            *(_DWORD*)(thisx + 364) = -*(_DWORD*)(thisx + 364);
    }
    if (v82 != *(_DWORD*)(thisx + 364) && *(_DWORD*)(thisx + 364))
    {
        if (v82 <= 0)
            v35 = (v82 >= 0) - 1;
        else
            v35 = 1;
        if (*(int*)(thisx + 364) <= 0)
            v34 = (*(_DWORD*)(thisx + 364) >= 0) - 1;
        else
            v34 = 1;
        if (v35 == v34)
            v82 -= *(_DWORD*)(thisx + 364);
        *(_DWORD*)(thisx + 372) += v82;
    }
    if (v85 != *(_DWORD*)(thisx + 368) && *(_DWORD*)(thisx + 364))
    {
        if (v85 <= 0)
            v33 = (v85 >= 0) - 1;
        else
            v33 = 1;
        if (*(int*)(thisx + 368) <= 0)
            v32 = (*(_DWORD*)(thisx + 368) >= 0) - 1;
        else
            v32 = 1;
        if (v33 == v32)
            v82 = v85 - *(_DWORD*)(thisx + 368);
        *(_DWORD*)(thisx + 376) += v85;
    }
    if (*(_DWORD*)(thisx + 304))
    {
        if ((*(_BYTE*)(thisx + 602) & 1) != 0)
        {
            v73 = sub_426090(*(_DWORD**)(thisx + 304));
            v4 = sub_425D70(*(_DWORD**)(thisx + 304));
            v74 = 100 * ((v4 == 0) - (v4 != 0));
            *(_DWORD*)(thisx + 372) = v74 * *(char*)(thisx + 603) + v73 - *(_DWORD*)(thisx + 328);
            *(_DWORD*)(thisx + 340) = 0;
            *(_DWORD*)(thisx + 352) = 0;
            *(_DWORD*)(thisx + 364) = 0;
        }
        if ((*(_BYTE*)(thisx + 604) & 1) != 0)
        {
            v72 = sub_4260B0(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 376) = 100 * *(char*)(thisx + 605) + v72 - *(_DWORD*)(thisx + 332);
            *(_DWORD*)(thisx + 344) = 0;
            *(_DWORD*)(thisx + 356) = 0;
            *(_DWORD*)(thisx + 368) = 0;
        }
        if ((*(_BYTE*)(thisx + 606) & 1) != 0)
        {
            v71 = sub_4260D0(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 348) = 100 * *(char*)(thisx + 607) + v71 - *(_DWORD*)(thisx + 336);
            *(_DWORD*)(thisx + 356) = 0;
        }
    }
    v105 = *(_DWORD*)(thisx + 340);
    v100 = *(_DWORD*)(thisx + 344);
    if (!*(_DWORD*)(thisx + 392))
    {
        LOBYTE(v70) = 100;
        if (v111)
            LOBYTE(v70) = sub_426150((char*)v111);
        v105 = v105 * (unsigned __int8)v70 / 100;
        if (!v105)
        {
            if (*(int*)(thisx + 340) <= 0)
                v31 = (*(_DWORD*)(thisx + 340) >= 0) - 1;
            else
                v31 = 1;
            v105 = v31;
        }
        v100 = v100 * (unsigned __int8)v70 / 100;
        if (!v100)
        {
            if (*(int*)(thisx + 344) <= 0)
                v30 = (*(_DWORD*)(thisx + 344) >= 0) - 1;
            else
                v30 = 1;
            v100 = v30;
        }
    }
    if (!*(_DWORD*)(thisx + 340))
    {
        v69 = *(_DWORD*)(thisx + 352);
        if (!*(_DWORD*)(thisx + 392))
        {
            if (v111)
            {
                LOBYTE(v68) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v111);
                v69 = (150 - (unsigned __int8)v68) * v69 / 100;
                if (!v69)
                {
                    if (*(int*)(thisx + 352) <= 0)
                        v29 = (*(_DWORD*)(thisx + 352) >= 0) - 1;
                    else
                        v29 = 1;
                    v69 = v29;
                }
            }
        }
        v105 += v69;
        *(_DWORD*)(thisx + 340) = v69;
    }
    if (!*(_DWORD*)(thisx + 344))
    {
        v67 = *(_DWORD*)(thisx + 356);
        if (!*(_DWORD*)(thisx + 392))
        {
            if (v111)
            {
                LOBYTE(v66) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v111);
                v67 = (150 - (unsigned __int8)v66) * v67 / 100;
                if (!v67)
                {
                    if (*(int*)(thisx + 356) <= 0)
                        v28 = (*(_DWORD*)(thisx + 356) >= 0) - 1;
                    else
                        v28 = 1;
                    v67 = v28;
                }
            }
        }
        v100 += v67;
        *(_DWORD*)(thisx + 344) = v67;
    }
    v83 = v105 + *(_DWORD*)(thisx + 372);
    v88 = v100 + *(_DWORD*)(thisx + 376);
    if ((*(int*)(thisx + 380) <= 0 || *(_DWORD*)(thisx + 372) >= *(_DWORD*)(thisx + 380) || v83 < *(_DWORD*)(thisx + 380))
        && (*(int*)(thisx + 380) >= 0 || *(_DWORD*)(thisx + 372) <= *(_DWORD*)(thisx + 380) || v83 > *(_DWORD*)(thisx + 380)))
    {
        if (!*(_DWORD*)(thisx + 380)
            || *(int*)(thisx + 380) > 0 && v83 <= *(_DWORD*)(thisx + 380)
            || *(int*)(thisx + 380) < 0 && v83 >= *(_DWORD*)(thisx + 380))
        {
            *(_DWORD*)(thisx + 372) = v83;
        }
    }
    else
    {
        *(_DWORD*)(thisx + 372) = *(_DWORD*)(thisx + 380);
    }
    if ((*(int*)(thisx + 384) <= 0 || *(_DWORD*)(thisx + 376) >= *(_DWORD*)(thisx + 384) || v88 < *(_DWORD*)(thisx + 384))
        && (*(int*)(thisx + 384) >= 0 || *(_DWORD*)(thisx + 376) <= *(_DWORD*)(thisx + 384) || v88 > *(_DWORD*)(thisx + 384)))
    {
        if (!*(_DWORD*)(thisx + 384)
            || *(int*)(thisx + 384) > 0 && v88 <= *(_DWORD*)(thisx + 384)
            || *(int*)(thisx + 384) < 0 && v88 >= *(_DWORD*)(thisx + 384))
        {
            *(_DWORD*)(thisx + 376) = v88;
        }
    }
    else
    {
        *(_DWORD*)(thisx + 376) = *(_DWORD*)(thisx + 384);
    }
    v105 = *(_DWORD*)(thisx + 372);
    v100 = *(_DWORD*)(thisx + 376);
    if (*(_BYTE*)(thisx + 178))
    {
        v105 += *(_DWORD*)(thisx + 364);
        v100 += *(_DWORD*)(thisx + 368);
    }
    v112 = 0;
    v63 = (v105 + *(_DWORD*)(thisx + 328)) / 800;
    v62 = (v100 + *(_DWORD*)(thisx + 332)) / 800;
    v5 = sub_426210((char*)byte_4B9B10);
    v65 = sub_4897D0(v5) / 8;
    v6 = sub_426210((char*)byte_4B9B10);
    v64 = sub_4261D0(v6);
    if (v63 <= 0 || v63 >= v65 - 1 || v62 <= 0 || v62 >= v64)
    {
        if (v63 >= 0)
        {
            if (v63 >= v65)
                v63 = v65 - 1;
        }
        else
        {
            v63 = 0;
        }
        if (v62 >= 0)
        {
            if (v62 >= v64)
                v62 = v64 - 1;
        }
        else
        {
            v62 = 0;
        }
        if (sub_4464F6(byte_4B9B10, v63, v62) == 7)
            v112 = 1;
    }
    v96 = 0;
    if (!v112)
    {
        v7 = sub_426210((char*)byte_4B9B10);
        v61 = sub_4897D0(v7);
        v59 = sub_446465((char*)byte_4B9B10);
        v60 = *(_DWORD*)(thisx + 328);
        v56 = *(_DWORD*)(thisx + 332);
        *(_DWORD*)(thisx + 328) += v105;
        *(_DWORD*)(thisx + 332) += v100;
        v58 = *(_DWORD*)(thisx + 328) / 100;
        sub_4097DF((void*)thisx, (int)&v57);
        *(_DWORD*)(thisx + 328) = v60;
        *(_DWORD*)(thisx + 332) = v56;
        v55 = 0;
        if (v58 < 8 || v58 >= v61 - 8 || !*(_DWORD*)(thisx + 164) || sub_425CD0(byte_4B9B10) != 3)
        {
            if (v57 < 8)
            {
                v105 = 100 * v59 + 800 - *(_DWORD*)(thisx + 328);
                if (*(int*)(thisx + 372) < 0 && *(int*)(thisx + 340) > 0)
                    *(_DWORD*)(thisx + 372) = 0;
                v55 = 1;
                v96 = 1;
            }
            if (v57 >= 312)
            {
                v105 = 100 * (v59 + 311) - *(_DWORD*)(thisx + 328);
                if (*(int*)(thisx + 372) > 0 && *(int*)(thisx + 340) < 0)
                    *(_DWORD*)(thisx + 372) = 0;
                v55 = 1;
                v96 = 1;
            }
        }
        if (v55
            && (*(_DWORD*)(thisx + 428) == 147 && !*(_DWORD*)(thisx + 436)
                || *(_DWORD*)(thisx + 428) == 187
                || *(_DWORD*)(thisx + 428) == 104 && *(_DWORD*)(thisx + 304)))
        {
            if (*(_DWORD*)(thisx + 428) == 104)
                *(_DWORD*)(thisx + 424) = *(_DWORD*)(thisx + 424) == 0;
            *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372);
            v105 = -v105;
            *(_DWORD*)(thisx + 352) = -*(_DWORD*)(thisx + 352);
        }
        if (v55
            && (*(_DWORD*)(thisx + 428) == 178
                || *(_DWORD*)(thisx + 428) == 179
                || *(_DWORD*)(thisx + 428) == 120 && !*(_DWORD*)(thisx + 304)))
        {
            if (*(_DWORD*)(thisx + 428) == 178 || *(_DWORD*)(thisx + 428) == 120)
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A48, -1, 100, 100, 0);
                sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), *(_DWORD*)(thisx + 316), 1);
            }
            *(_DWORD*)(thisx + 432) = 34;
            *(_DWORD*)(thisx + 436) = v57 < 160;
            *(_DWORD*)(thisx + 444) = 0;
            *(_DWORD*)(thisx + 352) = 0;
        }
        if (v55 && *(_DWORD*)(thisx + 428) == 61)
        {
            *(_DWORD*)(thisx + 436) = 1;
            *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372) / 2;
            *(_DWORD*)(thisx + 348) = -300;
            *(_DWORD*)(thisx + 360) = 30;
        }
        if (v100 + *(_DWORD*)(thisx + 332) >= 0)
        {
            v8 = v100 + *(_DWORD*)(thisx + 332);
            if (v8 >= 800 * sub_44647E((char*)byte_4B9B10))
            {
                v9 = sub_44647E((char*)byte_4B9B10);
                *(_DWORD*)(thisx + 332) = 800 * v9 - 1 - v100;
                v55 = 1;
            }
        }
        else
        {
            *(_DWORD*)(thisx + 332) = -v100;
            v55 = 1;
        }
        if (v55 && *(_DWORD*)(thisx + 428) == 88)
        {
            sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), 0, 1);
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
            *(_DWORD*)(thisx + 432) = 34;
            *(_DWORD*)(thisx + 436) = v57 < 160;
            *(_DWORD*)(thisx + 444) = 0;
            *(_DWORD*)(thisx + 352) = 0;
        }
    }
    v98 = (v105 + *(_DWORD*)(thisx + 328)) / 100;
    v89 = (v100 + *(_DWORD*)(thisx + 332)) / 100;
    v97 = v98;
    v84 = v89;
    v109 = 0;
    v90 = 0;
    LOBYTE(v110) = 0;
    LOBYTE(v107) = 0;
    v101 = 0;
    v94 = 0;
    v102 = 0;
    v103 = 100 * sub_446497(byte_4B9B10, v99, v89);
    v91 = *(_DWORD*)(thisx + 336) + v103 - v102;
    if (v103 >= 102000 || (!*(_DWORD*)(thisx + 392) || v91 > 0) && (*(_DWORD*)(thisx + 392) || v91 > 799))
    {
        v90 = 1;
        LOBYTE(v107) = sub_4464F6(byte_4B9B10, v99 / 8, v89 / 8);
        v101 = sub_4744A9(byte_4B9B10, v99 / 8, v89 / 8);
    }
    else
    {
        *(_DWORD*)(thisx + 332) += v100;
    }
    LOBYTE(v93) = sub_4464D3((int)byte_4B9B10, v99 / 8, v92 / 8);
    LOBYTE(v95) = sub_4464D3((int)byte_4B9B10, v98 / 8, *(_DWORD*)(thisx + 332) / 800);
    v113 = 100 * sub_446497(byte_4B9B10, v99, v92);
    v103 = 100 * sub_446497(byte_4B9B10, v98, v92);
    if (!*(_DWORD*)(thisx + 392) && ((_BYTE)v93 || (_BYTE)v95))
    {
        LOBYTE(v54) = v93;
        if (!(_BYTE)v93)
            LOBYTE(v54) = v95;
        v102 = 800;
    }
    while (v105)
    {
        v103 = 100 * sub_446497(byte_4B9B10, v97, v92);
        v53 = sub_4464F6(byte_4B9B10, v97 / 8, v92 / 8);
        v52 = *(_DWORD*)(thisx + 336) + v103 - v102;
        if (v103 < 102000 && (v52 <= 400 && !*(_DWORD*)(thisx + 392) || v52 <= 0 && *(_DWORD*)(thisx + 392)))
        {
            if (v109)
            {
                if ((_BYTE)v93 || (_BYTE)v95)
                {
                    *(_DWORD*)(thisx + 328) = 100 * v97;
                }
                else if (v105 >= 0)
                {
                    if (v105 > 0)
                        *(_DWORD*)(thisx + 328) = 100 * v97 + 700;
                }
                else
                {
                    *(_DWORD*)(thisx + 328) = 100 * v97;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 328) += v105;
            }
            break;
        }
        if (((_BYTE)v93 || (_BYTE)v95) && (v52 <= 0 ? (v27 = -v52) : (v27 = v52), v27 <= 800 && v103 - v113 <= 400))
        {
            *(_DWORD*)(thisx + 336) = -v103;
        }
        else
        {
            v109 = 1;
            LOBYTE(v110) = v53;
            LOWORD(v106) = sub_4744A9(byte_4B9B10, v97 / 8, v92 / 8);
            if ((_BYTE)v93 || (_BYTE)v95)
            {
                if (v105 <= 0)
                    v26 = (v105 >= 0) - 1;
                else
                    v26 = 1;
                v97 -= v26;
            }
            else
            {
                v97 = 8 * (v97 / 8);
                if (v105 <= 0)
                    v25 = (v105 >= 0) - 1;
                else
                    v25 = 1;
                v97 -= 8 * v25;
            }
        }
    }
    if (!v109 && !v90 && v105 && v100)
    {
        v97 = v98;
        v84 = v89;
        while (++v94 <= 100)
        {
            v103 = 100 * sub_446497(byte_4B9B10, v97, v84);
            v51 = sub_4464F6(byte_4B9B10, v97 / 8, v84 / 8);
            v91 = *(_DWORD*)(thisx + 336) + v103 - v102;
            if (v103 < 102000 && (v91 <= 400 && !*(_DWORD*)(thisx + 392) || v91 <= 0 && *(_DWORD*)(thisx + 392)))
            {
                if (v109)
                {
                    if ((_BYTE)v93 || (_BYTE)v95)
                    {
                        *(_DWORD*)(thisx + 328) = 100 * v97;
                    }
                    else if (v105 >= 0)
                    {
                        if (v105 > 0)
                            *(_DWORD*)(thisx + 328) = 100 * v97 + 700;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 328) = 100 * v97;
                    }
                }
                break;
            }
            if (((_BYTE)v93 || (_BYTE)v95) && (v91 <= 0 ? (v24 = -v91) : (v24 = v91), v24 <= 800 && v103 - v113 <= 400))
            {
                *(_DWORD*)(thisx + 336) = -v103;
            }
            else
            {
                v109 = 1;
                LOBYTE(v110) = v51;
                LOWORD(v106) = sub_4744A9(byte_4B9B10, v97 / 8, v84 / 8);
                if ((_BYTE)v93 || (_BYTE)v95)
                {
                    if (v105 <= 0)
                        v23 = (v105 >= 0) - 1;
                    else
                        v23 = 1;
                    v97 -= v23;
                }
                else
                {
                    v97 = 8 * (v97 / 8);
                    if (v105 <= 0)
                        v22 = (v105 >= 0) - 1;
                    else
                        v22 = 1;
                    v97 -= 8 * v22;
                }
            }
        }
    }
    if (v109 || v90)
    {
        v87 = (__int16*)sub_474471((int)byte_4B9B10, v106);
        v50 = (__int16*)sub_474471((int)byte_4B9B10, v101);
        if (v87 && v109 && (v87[26] & 2) != 0)
        {
            sub_42455B(thisx, v87);
        }
        else if (v50 && v90 && (v50[26] & 2) != 0)
        {
            sub_42455B(thisx, v50);
        }
        else if (v109
            && (unsigned __int8)v110 == 1
            && !*(_DWORD*)(thisx + 392)
            && (*(_DWORD*)(thisx + 428) == 10
                || !*(_DWORD*)(thisx + 392) && *(_DWORD*)(thisx + 428) == 125
                || *(_DWORD*)(thisx + 428) == 126
                || *(_DWORD*)(thisx + 428) == 135
                || *(_DWORD*)(thisx + 428) == 89))
        {
            *(_DWORD*)(thisx + 424) = *(_DWORD*)(thisx + 424) == 0;
            *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372);
            *(_DWORD*)(thisx + 352) = -*(_DWORD*)(thisx + 352);
        }
        else
        {
            if (*(_DWORD*)(thisx + 428) && ((unsigned __int8)v110 == 7 || (unsigned __int8)v107 == 7))
                goto LABEL_373;
            if (v109
                && (*(_DWORD*)(thisx + 428) == 178
                    || *(_DWORD*)(thisx + 428) == 179
                    || !*(_DWORD*)(thisx + 392)
                    && (*(_DWORD*)(thisx + 428) == 10
                        || *(_DWORD*)(thisx + 428) == 135
                        || *(_DWORD*)(thisx + 428) == 89
                        || *(_DWORD*)(thisx + 428) == 120 && !*(_DWORD*)(thisx + 304))))
            {
                if (*(_DWORD*)(thisx + 428) == 178 || *(_DWORD*)(thisx + 428) == 120)
                {
                    sub_43FFC3((int*)dword_4BDB28, dword_4B9A48, -1, 100, 100, 0);
                    sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), *(_DWORD*)(thisx + 316), 1);
                }
                *(_DWORD*)(thisx + 432) = 34;
                *(_DWORD*)(thisx + 436) = *(int*)(thisx + 372) < 0;
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 352) = 0;
                sub_41F6DE((_DWORD*)thisx);
                if (*(_DWORD*)(thisx + 304) && *(_DWORD*)(thisx + 288))
                {
                    sub_417E42(*(_DWORD*)(thisx + 304));
                    sub_417E1D((_DWORD*)thisx);
                }
            }
            else if ((v109 || v90) && *(_DWORD*)(thisx + 428) == 88)
            {
                sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), 0, 1);
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
                *(_DWORD*)(thisx + 432) = 34;
                *(_DWORD*)(thisx + 436) = *(int*)(thisx + 372) < 0;
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 352) = 0;
            }
            else if (v109
                && (*(_DWORD*)(thisx + 428) == 147 && !*(_DWORD*)(thisx + 436)
                    || *(_DWORD*)(thisx + 428) == 155
                    || *(_DWORD*)(thisx + 428) == 158
                    || *(_DWORD*)(thisx + 428) == 187
                    || *(_DWORD*)(thisx + 428) == 104 && *(_DWORD*)(thisx + 304)))
            {
                if (*(_DWORD*)(thisx + 428) == 104)
                    *(_DWORD*)(thisx + 424) = *(_DWORD*)(thisx + 424) == 0;
                *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372);
                *(_DWORD*)(thisx + 352) = -*(_DWORD*)(thisx + 352);
            }
            else if (v109 && *(_DWORD*)(thisx + 428) == 61)
            {
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372) / 2;
                *(_DWORD*)(thisx + 348) = -300;
                *(_DWORD*)(thisx + 360) = 30;
            }
        }
    }
    *(_DWORD*)(thisx + 336) += *(_DWORD*)(thisx + 348);
    *(int*)(thisx + 388) %= 100;
    *(_DWORD*)(thisx + 388) += 100 * (*(_DWORD*)(thisx + 328) / 100) - 100 * (v86 / 100);
    if (v96 && *(_DWORD*)(thisx + 364) + *(_DWORD*)(thisx + 372))
        *(_DWORD*)(thisx + 388) += *(_DWORD*)(thisx + 364) + *(_DWORD*)(thisx + 372);
    *(_BYTE*)(thisx + 609) = sub_4464F6(byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
    if (*(_DWORD*)(thisx + 428) == 54 || *(_DWORD*)(thisx + 428) == 141 || *(_DWORD*)(thisx + 292))
        goto LABEL_654;
    v103 = 100 * sub_446497(byte_4B9B10, *(_DWORD*)(thisx + 328) / 100, *(_DWORD*)(thisx + 332) / 100);
    LOBYTE(v49) = sub_4464D3((int)byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
    LOBYTE(v93) = sub_4464D3((int)byte_4B9B10, v86 / 800, *(_DWORD*)(thisx + 332) / 800);
    if (*(_DWORD*)(thisx + 428) == 55 && *(_DWORD*)(thisx + 304))
    {
        v48 = sub_4260D0(*(_DWORD**)(thisx + 304));
        if (-v48 - v103 <= 800)
            *(_DWORD*)(thisx + 336) = -v103;
        else
            *(_DWORD*)(thisx + 336) = v48;
    }
    if ((_BYTE)v49 || (_BYTE)v93)
    {
        if (!(_BYTE)v49)
            LOBYTE(v49) = v93;
        if (*(int*)(thisx + 388) <= 0)
            v21 = (*(_DWORD*)(thisx + 388) >= 0) - 1;
        else
            v21 = 1;
        v102 = v21 * (*(_DWORD*)(thisx + 336) + v103);
        if ((v49 & 1) == 0)
            v102 = -v102;
    }
    if (v103 < 102000 && -*(_DWORD*)(thisx + 336) < v103 && *(_DWORD*)(thisx + 392))
    {
        v111 = (Concurrency::details::_UnrealizedChore*)sub_4741F8(
            (int)byte_4B9B10,
            *(_DWORD*)(thisx + 328) / 800,
            *(_DWORD*)(thisx + 332) / 800);
        if (v111)
        {
            LOWORD(v106) = sub_4260F0((short*)v111);
            v87 = (__int16*)sub_474471((int)byte_4B9B10, v106);
        }
        else
        {
            LOWORD(v106) = 0;
            v87 = 0;
        }
        LOBYTE(v108) = sub_4464F6(byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
        if (*(_DWORD*)(thisx + 428)
            && ((unsigned __int8)v108 == 7 || v87 && (v87[26] & 1) != 0 && *((unsigned __int8*)v87 + 10) >= 2u))
        {
            if ((unsigned __int8)v108 == 7)
            {
            LABEL_373:
                sub_4259A4((_DWORD*)thisx, a2, a3, a4);
                return;
            }
            if ((_WORD)v106)
                sub_42455B(thisx, v87);
            goto LABEL_565;
        }
        *(_BYTE*)(thisx + 236) = 0;
        if (*(_DWORD*)(thisx + 428) == 37
            || *(_DWORD*)(thisx + 428) == 169
            || *(_DWORD*)(thisx + 428) == 112
            || *(_DWORD*)(thisx + 428) == 114
            || *(_DWORD*)(thisx + 428) == 88
            || *(_DWORD*)(thisx + 428) == 119 && *(_DWORD*)(thisx + 436) != 5)
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            ++* (_DWORD*)(thisx + 436);
            if (*(_DWORD*)(thisx + 428) == 169 || *(_DWORD*)(thisx + 428) == 88 || *(_DWORD*)(thisx + 428) == 119)
            {
                *(_DWORD*)(thisx + 360) = 30;
                *(int*)(thisx + 372) /= 2;
                *(int*)(thisx + 376) /= 2;
                *(_DWORD*)(thisx + 424) = *(int*)(thisx + 372) < 0;
                if (*(_DWORD*)(thisx + 436) == 1)
                {
                    sub_43FFC3((int*)dword_4BDB28, dword_4B9A20, -1, 100, 100, 0);
                    sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), *(_DWORD*)(thisx + 316), 1);
                }
            }
            else if (*(_DWORD*)(thisx + 428) == 112 || *(_DWORD*)(thisx + 428) == 114)
            {
                *(_DWORD*)(thisx + 360) = 30;
                *(int*)(thisx + 372) /= 2;
                if (*(_DWORD*)(thisx + 436) == 1)
                {
                    sub_43FFC3((int*)dword_4BDB28, dword_4B9A20, -1, 100, 100, 0);
                    sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), *(_DWORD*)(thisx + 316), 1);
                }
            }
            else
            {
                *(_DWORD*)(thisx + 360) = 30;
            }
            if (*(_DWORD*)(thisx + 436) == 1)
            {
                *(_DWORD*)(thisx + 336) = -v103 - 1;
                *(_DWORD*)(thisx + 348) = -400;
                *(int*)(thisx + 372) /= 2;
            }
            else if (*(_DWORD*)(thisx + 436) == 2)
            {
                if ((!*(_DWORD*)(thisx + 424) || *(int*)(thisx + 372) >= 0)
                    && (*(_DWORD*)(thisx + 424) || *(int*)(thisx + 372) <= 0))
                {
                    *(_DWORD*)(thisx + 432) = 45;
                }
                else
                {
                    *(_DWORD*)(thisx + 432) = 44;
                }
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 336) = -v103;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            goto LABEL_565;
        }
        switch (*(_DWORD*)(thisx + 428))
        {
        case 0x22:
        case 0x4C:
        case 0x11:
        case 0x26:
        case 0x23:
        case 0x1D:
        case 0x21:
        case 0x10:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x16:
        case 0x75:
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            if ((!*(_DWORD*)(thisx + 424) || *(int*)(thisx + 372) >= 0)
                && (*(_DWORD*)(thisx + 424) || *(int*)(thisx + 372) <= 0))
            {
                *(_DWORD*)(thisx + 432) = 45;
            }
            else
            {
                *(_DWORD*)(thisx + 432) = 44;
            }
            *(_DWORD*)(thisx + 336) = -v103;
            *(_DWORD*)(thisx + 348) = 0;
            *(_DWORD*)(thisx + 360) = 0;
            break;
        case 0x28:
            if (*(int*)(thisx + 436) >= 1)
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
                *(_DWORD*)(thisx + 432) = 46;
            }
        LABEL_498:
            *(_DWORD*)(thisx + 336) = -v103;
            *(_DWORD*)(thisx + 348) = 0;
            *(_DWORD*)(thisx + 360) = 0;
            break;
        case 0x24:
        case 0x27:
        case 0x1E:
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            *(_DWORD*)(thisx + 432) = 42;
            *(_DWORD*)(thisx + 444) = 0;
            *(_DWORD*)(thisx + 336) = -v103;
            *(_DWORD*)(thisx + 348) = 0;
            *(_DWORD*)(thisx + 360) = 0;
            break;
        case 0x8A:
            *(_DWORD*)(thisx + 336) = -v103;
            if (*(_DWORD*)(thisx + 436))
            {
                *(_DWORD*)(thisx + 432) = 46;
                *(_DWORD*)(thisx + 436) = 0;
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            else
            {
                ++* (_DWORD*)(thisx + 436);
                *(_DWORD*)(thisx + 348) = -340;
                *(int*)(thisx + 372) /= 2;
                v15 = *(_DWORD*)(thisx + 316);
                v10 = sub_4261B0((short*)thisx);
                sub_41261C((_WORD*)thisx, v10, v15, 1);
            }
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            break;
        case 0x88:
        case 0x89:
            *(_DWORD*)(thisx + 336) = -v103;
            if (*(_DWORD*)(thisx + 436))
            {
                if (*(_DWORD*)(thisx + 428) == 136)
                    *(_DWORD*)(thisx + 432) = 44;
                else
                    *(_DWORD*)(thisx + 432) = 45;
                *(_DWORD*)(thisx + 436) = 0;
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            }
            else
            {
                ++* (_DWORD*)(thisx + 436);
                *(_DWORD*)(thisx + 348) = -300;
                *(int*)(thisx + 372) /= 2;
                v16 = *(_DWORD*)(thisx + 316);
                v11 = sub_4261B0((short*)thisx);
                sub_41261C((_WORD*)thisx, v11, v16, 1);
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
            }
            break;
        case 0x8B:
            if (*(_DWORD*)(thisx + 304))
            {
                SchedulerProxy = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(thisx + 304));
                if (SchedulerProxy == (struct Concurrency::ISchedulerProxy*)44
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)45
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)46
                    || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)47)
                {
                    *(_DWORD*)(thisx + 432) = 69;
                }
                else
                {
                    *(_DWORD*)(thisx + 432) = 12;
                    *(_DWORD*)(thisx + 304) = 0;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 432) = 12;
            }
            *(_DWORD*)(thisx + 336) = -v103;
            *(_DWORD*)(thisx + 352) = 0;
            *(_DWORD*)(thisx + 356) = 0;
            *(_DWORD*)(thisx + 348) = 0;
            *(_DWORD*)(thisx + 360) = 0;
            break;
        case 0x97:
        case 0x98:
            *(_DWORD*)(thisx + 336) = -v103;
            if (*(_DWORD*)(thisx + 436))
            {
                if (*(_DWORD*)(thisx + 428) == 152)
                    *(_DWORD*)(thisx + 432) = 13;
                else
                    *(_DWORD*)(thisx + 432) = 3;
                *(_DWORD*)(thisx + 436) = 0;
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 372) = 0;
                *(_DWORD*)(thisx + 376) = 0;
                *(_DWORD*)(thisx + 352) = 0;
                *(_DWORD*)(thisx + 356) = 0;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            else
            {
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 348) = -250;
                *(_DWORD*)(thisx + 360) = 30;
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A2C, -1, 100, 100, 0);
            }
            break;
        default:
            if (*(_DWORD*)(thisx + 304) && !sub_4264F0(*(_BYTE**)(thisx + 304)) && *(_DWORD*)(thisx + 428) == 59)
            {
                *(_DWORD*)(thisx + 336) = -v103;
                if (!sub_426170((char*)thisx))
                {
                    sub_43FFC3((int*)dword_4BDB28, dword_4B9A20, -1, 100, 100, 0);
                    *(_DWORD*)(thisx + 432) = 46;
                    *(_DWORD*)(thisx + 304) = 0;
                    *(_DWORD*)(thisx + 444) = 0;
                    *(_DWORD*)(thisx + 436) = 0;
                    *(_DWORD*)(thisx + 348) = 0;
                    *(_DWORD*)(thisx + 360) = 0;
                }
                break;
            }
            if (*(_DWORD*)(thisx + 428) == 57 && *(_BYTE*)(thisx + 195) == 1)
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
                *(_DWORD*)(thisx + 392) = 0;
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
                *(_DWORD*)(thisx + 336) = -v103;
            }
            else if (*(_DWORD*)(thisx + 304) && *(_BYTE*)(thisx + 324) == 1 && *(_DWORD*)(thisx + 428) == 60)
            {
                *(_DWORD*)(thisx + 432) = 44;
                *(_DWORD*)(thisx + 304) = 0;
                *(_DWORD*)(thisx + 336) = -v103;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            else if (*(_DWORD*)(thisx + 428) == 57 && *(_BYTE*)(thisx + 195) == 2 && !*(_DWORD*)(thisx + 436))
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 348) = -170;
                *(_DWORD*)(thisx + 336) = -v103;
            }
            else if (*(_DWORD*)(thisx + 304)
                && *(_BYTE*)(thisx + 324) == 2
                && *(_DWORD*)(thisx + 428) == 59
                && *(_DWORD*)(thisx + 436) == 3)
            {
                *(_DWORD*)(thisx + 432) = 44;
                *(_DWORD*)(thisx + 304) = 0;
                *(_DWORD*)(thisx + 336) = -v103;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            else
            {
                if (*(_DWORD*)(thisx + 428) != 58 || *(_BYTE*)(thisx + 195) != 2)
                {
                    if (!*(_DWORD*)(thisx + 304) || *(_BYTE*)(thisx + 324) != 2 || *(_DWORD*)(thisx + 428) != 60)
                    {
                        if (*(_DWORD*)(thisx + 304) && *(_BYTE*)(thisx + 324) == 3 && *(_DWORD*)(thisx + 428) == 59)
                        {
                            *(_DWORD*)(thisx + 336) = -v103;
                            *(_DWORD*)(thisx + 392) = 0;
                        }
                        else
                        {
                            switch (*(_DWORD*)(thisx + 428))
                            {
                            case '=':
                                *(_DWORD*)(thisx + 392) = 0;
                                *(_DWORD*)(thisx + 436) = 1;
                                *(_DWORD*)(thisx + 336) = -v103;
                                *(_DWORD*)(thisx + 348) = 0;
                                *(_DWORD*)(thisx + 360) = 0;
                                break;
                            case 'Z':
                                if (*(_DWORD*)(thisx + 436))
                                {
                                    if (*(_DWORD*)(thisx + 436) == 1)
                                    {
                                        *(_DWORD*)(thisx + 432) = 12;
                                        *(_DWORD*)(thisx + 304) = 0;
                                        *(_DWORD*)(thisx + 444) = 0;
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        *(_DWORD*)(thisx + 352) = 0;
                                        *(_DWORD*)(thisx + 356) = 0;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                    }
                                }
                                else
                                {
                                    ++* (_DWORD*)(thisx + 436);
                                    *(_DWORD*)(thisx + 372) = 150 * ((*(_DWORD*)(thisx + 424) == 0) - *(_DWORD*)(thisx + 424));
                                    *(_DWORD*)(thisx + 348) = -300;
                                    *(_DWORD*)(thisx + 360) = 30;
                                    *(_DWORD*)(thisx + 336) = -v103;
                                    *(_BYTE*)(thisx + 177) = 0;
                                }
                                break;
                            case 'n':
                                if (*(_DWORD*)(thisx + 436))
                                {
                                    if (*(_DWORD*)(thisx + 436) == 1)
                                    {
                                        *(_DWORD*)(thisx + 432) = 44;
                                        *(_DWORD*)(thisx + 304) = 0;
                                        *(_DWORD*)(thisx + 436) = 0;
                                        *(_DWORD*)(thisx + 444) = 0;
                                        *(_DWORD*)(thisx + 340) = 0;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                        sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
                                    }
                                }
                                else
                                {
                                    ++* (_DWORD*)(thisx + 436);
                                    *(_DWORD*)(thisx + 180) = 0;
                                    *(_BYTE*)(thisx + 177) = 0;
                                    if (*(_DWORD*)(thisx + 304))
                                        *(_DWORD*)(thisx + 424) = sub_425D70(*(_DWORD**)(thisx + 304));
                                    *(_DWORD*)(thisx + 372) = 150 * (*(_DWORD*)(thisx + 424) - (*(_DWORD*)(thisx + 424) == 0));
                                    *(_DWORD*)(thisx + 348) = -300;
                                    *(_DWORD*)(thisx + 360) = 30;
                                    *(_DWORD*)(thisx + 336) = -v103;
                                    sub_41261C((_WORD*)thisx, *(unsigned __int16*)(thisx + 242), *(_DWORD*)(thisx + 304), 1);
                                    sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
                                }
                                break;
                            default:
                                if (*(_DWORD*)(thisx + 428) == 132
                                    || *(_DWORD*)(thisx + 428) == 133
                                    || *(_BYTE*)(thisx + 195) == 2 && *(_DWORD*)(thisx + 428) == 57
                                    || *(_DWORD*)(thisx + 428) == 51)
                                {
                                    *(_DWORD*)(thisx + 432) = 12;
                                    *(_DWORD*)(thisx + 444) = 0;
                                    *(_DWORD*)(thisx + 336) = -v103;
                                    *(_DWORD*)(thisx + 352) = 0;
                                    *(_DWORD*)(thisx + 356) = 0;
                                    *(_DWORD*)(thisx + 348) = 0;
                                    *(_DWORD*)(thisx + 360) = 0;
                                }
                                else
                                {
                                    switch (*(_DWORD*)(thisx + 428))
                                    {
                                    case 0x37:
                                    case 0x54:
                                    case 0x5B:
                                    case 0x5C:
                                    case 0x5E:
                                    case 0xB2:
                                    case 0xB3:
                                    case 0x61:
                                    case 0x62:
                                    case 0x64:
                                    case 0x78:
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        *(_DWORD*)(thisx + 352) = 0;
                                        *(_DWORD*)(thisx + 356) = 0;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                        *(_DWORD*)(thisx + 392) = 0;
                                        break;
                                    case 0x4D:
                                    case 0x2C:
                                    case 0x2D:
                                    case 0x2E:
                                    case 0x2F:
                                    case 0x4E:
                                    case 0x4F:
                                    case 1:
                                    case 0x63:
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                        *(_DWORD*)(thisx + 392) = 0;
                                        break;
                                    case 0x68:
                                    case 0x76:
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                        *(_DWORD*)(thisx + 392) = 0;
                                        if (!*(_DWORD*)(thisx + 304))
                                        {
                                            if (*(_DWORD*)(thisx + 428) == 104)
                                            {
                                                *(_DWORD*)(thisx + 432) = 13;
                                            }
                                            else
                                            {
                                                sub_43FFC3((int*)dword_4BDB28, dword_4B9A14, -1, 100, 100, 0);
                                                *(_DWORD*)(thisx + 432) = 44;
                                            }
                                        }
                                        break;
                                    case 0x55:
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        *(_DWORD*)(thisx + 348) = 0;
                                        *(_DWORD*)(thisx + 360) = 0;
                                        *(_DWORD*)(thisx + 392) = 0;
                                        *(_DWORD*)(thisx + 436) = 1;
                                        break;
                                    case 0xCC:
                                        *(_DWORD*)(thisx + 336) = -v103;
                                        if (*(int*)(thisx + 436) >= 2)
                                        {
                                            *(_DWORD*)(thisx + 432) = 13;
                                            *(_DWORD*)(thisx + 444) = 0;
                                            *(_DWORD*)(thisx + 352) = 0;
                                            *(_DWORD*)(thisx + 356) = 0;
                                            *(_DWORD*)(thisx + 348) = 0;
                                            *(_DWORD*)(thisx + 360) = 0;
                                        }
                                        else
                                        {
                                            *(_DWORD*)(thisx + 444) = 1;
                                            ++* (_DWORD*)(thisx + 436);
                                        }
                                        break;
                                    default:
                                        if (sub_426170((char*)thisx))
                                        {
                                            *(_DWORD*)(thisx + 392) = 0;
                                            *(_DWORD*)(thisx + 336) = -v103;
                                        }
                                        else
                                        {
                                            if (!*(_DWORD*)(thisx + 288))
                                                *(_DWORD*)(thisx + 304) = 0;
                                            *(_DWORD*)(thisx + 432) = 13;
                                            *(_DWORD*)(thisx + 444) = 0;
                                            *(_DWORD*)(thisx + 336) = -v103;
                                            *(_DWORD*)(thisx + 352) = 0;
                                            *(_DWORD*)(thisx + 356) = 0;
                                            *(_DWORD*)(thisx + 348) = 0;
                                            *(_DWORD*)(thisx + 360) = 0;
                                        }
                                        break;
                                    }
                                }
                                break;
                            }
                        }
                        break;
                    }
                    goto LABEL_498;
                }
                *(_DWORD*)(thisx + 432) = 12;
                *(_DWORD*)(thisx + 304) = 0;
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A10, -1, 100, 100, 0);
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 336) = -v103;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 0;
            }
            break;
        }
    }
LABEL_565:
    if (-*(_DWORD*)(thisx + 336) - v103 < 800 && (!v102 || v102 + *(_DWORD*)(thisx + 336) >= -v103)
        || *(_DWORD*)(thisx + 392))
    {
        if (!*(_DWORD*)(thisx + 392))
        {
            v111 = (Concurrency::details::_UnrealizedChore*)sub_4741F8(
                (int)byte_4B9B10,
                *(_DWORD*)(thisx + 328) / 800,
                *(_DWORD*)(thisx + 332) / 800);
            v46 = sub_4464F6(byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800);
            *(_DWORD*)(thisx + 336) = -v103;
            LOBYTE(v45) = 50;
            if (v111)
                LOBYTE(v45) = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(v111);
            if (!*(_DWORD*)(thisx + 340)
                || *(_DWORD*)(thisx + 380)
                && (*(int*)(thisx + 380) > 0 && *(_DWORD*)(thisx + 380) < *(_DWORD*)(thisx + 372)
                    || *(int*)(thisx + 380) < 0 && *(_DWORD*)(thisx + 380) > *(_DWORD*)(thisx + 372)))
            {
                *(_DWORD*)(thisx + 372) = (unsigned __int8)v45 * *(_DWORD*)(thisx + 372) / 100;
            }
            if (!*(_DWORD*)(thisx + 344)
                || *(_DWORD*)(thisx + 384)
                && (*(int*)(thisx + 384) > 0 && *(_DWORD*)(thisx + 384) < *(_DWORD*)(thisx + 376)
                    || *(int*)(thisx + 384) < 0 && *(_DWORD*)(thisx + 384) > *(_DWORD*)(thisx + 376)))
            {
                *(_DWORD*)(thisx + 376) = (unsigned __int8)v45 * *(_DWORD*)(thisx + 376) / 100;
            }
            if (*(_DWORD*)(thisx + 352) && *(_DWORD*)(thisx + 428) != 10)
            {
                v44 = *(_DWORD*)(thisx + 352);
                v20 = v44 + *(_DWORD*)(thisx + 372) <= 0 ? (v44 + *(_DWORD*)(thisx + 372) >= 0) - 1 : 1;
                v19 = v44 <= 0 ? (v44 >= 0) - 1 : 1;
                if (v20 == v19)
                {
                    *(_DWORD*)(thisx + 352) = 0;
                    *(_DWORD*)(thisx + 372) = 0;
                }
            }
            if (*(_DWORD*)(thisx + 356) && *(_DWORD*)(thisx + 428) != 10)
            {
                v43 = *(_DWORD*)(thisx + 356);
                v18 = v43 + *(_DWORD*)(thisx + 376) <= 0 ? (v43 + *(_DWORD*)(thisx + 376) >= 0) - 1 : 1;
                v17 = v43 <= 0 ? (v43 >= 0) - 1 : 1;
                if (v18 == v17)
                {
                    *(_DWORD*)(thisx + 356) = 0;
                    *(_DWORD*)(thisx + 376) = 0;
                }
            }
        }
    }
    else
    {
        if (*(_DWORD*)(thisx + 428) == 56)
        {
            if (*(_DWORD*)(thisx + 304))
                sub_417EE0(*(_DWORD*)(thisx + 304));
            *(_DWORD*)(thisx + 304) = 0;
        }
        if (*(_DWORD*)(thisx + 428) == 44
            || *(_DWORD*)(thisx + 428) == 45
            || *(_DWORD*)(thisx + 428) == 46
            || *(_DWORD*)(thisx + 428) == 47
            || *(_DWORD*)(thisx + 428) == 78
            || *(_DWORD*)(thisx + 428) == 79
            || *(_DWORD*)(thisx + 428) == 1
            || *(_DWORD*)(thisx + 428) == 100
            || *(_DWORD*)(thisx + 428) == 104
            || *(_DWORD*)(thisx + 428) == 118)
        {
            *(_DWORD*)(thisx + 360) = 30;
            *(_DWORD*)(thisx + 392) = 1;
        }
        else if (*(_DWORD*)(thisx + 428) == 120)
        {
            if (*(_DWORD*)(thisx + 436))
            {
                if (*(_DWORD*)(thisx + 436) == 1)
                {
                    *(_DWORD*)(thisx + 360) = 30;
                    *(_DWORD*)(thisx + 392) = 1;
                }
            }
            else
            {
                sub_417C83(thisx);
            }
        }
        else if (*(_DWORD*)(thisx + 428) == 55
            || *(_DWORD*)(thisx + 428) == 84
            || *(_DWORD*)(thisx + 428) == 85
            || *(_DWORD*)(thisx + 428) == 99 && *(_DWORD*)(thisx + 304))
        {
            *(_DWORD*)(thisx + 392) = 1;
        }
        else if (*(_DWORD*)(thisx + 428) == 59 || *(_DWORD*)(thisx + 428) == 60 || *(_DWORD*)(thisx + 428) == 115)
        {
            *(_DWORD*)(thisx + 372) = 0;
            *(_DWORD*)(thisx + 348) = 0;
            *(_DWORD*)(thisx + 360) = 30;
        }
        else if (*(_DWORD*)(thisx + 428) == 178 || *(_DWORD*)(thisx + 428) == 179)
        {
            *(_DWORD*)(thisx + 392) = 1;
            *(_DWORD*)(thisx + 360) = 30;
        }
        else
        {
            if (*(_DWORD*)(thisx + 428) == 69 || *(_DWORD*)(thisx + 428) == 70)
            {
                if (*(_DWORD*)(thisx + 304))
                    sub_417EAD((int*)*(_DWORD*)(thisx + 304));
                sub_417E88((int*)thisx);
            }
            if (*(_DWORD*)(thisx + 304) && (*(_DWORD*)(thisx + 428) == 57 || *(_DWORD*)(thisx + 428) == 58))
            {
                sub_417C83(*(_DWORD*)(thisx + 304));
                *(_DWORD*)(thisx + 304) = 0;
            }
            if (*(_DWORD*)(thisx + 304) && !*(_DWORD*)(thisx + 288))
                *(_DWORD*)(thisx + 304) = 0;
            *(_DWORD*)(thisx + 432) = 50;
            ++* (_DWORD*)(thisx + 336);
            *(_DWORD*)(thisx + 352) = 0;
            *(_DWORD*)(thisx + 356) = 0;
            *(_DWORD*)(thisx + 444) = 0;
        }
    }
    *(_DWORD*)(thisx + 348) += *(_DWORD*)(thisx + 360);
LABEL_654:
    if ((*(_DWORD*)(thisx + 428) == 7
        || *(_DWORD*)(thisx + 428) == 8
        || *(_DWORD*)(thisx + 428) == 50
        || *(_DWORD*)(thisx + 428) == 51)
        && *(int*)(thisx + 348) > 0)
    {
        if (*(_DWORD*)(thisx + 392))
        {
            if (!*(_DWORD*)(thisx + 288) && !*(_DWORD*)(thisx + 292))
            {
                v42 = sub_465B44(byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx);
                if (v42)
                {
                    *(_DWORD*)(thisx + 304) = (int)v42;
                    *(_DWORD*)(thisx + 292) = 1;
                    *(_DWORD*)(thisx + 432) = 3;
                    sub_420EF3((int)v42, thisx);
                }
            }
        }
    }
    if (*(_DWORD*)(thisx + 428) != *(_DWORD*)(thisx + 432))
        sub_408F50(thisx, a2, a3, a4, 0);
    v111 = (Concurrency::details::_UnrealizedChore*)sub_4741F8(
        (int)byte_4B9B10,
        *(_DWORD*)(thisx + 328) / 800,
        *(_DWORD*)(thisx + 332) / 800);
    v103 = 100 * sub_446497(byte_4B9B10, *(_DWORD*)(thisx + 328) / 100, *(_DWORD*)(thisx + 332) / 100);
    if (v111)
    {
        if (sub_425C50((char*)v111))
            v103 = 400 * (unsigned __int8)unknown_libname_6((char*)v111);
        v12 = sub_425C30((char*)v111);
        *(_DWORD*)(thisx + 208) = v12 - (-*(_DWORD*)(thisx + 336) - v103) / 100;
        if (*(_DWORD*)(thisx + 392) && v104 <= 0 && *(int*)(thisx + 208) > 0 && unknown_libname_5((char*)v111) == 11)
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B9AE4, -1, 100, 100, 0);
            sub_442863(v37);
            sub_4641FE(byte_4B9B10, *(_DWORD*)(thisx + 328), *(_DWORD*)(thisx + 332), -v103, (int)v41);
            v13 = sub_446465((char*)byte_4B9B10);
            v37[0] = v13 + v41[0];
            v14 = sub_425C30((char*)v111);
            v37[1] = v41[1] - v14;
            v38 = 20;
            v39 = 0;
            v40 = 0;
            sub_4561A5((char*)byte_4B9B10, (int)v37);
        }
    }
}
