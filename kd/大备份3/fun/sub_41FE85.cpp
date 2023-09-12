#include "sub.h" 
Concurrency::details::UMSFreeVirtualProcessorRoot* sub_41FE85(int thisx)
{
    int v2; // [esp+0h] [ebp-4Ch]
    int v3; // [esp+4h] [ebp-48h]
    Concurrency::details::UMSFreeVirtualProcessorRoot* v5; // [esp+Ch] [ebp-40h]
    int v6; // [esp+10h] [ebp-3Ch]
    int ExecutingProxy; // [esp+14h] [ebp-38h]
    int v8; // [esp+28h] [ebp-24h]
    int v9; // [esp+2Ch] [ebp-20h]
    int v10; // [esp+30h] [ebp-1Ch]
    int i; // [esp+34h] [ebp-18h]
    int j; // [esp+38h] [ebp-14h]
    int v13; // [esp+3Ch] [ebp-10h]
    int v14; // [esp+44h] [ebp-8h]
    Concurrency::details::UMSFreeVirtualProcessorRoot* v15; // [esp+48h] [ebp-4h]

    v15 = 0;
    v13 = sub_426090(*(_DWORD**)(thisx + 124));
    v9 = sub_4260B0(*(_DWORD**)(thisx + 124));
    v14 = v9 + v13;
    v10 = 100 * sub_446465((char*)unk_4B9B10);
    for (i = 0; i < 3; ++i)
    {
        if (!i)
            i = *(_BYTE*)(thisx + 87) == 0;
        if (i == 1 && !sub_41BA53(*(_DWORD*)(thisx + 124), 0x85u, 0))
            i = 2;
        for (j = 0; j < (unsigned __int8)unk_4B999A; ++j)
        {
            v5 = (Concurrency::details::UMSFreeVirtualProcessorRoot*)sub_4655B9(unk_4B9B10, j);
            if (v5 && (i || sub_494AA9((char*)v5, 1)) && (i != 1 || sub_425CB0((char*)v5) == 12) && !unknown_libname_12((int*)v5))
            {
                v6 = sub_426470((int*)v5);
                v8 = sub_426530((int*)v5);
                if (sub_425CD0((int*)unk_4B9B10) == 3 || v6 >= 0 && v8 >= 0 && v6 >= v10 && v6 <= v10 + 32000)
                {
                    ExecutingProxy = (int)Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(v5);
                    if (ExecutingProxy <= -100 * sub_446497((int*)unk_4B9B10, v6 / 100, v8 / 100))
                    {
                        if (sub_4773CC(v6 / 800, v8 / 800))
                        {
                            if (sub_426470((int*)v5) - v13 <= 0)
                                v3 = v13 - sub_426470((int*)v5);
                            else
                                v3 = sub_426470((int*)v5) - v13;
                            if (sub_426530((int*)v5) - v9 <= 0)
                                v2 = v9 - sub_426530((int*)v5);
                            else
                                v2 = sub_426530((int*)v5) - v9;
                            if (!v15 || v14 > v2 + v3)
                            {
                                v15 = v5;
                                v14 = v2 + v3;
                            }
                        }
                    }
                }
            }
        }
        if (!i && v15)
            break;
    }
    return v15;
}

