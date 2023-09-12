#include "sub.h"
void  Concurrency::details::SchedulingRing::SetOwningNode(
    Concurrency::details::SchedulingRing* thisxx,
    struct Concurrency::details::SchedulingNode* a2)
{
    *((_DWORD*)thisxx + 1) = (int)a2;//*((_DWORD*)thisxx + 1) = a2;//
}