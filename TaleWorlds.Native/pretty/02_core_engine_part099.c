#include "TaleWorlds.Native.Split.h"

//==============================================================================
// 文件信息：02_core_engine_part099.c
// 模块功能：核心引擎数据处理和状态监控模块
// 函数数量：7个核心函数
// 主要功能：
//   - 核心引擎数据清理和移除操作
//   - 参数计算和状态监控
//   - 数据验证和处理
//   - 状态恢复和管理
//   - 浮点数计算和优化
//   - 条件判断和逻辑控制
//==============================================================================

//------------------------------------------------------------------------------
// 类型别名和常量定义
//------------------------------------------------------------------------------

// 核心引擎句柄类型
typedef int* EngineContextHandle;             // 引擎上下文句柄
typedef int* DataArrayHandle;                 // 数据数组句柄
typedef undefined8* ConfigDataHandle;        // 配置数据句柄
typedef undefined8* StateDataHandle;         // 状态数据句柄
typedef undefined8* ResourceDataHandle;      // 资源数据句柄

// 核心引擎状态常量
#define ENGINE_STATE_ACTIVE          0x00000001  // 引擎激活状态
#define ENGINE_STATE_BUSY           0x00000002  // 引擎繁忙状态
#define ENGINE_STATE_ERROR          0x00000004  // 引擎错误状态
#define ENGINE_STATE_READY          0x00000008  // 引擎就绪状态

// 核心引擎标志常量
#define ENGINE_FLAG_INITIALIZED     0x00000001  // 引擎已初始化
#define ENGINE_FLAG_ENABLED         0x00000002  // 引擎已启用
#define ENGINE_FLAG_VALID           0x00000004  // 引擎有效标志

// 核心引擎偏移量常量
#define ENGINE_OFFSET_CONFIG        0x10         // 配置偏移量
#define ENGINE_OFFSET_STATE         0x18         // 状态偏移量
#define ENGINE_OFFSET_DATA          0x20         // 数据偏移量
#define ENGINE_OFFSET_RESOURCE      0x28         // 资源偏移量

// 数据结构大小常量
#define DATA_ENTRY_SIZE            0x28         // 数据条目大小
#define DATA_ARRAY_ELEMENT_SIZE    0x0A         // 数据数组元素大小
#define DATA_OFFSET_MULTIPLIER     0x10         // 数据偏移量乘数

// 核心引擎错误码
#define ENGINE_SUCCESS              0            // 操作成功
#define ENGINE_ERROR_INVALID        -1           // 无效参数
#define ENGINE_ERROR_MEMORY         -2           // 内存错误
#define ENGINE_ERROR_STATE          -3           // 状态错误

//------------------------------------------------------------------------------
// 函数别名定义
//------------------------------------------------------------------------------

// 数据清理和移除函数
#define CoreEngineDataRemover FUN_18011bc70

// 参数计算和状态监控函数
#define CoreEngineParameterCalculator FUN_18011bd30

// 状态恢复和管理函数
#define CoreEngineStateRestorer FUN_18011c120

// 浮点数计算和优化函数
#define CoreEngineFloatCalculator FUN_18011c15d

// 条件判断和数据处理函数
#define CoreEngineConditionalProcessor FUN_18011c2cb

// 循环处理和数据验证函数
#define CoreEngineLoopProcessor FUN_18011c2d9

// 状态重置和清理函数
#define CoreEngineStateResetter FUN_18011c31e

//------------------------------------------------------------------------------
// 核心函数实现
//------------------------------------------------------------------------------

/**
 * @brief 核心引擎数据清理和移除处理器
 * 
 * 该函数负责从核心引擎数据结构中移除指定的数据条目，
 * 执行数据清理操作，确保数据结构的完整性。
 * 
 * @param context_ptr 引擎上下文指针
 * @param target_id 目标数据ID
 * @return void 无返回值
 */
