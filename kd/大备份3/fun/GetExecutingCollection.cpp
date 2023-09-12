#include "sub.h"
struct _TaskCollectionBase* Concurrency::details::ContextBase::GetExecutingCollection(
    Concurrency::details::ContextBase* thisxx)
{
    return (struct _TaskCollectionBase*)*((_DWORD*)thisxx + 13);
}