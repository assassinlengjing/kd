#include "sub.h"
unsigned int  Concurrency::details::SchedulerProxy::GetQueueLength(
    Concurrency::details::SchedulerProxy* thisxx)
{
    return *((_DWORD*)thisxx + 30);
}