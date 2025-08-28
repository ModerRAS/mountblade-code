#include "TaleWorlds.Native.Split.h"

// 01_initialization_part015_sub001_sub002.c - 1 个函数

// 函数：销毁条件变量
void destroy_condition_variable(void)

{
    // 销毁条件变量资源
    _Cnd_destroy_in_situ();
    return;
}