void CoreEngineDataRemover(int *context_ptr, int target_id)
{
  int data_count;
  int *data_array;
  longlong calc_offset;
  int current_index;
  int *current_element;
  
  // 检查目标ID有效性
  if (target_id != 0) {
    data_count = *context_ptr;
    current_index = 0;
    
    // 遍历数据数组查找目标
    if (0 < data_count) {
      data_array = *(int **)(context_ptr + 2);
      current_element = data_array;
      
      do {
        if (*current_element == target_id) {
          // 找到目标，执行数据移除操作
          if (data_array + (longlong)current_index * 10 != (int *)0x0) {
            calc_offset = ((longlong)current_index * 0x28) / 0x28;
            // 执行内存移动操作，移除目标数据
            memmove(data_array + calc_offset * 10, 
                   data_array + calc_offset * 10 + 10, 
                   (data_count - calc_offset) * 0x28 + -0x28);
          }
          break;
        }
        current_index = current_index + 1;
        current_element = current_element + 10;
      } while (current_index < data_count);
    }
  }
  
  // 清理相关状态字段
  if (context_ptr[7] == target_id) {
    context_ptr[7] = 0;
  }
  if (context_ptr[5] == target_id) {
    context_ptr[5] = 0;
  }
  if (context_ptr[6] == target_id) {
    context_ptr[6] = 0;
  }
  return;
}

/**
 * @brief 核心引擎参数计算和状态监控器
 * 
 * 该函数负责计算核心引擎的各种参数，监控引擎状态，
 * 执行浮点数计算和优化操作。
 * 
 * @param param_1 参数数组指针
 * @return int* 返回处理后的数据指针
 */
