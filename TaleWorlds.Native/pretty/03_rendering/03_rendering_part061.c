#include "TaleWorlds.Native.Split.h"

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
extern ulonglong _DAT_180bf00a8;      // 渲染系统全局数据指针
extern longlong _DAT_180c86938;      // 渲染系统核心数据指针
extern longlong _DAT_180c86870;      // 渲染系统参数指针
extern char DAT_180c82846;           // 渲染系统状态标志

// 渲染系统状态更新函数
// 根据标志位参数更新渲染系统的各种状态
// param_1: 渲染系统上下文指针
// param_2: 渲染状态索引
// param_3: 渲染参数值
// param_4: 状态标志位掩码
void FUN_18029ccc0(longlong param_1,int param_2,undefined4 param_3,uint param_4)
{
  undefined8 render_state_stack[RENDER_BUFFER_SIZE_SMALL/8];
  
  // 获取渲染状态数据
  render_state_stack[0] = *(undefined8 *)(_DAT_180c86938 + RENDER_OFFSET_TEXTURE_DATA + (longlong)param_2 * 8);
  
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
void FUN_18029cdd0(longlong param_1,undefined8 *param_2)
{
  longlong material_handle;
  byte material_type;
  longlong render_core;
  undefined1 security_buffer[RENDER_BUFFER_SIZE_MEDIUM];
  undefined4 default_float_params[4];
  ulonglong security_key;
  
  // 初始化安全缓冲区
  security_key = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  
  // 计算材质句柄
  material_handle = *(longlong *)
           (_DAT_180c86938 + 0x1e50 +
           ((ulonglong)*(byte *)((longlong)param_2 + 0x16) +
           (((ulonglong)*(byte *)((longlong)param_2 + 0x14) +
            ((ulonglong)*(byte *)((longlong)param_2 + 0x15) +
            (ulonglong)*(byte *)((longlong)param_2 + 0x12) * 4) * 2) * 3 +
           (ulonglong)*(byte *)((longlong)param_2 + 0x13)) * 2) * 8);
  
  render_core = _DAT_180c86938;
  
  // 更新材质句柄
  if (material_handle != *(longlong *)(param_1 + 0x8418)) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x158))(*(longlong **)(param_1 + 0x8400),material_handle);
    render_core = _DAT_180c86938;
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
    render_core = _DAT_180c86938;
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
    render_core = _DAT_180c86938;
    *(longlong *)(param_1 + 0x8430) = material_handle;
  }
  
  // 更新渲染状态
  material_handle = *(longlong *)(render_core + 0x1d88 + (ulonglong)*(byte *)((longlong)param_2 + 0x39) * 8);
  if (*(longlong *)(param_1 + 0x8410) != material_handle) {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x88))(*(longlong **)(param_1 + 0x8400),material_handle);
    *(longlong *)(param_1 + 0x8410) = material_handle;
  }
  
  // 设置渲染模式和纹理
  RenderingSystem_SetRenderMode(param_1,*(undefined1 *)((longlong)param_2 + 0x17));
  FUN_18029f560(param_1,*param_2,*(undefined1 *)((longlong)param_2 + 0x3b),
                *(undefined1 *)((longlong)param_2 + 0x3a));
                    
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
               *(undefined8 *)(shader_param_data + 6),  // 着色器参数偏移量
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
void FUN_18029d000(longlong param_1,undefined1 param_2)
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
void FUN_18029d0a0(longlong param_1,undefined8 *param_2,undefined4 *param_3)
{
  undefined1 security_buffer[RENDER_BUFFER_SIZE_SMALL];
  undefined4 texture_param4;
  undefined4 texture_param2;
  undefined4 texture_param3;
  undefined4 texture_param1;
  undefined8 texture_handle1;
  undefined8 texture_handle2;
  undefined4 texture_id2;
  undefined4 texture_id1;
  ulonglong security_key;
  
  // 初始化安全缓冲区
  security_key = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  
  // 提取纹理数据
  texture_handle1 = *param_2;                    // 纹理句柄1
  texture_handle2 = param_2[1];                  // 纹理句柄2
  texture_id2 = *(undefined4 *)((longlong)param_2 + 0x14);  // 纹理ID2
  texture_id1 = *(undefined4 *)(param_2 + 2);               // 纹理ID1
  
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
      *(longlong *)(param_3 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
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
  undefined4 *report_data;
  undefined8 *report_data64;
  undefined2 *report_data16;
  int slot_index;
  int buffer_size;
  undefined *info_string;
  longlong *render_slots;
  uint *render_flags_array;
  undefined1 security_buffer[RENDER_BUFFER_SIZE_LARGE];
  undefined8 magic_value;
  undefined *info_array[RENDER_PARAM_MAX_SLOTS];
  ulonglong security_key;
  
  magic_value = 0xfffffffffffffffe;
  security_key = _DAT_180bf00a8 ^ (ulonglong)security_buffer;
  slot_index = 0;
  
  // 初始化报告缓冲区
  buffer_size = *(int *)(param_2 + 0x10) + 0x14;
  FUN_1806277c0(param_2, buffer_size);
  
  // 写入报告标题
  report_data = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *report_data = 0x74786554;        // "Text"
  report_data[1] = 0x20657275;       // "ure "
  report_data[2] = 0x746f6c53;       // "Slot"
  report_data[3] = 0x73694c20;       // "Lis "
  report_data[4] = 0xa3a2074;        // "t" + 终止符
  *(undefined1 *)(report_data + 5) = 0;
  *(int *)(param_2 + 0x10) = buffer_size;
  
  // 获取渲染插槽和标志数组
  render_flags_array = (uint *)(param_1 + 0x8a38);
  render_slots = (longlong *)(param_1 + 0x8438);
  
  // 遍历所有渲染插槽（最大128个）
  do {
    if (*render_slots != 0) {
      // 获取渲染信息
      render_info = FUN_1802a05d0(*render_slots, info_array);
      info_string = &DAT_18098bc73;
      if (*(undefined **)(render_info + 8) != (undefined *)0x0) {
        info_string = *(undefined **)(render_info + 8);
      }
      
      // 写入插槽信息
      FUN_180628040(param_2, &UNK_180a172e0, slot_index, info_string);
      info_array[0] = &UNK_18098bcb0;
      
      render_flags = *render_flags_array;
      
      // 根据标志位写入不同的渲染属性
      if ((render_flags & 1) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 7;
        FUN_1806277c0(param_2, buffer_size);
        *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
             0x20786574726576;  // "vertex "
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 2) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 7;
        FUN_1806277c0(param_2, buffer_size);
        *(undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8)) =
             0x206e69616d6f64;  // "domain "
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 4) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 5;
        FUN_1806277c0(param_2, buffer_size);
        report_data = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data = 0x6c6c7568;  // "hull"
        *(undefined2 *)(report_data + 1) = 0x20;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 8) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 9;
        FUN_1806277c0(param_2, buffer_size);
        report_data64 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data64 = 0x797274656d6f6567;  // "geometry "
        *(undefined2 *)(report_data64 + 1) = 0x20;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      if ((render_flags & 0x10) != 0) {
        buffer_size = *(int *)(param_2 + 0x10) + 6;
        FUN_1806277c0(param_2, buffer_size);
        report_data = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data = 0x65786970;  // "pixel"
        *(undefined2 *)(report_data + 1) = 0x206c;
        *(undefined1 *)((longlong)report_data + 6) = 0;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      buffer_size = *(int *)(param_2 + 0x10);
      if ((render_flags & 0x20) != 0) {
        buffer_size = buffer_size + 8;
        FUN_1806277c0(param_2, buffer_size);
        report_data64 = (undefined8 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
        *report_data64 = 0x20657475706d6f63;  // "compute "
        *(undefined1 *)(report_data64 + 1) = 0;
        *(int *)(param_2 + 0x10) = buffer_size;
      }
      
      // 写入行结束符
      FUN_1806277c0(param_2, buffer_size + 2);
      report_data16 = (undefined2 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
      *report_data16 = 0xa29;  // 换行符
      *(undefined1 *)(report_data16 + 1) = 0;
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



// 函数: void FUN_18029d500(longlong param_1,longlong param_2)
void FUN_18029d500(longlong param_1,longlong param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  undefined *puVar5;
  undefined1 auStack_118 [32];
  undefined4 uStack_f8;
  longlong lStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined4 uStack_c8;
  undefined auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e8 = 0xfffffffffffffffe;
  uStack_38 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  iVar3 = 0;
  uStack_f8 = 0;
  iVar2 = *(int *)(param_2 + 0x10) + 0x1a;
  lStack_f0 = param_1;
  FUN_1806277c0(param_2,iVar2);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x646e6552;
  puVar1[1] = 0x54207265;
  puVar1[2] = 0x65677261;
  puVar1[3] = 0x6c532074;
  *(undefined8 *)(puVar1 + 4) = 0x207473694c20746f;
  *(undefined2 *)(puVar1 + 6) = 0xa3a;
  *(undefined1 *)((longlong)puVar1 + 0x1a) = 0;
  *(int *)(param_2 + 0x10) = iVar2;
  plVar4 = (longlong *)(param_1 + 0x83b8);
  do {
    if (*plVar4 != 0) {
      puStack_d8 = &UNK_1809fcc28;
      puStack_d0 = auStack_c0;
      auStack_c0[0] = 0;
      uStack_c8 = 0;
      strcpy_s(auStack_c0,0x80,&DAT_18098bc73);
      uStack_f8 = 1;
      puVar5 = &DAT_18098bc73;
      if (puStack_d0 != (undefined *)0x0) {
        puVar5 = puStack_d0;
      }
      FUN_180628040(param_2,&UNK_180a17308,iVar3,puVar5);
      uStack_f8 = 0;
      puStack_d8 = &UNK_18098bcb0;
    }
    iVar3 = iVar3 + 1;
    plVar4 = plVar4 + 1;
  } while (iVar3 < 7);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar3 = iVar2 + 0x14;
  FUN_1806277c0(param_2,iVar3);
  puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
  *puVar1 = 0x74706544;
  puVar1[1] = 0x61542068;
  puVar1[2] = 0x74656772;
  puVar1[3] = 0x6f6c5320;
  puVar1[4] = 0x203a2074;
  *(undefined1 *)(puVar1 + 5) = 0;
  *(int *)(param_2 + 0x10) = iVar3;
  if (*(longlong *)(lStack_f0 + 0x83f0) == 0) {
    iVar2 = iVar2 + 0x19;
    FUN_1806277c0(param_2,iVar2);
    puVar1 = (undefined4 *)((ulonglong)*(uint *)(param_2 + 0x10) + *(longlong *)(param_2 + 8));
    *puVar1 = 0x6c6c756e;
    *(undefined2 *)(puVar1 + 1) = 10;
    *(int *)(param_2 + 0x10) = iVar2;
  }
  else {
    puStack_d8 = &UNK_1809fcc28;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = 0;
    strcpy_s(auStack_c0,0x80,&DAT_18098bc73);
    uStack_f8 = 2;
    puVar5 = &DAT_18098bc73;
    if (puStack_d0 != (undefined *)0x0) {
      puVar5 = puStack_d0;
    }
    FUN_180628040(param_2,&UNK_180a0d2d4,puVar5);
    uStack_f8 = 0;
    puStack_d8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d760(longlong param_1,int param_2,char param_3,longlong param_4,int param_5)
void FUN_18029d760(longlong param_1,int param_2,char param_3,longlong param_4,int param_5)

{
  longlong *plVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined1 auStack_98 [32];
  undefined4 *puStack_78;
  undefined4 uStack_70;
  undefined8 *puStack_68;
  undefined4 *puStack_60;
  undefined4 auStack_58 [2];
  undefined8 uStack_50;
  undefined8 auStack_48 [4];
  ulonglong uStack_28;
  
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  uVar3 = 0;
  auStack_58[0] = 0xffffffff;
  if (param_4 != 0) {
    piVar2 = (int *)(_DAT_180c86870 + 0x224);
    *(longlong *)(param_4 + 0x340) = (longlong)*piVar2;
    if (param_5 == -1) {
      uVar3 = *(undefined8 *)(param_4 + 0x208);
    }
    else {
      uVar3 = *(undefined8 *)(*(longlong *)(param_4 + 0x210) + (longlong)param_5 * 8);
    }
    *(longlong *)(param_4 + 0x340) = (longlong)*piVar2;
    auStack_58[0] = *(undefined4 *)(param_4 + 0x1f8);
  }
  plVar1 = *(longlong **)(param_1 + 0x8400);
  uStack_50 = uVar3;
  if (param_3 == '\0') {
    puStack_68 = auStack_48;
    uStack_70 = 4;
    puStack_78._0_4_ = 1;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,0,0);
    plVar1 = *(longlong **)(param_1 + 0x8400);
    puStack_60 = auStack_58;
    auStack_48[param_2 - 1] = uVar3;
    puStack_68 = auStack_48;
    uStack_70 = 4;
    puStack_78 = (undefined4 *)CONCAT44(puStack_78._4_4_,1);
    (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff,0,0);
    if (param_2 < 7) {
      *(undefined8 *)(param_1 + 0x83b8) = 0;
      *(undefined8 *)(param_1 + 0x8378) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83c0) = 0;
      *(undefined8 *)(param_1 + 0x8380) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83c8) = 0;
      *(undefined8 *)(param_1 + 0x8388) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83d0) = 0;
      *(undefined8 *)(param_1 + 0x8390) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83d8) = 0;
      *(undefined8 *)(param_1 + 0x8398) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83e0) = 0;
      *(undefined8 *)(param_1 + 0x83a0) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83e8) = 0;
      *(undefined8 *)(param_1 + 0x83a8) = 0xffffffffdeadfeee;
    }
  }
  else {
    puStack_78 = auStack_58;
    (**(code **)(*plVar1 + 0x220))(plVar1,param_2,1,&uStack_50);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_98);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029d930(longlong param_1,undefined8 param_2,char param_3,longlong param_4)
