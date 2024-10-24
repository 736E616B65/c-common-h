#ifndef __COMMON_H__
#define __COMMON_H__

#if _WIN32
//Windows define
#include <Windows.h>
#include <tchar.h>
#define OS _T("Windows")

#elif __linux__
//Linux define
#define OS "linux"

#elif __APPLE__
//Darwin define
#define OS "Darwin"

#endif
    //common define

#endif
