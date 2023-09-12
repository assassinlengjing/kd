#include "sub.h" 
int sub_45E773(int thisx)
{
    int v1; // esi
    int v2; // esi
    int result; // eax
    int v5; // [esp+8h] [ebp-274h]
    char* v6; // [esp+Ch] [ebp-270h]
    int v7; // [esp+10h] [ebp-26Ch]
    int kk; // [esp+14h] [ebp-268h]
    int v9[14]; // [esp+18h] [ebp-264h] BYREF
    int v10; // [esp+50h] [ebp-22Ch]
    char* v11; // [esp+54h] [ebp-228h]
    int v12; // [esp+58h] [ebp-224h]
    int jj; // [esp+5Ch] [ebp-220h]
    int v14[14]; // [esp+60h] [ebp-21Ch] BYREF
    char* v15; // [esp+98h] [ebp-1E4h]
    int v16; // [esp+9Ch] [ebp-1E0h]
    int ii; // [esp+A0h] [ebp-1DCh]
    int v18[14]; // [esp+A4h] [ebp-1D8h] BYREF
    char* v19; // [esp+DCh] [ebp-1A0h]
    int v20; // [esp+E0h] [ebp-19Ch]
    int n; // [esp+E4h] [ebp-198h]
    int v22[14]; // [esp+E8h] [ebp-194h] BYREF
    int v23; // [esp+120h] [ebp-15Ch]
    char* v24; // [esp+124h] [ebp-158h]
    int v25; // [esp+128h] [ebp-154h]
    int m; // [esp+12Ch] [ebp-150h]
    int v27[14]; // [esp+130h] [ebp-14Ch] BYREF
    char* v28; // [esp+168h] [ebp-114h]
    int v29; // [esp+16Ch] [ebp-110h]
    int k; // [esp+170h] [ebp-10Ch]
    int v31[14]; // [esp+174h] [ebp-108h] BYREF
    char* v32; // [esp+1ACh] [ebp-D0h]
    int v33; // [esp+1B0h] [ebp-CCh]
    int j; // [esp+1B4h] [ebp-C8h]
    int v35; // [esp+1B8h] [ebp-C4h] BYREF
    int v36; // [esp+1BCh] [ebp-C0h]
    unsigned int v37; // [esp+1C0h] [ebp-BCh]
    BOOL v38; // [esp+1D0h] [ebp-ACh]
    char* v39; // [esp+1F0h] [ebp-8Ch]
    int v40; // [esp+1F4h] [ebp-88h]
    int i; // [esp+1F8h] [ebp-84h]
    int v42[15]; // [esp+1FCh] [ebp-80h] BYREF
    int v43; // [esp+238h] [ebp-44h]
    int v44; // [esp+23Ch] [ebp-40h]
    int v45; // [esp+240h] [ebp-3Ch]
    int v46[14]; // [esp+244h] [ebp-38h] BYREF

    sub_477F0C(0);
    if (!*(_BYTE*)(thisx + 2516))
    {
        v1 = sub_476D78(0);
        v45 = v1 - sub_476D29(0);
        v2 = sub_476CDA(0);
        v44 = v2 - sub_476C8B(0);
        if (!*(_WORD*)(thisx + 2564))
        {
            if (v45)
            {
                v43 = *(_DWORD*)(thisx + 2528) / 2;
                *(_DWORD*)(thisx + 2528) = (*(_DWORD*)(thisx + 2528) + v45 + 2) % 2 + 2 * v43;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
            else if (v44)
            {
                *(_DWORD*)(thisx + 2528) = (*(_DWORD*)(thisx + 2528) + 2 * v44 + 4) % 4;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
            if (*(_DWORD*)(thisx + 2528) == 2 && !*(_WORD*)(thisx + 2568))
                *(_DWORD*)(thisx + 2528) = 0;
            if (!*(_DWORD*)(thisx + 2528) && !*(_WORD*)(thisx + 2566))
                *(_DWORD*)(thisx + 2528) = 1;
            if (v45 || v44)
                sub_45E15F(thisx, 1);
        }
        if (sub_476DC7(0, 0))
        {
            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
            if (*(_WORD*)(thisx + 2564))
            {
                if (++ * (_WORD*)(thisx + 2564) == 4 && *(_BYTE*)(thisx + 13101) == 1)
                {
                    *(_WORD*)(thisx + 2564) = 0;
                }
                else if (*(_WORD*)(thisx + 2564) == 3
                    && (*(_BYTE*)(thisx + 13101) == 2 || *(_BYTE*)(thisx + 13101) == 3 || *(_BYTE*)(thisx + 13101) == 4))
                {
                    *(_WORD*)(thisx + 2564) = 0;
                }
                sub_45E15F(thisx, 1);
            }
            else if (!*(_WORD*)(thisx + 2566) || *(_DWORD*)(thisx + 2528))
            {
                if (*(_DWORD*)(thisx + 2528) == 1)
                {
                    *(_DWORD*)(thisx + 108) = 14;
                    *(_BYTE*)(thisx + 2562) = 2;
                    *(_BYTE*)(thisx + 2516) = 2;
                    *(_WORD*)(thisx + 2564) = 0;
                }
                else if (*(_WORD*)(thisx + 2568) && *(_DWORD*)(thisx + 2528) == 2)
                {
                    *(_DWORD*)(thisx + 108) = 17;
                    *(_BYTE*)(thisx + 2562) = 1;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
                else if (*(_DWORD*)(thisx + 2528) == 3)
                {
                    *(_DWORD*)(thisx + 108) = 20;
                    *(_BYTE*)(thisx + 2562) = 1;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
            }
            else
            {
                unk_4B99CC = *(_BYTE*)(thisx + 11664);
                unk_4B99CB = 1;
                switch (*(_BYTE*)(thisx + 11690))
                {
                case 0x11:
                    *(_DWORD*)(thisx + 108) = 1;
                    *(_DWORD*)(thisx + 120) = 3;
                    *(_BYTE*)(thisx + 2516) = 2;
                    break;
                case 0x12:
                    sub_462869((_DWORD*)thisx);
                    *(_DWORD*)(thisx + 108) = 11;
                    *(_BYTE*)(thisx + 2516) = 2;
                    break;
                case 0x13:
                    sub_462BA9(thisx, 2);
                    *(_DWORD*)(thisx + 108) = 11;
                    *(_BYTE*)(thisx + 2516) = 2;
                    break;
                case 0x14:
                    sub_462BA9(thisx, 4);
                    *(_DWORD*)(thisx + 108) = 11;
                    *(_BYTE*)(thisx + 2516) = 2;
                    break;
                default:
                    if (*(unsigned __int8*)(thisx + 11690) < 0x11u)
                    {
                        ++* (_BYTE*)(thisx + 11690);
                        sub_461D3E((unsigned char*)thisx);
                        *(_DWORD*)(thisx + 108) = 15;
                        *(_BYTE*)(thisx + 2516) = 2;
                    }
                    break;
                }
            }
        }
    }
    sub_49C15E((int)v46);
    v46[1] = 0;
    v46[2] = 0;
    v46[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v46);
    if (*(_WORD*)(thisx + 2564))
    {
        if (!(unk_4B93B0 / 5u % 2))
            sub_47B91A(156, 232, &unk_4B2E2C, 0, -1);
    }
    else
    {
        sub_47B91A(72 * (*(_DWORD*)(thisx + 2528) % 2) + 86, 16 * (*(_DWORD*)(thisx + 2528) / 2) + 152, asc_4B2E28, 0, -1);
    }
    switch (*(_BYTE*)(thisx + 13100))
    {
    case 1:
        result = sub_49C15E((int)v42);
        for (i = 0; i < 2; ++i)
        {
            result = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * i + 11816));
            if (result < 4)
            {
                v42[1] = 32 * i + 144;
                v42[2] = 112;
                v42[6] = i == 1;
                v42[0] = i + *(_DWORD*)(thisx + 13104);
                v39 = (char*)(152 * (((unsigned int)unk_4B93B0 >> 1) % 0xA > 5) + *(_DWORD*)(thisx + 13112));
                v40 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * i + 11816);
                result = sub_4788FA(v42, v39, *(_DWORD*)(thisx + 13120), v40, 0, 0);
            }
        }
        break;
    case 2:
        result = sub_49C15E((int)&v35);
        for (j = 0; j < 2; ++j)
        {
            result = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * j + 11816));
            if (result < 4)
            {
                v36 = 15 * j + 152;
                v37 = 112;
                v38 = j == 0;
                v35 = j + *(_DWORD*)(thisx + 13104);
                v32 = (char*)(152 * (unk_4B93B0 / 0xAu % 2 + 2) + *(_DWORD*)(thisx + 13112));
                v33 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * j + 11816);
                result = sub_4788FA(&v35, v32, *(_DWORD*)(thisx + 13120), v33, 0, 0);
            }
        }
        for (j = 0; j < 2; ++j)
        {
            if ((unsigned __int8)Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * j + 11816)) < 4u)
            {
                v36 = 168 - 17 * j;
                v37 = 2 * (unk_4B93B0 / 0xAu % 2) + 112;
                v38 = j == 1;
                v35 = j + *(_DWORD*)(thisx + 13104);
                v32 = (char*)(*(_DWORD*)(thisx + 13112) + 608);
                sub_4788FA(&v35, v32, *(_DWORD*)(thisx + 13120), v33, 0, 0);
            }
            result = j + 1;
        }
        break;
    case 3:
        result = sub_49C15E((int)v31);
        for (k = 0; k < 2; ++k)
        {
            if ((unsigned __int8)Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * k + 11816)) < 4u)
            {
                v31[1] = 32 * k + 144;
                v31[2] = 112;
                v31[6] = k == 1;
                v31[0] = k + *(_DWORD*)(thisx + 13104);
                v28 = (char*)(152 * ((((unsigned int)unk_4B93B0 >> 1) % 0xA > 5) + 5) + *(_DWORD*)(thisx + 13112));
                v29 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * k + 11816);
                sub_4788FA(v31, v28, *(_DWORD*)(thisx + 13120), v29, 0, 0);
            }
            result = k + 1;
        }
        break;
    case 4:
        result = sub_49C15E((int)v27);
        for (m = 0; m < 2; ++m)
        {
            result = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * m + 11816));
            if (result < 4)
            {
                v27[1] = 32 * m + 144;
                v27[2] = 112;
                v27[6] = m == 1;
                v27[0] = m + *(_DWORD*)(thisx + 13104);
                v24 = (char*)(152 * ((((unsigned int)unk_4B93B0 >> 1) % 0xA > 5) + 13) + *(_DWORD*)(thisx + 13112));
                v25 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * m + 11816);
                result = sub_4788FA(v27, v24, *(_DWORD*)(thisx + 13120), v25, 0, *(_BYTE*)(m + thisx + 11808));
            }
        }
        break;
    case 0x64:
        result = sub_49C15E((int)v22);
        for (n = 0; n < 2; ++n)
        {
            if ((unsigned __int8)Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * n + 11816)) < 4u)
            {
                v22[1] = 160;
                v22[2] = 112 - 3 * n;
                v22[6] = n == 0;
                v22[0] = n + *(_DWORD*)(thisx + 13104);
                v19 = (char*)(152 * ((((unsigned int)unk_4B93B0 >> 1) % 0xA > 5) + 9 - 2 * (n == 1))
                    + *(_DWORD*)(thisx + 13112));
                v20 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * n + 11816);
                v23 = sub_4682AC((unsigned char*)thisx + 76 * n + 11816);
                sub_4788FA(v22, v19, *(_DWORD*)(thisx + 13120), v20, v23, 0);
            }
            result = n + 1;
        }
        break;
    case 0x65:
        result = sub_49C15E((int)v18);
        for (ii = 0; ii < 2; ++ii)
        {
            if ((unsigned __int8)Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * ii + 11816)) < 4u)
            {
                v18[1] = 32 * ii + 144;
                v18[2] = 112;
                v18[6] = ii == 1;
                v18[0] = ii + *(_DWORD*)(thisx + 13104);
                v15 = (char*)(152 * ((unk_4B93B0 / 3u % 0xA > 5) + 11) + *(_DWORD*)(thisx + 13112));
                v16 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * ii + 11816);
                sub_4788FA(v18, v15, *(_DWORD*)(thisx + 13120), v16, 0, 0);
            }
            result = ii + 1;
        }
        break;
    case 0x66:
        result = sub_49C15E((int)v14);
        for (jj = 0; jj < 2; ++jj)
        {
            result = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * jj + 11816));
            if (result < 4)
            {
                v14[1] = 32 * jj + 144;
                v14[2] = 112;
                v14[6] = jj == 0;
                v14[0] = jj + *(_DWORD*)(thisx + 13104);
                v11 = (char*)(152 * (unk_4B93B0 / 0xCu % 2 + 15) + *(_DWORD*)(thisx + 13112));
                v12 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * jj + 11816);
                result = sub_4788FA(v14, v11, *(_DWORD*)(thisx + 13120), v12, 0, 0);
            }
        }
        break;
    default:
        result = thisx;
        if (*(_BYTE*)(thisx + 13100) == 103)
        {
            result = sub_49C15E((int)v9);
            for (kk = 0; kk < 2; ++kk)
            {
                v5 = 1 - kk;
                result = Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime((Concurrency::details::_UnrealizedChore*)(thisx + 76 * (1 - kk) + 11816));
                if (result < 4)
                {
                    v9[1] = 160;
                    v9[2] = 112 - 3 * kk;
                    v9[6] = kk == 0;
                    v9[0] = v5 + *(_DWORD*)(thisx + 13104);
                    v6 = (char*)(152 * ((((unsigned int)unk_4B93B0 >> 1) % 0xA > 5) + 9 - 2 * (kk == 1))
                        + *(_DWORD*)(thisx + 13112));
                    v7 = (unsigned __int16)sub_4266F0((short*)thisx + 76 * v5 + 11816);
                    v10 = sub_4682AC((unsigned char*)thisx + 76 * v5 + 11816);
                    result = sub_4788FA(v9, v6, *(_DWORD*)(thisx + 13120), v7, v10, 0);
                }
            }
        }
        break;
    }
    return result;
}

