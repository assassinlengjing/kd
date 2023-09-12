#include "sub.h" 
void sub_4659A5(_DWORD* thisx, _BYTE* a2)
{
    unsigned __int8 v2; // al
    char v4[8]; // [esp+4h] [ebp-1Ch]
    int v5; // [esp+Ch] [ebp-14h]
    int i; // [esp+10h] [ebp-10h]
    int v7; // [esp+14h] [ebp-Ch]
    int v8; // [esp+18h] [ebp-8h]
    int v9; // [esp+1Ch] [ebp-4h]

    if (a2)
    {
        LOBYTE(v7) = sub_425EF0(a2);
        LOBYTE(v8) = sub_426070(a2);
        LOBYTE(v5) = 0;
        for (i = 0; i < (unsigned __int8)byte_4B9985; ++i)
        {
            if (i != (unsigned __int8)v7)
            {
                v2 = sub_426070((char*)&thisx[153 * i + 657]);
                if (v2 == (unsigned __int8)v8
                    && SchedulerBase::GetSchedulerProxy((SchedulerBase*)&thisx[153 * i + 657]) == (struct Concurrency::ISchedulerProxy*)80)
                {
                    v4[(unsigned __int8)v5] = i;
                    LOBYTE(v5) = v5 + 1;
                }
            }
        }
        if ((_BYTE)v5)
        {
            LOBYTE(v9) = v4[rand() % (unsigned __int8)v5];
            sub_41D697((int)&thisx[153 * (unsigned __int8)v9 + 657]);
            if (!sub_41BEA6(&thisx[153 * (unsigned __int8)v9 + 657]) && !dword_4B9974)
            {
                thisx[622] = 100;
                thisx[623] = 0;
            }
        }
    }
}

