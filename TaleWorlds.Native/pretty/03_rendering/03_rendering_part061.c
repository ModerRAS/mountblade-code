#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part061.c - 渲染系统高级状态管理和参数控制模块
// 包含18个核心函数，涵盖渲染状态管理、参数设置、标志位处理、
// 资源管理、数据验证和高级渲染控制等功能

// 渲染状态标志位常量定义
#define RENDER_STATE_FLAG_TEXTURE      0x01    // 纹理状态标志
#define RENDER_STATE_FLAG_NORMAL       0x02    // 法线状态标志
#define RENDER_STATE_FLAG_SPECULAR     0x04    // 高光状态标志
#define RENDER_STATE_FLAG_ALPHA        0x08    // 透明度状态标志
#define RENDER_STATE_FLAG_DEPTH        0x10    // 深度状态标志
#define RENDER_STATE_FLAG_STENCIL      0x20    // 模板状态标志

// 渲染参数常量定义
#define RENDER_PARAM_DEFAULT_FLOAT     0x3f800000  // 默认浮点值 1.0f
#define RENDER_PARAM_MAX_TEXTURES     0x80        // 最大纹理数量
#define RENDER_PARAM_MAX_SLOTS        7           // 最大插槽数量
#define RENDER_PARAM_MAGIC_VALUE      0xdeadfeee  // 魔术数值

// 渲染模式常量定义
#define RENDER_MODE_VERTEX            1           // 顶点模式
#define RENDER_MODE_NORMAL            2           // 法线模式
#define RENDER_MODE_TEXTURE           3           // 纹理模式
#define RENDER_MODE_COLOR             4           // 颜色模式
#define RENDER_MODE_ALPHA             5           // 透明度模式
#define RENDER_MODE_DEPTH             6           // 深度模式
#define RENDER_MODE_STENCIL           0x23        // 模板模式

// 渲染缓冲区大小常量
#define RENDER_BUFFER_SIZE_SMALL      32          // 小缓冲区大小
#define RENDER_BUFFER_SIZE_MEDIUM     40          // 中等缓冲区大小
#define RENDER_BUFFER_SIZE_LARGE      136         // 大缓冲区大小
#define RENDER_BUFFER_NAME_MAX        128         // 名称最大长度

// 渲染数据结构偏移量
#define RENDER_OFFSET_TEXTURE_DATA    0x10        // 纹理数据偏移
#define RENDER_OFFSET_MATERIAL_DATA   0x18        // 材质数据偏移
#define RENDER_OFFSET_SHADER_DATA     0x20        // 着色器数据偏移
#define RENDER_OFFSET_RENDER_STATE    0x340       // 渲染状态偏移
#define RENDER_OFFSET_TEXTURE_SLOT   0x1f8       // 纹理插槽偏移
#define RENDER_OFFSET_PARAM_ARRAY    0x1a0       // 参数数组偏移

// 函数别名定义
#define RenderingSystem_UpdateStateFlags        FUN_18029ccc0
#define RenderingSystem_ProcessMaterialData    FUN_18029cdd0
#define RenderingSystem_UpdateShaderParams      FUN_18029cfa0
#define RenderingSystem_SetRenderMode          FUN_18029d000
#define RenderingSystem_ApplyTextureSettings   FUN_18029d0a0
#define RenderingSystem_UpdateRenderState      FUN_18029d150
#define RenderingSystem_GenerateRenderInfo     FUN_18029d280
#define RenderingSystem_CreateRenderReport     FUN_18029d500
#define RenderingSystem_SetRenderTarget        FUN_18029d760
#define RenderingSystem_SetRenderTexture       FUN_18029d930
#define RenderingSystem_UpdateViewport        FUN_18029db70
#define RenderingSystem_SetRenderTargetEx      FUN_18029dc40
#define RenderingSystem_ProcessRenderFlags     FUN_18029dca0
#define RenderingSystem_UpdateRenderSlots     FUN_18029de40
#define RenderingSystem_CheckRenderStatus     FUN_18029e060
#define RenderingSystem_SetRenderParams       FUN_18029e090
#define RenderingSystem_UpdateRenderContext    FUN_18029e110
#define RenderingSystem_ValidateRenderData    FUN_18029e1a0
#define RenderingSystem_ApplyRenderSettings   FUN_18029e2a0
#define RenderingSystem_CheckRenderCapability FUN_18029e2f0

// 全局变量引用
extern ulonglong GET_SECURITY_COOKIE();      // 渲染系统全局数据指针
extern longlong system_message_buffer;      // 渲染系统核心数据指针
extern longlong system_main_module_state;      // 渲染系统参数指针
extern char system_buffer_2846;           // 渲染系统状态标志

// 渲染系统状态更新函数
// 根据标志位参数更新渲染系统的各种状态
// param_1: 渲染系统上下文指针
// param_2: 渲染状态索引
// param_3: 渲染参数值
// param_4: 状态标志位掩码
void FUN_18029ccc0(longlong param_1,int param_2,int32_t param_3,uint param_4)
{
  uint64_t render_state_stack[RENDER_BUFFER_SIZE_SMALL/8];
  
  // 获取渲染状态数据
  render_state_stack[0] = *(uint64_t *)(system_message_buffer + RENDER_OFFSET_TEXTURE_DATA + (longlong)param_2 * 8);
  
  // 根据标志位更新相应的渲染状态
  if ((param_4 & RENDER_STATE_FLAG_TEXTURE) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xd0))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  if ((param_4 & RENDER_STATE_FLAG_NORMAL) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x208))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  if ((param_4 & RENDER_STATE_FLAG_SPECULAR) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x1e8))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  if ((param_4 & RENDER_STATE_FLAG_ALPHA) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x100))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  if ((param_4 & RENDER_STATE_FLAG_DEPTH) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x50))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  if ((param_4 & RENDER_STATE_FLAG_STENCIL) != 0) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x230))
              (*(longlong **)(param_1 + 0x8400),param_3,1,render_state_stack);
  }
  return;
}



