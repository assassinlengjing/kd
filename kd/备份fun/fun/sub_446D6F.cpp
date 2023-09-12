#include "sub.h" 
_DWORD* sub_446D6F(_DWORD* thisx, SchedulerBase* a2)
{
    int v3; // esi
    int v4; // eax
    int* v5; // eax
    int v6; // eax
    int* v7; // eax
    int v8; // [esp+4h] [ebp-80h]
    int v9; // [esp+8h] [ebp-7Ch]
    int v10; // [esp+Ch] [ebp-78h]
    int v11; // [esp+10h] [ebp-74h]
    int v13[4]; // [esp+1Ch] [ebp-68h] BYREF
    int v14[4]; // [esp+2Ch] [ebp-58h] BYREF
    int v15; // [esp+3Ch] [ebp-48h]
    int v16; // [esp+40h] [ebp-44h]
    int v17; // [esp+44h] [ebp-40h]
    int v18; // [esp+48h] [ebp-3Ch]
    int v19; // [esp+4Ch] [ebp-38h]
    int v20; // [esp+50h] [ebp-34h]
    char* v21; // [esp+54h] [ebp-30h]
    struct Concurrency::ISchedulerProxy* v22; // [esp+58h] [ebp-2Ch]
    int v23; // [esp+5Ch] [ebp-28h]
    int v24; // [esp+60h] [ebp-24h]
    int v25; // [esp+64h] [ebp-20h]
    int v26; // [esp+68h] [ebp-1Ch]
    int i; // [esp+6Ch] [ebp-18h]
    int v28; // [esp+70h] [ebp-14h]
    int v29; // [esp+74h] [ebp-10h]
    int v30; // [esp+78h] [ebp-Ch]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+7Ch] [ebp-8h]
    int v32; // [esp+80h] [ebp-4h]

    if (sub_425D30((_DWORD*)a2) || sub_426410((_DWORD*)a2) || sub_425D50((_DWORD*)a2))
        return 0;
    SchedulerProxy = SchedulerBase::GetSchedulerProxy(a2);
    if (SchedulerProxy != (struct Concurrency::ISchedulerProxy*)3
        && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)4
        && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)5
        && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)6)
    {
        return 0;
    }
    v26 = sub_426090((_DWORD*)a2);
    v28 = sub_4260B0((_DWORD*)a2);
    v29 = sub_4260D0((_DWORD*)a2);
    LOBYTE(v32) = sub_425EF0((char*)a2);
    v30 = 2400;
    switch (sub_4264F0((char*)a2))
    {
    case 0:
        v30 = 2400;
        break;
    case 1:
        v30 = 1600;
        break;
    case 2:
        v30 = 1200;
        break;
    case 3:
        v30 = 3200;
        break;
    case 4:
        v30 = 3600;
        break;
    default:
        break;
    }
    for (i = 0; i < 8; ++i)
    {
        if (!sub_475150(&thisx[153 * i + 657]) && !sub_426430(&thisx[153 * i + 657]) && i != (unsigned __int8)v32)
        {
            if (unknown_libname_7(&thisx[153 * i + 657]))
            {
                if (!sub_4263D0((unsigned __int8*)&thisx[153 * i + 657]) && !sub_41BE56(&thisx[153 * i + 657]))
                {
                    v3 = sub_425D70((_DWORD*)a2);
                    if (v3 != sub_425D70(&thisx[153 * i + 657]))
                    {
                        v24 = sub_426090(&thisx[153 * i + 657]);
                        v25 = sub_4260B0(&thisx[153 * i + 657]);
                        v23 = sub_4260D0(&thisx[153 * i + 657]);
                        v21 = (char*)sub_41C915((int)&thisx[153 * i + 657]);
                        if (v21)
                        {
                            v4 = sub_425D70(&thisx[153 * i + 657]);
                            v5 = sub_425BD0(v21, v14, v4, 0);
                            v17 = *v5;
                            v18 = v5[1];
                            v19 = v5[2];
                            v20 = v5[3];
                            v16 = 0;
                            if (sub_425D70(&thisx[153 * i + 657]) || v17 >= 0)
                            {
                                if (sub_425D70(&thisx[153 * i + 657]) && v19 > 0)
                                    v16 = 100 * v19;
                            }
                            else
                            {
                                v16 = 100 * v17;
                            }
                            v6 = sub_425D70(&thisx[153 * i + 657]);
                            v7 = sub_425B90(v21, v13, v6, 0);
                            v17 = *v7;
                            v18 = v7[1];
                            v19 = v7[2];
                            v20 = v7[3];
                            v15 = 0;
                            if (sub_425D70(&thisx[153 * i + 657]) || v17 >= 0)
                            {
                                if (sub_425D70(&thisx[153 * i + 657]) && v19 > 0)
                                    v15 = 100 * v19;
                            }
                            else
                            {
                                v15 = 100 * v17;
                            }
                            if (v16 <= 0)
                                v11 = -v16;
                            else
                                v11 = v16;
                            if (v15 <= 0)
                                v10 = -v15;
                            else
                                v10 = v15;
                            if (v11 <= v10)
                                v24 += v15;
                            else
                                v24 += v16;
                        }
                        v9 = v26 - v24 <= 0 ? v24 - v26 : v26 - v24;
                        if (v9 <= v30)
                        {
                            v8 = v28 - v25 <= 0 ? v25 - v28 : v28 - v25;
                            if (v8 <= 500 && v29 == v23 && (sub_425D70((_DWORD*)a2) && v24 - v26 > 0 || !sub_425D70((_DWORD*)a2) && v24 - v26 < 0))
                            {
                                v22 = SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]);
                                if ((v22 == (struct Concurrency::ISchedulerProxy*)10
                                    || v22 == (struct Concurrency::ISchedulerProxy*)126
                                    || v22 == (struct Concurrency::ISchedulerProxy*)125
                                    || v22 == (struct Concurrency::ISchedulerProxy*)135
                                    || v22 == (struct Concurrency::ISchedulerProxy*)89
                                    || v22 == (struct Concurrency::ISchedulerProxy*)188)
                                    && !sub_425D50(&thisx[153 * i + 657])
                                    && !sub_426410(&thisx[153 * i + 657]))
                                {
                                    return &thisx[153 * i + 657];
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}
