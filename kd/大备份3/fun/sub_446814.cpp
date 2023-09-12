#include "sub.h" 
int sub_446814(_DWORD* thisx, _DWORD* a2)
{
    int v3; // [esp+0h] [ebp-34h]
    int v4; // [esp+4h] [ebp-30h]
    int v6; // [esp+Ch] [ebp-28h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+10h] [ebp-24h]
    int v8; // [esp+14h] [ebp-20h]
    int v9; // [esp+18h] [ebp-1Ch]
    int v10; // [esp+1Ch] [ebp-18h]
    int v11; // [esp+20h] [ebp-14h]
    int i; // [esp+24h] [ebp-10h]
    int v13; // [esp+28h] [ebp-Ch]
    int v14; // [esp+2Ch] [ebp-8h]
    unsigned __int8 v15; // [esp+30h] [ebp-4h]

    if (sub_425D30(a2) || sub_426410(a2) || sub_425D50(a2) || sub_425FF0(a2))
        return 0;
    v11 = sub_426090(a2);
    v13 = sub_4260B0(a2);
    v14 = sub_4260D0(a2);
    v15 = sub_425EF0((char*)a2);
    for (i = 0; i < 8; ++i)
    {
        if (i != v15
            && unknown_libname_7(&thisx[153 * i + 657])
            && !sub_4263D0((unsigned __int8*)&thisx[153 * i + 657])
            && (unsigned __int16)sub_474EB0((short*)&thisx[153 * i + 657]))
        {
            v9 = sub_426090(&thisx[153 * i + 657]);
            v10 = sub_4260B0(&thisx[153 * i + 657]);
            v8 = sub_4260D0(&thisx[153 * i + 657]);
            v4 = v11 - v9 <= 0 ? v9 - v11 : v11 - v9;
            if (v4 <= 600)
            {
                v3 = v13 - v10 <= 0 ? v10 - v13 : v13 - v10;
                if (v3 <= 500 && v14 == v8)
                {
                    if ((SchedulerProxy = SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]),
                        v6 = sub_425F30(&thisx[153 * i + 657]),
                        SchedulerProxy == (struct Concurrency::ISchedulerProxy*)44)
                        && v6 == 44
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)45 && v6 == 45)
                    {
                        if (!sub_425D50(&thisx[153 * i + 657]) && !sub_426410(&thisx[153 * i + 657]))
                            return (int)&thisx[153 * i + 657];
                    }
                }
            }
        }
    }
    return 0;
}

