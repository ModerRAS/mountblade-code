/**
 * @file 99_part_14_part016.c
 * @brief NVIDIA NGX SDK D3D11 参数和特性管理模块
 * 
 * 本模块包含NVIDIA NGX SDK在DirectX 11环境下的参数管理、特性创建和评估功能。
 * 提供了完整的参数获取、设置、资源管理以及特性评估的API接口。
 * 
 * 主要功能：
 * - 参数管理（获取/设置各种类型的参数）
 * - 资源管理（D3D11资源的分配和销毁）
 * - 特性管理（创建、评估和销毁NGX特性）
 * - 线程本地存储管理
 * - 错误处理和状态验证
 * 
 * 涉及的技术：
 * - NVIDIA NGX SDK
 * - DirectX 11
 * - 线程本地存储（TLS）
 * - 函数指针调用
 * - 内存管理
 */

#include "TaleWorlds.Native.Split.h"

#include <string.h>
#include <stdint.h>

// =============================================================================
// 常量定义和宏
// =============================================================================

/** NGX SDK 错误代码：SDK未初始化 */
#define NGX_ERROR_SDK_NOT_INITIALIZED    0xBAD00007
/** NGX SDK 错误代码：函数指针无效 */
#define NGX_ERROR_INVALID_FUNCTION_PTR   0xBAD0000C

/** 内存清零大小常量（144字节） */
#define MEMORY_CLEAR_SIZE              0x90
/** 特性评估计数阈值 */
#define FEATURE_EVALUATION_THRESHOLD  3
/** 错误消息代码常量 */
#define ERROR_CODE_INITIALIZE_FAILED  0x3C
#define ERROR_CODE_CREATE_FAILED      0x45
#define ERROR_CODE_EVALUATE_FAILED    0x4F

/** TLS索引偏移量（64字节） */
#define TLS_INDEX_OFFSET              0x40
/** 参数结构体偏移量 */
#define PARAM_STRUCT_OFFSET_COUNT     0x92
#define PARAM_STRUCT_OFFSET_MIN_X     0x1B
#define PARAM_STRUCT_OFFSET_MIN_Y     0x1C
#define PARAM_STRUCT_OFFSET_MIN_Z     0x1D
#define PARAM_STRUCT_OFFSET_MAX_X     0x1E
#define PARAM_STRUCT_OFFSET_MAX_Y     0x1F
#define PARAM_STRUCT_OFFSET_MAX_Z     0x20
#define PARAM_STRUCT_OFFSET_SUM_X     0x21
#define PARAM_STRUCT_OFFSET_SUM_Y     0x22
#define PARAM_STRUCT_OFFSET_SUM_Z     0x23
#define PARAM_STRUCT_OFFSET_VALID_X   0x24
#define PARAM_STRUCT_OFFSET_TOLERANCE_X 0x17
#define PARAM_STRUCT_OFFSET_TOLERANCE_Y 0x18
#define PARAM_STRUCT_OFFSET_TOLERANCE_Z 0x19
#define PARAM_STRUCT_OFFSET_THRESHOLD_X 0x0B
#define PARAM_STRUCT_OFFSET_THRESHOLD_Y 0x0C
#define PARAM_STRUCT_OFFSET_THRESHOLD_Z 0x0D
#define PARAM_STRUCT_OFFSET_COUNT_VAL  0x13
#define PARAM_STRUCT_OFFSET_ACCUM_X   0x0F
#define PARAM_STRUCT_OFFSET_ACCUM_Y   0x10
#define PARAM_STRUCT_OFFSET_ACCUM_Z   0x11
#define PARAM_STRUCT_OFFSET_ACCUM_COUNT 0x12
#define PARAM_STRUCT_OFFSET_FLAGS     0x07

// =============================================================================
// 函数别名定义
// =============================================================================

/** 内存清零初始化器 */
#define memory_clear_initializer              FUN_1808f7cc0
/** 坐标数据处理器 */
#define coordinate_data_processor             FUN_1808f7ec0
/** 浮点参数处理器 */
#define float_parameter_processor            FUN_1808f7fdb
/** 未定义值返回器 */
#define undefined_value_returner              FUN_1808f829d
/** NGX参数获取器（双精度） */
#define ngx_parameter_get_double              NVSDK_NGX_Parameter_GetD
/** NGX参数获取器（D3D11资源） */
#define ngx_parameter_get_d3d11_resource     NVSDK_NGX_Parameter_GetD3d11Resource
/** NGX参数获取器（D3D12资源） */
#define ngx_parameter_get_d3d12_resource     NVSDK_NGX_Parameter_GetD3d12Resource
/** NGX参数获取器（浮点数） */
#define ngx_parameter_get_float              NVSDK_NGX_Parameter_GetF
/** NGX参数获取器（整数） */
#define ngx_parameter_get_integer            NVSDK_NGX_Parameter_GetI
/** NGX参数获取器（无符号整数） */
#define ngx_parameter_get_unsigned_integer   NVSDK_NGX_Parameter_GetUI
/** NGX参数获取器（无符号长整型） */
#define ngx_parameter_get_unsigned_long_long NVSDK_NGX_Parameter_GetULL
/** NGX参数获取器（空指针） */
#define ngx_parameter_get_void_pointer       NVSDK_NGX_Parameter_GetVoidPointer
/** NGX参数设置器（双精度） */
#define ngx_parameter_set_double              NVSDK_NGX_Parameter_SetD
/** NGX参数设置器（D3D11资源） */
#define ngx_parameter_set_d3d11_resource     NVSDK_NGX_Parameter_SetD3d11Resource
/** NGX参数设置器（D3D12资源） */
#define ngx_parameter_set_d3d12_resource     NVSDK_NGX_Parameter_SetD3d12Resource
/** NGX参数设置器（浮点数） */
#define ngx_parameter_set_float              NVSDK_NGX_Parameter_SetF
/** NGX参数设置器（整数） */
#define ngx_parameter_set_integer            NVSDK_NGX_Parameter_SetI
/** NGX参数设置器（无符号整数） */
#define ngx_parameter_set_unsigned_integer   NVSDK_NGX_Parameter_SetUI
/** NGX参数设置器（无符号长整型） */
#define ngx_parameter_set_unsigned_long_long NVSDK_NGX_Parameter_SetULL
/** NGX参数设置器（空指针） */
#define ngx_parameter_set_void_pointer       NVSDK_NGX_Parameter_SetVoidPointer
/** 线程安全函数调用器 */
#define thread_safe_function_caller         FUN_1808f88b0
/** 资源分配处理器 */
#define resource_allocation_handler         FUN_1808f8940
/** 特性评估处理器 */
#define feature_evaluation_handler         FUN_1808f89b5
/** 内存释放处理器 */
#define memory_release_handler              FUN_1808f8add
/** 线程回调执行器 */
#define thread_callback_executor            FUN_1808f8b00
/** 空操作处理器 */
#define empty_operation_processor           FUN_1808f8b9f
/** D3D11参数分配器 */
#define d3d11_parameter_allocator           NVSDK_NGX_D3D11_AllocateParameters
/** 参数释放查询器 */
#define parameter_release_queryer           FUN_1808f8b7e
/** D3D11特性创建器 */
#define d3d11_feature_creator               NVSDK_NGX_D3D11_CreateFeature
/** D3D11参数销毁器 */
#define d3d11_parameter_destroyer            NVSDK_NGX_D3D11_DestroyParameters
/** 参数销毁查询器 */
#define parameter_destroy_queryer            FUN_1808f8c4e
/** 空操作销毁器 */
#define empty_operation_destroyer           FUN_1808f8c6f
/** D3D11特性评估器 */
#define d3d11_feature_evaluator             NVSDK_NGX_D3D11_EvaluateFeature
/** D3D11特性评估器（兼容模式） */
#define d3d11_feature_evaluator_compatible  NVSDK_NGX_D3D11_EvaluateFeature_C
/** D3D11能力参数获取器 */
#define d3d11_capability_parameter_getter  NVSDK_NGX_D3D11_GetCapabilityParameters
/** 能力参数查询器 */
#define capability_parameter_queryer        FUN_1808f8d5e

