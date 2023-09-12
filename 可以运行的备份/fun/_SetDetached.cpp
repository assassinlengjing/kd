#include "sub.h"
void _SetDetached(
    Concurrency::details::_UnrealizedChore* thisxx,
    bool a2)
{
    *((_BYTE*)thisxx + 17) = a2;
}