// 渲染材质数据处理函数
// 处理材质数据的各种参数和状态更新
// param_1: 渲染系统上下文指针
// param_2: 材质数据包指针
void FUN_18029cdd0(longlong param_1,uint64_t *param_2)
{
  longlong material_handle;
  byte material_type;
  longlong render_core;
  int8_t security_buffer[RENDER_BUFFER_SIZE_MEDIUM];
  int32_t default_float_params[4];
  ulonglong security_key;
  
  // 初始化安全缓冲区
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  
  // 计算材质句柄
  material_handle = *(longlong *)
           (system_message_buffer + 0x1e50 +
           ((ulonglong)*(byte *)((longlong)param_2 + 0x16) +
           (((ulonglong)*(byte *)((longlong)param_2 + 0x14) +
            ((ulonglong)*(byte *)((longlong)param_2 + 0x15) +
            (ulonglong)*(byte *)((longlong)param_2 + 0x12) * 4) * 2) * 3 +
           (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 2) * 8);
  
  render_core = system_message_buffer;
  
  // 更新材质句柄
  if (material_handle != *(longlong *)(param_1 + 0x8418)) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x158))(*(longlong **)(param_1 + 0x8400),material_handle);
    render_core = system_message_buffer;
    *(longlong *)(param_1 + 0x8418) = material_handle;
  }
  
  // 确定材质类型
  if (*(char *)((longlong)param_2 + 0x11) == '\0') {
    material_type = *(byte *)((longlong)param_2 + 0xf);
  }
  else {
    material_type = *(byte *)(param_2 + 2);
  }
  
  // 计算着色器句柄
  material_handle = *(longlong *)
           (render_core + 0x21b8 +
           ((ulonglong)*(byte *)((longlong)param_2 + 0xe) +
           ((ulonglong)*(byte *)((longlong)param_2 + 0xd) +
           ((ulonglong)*(byte *)((longlong)param_2 + 0xc) +
           ((ulonglong)*(byte *)((longlong)param_2 + 0xb) +
           ((ulonglong)*(byte *)((longlong)param_2 + 10) +
           ((ulonglong)*(byte *)((longlong)param_2 + 9) + (ulonglong)*(byte *)(param_2 + 1) * 2) * 8
           ) * 2) * 8) * 8) * 2) * 8);
  
  // 更新着色器和材质类型
  if ((material_handle != *(longlong *)(param_1 + 0x8420)) || ((uint)material_type != *(uint *)(param_1 + 0x8428))) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x120))
              (*(longlong **)(param_1 + 0x8400),material_handle,material_type);
    render_core = system_message_buffer;
    *(longlong *)(param_1 + 0x8420) = material_handle;
    *(uint *)(param_1 + 0x8428) = (uint)material_type;
  }
  
  // 更新纹理参数
  material_handle = *(longlong *)(render_core + 0x2150 + (ulonglong)*(byte *)(param_2 + 7) * 8);
  if (material_handle != *(longlong *)(param_1 + 0x8430)) {
    default_float_params[0] = RENDER_PARAM_DEFAULT_FLOAT;
    default_float_params[1] = RENDER_PARAM_DEFAULT_FLOAT;
    default_float_params[2] = RENDER_PARAM_DEFAULT_FLOAT;
    default_float_params[3] = RENDER_PARAM_DEFAULT_FLOAT;
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x118))
              (*(longlong **)(param_1 + 0x8400),material_handle,default_float_params,0xffffffff);
    render_core = system_message_buffer;
    *(longlong *)(param_1 + 0x8430) = material_handle;
  }
  
  // 更新渲染状态
  material_handle = *(longlong *)(render_core + 0x1d88 + (ulonglong)*(byte *)((longlong)param_2 + 0x39) * 8);
  if (*(longlong *)(param_1 + 0x8410) != material_handle) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x88))(*(longlong **)(param_1 + 0x8400),material_handle);
    *(longlong *)(param_1 + 0x8410) = material_handle;
  }
  
  // 设置渲染模式和纹理
  RenderingSystem_SetRenderMode(param_1,*(int8_t *)((longlong)param_2 + 0x17));
  FUN_18029f560(param_1,*param_2,*(int8_t *)((longlong)param_2 + 0x3b),
                *(int8_t *)((longlong)param_2 + 0x3a));
                    
  // 清理安全缓冲区
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}





// 渲染系统着色器参数更新函数
// 根据着色器数据更新渲染系统的着色器参数
// param_1: 渲染系统上下文指针
// param_2: 着色器数据包指针
void FUN_18029cfa0(longlong param_1,longlong *param_2)
{
  int *shader_param_data;
  longlong current_shader_id;
  
  // 检查着色器数据包是否有效
  if ((*param_2 != 0) &&
     (shader_param_data = *(int **)(*param_2 + 0x10), 
      current_shader_id = *(longlong *)(param_1 + 0x82a0), 
      current_shader_id != (longlong)*shader_param_data)) {
    
    // 调用渲染系统更新着色器参数
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x228))
              (*(longlong **)(param_1 + 0x8400),
               *(uint64_t *)(shader_param_data + 6),  // 着色器参数偏移量
               0,                                     // 额外参数1
               0);                                    // 额外参数2
    
    // 更新当前着色器ID
    *(longlong *)(param_1 + 0x82a0) = (longlong)**(int **)(*param_2 + 0x10);
  }
  return;
}





