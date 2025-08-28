#include "TaleWorlds.Native.Split.h"

// 01_initialization_part015_sub002.c - 1 个函数

// 函数: 销毁互斥锁
// 功能: 调用系统函数销毁互斥锁，用于清理资源
void destroy_mutex(void)

{
  _Mtx_destroy_in_situ();
  return;
}





