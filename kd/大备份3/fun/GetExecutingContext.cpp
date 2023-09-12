#include "sub.h"
struct Concurrency::IExecutionContext*  Concurrency::details::VirtualProcessor::GetExecutingContext(
    Concurrency::details::VirtualProcessor* thisxx)
{
    return (struct Concurrency::IExecutionContext*)*((_DWORD*)thisxx + 31);
}