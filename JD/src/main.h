#ifndef MAIN_H
#define MAIN_H
#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <vector>
#include <iterator>
#include <functional>
#include <memory>
#include <cassert>
#include <math.h>
#ifdef _WIN32
#include <Windows.h>
#define _CRTDBG_MAP_ALLOC
#include <cstdlib>
#include <crtdbg.h>

#ifdef _DEBUG
#define DBG_NEW new (_NORMAL_BLOCK, __FILE__, __LINE__)
// Replace _NORMAL_BLOCK with _CLIENT_BLOCK if you want the
// allocations to be of _CLIENT_BLOCK type
#else
#define DBG_NEW new
#endif
#endif
#endif