/**
 * 渲染系统高级初始化和配置模块
 * 
 * 本模块包含渲染系统的高级初始化、配置、资源管理和数据处理等功能
 * 涉及渲染系统初始化、资源分配、内存管理、状态配置等核心功能
 * 
 * 作者: Claude
 * 创建时间: 2025-08-28
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include <math.h>

// 渲染配置常量定义
#define RENDER_CONFIG_FLAG_INITIALIZED  0x00000001
#define RENDER_CONFIG_FLAG_ACTIVE       0x00000002
#define RENDER_CONFIG_FLAG_VALID        0x00000004

// 内存管理常量
#define RENDER_MEMORY_POOL_SIZE         0x1c58
#define RENDER_MEMORY_ALIGNMENT         0x10
#define RENDER_MAX_INITIALIZATION_SIZE  0x100

// 渲染状态常量
#define RENDER_STATE_UNINITIALIZED      0x00000000
#define RENDER_STATE_INITIALIZING       0x00000001
#define RENDER_STATE_READY             0x00000002
#define RENDER_STATE_ACTIVE            0x00000003

// 渲染上下文结构体
typedef struct {
    void* device_context;
    void* render_surface;
    uint32_t config_flags;
    uint32_t state_flags;
    void* resource_pool;
    void* memory_manager;
    uint32_t initialization_count;
    char render_name[64];
} RenderContext;

// 渲染配置结构体
typedef struct {
    uint32_t initialization_params[0x100];
    uint32_t config_params[0x100];
    uint32_t state_params[0x100];
    void* function_table;
    uint32_t active_flags;
} RenderConfig;

// 渲染资源管理器结构体
typedef struct {
    void* resource_data;
    uint32_t resource_size;
    uint32_t resource_flags;
    uint32_t reference_count;
    void* allocation_table;
} RenderResourceManager;

// 全局渲染上下文
static RenderContext* g_render_context = NULL;

/**
 * @brief 渲染系统高级初始化器
 * @param param_1 渲染上下文指针
 * @param param_2 初始化参数
 * 
 * 该函数初始化渲染系统的高级配置和资源
 * 设置渲染参数、分配内存资源、初始化状态变量
 */
// 函数：渲染系统高级初始化
// 功能：初始化渲染系统的各个组件，设置互斥锁、分配内存、初始化参数
void rendering_system_advanced_initialize(uint64_t *render_context, int init_param)

