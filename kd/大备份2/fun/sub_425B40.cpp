#include "sub.h"
Concurrency::details::VirtualProcessorRoot* sub_425B40(
    Concurrency::details::VirtualProcessorRoot* thisx,
    char a2)
{
    //Concurrency::details::VirtualProcessorRoot::~VirtualProcessorRoot(thisx);
    Concurrency::details::VirtualProcessorRoot::_VirtualProcessorRoot(thisx);
    if ((a2 & 1) != 0)
        operator delete(thisx);
    return thisx;
}
