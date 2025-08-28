#include "TaleWorlds.Native.Split.h"

// 01_initialization_part026.c - 初始化模块第26部分
// 包含25个函数，主要涉及内存管理、字符串操作和系统初始化功能

// 函数: void initialize_string_buffer(longlong buffer_ptr, longlong source_ptr)
// 功能: 初始化字符串缓冲区，处理字符串复制和长度设置
void initialize_string_buffer(longlong buffer_ptr, longlong source_ptr)
{
  longlong string_length;
  
  // 如果源指针为空，清空缓冲区
  if (source_ptr == 0) {
    *(int *)(buffer_ptr + 0x10) = 0;  // 设置字符串长度为0
    **(char **)(buffer_ptr + 8) = 0;   // 清空字符串指针
    return;
  }
  
  // 计算源字符串长度
  string_length = -1;
  do {
    string_length = string_length + 1;
  } while (*(char *)(source_ptr + string_length) != '\0');
  
  // 如果字符串长度小于16字节，直接复制
  if ((int)string_length < 0x10) {
    *(int *)(buffer_ptr + 0x10) = (int)string_length;  // 设置字符串长度
    // 安全复制字符串（可能有跳转表优化）
    strcpy_s(*(char **)(buffer_ptr + 8), 0x10);
    return;
  }
  
  // 长字符串处理：调用内存分配函数
  allocate_string_memory(&STRING_ALLOCATOR, 0x10, source_ptr);
  *(int *)(buffer_ptr + 0x10) = 0;      // 重置长度
  **(char **)(buffer_ptr + 8) = 0;       // 清空指针
  return;
}





// 函数: void copy_memory_safe(longlong dest_ptr, void* src_ptr, int length)
// 功能: 安全地复制内存数据，包含边界检查
void copy_memory_safe(longlong dest_ptr, void* src_ptr, int length)
{
  // 检查长度是否在安全范围内（小于16字节）
  if (length + 1 < 0x10) {
    // 安全复制内存数据
    memcpy(*(char **)(dest_ptr + 8), src_ptr, (longlong)length);
  }
  // 确保字符串以null结尾
  **(char **)(dest_ptr + 8) = 0;
  *(int *)(dest_ptr + 0x10) = 0;  // 重置长度标记
  return;
}