// =============================================================================
// 内部函数声明
// =============================================================================

/** 内部回调函数 */
static void func_0x0001808f7c40(float param_1, float *param_2, uint64_t param_3);
/** 错误报告函数 */
static void FUN_1808fb790(void *param_1, int param_2, void *param_3, void *param_4);
/** 清理函数 */
static void FUN_1808fc050(uint64_t param_1);
/** 内部函数指针 */
static void *FUN_1808f8b00(void);

// =============================================================================
// 全局变量声明
// =============================================================================

/** 线程本地存储指针 */
extern void *ThreadLocalStoragePointer;
/** TLS索引 */
extern uint32_t __tls_index;

/** NGX SDK全局函数指针表 */
extern void *_DAT_180c69ec0;  // D3D11_AllocateParameters
extern void *_DAT_180c69ea8;  // D3D11_CreateFeature  
extern void *_DAT_180c69ed0;  // D3D11_DestroyParameters
extern void *_DAT_180c69eb0;  // D3D11_EvaluateFeature
extern void *_DAT_180c69ec8;  // D3D11_GetCapabilityParameters
extern void *_DAT_180c69e80;  // SDK初始化标志

/** 错误处理相关全局变量 */
extern void *UNK_18098a7d0;
extern void *UNK_18098a7b0;
extern void *UNK_18098a788;
extern void *UNK_18098a828;
extern void *UNK_18098a850;
extern void *UNK_180a026d0;
extern uint64_t _DAT_180bf00a8;

// =============================================================================
// 核心功能实现
// =============================================================================

/**
 * @brief 内存清零初始化器
 * 
 * 将指定内存区域清零，用于初始化数据结构或释放资源。
 * 
 * @param param_1 目标内存地址
 * 
 * @note 这是一个简化的内存初始化函数，使用memset进行内存清零操作
 * @warning 如果目标地址为NULL，函数直接返回
 * @warning 该函数不会返回（WARNING: Subroutine does not return）
 */
void memory_clear_initializer(int64_t param_1)
{
  if (param_1 != 0) {
    // 将内存区域清零，大小为144字节（0x90）
    memset((void *)(param_1 + 4), 0, MEMORY_CLEAR_SIZE);
  }
  return;
}

/**
 * @brief 坐标数据处理器
 * 
 * 处理3D坐标数据，包括坐标验证、范围检查、统计分析等功能。
 * 支持多种坐标模式和容错处理。
 * 
 * @param param_1 参数结构体指针
 * @param param_2 X坐标（短整型）
 * @param param_3 Y坐标（短整型）
 * @param param_4 Z坐标（短整型）
 * @param param_5 输出浮点数组指针
 * @param param_6 保留参数
 * 
 * @return int 处理结果，0表示失败，1表示成功
 * 
 * @note 该函数实现了复杂的坐标验证和统计计算逻辑
 * @note 支持最大值/最小值跟踪、平均值计算、容差检查等功能
 */
