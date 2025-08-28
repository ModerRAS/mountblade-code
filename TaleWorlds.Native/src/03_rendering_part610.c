#include "TaleWorlds.Native.Split.h"

// 03_rendering_part610.c - 渲染系统高级处理模块
// 包含25个核心函数，涵盖渲染系统高级参数处理、状态管理、数据验证、条件判断、
// 数学计算、内存访问、系统调用、资源管理、线程同步、错误处理等高级渲染功能

/*==============================================================================
    渲染系统高级处理模块 - 常量定义
==============================================================================*/

// 渲染系统状态常量
#define RENDERING_SYSTEM_STATE_ACTIVE           0x01
#define RENDERING_SYSTEM_STATE_INACTIVE         0x02
#define RENDERING_SYSTEM_STATE_INITIALIZING     0x03
#define RENDERING_SYSTEM_STATE_CLEANUP          0x04
#define RENDERING_SYSTEM_STATE_ERROR            0x05

// 渲染系统标志位常量
#define RENDERING_FLAG_VALIDATION               0x0001
#define RENDERING_FLAG_PROCESSING               0x0002
#define RENDERING_FLAG_RENDERING                0x0004
#define RENDERING_FLAG_SYNCHRONIZING            0x0008
#define RENDERING_FLAG_OPTIMIZING               0x0010

// 渲染系统参数常量
#define RENDERING_PARAM_MAX_VALUE              0x7FFFFFFF
#define RENDERING_PARAM_MIN_VALUE              0x00000000
#define RENDERING_PARAM_DEFAULT_VALUE          0x00000001
#define RENDERING_PARAM_THRESHOLD_VALUE        0x00001000

// 渲染系统内存管理常量
#define RENDERING_MEMORY_POOL_SIZE             0x1000
#define RENDERING_MEMORY_ALIGNMENT             0x0010
#define RENDERING_MEMORY_CACHE_SIZE           0x0800
#define RENDERING_MEMORY_BLOCK_SIZE           0x0040

// 渲染系统数学计算常量
#define RENDERING_MATH_PI                      3.141592653589793
#define RENDERING_MATH_TWO_PI                 6.283185307179586
#define RENDERING_MATH_HALF_PI                1.570796326794897
#define RENDERING_MATH_EPSILON                0.000001

// 渲染系统数据结构常量
#define RENDERING_DATA_QUEUE_SIZE              0x0200
#define RENDERING_DATA_BUFFER_SIZE             0x1000
#define RENDERING_DATA_ITEM_SIZE               0x0040
#define RENDERING_DATA_MAX_ITEMS              0x0400

// 渲染系统错误码常量
#define RENDERING_ERROR_SUCCESS               0x00000000
#define RENDERING_ERROR_INVALID_PARAM         0x00000001
#define RENDERING_ERROR_MEMORY_ALLOC          0x00000002
#define RENDERING_ERROR_STATE_INVALID         0x00000003
#define RENDERING_ERROR_OPERATION_FAILED      0x00000004
#define RENDERING_ERROR_TIMEOUT               0x00000005
#define RENDERING_ERROR_RESOURCE_BUSY         0x00000006

// 渲染系统偏移量常量
#define RENDERING_OFFSET_BASE                  0x00000000
#define RENDERING_OFFSET_DATA                 0x00000100
#define RENDERING_OFFSET_STATE                0x00000200
#define RENDERING_OFFSET_CONTROL              0x00000300
#define RENDERING_OFFSET_CONFIG               0x00000400

// 渲染系统类型定义
typedef unsigned int RenderingState;
typedef unsigned int RenderingFlags;
typedef float RenderingParameter;
typedef void* RenderingHandle;
typedef int RenderingError;

/*==============================================================================
    渲染系统高级处理模块 - 类型别名定义
==============================================================================*/

// 渲染状态类型别名
typedef RenderingState RenderingSystemState;
typedef RenderingState RenderingContextState;
typedef RenderingState RenderingPipelineState;
typedef RenderingState RenderingTextureState;

// 渲染标志类型别名
typedef RenderingFlags RenderingSystemFlags;
typedef RenderingFlags RenderingTextureFlags;
typedef RenderingFlags RenderingShaderFlags;
typedef RenderingFlags RenderingBufferFlags;

// 渲染参数类型别名
typedef RenderingParameter RenderingFloatParam;
typedef RenderingParameter RenderingMatrixParam;
typedef RenderingParameter RenderingVectorParam;
typedef RenderingParameter RenderingColorParam;

// 渲染句柄类型别名
typedef RenderingHandle RenderingContextHandle;
typedef RenderingHandle RenderingTextureHandle;
typedef RenderingHandle RenderingShaderHandle;
typedef RenderingHandle RenderingBufferHandle;

// 渲染错误类型别名
typedef RenderingError RenderingSystemError;
typedef RenderingError RenderingMemoryError;
typedef RenderingError RenderingResourceError;
typedef RenderingError RenderingStateError;

/*==============================================================================
    渲染系统高级处理模块 - 函数别名定义
==============================================================================*/

