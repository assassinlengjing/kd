#include "sub.h" 
int sub_41F24C(int thisx, Concurrency::details::SchedulerProxy* a2)
{
    int ExecutingContext; // [esp+4h] [ebp-Ch]
    unsigned int QueueLength; // [esp+8h] [ebp-8h]

    *(_BYTE*)(thisx + 222) = 0;
    *(_DWORD*)(thisx + 480) = (_DWORD)a2;
    sub_49951D((int*)a2);
    QueueLength = Concurrency::details::SchedulerProxy::GetQueueLength(a2);
    ExecutingContext = (int)Concurrency::details::VirtualProcessor::GetExecutingContext((VirtualProcessor*)a2);
    Concurrency::details::VirtualProcessor::GetExecutionResourceId((VirtualProcessor*)a2);
    if (*(_DWORD*)(thisx + 428) != 8)
    {
        if (QueueLength)
        {
            if (*(_DWORD*)(thisx + 392))
            {
                *(_DWORD*)(thisx + 340) += QueueLength;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 30;
            }
            else
            {
                *(_DWORD*)(thisx + 372) = QueueLength;
                *(_DWORD*)(thisx + 352) = (signed int)-QueueLength / 10;
            }
        }
        if (ExecutingContext)
        {
            if (*(_DWORD*)(thisx + 392))
            {
                *(_DWORD*)(thisx + 344) += ExecutingContext;
                *(_DWORD*)(thisx + 348) = 0;
                *(_DWORD*)(thisx + 360) = 30;
            }
            else
            {
                *(_DWORD*)(thisx + 376) = ExecutingContext;
                *(_DWORD*)(thisx + 356) = -ExecutingContext / 10;
            }
        }
    }
    return sub_491639((int)a2, thisx);
}
