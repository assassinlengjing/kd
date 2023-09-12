#include "sub.h" 
__int16 sub_4967E4(int a1, double a2, double st5_0, double a4)
{
    int v4; // eax
    int v5; // esi
    int v6; // esi
    int v7; // esi
    double v8; // st7
    int v9; // esi
    int v10; // esi
    int v11; // esi
    double v12; // st7
    double v13; // st7
    double v14; // st7
    int v15; // eax
    int v17; // eax
    int v18; // ecx
    int v19; // kr34_4
    int v20; // eax
    int v21; // et2
    int v23; // edx
    double v25; // [esp+0h] [ebp-F0h]
    double v26; // [esp+0h] [ebp-F0h]
    double v27; // [esp+8h] [ebp-E8h]
    double v28; // [esp+8h] [ebp-E8h]
    int v29; // [esp+14h] [ebp-DCh]
    int v30; // [esp+18h] [ebp-D8h]
    int v31; // [esp+1Ch] [ebp-D4h]
    int v32; // [esp+20h] [ebp-D0h]
    int v33; // [esp+24h] [ebp-CCh]
    int v34; // [esp+28h] [ebp-C8h]
    int v35; // [esp+2Ch] [ebp-C4h]
    int v36; // [esp+30h] [ebp-C0h]
    int v37; // [esp+34h] [ebp-BCh]
    int v38; // [esp+38h] [ebp-B8h]
    int v39; // [esp+3Ch] [ebp-B4h]
    int v40; // [esp+40h] [ebp-B0h]
    int v41; // [esp+44h] [ebp-ACh]
    int v42; // [esp+48h] [ebp-A8h]
    int v43; // [esp+4Ch] [ebp-A4h]
    int v44; // [esp+50h] [ebp-A0h]
    int v45; // [esp+54h] [ebp-9Ch]
    int v46; // [esp+58h] [ebp-98h]
    int v47; // [esp+5Ch] [ebp-94h]
    int v48; // [esp+60h] [ebp-90h]
    int v49; // [esp+64h] [ebp-8Ch]
    int v50; // [esp+68h] [ebp-88h]
    int j; // [esp+88h] [ebp-68h]
    int v56; // [esp+8Ch] [ebp-64h]
    int v57; // [esp+90h] [ebp-60h]
    int v58; // [esp+94h] [ebp-5Ch]
    int v59; // [esp+98h] [ebp-58h]
    int v60; // [esp+A8h] [ebp-48h]
    int v61; // [esp+B0h] [ebp-40h]
    int v62; // [esp+B4h] [ebp-3Ch]
    int v63; // [esp+B8h] [ebp-38h]
    int v64; // [esp+BCh] [ebp-34h]
    int v65; // [esp+C0h] [ebp-30h]
    int i; // [esp+C4h] [ebp-2Ch]
    int v67; // [esp+C8h] [ebp-28h]
    int v68; // [esp+CCh] [ebp-24h]
    int v69; // [esp+D0h] [ebp-20h]
    double X; // [esp+D4h] [ebp-1Ch]
    double Xa; // [esp+D4h] [ebp-1Ch]
    int v72; // [esp+DCh] [ebp-14h]
    char* v73; // [esp+E0h] [ebp-10h]
    unsigned __int8 v74; // [esp+E4h] [ebp-Ch]
    _BYTE* v75; // [esp+E8h] [ebp-8h]
    int v76; // [esp+ECh] [ebp-4h]

    if (*(_BYTE*)(a1 + 72) != 11 && *(_BYTE*)(a1 + 72) != 13)
        goto LABEL_433;
    if (*(int*)(a1 + 84) > 0)
        --* (_DWORD*)(a1 + 84);
    if (*(_DWORD*)(a1 + 84) || (LOWORD(v4) = a1, *(_DWORD*)(a1 + 12) == 8))
    {
    LABEL_433:
        if (*(_DWORD*)(a1 + 12))
        {
            switch (*(_DWORD*)(a1 + 12))
            {
            case 1:
                *(_BYTE*)(a1 + 22) = 0;
                v75 = (_BYTE*)sub_41C915(*(_DWORD*)(a1 + 56));
                *(_DWORD*)(a1 + 164) = sub_425D70(*(_DWORD**)(a1 + 56));
                v5 = sub_426090(*(_DWORD**)(a1 + 56));
                *(_DWORD*)(a1 + 96) = 100 * sub_4758D0(v75, *(_DWORD*)(a1 + 164)) + v5;
                *(_DWORD*)(a1 + 100) = sub_4260B0(*(_DWORD**)(a1 + 56));
                v6 = sub_4260D0(*(_DWORD**)(a1 + 56));
                *(_DWORD*)(a1 + 104) = 100 * sub_4758F0(v75, 0) + v6;
                v4 = (unsigned __int8)sub_425B70(v75);
                if (v4)
                {
                    v7 = 44 * *(unsigned __int8*)(a1 + 72);
                    LOWORD(v4) = *(_WORD*)&dword_4B7180[4 * (unsigned __int8)sub_425B70(v75) + v7];
                    *(_WORD*)(a1 + 20) = v4;
                }
                break;
            case 2:
            case 3:
                v8 = sub_495368(a1, a2, a4);
                v73 = sub_426210((char*)byte_4B9B10);
                v74 = sub_4868C1(v73, *(_DWORD*)(a1 + 96) / 800, *(_DWORD*)(a1 + 100) / 800);
                ++* (_DWORD*)(a1 + 156);
                switch (*(_DWORD*)(a1 + 8))
                {
                case 0xB4:
                    switch (++ * (_DWORD*)(a1 + 160))
                    {
                    case 0x14:
                        *(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 120);
                        *(_DWORD*)(a1 + 92) = *(_DWORD*)(a1 + 124);
                        *(_DWORD*)(a1 + 144) = -*(_DWORD*)(a1 + 120) / 12;
                        *(_DWORD*)(a1 + 148) = -*(_DWORD*)(a1 + 124) / 12;
                        break;
                    case 0x1E:
                        *(int*)(a1 + 144) /= 10;
                        *(int*)(a1 + 148) /= 10;
                        *(int*)(a1 + 128) /= 2;
                        *(int*)(a1 + 152) /= 4;
                        break;
                    case 0x32:
                        *(_DWORD*)(a1 + 144) = -*(_DWORD*)(a1 + 88) / 10;
                        *(_DWORD*)(a1 + 148) = -*(_DWORD*)(a1 + 92) / 10;
                        *(_DWORD*)(a1 + 152) *= 4;
                        break;
                    case 0x3D:
                        *(_DWORD*)(a1 + 144) = 0;
                        *(_DWORD*)(a1 + 148) = 0;
                        *(_DWORD*)(a1 + 152) = 0;
                        break;
                    }
                    break;
                case 0xB7:
                    if (++ * (_DWORD*)(a1 + 160) == 60)
                    {
                        *(_DWORD*)(a1 + 120) = 0;
                        *(_DWORD*)(a1 + 124) = 0;
                        *(_DWORD*)(a1 + 128) = 0;
                    }
                    else
                    {
                        LOWORD(v4) = a1;
                        if (*(_DWORD*)(a1 + 160) == 80)
                        {
                            if (*(_DWORD*)(a1 + 60))
                            {
                                v72 = 500;
                                v9 = sub_426090(*(_DWORD**)(a1 + 60));
                                v67 = v9 - sub_426470((_DWORD*)a1);
                                v10 = sub_4260B0(*(_DWORD**)(a1 + 60));
                                v69 = v10 - sub_426530((_DWORD*)a1);
                                v11 = (sub_4260D0(*(_DWORD**)(a1 + 60)) - 1500) / 100;
                                v68 = 100
                                    * (v11
                                        - (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy((Concurrency::details::UMSFreeVirtualProcessorRoot*)a1)
                                        / 100);
                                //__asm?????????????????/
                                //{
                                //    fild[ebp + var_28]
                                //    fstp[esp + 0E8h + var_E8]
                                //    fild[ebp + var_20]
                                //    fstp[esp + 0F0h + var_F0]
                                //}
                                //sub_4A3090(v8, a2, v25, v27);
                                //__asm
                                //{
                                //    fstp[ebp + X]
                                //    fild[ebp + var_14]
                                //    fstp[ebp + var_74]
                                //}
                                v12 = cos(X);
                               __asm { fmul[ebp + 74] }
                               //__asm { fmul[ebp + var_74] }
                                *(_DWORD*)(a1 + 120) = _ftol(v12);
                                __asm
                                {
                                    //fild[ebp /+ var_14]
                                   // fstp[ebp + var_7C]
                                }
                                v13 = sin(X);
                               // __asm { fmul[ebp + var_7C] }
                                *(_DWORD*)(a1 + 124) = _ftol(v13);
                                __asm
                                {
                                    //fild[ebp + var_28]
                                   // fstp[esp + 0E8h + var_E8]
                                   // fild[ebp + var_24]
                                   // fstp[esp + 0F0h + var_F0]
                                }
                                sub_4A3090(v13, v26, v28);
 /*                               __asm
                                {
                                    fstp[ebp + X]
                                    fild[ebp + var_14]
                                    fstp[ebp + var_84]
                                }*/
                                v14 = sin(Xa);
                                //__asm { fmul[ebp + var_84] }
                                v4 = _ftol(v14);
                                *(_DWORD*)(a1 + 128) = v4;
                            }
                            else
                            {
                                *(_DWORD*)(a1 + 152) = 30;
                            }
                            return v4;
                        }
                    }
                    break;
                case 0xB9:
                    ++ * (_DWORD*)(a1 + 160);
                    if (*(_DWORD*)(a1 + 56) && !(*(_DWORD*)(a1 + 160) % 2))
                    {
                        *(_DWORD*)(a1 + 120) += (char)sub_485120(*(char**)(a1 + 56));
                        *(_DWORD*)(a1 + 124) += (char)sub_485140(*(char**)(a1 + 56));
                    }
                    break;
                case 0xBD:
                    *(_WORD*)(a1 + 192) += *(_WORD*)(a1 + 88);
                    if (++ * (_DWORD*)(a1 + 160) == 30)
                        *(_DWORD*)(a1 + 128) = 0;
                    break;
                case 0xBE:
                    ++ * (_DWORD*)(a1 + 160);
                    if (*(int*)(a1 + 104) < -24000 && *(_DWORD*)(a1 + 88) == 1)
                    {
                        *(_DWORD*)(a1 + 88) = 2;
                        *(_DWORD*)(a1 + 120) = 0;
                        *(_DWORD*)(a1 + 144) = 0;
                        *(_DWORD*)(a1 + 152) = 0;
                        *(_DWORD*)(a1 + 128) = 0;
                        *(_DWORD*)(a1 + 160) = 0;
                    }
                    if (*(_DWORD*)(a1 + 160) == 40 && *(_DWORD*)(a1 + 88) == 2)
                        *(_DWORD*)(a1 + 128) = 1200;
                    break;
                case 0xBF:
                    if (*(_DWORD*)(a1 + 160) % 6)
                    {
                        if (*(_DWORD*)(a1 + 160) % 6 == 3)
                            *(_DWORD*)(a1 + 128) += 2 * *(_DWORD*)(a1 + 88);
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 128) -= *(_DWORD*)(a1 + 88);
                        *(_DWORD*)(a1 + 88) = 400 * (rand() % 3) + 800;
                        *(_DWORD*)(a1 + 128) -= *(_DWORD*)(a1 + 88);
                    }
                    ++* (_DWORD*)(a1 + 160);
                    break;
                case 0xC0:
                    if (!*(_DWORD*)(a1 + 160))
                        *(_DWORD*)(a1 + 128) = -600;
                    if (*(_DWORD*)(a1 + 160) % 16)
                    {
                        switch (*(_DWORD*)(a1 + 160) % 16)
                        {
                        case 4:
                            if (*(int*)(a1 + 120) <= 0)
                                v50 = (*(_DWORD*)(a1 + 120) >= 0) - 1;
                            else
                                v50 = 1;
                            *(_DWORD*)(a1 + 144) = -10 * v50;
                            break;
                        case 8:
                            *(_DWORD*)(a1 + 152) = -150;
                            break;
                        case 12:
                            if (*(int*)(a1 + 120) <= 0)
                                v49 = (*(_DWORD*)(a1 + 120) >= 0) - 1;
                            else
                                v49 = 1;
                            *(_DWORD*)(a1 + 144) = 10 * v49;
                            break;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 152) = 150;
                    }
                    ++* (_DWORD*)(a1 + 160);
                    break;
                case 0xC1:
                    v15 = *(_DWORD*)(a1 + 160) % 16;
                    if (v15 >= 8)
                        v65 = 2 * (16 - v15);
                    else
                        v65 = 2 * v15;
                    for (i = 0; i < 2; ++i)
                    {
                        *(_WORD*)(a1 + 16 * i + 24) = -1;
                        *(_DWORD*)(a1 + 16 * i + 28) = 0;
                        *(_DWORD*)(a1 + 16 * i + 32) = 0;
                        *(_DWORD*)(a1 + 16 * i + 36) = i * v65 - (i == 0) * v65;
                    }
                    ++* (_DWORD*)(a1 + 160);
                    break;
                case 0xC2:
                    if (!*(_DWORD*)(a1 + 160))
                        *(_DWORD*)(a1 + 124) -= 600;
                    if (*(_DWORD*)(a1 + 160) % 16)
                    {
                        switch (*(_DWORD*)(a1 + 160) % 16)
                        {
                        case 4:
                            if (*(int*)(a1 + 120) <= 0)
                                v48 = (*(_DWORD*)(a1 + 120) >= 0) - 1;
                            else
                                v48 = 1;
                            *(_DWORD*)(a1 + 144) = -10 * v48;
                            break;
                        case 8:
                            *(_DWORD*)(a1 + 148) = -150;
                            break;
                        case 12:
                            if (*(int*)(a1 + 120) <= 0)
                                v47 = (*(_DWORD*)(a1 + 120) >= 0) - 1;
                            else
                                v47 = 1;
                            *(_DWORD*)(a1 + 144) = 10 * v47;
                            break;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 148) = 150;
                    }
                    ++* (_DWORD*)(a1 + 160);
                    break;
                case 0xC3:
                    if (*(_DWORD*)(a1 + 60))
                    {
                        v62 = sub_426090(*(_DWORD**)(a1 + 60));
                        v61 = sub_4260B0(*(_DWORD**)(a1 + 60));
                        if (v62 - *(_DWORD*)(a1 + 96) <= 0)
                            v46 = *(_DWORD*)(a1 + 96) - v62;
                        else
                            v46 = v62 - *(_DWORD*)(a1 + 96);
                        v63 = v46;
                        if (v61 - *(_DWORD*)(a1 + 100) <= 0)
                            v45 = *(_DWORD*)(a1 + 100) - v61;
                        else
                            v45 = v61 - *(_DWORD*)(a1 + 100);
                        v64 = v45;
                        if (v46 >= 10)
                            v63 = 10;
                        if (v45 >= 10)
                            v64 = 10;
                        if (v62 - *(_DWORD*)(a1 + 96) <= 0)
                            v44 = (v62 - *(_DWORD*)(a1 + 96) >= 0) - 1;
                        else
                            v44 = 1;
                        *(_DWORD*)(a1 + 120) = v63 * v44;
                        if (v61 - *(_DWORD*)(a1 + 100) <= 0)
                            v43 = (v61 - *(_DWORD*)(a1 + 100) >= 0) - 1;
                        else
                            v43 = 1;
                        *(_DWORD*)(a1 + 124) = v64 * v43;
                    }
                    break;
                case 0xC4:
                    if (!*(_DWORD*)(a1 + 160))
                    {
                        *(_DWORD*)(a1 + 88) = *(_DWORD*)(a1 + 120) / 5;
                        *(int*)(a1 + 120) /= 2;
                        *(_DWORD*)(a1 + 144) = *(_DWORD*)(a1 + 88);
                        if (*(int*)(a1 + 88) <= 0)
                            v42 = -*(_DWORD*)(a1 + 88);
                        else
                            v42 = *(_DWORD*)(a1 + 88);
                        *(_DWORD*)(a1 + 124) += 8 * v42;
                        *(_DWORD*)(a1 + 160) = 8;
                    }
                    if (*(_DWORD*)(a1 + 160) % 32)
                    {
                        switch (*(_DWORD*)(a1 + 160) % 32)
                        {
                        case 8:
                            if (*(int*)(a1 + 88) <= 0)
                                v41 = -*(_DWORD*)(a1 + 88);
                            else
                                v41 = *(_DWORD*)(a1 + 88);
                            *(_DWORD*)(a1 + 148) = -v41;
                            break;
                        case 16:
                            *(_DWORD*)(a1 + 144) = -*(_DWORD*)(a1 + 88);
                            break;
                        case 24:
                            if (*(int*)(a1 + 88) <= 0)
                                v40 = -*(_DWORD*)(a1 + 88);
                            else
                                v40 = *(_DWORD*)(a1 + 88);
                            *(_DWORD*)(a1 + 148) = v40;
                            break;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 144) = *(_DWORD*)(a1 + 88);
                    }
                    ++* (_DWORD*)(a1 + 160);
                    break;
                case 0xC5:
                    ++ * (_DWORD*)(a1 + 160);
                    if (*(_DWORD*)(a1 + 56))
                    {
                        *(_DWORD*)(a1 + 120) = 30 * (char)sub_485120(*(char**)(a1 + 56)) + *(_DWORD*)(a1 + 88);
                        *(_DWORD*)(a1 + 124) = 30 * (char)sub_485140(*(char**)(a1 + 56)) + *(_DWORD*)(a1 + 92);
                    }
                    break;
                case 0xC6:
                    if (!*(_DWORD*)(a1 + 160))
                    {
                        *(_DWORD*)(a1 + 160) = 4 * (rand() % 6) + 4;
                        *(_DWORD*)(a1 + 120) = 50 * (rand() % 11) - 400;
                        if (*(_DWORD*)(a1 + 164))
                            *(_DWORD*)(a1 + 120) = -*(_DWORD*)(a1 + 120);
                        *(_DWORD*)(a1 + 124) = 25 * (rand() % 11) - 125;
                        *(_DWORD*)(a1 + 128) = 25 * (rand() % 11) - 100;
                        *(_DWORD*)(a1 + 152) = 0;
                        *(_DWORD*)(a1 + 148) = 0;
                        *(_DWORD*)(a1 + 144) = 0;
                        if (!(rand() % 5))
                            *(_DWORD*)(a1 + 144) = 10 * (rand() % 11) - 80;
                        if (!(rand() % 5))
                            *(_DWORD*)(a1 + 148) = rand() % 11 - 5;
                        if (!(rand() % 5))
                            *(_DWORD*)(a1 + 152) = 5 * (rand() % 11) - 20;
                    }
                    --* (_DWORD*)(a1 + 160);
                    break;
                }
                if (*(_BYTE*)(a1 + 72))
                {
                    switch (*(_BYTE*)(a1 + 72))
                    {
                    case 1:
                        LOWORD(v4) = a1;
                        *(_WORD*)(a1 + 20) = 16;
                        break;
                    case 2:
                    case 0xD:
                        if (*(_BYTE*)(a1 + 72) == 2)
                            *(_WORD*)(a1 + 20) = 20;
                        else
                            *(_WORD*)(a1 + 20) = 184;
                        if (!*(_DWORD*)(a1 + 76))
                            *(_DWORD*)(a1 + 156) = 1;
                        if (*(_DWORD*)(a1 + 76) == 1 && *(int*)(a1 + 156) > 160 && !v74)
                        {
                            *(_DWORD*)(a1 + 120) = 95 * *(_DWORD*)(a1 + 120) / 100;
                            *(_DWORD*)(a1 + 124) = 95 * *(_DWORD*)(a1 + 124) / 100;
                        }
                        if (*(_DWORD*)(a1 + 76) == 1
                            && !*(_DWORD*)(a1 + 120)
                            && !*(_DWORD*)(a1 + 124)
                            && !*(_DWORD*)(a1 + 172)
                            && !v74)
                        {
                            *(_DWORD*)(a1 + 76) = 2;
                        }
                        LOWORD(v4) = a1;
                        if (*(_DWORD*)(a1 + 76) == 2)
                        {
                            *(_DWORD*)(a1 + 76) = 3;
                            *(_BYTE*)(a1 + 180) = 0;
                            *(_DWORD*)(a1 + 172) = 1;
                            *(_DWORD*)(a1 + 168) = 0;
                            *(_DWORD*)(a1 + 120) = 0;
                            LOWORD(v4) = a1;
                            *(_DWORD*)(a1 + 128) = -300;
                            *(_DWORD*)(a1 + 152) = 30;
                        }
                        break;
                    case 3:
                        if (*(int*)(a1 + 76) <= 2 || *(int*)(a1 + 76) > 4)
                        {
                            *(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 120) > 0;
                            if (*(int*)(a1 + 120) <= 0)
                                v39 = -*(_DWORD*)(a1 + 120);
                            else
                                v39 = *(_DWORD*)(a1 + 120);
                            _EDX = a1;
                            //__asm
                            //{
                            //    fild    dword ptr[edx + 50h]
                            //    fild[ebp + var_B4]
                            //    fmul    ds : dbl_4AC260
                            //    faddp   st(1), st
                            //}
                            *(_DWORD*)(a1 + 80) = _ftol(v8);
                            if (*(int*)(a1 + 80) >= 4000)
                                *(_DWORD*)(a1 + 80) = 0;
                            *(_WORD*)(a1 + 20) = *(_DWORD*)(a1 + 80) / 1000 + 27;
                        }
                        if (*(_DWORD*)(a1 + 76) == 1 && *(int*)(a1 + 156) > 160 && !v74)
                        {
                            *(_DWORD*)(a1 + 120) = 95 * *(_DWORD*)(a1 + 120) / 100;
                            *(_DWORD*)(a1 + 124) = 95 * *(_DWORD*)(a1 + 124) / 100;
                        }
                        if (*(_DWORD*)(a1 + 76) == 1
                            && !*(_DWORD*)(a1 + 120)
                            && !*(_DWORD*)(a1 + 124)
                            && !*(_DWORD*)(a1 + 172)
                            && !v74)
                        {
                            *(_BYTE*)(a1 + 68) = 0;
                            *(_BYTE*)(a1 + 71) = 0;
                            *(_DWORD*)(a1 + 76) = 2;
                            *(_DWORD*)(a1 + 156) = 160;
                        }
                        if (*(_DWORD*)(a1 + 76) != 2)
                            goto LABEL_223;
                        *(_DWORD*)(a1 + 120) = 0;
                        *(_DWORD*)(a1 + 124) = 0;
                        v60 = 6;
                        if (*(int*)(a1 + 156) < 200)
                        {
                            if (*(int*)(a1 + 156) >= 184)
                                v60 = 4;
                        }
                        else
                        {
                            v60 = 3;
                        }
                        v17 = *(_DWORD*)(a1 + 156) / v60 % 4;
                        *(_WORD*)(a1 + 20) = v17 >= 3 ? 32 : v17 + 31;
                        if (*(int*)(a1 + 156) > 212)
                        {
                            *(_DWORD*)(a1 + 120) = 0;
                            *(_DWORD*)(a1 + 124) = 0;
                            LOWORD(v4) = a1;
                            *(_DWORD*)(a1 + 128) = 0;
                            *(_DWORD*)(a1 + 152) = 0;
                            *(_DWORD*)(a1 + 16) = 0;
                        }
                        else
                        {
                        LABEL_223:
                            LOWORD(v4) = a1;
                            if (*(_DWORD*)(a1 + 76) == 3)
                            {
                                *(_DWORD*)(a1 + 76) = 4;
                                *(_BYTE*)(a1 + 180) = 0;
                                *(_DWORD*)(a1 + 172) = 1;
                                *(_DWORD*)(a1 + 168) = 0;
                                *(_DWORD*)(a1 + 120) = 0;
                                LOWORD(v4) = a1;
                                *(_DWORD*)(a1 + 124) = 0;
                                *(_DWORD*)(a1 + 128) = -300;
                                *(_DWORD*)(a1 + 152) = 30;
                            }
                        }
                        break;
                    case 4:
                        LOWORD(v4) = *(_DWORD*)(a1 + 156) / 2 % 8 + 40;
                        *(_WORD*)(a1 + 20) = v4;
                        if (*(_DWORD*)(a1 + 156) == 40)
                        {
                            LOWORD(v4) = a1;
                            if (*(_DWORD*)(a1 + 8) == 143)
                                *(_DWORD*)(a1 + 152) = 30;
                        }
                        break;
                    case 5:
                        LOWORD(v4) = a1;
                        *(_WORD*)(a1 + 20) = *(_DWORD*)(a1 + 156) / 4 % 3 + 54;
                        break;
                    case 6:
                        *(_WORD*)(a1 + 20) = ((*(_DWORD*)(a1 + 156) - 1) / 4 % 8 + 1) / 2 % 2 + 63;
                        v4 = (*(_DWORD*)(a1 + 156) - 1) % 8;
                        if (!v4)
                        {
                            LOWORD(v4) = a1;
                            *(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 164) == 0;
                        }
                        break;
                    case 7:
                        LOWORD(v4) = a1;
                        *(_WORD*)(a1 + 20) = 68;
                        break;
                    case 8:
                        LOWORD(v4) = a1;
                        *(_WORD*)(a1 + 20) = *(_DWORD*)(a1 + 156) / 8 % 6 + 74;
                        if (!*(_DWORD*)(a1 + 172))
                        {
                            *(_DWORD*)(a1 + 120) = 95 * *(_DWORD*)(a1 + 120) / 100;
                            *(_DWORD*)(a1 + 124) = 95 * *(_DWORD*)(a1 + 124) / 100;
                            LOWORD(v4) = a1;
                            if (*(int*)(a1 + 120) <= 0)
                            {
                                LOWORD(v4) = a1;
                                v38 = -*(_DWORD*)(a1 + 120);
                            }
                            else
                            {
                                v38 = *(_DWORD*)(a1 + 120);
                            }
                            if (v38 <= 50)
                            {
                                if (*(int*)(a1 + 124) <= 0)
                                {
                                    v4 = -*(_DWORD*)(a1 + 124);
                                    v37 = v4;
                                }
                                else
                                {
                                    LOWORD(v4) = a1;
                                    v37 = *(_DWORD*)(a1 + 124);
                                }
                                if (v37 <= 50)
                                {
                                    *(_DWORD*)(a1 + 120) = 0;
                                    *(_DWORD*)(a1 + 124) = 0;
                                    LOWORD(v4) = a1;
                                    *(_DWORD*)(a1 + 16) = 0;
                                }
                            }
                        }
                        break;
                    case 9:
                        *(_WORD*)(a1 + 20) = 92;
                        *(_BYTE*)(a1 + 22) = *(_DWORD*)(a1 + 156) / 10 % 4;
                        LOWORD(v4) = a1;
                        if (!*(_DWORD*)(a1 + 172))
                        {
                            *(_DWORD*)(a1 + 120) = 95 * *(_DWORD*)(a1 + 120) / 100;
                            *(_DWORD*)(a1 + 124) = 95 * *(_DWORD*)(a1 + 124) / 100;
                            LOWORD(v4) = a1;
                            if (*(int*)(a1 + 120) <= 0)
                            {
                                LOWORD(v4) = a1;
                                v36 = -*(_DWORD*)(a1 + 120);
                            }
                            else
                            {
                                v36 = *(_DWORD*)(a1 + 120);
                            }
                            if (v36 <= 50)
                            {
                                if (*(int*)(a1 + 124) <= 0)
                                {
                                    v4 = -*(_DWORD*)(a1 + 124);
                                    v35 = v4;
                                }
                                else
                                {
                                    LOWORD(v4) = a1;
                                    v35 = *(_DWORD*)(a1 + 124);
                                }
                                if (v35 <= 50)
                                {
                                    *(_DWORD*)(a1 + 120) = 0;
                                    *(_DWORD*)(a1 + 124) = 0;
                                    LOWORD(v4) = a1;
                                    *(_DWORD*)(a1 + 16) = 0;
                                }
                            }
                        }
                        break;
                    case 0xA:
                        *(_WORD*)(a1 + 20) = 107;
                        *(_BYTE*)(a1 + 22) = *(_DWORD*)(a1 + 156) / 4 % 4;
                        LOWORD(v4) = a1;
                        if (!*(_DWORD*)(a1 + 172))
                        {
                            *(_DWORD*)(a1 + 120) = 90 * *(_DWORD*)(a1 + 120) / 100;
                            *(_DWORD*)(a1 + 124) = 90 * *(_DWORD*)(a1 + 124) / 100;
                            LOWORD(v4) = a1;
                            if (*(int*)(a1 + 120) <= 0)
                            {
                                LOWORD(v4) = a1;
                                v34 = -*(_DWORD*)(a1 + 120);
                            }
                            else
                            {
                                v34 = *(_DWORD*)(a1 + 120);
                            }
                            if (v34 <= 50)
                            {
                                if (*(int*)(a1 + 124) <= 0)
                                {
                                    v4 = -*(_DWORD*)(a1 + 124);
                                    v33 = v4;
                                }
                                else
                                {
                                    LOWORD(v4) = a1;
                                    v33 = *(_DWORD*)(a1 + 124);
                                }
                                if (v33 <= 50)
                                {
                                    *(_DWORD*)(a1 + 120) = 0;
                                    *(_DWORD*)(a1 + 124) = 0;
                                    LOWORD(v4) = a1;
                                    *(_DWORD*)(a1 + 16) = 0;
                                }
                            }
                        }
                        break;
                    case 0xB:
                        LOWORD(v4) = 6 * (*(_DWORD*)(a1 + 156) / 4 % 4) + 129;
                        *(_WORD*)(a1 + 20) = v4;
                        break;
                    default:
                        v4 = *(unsigned __int8*)(a1 + 72);
                        if (v4 == 12)
                        {
                            if (*(_DWORD*)(a1 + 172))
                                *(_DWORD*)(a1 + 76) = 0;
                            *(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 120) > 0;
                            LOWORD(v4) = a1;
                            if (!*(_DWORD*)(a1 + 76))
                            {
                                if (*(_DWORD*)(a1 + 8) == 173)
                                {
                                    *(_WORD*)(a1 + 20) = 174;
                                }
                                else
                                {
                                    LOWORD(v4) = a1;
                                    if (*(_DWORD*)(a1 + 8) == 184)
                                    {
                                        if (*(int*)(a1 + 156) >= 2)
                                        {
                                            LOWORD(v4) = a1;
                                            if (*(int*)(a1 + 156) >= 4)
                                                *(_WORD*)(a1 + 20) = 175;
                                            else
                                                *(_WORD*)(a1 + 20) = 177;
                                        }
                                        else
                                        {
                                            *(_WORD*)(a1 + 20) = 176;
                                        }
                                    }
                                    else if (*(_DWORD*)(a1 + 8) == 185)
                                    {
                                        LOWORD(v4) = *(_DWORD*)(a1 + 156) / 5 % 2 + 178;
                                        *(_WORD*)(a1 + 20) = v4;
                                    }
                                    else
                                    {
                                        LOWORD(v4) = a1;
                                        switch (*(_DWORD*)(a1 + 8))
                                        {
                                        case 0xBA:
                                            *(_WORD*)(a1 + 20) = 178;
                                            break;
                                        case 0xC1:
                                            LOWORD(v4) = a1;
                                            v18 = *(_DWORD*)(a1 + 160) % 16;
                                            if (v18 >= 2)
                                            {
                                                if (v18 >= 4)
                                                {
                                                    if (v18 >= 14)
                                                    {
                                                        *(_WORD*)(a1 + 20) = 185;
                                                    }
                                                    else
                                                    {
                                                        LOWORD(v4) = a1;
                                                        *(_WORD*)(a1 + 20) = 175;
                                                    }
                                                }
                                                else
                                                {
                                                    *(_WORD*)(a1 + 20) = 185;
                                                }
                                            }
                                            else
                                            {
                                                LOWORD(v4) = *(_DWORD*)(a1 + 156) / 4 % 8 + 165;
                                                *(_WORD*)(a1 + 20) = v4;
                                            }
                                            break;
                                        case 0xC5:
                                            v19 = *(_DWORD*)(a1 + 156);
                                            v4 = v19 / 4 / 3;
                                            v59 = v19 / 4 % 3;
                                            if (v59)
                                            {
                                                if (v59 == 1)
                                                {
                                                    LOWORD(v4) = a1;
                                                    *(_WORD*)(a1 + 20) = 165;
                                                }
                                                else if (v59 == 2)
                                                {
                                                    *(_WORD*)(a1 + 20) = 177;
                                                }
                                            }
                                            else
                                            {
                                                *(_WORD*)(a1 + 20) = 175;
                                            }
                                            break;
                                        case 0xC6:
                                            v4 = *(_DWORD*)(a1 + 156) / 3;
                                            if (*(_DWORD*)(a1 + 156) % 3 == 2)
                                            {
                                                v20 = rand();
                                                v21 = v20 % 6;
                                                v4 = v20 / 6;
                                                v58 = v21;
                                                if (v21)
                                                {
                                                    switch (v58)
                                                    {
                                                    case 1:
                                                        *(_WORD*)(a1 + 20) = 174;
                                                        break;
                                                    case 2:
                                                        LOWORD(v4) = a1;
                                                        *(_WORD*)(a1 + 20) = 175;
                                                        break;
                                                    case 3:
                                                        LOWORD(v4) = *(_DWORD*)(a1 + 156) / 4 % 2 + 176;
                                                        *(_WORD*)(a1 + 20) = v4;
                                                        break;
                                                    case 4:
                                                        LOWORD(v4) = *(_DWORD*)(a1 + 156) / 4 % 2 + 178;
                                                        *(_WORD*)(a1 + 20) = v4;
                                                        break;
                                                    case 5:
                                                        *(_WORD*)(a1 + 20) = 185;
                                                        break;
                                                    }
                                                }
                                                else
                                                {
                                                    LOWORD(v4) = *(_DWORD*)(a1 + 156) / 4 % 8 + 165;
                                                    *(_WORD*)(a1 + 20) = v4;
                                                }
                                            }
                                            break;
                                        default:
                                            LOWORD(v4) = *(_DWORD*)(a1 + 156) / 4 % 8 + 165;
                                            *(_WORD*)(a1 + 20) = v4;
                                            break;
                                        }
                                    }
                                }
                            }
                            if (*(_DWORD*)(a1 + 76) == 1)
                            {
                                if (*(int*)(a1 + 120) <= 0)
                                    v32 = -*(_DWORD*)(a1 + 120);
                                else
                                    v32 = *(_DWORD*)(a1 + 120);
                                _EDX = a1;
                                //__asm
                                //{
                                //    fild    dword ptr[edx + 50h]
                                //    fild[ebp + var_D0]
                                //    fmul    ds : dbl_4AC260
                                //    faddp   st(1), st
                                //}
                                *(_DWORD*)(a1 + 80) = _ftol(v8);
                                if (*(int*)(a1 + 80) >= 4000)
                                    *(_DWORD*)(a1 + 80) = 0;
                                *(_WORD*)(a1 + 20) = *(_DWORD*)(a1 + 80) / 500 + 165;
                                LOWORD(v4) = v74;
                                if (!v74)
                                {
                                    *(_DWORD*)(a1 + 120) = 98 * *(_DWORD*)(a1 + 120) / 100;
                                    *(_DWORD*)(a1 + 124) = 98 * *(_DWORD*)(a1 + 124) / 100;
                                    LOWORD(v4) = a1;
                                    if (!*(_DWORD*)(a1 + 120) && !*(_DWORD*)(a1 + 124) && !*(_DWORD*)(a1 + 172))
                                    {
                                        LOWORD(v4) = a1;
                                        *(_DWORD*)(a1 + 16) = 0;
                                    }
                                }
                            }
                        }
                        break;
                    }
                }
                else
                {
                    *(_WORD*)(a1 + 20) = ((*(_DWORD*)(a1 + 156) - 1) / 4 % 8 + 1) / 2 % 2 + 14;
                    v4 = (*(_DWORD*)(a1 + 156) - 1) % 8;
                    if (!v4)
                    {
                        LOWORD(v4) = a1;
                        *(_DWORD*)(a1 + 164) = *(_DWORD*)(a1 + 164) == 0;
                    }
                }
                break;
            case 4:
                ++ * (_DWORD*)(a1 + 156);
                v56 = sub_426090(*(_DWORD**)(a1 + 60)) - *(_DWORD*)(a1 + 96);
                v57 = sub_4260B0(*(_DWORD**)(a1 + 60)) - *(_DWORD*)(a1 + 100);
                if (*(int*)(a1 + 104) <= -20000)
                {
                    *(_DWORD*)(a1 + 120) = v56 / 4;
                    *(_DWORD*)(a1 + 124) = v57 / 4;
                    *(_DWORD*)(a1 + 96) += *(_DWORD*)(a1 + 120);
                    *(_DWORD*)(a1 + 100) += *(_DWORD*)(a1 + 124);
                }
                *(_DWORD*)(a1 + 104) += *(_DWORD*)(a1 + 128);
                if (*(int*)(a1 + 104) < -20000)
                {
                    *(_DWORD*)(a1 + 128) = 0;
                    *(_DWORD*)(a1 + 104) = -20000;
                }
                LOWORD(v4) = a1;
                if (*(_DWORD*)(a1 + 156) >= *(_DWORD*)(a1 + 76))
                {
                    *(_DWORD*)(a1 + 16) = 2;
                    *(_DWORD*)(a1 + 128) = 1500;
                    *(_DWORD*)(a1 + 152) = 30;
                    LOWORD(v4) = a1;
                    *(_DWORD*)(a1 + 76) = 0;
                    *(_DWORD*)(a1 + 156) = 0;
                }
                break;
            case 5:
                if (!*(_DWORD*)(a1 + 156))
                    *(_DWORD*)(a1 + 76) = rand() % 10 + 25;
                *(_DWORD*)(a1 + 128) += *(_DWORD*)(a1 + 152);
                *(_DWORD*)(a1 + 104) += *(_DWORD*)(a1 + 128);
                *(_DWORD*)(a1 + 172) = 1;
                ++* (_DWORD*)(a1 + 156);
                *(_WORD*)(a1 + 20) = dword_4B719C[11 * *(unsigned __int8*)(a1 + 72)];
                if (*(_DWORD*)(a1 + 56)
                    && (Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)94
                        || Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(a1 + 56)) == (struct Concurrency::ISchedulerProxy*)176))
                {
                    v4 = *(_DWORD*)(a1 + 156);
                    if (v4 >= *(_DWORD*)(a1 + 76))
                    {
                        LOWORD(v4) = a1;
                        if (*(_DWORD*)(a1 + 156) == *(_DWORD*)(a1 + 76))
                        {
                            *(_DWORD*)(a1 + 128) = -70;
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 152) = 5;
                            v4 = (*(_DWORD*)(a1 + 156) - *(_DWORD*)(a1 + 76)) / 30 % 2;
                            if (v4)
                                *(_DWORD*)(a1 + 152) = -5;
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 128) = -150;
                    }
                }
                else
                {
                    LOWORD(v4) = sub_494D01(a1, a1, 2u, *(char**)(a1 + 56), 0);
                }
                break;
            default:
                LOWORD(v4) = a1;
                switch (*(_DWORD*)(a1 + 12))
                {
                case 6:
                    *(_DWORD*)(a1 + 176) = (*(_DWORD*)(a1 + 156))++ / 5 % 2;
                    v23 = rand() % 60 + 100;
                    LOWORD(v4) = a1;
                    if (*(_DWORD*)(a1 + 156) >= v23)
                    {
                        *(_DWORD*)(a1 + 56) = 0;
                        sub_4995EB((_WORD*)a1);
                        *(_BYTE*)(a1 + 72) = sub_477148();
                        *(_DWORD*)(a1 + 152) = 30;
                        *(_BYTE*)(a1 + 180) = 0;
                        *(_DWORD*)(a1 + 176) = 0;
                        *(_DWORD*)(a1 + 172) = 1;
                        *(_DWORD*)(a1 + 156) = 0;
                        *(_DWORD*)(a1 + 76) = 255;
                        *(_DWORD*)(a1 + 84) = -1;
                        *(_BYTE*)(a1 + 22) = 0;
                        *(_DWORD*)(a1 + 16) = 2;
                        *(_DWORD*)(a1 + 116) = 0;
                        *(_DWORD*)(a1 + 112) = 0;
                        *(_DWORD*)(a1 + 108) = 0;
                        *(_DWORD*)(a1 + 140) = 1;
                        *(_DWORD*)(a1 + 136) = 1;
                        *(_DWORD*)(a1 + 132) = 1;
                        *(_DWORD*)(a1 + 120) = 0;
                        *(_DWORD*)(a1 + 144) = 0;
                        *(_DWORD*)(a1 + 124) = 0;
                        *(_DWORD*)(a1 + 148) = 0;
                        *(_DWORD*)(a1 + 128) = 0;
                        if (*(_BYTE*)(a1 + 72))
                        {
                            --* (_BYTE*)(a1 + 72);
                            sub_4654DA((char*)byte_4B9B10, (_DWORD*)(a1 + 96), (_DWORD*)(a1 + 100));
                            *(_DWORD*)(a1 + 104) = -24000;
                            LOWORD(v4) = sub_4950AF(a1);
                        }
                        else
                        {
                            *(_DWORD*)(a1 + 96) = -32000;
                            *(_DWORD*)(a1 + 100) = -24000;
                            LOWORD(v4) = a1;
                            *(_DWORD*)(a1 + 104) = 0;
                            *(_DWORD*)(a1 + 16) = 0;
                        }
                    }
                    break;
                case 7:
                    sub_495368(a1, a2, a4);
                    if (++ * (_DWORD*)(a1 + 156) == 12)
                        *(_BYTE*)(a1 + *(_DWORD*)(a1 + 76) + 181) = 0;
                    *(_DWORD*)(a1 + 168) = 1;
                    if (*(_BYTE*)(a1 + 72) != 10 || *(_DWORD*)(a1 + 172))
                    {
                        if (*(int*)(a1 + 156) > 8 && !*(_DWORD*)(a1 + 172))
                        {
                            *(_DWORD*)(a1 + 120) = *(_BYTE*)(a1 + 72) == 13 ? 95 * *(_DWORD*)(a1 + 120) / 100 : 90 * *(_DWORD*)(a1 + 120) / 100;
                            if (*(_BYTE*)(a1 + 72) != 13
                                && (*(int*)(a1 + 120) <= 0 ? (v30 = -*(_DWORD*)(a1 + 120)) : (v30 = *(_DWORD*)(a1 + 120)),
                                    v30 < 50)
                                || *(_BYTE*)(a1 + 72) == 13
                                && (*(int*)(a1 + 120) <= 0 ? (v29 = -*(_DWORD*)(a1 + 120)) : (v29 = *(_DWORD*)(a1 + 120)),
                                    v29 < 10))
                            {
                                *(_DWORD*)(a1 + 120) = 0;
                                *(_DWORD*)(a1 + 16) = 0;
                            }
                        }
                    }
                    else
                    {
                        *(_DWORD*)(a1 + 120) = 85 * *(_DWORD*)(a1 + 120) / 100;
                        if (*(int*)(a1 + 120) <= 0)
                            v31 = -*(_DWORD*)(a1 + 120);
                        else
                            v31 = *(_DWORD*)(a1 + 120);
                        if (v31 < 50)
                        {
                            *(_DWORD*)(a1 + 120) = 0;
                            *(_DWORD*)(a1 + 16) = 0;
                        }
                    }
                    if (*(_DWORD*)(a1 + 172))
                        *(_DWORD*)(a1 + 152) = 30;
                    LOWORD(v4) = a1;
                    if (*(_BYTE*)(a1 + 72) == 8)
                    {
                        *(_WORD*)(a1 + 20) = 73;
                    }
                    else
                    {
                        LOWORD(v4) = a1;
                        if (*(_BYTE*)(a1 + 72) == 9)
                        {
                            *(_WORD*)(a1 + 20) = 88;
                        }
                        else
                        {
                            LOWORD(v4) = a1;
                            if (*(_BYTE*)(a1 + 72) == 10)
                            {
                                *(_WORD*)(a1 + 20) = 103;
                                LOWORD(v4) = a1;
                                if (!(*(_DWORD*)(a1 + 156) % 4))
                                {
                                    v4 = (*(char*)(a1 + 22) + 1) % 4;
                                    *(_BYTE*)(a1 + 22) = v4;
                                }
                            }
                        }
                    }
                    break;
                case 8:
                    if (*(int*)(a1 + 156) >= 12)
                    {
                        *(_WORD*)(a1 + 20) = 0;
                        *(_DWORD*)(a1 + 176) = 1;
                        *(_DWORD*)(a1 + 168) = 0;
                        *(_DWORD*)(a1 + 96) = -32000;
                        *(_DWORD*)(a1 + 100) = -24000;
                        *(_DWORD*)(a1 + 116) = 0;
                        *(_DWORD*)(a1 + 112) = 0;
                        *(_DWORD*)(a1 + 108) = 0;
                        LOWORD(v4) = a1;
                        *(_DWORD*)(a1 + 16) = 0;
                    }
                    else
                    {
                        if (!*(_DWORD*)(a1 + 156))
                        {
                            *(_DWORD*)(a1 + 56) = 0;
                            if (*(int*)(a1 + 80) < 300)
                                *(_DWORD*)(a1 + 80) = 300;
                            *(_WORD*)(a1 + 192) = (*(_DWORD*)(a1 + 80) - 300) / 10 + *(unsigned __int16*)(a1 + 190) / 8;
                            *(_BYTE*)(a1 + 195) = 16;
                            if (*(_BYTE*)(a1 + 72) == 13)
                                *(_BYTE*)(a1 + 195) += 8;
                            *(_BYTE*)(a1 + 194) = 3;
                            *(_DWORD*)(a1 + 168) = 1;
                            memset((void*)(a1 + 181), 0, 8u);
                            if (*(_BYTE*)(a1 + 72) == 11)
                            {
                                sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9AC4, -1, 100, 100, 0);
                            }
                            else if (*(_BYTE*)(a1 + 72) == 13)
                            {
                                sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A34, -1, 100, 100, 0);
                            }
                        }
                        *(_DWORD*)(a1 + 84) = -1;
                        if (*(int*)(a1 + 156) >= 8)
                        {
                            if (*(int*)(a1 + 156) >= 10)
                                *(_WORD*)(a1 + 20) = 154;
                            else
                                *(_WORD*)(a1 + 20) = 155;
                        }
                        else
                        {
                            *(_WORD*)(a1 + 20) = *(_DWORD*)(a1 + 156) / 2 % 4 + 153;
                        }
                        if (*(_BYTE*)(a1 + 72) == 13)
                        {
                            for (j = 0; j < 2; ++j)
                            {
                                *(_WORD*)(a1 + 16 * j + 24) = *(_DWORD*)(a1 + 156) % 4 + 153;
                                *(_DWORD*)(a1 + 16 * j + 32) = 0;
                                if (*(int*)(a1 + 156) >= 4)
                                {
                                    if (*(int*)(a1 + 156) >= 8)
                                        *(_DWORD*)(a1 + 16 * j + 28) = 24 - 48 * j;
                                    else
                                        *(_DWORD*)(a1 + 16 * j + 28) = 48 * j - 24;
                                    *(_DWORD*)(a1 + 16 * j + 36) = 48 * j - 24;
                                }
                                else
                                {
                                    *(_DWORD*)(a1 + 16 * j + 28) = (j << 6) - 32;
                                    *(_DWORD*)(a1 + 16 * j + 36) = 0;
                                }
                            }
                        }
                        LOWORD(v4) = a1;
                        ++* (_DWORD*)(a1 + 156);
                    }
                    break;
                }
                break;
            }
        }
        else
        {
            *(_DWORD*)(a1 + 128) = 0;
            *(_DWORD*)(a1 + 124) = 0;
            *(_DWORD*)(a1 + 120) = 0;
            *(_DWORD*)(a1 + 152) = 0;
            *(_DWORD*)(a1 + 148) = 0;
            *(_DWORD*)(a1 + 144) = 0;
            *(_DWORD*)(a1 + 168) = 0;
            *(_BYTE*)(a1 + 68) = 0;
            *(_BYTE*)(a1 + 71) = 0;
            LOWORD(v4) = dword_4B719C[11 * *(unsigned __int8*)(a1 + 72)];
            *(_WORD*)(a1 + 20) = v4;
            *(_DWORD*)(a1 + 172) = 0;
            if (*(int*)(a1 + 96) < 0 || (LOWORD(v4) = a1, *(int*)(a1 + 100) < 0))
            {
                ++byte_4B997C;
            }
            else
            {
                v76 = -100 * sub_446497((_DWORD*)byte_4B9B10, *(_DWORD*)(a1 + 96) / 100, *(_DWORD*)(a1 + 100) / 100);
                LOWORD(v4) = v76;
                if (v76 <= *(_DWORD*)(a1 + 104))
                {
                    v4 = sub_4773CC(*(_DWORD*)(a1 + 96) / 800, *(_DWORD*)(a1 + 100) / 800);
                    if (!v4 || (LOWORD(v4) = v76, v76 < *(_DWORD*)(a1 + 104)))
                        ++byte_4B997C;
                }
                else
                {
                    *(_DWORD*)(a1 + 16) = 3;
                    *(_DWORD*)(a1 + 152) = 30;
                }
            }
        }
    }
    else
    {
        if (*(_DWORD*)(a1 + 12) == 1 && *(_DWORD*)(a1 + 56))
            LOWORD(v4) = sub_41F6DE(*(_DWORD**)(a1 + 56));
        *(_DWORD*)(a1 + 16) = 8;
    }
    return v4;
}


