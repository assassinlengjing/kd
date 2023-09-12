#include "sub.h"
void  Concurrency::details::UMSThreadScheduler::SetCompletionList(
    Concurrency::details::UMSThreadScheduler* thisxx,
    struct Concurrency::IUMSCompletionList* a2)
{
    *((_DWORD*)thisxx + 130) = (int)a2;
}