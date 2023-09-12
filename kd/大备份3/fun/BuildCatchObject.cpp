#include "sub.h"
void  BuildCatchObject(
    struct EHExceptionRecord* a1,
    struct EHExceptionRecord* a2,
    struct EHRegistrationNode* a3,
    const struct _s_HandlerType* a4,
    const struct _s_CatchableType* a5)
{
    TypeDescriptor* pType; // eax
    ptrdiff_t dispCatchObj; // eax
    char** v7; // edi
    void* v8; // esi
    BOOL v9; // eax
    EXCEPTION_POINTERS* v10; // ecx
    int v11; // eax
    char* pExceptionObject; // eax
    char* v13; // eax
    BOOL v14; // eax
    int v15; // eax
    BOOL v16; // eax
    int v17; // eax
    char* v18; // eax
    BOOL v19; // eax
    int v20; // eax
    int v21; // eax
    void* v22; // [esp-8h] [ebp-30h]
    EXCEPTION_POINTERS* v23; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v24; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v25; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v26; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v27; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v28; // [esp-4h] [ebp-2Ch]
    int sizeOrOffset; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v30; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v31; // [esp-4h] [ebp-2Ch]
    EXCEPTION_POINTERS* v32; // [esp-4h] [ebp-2Ch]

    pType = a4->pType;
    if (pType)
    {
        if (pType->name[0])
        {
            dispCatchObj = a4->dispCatchObj;
            if (dispCatchObj)
            {
                v7 = (char**)((char*)&a3[1] + dispCatchObj);
                if ((a4->adjectives & 8) != 0)
                {
                    v8 = a2;
                    v9 = _ValidateRead(a2->params.pExceptionObject, 1u);
                    v10 = v23;
                    if (v9)
                    {
                        v11 = _ValidateWrite(v7, 1u);
                        v10 = v24;
                        if (v11)
                        {
                            pExceptionObject = (char*)a2->params.pExceptionObject;
                            *v7 = pExceptionObject;
                            v13 = AdjustPointer(pExceptionObject, &a5->thisxDisplacement);
                        LABEL_8:
                            *v7 = v13;
                            return;
                        }
                    }
                LABEL_25:
                    sub_4A4022(v10, (int)a1, (int)v7, (int)v8);
                }
                v8 = (void*)a5;
                if ((a5->properties & 1) != 0)
                {
                    a1 = a2;
                    v14 = _ValidateRead(a2->params.pExceptionObject, 1u);
                    v10 = v25;
                    if (!v14)
                        goto LABEL_25;
                    v15 = _ValidateWrite(v7, 1u);
                    v10 = v26;
                    if (!v15)
                        goto LABEL_25;
                    memcpy_0(v7, a2->params.pExceptionObject, a5->sizeOrOffset);
                    if (a5->sizeOrOffset == 4 && *v7)
                    {
                        v13 = AdjustPointer(*v7, &a5->thisxDisplacement);
                        goto LABEL_8;
                    }
                }
                else
                {
                    a1 = a2;
                    v22 = a2->params.pExceptionObject;
                    if (a5->copyFunction)
                    {
                        v19 = _ValidateRead(v22, 1u);
                        v10 = v30;
                        if (!v19)
                            goto LABEL_25;
                        v20 = _ValidateWrite(v7, 1u);
                        v10 = v31;
                        if (!v20)
                            goto LABEL_25;
                        v21 = _ValidateExecute((FARPROC)a5->copyFunction);
                        v10 = v32;
                        if (!v21)
                            goto LABEL_25;
                        if ((a5->properties & 4) != 0)
                        {
                            AdjustPointer(a2->params.pExceptionObject, &a5->thisxDisplacement);
                            sub_4A273F((int)v7, (int)a5->copyFunction);
                        }
                        else
                        {
                            AdjustPointer(a2->params.pExceptionObject, &a5->thisxDisplacement);
                            sub_4A2738((int)v7, (int)a5->copyFunction);
                        }
                    }
                    else
                    {
                        v16 = _ValidateRead(v22, 1u);
                        v10 = v27;
                        if (!v16)
                            goto LABEL_25;
                        v17 = _ValidateWrite(v7, 1u);
                        v10 = v28;
                        if (!v17)
                            goto LABEL_25;
                        sizeOrOffset = a5->sizeOrOffset;
                        v18 = AdjustPointer(a2->params.pExceptionObject, &a5->thisxDisplacement);
                        memcpy_0(v7, v18, sizeOrOffset);
                    }
                }
            }
        }
    }
}