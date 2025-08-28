#include "TaleWorlds.Native.Split.h"

// 03_rendering_part065.c - 渲染系统高级参数控制和资源管理模块
// 本模块包含12个核心函数，主要负责渲染系统的高级参数控制、资源管理、内存清理和系统初始化

// 常量定义
#define RENDERING_SYSTEM_MAX_PARAMS 0x400        // 渲染系统最大参数数量
#define RENDERING_STACK_GUARD_VALUE 0xfffffffffffffffe  // 栈保护值
#define RENDERING_MEMORY_ALIGNMENT 0x40           // 内存对齐大小
#define RENDERING_TEXTURE_MAX_SIZE 0xffffffff     // 纹理最大尺寸
#define RENDERING_STATE_ENABLED 1                 // 渲染状态启用
#define RENDERING_STATE_DISABLED 0                // 渲染状态禁用
#define RENDERING_FLOAT_PRECISION 1e-05           // 浮点精度
#define RENDERING_TIME_MODULO 1000000000          // 时间模数值
#define RENDERING_QUEUE_PROCESS_TIMEOUT 0x3b     // 队列处理超时
#define RENDERING_CLEANUP_TIMEOUT 0xffffffff     // 清理超时值

// 函数别名定义
#define RenderingSystem_AdvancedParameterControl FUN_180301d10
#define RenderingSystem_ExecuteRenderCommand FUN_180301ec0
#define RenderingSystem_UpdateRenderContext FUN_180301f30
#define RenderingSystem_CalculateTextureCoordinates FUN_180302090
#define RenderingSystem_ProcessRenderData FUN_180302270
#define RenderingSystem_ComplexResourceManagement FUN_180302370
#define RenderingSystem_InitializeRenderState FUN_180302c30
#define RenderingSystem_UpdateRenderParameters FUN_1803033b0
#define RenderingSystem_CleanupRenderResources FUN_1803034a0
#define RenderingSystem_FinalizeRenderContext FUN_1803034b9
#define RenderingSystem_ExecuteRenderCleanup FUN_180303569
#define RenderingSystem_CompleteRenderShutdown FUN_180303590

// 全局变量引用
extern longlong _DAT_180c8ed30;    // 渲染时间数据
extern longlong _DAT_180c8ed18;    // 渲染上下文数据
extern longlong _DAT_180c86950;    // 渲染配置数据
extern longlong _DAT_180c86890;    // 系统状态数据
extern longlong _DAT_180c8a9c8;    // 渲染器状态数据
extern longlong _DAT_180c86920;    // 渲染参数数据
extern longlong _DAT_180c82868;    // 渲染缓存数据
extern longlong _DAT_180bf00a8;    // 栈保护数据

// 字符串常量
extern char UNK_180a0b780[];       // 渲染字符串常量1
extern char UNK_180a19e38[];       // 渲染字符串常量2
extern char UNK_180a19e28[];       // 渲染字符串常量3
extern char system_buffer_ptr[];       // 渲染字符串常量4
extern char UNK_180a0c2b8[];       // 渲染字符串常量5

// 函数指针常量
extern void *UNK_180a3c3e0;        // 渲染函数指针1
extern void *UNK_18098bcb0;        // 渲染函数指针2
extern void *UNK_180a144f8;        // 渲染函数指针3
extern void *UNK_180a21720;        // 渲染函数指针4
extern void *UNK_180a21690;        // 渲染函数指针5
extern void *UNK_1809fcc28;        // 渲染函数指针6

// 跳转表常量
extern code *UNK_180302310;        // 渲染跳转表1

// 外部函数声明
extern void FUN_1801a3620(uint64_t param1, void *param2, uint64_t param3, uint64_t param4, uint64_t param5);
extern void FUN_1801c2360(longlong param1, longlong **param2);
extern void FUN_1800b6620(void);
extern void FUN_18064e900(void);
extern uint64_t FUN_180302c30(longlong param1);
extern longlong FUN_18062b420(longlong param1, longlong param2, int8_t param3);
extern longlong func_0x00018066b9a0(void *param1);
extern void FUN_18066bdc0(longlong param1, void *param2, void *param3, uint64_t param4, uint64_t param5);
extern void FUN_1800571e0(uint64_t param1, longlong param2);
extern longlong FUN_18019ad80(longlong param1, longlong param2);
extern char FUN_1802aa800(longlong param1, longlong **param2);
extern void FUN_180286e40(longlong param1);
extern void FUN_18024b8d0(longlong param1);
extern longlong FUN_1800b1230(longlong param1, longlong **param2, void **param3, uint *param4);
extern longlong FUN_1800b1d80(uint64_t param1, longlong **param2, void **param3, uint *param4);
extern void FUN_18019da10(longlong param1, longlong param2);
extern void FUN_18005e6a0(longlong param1, longlong **param2, longlong param3);
extern void FUN_18024cb50(longlong param1, longlong param2);
extern void FUN_180246810(longlong param1);
extern longlong FUN_180244ff0(longlong param1);
extern void FUN_180056f10(longlong param1, longlong param2);
extern void FUN_1801c0f40(longlong param1);
extern void FUN_180198980(longlong param1, longlong *param2, uint64_t param3, uint64_t param4, longlong param5);
extern void FUN_1801b32d0(uint64_t param1);
extern void FUN_1803048f0(longlong param1, uint64_t *param2, uint64_t param3, uint64_t param4, uint64_t param5);
extern void FUN_180095420(longlong param1);
extern void FUN_1808fc8a8(longlong param1, longlong param2, longlong param3, void *param4);
extern void FUN_180045af0(void);
extern void FUN_1808fc050(ulonglong param1);

/**
 * 渲染系统高级参数控制函数
 * 设置渲染系统的高级参数，包括渲染目标、纹理参数、内存管理等
 * 
 * @param render_context 渲染上下文指针
 * @param param2 参数2（用途待定）
 * @param param3 参数3（用途待定）
 * @param param4 参数4（用途待定）
 */
void RenderingSystem_AdvancedParameterControl(longlong render_context, uint64_t param2, uint64_t param3, uint64_t param4)

