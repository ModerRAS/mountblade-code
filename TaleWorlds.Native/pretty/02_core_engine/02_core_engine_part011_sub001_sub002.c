#include "TaleWorlds.Native.Split.h"

/**
 * 核心引擎模块第11部分第1子部分第2子部分
 * 
 * 本文件包含一个用于销毁条件变量的函数
 */

/**
 * 销毁条件变量
 * 
 * 该函数调用_Cnd_destroy_in_situ()来销毁条件变量。
 * 这是一个清理函数，用于释放条件变量资源。
 */
void destroy_condition_variable(void)

{
  _Cnd_destroy_in_situ();
  return;
}