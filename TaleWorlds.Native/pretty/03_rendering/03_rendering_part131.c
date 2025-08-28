#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part131.c - 渲染系统高级参数处理和状态管理模块
// 包含12个核心函数，涵盖渲染参数处理、状态管理、资源分配、矩阵变换、渲染控制等高级渲染功能

// 常量定义
#define RENDER_PARAM_TYPE_BASIC 0
#define RENDER_PARAM_TYPE_VECTOR4 1
#define RENDER_PARAM_TYPE_FLOAT 2
#define RENDER_PARAM_TYPE_BOOL 3
#define RENDER_PARAM_TYPE_INT 4
#define RENDER_PARAM_TYPE_VECTOR3 5
#define RENDER_PARAM_TYPE_MATRIX4X4 6
#define RENDER_PARAM_TYPE_VECTOR2 7
#define RENDER_PARAM_TYPE_VECTOR4_2 8
#define RENDER_PARAM_TYPE_VECTOR2_2 9
#define RENDER_PARAM_TYPE_VECTOR4_3 10
#define RENDER_PARAM_TYPE_VECTOR4_4 11
#define RENDER_PARAM_TYPE_VECTOR4_16 12
#define RENDER_PARAM_TYPE_VECTOR4_4_EXTENDED 13

#define RENDER_FLAG_EXECUTE_CALLBACK 1
#define RENDER_FLAG_CLEANUP_ON_ERROR 2
#define RENDER_FLAG_ALLOCATE_MEMORY 4

#define MATRIX_SIZE_4X4 16
#define MATRIX_SIZE_3X3 9
#define VECTOR_SIZE_4 4
#define VECTOR_SIZE_3 3
#define VECTOR_SIZE_2 2

#define RENDER_POOL_SIZE_48 0x30
#define RENDER_POOL_SIZE_168 0xa8
#define RENDER_POOL_SIZE_16 0x10
#define RENDER_POOL_SIZE_80 0x50

#define RENDER_ERROR_HANDLER_STACK_SIZE 32

// 函数别名定义
#define rendering_system_process_render_parameters FUN_1803461b0
#define rendering_system_resize_render_pool FUN_180346430
#define rendering_system_set_render_parameter_data FUN_180346640
#define rendering_system_find_render_parameter FUN_1803466a0
#define rendering_system_create_render_parameter_object FUN_1803467b0
#define rendering_system_process_render_data_type1 FUN_180346820
#define rendering_system_process_render_data_type2 FUN_180346840
#define rendering_system_process_render_data_type3 FUN_180346870
#define rendering_system_create_render_parameter_manager FUN_1803468a0
#define rendering_system_initialize_render_parameter_system FUN_180346910
#define rendering_system_cleanup_render_parameter_state FUN_180346ad0
#define rendering_system_reset_render_parameter_state FUN_180346b10
#define rendering_system_process_render_parameter_queue FUN_180346b50
#define rendering_system_update_render_parameter_state FUN_180346f00
#define rendering_system_execute_render_parameter_callback FUN_180346f40
#define rendering_system_calculate_matrix_transform FUN_180347100

/**
 * 渲染系统参数处理主函数
 * 根据参数类型执行不同的渲染参数设置操作
 * 
 * @param render_context 渲染上下文指针
 * @param render_param 渲染参数
 * @param param_data 参数数据指针
 * @param param_size 参数大小
 * @param execute_callback 是否执行回调标志
 */
