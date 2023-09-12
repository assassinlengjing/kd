//----------------------------------------------------------------------------------------------------------------------------------------------------------------

namespace Concurrency
{
	namespace details
	{
		// From runtime

		class SchedulerResourceManagement;
		class ScheduleGroupBase;
		class CacheLocalScheduleGroup;
		class FairScheduleGroup;
		class SchedulingRing;
		class SchedulingNode;
		class VirtualProcessor;
		class ThreadVirtualProcessor;
		class UMSThreadVirtualProcessor;
		class SchedulerBase;
		class ThreadScheduler;
		class UMSThreadScheduler;
		class ContextBase;
		class InternalContextBase;
		class ExternalContextBase;
		class ExternalStatistics;
		class UMSThreadInternalContext;
		class _UnrealizedChore;

		// From resource manager

		class ThreadProxy;

		class SchedulerProxy;
		class ResourceManager;
		class ExecutionResource;
		class VirtualProcessorRoot;
		class FreeVirtualProcessorRoot;
		class ThreadProxy;
		class FreeThreadProxy;
		struct IThreadProxyFactory;
		class FreeThreadProxyFactory;
		class SubAllocator;

		class UMSBackgroundPoller;
		class UMSSchedulerProxy;
		class UMSThreadProxy;
		class UMSFreeVirtualProcessorRoot;
		class UMSFreeThreadProxy;
		class TransmogrifiedPrimary;
		class Transmogrificator;
	}

	// From runtime


	struct IExecutionContext;

	// From resource manager

	struct IScheduler;
	struct IResourceManager;

} // namespace Concurrency

using namespace Concurrency;
using namespace Concurrency::details;


#include "ResourceManager.h"
#include "SchedulerProxy.h"
