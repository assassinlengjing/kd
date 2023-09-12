#include "sub.h"
void __cdecl doexit(UINT uExitCode, int a2, int a3)
{
  HANDLE CurrentProcess; // eax
  void (**v4)(void); // esi
  v4 = 0;
  if ( unk_4CB2B4 == 1 )
  {
    CurrentProcess = GetCurrentProcess();
    TerminateProcess(CurrentProcess, uExitCode);
  }
  unk_4CB2B0 = 1;
  unk_4CB2AC = a3;
  if ( !a2 )
  {
    if ( unk_4CC7D0 )
    {
      v4 = (void (**)(void))(unk_4CC7CC - 4);
      if ( unk_4CC7CC - 4 >= (unsigned int)unk_4CC7D0 )
      {
        do
        {
          if ( *v4 )
            (*v4)();
          --v4;
        }
        while ((int)v4 >= unk_4CC7D0 );
      }
    }
    _initterm((void**)&unk_4B0038, (void**)&unk_4B0040);
  }
  _initterm((void**)&unk_4B0044, (void**)&unk_4B004C);
  if ( !a3 )
  {
    unk_4CB2B4 = 1;
    ExitProcess(uExitCode);
  }
}