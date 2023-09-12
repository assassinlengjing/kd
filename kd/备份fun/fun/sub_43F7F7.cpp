#include "sub.h" 
int sub_43F7F7(DWORD* thisx, int a2)
{
    int v4; // [esp+4h] [ebp-4h]

    if (DirectSoundCreate(0, (LPDIRECTSOUND*)thisx, 0))
    {
        MessageBoxA(0, &byte_4B043C, aError_4, 0);
        *thisx = 0;
        return 0;
    }
    else
    {
        v4 = (*(int(__stdcall**)(DWORD, int, int))(*(_DWORD*)*thisx + 24))(*thisx, a2, 1);
        if (v4)
        {
            MessageBoxA(0, &Text, Caption, 0);
            if (v4 == -2005401590)
                MessageBoxA(0, aDserrAllocated_0, aError_0, 0);
            if (v4 == -2147024809)
                MessageBoxA(0, aDserrInvalidpa_0, aError_1, 0);
            if (v4 == -2005401430)
                MessageBoxA(0, aDserrUninitial_0, aError_2, 0);
            if (v4 == -2147467263)
                MessageBoxA(0, aDserrUnsupport_0, aError_3, 0);
            return 0;
        }
        else
        {
            thisx[48] = (DWORD)CreateThread(0, 0, (LPTHREAD_START_ROUTINE)StartAddress, thisx, 0, (LPDWORD)thisx + 47);
            return 1;
        }
    }
}

