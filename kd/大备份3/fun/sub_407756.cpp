#include "sub.h"
int sub_407756(int thisx, int a2, int a3, int a4)
{
    int v4; // edx
    int v5; // eax
    int result; // eax
    int v8; // [esp+4h] [ebp-70h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+8h] [ebp-6Ch]
    int v10; // [esp+8h] [ebp-6Ch]
    int i; // [esp+Ch] [ebp-68h]
    __int16 v12[3]; // [esp+10h] [ebp-64h] BYREF
    char v13; // [esp+16h] [ebp-5Eh]
    __int16 v14; // [esp+18h] [ebp-5Ch]
    char v15; // [esp+1Bh] [ebp-59h]
    int v16; // [esp+24h] [ebp-50h]
    int v17; // [esp+48h] [ebp-2Ch]
    int v18; // [esp+4Ch] [ebp-28h]
    int v19; // [esp+50h] [ebp-24h]
    int v20; // [esp+54h] [ebp-20h]
    char v21; // [esp+58h] [ebp-1Ch]
    int v22; // [esp+5Ch] [ebp-18h]
    int v23; // [esp+60h] [ebp-14h]
    int v24; // [esp+64h] [ebp-10h]
    int v25; // [esp+68h] [ebp-Ch]
    int v26; // [esp+6Ch] [ebp-8h]
    int v27; // [esp+70h] [ebp-4h]

    if (a2)
        ++* (_DWORD*)(thisx + 568);
    else
        ++* (_DWORD*)(thisx + 564);
    v25 = *(_DWORD*)a3;
    LOBYTE(v27) = *(_BYTE*)(a3 + 4);
    if (a2)
    {
        if (*(_BYTE*)(thisx + 558))
            --* (_BYTE*)(thisx + 558);
        if (*(int*)(thisx + 560) > 0)
            *(_DWORD*)(thisx + 560) -= v25;
        if (!*(_BYTE*)(thisx + 558) || *(int*)(thisx + 560) <= 0)
        {
            *(_BYTE*)(thisx + 558) = 0;
            *(_DWORD*)(thisx + 560) = 0;
        }
        v24 = 0;
        if (*(char*)(thisx + 608) > 0 && *(char*)(thisx + 232) > 0)
        {
            *(_DWORD*)(thisx + 432) = 77;
            *(_BYTE*)(thisx + 608) = 0;
        }
        if (*(_DWORD*)(a3 + 20) && (unsigned __int8)v27 != 4 && *(_DWORD*)(thisx + 432) == 77)
        {
            v24 = 1;
            if (*(_DWORD*)(thisx + 392)
                || *(int*)(thisx + 444) >= 8
                || !sub_41BA53(thisx, 0x1Au, 0)
                || !*(_DWORD*)(a3 + 32)
                || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a3 + 32)) == (struct Concurrency::ISchedulerProxy*)168)
            {
                if (*(unsigned __int8*)(thisx + 221) != 255)
                {
                    ++* (_BYTE*)(thisx + 221);
                    v23 = sub_417924(thisx, 3, 1) / 8 + 5;
                    if (sub_41BA53(thisx, 0xAu, 0))
                        v23 += 5;
                    if (*(unsigned __int8*)(thisx + 221) > v23)
                    {
                        v24 = 0;
                        *(_BYTE*)(thisx + 474) = 6;
                        *(_BYTE*)(thisx + 475) = 1;
                    }
                }
            }
            else
            {
                *(_DWORD*)(thisx + 432) = 168;
            }
        }
        *(_DWORD*)(a3 + 24) = v24;
        if (v24)
        {
            *(_DWORD*)(thisx + 444) = 8;
            if (*(_DWORD*)(thisx + 392))
            {
                *(int*)(thisx + 372) /= 2;
                *(_DWORD*)(thisx + 340) = 50 * (*(_DWORD*)(a3 + 12) - (*(_DWORD*)(a3 + 12) == 0));
                *(_DWORD*)(thisx + 348) = -60;
                if ((unsigned __int8)v27 == 1 || (unsigned __int8)v27 == 3 || (unsigned __int8)v27 == 5)
                    *(_DWORD*)(thisx + 340) *= 2;
            }
            else
            {
                *(_DWORD*)(thisx + 340) = 100 * (*(_DWORD*)(a3 + 12) - (*(_DWORD*)(a3 + 12) == 0));
                *(_DWORD*)(thisx + 352) = *(_DWORD*)(thisx + 340) / -5;
                if ((unsigned __int8)v27 == 1 || (unsigned __int8)v27 == 3 || (unsigned __int8)v27 == 5)
                    *(_DWORD*)(thisx + 340) *= 3;
            }
            if (!sub_41BA53(thisx, 0xAu, 0) && !sub_41BA53(thisx, 0x1Au, 0))
            {
                v25 /= 4;
                if (!v25)
                    v25 = 1;
                if (*(unsigned __int16*)(thisx + 214) >= v25)
                    *(_WORD*)(thisx + 214) -= v25;
                else
                    *(_WORD*)(thisx + 214) = 0;
            }
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A28, -1, 100, 100, 0);
        LABEL_248:
            if (*(_DWORD*)(thisx + 164))
                sub_41F0CA((_DWORD*)(thisx + 8), *(_DWORD*)(a3 + 32));
            goto LABEL_352;
        }
        if (*(_DWORD*)(a3 + 48) == 112)
        {
            sub_41EF8A((_WORD*)thisx, v25);
            sub_41F169((_WORD*)thisx, *(unsigned __int16*)(thisx + 242));
        }
        else
        {
            sub_41261C((_WORD*)thisx, v25, *(_DWORD*)(a3 + 32), 1);
            if (!*(_BYTE*)(thisx + 558) && !*(_DWORD*)(thisx + 560))
            {
                if (v25 >= 3)
                    v4 = v25 + *(_DWORD*)(thisx + 216);
                else
                    v4 = *(_DWORD*)(thisx + 216) + 3;
                *(_DWORD*)(thisx + 216) = v4;
            }
            if (!*(_BYTE*)(thisx + 220))
                *(_BYTE*)(thisx + 220) = -76;
        }
        *(_DWORD*)(thisx + 268) = 1;
        switch (*(_DWORD*)(thisx + 428))
        {
        case '4':
        case '5':
        case '8':
            if (*(_DWORD*)(thisx + 304) && *(_DWORD*)(thisx + 304) != *(_DWORD*)(a3 + 32))
                sub_417FC1(*(_DWORD*)(thisx + 304));
            sub_417EE0(thisx);
            goto LABEL_98;
        case 'V':
            if (*(_DWORD*)(thisx + 304))
                sub_417C83(*(_DWORD*)(thisx + 304));
        LABEL_68:
            sub_417DCC(thisx);
        LABEL_98:
            if (*(_DWORD*)(thisx + 288))
            {
                if (*(_DWORD*)(thisx + 304))
                    sub_417E42(*(_DWORD*)(thisx + 304));
                sub_417E1D((_DWORD*)thisx);
            }
            else if (*(_DWORD*)(thisx + 292))
            {
                if (*(_DWORD*)(thisx + 304))
                    sub_417E1D(*(_DWORD**)(thisx + 304));
                sub_417E42(thisx);
            }
            else if (*(_DWORD*)(thisx + 304))
            {
                *(_DWORD*)(thisx + 304) = 0;
            }
            sub_423CF2((_BYTE*)thisx, 0, 0, 0, 0, 0, 0);
            v19 = 1;
            v21 = -1;
            LOBYTE(v20) = *(_BYTE*)(a3 + 30);
            if ((unsigned __int8)v20 != 3
                && (*(_DWORD*)(thisx + 428) == 44 || *(_DWORD*)(thisx + 428) == 46 || *(_DWORD*)(thisx + 428) == 78))
            {
                v22 = 46;
            }
            else if ((unsigned __int8)v20 != 3
                && (*(_DWORD*)(thisx + 428) == 45 || *(_DWORD*)(thisx + 428) == 47 || *(_DWORD*)(thisx + 428) == 79))
            {
                v22 = 47;
            }
            else if ((_BYTE)v27 && (unsigned __int8)v27 != 255)
            {
                switch ((unsigned __int8)v27)
                {
                case 1u:
                    v22 = 37;
                    break;
                case 2u:
                    v22 = 34;
                    break;
                case 3u:
                    v22 = 36;
                    break;
                case 4u:
                    v22 = 17;
                    break;
                case 5u:
                    v22 = 35;
                    break;
                case 6u:
                    v22 = 18;
                    break;
                case 7u:
                    v22 = 19;
                    break;
                case 8u:
                    v22 = 20;
                    break;
                case 9u:
                    v22 = 21;
                    break;
                case 0xAu:
                    v22 = 22;
                    break;
                case 0xBu:
                    v22 = 39;
                    break;
                case 0xCu:
                    v22 = 30;
                    *(_DWORD*)(thisx + 424) = *(_DWORD*)(thisx + 424) == 0;
                    *(_DWORD*)(a3 + 12) = *(_DWORD*)(a3 + 12) == 0;
                    break;
                case 0xDu:
                    v22 = 33;
                    break;
                case 0xEu:
                    v22 = 23;
                    break;
                case 0xFu:
                    v22 = 20;
                    break;
                case 0x10u:
                    v22 = 21;
                    break;
                case 0x11u:
                    v22 = 40;
                    break;
                }
            }
            else
            {
                if (*(_DWORD*)(thisx + 432) == 76 && !*(_DWORD*)(thisx + 444))
                    v19 = 0;
                if (*(int*)(thisx + 216) <= 30)
                {
                    if (*(_DWORD*)(thisx + 392))
                    {
                        if (*(int*)(thisx + 216) <= 20)
                        {
                            v22 = 16;
                        }
                        else
                        {
                            v22 = 34;
                            v21 = 5;
                        }
                    }
                    else if (*(int*)(thisx + 216) > 26 || *(_DWORD*)(thisx + 428) == 135 || *(_DWORD*)(thisx + 428) == 89)
                    {
                        v21 = 5;
                        v22 = 34;
                    }
                    else if (*(int*)(thisx + 216) <= 12)
                    {
                        v22 = 14;
                    }
                    else
                    {
                        v22 = 15;
                    }
                }
                else
                {
                    v22 = 36;
                }
            }
            if (*(_BYTE*)(thisx + 558) || *(int*)(thisx + 560) > 0)
                v19 = 0;
            if ((unsigned __int8)v27 == 12)
            {
                v19 = 1;
            }
            else if (*(_DWORD*)(thisx + 428) == 138
                || *(_DWORD*)(thisx + 428) == 136
                || *(_DWORD*)(thisx + 428) == 137
                || *(_DWORD*)(thisx + 428) == 55
                || *(_DWORD*)(thisx + 428) == 61
                || *(_DWORD*)(thisx + 428) == 78
                || *(_DWORD*)(thisx + 428) == 79)
            {
                v19 = 0;
            }
            else if (*(int*)(thisx + 428) > 31
                && *(int*)(thisx + 428) < 43
                && (!(_BYTE)v20 && *(_DWORD*)(thisx + 428) >= v22
                    || (unsigned __int8)v20 == 1 && *(_DWORD*)(thisx + 428) > v22
                    || (unsigned __int8)v20 == 3))
            {
                v19 = 0;
            }
            if (*(_DWORD*)(a3 + 48) != 83)
            {
                v22 = *(_DWORD*)(a3 + 48);
                v19 = 1;
                if (*(_DWORD*)(a3 + 48) == 112)
                {
                    *(_DWORD*)(thisx + 304) = *(_DWORD*)(a3 + 32);
                    *(_DWORD*)(thisx + 440) = (unsigned __int8)sub_425EF0(*(_BYTE**)(a3 + 32));
                }
            }
            if (v19)
            {
                *(_DWORD*)(thisx + 432) = v22;
                if (*(int*)(thisx + 432) > 32 && *(int*)(thisx + 432) < 41)
                {
                    v18 = *(_DWORD*)(a3 + 8);
                    if (*(__int16*)(thisx + 246) < v18)
                        *(_WORD*)(thisx + 246) = v18;
                }
                if (*(_DWORD*)(thisx + 432) == 46 || *(_DWORD*)(thisx + 432) == 47)
                {
                    v17 = *(_DWORD*)(a3 + 36);
                    if (v17 == 132 || v17 == 133)
                    {
                        sub_41F1A3((unsigned __int8*)thisx, 18);
                    }
                    else if (v17 == 148)
                    {
                        sub_41F1A3((unsigned __int8*)thisx, 8);
                    }
                }
                *(_DWORD*)(thisx + 436) = *(_DWORD*)(a3 + 12);
                if (*(_DWORD*)(thisx + 432) == 38
                    || *(_DWORD*)(thisx + 432) == 17
                    || *(_DWORD*)(thisx + 432) == 18
                    || *(_DWORD*)(thisx + 432) == 19
                    || *(_DWORD*)(thisx + 432) == 20
                    || *(_DWORD*)(thisx + 432) == 21
                    || *(_DWORD*)(thisx + 432) == 22
                    || *(_DWORD*)(thisx + 432) == 23
                    || *(_DWORD*)(thisx + 432) == 24
                    || *(_DWORD*)(thisx + 432) == 25)
                {
                    sub_4810C0(v12);
                    sub_424B7E(*(_DWORD*)(thisx + 432), (int)v12);
                    v15 = 11;
                    if (!*(_DWORD*)(a3 + 12))
                        v16 = -v16;
                    if (*(char*)(a3 + 17) >= 0)
                    {
                        v13 = *(_BYTE*)(a3 + 16);
                        v14 = *(char*)(a3 + 17);
                    }
                    sub_42455B(thisx, v12);
                }
                *(_DWORD*)(thisx + 444) = 0;
                *(_DWORD*)(thisx + 396) = 0;
                *(_DWORD*)(thisx + 404) = 0;
            }
            if (!*(_BYTE*)(thisx + 558) && !*(_DWORD*)(thisx + 560))
            {
                if (*(_DWORD*)(thisx + 480) && *(_DWORD*)(thisx + 432) != 14)
                    sub_41F6DE((_DWORD*)thisx);
                if (*(_DWORD*)(thisx + 428) == 94)
                    sub_464C06((char*)unk_4B9B10, 2, thisx);
            }
            if (*(_DWORD*)(thisx + 432) != 38
                && *(_DWORD*)(thisx + 432) != 17
                && *(_DWORD*)(thisx + 432) != 18
                && *(_DWORD*)(thisx + 432) != 19
                && *(_DWORD*)(thisx + 432) != 20
                && *(_DWORD*)(thisx + 432) != 21
                && *(_DWORD*)(thisx + 432) != 22
                && *(_DWORD*)(thisx + 432) != 23
                && *(_DWORD*)(thisx + 432) != 24
                && *(_DWORD*)(thisx + 432) != 25)
            {
                if (*(_BYTE*)(a3 + 16))
                {
                    sub_4747D2((int*)unk_4B9B10, *(char*)(a3 + 16), *(char*)(a3 + 17));
                }
                else
                {
                    if (*(char*)(a3 + 17) != -1)
                        v21 = *(_BYTE*)(a3 + 17);
                    if (v21 == -1)
                    {
                        if ((unsigned __int8)v27 == 1)
                            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A10, -1, 100, 100, 0);
                        else
                            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A0C, -1, 100, 100, 0);
                    }
                    else
                    {
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[v21], -1, 100, 100, 0);
                    }
                }
            }
            goto LABEL_248;
        case 'W':
            if (*(_DWORD*)(thisx + 304))
                sub_417DCC(*(_DWORD*)(thisx + 304));
            break;
        default:
            switch (*(_DWORD*)(thisx + 428))
            {
            case 'R':
                if (*(_DWORD*)(thisx + 312))
                    sub_421051(*(_DWORD**)(thisx + 312));
                sub_421051((_DWORD*)thisx);
                goto LABEL_98;
            case '6':
            case '7':
                if (*(_DWORD*)(thisx + 304))
                    sub_417EE0(*(_DWORD*)(thisx + 304));
                sub_417FC1(thisx);
                goto LABEL_98;
            case '9':
            case ':':
                if (*(_DWORD*)(thisx + 304))
                    sub_417C83(*(_DWORD*)(thisx + 304));
                goto LABEL_68;
            }
            if (*(_DWORD*)(thisx + 428) != 59 && *(_DWORD*)(thisx + 428) != 60)
            {
                if (*(_DWORD*)(thisx + 428) == 69 || *(_DWORD*)(thisx + 428) == 70 || *(_DWORD*)(thisx + 428) == 139)
                {
                    if (*(_DWORD*)(thisx + 304))
                        sub_417EAD(*(_DWORD**)(thisx + 304));
                    sub_417E88((_DWORD*)thisx);
                }
                goto LABEL_98;
            }
            if (*(_DWORD*)(thisx + 304))
                sub_417DCC(*(_DWORD*)(thisx + 304));
            break;
        }
        sub_417C83(thisx);
        goto LABEL_98;
    }
    if (a4)
    {
        *(_BYTE*)(thisx + *(unsigned __int8*)(a3 + 40) + 461) = 10;
    }
    else
    {
        *(_BYTE*)(thisx + *(unsigned __int8*)(a3 + 40) + 453) = *(_BYTE*)(thisx + 452);
        if (!*(_DWORD*)(thisx + 480)
            && !*(_DWORD*)(thisx + 392)
            && !*(_BYTE*)(thisx + 272)
            && !*(_BYTE*)(thisx + 248)
            && (*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) > 0 || !*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) < 0))
        {
            *(_BYTE*)(thisx + 272) = 1;
            *(_DWORD*)(thisx + 304) = *(_DWORD*)(a3 + 44);
        }
        if (*(_DWORD*)(thisx + 428) == 135)
        {
            v5 = rand();
            sub_41261C((_WORD*)thisx, v5 % 10 + 1, 0, 1);
            *(_DWORD*)(thisx + 432) = 34;
            *(_DWORD*)(thisx + 436) = *(_DWORD*)(a3 + 12) == 0;
            *(_DWORD*)(thisx + 444) = 0;
        }
        else if (!*(_DWORD*)(thisx + 268))
        {
            if (*(_BYTE*)(thisx + 195) == 3 && *(_DWORD*)(thisx + 428) == 125 && !*(_DWORD*)(thisx + 436))
            {
                *(_DWORD*)(thisx + 436) = *(_DWORD*)(thisx + 444);
                *(int*)(thisx + 372) /= -2;
                *(_DWORD*)(thisx + 348) = -300;
            }
            if (*(_DWORD*)(thisx + 428) != 146 || *(_DWORD*)(thisx + 436))
            {
                if (*(_DWORD*)(thisx + 428) != 147 || *(_DWORD*)(thisx + 436))
                {
                    if (*(_DWORD*)(thisx + 428) == 129
                        && (!*(_DWORD*)(thisx + 164) && (*(_BYTE*)(thisx + 224) || *(char*)(thisx + 225) < 0)
                            || *(_DWORD*)(thisx + 164) && !(rand() % 2))
                        && sub_41BA53(thisx, 6u, 0))
                    {
                        *(_DWORD*)(thisx + 436) = 1;
                        *(_DWORD*)(thisx + 432) = 149;
                        *(_DWORD*)(thisx + 372) = 200 * (*(_DWORD*)(thisx + 424) - (*(_DWORD*)(thisx + 424) == 0));
                        *(_DWORD*)(thisx + 376) = 0;
                        *(_DWORD*)(thisx + 360) = 20;
                        if ((!*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) <= 0)
                            && (*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) >= 0))
                        {
                            if (*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) < 0
                                || !*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) > 0)
                            {
                                *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372);
                                *(_DWORD*)(thisx + 348) = -400;
                            }
                        }
                        else
                        {
                            *(_DWORD*)(thisx + 348) = -400;
                        }
                        if (*(char*)(thisx + 225) < 0)
                        {
                            *(int*)(thisx + 372) /= 2;
                            *(_DWORD*)(thisx + 348) = -400;
                        }
                    }
                    else if (*(_DWORD*)(thisx + 428) != 97 || *(_DWORD*)(a3 + 48) == 83)
                    {
                        if (*(_DWORD*)(thisx + 428) != 130
                            || *(_DWORD*)(thisx + 268)
                            || (*(_DWORD*)(thisx + 164)
                                || (!*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) <= 0)
                                && (*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) >= 0))
                            && (!*(_DWORD*)(thisx + 164) || rand() % 2)
                            || !sub_41BA53(thisx, 0x29u, 0))
                        {
                            if (*(_DWORD*)(thisx + 428) == 84)
                            {
                                if (*(_DWORD*)(thisx + 392))
                                    *(_DWORD*)(thisx + 432) = 51;
                                else
                                    *(_DWORD*)(thisx + 432) = 13;
                            }
                            else if (*(_DWORD*)(thisx + 428) == 85 && *(_DWORD*)(thisx + 320))
                            {
                                *(_DWORD*)(thisx + 312) = sub_466127((char*)unk_4B9B10, (_BYTE*)thisx, thisx + 453);
                            }
                            else if (*(_DWORD*)(thisx + 428) == 206 && *(int*)(thisx + 444) < 10)
                            {
                                *(_DWORD*)(thisx + 432) = 201;
                            }
                        }
                        else
                        {
                            v8 = 1;
                            SchedulerProxy = Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a3 + 44));
                            if (SchedulerProxy == (struct Concurrency::ISchedulerProxy*)77
                                || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)153
                                || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)113
                                || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)114)
                            {
                                v8 = 0;
                            }
                            v10 = sub_425F30(*(_DWORD**)(a3 + 44));
                            if (v10 == 77 || v10 == 153 || v10 == 113 || v10 == 114)
                                v8 = 0;
                            if (sub_4211AC(*(char**)(a3 + 44))
                                && !(unsigned __int8)sub_425EB0(*(char**)(a3 + 44))
                                && sub_425E90(*(unsigned char**)(a3 + 44))
                                && v8)
                            {
                                *(_DWORD*)(thisx + 432) = 99;
                                *(_DWORD*)(thisx + 304) = *(_DWORD*)(a3 + 44);
                                *(_DWORD*)(thisx + 280) = 1;
                                *(_BYTE*)(a3 + 28) = 0;
                            }
                        }
                    }
                    else
                    {
                        if (*(_DWORD*)(a3 + 12) != *(_DWORD*)(thisx + 424))
                            *(_DWORD*)(thisx + 424) = *(_DWORD*)(thisx + 424) == 0;
                        *(_DWORD*)(thisx + 432) = 98;
                        *(_DWORD*)(thisx + 304) = *(_DWORD*)(a3 + 44);
                        for (i = 0; i < 8; ++i)
                            *(_BYTE*)(i + thisx + 453) = -1;
                    }
                }
                else
                {
                    *(_DWORD*)(thisx + 436) = 1;
                    *(int*)(thisx + 372) /= 2;
                    *(_DWORD*)(thisx + 344) = 0;
                    *(_DWORD*)(thisx + 360) = 20;
                    if ((!*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) <= 0)
                        && (*(_DWORD*)(thisx + 424) || *(char*)(thisx + 224) >= 0))
                    {
                        if (*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) < 0
                            || !*(_DWORD*)(thisx + 424) && *(char*)(thisx + 224) > 0)
                        {
                            *(_DWORD*)(thisx + 372) = -*(_DWORD*)(thisx + 372);
                            *(_DWORD*)(thisx + 376) = 0;
                            *(_DWORD*)(thisx + 348) = -400;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 376) = 0;
                        *(_DWORD*)(thisx + 348) = -400;
                    }
                    if (*(char*)(thisx + 225) < 0)
                    {
                        *(int*)(thisx + 372) /= 2;
                        *(_DWORD*)(thisx + 376) = 0;
                        *(_DWORD*)(thisx + 348) = -500;
                    }
                }
            }
            else
            {
                *(_DWORD*)(thisx + 436) = 1;
                *(int*)(thisx + 372) /= 2;
            }
        }
    }
