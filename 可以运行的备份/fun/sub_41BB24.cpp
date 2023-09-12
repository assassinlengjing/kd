#include "sub.h" 
int sub_41BB24(_DWORD* thisx)
{
    int v2; // [esp+4h] [ebp-74h]
    int v3; // [esp+8h] [ebp-70h]
    int v4; // [esp+Ch] [ebp-6Ch]
    int v5; // [esp+10h] [ebp-68h]
    int v6; // [esp+14h] [ebp-64h]
    BOOL v7; // [esp+18h] [ebp-60h]
    Concurrency::details::UMSFreeVirtualProcessorRoot* v9; // [esp+20h] [ebp-58h]
    int v10; // [esp+24h] [ebp-54h]
    int v11; // [esp+28h] [ebp-50h]
    int v12; // [esp+2Ch] [ebp-4Ch]
    int v13; // [esp+30h] [ebp-48h]
    Concurrency::details::SchedulerBase* v14; // [esp+38h] [ebp-40h]
    int v15; // [esp+3Ch] [ebp-3Ch]
    int v16; // [esp+40h] [ebp-38h]
    int SchedulerProxy; // [esp+48h] [ebp-30h]
    int v18; // [esp+4Ch] [ebp-2Ch]
    int v19; // [esp+50h] [ebp-28h]
    int v20; // [esp+54h] [ebp-24h]
    char v21; // [esp+58h] [ebp-20h]
    int v22; // [esp+5Ch] [ebp-1Ch]
    int v23; // [esp+60h] [ebp-18h]
    int v24; // [esp+64h] [ebp-14h]
    int i; // [esp+68h] [ebp-10h]
    int j; // [esp+68h] [ebp-10h]
    unsigned __int8 v27; // [esp+6Ch] [ebp-Ch]
    char v28; // [esp+74h] [ebp-4h]

    if (!thisx[31])
        return 0;
    v23 = sub_426090((_DWORD*)thisx[31]);
    v22 = sub_4260B0((_DWORD*)thisx[31]);
    v24 = sub_4260D0((_DWORD*)thisx[31]);
    sub_425D70((_DWORD*)thisx[31]);
    v27 = sub_425EF0((_BYTE*)thisx[31]);
    v28 = sub_426070((_BYTE*)thisx[31]);
    for (i = 0; i < 8; ++i)
    {
        if (i == v27)
            continue;
        v14 = (Concurrency::details::SchedulerBase*)sub_446714(byte_4B9B10, i);
        if (!v14 || !unknown_libname_7((_DWORD*)v14) || v28 == sub_426070((char*)v14))
            continue;
        SchedulerProxy = (int)Concurrency::details::SchedulerBase::GetSchedulerProxy(v14);
        v21 = sub_4264D0((char*)v14);
        v16 = 3200;
        v7 = SchedulerProxy == 91 || SchedulerProxy == 162;
        if (v21 == 2 || SchedulerProxy < 123 && !v7)
            continue;
        if (v7)
        {
            if (SchedulerProxy == 91)
            {
                v13 = sub_425ED0((_DWORD*)v14);
                if (v13 > 100)
                    return 1;
                if (v13 < 37)
                    continue;
            }
            v16 = 320000;
        }
        v20 = sub_426090((_DWORD*)v14);
        v19 = sub_4260B0((_DWORD*)v14);
        v18 = sub_425D70((_DWORD*)v14);
        v15 = v23 - v20;
        if (v22 - v19 <= 0)
            v6 = v19 - v22;
        else
            v6 = v22 - v19;
        if (v6 < 100 * (unsigned __int8)sub_4264B0((char*)v14))
        {
            v5 = v15 <= 0 ? v20 - v23 : v23 - v20;
            if (v5 < v16)
            {
                if (v7)
                    return 1;
                if (v18 && v15 >= 0 || !v18 && v15 <= 0)
                    return 1;
            }
        }
    }
    for (j = 0; j < (unsigned __int8)byte_4B999A; ++j)
    {
        v9 = (Concurrency::details::UMSFreeVirtualProcessorRoot*)sub_4655B9(byte_4B9B10, j);
        if (v9 && sub_494209((_DWORD*)v9) && unknown_libname_8((_DWORD*)v9) != thisx[31])
        {
            v10 = v23 - sub_426470((_DWORD*)v9);
            v12 = v22 - sub_426530((_DWORD*)v9);
            v11 = v24 - (_DWORD)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v9);
            v4 = v12 <= 0 ? -v12 : v12;
            if (v4 < 100 * (unsigned __int8)sub_4264F0((char*)v9))
            {
                v3 = v10 <= 0 ? -v10 : v10;
                if (v3 < 3200)
                {
                    v2 = v11 <= 0 ? -v11 : v11;
                    if (v2 < 3200)
                        return 1;
                }
            }
        }
    }
    return 0;
}