void FUN_18029d930(longlong param_1,undefined8 param_2,char param_3,longlong param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined1 auStack_88 [32];
  undefined8 uStack_68;
  undefined4 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 auStack_40 [4];
  ulonglong uStack_20;
  
  uStack_20 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x20);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  }
  plVar1 = *(longlong **)(param_1 + 0x8400);
  uStack_48 = uVar2;
  if (param_3 == '\0') {
    puStack_58 = auStack_40;
    uStack_60 = 4;
    uStack_68._0_4_ = 1;
    (**(code **)(*plVar1 + 0x2d0))(plVar1,0,0,0);
    plVar1 = *(longlong **)(param_1 + 0x8400);
    puStack_58 = &uStack_48;
    uStack_50 = 0;
    auStack_40[(int)param_2 - 1] = uVar2;
    uStack_60 = 4;
    uStack_68 = CONCAT44(uStack_68._4_4_,1);
    (**(code **)(*plVar1 + 0x110))(plVar1,0xffffffff,0,0);
    if ((int)param_2 < 7) {
      *(undefined8 *)(param_1 + 0x83b8) = 0;
      *(undefined8 *)(param_1 + 0x8378) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83c0) = 0;
      *(undefined8 *)(param_1 + 0x8380) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83c8) = 0;
      *(undefined8 *)(param_1 + 0x8388) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83d0) = 0;
      *(undefined8 *)(param_1 + 0x8390) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83d8) = 0;
      *(undefined8 *)(param_1 + 0x8398) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83e0) = 0;
      *(undefined8 *)(param_1 + 0x83a0) = 0xffffffffdeadfeee;
      *(undefined8 *)(param_1 + 0x83e8) = 0;
      *(undefined8 *)(param_1 + 0x83a8) = 0xffffffffdeadfeee;
    }
  }
  else {
    uStack_68 = 0;
    (**(code **)(*plVar1 + 0x220))(plVar1,param_2,1,&uStack_48);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (ulonglong)auStack_88);
}





