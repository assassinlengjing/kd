
#define code_1
#define code_2

#ifdef code_1

#include "concurrency.h"
#include "mytype.h"
#include "rdata.h"
using namespace Concurrency;
using namespace Concurrency::details;


_CancellationTokenState* _GetToken(_CancellationTokenRegistration* thisx)
{
	return (_CancellationTokenState*)*((_DWORD*)thisx + 4);
}

//void VirtualProcessorRoot::_VirtualProcessorRoot(VirtualProcessorRoot* thisx)//~VirtualProcessorRoot???
//{
//	*(_DWORD*)thisx = (_DWORD)&off_4AC250;
//	sub_418130((void**)(char*)thisx + 8);//Ô­°æ sub_418130((char*)thisx + 8, thisx);
//}

//UMSThreadProxy* UMSFreeVirtualProcessorRoot::GetExecutingProxy(UMSFreeVirtualProcessorRoot* thisx)???
//{
//	return (struct UMSThreadProxy*)*((_DWORD*)thisx + 26);
//}

//Concurrency::ISchedulerProxy* SchedulerBase::GetSchedulerProxy(SchedulerBase* thisx)?
//{
//	return (struct ISchedulerProxy*)*((_DWORD*)thisx + 107);
//}

//unsigned int SchedulerBase::GetNumberOfBoundContexts(SchedulerBase* thisx)?
//{
//	return *((_DWORD*)thisx + 100);
//}

unsigned int SchedulerBase::Id(SchedulerBase* thisx)
{
	return *((_DWORD*)thisx + 93);
}

//unsigned  SchedulerProxy::GetQueueLength(SchedulerProxy* thisx)?
//{
//	return *((_DWORD*)thisx + 30);
//}

//unsigned int SchedulerProxy::GetNumBorrowedCores(SchedulerProxy* thisx)?
//{
//	return *((_DWORD*)thisx + 42);
//}

//Concurrency::IExecutionContext* VirtualProcessor::GetExecutingContext(VirtualProcessor* thisx)???
//{
//	return (struct Concurrency::IExecutionContext*)*((_DWORD*)thisx + 31);
//}

//unsigned int VirtualProcessor::GetExecutionResourceId(VirtualProcessor* thisx)??
//{
//	return *((_DWORD*)thisx + 32);
//}

//void InternalContextBase::UNSAFE_SetVirtualProcessor(InternalContextBase* thisx, VirtualProcessor* a2)?
//{
//	*((_DWORD*)thisx + 40) = (unsigned long)a2;
//}

//void InternalContextBase::SetOversubscribedVProc(InternalContextBase* thisx, VirtualProcessor* a2)?
//{
//	*((_DWORD*)thisx + 41) = (unsigned long)a2;
//}

DNameNode* DNameNode::C_DNameNode(DNameNode* thisx)
{
	*(_DWORD*)thisx = -1;
	*((_DWORD*)thisx + 1) = 0;
	return thisx;
}

DNameNode* DNameNode::C2_DNameNode(DNameNode* thisx)
{
	*(_DWORD*)thisx = off_4AC2BC;
	*((_DWORD*)thisx + 1) = 0;
	return thisx;
}

//unsigned int ExecutionResource::GetNodeId(???
//	ExecutionResource* thisx)
//{
//	return *((_DWORD*)thisx + 9);
//}

unsigned int SchedulerProxy::GetNumalThreads(
	SchedulerProxy* thisx)
{
	return *((_DWORD*)thisx + 45);
}

#else
#include "concurrency.h"
#include "mytype.h"
#include "rdata.h"
#include "sub.h"
#include "rdata.cpp"
//using namespace Concurrency;
//using namespace Concurrency::details;

_CancellationTokenState* _GetToken(_CancellationTokenRegistration* thisx)
{
	return (_CancellationTokenState*)*((_DWORD*)thisx + 4);
}

void _VirtualProcessorRoot(VirtualProcessorRoot* thisx)//~VirtualProcessorRoot
{
	*(_DWORD*)thisx = (_DWORD)&off_4AC250;
	sub_418130((void**)(char*)thisx + 8);//Ô­°æ sub_418130((char*)thisx + 8, thisx);
}

UMSThreadProxy* GetExecutingProxy(UMSFreeVirtualProcessorRoot* thisx)
{
	return (struct UMSThreadProxy*)*((_DWORD*)thisx + 26);
}

ISchedulerProxy* GetSchedulerProxy(SchedulerBase* thisx)
{
	return (struct ISchedulerProxy*)*((_DWORD*)thisx + 107);
}

unsigned int GetNumberOfBoundContexts(SchedulerBase* thisx)
{
	return *((_DWORD*)thisx + 100);
}

unsigned int Id(SchedulerBase* thisx)
{
	return *((_DWORD*)thisx + 93);
}

unsigned  int GetQueueLength(SchedulerProxy* thisx)
{
	return *((_DWORD*)thisx + 30);
}

unsigned int GetNumBorrowedCores(SchedulerProxy* thisx)
{
	return *((_DWORD*)thisx + 42);
}

IExecutionContext* GetExecutingContext(VirtualProcessor* thisx)
{
	return (struct IExecutionContext*)*((_DWORD*)thisx + 31);
}

unsigned int GetExecutionResourceId(VirtualProcessor* thisx)
{
	return *((_DWORD*)thisx + 32);
}

void UNSAFE_SetVirtualProcessor(InternalContextBase* thisx, VirtualProcessor* a2)
{
	//*((_DWORD*)thisx + 40) = a2;
	*((_DWORD*)thisx + 40) = (_DWORD)a2;
}

void SetOversubscribedVProc(InternalContextBase* thisx, VirtualProcessor* a2)
{
	//*((_DWORD*)thisx + 41) = a2;
	*((_DWORD*)thisx + 41) = (_DWORD)a2;
}

DNameNode* DNameNode::C_DNameNode(DNameNode* thisx)
{
	*(_DWORD*)thisx = -1;
	*((_DWORD*)thisx + 1) = 0;
	return thisx;
}

DNameNode* DNameNode::C2_DNameNode(DNameNode* thisx)
{
	//*(_DWORD*)thisx = off_4AC2BC;
	*(_DWORD*)thisx = (_DWORD)off_4AC2BC;
	*((_DWORD*)thisx + 1) = 0;
	return thisx;
}

unsigned int GetNodeId(
	ExecutionResource* thisx)
{
	return *((_DWORD*)thisx + 9);
}

unsigned int GetNumalThreads(
	SchedulerProxy* thisx)
{
	return *((_DWORD*)thisx + 45);
}
#endif // DEBUG

