#include "sub.h" 
void sub_46287E(_BYTE* thisx)
{
    int v1; // esi
    int v2; // esi
    int v3; // esi
    int v4; // esi
    Concurrency::details::SchedulerBase* v6; // [esp+8h] [ebp-10h]
    _BYTE* v7; // [esp+Ch] [ebp-Ch]
    unsigned __int8 v8; // [esp+10h] [ebp-8h]
    int i; // [esp+14h] [ebp-4h]

    for (i = 0; i < 2; ++i)
    {
        v8 = 100;
        v6 = (Concurrency::details::SchedulerBase*)&thisx[612 * i + 2628];
        v7 = &thisx[76 * i + 11816];
        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(v6) == (struct Concurrency::ISchedulerProxy*)80)
            ++thisx[11691];
        else
            v8 = 125;
        v1 = (unsigned __int16)sub_474EB0((short*)&thisx[612 * i + 2628]);
        if (v1 == sub_41D61F((int)&thisx[612 * i + 2628]))
            v8 += 15;
        if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[612 * (1 - i) + 2628]) != (struct Concurrency::ISchedulerProxy*)80)
            v8 += 15;
        v2 = (unsigned __int16)sub_474EB0((short*)&thisx[612 * (1 - i) + 2628]);
        if (v2 == sub_41D61F((int)&thisx[612 * (1 - i) + 2628]))
            v8 += 5;
        switch (thisx[13044])
        {
        case 1:
            v8 += 30;
            break;
        case 2:
            v8 += 20;
            break;
        case 3:
            v8 += 10;
            break;
        }
        *(_WORD*)&thisx[2 * i + 2566] = sub_45CF31((unsigned char*)&thisx[76 * i + 11816], v8);
        if (Concurrency::details::SchedulerBase::GetSchedulerProxy(v6) != (struct Concurrency::ISchedulerProxy*)80)
        {
            v3 = sub_475B00((_DWORD*)v6);
            if (v3 < sub_475B20((_DWORD*)v6))
                sub_468591(v7, 0, 1);
            v4 = 100 * (unsigned __int16)sub_474EB0((short*)v6);
            if (v4 / sub_41D61F((_DWORD)v6) <= 10)
                sub_468591(v7, 1, 1);
            if (sub_475B60((_DWORD*)v6) >= 10)
                sub_468591(v7, 2, 1);
            if (thisx[i + 11808] == 12)
                sub_468591(v7, 3, 1);
            if (sub_475B40((_DWORD*)v6) >= 10)
                sub_468591(v7, 4, 1);
        }
    }
}