int coordinate_data_processor(int *param_1, int16_t param_2, int16_t param_3, int16_t param_4, 
                            float *param_5, uint64_t param_6)
{
  uint16_t count_var;
  int result_x;
  int result_y;
  int result_z;
  int temp_x;
  int temp_y;
  int temp_z;
  int sum_x;
  int sum_y;
  int sum_z;
  uint64_t unused_var;
  float avg_x;
  float avg_y;
  float avg_z;
  float variance_x;
  float variance_y;
  float variance_z;
  float deviation_x;
  float deviation_y;
  float deviation_z;
  
  // 初始化结果
  sum_x = 0;
  if (*param_1 == 0) {
    return 0;
  }
  
  // 更新计数器
  *(int16_t *)((int64_t)param_1 + PARAM_STRUCT_OFFSET_COUNT) = 
      *(int16_t *)((int64_t)param_1 + PARAM_STRUCT_OFFSET_COUNT) + 1;
  
  // 更新坐标总和
  result_x = (int)param_2;
  param_1[0x21] = param_1[0x21] + result_x;
  result_y = (int)param_3;
  param_1[0x22] = param_1[0x22] + result_y;
  result_z = (int)param_4;
  param_1[0x23] = param_1[0x23] + result_z;
  
  // 首次处理初始化
  if (*(int16_t *)((int64_t)param_1 + PARAM_STRUCT_OFFSET_COUNT) == 1) {
    param_1[PARAM_STRUCT_OFFSET_MIN_X] = result_x;
    param_1[PARAM_STRUCT_OFFSET_MIN_Y] = result_y;
    param_1[PARAM_STRUCT_OFFSET_MIN_Z] = result_z;
    param_1[PARAM_STRUCT_OFFSET_MAX_X] = result_x;
    param_1[PARAM_STRUCT_OFFSET_MAX_Y] = result_y;
    temp_x = result_x;
    temp_y = result_y;
    temp_z = result_z;
    sum_x = result_x;
    sum_y = result_y;
    sum_z = result_z;
  } else {
    // 更新最小值
    temp_x = param_1[PARAM_STRUCT_OFFSET_MIN_X];
    if (param_1[PARAM_STRUCT_OFFSET_MIN_X] < result_x) {
      param_1[PARAM_STRUCT_OFFSET_MIN_X] = result_x;
      temp_x = result_x;
    }
    
    // 更新最大值
    sum_y = param_1[PARAM_STRUCT_OFFSET_MAX_X];
    if (result_x < param_1[PARAM_STRUCT_OFFSET_MAX_X]) {
      param_1[PARAM_STRUCT_OFFSET_MAX_X] = result_x;
      sum_y = result_x;
    }
    
    // 更新Y坐标范围
    temp_y = param_1[PARAM_STRUCT_OFFSET_MIN_Y];
    if (param_1[PARAM_STRUCT_OFFSET_MIN_Y] < result_y) {
      param_1[PARAM_STRUCT_OFFSET_MIN_Y] = result_y;
      temp_y = result_y;
    }
    
    sum_z = param_1[PARAM_STRUCT_OFFSET_MAX_Y];
    if (result_y < param_1[PARAM_STRUCT_OFFSET_MAX_Y]) {
      param_1[PARAM_STRUCT_OFFSET_MAX_Y] = result_y;
      sum_z = result_y;
    }
    
    // 更新Z坐标范围
    result_y = sum_z;
    sum_z = param_1[PARAM_STRUCT_OFFSET_MIN_Z];
    if (param_1[PARAM_STRUCT_OFFSET_MIN_Z] < result_z) {
      param_1[PARAM_STRUCT_OFFSET_MIN_Z] = result_z;
      sum_z = result_z;
    }
    
    sum_x = param_1[PARAM_STRUCT_OFFSET_MAX_Z];
    if (result_z < param_1[PARAM_STRUCT_OFFSET_MAX_Z]) {
      param_1[PARAM_STRUCT_OFFSET_MAX_Z] = result_z;
      sum_x = result_z;
    }
  }
  
  // 验证坐标数量
  count_var = *(uint16_t *)(param_1 + PARAM_STRUCT_OFFSET_VALID_X);
  if (*(int16_t *)((int64_t)param_1 + PARAM_STRUCT_OFFSET_COUNT) != count_var) {
    return 0;
  }
  
  // 计算统计数据
  result_z = param_1[PARAM_STRUCT_OFFSET_COUNT_VAL];
  param_1[PARAM_STRUCT_OFFSET_COUNT_VAL] = result_z + 1;
  
  // 计算平均值
  avg_x = (float)count_var;
  avg_y = (float)param_1[PARAM_STRUCT_OFFSET_SUM_X] / avg_x;
  avg_z = (float)param_1[PARAM_STRUCT_OFFSET_SUM_Y] / avg_x;
  avg_x = (float)param_1[PARAM_STRUCT_OFFSET_SUM_Z] / avg_x;
  
  // 计算方差
  deviation_x = (avg_y - (float)temp_y) * (avg_y - (float)temp_y) +
                ((float)result_x - avg_y) * ((float)result_x - avg_y);
  deviation_y = (avg_z - (float)result_y) * (avg_z - (float)result_y) +
                ((float)sum_y - avg_z) * ((float)sum_y - avg_z);
  
  unused_var = 0;
  result_y = 1;
  deviation_z = (avg_x - (float)sum_x) * (avg_x - (float)sum_x) +
                ((float)sum_z - avg_x) * ((float)sum_z - avg_x);
  
  // 检查方差是否在容差范围内
  int variance_check = 0;
  if (((deviation_x < (float)param_1[PARAM_STRUCT_OFFSET_TOLERANCE_X]) && 
       (variance_check = 0, deviation_y < (float)param_1[PARAM_STRUCT_OFFSET_TOLERANCE_Y])) &&
      (variance_check = 0, deviation_z < (float)param_1[PARAM_STRUCT_OFFSET_TOLERANCE_Z])) {
    variance_check = result_y;
  }
  
  // 处理验证结果
  if ((variance_check == 0) || ((*(uint8_t *)(param_1 + PARAM_STRUCT_OFFSET_FLAGS) & 1) == 0)) {
    // 检查阈值条件
    if (((deviation_x < (float)param_1[PARAM_STRUCT_OFFSET_THRESHOLD_X]) &&
         ((deviation_y < (float)param_1[PARAM_STRUCT_OFFSET_THRESHOLD_Y] && 
           (deviation_z < (float)param_1[PARAM_STRUCT_OFFSET_THRESHOLD_Z])))) &&
        ((*(uint8_t *)(param_1 + PARAM_STRUCT_OFFSET_FLAGS) & 2) != 0)) {
      // 更新累积值
      param_1[PARAM_STRUCT_OFFSET_ACCUM_X] = param_1[PARAM_STRUCT_OFFSET_ACCUM_X] + param_1[PARAM_STRUCT_OFFSET_SUM_X];
      param_1[PARAM_STRUCT_OFFSET_ACCUM_Y] = param_1[PARAM_STRUCT_OFFSET_ACCUM_Y] + param_1[PARAM_STRUCT_OFFSET_SUM_Y];
      param_1[PARAM_STRUCT_OFFSET_ACCUM_Z] = param_1[PARAM_STRUCT_OFFSET_ACCUM_Z] + param_1[PARAM_STRUCT_OFFSET_SUM_Z];
      param_1[PARAM_STRUCT_OFFSET_ACCUM_COUNT] = param_1[PARAM_STRUCT_OFFSET_ACCUM_COUNT] + 1;
    }
    
    // 检查是否需要处理最终结果
    if (result_z + 1 != 6) {
      goto final_cleanup;
    }
    sum_x = 0;
    
    // 检查累积计数是否足够
    if (FEATURE_EVALUATION_THRESHOLD < (uint32_t)param_1[PARAM_STRUCT_OFFSET_ACCUM_COUNT]) {
      sum_x = param_1[PARAM_STRUCT_OFFSET_ACCUM_Y];
      result_z = param_1[PARAM_STRUCT_OFFSET_ACCUM_Z];
      
      // 计算最终平均值
      avg_y = (float)(param_1[PARAM_STRUCT_OFFSET_ACCUM_COUNT] * (uint32_t)count_var);
      deviation_y = (float)param_1[4] - (float)param_1[PARAM_STRUCT_OFFSET_ACCUM_X] / avg_y;
      avg_x = (float)param_1[8];
      avg_z = avg_x;
      if ((deviation_y <= avg_x) && (avg_z = -avg_x, -avg_x <= deviation_y)) {
        avg_z = deviation_y;
      }
      
      *param_5 = (float)param_1[4] - avg_z;
      avg_x = (float)param_1[9];
      deviation_y = (float)param_1[5] - (float)sum_x / avg_y;
      avg_z = avg_x;
      if ((deviation_y <= avg_x) && (avg_z = -avg_x, -avg_x <= deviation_y)) {
        avg_z = deviation_y;
      }
      
      param_5[1] = (float)param_1[5] - avg_z;
      avg_x = (float)param_1[10];
      avg_y = (float)param_1[6] - (float)result_z / avg_y;
      avg_z = avg_x;
      if ((avg_y <= avg_x) && (avg_z = -avg_x, -avg_x <= avg_y)) {
        avg_z = avg_y;
      }
      
      param_5[2] = (float)param_1[6] - avg_z;
      goto process_result;
    }
  } else {
    // 处理高精度模式
    deviation_y = (float)param_1[0x14];
    avg_z = (float)param_1[4] - avg_z;
    deviation_z = deviation_y;
    if ((avg_z <= deviation_y) && (deviation_z = -deviation_y, -deviation_y <= avg_z)) {
      deviation_z = avg_z;
    }
    
    *param_5 = (float)param_1[4] - deviation_z;
    avg_z = (float)param_1[0x15];
    avg_y = (float)param_1[5] - avg_y;
    deviation_y = avg_z;
    if ((avg_y <= avg_z) && (deviation_y = -avg_z, -avg_z <= avg_y)) {
      deviation_y = avg_y;
    }
    
    param_5[1] = (float)param_1[5] - deviation_y;
    avg_y = (float)param_1[0x16];
    avg_x = (float)param_1[6] - avg_x;
    avg_z = avg_y;
    if ((avg_x <= avg_y) && (avg_z = -avg_y, -avg_y <= avg_x)) {
      avg_z = avg_x;
    }
    
    param_5[2] = (float)param_1[6] - avg_z;
    
process_result:
    // 调用内部处理函数
    func_0x0001808f7c40(avg_z, param_5, param_6);
    param_1[4] = (int)*param_5;
    param_1[5] = (int)param_5[1];
    param_1[6] = (int)param_5[2];
    sum_x = result_y;
  }
  
  // 重置累积值
  param_1[PARAM_STRUCT_OFFSET_ACCUM_X] = 0;
  param_1[PARAM_STRUCT_OFFSET_ACCUM_Y] = 0;
  param_1[PARAM_STRUCT_OFFSET_ACCUM_Z] = 0;
  param_1[PARAM_STRUCT_OFFSET_ACCUM_COUNT] = (int)unused_var;
  
final_cleanup:
  // 重置所有统计值
  *(int16_t *)((int64_t)param_1 + PARAM_STRUCT_OFFSET_COUNT) = (int16_t)unused_var;
  param_1[PARAM_STRUCT_OFFSET_MIN_X] = 0;
  param_1[PARAM_STRUCT_OFFSET_MIN_Y] = 0;
  param_1[PARAM_STRUCT_OFFSET_MIN_Z] = 0;
  param_1[PARAM_STRUCT_OFFSET_MAX_X] = 0;
  param_1[PARAM_STRUCT_OFFSET_MAX_Y] = 0;
  param_1[PARAM_STRUCT_OFFSET_MAX_Z] = 0;
  param_1[PARAM_STRUCT_OFFSET_SUM_X] = 0;
  param_1[PARAM_STRUCT_OFFSET_SUM_Y] = 0;
  param_1[PARAM_STRUCT_OFFSET_SUM_Z] = 0;
  return sum_x;
}

