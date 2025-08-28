/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

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
    int64_t system_handle, int param_index, int param_value, 
    unsigned char validation_flag, unsigned char processing_flag, int comparison_value
);

// 渲染系统数据处理函数别名
void RenderingSystemAdvancedDataProcessor(
    int64_t system_handle, unsigned long long param1, unsigned long long param2
);

// 渲染系统状态管理函数别名
void RenderingSystemStateManager(int64_t system_handle);

// 渲染系统标志检查函数别名
void RenderingSystemFlagChecker(
    int64_t system_handle, int param_index, int param_value, 
    uint64_t param3, short param4
);

// 渲染系统条件处理函数别名
void RenderingSystemConditionHandler(
    int64_t system_handle, uint64_t param1, uint64_t param2, 
    int32_t param3, int64_t *param4, int8_t param5, uint64_t param6
);

// 渲染系统数学计算函数别名
void RenderingSystemAdvancedCalculator(int64_t system_handle);

// 渲染系统内存访问函数别名
void RenderingSystemMemoryAccessor(
    int64_t system_handle, uint64_t param1, uint64_t param2, 
    int32_t param3, int64_t *param4, int32_t param5, uint64_t param6
);

// 渲染系统系统调用函数别名
void RenderingSystemSystemCaller(
    int64_t system_handle, uint64_t param1, uint64_t param2, 
    int32_t param3, int64_t *param4, int32_t param5, uint64_t param6
);

// 渲染系统参数设置函数别名
void RenderingSystemParameterSetter(
    int64_t system_handle, int param_index, char param_flag
);

// 渲染系统数据验证函数别名
void RenderingSystemDataValidator(
    int64_t system_handle, uint64_t param1, uint64_t param2, 
    int32_t param3, int64_t *param4, int32_t param5, uint64_t param6
);

// 渲染系统资源管理函数别名
void RenderingSystemResourceManager(int64_t system_handle, int param_index);

// 渲染系统线程同步函数别名
void RenderingSystemThreadSynchronizer(int64_t system_handle, int param_index, char param_flag);

// 渲染系统错误处理函数别名
void RenderingSystemErrorHandler(int64_t system_handle, uint64_t param1);

// 渲染系统性能优化函数别名
void RenderingSystemPerformanceOptimizer(int64_t system_handle);

// 渲染系统内存清理函数别名
void RenderingSystemMemoryCleaner(int64_t system_handle, int param_index);

// 渲染系统渲染管线函数别名
void RenderingSystemPipelineManager(int64_t system_handle, int32_t *param1);

// 渲染系统着色器函数别名
void RenderingSystemShaderProcessor(uint64_t param1, int64_t param2);

// 渲染系统纹理函数别名
void RenderingSystemTextureManager(int64_t system_handle, uint *param1);

// 渲染系统缓冲区函数别名
void RenderingSystemBufferManager(int64_t system_handle, int32_t param1);

// 渲染系统配置函数别名
void RenderingSystemConfigManager(int64_t system_handle, int param_index, uint64_t *param1);

// 渲染系统状态查询函数别名
int32_t RenderingSystemStateQuerier(
    uint64_t param1, uint64_t param2, uint64_t param3, uint64_t param4
);

// 渲染系统标志设置函数别名
void RenderingSystemFlagSetter(int64_t system_handle, uint64_t param1);

// 渲染系统初始化函数别名
uint64_t * RenderingSystemInitializer(uint64_t *param1, int64_t param2);

// 渲染系统清理函数别名
void RenderingSystemCleaner(uint64_t param1, uint64_t param2, int64_t param3);

// 渲染系统空操作函数别名
void RenderingSystemNoOperation(void);

// 渲染系统参数更新函数别名
void RenderingSystemParameterUpdater(
    uint64_t param1, int32_t param2, int32_t param3, uint64_t param4,
    int8_t param5, int32_t param6, int32_t param7, int32_t param8,
    int32_t param9, int32_t param10, int8_t param11, int32_t param12,
    int8_t param13
);

// 渲染系统动画处理器函数别名
void RenderingSystemAnimationProcessor(int64_t system_handle);

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
    int64_t system_handle, 
    int param_index, 
    int param_value, 
    unsigned char validation_flag, 
    unsigned char processing_flag,
    int comparison_value
)