// 函数: void FUN_18029db70(longlong param_1,char param_2,longlong param_3)
void FUN_18029db70(longlong param_1,char param_2,longlong param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined4 uVar4;
  longlong lVar5;
  
  if ((*(longlong *)(param_1 + 0x8240) != param_3) || (*(char *)(param_1 + 0x8270) != param_2)) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    *(longlong *)(param_1 + 0x8240) = param_3;
    *(char *)(param_1 + 0x8270) = param_2;
    if (param_2 == '\n') {
      (**(code **)(*plVar1 + 0x90))(plVar1,0,1,param_3 + 0x2a0,param_3 + 0x2b8,param_3 + 0x2b0);
      return;
    }
    if (param_2 == '\v') {
      lVar2 = param_3 + 0x2b0;
      lVar3 = param_3 + 0x2b8;
      lVar5 = param_3 + 0x2a0;
      uVar4 = 2;
    }
    else {
      lVar2 = param_3 + 0x220;
      lVar3 = param_3 + 0x260;
      lVar5 = param_3 + 0x1a0;
      uVar4 = *(undefined4 *)(param_3 + 0x18c);
    }
    (**(code **)(*plVar1 + 0x90))(plVar1,0,uVar4,lVar5,lVar3,lVar2);
  }
  return;
}