void rendering_system_process_render_parameters(longlong *render_context, uint64_t render_param, int32_t *param_data, uint64_t param_size, char execute_callback)
{
  int32_t *vector_data_ptr;
  uint64_t parameter_value;
  longlong render_object_ptr;
  int param_type;
  int32_t matrix_element_1;
  int32_t matrix_element_2;
  int32_t matrix_element_3;
  int32_t matrix_element_4;
  int32_t matrix_element_5;
  int32_t matrix_element_6;
  int32_t matrix_element_7;
  int32_t matrix_element_8;
  int32_t matrix_element_9;
  int32_t matrix_element_10;
  int32_t matrix_element_11;
  int32_t matrix_element_12;
  int32_t matrix_element_13;
  int32_t matrix_element_14;
  int32_t matrix_element_15;
  int32_t matrix_element_16;
  int32_t float_value_1;
  int32_t float_value_2;
  int32_t float_value_3;
  int32_t float_value_4;
  int32_t float_value_5;
  int32_t float_value_6;
  int32_t float_value_7;
  int32_t float_value_8;
  int32_t float_value_9;
  int32_t float_value_10;
  int32_t float_value_11;
  int32_t float_value_12;
  int32_t float_value_13;
  int32_t float_value_14;
  int32_t float_value_15;
  int32_t float_value_16;
  void *error_handler_ptr;
  longlong error_handler_stack;
  
  param_type = (int)param_size;
  if (param_type == RENDER_PARAM_TYPE_BASIC) {
    // 基础参数类型处理
    parameter_value = FUN_180627910(&error_handler_ptr, param_data + 0x20, param_data, param_size, 0xfffffffffffffffe);
    render_object_ptr = FUN_1803466a0(render_context, render_param);
    FUN_180627be0(*(uint64_t *)(render_object_ptr + 0x20), parameter_value);
    if (execute_callback != '\0') {
      // 执行渲染回调函数
      (**(code **)(*render_context + 0xb0))(render_context, render_param);
    }
    error_handler_ptr = &system_data_buffer_ptr;
    if (error_handler_stack != 0) {
      // 错误处理：清理资源
      FUN_18064e900();
    }
  }
  else {
    if (param_type == RENDER_PARAM_TYPE_VECTOR4) {
      // 4维向量参数处理
      render_object_ptr = FUN_1803466a0((int)*(uint64_t *)(param_data + 0xa0));
      **(uint64_t **)(render_object_ptr + 0x20) = CONCAT44(matrix_element_2, matrix_element_1);
    }
    else if (param_type == RENDER_PARAM_TYPE_FLOAT) {
      // 浮点数参数处理
      render_object_ptr = FUN_1803466a0(param_data[0xa2]);
      **(int32_t **)(render_object_ptr + 0x20) = matrix_element_1;
    }
    else if (param_type == RENDER_PARAM_TYPE_BOOL) {
      // 布尔值参数处理
      param_type = param_data[0xa3];
      render_object_ptr = FUN_1803466a0();
      *(bool *)*(uint64_t *)(render_object_ptr + 0x20) = param_type != 0;
    }
    else if (param_type == RENDER_PARAM_TYPE_INT) {
      // 整数参数处理
      float_value_1 = param_data[0xa4];
      render_object_ptr = FUN_1803466a0();
      **(int32_t **)(render_object_ptr + 0x20) = float_value_1;
    }
    else if (param_type == RENDER_PARAM_TYPE_VECTOR3) {
      // 3维向量参数处理
      render_object_ptr = FUN_1803466a0(param_data[0x14]);
      vector_data_ptr = *(int32_t **)(render_object_ptr + 0x20);
      *vector_data_ptr = matrix_element_1;
      vector_data_ptr[1] = matrix_element_2;
      vector_data_ptr[2] = matrix_element_3;
      vector_data_ptr[3] = matrix_element_4;
    }
    else if (param_type == RENDER_PARAM_TYPE_MATRIX4X4) {
      // 4x4矩阵参数处理
      render_object_ptr = FUN_1803466a0(param_data[0x10]);
      vector_data_ptr = *(int32_t **)(render_object_ptr + 0x20);
      *vector_data_ptr = matrix_element_1;
      vector_data_ptr[1] = matrix_element_2;
      vector_data_ptr[2] = matrix_element_3;
      vector_data_ptr[3] = matrix_element_4;
    }
    else if (param_type == RENDER_PARAM_TYPE_VECTOR2) {
      // 2维向量参数处理
      parameter_value = *(uint64_t *)(param_data + 0x18);
      render_object_ptr = FUN_1803466a0();
      **(uint64_t **)(render_object_ptr + 0x20) = parameter_value;
    }
    else if (param_type == RENDER_PARAM_TYPE_VECTOR4_2) {
      // 4维向量参数处理（变体2）
      parameter_value = *(uint64_t *)(param_data + 0x1a);
      render_object_ptr = FUN_1803466a0();
      **(uint64_t **)(render_object_ptr + 0x20) = parameter_value;
    }
    else if (param_type == RENDER_PARAM_TYPE_VECTOR4_3) {
      // 4维向量参数处理（变体3）
      parameter_value = *(uint64_t *)(param_data + 0x1c);
      render_object_ptr = FUN_1803466a0();
      **(uint64_t **)(render_object_ptr + 0x20) = parameter_value;
    }
    else if (param_type == RENDER_PARAM_TYPE_VECTOR4_2) {
      // 4维向量参数处理（变体4）
      parameter_value = *(uint64_t *)(param_data + 0x1e);
      render_object_ptr = FUN_1803466a0();
      **(uint64_t **)(render_object_ptr + 0x20) = parameter_value;
    }
    else {
      if (param_type != RENDER_PARAM_TYPE_VECTOR4_4) {
        if (param_type != RENDER_PARAM_TYPE_VECTOR2_2) {
          return;
        }
        // 2维向量参数处理（变体2）
        parameter_value = FUN_180627910(&error_handler_ptr, param_data + 0x60, param_data, param_size, 0xfffffffffffffffe);
        FUN_180346640(render_context, render_param, parameter_value, execute_callback);
        error_handler_ptr = &system_data_buffer_ptr;
        if (error_handler_stack == 0) {
          return;
        }
        // 错误处理：清理资源
        FUN_18064e900();
      }
      // 4维向量参数处理（变体5）
      float_value_1 = param_data[4];
      float_value_2 = param_data[5];
      float_value_3 = param_data[6];
      float_value_4 = param_data[7];
      float_value_5 = param_data[8];
      float_value_6 = param_data[9];
      float_value_7 = param_data[10];
      float_value_8 = param_data[0xb];
      float_value_9 = param_data[0xc];
      float_value_10 = param_data[0xd];
      float_value_11 = param_data[0xe];
      float_value_12 = param_data[0xf];
      render_object_ptr = FUN_1803466a0(*param_data);
      vector_data_ptr = *(int32_t **)(render_object_ptr + 0x20);
      *vector_data_ptr = matrix_element_1;
      vector_data_ptr[1] = matrix_element_2;
      vector_data_ptr[2] = matrix_element_3;
      vector_data_ptr[3] = matrix_element_4;
      vector_data_ptr[4] = float_value_1;
      vector_data_ptr[5] = float_value_2;
      vector_data_ptr[6] = float_value_3;
      vector_data_ptr[7] = float_value_4;
      vector_data_ptr[8] = float_value_5;
      vector_data_ptr[9] = float_value_6;
      vector_data_ptr[10] = float_value_7;
      vector_data_ptr[0xb] = float_value_8;
      vector_data_ptr[0xc] = float_value_9;
      vector_data_ptr[0xd] = float_value_10;
      vector_data_ptr[0xe] = float_value_11;
      vector_data_ptr[0xf] = float_value_12;
    }
    if (execute_callback != '\0') {
      // 执行渲染回调函数
      (**(code **)(*render_context + 0xb0))(render_context, render_param);
      return;
    }
  }
  return;
}

/**
 * 渲染系统池大小调整函数
 * 动态调整渲染参数池的大小，支持内存重新分配和数据迁移
 * 
 * @param pool_header 渲染池头指针
 * @param pool_data 渲染池数据指针
 */
