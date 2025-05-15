// kd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
import test;
#include "sub.h"

// 写端代码
#include <Windows.h>
#include <iostream>
#include <string>

int main_thread_id = 0;
int thread2_id = 0;

class Share_Memory {
public:
	Share_Memory(unsigned long _memory_size) :
		memory_size(_memory_size),
		pBuff(NULL),
		hFile_mapping()
	{
		hFile_mapping = CreateFileMappingA(			//旧的是CreateFileMapping
			INVALID_HANDLE_VALUE,   // 物理文件句柄
			NULL,					// 默认安全级别
			PAGE_READWRITE,			// 可读可写
			0,						// 高位文件大小
			memory_size,			// 低位文件大小
			(LPCSTR)"ShareMemory"			// 共享内存名称//新LPCSTR //旧LPCWSTR
		);

		pBuff = MapViewOfFile(
			hFile_mapping,				// 共享内存的句柄
			FILE_MAP_ALL_ACCESS,		// 可读写许可
			0,
			0,
			memory_size
		);
	}

	~Share_Memory() {
		// 解除文件映射
		UnmapViewOfFile(pBuff);
		// 关闭内存映射文件对象句柄
		CloseHandle(hFile_mapping);
	}

	void write_memory(char* pin_buffer, size_t size) {
		memcpy(pBuff, pin_buffer,size);
	}

public:
	LPVOID pBuff;
private:
	unsigned long memory_size;

	HANDLE hFile_mapping;

};


int my() {
	char write_buff[512];   //写入共享内存的内容
	Share_Memory share_mem_write(1024);  //创建共享内存
	//itoa((int)&dword_4B0000, write_buff,16);
	//itoa((int)&MessageBoxA_0, write_buff+sizeof(int*), 16);
	*(char*)share_mem_write.pBuff = (char)"1";
	//share_mem_write.write_memory(write_buff, sizeof(write_buff));   //写共享内存
	
	system("pause");  //保持，确保读端
	return 0;
}


int main() //对应start函数
{
	printf("%d\n", byte_4B4158);
	printf("%d\n", &byte_4B4158);
	printf("%d\n", *&byte_4B4158);

	add(1, 2);
	int* b = new int[2];
	int a;

	a = sizeof(CPPEH_RECORD);
	//scanf("%d", &a);

	main_thread_id = GetCurrentThreadId(); // 获取当前线程id

	int c[] = {1,2,3,4,5,6,7,8};
	//CreateThread(0, 0, (LPTHREAD_START_ROUTINE)my, 0, 0, 0);
	printf("%p\n",&byte_4B9B10[763]);
	start();

}