{
  longlong context_data1;
  longlong context_data2;
  longlong context_data3;
  uint64_t render_params;
  longlong *resource_array;
  ulonglong resource_index;
  longlong resource_handle;
  uint64_t stack_params[12];
  int32_t render_flags[4];
  int8_t render_state[3];
  int32_t texture_params;
  int8_t cleanup_flag;
  uint64_t memory_info[4];
  longlong cleanup_counter;
  uint64_t queue_info[3];
  int32_t process_flags;
  
  // 检查渲染状态
  if (*(int *)(render_context + 0xe0) == RENDERING_STATE_DISABLED) {
    // 初始化渲染参数
    queue_info[0] = 0;
    render_flags[0] = 0;
    render_flags[1] = RENDERING_TEXTURE_MAX_SIZE;
    render_state[1] = RENDERING_STATE_DISABLED;
    texture_params = RENDERING_TEXTURE_MAX_SIZE;
    cleanup_flag = RENDERING_STATE_ENABLED;
    memory_info[0] = 0;
    cleanup_counter = 0;
    queue_info[1] = 0;
    memory_info[1] = 0;
    process_flags = 3;
    queue_info[2] = 0;
    
    // 设置渲染状态
    render_state[0] = CONCAT11(*(int8_t *)(render_context + 0x6c2), RENDERING_STATE_ENABLED);
    
    // 调用渲染参数设置函数
    FUN_1801a3620(*(uint64_t *)(render_context + 0x6d0), &queue_info[0], param3, param4, RENDERING_STACK_GUARD_VALUE);
    FUN_1801c2360(*(longlong *)(render_context + 0x6d0) + 0x60830, &resource_array);
    
    // 资源处理循环
    do {
      if (resource_index != *(ulonglong *)(*(longlong *)(render_context + 0x6d0) + 0x60838)) {
        // 更新资源状态
        *(byte *)(resource_handle + 0x2e9) = *(byte *)(resource_handle + 0x2e9) | 2;
        context_data1 = *resource_array;
        
        // 遍历资源数组
        do {
          resource_index = resource_index + 1;
          context_data2 = (resource_index & 0xffffffff) * 0x10;
          context_data3 = context_data2 + 8 + context_data1;
          
          // 检查资源有效性
          if ((*(ulonglong *)(context_data2 + context_data1) & 0xffffffff00000000) == 0) {
            context_data3 = 0;
          }
          
          if (context_data3 != 0) {
            resource_handle = *(longlong *)(context_data1 + 8 + (resource_index & 0xffffffff) * 0x10);
            break;
          }
        } while (resource_index != resource_array[1]);
      }
    } while (resource_index != *(ulonglong *)(*(longlong *)(render_context + 0x6d0) + 0x60838));
    
    // 执行清理操作
    FUN_1800b6620();
    if (cleanup_counter != 0) {
      // 执行内存清理
      FUN_18064e900();
    }
    
    // 更新渲染时间
    *(float *)(render_context + 0xe4) = (float)(_DAT_180c8ed30 % RENDERING_TIME_MODULO) * RENDERING_FLOAT_PRECISION;
  }
  
  // 设置渲染参数
  render_params = FUN_180302c30(render_context);
  *(uint64_t *)(render_context + 0x518) = render_params;
  return;
}

/**
 * 渲染系统命令执行函数
 * 执行渲染系统命令，处理渲染状态和参数更新
 * 
 * @param render_params 渲染参数指针
 * @return 执行结果
 */
uint64_t RenderingSystem_ExecuteRenderCommand(longlong *render_params)

{
  longlong context_data;
  
  // 检查渲染命令类型
  if (*(code **)(*render_params + 0x90) == (code *)&UNK_180302310) {
    context_data = render_params[0xda];
    
    // 验证渲染上下文状态
    if ((((*(longlong **)(context_data + 0x318) != (longlong *)0x0) && 
         (*(char *)(context_data + 0x2a61) != '\0')) &&
        (*(char *)(context_data + 0x2a62) != '\0')) && 
        (*(int *)(_DAT_180c8a9c8 + 0xaf0) != 0)) {
      
      // 执行渲染命令
      (**(code **)(**(longlong **)(context_data + 0x318) + 0x38))();
      return 0;
    }
  }
  else {
    // 执行默认渲染命令
    (**(code **)(*render_params + 0x90))();
  }
  return 0;
}

/**
 * 渲染系统上下文更新函数
 * 更新渲染系统的上下文信息，管理资源分配和上下文切换
 * 
 * @param context_id 上下文ID
 * @param render_context 渲染上下文指针
 */
void RenderingSystem_UpdateRenderContext(ulonglong context_id, longlong *render_context)

{
  longlong *previous_context;
  longlong *current_context;
  uint64_t *resource_array;
  longlong memory_block;
  uint64_t *resource_pointer;
  uint64_t *next_resource;
  uint64_t resource_value;
  bool insertion_flag;
  uint64_t stack_param;
  
  stack_param = RENDERING_STACK_GUARD_VALUE;
  if (render_context != (longlong *)0x0) {
    (**(code **)(*render_context + 0x28))(render_context);
  }
  previous_context = *(longlong **)(context_id + 0x6d0);
  *(longlong **)(context_id + 0x6d0) = render_context;
  if (previous_context != (longlong *)0x0) {
    (**(code **)(*previous_context + 0x38))();
  }
  current_context = *(longlong *)(context_id + 0x6d0);
  if (current_context == 0) {
    return;
  }
  resource_array = (uint64_t *)(current_context + 0x60b98);
  memory_block = FUN_18066b9a0(render_system_memory_base, 0x28, *(int8_t *)(current_context + 0x60bc0));
  *(ulonglong *)(memory_block + 0x20) = context_id;
  insertion_flag = true;
  resource_pointer = resource_array;
  next_resource = *(uint64_t **)(current_context + 0x60ba8);
  
  // 查找合适的插入位置
  while (next_resource != (uint64_t *)0x0) {
    insertion_flag = context_id < (ulonglong)next_resource[4];
    resource_pointer = next_resource;
    if (insertion_flag) {
      next_resource = (uint64_t *)next_resource[1];
    }
    else {
      next_resource = (uint64_t *)*next_resource;
    }
  }
  
  next_resource = resource_pointer;
  if (insertion_flag) {
    if (resource_pointer == *(uint64_t **)(current_context + 0x60ba0)) {
      // 执行插入操作
      FUN_18066bdc0(current_context, resource_pointer, (void *)0x0, 0, 0);
    }
    next_resource = (uint64_t *)FUN_18066b9a0(resource_pointer, 0x10, *(int8_t *)(current_context + 0x60bc0));
  }
  
  if (*(ulonglong *)(memory_block + 0x20) <= (ulonglong)next_resource[4]) {
    // 处理资源冲突
    FUN_1800571e0(memory_block, next_resource);
  }
  
  // 设置资源位置标志
  if ((resource_pointer == resource_array) || 
      (*(ulonglong *)(memory_block + 0x20) < (ulonglong)resource_pointer[4])) {
    resource_value = 0;
  }
  else {
    resource_value = 1;
  }
  
  // 执行资源插入操作
  FUN_1808fc8a8(memory_block, resource_pointer, resource_array, resource_value, stack_param);
}

