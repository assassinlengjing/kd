#include "sub.h"
unsigned int Concurrency::details::VirtualProcessor::GetId(Concurrency::details::VirtualProcessor* thisxx)
{
	return *((_DWORD*)thisxx + 34);
}