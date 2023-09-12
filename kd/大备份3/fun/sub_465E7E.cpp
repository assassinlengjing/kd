#include "sub.h" 
int sub_465E7E(char* thisx, _DWORD* a2)
{
    int v3; // [esp+0h] [ebp-60h]
    int v4; // [esp+4h] [ebp-5Ch]
    int v5; // [esp+8h] [ebp-58h]
    int v6; // [esp+Ch] [ebp-54h]
    int v7; // [esp+10h] [ebp-50h]
    int v8; // [esp+14h] [ebp-4Ch]
    int v9; // [esp+18h] [ebp-48h]
    int v10; // [esp+1Ch] [ebp-44h]
    int v12; // [esp+24h] [ebp-3Ch]
    int v13; // [esp+28h] [ebp-38h]
    int v14; // [esp+2Ch] [ebp-34h]
    SchedulerBase* v15; // [esp+30h] [ebp-30h]
    struct Concurrency::ISchedulerProxy* SchedulerProxy; // [esp+34h] [ebp-2Ch]
    int v17; // [esp+3Ch] [ebp-24h]
    int v18; // [esp+40h] [ebp-20h]
    int v19; // [esp+44h] [ebp-1Ch]
    int v20; // [esp+48h] [ebp-18h]
    int v21; // [esp+4Ch] [ebp-14h]
    int i; // [esp+50h] [ebp-10h]
    unsigned __int8 v23; // [esp+54h] [ebp-Ch]
    char v24; // [esp+58h] [ebp-8h]
    int v25; // [esp+5Ch] [ebp-4h]

    if (!unk_4B99C8 || !a2 || sub_426410(a2) || sub_425D50(a2))
        return 0;
    v18 = sub_426090(a2);
    v17 = sub_4260B0(a2);
    v19 = sub_4260D0(a2);
    v24 = sub_426070((char*)a2);
    v23 = sub_425EF0((char*)a2);
    v25 = sub_425D70(a2);
    v21 = 0;
    v20 = 0;
    for (i = 0; i < (unsigned __int8)unk_4B9985; ++i)
    {
        v15 = (SchedulerBase*)&thisx[612 * i + 2628];
        if (!sub_41BE56((_DWORD*)v15)
            && sub_426070((char*)v15) == v24
            && v23 != i
            && !sub_426410((_DWORD*)v15)
            && !sub_425D50((_DWORD*)v15)
            && !sub_425FF0((_DWORD*)v15))
        {
            SchedulerProxy = SchedulerBase::GetSchedulerProxy(v15);
            if ((SchedulerProxy == (struct Concurrency::ISchedulerProxy*)3
                || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)4
                || SchedulerProxy == (struct Concurrency::ISchedulerProxy*)6)
                && v25 != sub_425D70((_DWORD*)v15))
            {
                v12 = sub_426090((_DWORD*)v15) - v18;
                v14 = sub_4260B0((_DWORD*)v15) - v17;
                v13 = sub_4260D0((_DWORD*)v15) - v19;
                v10 = v12 <= 0 ? -v12 : v12;
                if (v10 >= 800)
                {
                    v9 = v12 <= 0 ? -v12 : v12;
                    if (v9 <= 1600)
                    {
                        v8 = v14 <= 0 ? -v14 : v14;
                        if (v8 <= 500)
                        {
                            v7 = v13 <= 0 ? -v13 : v13;
                            if (v7 <= 800 && (v12 < 0 && !v25 || v12 > 0 && v25))
                            {
                                if (!v21 || (v12 <= 0 ? (v6 = -v12) : (v6 = v12), v14 <= 0 ? (v5 = -v14) : (v5 = v14), v20 > v5 + v6))
                                {
                                    v21 = (int)&thisx[612 * i + 2628];
                                    if (v12 <= 0)
                                        v4 = -v12;
                                    else
                                        v4 = v12;
                                    if (v14 <= 0)
                                        v3 = -v14;
                                    else
                                        v3 = v14;
                                    v20 = v3 + v4;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return v21;
}

