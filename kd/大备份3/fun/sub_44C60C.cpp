#include "sub.h" 
unsigned __int8  sub_44C60C(int thisx)
{
    unsigned __int8 result; // al
    int v2; // edx
    unsigned __int8 v4; // [esp+4h] [ebp-98h]
    unsigned __int8 v5; // [esp+8h] [ebp-94h]
    int i11; // [esp+Ch] [ebp-90h]
    int i12; // [esp+Ch] [ebp-90h]
    char v8; // [esp+10h] [ebp-8Ch]
    int i9; // [esp+14h] [ebp-88h]
    int i10; // [esp+14h] [ebp-88h]
    unsigned __int8 v11; // [esp+18h] [ebp-84h]
    int i8; // [esp+1Ch] [ebp-80h]
    int v13; // [esp+20h] [ebp-7Ch]
    int i7; // [esp+24h] [ebp-78h]
    int i2; // [esp+2Ch] [ebp-70h]
    int i3; // [esp+2Ch] [ebp-70h]
    int i4; // [esp+2Ch] [ebp-70h]
    int i5; // [esp+2Ch] [ebp-70h]
    int i6; // [esp+2Ch] [ebp-70h]
    Concurrency::details::_CancellationTokenRegistration* v20; // [esp+30h] [ebp-6Ch]
    unsigned __int8 v21; // [esp+34h] [ebp-68h]
    unsigned __int8 v22; // [esp+38h] [ebp-64h]
    int nn; // [esp+3Ch] [ebp-60h]
    int i1; // [esp+3Ch] [ebp-60h]
    char v25; // [esp+40h] [ebp-5Ch]
    int kk; // [esp+44h] [ebp-58h]
    int mm; // [esp+44h] [ebp-58h]
    unsigned __int8 v28; // [esp+48h] [ebp-54h]
    int jj; // [esp+4Ch] [ebp-50h]
    int n; // [esp+4Ch] [ebp-50h]
    int ii; // [esp+4Ch] [ebp-50h]
    int m; // [esp+4Ch] [ebp-50h]
    int i; // [esp+50h] [ebp-4Ch]
    int j; // [esp+54h] [ebp-48h]
    int k; // [esp+54h] [ebp-48h]
    int v36; // [esp+58h] [ebp-44h]
    int v37[14]; // [esp+5Ch] [ebp-40h] BYREF
    int v38; // [esp+94h] [ebp-8h]
    int v39; // [esp+98h] [ebp-4h]

    sub_477F0C(0);
    v38 = 0;
    v36 = 0;
    v39 = 0;
    if (*(_DWORD*)(thisx + 15640) && !*(_BYTE*)(thisx + 2516))
    {
        v39 = (*(int(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 16))(*(_DWORD*)(thisx + 15640));
        *(_DWORD*)(thisx + 2528) = unknown_libname_13(*(_DWORD**)(thisx + 15640));
    }
    switch (*(_BYTE*)(thisx + 2562))
    {
    case 0:
        if (v39 != 1)
        {
            if (v39 == 3)
                v36 = 1;
            break;
        }
        sub_475670((_DWORD*)(thisx + 15680), 0);
        *(_DWORD*)(thisx + 15640) = 0;
        if (*(_DWORD*)(thisx + 2528))
            unk_4B9984 = 0;
        switch (*(_DWORD*)(thisx + 2528))
        {
        case 0:
            *(_DWORD*)(thisx + 116) = 0;
            unk_4B99CB = 1;
            unk_4B99CC = 0;
            *(_BYTE*)(thisx + 2562) = 7;
            sub_480054(thisx + 15716, (int)&unk_4B0C10);
            sub_4756B0((_BYTE*)(thisx + 15716), 20, 8);
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15716;
            v38 = 1;
            v36 = 1;
            goto LABEL_224;
        case 1:
            if (sub_476485((_DWORD*)unk_4B9410, 2))
                *(_DWORD*)(thisx + 116) = 2;
            else
                *(_DWORD*)(thisx + 116) = 1;
            *(_BYTE*)(thisx + 2562) = 1;
            v38 = 1;
            v36 = 1;
            unk_4B9985 = 4;
            unk_4B9986 = 1;
            unk_4B9987 = 3;
            *(_DWORD*)(thisx + 15640) = thisx + 15824;
            (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
            goto LABEL_224;
        case 2:
            *(_BYTE*)(thisx + 2562) = 2;
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15992) + 4))(thisx + 15992, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15992;
            v38 = 1;
            v36 = 1;
            goto LABEL_224;
        }
        if (*(_DWORD*)(thisx + 2528) != 3)
        {
            if (*(_DWORD*)(thisx + 2528) == 4)
            {
                result = thisx;
                *(_BYTE*)(thisx + 2516) = 2;
                *(_DWORD*)(thisx + 108) = 5;
                return result;
            }
            break;
        }
        *(_DWORD*)(thisx + 116) = 4;
        *(_BYTE*)(thisx + 2562) = 10;
        if (*(_DWORD*)(thisx + 15640))
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
        goto LABEL_24;
    case 1:
        switch (v39)
        {
        case 1:
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            *(_DWORD*)(thisx + 15640) = 0;
            if (*(_DWORD*)(thisx + 116) == 2)
            {
                unk_4B9990 = 2;
                *(_BYTE*)(thisx + 2546) = unk_4B9986;
                *(_BYTE*)(thisx + 2547) = unk_4B9987;
                for (i = 0; i < 8; ++i)
                    unk_4B9988[i] = i;
                *(_BYTE*)(thisx + 2516) = 2;
                unk_4B99CB = 0;
                unk_4B99CC = 0;
                unk_4B999A = *(_BYTE*)(thisx + 30);
                unk_4B99C8 = 0;
                result = thisx;
                *(_DWORD*)(thisx + 108) = 8;
                return result;
            }
            *(_BYTE*)(thisx + 2562) = 3;
            sub_480054(thisx + 15716, (int)&unk_4B0C28);
            sub_475690((_BYTE*)(thisx + 15716), 4);
            sub_475630((_BYTE*)(thisx + 15716), 11, 11, 17, 8);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15716;
            unk_4B9990 = unk_4B9985;
            memset((void*)(thisx + 2546), 0, 8u);
            for (j = 0; j < (unsigned __int8)unk_4B9990; ++j)
                *(_BYTE*)(j + thisx + 2546) = 1;
            for (k = 0; k < 8; ++k)
                unk_4B9988[k] = k;
            *(_DWORD*)(thisx + 2528) = 0;
            v38 = 1;
            v36 = 1;
            break;
        case 2:
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15680) + 4))(thisx + 15680, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15680;
            *(_BYTE*)(thisx + 2562) = 0;
            v38 = 1;
            v36 = 1;
            break;
        case 3:
            v38 = 1;
            break;
        }
        break;
    case 2:
        if (v39 == 1)
        {
            *(_BYTE*)(thisx + 11372) = unknown_libname_13(*(_DWORD**)(thisx + 15640));
            unk_4B9998 = unknown_libname_13(*(_DWORD**)(thisx + 15640));
            unk_4B99CB = 0;
            unk_4B99CC = 0;
            *(_DWORD*)(thisx + 116) = 3;
            unk_4B9985 = 1;
            unk_4B9986 = 1;
            unk_4B9987 = 1;
            unk_4B999A = *(_BYTE*)(thisx + 30);
            unk_4B99C8 = 0;
            result = thisx;
            *(_BYTE*)(thisx + 2516) = 2;
            *(_DWORD*)(thisx + 108) = 8;
            return result;
        }
        if (v39 == 2)
        {
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15680) + 4))(thisx + 15680, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15680;
            *(_BYTE*)(thisx + 2562) = 0;
            v36 = 1;
            v38 = 1;
        }
        break;
    case 3:
        switch (v39)
        {
        case 1:
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            *(_DWORD*)(thisx + 15640) = 0;
            switch (*(_DWORD*)(thisx + 2528))
            {
            case 0:
                *(_BYTE*)(thisx + 2516) = 2;
                unk_4B99CB = *(_BYTE*)(thisx + 79);
                unk_4B99CC = *(_BYTE*)(thisx + 80);
                unk_4B999A = *(_BYTE*)(thisx + 30);
                unk_4B99C8 = *(_BYTE*)(thisx + 76);
                unk_4B99DF = *(_BYTE*)(thisx + 99);
                result = *(_BYTE*)(thisx + 100);
                unk_4B99E0 = result;
                *(_DWORD*)(thisx + 108) = 8;
                return result;
            case 1:
                *(_BYTE*)(thisx + 2562) = 4;
                *(_DWORD*)(thisx + 15640) = thisx + 15860;
                (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
                v38 = 1;
                v36 = 1;
                break;
            case 2:
                *(_BYTE*)(thisx + 2562) = 6;
                if (*(_DWORD*)(thisx + 15640))
                    (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
                (*(void(**)(int, int))(*(_DWORD*)(thisx + 15956) + 4))(thisx + 15956, 1);
                *(_DWORD*)(thisx + 15640) = thisx + 15956;
                v38 = 1;
                v36 = 1;
                break;
            }
            break;
        case 2:
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            *(_DWORD*)(thisx + 15640) = thisx + 15824;
            (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
            *(_BYTE*)(thisx + 2562) = 1;
            v38 = 1;
            v36 = 1;
            break;
        case 3:
            v36 = 1;
            break;
        }
        break;
    case 4:
        if (v39 != 1)
        {
            if (v39 == 2)
            {
                for (m = 0; m < (unsigned __int8)unk_4B9986; ++m)
                    *(_WORD*)(thisx + 2 * m + 2564) = (unsigned __int8)sub_4575B4((unsigned __int8*)thisx, m, 0);
                *(_BYTE*)(thisx + 2562) = 3;
                (*(void(**)(int, int))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 1);
                *(_DWORD*)(thisx + 15640) = thisx + 15716;
                v38 = 1;
                v36 = 1;
            }
            else if (v39)
            {
                v38 = 1;
            }
            break;
        }
        (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
        *(_DWORD*)(thisx + 15640) = 0;
        if ((unsigned __int8)unk_4B9986 >= 2u)
        {
            for (n = 0; n < 8; ++n)
                unk_4B9988[n] = n;
            for (ii = 0; ii < 8; ++ii)
                sub_48EC25(thisx + 15896, ii + thisx, ii, *(_BYTE*)(ii + thisx + 2546));
            sub_48EC62((_BYTE*)(thisx + 15896));
            *(_DWORD*)(thisx + 15640) = thisx + 15896;
            (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
            *(_BYTE*)(thisx + 2562) = 5;
            v38 = 1;
            v36 = 1;
            break;
        }
        for (jj = 0; jj < 8; ++jj)
            unk_4B9988[jj] = jj;
        goto LABEL_124;
    case 5:
        if (v39 == 1)
        {
            for (kk = 0; kk < 8; ++kk)
                *(_WORD*)(thisx + 2 * kk + 2564) = (unsigned __int8)sub_475710((_BYTE*)(thisx + 15896), kk);
            v28 = 0;
            v25 = 0;
            for (mm = 0; mm < (unsigned __int8)unk_4B9990; ++mm)
            {
                v22 = 0;
                for (nn = 0; nn < (unsigned __int8)unk_4B9986; ++nn)
                {
                    if (*(unsigned __int16*)(thisx + 2 * nn + 2564) == mm)
                    {
                        unk_4B9988[v28++] = nn;
                        ++v22;
                    }
                }
                if (v22 < (int)*(unsigned __int8*)(mm + thisx + 2546))
                {
                    v21 = *(_BYTE*)(mm + thisx + 2546) - v22;
                    for (i1 = 0; i1 < v21; ++i1)
                    {
                        unk_4B9988[v28] = v25 + unk_4B9986;
                        ++v25;
                        ++v28;
                    }
                }
            }
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            *(_DWORD*)(thisx + 15640) = thisx + 15716;
            (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
            *(_BYTE*)(thisx + 2562) = 3;
            v38 = 1;
            v36 = 1;
        }
        else if (v39 == 2)
        {
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            *(_DWORD*)(thisx + 15640) = thisx + 15860;
            (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
            *(_BYTE*)(thisx + 2562) = 4;
            v38 = 1;
            v36 = 1;
        }
        else if (v39)
        {
            v38 = 1;
        }
        break;
    case 6:
        if (v39 != 1 && v39 != 2)
        {
            if (v39)
            {
                v38 = 1;
                v36 = 1;
            }
            break;
        }
        (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
        if (*(_DWORD*)(thisx + 15640))
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
    LABEL_124:
        (*(void(**)(int, int))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 1);
        *(_DWORD*)(thisx + 15640) = thisx + 15716;
        *(_BYTE*)(thisx + 2562) = 3;
        v38 = 1;
        v36 = 1;
        break;
    case 7:
        if (v39 == 1)
        {
            sub_475670((_DWORD*)(thisx + 15716), 0);
            if (*(_DWORD*)(thisx + 2528))
            {
                if (*(_DWORD*)(thisx + 2528) == 1)
                {
                    *(_BYTE*)(thisx + 2562) = 0;
                    *(_DWORD*)(thisx + 108) = 20;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
            }
            else
            {
                *(_BYTE*)(thisx + 2562) = 8;
                v38 = 1;
                v36 = 1;
                sub_463F05(thisx + 11436);
                sub_475730((_WORD*)(thisx + 11816), 0);
                sub_475730((_WORD*)(thisx + 11892), 0);
                sub_480054(thisx + 15752, (int)&unk_4B0C5C);
                sub_4756B0((_BYTE*)(thisx + 15752), 26, 8);
                (*(void(**)(int, int))(*(_DWORD*)(thisx + 15752) + 4))(thisx + 15752, 1);
                *(_DWORD*)(thisx + 15640) = thisx + 15752;
            }
        }
        else if (v39 == 2)
        {
            (*(void(**)(int, _DWORD))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15680) + 4))(thisx + 15680, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15680;
            *(_BYTE*)(thisx + 2562) = 0;
            v38 = 1;
            v36 = 1;
        }
        break;
    case 8:
        if (v39 == 1)
        {
            *(_BYTE*)(thisx + 11968) = *(_DWORD*)(thisx + 2528) + 1;
            result = thisx;
            *(_BYTE*)(thisx + 2516) = 2;
            *(_DWORD*)(thisx + 108) = 4;
            return result;
        }
        if (v39 == 2)
        {
            (*(void(**)(int, _DWORD))(*(_DWORD*)(thisx + 15752) + 4))(thisx + 15752, 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15716) + 4))(thisx + 15716, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15716;
            *(_BYTE*)(thisx + 2562) = 7;
            v38 = 1;
            v36 = 1;
        }
        break;
    case 0xA:
        switch (v39)
        {
        case 1:
            v20 = (Concurrency::details::_CancellationTokenRegistration*)unknown_libname_12((_DWORD*)(thisx + 16048));
            *(_BYTE*)(thisx + 2477) = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken(v20);
            *(_DWORD*)(thisx + 2368) = (_DWORD)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 32));
            unk_4B9986 = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 64));
            unk_4B99CB = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 96));
            unk_4B999A = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 128));
            *(_DWORD*)(thisx + 2372) = (_DWORD)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 160));
            unk_4B99DF = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 192));
            unk_4B99E0 = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)((char*)v20 + 224));
            unk_4B9985 = 4 * *(_DWORD*)(thisx + 2368) + 4;
            unk_4B9987 = unk_4B9985 - unk_4B9986;
            unk_4B9990 = 4;
            memcpy((void*)(thisx + 2376), &unk_4B9980, 0x64u);
            memset((void*)(thisx + 2546), 0, 8u);
            for (i2 = 0; i2 < (unsigned __int8)unk_4B9990; ++i2)
                *(_BYTE*)(i2 + thisx + 2546) = *(_BYTE*)(thisx + 2368) + 1;
            for (i3 = 0; i3 < 8; ++i3)
                unk_4B9988[i3] = i3;
            if (!*(_DWORD*)(thisx + 2368))
            {
                *(_BYTE*)(thisx + 2516) = 2;
                result = thisx;
                *(_DWORD*)(thisx + 108) = 22;
                return result;
            }
            for (i4 = 0; i4 < 8; ++i4)
                unk_4B9988[i4] = -1;
            for (i5 = 0; i5 < (unsigned __int8)unk_4B9986; ++i5)
                unk_4B9988[2 * (i5 % 4) + (i5 >= 4)] = i5;
            for (i6 = 0; i6 < (unsigned __int8)unk_4B9985; ++i6)
            {
                for (i7 = i6; (unsigned __int8)unk_4B9988[i7] != 255; ++i7)
                    ;
                unk_4B9988[i7] = i6 + unk_4B9986;
            }
            *(_BYTE*)(thisx + 2562) = 11;
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 16084) + 4))(thisx + 16084, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 16084;
            v36 = 1;
            v38 = 1;
            break;
        case 2:
            *(_BYTE*)(thisx + 2562) = 0;
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
            (*(void(**)(int, int))(*(_DWORD*)(thisx + 15680) + 4))(thisx + 15680, 1);
            *(_DWORD*)(thisx + 15640) = thisx + 15680;
            v38 = 1;
            v36 = 1;
            break;
        case 3:
        case 4:
            v36 = 1;
            v38 = 1;
            break;
        }
        break;
    case 0xB:
        if (v39 == 1)
        {
            if (!*(_DWORD*)(thisx + 2528))
            {
                v13 = unknown_libname_12((_DWORD*)(thisx + 16084));
                unk_4B99C8 = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)(v13 + 32));
                unk_4B99CC = (unsigned __int8)Concurrency::details::_CancellationTokenRegistration::_GetToken((Concurrency::details::_CancellationTokenRegistration*)(v13 + 64));
                memcpy((void*)(thisx + 2376), &unk_4B9980, 0x64u);
                result = thisx;
                *(_BYTE*)(thisx + 2516) = 2;
                *(_DWORD*)(thisx + 108) = 22;
                return result;
            }
            v2 = thisx;
            if (*(_DWORD*)(thisx + 2528) == 3)
            {
                if ((unsigned __int8)unk_4B9986 >= 2u)
                {
                    for (i8 = 0; i8 < 8; ++i8)
                    {
                        LOBYTE(v2) = i8;
                        sub_48EC25(thisx + 15896, v2, i8, *(_BYTE*)(i8 + thisx + 2546));
                        v2 = i8 + 1;
                    }
                    sub_48EC62((_BYTE*)(thisx + 15896));
                    *(_DWORD*)(thisx + 15640) = thisx + 15896;
                    (*(void(**)(_DWORD, int))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 1);
                    *(_BYTE*)(thisx + 2562) = 12;
                    v38 = 1;
                    v36 = 1;
                }
                else
                {
                    sub_451EB5((_BYTE*)thisx, 0, 1);
                    sub_47B91A(16, 208, &unk_4B0C68, 0, unk_4B9248);
                }
            }
            break;
        }
        if (v39 != 2)
        {
            if (v39 == 3)
            {
                v36 = 1;
            }
            else if (v39 == 4)
            {
                v38 = 1;
            }
            break;
        }
        *(_BYTE*)(thisx + 2562) = 10;
        if (*(_DWORD*)(thisx + 15640))
            (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
    LABEL_24:
        (*(void(**)(int, int))(*(_DWORD*)(thisx + 16048) + 4))(thisx + 16048, 1);
        *(_DWORD*)(thisx + 15640) = thisx + 16048;
        v38 = 1;
        v36 = 1;
        break;
    case 0xC:
        if (v39 == 1)
        {
            for (i9 = 0; i9 < 8; ++i9)
                *(_WORD*)(thisx + 2 * i9 + 2564) = (unsigned __int8)sub_475710((_BYTE*)(thisx + 15896), i9);
            v11 = 0;
            v8 = 0;
            for (i10 = 0; i10 < (unsigned __int8)unk_4B9990; ++i10)
            {
                v5 = 0;
                for (i11 = 0; i11 < (unsigned __int8)unk_4B9986; ++i11)
                {
                    if (*(unsigned __int16*)(thisx + 2 * i11 + 2564) == i10)
                    {
                        unk_4B9988[v11++] = i11;
                        ++v5;
                    }
                }
                if (v5 < (int)*(unsigned __int8*)(i10 + thisx + 2546))
                {
                    v4 = *(_BYTE*)(i10 + thisx + 2546) - v5;
                    for (i12 = 0; i12 < v4; ++i12)
                    {
                        unk_4B9988[v11] = v8 + unk_4B9986;
                        ++v8;
                        ++v11;
                    }
                }
            }
            *(_BYTE*)(thisx + 2562) = 11;
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
        }
        else
        {
            if (v39 != 2)
            {
                if (v39)
                    v38 = 1;
                break;
            }
            *(_BYTE*)(thisx + 2562) = 11;
            if (*(_DWORD*)(thisx + 15640))
                (*(void(**)(_DWORD, _DWORD))(**(_DWORD**)(thisx + 15640) + 4))(*(_DWORD*)(thisx + 15640), 0);
        }
        (*(void(**)(int, int))(*(_DWORD*)(thisx + 16084) + 4))(thisx + 16084, 1);
        *(_DWORD*)(thisx + 15640) = thisx + 16084;
        v38 = 1;
        v36 = 1;
        break;
    }
LABEL_224:
    if (v38 || v36)
        sub_453B85(thisx, v38, v36);
    sub_49C15E((int)v37);
    v37[1] = 0;
    v37[2] = 0;
    v37[0] = unk_4B9248;
    result = (unsigned __int8)sub_49AB05((int)unk_4BDC60, v37);
    if (!*(_BYTE*)(thisx + 2516))
    {
        result = thisx;
        if (*(_DWORD*)(thisx + 15640))
            return (*(int(**)(_DWORD))(**(_DWORD**)(thisx + 15640) + 8))(*(_DWORD*)(thisx + 15640));
    }
    return result;
}