void rendering_system_resize_render_pool(uint64_t *pool_header, longlong pool_data)
{
  uint64_t *pool_start_ptr;
  uint64_t *pool_end_ptr;
  uint64_t *pool_current_ptr;
  uint64_t *new_pool_ptr;
  longlong pool_size;
  longlong new_pool_size;
  uint64_t *temp_pool_ptr;
  
  temp_pool_ptr = (uint64_t *)pool_header[1];
  pool_start_ptr = (uint64_t *)*pool_header;
  pool_size = ((longlong)temp_pool_ptr - (longlong)pool_start_ptr) / RENDER_POOL_SIZE_48;
  new_pool_ptr = (uint64_t *)0x0;
  if (pool_size == 0) {
    pool_size = 1;
  }
  else {
    pool_size = pool_size * 2;
    if (pool_size == 0) goto LAB_1803464ba;
  }
  // 分配新的池内存
  new_pool_ptr = (uint64_t *)
           FUN_18062b420(system_memory_pool_ptr, pool_size * RENDER_POOL_SIZE_48, *(int8_t *)(pool_header + 3), pool_start_ptr, 0xfffffffffffffffe);
  temp_pool_ptr = (uint64_t *)pool_header[1];
  pool_start_ptr = (uint64_t *)*pool_header;
LAB_1803464ba:
  temp_pool_ptr = new_pool_ptr;
  if (pool_start_ptr != temp_pool_ptr) {
    new_pool_size = (longlong)new_pool_ptr - (longlong)pool_start_ptr;
    pool_start_ptr = pool_start_ptr + 1;
    do {
      // 数据迁移和清理
      *temp_pool_ptr = &system_state_ptr;
      *(uint64_t *)(new_pool_size + (longlong)pool_start_ptr) = 0;
      *(int32_t *)(new_pool_size + 8 + (longlong)pool_start_ptr) = 0;
      *temp_pool_ptr = &system_data_buffer_ptr;
      *(uint64_t *)(new_pool_size + 0x10 + (longlong)pool_start_ptr) = 0;
      *(uint64_t *)(new_pool_size + (longlong)pool_start_ptr) = 0;
      *(int32_t *)(new_pool_size + 8 + (longlong)pool_start_ptr) = 0;
      *(int32_t *)(new_pool_size + 8 + (longlong)pool_start_ptr) = *(int32_t *)(pool_start_ptr + 1);
      *(uint64_t *)(new_pool_size + (longlong)pool_start_ptr) = *pool_start_ptr;
      *(int32_t *)(new_pool_size + 0x14 + (longlong)pool_start_ptr) = *(int32_t *)((longlong)pool_start_ptr + 0x14);
      *(int32_t *)(new_pool_size + 0x10 + (longlong)pool_start_ptr) = *(int32_t *)(pool_start_ptr + 2);
      *(int32_t *)(pool_start_ptr + 1) = 0;
      *pool_start_ptr = 0;
      pool_start_ptr[2] = 0;
      *(uint64_t *)(new_pool_size + 0x18 + (longlong)pool_start_ptr) = pool_start_ptr[3];
      *(int32_t *)(new_pool_size + 0x20 + (longlong)pool_start_ptr) = *(int32_t *)(pool_start_ptr + 4);
      temp_pool_ptr = temp_pool_ptr + 6;
      pool_current_ptr = pool_start_ptr + 5;
      pool_start_ptr = pool_start_ptr + 6;
    } while (pool_current_ptr != temp_pool_ptr);
  }
  // 初始化新的池数据
  *temp_pool_ptr = &system_state_ptr;
  temp_pool_ptr[1] = 0;
  *(int32_t *)(temp_pool_ptr + 2) = 0;
  *temp_pool_ptr = &system_data_buffer_ptr;
  temp_pool_ptr[3] = 0;
  temp_pool_ptr[1] = 0;
  *(int32_t *)(temp_pool_ptr + 2) = 0;
  *(int32_t *)(temp_pool_ptr + 2) = *(int32_t *)(pool_data + 0x10);
  temp_pool_ptr[1] = *(uint64_t *)(pool_data + 8);
  *(int32_t *)((longlong)temp_pool_ptr + 0x1c) = *(int32_t *)(pool_data + 0x1c);
  *(int32_t *)(temp_pool_ptr + 3) = *(int32_t *)(pool_data + 0x18);
  *(int32_t *)(pool_data + 0x10) = 0;
  *(uint64_t *)(pool_data + 8) = 0;
  *(uint64_t *)(pool_data + 0x18) = 0;
  temp_pool_ptr[4] = *(uint64_t *)(pool_data + 0x20);
  *(int32_t *)(temp_pool_ptr + 5) = *(int32_t *)(pool_data + 0x28);
  temp_pool_ptr = (uint64_t *)pool_header[1];
  pool_start_ptr = (uint64_t *)*pool_header;
  if (pool_start_ptr != temp_pool_ptr) {
    do {
      // 清理旧的池数据
      *pool_start_ptr = &system_data_buffer_ptr;
      if (pool_start_ptr[1] != 0) {
        // 错误处理：清理资源
        FUN_18064e900();
      }
      pool_start_ptr[1] = 0;
      *(int32_t *)(pool_start_ptr + 3) = 0;
      *pool_start_ptr = &system_state_ptr;
      pool_start_ptr = pool_start_ptr + 6;
    } while (pool_start_ptr != temp_pool_ptr);
    pool_start_ptr = (uint64_t *)*pool_header;
  }
  if (pool_start_ptr == (uint64_t *)0x0) {
    // 更新池头信息
    *pool_header = new_pool_ptr;
    pool_header[1] = temp_pool_ptr + 6;
    pool_header[2] = new_pool_ptr + pool_size * 6;
    return;
  }
  // 错误处理：清理资源
  FUN_18064e900(pool_start_ptr);
}

/**
 * 渲染系统参数数据设置函数
 * 设置渲染参数的数据值
 * 
 * @param render_context 渲染上下文指针
 * @param render_param 渲染参数
 * @param param_data 参数数据
 * @param execute_callback 是否执行回调标志
 */
void rendering_system_set_render_parameter_data(longlong *render_context, uint64_t render_param, uint64_t param_data, char execute_callback)
{
  longlong render_object_ptr;
  
  render_object_ptr = FUN_1803466a0();
  FUN_180627be0(*(uint64_t *)(render_object_ptr + 0x20), param_data);
  if (execute_callback != '\0') {
    // 执行渲染回调函数
    (**(code **)(*render_context + 0xb0))(render_context, render_param);
  }
  return;
}

/**
 * 渲染系统参数查找函数
 * 在渲染系统中查找指定的参数
 * 
 * @param param_table 参数表指针
 * @param param_data 参数数据
 * @return 找到的参数指针，未找到返回0
 */
longlong rendering_system_find_render_parameter(longlong param_table, longlong param_data)
{
  char param_name_char_1;
  char param_name_char_2;
  int param_hash_value;
  char *param_name_ptr;
  ulonglong param_index;
  uint param_count;
  longlong table_start;
  longlong table_size;
  longlong table_end;
  bool param_match_found;
  ulonglong current_index;
  
  table_start = *(longlong *)(param_table + 0x50);
  table_size = *(longlong *)(param_table + 0x58) - table_start;
  param_index = 0;
  table_end = table_size >> 0x3f;
  if (table_size / RENDER_POOL_SIZE_48 + table_end != table_end) {
    current_index = param_index;
    do {
      param_hash_value = *(int *)(param_index + 0x10 + table_start);
      if ((param_hash_value == *(int *)(param_data + 0x10)) && (param_hash_value != 0)) {
        param_name_ptr = *(char **)(param_index + 8 + table_start);
        table_end = *(longlong *)(param_data + 8) - (longlong)param_name_ptr;
        do {
          param_name_char_1 = *param_name_ptr;
          param_name_char_2 = param_name_ptr[table_end];
          if (param_name_char_1 != param_name_char_2) break;
          param_name_ptr = param_name_ptr + 1;
        } while (param_name_char_2 != '\0');
        param_match_found = param_name_char_1 == param_name_char_2;
      }
      else {
        if ((param_hash_value == 0) && (*(int *)(param_data + 0x10) == 0)) goto LAB_180346795;
        param_match_found = false;
      }
      if (param_match_found) {
LAB_180346795:
        return (longlong)(int)param_index * RENDER_POOL_SIZE_48 + table_start;
      }
      table_start = *(longlong *)(param_table + 0x50);
      param_count = (int)param_index + 1;
      param_index = (ulonglong)param_count;
      param_index = param_index + RENDER_POOL_SIZE_48;
    } while ((ulonglong)(longlong)(int)param_count <
             (ulonglong)((*(longlong *)(param_table + 0x58) - table_start) / RENDER_POOL_SIZE_48));
  }
  return 0;
}