// 函数: void FUN_18029dc40(longlong param_1,longlong param_2)
void FUN_18029dc40(longlong param_1,longlong param_2)

{
  if (*(longlong *)(param_1 + 0x8240) != param_2) {
    *(longlong *)(param_1 + 0x8240) = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x90))
              (*(longlong **)(param_1 + 0x8400),0,*(undefined4 *)(param_2 + 0x188),param_2 + 0x1a0,
               param_2 + 0x260,param_2 + 0x220);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029dca0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)
void FUN_18029dca0(longlong param_1,ulonglong param_2,uint param_3,longlong param_4)

{
  longlong *plVar1;
  code *pcVar2;
  ulonglong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  if ((param_3 & 1) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x38);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,param_2,1,param_4 + 0x10);
  }
  if ((param_3 & 4) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x1f0);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 2) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x210);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 0x10) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x80);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  if ((param_3 & 0x20) != 0) {
    plVar1 = *(longlong **)(param_1 + 0x8400);
    pcVar2 = *(code **)(*plVar1 + 0x238);
    *(undefined4 *)(param_4 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
    (*pcVar2)(plVar1,uVar3,1,param_4 + 0x10);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029de40(longlong param_1,undefined4 param_2)
void FUN_18029de40(longlong param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined4 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  ulonglong uStack_10;
  
  uStack_10 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  lVar1 = *(longlong *)(param_1 + 0x83b8);
  bVar3 = lVar1 != *(longlong *)(param_1 + 0x8378);
  if (bVar3) {
    *(longlong *)(param_1 + 0x8378) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_48 = 0;
  }
  else {
    uStack_48 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83c0);
  bVar4 = lVar1 != *(longlong *)(param_1 + 0x8380);
  if (bVar4) {
    *(longlong *)(param_1 + 0x8380) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_40 = 0;
  }
  else {
    uStack_40 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83c8);
  bVar5 = lVar1 != *(longlong *)(param_1 + 0x8388);
  if (bVar5) {
    *(longlong *)(param_1 + 0x8388) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_38 = 0;
  }
  else {
    uStack_38 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83d0);
  bVar6 = lVar1 != *(longlong *)(param_1 + 0x8390);
  if (bVar6) {
    *(longlong *)(param_1 + 0x8390) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_30 = 0;
  }
  else {
    uStack_30 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83d8);
  bVar7 = lVar1 != *(longlong *)(param_1 + 0x8398);
  if (bVar7) {
    *(longlong *)(param_1 + 0x8398) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_28 = 0;
  }
  else {
    uStack_28 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83e0);
  bVar8 = lVar1 != *(longlong *)(param_1 + 0x83a0);
  if (bVar8) {
    *(longlong *)(param_1 + 0x83a0) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83e8);
  bVar9 = lVar1 != *(longlong *)(param_1 + 0x83a8);
  if (bVar9) {
    *(longlong *)(param_1 + 0x83a8) = lVar1;
  }
  if (lVar1 == 0) {
    uStack_18 = 0;
  }
  else {
    uStack_18 = *(undefined8 *)(lVar1 + 8);
  }
  lVar1 = *(longlong *)(param_1 + 0x83f0);
  bVar10 = *(longlong *)(param_1 + 0x83b0) != lVar1;
  if (bVar10) {
    *(longlong *)(param_1 + 0x83b0) = lVar1;
  }
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 8);
  }
  if ((bVar9 || (bVar8 || (bVar7 || (bVar6 || (bVar5 || (bVar4 || bVar3)))))) || (bVar10)) {
    uStack_50 = 0xffffffffffffffff;
    uStack_58 = 0;
    uStack_60 = 0xffffffff;
    uStack_68 = param_2;
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x110))
              (*(longlong **)(param_1 + 0x8400),param_2,&uStack_48,uVar2);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (ulonglong)auStack_88);
}





