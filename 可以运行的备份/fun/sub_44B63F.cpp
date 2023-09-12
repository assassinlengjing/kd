#include "sub.h" 
int  sub_44B63F(int thisx, double a2, double a3, double a4)
{
    int result; // eax
    int v5; // esi
    int v7; // [esp+Ch] [ebp-168h]
    int v8; // [esp+14h] [ebp-160h]
    struct tagRECT v9; // [esp+18h] [ebp-15Ch] BYREF
    int v10; // [esp+28h] [ebp-14Ch]
    CHAR String[256]; // [esp+2Ch] [ebp-148h] BYREF
    struct tagRECT rc; // [esp+12Ch] [ebp-48h] BYREF
    int k; // [esp+13Ch] [ebp-38h]
    _BYTE* v14; // [esp+140h] [ebp-34h]
    char v15; // [esp+144h] [ebp-30h]
    int v16; // [esp+148h] [ebp-2Ch]
    Concurrency::details::SchedulerBase* v17; // [esp+14Ch] [ebp-28h]
    int v18; // [esp+150h] [ebp-24h]
    int v19; // [esp+154h] [ebp-20h]
    int v20; // [esp+158h] [ebp-1Ch]
    int i; // [esp+15Ch] [ebp-18h]
    _BYTE* v22; // [esp+160h] [ebp-14h]
    int j; // [esp+164h] [ebp-10h]
    unsigned __int8* v24; // [esp+168h] [ebp-Ch]
    int v25; // [esp+16Ch] [ebp-8h]
    int v26; // [esp+170h] [ebp-4h]

    v24 = sub_463101((unsigned __int8*)thisx, *(_DWORD*)(thisx + 2524), 0);
    v25 = -1;
    LOBYTE(v26) = 0;
    if (v24)
    {
        v25 = (unsigned __int8)sub_425EF0((char*)v24);
        LOBYTE(v26) = *(_BYTE*)(thisx + *(_DWORD*)(thisx + 2524) + 2546);
    }
    if (*(int*)(thisx + 2520) < 241)
        ++* (_DWORD*)(thisx + 2520);
    if (*(_DWORD*)(thisx + 2520) == 25)
    {
        if (*(_DWORD*)(thisx + 116) == 3)
        {
            if (*(_DWORD*)(thisx + 11376) <= *(_DWORD*)(thisx + 4 * *(unsigned __int8*)(thisx + 11372) + 11380))
                sub_456D33((const CHAR*)thisx, aLoseWav, 0, 0);
            else
                sub_456D33((const CHAR*)thisx, aWinWav, 0, 0);
        }
        else if (*(int*)(thisx + 2524) < 0 || sub_41BEA6((int*)v24))
        {
            if (sub_425E70((_BYTE*)(thisx + 3852)) == 1)
                sub_456D33((const CHAR*)thisx, aLoseMisuzuWav, 0, 0);
            else
                sub_456D33((const CHAR*)thisx, aLoseWav_0, 0, 0);
        }
        else
        {
            sub_456D33((const CHAR*)thisx, aWinWav_0, 0, 0);
        }
    }
    else if (*(_DWORD*)(thisx + 2520) == 240)
    {
        *(_DWORD*)(thisx + 2528) = 0;
        if (!dword_4B9974)
        {
            if (*(_DWORD*)(thisx + 116))
            {
                if (*(_DWORD*)(thisx + 116) == 4)
                {
                    *(_DWORD*)(thisx + 108) = 24;
                    *(_BYTE*)(thisx + 2516) = 2;
                    ++* (_BYTE*)(thisx + 2476);
                    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
                    {
                        v17 = (Concurrency::details::SchedulerBase*)(thisx + 612 * (unsigned __int8)byte_4B9988[i] + 2628);
                        LOBYTE(v20) = sub_426070((char*)v17);
                        v18 = thisx + 244 * (unsigned __int8)v20 + 1392;
                        v15 = *(_BYTE*)(v18 + i % (*(_DWORD*)(thisx + 2368) + 1) + 240);
                        v16 = 28 * v15 + v18;
                        v19 = sub_474E70((int*)v17);
                        *(_WORD*)(v16 + 6) += v19;
                        if (*(__int16*)(v16 + 22) < v19)
                            *(_WORD*)(v16 + 22) = v19;
                        if (*(__int16*)(v16 + 24) > v19)
                            *(_WORD*)(v16 + 24) = v19;
                        *(_BYTE*)(v16 + 26) += sub_475610((char*)v17);
                        ++* (_BYTE*)(v16 + 20);
                        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(v17) == (struct Concurrency::ISchedulerProxy*)80)
                        {
                            if ((unsigned __int16)sub_474EB0((short*)v17))
                                *(_WORD*)(v16 + 8) = (unsigned __int16)sub_474EB0((short*)v17) / 2;
                            else
                                *(_WORD*)(v16 + 8) = 16;
                        }
                        else
                        {
                            *(_WORD*)(v16 + 8) = sub_474EB0((short*)v17);
                        }
                        *(_DWORD*)(v18 + 168) += *(__int16*)(v16 + 6);
                        if (!sub_425FF0((int*)v17)
                            || Concurrency::details::SchedulerBase::GetSchedulerProxy(v17) == (struct Concurrency::ISchedulerProxy*)80)
                        {
                            *(_BYTE*)(v16 + 10) = 0;
                            *(_BYTE*)(v16 + 11) = 0;
                        }
                        else
                        {
                            v14 = (_BYTE*)sub_426910((int*)v17);
                            *(_BYTE*)(v16 + 10) = sub_425CB0(v14) + 1;
                            *(_BYTE*)(v16 + 11) = sub_43E620((short*)v14);
                        }
                    }
                }
                else if (*(_DWORD*)(thisx + 116) == 3
                    && *(_DWORD*)(thisx + 11376) > *(_DWORD*)(thisx + 4 * *(unsigned __int8*)(thisx + 11372) + 11380))
                {
                    *(_DWORD*)(thisx + 4 * *(unsigned __int8*)(thisx + 11372) + 11380) = *(_DWORD*)(thisx + 11376);
                }
            }
            else
            {
                for (j = 0; j < 2; ++j)
                {
                    if (sub_425FF0((int*)thisx + 612 * j + 2628))
                    {
                        v22 = (_BYTE*)sub_426910((int*)thisx + 612 * j + 2628);
                        *(_BYTE*)(j + thisx + 11808) = sub_425CB0(v22) + 1;
                        *(_BYTE*)(j + thisx + 11810) = sub_43E620((short*)v22);
                    }
                    else
                    {
                        *(_BYTE*)(j + thisx + 11808) = 0;
                        *(_BYTE*)(j + thisx + 11810) = 0;
                    }
                }
                *(_DWORD*)(thisx + 108) = 16;
                *(_BYTE*)(thisx + 2516) = 2;
            }
        }
    }
    sub_488981((int*)thisx + 128);
    sub_486476((_DWORD*)(thisx + 128));
    if (*(int*)(thisx + 2524) >= 0)
    {
        for (k = 0; k < (unsigned __int8)byte_4B9985; ++k)
        {
            if ((unsigned __int8)sub_426070((_BYTE*)(thisx + 612 * k + 2628)) == *(_DWORD*)(thisx + 2524)
                && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)(thisx + 612 * k + 2628)) != (struct Concurrency::ISchedulerProxy*)80)
            {
                if (unknown_libname_7((_DWORD*)(thisx + 612 * k + 2628)))
                {
                    sub_41BEBA(thisx + 612 * k + 2628);
                    sub_402C05(thisx + 612 * k + 2628);
                    sub_408F50(thisx + 612 * k + 2628, a2, a3, a4, 0);
                    sub_4126CE(thisx + 612 * k + 2628, a2, a3, a4);
                    sub_417780(thisx + 612 * k + 2628);
                }
            }
        }
    }
    sub_44325C(thisx);
    result = sub_443E80(thisx);
    if (*(int*)(thisx + 2520) < 240 && *(_DWORD*)(thisx + 116) != 3)
    {
        SetRect(&rc, 0, 168, 320, 176);
        result = sub_49EF70((int)byte_4BDC60, (int*)&rc, 0, 0, 0, 0x20u);
    }
    if (*(int*)(thisx + 2520) < 240)
    {
        result = *(_DWORD*)(thisx + 2520) / 10 % 2;
        if (result)
        {
            v10 = 160;
            if (*(_DWORD*)(thisx + 116) == 3)
            {
                if (!dword_4B9974)
                {
                    result = *(unsigned __int8*)(thisx + 11372);
                    if (*(_DWORD*)(thisx + 11376) > *(_DWORD*)(thisx + 4 * result + 11380))
                        return sub_47B91A(140, 224, &byte_4B0B10, 0, -1);
                }
            }
            else if (*(int*)(thisx + 2524) < 0)
            {
                return sub_47B7ED(v10, 168, ::String, 2, -1);
            }
            else
            {
                if (sub_425E70((char*)v24) == 1)
                {
                    wsprintfA(String, aMisuzuWin);
                }
                else if (*(_DWORD*)(thisx + 116))
                {
                    if (sub_41BEA6((int*)v24))
                    {
                        if ((unsigned __int8)v26 == 1)
                            wsprintfA(String, aCpuWin);
                        else
                            wsprintfA(String, aCpuTeamWin);
                    }
                    else if ((unsigned __int8)v26 == 1)
                    {
                        wsprintfA(String, "%dP WIN!!", v25 + 1);
                    }
                    else
                    {
                        wsprintfA(String, "%dP TEAM WIN!!", v25 + 1);
                    }
                }
                else if (sub_41BEA6((int*)v24))
                {
                    wsprintfA(String, aYourTeamLose);
                }
                else
                {
                    wsprintfA(String, aYourTeamWin);
                }
                return sub_47B7ED(v10, 168, String, 2, -1);
            }
            return result;
        }
    }
    if (*(int*)(thisx + 2520) >= 240)
    {
        if ((result = thisx, *(_DWORD*)(thisx + 116)) && *(_DWORD*)(thisx + 116) != 4 || dword_4B9974)
        {
            sub_477F0C(0);
            v5 = sub_476CDA(0);
            v8 = v5 - sub_476C8B(0);
            v7 = 3;
            if (dword_4B9974)
                v7 = 1;
            if (v8)
            {
                *(_DWORD*)(thisx + 2528) += v8;
                if (*(int*)(thisx + 2528) >= 0)
                {
                    if (*(_DWORD*)(thisx + 2528) > v7)
                        *(_DWORD*)(thisx + 2528) = 0;
                }
                else
                {
                    *(_DWORD*)(thisx + 2528) = v7;
                }
                sub_43FFC3((int*)dword_4BDB28, dword_4B99FC[0], -1, 100, 100, 0);
            }
            SetRect(&v9, 100, 60, 208, 8 * (2 * v7 + 2) + 68);
            sub_49EDC1((int)byte_4BDC60, (int)&v9, (int*)&v9, 0);
            if (dword_4B9974)
            {
                sub_47B91A(120, 68, &byte_4B0B24, 0, -1);
                sub_47B91A(120, 84, &byte_4B0B38, 0, -1);
            }
            else
            {
                sub_47B91A(120, 68, &byte_4B0B50, 0, -1);
                sub_47B91A(120, 84, &byte_4B0B60, 0, -1);
                sub_47B91A(120, 100, &byte_4B0B74, 0, -1);
                sub_47B91A(120, 116, &byte_4B0B8C, 0, -1);
            }
            sub_47B91A(108, 16 * *(_DWORD*)(thisx + 2528) + 68, asc_4B0BA0, 0, -1);
            result = sub_476DC7(0, 0);
            if (result)
            {
                sub_43FFC3((int*)dword_4BDB28, dword_4B9A00, -1, 100, 100, 0);
                result = thisx;
                if (!*(_DWORD*)(thisx + 2528))
                {
                    if (!dword_4B9974)
                    {
                        *(_BYTE*)(thisx + 2516) = 2;
                        *(_DWORD*)(thisx + 108) = 11;
                        return result;
                    }
                    return sub_453B66(thisx);
                }
                result = thisx;
                if (*(_DWORD*)(thisx + 2528) == 1)
                {
                    if (dword_4B9974)
                    {
                        *(_BYTE*)(thisx + 2516) = 2;
                        *(_DWORD*)(thisx + 108) = 11;
                    }
                    else
                    {
                        result = thisx;
                        *(_BYTE*)(thisx + 2516) = 2;
                        *(_DWORD*)(thisx + 108) = 9;
                    }
                    return result;
                }
                if (*(_DWORD*)(thisx + 2528) != 2)
                {
                    result = thisx;
                    if (*(_DWORD*)(thisx + 2528) != 3)
                        return result;
                    return sub_453B66(thisx);
                }
                result = thisx;
                *(_BYTE*)(thisx + 2516) = 2;
                *(_DWORD*)(thisx + 108) = 8;
                if (*(_DWORD*)(thisx + 116) == 3)
                {
                    byte_4B9985 = 1;
                    byte_4B9987 = 0;
                }
            }
        }
    }
    return result;
}

