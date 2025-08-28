#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part030.c - UI系统高级数据处理和控制模块
// 本模块包含4个核心函数，涵盖UI系统高级数据处理、信号量管理、资源初始化等高级UI功能

// 常量定义
#define UI_SYSTEM_DATA_BLOCK_SIZE 0x30
#define UI_SYSTEM_BUFFER_SIZE 0x80
#define UI_SYSTEM_OFFSET_0X10 0x10
#define UI_SYSTEM_OFFSET_0X20 0x20
#define UI_SYSTEM_OFFSET_0X4C 0x4c
#define UI_SYSTEM_FLAG_0X81 0x81
#define UI_SYSTEM_MULTIPLIER_0XF 0xf
#define UI_SYSTEM_MULTIPLIER_0X18 0x18
#define UI_SYSTEM_MASK_0X3FFFFFBF 0x3fffffbf
#define UI_SYSTEM_BASE_OFFSET 0x15c
#define UI_SYSTEM_DATA_ALIGNMENT 0x10
#define UI_SYSTEM_PROCESSING_FLAG 0xffffffff

// 函数别名定义
#define ui_system_process_advanced_data FUN_18066f94e
#define ui_system_release_semaphore_conditionally FUN_1806704b6
#define ui_system_release_semaphore_unconditionally FUN_1806704db
#define ui_system_initialize_data_buffers FUN_180670510

/**
 * UI系统高级数据处理函数
 * 
 * 本函数是UI系统的核心数据处理函数，负责处理复杂的UI数据操作，
 * 包括内存管理、缓冲区操作、参数设置和状态更新等功能。
 * 
 * @param param_1 系统上下文指针
 * @param param_2 数据处理参数
 * @param param_3 处理标志
 * 
 * 处理流程：
 * 1. 初始化数据结构和缓冲区
 * 2. 设置内存偏移和参数
 * 3. 处理数据块和缓冲区
 * 4. 更新系统状态
 * 5. 管理信号量同步
 * 6. 清理资源
 */
