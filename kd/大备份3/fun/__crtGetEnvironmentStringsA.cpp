#include "sub.h"
CHAR *__crtGetEnvironmentStringsA()
{
  CHAR *v0; // ebx
  WCHAR *EnvironmentStringsW; // esi
  LPCH EnvironmentStrings; // edi
  WCHAR *i; // eax
  int v4; // eax
  int v5; // ebp
  CHAR *v6; // eax
  LPCH j; // eax
  size_t v9; // ebp
  void *v10; // eax
  void *v11; // esi
  CHAR *Block; // [esp+10h] [ebp-8h]
  int cchWideChar; // [esp+14h] [ebp-4h]

  v0 = 0;
  EnvironmentStringsW = 0;
  EnvironmentStrings = 0;
  if ( unk_4CB3C0 )
  {
    if ( unk_4CB3C0 == 1 )
      goto LABEL_7;
    if ( unk_4CB3C0 != 2 )
      return 0;
  }
  else
  {
    EnvironmentStringsW = GetEnvironmentStringsW();
    if ( EnvironmentStringsW )
    {
      unk_4CB3C0 = 1;
LABEL_7:
      if ( EnvironmentStringsW || (EnvironmentStringsW = GetEnvironmentStringsW()) != 0 )
      {
        for ( i = EnvironmentStringsW; *i; ++i )
        {
          do
            ++i;
          while ( *i );
        }
        cchWideChar = i - EnvironmentStringsW + 1;
        v4 = WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, 0, 0, 0, 0);
        v5 = v4;
        if ( v4 )
        {
          v6 = (CHAR *)malloc(v4);
          Block = v6;
          if ( v6 )
          {
            if ( !WideCharToMultiByte(0, 0, EnvironmentStringsW, cchWideChar, v6, v5, 0, 0) )
            {
              free(Block);
              Block = 0;
            }
            v0 = Block;
          }
        }
        FreeEnvironmentStringsW(EnvironmentStringsW);
        return v0;
      }
      return 0;
    }
    EnvironmentStrings = (LPCH)GetEnvironmentStrings();
    if ( !EnvironmentStrings )
      return 0;
    unk_4CB3C0 = 2;
  }
  if ( !EnvironmentStrings )
  {
    EnvironmentStrings = (LPCH)GetEnvironmentStrings();
    if ( !EnvironmentStrings )
      return 0;
  }
  for ( j = EnvironmentStrings; *j; ++j )
  {
    do
      ++j;
    while ( *j );
  }
  v9 = j - EnvironmentStrings + 1;
  v10 = malloc(v9);
  v11 = v10;
  if ( v10 )
    memcpy(v10, EnvironmentStrings, v9);
  else
    v11 = 0;
  FreeEnvironmentStringsA(EnvironmentStrings);
  return (CHAR *)v11;
}