{
  int8_t local_var_1;
  longlong local_long_1;
  uint local_uint_1;
  uint local_uint_2;
  void *local_ptr_1;
  int8_t local_stack_array_1 [32];
  uint64_t *local_stack_ptr_1;
  uint64_t local_stack_var_1;
  uint64_t *local_stack_ptr_2;
  void *local_stack_ptr_3;
  void *local_stack_ptr_4;
  int32_t local_stack_var_2;
  uint8_t local_stack_array_2 [32];
  void *local_stack_ptr_5;
  int8_t *local_stack_ptr_6;
  int32_t local_stack_var_3;
  int8_t local_stack_array_3 [32];
  ulonglong local_stack_var_4;
  longlong local_long_2;
  
  // 初始化堆栈变量
  local_stack_var_1 = 0xfffffffffffffffe;
  local_stack_var_4 = _DAT_180bf00a8 ^ (ulonglong)local_stack_array_1;
  
  // 设置渲染上下文指针
  *render_context = &unknown_var_3952_ptr;
  local_uint_2 = 0;
  render_context[1] = 0;
  render_context[2] = 0;
  render_context[3] = 0;
  *(int32_t *)(render_context + 4) = 3;
  *render_context = &unknown_var_3832_ptr;
  render_context[0xd] = 0;
  render_context[0xe] = 0;
  
  // 初始化互斥锁
  LOCK();
  *(int32_t *)(render_context + 0xf) = 0;
  UNLOCK();
  
  // 初始化渲染状态数组 (256个元素)
  local_uint_1 = local_uint_2;
  do {
    render_context[(longlong)(int)local_uint_1 + 0x10] = 0;
    LOCK();
    *(int8_t *)((longlong)render_context + (longlong)(int)local_uint_1 + 0x880) = 1;
    UNLOCK();
    local_uint_1 = local_uint_1 + 1;
  } while (local_uint_1 < 0x100);
  
  // 初始化渲染参数数组 (256个元素)
  LOCK();
  *(int32_t *)(render_context + 0x130) = 0;
  UNLOCK();
  local_uint_1 = local_uint_2;
  do {
    render_context[(longlong)(int)local_uint_1 + 0x131] = 0;
    LOCK();
    *(int8_t *)((longlong)render_context + (longlong)(int)local_uint_1 + 0x1188) = 1;
    UNLOCK();
    local_uint_1 = local_uint_1 + 1;
  } while (local_uint_1 < 0x100);
  
  // 初始化渲染资源数组 (256个元素)
  LOCK();
  *(int32_t *)(render_context + 0x251) = 0;
  UNLOCK();
  do {
    render_context[(longlong)(int)local_uint_2 + 0x252] = 0;
    LOCK();
    *(int8_t *)((longlong)render_context + (longlong)(int)local_uint_2 + 0x1a90) = 1;
    UNLOCK();
    local_uint_2 = local_uint_2 + 1;
  } while (local_uint_2 < 0x100);
  
  // 初始化渲染缓冲区
  render_context[0x372] = 0;
  render_context[0x373] = 0;
  render_context[0x374] = 0;
  *(int32_t *)(render_context + 0x375) = 3;
  
  // 初始化互斥锁结构
  local_stack_ptr_1 = render_context + 0x376;
  local_stack_ptr_2 = render_context;
  _Mtx_init_in_situ(local_stack_ptr_1, 2);
  
  // 初始化渲染资源管理器
  local_stack_ptr_1 = render_context + 0x380;
  *local_stack_ptr_1 = &unknown_var_720_ptr;
  render_context[0x381] = 0;
  *(int32_t *)(render_context + 0x382) = 0;
  *local_stack_ptr_1 = &unknown_var_672_ptr;
  render_context[0x381] = render_context + 899;
  *(int32_t *)(render_context + 0x382) = 0;
  *(int8_t *)(render_context + 899) = 0;
  *(uint64_t *)((longlong)render_context + 0x1c3c) = 0;
  render_context[0x389] = 0;
  
  // 初始化渲染字符串处理
  local_stack_ptr_5 = &unknown_var_672_ptr;
  local_stack_ptr_6 = local_stack_array_3;
  local_stack_array_3[0] = 0;
  local_stack_var_3 = 0x15;
  strcpy_s(local_stack_array_3, 0x20, &unknown_var_3800_ptr);
  local_var_1 = FUN_180051f00(_DAT_180c86870, &local_stack_ptr_5);
  *(int8_t *)(render_context + 0x38a) = local_var_1;
  
  // 初始化渲染资源处理器
  local_stack_ptr_5 = &unknown_var_720_ptr;
  FUN_1803073e0(render_context);
  *(int *)(render_context + 0x387) = init_param;
  
  // 初始化渲染配置参数
  local_stack_ptr_3 = &unknown_var_672_ptr;
  local_stack_ptr_4 = local_stack_array_2;
  local_stack_array_2[0] = 0;
  local_stack_var_2 = 0xc;
  strcpy_s(local_stack_array_2, 0x20, &unknown_var_3784_ptr);
  *(int32_t *)(render_context + 0x382) = local_stack_var_2;
  
  // 处理渲染字符串配置
  local_ptr_1 = &system_buffer_ptr;
  if (local_stack_ptr_4 != (void *)0x0) {
    local_ptr_1 = local_stack_ptr_4;
  }
  strcpy_s(render_context[0x381], 0x20, local_ptr_1);
  local_stack_ptr_3 = &unknown_var_720_ptr;
  
  // 处理渲染参数字符串
  local_long_1 = -1;
  do {
    local_long_2 = local_long_1;
    local_long_1 = local_long_2 + 1;
  } while (*(char *)(*(longlong *)(&unknown_var_6504_ptr + (longlong)init_param * 8) + local_long_1) != '\0');
  
  // 复制渲染参数字符串
  if ((0 < (int)local_long_1) && (*(uint *)(render_context + 0x382) + (int)local_long_1 < 0x1f)) {
    memcpy((ulonglong)*(uint *)(render_context + 0x382) + render_context[0x381],
           *(longlong *)(&unknown_var_6504_ptr + (longlong)init_param * 8), (longlong)((int)local_long_2 + 2));
  }
  
  // 清理初始化状态
  *(uint64_t *)((longlong)render_context + 0x1c3c) = 0;
  FUN_1808fc050(local_stack_var_4 ^ (ulonglong)local_stack_array_1);
}