void FUN_18066f94e(uint64_t param_1, uint64_t param_2, int param_3)
{
  int32_t *data_ptr_1;
  int32_t *data_ptr_2;
  longlong temp_var_1;
  byte byte_var;
  int int_var;
  uint64_t *ptr_var;
  int8_t *byte_ptr_1;
  int8_t *byte_ptr_2;
  byte *byte_ptr_3;
  int32_t uint_var_1;
  int32_t uint_var_2;
  int32_t uint_var_3;
  bool bool_var;
  int8_t *byte_ptr_4;
  longlong context_base;
  longlong stack_base;
  int index_var;
  uint counter;
  longlong data_base;
  longlong temp_var_2;
  longlong temp_var_3;
  longlong temp_var_4;
  ulonglong size_param;
  int divisor_param;
  ulonglong size_var_1;
  ulonglong unaff_var;
  ulonglong size_var_2;
  uint uint_var_4;
  int *int_ptr;
  longlong stack_var_1;
  int stack_var_2;
  int stack_var_3;
  int stack_var_4;
  int stack_var_5;
  int stack_var_6;
  uint stack_param_1;
  uint stack_var_7;
  uint stack_var_8;
  int stack_param_2;
  int stack_var_9;
  longlong stack_param_3;
  longlong stack_param_4;
  
  // 设置栈参数
  *(ulonglong *)(stack_base + -0x80) = size_param;
  size_var_1 = unaff_var;
  size_var_2 = unaff_var;
  
  do {
    // 初始化处理索引
    stack_var_9 = index_var;
    *(longlong *)(context_base + 0xfb8) = ((longlong)(index_var % divisor_param) + UI_SYSTEM_BASE_OFFSET) * UI_SYSTEM_DATA_BLOCK_SIZE + data_base;
    
    // 设置指针和数据结构
    if (index_var < 1) {
      int_ptr = (int *)&stack0x00000054;
    }
    else {
      int_ptr = (int *)(*(longlong *)(data_base + 0x43a8) + (longlong)(index_var + -1) * 4);
    }
    
    temp_var_2 = *(longlong *)(data_base + 0x43a8);
    stack_var_1 = (longlong)index_var;
    *(int **)(stack_base + -0x78) = int_ptr;
    *(longlong *)(stack_base + -0x70) = temp_var_2 + stack_var_1 * 4;
    *(uint64_t *)(context_base + 0xf50) = *(uint64_t *)(data_base + 0x2c18);
    ptr_var = *(uint64_t **)(context_base + 0xf58);
    stack_var_4 = index_var * (int)size_var_2 * UI_SYSTEM_OFFSET_0X10;
    stack_var_5 = index_var * (int)size_param * 8;
    
    // 初始化缓冲区
    *ptr_var = 0;
    *(int8_t *)(ptr_var + 1) = 0;
    *(int32_t *)(context_base + 0xf14) = 0;
    *(int *)(context_base + 0xf8c) = index_var * -UI_SYSTEM_BUFFER_SIZE;
    *(int *)(context_base + 0xf90) = ((*(int *)(data_base + 0x1e74) - index_var) + -1) * UI_SYSTEM_BUFFER_SIZE;
    
    // 处理数据缓冲区
    if (*(int *)(data_base + 0x2be0) == 0) {
      temp_var_2 = *(longlong *)(stack_base + -0x60);
      *(longlong *)(context_base + 0xf18) = (longlong)stack_var_4 + *(longlong *)(stack_base + -0x68);
      *(longlong *)(context_base + 0xf20) = temp_var_2 + stack_var_5;
      *(longlong *)(context_base + 0xf28) = *(longlong *)(stack_base + -0x58) + (longlong)stack_var_5;
      *(longlong *)(context_base + 0xf30) = *(longlong *)(context_base + 0xf18) + -1;
      *(longlong *)(context_base + 0xf38) = *(longlong *)(context_base + 0xf20) + -1;
      byte_ptr_1 = *(int8_t **)(context_base + 0xf38);
      *(longlong *)(context_base + 0xf40) = *(longlong *)(context_base + 0xf28) + -1;
      byte_ptr_2 = *(int8_t **)(context_base + 0xf40);
      *(longlong *)(context_base + 0xf18) = *(longlong *)(context_base + 0xf18) - (longlong)*(int *)(context_base + 0xe80);
      temp_var_2 = UI_SYSTEM_OFFSET_0X10;
      *(longlong *)(context_base + 0xf20) = *(longlong *)(context_base + 0xf20) - (longlong)*(int *)(context_base + 0xe94);
      *(longlong *)(context_base + 0xf28) = *(longlong *)(context_base + 0xf28) - (longlong)*(int *)(context_base + 0xe94);
      *(int32_t *)(context_base + 0xf48) = *(int32_t *)(context_base + 0xe80);
      *(int32_t *)(context_base + 0xf4c) = *(int32_t *)(context_base + 0xe94);
      temp_var_4 = (longlong)*(int *)(context_base + 0xe94);
      byte_ptr_4 = *(int8_t **)(context_base + 0xf30);
      int_var = *(int *)(context_base + 0xe80);
      
      // 初始化数据块
      do {
        *byte_ptr_4 = UI_SYSTEM_FLAG_0X81;
        byte_ptr_4 = byte_ptr_4 + int_var;
        temp_var_2 = temp_var_2 + -1;
      } while (temp_var_2 != 0);
      
      // 设置数据标志
      *byte_ptr_1 = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 2] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 3] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 4] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 5] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 6] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_1[temp_var_4 * 7] = UI_SYSTEM_FLAG_0X81;
      *byte_ptr_2 = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 2] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 3] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 4] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 5] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 6] = UI_SYSTEM_FLAG_0X81;
      byte_ptr_2[temp_var_4 * 7] = UI_SYSTEM_FLAG_0X81;
      param_3 = stack_var_2;
    }
    else {
      // 设置数据偏移
      *(longlong *)(context_base + 0xf18) = *(longlong *)(*(longlong *)(data_base + 0x43b0) + stack_var_1 * 8) + UI_SYSTEM_OFFSET_0X20;
      *(longlong *)(context_base + 0xf20) = *(longlong *)(*(longlong *)(data_base + 0x43b8) + stack_var_1 * 8) + UI_SYSTEM_OFFSET_0X10;
      *(longlong *)(context_base + 0xf28) = *(longlong *)(*(longlong *)(data_base + 0x43c0) + stack_var_1 * 8) + UI_SYSTEM_OFFSET_0X10;
      *(uint64_t *)(context_base + 0xf30) = *(uint64_t *)(*(longlong *)(data_base + 0x43c8) + stack_var_1 * 8);
      *(uint64_t *)(context_base + 0xf38) = *(uint64_t *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8);
      *(uint64_t *)(context_base + 0xf40) = *(uint64_t *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8);
      *(int32_t *)(context_base + 0xf48) = 1;
      *(int32_t *)(context_base + 0xf4c) = 1;
    }
    
    // 处理数据块
    counter = 0;
    if (0 < *(int *)(data_base + 0x1e78)) {
      stack_param_4 = UI_SYSTEM_OFFSET_0X10;
      stack_var_6 = 0;
      stack_param_3 = UI_SYSTEM_OFFSET_0X20;
      
      do {
        // 设置数据索引
        **(int **)(stack_base + -0x70) = counter - 1;
        if (((counter & param_3 - 1U) == 0) && (*int_ptr - param_3 < (int)counter)) {
          do {
            Sleep(0);
          } while (*int_ptr - stack_var_2 < (int)counter);
          size_var_1 = (ulonglong)(int)size_var_2;
        }
        
        // 处理数据块
        temp_var_2 = *(longlong *)(context_base + 0xf00);
        temp_var_3 = (longlong)stack_var_5;
        *(int *)(context_base + 0xf84) = stack_var_6;
        int_var = *(int *)(data_base + 0x1e78);
        *(longlong *)(context_base + 0xea8) = *(longlong *)(stack_base + -0x68) + (longlong)stack_var_4;
        *(longlong *)(context_base + 0xeb0) = *(longlong *)(stack_base + -0x60) + temp_var_3;
        temp_var_4 = *(longlong *)(stack_base + -0x58);
        *(uint *)(context_base + 0xf88) = ((int_var - counter) + -1) * UI_SYSTEM_BUFFER_SIZE;
        *(longlong *)(context_base + 0xeb8) = temp_var_4 + temp_var_3;
        *(longlong *)(context_base + 0xe18) = *(longlong *)(stack_base + -0x10 + (ulonglong)*(byte *)(temp_var_2 + 2) * UI_SYSTEM_MULTIPLIER_0X18) + (longlong)stack_var_4;
        *(longlong *)(context_base + 0xe20) = *(longlong *)(stack_base + -8 + (ulonglong)*(byte *)(temp_var_2 + 2) * UI_SYSTEM_MULTIPLIER_0X18) + temp_var_3;
        *(longlong *)(context_base + 0xe28) = *(longlong *)(stack_base + (ulonglong)*(byte *)(temp_var_2 + 2) * UI_SYSTEM_MULTIPLIER_0X18) + temp_var_3;
        *(uint *)(context_base + 0xfc0) = *(uint *)(context_base + 0xfc0) | *(uint *)(stack_base + -0x20 + (ulonglong)*(byte *)(temp_var_2 + 2) * 4);
        
        // 调用处理函数
        FUN_18066f3e0();
        *(int32_t *)(context_base + 0xf14) = 1;
        *(uint *)(context_base + 0xfc0) = *(uint *)(context_base + 0xfc0) | (uint)(*(int *)(*(longlong *)(context_base + 0xfb8) + 0x18) - 0x41U < UI_SYSTEM_MASK_0X3FFFFFBF);
        
        // 更新数据指针
        *(longlong *)(context_base + 0xf18) = *(longlong *)(context_base + 0xf18) + UI_SYSTEM_OFFSET_0X10;
        *(longlong *)(context_base + 0xf20) = *(longlong *)(context_base + 0xf20) + 8;
        *(longlong *)(context_base + 0xf28) = *(longlong *)(context_base + 0xf28) + 8;
        
        if (*(int *)(data_base + 0x2be0) == 0) {
          *(longlong *)(context_base + 0xf30) = *(longlong *)(context_base + 0xf30) + UI_SYSTEM_OFFSET_0X10;
          *(longlong *)(context_base + 0xf38) = *(longlong *)(context_base + 0xf38) + 8;
          *(longlong *)(context_base + 0xf40) = *(longlong *)(context_base + 0xf40) + 8;
          if (*(int *)(data_base + 0x2be0) != 0) goto LAB_18066fdc2;
        }
        else {
LAB_18066fdc2:
          // 处理数据块标志
          byte_ptr_3 = *(byte **)(context_base + 0xf00);
          byte_var = *byte_ptr_3;
          if (((byte_var == 4) || (byte_var == 9)) || (bool_var = true, byte_ptr_3[9] == 0)) {
            bool_var = false;
          }
          byte_var = *(byte *)((ulonglong)*(byte *)((ulonglong)byte_var + 0xd00 + data_base + 0x1ed0) + data_base + 0x1ed0 + 0xc40 + ((ulonglong)byte_ptr_3[2] + (ulonglong)byte_ptr_3[0xb] * 4) * 4);
          stack_var_8 = (uint)byte_var;
          
          if (stack_var_3 != *(int *)(data_base + 0x1e74) + -1) {
            // 处理数据块
            data_ptr_1 = (int32_t *)(size_var_1 * UI_SYSTEM_MULTIPLIER_0XF + *(longlong *)(context_base + 0xea8));
            uint_var_1 = data_ptr_1[1];
            uint_var_2 = data_ptr_1[2];
            uint_var_3 = data_ptr_1[3];
            temp_var_2 = *(longlong *)(stack_base + -0x80) * 7;
            data_ptr_2 = (int32_t *)(*(longlong *)(*(longlong *)(data_base + 0x43b0) + 8 + stack_var_1 * 8) + stack_param_3);
            *data_ptr_2 = *data_ptr_1;
            data_ptr_2[1] = uint_var_1;
            data_ptr_2[2] = uint_var_2;
            data_ptr_2[3] = uint_var_3;
            *(uint64_t *)(stack_param_4 + *(longlong *)(*(longlong *)(data_base + 0x43b8) + 8 + stack_var_1 * 8)) = *(uint64_t *)(temp_var_2 + *(longlong *)(context_base + 0xeb0));
            *(uint64_t *)(stack_param_4 + *(longlong *)(*(longlong *)(data_base + 0x43c0) + 8 + stack_var_1 * 8)) = *(uint64_t *)(temp_var_2 + *(longlong *)(context_base + 0xeb8));
          }
          
          // 处理数据块复制
          if ((counter != *(int *)(data_base + 0x1e78) - 1U) && (*(char *)(*(longlong *)(context_base + 0xf00) + 0x4e) == '\0')) {
            temp_var_4 = 0;
            temp_var_2 = unaff_var * 2;
            do {
              temp_var_3 = temp_var_2 + unaff_var;
              *(int8_t *)(temp_var_4 + *(longlong *)(*(longlong *)(data_base + 0x43c8) + stack_var_1 * 8)) = *(int8_t *)(temp_var_2 + unaff_var * -2 + 0xf + *(longlong *)(context_base + 0xea8));
              *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43c8) + stack_var_1 * 8) + 1 + temp_var_4) = *(int8_t *)((*(longlong *)(context_base + 0xea8) + temp_var_2 + 0xf) - unaff_var);
              temp_var_2 = temp_var_2 + 0xf;
              temp_var_2 = temp_var_2 + unaff_var * 4;
              *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43c8) + stack_var_1 * 8) + 2 + temp_var_4) = *(int8_t *)(temp_var_2 + *(longlong *)(context_base + 0xea8));
              *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43c8) + stack_var_1 * 8) + 3 + temp_var_4) = *(int8_t *)(temp_var_3 + 0xf + *(longlong *)(context_base + 0xea8));
              temp_var_4 = temp_var_4 + 4;
            } while (temp_var_4 < UI_SYSTEM_OFFSET_0X10);
            
            temp_var_2 = *(longlong *)(stack_base + -0x80);
            **(int8_t **)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) = *(int8_t *)(*(longlong *)(context_base + 0xeb0) + 7);
            **(int8_t **)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 1) = *(int8_t *)(temp_var_2 + 7 + *(longlong *)(context_base + 0xeb0));
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 1) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 2) = *(int8_t *)(*(longlong *)(context_base + 0xeb0) + 7 + temp_var_2 * 2);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 2) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 2);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 3) = *(int8_t *)(temp_var_2 * 3 + 7 + *(longlong *)(context_base + 0xeb0));
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 3) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 3);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 4) = *(int8_t *)(*(longlong *)(context_base + 0xeb0) + 7 + temp_var_2 * 4);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 4) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 4);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 5) = *(int8_t *)(temp_var_2 * 5 + 7 + *(longlong *)(context_base + 0xeb0));
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 5) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 5);
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 6) = *(int8_t *)(temp_var_2 * 6 + 7 + *(longlong *)(context_base + 0xeb0));
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 6) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 6);
            size_var_2 = (ulonglong)stack_var_8;
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d0) + stack_var_1 * 8) + 7) = *(int8_t *)(temp_var_2 * 7 + 7 + *(longlong *)(context_base + 0xeb0));
            *(int8_t *)(*(longlong *)(*(longlong *)(data_base + 0x43d8) + stack_var_1 * 8) + 7) = *(int8_t *)(*(longlong *)(context_base + 0xeb8) + 7 + temp_var_2 * 7);
          }
          
          uint_var_4 = (uint)byte_var;
          temp_var_2 = data_base + 0x1ed0;
          if (uint_var_4 != 0) {
            if (*(int *)(data_base + 0x1ec0) == 0) {
              // 处理数据块初始化
              temp_var_4 = (longlong)(int)uint_var_4;
              *(longlong *)(stack_base + -0x40) = temp_var_4 * UI_SYSTEM_OFFSET_0X10 + temp_var_2;
              *(longlong *)(stack_base + -0x38) = (temp_var_4 + 0x40) * UI_SYSTEM_OFFSET_0X10 + temp_var_2;
              *(longlong *)(stack_base + -0x30) = (temp_var_4 + 0x80) * UI_SYSTEM_OFFSET_0X10 + temp_var_2;
              *(ulonglong *)(stack_base + -0x28) = ((ulonglong)*(byte *)(((longlong)*(int *)(data_base + 0x1e64) + 0x32) * 0x40 + temp_var_4 + temp_var_2) + 0xc0) * UI_SYSTEM_OFFSET_0X10 + temp_var_2;
              
              if (0 < (int)counter) {
                FUN_18069cb40(*(uint64_t *)(context_base + 0xea8), *(uint64_t *)(context_base + 0xeb0), *(uint64_t *)(context_base + 0xeb8), size_var_2 & 0xffffffff, stack_param_1);
              }
              if (!bool_var) {
                FUN_18069ca00(*(uint64_t *)(context_base + 0xea8), *(uint64_t *)(context_base + 0xeb0), *(uint64_t *)(context_base + 0xeb8), size_var_2 & 0xffffffff, stack_param_1);
              }
              if (0 < stack_var_1) {
                FUN_18069cad0(*(uint64_t *)(context_base + 0xea8), *(uint64_t *)(context_base + 0xeb0), *(uint64_t *)(context_base + 0xeb8), size_var_2 & 0xffffffff, stack_param_1);
              }
              if (!bool_var) {
                FUN_18069c900(*(uint64_t *)(context_base + 0xea8), *(uint64_t *)(context_base + 0xeb0), *(uint64_t *)(context_base + 0xeb8), size_var_2 & 0xffffffff, stack_param_1);
              }
            }
            else {
              // 处理替代数据路径
              if (0 < (int)counter) {
                func_0x00018001c253(*(uint64_t *)(context_base + 0xea8), size_var_2 & 0xffffffff, (longlong)(int)uint_var_4 * UI_SYSTEM_OFFSET_0X10 + temp_var_2);
              }
              if (!bool_var) {
                FUN_18069ca80(*(uint64_t *)(context_base + 0xea8), size_var_2 & 0xffffffff, ((longlong)(int)uint_var_4 + 0x40) * UI_SYSTEM_OFFSET_0X10 + temp_var_2);
              }
              if (0 < stack_var_1) {
                func_0x00018001c10b(*(uint64_t *)(context_base + 0xea8), size_var_2 & 0xffffffff, (longlong)(int)uint_var_4 * UI_SYSTEM_OFFSET_0X10 + temp_var_2);
              }
              if (!bool_var) {
                FUN_18069c990(*(uint64_t *)(context_base + 0xea8), size_var_2 & 0xffffffff, ((longlong)(int)uint_var_4 + 0x40) * UI_SYSTEM_OFFSET_0X10 + temp_var_2);
              }
            }
          }
        }
        
        // 更新循环变量
        counter = counter + 1;
        stack_var_6 = stack_var_6 + -UI_SYSTEM_BUFFER_SIZE;
        stack_var_4 = stack_var_4 + UI_SYSTEM_OFFSET_0X10;
        stack_var_5 = stack_var_5 + 8;
        *(longlong *)(context_base + 0xf00) = *(longlong *)(context_base + 0xf00) + UI_SYSTEM_OFFSET_0X4C;
        *(longlong *)(context_base + 0xf50) = *(longlong *)(context_base + 0xf50) + 9;
        stack_param_3 = stack_param_3 + UI_SYSTEM_OFFSET_0X10;
        stack_param_4 = stack_param_4 + 8;
        int_ptr = *(int **)(stack_base + -0x78);
        size_var_1 = (ulonglong)(int)size_var_2;
        param_3 = stack_var_2;
      } while ((int)counter < *(int *)(data_base + 0x1e78));
      size_var_1 = (ulonglong)(int)size_var_2;
    }
    
    // 清理资源
    if (*(int *)(data_base + 0x2be0) == 0) {
      func_0x00018069cbd0(*(uint64_t *)(stack_base + -0x48), *(longlong *)(context_base + 0xea8) + UI_SYSTEM_OFFSET_0X10, *(longlong *)(context_base + 0xeb0) + 8, *(longlong *)(context_base + 0xeb8) + 8);
    }
    else if (stack_var_3 != *(int *)(data_base + 0x1e74) + -1) {
      temp_var_2 = 0;
      int_var = **(int **)(stack_base + -0x50);
      temp_var_4 = (longlong)((int_var >> 1) + UI_SYSTEM_OFFSET_0X10);
      do {
        temp_var_3 = *(longlong *)(*(longlong *)(data_base + 0x43b0) + 8 + stack_var_1 * 8) + (longlong)(int_var + UI_SYSTEM_OFFSET_0X20);
        *(int8_t *)(temp_var_3 + temp_var_2) = *(int8_t *)(temp_var_3 + -1);
        temp_var_3 = *(longlong *)(*(longlong *)(data_base + 0x43b8) + 8 + stack_var_1 * 8) + temp_var_4;
        *(int8_t *)(temp_var_3 + temp_var_2) = *(int8_t *)(temp_var_3 + -1);
        temp_var_3 = *(longlong *)(*(longlong *)(data_base + 0x43c0) + 8 + stack_var_1 * 8) + temp_var_4;
        *(int8_t *)(temp_var_3 + temp_var_2) = *(int8_t *)(temp_var_3 + -1);
        temp_var_2 = temp_var_2 + 1;
      } while (temp_var_2 < 4);
    }
    
    // 更新状态
    size_param = (ulonglong)stack_param_1;
    **(int **)(stack_base + -0x70) = counter + stack_var_2;
    *(longlong *)(context_base + 0xf00) = *(longlong *)(context_base + 0xf00) + UI_SYSTEM_OFFSET_0X4C;
    *(int32_t *)(context_base + 0xf10) = 1;
    *(longlong *)(context_base + 0xf00) = *(longlong *)(context_base + 0xf00) + (ulonglong)(uint)(*(int *)(context_base + 0xf08) * *(int *)(data_base + 0x438c)) * UI_SYSTEM_OFFSET_0X4C;
    index_var = stack_var_3 + 1 + *(int *)(data_base + 0x438c);
    divisor_param = stack_param_2;
    param_3 = stack_var_2;
    stack_var_3 = index_var;
    
    if (*(int *)(data_base + 0x1e74) <= index_var) {
      if (stack_var_9 == *(int *)(data_base + 0x1e74) + -1) {
        ReleaseSemaphore(*(uint64_t *)(data_base + 0x4400), 1);
      }
      // 函数不返回
      FUN_1808fc050(*(ulonglong *)(stack_base + 0x50) ^ (ulonglong)&stack0x00000000);
    }
  } while( true );
}

