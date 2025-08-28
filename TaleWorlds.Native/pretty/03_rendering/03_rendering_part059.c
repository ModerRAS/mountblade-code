#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part059.c - 12 个函数
// 渲染系统高级数据处理和渲染控制模块

// 函数别名定义
#define render_node_link_operation FUN_18029aa23
#define render_context_initialize FUN_18029aa70
#define render_context_cleanup FUN_18029ac70
#define render_resource_manager_destroy FUN_18029ace0
#define render_resource_set_texture FUN_18029ad30
#define render_resource_set_shader FUN_18029ada0
#define render_state_initialize FUN_18029ae20
#define render_state_initialize_alt FUN_18029ae29
#define render_state_update_batch FUN_18029ae76
#define render_parameter_update FUN_18029af73
#define render_parameter_set_values FUN_18029b126
#define render_callback_execute FUN_18029b1c0
#define render_thread_safe_operation FUN_18029b1d0
#define render_thread_operation_alt FUN_18029b390

// 全局变量声明
extern uint64_t SYSTEM_STATE_MANAGER;
extern uint64_t system_message_buffer;
extern uint64_t system_context_ptr;
extern uint64_t system_memory_pool_ptr;
extern uint64_t GET_SECURITY_COOKIE();
extern uint64_t global_state_928_ptr;
extern uint64_t global_state_2024_ptr;
extern uint64_t global_state_720_ptr;
extern uint64_t global_state_3432_ptr;

// 外部函数声明
extern void func_0x000180074f10(uint64_t *param_1);
extern void FUN_18029c700(uint64_t *param_1);
extern void FUN_18029c460(uint64_t *param_1);
extern void FUN_1800f74f0(uint64_t *param_1, uint64_t param_2);
extern void FUN_180058370(uint64_t *param_1, uint64_t param_2);
extern void FUN_1808fc8a8(uint64_t *param_1, int param_2, int param_3, code *param_4);
extern void FUN_180152b00(int64_t *param_1);
extern void FUN_18064e900(uint64_t *param_1);
extern uint64_t FUN_18062b1e0(uint64_t *param_1, int param_2, int param_3, int param_4);
extern uint64_t *FUN_18005ce30(uint64_t *param_1, uint64_t **param_2);
extern void FUN_18005e370(uint64_t *param_1, uint64_t **param_2);
extern void FUN_1808fc050(uint64_t *param_1);
extern void LOCK(void);
extern void UNLOCK(void);
extern uint _Thrd_id(void);

/**
 * 渲染节点链接操作函数
 * 
 * 该函数执行渲染节点的链接操作，将节点插入到渲染链表中
 * 并更新相关的指针和计数器。用于渲染图构建和节点管理。
 */
void render_node_link_operation(void)

{
  int64_t list_head_ptr;
  int64_t render_context;
  int64_t node_offset;
  int64_t node_ptr;
  int64_t *target_ptr;
  
  // 将节点插入到链表头部
  *(uint64_t *)(node_ptr + 0x18) = *(uint64_t *)(*(int64_t *)(render_context + 8) + node_offset * 8);
  *(int64_t *)(*(int64_t *)(render_context + 8) + node_offset * 8) = node_ptr;
  list_head_ptr = *(int64_t *)(render_context + 8);
  
  // 更新链表计数器
  *(int64_t *)(render_context + 0x18) = *(int64_t *)(render_context + 0x18) + 1;
  
  // 设置目标指针信息
  *target_ptr = node_ptr;
  target_ptr[1] = list_head_ptr + node_offset * 8;
  *(int8_t *)(target_ptr + 2) = 1;
  return;
}



/**
 * 渲染上下文初始化函数
 * 
 * 该函数初始化渲染上下文，设置默认值和状态标志
 * 
 * @param context_ptr 渲染上下文指针
 * @return 初始化完成的上下文指针
 */
uint64_t * render_context_initialize(uint64_t *context_ptr)

