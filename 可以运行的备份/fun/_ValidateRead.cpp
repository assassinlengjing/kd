#include "sub.h"
BOOL __cdecl _ValidateRead(const void *lp, UINT_PTR ucb)
{
  return !IsBadReadPtr(lp, ucb);
}