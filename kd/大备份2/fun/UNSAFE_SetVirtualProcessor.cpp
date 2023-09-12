#include "sub.h"
void Concurrency::details::InternalContextBase::UNSAFE_SetVirtualProcessor(
    Concurrency::details::InternalContextBase* thisxx,
    struct Concurrency::details::VirtualProcessor* a2)
{
    *((_DWORD*)thisxx + 40) = (int)a2;
}