/**
 * 渲染系统参数对象创建函数
 * 创建新的渲染参数对象
 * 
 * @param param_obj 参数对象指针
 * @param param_flags 参数标志
 * @param param_data 参数数据
 * @param param_size 参数大小
 * @return 创建的参数对象指针
 */
uint64_t * rendering_system_create_render_parameter_object(uint64_t *param_obj, uint param_flags, uint64_t param_data, uint64_t param_size)
{
  *param_obj = &unknown_var_4912_ptr;
  FUN_1802f5b10(param_obj + 4, param_obj[6], param_data, param_size, 0xfffffffffffffffe);
  *param_obj = &system_handler2_ptr;
  *param_obj = &system_handler1_ptr;
  if ((param_flags & RENDER_FLAG_ALLOCATE_MEMORY) != 0) {
    free(param_obj, RENDER_POOL_SIZE_80);
  }
  return param_obj;
}

/**
 * 渲染系统数据类型1处理函数
 * 处理第一种类型的渲染数据
 * 
 * @param data_ptr 数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_process_render_data_type1(longlong data_ptr, uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
  FUN_1802f5b10(data_ptr, *(uint64_t *)(data_ptr + 0x10), param2, param3, 0xfffffffffffffffe);
  return;
}

/**
 * 渲染系统数据类型2处理函数
 * 处理第二种类型的渲染数据
 * 
 * @param data_ptr 数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_process_render_data_type2(longlong data_ptr, uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
  FUN_1802f5b10(data_ptr, *(uint64_t *)(data_ptr + 0x10), param2, param3, 0xfffffffffffffffe);
  return;
}

/**
 * 渲染系统数据类型3处理函数
 * 处理第三种类型的渲染数据
 * 
 * @param data_ptr 数据指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 */
void rendering_system_process_render_data_type3(longlong data_ptr, uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4)
{
  FUN_1802f5b10(data_ptr, *(uint64_t *)(data_ptr + 0x10), param2, param3, 0xfffffffffffffffe);
  return;
}

/**
 * 渲染系统参数管理器创建函数
 * 创建渲染参数管理器对象
 * 
 * @param manager_obj 管理器对象指针
 * @param manager_size 管理器大小
 * @return 创建的管理器对象指针
 */
uint64_t * rendering_system_create_render_parameter_manager(uint64_t *manager_obj, ulonglong manager_size)
{
  *manager_obj = &unknown_var_5664_ptr;
  if (manager_obj[0x11] != 0) {
    // 错误处理：清理资源
    FUN_18064e900();
  }
  FUN_1803457d0(manager_obj);
  if ((manager_size & RENDER_FLAG_ALLOCATE_MEMORY) != 0) {
    free(manager_obj, RENDER_POOL_SIZE_168);
  }
  return manager_obj;
}

/**
 * 渲染系统参数系统初始化函数
 * 初始化渲染参数系统
 * 
 * @param system_ptr 系统指针
 */
void rendering_system_initialize_render_parameter_system(uint64_t *system_ptr)
{
  int32_t init_param_1;
  uint64_t *temp_ptr;
  uint64_t init_param_2;
  void *error_handler_ptr;
  uint64_t *error_handler_data_ptr;
  int32_t error_handler_size;
  uint64_t error_handler_value;
  
  init_param_2 = 0xfffffffffffffffe;
  temp_ptr = system_ptr;
  FUN_1803456e0();
  *temp_ptr = &unknown_var_5664_ptr;
  temp_ptr[0x11] = 0;
  temp_ptr[0x12] = 0;
  temp_ptr[0x13] = 0;
  *(int32_t *)(temp_ptr + 0x14) = 3;
  temp_ptr[0xf] = 0x4024000000000000;
  temp_ptr[0xe] = 0x3fe0000000000000;
  *(int8_t *)((longlong)temp_ptr + 0x81) = 0;
  error_handler_ptr = &system_data_buffer_ptr;
  error_handler_value = 0;
  error_handler_data_ptr = (uint64_t *)0x0;
  error_handler_size = 0;
  // 分配错误处理内存
  temp_ptr = (uint64_t *)FUN_18062b420(system_memory_pool_ptr, RENDER_POOL_SIZE_16, 0x13);
  *(int8_t *)temp_ptr = 0;
  error_handler_data_ptr = temp_ptr;
  init_param_1 = FUN_18064e990(temp_ptr);
  error_handler_value = CONCAT44(error_handler_value._4_4_, init_param_1);
  *temp_ptr = 0x6f6d4120646e6542;
  *(int32_t *)(temp_ptr + 1) = 0x746e75;
  error_handler_size = 0xb;
  FUN_1803460a0(system_ptr, &error_handler_ptr, system_ptr + 0xf, 1, init_param_2);
  error_handler_ptr = &system_data_buffer_ptr;
  // 错误处理：清理资源
  FUN_18064e900(temp_ptr);
}

/**
 * 渲染系统参数状态清理函数
 * 清理渲染参数状态
 * 
 * @param state_ptr 状态指针
 */
void rendering_system_cleanup_render_parameter_state(longlong state_ptr)
{
  if ((*(char *)(state_ptr + 0x81) != '\0') &&
     ((*(byte *)(*(longlong *)(state_ptr + 0x18) + 0x2e8) & 1) != 0)) {
    FUN_180348d90();
    *(int8_t *)(state_ptr + 0x81) = 0;
  }
  return;
}

/**
 * 渲染系统参数状态重置函数
 * 重置渲染参数状态
 * 
 * @param state_ptr 状态指针
 */
void rendering_system_reset_render_parameter_state(longlong state_ptr)
{
  if (*(char *)(state_ptr + 0x80) == '\x01') {
    FUN_180348d90();
    *(int8_t *)(state_ptr + 0x80) = 0;
  }
  return;
}

/**
 * 渲染系统参数队列处理函数
 * 处理渲染参数队列中的参数
 * 
 * @param render_param 渲染参数
 * @param queue_ptr 队列指针
 */