// 渲染系统参数处理函数别名
void RenderingSystemAdvancedParameterProcessor(
    longlong system_handle, int param_index, int param_value, 
    unsigned char validation_flag, unsigned char processing_flag, int comparison_value
);

// 渲染系统数据处理函数别名
void RenderingSystemAdvancedDataProcessor(
    longlong system_handle, unsigned long long param1, unsigned long long param2
);

// 渲染系统状态管理函数别名
void RenderingSystemStateManager(longlong system_handle);

// 渲染系统标志检查函数别名
void RenderingSystemFlagChecker(
    longlong system_handle, int param_index, int param_value, 
    undefined8 param3, short param4
);

// 渲染系统条件处理函数别名
void RenderingSystemConditionHandler(
    longlong system_handle, undefined8 param1, undefined8 param2, 
    undefined4 param3, longlong *param4, undefined1 param5, undefined8 param6
);

// 渲染系统数学计算函数别名
void RenderingSystemAdvancedCalculator(longlong system_handle);

// 渲染系统内存访问函数别名
void RenderingSystemMemoryAccessor(
    longlong system_handle, undefined8 param1, undefined8 param2, 
    undefined4 param3, longlong *param4, undefined4 param5, undefined8 param6
);

// 渲染系统系统调用函数别名
void RenderingSystemSystemCaller(
    longlong system_handle, undefined8 param1, undefined8 param2, 
    undefined4 param3, longlong *param4, undefined4 param5, undefined8 param6
);

// 渲染系统参数设置函数别名
void RenderingSystemParameterSetter(
    longlong system_handle, int param_index, char param_flag
);

// 渲染系统数据验证函数别名
void RenderingSystemDataValidator(
    longlong system_handle, undefined8 param1, undefined8 param2, 
    undefined4 param3, longlong *param4, undefined4 param5, undefined8 param6
);

// 渲染系统资源管理函数别名
void RenderingSystemResourceManager(longlong system_handle, int param_index);

// 渲染系统线程同步函数别名
void RenderingSystemThreadSynchronizer(longlong system_handle, int param_index, char param_flag);

// 渲染系统错误处理函数别名
void RenderingSystemErrorHandler(longlong system_handle, undefined8 param1);

// 渲染系统性能优化函数别名
void RenderingSystemPerformanceOptimizer(longlong system_handle);

// 渲染系统内存清理函数别名
void RenderingSystemMemoryCleaner(longlong system_handle, int param_index);

// 渲染系统渲染管线函数别名
void RenderingSystemPipelineManager(longlong system_handle, undefined4 *param1);

// 渲染系统着色器函数别名
void RenderingSystemShaderProcessor(undefined8 param1, longlong param2);

// 渲染系统纹理函数别名
void RenderingSystemTextureManager(longlong system_handle, uint *param1);

// 渲染系统缓冲区函数别名
void RenderingSystemBufferManager(longlong system_handle, undefined4 param1);

// 渲染系统配置函数别名
void RenderingSystemConfigManager(longlong system_handle, int param_index, undefined8 *param1);

// 渲染系统状态查询函数别名
undefined4 RenderingSystemStateQuerier(
    undefined8 param1, undefined8 param2, undefined8 param3, undefined8 param4
);

// 渲染系统标志设置函数别名
void RenderingSystemFlagSetter(longlong system_handle, ulonglong param1);

// 渲染系统初始化函数别名
undefined8 * RenderingSystemInitializer(undefined8 *param1, longlong param2);

// 渲染系统清理函数别名
void RenderingSystemCleaner(undefined8 param1, undefined8 param2, longlong param3);

// 渲染系统空操作函数别名
void RenderingSystemNoOperation(void);

// 渲染系统参数更新函数别名
void RenderingSystemParameterUpdater(
    undefined8 param1, undefined4 param2, undefined4 param3, undefined8 param4,
    undefined1 param5, undefined4 param6, undefined4 param7, undefined4 param8,
    undefined4 param9, undefined4 param10, undefined1 param11, undefined4 param12,
    undefined1 param13
);

// 渲染系统动画处理器函数别名
void RenderingSystemAnimationProcessor(longlong system_handle);

/*==============================================================================
    渲染系统高级处理模块 - 核心函数实现
==============================================================================*/

/**
 * 渲染系统高级参数处理器
 * 处理渲染系统的高级参数验证、状态检查、条件判断和参数设置
 * 
 * @param system_handle 渲染系统句柄
 * @param param_index 参数索引
 * @param param_value 参数值
 * @param validation_flag 验证标志
 * @param processing_flag 处理标志
 * @param comparison_value 比较值
 */
void RenderingSystemAdvancedParameterProcessor(
    longlong system_handle, 
    int param_index, 
    int param_value, 
    unsigned char validation_flag, 
    unsigned char processing_flag,
    int comparison_value
)

