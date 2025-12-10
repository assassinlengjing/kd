#define _CRT_SECURE_NO_WARNINGS
#include <dia2.h>
#pragma comment(lib, "diaguids.lib")
#include <comdef.h>
#include <atlbase.h>

HRESULT NoRegCoCreate(const wchar_t* dll, REFCLSID rclsid, REFIID riid, void** ppv) {
    HMODULE hDll = LoadLibraryW(dll);
    if (!hDll) return HRESULT_FROM_WIN32(GetLastError());

    typedef HRESULT(STDAPICALLTYPE* PDllGetClassObject)(REFCLSID, REFIID, LPVOID*);
    PDllGetClassObject pDllGetClassObject =
        (PDllGetClassObject)GetProcAddress(hDll, "DllGetClassObject");
    if (!pDllGetClassObject) return E_FAIL;

    CComPtr<IClassFactory> spCF;
    HRESULT hr = pDllGetClassObject(rclsid, IID_IClassFactory, (void**)&spCF);
    if (FAILED(hr)) return hr;

    return spCF->CreateInstance(NULL, riid, ppv);
}


void ParsePdb(IDiaSymbol* pGlobal)
{
    FILE *file = fopen("123.txt", "w");
    IDiaEnumSymbols* pEnumSymbols = NULL;
    IDiaSymbol* pSymbol = NULL;
    ULONG celt = 1;

    pGlobal->findChildren(SymTagPublicSymbol, NULL, nsNone, &pEnumSymbols);
    while (SUCCEEDED(pEnumSymbols->Next(1, &pSymbol, &celt)) && (celt == 1))
    {
        BSTR SymName = NULL;
        pSymbol->get_name(&SymName);

        BSTR SymUndecoratedName = NULL;
        pSymbol->get_undecoratedName(&SymUndecoratedName);

        DWORD address = 0;
        pSymbol->get_relativeVirtualAddress(&address);

        fwprintf(file, L"Symbol Name: %s  \nUndecoratedName:%s  \naddress:%x\n\n", SymName, SymUndecoratedName, address);

        if (pSymbol)
        {
            pSymbol->Release();
            pSymbol = NULL;
        }
    }

    if (pEnumSymbols)
    {
        pEnumSymbols->Release();
        pEnumSymbols = NULL;
    }

    fclose(file);
}
int main() {
    CoInitialize(NULL);
    CComPtr<IDiaDataSource> pSource;
    // 使用示例
    HRESULT hr;
    /*
      hr =   NoRegCoCreate(
        L"C:\\Program Files (x86)\\Microsoft Visual Studio\\2019\\Community\\Common7\\IDE\\msdia140.dll",
        CLSID_DiaSource,
        IID_IDiaDataSource,
        (void**)&pSource);
        */

      hr = CoCreateInstance(CLSID_DiaSource,
          NULL,
          CLSCTX_INPROC_SERVER,
          __uuidof(IDiaDataSource),
          (void**)&pSource);


    
 // 打开pdb文件
    const wchar_t* wszFilename = L"D:\\Users\\lengjing\\source\\repos\\kd\\Debug\\ddraw.pdb";
    if (FAILED(pSource->loadDataFromPdb(wszFilename)))
    {
        if (FAILED(pSource->loadDataForExe(wszFilename, NULL, NULL)))
        {
            printf("loadDataFromPdb/Exe error");
        }
    }

    // 打开session
    IDiaSession* pSession = NULL;
    if (FAILED(pSource->openSession(&pSession)))
    {
        printf("openSession error");
    }

    // 获取全局符号
    IDiaSymbol* pGlobal = NULL;
    pSession->get_globalScope(&pGlobal);
    pGlobal->AddRef();
    // 根据全局符号解析数据
    ParsePdb(pGlobal);

    // 释放资源及反初始化
    if (pGlobal)
    {
        pGlobal->Release();
        pGlobal = NULL;
    }

    if (pSession)
    {
        pSession->Release();
        pSession = NULL;
    }

    CoUninitialize();
    return 0;
}