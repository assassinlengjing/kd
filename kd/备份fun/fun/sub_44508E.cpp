#include "sub.h" 
int sub_44508E(int a1, double a2, double a3, double a4)
{
    BOOL v5; // eax
    char v6; // al
    __int16 v7; // ax
    unsigned __int8 v8; // al
    char v9; // al
    int v10; // edx
    char v11; // al
    char v12; // al
    char v13; // al
    char v14; // al
    char v15; // al
    char v16; // al
    char v17; // al
    char v18; // al
    char v19; // al
    _DWORD* v20; // eax
    _DWORD* v21; // eax
    unsigned __int8 v22; // al
    int v23; // [esp-8h] [ebp-C4h]
    int v24; // [esp-4h] [ebp-C0h]
    _BYTE* v25; // [esp+4h] [ebp-B8h]
    signed int i14; // [esp+Ch] [ebp-B0h]
    int v28; // [esp+18h] [ebp-A4h]
    _BYTE* v29; // [esp+1Ch] [ebp-A0h]
    int v30; // [esp+24h] [ebp-98h]
    signed int i9; // [esp+28h] [ebp-94h]
    int v32; // [esp+2Ch] [ebp-90h]
    _BYTE* v33; // [esp+34h] [ebp-88h]
    unsigned __int8 v34; // [esp+38h] [ebp-84h]
    int i7; // [esp+3Ch] [ebp-80h]
    int i8; // [esp+3Ch] [ebp-80h]
    int v37; // [esp+40h] [ebp-7Ch]
    int v38; // [esp+40h] [ebp-7Ch]
    signed int i6; // [esp+44h] [ebp-78h]
    int v40; // [esp+48h] [ebp-74h]
    int v41; // [esp+4Ch] [ebp-70h]
    _BYTE* v42; // [esp+54h] [ebp-68h]
    int v43; // [esp+58h] [ebp-64h]
    _BYTE* v44; // [esp+5Ch] [ebp-60h]
    BOOL v45; // [esp+60h] [ebp-5Ch]
    char v46; // [esp+64h] [ebp-58h]
    unsigned __int8 v47; // [esp+68h] [ebp-54h]
    int v48; // [esp+6Ch] [ebp-50h]
    int i1; // [esp+70h] [ebp-4Ch]
    int v50; // [esp+74h] [ebp-48h]
    _BYTE* v51; // [esp+78h] [ebp-44h]
    int v52; // [esp+7Ch] [ebp-40h]
    int v53; // [esp+80h] [ebp-3Ch]
    Concurrency::details::InternalContextBase* v54; // [esp+84h] [ebp-38h]
    signed int mm; // [esp+88h] [ebp-34h]
    int kk; // [esp+8Ch] [ebp-30h]
    int v57; // [esp+90h] [ebp-2Ch]
    _BYTE* v58; // [esp+94h] [ebp-28h]
    int jj; // [esp+98h] [ebp-24h]
    signed int n; // [esp+9Ch] [ebp-20h]
    int k; // [esp+A0h] [ebp-1Ch]
    int v62; // [esp+A4h] [ebp-18h]
    signed int i; // [esp+A8h] [ebp-14h]
    signed int j; // [esp+A8h] [ebp-14h]
    int m; // [esp+A8h] [ebp-14h]
    int ii; // [esp+A8h] [ebp-14h]
    int nn; // [esp+A8h] [ebp-14h]
    signed int i2; // [esp+A8h] [ebp-14h]
    int i3; // [esp+A8h] [ebp-14h]
    int i4; // [esp+A8h] [ebp-14h]
    int i5; // [esp+A8h] [ebp-14h]
    signed int i10; // [esp+A8h] [ebp-14h]
    int i11; // [esp+A8h] [ebp-14h]
    int i12; // [esp+A8h] [ebp-14h]
    int i13; // [esp+A8h] [ebp-14h]
    int i15; // [esp+A8h] [ebp-14h]
    int i16; // [esp+A8h] [ebp-14h]
    int v78[4]; // [esp+ACh] [ebp-10h] BYREF

    *(_DWORD*)(a1 + 11376) = 0;
    sub_456617(a1);
    dword_4B93AC = 0;
    *(_DWORD*)(a1 + 2488) = 100;
    *(_DWORD*)(a1 + 2492) = 0;
    byte_4B9999 = *(_BYTE*)(a1 + 29);
    memset(byte_4B999B, 0, sizeof(byte_4B999B));
    memset(byte_4B99A3, 0, 8u);
    for (i = 0; i < (int)dword_4B93A0; ++i)
        *((_WORD*)dword_4B9394 + i) = -1;
    for (j = 0; j < (int)dword_4B93A0; ++j)
    {
        for (k = 0; k < 4; ++k)
            *((_WORD*)*(&dword_4B9370 + k) + j) = -1;
    }
    for (m = 0; m < dword_4B9368; ++m)
    {
        for (n = 0; n < (int)dword_4B93A0; ++n)
            *(_DWORD*)(*((_DWORD*)dword_4B9360 + m) + 4 * n) = 0;
    }
    for (ii = 0; ii < 8; ++ii)
        sub_42424D((void*)(a1 + 612 * ii + 2628));
    if (*(_DWORD*)(a1 + 104) == 19)
    {
        sub_49DA8A((int*)byte_4BDC60, *(_DWORD*)(a1 + 13104));
        *(_DWORD*)(a1 + 13104) = -1;
        sub_45F935(a1);
        sub_45FD81(a1);
    }
    dword_4B99EC = 1;
    *(_DWORD*)(a1 + 104) = 10;
    *(_BYTE*)(a1 + 2516) = 1;
    *(_DWORD*)(a1 + 2520) = 0;
    *(_DWORD*)(a1 + 2500) = 0;
    *(_DWORD*)(a1 + 2504) = 0;
    *(_BYTE*)(a1 + 2544) = 0;
    *(_BYTE*)(a1 + 2545) = 0;
    if (dword_4B9974)
    {
        if (!sub_484723(a1 + 13400, aReplayBin))
        {
            sub_48E8B8(a1 + 1300, (wchar_t*)&word_4B08EC, 120);
            *(_DWORD*)(a1 + 104) = 0;
            return sub_453B66(a1);
        }
        *(_DWORD*)(a1 + 116) = sub_4750B0((int*)a1 + 13400);
        if (*(_DWORD*)(a1 + 116) == 3)
            *(_BYTE*)(a1 + 11372) = byte_4B9998;
        memset((void*)(a1 + 2546), 0, 8u);
        for (jj = 0; jj < (unsigned __int8)byte_4B9985; ++jj)
        {
            v57 = (unsigned __int8)byte_4B9988[jj];
            v58 = (_BYTE*)(a1 + 612 * v57 + 2628);
            v25 = (_BYTE*)(a1 + (unsigned __int8)sub_426070(v58) + 2546);
            ++* v25;
            *(_WORD*)(a1 + 2 * jj + 2564) = sub_43E600((short*)v58);
            sub_41BF1D((int)v58);
            sub_475030(v58, v57);
        }
    }
    else if (*(_DWORD*)(a1 + 116) == 3)
    {
        byte_4B9990 = 2;
        *(_BYTE*)(a1 + 2546) = 1;
        *(_BYTE*)(a1 + 2547) = 7;
        byte_4B9985 = 8;
        byte_4B9987 = 7;
        for (kk = (unsigned __int8)byte_4B9986; kk < (unsigned __int8)byte_4B9985; ++kk)
        {
            for (mm = rand() % (int)Size; ; ++mm)
            {
                if (mm >= 0)
                {
                    if (mm >= (int)Size)
                        mm = 0;
                    v5 = sub_44E484((_BYTE*)a1, kk, mm);
                }
                else
                {
                    mm = Size - 1;
                    v5 = sub_44E484((_BYTE*)a1, kk, Size - 1);
                }
                if (!v5)
                    break;
            }
            *(_WORD*)(a1 + 2 * kk + 2564) = mm;
            *(_BYTE*)(kk + a1 + 2588) = 1;
            *(_BYTE*)(kk + a1 + 2580) = MarkedForDetachment((_BYTE*)(36 * mm + dword_4B92E0));
        }
    }
    else if (!*(_DWORD*)(a1 + 116))
    {
        byte_4B99CC = *(_BYTE*)(a1 + 11664);
        byte_4B999A = *(_BYTE*)(a1 + 11614);
        byte_4B99C8 = *(_BYTE*)(a1 + 11660);
        byte_4B99DF = *(_BYTE*)(a1 + 11683);
        byte_4B99E0 = *(_BYTE*)(a1 + 11684);
    }
    if (!byte_4B9999)
        byte_4B9999 = rand() % *(_DWORD*)(a1 + 13388) + 1;
    if (*(_DWORD*)(a1 + 116) || byte_4B9984 != 2)
    {
        if (*(_DWORD*)(a1 + 116) || byte_4B9984 != 3)
        {
            if (*(_DWORD*)(a1 + 116) || byte_4B9984 != 4)
                sub_486189(a1 + 128, (unsigned __int8)byte_4B9999, 0);
            else
                sub_486189(a1 + 128, (unsigned __int8)byte_4B9999, aDoubledragonWa);
        }
        else
        {
            sub_486189(a1 + 128, (unsigned __int8)byte_4B9999, aBoss03Wav);
        }
    }
    else
    {
        sub_486189(a1 + 128, (unsigned __int8)byte_4B9999, aBoss02Wav);
    }
    for (nn = 0; nn < (unsigned __int8)byte_4B9985; ++nn)
    {
        v53 = (unsigned __int8)byte_4B9988[nn];
        v54 = (Concurrency::details::InternalContextBase*)(a1 + 612 * v53 + 2628);
        sub_41BF1D((int)v54);
        Concurrency::details::InternalContextBase::UNSAFE_SetVirtualProcessor(
            v54,
            (struct Concurrency::details::VirtualProcessor*)1);
        if (!dword_4B9974)
        {
            sub_475010((short*)v54, *(_WORD*)(a1 + 2 * nn + 2564));
            if (*(_DWORD*)(a1 + 116) || nn >= 2)
                sub_474FB0((int*)v54, 0);
            else
                sub_474FB0((int*)v54, 1);
        }
        sub_475030((char*)v54, v53);
        if (!dword_4B9974)
        {
            if (*(_DWORD*)(a1 + 116) == 1 || !*(_DWORD*)(a1 + 116) || *(_DWORD*)(a1 + 116) == 4)
            {
                sub_474F90((short*)v54, 1);
                v6 = sub_4575B4((unsigned __int8*)a1, v53, 0);
                sub_475050((char*)v54, v6);
                if (!*(_DWORD*)(a1 + 116))
                {
                    if (nn >= 2)
                    {
                        v52 = *(unsigned __int8*)(a1 + 11690);
                        switch (*(_BYTE*)(a1 + 11805))
                        {
                        case 0:
                            v52 /= 2;
                            break;
                        case 1:
                            v52 = 75 * v52 / 100;
                            break;
                        case 2:
                            v52 = 134 * v52 / 100;
                            break;
                        case 3:
                            v52 = 2 * v52 + 5;
                            break;
                        case 4:
                            v52 = 3 * v52 + 10;
                            break;
                        default:
                            break;
                        }
                        if (*(_BYTE*)(a1 + 11690) == 19)
                            v52 = 75 * v52 / 100;
                        sub_474F90((short*)v54, *(_WORD*)(a1 + 11814) + v52);
                    }
                    else
                    {
                        v7 = sub_4750D0((void*)(a1 + 76 * nn + 11816));
                        sub_474F90((short*)v54, v7);
                    }
                }
            }
            else if (*(_DWORD*)(a1 + 116) == 2 || *(_DWORD*)(a1 + 116) == 3)
            {
                if (nn >= (unsigned __int8)byte_4B9986)
                    sub_475050((char*)v54, byte_4B9986);
                else
                    sub_475050((char*)v54, 0);
            }
            sub_474FF0((char*)v54, *(_BYTE*)(nn + a1 + 2580));
            sub_474F30((char*)v54, *(_BYTE*)(nn + a1 + 2620));
        }
        if (!dword_4B9974)
        {
            sub_41D84A((int)v54);
            if (*(_DWORD*)(a1 + 116) == 4)
            {
                v8 = sub_426070((char*)v54);
                v50 = a1 + 244 * v8 + 1392;
                v51 = (_BYTE*)(84 * *(__int16*)(a1 + 244 * v8 + 1628) + dword_4B92D4);
                v9 = sub_43EE02((unsigned char*)v51, 0, v50);
                sub_41EBBC((int)v54, v10, v9, 1);
                v11 = sub_43EE02((unsigned char*)v51, 1, v50);
                sub_41EC40((short*)v54, v11);
                v12 = sub_43EE02((unsigned char*)v51, 2, v50);
                sub_41ECAB((short*)v54, v12);
                v13 = sub_43EE02((unsigned char*)v51, 3, v50);
                sub_41ED16((short*)v54, v13);
                v14 = sub_43EE02((unsigned char*)v51, 4, v50);
                sub_420D47((short*)v54, v14);
                v15 = sub_43EE02((unsigned char*)v51, 5, v50);
                sub_420DB2((short*)v54, v15);
                v16 = sub_43EE02((unsigned char*)v51, 6, v50);
                sub_41EDEC((short*)v54, v16);
                v17 = sub_43EE02((unsigned char*)v51, 7, v50);
                sub_420E1D((short*)v54, v17);
                v18 = sub_43EE02((unsigned char*)v51, 8, v50);
                sub_420E88((short*)v54, v18);
                v19 = sub_43EE02((unsigned char*)v51, 9, v50);
                sub_41ED81((short*)v54, v19);
                for (i1 = 0; i1 < 3; ++i1)
                {
                    v46 = sub_475090(v51, i1);
                    if (v46)
                    {
                        v48 = 0;
                        v45 = 0;
                        do
                        {
                            v47 = sub_474F10((char*)v54, v48);
                            if (!v47)
                                break;
                            v45 = sub_47744C(v47, v46);
                            if (v45)
                                break;
                            ++v48;
                        } while (v48 != 3);
                        if (v48 == 3)
                            break;
                        if (!v45)
                            sub_474EF0((char*)v54, v48, v46);
                    }
                }
            }
            sub_42371C((int)v54);
            if (*(_BYTE*)(nn + a1 + 2580) == 4)
                sub_474F70((short*)v54, nn % 2 + 23);
        }
        if (v53 >= (unsigned __int8)byte_4B9986)
        {
            Concurrency::details::InternalContextBase::SetOversubscribedVProc(
                v54,
                (struct Concurrency::details::VirtualProcessor*)1);
            v20 = sub_41F0A9((int*)v54);
            sub_41F712(v20);
            v24 = sub_4261D0((char*)(a1 + 128));
            v23 = sub_4897D0((_BYTE*)(a1 + 128)) / 8;
            v21 = sub_41F0A9((int*)v54);
            sub_42132D((int)v21, v23, v24);
        }
        else
        {
            Concurrency::details::InternalContextBase::SetOversubscribedVProc(v54, 0);
        }
        if (dword_4B9974 || *(_DWORD*)(a1 + 116) == 4)
        {
            if (!dword_4B9974)
                sub_474ED0((short*)v54, word_4B99CE[nn]);
        }
        else
        {
            sub_417763((short*)v54);
            word_4B99CE[nn] = sub_474EB0((short*)v54);
        }
    }
    v62 = (unsigned __int8)byte_4B9985;
    memset(v78, 0, sizeof(v78));
    if (*(_DWORD*)(a1 + 116) == 3)
    {
        for (i2 = 0; i2 < (int)Size; ++i2)
        {
            v44 = (_BYTE*)(36 * i2 + dword_4B92E0);
            if (sub_401782(v44, 38) || sub_401782(v44, 255))
            {
                v43 = (unsigned __int8)MarkedForDetachment(v44);
                if (v43 < 4)
                    v78[v43] = 1;
            }
        }
    }
    else
    {
        for (i3 = 0; i3 < (unsigned __int8)byte_4B9985; ++i3)
        {
            v42 = (_BYTE*)(a1 + 612 * (unsigned __int8)byte_4B9988[i3] + 2628);
            if (sub_41BA53((int)v42, 0x26u, 0))
            {
                v41 = (unsigned __int8)sub_4264F0(v42);
                if (v41 < 4)
                    v78[v41] = 1;
            }
        }
    }
    if (*(_DWORD*)(a1 + 116) == 3)
    {
        memcpy((void*)dword_4B9394, (void*)Src, 2 * dword_4B93A0);
        for (i4 = 0; i4 < 4; ++i4)
            memcpy((void*)*(&dword_4B9370 + i4), (void*)*(&dword_4B9380 + i4), 2 * dword_4B93A0);
        for (i5 = 0; i5 < 4; ++i5)
        {
            if (v78[i5])
            {
                v40 = 0;
                for (i6 = 0; i6 < (int)dword_4B93A0; ++i6)
                {
                    if (*((__int16*)dword_4B9394 + i6) >= 0)
                        *((_WORD*)*(&dword_4B9370 + i5) + i6) = v40++;
                }
            }
        }
    }
    else
    {
        for (i7 = 0; i7 < v62; ++i7)
        {
            v33 = (_BYTE*)(a1 + 612 * (unsigned __int8)byte_4B9988[i7] + 2628);
            v32 = (unsigned __int16)sub_474F50((short*)v33);
            v34 = sub_4264F0(v33);
            if (v34 < 4u)
                *((_WORD*)*(&dword_4B9370 + v34) + v32) = 1;
            *((_WORD*)dword_4B9394 + v32) = 1;
        }
        for (i8 = 0; i8 < 4; ++i8)
        {
            if (v78[i8])
            {
                v37 = 0;
                for (i9 = 0; i9 < (int)dword_4B93A0; ++i9)
                {
                    if (*((__int16*)dword_4B9394 + i9) >= 0)
                        *((_WORD*)*(&dword_4B9370 + i8) + i9) = v37++;
                }
            }
        }
        v38 = 0;
        for (i10 = 0; i10 < (int)dword_4B93A0; ++i10)
        {
            if (*((__int16*)dword_4B9394 + i10) != -1)
                *((_WORD*)dword_4B9394 + i10) = v38++;
        }
    }
    sub_466A41();
    if (*(_DWORD*)(a1 + 116) == 3)
        sub_456207();
    if (*(_DWORD*)(a1 + 116) == 4)
    {
        v30 = 4 * *(_DWORD*)(a1 + 2368) + 4;
        for (i11 = 0; i11 < v30; ++i11)
            *(_BYTE*)(i11 + a1 + 2612) = *(_BYTE*)(a1
                + 244 * (unsigned __int8)sub_426070((_BYTE*)(a1 + 612 * i11 + 2628))
                + 1630);
    }
    for (i12 = 0; i12 < (unsigned __int8)byte_4B9985; ++i12)
    {
        v28 = (unsigned __int8)byte_4B9988[i12];
        v29 = (_BYTE*)(a1 + 612 * v28 + 2628);
        if (*(_DWORD*)(a1 + 116) == 3 && v28 >= (unsigned __int8)byte_4B9986)
        {
            v22 = sub_4264F0(v29);
            sub_474FD0((int*)v29, dword_4B9220[v22]);
        }
        else if (dword_4B9974)
        {
            sub_41C48F((int)v29, -2);
        }
        else if (*(_DWORD*)(a1 + 116) || i12 < 2 || byte_4B9984 != 2)
        {
            if (*(_DWORD*)(a1 + 116) && *(_DWORD*)(a1 + 116) != 4)
                sub_41C48F((int)v29, -1);
            else
                sub_41C48F((int)v29, *(unsigned __int8*)(v28 + a1 + 2612) + 1);
        }
        else
        {
            sub_41C48F((int)v29, 3);
        }
    }
    while (i12 < 8)
        Concurrency::details::InternalContextBase::UNSAFE_SetVirtualProcessor(
            (Concurrency::details::InternalContextBase*)(a1 + 612 * (unsigned __int8)byte_4B9988[i12++] + 2628),
            0);
    sub_452E9A(a1);
    if (*(_DWORD*)(a1 + 116) == 3)
    {
        for (i13 = 0; i13 < dword_4B9368; ++i13)
        {
            for (i14 = 0; i14 < (int)dword_4B93A0; ++i14)
            {
                if (*(_BYTE*)(*((_DWORD*)dword_4B9364 + i13) + i14) == 1)
                    *(_DWORD*)(*((_DWORD*)dword_4B9360 + i13) + 4 * i14) = 1;
            }
        }
    }
    sub_4680EF();
    if (*(_DWORD*)(a1 + 116) || dword_4B9974)
    {
        if (*(_DWORD*)(a1 + 116) == 4 && !dword_4B9974)
        {
            memcpy(byte_4B999B, (const void*)(a1 + 2403), sizeof(byte_4B999B));
            memcpy(byte_4B99A3, (const void*)(a1 + 2411), 8u);
        }
    }
    else
    {
        for (i15 = 0; i15 < 2; ++i15)
        {
            if (*(_BYTE*)(i15 + a1 + 11808))
            {
                byte_4B999B[i15] = *(_BYTE*)(i15 + a1 + 11808);
                byte_4B99A3[i15] = *(_BYTE*)(i15 + a1 + 11810);
            }
        }
    }
    *(_DWORD*)(a1 + 2508) = 0;
    for (i16 = 0; i16 < (unsigned __int8)byte_4B9985; ++i16)
        *(_DWORD*)(a1 + 2508) += (unsigned __int16)sub_43E520((short*)a1 + 612 * i16 + 2628);
    *(int*)(a1 + 2508) /= (int)(unsigned __int8)byte_4B9985;
    return sub_4647F2(a1, a2, a3, a4);
}

