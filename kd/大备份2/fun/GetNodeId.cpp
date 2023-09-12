#include "sub.h"
unsigned int  Concurrency::details::ExecutionResource::GetNodeId(
    Concurrency::details::ExecutionResource* thisxx)
{
    return *((_DWORD*)thisxx + 9);
}