void rendering_system_process_render_parameter_queue(uint64_t render_param, longlong queue_ptr)
{
  longlong *queue_item_ptr;
  int item_index;
  longlong item_data;
  void *temp_ptr;
  longlong *temp_item_ptr;
  uint process_count;
  int item_offset;
  longlong *next_item_ptr;
  int32_t temp_value;
  int32_t temp_value_2;
  longlong *current_item_ptr;
  void *error_handler_ptr;
  int8_t *string_buffer_ptr;
  uint string_length;
  ulonglong string_data;
  void *string_data_ptr;
  int8_t *string_ptr;
  uint string_size;
  ulonglong string_info;
  int32_t queue_param_1;
  int32_t queue_param_2;
  int32_t queue_param_3;
  int32_t queue_param_4;
  int32_t queue_param_5;
  int32_t queue_param_6;
  int32_t queue_param_7;
  int32_t queue_param_8;
  int32_t queue_param_9;
  int32_t queue_param_10;
  int32_t queue_param_11;
  int32_t queue_param_12;
  longlong *stack_item_ptr_1;
  longlong *stack_item_ptr_2;
  longlong *stack_item_ptr_3;
  
  string_info = 0xfffffffffffffffe;
  queue_item_ptr = *(longlong **)(queue_ptr + 0x1c0);
  next_item_ptr = *(longlong **)(queue_ptr + 0x1c8);
  if (queue_item_ptr != next_item_ptr) {
    do {
      current_item_ptr = (longlong *)*queue_item_ptr;
      stack_item_ptr_1 = current_item_ptr;
      if (current_item_ptr != (longlong *)0x0) {
        // 处理队列项
        (**(code **)(*current_item_ptr + 0x28))(current_item_ptr);
      }
      FUN_180346b50(render_param, current_item_ptr);
      if (current_item_ptr != (longlong *)0x0) {
        (**(code **)(*current_item_ptr + 0x38))(current_item_ptr);
      }
      queue_item_ptr = queue_item_ptr + 1;
    } while (queue_item_ptr != next_item_ptr);
    next_item_ptr = *(longlong **)(queue_ptr + 0x1c8);
  }
  queue_item_ptr = *(longlong **)(queue_ptr + 0x1c0);
  do {
    if (queue_item_ptr == next_item_ptr) {
      return;
    }
    current_item_ptr = (longlong *)*queue_item_ptr;
    stack_item_ptr_3 = current_item_ptr;
    if (current_item_ptr != (longlong *)0x0) {
      (**(code **)(*current_item_ptr + 0x28))(current_item_ptr);
    }
    item_data = current_item_ptr[0x22];
    if (item_data != 0) {
      // 处理字符串数据
      error_handler_ptr = &system_data_buffer_ptr;
      string_data = 0;
      string_buffer_ptr = (int8_t *)0x0;
      string_length = 0;
      temp_value = FUN_1806277c0(&error_handler_ptr, *(int32_t *)(item_data + 0x20));
      if (0 < *(int *)(item_data + 0x20)) {
        string_data_ptr = &system_buffer_ptr;
        if (*(void **)(item_data + 0x18) != (void *)0x0) {
          string_data_ptr = *(void **)(item_data + 0x18);
        }
        // 复制字符串数据
        memcpy(string_buffer_ptr, string_data_ptr, (longlong)(*(int *)(item_data + 0x20) + 1));
      }
      if ((*(longlong *)(item_data + 0x18) != 0) && (string_length = 0, string_buffer_ptr != (int8_t *)0x0)) {
        *string_buffer_ptr = 0;
      }
      while ((0 < (int)string_length &&
             (item_data = strstr(string_buffer_ptr, &system_memory_ff10), temp_value = temp_value_2, item_data != 0))) {
        item_offset = 6;
        item_index = (int)item_data - (int)string_buffer_ptr;
        if (string_length < item_index + 6U) {
          item_offset = string_length - item_index;
        }
        process_count = item_index + item_offset;
        if (process_count < string_length) {
          item_data = (longlong)(int)process_count;
          do {
            string_buffer_ptr[item_data - item_offset] = string_buffer_ptr[item_data];
            process_count = process_count + 1;
            item_data = item_data + 1;
          } while (process_count < string_length);
        }
        string_length = string_length - item_offset;
        string_buffer_ptr[string_length] = 0;
      }
      FUN_1800b3430(temp_value, &stack_item_ptr_1, &error_handler_ptr, 1);
      FUN_180085020(current_item_ptr + 0xe, &queue_param_1);
      queue_param_1 = queue_param_1;
      queue_param_2 = queue_param_2;
      queue_param_3 = queue_param_3;
      queue_param_4 = queue_param_4;
      FUN_18014cb90(queue_param_1, stack_item_ptr_1, &queue_param_1, 1);
      if (stack_item_ptr_1 != (longlong *)0x0) {
        (**(code **)(*stack_item_ptr_1 + 0x38))();
      }
      error_handler_ptr = &system_data_buffer_ptr;
      if (string_buffer_ptr != (int8_t *)0x0) {
        // 错误处理：清理资源
        FUN_18064e900();
      }
      string_buffer_ptr = (int8_t *)0x0;
      string_data = string_data & 0xffffffff00000000;
      error_handler_ptr = &system_state_ptr;
    }
    item_data = current_item_ptr[2];
    if (item_data != 0) {
      // 处理第二个字符串数据
      temp_ptr = &system_data_buffer_ptr;
      string_info = 0;
      string_ptr = (int8_t *)0x0;
      string_size = 0;
      temp_value = FUN_1806277c0(&temp_ptr, *(int32_t *)(item_data + 0x20));
      if (0 < *(int *)(item_data + 0x20)) {
        string_data_ptr = &system_buffer_ptr;
        if (*(void **)(item_data + 0x18) != (void *)0x0) {
          string_data_ptr = *(void **)(item_data + 0x18);
        }
        // 复制字符串数据
        memcpy(string_ptr, string_data_ptr, (longlong)(*(int *)(item_data + 0x20) + 1));
      }
      if ((*(longlong *)(item_data + 0x18) != 0) && (string_size = 0, string_ptr != (int8_t *)0x0)) {
        *string_ptr = 0;
      }
      while ((0 < (int)string_size &&
             (item_data = strstr(string_ptr, &system_memory_ff10), temp_value = temp_value_2, item_data != 0)))
      {
        item_offset = 6;
        item_index = (int)item_data - (int)string_ptr;
        if (string_size < item_index + 6U) {
          item_offset = string_size - item_index;
        }
        process_count = item_index + item_offset;
        if (process_count < string_size) {
          item_data = (longlong)(int)process_count;
          do {
            string_ptr[item_data - item_offset] = string_ptr[item_data];
            process_count = process_count + 1;
            item_data = item_data + 1;
          } while (process_count < string_size);
        }
        string_size = string_size - item_offset;
        string_ptr[string_size] = 0;
      }
      FUN_1800b3430(temp_value, &stack_item_ptr_2, &temp_ptr, 1);
      FUN_180085020(current_item_ptr + 0xe, &queue_param_5);
      queue_param_1 = queue_param_5;
      queue_param_2 = queue_param_6;
      queue_param_3 = queue_param_7;
      queue_param_4 = queue_param_8;
      FUN_18014cb90(queue_param_5, stack_item_ptr_2, &queue_param_1, 0);
      if (stack_item_ptr_2 != (longlong *)0x0) {
        (**(code **)(*stack_item_ptr_2 + 0x38))();
      }
      temp_ptr = &system_data_buffer_ptr;
      if (string_ptr != (int8_t *)0x0) {
        // 错误处理：清理资源
        FUN_18064e900();
      }
      string_ptr = (int8_t *)0x0;
      string_info = string_info & 0xffffffff00000000;
      temp_ptr = &system_state_ptr;
    }
    (**(code **)(*current_item_ptr + 0x38))(current_item_ptr);
    queue_item_ptr = queue_item_ptr + 1;
  } while( true );
}