// 渲染系统模式设置函数
// 根据输入模式设置渲染系统的渲染模式
// param_1: 渲染系统上下文指针
// param_2: 渲染模式枚举值
void FUN_18029d000(longlong param_1,int8_t param_2)
{
  int render_mode;
  
  // 根据输入参数映射渲染模式
  render_mode = 0;
  switch(param_2) {
  case RENDER_MODE_VERTEX:    // 顶点模式
    render_mode = RENDER_MODE_VERTEX;
    break;
  case RENDER_MODE_NORMAL:    // 法线模式
    render_mode = RENDER_MODE_NORMAL;
    break;
  case RENDER_MODE_TEXTURE:   // 纹理模式
    render_mode = RENDER_MODE_TEXTURE;
    break;
  case RENDER_MODE_COLOR:     // 颜色模式
    render_mode = RENDER_MODE_COLOR;
    break;
  case RENDER_MODE_ALPHA:     // 透明度模式
    render_mode = RENDER_MODE_ALPHA;
    break;
  case RENDER_MODE_DEPTH:     // 深度模式
    render_mode = RENDER_MODE_STENCIL;  // 映射到模板模式
    break;
  }
  
  // 检查渲染模式是否发生变化
  if (render_mode != *(int *)(param_1 + 0x8408)) {
    // 调用渲染系统设置渲染模式
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xc0))
              (*(longlong **)(param_1 + 0x8400), render_mode);
    
    // 更新当前渲染模式
    *(int *)(param_1 + 0x8408) = render_mode;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统纹理设置应用函数
// 应用纹理设置到渲染系统
// param_1: 渲染系统上下文指针
// param_2: 纹理数据包指针
// param_3: 纹理参数数组指针
void FUN_18029d0a0(longlong param_1,uint64_t *param_2,int32_t *param_3)
{
  int8_t security_buffer[RENDER_BUFFER_SIZE_SMALL];
  int32_t texture_param4;
  int32_t texture_param2;
  int32_t texture_param3;
  int32_t texture_param1;
  uint64_t texture_handle1;
  uint64_t texture_handle2;
  int32_t texture_id2;
  int32_t texture_id1;
  ulonglong security_key;
  
  // 初始化安全缓冲区
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  
  // 提取纹理数据
  texture_handle1 = *param_2;                    // 纹理句柄1
  texture_handle2 = param_2[1];                  // 纹理句柄2
  texture_id2 = *(int32_t *)((longlong)param_2 + 0x14);  // 纹理ID2
  texture_id1 = *(int32_t *)(param_2 + 2);               // 纹理ID1
  
  // 调用渲染系统设置纹理参数（第一阶段）
  (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x160))
            (*(longlong **)(param_1 + 0x8400), 1, &texture_handle1);
  
  // 提取纹理参数
  texture_param1 = param_3[3];  // 纹理参数1
  texture_param2 = param_3[1];  // 纹理参数2
  texture_param3 = param_3[2];  // 纹理参数3
  texture_param4 = *param_3;    // 纹理参数4
  
  // 调用渲染系统设置纹理参数（第二阶段）
  (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x168))
            (*(longlong **)(param_1 + 0x8400), 1, &texture_param4);
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}



