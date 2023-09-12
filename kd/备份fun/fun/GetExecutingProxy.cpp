#include "sub.h"
struct Concurrency::details::UMSThreadProxy*  Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(
    Concurrency::details::UMSFreeVirtualProcessorRoot* thisxx)
{
    return (struct Concurrency::details::UMSThreadProxy*)*((_DWORD*)thisxx + 26);
}