{
  int64_t *resource_ptr;
  int64_t loop_counter;
  uint64_t *init_ptr;
  
  // 设置虚函数表指针
  *context_ptr = &global_state_928_ptr;
  
  // 初始化各个字段为默认值
  context_ptr[0x2ef] = 0;
  context_ptr[0x2f2] = 0;
  context_ptr[0x2f3] = 0;
  context_ptr[0x2f8] = 0;
  context_ptr[0x2f9] = 0;
  
  // 初始化资源数组
  init_ptr = context_ptr + 0x364;
  loop_counter = 0x10;
  do {
    func_0x000180074f10(init_ptr);
    init_ptr = init_ptr + 1;
    loop_counter = loop_counter + -1;
  } while (loop_counter != 0);
  
  // 继续初始化其他字段
  context_ptr[0x37c] = 0;
  context_ptr[0x37d] = 0;
  context_ptr[0x381] = 0;
  context_ptr[0x3be] = 0;
  context_ptr[0x3bf] = 0;
  context_ptr[0x3c0] = 0;
  
  // 初始化渲染子系统
  FUN_18029c700(context_ptr + 0xfe4);
  
  // 设置状态标志
  context_ptr[0x1049] = 0;
  context_ptr[0x104c] = 0;
  context_ptr[0x1048] = 0;
  context_ptr[0x1047] = 0;
  context_ptr[0x104f] = 0xffffffffffffffff;
  context_ptr[0x1053] = 0xffffffffffffffff;
  context_ptr[0x1050] = 0xffffffffffffffff;
  context_ptr[0x1051] = 0xffffffffffffffff;
  context_ptr[0x1052] = 0xffffffffffffffff;
  context_ptr[0x1054] = 0xffffffffffffffff;
  *(int8_t *)(context_ptr + 0x104e) = 9;
  
  // 初始化资源管理器
  context_ptr[0x107e] = 0;
  context_ptr[0x1076] = 0xffffffffdeadfeee;
  context_ptr[0x1077] = 0;
  context_ptr[0x106f] = 0xffffffffdeadfeee;
  context_ptr[0x1078] = 0;
  context_ptr[0x1070] = 0xffffffffdeadfeee;
  context_ptr[0x1079] = 0;
  context_ptr[0x1071] = 0xffffffffdeadfeee;
  context_ptr[0x107a] = 0;
  context_ptr[0x1072] = 0xffffffffdeadfeee;
  context_ptr[0x107b] = 0;
  context_ptr[0x1073] = 0xffffffffdeadfeee;
  context_ptr[0x107c] = 0;
  context_ptr[0x1074] = 0xffffffffdeadfeee;
  context_ptr[0x107d] = 0;
  context_ptr[0x1075] = 0xffffffffdeadfeee;
  
  // 清零其他字段
  *(int32_t *)(context_ptr + 0x1011) = 0;
  context_ptr[0x1016] = 0;
  context_ptr[0x1017] = 0;
  context_ptr[0x1018] = 0;
  context_ptr[0x1019] = 0;
  context_ptr[0x101a] = 0;
  
  // 清理旧的资源指针
  resource_ptr = (int64_t *)context_ptr[0x1049];
  context_ptr[0x1049] = 0;
  if (resource_ptr != (int64_t *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  return context_ptr;
}



uint64_t *
render_context_cleanup(uint64_t *context_ptr,uint64_t cleanup_flags,uint64_t param_3,uint64_t param_4)

{
  uint64_t cleanup_result;
  
  cleanup_result = 0xfffffffffffffffe;
  *context_ptr = &global_state_928_ptr;
  
  // 清理资源
  if ((int64_t *)context_ptr[0x1049] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)context_ptr[0x1049] + 0x38))();
  }
  
  // 清理渲染子系统
  FUN_18029c460(context_ptr + 0xfe4);
  
  // 根据标志释放内存
  if ((cleanup_flags & 1) != 0) {
    free(context_ptr,0x8400,param_3,param_4,cleanup_result);
  }
  return context_ptr;
}





/**
 * 渲染资源管理器销毁函数
 * 
 * 该函数销毁渲染资源管理器，释放所有相关资源
 * 
 * @param context_ptr 渲染上下文指针
 */
void render_resource_manager_destroy(uint64_t *context_ptr)