// WARNING: Removing unreachable block (ram,0x00018029d1c7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统状态更新函数
// 更新渲染系统的各种状态参数
// param_1: 渲染系统上下文指针
// param_2: 状态类型标识符
// param_3: 状态数据指针
// param_4: 状态参数1
// param_5: 状态参数2
void FUN_18029d150(longlong param_1,int param_2,longlong param_3,int param_4,int param_5)
{
  longlong state_type;
  longlong state_data_ptr;
  longlong state_value;
  longlong render_state_ptr;
  
  state_type = (longlong)param_2;
  state_value = 0;
  state_data_ptr = state_value;
  
  // 特殊状态类型处理（类型0x21）
  if (param_2 == 0x21) {
    if (param_3 != 0) {
      // 设置状态数据的帧计数器
      *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(system_main_module_state + 0x224);
      state_data_ptr = param_3 + 0x1a0;  // 指向参数数组
    }
  }
  // 其他状态类型的处理
  else if ((((param_3 != 0) && 
            (render_state_ptr = FUN_18023a940(), render_state_ptr != 0)) &&
           (state_data_ptr = render_state_ptr, 
            *(longlong *)(render_state_ptr + 8) == 0)) &&          // 检查状态指针有效性
          (*(longlong *)(render_state_ptr + 0x10) == 0)) {         // 检查状态数据有效性
    state_data_ptr = 0;  // 无效状态数据
  }
  
  // 检查状态是否需要更新
  if (((*(longlong *)(param_1 + 0x8438 + state_type * 8) != state_data_ptr) ||
      (*(int *)(param_1 + 0x8838 + state_type * 4) != param_5)) ||
     (*(int *)(param_1 + 0x8a38 + state_type * 4) != param_4)) {
    
    // 处理有效的状态数据
    if (state_data_ptr != 0) {
      // 检查状态数据是否完整
      if ((*(longlong *)(state_data_ptr + 8) == 0) && 
          (*(longlong *)(state_data_ptr + 0x10) == 0)) {
        return;  // 状态数据不完整，直接返回
      }
      
      // 提取状态值
      if (state_data_ptr != 0) {
        if (param_5 == -1) {
          // 使用默认状态值
          state_value = *(longlong *)(state_data_ptr + 0x10);
        }
        else {
          // 使用索引状态值
          state_value = *(longlong *)(*(longlong *)(state_data_ptr + 0x18) + 
                                    (longlong)param_5 * 8);
        }
      }
    }
    
    // 调用渲染系统状态更新函数
    FUN_18029fb10(param_1, param_2, state_value, param_4);
    
    // 更新渲染系统状态缓存
    *(longlong *)(param_1 + 0x8438 + state_type * 8) = state_data_ptr;
    *(int *)(param_1 + 0x8838 + state_type * 4) = param_5;
    *(int *)(param_1 + 0x8a38 + state_type * 4) = param_4;
    
    // 增加状态更新计数器
    *(int *)(param_1 + 0x82b4) = *(int *)(param_1 + 0x82b4) + 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统信息生成函数
// 生成渲染系统的详细信息和状态报告
// param_1: 渲染系统上下文指针
// param_2: 报告数据缓冲区指针
void FUN_18029d280(longlong param_1,longlong param_2)
{
  uint render_flags;
  longlong render_info;
  int32_t *report_data;
  uint64_t *report_data64;
  int16_t *report_data16;
  int slot_index;
  int buffer_size;
  void *info_string;
  longlong *render_slots;
  uint *render_flags_array;
  int8_t security_buffer[RENDER_BUFFER_SIZE_LARGE];
  uint64_t magic_value;
  void *info_array[RENDER_PARAM_MAX_SLOTS];
  ulonglong security_key;
  
  magic_value = 0xfffffffffffffffe;
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  slot_index = 0;
  
  // 初始化报告缓冲区
  buffer_size = *(int *)(param_2 + 0x10) + 0x14;
  FUN_1806277c0(param_2, buffer_size);
  
  // 写入报告标题
  report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *report_data = 0x74786554;        // "Text"
  report_data[1] = 0x20657275;       // "ure "
  report_data[2] = 0x746f6c53;       // "Slot"
  report_data[3] = 0x73694c20;       // "Lis "
  report_data[4] = 0xa3a2074;        // "t" + 终止符
  *(int8_t *)(report_data + 5) = 0;
  *(int *)(param_2 + 0x10) = buffer_size;
  
  // 获取渲染插槽和标志数组
  render_flags_array = (uint *)(param_1 + 0x8a38);
  render_slots = (longlong *)(param_1 + 0x8438);
  
  // 遍历所有渲染插槽（最大128个）
  do {
    if (*render_slots != 0) {
      // 获取渲染信息
      render_info = FUN_1802a05d0(*render_slots, info_array);
      info_string = &system_buffer_ptr;
      if (*(void **)(render_info + 8) != (void *)0x0) {
        info_string = *(void **)(render_info + 8);
      }
      
      // 写入插槽信息
      FUN_180628040(param_2, &global_state_1648_ptr, slot_index, info_string);
      info_array[0] = &global_state_720_ptr;
      
      render_flags = *render_flags_array;
      
      // 根据标志位写入不同的渲染属性
      if ((render_flags & 1) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 7;
        FUN_1806277c0(param_2, buffer_size);
        *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
             0x20786574726576;  // "vertex "
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 2) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 7;
        FUN_1806277c0(param_2, buffer_size);
        *(uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
             0x206e69616d6f64;  // "domain "
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 4) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 5;
        FUN_1806277c0(param_2, buffer_size);
        report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data = 0x6c6c7568;  // "hull"
        *(int16_t *)(report_data + 1) = 0x20;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 8) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 9;
        FUN_1806277c0(param_2, buffer_size);
        report_data64 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data64 = 0x797274656d6f6567;  // "geometry "
        *(int16_t *)(report_data64 + 1) = 0x20;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 0x10) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 6;
        FUN_1806277c0(param_2, buffer_size);
        report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data = 0x65786970;  // "pixel"
        *(int16_t *)(report_data + 1) = 0x206c;
        *(int8_t *)((longlong)report_data + 6) = 0;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      buffer_size = *(int *)(param_2 + 0x10);
      if ((render_flags & 0x20) != 0) {
        buffer_size = buffer_size + 8;
        FUN_1806277c0(param_2, buffer_size);
        report_data64 = (uint64_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data64 = 0x20657475706d6f63;  // "compute "
        *(int8_t *)(report_data64 + 1) = 0;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      
      // 写入行结束符
      FUN_1806277c0(param_2, buffer_size + 2);
      report_data16 = (int16_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *report_data16 = 0xa29;  // 换行符
      *(int8_t *)(report_data16 + 1) = 0;
      *(int *)(param_2 + 0x10) = buffer_size + 2;
    }
    slot_index = slot_index + 1;
    render_slots = render_slots + 1;
    render_flags_array = render_flags_array + 1;
  } while (slot_index < 0x80);  // 最大128个插槽
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统报告创建函数
// 创建渲染系统的状态报告
// param_1: 渲染系统上下文指针
// param_2: 报告缓冲区指针
void FUN_18029d500(longlong param_1,longlong param_2)
{
  int32_t *report_data;
  int buffer_size;
  int slot_index;
  longlong *render_targets;
  void *target_name;
  int8_t security_buffer[RENDER_BUFFER_SIZE_LARGE];
  int32_t report_type;
  longlong render_context;
  uint64_t magic_value;
  void *target_info;
  void *target_data;
  int32_t target_id;
  uint8_t target_buffer[RENDER_BUFFER_NAME_MAX];
  ulonglong security_key;
  
  magic_value = 0xfffffffffffffffe;
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  slot_index = 0;
  report_type = 0;
  buffer_size = *(int *)(param_2 + 0x10) + 0x1a;
  render_context = param_1;
  
  // 初始化报告缓冲区
  FUN_1806277c0(param_2, buffer_size);
  
  // 写入报告标题
  report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *report_data = 0x646e6552;        // "Rend"
  report_data[1] = 0x54207265;       // "er T"
  report_data[2] = 0x65677261;       // "arge"
  report_data[3] = 0x6c532074;       // "t Sl"
  *(uint64_t *)(report_data + 4) = 0x207473694c20746f;  // "ot Lis "
  *(int16_t *)(report_data + 6) = 0xa3a;              // ":" + 终止符
  *(int8_t *)((longlong)report_data + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = buffer_size;
  
  // 遍历渲染目标（最多7个）
  render_targets = (longlong *)(param_1 + 0x83b8);
  do {
    if (*render_targets != 0) {
      target_info = &global_state_3432_ptr;
      target_data = target_buffer;
      target_buffer[0] = 0;
      target_id = 0;
      strcpy_s(target_buffer, 0x80, &system_buffer_ptr);
      report_type = 1;
      target_name = &system_buffer_ptr;
      if (target_data != (void *)0x0) {
        target_name = target_data;
      }
      
      // 写入渲染目标信息
      FUN_180628040(param_2, &global_state_1688_ptr, slot_index, target_name);
      report_type = 0;
      target_info = &global_state_720_ptr;
    }
    slot_index = slot_index + 1;
    render_targets = render_targets + 1;
  } while (slot_index < 7);
  
  // 写入数据部分标题
  buffer_size = *(int *)(param_2 + 0x10);
  slot_index = buffer_size + 0x14;
  FUN_1806277c0(param_2, slot_index);
  report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *report_data = 0x74706544;        // "Dept"
  report_data[1] = 0x61542068;       // "h Ta"
  report_data[2] = 0x74656772;       // "rget"
  report_data[3] = 0x6f6c5320;       // " Slo"
  report_data[4] = 0x203a2074;        // "t :"
  *(int8_t *)(report_data + 5) = 0;
  *(int *)(param_2 + 0x10) = slot_index;
  
  // 检查是否有深度目标
  if (*(longlong *)(render_context + 0x83f0) == 0) {
    buffer_size = buffer_size + 0x19;
    FUN_1806277c0(param_2, buffer_size);
    report_data = (int32_t *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *report_data = 0x6c6c756e;  // "null"
    *(int16_t *)(report_data + 1) = 10;  // 换行符
    *(int *)(param_2 + 0x10) = buffer_size;
  }
  else {
    // 写入深度目标信息
    target_info = &global_state_3432_ptr;
    target_data = target_buffer;
    target_buffer[0] = 0;
    target_id = 0;
    strcpy_s(target_buffer, 0x80, &system_buffer_ptr);
    report_type = 2;
    target_name = &system_buffer_ptr;
    if (target_data != (void *)0x0) {
      target_name = target_data;
    }
    FUN_180628040(param_2, &global_state_676_ptr, target_name);
    report_type = 0;
    target_info = &global_state_720_ptr;
  }
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统目标设置函数
// 设置渲染系统的渲染目标
// param_1: 渲染系统上下文指针
// param_2: 目标索引
// param_3: 目标类型标志
// param_4: 目标数据指针
// param_5: 目标参数索引
void FUN_18029d760(longlong param_1,int param_2,char param_3,longlong param_4,int param_5)
{
  longlong *render_core;
  int *frame_counter;
  uint64_t target_data;
  int8_t security_buffer[RENDER_BUFFER_SIZE_MEDIUM];
  int32_t *target_params;
  int32_t param_count;
  uint64_t *target_array;
  int32_t *target_format;
  int32_t target_formats[2];
  uint64_t target_value;
  uint64_t target_handles[RENDER_PARAM_MAX_SLOTS];
  ulonglong security_key;
  
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  target_data = 0;
  target_formats[0] = 0xffffffff;  // 默认格式
  
  // 处理目标数据
  if (param_4 != 0) {
    frame_counter = (int *)(system_main_module_state + 0x224);
    *(longlong *)(param_4 + 0x340) = (longlong)*frame_counter;  // 设置帧计数器
    
    // 获取目标数据
    if (param_5 == -1) {
      target_data = *(uint64_t *)(param_4 + 0x208);  // 默认目标
    }
    else {
      target_data = *(uint64_t *)(*(longlong *)(param_4 + 0x210) + 
                                    (longlong)param_5 * 8);  // 索引目标
    }
    
    *(longlong *)(param_4 + 0x340) = (longlong)*frame_counter;
    target_formats[0] = *(int32_t *)(param_4 + 0x1f8);  // 获取目标格式
  }
  
  render_core = *(longlong **)(param_1 + 0x8400);
  target_value = target_data;
  
  // 处理不同类型的目标设置
  if (param_3 == '\0') {
    // 重置渲染目标
    target_array = target_handles;
    param_count = 4;
    target_params._0_4_ = 1;
    
    // 调用渲染核心重置函数
    (**(code **)(*render_core + 0x2d0))(render_core, 0, 0, 0);
    render_core = *(longlong **)(param_1 + 0x8400);
    
    target_format = target_formats;
    target_handles[param_2 - 1] = target_data;
    target_array = target_handles;
    param_count = 4;
    target_params = (int32_t *)CONCAT44(target_params._4_4_, 1);
    
    // 调用渲染核心设置函数
    (**(code **)(*render_core + 0x110))(render_core, 0xffffffff, 0, 0);
    
    // 如果目标索引小于7，重置所有渲染目标
    if (param_2 < 7) {
      *(uint64_t *)(param_1 + 0x83b8) = 0;        // 目标0
      *(uint64_t *)(param_1 + 0x8378) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83c0) = 0;        // 目标1
      *(uint64_t *)(param_1 + 0x8380) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83c8) = 0;        // 目标2
      *(uint64_t *)(param_1 + 0x8388) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83d0) = 0;        // 目标3
      *(uint64_t *)(param_1 + 0x8390) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83d8) = 0;        // 目标4
      *(uint64_t *)(param_1 + 0x8398) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83e0) = 0;        // 目标5
      *(uint64_t *)(param_1 + 0x83a0) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83e8) = 0;        // 目标6
      *(uint64_t *)(param_1 + 0x83a8) = RENDER_PARAM_MAGIC_VALUE;
    }
  }
  else {
    // 设置指定的渲染目标
    target_params = target_formats;
    (**(code **)(*render_core + 0x220))(render_core, param_2, 1, &target_value);
  }
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统纹理设置函数
// 设置渲染系统的纹理目标
// param_1: 渲染系统上下文指针
// param_2: 纹理索引
// param_3: 纹理类型标志
// param_4: 纹理数据指针
void FUN_18029d930(longlong param_1,uint64_t param_2,char param_3,longlong param_4)
{
  longlong *render_core;
  uint64_t texture_data;
  int8_t security_buffer[RENDER_BUFFER_SIZE_SMALL];
  uint64_t texture_param1;
  int32_t param_count;
  uint64_t *texture_array;
  uint64_t texture_param2;
  uint64_t texture_value;
  uint64_t texture_handles[RENDER_PARAM_MAX_SLOTS];
  ulonglong security_key;
  
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  texture_data = 0;
  
  // 处理纹理数据
  if (param_4 != 0) {
    texture_data = *(uint64_t *)(param_4 + 0x20);  // 获取纹理数据
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);  // 设置帧计数器
  }
  
  render_core = *(longlong **)(param_1 + 0x8400);
  texture_value = texture_data;
  
  // 处理不同类型的纹理设置
  if (param_3 == '\0') {
    // 重置纹理设置
    texture_array = texture_handles;
    param_count = 4;
    texture_param1._0_4_ = 1;
    
    // 调用渲染核心重置函数
    (**(code **)(*render_core + 0x2d0))(render_core, 0, 0, 0);
    render_core = *(longlong **)(param_1 + 0x8400);
    
    texture_array = &texture_value;
    texture_param2 = 0;
    texture_handles[(int)param_2 - 1] = texture_data;
    param_count = 4;
    texture_param1 = CONCAT44(texture_param1._4_4_, 1);
    
    // 调用渲染核心设置函数
    (**(code **)(*render_core + 0x110))(render_core, 0xffffffff, 0, 0);
    
    // 如果纹理索引小于7，重置所有纹理句柄
    if ((int)param_2 < 7) {
      *(uint64_t *)(param_1 + 0x83b8) = 0;        // 纹理0
      *(uint64_t *)(param_1 + 0x8378) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83c0) = 0;        // 纹理1
      *(uint64_t *)(param_1 + 0x8380) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83c8) = 0;        // 纹理2
      *(uint64_t *)(param_1 + 0x8388) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83d0) = 0;        // 纹理3
      *(uint64_t *)(param_1 + 0x8390) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83d8) = 0;        // 纹理4
      *(uint64_t *)(param_1 + 0x8398) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83e0) = 0;        // 纹理5
      *(uint64_t *)(param_1 + 0x83a0) = RENDER_PARAM_MAGIC_VALUE;
      *(uint64_t *)(param_1 + 0x83e8) = 0;        // 纹理6
      *(uint64_t *)(param_1 + 0x83a8) = RENDER_PARAM_MAGIC_VALUE;
    }
  }
  else {
    // 设置指定的纹理
    texture_param1 = 0;
    (**(code **)(*render_core + 0x220))(render_core, param_2, 1, &texture_value);
  }
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}





