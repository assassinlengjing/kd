#include "sub.h"
BOOL __cdecl _ValidateExecute(FARPROC lpfn)
{
  return !IsBadCodePtr(lpfn);
}