/**
 * 渲染系统纹理坐标计算函数
 * 计算渲染系统的纹理坐标，支持3D到2D的坐标变换和投影计算
 * 
 * @param render_context 渲染上下文指针
 * @param target_coords 目标坐标数组
 * @param source_coords 源坐标数组
 * @return 计算后的目标坐标数组指针
 */
float *RenderingSystem_CalculateTextureCoordinates(longlong render_context, float *target_coords, float *source_coords)

{
  float coord_diff_x;
  float coord_diff_y;
  float coord_diff_z;
  float transform_x;
  float transform_y;
  float transform_z;
  float result_x;
  float result_y;
  float result_z;
  float matrix_value_1;
  float matrix_value_2;
  float matrix_value_3;
  
  // 计算坐标差值
  coord_diff_z = source_coords[2] - *(float *)(render_context + 0x7d8);
  coord_diff_y = *source_coords - *(float *)(render_context + 2000);
  result_z = source_coords[1] - *(float *)(render_context + 0x7d4);
  matrix_value_1 = *(float *)(render_context + 0x28);
  matrix_value_2 = *(float *)(render_context + 0x20);
  matrix_value_3 = *(float *)(_DAT_180c86950 + 0x17f0);
  
  // 应用矩阵变换
  result_x = *(float *)(render_context + 0x7a4) * coord_diff_z + 
             *(float *)(render_context + 0x7a0) * coord_diff_y + 
             *(float *)(render_context + 0x7a8) * result_z;
  result_y = *(float *)(render_context + 0x7b4) * coord_diff_z + 
             *(float *)(render_context + 0x7b0) * coord_diff_y + 
             *(float *)(render_context + 0x7b8) * result_z;
  coord_diff_z = *(float *)(render_context + 0x7c4) * coord_diff_z + 
                 *(float *)(render_context + 0x7c0) * coord_diff_y + 
                 *(float *)(render_context + 0x7c8) * result_z;
  
  // 处理透视投影
  if (*(char *)(render_context + 0x7e0) != '\0') {
    coord_diff_y = 1.0 / coord_diff_z;
    result_x = -(*(float *)(render_context + 0x7f4) * result_x * coord_diff_y);
    result_y = -(*(float *)(render_context + 0x7f4) * result_y * coord_diff_y);
    if (0.0 < coord_diff_z) {
      result_x = -1.0;
      result_y = -1.0;
    }
  }
  
  // 计算最终坐标
  coord_diff_z = *(float *)(render_context + 0x7f0);
  coord_diff_y = *(float *)(render_context + 0x7ec);
  *target_coords = ((result_x - *(float *)(render_context + 0x7e4)) *
                   ((*(float *)(render_context + 0x24) - *(float *)(render_context + 0x1c)) /
                    *(float *)(_DAT_180c86950 + 0x17ec))) /
                   (*(float *)(render_context + 0x7e8) - *(float *)(render_context + 0x7e4));
  target_coords[1] = 1.0 - ((result_y - coord_diff_z) * ((matrix_value_1 - matrix_value_2) / matrix_value_3)) / (coord_diff_y - coord_diff_z);
  return target_coords;
}

/**
 * 渲染系统数据处理函数
 * 处理渲染系统的路径参数和资源定位，支持多种路径格式和资源管理
 * 
 * @param render_context 渲染上下文指针
 * @param path_param 路径参数
 */
void RenderingSystem_ProcessRenderData(longlong render_context, uint64_t path_param)

{
  void *path_pointer;
  longlong context_data;
  void *default_path;
  
  if (*(longlong *)(render_context + 0x6d0) != 0) {
    path_pointer = *(void **)(*(longlong *)(render_context + 0x6d0) + 0x4e0);
    default_path = &UNK_180a0b780;
    if (path_pointer != (void *)0x0) {
      default_path = path_pointer;
    }
    context_data = FUN_18019ad80(default_path, UNK_180a19e38);
    if (context_data == 0) {
      if (*(char *)(render_context + 0xdd) == '\0') {
        return;
      }
      context_data = *(longlong *)(render_context + 0x6d0);
    }
    else {
      context_data = *(longlong *)(render_context + 0x6d0);
      if (*(char *)(context_data + 0xa8) != '\0') {
        return;
      }
    }
    // 处理路径参数
    FUN_180286e40(path_param);
    FUN_18024b8d0(context_data + 0xa0);
    FUN_180286e40(path_param);
    FUN_18024b8d0(*(longlong *)(render_context + 0x6d0) + 0xa4);
  }
  return;
}

/**
 * 渲染系统复杂资源管理函数
 * 管理渲染系统的复杂资源操作，包括内存分配、状态管理和资源清理
 * 
 * @param render_context 渲染上下文指针
 * @param data_context 数据上下文指针
 */
void RenderingSystem_ComplexResourceManagement(longlong *render_context, longlong *data_context)