/**
 * @brief 渲染系统资源释放器
 * @param param_1 资源指针
 * @param param_2 释放标志
 * @return 释放后的资源指针
 * 
 * 该函数释放渲染系统的资源
 * 根据释放标志决定是否释放内存资源
 */
// 函数：渲染系统资源清理器
// 功能：清理渲染系统资源，释放内存，处理资源释放逻辑
uint64_t rendering_system_cleanup_resources(uint64_t render_context, ulonglong cleanup_flags)

{
  // 调用资源清理函数
  FUN_180307090();
  
  // 根据清理标志释放内存
  if ((cleanup_flags & 1) != 0) {
    free(render_context, 0x1c58);
  }
  return render_context;
}

/**
 * @brief 渲染系统上下文清理器
 * @param param_1 渲染上下文指针
 * @param param_2 清理参数
 * @param param_3 附加参数
 * @param param_4 配置参数
 * 
 * 该函数清理渲染系统的上下文和资源
 * 释放内存、清理状态、重置配置
 */
// 函数：渲染系统高级资源清理
// 功能：执行高级资源清理操作，包括内存释放、互斥锁销毁、状态重置
void rendering_system_advanced_cleanup(uint64_t *render_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong *local_ptr_1;
  longlong local_long_1;
  longlong local_long_2;
  uint64_t local_var_1;
  
  local_var_1 = 0xfffffffffffffffe;
  *render_context = &unknown_var_3832_ptr;
  
  // 执行资源清理预处理
  FUN_180306c30();
  
  // 计算资源块大小
  local_ptr_1 = render_context + 0x372;
  local_long_2 = render_context[0x373] - *local_ptr_1 >> 3;
  if (local_long_2 == 0) {
    local_long_2 = 0;
  }
  else {
    // 分配内存用于资源转移
    local_long_2 = FUN_18062b420(_DAT_180c8ed18, local_long_2 * 8, *(uint *)(render_context + 0x375) & 0xff, param_4, local_var_1);
  }
  
  // 转移资源数据
  local_long_1 = *local_ptr_1;
  if (local_long_1 != render_context[0x373]) {
    memmove(local_long_2, local_long_1, render_context[0x373] - local_long_1);
  }
  
  // 释放转移后的内存
  if (local_long_2 != 0) {
    FUN_18064e900(local_long_2);
  }
  
  // 执行回调函数
  if ((longlong *)render_context[0x389] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0x389] + 0x38))();
  }
  
  // 重置渲染资源管理器
  render_context[0x380] = &unknown_var_720_ptr;
  _Mtx_destroy_in_situ();
  
  // 清理核心资源
  if (*local_ptr_1 == 0) {
    FUN_1800e7d00(render_context + 0x251);
    FUN_1800e7d00(render_context + 0x130);
    FUN_1800e7d00(render_context + 0xf);
    if ((longlong *)render_context[0xe] != (longlong *)0x0) {
      (**(code **)(*(longlong *)render_context[0xe] + 0x38))();
    }
    if ((longlong *)render_context[0xd] != (longlong *)0x0) {
      (**(code **)(*(longlong *)render_context[0xd] + 0x38))();
    }
    *render_context = &unknown_var_3952_ptr;
    if (render_context[1] == 0) {
      return;
    }
    FUN_18064e900();
  }
  FUN_18064e900();
}

/**
 * @brief 渲染系统数据配置器
 * @param param_1 渲染上下文指针
 * @param param_2 配置参数
 * @param param_3 数据参数
 * @param param_4 标志参数
 * 
 * 该函数配置渲染系统的数据和参数
 * 处理渲染参数、数据转换、状态更新等操作
 */
// 函数：渲染系统高级数据处理
// 功能：处理渲染系统的高级数据操作，包括数据转换、内存管理、队列处理
void rendering_system_advanced_data_processor(longlong render_context, uint64_t param_2, uint64_t param_3, int8_t param_4)