/**
 * @brief 浮点参数处理器
 * 
 * 处理浮点参数的计算和验证，包括坐标变换、方差计算、阈值检查等功能。
 * 支持多种计算模式和错误处理。
 * 
 * @param param_1 参数结构体指针
 * @param param_2 输入浮点参数
 * @param param_3 X坐标参数
 * @param param_4 Y坐标参数
 * 
 * @return uint64_t 处理结果状态
 * 
 * @note 该函数实现了复杂的浮点计算和验证逻辑
 * @note 支持多种坐标变换和统计分析功能
 */
uint64_t float_parameter_processor(int64_t param_1, float param_2, int param_3, int param_4)
{
  int temp_result1;
  int temp_result2;
  bool validation_result;
  int unassigned_ebx;
  uint64_t unassigned_rbp;
  int unassigned_esi;
  int unassigned_edi;
  uint64_t unused_var1;
  int r10d_value;
  uint64_t result_flag;
  int r11d_value;
  int unassigned_r12d;
  int unassigned_r13d;
  int unassigned_r15d;
  float base_value;
  float coord_x;
  float coord_y;
  float coord_z;
  float variance_x;
  float variance_y;
  float variance_z;
  float variance_w;
  float variance_u;
  float variance_v;
  float *stack_param1;
  uint64_t stack_param2;
  
  // 计算基础坐标值
  base_value = (float)unassigned_ebx;
  variance_w = (float)*(int *)(param_1 + 0x84) / base_value;
  variance_v = (float)*(int *)(param_1 + 0x88) / base_value;
  base_value = (float)*(int *)(param_1 + 0x8c) / base_value;
  
  // 计算坐标方差
  variance_x = (variance_w - (float)r11d_value) * (variance_w - (float)r11d_value) +
               (param_2 - variance_w) * (param_2 - variance_w);
  variance_y = (variance_v - (float)r10d_value) * (variance_v - (float)r10d_value) +
               ((float)param_3 - variance_v) * ((float)param_3 - variance_v);
  
  unused_var1 = 0;
  result_flag = 1;
  variance_z = (base_value - (float)unassigned_esi) * (base_value - (float)unassigned_esi) +
               ((float)param_4 - base_value) * ((float)param_4 - base_value);
  
  // 验证方差是否在容差范围内
  validation_result = false;
  if (((variance_x < *(float *)(param_1 + 0x5c)) && 
       (validation_result = false, variance_y < *(float *)(param_1 + 0x60))) &&
      (validation_result = false, variance_z < *(float *)(param_1 + 100))) {
    validation_result = true;
  }
  
  // 处理验证结果
  if ((validation_result) && ((*(uint8_t *)(param_1 + 0x1c) & 1) != 0)) {
    variance_y = *(float *)(param_1 + 0x50);
    variance_w = *(float *)(param_1 + 0x10) - variance_w;
    variance_z = variance_y;
    if ((variance_w <= variance_y) && (variance_z = -variance_y, -variance_y <= variance_w)) {
      variance_z = variance_w;
    }
    
    *stack_param1 = *(float *)(param_1 + 0x10) - variance_z;
    variance_w = *(float *)(param_1 + 0x54);
    variance_v = *(float *)(param_1 + 0x14) - variance_v;
    variance_y = variance_w;
    if ((variance_v <= variance_w) && (variance_y = -variance_w, -variance_w <= variance_v)) {
      variance_y = variance_v;
    }
    
    stack_param1[1] = *(float *)(param_1 + 0x14) - variance_y;
    variance_v = *(float *)(param_1 + 0x58);
    base_value = *(float *)(param_1 + 0x18) - base_value;
    variance_w = variance_v;
    if ((base_value <= variance_v) && (variance_w = -variance_v, -variance_v <= base_value)) {
      variance_w = base_value;
    }
    
    stack_param1[2] = *(float *)(param_1 + 0x18) - variance_w;
    
process_result:
    // 调用内部处理函数
    func_0x0001808f7c40(variance_w, stack_param1, stack_param2);
    unassigned_rbp = result_flag & 0xffffffff;
    *(float *)(param_1 + 0x10) = *stack_param1;
    *(float *)(param_1 + 0x14) = stack_param1[1];
    *(float *)(param_1 + 0x18) = stack_param1[2];
  } else {
    // 检查次要条件
    if (((variance_x < *(float *)(param_1 + 0x2c)) &&
         ((variance_y < *(float *)(param_1 + 0x30) && 
           (variance_z < *(float *)(param_1 + 0x34))))) &&
        ((*(uint8_t *)(param_1 + 0x1c) & 2) != 0)) {
      // 更新累积值
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + unassigned_r15d;
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + unassigned_r12d;
      *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + unassigned_r13d;
      *(int *)(param_1 + 0x48) = *(int *)(param_1 + 0x48) + 1;
    }
    
    // 检查是否需要处理最终结果
    if (unassigned_edi != 6) {
      goto final_cleanup;
    }
    
    // 检查累积计数是否足够
    if (FEATURE_EVALUATION_THRESHOLD < *(uint32_t *)(param_1 + 0x48)) {
      temp_result1 = *(int *)(param_1 + 0x40);
      temp_result2 = *(int *)(param_1 + 0x44);
      
      variance_v = (float)(*(uint32_t *)(param_1 + 0x48) * unassigned_ebx);
      variance_y = *(float *)(param_1 + 0x10) - 
                   (float)*(int *)(param_1 + 0x3c) / variance_v;
      base_value = *(float *)(param_1 + 0x20);
      variance_w = base_value;
      if ((variance_y <= base_value) && (variance_w = -base_value, -base_value <= variance_y)) {
        variance_w = variance_y;
      }
      
      *stack_param1 = *(float *)(param_1 + 0x10) - variance_w;
      base_value = *(float *)(param_1 + 0x24);
      variance_y = *(float *)(param_1 + 0x14) - (float)temp_result1 / variance_v;
      variance_w = base_value;
      if ((variance_y <= base_value) && (variance_w = -base_value, -base_value <= variance_y)) {
        variance_w = variance_y;
      }
      
      stack_param1[1] = *(float *)(param_1 + 0x14) - variance_w;
      base_value = *(float *)(param_1 + 0x28);
      variance_v = *(float *)(param_1 + 0x18) - (float)temp_result2 / variance_v;
      variance_w = base_value;
      if ((variance_v <= base_value) && (variance_w = -base_value, -base_value <= variance_v)) {
        variance_w = variance_v;
      }
      
      stack_param1[2] = *(float *)(param_1 + 0x18) - variance_w;
      goto process_result;
    }
  }
  
  // 重置累积值
  *(uint64_t *)(param_1 + 0x3c) = 0;
  *(uint64_t *)(param_1 + 0x44) = 0;
  *(int *)(param_1 + 0x4c) = (int)unused_var1;
  
final_cleanup:
  // 重置所有统计值
  *(int16_t *)(param_1 + 0x92) = (int16_t)unused_var1;
  *(uint64_t *)(param_1 + 0x6c) = 0;
  *(uint32_t *)(param_1 + 0x74) = 0;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint32_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x84) = 0;
  *(uint32_t *)(param_1 + 0x8c) = 0;
  return unassigned_rbp & 0xffffffff;
}

