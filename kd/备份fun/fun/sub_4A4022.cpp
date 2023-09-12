#include "sub.h" 
void   sub_4A4022(EXCEPTION_POINTERS* a1, int a2, int a3, int a4)
{
    int v4; // [esp-Ch] [ebp-24h] BYREF
    int v5; // [esp-8h] [ebp-20h]
    int v6; // [esp-4h] [ebp-1Ch]
    CPPEH_RECORD ms_exc; // [esp+0h] [ebp-18h]

    ms_exc.registration.ScopeTable = stru_4AC480;
    ms_exc.registration.ExceptionHandler = _except_handler3;
    //ms_exc.registration.Next = (struct _EH3_EXCEPTION_REGISTRATION*)NtCurrentTeb()->NtTib.ExceptionList;???????
    ms_exc.exc_ptr = a1;
    v6 = a2;
    v5 = a4;
    v4 = a3;
    ms_exc.old_esp = (DWORD)&v4;
    ms_exc.registration.TryLevel = 0;
    if (off_4B8314)
        //off_4B8314(???????
        //    v4,
        //    v5,
        //    v6,
        //    ms_exc.old_esp,
        //    ms_exc.exc_ptr,
        //    ms_exc.registration.Next,
        //    ms_exc.registration.ExceptionHandler,
        //    ms_exc.registration.ScopeTable,
        //    1);
    ms_exc.registration.TryLevel = -1;
    sub_4A3FCC();
}
