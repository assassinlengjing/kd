#include "sub.h"
void  start()
{
  DWORD Version; // eax
  int wShowWindow; // eax
  HMODULE ModuleHandleA; // eax
  int v3; // [esp-4h] [ebp-78h]
  CHAR *lpCmdLine; // [esp+10h] [ebp-64h]
  int v5; // [esp+14h] [ebp-60h]
  struct _STARTUPINFOA StartupInfo; // [esp+18h] [ebp-5Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+5Ch] [ebp-18h]

  Version = GetVersion();
  unk_4CB284 = BYTE1(Version);
  unk_4CB280 = (unsigned __int8)Version;
  unk_4CB27C = BYTE1(Version) + ((unsigned __int8)Version << 8);
  unk_4CB278 = HIWORD(Version);
  if ( !_heap_init(0) )
    fast_error_exit(0x1Cu);
  ms_exc.registration.TryLevel = 0;
  _ioinit();
  unk_4CC7D4 = (int)GetCommandLineA();
  Block = __crtGetEnvironmentStringsA();
  _setargv();
  _setenvp();
  _cinit();
  StartupInfo.dwFlags = 0;
  GetStartupInfoA(&StartupInfo);
  lpCmdLine = _wincmdln();
  if ( (StartupInfo.dwFlags & 1) != 0 )
    wShowWindow = StartupInfo.wShowWindow;
  else
    wShowWindow = 10;
  v3 = wShowWindow;
  ModuleHandleA = GetModuleHandleA(0);
  v5 = aWinMain(ModuleHandleA, 0, lpCmdLine, v3);
  exit(v5);
}