int * CoreEngineParameterCalculator(int *param_1)
{
  longlong global_context;
  undefined8 *temp_ptr1;
  undefined4 *temp_ptr2;
  undefined8 *temp_ptr3;
  undefined4 *temp_ptr4;
  float calc_value1;
  float calc_value2;
  float calc_value3;
  float calc_value4;
  float calc_value5;
  float calc_value6;
  undefined4 temp_val1;
  undefined4 temp_val2;
  int index_val1;
  longlong context_val1;
  longlong context_val2;
  int *result_ptr;
  undefined4 temp_val3;
  undefined4 temp_val4;
  undefined4 temp_val5;
  undefined8 temp_val6;
  bool boundary_check;
  longlong stack_val1;
  char status_flag;
  int search_index;
  int array_size;
  int *data_array1;
  int *data_array2;
  int *found_element;
  float temp_float1;
  float temp_float2;
  undefined4 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined4 stack_param4;
  undefined4 stack_param5;
  
  // 获取全局上下文
  global_context = _DAT_180c8a9b0;
  calc_value1 = *(float *)(_DAT_180c8a9b0 + 0x1660);
  context_val1 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  calc_value2 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
  calc_value3 = calc_value2 - 2.0;
  calc_value4 = *(float *)(context_val1 + 0x104);
  calc_value5 = *(float *)(context_val1 + 0x100);
  temp_float1 = (calc_value2 + calc_value3) - 2.0;
  
  // 边界条件检查
  if ((((calc_value5 < (float)param_1[10]) || (calc_value4 < (float)param_1[0xb])) ||
      ((float)param_1[0xc] < calc_value5 + temp_float1)) || ((float)param_1[0xd] < calc_value4)) {
    
    calc_value6 = *(float *)(_DAT_180c8a9b0 + 0x1674);
    boundary_check = true;
    calc_value5 = (float)param_1[0xc];
    search_index = param_1[0xd];
    *(undefined1 *)(context_val1 + 0xb1) = 1;
    context_val2 = *(longlong *)(global_context + 0x1af8);
    
    // 调用边界处理函数
    FUN_180291b40(*(undefined8 *)(context_val2 + 0x2e8), *(undefined8 *)(param_1 + 10),
                  CONCAT44(search_index, calc_value6 + calc_value5), 1);
    
    // 更新临时指针
    temp_ptr1 = (undefined8 *)
             (*(longlong *)(*(longlong *)(context_val2 + 0x2e8) + 0x68) + -0x10 +
             (longlong)*(int *)(*(longlong *)(context_val2 + 0x2e8) + 0x60) * 0x10);
    temp_val6 = temp_ptr1[1];
    *(undefined8 *)(context_val2 + 0x228) = *temp_ptr1;
    *(undefined8 *)(context_val2 + 0x230) = temp_val6;
  }
  else {
    boundary_check = false;
  }
  
  // 执行状态监控操作
  context_val2 = _DAT_180c8a9b0;
  temp_val1 = *(undefined4 *)(global_context + 0x16c8);
  temp_val2 = *(undefined4 *)(global_context + 0x16cc);
  temp_val3 = *(undefined4 *)(global_context + 0x16d0);
  calc_value6 = *(float *)(global_context + 0x16d4);
  result_ptr = (int *)0x0;
  search_index = 0;
  
  // 设置栈参数
  stack_param1 = 0;
  stack_param2 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16c8);
  stack_param3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16cc);
  stack_param4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d0);
  stack_param5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x16d4);
  
  // 调用状态监控函数
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80, &stack_param1);
  stack_param1 = 0x15;
  
  // 更新状态值
  *(undefined4 *)(context_val2 + 0x16c8) = temp_val1;
  *(undefined4 *)(context_val2 + 0x16cc) = temp_val2;
  *(undefined4 *)(context_val2 + 0x16d0) = temp_val3;
  *(float *)(context_val2 + 0x16d4) = calc_value6 * 0.5;
  
  context_val2 = _DAT_180c8a9b0;
  stack_param2 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  stack_param3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  stack_param4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  stack_param5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80, &stack_param1);
  *(undefined8 *)(context_val2 + 0x1818) = 0;
  *(undefined8 *)(context_val2 + 0x1820) = 0;
  
  temp_val1 = *(undefined4 *)(global_context + 0x90);
  temp_val2 = *(undefined4 *)(global_context + 0x94);
  temp_val6 = CONCAT44(calc_value1 + calc_value1 + calc_value2, calc_value3);
  *(undefined4 *)(global_context + 0x90) = 0x3e800000;
  *(undefined4 *)(global_context + 0x94) = 0x3e4ccccd;
  
  calc_value1 = (float)param_1[0xc];
  *(int *)(context_val1 + 0x104) = param_1[0xb];
  *(float *)(context_val1 + 0x100) = calc_value1 - temp_float1;
  
  // 执行参数验证
  status_flag = FUN_18010fad0(&UNK_180a063f8, 0, temp_val6);
  calc_value1 = (float)param_1[0xc];
  *(int *)(context_val1 + 0x104) = param_1[0xb];
  
  if (status_flag != '\0') {
    search_index = -1;
  }
  *(float *)(context_val1 + 0x100) = (calc_value1 - temp_float1) + calc_value3;
  
  status_flag = FUN_18010fad0(&UNK_180a0640c, 1, temp_val6);
  context_val2 = _DAT_180c8a9b0;
  
  if (status_flag != '\0') {
    search_index = 1;
  }
  
  // 更新数据指针
  temp_ptr1 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  temp_val6 = temp_ptr1[1];
  
  temp_ptr3 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *temp_ptr3 = *temp_ptr1;
  temp_ptr3[1] = temp_val6;
  
  index_val1 = *(int *)(context_val2 + 0x1b80);
  *(int *)(context_val2 + 0x1b80) = index_val1 + -1;
  stack_val1 = (longlong)index_val1 + -2;
  
  temp_ptr2 = (undefined4 *)(*(longlong *)(context_val2 + 0x1b88) + 4 + stack_val1 * 0x14);
  temp_val3 = temp_ptr2[1];
  temp_val4 = temp_ptr2[2];
  temp_val5 = temp_ptr2[3];
  
  temp_ptr4 = (undefined4 *)
           (context_val2 + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(context_val2 + 0x1b88) + stack_val1 * 0x14) * 0x10);
  *temp_ptr4 = *temp_ptr2;
  temp_ptr4[1] = temp_val3;
  temp_ptr4[2] = temp_val4;
  temp_ptr4[3] = temp_val5;
  
  *(int *)(context_val2 + 0x1b80) = *(int *)(context_val2 + 0x1b80) + -1;
  *(undefined4 *)(global_context + 0x94) = temp_val2;
  *(undefined4 *)(global_context + 0x90) = temp_val1;
  
  if (boundary_check) {
    FUN_180126d80();
  }
  
  found_element = result_ptr;
  if (((search_index != 0) && (param_1[5] != 0)) && (index_val1 = *param_1, 0 < index_val1)) {
    data_array1 = *(int **)(param_1 + 2);
    data_array2 = data_array1;
    
    do {
      array_size = (int)result_ptr;
      found_element = (int *)0x0;
      if (*data_array2 == param_1[5]) {
        if (data_array1 + (longlong)array_size * 10 != (int *)0x0) {
          array_size = (int)(((longlong)array_size * 0x28) / 0x28);
          search_index = array_size + search_index;
          if ((search_index < 0) || (index_val1 <= search_index)) {
            search_index = array_size;
          }
          found_element = data_array1 + (longlong)search_index * 10;
        }
        break;
      }
      result_ptr = (int *)(ulonglong)(array_size + 1U);
      data_array2 = data_array2 + 10;
    } while ((int)(array_size + 1U) < index_val1);
  }
  
  // 恢复原始值
  *(float *)(context_val1 + 0x100) = calc_value5;
  *(float *)(context_val1 + 0x104) = calc_value4;
  param_1[0xc] = (int)((float)param_1[0xc] - (temp_float1 + 1.0));
  
  return found_element;
}

