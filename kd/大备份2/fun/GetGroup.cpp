#include "sub.h"
unsigned __int16  GetGroup(
    Concurrency::details::HardwareAffinity* thisxx)
{
    return *((_WORD*)thisxx + 2);
}