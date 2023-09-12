#include "sub.h"
unsigned int Concurrency::details::SchedulerProxy::GetNumExternalThreads(
    Concurrency::details::SchedulerProxy* thisxx)
{
    return *((_DWORD*)thisxx + 45);
}