#pragma once
#include "mytype.h"
#include "struct.h"
#include <winternl.h>
#include <concrtinternal.h>


//#define code_1
//#define code_t

//#ifdef code_1
//
//namespace Concurrency {
//	struct ISchedulerProxy
//	{
//
//	};
//
//	struct IExecutionContext
//	{
//
//	};
//
//	struct IUMSCompletionList
//	{
//
//	};
//	namespace details
//	{
//		struct _TaskCollectionBase
//		{
//
//		};
//		struct HardwareAffinity;
//
//		struct _CancellationTokenState;
//
//		struct _CancellationTokenRegistration
//		{
//			static _CancellationTokenState* _GetToken(_CancellationTokenRegistration* thisx);
//		};//或者类
//
//		struct VirtualProcessorRoot
//		{
//			static void _VirtualProcessorRoot(VirtualProcessorRoot* thisx);
//			~VirtualProcessorRoot();
//		};
//
//		struct SchedulerProxy
//		{
//			static unsigned int GetQueueLength(SchedulerProxy* thisx);
//			static unsigned int GetNumBorrowedCores(SchedulerProxy* thisx);
//			static unsigned int GetNumalThreads(SchedulerProxy* thisx);
//			static unsigned int GetNumExternalThreads(Concurrency::details::SchedulerProxy* thisxx);
//		};
//
//		struct UMSThreadProxy;
//		struct UMSFreeVirtualProcessorRoot
//		{
//			
//			static UMSThreadProxy* GetExecutingProxy(UMSFreeVirtualProcessorRoot* thisx);
//		};
//
//
//		struct SchedulerBase
//		{
//			static ISchedulerProxy* GetSchedulerProxy(SchedulerBase* thisx);
//			static unsigned int GetNumberOfBoundContexts(SchedulerBase* thisx);
//			static unsigned int Id(SchedulerBase* thisx);
//			
//		};
//		struct VirtualProcessor
//		{
//			static struct Concurrency::IExecutionContext* GetExecutingContext(VirtualProcessor* thisx);
//			static unsigned int GetExecutionResourceId(VirtualProcessor* thisx);
//			static unsigned int GetId(Concurrency::details::VirtualProcessor* thisxx);
//		};
//		struct InternalContextBase
//		{
//			static void UNSAFE_SetVirtualProcessor(InternalContextBase* thisx, struct VirtualProcessor* a2);
//			static void SetOversubscribedVProc(InternalContextBase* thisx, struct VirtualProcessor* a2);
//		};
//
//		struct UMSThreadScheduler
//		{
//			static void SetCompletionList(UMSThreadScheduler* thisx, struct Concurrency::IUMSCompletionList* a2);
//		};
//		struct ContextBase
//		{
//			static struct _TaskCollectionBase* GetExecutingCollection(Concurrency::details::ContextBase* thisxx);
//		};
//		struct ExecutionResource
//		{
//			static unsigned int GetNodeId(ExecutionResource* thisx);
//		};
//
//		struct _UnrealizedChore
//		{
//			static bool _GetRuntimeOwnsLifetime(Concurrency::details::_UnrealizedChore* thisxx);
//		};
//		struct SchedulingNode;
//		struct SchedulingRing
//		{
//			static void SetOwningNode(Concurrency::details::SchedulingRing* thisxx,struct Concurrency::details::SchedulingNode* a2);
//		};
//	};
//
//};
//
//struct DNameNode
//{
//	DNameNode();
//	static DNameNode* C_DNameNode(DNameNode* thisx);
//	static DNameNode* C2_DNameNode(DNameNode* thisx);
//	DNameNode*  new_DNameNode(DNameNode* thisxx);
//};
////DNameNode::DNameNode()重复定义了
////{
////	new_DNameNode(this);
////}
//
//struct streambuf
//{
//	static void unbuffered(streambuf* thisx, int a2);
//};
//struct TryBlockMapEntry
//{
//	int tryHigh;
//	int catchHigh;
//};
//
//struct type_info;
//struct ios;
//
//#endif // DEBUG
//
//#ifdef code_t
//	#include <concrtrm.h>
//
//#endif

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

//struct TryBlockMapEntry
//{
//	int tryHigh;
//	int catchHigh;
//};

struct type_info;
struct ios;

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













struct FuncInfo
{
	DWORD magicNumber; //编译器生成的固定数字
	DWORD maxState; //最大栈展开数的下标值
	DWORD pUnwindMap; //指向栈展开函数表的指针，指向UnwindMapEntry表结构
	DWORD dwTryCount; //try块的数量
	DWORD pTryBlockMap; //try块列表，指向TryBlockMapEntry结构体
};




struct UnwindMapEntry
{
	DWORD toState; //栈展开数下标值
	DWORD lpFunAction; //展开执行函数
};
struct TryBlockMapEntry {
	DWORD tryLow;//try块的最小状态索引，用于范围检查
	DWORD tryHigh;//try块的最大状态索引，用于范围检查
	DWORD catchHigh;//catch块的最高状态索引，用域范围检查
	DWORD dwCatchCount; //catch块个数
	DWORD pCatchHandlerArray; //catch块的描述，指向_msRttiDscr表结构
};
struct _msRttiDscr
{
	DWORD nFlag;//用域catch块的匹配检查
	DWORD pType;//catch块要捕捉的类型，指向TypeDescriptor表结构
	DWORD dispCatchObjOffset; //同于定位异常对象在当前EBP中的偏移位置
	DWORD CatchProc; //catch块的首地址
};

//struct TypeDescriptor
//{
//	DWORD hash; //类型名称的hash
//	DWORD spare; //保留
//	DWORD name;//类型名称
//};


struct ThrowInfo
{
	DWORD nFlag;//抛出异常类型标记
	DWORD pDestructor; //异常对象的析构函数地址
	DWORD pForwardCompat;//位置
	DWORD pCatchTableTypeArray;//catch块类型表，指向CatchTableTypeArray结构体
};


struct CatchTableTypeArray
{
	DWORD dwCount; //CatchTableType 数组包含的元素个数
	DWORD ppCatchTableType; //catch块的类型信息，类型为CatchTableType
};
struct CatchTableType
{
	DWORD flag;//异常对象类型标志
	DWORD pTypeInfo;//指向异常类型结构，TypeDescriptor表。
	PMD thisDisplacement;//基类信息
	DWORD sizeOrOffset; //类的大小
	DWORD pCopyFunction; //复制构造函数的指针
};

struct PWD
{
	DWORD dwOffsetToThis; //结构体大小
	DWORD dwOffsetToVBase; //虚基类偏移
	DWORD dwOffsetToVbTable; //基类虚表偏移
};




































