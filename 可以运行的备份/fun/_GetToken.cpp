#include "sub.h"
struct Concurrency::details::_CancellationTokenState*  Concurrency::details::_CancellationTokenRegistration::_GetToken(
    Concurrency::details::_CancellationTokenRegistration* thisxx)
{
    return (struct Concurrency::details::_CancellationTokenState*)*((_DWORD*)thisxx + 4);
}