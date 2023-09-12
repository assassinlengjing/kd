#include "sub.h"
unsigned int  Concurrency::details::VirtualProcessor::GetExecutionResourceId(
    Concurrency::details::VirtualProcessor* thisxx)
{
    return *((_DWORD*)thisxx + 32);
}