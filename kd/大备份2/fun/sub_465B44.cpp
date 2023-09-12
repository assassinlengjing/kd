#include "sub.h" 
_DWORD* sub_465B44(_DWORD* thisx, SchedulerBase* a2)
{
    int v3; // [esp+4h] [ebp-40h]
    int v4; // [esp+8h] [ebp-3Ch]
    BOOL v5; // [esp+Ch] [ebp-38h]
    int v7; // [esp+14h] [ebp-30h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+18h] [ebp-2Ch]
    int v9; // [esp+20h] [ebp-24h]
    int v10; // [esp+24h] [ebp-20h]
    int v11; // [esp+2Ch] [ebp-18h]
    int i; // [esp+30h] [ebp-14h]
    int v13; // [esp+34h] [ebp-10h]
    char v14; // [esp+38h] [ebp-Ch]
    int v15; // [esp+3Ch] [ebp-8h]
    unsigned __int8 v16; // [esp+40h] [ebp-4h]

    v11 = sub_426090((int*)a2);
    v13 = sub_4260B0((int*)a2);
    v15 = sub_4260D0((int*)a2);
    v16 = sub_425EF0((char*)a2);
    v14 = sub_426070((char*)a2);
    v5 = sub_41BA53((int)a2, 0x2Bu, 0)
        && SchedulerBase::GetSchedulerProxy(a2) == (struct Concurrency::ISchedulerProxy*)8;
    for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
    {
        if (i != v16
            && unknown_libname_7(&thisx[153 * i + 657])
            && !sub_426410(&thisx[153 * i + 657])
            && !sub_425D50(&thisx[153 * i + 657])
            && !sub_425FF0(&thisx[153 * i + 657])
            && !sub_425D30(&thisx[153 * i + 657])
            && !sub_426430(&thisx[153 * i + 657])
            && !sub_425E70((char*) & thisx[153 * i + 657])
            && (!v5 || v14 == sub_426070((char*) & thisx[153 * i + 657])))
        {
            v9 = sub_426090(&thisx[153 * i + 657]);
            v10 = sub_4260B0(&thisx[153 * i + 657]);
            v7 = sub_4260D0(&thisx[153 * i + 657]) - v15;
            v4 = v11 - v9 <= 0 ? v9 - v11 : v11 - v9;
            if (v4 <= 400)
            {
                v3 = v13 - v10 <= 0 ? v10 - v13 : v13 - v10;
                if (v3 <= 500 && v7 >= 3000 && v7 <= 3400)
                {
                    SchedulerProxy = SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]);
                    if (SchedulerProxy == (struct Concurrency::ISchedulerProxy*)3
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)4
                        || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)6)
                    {
                        return &thisx[153 * i + 657];
                    }
                }
            }
        }
    }
    return 0;
}

