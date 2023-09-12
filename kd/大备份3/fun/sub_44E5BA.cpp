#include "sub.h" 
int sub_44E5BA(_DWORD* thisx, double a2, double a3, double a4)
{
    int v6[14]; // [esp+4h] [ebp-3Ch] BYREF
    int i; // [esp+3Ch] [ebp-4h]

    sub_488981(thisx + 32);
    sub_486476(thisx + 32);
    for (i = 0; i < 8; ++i)
    {
        if (unknown_libname_7(&thisx[153 * i + 657]))
        {
            if (Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[153 * i + 657]) != (struct Concurrency::ISchedulerProxy*)80)
                sub_402C05((int)&thisx[153 * i + 657]);
        }
    }
    for (i = 0; i < 8; ++i)
    {
        if (unknown_libname_7(&thisx[153 * i + 657])
            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[153 * i + 657]) != (struct Concurrency::ISchedulerProxy*)80)
        {
            sub_408F50((int)&thisx[153 * i + 657], a2, a3, a4, 0);
        }
    }
    for (i = 0; i < 8; ++i)
    {
        if (unknown_libname_7(&thisx[153 * i + 657])
            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[153 * i + 657]) != (struct Concurrency::ISchedulerProxy*)80)
        {
            sub_4126CE((int)&thisx[153 * i + 657], a2, a3, a4);
        }
    }
    for (i = 0; i < 8; ++i)
    {
        if (unknown_libname_7(&thisx[153 * i + 657])
            && Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[153 * i + 657]) != (struct Concurrency::ISchedulerProxy*)80)
        {
            sub_417780((int)&thisx[153 * i + 657]);
        }
    }
    sub_44325C((int)thisx);
    if ((int)++thisx[630] < 120)
    {
        sub_49C15E((int)v6);
        v6[1] = 124;
        v6[2] = 68;
        v6[0] = (thisx[630] >= 60) + unk_4B9240;
        if (!(thisx[630] / 10 % 2))
            sub_49AB05((int)unk_4BDC60, v6);
    }
    else
    {
        thisx[26] = 11;
    }
    return sub_443E80((int)thisx);
}
