#include "sub.h" 
int __fastcall sub_4223AF(int a1)
{
    int result; // eax

    result = a1;
    if (*(_DWORD*)a1 != 2)
    {
        if (*(_DWORD*)a1 == 3 && *(_DWORD*)(a1 + 72))
        {
            *(_DWORD*)(a1 + 24) = sub_426470(*(_DWORD**)(a1 + 72));
            *(_DWORD*)(a1 + 28) = sub_426530(*(_DWORD**)(a1 + 72));
            result = (int)UMSFreeVirtualProcessorRoot::GetExecutingProxy(*(UMSFreeVirtualProcessorRoot**)(a1 + 72));
            *(_DWORD*)(a1 + 32) = result;
        }
        else if (*(_DWORD*)a1 == 4 && (result = a1, *(_DWORD*)(a1 + 76)))
        {
            *(_DWORD*)(a1 + 24) = 100 * unknown_libname_22(*(_DWORD**)(a1 + 76));
            *(_DWORD*)(a1 + 28) = 100 * unknown_libname_26(*(_DWORD**)(a1 + 76));
            result = 100 * unknown_libname_12(*(_DWORD**)(a1 + 76));
            *(_DWORD*)(a1 + 32) = result;
        }
        else if (*(_DWORD*)(a1 + 128))
        {
            *(_DWORD*)(a1 + 24) = sub_426090(*(_DWORD**)(a1 + 128));
            *(_DWORD*)(a1 + 28) = sub_4260B0(*(_DWORD**)(a1 + 128));
            result = sub_4260D0(*(_DWORD**)(a1 + 128));
            *(_DWORD*)(a1 + 32) = result;
        }
    }
    return result;
}