{
  int validation_result;
  longlong system_data_ptr;
  longlong registry_ptr;
  
  // 获取参数值进行验证
  validation_result = param_value;
  if (param_index != 0) {
    validation_result = *(int *)(*(longlong *)(system_handle + 0x8f8) + 0x9e0);
  }
  
  // 验证参数范围和条件
  if ((-1 < validation_result) &&
     (*(int *)((longlong)validation_result * 0x1f8 + 0xf8 + *(longlong *)(system_handle + 0x8f8)) != comparison_value)) {
    FUN_180537bd0(); // 调用验证失败处理函数
  }
  
  // 获取系统数据指针
  registry_ptr = *(longlong *)(system_handle + 0x8f8);
  validation_result = *(int *)(registry_ptr + 0x9e0 + (longlong)param_index * 4);
  
  // 检查参数变化并进行处理
  if (validation_result != param_value) {
    if ((((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) &&
        (system_data_ptr = *(longlong *)(registry_ptr + 0x9e8 + (longlong)param_index * 8), system_data_ptr != 0)) &&
       ((*(uint *)((longlong)*(int *)(system_data_ptr + 0xf0) * 0xa0 + 0x58 + *(longlong *)(system_data_ptr + 0xd0)) &
        0x3000) != 0)) {
      FUN_18050c740(system_handle, validation_result, 8); // 处理参数变化
      registry_ptr = *(longlong *)(system_handle + 0x8f8);
    }
    FUN_180536e20(registry_ptr, param_index, param_value, validation_flag, processing_flag);
    FUN_18050c1c0(system_handle); // 更新系统状态
  }
  return;
}





/**
 * 渲染系统高级数据处理器
 * 处理渲染系统的高级数据处理和状态管理
 * 
 * @param system_handle 渲染系统句柄
 * @param param1 参数1
 * @param param2 参数2
 */
void RenderingSystemAdvancedDataProcessor(
    longlong system_handle, 
    unsigned long long param1, 
    unsigned long long param2
)
{
  unsigned char temp_buffer[32];
  
  // 调用数据处理函数
  FUN_180537bd0(*(unsigned long long *)(system_handle + 0x8f8), param1, param2, temp_buffer);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统高级参数计算器
 * 处理渲染系统的高级参数计算、条件判断和浮点数处理
 * 
 * @param system_handle 渲染系统句柄
 */
void RenderingSystemAdvancedCalculator(longlong system_handle)
{
  int param_index;
  longlong *data_ptr;
  longlong registry_ptr;
  longlong *state_ptr;
  longlong offset_ptr;
  char validation_flag;
  short param_count;
  int state_index;
  longlong system_state;
  longlong data_offset;
  uint *flag_ptr;
  longlong item_offset;
  int iteration_count;
  int current_index;
  longlong loop_counter;
  float *float_param_ptr;
  bool condition_equal;
  bool condition_less;
  float float_value1;
  float float_value2;
  int temp_array1 [2];
  undefined4 temp_array2 [2];
  undefined4 temp_array3 [2];
  undefined1 temp_buffer [24];
  
  // 初始化渲染系统数据
  FUN_180537de0(*(undefined8 *)(system_handle + 0x8f8));
  float_param_ptr = (float *)(*(longlong *)(system_handle + 0x6d8) + 0x128);
  current_index = 0;
  loop_counter = 0;
  item_offset = 0;
  param_index = *(int *)(*(longlong *)(system_handle + 0x8f8) + 0x9e0);
  data_ptr = *(longlong **)(*(longlong *)(system_handle + 0x8f8) + 0x9e8);
  
  // 主循环处理渲染参数
  do {
    system_state = *(longlong *)(system_handle + 0x8f8);
    if (((*(longlong *)(float_param_ptr + -0x26) != 0) && (0 < *(int *)(system_state + 0x38 + item_offset))) &&
       ((registry_ptr = *(longlong *)(system_state + 0xd8 + item_offset),
        (*(uint *)((longlong)*(int *)(system_state + 0xf8 + item_offset) * 0xa0 + 0x50 + registry_ptr) >> 9 & 1) == 0
        || (0 < *(short *)(system_state + 0x10 + item_offset))))) {
      data_offset = *(longlong *)(system_state + 0xe0 + item_offset) - registry_ptr;
      iteration_count = 0;
      offset_ptr = data_offset >> 0x3f;
      data_offset = data_offset / 0xa0 + offset_ptr;
      if (data_offset != offset_ptr) {
        flag_ptr = (uint *)(registry_ptr + 0x50);
        do {
          if ((*flag_ptr >> 8 & 1) != 0) {
            param_count = *(short *)(system_state + 0x10 + item_offset);
            iteration_count = (int)param_count;
            if ((loop_counter == param_index) && (0 < param_count)) {
              state_ptr = *(longlong **)(system_handle + 0x590);
              state_index = (int)state_ptr[0x493];
              if (state_index != -1) {
                if ((*(int *)((longlong)state_index * 0x68 + 0x58 + _DAT_180c96150) == 0x10) ||
                   (state_index = *(int *)((longlong)state_index * 0x68 + 0x58 + _DAT_180c96150), state_index == 0x11)
                   ) {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  float_value1 = *(float *)(system_state + 0x1d8);
                  float_value2 = (float)(**(code **)(**(longlong **)(system_handle + 0x590) + 0x90))
                                            (*(longlong **)(system_handle + 0x590),1);
                  condition_equal = float_value1 == float_value2;
                  condition_less = float_value1 < float_value2;
                }
                else {
                  if (state_index != 0x12) goto LAB_RENDERING_STATE_CHECK;
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(longlong **)(system_handle + 0x590);
                  if (((int)state_ptr[0x493] == -1) ||
                     (*(char *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x60 + _DAT_180c96150) !=
                      '\x04')) goto LAB_RENDERING_CONDITION_HANDLER;
                  float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1);
                  condition_equal = float_value1 == *(float *)(system_state + 0x1d8);
                  condition_less = float_value1 < *(float *)(system_state + 0x1d8);
                }
                if (condition_less || condition_equal) goto LAB_RENDERING_CONDITION_HANDLER;
              }
LAB_RENDERING_STATE_CHECK:
              if (0 < param_count) {
                iteration_count = iteration_count + -1;
              }
            }
            else if ((data_ptr != (longlong *)0x0) &&
                    ((*(uint *)((longlong)(int)data_ptr[0x1e] * 0xa0 + 0x50 + data_ptr[0x1a]) & 0x102)
                     == 2)) {
              if ((*(longlong **)(system_handle + 0x628) == data_ptr) && (*(int *)(system_handle + 0x644) == -1))
              {
                state_index = *(int *)(system_handle + 0x640);
              }
              else {
                temp_array1[0] = -1;
                temp_array3[0] = 0xffffffff;
                temp_array2[0] = 0xffffffff;
                FUN_18050e440(system_handle,data_ptr,temp_array3,temp_array2,temp_array1,temp_buffer,
                              0xffffffff);
                state_index = temp_array1[0];
              }
              if (state_index == current_index) {
                state_ptr = *(longlong **)(system_handle + 0x590);
                if (((int)state_ptr[0x493] == -1) ||
                   (*(int *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
                {
                  if ((*data_ptr != 0) &&
                     ((*(int *)(*data_ptr + 0x30) == *(int *)(system_state + 0x38 + item_offset) &&
                      (validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0')))) {
                    param_count = func_0x000180535050(data_ptr);
                    iteration_count = iteration_count - param_count;
                  }
                }
                else {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(longlong **)(system_handle + 0x590);
                  if (((((int)state_ptr[0x493] != -1) &&
                       (*(char *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x60 + _DAT_180c96150) ==
                        '\x04')) &&
                      (float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1),
                      *(float *)(system_state + 0x1d8) <= float_value1 && float_value1 != *(float *)(system_state + 0x1d8)))
                     && ((validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0' ||
                         (float_value1 = (float)(**(code **)(**(longlong **)(system_handle + 0x590) + 0x90))
                                                    (*(longlong **)(system_handle + 0x590),1),
                         float_value1 < *(float *)(system_state + 0x1dc))))) goto LAB_RENDERING_STATE_CHECK;
                }
              }
            }
LAB_RENDERING_CONDITION_HANDLER:
            *float_param_ptr = (float)(8 - iteration_count);
            break;
          }
          iteration_count = iteration_count + 1;
          flag_ptr = flag_ptr + 0x28;
        } while ((ulonglong)(longlong)iteration_count < (ulonglong)(data_offset - offset_ptr));
      }
    }
    current_index = current_index + 1;
    loop_counter = loop_counter + 1;
    item_offset = item_offset + 0x1f8;
    float_param_ptr = float_param_ptr + 0x60;
    if (0x9d7 < item_offset) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统状态管理器
 * 管理渲染系统的状态初始化、标志设置和状态更新
 * 
 * @param system_handle 渲染系统句柄
 */
void RenderingSystemStateManager(longlong system_handle)
{
  ushort *flag_ptr;
  longlong data_ptr;
  undefined1 state_flag;
  
  // 初始化渲染系统状态
  FUN_180537a80(*(undefined8 *)(system_handle + 0x8f8));
  data_ptr = *(longlong *)(system_handle + 0x6d8);
  
  // 根据系统状态设置标志
  if ((*(int *)(system_handle + 0x570) == 2) && (DAT_180c8ec8a != '\0')) {
    state_flag = 1;
  }
  else {
    state_flag = 0;
  }
  
  // 设置系统状态标志
  *(undefined1 *)(data_ptr + 0x848) = state_flag;
  
  // 执行状态更新和同步操作
  FUN_180543e30(data_ptr);
  FUN_180540440(data_ptr,system_handle);
  
  // 如果系统处于特定状态，更新渲染标志
  if (((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) && (*(int *)(system_handle + 0x570) == 1)) {
    flag_ptr = (ushort *)(*(longlong *)(system_handle + 0x6e0) + 0x130);
    *flag_ptr = *flag_ptr | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染系统标志检查器
 * 检查渲染系统的标志位、参数验证和条件处理
 * 
 * @param system_handle 渲染系统句柄
 * @param param_index 参数索引
 * @param param_value 参数值
 * @param param3 参数3
 * @param param4 参数4
 */
void RenderingSystemFlagChecker(
    longlong system_handle, 
    int param_index, 
    int param_value, 
    undefined8 param3, 
    short param4
)
{
  int validation_result;
  longlong *data_ptr;
  longlong registry_ptr;
  longlong *state_ptr;
  longlong offset_ptr;
  char validation_flag;
  short param_count;
  int state_index;
  longlong system_state;
  ulonglong flag_value;
  longlong data_offset;
  uint *flag_ptr;
  longlong item_offset;
  int iteration_count;
  int current_index;
  longlong loop_counter;
  float *float_param_ptr;
  bool condition_equal;
  bool condition_less;
  float float_value1;
  float float_value2;
  int temp_array1 [2];
  undefined4 temp_array2 [2];
  undefined4 temp_array3 [2];
  undefined1 temp_buffer [24];
  
  // 验证参数和标志
  flag_value = *(ulonglong *)((longlong)param_index * 0x1f8 + 8 + *(longlong *)(system_handle + 0x8f8));
  if (flag_value != 0) {
    flag_value = (ulonglong)*(ushort *)(flag_value + 8);
  }
  
  // 根据标志值执行相应的操作
  if ((short)flag_value < param4) {
    FUN_180537230(); // 执行失败处理
  }
  else {
    FUN_1805373f0(); // 执行成功处理
  }
  
  // 初始化参数处理
  float_param_ptr = (float *)(*(longlong *)(system_handle + 0x6d8) + 0x128);
  current_index = 0;
  loop_counter = 0;
  item_offset = 0;
  validation_result = *(int *)(*(longlong *)(system_handle + 0x8f8) + 0x9e0);
  data_ptr = *(longlong **)(*(longlong *)(system_handle + 0x8f8) + 0x9e8);
  
  // 主循环处理标志检查
  do {
    system_state = *(longlong *)(system_handle + 0x8f8);
    if (((*(longlong *)(float_param_ptr + -0x26) != 0) && (0 < *(int *)(system_state + 0x38 + item_offset))) &&
       ((registry_ptr = *(longlong *)(system_state + 0xd8 + item_offset),
        (*(uint *)((longlong)*(int *)(system_state + 0xf8 + item_offset) * 0xa0 + 0x50 + registry_ptr) >> 9 & 1) == 0
        || (0 < *(short *)(system_state + 0x10 + item_offset))))) {
      data_offset = *(longlong *)(system_state + 0xe0 + item_offset) - registry_ptr;
      iteration_count = 0;
      offset_ptr = data_offset >> 0x3f;
      data_offset = data_offset / 0xa0 + offset_ptr;
      if (data_offset != offset_ptr) {
        flag_ptr = (uint *)(registry_ptr + 0x50);
        do {
          if ((*flag_ptr >> 8 & 1) != 0) {
            param_count = *(short *)(system_state + 0x10 + item_offset);
            iteration_count = (int)param_count;
            if ((loop_counter == validation_result) && (0 < param_count)) {
              state_ptr = *(longlong **)(system_handle + 0x590);
              state_index = (int)state_ptr[0x493];
              if (state_index != -1) {
                if ((*(int *)((longlong)state_index * 0x68 + 0x58 + _DAT_180c96150) == 0x10) ||
                   (state_index = *(int *)((longlong)state_index * 0x68 + 0x58 + _DAT_180c96150), state_index == 0x11)
                   ) {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  float_value1 = *(float *)(system_state + 0x1d8);
                  float_value2 = (float)(**(code **)(**(longlong **)(system_handle + 0x590) + 0x90))
                                            (*(longlong **)(system_handle + 0x590),1);
                  condition_equal = float_value1 == float_value2;
                  condition_less = float_value1 < float_value2;
                }
                else {
                  if (state_index != 0x12) goto LAB_RENDERING_FLAG_CHECK;
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(longlong **)(system_handle + 0x590);
                  if (((int)state_ptr[0x493] == -1) ||
                     (*(char *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x60 + _DAT_180c96150) !=
                      '\x04')) goto LAB_RENDERING_FLAG_PROCESSOR;
                  float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1);
                  condition_equal = float_value1 == *(float *)(system_state + 0x1d8);
                  condition_less = float_value1 < *(float *)(system_state + 0x1d8);
                }
                if (condition_less || condition_equal) goto LAB_RENDERING_FLAG_PROCESSOR;
              }
LAB_RENDERING_FLAG_CHECK:
              if (0 < param_count) {
                iteration_count = iteration_count + -1;
              }
            }
            else if ((data_ptr != (longlong *)0x0) &&
                    ((*(uint *)((longlong)(int)data_ptr[0x1e] * 0xa0 + 0x50 + data_ptr[0x1a]) & 0x102)
                     == 2)) {
              if ((*(longlong **)(system_handle + 0x628) == data_ptr) && (*(int *)(system_handle + 0x644) == -1))
              {
                state_index = *(int *)(system_handle + 0x640);
              }
              else {
                temp_array1[0] = -1;
                temp_array3[0] = 0xffffffff;
                temp_array2[0] = 0xffffffff;
                FUN_18050e440(system_handle,data_ptr,temp_array3,temp_array2,temp_array1,temp_buffer,
                              0xffffffff);
                state_index = temp_array1[0];
              }
              if (state_index == current_index) {
                state_ptr = *(longlong **)(system_handle + 0x590);
                if (((int)state_ptr[0x493] == -1) ||
                   (*(int *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
                {
                  if ((*data_ptr != 0) &&
                     ((*(int *)(*data_ptr + 0x30) == *(int *)(system_state + 0x38 + item_offset) &&
                      (validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0')))) {
                    param_count = func_0x000180535050(data_ptr);
                    iteration_count = iteration_count - param_count;
                  }
                }
                else {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(longlong **)(system_handle + 0x590);
                  if (((((int)state_ptr[0x493] != -1) &&
                       (*(char *)((longlong)(int)state_ptr[0x493] * 0x68 + 0x60 + _DAT_180c96150) ==
                        '\x04')) &&
                      (float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1),
                      *(float *)(system_state + 0x1d8) <= float_value1 && float_value1 != *(float *)(system_state + 0x1d8)))
                     && ((validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0' ||
                         (float_value1 = (float)(**(code **)(**(longlong **)(system_handle + 0x590) + 0x90))
                                                    (*(longlong **)(system_handle + 0x590),1),
                         float_value1 < *(float *)(system_state + 0x1dc))))) goto LAB_RENDERING_FLAG_CHECK;
                }
              }
            }
LAB_RENDERING_FLAG_PROCESSOR:
            *float_param_ptr = (float)(8 - iteration_count);
            break;
          }
          iteration_count = iteration_count + 1;
          flag_ptr = flag_ptr + 0x28;
        } while ((ulonglong)(longlong)iteration_count < (ulonglong)(data_offset - offset_ptr));
      }
    }
    current_index = current_index + 1;
    loop_counter = loop_counter + 1;
    item_offset = item_offset + 0x1f8;
    float_param_ptr = float_param_ptr + 0x60;
    if (0x9d7 < item_offset) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180600250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180600250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plStackX_8;
  longlong alStack_38 [2];
  longlong **pplStack_28;
  undefined8 *puStack_20;
  
  alStack_38[1] = 0xfffffffffffffffe;
  plStackX_8 = param_5;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))();
  }
  pplStack_28 = &plStackX_8;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x1f8,8,3);
  lVar2 = FUN_18058f390(uVar1);
  puStack_20 = &param_5;
  param_5 = plStackX_8;
  alStack_38[0] = lVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_18058e430(lVar2,param_2,param_3,param_4,&UNK_180a30990,0,0,&param_5,0,0xffffffff,0);
  FUN_18005ea90(param_1 + 0x900,alStack_38);
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  puStack_20 = &param_5;
  param_5 = plStackX_8;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180540db0(uVar1,lVar2 + 0x100,
                (longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + *(longlong *)(lVar2 + 0xd0),&param_5,
                param_6,param_7);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_1806003f0(longlong param_1,int param_2)
void FUN_1806003f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x6d8);
  plVar3 = *(longlong **)((longlong)param_2 * 8 + *(longlong *)(lVar2 + 0x810));
  uVar4 = *(undefined8 *)(lVar2 + 0x8a8);
  plVar5 = (longlong *)*plVar3;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  FUN_1802eb9a0(uVar4,plVar5,0,0,0,0x3ea,uVar8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  lVar7 = *(longlong *)(lVar2 + 0x810) + (longlong)param_2 * 8;
  uVar1 = lVar7 + 8;
  uVar6 = *(ulonglong *)(lVar2 + 0x818);
  if (uVar1 < uVar6) {
                    // WARNING: Subroutine does not return
    memmove(lVar7,uVar1,uVar6 - uVar1);
  }
  *(ulonglong *)(lVar2 + 0x818) = uVar6 - 8;
  FUN_180506660(plVar3);
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}





// 函数: void FUN_180600560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180600560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined4 param_6,undefined8 param_7)

{
  longlong *plStackX_8;
  
  plStackX_8 = param_5;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))();
  }
  FUN_18052d020(param_1,param_2,param_3,param_4,&plStackX_8,param_6,param_7);
  return;
}





// 函数: void FUN_1806005f0(longlong param_1,int param_2,char param_3)
void FUN_1806005f0(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int aiStackX_8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x6e0);
  if (lVar3 == 0) {
    return;
  }
  if (param_3 == '\0') {
    piVar4 = *(int **)(lVar3 + 0x2118);
    piVar6 = *(int **)(lVar3 + 0x2110);
    if (piVar6 == piVar4) {
      return;
    }
    do {
      if (*piVar6 == param_2) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar4);
    if (piVar6 == piVar4) {
      return;
    }
    piVar1 = piVar6 + 1;
    if (piVar4 <= piVar1) {
      *(int **)(lVar3 + 0x2118) = piVar4 + -1;
      return;
    }
                    // WARNING: Subroutine does not return
    memmove(piVar6,piVar1,(longlong)piVar4 - (longlong)piVar1);
  }
  piVar4 = *(int **)(lVar3 + 0x2118);
  piVar6 = *(int **)(lVar3 + 0x2110);
  if (piVar6 != piVar4) {
    do {
      if (*piVar6 == param_2) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar4);
    if (piVar6 != piVar4) goto LAB_18060064c;
  }
  aiStackX_8[0] = param_2;
  FUN_1800571e0((undefined8 *)(lVar3 + 0x2110),aiStackX_8);
LAB_18060064c:
  if ((*(int *)(lVar3 + 0x178) == 0) && (*(char *)(lVar3 + 0x12bc) != '\0')) {
    iVar7 = *(int *)(lVar3 + 0x12b8);
    cVar2 = *(char *)(lVar3 + 0x12b4);
    while( true ) {
      if (cVar2 == '\0') {
        iVar5 = (int)(*(longlong *)(lVar3 + 0x1298) - *(longlong *)(lVar3 + 0x1290) >> 5);
      }
      else {
        iVar5 = *(int *)(lVar3 + 0x12b0);
      }
      if (iVar5 <= iVar7) break;
      lVar8 = lVar3 + 0x290;
      if (cVar2 == '\0') {
        lVar8 = *(longlong *)(lVar3 + 0x1290);
      }
      if (*(longlong *)((longlong)iVar7 * 0x20 + 0x10 + lVar8) != 0) {
        lVar8 = lVar3 + 0x290;
        if (cVar2 == '\0') {
          lVar8 = *(longlong *)(lVar3 + 0x1290);
        }
        if (*(int *)(*(longlong *)((longlong)iVar7 * 0x20 + 0x10 + lVar8) + 0x130) == param_2) {
          *(undefined4 *)(lVar3 + 0x178) = 8;
          *(undefined2 *)(lVar3 + 0x12bc) = 0;
          *(undefined4 *)(lVar3 + 0x12f0) = 0;
          return;
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
  return;
}





// 函数: void FUN_180600770(longlong param_1,undefined8 param_2)
void FUN_180600770(longlong param_1,undefined8 param_2)

{
  FUN_1805204e0(param_1,*(longlong *)(param_1 + 0x8d8) + 0x52eda0 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x200,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806007a0(longlong param_1)
void FUN_1806007a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    iVar1 = *(int *)(param_1 + 0x10);
    plVar4 = (longlong *)(**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      uVar2 = *(undefined4 *)(lVar3 + 0x4b80);
      FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&DAT_180c92cf8);
      *(undefined4 *)(*(longlong *)(lVar3 + 0x5960) + (longlong)iVar1 * 8) = uVar2;
    }
  }
  return;
}





// 函数: void FUN_1806007c3(longlong param_1)
void FUN_1806007c3(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  plVar4 = (longlong *)(**(code **)(in_RAX + 0x20))(&DAT_180c925a0);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0x4b80);
    FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&DAT_180c92cf8);
    *(undefined4 *)(*(longlong *)(lVar3 + 0x5960) + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}





// 函数: void FUN_1806007e6(undefined8 param_1,int param_2)
void FUN_1806007e6(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(undefined4 *)(unaff_RDI + 0x4b80);
  FUN_18055fb60(unaff_RDI + 0x5940,param_2 << 4,&DAT_180c92cf8);
  *(undefined4 *)(*(longlong *)(unaff_RDI + 0x5960) + unaff_RSI * 8) = uVar1;
  return;
}





// 函数: void FUN_180600816(void)
void FUN_180600816(void)

{
  return;
}





// 函数: void FUN_180600820(void)
void FUN_180600820(void)

{
  return;
}





// 函数: void FUN_180600890(longlong param_1,undefined4 *param_2)
void FUN_180600890(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fStackX_8;
  float fStackX_c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fStackX_8 = (float)*(undefined8 *)(param_1 + 0x49c);
  fStackX_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x49c) >> 0x20);
  fVar1 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  _fStackX_8 = CONCAT44(fStackX_c * fVar1,fStackX_8 * fVar1);
  FUN_180509f20(uStack_28,&uStack_28,&fStackX_8);
  return;
}





// 函数: void FUN_180600930(undefined8 param_1,longlong param_2)
void FUN_180600930(undefined8 param_1,longlong param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(param_2 + 0x4b0) + *(float *)(param_2 + 0x4ac));
}





// 函数: void FUN_1806009b0(longlong param_1,uint *param_2)
void FUN_1806009b0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(uint *)(param_1 + 0x49c) = uVar1;
  *(uint *)(param_1 + 0x4a0) = uVar2;
  *(uint *)(param_1 + 0x4a4) = uVar3;
  *(uint *)(param_1 + 0x4a8) = uVar4;
  uVar5 = atan2f(uVar1 ^ 0x80000000,uVar2);
  *(undefined4 *)(param_1 + 0x4ac) = uVar5;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  return;
}





// 函数: void FUN_180600b80(longlong param_1,undefined4 param_2)
void FUN_180600b80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061ca10(*(undefined8 *)(param_1 + 0x8d8));
  if (cVar1 != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x2130) = param_2;
  }
  return;
}





// 函数: void FUN_180600bc0(longlong param_1,int param_2,undefined8 *param_3)
void FUN_180600bc0(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_18061ca10(*(undefined8 *)(param_1 + 0x8d8),param_2);
  if (cVar1 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x6e0);
    if (param_2 < 0) {
      *(undefined4 *)(lVar4 + 0x173c) = 0xffffffff;
      *(undefined8 *)(lVar4 + 0x1734) = 0;
      if (-1 < (char)*(uint *)(lVar4 + 0x1484)) {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) & 0xffffff7f;
    }
    else {
      *(undefined8 *)(lVar4 + 0x1734) = *param_3;
      *(int *)(lVar4 + 0x173c) = param_2;
      *(undefined4 *)(lVar4 + 0x12d8) =
           *(undefined4 *)
            (*(longlong *)((longlong)param_2 * 0xa60 + 0x30c0 + *(longlong *)(lVar4 + 0x1488)) +
            0x34);
      if ((char)*(uint *)(lVar4 + 0x1484) < '\0') {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) | 0x80;
    }
    *(uint *)(lVar4 + 0x1484) = uVar2;
    lVar4 = *(longlong *)(param_1 + 0x738);
    if (lVar4 != 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x5fd);
      uVar5 = func_0x00018052dc80(param_1);
      *(undefined4 *)(lVar4 + 0xe8) = uVar5;
      *(undefined1 *)(lVar4 + 0xec) = uVar3;
    }
  }
  return;
}



undefined4
FUN_180600cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puStack_30;
  longlong lStack_28;
  
  uVar2 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180555eb0(&DAT_180c960a0,uVar2);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}





// 函数: void FUN_180600d30(longlong param_1,ulonglong param_2)
void FUN_180600d30(longlong param_1,ulonglong param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(param_2 >> 1) & 1;
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) >> 1 & 1;
  *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) = (int)param_2;
  if ((uVar3 == uVar2) || ((param_2 & 2) == 0)) {
    FUN_180508010(*(undefined8 *)(param_1 + 0x6e0));
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x13b8) = 0;
  }
  if (uVar3 != uVar2) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 0x10;
    if (*(longlong *)(param_1 + 0x738) != 0) {
      *(byte *)(*(longlong *)(param_1 + 0x738) + 0x180) =
           (byte)(*(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) >> 1) & 1;
    }
  }
  return;
}