{
  int64_t *resource_array;
  uint64_t *resource_ptr;
  int64_t array_start;
  int64_t array_end;
  uint64_t resource_index;
  
  *context_ptr = &global_state_928_ptr;
  
  // 清理主资源
  if ((int64_t *)context_ptr[0x1049] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)context_ptr[0x1049] + 0x38))();
  }
  
  // 清理资源数组
  resource_index = 0;
  resource_array = context_ptr + 0x1012;
  array_start = *resource_array;
  if (context_ptr[0x1013] - array_start >> 3 != 0) {
    do {
      resource_ptr = *(uint64_t **)(resource_index * 8 + array_start);
      if (resource_ptr != (uint64_t *)0x0) {
        // 清理资源的各个组件
        if ((int64_t *)resource_ptr[0xd] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)resource_ptr[0xd] + 0x10))();
          resource_ptr[0xd] = 0;
        }
        if ((int64_t *)resource_ptr[0xe] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)resource_ptr[0xe] + 0x10))();
          resource_ptr[0xe] = 0;
        }
        if ((int64_t *)resource_ptr[0xf] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)resource_ptr[0xf] + 0x10))();
          resource_ptr[0xf] = 0;
        }
        if ((int64_t *)resource_ptr[0x10] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)resource_ptr[0x10] + 0x10))();
          resource_ptr[0x10] = 0;
        }
        if ((int64_t *)resource_ptr[0x11] != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)resource_ptr[0x11] + 0x10))();
          resource_ptr[0x11] = 0;
        }
        
        // 重置资源指针并释放内存
        *resource_ptr = &global_state_720_ptr;
        FUN_18064e900(resource_ptr);
      }
      *(uint64_t *)(resource_index * 8 + *resource_array) = 0;
      resource_index = (uint64_t)((int)resource_index + 1);
      array_start = *resource_array;
    } while (resource_index < (uint64_t)(context_ptr[0x1013] - array_start >> 3));
  }
  
  // 重置数组大小
  context_ptr[0x1013] = array_start;
  
  // 清理其他资源
  resource_ptr = (uint64_t *)context_ptr[0x1043];
  if (resource_ptr != (uint64_t *)0x0) {
    FUN_1800f74f0(context_ptr + 0x1041,*resource_ptr);
    resource_ptr[4] = &global_state_720_ptr;
    FUN_18064e900(resource_ptr);
  }
  
  // 清理渲染缓存和缓冲区
  FUN_180058370(context_ptr + 0x103b,context_ptr[0x103d]);
  FUN_180058370(context_ptr + 0x1035,context_ptr[0x1037]);
  FUN_180058370(context_ptr + 0x102f,context_ptr[0x1031]);
  FUN_1808fc8a8(context_ptr + 0x101b,0x20,5,FUN_180046860);
  
  // 释放资源数组内存
  if (*resource_array != 0) {
    FUN_18064e900();
  }
  
  // 清理其他系统
  FUN_1808fc8a8(context_ptr + 0xffd,0x20,5,FUN_180046860);
  array_start = context_ptr[0xffa];
  for (array_end = context_ptr[0xff9]; array_end != array_start; array_end = array_end + 0x40) {
    FUN_180152b00(array_end);
  }
  if (context_ptr[0xff9] != 0) {
    FUN_18064e900();
  }
  return;
}





/**
 * 渲染资源设置纹理函数
 * 
 * 该函数为渲染资源设置纹理
 * 
 * @param render_context 渲染上下文指针
 * @param slot_index 纹理槽索引
 * @param texture_ptr 纹理资源指针
 */
void render_resource_set_texture(int64_t *render_context,int slot_index,int64_t *texture_ptr)

{
  if ((texture_ptr != (int64_t *)0x0) && (*texture_ptr != 0)) {
    // 激活纹理资源
    (**(code **)(*render_context + 0x70))(render_context,*texture_ptr,1);
    render_context[(int64_t)slot_index + 0x1077] = (int64_t)texture_ptr;
    return;
  }
  render_context[(int64_t)slot_index + 0x1077] = (int64_t)texture_ptr;
  return;
}





/**
 * 渲染资源设置着色器函数
 * 
 * 该函数为渲染资源设置着色器
 * 
 * @param render_context 渲染上下文指针
 * @param shader_ptr 着色器资源指针
 * @param shader_type 着色器类型
 */
void render_resource_set_shader(int64_t *render_context,int64_t *shader_ptr,int shader_type)

