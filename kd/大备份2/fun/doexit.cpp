#include "sub.h"
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // esi
  v4 = 0;
  if ( dword_4CB2B4 == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, uExitCode);
  }
  dword_4CB2B0 = 1;
  byte_4CB2AC = a3;
  if ( !a2 )
  {
    if ( dword_4CC7D0 )
    {
      v4 = (void (**)(void))(dword_4CC7CC - 4);
      if ( dword_4CC7CC - 4 >= (unsigned int)dword_4CC7D0 )
      {
        do
        {
          if ( *v4 )
            (*v4)();
          --v4;
        }
        while ((int)v4 >= dword_4CC7D0 );
      }
    }
    _initterm((void**)&dword_4B0038, (void**)&dword_4B0040);
  }
  _initterm((void**)&dword_4B0044, (void**)&dword_4B004C);
  if ( !a3 )
  {
    dword_4CB2B4 = 1;
    ExitProcess(uExitCode);
  }
}