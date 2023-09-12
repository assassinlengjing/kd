#include "sub.h" 
int  sub_45AB5E(int thisx)
{
    int v1; // eax
    int v2; // ecx
    int v3; // esi
    int v4; // edx
    int v5; // ecx
    int v6; // ecx
    int result; // eax
    int v8; // eax
    int v9; // ecx
    int v10; // esi
    int v11; // edx
    int v12; // eax
    int v13; // ecx
    int v14; // edx
    int v15; // eax
    int v16; // edx
    char v18; // [esp+8h] [ebp-54h]
    int v19; // [esp+Ch] [ebp-50h]
    int v20; // [esp+10h] [ebp-4Ch]
    __int16 v21; // [esp+14h] [ebp-48h]
    int v22; // [esp+18h] [ebp-44h]
    int v23; // [esp+20h] [ebp-3Ch]
    int v24[14]; // [esp+24h] [ebp-38h] BYREF

    if (!*(_BYTE*)(thisx + 2516))
    {
        v1 = *(unsigned __int8*)(thisx + 2562);
        if (*(_BYTE*)(thisx + 2562))
        {
            if (*(_BYTE*)(thisx + 2562) == 1 || *(_BYTE*)(thisx + 2562) == 3)
            {
                LOBYTE(v21) = 0;
                v8 = *(unsigned __int8*)(thisx + 2562);
                if (v8 == 3)
                    v21 = *(_WORD*)(thisx + 2568);
                LOBYTE(v8) = v21;
                sub_477F0C(v8);
                LOBYTE(v9) = v21;
                v10 = sub_476D78(v9);
                LOBYTE(v11) = v21;
                v12 = sub_476D29(v11);
                v20 = v10 - v12;
                if (v10 == v12)
                {
                    LOBYTE(v12) = v21;
                    if (sub_476DC7(v12, 0))
                    {
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                        if (*(_WORD*)(thisx + 2566))
                        {
                            if (*(_WORD*)(thisx + 2566) == 1)
                            {
                                if (*(_DWORD*)(thisx + 2528))
                                {
                                    if (*(_DWORD*)(thisx + 2528) == 1)
                                    {
                                        *(_WORD*)(thisx + 2566) = 0;
                                        sub_459E91(thisx, 2);
                                    }
                                }
                                else
                                {
                                    if (*(_BYTE*)(thisx + 2562) == 1)
                                    {
                                        sub_475730((_WORD*)(thisx + 11892), *(_WORD*)(thisx + 2564) + 1);
                                        result = sub_45B65A(thisx);
                                        *(_DWORD*)(thisx + 108) = 15;
                                        *(_BYTE*)(thisx + 2516) = 2;
                                        return result;
                                    }
                                    if (*(_BYTE*)(thisx + 2562) == 3)
                                    {
                                        sub_475730(
                                            (_WORD*)(thisx + 76 * *(unsigned __int16*)(thisx + 2568) + 11816),
                                            *(_WORD*)(thisx + 2564) + 1);
                                        if (*(unsigned __int16*)(thisx + 2568) + 1 < *(unsigned __int8*)(thisx + 11968))
                                        {
                                            ++* (_WORD*)(thisx + 2568);
                                            result = thisx;
                                            *(_DWORD*)(thisx + 108) = 13;
                                            *(_BYTE*)(thisx + 2516) = 2;
                                            return result;
                                        }
                                        if (*(_BYTE*)(thisx + 11968) == 1)
                                        {
                                            *(_BYTE*)(thisx + 2562) = 1;
                                            *(_WORD*)(thisx + 2564) = 0;
                                            if ((unsigned __int16)sub_475850((short*)thisx + 11816) == 1)
                                                *(_WORD*)(thisx + 2564) = 1;
                                            *(_WORD*)(thisx + 2566) = 0;
                                            sub_459E91(thisx, -1);
                                        }
                                        else if (*(_BYTE*)(thisx + 11968) == 2)
                                        {
                                            result = sub_45B65A(thisx);
                                            *(_DWORD*)(thisx + 108) = 15;
                                            *(_BYTE*)(thisx + 2516) = 2;
                                            return result;
                                        }
                                    }
                                }
                            }
                        }
                        else
                        {
                            *(_DWORD*)(thisx + 2528) = 0;
                            *(_WORD*)(thisx + 2566) = 1;
                            sub_459E91(thisx, 2);
                        }
                    }
                    else
                    {
                        LOBYTE(v13) = v21;
                        if (sub_476DC7(v13, 1) && *(_WORD*)(thisx + 2566) == 1)
                        {
                            *(_WORD*)(thisx + 2566) = 0;
                            sub_459E91(thisx, 2);
                        }
                    }
                }
                else
                {
                    sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
                    if (*(_WORD*)(thisx + 2566))
                    {
                        if (*(_WORD*)(thisx + 2566) == 1)
                            *(_DWORD*)(thisx + 2528) = *(_DWORD*)(thisx + 2528) == 0;
                    }
                    else
                    {
                        do
                        {
                            do
                            {
                                v19 = (int)(Size + v20 + *(unsigned __int16*)(thisx + 2564)) % (int)Size;
                                *(_WORD*)(thisx + 2564) = v19;
                            } while (v19 >= 16 && v19 <= 21);
                        } while ((unsigned __int16)sub_475850((short*)thisx + 11816) && (unsigned __int16)sub_475850((short*)thisx + 11816) - 1 == v19);
                        *(_WORD*)(thisx + 2564) = v19;
                        sub_459E91(thisx, 0);
                        sub_459E91(thisx, 1);
                    }
                }
            }
            else
            {
                v14 = thisx;
                if (*(_BYTE*)(thisx + 2562) == 2)
                {
                    v18 = *(_BYTE*)(thisx + 2564);
                    if (*(_BYTE*)(thisx + 11968) == 1)
                        v18 = 0;
                    LOBYTE(v14) = v18;
                    v15 = sub_477F0C(v14);
                    LOBYTE(v15) = v18;
                    if (sub_476DC7(v15, 0))
                    {
                        sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                        if (*(_WORD*)(thisx + 2564))
                        {
                            if (*(_WORD*)(thisx + 2564) == 1)
                            {
                                *(_DWORD*)(thisx + 108) = 19;
                                *(_BYTE*)(thisx + 2516) = 2;
                            }
                        }
                        else
                        {
                            ++* (_WORD*)(thisx + 2564);
                            sub_459E91(thisx, -1);
                        }
                    }
                    else
                    {
                        LOBYTE(v16) = v18;
                        if (sub_476DC7(v16, 1))
                        {
                            sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                            if (*(_WORD*)(thisx + 2564))
                            {
                                --* (_WORD*)(thisx + 2564);
                                sub_459E91(thisx, -1);
                            }
                            else
                            {
                                *(_DWORD*)(thisx + 108) = 19;
                                *(_BYTE*)(thisx + 2516) = 2;
                            }
                        }
                    }
                }
            }
        }
        else
        {
            v23 = *(unsigned __int16*)(thisx + 2568);
            LOBYTE(v1) = *(_WORD*)(thisx + 2568);
            sub_477F0C(v1);
            LOBYTE(v2) = v23;
            v3 = sub_476D78(v2);
            LOBYTE(v4) = v23;
            if (v3 != sub_476D29(v4))
            {
                *(_DWORD*)(thisx + 2528) = *(_DWORD*)(thisx + 2528) == 0;
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B99FC[0], -1, 100, 100, 0);
            }
            v22 = 0;
            LOBYTE(v5) = v23;
            if (sub_476DC7(v5, 0))
            {
                sub_43FFC3((_DWORD*)unk_4BDB28, unk_4B9A00, -1, 100, 100, 0);
                if (*(_DWORD*)(thisx + 2528) == 1)
                {
                    v22 = 1;
                }
                else
                {
                    if (*(unsigned __int8*)(thisx + 11968) - 1 != v23)
                    {
                        *(_DWORD*)(thisx + 108) = 13;
                        *(_BYTE*)(thisx + 2516) = 2;
                        result = thisx;
                        ++* (_WORD*)(thisx + 2568);
                        return result;
                    }
                    if (*(_BYTE*)(thisx + 11968) == 1)
                    {
                        *(_BYTE*)(thisx + 2562) = 1;
                        *(_WORD*)(thisx + 2564) = 0;
                        sub_459E91(thisx, -1);
                    }
                    else
                    {
                        v6 = thisx;
                        if (*(_BYTE*)(thisx + 11968) == 2)
                        {
                            sub_45B65A(thisx);
                            result = thisx;
                            *(_DWORD*)(thisx + 108) = 15;
                            *(_BYTE*)(thisx + 2516) = 2;
                            return result;
                        }
                    }
                }
            }
            LOBYTE(v6) = v23;
            if (sub_476DC7(v6, 1))
                v22 = 1;
            if (v22)
            {
                *(_DWORD*)(thisx + 108) = 13;
                result = thisx;
                *(_BYTE*)(thisx + 2516) = 2;
                return result;
            }
        }
    }
    sub_49C15E((int)v24);
    v24[1] = 0;
    v24[2] = 0;
    v24[0] = unk_4B9248;
    sub_49AB05((int)unk_4BDC60, v24);
    if (!*(_BYTE*)(thisx + 2562))
        return sub_47B91A(56 * *(_DWORD*)(thisx + 2528) + 108, 224, asc_4B2918, 0, -1);
    if (*(_BYTE*)(thisx + 2562) == 1 && *(_WORD*)(thisx + 2566) == 1)
        return sub_47B91A(56 * *(_DWORD*)(thisx + 2528) + 68, 224, asc_4B291C, 0, -1);
    result = *(unsigned __int8*)(thisx + 2562);
    if (result == 3 && *(_WORD*)(thisx + 2566) == 1)
        return sub_47B91A(72 * *(_DWORD*)(thisx + 2528) + 68, 224, asc_4B2920, 0, -1);
    return result;
}

