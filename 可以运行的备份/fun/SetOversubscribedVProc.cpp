#include "sub.h"
void  Concurrency::details::InternalContextBase::SetOversubscribedVProc(
    Concurrency::details::InternalContextBase* thisxx,
    struct Concurrency::details::VirtualProcessor* a2)
{
    *((_DWORD*)thisxx + 41) =(int) a2;
}