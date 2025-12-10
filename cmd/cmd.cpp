

#include <iostream>
#include <windows.h>
#include <thread>
#include <vector>
using namespace std;
HANDLE h_process = 0;

class GameMemory
{
public:
    string describe;
    int address;
    int size;
    int data;
    GameMemory(string describe,int address,int size)
    {

    }
};
vector<GameMemory> game_memory_list =
{
    {"主界面选择下标",0x4BA4F0,4},
    {"场景id",0X4B9B78,4},
};

void worker(int id) 
{
    while (true)
    {
        Sleep(100);
        for (GameMemory tem : game_memory_list)
        {
            unique_ptr
            ReadProcessMemory(h_process,(LPCVOID)tem.address,tem.size);
        }
    }
}

int main()
{
    HWND hwnd = 0;
    LPDWORD pid = 0;
    int error = 0;
    
    std::cout << "Hello World!\n";
    hwnd = FindWindowA(nullptr,"Legend of Burning Fighters");
    if (hwnd == 0) _asm int3;
    error = GetWindowThreadProcessId(hwnd,pid);
    h_process = OpenProcess(PROCESS_ALL_ACCESS, false, *pid);
    if(h_process == 0) _asm int3;
    thread t1(worker, 1);

}