{
  longlong context_manager;
  longlong resource_manager;
  uint64_t *data_array;
  code *execution_pointer;
  bool process_flag_1;
  bool process_flag_2;
  bool process_flag_3;
  bool process_flag_4;
  char state_flag;
  uint width_param;
  uint height_param;
  longlong *object_pointer;
  char context_state;
  int8_t data_flag;
  int32_t process_param;
  longlong memory_block_1;
  longlong memory_block_2;
  int dimension_param;
  uint64_t stack_param;
  int8_t data_buffer[32];
  int32_t buffer_param_1;
  longlong *buffer_pointer_1;
  int buffer_size_1;
  int buffer_size_2;
  uint64_t stack_value_1;
  longlong *buffer_pointer_2;
  longlong *buffer_pointer_3;
  uint buffer_width;
  uint buffer_height;
  int32_t buffer_param_2;
  uint64_t stack_value_2;
  int32_t buffer_param_3;
  int32_t buffer_param_4;
  longlong *buffer_pointer_4;
  uint buffer_param_5;
  uint buffer_param_6;
  int32_t buffer_param_7;
  int32_t buffer_param_8;
  int32_t buffer_param_9;
  uint64_t stack_value_3;
  uint64_t stack_value_4;
  int8_t stack_flag_1;
  uint64_t stack_value_5;
  int32_t buffer_param_10;
  int8_t stack_flag_2;
  longlong stack_value_6;
  longlong stack_value_7;
  longlong *buffer_pointer_5;
  longlong *buffer_pointer_6;
  longlong *buffer_pointer_7;
  longlong *buffer_pointer_8;
  longlong *buffer_pointer_9;
  uint64_t stack_value_8;
  void *data_pointer_1;
  int8_t *data_pointer_2;
  int32_t buffer_param_11;
  int8_t data_buffer_2[136];
  void *data_pointer_3;
  int8_t *data_pointer_4;
  int32_t buffer_param_12;
  int8_t data_buffer_3[136];
  ulonglong checksum_value;
  
  stack_value_8 = RENDERING_STACK_GUARD_VALUE;
  checksum_value = _DAT_180c86890 ^ (ulonglong)data_buffer;
  context_manager = render_context[0xa3];
  resource_manager = render_context[0xda];
  dimension_param = 0;
  memory_block_1 = *(longlong *)(resource_manager + 0x60be8);
  buffer_pointer_3 = data_context;
  
  // 处理数据块
  if (*(longlong *)(resource_manager + 0x60bf0) - memory_block_1 >> 6 != 0) {
    memory_block_2 = 0;
    do {
      object_pointer = *(longlong **)(memory_block_2 + 0x38 + memory_block_1);
      stack_value_7 = resource_manager;
      stack_value_6 = context_manager;
      if (object_pointer == (longlong *)0x0) {
        FUN_180045af0();
        execution_pointer = (code *)FUN_180244ff0(3);
        (*execution_pointer)();
        return;
      }
      FUN_180198980(object_pointer, &stack_value_6, 0, 0, 0);
      dimension_param = dimension_param + 1;
      memory_block_2 = memory_block_2 + 0x40;
      memory_block_1 = *(longlong *)(resource_manager + 0x60be8);
    } while ((ulonglong)(longlong)dimension_param < 
             (ulonglong)(*(longlong *)(resource_manager + 0x60bf0) - memory_block_1 >> 6));
  }
  
  // 处理渲染状态
  if (*(char *)(resource_manager + 0x10) == '\0') {
    FUN_1801b32d0(resource_manager);
  }
  *(int8_t *)(resource_manager + 0x10) = 0;
  buffer_size_2 = (int)*(float *)(context_manager + 0x11c24);
  buffer_size_1 = (int)*(float *)(context_manager + 0x11c20);
  resource_manager = *(longlong *)(_DAT_180c82868 + 0x7ab8);
  
  // 检查系统状态
  if ((resource_manager == 0) || 
     (state_flag = FUN_1802aa800(context_manager, (longlong **)0x0), state_flag == '\0')) {
    state_flag = '\0';
  }
  else {
    state_flag = '\x01';
  }
  
  context_state = (char)render_context[0x10];
  if (context_state != state_flag) {
    *(char *)(render_context + 0x10) = state_flag;
    (**(code **)(*render_context + 0x70))(render_context);
    context_state = (char)render_context[0x10];
  }
  
  if (context_state == '\0') {
    object_pointer = (longlong *)CONCAT44(buffer_size_2, buffer_size_1);
  }
  else if ((*(char *)(resource_manager + 0xd8) == '\0') || 
           (*(int *)(_DAT_180c86920 + 0x540) + -1 < 0)) {
    object_pointer = (longlong *)CONCAT44(buffer_size_2, buffer_size_1);
    buffer_pointer_1 = object_pointer;
  }
  else {
    FUN_1800b1230(resource_manager, (longlong **)0x0, (void **)0x0, (uint *)0x0);
    object_pointer = buffer_pointer_1;
  }
  
  buffer_pointer_2 = object_pointer;
  stack_value_1 = object_pointer;
  
  // 处理渲染参数
  if (*(int *)(context_manager + 0x1bdc) == 0) {
    *(int *)(context_manager + 0x3588) = (int)render_context[8];
    *(int32_t *)(context_manager + 0x358c) = *(int32_t *)((longlong)render_context + 0x44);
    *(int *)(context_manager + 0x3590) = (int)*(float *)(render_context + 9);
    *(int *)(context_manager + 0x3594) = (int)*(float *)((longlong)render_context + 0x4c);
    *(longlong *)(context_manager + 0x3598) = render_context[0xb];
    *(longlong *)(context_manager + 0x35a0) = render_context[0xc];
    *(longlong *)(context_manager + 0x35a8) = render_context[0xd];
    *(longlong *)(context_manager + 0x35b0) = render_context[0xe];
    *(longlong *)(context_manager + 0x35b8) = render_context[10];
    stack_param = *(uint64_t *)((longlong)render_context + 0x24);
    *(uint64_t *)(context_manager + 0x11c18) = *(uint64_t *)((longlong)render_context + 0x1c);
    *(uint64_t *)(context_manager + 0x11c20) = stack_param;
    *(uint64_t *)(context_manager + 0x11c28) = *(uint64_t *)((longlong)render_context + 0x2c);
    *(float *)(context_manager + 0x11c20) = (float)(int)object_pointer;
    *(float *)(context_manager + 0x11c24) = (float)(int)((ulonglong)object_pointer >> 0x20);
  }
  else {
    width_param = *(uint *)(context_manager + 0x1be0);
    height_param = *(uint *)(context_manager + 0x1be4);
    *(uint *)(context_manager + 0x3588) = width_param;
    *(uint *)(context_manager + 0x358c) = height_param;
    *(uint *)(context_manager + 0x3590) = width_param;
    *(uint *)(context_manager + 0x3594) = height_param;
    *(float *)(context_manager + 0x11c20) = (float)(int)width_param;
    *(float *)(context_manager + 0x11c24) = (float)(int)height_param;
    buffer_param_11 = *(int32_t *)(context_manager + 0x148);
    FUN_1803048f0(context_manager + 0x30, (uint64_t *)0x0, 0, 0, 0);
    FUN_1803048f0(context_manager, (uint64_t *)0x0, 0, 0, 0);
    resource_manager = render_context[0xca];
    memory_block_1 = render_context[0xcb];
    process_flag_1 = true;
    if ((resource_manager == 0) || (*(ushort *)(resource_manager + 0x32c) != width_param)) {
      process_flag_1 = false;
    }
    if ((resource_manager == 0) || (*(ushort *)(resource_manager + 0x32e) != height_param)) {
      process_flag_2 = false;
    }
    else {
      process_flag_2 = true;
    }
    if ((memory_block_1 == 0) || (*(ushort *)(memory_block_1 + 0x32c) != width_param)) {
      process_flag_3 = false;
    }
    else {
      process_flag_3 = true;
    }
    if ((memory_block_1 == 0) || (*(ushort *)(memory_block_1 + 0x32e) != height_param)) {
      process_flag_4 = false;
    }
    else {
      process_flag_4 = true;
    }
    
    // 处理渲染资源
    if (((((resource_manager == 0) || (memory_block_1 == 0)) || (!process_flag_1)) || 
         ((!process_flag_2 || (!process_flag_3)))) || (!process_flag_4)) {
      do {
        buffer_pointer_5 = (longlong *)render_context[0xca];
        render_context[0xca] = 0;
        if (buffer_pointer_5 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_5 + 0x38))();
        }
        buffer_pointer_4 = (longlong *)render_context[0xcb];
        render_context[0xcb] = 0;
        if (buffer_pointer_4 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_4 + 0x38))();
        }
        *(float *)(context_manager + 0x11c20) = (float)(int)width_param;
        *(float *)(context_manager + 0x11c24) = (float)(int)height_param;
        buffer_param_7 = 1;
        buffer_param_8 = 1;
        stack_value_3 = 0;
        stack_value_4 = 0x3f80000000000000;
        stack_value_5 = 1;
        stack_flag_1 = 0;
        buffer_param_9 = 1;
        stack_flag_2 = 0;
        buffer_param_10 = *(int32_t *)(render_context[0xda] + 0xa0);
        data_pointer_1 = &UNK_180a19e28;
        data_pointer_2 = data_buffer_2;
        data_buffer_2[0] = 0;
        buffer_param_11 = 0xe;
        buffer_param_5 = width_param;
        buffer_param_6 = height_param;
        FUN_18005e6a0(UNK_180a0c2b8, (longlong **)0x0, 0);
        object_pointer = (longlong *)FUN_1800b1d80(_DAT_180c8ed18, &buffer_pointer_6, &data_pointer_1, &buffer_param_5);
        resource_manager = *object_pointer;
        *object_pointer = 0;
        buffer_pointer_7 = (longlong *)render_context[0xca];
        render_context[0xca] = resource_manager;
        if (buffer_pointer_7 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_7 + 0x38))();
        }
        if (buffer_pointer_6 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_6 + 0x38))();
        }
        data_pointer_1 = &system_buffer_ptr;
        buffer_param_2 = 1;
        buffer_param_3 = 0x1018a;
        stack_value_2 = 0x2f;
        buffer_param_4 = *(int32_t *)(render_context[0xda] + 0xa0);
        data_pointer_3 = &UNK_180a19e28;
        data_pointer_4 = data_buffer_3;
        data_buffer_3[0] = 0;
        buffer_param_12 = 0xe;
        buffer_width = width_param;
        buffer_height = height_param;
        stack_param = FUN_18005e6a0(UNK_180a0c2b8, (longlong **)0x0, 0);
        object_pointer = (longlong *)FUN_1800b1d80(stack_param, &buffer_pointer_8, &data_pointer_3, &buffer_width);
        resource_manager = *object_pointer;
        *object_pointer = 0;
        buffer_pointer_9 = (longlong *)render_context[0xcb];
        render_context[0xcb] = resource_manager;
        if (buffer_pointer_9 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_9 + 0x38))();
        }
        if (buffer_pointer_8 != (longlong *)0x0) {
          (**(code **)(*buffer_pointer_8 + 0x38))();
        }
        data_pointer_3 = &system_buffer_ptr;
        width_param = (int)width_param / 2;
        height_param = (int)height_param / 2;
      } while ((render_context[0xca] == 0) || 
              (object_pointer = buffer_pointer_2, data_context = buffer_pointer_3, render_context[0xcb] == 0));
    }
    
    *(uint64_t *)(context_manager + 0x11c18) = 0;
    *(int32_t *)(context_manager + 0x11c28) = 0;
    *(int32_t *)(context_manager + 0x11c2c) = 0x3f800000;
    *(float *)(context_manager + 0x11c20) = (float)(int)object_pointer;
    *(float *)(context_manager + 0x11c24) = (float)stack_value_1._4_4_;
    object_pointer = (longlong *)render_context[0xca];
    if (object_pointer != (longlong *)0x0) {
      buffer_pointer_3 = object_pointer;
      (**(code **)(*object_pointer + 0x28))(object_pointer);
    }
    buffer_pointer_3 = *(longlong **)(context_manager + 0x9690);
    *(longlong **)(context_manager + 0x9690) = object_pointer;
    if (buffer_pointer_3 != (longlong *)0x0) {
      (**(code **)(*buffer_pointer_3 + 0x38))();
    }
    object_pointer = (longlong *)render_context[0xcb];
    if (object_pointer != (longlong *)0x0) {
      buffer_pointer_2 = object_pointer;
      (**(code **)(*object_pointer + 0x28))(object_pointer);
    }
    buffer_pointer_2 = *(longlong **)(context_manager + 0x96a8);
    *(longlong **)(context_manager + 0x96a8) = object_pointer;
    if (buffer_pointer_2 != (longlong *)0x0) {
      (**(code **)(*buffer_pointer_2 + 0x38))();
    }
    *(int8_t *)(context_manager + 0x124c4) = 1;
    *(uint *)(context_manager + 4) = *(uint *)(context_manager + 4) & 0xfbffffff;
  }
  
  process_param = 0x26;
  if ((char)render_context[3] != '\0') {
    process_param = 0x1e;
  }
  *(int32_t *)(render_context[0xa3] + 0x9714) = process_param;
  FUN_180056f10(render_context[0xda], context_manager);
  *(int *)(render_context + 0x1c) = (int)render_context[0x1c] + 1;
  object_pointer = (longlong *)render_context[0xcd];
  if (object_pointer != (longlong *)0x0) {
    buffer_pointer_4 = object_pointer;
    (**(code **)(*object_pointer + 0x28))(object_pointer);
  }
  buffer_pointer_4 = *(longlong **)(context_manager + 0x9688);
  *(longlong **)(context_manager + 0x9688) = object_pointer;
  if (buffer_pointer_4 != (longlong *)0x0) {
    (**(code **)(*buffer_pointer_4 + 0x38))();
  }
  
  if ((render_context[0xa3] != 0) && (resource_manager = render_context[0xa6], resource_manager != 0)) {
    if (*(char *)(_DAT_180c82868 + 0x1504) == '\0') {
      if ((char)render_context[0x21] == '\x01') {
        *(int8_t *)(render_context + 0x21) = 0;
        *(int32_t *)(resource_manager + 0x94) = *(int32_t *)((longlong)render_context + 0x104);
      }
    }
    else {
      if (((char)render_context[0x21] == '\0') && 
          (*(int8_t *)(render_context + 0x21) = 1, *(char *)((longlong)render_context + 0x109) == '\0')) {
        *(int32_t *)((longlong)render_context + 0x104) = *(int32_t *)(resource_manager + 0x94);
      }
      *(uint *)(resource_manager + 0x94) = *(uint *)(resource_manager + 0x94) & 0x7fffd8f7;
    }
  }
  
  *(bool *)(*(longlong *)(context_manager + 0x3580) + 0x10a) = *(int *)(context_manager + 0x2480) != 0;
  if ((*(char *)(context_manager + 0x9a31) == '\0') || (*(char *)(context_manager + 0x9a32) == '\0')) {
    data_flag = 0;
  }
  else {
    data_flag = 1;
  }
  *(int8_t *)(*(longlong *)(context_manager + 0x3580) + 0x10b) = data_flag;
  
  if (*(char *)((longlong)render_context + 0x821) == '\0') {
    resource_manager = render_context[0xda];
    data_array = *(uint64_t **)(resource_manager + 0x2670);
    if (data_array != (uint64_t *)0x0) {
      if ((void *)*data_array == &UNK_180a3c3e0) {
        state_flag = *(char *)(data_array + 2) != '\0';
      }
      else {
        state_flag = (**(code **)((void *)*data_array + 0x68))();
      }
      stack_param = _DAT_180bf00a8;
      if (state_flag == '\0') {
        buffer_pointer_4 = &stack_value_1;
        stack_value_1 = *(longlong **)(resource_manager + 0x2670);
        if (stack_value_1 != (longlong *)0x0) {
          (**(code **)(*stack_value_1 + 0x28))();
        }
        FUN_1808fc050(stack_param);
      }
    }
    FUN_18024cb50(data_context, context_manager);
    FUN_180246810(context_manager);
  }
  else {
    if ((char)render_context[0x104] != '\0') {
      stack_param = FUN_18024cb50(context_manager, 0);
      FUN_18024cb50(render_context + 0xcd, stack_param);
    }
    FUN_1801c0f40(data_context + 0x2349);
    object_pointer = data_context + 0x2349;
    resource_manager = *object_pointer;
    *(int *)object_pointer = (int)*object_pointer + 1;
    FUN_180095420(data_context + 0x2349);
    data_context[(longlong)(int)resource_manager + 0x1349] = context_manager;
    stack_param = *(uint64_t *)((longlong)data_context + 0x9a3c);
    *(uint64_t *)(context_manager + 0x9a34) = *(uint64_t *)((longlong)data_context + 0x9a34);
    *(uint64_t *)(context_manager + 0x9a3c) = stack_param;
  }
  // 执行最终的清理操作
  FUN_1808fc050(checksum_value ^ (ulonglong)data_buffer);
}

