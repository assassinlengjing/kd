struct _s_FuncInfo
{
    int _bf_0;
    int maxState;
    int pUnwindMap;
    int nTryBlocks;
    int pTryBlockMap;
    int nIPMapEntries;
    int pIPtoStateMap;
    int pESTypeList;
    int EHFlags;

};


//typedef struct	_NT_TIB 
//{
//    struct	_EXCEPTION_REGISTRATION_RECORD* ExceptionList;
//    PVOID StackBase;
//    PVOID StackLimit;
//    PVOID SubSystemTib;
//    union {
//        PVOID FiberData;
//        DWORD Version;
//    };
//    PVOID ArbitraryUserPointer;
//    struct	_NT_TIB* Self;
//} NT_TIB;
//typedef NT_TIB* PNT_TIB;


typedef struct	myFILE
{
    int* _ptr;
    int _cnt;
    int _base;
    int _flag;
    int _file;
    int _charbuf;
    int _bufsiz;
    int _tmpfname;
};

struct _s_ThrowInfo
{
    int attributes;
};