// 渲染系统视口更新函数
// 更新渲染系统的视口设置
// param_1: 渲染系统上下文指针
// param_2: 视口类型标识符
// param_3: 视口数据指针
void FUN_18029db70(longlong param_1,char param_2,longlong param_3)
{
  longlong *render_core;
  longlong viewport_top;
  longlong viewport_bottom;
  int32_t viewport_count;
  longlong viewport_left;
  
  // 检查视口是否需要更新
  if ((*(longlong *)(param_1 + 0x8240) != param_3) || 
      (*(char *)(param_1 + 0x8270) != param_2)) {
    
    render_core = *(longlong **)(param_1 + 0x8400);
    *(longlong *)(param_1 + 0x8240) = param_3;
    *(char *)(param_1 + 0x8270) = param_2;
    
    // 处理不同类型的视口
    if (param_2 == '\n') {  // 换行符类型的视口
      (**(code **)(*render_core + 0x90))
                (render_core, 0, 1, 
                 param_3 + 0x2a0,  // 左边界
                 param_3 + 0x2b8,  // 底边界
                 param_3 + 0x2b0); // 顶边界
      return;
    }
    
    if (param_2 == '\v') {  // 垂直制表符类型的视口
      viewport_top = param_3 + 0x2b0;
      viewport_bottom = param_3 + 0x2b8;
      viewport_left = param_3 + 0x2a0;
      viewport_count = 2;
    }
    else {  // 默认类型的视口
      viewport_top = param_3 + 0x220;
      viewport_bottom = param_3 + 0x260;
      viewport_left = param_3 + 0x1a0;
      viewport_count = *(int32_t *)(param_3 + 0x18c);
    }
    
    // 调用渲染核心设置视口
    (**(code **)(*render_core + 0x90))
              (render_core, 0, viewport_count, 
               viewport_left, viewport_bottom, viewport_top);
  }
  return;
}