/**
 * @brief 未定义值返回器
 * 
 * 返回一个未定义的值，主要用于测试和调试目的。
 * 
 * @return uint32_t 未定义的值
 * 
 * @note 这是一个简化的函数，仅用于占位符
 */
uint32_t undefined_value_returner(void)
{
  uint32_t unassigned_ebp;
  
  return unassigned_ebp;
}

// =============================================================================
// NGX SDK 参数管理功能
// =============================================================================

/**
 * @brief NGX参数获取器（双精度）
 * 
 * 从NGX参数结构体中获取双精度参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_double(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x68);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f831f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（D3D11资源）
 * 
 * 从NGX参数结构体中获取D3D11资源参数。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出资源指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_d3d11_resource(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x50);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f837f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（D3D12资源）
 * 
 * 从NGX参数结构体中获取D3D12资源参数。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出资源指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_d3d12_resource(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x48);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f83df. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（浮点数）
 * 
 * 从NGX参数结构体中获取浮点数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_float(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x70);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f843f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（整数）
 * 
 * 从NGX参数结构体中获取整数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_integer(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x58);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f849f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（无符号整数）
 * 
 * 从NGX参数结构体中获取无符号整数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_unsigned_integer(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x60);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f84ff. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（无符号长整型）
 * 
 * 从NGX参数结构体中获取无符号长整型参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_unsigned_long_long(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x78);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f855f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数获取器（空指针）
 * 
 * 从NGX参数结构体中获取空指针参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 输出参数指针
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_get_void_pointer(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x40);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f85bf. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（双精度）
 * 
 * 设置NGX参数结构体中的双精度参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_double(int64_t *param_1, uint64_t param_2, uint32_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x28);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f861d. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint32_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（D3D11资源）
 * 
 * 设置NGX参数结构体中的D3D11资源参数。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的资源
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_d3d11_resource(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x10);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f866f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（D3D12资源）
 * 
 * 设置NGX参数结构体中的D3D12资源参数。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的资源
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_d3d12_resource(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 8);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f86cf. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（浮点数）
 * 
 * 设置NGX参数结构体中的浮点数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_float(int64_t *param_1, uint64_t param_2, uint32_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x30);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f872d. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint32_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（整数）
 * 
 * 设置NGX参数结构体中的整数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_integer(int64_t *param_1, uint64_t param_2, uint32_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x18);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f877f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint32_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（无符号整数）
 * 
 * 设置NGX参数结构体中的无符号整数参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_unsigned_integer(int64_t *param_1, uint64_t param_2, uint32_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x20);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f87df. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint32_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（无符号长整型）
 * 
 * 设置NGX参数结构体中的无符号长整型参数值。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_unsigned_long_long(int64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)(*param_1 + 0x38);
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f883f. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(int64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

/**
 * @brief NGX参数设置器（空指针）
 * 
 * 设置NGX参数结构体中的空指针参数。
 * 
 * @param param_1 NGX参数结构体指针
 * @param param_2 参数标识符
 * @param param_3 要设置的指针值
 * 
 * @note 该函数通过函数指针表调用实际的实现
 * @note 包含控制流防护（CFG）检查
 */
