// kd.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

import utils;
#include "sqlite/sqlite3.h"
#include "sub.h"

// 写端代码
#include <Windows.h>
#include <iostream>
#include <string>





int main_thread_id = 0;
int thread2_id = 0;


int main() //对应start函数
{
    try {
        redis = new Redis("tcp://127.0.0.1:6379");

        auto pong = redis->ping();   // ← 这里才真正建立连接

        if (pong == "PONG") {
            // 连接成功
        }
    }
    catch (const sw::redis::Error& e) {
        // 连接失败 / Redis 不可达
    }

    redis->set("hello", "world");

    auto val = redis->get("hello");
    if (val) {
        std::cout << *val << std::endl;
    }

    redis->set("主界面选择下标", std::to_string((int) & byte_4B9B10[2528]));
    redis->set("主界面选择下标2", std::to_string((int)&byte_4B9B10[15700]));
    redis->set("场景id", std::to_string((int)&byte_4B9B10[104]));
    redis->set("场景id_2", std::to_string((int)&byte_4B9B10[108]));
    redis->set("主界面下的小菜单下标", std::to_string((int)&byte_4B9B10[108]));
	redis->set("byte_4B9B10", std::to_string((int)&byte_4B9B10));


    /*
	SharedData sd;
	sd.addres = &byte_4B4158;
	strcpy(sd.Description, "smsmsmsm");
	sd.type_len = 4;
	share_memory.add_data(sd);

	printf("%d\n", byte_4B4158);
	printf("%d\n", &byte_4B4158);
	printf("%d\n", *&byte_4B4158);

    */
	main_thread_id = GetCurrentThreadId(); // 获取当前线程id

	int c2[] = {1,2,3,4,5,6,7,8};
	printf("%p\n",&byte_4B9B10[763]);
	start();

}
