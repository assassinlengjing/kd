#include "sub.h"
int sub_402C05(int thisx)
{
    int result; // eax
    int v2; // esi
    int v3; // esi
    int v4; // eax
    int v5; // edx
    bool v6; // [esp+4h] [ebp-110h]
    bool v7; // [esp+8h] [ebp-10Ch]
    bool v8; // [esp+Ch] [ebp-108h]
    bool v9; // [esp+10h] [ebp-104h]
    int v10; // [esp+14h] [ebp-100h]
    int v11; // [esp+18h] [ebp-FCh]
    BOOL v12; // [esp+20h] [ebp-F4h]
    BOOL v13; // [esp+24h] [ebp-F0h]
    BOOL v14; // [esp+28h] [ebp-ECh]
    char v15; // [esp+2Ch] [ebp-E8h]
    int v16; // [esp+30h] [ebp-E4h]
    int v17; // [esp+34h] [ebp-E0h]
    int v18; // [esp+38h] [ebp-DCh]
    int v19; // [esp+3Ch] [ebp-D8h]
    int v20; // [esp+40h] [ebp-D4h]
    int v21; // [esp+44h] [ebp-D0h]
    int v22; // [esp+48h] [ebp-CCh]
    int v23; // [esp+4Ch] [ebp-C8h]
    BOOL v24; // [esp+50h] [ebp-C4h]
    BOOL v25; // [esp+54h] [ebp-C0h]
    BOOL v26; // [esp+58h] [ebp-BCh]
    int v28; // [esp+60h] [ebp-B4h]
    int v29; // [esp+64h] [ebp-B0h]
    char* v30; // [esp+68h] [ebp-ACh]
    int v31; // [esp+6Ch] [ebp-A8h]
    char v32; // [esp+70h] [ebp-A4h]
    int v33; // [esp+74h] [ebp-A0h]
    int v34; // [esp+78h] [ebp-9Ch]
    int v35; // [esp+7Ch] [ebp-98h]
    _DWORD* v36; // [esp+88h] [ebp-8Ch]
    _DWORD* v37; // [esp+8Ch] [ebp-88h]
    _DWORD* v38; // [esp+94h] [ebp-80h]
    _DWORD* v39; // [esp+98h] [ebp-7Ch]
    char v40; // [esp+9Ch] [ebp-78h]
    int v41; // [esp+A0h] [ebp-74h]
    char* v42; // [esp+A4h] [ebp-70h]
    int m; // [esp+A8h] [ebp-6Ch]
    int i; // [esp+ACh] [ebp-68h]
    int v45; // [esp+B0h] [ebp-64h]
    int j; // [esp+B4h] [ebp-60h]
    int k; // [esp+B4h] [ebp-60h]
    int v48; // [esp+B8h] [ebp-5Ch]
    int v49; // [esp+BCh] [ebp-58h]
    BOOL v50; // [esp+C0h] [ebp-54h]
    _DWORD* v51; // [esp+C8h] [ebp-4Ch]
    Concurrency::details::SchedulerProxy* v52; // [esp+CCh] [ebp-48h]
    BOOL v53; // [esp+D0h] [ebp-44h]
    int v54; // [esp+D4h] [ebp-40h]
    int v55; // [esp+D8h] [ebp-3Ch]
    _DWORD* v56; // [esp+DCh] [ebp-38h]
    int n; // [esp+E0h] [ebp-34h]
    int v58; // [esp+E4h] [ebp-30h]
    int v59; // [esp+E8h] [ebp-2Ch]
    int v60; // [esp+ECh] [ebp-28h]
    int v61; // [esp+F0h] [ebp-24h]
    int v62; // [esp+F8h] [ebp-1Ch]
    int v63; // [esp+FCh] [ebp-18h]
    BOOL v64; // [esp+100h] [ebp-14h]
    int v65; // [esp+104h] [ebp-10h]
    char* v66; // [esp+108h] [ebp-Ch]
    _BYTE* v67; // [esp+10Ch] [ebp-8h]
    _DWORD* v68; // [esp+110h] [ebp-4h]

    v61 = 0;
    v58 = 0;
    v59 = 0;
    v55 = 0;
    v53 = 0;
    v48 = 0;
    v65 = 0;
    *(_BYTE*)(thisx + 272) = 0;
    *(_DWORD*)(thisx + 276) = 0;
    *(_DWORD*)(thisx + 280) = 0;
    *(_DWORD*)(thisx + 268) = 0;
    *(_DWORD*)(thisx + 588) = 0;
    v67 = (_BYTE*)sub_425DF0((int)byte_4B9B10, *(unsigned __int8*)(thisx + 184));
    if (*(_BYTE*)(thisx + 474))
    {
        --* (_BYTE*)(thisx + 474);
        result = thisx;
        if (*(_BYTE*)(thisx + 474))
            return result;
        *(_BYTE*)(thisx + 475) = 0;
    }
    *(_DWORD*)(thisx + 340) = 0;
    *(_DWORD*)(thisx + 344) = 0;
    if (*(_DWORD*)(thisx + 392))
    {
        *(_DWORD*)(thisx + 380) = 0;
        *(_DWORD*)(thisx + 384) = 0;
    }
    else
    {
        *(_BYTE*)(thisx + 238) = 0;
    }
    if (*(_DWORD*)(thisx + 288) && (!*(_DWORD*)(thisx + 304) || sub_425D30(*(_DWORD**)(thisx + 304))))
    {
        *(_DWORD*)(thisx + 304) = 0;
        *(_DWORD*)(thisx + 288) = 0;
    }
    if (*(_BYTE*)(thisx + 178))
    {
        if (*(_DWORD*)(thisx + 164))
        {
            sub_4181B5(thisx + 8);
            v61 = *(char*)(thisx + 149);
            v58 = *(char*)(thisx + 150);
            v59 = *(char*)(thisx + 151);
            v55 = *(char*)(thisx + 152);
            v48 = *(char*)(thisx + 153);
            v53 = v48;
            v65 = *(char*)(thisx + 154);
            for (i = 0; i < 3; ++i)
            {
                if (*(_BYTE*)(i + thisx + 151))
                {
                    if (*(char*)(i + thisx + 230) < 0)
                        *(_BYTE*)(i + thisx + 230) = 0;
                    if (++ * (_BYTE*)(i + thisx + 230) == 6)
                        *(_BYTE*)(i + thisx + 230) = 5;
                }
                else if (*(char*)(i + thisx + 230) <= 0)
                {
                    if ((char)-- * (_BYTE*)(i + thisx + 230) == -6)
                        *(_BYTE*)(i + thisx + 230) = -5;
                }
                else
                {
                    *(_BYTE*)(i + thisx + 230) = 0;
                }
            }
        }
        else
        {
            if (dword_4B9974)
            {
                v61 = (char)sub_425D90(v67);
                v58 = (char)sub_425DB0(v67);
            }
            else
            {
                sub_476009(&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)]);
                v2 = sub_476A79((int*)&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)]);
                v61 = v2 - sub_476A64((int*)&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)]);
                v3 = sub_476A4F((int*)&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)]);
                v58 = v3 - sub_476A3A((int*)&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)]);
            }
            for (j = 0; j < 6; ++j)
            {
                v45 = 0;
                if (dword_4B9974)
                {
                    if (j >= 3)
                    {
                        if (j == 5)
                            v45 = sub_425DD0(v67, 3);
                    }
                    else
                    {
                        v45 = sub_425DD0(v67, j);
                    }
                }
                else
                {
                    v45 = sub_476485((int*)&byte_4B9410[108 * *(unsigned __int8*)(thisx + 184)], j);
                }
                if (v45)
                {
                    if (*(char*)(j + thisx + 230) < 0)
                        *(_BYTE*)(j + thisx + 230) = 0;
                    if (++ * (_BYTE*)(j + thisx + 230) == 6)
                        *(_BYTE*)(j + thisx + 230) = 5;
                }
                else if (*(char*)(j + thisx + 230) <= 0)
                {
                    if ((char)-- * (_BYTE*)(j + thisx + 230) == -6)
                        *(_BYTE*)(j + thisx + 230) = -5;
                }
                else
                {
                    *(_BYTE*)(j + thisx + 230) = 0;
                }
            }
            if (*(char*)(thisx + 233) > 0)
            {
                *(_BYTE*)(thisx + 230) = *(_BYTE*)(thisx + 233);
                *(_BYTE*)(thisx + 231) = *(_BYTE*)(thisx + 233);
            }
            if (*(char*)(thisx + 234) > 0)
            {
                *(_BYTE*)(thisx + 230) = *(_BYTE*)(thisx + 234);
                *(_BYTE*)(thisx + 232) = *(_BYTE*)(thisx + 234);
            }
            for (k = 0; k < 3; ++k)
                *(_BYTE*)(k + thisx + 226) = *(char*)(k + thisx + 230) > 0;
            *(_BYTE*)(thisx + 229) = *(char*)(thisx + 235) > 0;
            v26 = *(char*)(thisx + 230) > 0 && *(char*)(thisx + 230) < 5;
            v59 = v26;
            v25 = *(char*)(thisx + 231) > 0 && *(char*)(thisx + 231) < 5;
            v55 = v25;
            v53 = *(char*)(thisx + 232) > 0;
            v24 = *(char*)(thisx + 232) > 0 && *(char*)(thisx + 232) < 5;
            v48 = v24;
            v65 = *(char*)(thisx + 235) > 0;
        }
    }
    else
    {
        if (*(_DWORD*)(thisx + 428) == 10)
            v61 = (*(_DWORD*)(thisx + 424) == 0) - *(_DWORD*)(thisx + 424);
        if (*(_DWORD*)(thisx + 428) == 82)
            v55 = 1;
        for (m = 0; m < 3; ++m)
            *(_BYTE*)(m + thisx + 230) = 0;
    }
    if (*(char*)(thisx + 224) <= 0)
        v23 = (*(char*)(thisx + 224) >= 0) - 1;
    else
        v23 = 1;
    if (v61 <= 0)
        v22 = (v61 >= 0) - 1;
    else
        v22 = 1;
    if (v23 == v22)
    {
        if (*(char*)(thisx + 224) <= 0)
            v21 = -*(char*)(thisx + 224);
        else
            v21 = *(char*)(thisx + 224);
        if (v21 < 5)
            *(_BYTE*)(thisx + 224) += v61;
    }
    else
    {
        *(_BYTE*)(thisx + 224) = v61;
    }
    if (*(char*)(thisx + 225) <= 0)
        v20 = (*(char*)(thisx + 225) >= 0) - 1;
    else
        v20 = 1;
    if (v58 <= 0)
        v19 = (v58 >= 0) - 1;
    else
        v19 = 1;
    if (v20 == v19)
    {
        if (*(char*)(thisx + 225) <= 0)
            v18 = -*(char*)(thisx + 225);
        else
            v18 = *(char*)(thisx + 225);
        if (v18 < 5)
            *(_BYTE*)(thisx + 225) += v58;
    }
    else
    {
        *(_BYTE*)(thisx + 225) = v58;
    }
    if (byte_4B99C8 && v65 && (v59 || v55 || v53) && !*(_BYTE*)(thisx + 556))
    {
        if (v59)
        {
            *(_BYTE*)(thisx + 556) = 1;
        }
        else if (v55)
        {
            *(_BYTE*)(thisx + 556) = 2;
        }
        else
        {
            *(_BYTE*)(thisx + 556) = 3;
        }
        if (v59)
            *(_BYTE*)(thisx + 230) = 5;
        if (v55)
            *(_BYTE*)(thisx + 231) = 5;
        if (v59 && v55)
            *(_BYTE*)(thisx + 233) = 5;
        if (v59 && v48)
            *(_BYTE*)(thisx + 234) = 5;
        *(_BYTE*)(thisx + 557) = 60;
        sub_43FFC3((int*)dword_4BDB28, dword_4B9AB4, -1, 100, 100, 0);
        v42 = (char*)sub_46622B((char*)byte_4B9B10, (char*)thisx, *(_BYTE*)(thisx + 556));
        if (v42 && sub_41BEA6((_DWORD*)thisx))
        {
            if (v59)
            {
                sub_421175((_DWORD*)(thisx + 8), 8, 600, (int)v42);
            }
            else if (v55)
            {
                sub_421175((_DWORD*)(thisx + 8), 7, 600, (int)v42);
            }
        }
        v59 = 0;
        v55 = 0;
    }
    if (*(int*)(thisx + 172) > 0)
    {
        if ((int)-- * (_DWORD*)(thisx + 172) <= 0)
        {
            *(_BYTE*)(thisx + 177) = 0;
            *(_BYTE*)(thisx + 176) = 0;
        }
        else
        {
            *(_BYTE*)(thisx + 177) = 1;
            v41 = 6;
            if (*(int*)(thisx + 172) < 300)
                v41 = *(_DWORD*)(thisx + 172) / 60 + 1;
            *(_BYTE*)(thisx + 176) = *(_DWORD*)(thisx + 172) / v41 % 2;
        }
    }
    if (*(_BYTE*)(thisx + 470))
    {
        if (*(_DWORD*)(thisx + 164))
        {
            if (!(*(_DWORD*)(thisx + 444) % 3))
                --* (_BYTE*)(thisx + 470);
        }
        else if (v59 || v55)
        {
            --* (_BYTE*)(thisx + 470);
        }
    }
    if (*(_DWORD*)(thisx + 412))
    {
        if (v61 <= 0)
        {
            if (v61 < 0)
                *(_DWORD*)(thisx + 424) = 0;
        }
        else
        {
            *(_DWORD*)(thisx + 424) = 1;
        }
    }
    if (v61)
    {
        *(_BYTE*)(thisx + 418) = 0;
        if (*(char*)(thisx + 417) <= 0)
            v17 = (*(char*)(thisx + 417) >= 0) - 1;
        else
            v17 = 1;
        if (v17 == v61)
        {
            *(_BYTE*)(thisx + 417) += v61;
        }
        else
        {
            *(_BYTE*)(thisx + 416) = 0;
            *(_BYTE*)(thisx + 417) = v61;
        }
        if (*(char*)(thisx + 417) <= 0)
            v16 = -*(char*)(thisx + 417);
        else
            v16 = *(char*)(thisx + 417);
        if (v16 >= 10)
        {
            *(_BYTE*)(thisx + 416) = 0;
        }
        else if (*(_BYTE*)(thisx + 416) == 2)
        {
            *(_BYTE*)(thisx + 416) = -1;
        }
        else
        {
            *(_BYTE*)(thisx + 416) = 1;
            *(_BYTE*)(thisx + 418) = 0;
        }
    }
    else
    {
        if (*(char*)(thisx + 417) <= 0)
            v15 = (*(char*)(thisx + 417) >= 0) - 1;
        else
            v15 = 1;
        *(_BYTE*)(thisx + 417) = v15;
        if ((char)++ * (_BYTE*)(thisx + 418) <= 10)
        {
            if (*(_BYTE*)(thisx + 416) == 1)
                *(_BYTE*)(thisx + 416) = 2;
        }
        else
        {
            *(_BYTE*)(thisx + 416) = 0;
        }
    }
    if (v58 <= 0)
    {
        if (v58)
        {
            *(_BYTE*)(thisx + 419) = 0;
        }
        else
        {
            *(_BYTE*)(thisx + 421) = 0;
            if ((char)++ * (_BYTE*)(thisx + 422) < 20 && *(_BYTE*)(thisx + 419) == 1)
            {
                *(_BYTE*)(thisx + 419) = 2;
            }
            else if (*(char*)(thisx + 422) >= 20)
            {
                *(_BYTE*)(thisx + 419) = 0;
            }
        }
    }
    else
    {
        *(_BYTE*)(thisx + 422) = 0;
        if ((char)++ * (_BYTE*)(thisx + 421) >= 10)
        {
            *(_BYTE*)(thisx + 419) = 0;
        }
        else if (*(_BYTE*)(thisx + 419) == 2)
        {
            *(_BYTE*)(thisx + 419) = -1;
        }
        else
        {
            *(_BYTE*)(thisx + 419) = 1;
        }
    }
    v54 = 0;
    if (*(unsigned __int8*)(thisx + 419) == 255
        && !*(_DWORD*)(thisx + 392)
        && *(_DWORD*)(thisx + 404)
        && !*(_DWORD*)(thisx + 304)
        && !*(_DWORD*)(thisx + 292)
        && !*(_DWORD*)(thisx + 480)
        && *(_DWORD*)(thisx + 428) != 69)
    {
        if (((v40 = sub_4464D3((int)byte_4B9B10, *(_DWORD*)(thisx + 328) / 800, *(_DWORD*)(thisx + 332) / 800), v40 == 1)
            || v40 == 3
            || v40 == 5)
            && !*(_DWORD*)(thisx + 424)
            || (v40 == 2 || v40 == 4 || v40 == 6) && *(_DWORD*)(thisx + 424))
        {
            v54 = 1;
        }
    }
    if (v58 >= 0)
    {
        if (v58)
        {
            *(_BYTE*)(thisx + 420) = 0;
        }
        else
        {
            *(_BYTE*)(thisx + 421) = 0;
            if ((char)++ * (_BYTE*)(thisx + 422) < 20 && *(_BYTE*)(thisx + 420) == 1)
            {
                *(_BYTE*)(thisx + 420) = 2;
            }
            else if (*(char*)(thisx + 422) >= 20)
            {
                *(_BYTE*)(thisx + 420) = 0;
            }
        }
    }
    else
    {
        *(_BYTE*)(thisx + 422) = 0;
        if ((char)++ * (_BYTE*)(thisx + 421) >= 10)
        {
            *(_BYTE*)(thisx + 420) = 0;
        }
        else if (*(_BYTE*)(thisx + 420) == 2)
        {
            *(_BYTE*)(thisx + 420) = -1;
        }
        else
        {
            *(_BYTE*)(thisx + 420) = 1;
        }
    }
    v66 = 0;
    if (!*(_DWORD*)(thisx + 480)
        && v59
        && v53
        && *(_DWORD*)(thisx + 408)
        && !*(_DWORD*)(thisx + 392)
        && *(_DWORD*)(thisx + 428) != 52
        && *(_DWORD*)(thisx + 428) != 53
        && *(_DWORD*)(thisx + 428) != 69
        && *(_DWORD*)(thisx + 428) != 10)
    {
        v66 = sub_447276((char*)byte_4B9B10, thisx);
    }
    if ((byte_4B99CA && *(int*)(thisx + 444) > 18 || !byte_4B99CA)
        && !v53
        && *(_DWORD*)(thisx + 428) == 77
        && !*(_DWORD*)(thisx + 340))
    {
        if (*(_DWORD*)(thisx + 392))
            *(_DWORD*)(thisx + 432) = 50;
        else
            *(_DWORD*)(thisx + 432) = 4;
        *(_DWORD*)(thisx + 444) = 0;
    }
    if (!*(_BYTE*)(thisx + 188)
        && !*(_DWORD*)(thisx + 304)
        && !*(_DWORD*)(thisx + 480)
        && (v59 || v55)
        && *(int*)(thisx + 428) > 2
        && *(int*)(thisx + 428) < 9)
    {
        *(_BYTE*)(thisx + 222) = 3;
        if (sub_41BA53(thisx, 0x85u, 0))
            *(_BYTE*)(thisx + 222) += 3;
    }
    v56 = 0;
    v52 = 0;
    if (*(_BYTE*)(thisx + 188) != 1
        && ((v59 || v55) && *(_DWORD*)(thisx + 428) != 10 || v48 && *(_DWORD*)(thisx + 428) == 10)
        && (*(_DWORD*)(thisx + 396)
            || *(_DWORD*)(thisx + 428) == 10
            || *(_DWORD*)(thisx + 428) == 7
            || *(_DWORD*)(thisx + 428) == 8)
        && !*(_DWORD*)(thisx + 304)
        && !*(_DWORD*)(thisx + 480))
    {
        if (!*(_DWORD*)(thisx + 392))
            v56 = (int*)sub_456B0D((unsigned char*)byte_4B9B10, (_DWORD*)thisx, 1);
        if (!*(_BYTE*)(thisx + 188) && !v56 && (*(_DWORD*)(thisx + 428) != 7 || *(int*)(thisx + 444) > 5))
            v52 = (Concurrency::details::SchedulerProxy*)sub_464229((char*)byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx);
    }
    v68 = 0;
    if (v59)
        v68 = sub_446D6F(byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx);
    v62 = *(_DWORD*)(thisx + 428);
    if (v62 == 188)
        v62 = 10;
    *(_DWORD*)(thisx + 308) = 0;
    if (!*(_DWORD*)(thisx + 480)
        && *(unsigned __int8*)(thisx + 416) == 255
        && v62 == 10
        && sub_41BA53(thisx, 0x19u, 0)
        && !*(_DWORD*)(thisx + 288))
    {
        *(_DWORD*)(thisx + 308) = sub_457731(byte_4B9B10, (_DWORD*)thisx);
    }
    v64 = *(_DWORD*)(thisx + 480) != 0;
    v49 = sub_41BA53(thisx, 0xAu, 0);
    if (sub_41BA53(thisx, 0x89u, 0))
    {
        if (*(_DWORD*)(thisx + 480))
        {
            LOBYTE(v4) = sub_425CB0(*(_BYTE**)(thisx + 480));
            if (sub_4771C5(3, v4))
                v64 = 0;
        }
    }
    if (*(_DWORD*)(thisx + 392))
    {
        if (v49)
        {
            v13 = !v64 && !v68 && !*(_BYTE*)(thisx + 177) && *(_DWORD*)(thisx + 404) && !*(_DWORD*)(thisx + 288);
            v50 = v13;
        }
        else
        {
            v50 = 0;
        }
    }
    else
    {
        v14 = !v64 && !v68 && !*(_BYTE*)(thisx + 177) && *(_DWORD*)(thisx + 396) && !*(_DWORD*)(thisx + 288);
        v50 = v14;
    }
    v51 = 0;
    if (!*(_BYTE*)(thisx + 188) && v48 && *(_DWORD*)(thisx + 428) == 10)
        v51 = (int*)sub_446814(byte_4B9B10, (_DWORD*)thisx);
    v60 = 83;
    v63 = 0;
    if (*(_DWORD*)(thisx + 164))
        v63 = *(_DWORD*)(thisx + 16);
    if (v63 && *(_DWORD*)(thisx + 404))
    {
        if (*(_BYTE*)(thisx + 188) == 2)
        {
            if (v63 == 1)
            {
                v60 = 155;
            }
            else if ((v63 == 2 || v63 == 3) && *(__int16*)(thisx + 600) >= 100)
            {
                if (v63 == 2)
                    v60 = 204;
                else
                    v60 = 205;
            }
        }
        else if (*(_BYTE*)(thisx + 188) == 3)
        {
            if (v63 == 1)
            {
                v60 = 156;
            }
            else if ((v63 == 2 || v63 == 3) && *(__int16*)(thisx + 600) >= 100)
            {
                if (v63 == 2)
                    v60 = 206;
                else
                    v60 = 205;
            }
        }
    }
    v12 = *(_DWORD*)(thisx + 428) == 13 && *(int*)(thisx + 444) >= 2 || *(char*)(thisx + 608) > 0;
    if (*(char*)(thisx + 608) > 0 && v53)
    {
        v61 = 0;
        v58 = 0;
    }
    if (v58 < 0 && *(_DWORD*)(thisx + 428) == 69)
    {
        if (*(_DWORD*)(thisx + 304))
            sub_417EAD((int*)*(_DWORD*)(thisx + 304));
        sub_417E88((int*)thisx);
        *(_DWORD*)(thisx + 432) = 6;
        goto LABEL_921;
    }
    if (v60 != 83)
    {
        *(_DWORD*)(thisx + 432) = v60;
        goto LABEL_921;
    }
    if (!v61 && !v58 && *(_DWORD*)(thisx + 428) == 6)
    {
        *(_DWORD*)(thisx + 432) = 3;
        *(_DWORD*)(thisx + 444) = 0;
        goto LABEL_921;
    }
    if (!v61 && !v58 && *(_DWORD*)(thisx + 428) == 56)
    {
        *(_DWORD*)(thisx + 432) = 53;
        *(_DWORD*)(thisx + 444) = 0;
        goto LABEL_921;
    }
    if (*(_DWORD*)(thisx + 392)
        && v58 > 0
        && v59
        && v55
        && (*(_DWORD*)(thisx + 404)
            || *(int*)(thisx + 444) < 4 && (*(_DWORD*)(thisx + 428) == 128 || *(_DWORD*)(thisx + 428) == 127))
        && !*(_DWORD*)(thisx + 480)
        && !*(_DWORD*)(thisx + 304)
        && (*(_DWORD*)(thisx + 524) || sub_41BA53(thisx, 0x26u, 0)))
    {
        *(_DWORD*)(thisx + 432) = 95;
        goto LABEL_921;
    }
    if (v59 && v55 && *(_DWORD*)(thisx + 400))
    {
        *(_DWORD*)(thisx + 444) = 0;
        *(_DWORD*)(thisx + 396) = 0;
        *(_DWORD*)(thisx + 404) = 0;
        *(_DWORD*)(thisx + 400) = 0;
        if (*(_BYTE*)(thisx + 237) && *(_DWORD*)(thisx + 392)
            || v62 == 10
            || v62 == 125
            || v62 == 8
            || v62 == 126
            || v62 == 131
            || v62 == 166
            || v62 == 97)
        {
            *(_DWORD*)(thisx + 432) = 8;
            *(_DWORD*)(thisx + 348) = -(3 * sub_41D067(thisx, 0) / 2 + 405);
            *(_DWORD*)(thisx + 344) = 50 * v58;
            *(_BYTE*)(thisx + 236) = 3;
        }
        else
        {
            *(_DWORD*)(thisx + 432) = 7;
            *(_DWORD*)(thisx + 348) = -(3 * sub_41D067(thisx, 0) / 2 + 405);
            if (!*(_DWORD*)(thisx + 392))
            {
                *(_DWORD*)(thisx + 340) = 150 * v61;
                *(_DWORD*)(thisx + 344) = 50 * v58;
            }
            if (v61)
                *(_BYTE*)(thisx + 236) = 2;
            else
                *(_BYTE*)(thisx + 236) = 1;
        }
        if (!*(_DWORD*)(thisx + 392))
        {
            *(_DWORD*)(thisx + 372) += *(_DWORD*)(thisx + 364);
            *(_DWORD*)(thisx + 376) += *(_DWORD*)(thisx + 368);
        }
        *(_DWORD*)(thisx + 360) = 30;
        *(_DWORD*)(thisx + 352) = 0;
        *(_DWORD*)(thisx + 356) = 0;
        if (*(_DWORD*)(thisx + 292))
        {
            if (*(_DWORD*)(thisx + 304))
                sub_417E1D(*(_DWORD**)(thisx + 304));
            *(_DWORD*)(thisx + 304) = 0;
            *(_DWORD*)(thisx + 292) = 0;
        }
        goto LABEL_921;
    }
    if (*(_BYTE*)(thisx + 188) != 1 && byte_4B99CA && (v59 || v55) && v50 && sub_463F66((char*)byte_4B9B10, (_BYTE*)thisx))
    {
        *(_DWORD*)(thisx + 432) = 77;
        *(_BYTE*)(thisx + 221) = 0;
        *(_DWORD*)(thisx + 444) = 0;
        goto LABEL_921;
    }
    if (v56)
    {
        *(_DWORD*)(thisx + 432) = 27;
        sub_41E5C9(thisx, v56);
        goto LABEL_921;
    }
    if (v52)
    {
        if (*(_DWORD*)(thisx + 392) || unknown_libname_12((int*)v52) == 2 || unknown_libname_12((int*)v52) == 5)
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A1C, -1, 100, 100, 0);
            if (v59)
                *(_BYTE*)(thisx + 230) = 5;
            if (v55)
                *(_BYTE*)(thisx + 231) = 5;
            if (v59 && v55)
                *(_BYTE*)(thisx + 233) = 5;
            if (v59 && v48)
                *(_BYTE*)(thisx + 234) = 5;
        }
        else
        {
            sub_43FFC3((int*)dword_4BDB28, dword_4B9A74, -1, 100, 100, 0);
            *(_DWORD*)(thisx + 432) = 28;
        }
        sub_41F24C(thisx, v52);
        goto LABEL_921;
    }
    if (v66)
    {
        *(_DWORD*)(thisx + 280) = 1;
        *(_DWORD*)(thisx + 304) = (int)v66;
        if (sub_425D70((int*)v66) == *(_DWORD*)(thisx + 424))
            *(_DWORD*)(thisx + 432) = 58;
        else
            *(_DWORD*)(thisx + 432) = 57;
        sub_41B6CF(*(_DWORD**)(thisx + 304), thisx, 1);
        *(_BYTE*)(thisx + 258) = 2;
        goto LABEL_921;
    }
    if (*(_DWORD*)(thisx + 428) == 15 && *(unsigned __int8*)(thisx + 420) == 255 && sub_41BA53(thisx, 0x27u, 0))
    {
        *(_DWORD*)(thisx + 432) = 96;
        goto LABEL_921;
    }
    if (v54)
    {
        *(_DWORD*)(thisx + 432) = 131;
        *(_DWORD*)(thisx + 444) = 0;
        *(_DWORD*)(thisx + 372) = 300 * *(_DWORD*)(thisx + 424) - 300 * (*(_DWORD*)(thisx + 424) == 0);
        *(_DWORD*)(thisx + 352) = *(_DWORD*)(thisx + 372) / -30;
        goto LABEL_921;
    }
    if ((!*(_DWORD*)(thisx + 304)
        || *(_DWORD*)(thisx + 428) == 3
        || *(_DWORD*)(thisx + 428) == 4
        || *(_DWORD*)(thisx + 428) == 5)
        && *(unsigned __int8*)(thisx + 419) == 255
        && sub_41BA53(thisx, 0x23u, 0)
        && *(_DWORD*)(thisx + 404)
        && !*(_DWORD*)(thisx + 288)
        && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 177;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 480)
        && *(unsigned __int8*)(thisx + 416) == 255
        && *(_DWORD*)(thisx + 428) == 10
        && sub_41BA53(thisx, 0x36u, 0)
        && !*(_DWORD*)(thisx + 288))
    {
        *(_DWORD*)(thisx + 432) = 188;
        goto LABEL_921;
    }
    if (*(_DWORD*)(thisx + 308))
    {
        *(_DWORD*)(thisx + 432) = 167;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 480)
        && !*(_DWORD*)(thisx + 288)
        && *(_BYTE*)(thisx + 225) == 1
        && *(_DWORD*)(thisx + 428) == 8
        && sub_41BA53(thisx, 7u, 0))
    {
        *(_DWORD*)(thisx + 432) = 150;
        goto LABEL_921;
    }
    if (sub_41BA53(thisx, 0x14u, 0)
        && !*(_DWORD*)(thisx + 288)
        && *(char*)(thisx + 231) <= -2
        && *(char*)(thisx + 232) <= -2
        && *(_BYTE*)(thisx + 230) == 5
        && *(_DWORD*)(thisx + 404)
        && (!*(_DWORD*)(thisx + 304) || *(_DWORD*)(thisx + 428) == 4 || *(_DWORD*)(thisx + 428) == 5)
        && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 91;
        goto LABEL_921;
    }
    if (sub_41BA53(thisx, 0x15u, 0)
        && !*(_DWORD*)(thisx + 288)
        && *(char*)(thisx + 231) <= -2
        && *(char*)(thisx + 232) <= -2
        && *(_BYTE*)(thisx + 230) == 5
        && *(_DWORD*)(thisx + 404)
        && (!*(_DWORD*)(thisx + 304)
            || *(_DWORD*)(thisx + 428) == 3
            || *(_DWORD*)(thisx + 428) == 4
            || *(_DWORD*)(thisx + 428) == 5)
        && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 92;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 480) && !*(_DWORD*)(thisx + 288) && v59 && v12 && sub_41BA53(thisx, 4u, 0))
    {
        *(_DWORD*)(thisx + 432) = 147;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 288) && v59 && v12 && sub_41BA53(thisx, 0xDu, 0) && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 156;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 288)
        && v59
        && v12
        && sub_41BA53(thisx, 0xFu, 0)
        && (!*(_DWORD*)(thisx + 480) || sub_494AA9(*(_BYTE**)(thisx + 480), 2)))
    {
        *(_DWORD*)(thisx + 432) = 158;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 288) && v59 && v12 && sub_41BA53(thisx, 0x48u, 0))
    {
        *(_DWORD*)(thisx + 436) = 0;
        *(_DWORD*)(thisx + 432) = 200;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 480)
        && !*(_DWORD*)(thisx + 288)
        && v59
        && *(char*)(thisx + 225) > 0
        && *(_DWORD*)(thisx + 404)
        && *(_DWORD*)(thisx + 392)
        && sub_41BA53(thisx, 0x25u, 0))
    {
        *(_DWORD*)(thisx + 432) = 179;
        goto LABEL_921;
    }
    if (v59 && *(_DWORD*)(thisx + 404))
    {
        v39 = 0;
        v38 = 0;
        if (!*(_BYTE*)(thisx + 188) && !v68)
            v39 = (int*)sub_446814(byte_4B9B10, (_DWORD*)thisx);
        if (!*(_BYTE*)(thisx + 188) && !v68 && !v39)
            v38 = (int*)sub_446A62(byte_4B9B10, (_DWORD*)thisx, 0);
        if (*(_DWORD*)(thisx + 428) == 52)
        {
            *(_DWORD*)(thisx + 432) = 57;
            *(_BYTE*)(thisx + 258) = 0;
            if (!*(_DWORD*)(thisx + 304))
            {
            LABEL_517:
                sub_417DCC(thisx);
            LABEL_608:
                if (*(_DWORD*)(thisx + 432) == 124 || *(_DWORD*)(thisx + 432) == 128)
                {
                    if (*(_BYTE*)(thisx + 476))
                    {
                        *(_DWORD*)(thisx + 432) = 163;
                    }
                    else if (sub_41BA53(thisx, 2u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 145;
                    }
                    else if (sub_41BA53(thisx, 0x2Fu, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 182;
                    }
                    else if (sub_41BA53(thisx, 0x12u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 160;
                    }
                }
                goto LABEL_803;
            }
        }
        else
        {
            if (*(_DWORD*)(thisx + 428) != 53 && *(_DWORD*)(thisx + 428) != 56)
            {
                if (*(_DWORD*)(thisx + 428) == 82 && *(_DWORD*)(thisx + 312))
                {
                    if (*(_DWORD*)(thisx + 4) && sub_43F0C8((int*)*(_DWORD*)(thisx + 4)))
                    {
                        *(_DWORD*)(thisx + 432) = 85;
                        *(_DWORD*)(thisx + 320) = 1;
                        *(_DWORD*)(thisx + 304) = *(_DWORD*)(thisx + 312);
                        sub_42101A((int*)*(_DWORD*)(thisx + 304));
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 432) = 57;
                        *(_BYTE*)(thisx + 258) = 0;
                        *(_DWORD*)(thisx + 304) = *(_DWORD*)(thisx + 312);
                        sub_421051(*(_DWORD**)(thisx + 304));
                        sub_41B6F5(thisx);
                    }
                }
                else if (*(_DWORD*)(thisx + 428) == 69)
                {
                    *(_DWORD*)(thisx + 432) = 70;
                    *(_DWORD*)(thisx + 444) = 0;
                }
                else if (*(_DWORD*)(thisx + 480))
                {
                    if (!*(_BYTE*)(thisx + 473))
                    {
                        if (sub_425CB0(*(_BYTE**)(thisx + 480)) == 12)
                        {
                            *(_DWORD*)(thisx + 432) = 143;
                        }
                        else if (sub_41BA53(thisx, 0x20u, 0) && sub_494AA9(*(_BYTE**)(thisx + 480), 1))
                        {
                            *(_DWORD*)(thisx + 432) = 174;
                        }
                        else if (sub_41BA53(thisx, 0x21u, 0) && sub_494AA9(*(_BYTE**)(thisx + 480), 1))
                        {
                            *(_DWORD*)(thisx + 432) = 175;
                        }
                        else if (sub_41BA53(thisx, 2u, 0) && sub_425CB0(*(_BYTE**)(thisx + 480)) == 1)
                        {
                            *(_DWORD*)(thisx + 432) = 145;
                        }
                        else if (sub_41BA53(thisx, 0x2Fu, 0) && sub_425CB0(*(_BYTE**)(thisx + 480)) == 1)
                        {
                            *(_DWORD*)(thisx + 432) = 182;
                        }
                        else if (sub_41BA53(thisx, 0x1Cu, 0))
                        {
                            *(_DWORD*)(thisx + 432) = 170;
                        }
                        else if (sub_425CB0(*(_BYTE**)(thisx + 480)) == 1
                            && sub_474032((char*)byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx)
                            && !*(_DWORD*)(thisx + 392))
                        {
                            *(_DWORD*)(thisx + 432) = 134;
                        }
                        else
                        {
                            *(_DWORD*)(thisx + 432) = 142;
                        }
                    }
                }
                else if (*(_DWORD*)(thisx + 288))
                {
                    if (*(_DWORD*)(thisx + 392))
                        *(_DWORD*)(thisx + 432) = 66;
                    else
                        *(_DWORD*)(thisx + 432) = 65;
                    if (*(_DWORD*)(thisx + 304)
                        || (*(_DWORD*)(thisx + 304) = sub_465804(byte_4B9B10, (int*)thisx)) != 0
                        && sub_425D50((int*)*(_DWORD*)(thisx + 304)))
                    {
                        sub_41745B(*(_DWORD**)(thisx + 304), *(_BYTE*)(thisx + 184));
                    }
                    else
                    {
                        sub_417E1D((_DWORD*)thisx);
                    }
                }
                else if (v68)
                {
                    *(_DWORD*)(thisx + 280) = 1;
                    *(_DWORD*)(thisx + 432) = 57;
                    *(_BYTE*)(thisx + 258) = 1;
                    *(_DWORD*)(thisx + 304) = (int)v68;
                    sub_41B6CF(v68, thisx, 1);
                }
                else if (v62 == 10)
                {
                    if (sub_41BA53(thisx, 0x17u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 165;
                    }
                    else if (sub_41BA53(thisx, 0x18u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 166;
                    }
                    else if (sub_41BA53(thisx, 0x28u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 97;
                    }
                    else if (sub_41BA53(thisx, 0x35u, 0))
                    {
                        *(_DWORD*)(thisx + 436) = *(_DWORD*)(thisx + 444);
                        *(_DWORD*)(thisx + 432) = 187;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 432) = 126;
                    }
                }
                else if (!sub_474032((char*)byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx) || *(_DWORD*)(thisx + 392))
                {
                    if (*(_DWORD*)(thisx + 428) == 7 && *(int*)(thisx + 348) > 0 && sub_41BA53(thisx, 9u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 152;
                    }
                    else if ((*(_DWORD*)(thisx + 428) == 7 && *(_BYTE*)(thisx + 236) == 2 || *(_DWORD*)(thisx + 428) == 8)
                        && sub_41BA53(thisx, 0x11u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 159;
                    }
                    else if (*(_DWORD*)(thisx + 428) == 7 && *(_BYTE*)(thisx + 236) == 1 && sub_41BA53(thisx, 0x13u, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 161;
                    }
                    else if (*(_DWORD*)(thisx + 428) == 8)
                    {
                        if (sub_41BA53(thisx, 0x17u, 0))
                        {
                            *(_DWORD*)(thisx + 432) = 165;
                        }
                        else if (!sub_41BA53(thisx, 0x28u, 0) || sub_41BA53(thisx, 0x29u, 0))
                        {
                            *(_DWORD*)(thisx + 432) = 130;
                        }
                        else
                        {
                            *(_DWORD*)(thisx + 432) = 97;
                        }
                    }
                    else if (*(_DWORD*)(thisx + 428) == 7 || *(_DWORD*)(thisx + 428) == 50 || *(_DWORD*)(thisx + 428) == 51)
                    {
                        *(_DWORD*)(thisx + 432) = 128;
                    }
                    else if (v39)
                    {
                        *(_DWORD*)(thisx + 432) = 64;
                        *(_DWORD*)(thisx + 288) = 1;
                        *(_DWORD*)(thisx + 304) = (int)v39;
                    }
                    else if (v38)
                    {
                        *(_DWORD*)(thisx + 432) = 133;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 432) = 124;
                    }
                }
                else
                {
                    *(_DWORD*)(thisx + 436) = 0;
                    *(_DWORD*)(thisx + 432) = 134;
                }
                goto LABEL_608;
            }
            *(_DWORD*)(thisx + 432) = 58;
            *(_BYTE*)(thisx + 258) = 0;
            if (!*(_DWORD*)(thisx + 304))
                goto LABEL_517;
        }
        sub_41B6F5(thisx);
        goto LABEL_608;
    }
    if (!*(_DWORD*)(thisx + 288) && v55 && v12 && sub_41BA53(thisx, 3u, 0) && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 146;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 288) && v55 && v12 && sub_41BA53(thisx, 0xCu, 0) && !*(_DWORD*)(thisx + 480))
    {
        *(_DWORD*)(thisx + 432) = 155;
        goto LABEL_921;
    }
    if (!*(_DWORD*)(thisx + 288) && v55 && v12 && sub_41BA53(thisx, 0x48u, 0))
    {
        *(_DWORD*)(thisx + 436) = 1;
        *(_DWORD*)(thisx + 432) = 200;
        goto LABEL_921;
    }
    if (!v55 || !*(_DWORD*)(thisx + 404))
    {
        if (v51)
        {
            *(_DWORD*)(thisx + 432) = 64;
            *(_DWORD*)(thisx + 288) = 1;
            *(_DWORD*)(thisx + 304) = (int)v51;
        }
        else if (*(_BYTE*)(thisx + 188) == 1 || !v53 || !v50 || *(_BYTE*)(thisx + 608))
        {
            if ((*(_DWORD*)(thisx + 424) && v61 < 0 || !*(_DWORD*)(thisx + 424) && v61 > 0) && *(_DWORD*)(thisx + 428) == 10)
            {
                *(_DWORD*)(thisx + 432) = 11;
                *(_DWORD*)(thisx + 444) = 0;
                *(_BYTE*)(thisx + 237) = 0;
            }
            else if (*(_DWORD*)(thisx + 428) != 11 && *(_DWORD*)(thisx + 428) != 188)
            {
                if (*(_DWORD*)(thisx + 428) == 10)
                {
                    v35 = 3 * sub_41CA5F(thisx, 0) + 20;
                    if (v35 < 50)
                        v35 = 50;
                    *(_DWORD*)(thisx + 340) = v35 * *(_DWORD*)(thisx + 424) - v35 * (*(_DWORD*)(thisx + 424) == 0);
                    *(_DWORD*)(thisx + 380) = *(_DWORD*)(thisx + 340);
                    *(_DWORD*)(thisx + 344) = v35 * v58 / 3;
                    *(_DWORD*)(thisx + 384) = *(_DWORD*)(thisx + 344);
                    *(_DWORD*)(thisx + 352) = *(_DWORD*)(thisx + 340) / -30;
                    if (*(int*)(thisx + 344) <= 0)
                        v11 = (*(_DWORD*)(thisx + 344) >= 0) - 1;
                    else
                        v11 = 1;
                    *(_DWORD*)(thisx + 356) = *(_DWORD*)(thisx + 344) / -30 - v11 * (*(_DWORD*)(thisx + 344) % 30 != 0);
                }
                else if (v61
                    && (*(char*)(thisx + 417) <= 0 ? (v10 = (*(char*)(thisx + 417) >= 0) - 1) : (v10 = 1),
                        v61 == v10
                        && *(unsigned __int8*)(thisx + 416) == 255
                        && *(_DWORD*)(thisx + 396)
                        && !*(_DWORD*)(thisx + 292)))
                {
                    *(_DWORD*)(thisx + 432) = 10;
                    *(_DWORD*)(thisx + 444) = 0;
                    v34 = 3 * sub_41CA5F(thisx, 0) + 20;
                    if (v34 < 50)
                        v34 = 50;
                    *(_DWORD*)(thisx + 340) = v34 * v61;
                    *(_DWORD*)(thisx + 380) = *(_DWORD*)(thisx + 340);
                    *(_DWORD*)(thisx + 344) = v34 * v58 / 3;
                    *(_DWORD*)(thisx + 384) = *(_DWORD*)(thisx + 344);
                    *(_DWORD*)(thisx + 352) = -10 * v61;
                    *(_DWORD*)(thisx + 356) = -3 * v58;
                    *(_DWORD*)(thisx + 396) = 0;
                    *(_BYTE*)(thisx + 237) = 1;
                }
                else if ((!*(_BYTE*)(thisx + 178) || v59) && *(_DWORD*)(thisx + 428) == 94 && *(int*)(thisx + 444) > 60)
                {
                    *(_DWORD*)(thisx + 432) = 176;
                }
                else if ((!*(_DWORD*)(thisx + 304)
                    || *(_DWORD*)(thisx + 428) == 3
                    || *(_DWORD*)(thisx + 428) == 4
                    || *(_DWORD*)(thisx + 428) == 5)
                    && *(unsigned __int8*)(thisx + 420) == 255
                    && sub_41BA53(thisx, 0x22u, 0)
                    && *(_DWORD*)(thisx + 404)
                    && !*(_DWORD*)(thisx + 288)
                    && !*(_DWORD*)(thisx + 480))
                {
                    *(_DWORD*)(thisx + 432) = 94;
                }
                else if ((v61 || v58) && (*(_DWORD*)(thisx + 428) == 7 || *(_DWORD*)(thisx + 428) == 8))
                {
                    *(_DWORD*)(thisx + 372) += 3 * v61;
                    *(_DWORD*)(thisx + 376) += 3 * v58;
                }
                else if ((v61 || v58) && (*(_DWORD*)(thisx + 428) == 53 || *(_DWORD*)(thisx + 428) == 56))
                {
                    if (*(_DWORD*)(thisx + 428) != 56)
                        *(_DWORD*)(thisx + 444) = 0;
                    *(_DWORD*)(thisx + 432) = 56;
                    v33 = sub_4224A7((void*)thisx);
                    *(_DWORD*)(thisx + 372) = v33 * v61;
                    *(_DWORD*)(thisx + 376) = 7 * v33 * v58 / 10;
                    if (v61)
                        *(_DWORD*)(thisx + 424) = v61 > 0;
                }
                else if (!v61 && !v58
                    || *(_DWORD*)(thisx + 392)
                    || *(_DWORD*)(thisx + 480)
                    || (*(_DWORD*)(thisx + 428) != 77 || *(unsigned __int8*)(thisx + 221) < 5u)
                    && (*(char*)(thisx + 608) <= 0 || v53))
                {
                    if ((v61 || v58) && *(_DWORD*)(thisx + 396) && !*(_DWORD*)(thisx + 292))
                    {
                        if (*(_DWORD*)(thisx + 428) != 6)
                            *(_DWORD*)(thisx + 444) = 0;
                        *(_DWORD*)(thisx + 432) = 6;
                        v31 = sub_4224A7((void*)thisx);
                        *(_DWORD*)(thisx + 340) = v31 * v61;
                        *(_DWORD*)(thisx + 380) = *(_DWORD*)(thisx + 340);
                        *(_DWORD*)(thisx + 344) = 7 * v31 * v58 / 10;
                        *(_DWORD*)(thisx + 384) = *(_DWORD*)(thisx + 344);
                        *(_DWORD*)(thisx + 352) = 0;
                        *(_DWORD*)(thisx + 356) = 0;
                        if (v61 && !*(_DWORD*)(thisx + 480))
                        {
                            v30 = 0;
                            if (!*(_BYTE*)(thisx + 188))
                                v30 = (char*)sub_465E7E((char*)byte_4B9B10, (_DWORD*)thisx);
                            if (v30)
                            {
                                *(_BYTE*)(thisx + 272) = 2;
                                *(_DWORD*)(thisx + 312) = (int)v30;
                                sub_425D10((int*)v30, thisx);
                            }
                            else
                            {
                                v29 = sub_444DE2(
                                    byte_4B9B10,
                                    *(unsigned __int8*)(thisx + 184),
                                    (struct Concurrency::ISchedulerProxy*)0xF,
                                    1,
                                    16,
                                    0);
                                if (v29 >= 0)
                                {
                                    *(_BYTE*)(thisx + 272) = 1;
                                    *(_DWORD*)(thisx + 304) = sub_446714(byte_4B9B10, v29);
                                }
                            }
                        }
                        if (!*(_BYTE*)(thisx + 188)
                            && v58 > 0
                            && !*(_BYTE*)(thisx + 272)
                            && !*(_DWORD*)(thisx + 288)
                            && !*(_DWORD*)(thisx + 292)
                            && !*(_DWORD*)(thisx + 480))
                        {
                            v28 = sub_444DE2(
                                byte_4B9B10,
                                *(unsigned __int8*)(thisx + 184),
                                (struct Concurrency::ISchedulerProxy*)0x2C,
                                0,
                                6,
                                2);
                            if (v28 == -1)
                                v28 = sub_444DE2(
                                    byte_4B9B10,
                                    *(unsigned __int8*)(thisx + 184),
                                    (struct Concurrency::ISchedulerProxy*)0x2D,
                                    0,
                                    6,
                                    2);
                            if (v28 >= 0)
                            {
                                *(_DWORD*)(thisx + 304) = sub_446714(byte_4B9B10, v28);
                                if (*(_DWORD*)(thisx + 304) && sub_41B65C(*(_DWORD*)(thisx + 304)))
                                {
                                    sub_417BBB(*(_DWORD*)(thisx + 304), thisx);
                                    *(_DWORD*)(thisx + 432) = 69;
                                    *(_DWORD*)(thisx + 376) = 0;
                                    *(_DWORD*)(thisx + 344) = 0;
                                    *(_DWORD*)(thisx + 356) = 0;
                                }
                                else
                                {
                                    *(_DWORD*)(thisx + 304) = 0;
                                }
                            }
                        }
                    }
                }
                else
                {
                    if (*(_DWORD*)(thisx + 164))
                    {
                        v32 = sub_424268((int*)thisx + 8);
                        v9 = v32 >= 2 && v32 <= 4;
                        v8 = v32 >= 6 && v32 <= 8;
                        *(_BYTE*)(thisx + 224) = v9 - v8;
                        v7 = v32 >= 4 && v32 <= 6;
                        v6 = v32 == 1 || v32 == 2 || v32 == 8;
                        *(_BYTE*)(thisx + 225) = v7 - v6;
                        v61 = *(char*)(thisx + 224);
                        v58 = *(char*)(thisx + 225);
                    }
                    *(_DWORD*)(thisx + 436) = v61;
                    *(_DWORD*)(thisx + 440) = v58;
                    *(_DWORD*)(thisx + 432) = 26;
                    *(_DWORD*)(thisx + 444) = 0;
                }
            }
        }
        else
        {
            *(_DWORD*)(thisx + 432) = 77;
            *(_BYTE*)(thisx + 221) = 0;
            *(_DWORD*)(thisx + 444) = 0;
        }
        goto LABEL_921;
    }
    v37 = 0;
    v36 = 0;
    if (!*(_BYTE*)(thisx + 188) && !v68)
    {
        if (sub_41BA53(thisx, 0x30u, 0))
            v37 = (int*)sub_446A62(byte_4B9B10, (_DWORD*)thisx, 1);
        if (!v37)
            v36 = (int*)sub_446A62(byte_4B9B10, (_DWORD*)thisx, 0);
    }
    switch (*(_DWORD*)(thisx + 428))
    {
    case '4':
        *(_DWORD*)(thisx + 432) = 62;
        break;
    case '5':
    case '8':
        *(_DWORD*)(thisx + 432) = 63;
        break;
    case 'R':
        if (*(_DWORD*)(thisx + 312))
            sub_421051(*(_DWORD**)(thisx + 312));
        sub_421051((_DWORD*)thisx);
        *(_BYTE*)(thisx + 231) = 5;
        *(_BYTE*)(thisx + 233) = 5;
        break;
    case 'E':
        if (sub_41BA53(thisx, 0x2Au, 0))
            *(_DWORD*)(thisx + 432) = 100;
        else
            *(_DWORD*)(thisx + 432) = 139;
        break;
    default:
        if (*(_DWORD*)(thisx + 480))
        {
            if (!*(_BYTE*)(thisx + 473))
            {
                if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x1Du, 0))
                {
                    *(_DWORD*)(thisx + 432) = 171;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x1Eu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 172;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x1Fu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 173;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x2Cu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 180;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x31u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 183;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x32u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 184;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x33u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 185;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x34u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 186;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x3Cu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 189;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x3Du, 0))
                {
                    *(_DWORD*)(thisx + 432) = 190;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x3Eu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 191;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x3Fu, 0))
                {
                    *(_DWORD*)(thisx + 432) = 192;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x40u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 193;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x41u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 194;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x42u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 195;
                }
                else if (!*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x43u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 196;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x44u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 197;
                }
                else if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x45u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 198;
                }
                else if (*(_BYTE*)(thisx + 237) && sub_41BA53(thisx, 0x46u, 0))
                {
                    switch (rand() % 18)
                    {
                    case 0:
                        *(_DWORD*)(thisx + 432) = 171;
                        break;
                    case 1:
                        *(_DWORD*)(thisx + 432) = 172;
                        break;
                    case 2:
                        *(_DWORD*)(thisx + 432) = 173;
                        break;
                    case 3:
                        *(_DWORD*)(thisx + 432) = 180;
                        break;
                    case 4:
                        *(_DWORD*)(thisx + 432) = 183;
                        break;
                    case 5:
                        *(_DWORD*)(thisx + 432) = 184;
                        break;
                    case 6:
                        *(_DWORD*)(thisx + 432) = 185;
                        break;
                    case 7:
                        *(_DWORD*)(thisx + 432) = 186;
                        break;
                    case 8:
                        *(_DWORD*)(thisx + 432) = 189;
                        break;
                    case 9:
                        *(_DWORD*)(thisx + 432) = 190;
                        break;
                    case 10:
                        *(_DWORD*)(thisx + 432) = 191;
                        break;
                    case 11:
                        *(_DWORD*)(thisx + 432) = 192;
                        break;
                    case 12:
                        *(_DWORD*)(thisx + 432) = 193;
                        break;
                    case 13:
                        *(_DWORD*)(thisx + 432) = 194;
                        break;
                    case 14:
                        *(_DWORD*)(thisx + 432) = 195;
                        break;
                    case 15:
                        *(_DWORD*)(thisx + 432) = 196;
                        break;
                    case 16:
                        *(_DWORD*)(thisx + 432) = 197;
                        break;
                    case 17:
                        *(_DWORD*)(thisx + 432) = 198;
                        break;
                    default:
                        goto LABEL_797;
                    }
                }
                else
                {
                    *(_DWORD*)(thisx + 432) = 143;
                }
            }
        }
        else if (*(_DWORD*)(thisx + 288))
        {
            if (*(_DWORD*)(thisx + 392))
                *(_DWORD*)(thisx + 432) = 68;
            else
                *(_DWORD*)(thisx + 432) = 67;
            if (*(_DWORD*)(thisx + 304)
                || (*(_DWORD*)(thisx + 304) = sub_465804(byte_4B9B10, (int*)thisx)) != 0
                && sub_425D50((int*)*(_DWORD*)(thisx + 304)))
            {
                sub_417173(*(_DWORD*)(thisx + 304), *(_BYTE*)(thisx + 184));
            }
            else
            {
                sub_417E1D((_DWORD*)thisx);
            }
        }
        else if (v62 != 10 || sub_41BA53(thisx, 0x16u, 0))
        {
            if (!sub_474032((char*)byte_4B9B10, (Concurrency::details::SchedulerBase*)thisx) || *(_DWORD*)(thisx + 392))
            {
                if (v68)
                {
                    *(_DWORD*)(thisx + 432) = 64;
                    *(_DWORD*)(thisx + 288) = 1;
                    *(_DWORD*)(thisx + 304) = (int)v68;
                }
                else if (v37)
                {
                    *(_DWORD*)(thisx + 432) = 102;
                    *(_DWORD*)(thisx + 304) = (int)v37;
                    *(_DWORD*)(thisx + 280) = 1;
                }
                else if (v36)
                {
                    if (sub_41BA53(thisx, 5u, 0))
                        *(_DWORD*)(thisx + 432) = 148;
                    else
                        *(_DWORD*)(thisx + 432) = 132;
                }
                else if (sub_41BA53(thisx, 0x16u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 164;
                }
                else if (*(_DWORD*)(thisx + 428) == 8)
                {
                    if (sub_41BA53(thisx, 0xEu, 0))
                        *(_DWORD*)(thisx + 432) = 157;
                    else
                        *(_DWORD*)(thisx + 432) = 129;
                }
                else if (*(_DWORD*)(thisx + 428) == 7 && *(int*)(thisx + 348) > 0 && sub_41BA53(thisx, 8u, 0))
                {
                    *(_DWORD*)(thisx + 432) = 151;
                }
                else if (*(_DWORD*)(thisx + 428) == 7 || *(_DWORD*)(thisx + 428) == 50 || *(_DWORD*)(thisx + 428) == 51)
                {
                    if (sub_41BA53(thisx, 0xBu, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 154;
                    }
                    else if (sub_41BA53(thisx, 0xEu, 0))
                    {
                        *(_DWORD*)(thisx + 432) = 157;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 432) = 127;
                    }
                }
                else
                {
                    *(_DWORD*)(thisx + 432) = 123;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 436) = 1;
                *(_DWORD*)(thisx + 432) = 134;
            }
        }
        else
        {
            *(_DWORD*)(thisx + 432) = 125;
        }
        break;
    }
LABEL_797:
    if (*(_DWORD*)(thisx + 432) == 123 || *(_DWORD*)(thisx + 432) == 127)
    {
        if (sub_41BA53(thisx, 0x2Eu, 0))
        {
            *(_DWORD*)(thisx + 432) = 181;
        }
        else if (sub_41BA53(thisx, 1u, 0))
        {
            *(_DWORD*)(thisx + 432) = 144;
        }
    }
LABEL_803:
    *(_DWORD*)(thisx + 444) = 0;
    *(_DWORD*)(thisx + 396) = 0;
    *(_DWORD*)(thisx + 404) = 0;
LABEL_921:
    if (*(_BYTE*)(thisx + 220))
    {
        if (!-- * (_BYTE*)(thisx + 220))
        {
            *(_DWORD*)(thisx + 216) = 0;
            if (sub_41BA53(thisx, 0x80u, 0))
            {
                *(_BYTE*)(thisx + 558) = 5;
                *(_DWORD*)(thisx + 560) = 30;
            }
            else if (sub_41BA53(thisx, 0x81u, 0))
            {
                *(_BYTE*)(thisx + 558) = 8;
                *(_DWORD*)(thisx + 560) = 50;
            }
        }
    }
    if (*(_BYTE*)(thisx + 473))
        --* (_BYTE*)(thisx + 473);
    if (*(_BYTE*)(thisx + 222))
        --* (_BYTE*)(thisx + 222);
    for (n = 0; n < 8; ++n)
    {
        if (*(_BYTE*)(n + thisx + 453) && *(unsigned __int8*)(n + thisx + 453) != 255)
            --* (_BYTE*)(n + thisx + 453);
    }
    if (*(_BYTE*)(thisx + 557))
    {
        if (!-- * (_BYTE*)(thisx + 557))
            *(_BYTE*)(thisx + 556) = 0;
    }
    if (*(_BYTE*)(thisx + 592))
        --* (_BYTE*)(thisx + 592);
    if (*(_WORD*)(thisx + 596))
    {
        if (!-- * (_WORD*)(thisx + 596))
        {
            *(_BYTE*)(thisx + 593) = 0;
            *(_WORD*)(thisx + 594) = 0;
        }
    }
    result = thisx;
    if (*(int*)(thisx + 428) > 83 && *(_DWORD*)(thisx + 444) == 1)
    {
        if (*(_BYTE*)(thisx + 237))
            v5 = *(_DWORD*)(thisx + 572) + 1;
        else
            v5 = *(_DWORD*)(thisx + 572) - 1;
        *(_DWORD*)(thisx + 572) = v5;
        if (*(_DWORD*)(thisx + 392) && *(_BYTE*)(thisx + 236))
        {
            result = thisx;
            ++* (_DWORD*)(thisx + 576);
        }
        else
        {
            result = thisx;
            --* (_DWORD*)(thisx + 576);
        }
    }
    if (!*(_BYTE*)(thisx + 188))
    {
        result = thisx;
        if (*(_DWORD*)(thisx + 304) || *(_DWORD*)(thisx + 480))
            *(_BYTE*)(thisx + 222) = 0;
    }
    return result;
}