/**
 * 渲染系统状态初始化函数
 * 初始化渲染系统的状态和数据结构，设置初始渲染参数
 * 
 * @param render_context 渲染上下文指针
 * @return 初始化结果
 */
uint64_t RenderingSystem_InitializeRenderState(longlong render_context)

{
  int8_t data_buffer[72];
  uint64_t stack_param;
  ulonglong checksum_value;
  
  stack_param = RENDERING_STACK_GUARD_VALUE;
  checksum_value = _DAT_180c86890 ^ (ulonglong)data_buffer;
  *(int8_t *)(render_context + 0x878) = 1;
  // 初始化内存块
  memset(render_context + 0x118, 0, 0x400);
  return 0;
}

/**
 * 渲染系统参数更新函数
 * 更新渲染系统的参数和配置，支持动态参数调整和状态同步
 * 
 * @param render_context 渲染上下文指针
 * @param state_flag 状态标志
 * @param param_3 参数3
 * @param param_4 参数4
 */
void RenderingSystem_UpdateRenderParameters(longlong render_context, char state_flag, uint64_t param_3, uint64_t param_4)

{
  longlong context_manager;
  longlong *resource_pointer;
  
  context_manager = *(longlong *)(render_context + 0x6d0);
  if ((context_manager != 0) && (state_flag != *(char *)(render_context + 0x10c))) {
    if ((state_flag == '\0') || (*(char *)(context_manager + 0x27b8) != '\0')) {
      resource_pointer = *(longlong **)(context_manager + 0x81f8);
      if (resource_pointer != (longlong *)0x0) {
        (**(code **)(*resource_pointer + 0x28))();
        FUN_18019da10(context_manager, resource_pointer);
        if (resource_pointer != (longlong *)0x0) {
          (**(code **)(*resource_pointer + 0x38))();
        }
        resource_pointer = *(longlong **)(context_manager + 0x81f8);
        *(uint64_t *)(context_manager + 0x81f8) = 0;
        if (resource_pointer != (longlong *)0x0) {
          (**(code **)(*resource_pointer + 0x38))();
        }
      }
      *(int8_t *)(*(longlong *)(render_context + 0x6d0) + 0x27b8) = 0;
    }
    else {
      *(int8_t *)(context_manager + 0x27b8) = 1;
      FUN_1803048f0(*(uint64_t *)(render_context + 0x6d0), (uint64_t *)0x0, 0, 0, 0);
    }
    *(char *)(render_context + 0x10c) = state_flag;
  }
  return;
}