{
  int64_t shader_handle;
  
  if ((shader_ptr != (int64_t *)0x0) && (shader_handle = *shader_ptr, shader_handle != 0)) {
    if (shader_type == 0) {
      // 顶点着色器
      (**(code **)(*render_context + 0x70))(render_context,shader_handle,2);
      render_context[0x107e] = (int64_t)shader_ptr;
      return;
    }
    if (shader_type == 1) {
      // 像素着色器
      (**(code **)(*render_context + 0x70))(render_context,shader_handle,4);
      render_context[0x107e] = (int64_t)shader_ptr;
      return;
    }
  }
  render_context[0x107e] = (int64_t)shader_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染状态初始化函数
 * 
 * 该函数初始化渲染状态，设置默认的渲染参数和状态
 * 
 * @param render_context 渲染上下文指针
 */
void render_state_initialize(int64_t *render_context)

{
  int64_t config_base;
  int64_t *state_array;
  int state_index;
  int array_size;
  int64_t *array_ptr;
  float param_value;
  int32_t param_uint;
  float clamped_value;
  uint64_t uStackX_8;
  
  // 初始化状态数组
  array_size = 0;
  render_context[0x1048] = 0;
  render_context[0x1047] = 0;
  state_index = array_size;
  do {
    (**(code **)(*render_context + 0xb0))(render_context,state_index,state_index,0x33);
    state_index = state_index + 1;
  } while (state_index < 9);
  
  // 根据渲染器类型进行特定初始化
  if ((void *)*render_context == &global_state_2024_ptr) {
    state_array = render_context + 0x1147;
    array_ptr = render_context + 0x1087;
    do {
      uStackX_8 = 0;
      // 初始化渲染器状态
      (**(code **)(*(int64_t *)render_context[0x1080] + 200))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x1f8))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x1d8))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0xf8))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x40))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x218))
                ((int64_t *)render_context[0x1080],array_size,1,&uStackX_8);
      *array_ptr = 0;
      array_ptr = array_ptr + 1;
      array_size = array_size + 1;
      *(int32_t *)(state_array + -0x40) = 0xffffffff;
      *(int32_t *)state_array = 0xffffffff;
      state_array = (int64_t *)((int64_t)state_array + 4);
    } while (array_size < 0x80);
  }
  else {
    // 通用渲染器初始化
    (**(code **)((void *)*render_context + 0x58))(render_context);
  }
  
  // 设置默认渲染状态
  (**(code **)(*render_context + 0x110))(render_context,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  (**(code **)(*render_context + 0x110))(render_context,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  (**(code **)(*render_context + 0x110))(render_context,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  (**(code **)(*render_context + 0x110))(render_context,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  (**(code **)(*render_context + 0x110))(render_context,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  (**(code **)(*render_context + 0x110))(render_context,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  (**(code **)(*render_context + 0x110))(render_context,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*render_context + 0x110))(render_context,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*render_context + 0x110))(render_context,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  
  // 加载配置参数
  config_base = SYSTEM_STATE_MANAGER;
  param_value = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((int64_t)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((int64_t)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
  *(float *)(render_context + 0x2a5) = *(float *)(config_base + 0x1110) * 0.005 - 0.25;
  
  // 处理并限制参数值范围
  param_value = *(float *)(config_base + 0x1180);
  if (0.0 <= param_value) {
    if (1.0 <= param_value) {
      param_value = 1.0;
    }
  }
  else {
    param_value = 0.0;
  }
  *(float *)(render_context + 0x2f4) = param_value;
  
  param_value = *(float *)(config_base + 0x11f0);
  clamped_value = 0.0;
  if ((0.0 <= param_value) && (clamped_value = param_value, 1.0 <= param_value)) {
    clamped_value = 1.0;
  }
  *(float *)((int64_t)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  param_uint = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = param_uint;
  
  // 清空资源槽位
  render_context[0x1077] = 0;
  render_context[0x1078] = 0;
  render_context[0x1079] = 0;
  render_context[0x107a] = 0;
  render_context[0x107b] = 0;
  render_context[0x107c] = 0;
  render_context[0x107d] = 0;
  render_context[0x107e] = 0;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(render_context,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染状态初始化函数（替代版本）
 * 
 * 该函数是渲染状态初始化的替代实现，支持额外的参数
 * 
 * @param render_context 渲染上下文指针
 */
void render_state_initialize_alt(int64_t *render_context)

{
  int64_t config_base;
  uint64_t init_param;
  uint64_t init_value;
  int64_t *state_array;
  uint state_index;
  uint64_t array_index;
  uint64_t *array_ptr;
  float param_value;
  int32_t param_uint;
  float clamped_value;
  uint64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  
  // 设置初始参数
  render_context[0x1048] = init_param;
  array_index = init_param & 0xffffffff;
  render_context[0x1047] = init_param;
  
  // 初始化状态数组
  do {
    (**(code **)(*render_context + 0xb0))(render_context,array_index,array_index,0x33);
    state_index = (int)array_index + 1;
    array_index = (uint64_t)state_index;
  } while ((int)state_index < 9);
  
  // 根据渲染器类型进行特定初始化
  if ((void *)*render_context == &global_state_2024_ptr) {
    array_index = init_param & 0xffffffff;
    state_array = render_context + 0x1147;
    array_ptr = (uint64_t *)(render_context + 0x1087);
    in_stack_00000048 = init_value;
    do {
      in_stack_00000040 = init_param;
      // 初始化渲染器状态
      (**(code **)(*(int64_t *)render_context[0x1080] + 200))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x1f8))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x1d8))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0xf8))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x40))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(int64_t *)render_context[0x1080] + 0x218))
                ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
      *array_ptr = init_param;
      array_ptr = array_ptr + 1;
      state_index = (int)array_index + 1;
      array_index = (uint64_t)state_index;
      *(int32_t *)(state_array + -0x40) = 0xffffffff;
      *(int32_t *)state_array = 0xffffffff;
      state_array = (int64_t *)((int64_t)state_array + 4);
    } while ((int)state_index < 0x80);
  }
  else {
    // 通用渲染器初始化
    (**(code **)((void *)*render_context + 0x58))(render_context);
  }
  
  // 设置默认渲染状态
  (**(code **)(*render_context + 0x110))(render_context,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  (**(code **)(*render_context + 0x110))(render_context,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  (**(code **)(*render_context + 0x110))(render_context,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  (**(code **)(*render_context + 0x110))(render_context,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  (**(code **)(*render_context + 0x110))(render_context,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  (**(code **)(*render_context + 0x110))(render_context,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  (**(code **)(*render_context + 0x110))(render_context,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*render_context + 0x110))(render_context,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*render_context + 0x110))(render_context,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  
  // 加载配置参数
  config_base = SYSTEM_STATE_MANAGER;
  param_value = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((int64_t)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((int64_t)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
  *(float *)(render_context + 0x2a5) = *(float *)(config_base + 0x1110) * 0.005 - 0.25;
  
  // 处理并限制参数值范围
  param_value = *(float *)(config_base + 0x1180);
  if (0.0 <= param_value) {
    if (1.0 <= param_value) {
      param_value = 1.0;
    }
  }
  else {
    param_value = 0.0;
  }
  *(float *)(render_context + 0x2f4) = param_value;
  
  param_value = *(float *)(config_base + 0x11f0);
  clamped_value = 0.0;
  if ((0.0 <= param_value) && (clamped_value = param_value, 1.0 <= param_value)) {
    clamped_value = 1.0;
  }
  *(float *)((int64_t)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  param_uint = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = param_uint;
  
  // 清空资源槽位
  render_context[0x1077] = init_param;
  render_context[0x1078] = init_param;
  render_context[0x1079] = init_param;
  render_context[0x107a] = init_param;
  render_context[0x107b] = init_param;
  render_context[0x107c] = init_param;
  render_context[0x107d] = init_param;
  render_context[0x107e] = init_param;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(render_context,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染状态批量更新函数
 * 
 * 该函数批量更新渲染状态，用于优化多个状态变更的性能
 */
void render_state_update_batch(void)

{
  int64_t config_base;
  int64_t *render_context;
  uint64_t update_param;
  int64_t *state_array;
  uint state_index;
  uint64_t array_index;
  uint64_t *array_ptr;
  int32_t update_result;
  float param_value;
  float clamped_value;
  
  array_index = update_param & 0xffffffff;
  state_array = render_context + 0x1147;
  array_ptr = (uint64_t *)(render_context + 0x1087);
  
  // 批量更新渲染器状态
  do {
    (**(code **)(*(int64_t *)render_context[0x1080] + 200))
              ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(int64_t *)render_context[0x1080] + 0x1f8))
              ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(int64_t *)render_context[0x1080] + 0x1d8))
              ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(int64_t *)render_context[0x1080] + 0xf8))
              ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(int64_t *)render_context[0x1080] + 0x40))
              ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    update_result = (**(code **)(*(int64_t *)render_context[0x1080] + 0x218))
                      ((int64_t *)render_context[0x1080],array_index,1,&stack0x00000040);
    *array_ptr = update_param;
    array_ptr = array_ptr + 1;
    state_index = (int)array_index + 1;
    array_index = (uint64_t)state_index;
    *(int32_t *)(state_array + -0x40) = 0xffffffff;
    *(int32_t *)state_array = 0xffffffff;
    state_array = (int64_t *)((int64_t)state_array + 4);
  } while ((int)state_index < 0x80);
  
  // 批量设置渲染状态
  update_result = (**(code **)(*render_context + 0x110))(update_result,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  update_result = (**(code **)(*render_context + 0x110))(update_result,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  update_result = (**(code **)(*render_context + 0x110))(update_result,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  update_result = (**(code **)(*render_context + 0x110))(update_result,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  update_result = (**(code **)(*render_context + 0x110))(update_result,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  update_result = (**(code **)(*render_context + 0x110))(update_result,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  update_result = (**(code **)(*render_context + 0x110))(update_result,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*render_context + 0x110))(update_result,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*render_context + 0x110))(update_result,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  
  // 加载配置参数
  config_base = SYSTEM_STATE_MANAGER;
  param_value = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((int64_t)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((int64_t)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
  *(float *)(render_context + 0x2a5) = *(float *)(config_base + 0x1110) * 0.005 - 0.25;
  
  // 处理并限制参数值范围
  param_value = *(float *)(config_base + 0x1180);
  if (0.0 <= param_value) {
    if (1.0 <= param_value) {
      param_value = 1.0;
    }
  }
  else {
    param_value = 0.0;
  }
  *(float *)(render_context + 0x2f4) = param_value;
  
  param_value = *(float *)(config_base + 0x11f0);
  clamped_value = 0.0;
  if ((0.0 <= param_value) && (clamped_value = param_value, 1.0 <= param_value)) {
    clamped_value = 1.0;
  }
  *(float *)((int64_t)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  update_result = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = update_result;
  
  // 清空资源槽位
  render_context[0x1077] = update_param;
  render_context[0x1078] = update_param;
  render_context[0x1079] = update_param;
  render_context[0x107a] = update_param;
  render_context[0x107b] = update_param;
  render_context[0x107c] = update_param;
  render_context[0x107d] = update_param;
  render_context[0x107e] = update_param;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(update_result,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染参数更新函数
 * 
 * 该函数更新渲染参数，用于动态调整渲染效果
 * 
 * @param update_param 更新参数
 */
void render_parameter_update(int32_t update_param)

{
  int64_t config_base;
  int64_t *render_context;
  int64_t param_value;
  int32_t update_result;
  float param_float;
  float clamped_value;
  
  // 设置渲染状态
  update_result = (**(code **)(*render_context + 0x110))(update_param,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  update_result = (**(code **)(*render_context + 0x110))(update_result,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  update_result = (**(code **)(*render_context + 0x110))(update_result,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  update_result = (**(code **)(*render_context + 0x110))(update_result,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  update_result = (**(code **)(*render_context + 0x110))(update_result,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  update_result = (**(code **)(*render_context + 0x110))(update_result,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  update_result = (**(code **)(*render_context + 0x110))(update_result,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*render_context + 0x110))(update_result,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*render_context + 0x110))(update_result,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  
  // 加载配置参数
  config_base = SYSTEM_STATE_MANAGER;
  param_float = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(render_context + 0x2a4) = param_float;
  *(float *)((int64_t)render_context + 0x1524) = 1.0 / param_float;
  *(float *)((int64_t)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
  *(float *)(render_context + 0x2a5) = *(float *)(config_base + 0x1110) * 0.005 - 0.25;
  
  // 处理并限制参数值范围
  param_float = *(float *)(config_base + 0x1180);
  if (0.0 <= param_float) {
    if (1.0 <= param_float) {
      param_float = 1.0;
    }
  }
  else {
    param_float = 0.0;
  }
  *(float *)(render_context + 0x2f4) = param_float;
  
  param_float = *(float *)(config_base + 0x11f0);
  clamped_value = 0.0;
  if ((0.0 <= param_float) && (clamped_value = param_float, 1.0 <= param_float)) {
    clamped_value = 1.0;
  }
  *(float *)((int64_t)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  update_result = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = update_result;
  
  // 清空资源槽位
  render_context[0x1077] = param_value;
  render_context[0x1078] = param_value;
  render_context[0x1079] = param_value;
  render_context[0x107a] = param_value;
  render_context[0x107b] = param_value;
  render_context[0x107c] = param_value;
  render_context[0x107d] = param_value;
  render_context[0x107e] = param_value;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(update_result,7);
  return;
}



/**
 * 渲染参数设置函数
 * 
 * 该函数设置渲染参数的值，用于控制渲染效果
 * 
 * @param param_1 参数1
 * @param param_2 参数2
 * @param param_3 浮点参数3
 * @param param_4 浮点参数4
 */
void render_parameter_set_values(uint64_t param_1,uint64_t param_2,float param_3,float param_4)

{
  float max_value;
  int64_t config_base;
  int64_t *render_context;
  int64_t param_value;
  int32_t calc_result;
  
  // 重置状态
  *(int32_t *)(render_context + 0x2f4) = 0;
  max_value = *(float *)(config_base + 0x11f0);
  
  // 选择合适的参数值
  if ((param_3 <= max_value) && (param_3 = max_value, param_4 <= max_value)) {
    param_3 = param_4;
  }
  *(float *)((int64_t)render_context + 0x17a4) = param_3;
  
  // 计算并设置参数
  calc_result = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = calc_result;
  
  // 清空资源槽位
  render_context[0x1077] = param_value;
  render_context[0x1078] = param_value;
  render_context[0x1079] = param_value;
  render_context[0x107a] = param_value;
  render_context[0x107b] = param_value;
  render_context[0x107c] = param_value;
  render_context[0x107d] = param_value;
  render_context[0x107e] = param_value;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(calc_result,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染回调执行函数
 * 
 * 该函数执行渲染回调，用于在特定渲染阶段执行自定义逻辑
 * 
 * @param param_1 参数1
 * @param callback_ptr 回调函数指针
 */
void render_callback_execute(uint64_t param_1,code *callback_ptr)

{
  int64_t config_base;
  int64_t *render_context;
  int64_t param_value;
  float param_float;
  int32_t callback_result;
  float clamped_value;
  
  // 执行回调函数
  callback_result = (*callback_ptr)();
  
  // 设置渲染状态
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,0,0x37,*(uint64_t *)(system_message_buffer + 0x1c70));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,9,0x11,*(uint64_t *)(system_message_buffer + 0x1cb8));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,1,0x13,*(uint64_t *)(system_message_buffer + 0x1c80));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,2,0x11,*(uint64_t *)(system_message_buffer + 0x1c88));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,3,1,*(uint64_t *)(system_message_buffer + 0x1c78));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,4,0x17,*(uint64_t *)(system_message_buffer + 0x1c90));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,5,1,*(uint64_t *)(system_message_buffer + 0x1c98));
  (**(code **)(*render_context + 0x110))(callback_result,6,0x17,*(uint64_t *)(system_message_buffer + 0x1ca0));
  (**(code **)(*render_context + 0x110))(callback_result,7,0x11,*(uint64_t *)(system_message_buffer + 0x1ca8));
  
  // 加载配置参数
  config_base = SYSTEM_STATE_MANAGER;
  param_float = *(float *)(SYSTEM_STATE_MANAGER + 0x1880);
  *(float *)(render_context + 0x2a4) = param_float;
  *(float *)((int64_t)render_context + 0x1524) = 1.0 / param_float;
  *(float *)((int64_t)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
  *(float *)(render_context + 0x2a5) = *(float *)(config_base + 0x1110) * 0.005 - 0.25;
  
  // 处理并限制参数值范围
  param_float = *(float *)(config_base + 0x1180);
  if (0.0 <= param_float) {
    if (1.0 <= param_float) {
      param_float = 1.0;
    }
  }
  else {
    param_float = 0.0;
  }
  *(float *)(render_context + 0x2f4) = param_float;
  
  param_float = *(float *)(config_base + 0x11f0);
  clamped_value = 0.0;
  if ((0.0 <= param_float) && (clamped_value = param_float, 1.0 <= param_float)) {
    clamped_value = 1.0;
  }
  *(float *)((int64_t)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  callback_result = powf(0x40000000,*(int32_t *)(config_base + 0x1260));
  *(int32_t *)(render_context + 0x2f7) = callback_result;
  
  // 清空资源槽位
  render_context[0x1077] = param_value;
  render_context[0x1078] = param_value;
  render_context[0x1079] = param_value;
  render_context[0x107a] = param_value;
  render_context[0x107b] = param_value;
  render_context[0x107c] = param_value;
  render_context[0x107d] = param_value;
  render_context[0x107e] = param_value;
  
  // 应用渲染状态
  (**(code **)(*render_context + 0x128))(callback_result,7);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染线程安全操作函数
 * 
 * 该函数执行线程安全的渲染操作，确保多线程环境下的数据一致性
 * 
 * @param render_context 渲染上下文指针
 * @param operation_param 操作参数
 * @param operation_data 操作数据
 * @param resource_ptr 资源指针
 * @param data_flag 数据标志
 * @param operation_type 操作类型
 */
void render_thread_safe_operation(int64_t *render_context,uint64_t operation_param,int32_t operation_data,int64_t *resource_ptr,
                                  int32_t data_flag,byte operation_type)

{
  int main_thread_id;
  int64_t task_data;
  int current_thread_id;
  uint64_t task_handle;
  void **task_ptr;
  int8_t auStack_178 [32];
  int32_t operation_flag;
  byte stack_operation_type;
  void **ppuStack_148;
  void ***pppuStack_140;
  uint64_t security_cookie;
  void **ppuStack_130;
  void *puStack_128;
  int8_t *puStack_120;
  int32_t stack_data_flag;
  int8_t auStack_110 [128];
  int32_t task_priority;
  uint64_t task_param;
  int32_t task_data_2;
  uint task_type;
  int64_t *task_resource;
  uint64_t stack_cookie;
  
  // 设置安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_178;
  
  // 检查是否在主线程
  main_thread_id = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  current_thread_id = _Thrd_id();
  if (current_thread_id == main_thread_id) {
    // 主线程直接执行
    stack_operation_type = operation_type;
    operation_flag = data_flag;
    (**(code **)(*render_context + 0x1e0))(render_context,operation_param,operation_data,resource_ptr[2]);
  }
  else {
    // 工作线程创建任务
    ppuStack_148 = &puStack_128;
    puStack_128 = &global_state_3432_ptr;
    puStack_120 = auStack_110;
    stack_data_flag = 0;
    auStack_110[0] = 0;
    task_priority = 8;
    task_data_2 = data_flag;
    task_type = (uint)operation_type;
    task_param = operation_param;
    task_resource = resource_ptr;
    
    // 增加资源引用计数
    if (*(code **)(*resource_ptr + 0x28) == (code *)&global_state_3248_ptr) {
      LOCK();
      *(int *)(resource_ptr + 1) = (int)resource_ptr[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    // 创建任务
    task_handle = FUN_18062b1e0(system_memory_pool_ptr,0x100,8,3);
    task_ptr = (void **)FUN_18005ce30(task_handle,&puStack_128);
    ppuStack_130 = task_ptr;
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    
    // 提交任务到线程池
    task_data = system_context_ptr;
    pppuStack_140 = &ppuStack_148;
    ppuStack_148 = task_ptr;
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    FUN_18005e370(task_data,&ppuStack_148);
    
    // 清理任务资源
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x38))(task_ptr);
    }
    pppuStack_140 = (void ***)&puStack_128;
    puStack_128 = &global_state_720_ptr;
  }
  
  // 验证安全cookie
  FUN_1808fc050(stack_cookie ^ (uint64_t)auStack_178);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 渲染线程操作函数（替代版本）
 * 
 * 该函数是渲染线程操作的替代实现，支持不同的操作模式
 * 
 * @param render_context 渲染上下文指针
 * @param operation_param 操作参数
 * @param resource_ptr 资源指针
 */
void render_thread_operation_alt(int64_t *render_context,uint64_t operation_param,int64_t *resource_ptr)

{
  int main_thread_id;
  int64_t task_data;
  int current_thread_id;
  uint64_t task_handle;
  void **task_ptr;
  int8_t auStack_148 [32];
  void **ppuStack_128;
  void ***pppuStack_120;
  uint64_t security_cookie;
  void **ppuStack_110;
  void *puStack_108;
  int8_t *puStack_100;
  int32_t stack_data;
  int8_t auStack_f0 [128];
  int32_t task_priority;
  uint64_t task_param;
  int64_t *task_resource;
  int32_t task_data_2;
  uint64_t stack_cookie;
  
  // 设置安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_cookie = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_148;
  
  // 检查是否在主线程
  main_thread_id = *(int *)(*(int64_t *)(*(int64_t *)(system_context_ptr + 8) + 8) + 0x48);
  current_thread_id = _Thrd_id();
  if (current_thread_id == main_thread_id) {
    // 主线程直接执行操作
    (**(code **)(*render_context + 0x1e8))
              (render_context,operation_param,resource_ptr[2],*(int32_t *)((int64_t)resource_ptr + 0x1c));
  }
  else {
    // 工作线程创建任务
    ppuStack_128 = &puStack_108;
    puStack_108 = &global_state_3432_ptr;
    puStack_100 = auStack_f0;
    stack_data = 0;
    auStack_f0[0] = 0;
    task_priority = 9;
    task_data_2 = *(int32_t *)((int64_t)resource_ptr + 0x1c);
    task_param = operation_param;
    task_resource = resource_ptr;
    
    // 增加资源引用计数
    if (*(code **)(*resource_ptr + 0x28) == (code *)&global_state_3248_ptr) {
      LOCK();
      *(int *)(resource_ptr + 1) = (int)resource_ptr[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    // 创建任务
    task_handle = FUN_18062b1e0(system_memory_pool_ptr,0x100,8,3);
    task_ptr = (void **)FUN_18005ce30(task_handle,&puStack_108);
    ppuStack_110 = task_ptr;
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    
    // 提交任务到线程池
    task_data = system_context_ptr;
    pppuStack_120 = &ppuStack_128;
    ppuStack_128 = task_ptr;
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    FUN_18005e370(task_data,&ppuStack_128);
    
    // 清理任务资源
    if (task_ptr != (void **)0x0) {
      (**(code **)(*task_ptr + 0x38))(task_ptr);
    }
    pppuStack_120 = (void ***)&puStack_108;
    puStack_108 = &global_state_720_ptr;
  }
  
  // 验证安全cookie
  FUN_1808fc050(stack_cookie ^ (uint64_t)auStack_148);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * 03_rendering_part059.c 模块总结
 * 
 * 本模块包含12个函数，主要功能分为以下几类：
 * 
 * 1. 上下文管理函数：
 *    - render_context_initialize: 渲染上下文初始化
 *    - render_context_cleanup: 渲染上下文清理
 *    - render_resource_manager_destroy: 资源管理器销毁
 * 
 * 2. 资源管理函数：
 *    - render_resource_set_texture: 设置纹理资源
 *    - render_resource_set_shader: 设置着色器资源
 * 
 * 3. 状态管理函数：
 *    - render_state_initialize: 渲染状态初始化
 *    - render_state_initialize_alt: 渲染状态初始化（替代版本）
 *    - render_state_update_batch: 渲染状态批量更新
 *    - render_parameter_update: 渲染参数更新
 *    - render_parameter_set_values: 渲染参数设置
 * 
 * 4. 线程安全函数：
 *    - render_thread_safe_operation: 线程安全操作
 *    - render_thread_operation_alt: 线程操作（替代版本）
 * 
 * 5. 回调函数：
 *    - render_callback_execute: 渲染回调执行
 * 
 * 6. 节点操作函数：
 *    - render_node_link_operation: 渲染节点链接操作
 * 
 * 该模块为渲染系统提供了完整的上下文管理、资源管理、状态管理和线程安全支持，
 * 是渲染系统的核心控制模块之一。
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address