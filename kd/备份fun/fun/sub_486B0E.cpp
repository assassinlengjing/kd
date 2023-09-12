#include "sub.h" 
int sub_486B0E(int thisx, LPCSTR lpFileName)
{
    void* v2; // esp
    unsigned __int16 Group; // ax
    char v5; // al
    _DWORD* v6; // [esp+Ch] [ebp-2790h]
    int v7; // [esp+10h] [ebp-278Ch]
    _DWORD* v8; // [esp+14h] [ebp-2788h]
    _DWORD* v9; // [esp+18h] [ebp-2784h]
    _DWORD* v11; // [esp+34h] [ebp-2768h]
    _DWORD* v12; // [esp+3Ch] [ebp-2760h]
    _DWORD* v13; // [esp+48h] [ebp-2754h]
    _DWORD* Block; // [esp+54h] [ebp-2748h]
    int v15; // [esp+60h] [ebp-273Ch]
    int v16; // [esp+64h] [ebp-2738h]
    int v17; // [esp+68h] [ebp-2734h]
    int i2; // [esp+6Ch] [ebp-2730h]
    char v19; // [esp+70h] [ebp-272Ch]
    char v20; // [esp+74h] [ebp-2728h]
    int i3; // [esp+78h] [ebp-2724h]
    char v22; // [esp+7Ch] [ebp-2720h]
    char v23; // [esp+80h] [ebp-271Ch]
    char v24; // [esp+84h] [ebp-2718h]
    int v25; // [esp+8Ch] [ebp-2710h]
    int v26; // [esp+90h] [ebp-270Ch]
    int v27; // [esp+94h] [ebp-2708h]
    char v28; // [esp+98h] [ebp-2704h]
    int v29; // [esp+9Ch] [ebp-2700h]
    int v30; // [esp+A0h] [ebp-26FCh]
    int v31; // [esp+A4h] [ebp-26F8h]
    int v32; // [esp+A8h] [ebp-26F4h]
    int nn; // [esp+ACh] [ebp-26F0h]
    char v34; // [esp+B0h] [ebp-26ECh]
    int v35; // [esp+B4h] [ebp-26E8h]
    int mm; // [esp+B8h] [ebp-26E4h]
    int v37; // [esp+BCh] [ebp-26E0h]
    __int16 v38; // [esp+C4h] [ebp-26D8h]
    __int16 v39; // [esp+C4h] [ebp-26D8h]
    __int16 v40; // [esp+C4h] [ebp-26D8h]
    _WORD* v41; // [esp+CCh] [ebp-26D0h]
    unsigned __int8 v42; // [esp+D0h] [ebp-26CCh]
    int v43; // [esp+D4h] [ebp-26C8h]
    struct Concurrency::details::SchedulingNode* v44; // [esp+D8h] [ebp-26C4h]
    int v45; // [esp+DCh] [ebp-26C0h]
    int jj; // [esp+E0h] [ebp-26BCh]
    int v47; // [esp+E4h] [ebp-26B8h]
    int v48; // [esp+E8h] [ebp-26B4h]
    int ii; // [esp+ECh] [ebp-26B0h]
    int v50; // [esp+F0h] [ebp-26ACh]
    int i; // [esp+F8h] [ebp-26A4h]
    int v52; // [esp+104h] [ebp-2698h]
    int v53; // [esp+108h] [ebp-2694h]
    int j; // [esp+10Ch] [ebp-2690h]
    _BYTE* v55; // [esp+110h] [ebp-268Ch]
    CHAR v56[260]; // [esp+114h] [ebp-2688h] BYREF
    int k; // [esp+218h] [ebp-2584h]
    char v58; // [esp+21Ch] [ebp-2580h]
    char v59; // [esp+220h] [ebp-257Ch]
    CHAR v60[260]; // [esp+224h] [ebp-2578h] BYREF
    int v61[15]; // [esp+328h] [ebp-2474h] BYREF
    char v62[1024]; // [esp+364h] [ebp-2438h] BYREF
    void* v63; // [esp+764h] [ebp-2038h]
    void* v64[339]; // [esp+768h] [ebp-2034h] BYREF
    _DWORD* v65; // [esp+CB4h] [ebp-1AE8h]
    int v66[15]; // [esp+CB8h] [ebp-1AE4h] BYREF
    CHAR v67[260]; // [esp+CF4h] [ebp-1AA8h] BYREF
    CHAR FileName[260]; // [esp+DF8h] [ebp-19A4h] BYREF
    CHAR v69[260]; // [esp+EFCh] [ebp-18A0h] BYREF
    int m; // [esp+1000h] [ebp-179Ch]
    char v71; // [esp+1004h] [ebp-1798h]
    char v72; // [esp+1008h] [ebp-1794h]
    char v73; // [esp+100Ch] [ebp-1790h]
    CHAR String2[260]; // [esp+1010h] [ebp-178Ch] BYREF
    int v75; // [esp+1114h] [ebp-1688h]
    int v76; // [esp+1118h] [ebp-1684h]
    int n; // [esp+111Ch] [ebp-1680h]
    int v78[15]; // [esp+1120h] [ebp-167Ch] BYREF
    int v79; // [esp+115Ch] [ebp-1640h]
    int v80[4]; // [esp+1160h] [ebp-163Ch] BYREF
    int v81; // [esp+1170h] [ebp-162Ch] BYREF
    int v82[1280]; // [esp+1174h] [ebp-1628h] BYREF
    int kk; // [esp+2574h] [ebp-228h]
    int v84; // [esp+2578h] [ebp-224h]
    int i1; // [esp+257Ch] [ebp-220h]
    CHAR v86[260]; // [esp+2580h] [ebp-21Ch] BYREF
    CHAR String1; // [esp+2684h] [ebp-118h] BYREF
    char String[255]; // [esp+2685h] [ebp-117h] BYREF
    int v89; // [esp+2784h] [ebp-18h]
    int v90; // [esp+2788h] [ebp-14h]
    int v91; // [esp+278Ch] [ebp-10h]
    int v92; // [esp+2798h] [ebp-4h]

    v2 = alloca(10128);
    sub_482BF0(v80);
    v92 = 0;
    if (!sub_482C74((int)v80, lpFileName))
    {
        sub_455541((int)byte_4B9B10, 0);
        v92 = -1;
        sub_482C2F(v80);
        return 0;
    }
    String1 = 0;
    LOBYTE(v89) = 0;
    *(_DWORD*)(thisx + 304) = -1;
    while (sub_482D44(v80, &String1))
    {
        if (lstrcmpiA(&String1, aInit))
        {
            if (!lstrcmpiA(&String1, aInitend))
                break;
            if ((unsigned __int8)v89 == 1)
            {
                if (lstrcmpiA(&String1, aLoadbmp))
                {
                    if (lstrcmpiA(&String1, aEntrypat))
                    {
                        if (lstrcmpiA(&String1, aLoadchargraphi))
                        {
                            if (lstrcmpiA(&String1, aLoadcgtp))
                            {
                                if (lstrcmpiA(&String1, aStartpos))
                                {
                                    if (lstrcmpiA(&String1, aStartline))
                                    {
                                        if (lstrcmpiA(&String1, aLoadbackbmp))
                                        {
                                            if (lstrcmpiA(&String1, aNextdemofilena))
                                            {
                                                if (lstrcmpiA(&String1, aCopypalettes))
                                                {
                                                    if (!lstrcmpiA(&String1, aBgmfilename))
                                                        sub_482D44(v80, (LPSTR)(thisx + 40));
                                                }
                                                else
                                                {
                                                    v53 = 0;
                                                    v52 = 0;
                                                    for (i = 0; i < 5 && sub_482D44(v80, &String1) && lstrcmpiA(&String1, aN_3); ++i)
                                                    {
                                                        switch (i)
                                                        {
                                                        case 0:
                                                            v53 = sub_48307F(&String1);
                                                            break;
                                                        case 1:
                                                            v52 = sub_48307F(&String1);
                                                            break;
                                                        case 2:
                                                        case 3:
                                                        case 4:
                                                            sub_48307F(&String1);
                                                            break;
                                                        default:
                                                            continue;
                                                        }
                                                    }
                                                    if (i >= 2)
                                                    {
                                                        Group = GetGroup((Concurrency::details::HardwareAffinity*)(8 * v53 + 4952720));
                                                        sub_4A0A7B(8 * v52 + 4952720, Group);
                                                        sub_4A1307(8 * v52 + 4952720, (Concurrency::details::HardwareAffinity*)(8 * v53 + 4952720));
                                                    }
                                                }
                                            }
                                            else if (sub_482D44(v80, &String1))
                                            {
                                                sub_474011((char*)byte_4B9B10, &String1);
                                            }
                                        }
                                        else if (sub_482D44(v80, &String1))
                                        {
                                            sub_48941E((_DWORD*)thisx, &String1);
                                        }
                                    }
                                    else
                                    {
                                        for (j = 0; j != 3; ++j)
                                        {
                                            if (!sub_482D44(v80, &String1))
                                                break;
                                            if (String1 == 110)
                                                break;
                                            *(_DWORD*)(thisx + 4 * j + 316) = atoi(&String1);
                                        }
                                    }
                                }
                                else
                                {
                                    sub_482D44(v80, &String1);
                                    *(_DWORD*)(thisx + 312) = atoi(&String1);
                                }
                            }
                            else
                            {
                                v58 = 0;
                                v59 = 0;
                                for (k = 0; k < 4 && sub_482D44(v80, &String1) && lstrcmpiA(&String1, aN_2); ++k)
                                {
                                    switch (k)
                                    {
                                    case 0:
                                        v58 = sub_48307F(&String1);
                                        break;
                                    case 1:
                                        lstrcpyA(v56, &String1);
                                        break;
                                    case 2:
                                        lstrcpyA(v60, &String1);
                                        break;
                                    case 3:
                                        v59 = sub_48307F(&String1);
                                        break;
                                    default:
                                        continue;
                                    }
                                }
                                if (k >= 3)
                                {
                                    if (v58 < 0 || v58 >= 3)
                                        v58 = 0;
                                    v55 = (_BYTE*)(thisx + 32 * v58 + 512);
                                    sub_4014A3(v55, v60, v56);
                                    if (k >= 4)
                                        sub_489E30(v55, v59);
                                }
                            }
                        }
                        else
                        {
                            v71 = 0;
                            v72 = -1;
                            v73 = 0;
                            for (m = 0; m < 7 && sub_482D44(v80, &String1) && lstrcmpiA(&String1, aN_1); ++m)
                            {
                                switch (m)
                                {
                                case 0:
                                    v71 = sub_48307F(&String1);
                                    break;
                                case 1:
                                    lstrcpyA(FileName, &String1);
                                    break;
                                case 2:
                                    lstrcpyA(v69, &String1);
                                    break;
                                case 3:
                                    lstrcpyA(String2, &String1);
                                    break;
                                case 4:
                                    v73 = sub_48307F(&String1);
                                    break;
                                case 5:
                                    v72 = sub_48307F(&String1);
                                    break;
                                case 6:
                                    lstrcpyA(v67, &String1);
                                    break;
                                default:
                                    continue;
                                }
                            }
                            if (m >= 3)
                            {
                                if (v71 < 0 || v71 >= 3)
                                    v71 = 0;
                                v65 = (_DWORD*)(thisx + 32 * v71 + 512);
                                sub_49DB90(v66);
                                if (v72 >= 0)
                                {
                                    v63 = (void*)(8 * v72 + 4952720);
                                    v66[14] = (int)v63;
                                    sub_4A1450((_DWORD*)v64);
                                    LOBYTE(v92) = 1;
                                    if (sub_4A14C0((short*)v64, FileName))
                                    {
                                        sub_4A1AA5((int)v64, v62);
                                        sub_4A0AE7(v63, (int)v62, 256);
                                    }
                                    LOBYTE(v92) = 0;
                                    sub_4A148B(v64);
                                }
                                sub_401531(v65, FileName, (int)v66);
                                sub_4014A3(v65, String2, v69);
                                if (m >= 5)
                                    sub_489E30((char*)v65, v73);
                                if (m >= 7)
                                {
                                    sub_49DB90(v61);
                                    sub_401568(v65, v67, (int)v61);
                                }
                            }
                        }
                    }
                    else
                    {
                        sub_49DB90(v78);
                        v78[0] = -1;
                        for (n = 0; n < 6 && sub_482D44(v80, &String1) && lstrcmpiA(&String1, aN_0); ++n)
                        {
                            v76 = atoi(&String1);
                            switch (n)
                            {
                            case 0:
                                v78[1] = v76;
                                break;
                            case 1:
                                v78[2] = v76;
                                break;
                            case 2:
                                v78[3] = v76;
                                break;
                            case 3:
                                v78[4] = v76;
                                break;
                            case 4:
                                v78[9] = v76;
                                break;
                            case 5:
                                v78[5] = v76;
                                break;
                            default:
                                continue;
                            }
                        }
                        if (n == 6)
                        {
                            v75 = sub_49D318((int)byte_4BDC60, (int)v78);
                            if (v75 > 0 && *(_DWORD*)(thisx + 304) == -1)
                                *(_DWORD*)(thisx + 304) = v78[0];
                        }
                    }
                }
                else if (sub_482D44(v80, &String1))
                {
                    wsprintfA(v86, "%s", &String1);
                    sub_49B9E0((_DWORD*)byte_4BDC60, v86);
                }
                if (String1 != 110 || String[0])
                    sub_482D44(v80, &String1);
            }
        }
        else
        {
            LOBYTE(v89) = 1;
            sub_482FAA(v80);
        }
    }
    sub_48314A(v80);
    LOBYTE(v89) = 0;
    *(_DWORD*)(thisx + 336) = 0;
    while (sub_482D44(v80, &String1))
    {
        if (lstrcmpiA(&String1, aString))
        {
            if (!lstrcmpiA(&String1, aStringend))
                break;
            if ((unsigned __int8)v89 == 1)
            {
                ++* (_DWORD*)(thisx + 336);
                sub_482FAA(v80);
            }
            else if (!(_BYTE)v89)
            {
                sub_482FAA(v80);
            }
        }
        else
        {
            LOBYTE(v89) = 1;
            sub_482FAA(v80);
        }
    }
    if (*(int*)(thisx + 336) > 0)
    {
        v50 = *(_DWORD*)(thisx + 336);
        Block = (_DWORD*)operator new(8 * v50 + 4);
        LOBYTE(v92) = 2;
        if (Block)
        {
            *Block = v50;
            eh_vector_constructor_iterator(
                Block + 1,
                8u,
                v50,
                NULL, //(void(*)(void*))DNameNode::DNameNode,
                sub_4892EE);
                v9 = Block + 1;
        }
        else
        {
            v9 = 0;
        }
        LOBYTE(v92) = 0;
        *(_DWORD*)(thisx + 332) = (_DWORD)v9;
        if (!*(_DWORD*)(thisx + 332))
            goto LABEL_127;
        sub_48314A(v80);
        while (sub_482D44(v80, &String1))
        {
            if (!lstrcmpiA(&String1, aString_0))
            {
                sub_482FAA(v80);
                break;
            }
            sub_482FAA(v80);
        }
        for (ii = 0; ii < *(_DWORD*)(thisx + 336); ++ii)
        {
            if (!sub_482D44(v80, &String1))
                break;
            v48 = atoi(&String1);
            if (!sub_482D44(v80, &String1))
                break;
            sub_48933F(*(_DWORD*)(thisx + 332) + 8 * ii, v48, &String1);
            sub_482FAA(v80);
        }
    }
    sub_48314A(v80);
    LOBYTE(v89) = 0;
    *(_DWORD*)(thisx + 352) = 0;
    while (sub_482D44(v80, &String1))
    {
        if (lstrcmpiA(&String1, aSound))
        {
            if (!lstrcmpiA(&String1, aSoundend))
                break;
            if ((unsigned __int8)v89 == 1)
            {
                ++* (_DWORD*)(thisx + 352);
                sub_482FAA(v80);
            }
            else if (!(_BYTE)v89)
            {
                sub_482FAA(v80);
            }
        }
        else
        {
            LOBYTE(v89) = 1;
            sub_482FAA(v80);
        }
    }
    if (*(int*)(thisx + 352) > 0)
    {
        v47 = *(_DWORD*)(thisx + 352);
        v13 = (_DWORD*)operator new(12 * v47 + 4);
        LOBYTE(v92) = 3;
        if (v13)
        {
            *v13 = v47;
            eh_vector_constructor_iterator(v13 + 1, 0xCu, v47, sub_48E1B0, sub_48E1C7);
                v8 = v13 + 1;
        }
        else
        {
            v8 = 0;
        }
        LOBYTE(v92) = 0;
        *(_DWORD*)(thisx + 348) = (_DWORD)v8;
        if (!*(_DWORD*)(thisx + 348))
        {
        LABEL_127:
            v92 = -1;
            sub_482C2F(v80);
            return 0;
        }
        sub_48314A(v80);
        while (sub_482D44(v80, &String1))
        {
            if (!lstrcmpiA(&String1, aSound_0))
            {
                sub_482FAA(v80);
                break;
            }
            sub_482FAA(v80);
        }
        for (jj = 0; jj < *(_DWORD*)(thisx + 352); ++jj)
        {
            if (!sub_482D44(v80, &String1))
                break;
            v44 = (struct Concurrency::details::SchedulingNode*)atoi(&String1);
            if (!sub_482D44(v80, &String1))
                break;
            v45 = sub_43FC18((_DWORD*)dword_4BDB28, &String1);
            Concurrency::details::SchedulingRing::SetOwningNode(
                (Concurrency::details::SchedulingRing*)(*(_DWORD*)(thisx + 348) + 12 * jj),
                v44);
            streambuf::unbuffered((streambuf*)(12 * jj + *(_DWORD*)(thisx + 348)), v45);
            sub_482FAA(v80);
        }
    }
    sub_48314A(v80);
    sub_402080((int)v82, 20, 256, (void(*)(int))sub_48A44E);
    v81 = 0;
    v90 = sub_489927((void*)thisx, (int)v80, (int)v82, 256, &v81);
    sub_48314A(v80);
    dword_4CA1D4 = v90;
    if (v90 > 0)
    {
        v43 = dword_4CA1D4;
        v12 = (_DWORD*)operator new(50 * dword_4CA1D4);
        LOBYTE(v92) = 4;
        if (v12)
        {
            sub_402080((int)v12, 50, v43, (void(*)(int))sub_48A54F);
            v7 = (int)v12;
        }
        else
        {
            v7 = 0;
        }
        LOBYTE(v92) = 0;
        dword_4CA1D8 = v7;
    }
    for (kk = 0; kk < dword_4CA1D4; ++kk)
        sub_48A596((char*)(50 * kk + dword_4CA1D8));
    if (dword_4CA1D8)
    {
        LOBYTE(v89) = 0;
        v90 = 0;
        while (sub_482D44(v80, &String1))
        {
            if (lstrcmpiA(&String1, aMove))
            {
                if (!lstrcmpiA(&String1, aMoveend))
                    break;
                if ((unsigned __int8)v89 == 1)
                {
                    while (String1 == 42)
                    {
                        sub_482D44(v80, &String1);
                        while (String1 == 110)
                        {
                            sub_482D44(v80, &String1);
                            ++v90;
                        }
                    }
                    v41 = (_WORD*)(50 * v90 + dword_4CA1D8);
                    *(_BYTE*)v41 = atoi(&String1);
                    v42 = 0;
                    while (sub_482D44(v80, &String1) && String1 != 110)
                    {
                        if (String1 == 42)
                        {
                            v38 = sub_485ED0((int)v82, 256, &String1, v90);
                            sub_48A49F(v41, v42, v38, 0);
                        }
                        else if (String1 == 118)
                        {
                            v39 = atoi(String);
                            sub_48A49F(v41, v42, v39, 1);
                        }
                        else
                        {
                            v40 = atoi(&String1);
                            sub_48A49F(v41, v42, v40, 0);
                        }
                        ++v42;
                    }
                    ++v90;
                }
                else if (!(_BYTE)v89)
                {
                    sub_482FAA(v80);
                }
            }
            else
            {
                LOBYTE(v89) = 1;
                sub_482FAA(v80);
            }
        }
    }
    sub_48314A(v80);
    v79 = 0;
    v91 = 0;
    LOBYTE(v89) = 0;
    while (sub_482D44(v80, &String1))
    {
        if (lstrcmpiA(&String1, aPut))
        {
            if (!lstrcmpiA(&String1, aPutend))
                break;
            if ((unsigned __int8)v89 == 1)
            {
                ++v79;
                if (atoi(&String1) == 2)
                    ++v91;
                sub_482FAA(v80);
            }
            else if (!(_BYTE)v89)
            {
                sub_482FAA(v80);
            }
        }
        else
        {
            LOBYTE(v89) = 1;
            sub_482FAA(v80);
        }
    }
    if (v79 > 0)
    {
        v37 = v79;
        v11 = (_DWORD*)operator new(432 * v79 + 4);
        LOBYTE(v92) = 5;
        if (v11)
        {
            *v11 = v37;
            eh_vector_constructor_iterator(v11 + 1, 0x1B0u, v37, sub_48A3F0, sub_48A43A);
                v6 = v11 + 1;
        }
        else
        {
            v6 = 0;
        }
        LOBYTE(v92) = 0;
        *(_DWORD*)(thisx + 328) = (_DWORD)v6;
        *(_DWORD*)(thisx + 308) = v79;
    }
    sub_455541((int)byte_4B9B10, v91);
    sub_48314A(v80);
    LOBYTE(v89) = 0;
    v84 = 0;
    if (*(_DWORD*)(thisx + 328))
    {
        while (sub_482D44(v80, &String1))
        {
            if (!lstrcmpiA(&String1, aPut_0))
            {
                LOBYTE(v89) = 1;
                sub_482FAA(v80);
                break;
            }
            if (!lstrcmpiA(&String1, aPutend_0))
                break;
            if (!(_BYTE)v89)
                sub_482FAA(v80);
        }
        if ((unsigned __int8)v89 == 1)
        {
            for (mm = 0; mm < v79; ++mm)
            {
                v31 = 0;
                v29 = 0;
                v32 = 0;
                v35 = 0;
                v26 = 0;
                v30 = 0;
                v27 = 0;
                v34 = -1;
                for (nn = 0; nn < 9 && sub_482D44(v80, &String1) && String1 != 110; ++nn)
                {
                    if (String1 == 42)
                        v25 = sub_485ED0((int)v82, 256, &String1, -1);
                    else
                        v25 = atoi(&String1);
                    switch (nn)
                    {
                    case 0:
                        v28 = v25;
                        break;
                    case 1:
                        v31 = v25;
                        break;
                    case 2:
                        v29 = v25;
                        break;
                    case 3:
                        v32 = v25;
                        break;
                    case 4:
                        v35 = v25;
                        break;
                    case 5:
                        v26 = v25;
                        break;
                    case 6:
                        v30 = v25;
                        break;
                    case 7:
                        v27 = v25;
                        break;
                    case 8:
                        v34 = v25;
                        break;
                    default:
                        continue;
                    }
                }
                sub_48A5DA(432 * mm + *(_DWORD*)(thisx + 328), v28, v31, v29, v32, v35, v26, v30, v27, v34);
                if (v28 == 2)
                    sub_455722((int)byte_4B9B10, v84++, mm);
                sub_48A700(432 * mm + *(_DWORD*)(thisx + 328));
                sub_482FAA(v80);
            }
        }
    }
    sub_48314A(v80);
    LOBYTE(v89) = 0;
    for (i1 = 0; i1 < 8; ++i1)
    {
        sub_488E57((char*)thisx + 3 * i1 + 358);
        sub_488E76((int*)thisx + 16 * i1 + 384);
    }
    *(_BYTE*)(thisx + 356) = 0;
    *(_BYTE*)(thisx + 357) = 0;
    while (sub_482D44(v80, &String1))
    {
        if (lstrcmpiA(&String1, aEtcdata))
        {
            if (!lstrcmpiA(&String1, aEtcdataend))
                break;
            if ((_BYTE)v89)
            {
                if ((unsigned __int8)v89 == 1)
                {
                    v5 = atoi(&String1);
                    if (v5)
                    {
                        if (v5 == 1)
                        {
                            v16 = 0;
                            v15 = 0;
                            v17 = 0;
                            v20 = 0;
                            v19 = 0;
                            for (i2 = 0; i2 < 5 && sub_482D44(v80, &String1) && String1 != 110; ++i2)
                            {
                                switch (i2)
                                {
                                case 0:
                                    v16 = atoi(&String1);
                                    break;
                                case 1:
                                    v15 = atoi(&String1);
                                    break;
                                case 2:
                                    v17 = atoi(&String1);
                                    break;
                                case 3:
                                    v20 = atoi(&String1);
                                    break;
                                case 4:
                                    v19 = atoi(&String1);
                                    break;
                                default:
                                    continue;
                                }
                            }
                            if (*(unsigned __int8*)(thisx + 357) < 8u)
                            {
                                *(_DWORD*)(thisx + 16 * *(unsigned __int8*)(thisx + 357) + 384) = v16;
                                *(_DWORD*)(thisx + 16 * *(unsigned __int8*)(thisx + 357) + 388) = v15;
                                *(_DWORD*)(thisx + 16 * *(unsigned __int8*)(thisx + 357) + 392) = v17;
                                *(_BYTE*)(thisx + 16 * *(unsigned __int8*)(thisx + 357) + 397) = v20;
                                *(_BYTE*)(thisx + 16 * (unsigned __int8)(*(_BYTE*)(thisx + 357))++ + 396) = v19;
                                if (String1 != 110)
                                    sub_482FAA(v80);
                            }
                        }
                    }
                    else
                    {
                        v24 = 0;
                        v23 = 0;
                        v22 = 0;
                        for (i3 = 0; i3 < 3 && sub_482D44(v80, &String1) && String1 != 110; ++i3)
                        {
                            if (i3)
                            {
                                if (i3 == 1)
                                {
                                    v23 = atoi(&String1);
                                }
                                else if (i3 == 2)
                                {
                                    v22 = atoi(&String1);
                                }
                            }
                            else
                            {
                                v24 = atoi(&String1);
                            }
                        }
                        if (*(unsigned __int8*)(thisx + 356) < 8u)
                        {
                            *(_BYTE*)(thisx + 3 * *(unsigned __int8*)(thisx + 356) + 358) = v24;
                            *(_BYTE*)(thisx + 3 * *(unsigned __int8*)(thisx + 356) + 359) = v23;
                            *(_BYTE*)(thisx + 3 * (unsigned __int8)(*(_BYTE*)(thisx + 356))++ + 360) = v22;
                            if (String1 != 110)
                                sub_482FAA(v80);
                        }
                    }
                }
            }
            else
            {
                sub_482FAA(v80);
            }
        }
        else
        {
            LOBYTE(v89) = 1;
            sub_482FAA(v80);
        }
    }
    v92 = -1;
    sub_482C2F(v80);
    return 1;
}