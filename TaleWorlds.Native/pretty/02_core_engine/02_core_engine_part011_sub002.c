#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part011_sub002.c - 核心引擎模块 - 互斥锁销毁功能

/**
 * 销毁互斥锁资源
 * 
 * 该函数负责销毁程序中的互斥锁资源，释放系统资源。
 * 这是一个清理函数，通常在程序关闭或模块卸载时调用。
 * 
 * 功能：
 * - 调用系统互斥锁销毁函数
 * - 释放互斥锁占用的系统资源
 * - 确保线程同步资源的正确清理
 */
void DestroyMutex(void)
{
  // 调用系统互斥锁销毁函数
  _Mtx_destroy_in_situ();
  
  return;
}