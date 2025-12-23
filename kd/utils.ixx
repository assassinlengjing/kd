// math_module.cppm
import <string>;
import <windows.h>;
import <hiredis/hiredis.h>;
import <sw/redis++/redis++.h>;
import <data.h>;
export module utils;

/*

export int add(int a, int b);
export int subtract(int a, int b);
export std::string GBKToUTF8(const char* gbk);
export std::string SJISToUTF8(const char* s);
export HANDLE hMap;
*/
#define START_EXPORT export { 
#define END_EXPORT }

START_EXPORT
using namespace sw::redis;


HANDLE hMap;
Redis* redis;

// 类型列表
const char* types[] = {
	"__int8*",
	"__int8",
	"short*",
	"__int16",
	"int", "char", "tagRECT", "float", "_cpinfo", "CHAR",
	"WORD", "_STARTUPINFOA", "CPPEH_RECORD", "int", "void", "bool",
	"BOOL", "ISchedulerProxy", "IUMSCompletionList", "UMSThreadScheduler",
	"_MMIOINFO", "MMRESULT", "streambuf", "HANDLE",
	"char",
	"LONG",
	"UINT",
	"HINSTANCE",
	"tagMSG",
	"tagJOYCAPSA",
	"joyinfo_tag",
	"INT",
	"HDC",
	"HBITMAP",
	"HGDIOBJ",
	"_MMCKINFO",
	"HMMIO",
	"size_t",
	"SchedulingNode","_UnrealizedChore","_CancellationTokenRegistration","_CancellationTokenState",
	"details::InternalContextBase",
	"SchedulerProxy",
	"Concurrency::details::ContextBase",
	"Concurrency::details::SchedulerBase",
	"Concurrency::ISchedulerProxy",
	"Concurrency::details::UMSFreeVirtualProcessorRoot",

};

int add(int a, int b) {
	return a + b;
}

int subtract(int a, int b) {
	return a - b;
}

std::string GBKToUTF8(const char* gbk)
{
	if (!gbk) return {};

	// GBK → UTF-16
	int wlen = MultiByteToWideChar(936, 0, gbk, -1, nullptr, 0);
	if (wlen <= 0) return {};

	std::wstring wstr(wlen, 0);
	MultiByteToWideChar(936, 0, gbk, -1, &wstr[0], wlen);

	// UTF-16 → UTF-8
	int ulen = WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, nullptr, 0, nullptr, nullptr);
	if (ulen <= 0) return {};

	std::string u8(ulen, 0);
	WideCharToMultiByte(CP_UTF8, 0, wstr.c_str(), -1, &u8[0], ulen, nullptr, nullptr);

	return u8;
}

std::string SJISToUTF8(const char* s)
{
	int wlen = MultiByteToWideChar(932, 0, s, -1, NULL, 0);
	std::wstring w(wlen, 0);
	MultiByteToWideChar(932, 0, s, -1, &w[0], wlen);

	int ulen = WideCharToMultiByte(CP_UTF8, 0, w.c_str(), -1, NULL, 0, NULL, NULL);
	std::string u8(ulen, 0);
	WideCharToMultiByte(CP_UTF8, 0, w.c_str(), -1, &u8[0], ulen, NULL, NULL);
	return u8;
}

#pragma pack(push, 1)

struct SharedData
{
	uint32_t Description_lne;    //描述字符串长度
	char     Description[512]; //描述
	void* addres;			//地址
	int type_len;		//类型长度
};

#pragma pack(pop)



class Share_Memory {
public:
	Share_Memory()
	{
		index = 0;

		m_hFile_mapping = CreateFileMappingA(			//旧的是CreateFileMapping
			INVALID_HANDLE_VALUE,   // 物理文件句柄
			NULL,					// 默认安全级别
			PAGE_READWRITE,			// 可读可写
			0,						// 高位文件大小
			sizeof(SharedData) * len,			// 低位文件大小
			"GameVarTable"			// 共享内存名称//新LPCSTR //旧LPCWSTR
		);

		m_pBuff = MapViewOfFile(
			m_hFile_mapping,				// 共享内存的句柄
			FILE_MAP_ALL_ACCESS,		// 可读写许可
			0,
			0,
			sizeof(SharedData) * len
		);
	}

	~Share_Memory() {
		// 解除文件映射
		UnmapViewOfFile(m_pBuff);
		// 关闭内存映射文件对象句柄
		CloseHandle(m_hFile_mapping);
	}

	void add_data(SharedData a_ShareData) {
		memcpy((void*)((int)m_pBuff + (index * sizeof(SharedData))), &a_ShareData, sizeof(SharedData));
		index++;
	}

public:
	void* m_pBuff;
private:
	int index;
	int len = 500;
	HANDLE m_hFile_mapping;

};

Share_Memory share_memory;

class AddressHelper
{
public:
	int start = (int) & byte_4B9B10;
	int end = (int)&byte_4B9B10 + 16408;
	void* get(const std::string& key)//0X4B9B78
	{
		int address = std::stoi(key);
		return (void*)address;
	}
};

AddressHelper g_AddressHelper;

END_EXPORT