/**
 * 渲染系统资源清理函数
 * 清理渲染系统的资源和状态，确保系统资源的正确释放
 * 
 * @param render_context 渲染上下文指针
 */
void RenderingSystem_CleanupRenderResources(longlong render_context)

{
  longlong context_manager;
  longlong *resource_pointer;
  
  if (*(longlong *)(render_context + 0x6d0) != 0) {
    FUN_180246810(*(longlong *)(render_context + 0x6d0) + 0xe0);
    context_manager = *(longlong *)(*(longlong *)(render_context + 0x6d0) + 0x398);
    if ((context_manager != 0) && (*(char *)(context_manager + 0xf9) != '\0')) {
      if (*(longlong *)(context_manager + 0x1d8) != 0) {
        // 处理资源清理错误
        FUN_180045af0();
      }
      *(uint64_t *)(context_manager + 0x1d8) = 0;
      FUN_1801c0f40(context_manager + 0xf9);
      *(int8_t *)(context_manager + 0xf9) = 0;
      FUN_180095420(context_manager + 0xf9);
    }
    context_manager = *(longlong *)(*(longlong *)(render_context + 0x6d0) + 0x3a0);
    if ((context_manager != 0) && (*(char *)(context_manager + 0xf9) != '\0')) {
      if (*(longlong *)(context_manager + 0x1d8) != 0) {
        // 处理资源清理错误
        FUN_180045af0();
      }
      *(uint64_t *)(context_manager + 0x1d8) = 0;
      FUN_1801c0f40(context_manager + 0xf9);
      *(int8_t *)(context_manager + 0xf9) = 0;
      FUN_180095420(context_manager + 0xf9);
    }
    resource_pointer = *(longlong **)(*(longlong *)(render_context + 0x6d0) + 0x27e8);
    if (resource_pointer != (longlong *)0x0) {
      // 执行资源清理操作
      (**(code **)(*resource_pointer + 0x1b0))(resource_pointer, 0xffffffff);
      return;
    }
  }
  return;
}