void ngx_parameter_set_void_pointer(uint64_t *param_1, uint64_t param_2, uint64_t param_3)
{
  void *function_pointer;
  
  // 获取函数指针
  function_pointer = *(void **)*param_1;
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际实现函数
  // WARNING: Could not recover jumptable at 0x0001808f889e. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(uint64_t *, uint64_t, uint64_t))function_pointer)(param_1, param_2, param_3);
  return;
}

// =============================================================================
// NGX SDK 线程安全功能
// =============================================================================

/**
 * @brief 线程安全函数调用器
 * 
 * 提供线程安全的函数调用机制，使用线程本地存储（TLS）来管理回调函数。
 * 
 * @param param_1 要调用的函数指针
 * @param param_2 函数参数1
 * @param param_3 函数参数2
 * @param param_4 函数参数3
 * @param param_5 回调函数指针（可选）
 * 
 * @note 该函数实现了线程安全的函数调用机制
 * @note 使用TLS存储回调函数指针，确保线程安全
 */
void thread_safe_function_caller(void *param_1, uint64_t param_2, uint64_t param_3, 
                                uint64_t param_4, int64_t param_5)
{
  void *callback_function;
  int64_t *tls_storage;
  
  callback_function = (void *)0x0;
  
  // 获取线程本地存储指针
  tls_storage = (int64_t *)((*(int64_t *)((int64_t)ThreadLocalStoragePointer + 
                                        (uint64_t)__tls_index * 8)) + TLS_INDEX_OFFSET);
  
  // 设置回调函数
  if (param_5 != 0) {
    callback_function = FUN_1808f8b00;
  }
  
  *tls_storage = param_5;
  
  // 执行控制流防护检查
  _guard_check_icall(param_1);
  
  // 调用目标函数
  ((void (*)(uint64_t, uint64_t, uint64_t, void *))param_1)(param_2, param_3, param_4, callback_function);
  
  // 清理TLS存储
  *tls_storage = 0;
  return;
}

/**
 * @brief 资源分配处理器
 * 
 * 处理复杂的资源分配逻辑，包括错误处理和状态管理。
 * 
 * @param param_1 资源管理器指针
 * @param param_2 输出参数指针
 * 
 * @note 该函数实现了复杂的资源分配和错误处理逻辑
 * @note 包含多种错误情况和状态检查
 */
void resource_allocation_handler(uint64_t *param_1, uint64_t *param_2)
{
  void *function_pointer;
  int64_t *allocated_resource;
  int operation_result;
  uint8_t stack_buffer[32];
  int64_t *stack_param1;
  int64_t *stack_param2;
  uint8_t large_buffer[296];
  uint64_t stack_param3;
  uint64_t stack_param4;
  
  // 计算堆栈保护值
  stack_param4 = _DAT_180bf00a8 ^ (uint64_t)stack_buffer;
  
  // 获取函数指针
  function_pointer = *(void **)*param_1;
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用分配函数
  operation_result = ((int (*)(uint64_t *, void *, int64_t **))function_pointer)
                    (param_1, &UNK_180a026d0, &allocated_resource);
  
  // 检查分配结果
  if (operation_result < 0) {
    FUN_1808fb790(&UNK_18098a7d0, ERROR_CODE_INITIALIZE_FAILED, 
                  &UNK_18098a7b0, &UNK_18098a788);
  } else {
    // 获取资源操作函数指针
    function_pointer = *(void **)(*allocated_resource + 0x38);
    _guard_check_icall(function_pointer);
    
    // 调用资源初始化函数
    operation_result = ((int (*)(int64_t **, int64_t **))function_pointer)
                      (&allocated_resource, &stack_param1);
    
    // 检查初始化结果
    if (operation_result < 0) {
      function_pointer = *(void **)(*allocated_resource + 0x10);
      _guard_check_icall(function_pointer);
      ((void (*)(int64_t *))function_pointer)(allocated_resource);
      
      FUN_1808fb790(&UNK_18098a7d0, ERROR_CODE_CREATE_FAILED, 
                    &UNK_18098a7b0, &UNK_18098a828);
    } else {
      // 获取资源配置函数指针
      function_pointer = *(void **)(*stack_param1 + 0x40);
      _guard_check_icall(function_pointer);
      
      // 调用资源配置函数
      operation_result = ((int (*)(int64_t **, uint8_t *))function_pointer)
                        (&allocated_resource, large_buffer);
      
      // 检查配置结果
      if (operation_result < 0) {
        function_pointer = *(void **)(*stack_param1 + 0x10);
        _guard_check_icall(function_pointer);
        ((void (*)(int64_t *))function_pointer)(stack_param1);
        
        function_pointer = *(void **)(*allocated_resource + 0x10);
        _guard_check_icall(function_pointer);
        ((void (*)(int64_t *))function_pointer)(allocated_resource);
        
        FUN_1808fb790(&UNK_18098a7d0, ERROR_CODE_EVALUATE_FAILED, 
                      &UNK_18098a7b0, &UNK_18098a850);
      } else {
        // 返回分配的资源
        *param_2 = stack_param3;
        
        // 清理资源
        function_pointer = *(void **)(*stack_param1 + 0x10);
        _guard_check_icall(function_pointer);
        ((void (*)(int64_t *))function_pointer)(stack_param1);
        
        function_pointer = *(void **)(*allocated_resource + 0x10);
        _guard_check_icall(function_pointer);
        ((void (*)(int64_t *))function_pointer)(allocated_resource);
      }
    }
  }
  
  // WARNING: Subroutine does not return
  FUN_1808fc050(stack_param4 ^ (uint64_t)stack_buffer);
}

/**
 * @brief 特性评估处理器
 * 
 * 处理NGX特性的评估逻辑，包括参数验证和结果计算。
 * 
 * @note 该函数实现了复杂的特性评估逻辑
 * @note 包含多种验证步骤和错误处理
 */