{
  int32_t *local_ptr_1;
  int32_t *local_ptr_2;
  longlong local_long_1;
  uint64_t local_var_1;
  uint64_t *local_ptr_3;
  uint64_t *local_ptr_4;
  longlong local_long_2;
  uint64_t *local_ptr_5;
  int32_t *local_ptr_6;
  int local_int_1;
  longlong local_stack_var_1;
  int32_t local_var_2;
  longlong local_stack_var_2;
  longlong local_stack_var_3;
  longlong local_stack_var_4;
  uint local_stack_var_5;
  int8_t local_stack_array_1 [32];
  int32_t local_stack_var_6;
  int32_t local_stack_var_7;
  int32_t local_stack_var_8;
  int8_t local_stack_var_9;
  int8_t local_stack_var_10;
  uint64_t local_stack_var_11;
  
  // 计算数据块大小
  local_long_2 = ((longlong)_DAT_180bfaea8 - (longlong)_DAT_180bfaea0) / 0x38;
  local_stack_var_5 = _DAT_180bfaeb8;
  if (local_long_2 == 0) {
    local_long_1 = 0;
  }
  else {
    // 分配内存用于数据处理
    local_long_1 = FUN_18062b420(_DAT_180c8ed18, local_long_2 * 0x38, _DAT_180bfaeb8 & 0xff, param_4, 0, 0xfffffffffffffffe);
  }
  
  // 处理数据块
  local_ptr_2 = _DAT_180bfaea8;
  local_stack_var_4 = local_long_2 * 0x38 + local_long_1;
  local_stack_var_2 = local_long_1;
  if (_DAT_180bfaea0 != _DAT_180bfaea8) {
    local_ptr_6 = _DAT_180bfaea0 + 9;
    local_stack_var_3 = local_long_1;
    do {
      // 复制数据块
      FUN_180627ae0(local_long_1, local_ptr_6 + -9);
      *(int32_t *)(local_long_1 + 0x20) = local_ptr_6[-1];
      *(int32_t *)(local_long_1 + 0x24) = *local_ptr_6;
      *(int32_t *)(local_long_1 + 0x28) = local_ptr_6[1];
      *(int8_t *)(local_long_1 + 0x2c) = *(int8_t *)(local_ptr_6 + 2);
      *(int8_t *)(local_long_1 + 0x2d) = *(int8_t *)((longlong)local_ptr_6 + 9);
      *(uint64_t *)(local_long_1 + 0x30) = *(uint64_t *)(local_ptr_6 + 3);
      local_long_1 = local_long_1 + 0x38;
      local_ptr_1 = local_ptr_6 + 5;
      local_ptr_6 = local_ptr_6 + 0xe;
    } while (local_ptr_1 != local_ptr_2);
  }
  
  // 处理数据队列
  local_var_2 = 1;
  local_int_1 = 0;
  local_stack_var_3 = local_long_1;
  if ((local_long_1 - local_stack_var_2) / 0x38 != 0) {
    local_stack_var_1 = 0;
    do {
      // 分配队列内存
      local_var_1 = FUN_18062b1e0(_DAT_180c8ed18, 0x560, 8, 3, local_var_2);
      local_long_2 = local_stack_var_1 + local_stack_var_2;
      
      // 处理队列数据
      FUN_180627ae0(local_stack_array_1, local_long_2);
      local_stack_var_6 = *(int32_t *)(local_long_2 + 0x20);
      local_stack_var_7 = *(int32_t *)(local_long_2 + 0x24);
      local_stack_var_8 = *(int32_t *)(local_long_2 + 0x28);
      local_stack_var_9 = *(int8_t *)(local_long_2 + 0x2c);
      local_stack_var_10 = *(int8_t *)(local_long_2 + 0x2d);
      local_stack_var_11 = *(uint64_t *)(local_long_2 + 0x30);
      
      // 处理数据项
      local_var_1 = FUN_1803a6710(local_var_1, local_stack_array_1);
      local_ptr_5 = *(uint64_t **)(render_context + 0x1b98);
      
      // 管理队列空间
      if (local_ptr_5 < *(uint64_t **)(render_context + 0x1ba0)) {
        *(uint64_t **)(render_context + 0x1b98) = local_ptr_5 + 1;
        *local_ptr_5 = local_var_1;
      }
      else {
        // 扩展队列空间
        local_ptr_4 = *(uint64_t **)(render_context + 0x1b90);
        local_long_2 = (longlong)local_ptr_5 - (longlong)local_ptr_4 >> 3;
        if (local_long_2 == 0) {
          local_long_2 = 1;
        LAB_1803075e0:
          local_ptr_3 = (uint64_t *)
                   FUN_18062b420(_DAT_180c8ed18, local_long_2 * 8, *(int8_t *)(render_context + 0x1ba8));
          local_ptr_5 = *(uint64_t **)(render_context + 0x1b98);
          local_ptr_4 = *(uint64_t **)(render_context + 0x1b90);
        }
        else {
          local_long_2 = local_long_2 * 2;
          if (local_long_2 != 0) goto LAB_1803075e0;
          local_ptr_3 = (uint64_t *)0x0;
        }
        
        // 移动队列数据
        if (local_ptr_4 != local_ptr_5) {
          memmove(local_ptr_3, local_ptr_4, (longlong)local_ptr_5 - (longlong)local_ptr_4);
        }
        *local_ptr_3 = local_var_1;
        if (*(longlong *)(render_context + 0x1b90) != 0) {
          FUN_18064e900();
        }
        *(uint64_t **)(render_context + 0x1b90) = local_ptr_3;
        *(uint64_t **)(render_context + 0x1b98) = local_ptr_3 + 1;
        *(uint64_t **)(render_context + 0x1ba0) = local_ptr_3 + local_long_2;
      }
      
      local_int_1 = local_int_1 + 1;
      local_stack_var_1 = local_stack_var_1 + 0x38;
    } while ((ulonglong)(longlong)local_int_1 < (ulonglong)((local_stack_var_3 - local_stack_var_2) / 0x38));
  }
  
  // 完成数据处理
  FUN_180309520(&local_stack_var_2);
  return;
}