/**
 * 渲染系统上下文完成函数
 * 完成渲染系统上下文的初始化和配置，确保系统准备就绪
 * 
 * @param render_context 渲染上下文指针
 */
void RenderingSystem_FinalizeRenderContext(longlong render_context)

{
  longlong context_manager;
  longlong *resource_pointer;
  
  FUN_180246810(render_context + 0xe0);
  context_manager = *(longlong *)(render_context + 0x398);
  if ((context_manager != 0) && (*(char *)(context_manager + 0xf9) != '\0')) {
    if (*(longlong *)(context_manager + 0x1d8) != 0) {
      // 处理资源清理错误
      FUN_180045af0();
    }
    *(uint64_t *)(context_manager + 0x1d8) = 0;
    FUN_1801c0f40(context_manager + 0xf9);
    *(int8_t *)(context_manager + 0xf9) = 0;
    FUN_180095420(context_manager + 0xf9);
  }
  context_manager = *(longlong *)(render_context + 0x3a0);
  if ((context_manager != 0) && (*(char *)(context_manager + 0xf9) != '\0')) {
    if (*(longlong *)(context_manager + 0x1d8) != 0) {
      // 处理资源清理错误
      FUN_180045af0();
    }
    *(uint64_t *)(context_manager + 0x1d8) = 0;
    FUN_1801c0f40(context_manager + 0xf9);
    *(int8_t *)(context_manager + 0xf9) = 0;
    FUN_180095420(context_manager + 0xf9);
  }
  resource_pointer = *(longlong **)(render_context + 0x27e8);
  if (resource_pointer != (longlong *)0x0) {
    // 执行扩展资源清理操作
    (**(code **)(*resource_pointer + 0x1b0))(resource_pointer, 0xffffffff);
    return;
  }
  return;
}

/**
 * 渲染系统清理执行函数
 * 执行渲染系统的清理操作，释放资源并重置系统状态
 * 
 * @param render_context 渲染上下文指针
 */
void RenderingSystem_ExecuteRenderCleanup(longlong *render_context)

{
  // 执行资源释放操作
  (**(code **)(*render_context + 0x1b0))(render_context, 0xffffffff);
  return;
}

/**
 * 渲染系统完整关闭函数
 * 执行完整的系统关闭操作，包括资源释放、状态重置和内存清理
 * 
 * @param render_context 渲染上下文指针
 * @param param_2 参数2
 * @param param_3 参数3
 * @param param_4 参数4
 */
void RenderingSystem_CompleteRenderShutdown(uint64_t *render_context, uint64_t param_2, uint64_t param_3, uint64_t param_4)