void feature_evaluation_handler(void)
{
  void *function_pointer;
  int operation_result;
  int64_t *resource_manager;
  uint64_t *resource_ptr;
  int64_t *stack_param1;
  uint64_t *stack_param2;
  uint64_t stack_param3;
  uint64_t stack_param4;
  
  // 获取特性检查函数指针
  function_pointer = *(void **)(*resource_manager + 0x38);
  _guard_check_icall(function_pointer);
  
  // 调用特性检查函数
  operation_result = ((int (*)(void))function_pointer)();
  
  // 检查特性状态
  if (operation_result < 0) {
    function_pointer = *(void **)(*stack_param1 + 0x10);
    _guard_check_icall(function_pointer);
    ((void (*)(int64_t *))function_pointer)(stack_param1);
    
    FUN_1808fb790(&UNK_18098a7d0, ERROR_CODE_CREATE_FAILED, 
                  &UNK_18098a7b0, &UNK_18098a828);
  } else {
    // 获取特性评估函数指针
    function_pointer = *(void **)(*resource_ptr + 0x40);
    _guard_check_icall(function_pointer);
    
    // 调用特性评估函数
    operation_result = ((int (*)(uint64_t *, void *))function_pointer)
                      (resource_ptr, &stack0x00000030);
    
    // 检查评估结果
    if (operation_result < 0) {
      function_pointer = *(void **)(*resource_ptr + 0x10);
      _guard_check_icall(function_pointer);
      ((void (*)(uint64_t *))function_pointer)(resource_ptr);
      
      function_pointer = *(void **)(*stack_param1 + 0x10);
      _guard_check_icall(function_pointer);
      ((void (*)(int64_t *))function_pointer)(stack_param1);
      
      FUN_1808fb790(&UNK_18098a7d0, ERROR_CODE_EVALUATE_FAILED, 
                    &UNK_18098a7b0, &UNK_18098a850);
    } else {
      // 设置输出参数
      *resource_manager = stack_param3;
      
      // 清理资源
      function_pointer = *(void **)(*resource_ptr + 0x10);
      _guard_check_icall(function_pointer);
      ((void (*)(uint64_t *))function_pointer)(resource_ptr);
      
      function_pointer = *(void **)(*stack_param1 + 0x10);
      _guard_check_icall(function_pointer);
      ((void (*)(int64_t *))function_pointer)(stack_param1);
    }
  }
  
  // WARNING: Subroutine does not return
  FUN_1808fc050(stack_param4 ^ (uint64_t)&stack0x00000000);
}

/**
 * @brief 内存释放处理器
 * 
 * 处理内存资源的释放和清理。
 * 
 * @note 该函数是一个简化的内存释放处理器
 * @note WARNING: Subroutine does not return
 */
void memory_release_handler(void)
{
  uint64_t stack_param;
  
  // WARNING: Subroutine does not return
  FUN_1808fc050(stack_param ^ (uint64_t)&stack0x00000000);
}

/**
 * @brief 线程回调执行器
 * 
 * 执行存储在线程本地存储中的回调函数。
 * 
 * @param param_1 回调参数1
 * @param param_2 回调参数2
 * 
 * @note 该函数从TLS中获取回调函数并执行
 */
void thread_callback_executor(uint32_t param_1, uint64_t param_2)
{
  void *callback_function;
  
  // 从线程本地存储中获取回调函数
  callback_function = *(void **)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + 
                                             (uint64_t)__tls_index * 8) + TLS_INDEX_OFFSET);
  
  // 如果存在回调函数，则执行
  if (callback_function != (void *)0x0) {
    _guard_check_icall(callback_function);
    ((void (*)(uint32_t, uint64_t))callback_function)(param_1, param_2);
  }
  return;
}

// =============================================================================
// NGX SDK D3D11 功能实现
// =============================================================================

/**
 * @brief 空操作处理器
 * 
 * 执行空操作，用于测试和占位符。
 * 
 * @note 该函数是一个简化的空操作处理器
 */
void empty_operation_processor(void)
{
  void *function_pointer;
  
  _guard_check_icall();
  // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(void))function_pointer)();
  return;
}

/**
 * @brief D3D11参数分配器
 * 
 * 分配DirectX 11环境下的NGX参数结构体。
 * 
 * @param param_1 D3D11设备指针
 * 
 * @return uint64_t 分配的参数结构体指针，或错误代码
 * 
 * @note 该函数需要NGX SDK已正确初始化
 * @note 如果SDK未初始化或函数指针无效，返回相应的错误代码
 */
uint64_t d3d11_parameter_allocator(uint64_t param_1)
{
  void *function_pointer;
  uint64_t result;
  
  // 检查SDK是否已初始化
  if (_DAT_180c69e80 == 0) {
    return NGX_ERROR_SDK_NOT_INITIALIZED;
  }
  
  // 检查函数指针是否有效
  function_pointer = _DAT_180c69ec0;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际分配函数
  // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(uint64_t))function_pointer)(param_1);
  return result;
}

/**
 * @brief 参数释放查询器
 * 
 * 查询参数释放功能的状态。
 * 
 * @return uint64_t 查询结果，或错误代码
 * 
 * @note 该函数需要有效的函数指针
 */
uint64_t parameter_release_queryer(void)
{
  void *function_pointer;
  uint64_t result;
  
  function_pointer = _DAT_180c69ec0;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际查询函数
  // WARNING: Could not recover jumptable at 0x0001808f8bb8. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(void))function_pointer)();
  return result;
}

/**
 * @brief D3D11特性创建器
 * 
 * 在DirectX 11环境中创建NGX特性。
 * 
 * @param param_1 D3D11设备指针
 * @param param_2 特性类型标识符
 * @param param_3 NGX参数结构体
 * @param param_4 输出特性指针
 * 
 * @return uint64_t 创建结果，或错误代码
 * 
 * @note 该函数需要NGX SDK已正确初始化
 * @note 如果SDK未初始化或函数指针无效，返回相应的错误代码
 */
uint64_t d3d11_feature_creator(uint64_t param_1, uint32_t param_2, uint64_t param_3, uint64_t param_4)
{
  void *function_pointer;
  uint64_t result;
  
  // 检查函数指针是否有效
  function_pointer = _DAT_180c69ea8;
  if (function_pointer == (void *)0x0) {
    result = NGX_ERROR_SDK_NOT_INITIALIZED;
  } else {
    // 执行控制流防护检查
    _guard_check_icall(function_pointer);
    result = ((uint64_t (*)(uint64_t, uint32_t, uint64_t, uint64_t))function_pointer)
              (param_1, param_2, param_3, param_4);
  }
  return result;
}