LABEL_352:
    v26 = 0;
    if (a2)
    {
        result = sub_425E30(thisx);
        v26 = result;
        if (*(_DWORD*)(a3 + 32))
        {
            result = (unsigned __int8)sub_425E70(*(char**)(a3 + 32));
            if (result == 1)
                v26 = 1;
        }
    }
    else
    {
        if (*(_DWORD*)(a3 + 44))
            v26 = sub_425E30(*(_DWORD*)(a3 + 44));
        result = *(unsigned __int8*)(thisx + 188);
        if (result == 1)
            LOBYTE(v27) = -1;
    }
    if (!a2 && (result = thisx, *(_DWORD*)(thisx + 428) == 206) && *(int*)(thisx + 444) < 10
        || a2
        && *(_DWORD*)(a3 + 32)
        && (result = (int)Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a3 + 32)),
            result == 206)
        && (result = sub_425ED0(*(_DWORD**)(a3 + 32)), result < 10))
    {
        *(_BYTE*)(thisx + 474) = 10;
        result = a3;
        *(_BYTE*)(a3 + 28) = 10;
    }
    if (v26 || unk_4B99C9 && (unsigned __int8)v27 != 255)
    {
        if (v26)
        {
            result = thisx;
            if (*(_BYTE*)(thisx + 188) == 1 && a2)
            {
                if ((unsigned __int8)v27 == 255)
                {
                    result = thisx;
                    *(_BYTE*)(thisx + 474) = 7;
                }
                else
                {
                    *(_BYTE*)(thisx + 474) = 11;
                }
            }
            else
            {
                *(_BYTE*)(thisx + 474) = 7;
            }
        }
        else
        {
            result = thisx;
            *(_BYTE*)(thisx + 474) = *(_BYTE*)(a3 + 28);
        }
        if (a2)
        {
            result = thisx;
            *(_BYTE*)(thisx + 475) = 1;
        }
        else if (!*(_DWORD*)(thisx + 268))
        {
            *(_BYTE*)(thisx + 475) = 0;
        }
    }
    return result;
}