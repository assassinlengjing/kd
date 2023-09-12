
#include "sub.h"
unsigned int Concurrency::details::SchedulerBase::GetNumberOfBoundContexts(
    Concurrency::details::SchedulerBase* thisxx)
{
    return *((_DWORD*)thisxx + 100);
}