/**
 * 渲染系统参数状态更新函数
 * 更新渲染参数状态
 * 
 * @param state_ptr 状态指针
 */
void rendering_system_update_render_parameter_state(longlong state_ptr)
{
  longlong render_context_ptr;
  void *temp_ptr;
  longlong stack_params [4];
  int32_t state_param_1;
  int32_t state_param_2;
  int32_t state_param_3;
  int32_t state_param_4;
  int32_t state_param_5;
  int32_t state_param_6;
  int32_t state_param_7;
  int32_t state_param_8;
  uint64_t state_param_9;
  uint64_t state_param_10;
  uint64_t state_param_11;
  uint64_t state_param_12;
  uint64_t state_param_13;
  int32_t state_param_14;
  
  state_param_13 = 0x180346f12;
  FUN_180346b50(state_ptr, *(uint64_t *)(state_ptr + 0x18));
  state_param_13 = 0x180346f17;
  FUN_18014ccf0();
  if ((*(byte *)(*(longlong *)(state_ptr + 0x18) + 0x2e8) & 1) == 0) {
    *(int8_t *)(state_ptr + 0x81) = 1;
    return;
  }
  render_context_ptr = *(longlong *)(state_ptr + 0x18);
  stack_params[0] = 0;
  state_param_14 = 0;
  state_param_9 = 0;
  state_param_10 = 0;
  state_param_11 = 0;
  state_param_12 = 0;
  state_param_13 = 0;
  FUN_180348e60(state_ptr, render_context_ptr, stack_params, &state_param_9);
  if (stack_params[0] != 0) {
    // 设置状态参数
    state_param_5 = 0x7f7fffff;
    state_param_6 = 0x7f7fffff;
    state_param_7 = 0x7f7fffff;
    state_param_8 = 0x7f7fffff;
    state_param_1 = 0xff7fffff;
    state_param_2 = 0xff7fffff;
    state_param_3 = 0xff7fffff;
    state_param_4 = 0x7f7fffff;
    FUN_180347ca0(state_ptr, render_context_ptr, &state_param_9, &state_param_5, &state_param_1);
    return;
  }
  temp_ptr = &system_buffer_ptr;
  if (*(void **)(render_context_ptr + 0x290) != (void *)0x0) {
    temp_ptr = *(void **)(render_context_ptr + 0x290);
  }
  FUN_180627020(&unknown_var_5328_ptr, temp_ptr);
  return;
}

/**
 * 渲染系统参数回调执行函数
 * 执行渲染参数回调
 * 
 * @param callback_param 回调参数
 */
void rendering_system_execute_render_parameter_callback(uint64_t callback_param)
{
  int8_t callback_stack [32];
  int32_t callback_flag;
  void **callback_array [2];
  uint64_t callback_data;
  void *callback_ptr;
  int8_t *callback_string_ptr;
  int32_t callback_length;
  int8_t callback_buffer [72];
  void *callback_handler_ptr;
  int8_t *callback_handler_string_ptr;
  int32_t callback_handler_length;
  int8_t callback_handler_buffer [72];
  void *callback_params [11];
  int32_t callback_param;
  ulonglong callback_info;
  
  callback_data = 0xfffffffffffffffe;
  callback_info = GET_SECURITY_COOKIE() ^ (ulonglong)callback_stack;
  callback_flag = 0;
  callback_ptr = &unknown_var_3480_ptr;
  callback_string_ptr = callback_buffer;
  callback_buffer[0] = 0;
  callback_length = 0xb;
  strcpy_s(callback_buffer, 0x40, &system_memory_cf50);
  FUN_1800b8300(callback_params, &callback_ptr);
  callback_param = 1;
  callback_flag = 1;
  FUN_180180730(callback_param, callback_array, callback_params);
  callback_flag = 0;
  callback_params[0] = &system_state_ptr;
  callback_ptr = &system_state_ptr;
  callback_handler_ptr = &unknown_var_3480_ptr;
  callback_handler_string_ptr = callback_handler_buffer;
  callback_handler_buffer[0] = 0;
  callback_handler_length = 0x11;
  callback_array[0] = callback_params;
  strcpy_s(callback_handler_buffer, 0x40, &system_memory_cf38);
  FUN_1800b8300(callback_params, &callback_handler_ptr);
  callback_param = 1;
  callback_flag = 2;
  FUN_180180730(callback_param, callback_array, callback_params);
  callback_flag = 0;
  callback_params[0] = &system_state_ptr;
  callback_handler_ptr = &system_state_ptr;
  callback_array[0] = callback_params;
  // 错误处理：清理资源
  FUN_1808fc050(callback_info ^ (ulonglong)callback_stack);
}

/**
 * 渲染系统矩阵变换计算函数
 * 计算渲染矩阵的变换
 * 
 * @param transform_ptr 变换指针
 * @param input_matrix 输入矩阵
 * @param output_matrix 输出矩阵
 * @return 输出矩阵指针
 */
