#include "sub.h" 
_DWORD* sub_47188C(int thisx)
{
    int v1; // eax
    int v2; // ecx
    char* v3; // eax
    int v5; // [esp-4h] [ebp-170h]
    _DWORD* v7; // [esp+8h] [ebp-164h]
    int v8; // [esp+10h] [ebp-15Ch]
    int v9; // [esp+10h] [ebp-15Ch]
    int v10; // [esp+18h] [ebp-154h]
    int v11; // [esp+1Ch] [ebp-150h]
    CHAR String[256]; // [esp+20h] [ebp-14Ch] BYREF
    int v13; // [esp+120h] [ebp-4Ch]
    _BYTE* v14; // [esp+124h] [ebp-48h]
    int v15; // [esp+128h] [ebp-44h]
    int i; // [esp+12Ch] [ebp-40h]
    int v17; // [esp+130h] [ebp-3Ch]
    int v18[14]; // [esp+134h] [ebp-38h] BYREF

    if (!*(_BYTE*)(thisx + 2516))
    {
        v17 = 0;
        v1 = *(unsigned __int8*)(thisx + 2516);
        if (!*(_BYTE*)(thisx + 2516))
        {
            for (i = 0; i < (unsigned __int8)byte_4B9986; ++i)
            {
                LOBYTE(v1) = i;
                sub_477F0C(v1);
                LOBYTE(v2) = i;
                v1 = sub_476DC7(v2, 0);
                if (v1)
                    v17 = 1;
            }
            if (v17 && *(_BYTE*)(thisx + 2562) && *(unsigned __int8*)(thisx + 2562) <= 5u)
                *(_DWORD*)(thisx + 2540) = 60;
        }
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(unsigned __int8*)(thisx + 2562) > 5u)
            {
                if (*(_BYTE*)(thisx + 2562) == 6 && *(int*)(thisx + 2540) >= 540)
                {
                    *(_DWORD*)(thisx + 108) = 26;
                    *(_BYTE*)(thisx + 2516) = 2;
                }
            }
            else if (!(*(_DWORD*)(thisx + 2540) % 60))
            {
                v11 = 0;
                switch (*(_BYTE*)(thisx + 2562))
                {
                case 1:
                    wsprintfA(String, &byte_4B38E4);
                    v11 = 100;
                    break;
                case 2:
                    wsprintfA(String, &byte_4B38F4);
                    v11 = 200;
                    break;
                case 3:
                    wsprintfA(String, &byte_4B3914);
                    v11 = -100;
                    break;
                case 4:
                    wsprintfA(String, &byte_4B392C);
                    v11 = 50;
                    break;
                case 5:
                    wsprintfA(String, &byte_4B3944);
                    v11 = 100;
                    break;
                default:
                    break;
                }
                v14 = (_BYTE*)(thisx + 2580);
                v8 = 28 * (*(unsigned __int8*)(thisx + 2562) - 1) + 52;
                LOBYTE(v15) = *(_BYTE*)(thisx + 2 * *(unsigned __int8*)(thisx + 2562) + 2562);
                LOBYTE(v13) = (unsigned __int8)v15 % 10;
                LOBYTE(v15) = (unsigned __int8)v15 / 10;
                v10 = 0;
                if ((unsigned __int8)v15 < 4u)
                    v10 = thisx + 244 * (unsigned __int8)v15 + 1392;
                if (*v14)
                {
                    if (*v14 == 1 && v10)
                    {
                        v7 = (_DWORD*)(28 * (unsigned __int8)v13 + v10);
                        sub_47B91A(168, v8, (LPCSTR)(v10 + 172), 0, dword_4B9248);
                        v5 = dword_4B9248;
                        v3 = unknown_libname_18((char*)(36 * *v7 + dword_4B92E0));
                        sub_47B91A(168, v8 + 12, v3, 0, v5);
                    }
                    else if (*v14 == 2 && v10)
                    {
                        v9 = v8 + 12;
                        wsprintfA(String, "%4d", v11);
                        sub_47B7ED(248, v9, String, 0, dword_4B9248);
                        sub_47B91A(280, v9, &byte_4B3964, 0, dword_4B9248);
                        *(_DWORD*)(v10 + 168) += v11;
                    }
                }
                else
                {
                    sub_47B91A(32, v8, String, 0, dword_4B9248);
                }
                if (v10 && *v14 && (unsigned __int8)*v14 <= 2u && *(_BYTE*)(thisx + 2562) != 3)
                    sub_43FFC3((_DWORD*)dword_4BDB28, *(_DWORD*)(thisx + 2528), -1, 100, 100, 0);
                if (++ * v14 == 4)
                {
                    ++* (_BYTE*)(thisx + 2562);
                    *v14 = 0;
                    *(_DWORD*)(thisx + 2540) = 0;
                }
            }
        }
        else if (*(_DWORD*)(thisx + 2540) == 260)
        {
            sub_456D33((const CHAR*)thisx, aKkResult1Wav, 0, 0);
        }
        else if (*(_DWORD*)(thisx + 2540) == 500)
        {
            sub_456D33((const CHAR*)thisx, aKkResult2Wav, 1, 0);
            sub_47FA81((int*)(thisx + 736));
            *(_DWORD*)(thisx + 2540) = 0;
            *(_BYTE*)(thisx + 2562) = 1;
        }
        if (!*(_DWORD*)(thisx + 2540))
        {
            if (*(_BYTE*)(thisx + 2562))
            {
                if (*(_BYTE*)(thisx + 2562) == 6)
                    sub_47F9D6(thisx + 736, &byte_4B39D8, 4);
            }
            else
            {
                sub_47F9D6(thisx + 736, &byte_4B3968, 4);
            }
        }
        ++* (_DWORD*)(thisx + 2540);
    }
    sub_49C15E((int)v18);
    v18[0] = dword_4B9248;
    sub_49AB05((int)byte_4BDC60, v18);
    sub_47F211(thisx + 736);
    return sub_47F98B((_DWORD*)(thisx + 736));
}

