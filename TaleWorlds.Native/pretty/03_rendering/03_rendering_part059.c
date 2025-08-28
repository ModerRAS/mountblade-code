#include "TaleWorlds.Native.Split.h"

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
extern undefined8 _DAT_180c86920;
extern undefined8 _DAT_180c86938;
extern undefined8 _DAT_180c82868;
extern undefined8 _DAT_180c8ed18;
extern undefined8 _DAT_180bf00a8;
extern undefined8 UNK_180a17010;
extern undefined8 UNK_180a17458;
extern undefined8 UNK_18098bcb0;
extern undefined8 UNK_1809fcc28;

// 外部函数声明
extern void func_0x000180074f10(undefined8 *param_1);
extern void FUN_18029c700(undefined8 *param_1);
extern void FUN_18029c460(undefined8 *param_1);
extern void FUN_1800f74f0(undefined8 *param_1, undefined8 param_2);
extern void FUN_180058370(undefined8 *param_1, undefined8 param_2);
extern void FUN_1808fc8a8(undefined8 *param_1, int param_2, int param_3, code *param_4);
extern void FUN_180152b00(longlong *param_1);
extern void FUN_18064e900(undefined8 *param_1);
extern undefined8 FUN_18062b1e0(undefined8 *param_1, int param_2, int param_3, int param_4);
extern undefined8 *FUN_18005ce30(undefined8 *param_1, undefined8 **param_2);
extern void FUN_18005e370(undefined8 *param_1, undefined8 **param_2);
extern void FUN_1808fc050(undefined8 *param_1);
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
  longlong list_head_ptr;
  longlong render_context;
  longlong node_offset;
  longlong node_ptr;
  longlong *target_ptr;
  
  // 将节点插入到链表头部
  *(undefined8 *)(node_ptr + 0x18) = *(undefined8 *)(*(longlong *)(render_context + 8) + node_offset * 8);
  *(longlong *)(*(longlong *)(render_context + 8) + node_offset * 8) = node_ptr;
  list_head_ptr = *(longlong *)(render_context + 8);
  
  // 更新链表计数器
  *(longlong *)(render_context + 0x18) = *(longlong *)(render_context + 0x18) + 1;
  
  // 设置目标指针信息
  *target_ptr = node_ptr;
  target_ptr[1] = list_head_ptr + node_offset * 8;
  *(undefined1 *)(target_ptr + 2) = 1;
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
undefined8 * render_context_initialize(undefined8 *context_ptr)

{
  longlong *resource_ptr;
  longlong loop_counter;
  undefined8 *init_ptr;
  
  // 设置虚函数表指针
  *context_ptr = &UNK_180a17010;
  
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
  *(undefined1 *)(context_ptr + 0x104e) = 9;
  
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
  *(undefined4 *)(context_ptr + 0x1011) = 0;
  context_ptr[0x1016] = 0;
  context_ptr[0x1017] = 0;
  context_ptr[0x1018] = 0;
  context_ptr[0x1019] = 0;
  context_ptr[0x101a] = 0;
  
  // 清理旧的资源指针
  resource_ptr = (longlong *)context_ptr[0x1049];
  context_ptr[0x1049] = 0;
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))();
  }
  return context_ptr;
}



undefined8 *
render_context_cleanup(undefined8 *context_ptr,ulonglong cleanup_flags,undefined8 param_3,undefined8 param_4)