float * rendering_system_calculate_matrix_transform(longlong transform_ptr, float *input_matrix, float *output_matrix)
{
  float *matrix_ptr;
  longlong transform_data;
  float transform_element_1;
  float transform_element_2;
  float transform_element_3;
  float transform_element_4;
  float transform_element_5;
  float transform_element_6;
  float transform_element_7;
  float transform_element_8;
  float transform_element_9;
  float transform_element_10;
  float transform_element_11;
  float transform_element_12;
  float transform_element_13;
  float transform_element_14;
  float transform_element_15;
  float transform_element_16;
  float transform_element_17;
  float transform_element_18;
  float transform_element_19;
  float transform_element_20;
  float transform_element_21;
  uint64_t transform_param;
  longlong matrix_offset;
  float transform_element_22;
  float transform_element_23;
  float transform_element_24;
  float transform_element_25;
  float transform_element_26;
  float transform_element_27;
  float transform_element_28;
  float transform_element_29;
  float transform_element_30;
  float transform_element_31;
  float transform_element_32;
  float transform_element_33;
  float transform_element_34;
  float transform_element_35;
  float transform_element_36;
  float transform_element_37;
  float transform_element_38;
  float transform_element_39;
  float transform_element_40;
  float transform_element_41;
  float transform_element_42;
  float transform_element_43;
  float transform_element_44;
  float transform_element_45;
  float transform_element_46;
  float transform_element_47;
  float transform_element_48;
  float transform_element_49;
  float transform_element_50;
  float transform_element_51;
  float transform_element_52;
  float transform_element_53;
  
  transform_element_25 = input_matrix[5];
  matrix_ptr = *(float **)(transform_ptr + 0x88);
  transform_data = *(longlong *)(transform_ptr + 0x18);
  matrix_offset = *(longlong *)(transform_ptr + 0x90) - (longlong)matrix_ptr;
  transform_element_1 = *(float *)(transform_data + 0x90);
  transform_element_2 = *(float *)(transform_data + 0x94);
  transform_element_3 = *(float *)(transform_data + 0x98);
  transform_element_4 = *(float *)(transform_data + 0x9c);
  transform_element_5 = *(float *)(transform_data + 0xa0);
  transform_element_6 = *(float *)(transform_data + 0xa4);
  transform_element_7 = *(float *)(transform_data + 0xa8);
  transform_element_8 = *(float *)(transform_data + 0xac);
  transform_element_9 = *(float *)(transform_data + 0x70);
  transform_element_10 = *(float *)(transform_data + 0x74);
  transform_element_11 = *(float *)(transform_data + 0x78);
  transform_element_12 = *(float *)(transform_data + 0x7c);
  transform_element_13 = *(float *)(transform_data + 0x80);
  transform_element_14 = *(float *)(transform_data + 0x84);
  transform_element_15 = *(float *)(transform_data + 0x88);
  transform_element_16 = *(float *)(transform_data + 0x8c);
  transform_element_17 = *input_matrix;
  transform_element_18 = input_matrix[1];
  transform_element_19 = input_matrix[2];
  transform_element_20 = input_matrix[4];
  transform_element_21 = input_matrix[3];
  // 计算矩阵变换结果
  transform_element_22 = transform_element_18 * transform_element_10 + transform_element_17 * transform_element_9 + transform_element_19 * transform_element_11;
  transform_element_23 = transform_element_18 * transform_element_14 + transform_element_17 * transform_element_13 + transform_element_19 * transform_element_15;
  transform_element_24 = transform_element_18 * transform_element_2 + transform_element_17 * transform_element_1 + transform_element_19 * transform_element_3;
  transform_element_17 = input_matrix[6];
  transform_element_18 = input_matrix[8];
  transform_element_19 = input_matrix[9];
  transform_element_20 = transform_element_25 * transform_element_10 + transform_element_21 * transform_element_9 + transform_element_17 * transform_element_11;
  transform_element_26 = transform_element_25 * transform_element_14 + transform_element_21 * transform_element_13 + transform_element_17 * transform_element_15;
  transform_element_27 = transform_element_25 * transform_element_2 + transform_element_21 * transform_element_1 + transform_element_17 * transform_element_3;
  transform_element_25 = input_matrix[10];
  transform_element_28 = input_matrix[0xd] - transform_element_6;
  transform_element_17 = transform_element_19 * transform_element_10 + transform_element_18 * transform_element_9 + transform_element_25 * transform_element_11;
  transform_element_29 = transform_element_19 * transform_element_14 + transform_element_18 * transform_element_13 + transform_element_25 * transform_element_15;
  transform_element_30 = transform_element_19 * transform_element_2 + transform_element_18 * transform_element_1 + transform_element_25 * transform_element_3;
  transform_element_25 = input_matrix[0xc] - transform_element_5;
  transform_element_18 = input_matrix[0xe] - transform_element_7;
  transform_data = matrix_offset >> 0x3f;
  transform_element_31 = transform_element_28 * transform_element_10 + transform_element_25 * transform_element_9 + transform_element_18 * transform_element_11;
  transform_element_32 = transform_element_28 * transform_element_14 + transform_element_25 * transform_element_13 + transform_element_18 * transform_element_15;
  transform_element_25 = transform_element_28 * transform_element_2 + transform_element_25 * transform_element_1 + transform_element_18 * transform_element_3;
  if (matrix_offset / 0x180 + transform_data == transform_data) {
    transform_param = *(uint64_t *)(input_matrix + 2);
    *(uint64_t *)output_matrix = *(uint64_t *)input_matrix;
    *(uint64_t *)(output_matrix + 2) = transform_param;
    transform_param = *(uint64_t *)(input_matrix + 6);
    *(uint64_t *)(output_matrix + 4) = *(uint64_t *)(input_matrix + 4);
    *(uint64_t *)(output_matrix + 6) = transform_param;
    transform_param = *(uint64_t *)(input_matrix + 10);
    *(uint64_t *)(output_matrix + 8) = *(uint64_t *)(input_matrix + 8);
    *(uint64_t *)(output_matrix + 10) = transform_param;
    transform_param = *(uint64_t *)(input_matrix + 0xe);
    *(uint64_t *)(output_matrix + 0xc) = *(uint64_t *)(input_matrix + 0xc);
    *(uint64_t *)(output_matrix + 0xe) = transform_param;
  }
  else {
    transform_element_18 = matrix_ptr[0x20];
    transform_element_28 = (matrix_ptr[0x24] - transform_element_18) * matrix_ptr[0x2d] + transform_element_18;
    if (transform_element_28 <= transform_element_31) {
      transform_element_18 = matrix_ptr[0x14];
      transform_element_22 = matrix_ptr[0x15];
      transform_element_33 = matrix_ptr[0x16];
      transform_element_26 = matrix_ptr[0x10];
      transform_element_27 = matrix_ptr[0x11];
      transform_element_34 = matrix_ptr[0x12];
      transform_element_35 = matrix_ptr[0x18];
      transform_element_36 = matrix_ptr[0x19];
      transform_element_37 = matrix_ptr[0x1a];
      transform_element_38 = (transform_element_31 - transform_element_28) / (matrix_ptr[0x24] - transform_element_28);
      transform_element_39 = transform_element_23 * transform_element_18 + transform_element_22 * transform_element_26 + transform_element_24 * transform_element_35;
      transform_element_40 = transform_element_23 * transform_element_22 + transform_element_22 * transform_element_27 + transform_element_24 * transform_element_36;
      transform_element_41 = transform_element_23 * transform_element_33 + transform_element_22 * transform_element_34 + transform_element_24 * transform_element_37;
      transform_element_42 = transform_element_26 * transform_element_18 + transform_element_20 * transform_element_26 + transform_element_27 * transform_element_35;
      transform_element_43 = transform_element_26 * transform_element_22 + transform_element_20 * transform_element_27 + transform_element_27 * transform_element_36;
      transform_element_44 = transform_element_26 * transform_element_33 + transform_element_20 * transform_element_34 + transform_element_27 * transform_element_37;
      transform_element_45 = transform_element_29 * transform_element_18 + transform_element_17 * transform_element_26 + transform_element_30 * transform_element_35;
      transform_element_46 = transform_element_29 * transform_element_22 + transform_element_17 * transform_element_27 + transform_element_30 * transform_element_36;
      transform_element_47 = transform_element_29 * transform_element_33 + transform_element_17 * transform_element_34 + transform_element_30 * transform_element_37;
      transform_element_26 = transform_element_32 * transform_element_18 + transform_element_31 * transform_element_26 + transform_element_25 * transform_element_35;
      transform_element_27 = transform_element_32 * transform_element_22 + transform_element_31 * transform_element_27 + transform_element_25 * transform_element_36;
      transform_element_33 = transform_element_32 * transform_element_33 + transform_element_31 * transform_element_34 + transform_element_25 * transform_element_37;
      transform_element_18 = matrix_ptr[0x1c];
      transform_element_28 = matrix_ptr[0x1d];
      transform_element_22 = matrix_ptr[0x1e];
    }
    else {
      transform_element_22 = matrix_ptr[4];
      transform_element_33 = matrix_ptr[5];
      transform_element_34 = matrix_ptr[6];
      transform_element_26 = *matrix_ptr;
      transform_element_27 = matrix_ptr[1];
      transform_element_35 = matrix_ptr[2];
      transform_element_36 = matrix_ptr[8];
      transform_element_37 = matrix_ptr[9];
      transform_element_48 = matrix_ptr[10];
      transform_element_39 = transform_element_23 * transform_element_22 + transform_element_22 * transform_element_26 + transform_element_24 * transform_element_36;
      transform_element_40 = transform_element_23 * transform_element_33 + transform_element_22 * transform_element_27 + transform_element_24 * transform_element_37;
      transform_element_41 = transform_element_23 * transform_element_34 + transform_element_22 * transform_element_35 + transform_element_24 * transform_element_48;
      transform_element_38 = (transform_element_28 - transform_element_31) / (transform_element_28 - transform_element_18);
      transform_element_42 = transform_element_26 * transform_element_22 + transform_element_20 * transform_element_26 + transform_element_27 * transform_element_36;
      transform_element_43 = transform_element_26 * transform_element_33 + transform_element_20 * transform_element_27 + transform_element_27 * transform_element_37;
      transform_element_44 = transform_element_26 * transform_element_34 + transform_element_20 * transform_element_35 + transform_element_27 * transform_element_48;
      transform_element_45 = transform_element_29 * transform_element_22 + transform_element_17 * transform_element_26 + transform_element_30 * transform_element_36;
      transform_element_46 = transform_element_29 * transform_element_33 + transform_element_17 * transform_element_27 + transform_element_30 * transform_element_37;
      transform_element_47 = transform_element_29 * transform_element_34 + transform_element_17 * transform_element_35 + transform_element_30 * transform_element_48;
      transform_element_26 = transform_element_32 * transform_element_22 + transform_element_31 * transform_element_26 + transform_element_25 * transform_element_36;
      transform_element_27 = transform_element_32 * transform_element_33 + transform_element_31 * transform_element_27 + transform_element_25 * transform_element_37;
      transform_element_33 = transform_element_32 * transform_element_34 + transform_element_31 * transform_element_35 + transform_element_25 * transform_element_48;
      transform_element_18 = matrix_ptr[0xc];
      transform_element_28 = matrix_ptr[0xd];
      transform_element_22 = matrix_ptr[0xe];
    }
    transform_element_34 = 1.0 - transform_element_38;
    transform_element_24 = transform_element_41 * transform_element_38 + transform_element_24 * transform_element_34;
    transform_element_35 = transform_element_42 * transform_element_38 + transform_element_20 * transform_element_34;
    transform_element_20 = transform_element_39 * transform_element_38 + transform_element_22 * transform_element_34;
    transform_element_26 = transform_element_34 * transform_element_31 + (transform_element_26 + transform_element_18) * transform_element_38;
    transform_element_28 = (transform_element_27 + transform_element_28) * transform_element_38 + transform_element_32 * transform_element_34;
    transform_element_18 = transform_element_40 * transform_element_38 + transform_element_23 * transform_element_34;
    transform_element_31 = (transform_element_33 + transform_element_22) * transform_element_38 + transform_element_25 * transform_element_34;
    transform_element_25 = transform_element_43 * transform_element_38 + transform_element_26 * transform_element_34;
    transform_element_22 = transform_element_44 * transform_element_38 + transform_element_27 * transform_element_34;
    transform_element_23 = transform_element_45 * transform_element_38 + transform_element_29 * transform_element_34;
    transform_element_29 = transform_element_46 * transform_element_38 + transform_element_17 * transform_element_34;
    transform_element_17 = transform_element_47 * transform_element_38 + transform_element_30 * transform_element_34;
    transform_element_30 = transform_element_18 * transform_element_14 + transform_element_20 * transform_element_9 + transform_element_24 * transform_element_1;
    output_matrix[1] = transform_element_18 * transform_element_16 + transform_element_20 * transform_element_12 + transform_element_24 * transform_element_4;
    output_matrix[2] = transform_element_18 * transform_element_15 + transform_element_20 * transform_element_13 + transform_element_24 * transform_element_3;
    output_matrix[3] = transform_element_18 * transform_element_8 + transform_element_20 * transform_element_12 + transform_element_24 * transform_element_6;
    output_matrix[4] = transform_element_25 * transform_element_16 + transform_element_35 * transform_element_9 + transform_element_22 * transform_element_1;
    output_matrix[5] = transform_element_25 * transform_element_14 + transform_element_35 * transform_element_12 + transform_element_22 * transform_element_4;
    output_matrix[6] = transform_element_25 * transform_element_15 + transform_element_35 * transform_element_13 + transform_element_22 * transform_element_3;
    output_matrix[7] = transform_element_25 * transform_element_8 + transform_element_35 * transform_element_12 + transform_element_22 * transform_element_6;
    output_matrix[8] = transform_element_29 * transform_element_16 + transform_element_23 * transform_element_9 + transform_element_17 * transform_element_1;
    output_matrix[9] = transform_element_29 * transform_element_14 + transform_element_23 * transform_element_12 + transform_element_17 * transform_element_4;
    output_matrix[10] = transform_element_29 * transform_element_15 + transform_element_23 * transform_element_13 + transform_element_17 * transform_element_3;
    output_matrix[0xb] = transform_element_29 * transform_element_8 + transform_element_23 * transform_element_12 + transform_element_17 * transform_element_6;
    output_matrix[0xc] = transform_element_28 * transform_element_16 + transform_element_26 * transform_element_9 + transform_element_31 * transform_element_1 + transform_element_5;
    output_matrix[0xd] = transform_element_28 * transform_element_14 + transform_element_26 * transform_element_12 + transform_element_31 * transform_element_4 + transform_element_6;
    output_matrix[0xe] = transform_element_28 * transform_element_15 + transform_element_26 * transform_element_13 + transform_element_31 * transform_element_3 + transform_element_7;
    output_matrix[0xf] = transform_element_28 * transform_element_8 + transform_element_26 * transform_element_12 + transform_element_31 * transform_element_6 + transform_element_8;
  }
  return output_matrix;
}