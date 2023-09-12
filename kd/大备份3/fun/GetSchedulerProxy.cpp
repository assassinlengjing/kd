#include "sub.h"
struct Concurrency::ISchedulerProxy* Concurrency::details::SchedulerBase::GetSchedulerProxy(
    Concurrency::details::SchedulerBase* thisxx)
{
    return (struct Concurrency::ISchedulerProxy*)*((_DWORD*)thisxx + 107);
}