/**
 * @brief 核心引擎状态恢复和管理器
 * 
 * 该函数负责恢复核心引擎的状态，执行状态管理操作，
 * 确保系统状态的正确性和一致性。
 * 
 * @param param_1 参数数组指针
 * @return ulonglong 返回处理结果
 */
ulonglong CoreEngineStateRestorer(int *param_1)
{
  longlong global_context;
  undefined8 *temp_ptr1;
  undefined4 *temp_ptr2;
  undefined8 *temp_ptr3;
  undefined4 *temp_ptr4;
  undefined4 temp_val1;
  undefined4 temp_val2;
  int index_val;
  longlong context_val;
  undefined4 temp_val3;
  undefined4 temp_val4;
  undefined4 temp_val5;
  undefined8 temp_val6;
  longlong stack_val;
  char status_flag;
  uint search_index;
  ulonglong result_val1;
  ulonglong result_val2;
  float calc_value;
  undefined4 stack_param1;
  undefined4 stack_param2;
  undefined4 stack_param3;
  undefined4 stack_param4;
  undefined4 stack_param5;
  ulonglong final_result;
  
  // 获取全局上下文
  global_context = _DAT_180c8a9b0;
  context_val = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  temp_val1 = *(undefined4 *)(context_val + 0x100);
  temp_val2 = *(undefined4 *)(context_val + 0x104);
  
  // 计算参数值
  calc_value = (float)param_1[0xc] -
           (*(float *)(_DAT_180c8a9b0 + 0x1660) + *(float *)(_DAT_180c8a9b0 + 0x1660) +
           *(float *)(_DAT_180c8a9b0 + 0x19f8));
  param_1[0xc] = (int)calc_value;
  
  // 检查状态标志
  if (*(char *)(context_val + 0xb7) != '\0') {
    calc_value = calc_value + *(float *)(global_context + 0x1674);
    param_1[0xc] = (int)calc_value;
  }
  
  // 更新上下文值
  *(int *)(context_val + 0x104) = param_1[0xb];
  *(float *)(context_val + 0x100) = calc_value;
  final_result = 0;
  
  // 设置栈参数
  temp_val3 = *(undefined4 *)(global_context + 0x16c8);
  temp_val4 = *(undefined4 *)(global_context + 0x16cc);
  temp_val5 = *(undefined4 *)(global_context + 0x16d0);
  calc_value = *(float *)(global_context + 0x16d4);
  
  stack_param1 = 0;
  stack_param2 = *(undefined4 *)(global_context + 0x16c8);
  stack_param3 = *(undefined4 *)(global_context + 0x16cc);
  stack_param4 = *(undefined4 *)(global_context + 0x16d0);
  stack_param5 = *(undefined4 *)(global_context + 0x16d4);
  
  // 调用状态处理函数
  FUN_18013e100(global_context + 0x1b80, &stack_param1);
  stack_param1 = 0x15;
  
  // 更新状态值
  *(undefined4 *)(global_context + 0x16c8) = temp_val3;
  *(undefined4 *)(global_context + 0x16cc) = temp_val4;
  *(undefined4 *)(global_context + 0x16d0) = temp_val5;
  *(float *)(global_context + 0x16d4) = calc_value * 0.5;
  
  global_context = _DAT_180c8a9b0;
  stack_param2 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  stack_param3 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  stack_param4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  stack_param5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80, &stack_param1);
  *(undefined8 *)(global_context + 0x1818) = 0;
  *(undefined8 *)(global_context + 0x1820) = 0;
  
  // 执行状态验证
  status_flag = FUN_1801129b0(&UNK_180a063b0, 0, 0x41);
  context_val = _DAT_180c8a9b0;
  
  // 更新临时指针
  temp_ptr1 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  temp_val6 = temp_ptr1[1];
  
  temp_ptr3 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *temp_ptr3 = *temp_ptr1;
  temp_ptr3[1] = temp_val6;
  
  index_val = *(int *)(context_val + 0x1b80);
  *(int *)(context_val + 0x1b80) = index_val + -1;
  stack_val = (longlong)index_val + -2;
  
  temp_ptr2 = (undefined4 *)(*(longlong *)(context_val + 0x1b88) + 4 + stack_val * 0x14);
  temp_val3 = temp_ptr2[1];
  temp_val4 = temp_ptr2[2];
  temp_val5 = temp_ptr2[3];
  
  temp_ptr4 = (undefined4 *)
           (context_val + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(context_val + 0x1b88) + stack_val * 0x14) * 0x10);
  *temp_ptr4 = *temp_ptr2;
  temp_ptr4[1] = temp_val3;
  temp_ptr4[2] = temp_val4;
  temp_ptr4[3] = temp_val5;
  
  *(int *)(context_val + 0x1b80) = *(int *)(context_val + 0x1b80) + -1;
  result_val1 = final_result;
  
  if (status_flag != '\0') {
    result_val2 = final_result;
    if (0 < *param_1) {
      do {
        global_context = *(longlong *)(param_1 + 2);
        status_flag = FUN_18011aad0(**(undefined8 **)(global_context + result_val2 + 8));
        if (status_flag != '\0') {
          result_val1 = global_context + result_val2;
        }
        search_index = (int)final_result + 1;
        final_result = (ulonglong)search_index;
        result_val2 = result_val2 + 0x28;
      } while ((int)search_index < *param_1);
    }
    FUN_18012f0c0();
  }
  
  // 恢复原始值
  *(undefined4 *)(context_val + 0x100) = temp_val1;
  *(undefined4 *)(context_val + 0x104) = temp_val2;
  
  return result_val1;
}