// 函数: void FUN_18029e060(longlong param_1)
void FUN_18029e060(longlong param_1)

{
  if (DAT_180c82846 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xa8))();
  }
  return;
}





// 函数: void FUN_18029e090(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)
void FUN_18029e090(longlong param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  if (DAT_180c82846 == '\0') {
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0xa0))
              (*(longlong **)(param_1 + 0x8400),param_3 * 3,param_4,param_2,0,0);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18029e110(longlong param_1)
void FUN_18029e110(longlong param_1)

{
  longlong lVar1;
  
  if (DAT_180c82846 == '\0') {
    lVar1 = *(longlong *)(*(longlong *)(_DAT_180c86938 + 0x1d50) + 0x18);
    if (*(longlong *)(param_1 + 0x8240) != lVar1) {
      *(longlong *)(param_1 + 0x8240) = lVar1;
      (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x90))
                (*(longlong **)(param_1 + 0x8400),0,*(undefined4 *)(lVar1 + 0x188),lVar1 + 0x1a0,
                 lVar1 + 0x260,lVar1 + 0x220);
    }
                    // WARNING: Could not recover jumptable at 0x00018029e193. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x68))(*(longlong **)(param_1 + 0x8400),3);
    return;
  }
  return;
}



bool FUN_18029e1a0(longlong param_1,longlong param_2,int param_3,int param_4,uint param_5,
                  int *param_6)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uStack_18;
  uint uStack_10;
  
  lVar2 = FUN_18023a940(param_2);
  uVar4 = (uint)*(byte *)(param_2 + 0x335);
  if ((int)*(uint *)(param_2 + 0x35c) < (int)(uint)*(byte *)(param_2 + 0x335)) {
    uVar4 = *(uint *)(param_2 + 0x35c);
  }
  param_3 = uVar4 * param_4 + param_3;
  if (param_5 == 0) {
    uVar3 = 5;
  }
  else {
    uVar4 = param_5 & 1;
    if ((param_5 & 8) != 0) {
      uVar4 = 3;
    }
    uVar3 = uVar4 | 4;
    if ((param_5 & 2) == 0) {
      uVar3 = uVar4;
    }
    if ((param_5 & 4) != 0) {
      uVar3 = uVar3 | 5;
    }
  }
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),*(undefined8 *)(lVar2 + 8),param_3,uVar3,0,
                     &uStack_18);
  if (iVar1 < 0) {
    FUN_180220810(iVar1,&UNK_180a173b0);
  }
  *(undefined8 *)(param_6 + 2) = uStack_18;
  *(ulonglong *)(param_6 + 4) = (ulonglong)uStack_10;
  *param_6 = param_3;
  return -1 < iVar1;
}