// 渲染系统扩展目标设置函数
// 设置渲染系统的扩展渲染目标
// param_1: 渲染系统上下文指针
// param_2: 扩展目标数据指针
void FUN_18029dc40(longlong param_1,longlong param_2)
{
  // 检查扩展目标是否需要更新
  if (*(longlong *)(param_1 + 0x8240) != param_2) {
    *(longlong *)(param_1 + 0x8240) = param_2;
    
    // 调用渲染核心设置扩展目标
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x90))
              (*(longlong **)(param_1 + 0x8400), 0,
               *(int32_t *)(param_2 + 0x188),  // 目标计数
               param_2 + 0x1a0,                   // 左边界
               param_2 + 0x260,                   // 底边界
               param_2 + 0x220);                  // 顶边界
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统标志处理函数
// 处理渲染系统的各种标志位设置
// param_1: 渲染系统上下文指针
// param_2: 标志位数据
// param_3: 标志位掩码
// param_4: 渲染数据指针
void FUN_18029dca0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)
{
  longlong *render_core;
  code *render_function;
  ulonglong flag_value;
  
  flag_value = param_2 & 0xffffffff;
  
  // 处理顶点着色器标志
  if ((param_3 & 1) != 0) {
    render_core = *(longlong **)(param_1 + 0x8400);
    render_function = *(code **)(*render_core + 0x38);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function)(render_core, param_2, 1, param_4 + 0x10);
  }
  
  // 处理几何着色器标志
  if ((param_3 & 4) != 0) {
    render_core = *(longlong **)(param_1 + 0x8400);
    render_function = *(code **)(*render_core + 0x1f0);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function)(render_core, flag_value, 1, param_4 + 0x10);
  }
  
  // 处理域着色器标志
  if ((param_3 & 2) != 0) {
    render_core = *(longlong **)(param_1 + 0x8400);
    render_function = *(code **)(*render_core + 0x210);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function)(render_core, flag_value, 1, param_4 + 0x10);
  }
  
  // 处理像素着色器标志
  if ((param_3 & 0x10) != 0) {
    render_core = *(longlong **)(param_1 + 0x8400);
    render_function = *(code **)(*render_core + 0x80);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function)(render_core, flag_value, 1, param_4 + 0x10);
  }
  
  // 处理计算着色器标志
  if ((param_3 & 0x20) != 0) {
    render_core = *(longlong **)(param_1 + 0x8400);
    render_function = *(code **)(*render_core + 0x238);
    *(int32_t *)(param_4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*render_function)(render_core, flag_value, 1, param_4 + 0x10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统插槽更新函数
// 更新渲染系统的各种插槽状态
// param_1: 渲染系统上下文指针
// param_2: 插槽参数
void FUN_18029de40(longlong param_1,int32_t param_2)
{
  longlong slot_data;
  uint64_t depth_data;
  bool slot0_changed;
  bool slot1_changed;
  bool slot2_changed;
  bool slot3_changed;
  bool slot4_changed;
  bool slot5_changed;
  bool slot6_changed;
  bool depth_changed;
  int8_t security_buffer[RENDER_BUFFER_SIZE_SMALL];
  int32_t update_mask;
  int32_t update_count;
  uint64_t slot_handle0;
  uint64_t slot_handle1;
  uint64_t slot_handle2;
  uint64_t slot_handle3;
  uint64_t slot_handle4;
  uint64_t slot_handle5;
  uint64_t slot_handle6;
  uint64_t slot_handle_depth;
  ulonglong security_key;
  
  security_key = GET_SECURITY_COOKIE() ^ (ulonglong)security_buffer;
  
  // 检查插槽0的变化
  slot_data = *(longlong *)(param_1 + 0x83b8);
  slot0_changed = slot_data != *(longlong *)(param_1 + 0x8378);
  if (slot0_changed) {
    *(longlong *)(param_1 + 0x8378) = slot_data;
  }
  slot_handle0 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽1的变化
  slot_data = *(longlong *)(param_1 + 0x83c0);
  slot1_changed = slot_data != *(longlong *)(param_1 + 0x8380);
  if (slot1_changed) {
    *(longlong *)(param_1 + 0x8380) = slot_data;
  }
  slot_handle1 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽2的变化
  slot_data = *(longlong *)(param_1 + 0x83c8);
  slot2_changed = slot_data != *(longlong *)(param_1 + 0x8388);
  if (slot2_changed) {
    *(longlong *)(param_1 + 0x8388) = slot_data;
  }
  slot_handle2 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽3的变化
  slot_data = *(longlong *)(param_1 + 0x83d0);
  slot3_changed = slot_data != *(longlong *)(param_1 + 0x8390);
  if (slot3_changed) {
    *(longlong *)(param_1 + 0x8390) = slot_data;
  }
  slot_handle3 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽4的变化
  slot_data = *(longlong *)(param_1 + 0x83d8);
  slot4_changed = slot_data != *(longlong *)(param_1 + 0x8398);
  if (slot4_changed) {
    *(longlong *)(param_1 + 0x8398) = slot_data;
  }
  slot_handle4 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽5的变化
  slot_data = *(longlong *)(param_1 + 0x83e0);
  slot5_changed = slot_data != *(longlong *)(param_1 + 0x83a0);
  if (slot5_changed) {
    *(longlong *)(param_1 + 0x83a0) = slot_data;
  }
  slot_handle5 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查插槽6的变化
  slot_data = *(longlong *)(param_1 + 0x83e8);
  slot6_changed = slot_data != *(longlong *)(param_1 + 0x83a8);
  if (slot6_changed) {
    *(longlong *)(param_1 + 0x83a8) = slot_data;
  }
  slot_handle6 = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 检查深度缓冲区的变化
  slot_data = *(longlong *)(param_1 + 0x83f0);
  depth_changed = *(longlong *)(param_1 + 0x83b0) != slot_data;
  if (depth_changed) {
    *(longlong *)(param_1 + 0x83b0) = slot_data;
  }
  depth_data = (slot_data == 0) ? 0 : *(uint64_t *)(slot_data + 8);
  
  // 如果有任何插槽发生变化，则更新渲染系统
  if ((slot6_changed || (slot5_changed || (slot4_changed || (slot3_changed || 
       (slot2_changed || (slot1_changed || slot0_changed)))))) || depth_changed) {
    
    update_mask = 0xffffffffffffffff;
    update_count = 0;
    update_mask = 0xffffffff;
    update_count = param_2;
    
    // 调用渲染核心更新插槽
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x110))
              (*(longlong **)(param_1 + 0x8400), param_2, &slot_handle0, depth_data);
  }
  
  // 清理安全缓冲区（函数不返回）
  FUN_1808fc050(security_key ^ (ulonglong)security_buffer);
}