/**
 * @brief D3D11参数销毁器
 * 
 * 销毁DirectX 11环境下的NGX参数结构体。
 * 
 * @param param_1 要销毁的参数结构体指针
 * 
 * @return uint64_t 销毁结果，或错误代码
 * 
 * @note 该函数需要NGX SDK已正确初始化
 * @note 如果SDK未初始化或函数指针无效，返回相应的错误代码
 */
uint64_t d3d11_parameter_destroyer(uint64_t param_1)
{
  void *function_pointer;
  uint64_t result;
  
  // 检查SDK是否已初始化
  if (_DAT_180c69e80 == 0) {
    return NGX_ERROR_SDK_NOT_INITIALIZED;
  }
  
  // 检查函数指针是否有效
  function_pointer = _DAT_180c69ed0;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际销毁函数
  // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(uint64_t))function_pointer)(param_1);
  return result;
}

/**
 * @brief 参数销毁查询器
 * 
 * 查询参数销毁功能的状态。
 * 
 * @return uint64_t 查询结果，或错误代码
 * 
 * @note 该函数需要有效的函数指针
 */
uint64_t parameter_destroy_queryer(void)
{
  void *function_pointer;
  uint64_t result;
  
  function_pointer = _DAT_180c69ed0;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际查询函数
  // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(void))function_pointer)();
  return result;
}

/**
 * @brief 空操作销毁器
 * 
 * 执行空操作的销毁功能，用于测试和占位符。
 * 
 * @note 该函数是一个简化的空操作销毁器
 */
void empty_operation_destroyer(void)
{
  void *function_pointer;
  
  _guard_check_icall();
  // WARNING: Could not recover jumptable at 0x0001808f8c88. Too many branches
  // WARNING: Treating indirect jump as call
  ((void (*)(void))function_pointer)();
  return;
}

/**
 * @brief D3D11特性评估器
 * 
 * 在DirectX 11环境中评估NGX特性。
 * 
 * @param param_1 D3D11设备指针
 * @param param_2 NGX特性指针
 * @param param_3 NGX参数结构体
 * @param param_4 评估参数
 * 
 * @return uint64_t 评估结果，或错误代码
 * 
 * @note 该函数需要NGX SDK已正确初始化
 * @note 如果SDK未初始化或函数指针无效，返回相应的错误代码
 */
uint64_t d3d11_feature_evaluator(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  void *function_pointer;
  uint64_t result;
  
  // 检查函数指针是否有效
  function_pointer = _DAT_180c69eb0;
  if (function_pointer == (void *)0x0) {
    result = NGX_ERROR_SDK_NOT_INITIALIZED;
  } else {
    // 执行控制流防护检查
    _guard_check_icall(function_pointer);
    result = ((uint64_t (*)(uint64_t, uint64_t, uint64_t, uint64_t))function_pointer)
              (param_1, param_2, param_3, param_4);
  }
  return result;
}

/**
 * @brief D3D11特性评估器（兼容模式）
 * 
 * 在DirectX 11环境中评估NGX特性（兼容模式）。
 * 
 * @param param_1 D3D11设备指针
 * @param param_2 NGX特性指针
 * @param param_3 NGX参数结构体
 * @param param_4 评估参数
 * 
 * @return uint64_t 评估结果，或错误代码
 * 
 * @note 该函数是兼容模式版本，内部调用线程安全评估器
 */
uint64_t d3d11_feature_evaluator_compatible(uint64_t param_1, uint64_t param_2, uint64_t param_3, uint64_t param_4)
{
  uint64_t result;
  
  // 检查SDK是否已初始化
  if (_DAT_180c69eb0 == 0) {
    return NGX_ERROR_SDK_NOT_INITIALIZED;
  }
  
  // 调用线程安全评估器
  result = thread_safe_function_caller(_DAT_180c69eb0, param_1, param_2, param_3, param_4);
  return result;
}

/**
 * @brief D3D11能力参数获取器
 * 
 * 获取DirectX 11环境下的NGX能力参数。
 * 
 * @param param_1 D3D11设备指针
 * 
 * @return uint64_t 能力参数结构体指针，或错误代码
 * 
 * @note 该函数需要NGX SDK已正确初始化
 * @note 如果SDK未初始化或函数指针无效，返回相应的错误代码
 */
uint64_t d3d11_capability_parameter_getter(uint64_t param_1)
{
  void *function_pointer;
  uint64_t result;
  
  // 检查SDK是否已初始化
  if (_DAT_180c69e80 == 0) {
    return NGX_ERROR_SDK_NOT_INITIALIZED;
  }
  
  // 检查函数指针是否有效
  function_pointer = _DAT_180c69ec8;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际获取函数
  // WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(uint64_t))function_pointer)(param_1);
  return result;
}

/**
 * @brief 能力参数查询器
 * 
 * 查询能力参数获取功能的状态。
 * 
 * @return uint64_t 查询结果，或错误代码
 * 
 * @note 该函数需要有效的函数指针
 */
uint64_t capability_parameter_queryer(void)
{
  void *function_pointer;
  uint64_t result;
  
  function_pointer = _DAT_180c69ec8;
  if (function_pointer == (void *)0x0) {
    return NGX_ERROR_INVALID_FUNCTION_PTR;
  }
  
  // 执行控制流防护检查
  _guard_check_icall(function_pointer);
  
  // 调用实际查询函数
  // WARNING: Could not recover jumptable at 0x0001808f8d98. Too many branches
  // WARNING: Treating indirect jump as call
  result = ((uint64_t (*)(void))function_pointer)();
  return result;
}

// =============================================================================
// 模块信息
// =============================================================================

/**
 * @file 99_part_14_part016.c
 * @brief NVIDIA NGX SDK D3D11 参数和特性管理模块
 * 
 * 本模块包含NVIDIA NGX SDK在DirectX 11环境下的参数管理、特性创建和评估功能。
 * 提供了完整的参数获取、设置、资源管理以及特性评估的API接口。
 * 
 * 主要功能：
 * - 参数管理（获取/设置各种类型的参数）
 * - 资源管理（D3D11资源的分配和销毁）
 * - 特性管理（创建、评估和销毁NGX特性）
 * - 线程本地存储管理
 * - 错误处理和状态验证
 * 
 * 技术特点：
 * - 支持多种数据类型的参数操作
 * - 实现了线程安全的函数调用机制
 * - 提供了完整的错误处理和状态验证
 * - 支持DirectX 11环境下的NGX功能
 * - 包含控制流防护（CFG）安全检查
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 * 
 * @copyright 本代码根据TaleWorlds.Native项目进行美化处理
 * @license 根据原项目许可证
 */