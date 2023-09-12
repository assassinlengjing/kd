#include "sub.h" 
int sub_4617E5(int thisx)
{
    int v1; // esi
    int v2; // esi
    int result; // eax
    int v5; // [esp+Ch] [ebp-40h]
    int v6; // [esp+10h] [ebp-3Ch]
    int v7[14]; // [esp+14h] [ebp-38h] BYREF

    if (!*(_BYTE*)(thisx + 2516))
    {
        sub_477F0C(0);
        v1 = sub_476D78(0);
        v6 = v1 - sub_476D29(0);
        v2 = sub_476CDA(0);
        v5 = v2 - sub_476C8B(0);
        if (*(unsigned __int8*)(thisx + 2562) >= 2u)
        {
            if (*(_BYTE*)(thisx + 2562) == 2 && v6)
            {
                sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
                *(_DWORD*)(thisx + 2532) = *(_DWORD*)(thisx + 2532) == 0;
            }
        }
        else if (v6)
        {
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            *(_DWORD*)(thisx + 2528) = (*(_DWORD*)(thisx + 2528) + 3 * v6 + 6) % 6;
        }
        else if (v5)
        {
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            *(_DWORD*)(thisx + 2528) = 3 * (*(_DWORD*)(thisx + 2528) / 3) + (*(_DWORD*)(thisx + 2528) % 3 + v5 + 3) % 3;
        }
        if (sub_476DC7(0, 0))
        {
            sub_43FFC3((_DWORD*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
            if (*(_BYTE*)(thisx + 2562) || !*(_WORD*)(thisx + 2 * *(_DWORD*)(thisx + 2528) + 2564))
            {
                switch (*(_BYTE*)(thisx + 2562))
                {
                case 1:
                    *(_BYTE*)(thisx + 2562) = 2;
                    *(_DWORD*)(thisx + 2532) = 0;
                    sub_451EB5((_BYTE*)thisx, 0, 1);
                    sub_47B91A(16, 208, &byte_4B2F38, 0, dword_4B9248);
                    sub_47B91A(16, 224, &byte_4B2F64, 0, dword_4B9248);
                    break;
                case 2:
                    if (*(_DWORD*)(thisx + 2532))
                    {
                        sub_451EB5((_BYTE*)thisx, 0, 1);
                        sub_47B91A(16, 208, &byte_4B2FA4, 0, dword_4B9248);
                        *(_BYTE*)(thisx + 2562) = 1;
                    }
                    else
                    {
                        sub_460758((unsigned __int8*)thisx, *(_DWORD*)(thisx + 2528));
                        *(_BYTE*)(thisx + 13124) = *(_BYTE*)(thisx + 2528);
                        sub_461335(thisx);
                        sub_451EB5((_BYTE*)thisx, 0, 1);
                        sub_47B91A(16, 208, &byte_4B2F84, 0, dword_4B9248);
                        *(_BYTE*)(thisx + 2562) = 3;
                    }
                    break;
                case 3:
                    if (*(_DWORD*)(thisx + 112) == 1 && *(_DWORD*)(thisx + 124) == 5)
                    {
                        *(_DWORD*)(thisx + 108) = 1;
                        *(_DWORD*)(thisx + 120) = 1;
                        *(_BYTE*)(thisx + 2516) = 2;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 108) = 19;
                        *(_BYTE*)(thisx + 2562) = 1;
                        *(_BYTE*)(thisx + 2516) = 2;
                    }
                    break;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 16404) = 1;
                *(_BYTE*)(thisx + 13124) = *(_BYTE*)(thisx + 2528);
                sub_4611A8((_BYTE*)thisx, *(_DWORD*)(thisx + 2528), 0);
                *(_BYTE*)(thisx + 2562) = 0;
                if (*(_BYTE*)(thisx + 11690))
                    *(_DWORD*)(thisx + 108) = 19;
                else
                    *(_DWORD*)(thisx + 108) = 4;
                *(_BYTE*)(thisx + 2516) = 2;
            }
        }
        else if (sub_476DC7(0, 1))
        {
            if (*(_BYTE*)(thisx + 2562))
            {
                if (*(_BYTE*)(thisx + 2562) == 1)
                {
                    if (*(_DWORD*)(thisx + 112) == 1 && *(_DWORD*)(thisx + 124) == 5)
                    {
                        *(_DWORD*)(thisx + 108) = 1;
                        *(_DWORD*)(thisx + 120) = 1;
                        *(_BYTE*)(thisx + 2516) = 2;
                    }
                    else
                    {
                        *(_DWORD*)(thisx + 108) = 19;
                        *(_BYTE*)(thisx + 2562) = 1;
                        *(_BYTE*)(thisx + 2516) = 2;
                    }
                }
                else if (*(_BYTE*)(thisx + 2562) == 2)
                {
                    sub_451EB5((_BYTE*)thisx, 0, 1);
                    sub_47B91A(16, 208, &byte_4B2FD0, 0, dword_4B9248);
                    *(_BYTE*)(thisx + 2562) = 1;
                }
            }
            else
            {
                *(_DWORD*)(thisx + 16404) = 0;
                *(_DWORD*)(thisx + 108) = 3;
                *(_BYTE*)(thisx + 2516) = 2;
            }
        }
    }
    sub_49C15E((int)v7);
    v7[1] = 0;
    v7[2] = 0;
    v7[0] = dword_4B9248;
    sub_49AB05((int)byte_4BDC60, v7);
    sub_47B91A(152 * (*(_DWORD*)(thisx + 2528) / 3) + 12, 56 * (*(_DWORD*)(thisx + 2528) % 3) + 16, asc_4B2FFC, 0, -1);
    result = thisx;
    if (*(_BYTE*)(thisx + 2562) == 2)
        return sub_47B91A(48 * *(_DWORD*)(thisx + 2532) + 44, 224, asc_4B3000, 0, -1);
    return result;
}

