#include "sub.h" 
int sub_49C500(_DWORD* thisx)
{
    if (!(*(int(__stdcall**)(_DWORD, _DWORD))(*(_DWORD*)*thisx + 128))(*thisx, 0))
        return 1;
    MessageBoxA(0, &unk_4B7C8C, aError_61, 0);
    return 0;
}