{
  longlong *resource_pointer;
  uint64_t *data_array;
  longlong memory_block;
  
  *render_context = &UNK_18098bcb0;
  if ((_DAT_180c82868 != 0) && 
      (*(int8_t **)(_DAT_180c82868 + 0x7ab8) != (int8_t *)0x0)) {
    **(int8_t **)(_DAT_180c82868 + 0x7ab8) = 1;
  }
  if (render_context[0xda] != 0) {
    FUN_18024cb50(render_context[0xda], render_context);
  }
  FUN_180246810(render_context + 0xac);
  resource_pointer = (longlong *)render_context[0xcb];
  render_context[0xcb] = 0;
  if (resource_pointer != (longlong *)0x0) {
    (**(code **)(*resource_pointer + 0x38))();
  }
  resource_pointer = (longlong *)render_context[0xca];
  render_context[0xca] = 0;
  if (resource_pointer != (longlong *)0x0) {
    (**(code **)(*resource_pointer + 0x38))();
  }
  resource_pointer = (longlong *)render_context[0xcc];
  render_context[0xcc] = 0;
  if (resource_pointer != (longlong *)0x0) {
    (**(code **)(*resource_pointer + 0x38))();
  }
  data_array = (uint64_t *)render_context[0xd9];
  if (data_array != (uint64_t *)0x0) {
    memory_block = FUN_18062b420(data_array, 0, 0);
    (**(code **)*data_array)(data_array, 0);
    if (memory_block != 0) {
      // 处理内存块释放
      FUN_1808fc050(memory_block);
    }
  }
  render_context[0x10b] = &UNK_180a144f8;
  if (render_context[0x10c] != 0) {
    // 处理状态清理错误
    FUN_180045af0();
  }
  render_context[0x10c] = 0;
  *(int32_t *)(render_context + 0x10e) = 0;
  render_context[0x10b] = &UNK_180a21720;
  render_context[0x106] = &UNK_180a144f8;
  if (render_context[0x107] != 0) {
    // 处理状态清理错误
    FUN_180045af0();
  }
  render_context[0x107] = 0;
  *(int32_t *)(render_context + 0x109) = 0;
  render_context[0x106] = &UNK_180a21720;
  if ((longlong *)render_context[0xda] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xda] + 0x38))();
  }
  FUN_180246810(render_context + 0xce, 8, 2, UNK_180a21690);
  if ((longlong *)render_context[0xcd] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xcd] + 0x38))();
  }
  if ((longlong *)render_context[0xcc] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xcc] + 0x38))();
  }
  if ((longlong *)render_context[0xcb] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xcb] + 0x38))();
  }
  if ((longlong *)render_context[0xca] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xca] + 0x38))();
  }
  if ((longlong *)render_context[0xc9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xc9] + 0x38))();
  }
  if ((longlong *)render_context[200] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[200] + 0x38))();
  }
  if ((longlong *)render_context[199] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[199] + 0x38))();
  }
  if ((longlong *)render_context[0xc6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xc6] + 0x38))();
  }
  FUN_180246810(render_context + 0xac);
  if ((longlong *)render_context[0xaf] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xaf] + 0x38))();
  }
  if ((longlong *)render_context[0xae] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xae] + 0x38))();
  }
  if ((longlong *)render_context[0xab] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xab] + 0x38))();
  }
  if ((longlong *)render_context[0xaa] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xaa] + 0x38))();
  }
  if ((longlong *)render_context[0xa9] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xa9] + 0x38))();
  }
  if ((longlong *)render_context[0xa8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xa8] + 0x38))();
  }
  if ((longlong *)render_context[0xa7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xa7] + 0x38))();
  }
  if ((longlong *)render_context[0xa6] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[0xa6] + 0x38))();
  }
  *render_context = &UNK_180a144f8;
  render_context[0x15] = &UNK_1809fcc28;
  if (render_context[0x16] != 0) {
    // 处理最终清理错误
    FUN_180045af0();
  }
  render_context[0x16] = 0;
  *(int32_t *)(render_context + 0x18) = 0;
  render_context[0x15] = &UNK_180a21720;
  render_context[0x11] = &UNK_1809fcc28;
  if (render_context[0x12] != 0) {
    // 处理最终清理错误
    FUN_180045af0();
  }
  render_context[0x12] = 0;
  *(int32_t *)(render_context + 0x14) = 0;
  render_context[0x11] = &UNK_180a21720;
  if ((longlong *)render_context[7] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[7] + 0x38))();
  }
  if ((longlong *)render_context[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)render_context[2] + 0x38))();
  }
  *render_context = &UNK_18098bcb0;
  *render_context = &UNK_18098bcb0;
  return;
}

// 03_rendering_part065.c - 渲染系统高级参数控制和资源管理模块
// 本模块包含12个核心函数，主要负责渲染系统的高级参数控制、资源管理、内存清理和系统初始化
// 
// 主要功能：
// 1. 高级参数控制 - 设置和管理渲染系统的高级参数
// 2. 命令执行 - 执行渲染命令和处理状态更新
// 3. 上下文管理 - 管理渲染上下文和资源分配
// 4. 坐标计算 - 计算纹理坐标和投影变换
// 5. 数据处理 - 处理渲染数据和路径参数
// 6. 资源管理 - 管理复杂的渲染资源和内存分配
// 7. 状态初始化 - 初始化渲染状态和参数
// 8. 参数更新 - 更新渲染参数和配置
// 9. 资源清理 - 清理渲染资源和状态
// 10. 上下文完成 - 完成渲染上下文的初始化
// 11. 清理执行 - 执行渲染清理操作
// 12. 系统关闭 - 完整关闭渲染系统
//
// 技术特点：
// - 支持高级渲染参数控制
// - 实现复杂的资源管理
// - 提供完整的内存管理
// - 支持多种渲染状态
// - 提供详细的错误处理
// - 支持动态参数调整
// - 实现完整的生命周期管理
//
// 使用场景：
// - 高级渲染系统初始化
// - 复杂资源管理场景
// - 动态参数调整需求
// - 完整的系统关闭流程
// - 需要精确控制的渲染操作
// - 复杂的内存管理需求

// 文件结束