#include "sub.h" 
int __fastcall sub_422573(_DWORD* a1)
{
    int result; // eax
    int v2; // eax
    int v3; // [esp+0h] [ebp-44h]
    int v4; // [esp+4h] [ebp-40h]
    unsigned __int8 v6; // [esp+Ch] [ebp-38h]
    int j; // [esp+10h] [ebp-34h]
    SchedulerBase* v8; // [esp+14h] [ebp-30h]
    int v9; // [esp+18h] [ebp-2Ch]
    int v10; // [esp+1Ch] [ebp-28h]
    int v11; // [esp+20h] [ebp-24h]
    int v12; // [esp+24h] [ebp-20h]
    char v13[16]; // [esp+28h] [ebp-1Ch] BYREF
    int v14; // [esp+38h] [ebp-Ch]
    int i; // [esp+3Ch] [ebp-8h]
    int v16; // [esp+40h] [ebp-4h]

    result = (int)a1;
    if (a1[31])
    {
        LOBYTE(v16) = sub_426070((char*)a1[31]);
        memset(a1 + 25, 0, 0x10u);
        v14 = sub_446465((char*)&byte_4B9B10);
        result = (int)memset(v13, 0, sizeof(v13));
        for (i = 0; i < 8; ++i)
        {
            result = sub_446714(byte_4B9B10,i);
            v8 = (SchedulerBase*)result;
            if (result)
            {
                result = unknown_libname_7((_DWORD*)result);
                if (result)
                {
                    result = (unsigned __int8)sub_426070((char*)v8);
                    if (result != (unsigned __int8)v16)
                    {
                        result = (int)SchedulerBase::GetSchedulerProxy(v8);
                        if (result != 80)
                        {
                            v2 = sub_426090((_DWORD*)v8);
                            v11 = v2 / 100 - v14;
                            result = sub_4260B0((_DWORD*)v8) / 100;
                            v9 = result;
                            if (v11 >= 0 && v11 < 320)
                            {
                                v12 = v11 / a1[29];
                                v10 = result / a1[30];
                                result = v12;
                                if (!v13[4 * v10 + v12])
                                {
                                    result = v9 / a1[30];
                                    v13[4 * v10 + v12] = 1;
                                    for (j = 0; j < 16; ++j)
                                    {
                                        if (v12 - j % 4 <= 0)
                                            v4 = j % 4 - v12;
                                        else
                                            v4 = v12 - j % 4;
                                        if (v10 - j / 4 <= 0)
                                            v3 = j / 4 - v10;
                                        else
                                            v3 = v10 - j / 4;
                                        v6 = v4 + v3 + 1;
                                        if (!*((_BYTE*)a1 + j + 100) || *((unsigned __int8*)a1 + j + 100) > (int)v6)
                                            *((_BYTE*)a1 + j + 100) = v6;
                                        result = j + 1;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}

