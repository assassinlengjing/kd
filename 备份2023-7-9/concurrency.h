#pragma once
#include "mytype.h"
#include "struct.h"
#include <winternl.h>


#define code_1
//#define code_t

#ifdef code_1

namespace Concurrency {
	struct ISchedulerProxy
	{

	};

	struct IExecutionContext
	{

	};

	struct IUMSCompletionList
	{

	};
	namespace details
	{
		struct _TaskCollectionBase
		{

		};
		struct HardwareAffinity;

		struct _CancellationTokenState;

		struct _CancellationTokenRegistration
		{
			static _CancellationTokenState* _GetToken(_CancellationTokenRegistration* thisx);
		};//或者类

		struct VirtualProcessorRoot
		{
			static void _VirtualProcessorRoot(VirtualProcessorRoot* thisx);
			~VirtualProcessorRoot();
		};

		struct SchedulerProxy
		{
			static unsigned int GetQueueLength(SchedulerProxy* thisx);
			static unsigned int GetNumBorrowedCores(SchedulerProxy* thisx);
			static unsigned int GetNumalThreads(SchedulerProxy* thisx);
			static unsigned int GetNumExternalThreads(Concurrency::details::SchedulerProxy* thisxx);
		};

		struct UMSThreadProxy;
		struct UMSFreeVirtualProcessorRoot
		{
			
			static UMSThreadProxy* GetExecutingProxy(UMSFreeVirtualProcessorRoot* thisx);
		};


		struct SchedulerBase
		{
			static ISchedulerProxy* GetSchedulerProxy(SchedulerBase* thisx);
			static unsigned int GetNumberOfBoundContexts(SchedulerBase* thisx);
			static unsigned int Id(SchedulerBase* thisx);
			
		};
		struct VirtualProcessor
		{
			static struct Concurrency::IExecutionContext* GetExecutingContext(VirtualProcessor* thisx);
			static unsigned int GetExecutionResourceId(VirtualProcessor* thisx);
			static unsigned int GetId(Concurrency::details::VirtualProcessor* thisxx);
		};
		struct InternalContextBase
		{
			static void UNSAFE_SetVirtualProcessor(InternalContextBase* thisx, struct VirtualProcessor* a2);
			static void SetOversubscribedVProc(InternalContextBase* thisx, struct VirtualProcessor* a2);
		};

		struct UMSThreadScheduler
		{
			static void SetCompletionList(UMSThreadScheduler* thisx, struct Concurrency::IUMSCompletionList* a2);
		};
		struct ContextBase
		{
			static struct _TaskCollectionBase* GetExecutingCollection(Concurrency::details::ContextBase* thisxx);
		};
		struct ExecutionResource
		{
			static unsigned int GetNodeId(ExecutionResource* thisx);
		};

		struct _UnrealizedChore
		{
			static bool _GetRuntimeOwnsLifetime(Concurrency::details::_UnrealizedChore* thisxx);
		};
		struct SchedulingNode;
		struct SchedulingRing
		{
			static void SetOwningNode(Concurrency::details::SchedulingRing* thisxx,struct Concurrency::details::SchedulingNode* a2);
		};
	};

};

struct DNameNode
{
	DNameNode();
	static DNameNode* C_DNameNode(DNameNode* thisx);
	static DNameNode* C2_DNameNode(DNameNode* thisx);
	DNameNode*  new_DNameNode(DNameNode* thisxx);
};
//DNameNode::DNameNode()重复定义了
//{
//	new_DNameNode(this);
//}

struct streambuf
{
	static void unbuffered(streambuf* thisx, int a2);
};
struct TryBlockMapEntry
{
	int tryHigh;
	int catchHigh;
};

struct type_info;
struct ios;

#endif // DEBUG

#ifdef code_t
	#include <concrtrm.h>

#endif

struct TypeDescriptor
{
	char name[128];
	
};


struct _s_HandlerType
{
	int adjectives;
	TypeDescriptor* pType;
	ptrdiff_t dispCatchObj;
	void* addressOfHandler;
};

enum __ehstate_t
{

};

struct EHRegistrationNode
{
	__ehstate_t state;//int state;
};


struct EHParameters
{
	dd magicNumber;
	void* pExceptionObject;
	dd pThrowInfo;
};

struct EHExceptionRecord
{
	dd ExceptionCode;
	dd ExceptionFlags;
	dd ExceptionRecord;
	dd ExceptionAddress;
	dd NumberParameters;
	EHParameters params;
};

struct _s_CatchableType
{
	dd properties;
	void* pType;
	PMD thisxDisplacement;
	dd sizeOrOffset;
	void* copyFunction;
};




struct _s_TryBlockMapEntry
{
	int tryLow;
	__ehstate_t tryHigh;//__ehstate_t tryHigh;
	int catchHigh;
	int nCatches;
	int pHandlerArray[];
};



















