// 渲染系统状态检查函数
// 检查渲染系统的当前状态
// param_1: 渲染系统上下文指针
void FUN_18029e060(longlong param_1)
{
  // 检查渲染系统是否就绪
  if (system_buffer_2846 == '\0') {
    // 调用渲染核心状态检查函数
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xa8))();
  }
  return;
}





// 渲染系统参数设置函数
// 设置渲染系统的各种参数
// param_1: 渲染系统上下文指针
// param_2: 参数类型
// param_3: 参数索引
// param_4: 参数值
void FUN_18029e090(longlong param_1,int32_t param_2,int param_3,int32_t param_4)
{
  // 检查渲染系统是否就绪
  if (system_buffer_2846 == '\0') {
    // 调用渲染核心参数设置函数
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xa0))
              (*(longlong **)(param_1 + 0x8400), 
               param_3 * 3,    // 参数偏移量计算
               param_4,        // 参数值
               param_2,        // 参数类型
               0,              // 保留参数1
               0);             // 保留参数2
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 渲染系统上下文更新函数
// 更新渲染系统的上下文信息
// param_1: 渲染系统上下文指针
void FUN_18029e110(longlong param_1)
{
  longlong context_data;
  
  // 检查渲染系统是否就绪
  if (system_buffer_2846 == '\0') {
    // 获取当前上下文数据
    context_data = *(longlong *)(*(longlong *)(system_message_buffer + 0x1d50) + 0x18);
    
    // 检查上下文是否需要更新
    if (*(longlong *)(param_1 + 0x8240) != context_data) {
      *(longlong *)(param_1 + 0x8240) = context_data;
      
      // 调用渲染核心更新上下文
      (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x90))
                (*(longlong **)(param_1 + 0x8400), 0,
                 *(int32_t *)(context_data + 0x188),  // 上下文计数
                 context_data + 0x1a0,                  // 左边界
                 context_data + 0x260,                  // 底边界
                 context_data + 0x220);                 // 顶边界
    }
    
    // 调用渲染核心处理函数（警告：无法恢复的跳转表）
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x68))
              (*(longlong **)(param_1 + 0x8400), 3);
    return;
  }
  return;
}



