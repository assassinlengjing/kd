#include "sub.h" 
int sub_4896E8(_DWORD* thisx, int a2, Concurrency::details::UMSFreeVirtualProcessorRoot* a3)
{
    int result; // eax
    int v5; // [esp+4h] [ebp-10h]
    struct Concurrency::details::UMSThreadProxy* ExecutingProxy; // [esp+8h] [ebp-Ch]
    int v7; // [esp+Ch] [ebp-8h]
    int i; // [esp+10h] [ebp-4h]

    ExecutingProxy = Concurrency::details::UMSFreeVirtualProcessorRoot::GetExecutingProxy(a3);
    v5 = sub_48A0E0((_DWORD*)a3);
    result = unknown_libname_19((_DWORD*)a3);
    v7 = result;
    for (i = 0; i < thisx[77]; ++i)
    {
        if (unknown_libname_22((_DWORD*)(432 * i + thisx[82])) == a2)
            sub_48DC4E((_DWORD*)(432 * i + thisx[82]), (int)ExecutingProxy, v5, v7);
        result = i + 1;
    }
    return result;
}