/**
 * UI系统条件信号量释放函数
 * 
 * 本函数负责在特定条件下释放UI系统的信号量，
 * 用于线程同步和资源管理。
 * 
 * 处理流程：
 * 1. 检查条件是否满足
 * 2. 如果满足则释放信号量
 * 3. 执行系统调用
 */
void FUN_1806704b6(void)
{
  longlong stack_base;
  longlong data_base;
  int index_param;
  
  // 检查条件并释放信号量
  if (index_param == *(int *)(data_base + 0x1e74) + -1) {
    ReleaseSemaphore(*(uint64_t *)(data_base + 0x4400), 1);
  }
  // 函数不返回
  FUN_1808fc050(*(ulonglong *)(stack_base + 0x50) ^ (ulonglong)&stack0x00000000);
}

/**
 * UI系统无条件信号量释放函数
 * 
 * 本函数负责无条件释放UI系统的信号量，
 * 用于线程同步和资源管理。
 * 
 * 处理流程：
 * 1. 释放信号量
 * 2. 执行系统调用
 */
void FUN_1806704db(void)
{
  longlong stack_base;
  longlong data_base;
  
  // 释放信号量
  ReleaseSemaphore(*(uint64_t *)(data_base + 0x4400), 1);
  // 函数不返回
  FUN_1808fc050(*(ulonglong *)(stack_base + 0x50) ^ (ulonglong)&stack0x00000000);
}

