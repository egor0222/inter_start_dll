#pragma once
#include "pch.h"

#ifdef DLL1_EXPORTS
#define LIB_API __declspec(dllexport)
#else
#define LIB_API __declspec(dllimport)
#endif

extern "C" LIB_API BOOL check();

typedef wchar_t* strptr;
extern "C" LIB_API void start(strptr inter_path, strptr file_path);