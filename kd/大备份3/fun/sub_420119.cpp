#include "sub.h" 
int sub_420119(int thisx)
{
    int result; // eax
    int v2; // eax
    int v3; // et2
    int v4; // edx
    int v6; // eax
    int v7; // et2
    int v8; // esi
    int v9; // esi
    int v10; // esi
    int v11; // edx
    int v12; // edx
    int v13; // eax
    int v14; // et2
    int v15; // eax
    int v16; // et2
    int v17; // eax
    int v18; // et2
    int v19; // eax
    int v20; // et2
    int v21; // eax
    int v22; // et2
    int v23; // eax
    int v24; // et2
    unsigned int v25; // [esp+4h] [ebp-78h]
    int v26; // [esp+8h] [ebp-74h]
    int v27; // [esp+Ch] [ebp-70h]
    int v28; // [esp+10h] [ebp-6Ch]
    int v30; // [esp+24h] [ebp-58h]
    int v31; // [esp+2Ch] [ebp-50h]
    unsigned __int8 v32; // [esp+34h] [ebp-48h]
    _BYTE* v33; // [esp+38h] [ebp-44h]
    int v34; // [esp+3Ch] [ebp-40h]
    char v35; // [esp+40h] [ebp-3Ch]
    int v36; // [esp+44h] [ebp-38h]
    int v37; // [esp+48h] [ebp-34h]
    int v38; // [esp+4Ch] [ebp-30h]
    int v39; // [esp+50h] [ebp-2Ch]
    int v40; // [esp+5Ch] [ebp-20h]
    char v41; // [esp+64h] [ebp-18h]
    int v42; // [esp+70h] [ebp-Ch]
    int SchedulerProxy; // [esp+74h] [ebp-8h]

    v35 = sub_425E70(*(_BYTE**)(thisx + 124));
    v40 = sub_426090(*(_DWORD**)(thisx + 124));
    v39 = sub_4260B0(*(_DWORD**)(thisx + 124));
    result = v40 / 100 - sub_446465((char*)unk_4B9B10);
    if (result > 0 && result < 320)
    {
        if (sub_425FF0(*(_DWORD**)(thisx + 124)))
        {
            v33 = (_BYTE*)sub_426910(*(_DWORD**)(thisx + 124));
            if (*(_BYTE*)(thisx + 87))
            {
                if (sub_494AA9(v33, 1))
                {
                    result = sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 32, 0);
                    if (result)
                    {
                        *(_BYTE*)(thisx + 143) = 1;
                        return result;
                    }
                }
            }
            if (!*(_BYTE*)(thisx + 88) && rand() % 1000 <= *(unsigned __int8*)(thisx + 98))
            {
                result = sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 128, 1);
                if (result)
                {
                    *(_BYTE*)(thisx + 144) = 1;
                    return result;
                }
            }
        }
        else if (rand() % 100 < 5
            && sub_41BA53(*(_DWORD*)(thisx + 124), 0x23u, 0)
            && sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 32, 0))
        {
            *(_BYTE*)(thisx + 85) = 2;
        }
        if (sub_425FF0(*(_DWORD**)(thisx + 124)))
        {
            if (sub_425D30(*(_DWORD**)(thisx + 124)))
            {
                if ((*(_BYTE*)(thisx + 88) & 2) != 0)
                {
                    result = sub_426350(*(unsigned __int8**)(thisx + 124));
                    if (result)
                    {
                        *(_BYTE*)(thisx + 144) = 1;
                        return result;
                    }
                }
            }
            else
            {
                if (rand() % 2)
                {
                    if ((*(_BYTE*)(thisx + 88) & 1) != 0)
                    {
                        result = sub_426350(*(unsigned __int8**)(thisx + 124));
                        if (result)
                        {
                            *(_BYTE*)(thisx + 144) = 1;
                            return result;
                        }
                    }
                }
                if ((*(_BYTE*)(thisx + 88) & 2) != 0
                    && sub_426350(*(unsigned __int8**)(thisx + 124))
                    && Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(*(Concurrency::details::SchedulerBase**)(thisx + 124)))
                {
                    *(_BYTE*)(thisx + 147) = 2;
                    *(_BYTE*)(thisx + 144) = 1;
                    result = thisx;
                    *(_BYTE*)(thisx + 143) = 1;
                    *(_BYTE*)(thisx + 148) = 0;
                    return result;
                }
            }
        }
        SchedulerProxy = (int)Concurrency::details::SchedulerBase::GetSchedulerProxy(*(Concurrency::details::SchedulerBase**)(thisx + 124));
        v42 = SchedulerProxy;
        if (SchedulerProxy == 188)
            SchedulerProxy = 10;
        if (sub_425D30(*(_DWORD**)(thisx + 124)) || sub_425FF0(*(_DWORD**)(thisx + 124)))
        {
            result = sub_425D30(*(_DWORD**)(thisx + 124));
            if (result)
            {
                result = sub_425FF0(*(_DWORD**)(thisx + 124));
                if (!result)
                {
                    if (SchedulerProxy == 8 && sub_41BA53(*(_DWORD*)(thisx + 124), 7u, 0))
                    {
                        if (sub_426930(*(_DWORD**)(thisx + 124)) >= 0 ? sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 64, 1) : sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 128, 1))
                            *(_BYTE*)(thisx + 142) = 1;
                    }
                    if (sub_41BA53(*(_DWORD*)(thisx + 124), 0x25u, 0)
                        && rand() % 100 < 5
                        && sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 80, 1))
                    {
                        *(_BYTE*)(thisx + 142) = 1;
                        *(_BYTE*)(thisx + 143) = 1;
                    }
                    if (!sub_4268D0(*(_DWORD**)(thisx + 124)) && sub_41BA53(*(_DWORD*)(thisx + 124), 0x26u, 0))
                    {
                        *(_BYTE*)(thisx + 142) = 1;
                        *(_BYTE*)(thisx + 143) = 1;
                        *(_BYTE*)(thisx + 144) = 1;
                    }
                    result = sub_4268D0(*(_DWORD**)(thisx + 124));
                    if (result)
                    {
                        v6 = rand();
                        v7 = v6 % 100;
                        result = v6 / 100;
                        if (v7 < 2)
                        {
                            *(_BYTE*)(thisx + 142) = 1;
                            result = thisx;
                            *(_BYTE*)(thisx + 143) = 1;
                            *(_BYTE*)(thisx + 144) = 1;
                        }
                    }
                }
            }
        }
        else
        {
            if (SchedulerProxy == 13
                && (*(_BYTE*)(thisx + 91) || *(_BYTE*)(thisx + 92))
                && rand() % 100 < 20
                && sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 128, 1))
            {
                if (*(_BYTE*)(thisx + 91) && *(_BYTE*)(thisx + 92))
                {
                    if (rand() % 100 >= *(unsigned __int8*)(thisx + 95))
                        *(_BYTE*)(thisx + 144) = 1;
                    else
                        *(_BYTE*)(thisx + 143) = 1;
                }
                else if (*(_BYTE*)(thisx + 91))
                {
                    *(_BYTE*)(thisx + 143) = 1;
                }
                else
                {
                    *(_BYTE*)(thisx + 144) = 1;
                }
            }
            if (v42 == 10
                && sub_41BA53(*(_DWORD*)(thisx + 124), 0x36u, 0)
                && rand() % 100 < 10
                && sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 128, 1))
            {
                *(_BYTE*)(thisx + 84) = 1;
            }
            if (SchedulerProxy == 10
                && rand() % 100 < 10
                && sub_41BA53(*(_DWORD*)(thisx + 124), 0x19u, 0)
                && sub_457731((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124)))
            {
                *(_BYTE*)(thisx + 84) = 1;
            }
            if (SchedulerProxy != 162 && *(_BYTE*)(thisx + 89) == 1 && !*(_BYTE*)(thisx + 143) && rand() % 100 < 5)
                *(_BYTE*)(thisx + 143) = 20;
            if (SchedulerProxy == 91)
                *(_BYTE*)(thisx + 143) = sub_425ED0(*(_DWORD**)(thisx + 124)) < 37
                || !sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 320, 1);
            v32 = sub_4268F0(*(_BYTE**)(thisx + 124));
            if (v32 < 3u
                && SchedulerProxy != 163
                && *(_BYTE*)(thisx + 89) == 2
                && !*(_BYTE*)(thisx + 143)
                && rand() % 100 < 5)
            {
                *(_BYTE*)(thisx + 143) = 20;
            }
            if (SchedulerProxy == 92)
            {
                if (v32 == 3 || v32 && sub_4655EF((_DWORD*)unk_4B9B10, *(_DWORD**)(thisx + 124), 32, 0))
                {
                    *(_BYTE*)(thisx + 143) = 0;
                    if (v32 == 3)
                        *(_BYTE*)(thisx + 145) = 1;
                }
                else
                {
                    *(_BYTE*)(thisx + 143) = 1;
                }
            }
            result = *(unsigned __int8*)(thisx + 90);
            if (*(_BYTE*)(thisx + 90))
            {
                if (SchedulerProxy == 94 || SchedulerProxy == 176)
                {
                    if (SchedulerProxy == 94)
                    {
                        v31 = sub_425ED0(*(_DWORD**)(thisx + 124));
                        result = *(_DWORD*)(thisx + 80);
                        if (result <= v31)
                            *(_BYTE*)(thisx + 143) = 1;
                    }
                }
                else
                {
                    v2 = rand();
                    v3 = v2 % 100;
                    result = v2 / 100;
                    if (v3 < 3)
                    {
                        result = sub_420CD4();
                        if (result > 0)
                        {
                            *(_BYTE*)(thisx + 85) = 1;
                            v4 = 30 * (rand() % 9);
                            result = thisx;
                            *(_DWORD*)(thisx + 80) = v4 + 60;
                        }
                    }
                }
            }
            if (SchedulerProxy == 15)
            {
                result = sub_41BA53(*(_DWORD*)(thisx + 124), 0x27u, 0);
                if (result)
                {
                    result = thisx;
                    *(_BYTE*)(thisx + 85) = 1;
                }
            }
        }
        if (*(_DWORD*)(thisx + 128))
        {
            v41 = sub_4464D3((int)unk_4B9B10, v40 / 800, v39 / 800);
            v34 = sub_426090(*(_DWORD**)(thisx + 128));
            v36 = sub_4260B0(*(_DWORD**)(thisx + 128));
            if (v40 - v34 <= 0)
                v28 = v34 - v40;
            else
                v28 = v40 - v34;
            if (v39 - v36 <= 0)
                v27 = v36 - v39;
            else
                v27 = v39 - v36;
            v8 = sub_4260D0(*(_DWORD**)(thisx + 124));
            if (v8 - sub_4260D0(*(_DWORD**)(thisx + 128)) <= 0)
            {
                v10 = sub_4260D0(*(_DWORD**)(thisx + 124));
                v26 = sub_4260D0(*(_DWORD**)(thisx + 128)) - v10;
            }
            else
            {
                v9 = sub_4260D0(*(_DWORD**)(thisx + 124));
                v26 = v9 - sub_4260D0(*(_DWORD**)(thisx + 128));
            }
            sub_4260D0(*(_DWORD**)(thisx + 124));
            sub_4260D0(*(_DWORD**)(thisx + 128));
            if (rand() % 100 < 10)
            {
                if (v41)
                {
                    if (!(unsigned __int8)sub_4263F0(*(char**)(thisx + 124))
                        && !sub_425FF0(*(_DWORD**)(thisx + 124))
                        && !sub_425D30(*(_DWORD**)(thisx + 124)))
                    {
                        v30 = sub_425D70(*(_DWORD**)(thisx + 124));
                        if ((v41 & 1) == (v30 == 0) && v28 < 4800 && v27 < 500 && (v30 && v40 < v34 || !v30 && v40 > v34))
                            *(_BYTE*)(thisx + 85) = 2;
                    }
                }
            }
            v37 = 3200;
            v38 = 800;
            result = (unsigned __int8)sub_425E70(*(_BYTE**)(thisx + 124));
            if (result == 1)
            {
                v37 = 4000;
                v38 = 4000;
            }
            if (SchedulerProxy == 10)
            {
                if ((int)Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(thisx + 124)) <= 0)
                    v25 = -Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(thisx + 124));
                else
                    v25 = Concurrency::details::SchedulerBase::Id(*(Concurrency::details::SchedulerBase**)(thisx + 124));
                result = 10 * v25 + v37;
                v37 = result;
            }
            if (v28 >= 400 && v28 < v37 && v27 < 500 && v26 < v38)
            {
                if (sub_425FF0(*(_DWORD**)(thisx + 124)))
                {
                    v11 = (unsigned __int8)(rand() % 100);
                    result = thisx;
                    if (v11 >= *(unsigned __int8*)(thisx + 97))
                    {
                        result = thisx;
                        *(_BYTE*)(thisx + 144) = 1;
                    }
                    else
                    {
                        *(_BYTE*)(thisx + 143) = 1;
                    }
                }
                else
                {
                    v12 = (unsigned __int8)(rand() % 100);
                    result = thisx;
                    if (v12 >= *(unsigned __int8*)(thisx + 95))
                    {
                        result = thisx;
                        *(_BYTE*)(thisx + 144) = 1;
                    }
                    else
                    {
                        *(_BYTE*)(thisx + 143) = 1;
                    }
                }
            }
            if (v35)
            {
                if (v35 == 2)
                {
                    if (sub_425D30(*(_DWORD**)(thisx + 124)))
                    {
                        v13 = rand();
                        v14 = v13 % 100;
                        result = v13 / 100;
                        if (v14 < 10 && v28 < 3200 && v27 < 800)
                            *(_DWORD*)(thisx + 8) = 3;
                    }
                    else
                    {
                        v15 = rand();
                        v16 = v15 % 100;
                        result = v15 / 100;
                        if (v16 < 10 && v28 < 6400 && v27 < 500)
                        {
                            v17 = rand();
                            v18 = v17 % 3;
                            result = v17 / 3;
                            if (v18)
                            {
                                result = thisx;
                                *(_DWORD*)(thisx + 8) = 1;
                            }
                            else
                            {
                                *(_DWORD*)(thisx + 8) = 2;
                            }
                        }
                    }
                }
                else if (v35 == 3)
                {
                    if (sub_425D30(*(_DWORD**)(thisx + 124)))
                    {
                        v19 = rand();
                        v20 = v19 % 100;
                        result = v19 / 100;
                        if (v20 < 10 && v28 < 3200 && v27 < 800)
                            *(_DWORD*)(thisx + 8) = 3;
                    }
                    else
                    {
                        v21 = rand();
                        v22 = v21 % 100;
                        result = v21 / 100;
                        if (v22 < 10 && v28 < 3200 && v27 < 500)
                        {
                            v23 = rand();
                            v24 = v23 % 3;
                            result = v23 / 3;
                            if (v24)
                            {
                                result = thisx;
                                *(_DWORD*)(thisx + 8) = 1;
                            }
                            else
                            {
                                *(_DWORD*)(thisx + 8) = 2;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}

