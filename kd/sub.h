#include "data.h"
#include "rdata.h"
#include "s.h" 

#include <psapi.h>
#include <strsafe.h>
#include <ddraw.h>
#include <malloc.h>
#include <vector>
#include <assert.h>
#include <string>
#include <format>
#include <map>
#include <mutex>
#include <dsound.h>

extern int main_thread_id;
extern int thread2_id;

#define TEST 2