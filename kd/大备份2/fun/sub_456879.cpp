#include "sub.h" 
int sub_456879(_DWORD* thisx, unsigned __int8 a2)
{
    char v2; // al
    unsigned __int8 v3; // al
    int v4; // eax
    int i; // [esp+4h] [ebp-8h]
    int v8; // [esp+8h] [ebp-4h]

    v8 = rand() % (int)Size;
    while (!byte_4B99CD)
    {
        for (i = 0;
            i < 8
            && (a2 == i
                || !unknown_libname_7(&thisx[153 * i + 657])
                || Concurrency::details::SchedulerBase::GetSchedulerProxy((Concurrency::details::SchedulerBase*)&thisx[153 * i + 657]) == (struct Concurrency::ISchedulerProxy*)80
                || v8 != (unsigned __int16)sub_43E600((short*)&thisx[153 * i + 657]));
            ++i)
        {
            ;
        }
        if (i == 8)
            break;
        if (++v8 == Size)
            v8 = 0;
    }
    sub_475010((short*)&thisx[153 * a2 + 657], v8);
    v2 = MarkedForDetachment((_BYTE*)(36 * v8 + dword_4B92E0));
    sub_474FF0((char*)&thisx[153 * a2 + 657], v2);
    v3 =  MarkedForDetachment((_BYTE*)(36 * v8 + dword_4B92E0));
    sub_474FD0(&thisx[153 * a2 + 657], dword_4B9220[v3]);
    sub_41D84A((_DWORD)&thisx[153 * a2 + 657]);
    sub_42371C((_DWORD)&thisx[153 * a2 + 657]);
    v4 = (_DWORD)sub_41F0A9(&thisx[153 * a2 + 657]);
    sub_41F712((_DWORD*)v4);
    return sub_41D697((_DWORD)&thisx[153 * a2 + 657]);
}