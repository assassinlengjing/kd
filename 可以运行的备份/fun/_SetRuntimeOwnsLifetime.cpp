#include "sub.h"
void _SetRuntimeOwnsLifetime(
    Concurrency::details::_UnrealizedChore* thisxx,
    bool a2)
{
    *((_BYTE*)thisxx + 16) = a2;
}