{
  undefined8 cleanup_result;
  
  cleanup_result = 0xfffffffffffffffe;
  *context_ptr = &UNK_180a17010;
  
  // 清理资源
  if ((longlong *)context_ptr[0x1049] != (longlong *)0x0) {
    (**(code **)(*(longlong *)context_ptr[0x1049] + 0x38))();
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
void render_resource_manager_destroy(undefined8 *context_ptr)

{
  longlong *resource_array;
  undefined8 *resource_ptr;
  longlong array_start;
  longlong array_end;
  ulonglong resource_index;
  
  *context_ptr = &UNK_180a17010;
  
  // 清理主资源
  if ((longlong *)context_ptr[0x1049] != (longlong *)0x0) {
    (**(code **)(*(longlong *)context_ptr[0x1049] + 0x38))();
  }
  
  // 清理资源数组
  resource_index = 0;
  resource_array = context_ptr + 0x1012;
  array_start = *resource_array;
  if (context_ptr[0x1013] - array_start >> 3 != 0) {
    do {
      resource_ptr = *(undefined8 **)(resource_index * 8 + array_start);
      if (resource_ptr != (undefined8 *)0x0) {
        // 清理资源的各个组件
        if ((longlong *)resource_ptr[0xd] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_ptr[0xd] + 0x10))();
          resource_ptr[0xd] = 0;
        }
        if ((longlong *)resource_ptr[0xe] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_ptr[0xe] + 0x10))();
          resource_ptr[0xe] = 0;
        }
        if ((longlong *)resource_ptr[0xf] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_ptr[0xf] + 0x10))();
          resource_ptr[0xf] = 0;
        }
        if ((longlong *)resource_ptr[0x10] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_ptr[0x10] + 0x10))();
          resource_ptr[0x10] = 0;
        }
        if ((longlong *)resource_ptr[0x11] != (longlong *)0x0) {
          (**(code **)(*(longlong *)resource_ptr[0x11] + 0x10))();
          resource_ptr[0x11] = 0;
        }
        
        // 重置资源指针并释放内存
        *resource_ptr = &UNK_18098bcb0;
        FUN_18064e900(resource_ptr);
      }
      *(undefined8 *)(resource_index * 8 + *resource_array) = 0;
      resource_index = (ulonglong)((int)resource_index + 1);
      array_start = *resource_array;
    } while (resource_index < (ulonglong)(context_ptr[0x1013] - array_start >> 3));
  }
  
  // 重置数组大小
  context_ptr[0x1013] = array_start;
  
  // 清理其他资源
  resource_ptr = (undefined8 *)context_ptr[0x1043];
  if (resource_ptr != (undefined8 *)0x0) {
    FUN_1800f74f0(context_ptr + 0x1041,*resource_ptr);
    resource_ptr[4] = &UNK_18098bcb0;
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
void render_resource_set_texture(longlong *render_context,int slot_index,longlong *texture_ptr)

{
  if ((texture_ptr != (longlong *)0x0) && (*texture_ptr != 0)) {
    // 激活纹理资源
    (**(code **)(*render_context + 0x70))(render_context,*texture_ptr,1);
    render_context[(longlong)slot_index + 0x1077] = (longlong)texture_ptr;
    return;
  }
  render_context[(longlong)slot_index + 0x1077] = (longlong)texture_ptr;
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
void render_resource_set_shader(longlong *render_context,longlong *shader_ptr,int shader_type)

{
  longlong shader_handle;
  
  if ((shader_ptr != (longlong *)0x0) && (shader_handle = *shader_ptr, shader_handle != 0)) {
    if (shader_type == 0) {
      // 顶点着色器
      (**(code **)(*render_context + 0x70))(render_context,shader_handle,2);
      render_context[0x107e] = (longlong)shader_ptr;
      return;
    }
    if (shader_type == 1) {
      // 像素着色器
      (**(code **)(*render_context + 0x70))(render_context,shader_handle,4);
      render_context[0x107e] = (longlong)shader_ptr;
      return;
    }
  }
  render_context[0x107e] = (longlong)shader_ptr;
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
void render_state_initialize(longlong *render_context)

{
  longlong config_base;
  longlong *state_array;
  int state_index;
  int array_size;
  longlong *array_ptr;
  float param_value;
  undefined4 param_uint;
  float clamped_value;
  undefined8 uStackX_8;
  
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
  if ((undefined *)*render_context == &UNK_180a17458) {
    state_array = render_context + 0x1147;
    array_ptr = render_context + 0x1087;
    do {
      uStackX_8 = 0;
      // 初始化渲染器状态
      (**(code **)(*(longlong *)render_context[0x1080] + 200))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x1f8))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x1d8))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(longlong *)render_context[0x1080] + 0xf8))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x40))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x218))
                ((longlong *)render_context[0x1080],array_size,1,&uStackX_8);
      *array_ptr = 0;
      array_ptr = array_ptr + 1;
      array_size = array_size + 1;
      *(undefined4 *)(state_array + -0x40) = 0xffffffff;
      *(undefined4 *)state_array = 0xffffffff;
      state_array = (longlong *)((longlong)state_array + 4);
    } while (array_size < 0x80);
  }
  else {
    // 通用渲染器初始化
    (**(code **)((undefined *)*render_context + 0x58))(render_context);
  }
  
  // 设置默认渲染状态
  (**(code **)(*render_context + 0x110))(render_context,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  (**(code **)(*render_context + 0x110))(render_context,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  (**(code **)(*render_context + 0x110))(render_context,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  (**(code **)(*render_context + 0x110))(render_context,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  (**(code **)(*render_context + 0x110))(render_context,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  (**(code **)(*render_context + 0x110))(render_context,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  (**(code **)(*render_context + 0x110))(render_context,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_context + 0x110))(render_context,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_context + 0x110))(render_context,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  
  // 加载配置参数
  config_base = _DAT_180c86920;
  param_value = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((longlong)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((longlong)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
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
  *(float *)((longlong)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  param_uint = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = param_uint;
  
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
void render_state_initialize_alt(longlong *render_context)

{
  longlong config_base;
  ulonglong init_param;
  undefined8 init_value;
  longlong *state_array;
  uint state_index;
  ulonglong array_index;
  ulonglong *array_ptr;
  float param_value;
  undefined4 param_uint;
  float clamped_value;
  ulonglong in_stack_00000040;
  undefined8 in_stack_00000048;
  
  // 设置初始参数
  render_context[0x1048] = init_param;
  array_index = init_param & 0xffffffff;
  render_context[0x1047] = init_param;
  
  // 初始化状态数组
  do {
    (**(code **)(*render_context + 0xb0))(render_context,array_index,array_index,0x33);
    state_index = (int)array_index + 1;
    array_index = (ulonglong)state_index;
  } while ((int)state_index < 9);
  
  // 根据渲染器类型进行特定初始化
  if ((undefined *)*render_context == &UNK_180a17458) {
    array_index = init_param & 0xffffffff;
    state_array = render_context + 0x1147;
    array_ptr = (ulonglong *)(render_context + 0x1087);
    in_stack_00000048 = init_value;
    do {
      in_stack_00000040 = init_param;
      // 初始化渲染器状态
      (**(code **)(*(longlong *)render_context[0x1080] + 200))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x1f8))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x1d8))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(longlong *)render_context[0x1080] + 0xf8))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x40))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      (**(code **)(*(longlong *)render_context[0x1080] + 0x218))
                ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
      *array_ptr = init_param;
      array_ptr = array_ptr + 1;
      state_index = (int)array_index + 1;
      array_index = (ulonglong)state_index;
      *(undefined4 *)(state_array + -0x40) = 0xffffffff;
      *(undefined4 *)state_array = 0xffffffff;
      state_array = (longlong *)((longlong)state_array + 4);
    } while ((int)state_index < 0x80);
  }
  else {
    // 通用渲染器初始化
    (**(code **)((undefined *)*render_context + 0x58))(render_context);
  }
  
  // 设置默认渲染状态
  (**(code **)(*render_context + 0x110))(render_context,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  (**(code **)(*render_context + 0x110))(render_context,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  (**(code **)(*render_context + 0x110))(render_context,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  (**(code **)(*render_context + 0x110))(render_context,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  (**(code **)(*render_context + 0x110))(render_context,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  (**(code **)(*render_context + 0x110))(render_context,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  (**(code **)(*render_context + 0x110))(render_context,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_context + 0x110))(render_context,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_context + 0x110))(render_context,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  
  // 加载配置参数
  config_base = _DAT_180c86920;
  param_value = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((longlong)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((longlong)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
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
  *(float *)((longlong)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  param_uint = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = param_uint;
  
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
  longlong config_base;
  longlong *render_context;
  ulonglong update_param;
  longlong *state_array;
  uint state_index;
  ulonglong array_index;
  ulonglong *array_ptr;
  undefined4 update_result;
  float param_value;
  float clamped_value;
  
  array_index = update_param & 0xffffffff;
  state_array = render_context + 0x1147;
  array_ptr = (ulonglong *)(render_context + 0x1087);
  
  // 批量更新渲染器状态
  do {
    (**(code **)(*(longlong *)render_context[0x1080] + 200))
              ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(longlong *)render_context[0x1080] + 0x1f8))
              ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(longlong *)render_context[0x1080] + 0x1d8))
              ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(longlong *)render_context[0x1080] + 0xf8))
              ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    (**(code **)(*(longlong *)render_context[0x1080] + 0x40))
              ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    update_result = (**(code **)(*(longlong *)render_context[0x1080] + 0x218))
                      ((longlong *)render_context[0x1080],array_index,1,&stack0x00000040);
    *array_ptr = update_param;
    array_ptr = array_ptr + 1;
    state_index = (int)array_index + 1;
    array_index = (ulonglong)state_index;
    *(undefined4 *)(state_array + -0x40) = 0xffffffff;
    *(undefined4 *)state_array = 0xffffffff;
    state_array = (longlong *)((longlong)state_array + 4);
  } while ((int)state_index < 0x80);
  
  // 批量设置渲染状态
  update_result = (**(code **)(*render_context + 0x110))(update_result,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  update_result = (**(code **)(*render_context + 0x110))(update_result,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  update_result = (**(code **)(*render_context + 0x110))(update_result,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  update_result = (**(code **)(*render_context + 0x110))(update_result,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  update_result = (**(code **)(*render_context + 0x110))(update_result,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  update_result = (**(code **)(*render_context + 0x110))(update_result,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  update_result = (**(code **)(*render_context + 0x110))(update_result,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_context + 0x110))(update_result,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_context + 0x110))(update_result,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  
  // 加载配置参数
  config_base = _DAT_180c86920;
  param_value = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_context + 0x2a4) = param_value;
  *(float *)((longlong)render_context + 0x1524) = 1.0 / param_value;
  *(float *)((longlong)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
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
  *(float *)((longlong)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  update_result = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = update_result;
  
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
void render_parameter_update(undefined4 update_param)

{
  longlong config_base;
  longlong *render_context;
  longlong param_value;
  undefined4 update_result;
  float param_float;
  float clamped_value;
  
  // 设置渲染状态
  update_result = (**(code **)(*render_context + 0x110))(update_param,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  update_result = (**(code **)(*render_context + 0x110))(update_result,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  update_result = (**(code **)(*render_context + 0x110))(update_result,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  update_result = (**(code **)(*render_context + 0x110))(update_result,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  update_result = (**(code **)(*render_context + 0x110))(update_result,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  update_result = (**(code **)(*render_context + 0x110))(update_result,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  update_result = (**(code **)(*render_context + 0x110))(update_result,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_context + 0x110))(update_result,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_context + 0x110))(update_result,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  
  // 加载配置参数
  config_base = _DAT_180c86920;
  param_float = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_context + 0x2a4) = param_float;
  *(float *)((longlong)render_context + 0x1524) = 1.0 / param_float;
  *(float *)((longlong)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
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
  *(float *)((longlong)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  update_result = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = update_result;
  
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
void render_parameter_set_values(undefined8 param_1,undefined8 param_2,float param_3,float param_4)

{
  float max_value;
  longlong config_base;
  longlong *render_context;
  longlong param_value;
  undefined4 calc_result;
  
  // 重置状态
  *(undefined4 *)(render_context + 0x2f4) = 0;
  max_value = *(float *)(config_base + 0x11f0);
  
  // 选择合适的参数值
  if ((param_3 <= max_value) && (param_3 = max_value, param_4 <= max_value)) {
    param_3 = param_4;
  }
  *(float *)((longlong)render_context + 0x17a4) = param_3;
  
  // 计算并设置参数
  calc_result = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = calc_result;
  
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
void render_callback_execute(undefined8 param_1,code *callback_ptr)

{
  longlong config_base;
  longlong *render_context;
  longlong param_value;
  float param_float;
  undefined4 callback_result;
  float clamped_value;
  
  // 执行回调函数
  callback_result = (*callback_ptr)();
  
  // 设置渲染状态
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,0,0x37,*(undefined8 *)(_DAT_180c86938 + 0x1c70));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,9,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1cb8));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,1,0x13,*(undefined8 *)(_DAT_180c86938 + 0x1c80));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,2,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1c88));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,3,1,*(undefined8 *)(_DAT_180c86938 + 0x1c78));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,4,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1c90));
  callback_result = (**(code **)(*render_context + 0x110))(callback_result,5,1,*(undefined8 *)(_DAT_180c86938 + 0x1c98));
  (**(code **)(*render_context + 0x110))(callback_result,6,0x17,*(undefined8 *)(_DAT_180c86938 + 0x1ca0));
  (**(code **)(*render_context + 0x110))(callback_result,7,0x11,*(undefined8 *)(_DAT_180c86938 + 0x1ca8));
  
  // 加载配置参数
  config_base = _DAT_180c86920;
  param_float = *(float *)(_DAT_180c86920 + 0x1880);
  *(float *)(render_context + 0x2a4) = param_float;
  *(float *)((longlong)render_context + 0x1524) = 1.0 / param_float;
  *(float *)((longlong)render_context + 0x1d54) = *(float *)(config_base + 0x2060) * 0.01;
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
  *(float *)((longlong)render_context + 0x17a4) = clamped_value;
  
  // 计算并设置参数
  callback_result = powf(0x40000000,*(undefined4 *)(config_base + 0x1260));
  *(undefined4 *)(render_context + 0x2f7) = callback_result;
  
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
void render_thread_safe_operation(longlong *render_context,undefined8 operation_param,undefined4 operation_data,longlong *resource_ptr,
                                  undefined4 data_flag,byte operation_type)

{
  int main_thread_id;
  longlong task_data;
  int current_thread_id;
  undefined8 task_handle;
  undefined **task_ptr;
  undefined1 auStack_178 [32];
  undefined4 operation_flag;
  byte stack_operation_type;
  undefined **ppuStack_148;
  undefined ***pppuStack_140;
  undefined8 security_cookie;
  undefined **ppuStack_130;
  undefined *puStack_128;
  undefined1 *puStack_120;
  undefined4 stack_data_flag;
  undefined1 auStack_110 [128];
  undefined4 task_priority;
  undefined8 task_param;
  undefined4 task_data_2;
  uint task_type;
  longlong *task_resource;
  ulonglong stack_cookie;
  
  // 设置安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)auStack_178;
  
  // 检查是否在主线程
  main_thread_id = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
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
    puStack_128 = &UNK_1809fcc28;
    puStack_120 = auStack_110;
    stack_data_flag = 0;
    auStack_110[0] = 0;
    task_priority = 8;
    task_data_2 = data_flag;
    task_type = (uint)operation_type;
    task_param = operation_param;
    task_resource = resource_ptr;
    
    // 增加资源引用计数
    if (*(code **)(*resource_ptr + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(resource_ptr + 1) = (int)resource_ptr[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    // 创建任务
    task_handle = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    task_ptr = (undefined **)FUN_18005ce30(task_handle,&puStack_128);
    ppuStack_130 = task_ptr;
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    
    // 提交任务到线程池
    task_data = _DAT_180c82868;
    pppuStack_140 = &ppuStack_148;
    ppuStack_148 = task_ptr;
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    FUN_18005e370(task_data,&ppuStack_148);
    
    // 清理任务资源
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x38))(task_ptr);
    }
    pppuStack_140 = (undefined ***)&puStack_128;
    puStack_128 = &UNK_18098bcb0;
  }
  
  // 验证安全cookie
  FUN_1808fc050(stack_cookie ^ (ulonglong)auStack_178);
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
void render_thread_operation_alt(longlong *render_context,undefined8 operation_param,longlong *resource_ptr)

{
  int main_thread_id;
  longlong task_data;
  int current_thread_id;
  undefined8 task_handle;
  undefined **task_ptr;
  undefined1 auStack_148 [32];
  undefined **ppuStack_128;
  undefined ***pppuStack_120;
  undefined8 security_cookie;
  undefined **ppuStack_110;
  undefined *puStack_108;
  undefined1 *puStack_100;
  undefined4 stack_data;
  undefined1 auStack_f0 [128];
  undefined4 task_priority;
  undefined8 task_param;
  longlong *task_resource;
  undefined4 task_data_2;
  ulonglong stack_cookie;
  
  // 设置安全cookie
  security_cookie = 0xfffffffffffffffe;
  stack_cookie = _DAT_180bf00a8 ^ (ulonglong)auStack_148;
  
  // 检查是否在主线程
  main_thread_id = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  current_thread_id = _Thrd_id();
  if (current_thread_id == main_thread_id) {
    // 主线程直接执行操作
    (**(code **)(*render_context + 0x1e8))
              (render_context,operation_param,resource_ptr[2],*(undefined4 *)((longlong)resource_ptr + 0x1c));
  }
  else {
    // 工作线程创建任务
    ppuStack_128 = &puStack_108;
    puStack_108 = &UNK_1809fcc28;
    puStack_100 = auStack_f0;
    stack_data = 0;
    auStack_f0[0] = 0;
    task_priority = 9;
    task_data_2 = *(undefined4 *)((longlong)resource_ptr + 0x1c);
    task_param = operation_param;
    task_resource = resource_ptr;
    
    // 增加资源引用计数
    if (*(code **)(*resource_ptr + 0x28) == (code *)&UNK_180084660) {
      LOCK();
      *(int *)(resource_ptr + 1) = (int)resource_ptr[1] + 1;
      UNLOCK();
    }
    else {
      (**(code **)(*resource_ptr + 0x28))(resource_ptr);
    }
    
    // 创建任务
    task_handle = FUN_18062b1e0(_DAT_180c8ed18,0x100,8,3);
    task_ptr = (undefined **)FUN_18005ce30(task_handle,&puStack_108);
    ppuStack_110 = task_ptr;
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    
    // 提交任务到线程池
    task_data = _DAT_180c82868;
    pppuStack_120 = &ppuStack_128;
    ppuStack_128 = task_ptr;
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x28))(task_ptr);
    }
    FUN_18005e370(task_data,&ppuStack_128);
    
    // 清理任务资源
    if (task_ptr != (undefined **)0x0) {
      (**(code **)(*task_ptr + 0x38))(task_ptr);
    }
    pppuStack_120 = (undefined ***)&puStack_108;
    puStack_108 = &UNK_18098bcb0;
  }
  
  // 验证安全cookie
  FUN_1808fc050(stack_cookie ^ (ulonglong)auStack_148);
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