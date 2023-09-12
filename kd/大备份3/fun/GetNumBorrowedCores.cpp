#include "sub.h"
unsigned int Concurrency::details::SchedulerProxy::GetNumBorrowedCores(
    Concurrency::details::SchedulerProxy* thisxx)
{
    return *((_DWORD*)thisxx + 42);
}