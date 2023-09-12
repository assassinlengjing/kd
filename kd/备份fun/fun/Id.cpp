#include "sub.h"
unsigned int Id(Concurrency::details::SchedulerBase* thisxx)
{
	return *((_DWORD*)thisxx + 93);
}