// 渲染系统数据验证函数
// 验证渲染系统数据的完整性和有效性
// param_1: 渲染系统上下文指针
// param_2: 渲染数据指针
// param_3: 数据偏移量
// param_4: 数据乘数
// param_5: 验证标志
// param_6: 验证结果输出指针
// 返回值: 验证成功返回true，失败返回false
bool FUN_18029e1a0(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  int *param_6)
{
  int validate_result;
  longlong render_data;
  uint data_size;
  uint adjusted_size;
  uint64_t validate_output;
  uint validate_flags;
  
  // 获取渲染数据
  render_data = FUN_18023a940(param_2);
  
  // 计算数据大小
  adjusted_size = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    adjusted_size = *(uint *)(param_2 + 0x35c);
  }
  
  // 计算数据偏移量
  param_3 = adjusted_size * param_4 + param_3;
  
  // 根据验证标志设置验证参数
  if (param_5 == 0) {
    validate_flags = 5;  // 默认验证标志
  }
  else {
    // 根据标志位组合验证参数
    validate_flags = param_5 & 1;
    if ((param_5 & 8) != 0) {
      validate_flags = 3;
    }
    validate_flags = validate_flags | 4;
    if ((param_5 & 2) == 0) {
      validate_flags = validate_flags;
    }
    if ((param_5 & 4) != 0) {
      validate_flags = validate_flags | 5;
    }
  }
  
  // 调用渲染核心验证数据
  validate_result = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),
                     *(uint64_t *)(render_data + 8),  // 数据句柄
                     param_3,                          // 数据偏移量
                     validate_flags,                  // 验证标志
                     0,                               // 保留参数
                     &validate_output);               // 验证输出
  
  // 处理验证错误
  if (validate_result < 0) {
    FUN_180220810(validate_result, &global_state_1856_ptr);
  }
  
  // 输出验证结果
  *(uint64_t *)(param_6 + 2) = validate_output;
  *(ulonglong *)(param_6 + 4) = (ulonglong)validate_flags;
  *param_6 = param_3;
  
  return -1 < validate_result;  // 返回验证是否成功
}





// 渲染系统设置应用函数
// 应用渲染系统的各种设置
// param_1: 渲染系统上下文指针
// param_2: 设置数据指针
// param_3: 设置参数数组指针
void FUN_18029e2a0(longlong param_1,uint64_t param_2,int32_t *param_3)
{
  int32_t setting_value;
  longlong *render_core;
  code *apply_function;
  longlong setting_data;
  
  render_core = *(longlong **)(param_1 + 0x8400);
  setting_value = *param_3;
  
  // 获取应用设置函数
  apply_function = *(code **)(*render_core + 0x78);
  
  // 获取设置数据
  setting_data = FUN_18023a940(param_2);
  
  // 调用渲染核心应用设置（警告：无法恢复的跳转表）
  (*apply_function)(render_core,
                   *(uint64_t *)(setting_data + 8),  // 设置数据句柄
                   setting_value);                    // 设置值
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 渲染系统能力检查函数
// 检查渲染系统的特定能力是否可用
// param_1: 渲染系统上下文指针
// param_2: 能力数据指针
// param_3: 能力类型标志
// param_4: 能力检查结果输出指针
// 返回值: 能力可用返回true，不可用返回false
bool FUN_18029e2f0(longlong param_1,longlong param_2,uint param_3,longlong param_4)
{
  uint capability_flags;
  int check_result;
  uint check_params;
  uint64_t check_output[2];
  
  // 设置帧计数器
  *(int32_t *)(param_2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
  
  // 根据能力类型设置检查参数
  if (param_3 == 0) {
    check_params = 5;  // 默认检查参数
  }
  else {
    // 根据标志位组合检查参数
    capability_flags = param_3 & 1;
    if ((param_3 & 8) != 0) {
      capability_flags = 3;
    }
    check_params = capability_flags | 4;
    if ((param_3 & 2) == 0) {
      check_params = capability_flags;
    }
    if ((param_3 & 4) != 0) {
      check_params = check_params | 5;
    }
  }
  
  // 调用渲染核心检查能力
  check_result = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),
                     *(uint64_t *)(param_2 + 0x10),  // 能力数据句柄
                     0,                               // 偏移量
                     check_params,                    // 检查参数
                     0,                               // 保留参数
                     check_output);                   // 检查输出
  
  // 处理检查错误
  if (check_result < 0) {
    FUN_180220810(check_result, &global_state_1768_ptr);
  }
  
  // 输出检查结果
  *(uint64_t *)(param_4 + 8) = check_output[0];
  
  return -1 < check_result;  // 返回能力是否可用
}