// 函数: void FUN_18029e2a0(longlong param_1,undefined8 param_2,undefined4 *param_3)
void FUN_18029e2a0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  longlong *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  longlong lVar3;
  
  plVar2 = *(longlong **)(param_1 + 0x8400);
  uVar1 = *param_3;
  UNRECOVERED_JUMPTABLE = *(code **)(*plVar2 + 0x78);
  lVar3 = FUN_18023a940(param_2);
                    // WARNING: Could not recover jumptable at 0x00018029e2e4. Too many branches
                    // WARNING: Treating indirect jump as call
  (*UNRECOVERED_JUMPTABLE)(plVar2,*(undefined8 *)(lVar3 + 8),uVar1);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

bool FUN_18029e2f0(longlong param_1,longlong param_2,uint param_3,longlong param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined8 auStack_18 [2];
  
  *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  if (param_3 == 0) {
    uVar3 = 5;
  }
  else {
    uVar1 = param_3 & 1;
    if ((param_3 & 8) != 0) {
      uVar1 = 3;
    }
    uVar3 = uVar1 | 4;
    if ((param_3 & 2) == 0) {
      uVar3 = uVar1;
    }
    if ((param_3 & 4) != 0) {
      uVar3 = uVar3 | 5;
    }
  }
  iVar2 = (**(code **)(**(longlong **)(param_1 + 0x8400) + 0x70))
                    (*(longlong **)(param_1 + 0x8400),*(undefined8 *)(param_2 + 0x10),0,uVar3,0,
                     auStack_18);
  if (iVar2 < 0) {
    FUN_180220810(iVar2,&UNK_180a17358);
  }
  *(undefined8 *)(param_4 + 8) = auStack_18[0];
  return -1 < iVar2;
}