/**
 * @brief 渲染系统参数计算器
 * @param param_1 渲染上下文指针
 * @param param_2 参数数据指针
 * @param param_3 输出参数指针
 * @param param_4 输出数据指针
 * @param param_5 计算参数
 * @param param_6 浮点参数1
 * @param param_7 浮点参数2
 * 
 * 该函数计算渲染系统的参数和数据
 * 处理复杂的参数计算、数据转换、状态更新等操作
 */
void render_system_parameter_calculator(longlong param_1, longlong *param_2, uint64_t *param_3, uint64_t *param_4,
                                      longlong param_5, float param_6, float param_7) {
    if (!param_1 || !param_2 || !param_3 || !param_4) {
        return;
    }
    
    // 获取渲染数据
    void* render_data = get_render_data_from_context(param_2);
    
    // 提取基本参数
    float param_x = *(float *)(render_data + 2);
    float param_y = *(float *)((longlong)render_data + 0x14);
    float param_z = *(float *)(render_data + 3);
    uint32_t param_flags = *(int32_t *)((longlong)render_data + 0x1c);
    
    // 提取扩展参数
    uint64_t extended_param1 = render_data[6];
    uint64_t extended_param2 = render_data[7];
    uint64_t base_param1 = *render_data;
    uint64_t base_param2 = render_data[1];
    uint64_t base_param3 = render_data[4];
    uint64_t base_param4 = render_data[5];
    
    // 设置输出参数
    *param_4 = extended_param1;
    param_4[1] = extended_param2;
    
    // 计算距离参数
    float distance = sqrtf(param_x * param_x + param_y * param_y + param_z * param_z);
    *(float *)((longlong)param_4 + 0xc) = distance * 1.5f;
    
    // 处理渲染对象数据
    void* object_data = get_render_object_data(param_2);
    uint64_t object_params[8];
    
    // 提取对象参数
    object_params[0] = *object_data;
    object_params[1] = object_data[1];
    object_params[2] = object_data[2];
    object_params[3] = object_data[3];
    object_params[4] = object_data[4];
    object_params[5] = object_data[5];
    object_params[6] = object_data[6];
    object_params[7] = object_data[7];
    
    // 设置对象参数到输出
    param_4[2] = object_params[0];
    param_4[3] = object_params[1];
    param_4[4] = object_params[2];
    param_4[5] = object_params[3];
    param_4[6] = object_params[4];
    param_4[7] = object_params[5];
    param_4[8] = object_params[6];
    param_4[9] = object_params[7];
    
    // 设置基础参数到输出
    *param_3 = object_params[0];
    param_3[1] = object_params[1];
    param_3[8] = base_param1;
    param_3[9] = base_param2;
    *(float *)(param_3 + 10) = param_x;
    *(float *)((longlong)param_3 + 0x54) = param_y;
    *(float *)(param_3 + 0xb) = param_z;
    *(int32_t *)((longlong)param_3 + 0x5c) = param_flags;
    
    // 设置扩展参数到输出
    param_3[2] = object_params[2];
    param_3[3] = object_params[3];
    param_3[4] = object_params[4];
    param_3[5] = object_params[5];
    param_3[0xc] = base_param3;
    param_3[0xd] = base_param4;
    param_3[6] = object_params[6];
    param_3[7] = object_params[7];
    param_3[0xe] = extended_param1;
    param_3[0xf] = extended_param2;
    
    // 计算位置参数
    longlong position_param1, position_param2;
    if ((((*(float *)(param_2 + 10) == 0.0f) && (*(float *)((longlong)param_2 + 0x54) == 0.0f)) &&
        (*(float *)(param_2 + 0xb) == 0.0f)) && (*(float *)((longlong)param_2 + 0x5c) == 0.0f)) {
        position_param1 = 0x3f8000003f800000;
        position_param2 = 0;
    } else {
        position_param1 = param_2[10];
        position_param2 = param_2[0xb];
    }
    
    param_3[0x10] = position_param1;
    param_3[0x11] = position_param2;
    
    // 处理渲染状态参数
    longlong render_state = param_2[0x2b];
    uint32_t state_params[4];
    
    if (*(longlong *)(render_state + 0xb8) == 0) {
        state_params[0] = 0;
        state_params[1] = 0;
        state_params[2] = 0;
        state_params[3] = 0;
    } else {
        // 提取状态参数
        longlong state_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong state_data = *(longlong *)(*(longlong *)(render_state + 0xb8) + 0x280);
        
        if (*(char *)(state_data + state_index * 0x14) != '\0') {
            uint64_t state_value1 = *(uint64_t *)(state_data + 4 + state_index * 0x14);
            uint64_t state_value2 = *(uint64_t *)(state_data + 0xc + state_index * 0x14);
            state_params[0] = (int32_t)state_value1;
            state_params[1] = (int32_t)((ulonglong)state_value1 >> 0x20);
            state_params[2] = (int32_t)state_value2;
            state_params[3] = (int32_t)((ulonglong)state_value2 >> 0x20);
        }
    }
    
    // 设置状态参数到输出
    *(int32_t *)(param_3 + 0x12) = state_params[0];
    *(int32_t *)((longlong)param_3 + 0x94) = state_params[1];
    *(int32_t *)(param_3 + 0x13) = state_params[2];
    *(int32_t *)((longlong)param_3 + 0x9c) = state_params[3];
    
    // 处理附加参数
    uint64_t additional_params[2];
    if (((*(byte *)(param_2 + 0xe) & 2) == 0) || (*(longlong *)(render_state + 200) == 0)) {
        additional_params[0] = 0;
        additional_params[1] = 0;
    } else {
        longlong add_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong add_data = *(longlong *)(*(longlong *)(render_state + 200) + 0x280);
        
        if (*(char *)(add_data + add_index * 0x14) != '\0') {
            additional_params[1] = *(uint64_t *)(add_data + 4 + add_index * 0x14);
            additional_params[0] = *(uint64_t *)(add_data + 0xc + add_index * 0x14);
        }
    }
    
    param_3[0x16] = additional_params[0];
    param_3[0x17] = additional_params[1];
    
    // 处理扩展参数
    uint64_t extended_params[2];
    if (((*(byte *)(param_2 + 0xe) & 4) != 0) && (*(longlong *)(render_state + 0xd8) != 0)) {
        longlong ext_index = (longlong)*(int *)(param_1 + 0x1c38);
        longlong ext_data = *(longlong *)(*(longlong *)(render_state + 0xd8) + 0x280);
        
        if (*(char *)(ext_data + ext_index * 0x14) != '\0') {
            extended_params[1] = *(uint64_t *)(ext_data + 4 + ext_index * 0x14);
            extended_params[0] = *(uint64_t *)(ext_data + 0xc + ext_index * 0x14);
        }
    } else {
        extended_params[0] = 0;
        extended_params[1] = 0;
    }
    
    // 设置扩展参数到输出
    param_3[0x14] = extended_params[0];
    param_3[0x15] = extended_params[1];
    
    // 计算渲染参数
    float render_param1 = *(float *)(param_2 + 0x51);
    float render_param2 = *(float *)((longlong)param_2 + 0x28c);
    float scale_param1 = *(float *)(render_state + 0x2ac);
    float scale_param2 = *(float *)(render_state + 0x2b0);
    float alpha_param = 1.0f;
    
    // 设置渲染参数到输出
    *(float *)(param_3 + 0x1a) = *(float *)((longlong)param_2 + 0x284) * *(float *)(render_state + 0x2a8);
    *(float *)((longlong)param_3 + 0xd4) = render_param1 * scale_param1;
    *(float *)(param_3 + 0x1b) = render_param2 * scale_param2;
    *(int32_t *)((longlong)param_3 + 0xdc) = 0x7f7fffff;
    *(float *)((longlong)param_3 + 0xdc) = *(float *)(param_2 + 0x52) * *(float *)(render_state + 0x2b4);
    
    // 计算透明度参数
    if (0.0f < *(float *)((longlong)param_2 + 100)) {
        alpha_param = 1.0f - *(float *)(param_2 + 6) / (*(float *)((longlong)param_2 + 100) + 1e-9f);
        if (0.0f <= alpha_param) {
            if (1.0f <= alpha_param) {
                alpha_param = 1.0f;
            }
        } else {
            alpha_param = 0.0f;
        }
    }
    
    // 设置透明度参数
    float alpha_param2 = *(float *)(param_2 + 0xc);
    if (alpha_param2 == 0.0f) {
        alpha_param2 = *(float *)(render_state + 0x298);
    }
    *(float *)(param_3 + 0x1c) = alpha_param2 * alpha_param;
    
    // 计算距离衰减参数
    float coord_x = (float)((uint)extended_param1 >> 0x20);
    float coord_y = (float)extended_param1;
    float coord_z = (float)extended_param2;
    float distance_factor = -(((*(float *)(param_5 + 0x18) * coord_x + *(float *)(param_5 + 8) * coord_y +
                              *(float *)(param_5 + 0x28) * coord_z + *(float *)(param_5 + 0x38)) * param_7) /
                           distance;
    
    // 计算最终参数
    float float_param = (float)(((uint)distance_factor & 0x807fffff) + 0x3f800000);
    param_6 = (((2.0f - float_param * 0.33333334f) * float_param - 0.6666667f) +
              (float)(int)(((int)distance_factor >> 0x17 & 0xffU) - 0x80)) * param_6;
    
    if (param_6 <= 0.0f) {
        param_6 = 0.0f;
    }
    param_6 = param_6 + 1.0f;
    *(float *)((longlong)param_3 + 0xc4) = param_6;
    
    // 处理特殊渲染参数
    void* global_config = get_global_render_config();
    if (*(int *)(global_config + 0x700) == 1) {
        *(float *)((longlong)param_3 + 0xc4) = param_6 + param_6;
    }
    
    // 设置渲染状态参数
    *(int32_t *)(param_3 + 0x19) = *(int32_t *)(render_state + 0x278);
    *(int32_t *)((longlong)param_3 + 0xcc) = *(int32_t *)(render_state + 0x268);
    *(int32_t *)(param_3 + 0x18) = *(int32_t *)(render_state + 0x270);
    *(int32_t *)((longlong)param_3 + 0xe4) = *(int32_t *)(render_state + 0x274);
    
    // 处理渲染对象更新
    if (param_2[0x2d] != *(longlong *)(param_2[0x2b] + 0x140)) {
        update_render_object(param_2);
    }
    
    // 设置最终参数到输出
    longlong final_param1 = param_2[0x10];
    param_3[0x1e] = param_2[0xf];
    param_3[0x1f] = final_param1;
    
    // 处理可见性参数
    uint32_t visibility_param = 0;
    if (*(char *)((longlong)param_2 + 0x74) != '\0') {
        visibility_param = *(int32_t *)(param_2 + 0x15);
    }
    *(int32_t *)((longlong)param_3 + 0xfc) = visibility_param;
    
    // 处理渲染标志
    uint32_t render_flags = *(uint *)(param_2 + 0xe);
    if ((render_flags >> 0xb & 1) != 0) {
        float intensity_param = *(float *)((longlong)param_3 + 0xc4);
        if (3.0f <= intensity_param) {
            intensity_param = 3.0f;
        }
        *(float *)((longlong)param_3 + 0xc4) = intensity_param;
        render_flags = *(uint *)(param_2 + 0xe);
    }
    
    *(uint *)(param_3 + 0x1d) = render_flags;
    
    // 设置附加参数到输出
    longlong additional_param1 = param_2[0x12];
    param_3[0x20] = param_2[0x11];
    param_3[0x21] = additional_param1;
    
    longlong additional_param2 = param_2[0x14];
    param_3[0x22] = param_2[0x13];
    param_3[0x23] = additional_param2;
    
    longlong additional_param3 = param_2[0x16];
    param_3[0x24] = param_2[0x15];
    param_3[0x25] = additional_param3;
    
    longlong additional_param4 = param_2[0x18];
    param_3[0x26] = param_2[0x17];
    param_3[0x27] = additional_param4;
    
    longlong additional_param5 = param_2[0x1a];
    param_3[0x28] = param_2[0x19];
    param_3[0x29] = additional_param5;
    
    longlong additional_param6 = param_2[0x1c];
    param_3[0x2a] = param_2[0x1b];
    param_3[0x2b] = additional_param6;
    
    longlong additional_param7 = param_2[0x1e];
    param_3[0x2c] = param_2[0x1d];
    param_3[0x2d] = additional_param7;
    
    longlong additional_param8 = param_2[0x20];
    param_3[0x2e] = param_2[0x1f];
    param_3[0x2f] = additional_param8;
    
    longlong additional_param9 = param_2[0x22];
    param_3[0x30] = param_2[0x21];
    param_3[0x31] = additional_param9;
    
    longlong additional_param10 = param_2[0x24];
    param_3[0x32] = param_2[0x23];
    param_3[0x33] = additional_param10;
    
    longlong additional_param11 = param_2[0x26];
    param_3[0x34] = param_2[0x25];
    param_3[0x35] = additional_param11;
    
    // 处理特殊渲染标志
    if (((render_flags >> 0xc & 1) != 0) && (*(float *)(param_3 + 0x24) == 0.0f)) {
        *(uint *)(param_3 + 0x1d) = render_flags & 0xffffefff;
    }
}

// 辅助函数声明
static void acquire_render_lock(void);
static void release_render_lock(void);
static void initialize_render_mutex(void* mutex_ptr, int type);
static void destroy_render_mutex(void);
static void configure_render_name(uint64_t* context);
static void configure_render_system(uint64_t* context);
static void validate_render_initialization(uint64_t* context);
static void cleanup_temporary_initialization_resources(uint64_t security_key);
static void cleanup_render_resources(void);
static void cleanup_render_system_state(void);
static void* allocate_render_resource_data(size_t size, uint8_t flags, uint64_t param, uint64_t security_key);
static void release_render_resource_data(void* data);
static void execute_render_callback(uint64_t callback_ptr);
static void cleanup_render_parameter_block(uint64_t* param_block);
static void* get_render_data_from_context(longlong context);
static void process_render_config_data(void* config_data, void* source_data);
static void* allocate_render_config_data(size_t size, uint8_t flags, uint64_t param, uint64_t param2, uint64_t security_key);
static void process_render_config_item_data(void* config_data, void* item_data);
static void* process_render_config_item(void* config_item, void* config_data);
static void insert_config_item_to_context(uint64_t context, void* config_item);
static void cleanup_render_config_data(void* config_data);
static void* get_render_object_data(longlong* context);
static void* get_global_render_config(void);
static void update_render_object(longlong* context);