/**
 * UI系统数据缓冲区初始化函数
 * 
 * 本函数负责初始化UI系统的数据缓冲区，
 * 包括数据复制、结构设置和状态初始化。
 * 
 * @param param_1 系统上下文指针
 * @param param_2 源数据指针
 * @param param_3 目标数据指针
 * @param param_4 数据项数量
 * 
 * 处理流程：
 * 1. 检查数据项数量
 * 2. 复制数据结构
 * 3. 设置数据偏移和标志
 * 4. 初始化缓冲区状态
 * 5. 清理和返回
 */
void FUN_180670510(longlong param_1, longlong param_2, longlong param_3, int param_4)
{
  int32_t uint_var_1;
  uint64_t data_var_1;
  uint64_t data_var_2;
  uint64_t *ptr_var;
  int int_var;
  longlong temp_var;
  
  temp_var = (longlong)param_4;
  if (0 < temp_var) {
    int_var = 1;
    ptr_var = (uint64_t *)(param_3 + 4000);
    
    do {
      // 复制数据结构
      ptr_var[-1] = *(uint64_t *)(param_2 + 0xf98);
      *ptr_var = *(uint64_t *)(param_2 + 4000);
      ptr_var[1] = *(uint64_t *)(param_2 + 0xfa8);
      ptr_var[2] = *(uint64_t *)(param_2 + 0xfb0);
      ptr_var[-0x14] = (longlong)(*(int *)(param_1 + 0x1e7c) * int_var) * UI_SYSTEM_OFFSET_0X4C + *(longlong *)(param_1 + 0x1eb0);
      *(int32_t *)(ptr_var + -0x13) = *(int32_t *)(param_1 + 0x1e7c);
      *(int32_t *)((longlong)ptr_var + -0x94) = *(int32_t *)(param_1 + 0x1e64);
      
      // 复制数据块
      data_var_1 = *(uint64_t *)(param_2 + 0xde8);
      ptr_var[-0x38] = *(uint64_t *)(param_2 + 0xde0);
      ptr_var[-0x37] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xdf8);
      ptr_var[-0x36] = *(uint64_t *)(param_2 + 0xdf0);
      ptr_var[-0x35] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe08);
      ptr_var[-0x34] = *(uint64_t *)(param_2 + 0xe00);
      ptr_var[-0x33] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe18);
      ptr_var[-0x32] = *(uint64_t *)(param_2 + 0xe10);
      ptr_var[-0x31] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe28);
      ptr_var[-0x30] = *(uint64_t *)(param_2 + 0xe20);
      ptr_var[-0x2f] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe38);
      ptr_var[-0x2e] = *(uint64_t *)(param_2 + 0xe30);
      ptr_var[-0x2d] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe48);
      ptr_var[-0x2c] = *(uint64_t *)(param_2 + 0xe40);
      ptr_var[-0x2b] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe58);
      ptr_var[-0x2a] = *(uint64_t *)(param_2 + 0xe50);
      ptr_var[-0x29] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe68);
      ptr_var[-0x28] = *(uint64_t *)(param_2 + 0xe60);
      ptr_var[-0x27] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe78);
      ptr_var[-0x26] = *(uint64_t *)(param_2 + 0xe70);
      ptr_var[-0x25] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe88);
      ptr_var[-0x24] = *(uint64_t *)(param_2 + 0xe80);
      ptr_var[-0x23] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xe98);
      ptr_var[-0x22] = *(uint64_t *)(param_2 + 0xe90);
      ptr_var[-0x21] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xea8);
      ptr_var[-0x20] = *(uint64_t *)(param_2 + 0xea0);
      ptr_var[-0x1f] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xeb8);
      ptr_var[-0x1e] = *(uint64_t *)(param_2 + 0xeb0);
      ptr_var[-0x1d] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xec8);
      ptr_var[-0x1c] = *(uint64_t *)(param_2 + 0xec0);
      ptr_var[-0x1b] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xed8);
      ptr_var[-0x1a] = *(uint64_t *)(param_2 + 0xed0);
      ptr_var[-0x19] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xee8);
      ptr_var[-0x18] = *(uint64_t *)(param_2 + 0xee0);
      ptr_var[-0x17] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0xef8);
      ptr_var[-0x16] = *(uint64_t *)(param_2 + 0xef0);
      ptr_var[-0x15] = data_var_1;
      
      // 设置标志位
      *(int8_t *)(ptr_var + -8) = *(int8_t *)(param_2 + 0xf60);
      *(int8_t *)((longlong)ptr_var + -0x3d) = *(int8_t *)(param_2 + 0xf63);
      *(uint64_t *)((longlong)ptr_var + -0x39) = *(uint64_t *)(param_2 + 0xf67);
      *(int32_t *)((longlong)ptr_var + -0x2b) = *(int32_t *)(param_2 + 0xf75);
      *(int32_t *)((longlong)ptr_var + -0x23) = *(int32_t *)(param_2 + 0xf7d);
      *(int8_t *)((longlong)ptr_var + -0x31) = *(int8_t *)(param_2 + 0xf6f);
      *(int8_t *)(ptr_var + -6) = *(int8_t *)(param_2 + 0xf70);
      ptr_var[3] = param_1 + 0x4140;
      
      // 复制更多数据块
      data_var_1 = *(uint64_t *)(param_2 + 0x808);
      ptr_var[-0xf4] = *(uint64_t *)(param_2 + 0x800);
      ptr_var[-0xf3] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x818);
      ptr_var[-0xf2] = *(uint64_t *)(param_2 + 0x810);
      ptr_var[-0xf1] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x7e8);
      ptr_var[-0xf8] = *(uint64_t *)(param_2 + 0x7e0);
      ptr_var[-0xf7] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x7f8);
      ptr_var[-0xf6] = *(uint64_t *)(param_2 + 0x7f0);
      ptr_var[-0xf5] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x828);
      ptr_var[-0xf0] = *(uint64_t *)(param_2 + 0x820);
      ptr_var[-0xef] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x838);
      ptr_var[-0xee] = *(uint64_t *)(param_2 + 0x830);
      ptr_var[-0xed] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x848);
      ptr_var[-0xec] = *(uint64_t *)(param_2 + 0x840);
      ptr_var[-0xeb] = data_var_1;
      data_var_1 = *(uint64_t *)(param_2 + 0x850);
      data_var_2 = *(uint64_t *)(param_2 + 0x858);
      *(int32_t *)(ptr_var + -0x39) = UI_SYSTEM_PROCESSING_FLAG;
      ptr_var[-0xea] = data_var_1;
      ptr_var[-0xe9] = data_var_2;
      uint_var_1 = *(int32_t *)(ptr_var + -0x39);
      
      // 设置特殊标志
      if (*(int *)(param_1 + 0x1e8c) != 0) {
        uint_var_1 = 0xfffffff8;
      }
      int_var = int_var + 1;
      *(int32_t *)(ptr_var + -0x39) = uint_var_1;
      temp_var = temp_var + -1;
      ptr_var = ptr_var + 0x254;
    } while (temp_var != 0);
  }
  
  // 初始化数据数组
  int_var = 0;
  if (0 < *(int *)(param_1 + 0x1e74)) {
    temp_var = 0;
    do {
      int_var = int_var + 1;
      *(int32_t *)(temp_var + *(longlong *)(param_1 + 0x43a8)) = UI_SYSTEM_PROCESSING_FLAG;
      temp_var = temp_var + 4;
    } while (int_var < *(int *)(param_1 + 0x1e74));
  }
  return;
}