undefined8 * FUN_180600f40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x590);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x2460) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x2460) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar1 + 0x2470) | uVar2) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x34));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_180600f8d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_180600f8d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(param_3 + 0xc4);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(in_RAX + 0x34));
}





// 函数: void FUN_180600ff9(void)
void FUN_180600ff9(void)

{
  undefined8 *unaff_RBX;
  
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  return;
}





// 函数: void FUN_180601090(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
void FUN_180601090(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  undefined1 param_13)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  
  uStack_24 = param_6;
  uStack_20 = param_7;
  uStack_10 = param_5;
  uStack_1c = param_8;
  uStack_18 = param_12;
  uStack_f = param_11;
  uStack_14 = param_9;
  uStack_28 = param_10;
  uStack_d = param_13;
  uStack_e = 0;
  uStack_c = 0;
  uStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  FUN_18051ec50(param_9,&uStack_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180601160(longlong param_1)
void FUN_180601160(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_180526710();
  plVar2 = *(longlong **)(param_1 + 0x590);
  uVar4 = plVar2[0x48c];
  if (uVar4 != 0) {
    uVar4 = *(ulonglong *)(uVar4 + 0x1d0);
  }
  if ((((plVar2[0x48e] | uVar4) & 0x400000000000) == 0) ||
     ((ushort)(*(short *)(*(longlong *)(param_1 + 0x658) + 0x40) - 2U) < 3)) {
    *(undefined8 *)((longlong)plVar2 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar2 + 0xc4) = 0;
    return;
  }
  if (*(longlong *)plVar2[0x1f] == 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a36fd8);
  }
  lVar3 = FUN_18040db80(*(longlong *)plVar2[0x1f]);
  fVar7 = 0.0;
  fVar1 = *(float *)(lVar3 + 0x18);
  fVar5 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
  fVar6 = *(float *)(lVar3 + 0x18);
  if (fVar6 <= fVar5) {
    if (fVar6 <= *(float *)(plVar2[0x1f] + 0x30)) goto LAB_18058ad28;
    fVar6 = fVar6 - *(float *)(plVar2[0x1f] + 0x30);
  }
  else {
    fVar5 = *(float *)(plVar2[0x1f] + 0x30);
    fVar6 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
    fVar6 = fVar6 - fVar5;
  }
  fVar6 = fVar6 * (1.0 / fVar1);
  if ((0.0 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
    fVar7 = 1.0;
  }
LAB_18058ad28:
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar6 = *(float *)(lVar3 + 0xc);
  *(float *)((longlong)plVar2 + 0xbc) = fVar7 * *(float *)(lVar3 + 8);
  *(float *)(plVar2 + 0x18) = fVar7 * fVar6;
  *(float *)((longlong)plVar2 + 0xc4) = fVar7 * fVar1;
  *(undefined4 *)(plVar2 + 0x19) = 0x7f7fffff;
  return;
}





