#include "sub.h" 
int sub_474032(char* thisx, Concurrency::details::SchedulerBase* a2)
{
    int v3; // [esp+4h] [ebp-50h]
    int v4; // [esp+8h] [ebp-4Ch]
    int v5; // [esp+Ch] [ebp-48h]
    Concurrency::details::SchedulerBase* v7; // [esp+18h] [ebp-3Ch]
    int v8; // [esp+20h] [ebp-34h]
    int v9; // [esp+24h] [ebp-30h]
    int v10; // [esp+2Ch] [ebp-28h]
    int i; // [esp+38h] [ebp-1Ch]
    int v12; // [esp+3Ch] [ebp-18h]
    int v13; // [esp+44h] [ebp-10h]
    int v14; // [esp+48h] [ebp-Ch]
    char v15; // [esp+4Ch] [ebp-8h]

    v13 = sub_426090((_DWORD*)a2) / 100;
    v12 = sub_4260B0((_DWORD*)a2) / 100;
    v14 = sub_4260D0((_DWORD*)a2) / 100;
    sub_425EF0((char*)a2);
    v15 = sub_426070((char*)a2);
    sub_425D70((_DWORD*)a2);
    for (i = 0; i < 8; ++i)
    {
        v7 = (Concurrency::details::SchedulerBase*)&thisx[612 * i + 2628];
        if (a2 != v7
            && unknown_libname_7((_DWORD*)v7)
            && Concurrency::details::SchedulerBase::GetSchedulerProxy(v7) == (struct Concurrency::ISchedulerProxy*)15
            && (byte_4B99CC || v15 != sub_426070((char*)v7)))
        {
            v9 = sub_4260D0((_DWORD*)v7) / 100;
            v5 = v14 - v9 <= 0 ? v9 - v14 : v14 - v9;
            if (v5 <= 16)
            {
                v10 = sub_426090((_DWORD*)v7) / 100;
                v8 = sub_4260B0((_DWORD*)v7) / 100;
                v4 = v13 - v10 <= 0 ? v10 - v13 : v13 - v10;
                if (v4 < 32)
                {
                    v3 = v12 - v8 <= 0 ? v8 - v12 : v12 - v8;
                    if (v3 <= 5)
                        return 1;
                }
            }
        }
    }
    return 0;
}

