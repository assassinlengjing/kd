#include "sub.h" 
int __fastcall sub_47F211(int a1)
{
    int result; // eax
    char* v2; // eax
    const char* v3; // eax
    CHAR String; // [esp+4h] [ebp-18h] BYREF
    char v6; // [esp+5h] [ebp-17h]
    char v7; // [esp+6h] [ebp-16h]
    int v8; // [esp+8h] [ebp-14h]
    char* v9; // [esp+Ch] [ebp-10h]
    int v10; // [esp+10h] [ebp-Ch]
    char v11; // [esp+14h] [ebp-8h]
    CHAR v12; // [esp+18h] [ebp-4h]

    result = a1;
    if (*(_DWORD*)(a1 + 276) != -1)
    {
        result = sub_47FAB0(a1);
        if (result)
        {
            result = a1;
            ++* (_DWORD*)(a1 + 552);
        }
        if (*(int*)(a1 + 268) > 0)
        {
            result = *(_DWORD*)(a1 + 268) - 1;
            *(_DWORD*)(a1 + 268) = result;
            while (!*(_DWORD*)(a1 + 268))
            {
                if (*(_DWORD*)(a1 + 292) == -1)
                {
                    result = a1;
                    if ((int)++ * (_DWORD*)(a1 + 260) >= 256
                        || (result = lstrlenA((LPCSTR)(a1 + 4)), *(_DWORD*)(a1 + 260) >= result))
                    {
                        *(_DWORD*)(a1 + 268) = -1;
                        return result;
                    }
                }
                v12 = *(_BYTE*)(a1 + *(_DWORD*)(a1 + 260) + 4);
                if (*(int*)(a1 + 292) >= 0)
                    v12 = *(_BYTE*)(a1 + *(_DWORD*)(a1 + 292) + 296);
                if (v12 == 92)
                {
                    result = a1;
                    if ((int)++ * (_DWORD*)(a1 + 260) >= 256
                        || (result = lstrlenA((LPCSTR)(a1 + 4)), *(_DWORD*)(a1 + 260) >= result))
                    {
                        *(_DWORD*)(a1 + 268) = -1;
                        return result;
                    }
                    v12 = *(_BYTE*)(a1 + *(_DWORD*)(a1 + 260) + 4);
                    result = a1;
                    v11 = *(_BYTE*)(a1 + *(_DWORD*)(a1 + 260) + 5);
                    if (v12 == 110)
                    {
                        *(_BYTE*)(a1 + 264) = 0;
                        result = a1;
                        ++* (_BYTE*)(a1 + 265);
                    }
                    else if (v12 == 46)
                    {
                        *(_DWORD*)(a1 + 268) = 15;
                    }
                    else
                    {
                        result = v12;
                        if (v12 == 124)
                        {
                            *(_DWORD*)(a1 + 268) = 60;
                        }
                        else if (v12 == 119 || (result = v12, v12 == 87))
                        {
                            result = sub_47F6B3(a1);
                            *(_DWORD*)(a1 + 268) = result;
                            if (*(int*)(a1 + 268) < 0)
                            {
                                result = a1;
                                *(_DWORD*)(a1 + 268) = 0;
                            }
                        }
                        else
                        {
                            switch (v12)
                            {
                            case 'S':
                            case 's':
                                result = sub_47F6B3(a1);
                                *(_DWORD*)(a1 + 272) = result;
                                if (*(int*)(a1 + 272) < 0)
                                {
                                    result = a1;
                                    *(_DWORD*)(a1 + 272) = 4;
                                }
                                break;
                            case 'N':
                                v10 = sub_47F6B3(a1);
                                result = sub_426590(byte_4B9B10, v10);
                                v9 = (char*)result;
                                if (result)
                                {
                                    v2 = sub_4266D0(v9);
                                    result = wsprintfA((LPSTR)(a1 + 296), "%s", v2);
                                    *(_DWORD*)(a1 + 292) = 0;
                                }
                                break;
                            case 'T':
                                result = v11;
                                if (v11 == 78)
                                {
                                    ++* (_DWORD*)(a1 + 260);
                                    v8 = sub_47F6B3(a1);
                                    v3 = (const char*)sub_471036((unsigned __int8*)byte_4B9B10, v8);
                                    wsprintfA((LPSTR)(a1 + 296), "%s", v3);
                                    result = a1;
                                    *(_DWORD*)(a1 + 292) = 0;
                                }
                                break;
                            }
                        }
                    }
                }
                else
                {
                    String = v12;
                    if (*(_DWORD*)(a1 + 292) == -1)
                    {
                        if ((int)++ * (_DWORD*)(a1 + 260) >= 256 || *(_DWORD*)(a1 + 260) >= lstrlenA((LPCSTR)(a1 + 4)))
                        {
                            result = a1;
                            *(_DWORD*)(a1 + 268) = -1;
                            return result;
                        }
                        v6 = *(_BYTE*)(a1 + *(_DWORD*)(a1 + 260) + 4);
                    }
                    else
                    {
                        ++* (_DWORD*)(a1 + 292);
                        v6 = *(_BYTE*)(a1 + (*(_DWORD*)(a1 + 292))++ + 296);
                        if (lstrlenA((LPCSTR)(a1 + 296)) <= *(_DWORD*)(a1 + 292))
                            *(_DWORD*)(a1 + 292) = -1;
                    }
                    v7 = 0;
                    if ((unsigned __int8)++ * (_BYTE*)(a1 + 264) >= 0x24u)
                    {
                        *(_BYTE*)(a1 + 264) = 0;
                        ++* (_BYTE*)(a1 + 265);
                    }
                    sub_47B91A(
                        8 * *(unsigned __int8*)(a1 + 264),
                        16 * *(unsigned __int8*)(a1 + 265) + 8,
                        &String,
                        0,
                        *(_DWORD*)(a1 + 276));
                    result = *(_DWORD*)(a1 + 272);
                    *(_DWORD*)(a1 + 268) = result;
                }
            }
        }
    }
    return result;
}
