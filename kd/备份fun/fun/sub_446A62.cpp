#include "sub.h" 
int sub_446A62(_DWORD* thisx, _DWORD* a2, char a3)
{
    int v4; // [esp+4h] [ebp-44h]
    int v5; // [esp+8h] [ebp-40h]
    int v7; // [esp+10h] [ebp-38h]
    int v8; // [esp+14h] [ebp-34h]
    _BYTE* v9; // [esp+18h] [ebp-30h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+1Ch] [ebp-2Ch]
    int v11; // [esp+20h] [ebp-28h]
    int v12; // [esp+24h] [ebp-24h]
    int v13; // [esp+28h] [ebp-20h]
    int v14; // [esp+2Ch] [ebp-1Ch]
    int i; // [esp+30h] [ebp-18h]
    int v16; // [esp+34h] [ebp-14h]
    int v17; // [esp+38h] [ebp-10h]
    unsigned __int8 v18; // [esp+3Ch] [ebp-Ch]
    char v19; // [esp+40h] [ebp-8h]
    int v20; // [esp+44h] [ebp-4h]

    if (sub_425D30(a2) || sub_426410(a2) || sub_425D50(a2))
        return 0;
    v14 = sub_426090(a2);
    v16 = sub_4260B0(a2);
    v17 = sub_4260D0(a2);
    v18 = sub_425EF0((char*)a2);
    v19 = sub_426070((char*)a2);
    v20 = sub_425D70(a2);
    for (i = 0; i < 8; ++i)
    {
        v9 = (char*)&thisx[153 * i + 657];
        if (i != v18
            && unknown_libname_7(&thisx[153 * i + 657])
            && !sub_4263D0((unsigned __int8*)&thisx[153 * i + 657])
            && (byte_4B99CC || v19 != sub_426070((char*)&thisx[153 * i + 657])))
        {
            v12 = sub_426090(&thisx[153 * i + 657]);
            v13 = sub_4260B0(&thisx[153 * i + 657]);
            v11 = sub_4260D0(&thisx[153 * i + 657]);
            v5 = v14 - v12 <= 0 ? v12 - v14 : v14 - v12;
            if (v5 <= 1600)
            {
                v4 = v16 - v13 <= 0 ? v13 - v16 : v16 - v13;
                if (v4 <= 500 && v17 == v11)
                {
                    SchedulerProxy = SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]);
                    if ((SchedulerProxy == (struct Concurrency::ISchedulerProxy*)44
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)45
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)46
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)47)
                        && !sub_425D50(&thisx[153 * i + 657])
                        && !sub_426410(&thisx[153 * i + 657]))
                    {
                        if (a3 != 1)
                            return (int)&thisx[153 * i + 657];
                        if (SchedulerProxy != (struct Concurrency::ISchedulerProxy*)46
                            && SchedulerProxy != (struct Concurrency::ISchedulerProxy*)47
                            && (SchedulerProxy != (struct Concurrency::ISchedulerProxy*)44 || v20 != sub_425D70((_DWORD*)v9))
                            && (SchedulerProxy != (struct Concurrency::ISchedulerProxy*)45 || v20 == sub_425D70((_DWORD*)v9)))
                        {
                            v7 = v12 - v14;
                            v8 = 800;
                            if (sub_425E70(v9) == 1)
                                v8 = 0;
                            if (!v20 && v7 <= -v8 || v20 && v7 >= v8)
                                return (int)&thisx[153 * i + 657];
                        }
                    }
                }
            }
        }
    }
    return 0;
}

