#include "sub.h"
bool Concurrency::details::_UnrealizedChore::_GetRuntimeOwnsLifetime(
    Concurrency::details::_UnrealizedChore* thisxx)
{
    return *((_BYTE*)thisxx + 16);
}