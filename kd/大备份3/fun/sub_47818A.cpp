#include "sub.h" 
int sub_47818A()
{
    void* v1; // [esp+10h] [ebp-578h]
    char v2[1356]; // [esp+2Ch] [ebp-55Ch] BYREF
    int i; // [esp+578h] [ebp-10h]
    int v4; // [esp+584h] [ebp-4h]

    sub_4A1450((int*)v2);
    v4 = 0;
    if (!sub_4A14C0((short*)v2, aGraphicHeadBmp_0))
        goto LABEL_8;
    unk_4B9368 = unknown_libname_21((int*)v2) / 8;
    if (unk_4B9368 <= 0)
    {
        unk_4B9368 = 0;
        v4 = -1;
        sub_4A148B((void**)v2);
        return 0;
    }
    unk_4B9364 = (_DWORD)operator new(4 * unk_4B9368);
    if (unk_4B9364 && (memset((void*)unk_4B9364, 0, 4 * unk_4B9368), (unk_4B9360 = (_DWORD)operator new(4 * unk_4B9368)) != 0))
    {
        memset((void*)unk_4B9360, 0, 4 * unk_4B9368);
        for (i = 0; i < unk_4B9368; ++i)
        {
            v1 = operator new(unk_4B93A0);
            *((_DWORD*)unk_4B9364 + i) = (_DWORD)v1;
            if (!*((_DWORD*)unk_4B9364 + i))
                goto LABEL_8;
            memset(*((void**)unk_4B9364 + i), 0, unk_4B93A0);
            *((_DWORD*)unk_4B9360 + i) = (_DWORD)operator new(4 * unk_4B93A0);
            if (!*((_DWORD*)unk_4B9360 + i))
                goto LABEL_8;
            memset(*((void**)unk_4B9360 + i), 0, 4 * unk_4B93A0);
        }
        v4 = -1;
        sub_4A148B((void**)v2);
        return 1;
    }
    else
    {
    LABEL_8:
        v4 = -1;
        sub_4A148B((void**)v2);
        return 0;
    }
}