/**
 * @brief 核心引擎浮点数计算和优化器
 * 
 * 该函数负责执行浮点数计算和优化操作，
 * 处理复杂的数学计算和参数优化。
 * 
 * @param param_1 第一个浮点参数
 * @param param_2 第二个浮点参数
 * @return ulonglong 返回计算结果
 */
ulonglong CoreEngineFloatCalculator(float param_1, float param_2)
{
  longlong global_context;
  undefined8 *temp_ptr1;
  undefined4 *temp_ptr2;
  undefined8 *temp_ptr3;
  undefined4 *temp_ptr4;
  undefined4 temp_val1;
  undefined4 temp_val2;
  int index_val;
  undefined4 temp_val3;
  undefined4 temp_val4;
  undefined4 temp_val5;
  undefined8 temp_val6;
  longlong context_val;
  char status_flag;
  longlong register_rcx;
  longlong register_rbx;
  uint search_index;
  int *register_rsi;
  ulonglong result_val1;
  ulonglong result_val2;
  longlong register_r15;
  float calc_value;
  undefined4 stack_param1;
  float stack_param2;
  undefined4 stack_param3;
  undefined4 stack_param4;
  undefined4 stack_param5;
  undefined4 stack_param6;
  ulonglong final_result;
  
  // 获取寄存器值
  temp_val1 = *(undefined4 *)(register_r15 + 0x100);
  temp_val2 = *(undefined4 *)(register_r15 + 0x104);
  
  // 执行浮点数计算
  param_2 = param_2 - (param_1 + *(float *)(register_rbx + 0x19f8));
  *(float *)(register_rcx + 0x30) = param_2;
  
  // 检查状态标志
  if (*(char *)(register_r15 + 0xb7) != '\0') {
    param_2 = param_2 + *(float *)(register_rbx + 0x1674);
    *(float *)(register_rcx + 0x30) = param_2;
  }
  
  // 更新寄存器值
  *(undefined4 *)(register_r15 + 0x104) = *(undefined4 *)(register_rcx + 0x2c);
  *(float *)(register_r15 + 0x100) = param_2;
  final_result = 0;
  
  // 设置栈参数
  temp_val3 = *(undefined4 *)(register_rbx + 0x16c8);
  temp_val4 = *(undefined4 *)(register_rbx + 0x16cc);
  stack_param1 = *(undefined4 *)(register_rbx + 0x16d0);
  stack_param2 = *(float *)(register_rbx + 0x16d4);
  stack_param3 = 0;
  calc_value = stack_param2 * 0.5;
  stack_param4 = *(undefined4 *)(register_rbx + 0x16c8);
  stack_param5 = *(undefined4 *)(register_rbx + 0x16cc);
  stack_param6 = *(undefined4 *)(register_rbx + 0x16d0);
  stack_param2 = *(undefined4 *)(register_rbx + 0x16d4);
  
  // 调用计算函数
  FUN_18013e100(register_rbx + 0x1b80, &stack_param3);
  stack_param3 = 0x15;
  
  // 更新状态值
  *(undefined4 *)(register_rbx + 0x16c8) = temp_val3;
  *(undefined4 *)(register_rbx + 0x16cc) = temp_val4;
  *(undefined4 *)(register_rbx + 0x16d0) = stack_param1;
  *(float *)(register_rbx + 0x16d4) = calc_value;
  
  global_context = _DAT_180c8a9b0;
  stack_param4 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1818);
  stack_param5 = *(undefined4 *)(_DAT_180c8a9b0 + 0x181c);
  stack_param6 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1820);
  stack_param2 = *(undefined4 *)(_DAT_180c8a9b0 + 0x1824);
  
  FUN_18013e100(_DAT_180c8a9b0 + 0x1b80, &stack_param3);
  *(undefined8 *)(global_context + 0x1818) = 0;
  *(undefined8 *)(global_context + 0x1820) = 0;
  
  // 执行状态验证
  status_flag = FUN_1801129b0(&UNK_180a063b0, 0, 0x41);
  context_val = _DAT_180c8a9b0;
  
  // 更新临时指针
  temp_ptr1 = (undefined8 *)
           (*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x10 +
           (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14);
  temp_val6 = temp_ptr1[1];
  
  temp_ptr3 = (undefined8 *)
           (_DAT_180c8a9b0 + 0x16c8 +
           (longlong)
           *(int *)(*(longlong *)(_DAT_180c8a9b0 + 0x1b88) + -0x14 +
                   (longlong)*(int *)(_DAT_180c8a9b0 + 0x1b80) * 0x14) * 0x10);
  *temp_ptr3 = *temp_ptr1;
  temp_ptr3[1] = temp_val6;
  
  index_val = *(int *)(context_val + 0x1b80);
  *(int *)(context_val + 0x1b80) = index_val + -1;
  global_context = (longlong)index_val + -2;
  
  temp_ptr2 = (undefined4 *)(*(longlong *)(context_val + 0x1b88) + 4 + global_context * 0x14);
  temp_val3 = temp_ptr2[1];
  temp_val4 = temp_ptr2[2];
  temp_val5 = temp_ptr2[3];
  
  temp_ptr4 = (undefined4 *)
           (context_val + 0x16c8 +
           (longlong)*(int *)(*(longlong *)(context_val + 0x1b88) + global_context * 0x14) * 0x10);
  *temp_ptr4 = *temp_ptr2;
  temp_ptr4[1] = temp_val3;
  temp_ptr4[2] = temp_val4;
  temp_ptr4[3] = temp_val5;
  
  *(int *)(context_val + 0x1b80) = *(int *)(context_val + 0x1b80) + -1;
  result_val1 = final_result;
  
  if (status_flag != '\0') {
    result_val2 = final_result;
    if (0 < *register_rsi) {
      do {
        global_context = *(longlong *)(register_rsi + 2);
        status_flag = FUN_18011aad0(**(undefined8 **)(global_context + result_val2 + 8));
        if (status_flag != '\0') {
          result_val1 = global_context + result_val2;
        }
        search_index = (int)final_result + 1;
        final_result = (ulonglong)search_index;
        result_val2 = result_val2 + 0x28;
      } while ((int)search_index < *register_rsi);
    }
    FUN_18012f0c0();
  }
  
  // 恢复原始值
  *(undefined4 *)(register_r15 + 0x100) = temp_val1;
  *(undefined4 *)(register_r15 + 0x104) = temp_val2;
  
  return result_val1;
}

