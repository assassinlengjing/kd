#include "sub.h" 
BOOL sub_4630BF(unsigned __int8* thisx, int a1, int a2)
{
	Concurrency::details::SchedulerBase* v4; // [esp+4h] [ebp-4h]

	v4 = (Concurrency::details::SchedulerBase*)sub_463101(thisx, a1, a2);
	return v4 && Concurrency::details::SchedulerBase::GetSchedulerProxy(v4) != (struct Concurrency::ISchedulerProxy*)80;
}