// 函数: void memory_copy_operation(void)
// 功能: 执行内存复制操作（简化实现）
// 注意：原始函数缺少参数，这是一个简化实现
void memory_copy_operation(void)
{
  // 执行内存复制操作（具体实现待完善）
  // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void reset_memory_flag(char* flag_ptr)
// 功能: 重置内存标志和相关计数器
void reset_memory_flag(char* flag_ptr)
{
  longlong context_ptr;
  
  *flag_ptr = 0;  // 重置标志
  *(int *)(context_ptr + 0x10) = 0;  // 重置相关计数器
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_string_operation(longlong str1_ptr, longlong str2_ptr, longlong str3_ptr)
// 功能: 处理字符串操作，包括搜索、长度计算和内存复制
void process_string_operation(longlong str1_ptr, longlong str2_ptr, longlong str3_ptr)
{
  longlong search_result;
  longlong str2_length;
  longlong str3_length;
  char temp_buffer1[32];
  longlong stack_param1;
  void* temp_ptr1;
  char* temp_buffer2;
  int temp_param1;
  char temp_buffer3[16];
  ulonglong stack_param2;
  
  // 设置栈参数
  stack_param1 = 0xfffffffffffffffe;
  stack_param2 = MEMORY_CHECKSUM ^ (ulonglong)temp_buffer1;
  temp_ptr1 = &STRING_CONSTANT1;
  temp_buffer2 = temp_buffer3;
  temp_param1 = 0;
  temp_buffer3[0] = 0;
  
  // 在第一个字符串中搜索子字符串
  search_result = strstr(*(char **)(str1_ptr + 8));
  if (search_result != 0) {
    // 计算第二个字符串的长度
    str2_length = -1;
    str3_length = -1;
    do {
      str3_length = str3_length + 1;
    } while (*(char *)(str2_ptr + str3_length) != '\0');
    
    // 计算第三个字符串的长度
    do {
      str2_length = str2_length + 1;
    } while (*(char *)(str2_length + str3_ptr) != '\0');
    
    // 复制内存数据
    memcpy(temp_buffer2, *(longlong *)(str1_ptr + 8), search_result - *(longlong *)(str1_ptr + 8));
  }
  
  temp_ptr1 = &STRING_CONSTANT2;
  // 调用处理函数
  process_string_data(stack_param2 ^ (ulonglong)temp_buffer1);
}





// 函数: void release_memory_block(void** block_ptr)
// 功能: 释放内存块，处理引用计数和异常列表
void release_memory_block(void** block_ptr)
{
  int* ref_count;
  longlong block_info;
  ulonglong memory_region;
  
  // 检查指针是否有效
  if (block_ptr == (void**)0x0) {
    return;
  }
  
  // 获取内存区域信息
  memory_region = (ulonglong)block_ptr & 0xffffffffffc00000;
  if (memory_region != 0) {
    // 计算块信息偏移
    block_info = memory_region + 0x80 + ((longlong)block_ptr - memory_region >> 0x10) * 0x50;
    block_info = block_info - (ulonglong)*(uint *)(block_info + 4);
    
    // 检查是否在异常列表中
    if ((*(void ***)(memory_region + 0x70) == &ExceptionList) && (*(char *)(block_info + 0xe) == '\0')) {
      // 从链表中移除块
      *block_ptr = *(void **)(block_info + 0x20);
      *(void **)(block_info + 0x20) = block_ptr;
      
      // 减少引用计数
      ref_count = (int *)(block_info + 0x18);
      *ref_count = *ref_count - 1;
      if (*ref_count == 0) {
        cleanup_memory_manager();
        return;
      }
    }
    else {
      // 处理异常情况
      handle_memory_error(memory_region, CONCAT71(0xff000000, *(void ***)(memory_region + 0x70) == &ExceptionList),
                         block_ptr, memory_region, 0xfffffffffffffffe);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180059bc0(void)
void FUN_180059bc0(void)

{
  longlong lVar1;
  
  lVar1 = FUN_18062b420(_DAT_180c8ed18,0x1ae8,10);
  if (lVar1 == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined4 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined2 *)(lVar1 + 0x140) = 0x100;
  *(undefined8 *)(lVar1 + 0x248) = 0;
  *(undefined8 *)(lVar1 + 0x250) = 0;
  *(undefined4 *)(lVar1 + 0x278) = 0;
  *(undefined8 *)(lVar1 + 0x280) = 0;
  *(undefined2 *)(lVar1 + 0x288) = 0x100;
  *(undefined8 *)(lVar1 + 0x390) = 0;
  *(undefined8 *)(lVar1 + 0x398) = 0;
  *(undefined4 *)(lVar1 + 0x3c0) = 0;
  *(undefined8 *)(lVar1 + 0x3c8) = 0;
  *(undefined2 *)(lVar1 + 0x3d0) = 0x100;
  *(undefined8 *)(lVar1 + 0x4d8) = 0;
  *(undefined8 *)(lVar1 + 0x4e0) = 0;
  *(undefined4 *)(lVar1 + 0x508) = 0;
  *(undefined8 *)(lVar1 + 0x510) = 0;
  *(undefined2 *)(lVar1 + 0x518) = 0x100;
  *(undefined8 *)(lVar1 + 0x620) = 0;
  *(undefined8 *)(lVar1 + 0x628) = 0;
  *(undefined4 *)(lVar1 + 0x650) = 0;
  *(undefined8 *)(lVar1 + 0x658) = 0;
  *(undefined2 *)(lVar1 + 0x660) = 0x100;
  *(undefined8 *)(lVar1 + 0x768) = 0;
  *(undefined8 *)(lVar1 + 0x770) = 0;
  *(undefined4 *)(lVar1 + 0x798) = 0;
  *(undefined8 *)(lVar1 + 0x7a0) = 0;
  *(undefined2 *)(lVar1 + 0x7a8) = 0x100;
  *(undefined8 *)(lVar1 + 0x8b0) = 0;
  *(undefined8 *)(lVar1 + 0x8b8) = 0;
  *(undefined4 *)(lVar1 + 0x8e0) = 0;
  *(undefined8 *)(lVar1 + 0x8e8) = 0;
  *(undefined2 *)(lVar1 + 0x8f0) = 0x100;
  *(undefined8 *)(lVar1 + 0x9f8) = 0;
  *(undefined8 *)(lVar1 + 0xa00) = 0;
  *(undefined4 *)(lVar1 + 0xa28) = 0;
  *(undefined8 *)(lVar1 + 0xa30) = 0;
  *(undefined2 *)(lVar1 + 0xa38) = 0x100;
  *(undefined8 *)(lVar1 + 0xb40) = 0;
  *(undefined8 *)(lVar1 + 0xb48) = 0;
  *(undefined4 *)(lVar1 + 0xb70) = 0;
  *(undefined8 *)(lVar1 + 0xb78) = 0;
  *(undefined2 *)(lVar1 + 0xb80) = 0x100;
  *(undefined8 *)(lVar1 + 0xc88) = 0;
  *(undefined8 *)(lVar1 + 0xc90) = 0;
  *(undefined4 *)(lVar1 + 0xcb8) = 0;
  *(undefined8 *)(lVar1 + 0xcc0) = 0;
  *(undefined2 *)(lVar1 + 0xcc8) = 0x100;
  *(undefined8 *)(lVar1 + 0xdd0) = 0;
  *(undefined8 *)(lVar1 + 0xdd8) = 0;
  *(undefined4 *)(lVar1 + 0xe00) = 0;
  *(undefined8 *)(lVar1 + 0xe08) = 0;
  *(undefined2 *)(lVar1 + 0xe10) = 0x100;
  *(undefined8 *)(lVar1 + 0xf18) = 0;
  *(undefined8 *)(lVar1 + 0xf20) = 0;
  *(undefined4 *)(lVar1 + 0xf48) = 0;
  *(undefined8 *)(lVar1 + 0xf50) = 0;
  *(undefined2 *)(lVar1 + 0xf58) = 0x100;
  *(undefined8 *)(lVar1 + 0x1060) = 0;
  *(undefined8 *)(lVar1 + 0x1068) = 0;
  *(undefined4 *)(lVar1 + 0x1090) = 0;
  *(undefined8 *)(lVar1 + 0x1098) = 0;
  *(undefined2 *)(lVar1 + 0x10a0) = 0x100;
  *(undefined8 *)(lVar1 + 0x11a8) = 0;
  *(undefined8 *)(lVar1 + 0x11b0) = 0;
  *(undefined4 *)(lVar1 + 0x11d8) = 0;
  *(undefined8 *)(lVar1 + 0x11e0) = 0;
  *(undefined2 *)(lVar1 + 0x11e8) = 0x100;
  *(undefined8 *)(lVar1 + 0x12f0) = 0;
  *(undefined8 *)(lVar1 + 0x12f8) = 0;
  *(undefined4 *)(lVar1 + 0x1320) = 0;
  *(undefined8 *)(lVar1 + 0x1328) = 0;
  *(undefined2 *)(lVar1 + 0x1330) = 0x100;
  *(undefined8 *)(lVar1 + 0x1438) = 0;
  *(undefined8 *)(lVar1 + 0x1440) = 0;
  *(undefined4 *)(lVar1 + 0x1468) = 0;
  *(undefined8 *)(lVar1 + 0x1470) = 0;
  *(undefined2 *)(lVar1 + 0x1478) = 0x100;
  *(undefined8 *)(lVar1 + 0x1580) = 0;
  *(undefined8 *)(lVar1 + 0x1588) = 0;
  *(undefined4 *)(lVar1 + 0x15b0) = 0;
  *(undefined8 *)(lVar1 + 0x15b8) = 0;
  *(undefined2 *)(lVar1 + 0x15c0) = 0x100;
  *(undefined8 *)(lVar1 + 0x16c8) = 0;
  *(undefined8 *)(lVar1 + 0x16d0) = 0;
  *(undefined4 *)(lVar1 + 0x16f8) = 0;
  *(undefined8 *)(lVar1 + 0x1700) = 0;
  *(undefined2 *)(lVar1 + 0x1708) = 0x100;
  *(undefined8 *)(lVar1 + 0x1810) = 0;
  *(undefined8 *)(lVar1 + 0x1818) = 0;
  *(undefined4 *)(lVar1 + 0x1840) = 0;
  *(undefined8 *)(lVar1 + 0x1848) = 0;
  *(undefined2 *)(lVar1 + 0x1850) = 0x100;
  *(undefined8 *)(lVar1 + 0x1958) = 0;
  *(undefined8 *)(lVar1 + 0x1960) = 0;
  *(undefined4 *)(lVar1 + 0x1988) = 0;
  *(undefined8 *)(lVar1 + 0x1990) = 0;
  *(undefined2 *)(lVar1 + 0x1998) = 0x100;
  *(undefined8 *)(lVar1 + 0x1aa0) = 0;
  *(undefined8 *)(lVar1 + 0x1aa8) = 0;
  *(undefined4 *)(lVar1 + 0x1ad0) = 0;
  *(undefined8 *)(lVar1 + 0x1ad8) = 0;
  *(undefined2 *)(lVar1 + 0x1ae0) = 0x100;
  return;
}





// 函数: void FUN_180059ee0(longlong *param_1)
void FUN_180059ee0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar3[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059ee4(longlong *param_1)
void FUN_180059ee4(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar3[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059ef9(void)
void FUN_180059ef9(void)

{
  undefined8 *unaff_RBX;
  
  if ((undefined8 *)unaff_RBX[3] != (undefined8 *)0x0) {
    *(undefined8 *)unaff_RBX[3] = 0;
  }
  (**(code **)*unaff_RBX)();
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}





// 函数: void FUN_180059f4f(void)
void FUN_180059f4f(void)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong unaff_RSI;
  ulonglong uVar5;
  
  if ((*(longlong *)(unaff_RSI + 0x30) != 0) &&
     (*(longlong *)(*(longlong *)(unaff_RSI + 0x30) + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = *(longlong *)(unaff_RSI + 0x28);
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = *(undefined8 **)(unaff_RSI + 0x18);
  if (puVar3 != (undefined8 *)0x0) {
    uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
    if (uVar5 != 0) {
      lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
      lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
      if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
        *puVar3 = *(undefined8 *)(lVar4 + 0x20);
        *(undefined8 **)(lVar4 + 0x20) = puVar3;
        piVar1 = (int *)(lVar4 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                            puVar3,uVar5,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_180059fb0(undefined8 *param_1)
void FUN_180059fb0(undefined8 *param_1)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar3 = (ulonglong)param_1 & 0xffffffffffc00000;
  if (uVar3 != 0) {
    lVar2 = uVar3 + 0x80 + ((longlong)param_1 - uVar3 >> 0x10) * 0x50;
    lVar2 = lVar2 - (ulonglong)*(uint *)(lVar2 + 4);
    if ((*(void ***)(uVar3 + 0x70) == &ExceptionList) && (*(char *)(lVar2 + 0xe) == '\0')) {
      *param_1 = *(undefined8 *)(lVar2 + 0x20);
      *(undefined8 **)(lVar2 + 0x20) = param_1;
      piVar1 = (int *)(lVar2 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar3,CONCAT71(0xff000000,*(void ***)(uVar3 + 0x70) == &ExceptionList),
                          param_1,uVar3,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_180059fc0(longlong *param_1)
void FUN_180059fc0(longlong *param_1)

{
  int *piVar1;
  char *pcVar2;
  undefined8 *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  puVar3 = (undefined8 *)*param_1;
  if (puVar3 != (undefined8 *)0x0) {
    if ((undefined8 *)puVar3[3] != (undefined8 *)0x0) {
      *(undefined8 *)puVar3[3] = 0;
    }
    (**(code **)*puVar3)(puVar3,0);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar3);
  }
  if ((param_1[6] != 0) && (*(longlong *)(param_1[6] + 0x10) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar4 = param_1[5];
  while (lVar4 != 0) {
    pcVar2 = (char *)(lVar4 + 0x141);
    lVar4 = *(longlong *)(lVar4 + 0x138);
    if (*pcVar2 != '\0') {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  puVar3 = (undefined8 *)param_1[3];
  if (puVar3 == (undefined8 *)0x0) {
    return;
  }
  uVar5 = (ulonglong)puVar3 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((longlong)puVar3 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (ulonglong)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *puVar3 = *(undefined8 *)(lVar4 + 0x20);
      *(undefined8 **)(lVar4 + 0x20) = puVar3;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList),
                          puVar3,uVar5,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18005a010(longlong param_1)
void FUN_18005a010(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  puVar2 = *(undefined8 **)(param_1 + 0x18);
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(undefined8 *)(lVar3 + 0x20);
      *(undefined8 **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}





// 函数: void FUN_18005a050(longlong param_1)
void FUN_18005a050(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x10);
  lVar2 = *(longlong *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(longlong *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        if (*(longlong *)(lVar3 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(undefined8 *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  return;
}





// 函数: void FUN_18005a100(longlong param_1)
void FUN_18005a100(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18005a130(longlong param_1)
void FUN_18005a130(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}





// 函数: void FUN_18005a170(longlong param_1)
void FUN_18005a170(longlong param_1)

{
  int *piVar1;
  undefined8 *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  FUN_18005a050();
  if ((1 < *(ulonglong *)(param_1 + 0x10)) &&
     (puVar2 = *(undefined8 **)(param_1 + 8), puVar2 != (undefined8 *)0x0)) {
    uVar4 = (ulonglong)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((longlong)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (ulonglong)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(undefined8 *)(lVar3 + 0x20);
        *(undefined8 **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



undefined8 FUN_18005a1b0(undefined8 param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005a200(undefined8 *param_1)
void FUN_18005a200(undefined8 *param_1)

{
  ulonglong uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  undefined8 *puVar7;
  longlong lVar8;
  
  uVar3 = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  puVar5 = param_1 + 0xb;
  lVar8 = 0x20;
  lVar6 = 0x20;
  puVar7 = puVar5;
  do {
    func_0x000180059bb0(puVar7);
    puVar7 = puVar7 + 2;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  *(undefined8 *)((longlong)param_1 + 0x25c) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  param_1[7] = 0;
  param_1[8] = 0x20;
  param_1[9] = puVar5;
  do {
    *(undefined4 *)puVar5 = 0;
    puVar5 = puVar5 + 2;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  param_1[10] = 0;
  param_1[6] = param_1 + 8;
  param_1[4] = 0x15;
  lVar6 = FUN_180059bc0();
  param_1[3] = lVar6;
  if (lVar6 == 0) {
    param_1[4] = 0;
    uVar1 = uVar3;
  }
  else {
    uVar1 = param_1[4];
  }
  uVar4 = uVar3;
  if (uVar1 != 0) {
    do {
      *(undefined1 *)(uVar4 + 0x141 + param_1[3]) = 0;
      uVar3 = uVar3 + 1;
      uVar4 = uVar4 + 0x148;
    } while (uVar3 < (ulonglong)param_1[4]);
  }
  _Cnd_init_in_situ();
  _Mtx_init_in_situ(param_1 + 0x56,2);
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  *(undefined4 *)(param_1 + 99) = 3;
  param_1[0x65] = 0;
  *(undefined4 *)(param_1 + 0x6a) = 0x3f800000;
  *(undefined8 *)((longlong)param_1 + 0x354) = 0x40000000;
  *(undefined4 *)((longlong)param_1 + 0x35c) = 3;
  param_1[0x68] = 1;
  param_1[0x67] = &DAT_180be0000;
  param_1[0x69] = 0;
  *(undefined4 *)(param_1 + 0x6b) = 0;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xc0,8,4);
                    // WARNING: Subroutine does not return
  memset(uVar2,0,0xc0);
}



undefined8 * FUN_18005a420(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_1809fdd78;
  FUN_18005b7c0(param_1 + 0xa4);
  FUN_18005b960(param_1 + 0x8c);
  FUN_18005b7c0(param_1 + 0x7e);
  FUN_18005b7c0(param_1 + 0x70);
  FUN_18005b7c0(param_1 + 0x62);
  FUN_18005b7c0(param_1 + 0x54);
  FUN_18005b7c0(param_1 + 0x46);
  FUN_18005b7c0(param_1 + 0x38);
  FUN_18005b7c0(param_1 + 0x2a);
  FUN_18005b7c0(param_1 + 0x1c);
  FUN_1800ae640(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x590);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005a500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined *puStack_50;
  undefined8 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined8 *)0x0;
  uStack_40 = 0;
  puVar2 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x6320726f74696445;
  *(undefined4 *)(puVar2 + 1) = 0x69666e6f;
  *(undefined2 *)((longlong)puVar2 + 0xc) = 0x67;
  uStack_40 = 0xd;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_18005a960(undefined8 param_1,ulonglong param_2)

{
  FUN_18005a9a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xa90);
  }
  return param_1;
}





// 函数: void FUN_18005a9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005a9a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_1809fddc8;
  FUN_18005ab50(param_1 + 0x143);
  FUN_18005ab50(param_1 + 0x134);
  FUN_18005b7c0(param_1 + 0x126);
  FUN_18005b7c0(param_1 + 0x118);
  FUN_18005b7c0(param_1 + 0x10a);
  FUN_18005b7c0(param_1 + 0xfc);
  FUN_18005b7c0(param_1 + 0xee);
  FUN_18005b7c0(param_1 + 0xe0);
  FUN_18005b7c0(param_1 + 0xd2);
  FUN_18005b7c0(param_1 + 0xc4);
  FUN_18005b7c0(param_1 + 0xb6);
  FUN_18005b7c0(param_1 + 0xa8);
  FUN_18005b7c0(param_1 + 0x9a);
  FUN_18005b7c0(param_1 + 0x8c);
  FUN_18005b7c0(param_1 + 0x7e);
  FUN_18005b7c0(param_1 + 0x70);
  FUN_18005b7c0(param_1 + 0x62);
  FUN_18005b7c0(param_1 + 0x54);
  FUN_18005b7c0(param_1 + 0x46);
  FUN_18005b7c0(param_1 + 0x38);
  FUN_18005b7c0(param_1 + 0x2a);
  FUN_18005b7c0(param_1 + 0x1c);
  *param_1 = &UNK_180a02968;
  param_1[0x18] = &UNK_180a3c3e0;
  if (param_1[0x19] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  param_1[0x18] = &UNK_18098bcb0;
  FUN_18005d260(param_1 + 0x12,param_1[0x14],param_3,param_4,0xfffffffffffffffe);
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[1] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}





// 函数: void FUN_18005aaf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005aaf0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18005ab20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005ab20(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x10) != (code *)0x0) {
    (**(code **)(param_1 + 0x10))(param_1,0,0,param_4,0xfffffffffffffffe);
  }
  return;
}





// 函数: void FUN_18005ab50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005ab50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(code **)(param_1 + 0x68) != (code *)0x0) {
    (**(code **)(param_1 + 0x68))(param_1 + 0x58,0,0,param_4,0xfffffffffffffffe);
  }
  *(undefined8 *)(param_1 + 0x30) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x38) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = &UNK_18098bcb0;
  *(undefined8 *)(param_1 + 0x10) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x10) = &UNK_18098bcb0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18005ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_18005ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined *puStack_50;
  undefined4 *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_38;
  
  puStack_50 = &UNK_180a3c3e0;
  uStack_38 = 0;
  puStack_48 = (undefined4 *)0x0;
  uStack_40 = 0;
  puVar2 = (undefined4 *)FUN_18062b420(_DAT_180c8ed18,0x13,0x13,param_4,0xfffffffffffffffe);
  *(undefined1 *)puVar2 = 0;
  puStack_48 = puVar2;
  uVar1 = FUN_18064e990(puVar2);
  uStack_38 = CONCAT44(uStack_38._4_4_,uVar1);
  *puVar2 = 0x65766544;
  puVar2[1] = 0x6d706f6c;
  puVar2[2] = 0x20746e65;
  puVar2[3] = 0x666e6f63;
  *(undefined2 *)(puVar2 + 4) = 0x6769;
  *(undefined1 *)((longlong)puVar2 + 0x12) = 0;
  uStack_40 = 0x12;
  FUN_1800ae520(param_1,&puStack_50);
  puStack_50 = &UNK_180a3c3e0;
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



undefined8 FUN_18005b520(undefined8 param_1,ulonglong param_2)

{
  FUN_18005b560();
  if ((param_2 & 1) != 0) {
    free(param_1,0x13c0);
  }
  return param_1;
}