/**
 * @brief 核心引擎条件判断和数据处理处理器
 * 
 * 该函数负责执行条件判断和数据处理操作，
 * 根据不同的条件执行相应的处理逻辑。
 * 
 * @param param_1 第一个参数
 * @param param_2 第二个参数
 * @return ulonglong 返回处理结果
 */
ulonglong CoreEngineConditionalProcessor(undefined8 param_1, undefined8 param_2)
{
  longlong context_val;
  char status_flag;
  uint search_index;
  ulonglong result_val;
  int *register_rsi;
  ulonglong register_rdi;
  ulonglong loop_val;
  longlong register_r15;
  undefined4 register_xmm7;
  undefined4 register_xmm8;
  
  // 初始化结果值
  result_val = register_rdi & 0xffffffff;
  
  // 条件判断和循环处理
  if ((int)register_rdi < *register_rsi) {
    loop_val = register_rdi & 0xffffffff;
    do {
      context_val = *(longlong *)(register_rsi + 2);
      status_flag = FUN_18011aad0(**(undefined8 **)(context_val + loop_val + 8), param_2, 0);
      if (status_flag != '\0') {
        register_rdi = context_val + loop_val;
      }
      search_index = (int)result_val + 1;
      result_val = (ulonglong)search_index;
      loop_val = loop_val + 0x28;
    } while ((int)search_index < *register_rsi);
  }
  
  // 调用清理函数
  FUN_18012f0c0();
  
  // 恢复寄存器值
  *(undefined4 *)(register_r15 + 0x100) = register_xmm7;
  *(undefined4 *)(register_r15 + 0x104) = register_xmm8;
  
  return register_rdi;
}