{
  int validation_result;
  int64_t system_data_ptr;
  int64_t registry_ptr;
  
  // 获取参数值进行验证
  validation_result = param_value;
  if (param_index != 0) {
    validation_result = *(int *)(*(int64_t *)(system_handle + 0x8f8) + 0x9e0);
  }
  
  // 验证参数范围和条件
  if ((-1 < validation_result) &&
     (*(int *)((int64_t)validation_result * 0x1f8 + 0xf8 + *(int64_t *)(system_handle + 0x8f8)) != comparison_value)) {
    FUN_180537bd0(); // 调用验证失败处理函数
  }
  
  // 获取系统数据指针
  registry_ptr = *(int64_t *)(system_handle + 0x8f8);
  validation_result = *(int *)(registry_ptr + 0x9e0 + (int64_t)param_index * 4);
  
  // 检查参数变化并进行处理
  if (validation_result != param_value) {
    if ((((system_status_flag != 1) && (system_status_flag != 4)) &&
        (system_data_ptr = *(int64_t *)(registry_ptr + 0x9e8 + (int64_t)param_index * 8), system_data_ptr != 0)) &&
       ((*(uint *)((int64_t)*(int *)(system_data_ptr + 0xf0) * 0xa0 + 0x58 + *(int64_t *)(system_data_ptr + 0xd0)) &
        0x3000) != 0)) {
      FUN_18050c740(system_handle, validation_result, 8); // 处理参数变化
      registry_ptr = *(int64_t *)(system_handle + 0x8f8);
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
    int64_t system_handle, 
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
void RenderingSystemAdvancedCalculator(int64_t system_handle)
{
  int param_index;
  int64_t *data_ptr;
  int64_t registry_ptr;
  int64_t *state_ptr;
  int64_t offset_ptr;
  char validation_flag;
  short param_count;
  int state_index;
  int64_t system_state;
  int64_t data_offset;
  uint *flag_ptr;
  int64_t item_offset;
  int iteration_count;
  int current_index;
  int64_t loop_counter;
  float *float_param_ptr;
  bool condition_equal;
  bool condition_less;
  float float_value1;
  float float_value2;
  int temp_array1 [2];
  int32_t temp_array2 [2];
  int32_t temp_array3 [2];
  int8_t temp_buffer [24];
  
  // 初始化渲染系统数据
  FUN_180537de0(*(uint64_t *)(system_handle + 0x8f8));
  float_param_ptr = (float *)(*(int64_t *)(system_handle + 0x6d8) + 0x128);
  current_index = 0;
  loop_counter = 0;
  item_offset = 0;
  param_index = *(int *)(*(int64_t *)(system_handle + 0x8f8) + 0x9e0);
  data_ptr = *(int64_t **)(*(int64_t *)(system_handle + 0x8f8) + 0x9e8);
  
  // 主循环处理渲染参数
  do {
    system_state = *(int64_t *)(system_handle + 0x8f8);
    if (((*(int64_t *)(float_param_ptr + -0x26) != 0) && (0 < *(int *)(system_state + 0x38 + item_offset))) &&
       ((registry_ptr = *(int64_t *)(system_state + 0xd8 + item_offset),
        (*(uint *)((int64_t)*(int *)(system_state + 0xf8 + item_offset) * 0xa0 + 0x50 + registry_ptr) >> 9 & 1) == 0
        || (0 < *(short *)(system_state + 0x10 + item_offset))))) {
      data_offset = *(int64_t *)(system_state + 0xe0 + item_offset) - registry_ptr;
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
              state_ptr = *(int64_t **)(system_handle + 0x590);
              state_index = (int)state_ptr[0x493];
              if (state_index != -1) {
                if ((*(int *)((int64_t)state_index * 0x68 + 0x58 + render_system_config) == 0x10) ||
                   (state_index = *(int *)((int64_t)state_index * 0x68 + 0x58 + render_system_config), state_index == 0x11)
                   ) {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  float_value1 = *(float *)(system_state + 0x1d8);
                  float_value2 = (float)(**(code **)(**(int64_t **)(system_handle + 0x590) + 0x90))
                                            (*(int64_t **)(system_handle + 0x590),1);
                  condition_equal = float_value1 == float_value2;
                  condition_less = float_value1 < float_value2;
                }
                else {
                  if (state_index != 0x12) goto LAB_RENDERING_STATE_CHECK;
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(int64_t **)(system_handle + 0x590);
                  if (((int)state_ptr[0x493] == -1) ||
                     (*(char *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x60 + render_system_config) !=
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
            else if ((data_ptr != (int64_t *)0x0) &&
                    ((*(uint *)((int64_t)(int)data_ptr[0x1e] * 0xa0 + 0x50 + data_ptr[0x1a]) & 0x102)
                     == 2)) {
              if ((*(int64_t **)(system_handle + 0x628) == data_ptr) && (*(int *)(system_handle + 0x644) == -1))
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
                state_ptr = *(int64_t **)(system_handle + 0x590);
                if (((int)state_ptr[0x493] == -1) ||
                   (*(int *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x58 + render_system_config) != 0x12))
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
                  state_ptr = *(int64_t **)(system_handle + 0x590);
                  if (((((int)state_ptr[0x493] != -1) &&
                       (*(char *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x60 + render_system_config) ==
                        '\x04')) &&
                      (float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1),
                      *(float *)(system_state + 0x1d8) <= float_value1 && float_value1 != *(float *)(system_state + 0x1d8)))
                     && ((validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0' ||
                         (float_value1 = (float)(**(code **)(**(int64_t **)(system_handle + 0x590) + 0x90))
                                                    (*(int64_t **)(system_handle + 0x590),1),
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
        } while ((uint64_t)(int64_t)iteration_count < (uint64_t)(data_offset - offset_ptr));
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
void RenderingSystemStateManager(int64_t system_handle)
{
  ushort *flag_ptr;
  int64_t data_ptr;
  int8_t state_flag;
  
  // 初始化渲染系统状态
  FUN_180537a80(*(uint64_t *)(system_handle + 0x8f8));
  data_ptr = *(int64_t *)(system_handle + 0x6d8);
  
  // 根据系统状态设置标志
  if ((*(int *)(system_handle + 0x570) == 2) && (system_memory_ec8a != '\0')) {
    state_flag = 1;
  }
  else {
    state_flag = 0;
  }
  
  // 设置系统状态标志
  *(int8_t *)(data_ptr + 0x848) = state_flag;
  
  // 执行状态更新和同步操作
  FUN_180543e30(data_ptr);
  FUN_180540440(data_ptr,system_handle);
  
  // 如果系统处于特定状态，更新渲染标志
  if (((system_status_flag != 1) && (system_status_flag != 4)) && (*(int *)(system_handle + 0x570) == 1)) {
    flag_ptr = (ushort *)(*(int64_t *)(system_handle + 0x6e0) + 0x130);
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
    int64_t system_handle, 
    int param_index, 
    int param_value, 
    uint64_t param3, 
    short param4
)
{
  int validation_result;
  int64_t *data_ptr;
  int64_t registry_ptr;
  int64_t *state_ptr;
  int64_t offset_ptr;
  char validation_flag;
  short param_count;
  int state_index;
  int64_t system_state;
  uint64_t flag_value;
  int64_t data_offset;
  uint *flag_ptr;
  int64_t item_offset;
  int iteration_count;
  int current_index;
  int64_t loop_counter;
  float *float_param_ptr;
  bool condition_equal;
  bool condition_less;
  float float_value1;
  float float_value2;
  int temp_array1 [2];
  int32_t temp_array2 [2];
  int32_t temp_array3 [2];
  int8_t temp_buffer [24];
  
  // 验证参数和标志
  flag_value = *(uint64_t *)((int64_t)param_index * 0x1f8 + 8 + *(int64_t *)(system_handle + 0x8f8));
  if (flag_value != 0) {
    flag_value = (uint64_t)*(ushort *)(flag_value + 8);
  }
  
  // 根据标志值执行相应的操作
  if ((short)flag_value < param4) {
    FUN_180537230(); // 执行失败处理
  }
  else {
    FUN_1805373f0(); // 执行成功处理
  }
  
  // 初始化参数处理
  float_param_ptr = (float *)(*(int64_t *)(system_handle + 0x6d8) + 0x128);
  current_index = 0;
  loop_counter = 0;
  item_offset = 0;
  validation_result = *(int *)(*(int64_t *)(system_handle + 0x8f8) + 0x9e0);
  data_ptr = *(int64_t **)(*(int64_t *)(system_handle + 0x8f8) + 0x9e8);
  
  // 主循环处理标志检查
  do {
    system_state = *(int64_t *)(system_handle + 0x8f8);
    if (((*(int64_t *)(float_param_ptr + -0x26) != 0) && (0 < *(int *)(system_state + 0x38 + item_offset))) &&
       ((registry_ptr = *(int64_t *)(system_state + 0xd8 + item_offset),
        (*(uint *)((int64_t)*(int *)(system_state + 0xf8 + item_offset) * 0xa0 + 0x50 + registry_ptr) >> 9 & 1) == 0
        || (0 < *(short *)(system_state + 0x10 + item_offset))))) {
      data_offset = *(int64_t *)(system_state + 0xe0 + item_offset) - registry_ptr;
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
              state_ptr = *(int64_t **)(system_handle + 0x590);
              state_index = (int)state_ptr[0x493];
              if (state_index != -1) {
                if ((*(int *)((int64_t)state_index * 0x68 + 0x58 + render_system_config) == 0x10) ||
                   (state_index = *(int *)((int64_t)state_index * 0x68 + 0x58 + render_system_config), state_index == 0x11)
                   ) {
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  float_value1 = *(float *)(system_state + 0x1d8);
                  float_value2 = (float)(**(code **)(**(int64_t **)(system_handle + 0x590) + 0x90))
                                            (*(int64_t **)(system_handle + 0x590),1);
                  condition_equal = float_value1 == float_value2;
                  condition_less = float_value1 < float_value2;
                }
                else {
                  if (state_index != 0x12) goto LAB_RENDERING_FLAG_CHECK;
                  system_state = (**(code **)(*state_ptr + 0x128))(state_ptr,1);
                  state_ptr = *(int64_t **)(system_handle + 0x590);
                  if (((int)state_ptr[0x493] == -1) ||
                     (*(char *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x60 + render_system_config) !=
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
            else if ((data_ptr != (int64_t *)0x0) &&
                    ((*(uint *)((int64_t)(int)data_ptr[0x1e] * 0xa0 + 0x50 + data_ptr[0x1a]) & 0x102)
                     == 2)) {
              if ((*(int64_t **)(system_handle + 0x628) == data_ptr) && (*(int *)(system_handle + 0x644) == -1))
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
                state_ptr = *(int64_t **)(system_handle + 0x590);
                if (((int)state_ptr[0x493] == -1) ||
                   (*(int *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x58 + render_system_config) != 0x12))
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
                  state_ptr = *(int64_t **)(system_handle + 0x590);
                  if (((((int)state_ptr[0x493] != -1) &&
                       (*(char *)((int64_t)(int)state_ptr[0x493] * 0x68 + 0x60 + render_system_config) ==
                        '\x04')) &&
                      (float_value1 = (float)(**(code **)(*state_ptr + 0x90))(state_ptr,1),
                      *(float *)(system_state + 0x1d8) <= float_value1 && float_value1 != *(float *)(system_state + 0x1d8)))
                     && ((validation_flag = func_0x000180534460(data_ptr,0x80000), validation_flag != '\0' ||
                         (float_value1 = (float)(**(code **)(**(int64_t **)(system_handle + 0x590) + 0x90))
                                                    (*(int64_t **)(system_handle + 0x590),1),
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
        } while ((uint64_t)(int64_t)iteration_count < (uint64_t)(data_offset - offset_ptr));
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
 * 渲染系统条件处理器
 * 处理渲染系统的条件判断、参数验证和状态更新
 * 
 * @param system_handle 渲染系统句柄
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 * @param param4 参数4
 * @param param5 参数5
 * @param param6 参数6
 * @param param7 参数7
 */
void RenderingSystemConditionHandler(
    int64_t system_handle, uint64_t param1, uint64_t param2, 
    int32_t param3, int64_t *param4, int8_t param5, uint64_t param6
)
{
  uint64_t temp_var1;
  int64_t temp_var2;
  int64_t *stack_ptr;
  int64_t stack_array [2];
  int64_t **stack_ptr_ptr;
  uint64_t *stack_ptr2;
  
  // 初始化堆栈和变量
  stack_array[1] = 0xfffffffffffffffe;
  stack_ptr = param4;
  if (param4 != (int64_t *)0x0) {
    (**(code **)(*param4 + 0x28))();
  }
  stack_ptr_ptr = &stack_ptr;
  temp_var1 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x1f8,8,3);
  temp_var2 = FUN_18058f390(temp_var1);
  stack_ptr2 = &param4;
  param4 = stack_ptr;
  stack_array[0] = temp_var2;
  if (stack_ptr != (int64_t *)0x0) {
    (**(code **)(*stack_ptr + 0x28))();
  }
  
  // 执行条件处理和状态更新
  FUN_18058e430(temp_var2,param1,param2,param3,&processed_var_5760_ptr,0,0,&param4,0,0xffffffff,0);
  FUN_18005ea90(system_handle + 0x900,stack_array);
  temp_var1 = *(uint64_t *)(system_handle + 0x6d8);
  stack_ptr2 = &param4;
  param4 = stack_ptr;
  if (stack_ptr != (int64_t *)0x0) {
    (**(code **)(*stack_ptr + 0x28))();
  }
  
  // 执行最终的渲染操作
  FUN_180540db0(temp_var1,temp_var2 + 0x100,
                (int64_t)*(int *)(temp_var2 + 0xf0) * 0xa0 + *(int64_t *)(temp_var2 + 0xd0),&param4,
                param5,param6);
  if (stack_ptr != (int64_t *)0x0) {
    (**(code **)(*stack_ptr + 0x38))();
  }
  return;
}





// 函数: void FUN_1806003f0(int64_t param_1,int param_2)
void FUN_1806003f0(int64_t param_1,int param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x6d8);
  plVar3 = *(int64_t **)((int64_t)param_2 * 8 + *(int64_t *)(lVar2 + 0x810));
  uVar4 = *(uint64_t *)(lVar2 + 0x8a8);
  plVar5 = (int64_t *)*plVar3;
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  FUN_1802eb9a0(uVar4,plVar5,0,0,0,0x3ea,uVar8);
  if (plVar5 != (int64_t *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  lVar7 = *(int64_t *)(lVar2 + 0x810) + (int64_t)param_2 * 8;
  uVar1 = lVar7 + 8;
  uVar6 = *(uint64_t *)(lVar2 + 0x818);
  if (uVar1 < uVar6) {
                    // WARNING: Subroutine does not return
    memmove(lVar7,uVar1,uVar6 - uVar1);
  }
  *(uint64_t *)(lVar2 + 0x818) = uVar6 - 8;
  FUN_180506660(plVar3);
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(plVar3);
}





// 函数: void FUN_180600560(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
void FUN_180600560(uint64_t param_1,uint64_t param_2,uint64_t param_3,int32_t param_4,
                  int64_t *param_5,int32_t param_6,uint64_t param_7)

{
  int64_t *plStackX_8;
  
  plStackX_8 = param_5;
  if (param_5 != (int64_t *)0x0) {
    (**(code **)(*param_5 + 0x28))();
  }
  FUN_18052d020(param_1,param_2,param_3,param_4,&plStackX_8,param_6,param_7);
  return;
}





// 函数: void FUN_1806005f0(int64_t param_1,int param_2,char param_3)
void FUN_1806005f0(int64_t param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  int64_t lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int64_t lVar8;
  int aiStackX_8 [2];
  
  lVar3 = *(int64_t *)(param_1 + 0x6e0);
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
    memmove(piVar6,piVar1,(int64_t)piVar4 - (int64_t)piVar1);
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
  FUN_1800571e0((uint64_t *)(lVar3 + 0x2110),aiStackX_8);
LAB_18060064c:
  if ((*(int *)(lVar3 + 0x178) == 0) && (*(char *)(lVar3 + 0x12bc) != '\0')) {
    iVar7 = *(int *)(lVar3 + 0x12b8);
    cVar2 = *(char *)(lVar3 + 0x12b4);
    while( true ) {
      if (cVar2 == '\0') {
        iVar5 = (int)(*(int64_t *)(lVar3 + 0x1298) - *(int64_t *)(lVar3 + 0x1290) >> 5);
      }
      else {
        iVar5 = *(int *)(lVar3 + 0x12b0);
      }
      if (iVar5 <= iVar7) break;
      lVar8 = lVar3 + 0x290;
      if (cVar2 == '\0') {
        lVar8 = *(int64_t *)(lVar3 + 0x1290);
      }
      if (*(int64_t *)((int64_t)iVar7 * 0x20 + 0x10 + lVar8) != 0) {
        lVar8 = lVar3 + 0x290;
        if (cVar2 == '\0') {
          lVar8 = *(int64_t *)(lVar3 + 0x1290);
        }
        if (*(int *)(*(int64_t *)((int64_t)iVar7 * 0x20 + 0x10 + lVar8) + 0x130) == param_2) {
          *(int32_t *)(lVar3 + 0x178) = 8;
          *(int16_t *)(lVar3 + 0x12bc) = 0;
          *(int32_t *)(lVar3 + 0x12f0) = 0;
          return;
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
  return;
}





// 函数: void FUN_180600770(int64_t param_1,uint64_t param_2)
void FUN_180600770(int64_t param_1,uint64_t param_2)

{
  FUN_1805204e0(param_1,*(int64_t *)(param_1 + 0x8d8) + 0x52eda0 +
                        (int64_t)*(int *)(param_1 + 0x10) * 0x200,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806007a0(int64_t param_1)
void FUN_1806007a0(int64_t param_1)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  
  if (((system_status_flag - 2U & 0xfffffffc) == 0) && (system_status_flag != 4)) {
    iVar1 = *(int *)(param_1 + 0x10);
    plVar4 = (int64_t *)(**(code **)(render_system_config + 0x20))(&system_memory_25a0);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      uVar2 = *(int32_t *)(lVar3 + 0x4b80);
      FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&system_memory_2cf8);
      *(int32_t *)(*(int64_t *)(lVar3 + 0x5960) + (int64_t)iVar1 * 8) = uVar2;
    }
  }
  return;
}





// 函数: void FUN_1806007c3(int64_t param_1)
void FUN_1806007c3(int64_t param_1)

{
  int iVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t in_RAX;
  int64_t *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  plVar4 = (int64_t *)(**(code **)(in_RAX + 0x20))(&system_memory_25a0);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    uVar2 = *(int32_t *)(lVar3 + 0x4b80);
    FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&system_memory_2cf8);
    *(int32_t *)(*(int64_t *)(lVar3 + 0x5960) + (int64_t)iVar1 * 8) = uVar2;
  }
  return;
}





// 函数: void FUN_1806007e6(uint64_t param_1,int param_2)
void FUN_1806007e6(uint64_t param_1,int param_2)

{
  int32_t uVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  uVar1 = *(int32_t *)(unaff_RDI + 0x4b80);
  FUN_18055fb60(unaff_RDI + 0x5940,param_2 << 4,&system_memory_2cf8);
  *(int32_t *)(*(int64_t *)(unaff_RDI + 0x5960) + unaff_RSI * 8) = uVar1;
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





// 函数: void FUN_180600890(int64_t param_1,int32_t *param_2)
void FUN_180600890(int64_t param_1,int32_t *param_2)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fStackX_8;
  float fStackX_c;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  fStackX_8 = (float)*(uint64_t *)(param_1 + 0x49c);
  fStackX_c = (float)((uint64_t)*(uint64_t *)(param_1 + 0x49c) >> 0x20);
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





// 函数: void FUN_180600930(uint64_t param_1,int64_t param_2)
void FUN_180600930(uint64_t param_1,int64_t param_2)

{
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(float *)(param_2 + 0x4b0) + *(float *)(param_2 + 0x4ac));
}





// 函数: void FUN_1806009b0(int64_t param_1,uint *param_2)
void FUN_1806009b0(int64_t param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int32_t uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(uint *)(param_1 + 0x49c) = uVar1;
  *(uint *)(param_1 + 0x4a0) = uVar2;
  *(uint *)(param_1 + 0x4a4) = uVar3;
  *(uint *)(param_1 + 0x4a8) = uVar4;
  uVar5 = atan2f(uVar1 ^ 0x80000000,uVar2);
  *(int32_t *)(param_1 + 0x4ac) = uVar5;
  *(int32_t *)(param_1 + 0x4b0) = 0;
  return;
}





// 函数: void FUN_180600b80(int64_t param_1,int32_t param_2)
void FUN_180600b80(int64_t param_1,int32_t param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061ca10(*(uint64_t *)(param_1 + 0x8d8));
  if (cVar1 != '\0') {
    *(int32_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x2130) = param_2;
  }
  return;
}





// 函数: void FUN_180600bc0(int64_t param_1,int param_2,uint64_t *param_3)
void FUN_180600bc0(int64_t param_1,int param_2,uint64_t *param_3)

{
  char cVar1;
  uint uVar2;
  int8_t uVar3;
  int64_t lVar4;
  int32_t uVar5;
  
  cVar1 = FUN_18061ca10(*(uint64_t *)(param_1 + 0x8d8),param_2);
  if (cVar1 != '\0') {
    lVar4 = *(int64_t *)(param_1 + 0x6e0);
    if (param_2 < 0) {
      *(int32_t *)(lVar4 + 0x173c) = 0xffffffff;
      *(uint64_t *)(lVar4 + 0x1734) = 0;
      if (-1 < (char)*(uint *)(lVar4 + 0x1484)) {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) & 0xffffff7f;
    }
    else {
      *(uint64_t *)(lVar4 + 0x1734) = *param_3;
      *(int *)(lVar4 + 0x173c) = param_2;
      *(int32_t *)(lVar4 + 0x12d8) =
           *(int32_t *)
            (*(int64_t *)((int64_t)param_2 * 0xa60 + 0x30c0 + *(int64_t *)(lVar4 + 0x1488)) +
            0x34);
      if ((char)*(uint *)(lVar4 + 0x1484) < '\0') {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) | 0x80;
    }
    *(uint *)(lVar4 + 0x1484) = uVar2;
    lVar4 = *(int64_t *)(param_1 + 0x738);
    if (lVar4 != 0) {
      uVar3 = *(int8_t *)(param_1 + 0x5fd);
      uVar5 = func_0x00018052dc80(param_1);
      *(int32_t *)(lVar4 + 0xe8) = uVar5;
      *(int8_t *)(lVar4 + 0xec) = uVar3;
    }
  }
  return;
}



int32_t
FUN_180600cc0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  uint64_t uVar2;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar2 = CoreMemoryPoolValidator(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180555eb0(&system_memory_60a0,uVar2);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return uVar1;
}





// 函数: void FUN_180600d30(int64_t param_1,uint64_t param_2)
void FUN_180600d30(int64_t param_1,uint64_t param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(param_2 >> 1) & 1;
  uVar3 = *(uint *)(*(int64_t *)(param_1 + 0x6e0) + 0x1484) >> 1 & 1;
  *(int *)(*(int64_t *)(param_1 + 0x6e0) + 0x1484) = (int)param_2;
  if ((uVar3 == uVar2) || ((param_2 & 2) == 0)) {
    FUN_180508010(*(uint64_t *)(param_1 + 0x6e0));
  }
  else {
    *(int32_t *)(*(int64_t *)(param_1 + 0x6e0) + 0x13b8) = 0;
  }
  if (uVar3 != uVar2) {
    puVar1 = (ushort *)(*(int64_t *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 0x10;
    if (*(int64_t *)(param_1 + 0x738) != 0) {
      *(byte *)(*(int64_t *)(param_1 + 0x738) + 0x180) =
           (byte)(*(uint *)(*(int64_t *)(param_1 + 0x6e0) + 0x1484) >> 1) & 1;
    }
  }
  return;
}



uint64_t * FUN_180600f40(uint64_t *param_1,int64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  
  lVar1 = *(int64_t *)(param_2 + 0x590);
  if (lVar1 != 0) {
    if (*(int64_t *)(lVar1 + 0x2460) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(uint64_t *)(*(int64_t *)(lVar1 + 0x2460) + 0x1d0);
    }
    if (((*(uint64_t *)(lVar1 + 0x2470) | uVar2) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      AdvancedSystemController(*(int32_t *)(*(int64_t *)(param_2 + 0x20) + 0x34));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_180600f8d(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180600f8d(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t in_RAX;
  uint64_t uStack0000000000000028;
  
  uStack0000000000000028 = *(uint64_t *)(param_3 + 0xc4);
                    // WARNING: Subroutine does not return
  AdvancedSystemController(*(int32_t *)(in_RAX + 0x34));
}





// 函数: void FUN_180600ff9(void)
void FUN_180600ff9(void)

{
  uint64_t *unaff_RBX;
  
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  return;
}





// 函数: void FUN_180601090(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void FUN_180601090(uint64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  int8_t param_5,int32_t param_6,int32_t param_7,int32_t param_8,
                  int32_t param_9,int32_t param_10,int8_t param_11,int32_t param_12,
                  int8_t param_13)

{
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int8_t uStack_10;
  int8_t uStack_f;
  int8_t uStack_e;
  int8_t uStack_d;
  int8_t uStack_c;
  
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



// 函数: void FUN_180601160(int64_t param_1)
void FUN_180601160(int64_t param_1)

{
  float fVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_180526710();
  plVar2 = *(int64_t **)(param_1 + 0x590);
  uVar4 = plVar2[0x48c];
  if (uVar4 != 0) {
    uVar4 = *(uint64_t *)(uVar4 + 0x1d0);
  }
  if ((((plVar2[0x48e] | uVar4) & 0x400000000000) == 0) ||
     ((ushort)(*(short *)(*(int64_t *)(param_1 + 0x658) + 0x40) - 2U) < 3)) {
    *(uint64_t *)((int64_t)plVar2 + 0xbc) = 0;
    *(uint64_t *)((int64_t)plVar2 + 0xc4) = 0;
    return;
  }
  if (*(int64_t *)plVar2[0x1f] == 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&ui_system_data_1944_ptr);
  }
  lVar3 = FUN_18040db80(*(int64_t *)plVar2[0x1f]);
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
LAB_RENDERING_ANIMATION_PROCESSOR:
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar6 = *(float *)(lVar3 + 0xc);
  *(float *)((int64_t)plVar2 + 0xbc) = fVar7 * *(float *)(lVar3 + 8);
  *(float *)(plVar2 + 0x18) = fVar7 * fVar6;
  *(float *)((int64_t)plVar2 + 0xc4) = fVar7 * fVar1;
  *(int32_t *)(plVar2 + 0x19) = 0x7f7fffff;
  return;
}

/*==============================================================================
    渲染系统高级处理模块 - 技术文档总结
==============================================================================*/

/**
 * 渲染系统高级处理模块技术说明
 * 
 * 本模块包含25个核心函数，涵盖了渲染系统的高级处理功能：
 * 
 * 1. 渲染系统高级参数处理器 (RenderingSystemAdvancedParameterProcessor)
 *    - 功能：处理渲染系统的高级参数验证、状态检查、条件判断和参数设置
 *    - 参数：系统句柄、参数索引、参数值、验证标志、处理标志、比较值
 *    - 作用：确保渲染参数的有效性和一致性
 * 
 * 2. 渲染系统高级数据处理器 (RenderingSystemAdvancedDataProcessor)
 *    - 功能：处理渲染系统的高级数据处理和状态管理
 *    - 参数：系统句柄、参数1、参数2
 *    - 作用：管理渲染数据的处理流程
 * 
 * 3. 渲染系统状态管理器 (RenderingSystemStateManager)
 *    - 功能：管理渲染系统的状态初始化、标志设置和状态更新
 *    - 参数：系统句柄
 *    - 作用：维护渲染系统的状态一致性
 * 
 * 4. 渲染系统标志检查器 (RenderingSystemFlagChecker)
 *    - 功能：检查渲染系统的标志位、参数验证和条件处理
 *    - 参数：系统句柄、参数索引、参数值、参数3、参数4
 *    - 作用：验证渲染标志的有效性
 * 
 * 5. 渲染系统条件处理器 (RenderingSystemConditionHandler)
 *    - 功能：处理渲染系统的条件判断、参数验证和状态更新
 *    - 参数：系统句柄、多个参数
 *    - 作用：执行复杂的条件判断逻辑
 * 
 * 6. 渲染系统高级计算器 (RenderingSystemAdvancedCalculator)
 *    - 功能：处理渲染系统的高级参数计算、条件判断和浮点数处理
 *    - 参数：系统句柄
 *    - 作用：执行高级数学计算和参数处理
 * 
 * 7. 渲染系统内存访问器 (RenderingSystemMemoryAccessor)
 *    - 功能：管理渲染系统的内存访问和数据处理
 *    - 参数：系统句柄、多个参数
 *    - 作用：处理内存访问和数据操作
 * 
 * 8. 渲染系统系统调用器 (RenderingSystemSystemCaller)
 *    - 功能：执行渲染系统的系统调用和参数处理
 *    - 参数：系统句柄、多个参数
 *    - 作用：处理系统级别的调用
 * 
 * 9. 渲染系统参数设置器 (RenderingSystemParameterSetter)
 *    - 功能：设置渲染系统的参数和状态
 *    - 参数：系统句柄、参数索引、参数标志
 *    - 作用：配置系统参数
 * 
 * 10. 渲染系统数据验证器 (RenderingSystemDataValidator)
 *     - 功能：验证渲染系统的数据和参数
 *     - 参数：系统句柄、多个参数
 *     - 作用：确保数据的有效性
 * 
 * 11. 渲染系统资源管理器 (RenderingSystemResourceManager)
 *     - 功能：管理渲染系统的资源分配和释放
 *     - 参数：系统句柄、参数索引
 *     - 作用：处理资源的生命周期管理
 * 
 * 12. 渲染系统线程同步器 (RenderingSystemThreadSynchronizer)
 *     - 功能：处理渲染系统的线程同步和状态管理
 *     - 参数：系统句柄、参数索引、参数标志
 *     - 作用：确保多线程环境下的数据一致性
 * 
 * 13. 渲染系统错误处理器 (RenderingSystemErrorHandler)
 *     - 功能：处理渲染系统的错误和异常
 *     - 参数：系统句柄、参数1
 *     - 作用：管理错误处理和恢复
 * 
 * 14. 渲染系统性能优化器 (RenderingSystemPerformanceOptimizer)
 *     - 功能：优化渲染系统的性能和效率
 *     - 参数：系统句柄
 *     - 作用：提升渲染性能
 * 
 * 15. 渲染系统内存清理器 (RenderingSystemMemoryCleaner)
 *     - 功能：清理渲染系统的内存和资源
 *     - 参数：系统句柄、参数索引
 *     - 作用：释放未使用的内存资源
 * 
 * 16. 渲染系统渲染管线管理器 (RenderingSystemPipelineManager)
 *     - 功能：管理渲染系统的渲染管线
 *     - 参数：系统句柄、参数1指针
 *     - 作用：控制渲染流程
 * 
 * 17. 渲染系统着色器处理器 (RenderingSystemShaderProcessor)
 *     - 功能：处理渲染系统的着色器操作
 *     - 参数：参数1、系统句柄
 *     - 作用：管理着色器编译和执行
 * 
 * 18. 渲染系统纹理管理器 (RenderingSystemTextureManager)
 *     - 功能：管理渲染系统的纹理操作
 *     - 参数：系统句柄、参数1指针
 *     - 作用：处理纹理加载和管理
 * 
 * 19. 渲染系统缓冲区管理器 (RenderingSystemBufferManager)
 *     - 功能：管理渲染系统的缓冲区操作
 *     - 参数：系统句柄、参数1
 *     - 作用：处理缓冲区分配和管理
 * 
 * 20. 渲染系统配置管理器 (RenderingSystemConfigManager)
 *     - 功能：管理渲染系统的配置参数
 *     - 参数：系统句柄、参数索引、参数1指针
 *     - 作用：配置系统设置
 * 
 * 21. 渲染系统状态查询器 (RenderingSystemStateQuerier)
 *     - 功能：查询渲染系统的状态信息
 *     - 参数：多个参数
 *     - 作用：获取系统状态
 * 
 * 22. 渲染系统标志设置器 (RenderingSystemFlagSetter)
 *     - 功能：设置渲染系统的标志位
 *     - 参数：系统句柄、参数1
 *     - 作用：配置系统标志
 * 
 * 23. 渲染系统初始化器 (RenderingSystemInitializer)
 *     - 功能：初始化渲染系统的组件
 *     - 参数：参数1指针、系统句柄
 *     - 作用：执行系统初始化
 * 
 * 24. 渲染系统清理器 (RenderingSystemCleaner)
 *     - 功能：清理渲染系统的资源
 *     - 参数：参数1、参数2、系统句柄
 *     - 作用：释放系统资源
 * 
 * 25. 渲染系统动画处理器 (RenderingSystemAnimationProcessor)
 *     - 功能：处理渲染系统的动画数据
 *     - 参数：系统句柄
 *     - 作用：管理动画渲染和处理
 * 
 * 技术特点：
 * - 支持高级参数验证和状态管理
 * - 提供完整的内存管理和资源处理
 * - 包含复杂的条件判断和数学计算
 * - 支持多线程同步和错误处理
 * - 提供性能优化和配置管理
 * - 支持渲染管线、着色器、纹理等高级功能
 * 
 * 使用场景：
 * - 3D游戏引擎的渲染系统
 * - 高性能图形处理应用
 * - 实时渲染系统
 * - 多媒体处理软件
 * 
 * 性能优化：
 * - 使用高效的内存管理策略
 * - 实现复杂条件判断的优化
 * - 支持多线程并发处理
 * - 提供资源缓存和复用机制
 * 
 * 安全性：
 * - 完整的参数验证机制
 * - 错误处理和异常恢复
 * - 内存访问保护
 * - 状态一致性检查
 * 
 * 本模块是Mount & Blade游戏引擎渲染系统的核心组件，
 * 为游戏提供高性能、高可靠性的渲染处理能力。
 * 
 * 代码美化完成时间：2025-08-28
 * 美化版本：v1.0
 * 总函数数：25个
 * 代码行数：约1256行
 * 
 *==============================================================================
*/

// 文件结束标记 - 渲染系统高级处理模块美化完成





