#include "sub.h" 
char* sub_447276(char* thisx, int a2)
{
    char v3; // al
    int v4; // [esp+0h] [ebp-3Ch]
    int v5; // [esp+4h] [ebp-38h]
    int v6; // [esp+8h] [ebp-34h]
    int SchedulerProxy; // [esp+10h] [ebp-2Ch]
    int v9; // [esp+14h] [ebp-28h]
    int v10; // [esp+18h] [ebp-24h]
    int v11; // [esp+1Ch] [ebp-20h]
    int v12; // [esp+24h] [ebp-18h]
    int i; // [esp+28h] [ebp-14h]
    int v14; // [esp+2Ch] [ebp-10h]
    int v15; // [esp+30h] [ebp-Ch]
    int v16; // [esp+34h] [ebp-8h]
    unsigned __int8 v17; // [esp+38h] [ebp-4h]

    if (sub_425D30((_DWORD*)a2) || sub_426410((_DWORD*)a2) || sub_425D50((_DWORD*)a2))
        return 0;
    v12 = sub_426090((_DWORD*)a2);
    v14 = sub_4260B0((_DWORD*)a2);
    v15 = sub_4260D0((_DWORD*)a2);
    v17 = sub_425EF0((char*)a2);
    v16 = 0;
    if (sub_425E70((char*)a2) == 1)
    {
        v16 = 3200;
    }
    else
    {
        v3 = sub_4264F0((char*)a2);
        if (v3 && v3 != 1)
        {
            if (v3 == 2)
            {
                v16 = 1200;
            }
            else if (v3 == 3)
            {
                v16 = 2400;
            }
        }
        else
        {
            v16 = 1600;
        }
    }
    for (i = 0; i < 8; ++i)
    {
        if (!sub_475150((_DWORD*)&thisx[153 * i + 657])
            && !sub_426430((_DWORD*)&thisx[153 * i + 657])
            && i != v17
            && unknown_libname_7((_DWORD*)&thisx[153 * i + 657])
            && !sub_4263D0((unsigned __int8*)&thisx[153 * i + 657])
            && !sub_41BE56((_DWORD*)&thisx[153 * i + 657])
            && !sub_425D50((_DWORD*)&thisx[153 * i + 657])
            && !sub_426410((_DWORD*)&thisx[153 * i + 657]))
        {
            v10 = sub_426090((_DWORD*)&thisx[153 * i + 657]);
            v11 = sub_4260B0((_DWORD*)&thisx[153 * i + 657]);
            v9 = sub_4260D0((_DWORD*)&thisx[153 * i + 657]);
            v6 = v12 - v10 <= 0 ? v10 - v12 : v12 - v10;
            if (v6 <= v16)
            {
                v5 = v14 - v11 <= 0 ? v11 - v14 : v14 - v11;
                if (v5 <= 500)
                {
                    v4 = v15 - v9 <= 0 ? v9 - v15 : v15 - v9;
                    if (v4 <= 800
                        && !sub_425D30((_DWORD*)&thisx[153 * i + 657])
                        && (sub_425D70((int*)a2) && v10 - v12 > 0 || !sub_425D70((int*)a2) && v10 - v12 < 0))
                    {
                        SchedulerProxy = (int)SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]);
                        if (SchedulerProxy != 44
                            && SchedulerProxy != 45
                            && SchedulerProxy != 46
                            && SchedulerProxy != 47
                            && SchedulerProxy != 42
                            && SchedulerProxy != 14
                            && SchedulerProxy != 48
                            && SchedulerProxy != 52
                            && SchedulerProxy != 53
                            && SchedulerProxy != 54
                            && SchedulerProxy != 55
                            && SchedulerProxy != 56
                            && SchedulerProxy != 57
                            && SchedulerProxy != 58
                            && SchedulerProxy != 59
                            && SchedulerProxy != 60
                            && SchedulerProxy != 62
                            && SchedulerProxy != 63
                            && SchedulerProxy != 64
                            && SchedulerProxy != 75
                            && SchedulerProxy != 78
                            && SchedulerProxy != 79
                            && SchedulerProxy != 26
                            && SchedulerProxy != 82
                            && SchedulerProxy != 85
                            && SchedulerProxy < 123)
                        {
                            return &thisx[153 * i + 657];
                        }
                    }
                }
            }
        }
    }
    return 0;
}

