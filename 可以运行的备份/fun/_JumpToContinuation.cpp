#include "sub.h"
void __stdcall _JumpToContinuation(void *a1, struct EHRegistrationNode *a2)
{
  ((void (__stdcall *)(void *, struct EHRegistrationNode *))a1)(a1, a2);
}