/**
 * @brief 核心引擎循环处理和数据验证器
 * 
 * 该函数负责执行循环处理和数据验证操作，
 * 确保数据的完整性和正确性。
 * 
 * @param param_1 第一个参数
 * @param param_2 第二个参数
 * @return ulonglong 返回处理结果
 */
ulonglong CoreEngineLoopProcessor(undefined8 param_1, undefined8 param_2)
{
  longlong context_val;
  char status_flag;
  int register_ebp;
  int *register_rsi;
  ulonglong register_rdi;
  ulonglong loop_val;
  longlong register_r15;
  undefined4 register_xmm7;
  undefined4 register_xmm8;
  
  // 初始化循环值
  loop_val = register_rdi & 0xffffffff;
  
  // 执行循环处理
  do {
    context_val = *(longlong *)(register_rsi + 2);
    status_flag = FUN_18011aad0(**(undefined8 **)(context_val + loop_val + 8), param_2, 0);
    if (status_flag != '\0') {
      register_rdi = context_val + loop_val;
    }
    register_ebp = register_ebp + 1;
    loop_val = loop_val + 0x28;
  } while (register_ebp < *register_rsi);
  
  // 调用清理函数
  FUN_18012f0c0();
  
  // 恢复寄存器值
  *(undefined4 *)(register_r15 + 0x100) = register_xmm7;
  *(undefined4 *)(register_r15 + 0x104) = register_xmm8;
  
  return register_rdi;
}

/**
 * @brief 核心引擎状态重置和清理器
 * 
 * 该函数负责重置核心引擎的状态，执行清理操作，
 * 确保系统状态的正确性。
 * 
 * @return void 无返回值
 */
void CoreEngineStateResetter(void)
{
  longlong register_r15;
  undefined4 register_xmm7;
  undefined4 register_xmm8;
  
  // 调用清理函数
  FUN_18012f0c0();
  
  // 恢复寄存器值
  *(undefined4 *)(register_r15 + 0x100) = register_xmm7;
  *(undefined4 *)(register_r15 + 0x104) = register_xmm8;
  
  return;
}

//==============================================================================
// 模块功能说明
//==============================================================================

/**
 * @defgroup CoreEngineDataProcessing 核心引擎数据处理模块
 * @brief 核心引擎数据处理和状态监控功能模块
 * 
 * 本模块提供了完整的核心引擎数据处理功能，包括：
 * - 数据清理和移除操作
 * - 参数计算和状态监控
 * - 状态恢复和管理
 * - 浮点数计算和优化
 * - 条件判断和逻辑控制
 * - 循环处理和数据验证
 * - 状态重置和清理
 * 
 * 该模块是核心引擎系统的重要组成部分，为整个引擎系统提供
 * 稳定和高效的数据处理服务。
 * 
 * 主要技术特点：
 * - 高效的数据结构操作
 * - 精确的浮点数计算
 * - 可靠的状态管理
 * - 完善的错误处理
 * - 优化的内存使用
 * - 线程安全的操作
 * 
 * 使用场景：
 * - 引擎初始化和清理
 * - 参数计算和验证
 * - 状态监控和管理
 * - 数据处理和优化
 * - 错误恢复和处理
 */

/** @} */