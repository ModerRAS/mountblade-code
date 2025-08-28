#include "TaleWorlds.Native.Split.h"

/**
 * 渲染系统高级资源管理和数据处理模块
 * 
 * 本文件包含4个核心函数，主要用于渲染系统的高级资源管理、
 * 数据处理、变换计算和状态控制。该模块涵盖了渲染对象的管理、
 * 资源清理、数据变换、矩阵运算等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染对象资源清理和释放
 * - 高级数据处理和变换计算
 * - 渲染状态管理和控制
 * - 复杂数据结构处理和优化
 */

// 函数指针偏移量常量
#define FUNCTION_POINTER_OFFSET 0x38

// 内存偏移量常量
#define OFFSET_RENDER_OBJECT_PRIMARY 0x00
#define OFFSET_RENDER_OBJECT_SECONDARY 0x08
#define OFFSET_DATA_ARRAY_START 0x10
#define OFFSET_DATA_ARRAY_END 0x18
#define OFFSET_DATA_PROCESSOR_1 0x30
#define OFFSET_DATA_PROCESSOR_2 0x40
#define OFFSET_DATA_PROCESSOR_3 0x48

// 数据处理偏移量
#define OFFSET_VERTEX_DATA 0x94
#define OFFSET_TEXCOORD_DATA 0x98
#define OFFSET_NORMAL_DATA 0xe8
#define OFFSET_TRANSFORM_DATA 0x84
#define OFFSET_SCALE_DATA 0x88
#define OFFSET_COLOR_DATA 0xa0
#define OFFSET_MATRIX_DATA 0xa4
#define OFFSET_FLAG_DATA 0x60

// 渲染状态常量
#define RENDER_STATE_ACTIVE 0x41
#define RENDER_STATE_FLAG_1 0x10141
#define RENDER_FLAG_MODIFIED 0x02
#define RENDER_FLAG_ACTIVE_1 0x40
#define RENDER_FLAG_ACTIVE_2 0x20

// 浮点数常量
#define FLOAT_ONE 0x3f800000
#define FLOAT_MAX 0x7f7fffff
#define FLOAT_INFINITY 3.4028235e+38

/**
 * 渲染系统资源清理函数
 * 
 * @param render_context 渲染上下文指针
 * 
 * 功能说明：
 * 1. 清理主渲染对象资源
 * 2. 清理次级渲染对象资源
 * 3. 调用相应的析构函数
 * 4. 确保资源正确释放
 * 
 * 资源清理流程：
 * - 检查主渲染对象指针
 * - 调用主渲染对象析构函数
 * - 检查次级渲染对象指针
 * - 调用次级渲染对象析构函数
 */
void rendering_system_cleanup_render_objects(longlong *render_context)
{
  // 清理次级渲染对象（偏移0x08）
  if ((longlong *)render_context[1] != (longlong *)0x0) {
    // 调用次级渲染对象的析构函数（函数指针位于对象地址+0x38）
    (**(code **)(*(longlong *)render_context[1] + FUNCTION_POINTER_OFFSET))();
  }
  
  // 清理主渲染对象（偏移0x00）
  if ((longlong *)*render_context != (longlong *)0x0) {
    // 调用主渲染对象的析构函数（函数指针位于对象地址+0x38）
    (**(code **)(*(longlong *)*render_context + FUNCTION_POINTER_OFFSET))();
  }
  
  return;
}

/**
 * 渲染系统高级数据处理函数
 * 
 * @param data_processor 数据处理器指针
 * @param process_flag 处理标志
 * 
 * 功能说明：
 * 1. 处理渲染数据数组
 * 2. 执行坐标变换计算
 * 3. 计算向量和矩阵数据
 * 4. 更新渲染对象状态
 * 5. 处理纹理和颜色数据
 * 
 * 数据处理流程：
 * - 计算数据数组大小
 * - 分配处理缓冲区
 * - 执行顶点数据变换
 * - 计算法向量和纹理坐标
 * - 更新渲染对象属性
 */
void rendering_system_advanced_data_processor(longlong data_processor, char process_flag)
{
  float *vertex_ptr;
  uint64_t *matrix_ptr;
  float texcoord_u;
  float texcoord_v;
  float normal_u;
  float normal_v;
  float color_r;
  float transform_x;
  float transform_y;
  float transform_z;
  longlong vertex_object;
  longlong buffer_ptr_1;
  longlong buffer_ptr_2;
  longlong data_index;
  longlong offset_calc;
  int data_count;
  ulonglong data_size;
  int process_index;
  int skip_index;
  longlong loop_counter;
  int current_index;
  bool should_process;
  uint64_t temp_data;
  longlong *output_buffer_1;
  longlong *output_buffer_2;
  
  // 计算数据数组大小（从0x18到0x10的差值除以8）
  data_size = *(longlong *)(data_processor + OFFSET_DATA_ARRAY_END) - 
              *(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) >> 3;
  data_count = (int)data_size;
  
  // 检查是否有数据需要处理并且处理标志已设置
  if ((0 < data_count) && (process_flag != '\0')) {
    // 分配输出缓冲区
    temp_data = FUN_1800f6ce0(data_processor, &output_buffer_2, data_count * 4);
    FUN_18031bde0(temp_data, &output_buffer_1, data_size & 0xffffffff);
    
    // 获取缓冲区基地址
    buffer_ptr_1 = output_buffer_2[2];
    buffer_ptr_2 = output_buffer_1[2];
    process_index = 1;
    current_index = 0;
    
    // 处理每个数据项
    if (0 < data_count) {
      loop_counter = 0;
      do {
        // 检查是否需要跳过当前项
        should_process = current_index != *(int *)(data_processor + 0x30);
        skip_index = 0;
        if (should_process) {
          skip_index = process_index;
        }
        if (should_process) {
          process_index = process_index + 1;
        }
        
        // 获取当前顶点对象
        vertex_object = *(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                                       loop_counter * 8);
        
        // 读取纹理坐标
        texcoord_u = *(float *)(vertex_object + OFFSET_TEXCOORD_DATA);
        texcoord_v = *(float *)(vertex_object + OFFSET_TEXCOORD_DATA + 4);
        
        // 读取法向量坐标
        normal_u = *(float *)(vertex_object + OFFSET_NORMAL_DATA);
        normal_v = *(float *)(vertex_object + OFFSET_NORMAL_DATA + 4);
        
        // 计算输出偏移量
        offset_calc = (longlong)(skip_index * 4);
        
        // 计算并写入顶点位置数据
        *(float *)(buffer_ptr_1 + offset_calc * 4) = 
            *(float *)(vertex_object + OFFSET_VERTEX_DATA) + 
            *(float *)(vertex_object + OFFSET_NORMAL_DATA - 4);
        *(float *)(buffer_ptr_1 + 4 + offset_calc * 4) = texcoord_u + normal_u;
        *(float *)(buffer_ptr_1 + 8 + offset_calc * 4) = texcoord_v + normal_v;
        *(int32_t *)(buffer_ptr_1 + 0xc + offset_calc * 4) = 
            *(int32_t *)(vertex_object + OFFSET_FLAG_DATA);
        
        // 重新读取纹理坐标
        texcoord_u = *(float *)(vertex_object + OFFSET_TEXCOORD_DATA);
        texcoord_v = *(float *)(vertex_object + OFFSET_TEXCOORD_DATA + 4);
        color_r = *(float *)(vertex_object + OFFSET_COLOR_DATA);
        normal_u = *(float *)(vertex_object + OFFSET_NORMAL_DATA);
        normal_v = *(float *)(vertex_object + OFFSET_NORMAL_DATA + 4);
        
        // 计算变换数据偏移量
        offset_calc = (longlong)skip_index * 0x60;
        vertex_ptr = (float *)(offset_calc + 0x40 + buffer_ptr_2);
        
        // 写入变换后的顶点数据
        *vertex_ptr = *(float *)(vertex_object + OFFSET_VERTEX_DATA) + 
                     *(float *)(vertex_object + OFFSET_NORMAL_DATA - 4);
        vertex_ptr[1] = texcoord_u + normal_u;
        vertex_ptr[2] = texcoord_v + normal_v;
        vertex_ptr[3] = color_r;
        
        // 写入颜色数据
        *(float *)(offset_calc + 0x4c + buffer_ptr_2) =
             (float)*(byte *)(*(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                               loop_counter * 8) + 0x149);
        
        // 重新获取顶点对象
        vertex_object = *(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                                     loop_counter * 8);
        
        // 读取变换数据
        normal_u = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA + 4);
        normal_v = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA);
        texcoord_u = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA + 8);
        texcoord_v = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 8);
        color_r = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 12);
        transform_z = *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 4);
        
        vertex_ptr = (float *)(offset_calc + 0x50 + buffer_ptr_2);
        
        // 计算并写入向量长度数据
        *vertex_ptr = SQRT(*(float *)(vertex_object + 100) * *(float *)(vertex_object + 100) +
                           *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 24) * 
                           *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 24) +
                           *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 20) * 
                           *(float *)(vertex_object + OFFSET_TRANSFORM_DATA - 20));
        vertex_ptr[1] = SQRT(color_r * color_r + texcoord_v * texcoord_v + 
                             transform_z * transform_z);
        vertex_ptr[2] = SQRT(normal_v * normal_v + normal_u * normal_u + 
                             texcoord_u * texcoord_u);
        vertex_ptr[3] = FLOAT_INFINITY;
        
        // 重新获取顶点对象
        vertex_object = *(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                                     loop_counter * 8);
        
        // 复制矩阵数据
        temp_data = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 8);
        *(uint64_t *)(offset_calc + buffer_ptr_2) = 
            *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA);
        ((uint64_t *)(offset_calc + buffer_ptr_2))[1] = temp_data;
        
        temp_data = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 24);
        matrix_ptr = (uint64_t *)(offset_calc + 0x10 + buffer_ptr_2);
        *matrix_ptr = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 16);
        matrix_ptr[1] = temp_data;
        
        temp_data = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 40);
        matrix_ptr = (uint64_t *)(offset_calc + 0x20 + buffer_ptr_2);
        *matrix_ptr = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 32);
        matrix_ptr[1] = temp_data;
        
        temp_data = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 56);
        matrix_ptr = (uint64_t *)(offset_calc + 0x30 + buffer_ptr_2);
        *matrix_ptr = *(uint64_t *)(vertex_object + OFFSET_MATRIX_DATA + 48);
        matrix_ptr[1] = temp_data;
        
        // 复制标志数据
        *(int32_t *)(offset_calc + 0xc + buffer_ptr_2) =
             *(int32_t *)(*(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                               loop_counter * 8) + OFFSET_FLAG_DATA);
        *(int32_t *)(offset_calc + 0x1c + buffer_ptr_2) =
             *(int32_t *)(*(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                               loop_counter * 8) + 0x144);
        
        // 清理顶点对象状态
        *(int8_t *)(*(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                       loop_counter * 8) + 0x50) = 0;
        *(int32_t *)(*(longlong *)(*(longlong *)(data_processor + OFFSET_DATA_ARRAY_START) + 
                       loop_counter * 8) + 0x58) =
             *(int32_t *)(data_processor + 4);
        
        current_index = current_index + 1;
        loop_counter = loop_counter + 1;
      } while (loop_counter < data_count);
    }
    
    // 调用数据处理函数
    FUN_18029b390(*(uint64_t *)(_DAT_180c86938 + 0x1cd8), 
                  *(uint64_t *)(data_processor + OFFSET_DATA_PROCESSOR_2),
                  output_buffer_2);
    FUN_18029b390(*(uint64_t *)(_DAT_180c86938 + 0x1cd8), 
                  *(uint64_t *)(data_processor + OFFSET_DATA_PROCESSOR_3),
                  output_buffer_1);
    
    // 释放缓冲区
    if (output_buffer_1 != (longlong *)0x0) {
      (**(code **)(*output_buffer_1 + FUNCTION_POINTER_OFFSET))();
    }
    if (output_buffer_2 != (longlong *)0x0) {
      (**(code **)(*output_buffer_2 + FUNCTION_POINTER_OFFSET))();
    }
  }
  
  return;
}

/**
 * 渲染系统状态初始化函数
 * 
 * @param render_context 渲染上下文指针
 * 
 * 功能说明：
 * 1. 初始化渲染系统状态
 * 2. 设置全局状态变量
 * 3. 配置渲染参数
 * 4. 准备渲染环境
 * 
 * 状态初始化流程：
 * - 设置安全栈检查
 * - 初始化全局变量
 * - 配置渲染上下文
 * - 设置默认参数
 */
void rendering_system_initialize_state(longlong render_context)
{
  longlong context_data;
  int8_t security_stack_1 [32];
  uint64_t security_cookie;
  void *security_ptr_1;
  int8_t *security_ptr_2;
  int32_t security_param;
  int8_t security_stack_2 [32];
  ulonglong security_hash;
  
  // 设置安全栈检查
  security_cookie = 0xfffffffffffffffe;
  security_hash = _DAT_180bf00a8 ^ (ulonglong)security_stack_1;
  
  // 获取上下文数据
  context_data = *(longlong *)(render_context + 0x9650);
  
  // 设置全局状态变量
  _DAT_180bf02a0 = 0x80;
  
  // 函数继续执行到下一个函数
  // 注意：此函数与下一个函数在原始代码中是连续的
}

/**
 * 渲染系统高级渲染控制函数
 * 
 * @param render_context 渲染上下文指针
 * @param render_params 渲染参数指针
 * @param render_data 渲染数据指针
 * @param data_format 数据格式
 * @param texture_data 纹理数据指针
 * @param shader_data 着色器数据
 * @param render_mode 渲染模式
 * 
 * 功能说明：
 * 1. 初始化渲染管线
 * 2. 设置渲染参数
 * 3. 配置纹理和着色器
 * 4. 执行渲染操作
 * 5. 管理渲染资源
 * 
 * 渲染控制流程：
 * - 根据渲染模式选择着色器
 * - 初始化渲染对象
 * - 设置渲染状态
 * - 配置纹理参数
 * - 执行渲染命令
 * - 清理渲染资源
 */
void rendering_system_advanced_render_control(longlong render_context, longlong render_params, 
                                              longlong *render_data, uint64_t data_format,
                                              longlong *texture_data, uint64_t shader_data, 
                                              int32_t render_mode)
{
  int *state_ptr;
  int state_value;
  int32_t texture_param_1;
  int32_t texture_param_2;
  uint64_t *matrix_data;
  int8_t render_flag;
  int32_t mode_param;
  int32_t *shader_params;
  longlong *render_object;
  uint64_t *vertex_data;
  uint64_t *normal_data;
  uint64_t *texcoord_data;
  longlong resource_manager;
  byte resource_flag;
  uint64_t global_data;
  int8_t security_stack [32];
  uint64_t *security_ptr;
  int8_t security_flag;
  longlong *render_buffer;
  void *buffer_ptr;
  uint64_t *data_ptr;
  int32_t buffer_param;
  uint64_t buffer_data;
  int32_t buffer_size_1;
  int32_t buffer_size_2;
  int32_t buffer_size_3;
  uint64_t buffer_offset;
  int32_t buffer_size_4;
  int32_t buffer_size_5;
  int32_t buffer_size_6;
  int32_t buffer_size_7;
  int32_t buffer_size_8;
  int32_t buffer_size_9;
  longlong *resource_chain_1;
  longlong *resource_chain_2;
  longlong *resource_chain_3;
  longlong *resource_chain_4;
  longlong *resource_chain_5;
  longlong *resource_chain_6;
  longlong *resource_chain_7;
  longlong *resource_chain_8;
  uint64_t resource_data_1;
  int32_t resource_data_2;
  int16_t resource_data_3;
  uint64_t resource_data_4;
  uint64_t resource_data_5;
  int32_t resource_data_6;
  int8_t resource_data_7;
  int32_t resource_data_8;
  uint64_t resource_data_9;
  uint64_t resource_data_10;
  uint64_t resource_data_11;
  longlong render_param_1;
  longlong render_param_2;
  void *render_ptr;
  int8_t *render_data_ptr;
  int32_t render_data_param;
  int8_t render_stack [136];
  uint64_t render_buffer_data [40];
  ulonglong security_hash;
  
  // 设置安全栈检查
  resource_data_10 = 0xfffffffffffffffe;
  security_hash = _DAT_180bf00a8 ^ (ulonglong)security_stack;
  
  // 设置渲染数据
  render_buffer = render_data;
  shader_params = (int32_t *)FUN_1800daa50();
  
  // 根据渲染模式选择着色器
  switch(render_mode) {
  case 0:
    FUN_180094b30(shader_params, &UNK_180a1a8f0);
    break;
  case 1:
    FUN_180094b30(shader_params, &UNK_180a1a9d8);
    break;
  case 2:
    FUN_180094b30(shader_params, &UNK_180a1a9b0);
    break;
  case 3:
    FUN_180094b30(shader_params, &UNK_180a1a988);
    break;
  case 4:
    FUN_180094b30(shader_params, &UNK_180a1a960);
    break;
  case 5:
    FUN_180094b30(shader_params, &UNK_180a1aa70);
    break;
  default:
    FUN_180626ee0(&UNK_180a1aa38);
  }
  
  // 初始化渲染对象
  render_object = (longlong *)FUN_1800bde30();
  if (render_object != (longlong *)0x0) {
    resource_chain_2 = render_object;
    (**(code **)(*render_object + 0x28))(render_object);
  }
  
  // 设置渲染对象链
  resource_chain_2 = *(longlong **)(shader_params + 0x2662);
  *(longlong **)(shader_params + 0x2662) = render_object;
  if (resource_chain_2 != (longlong *)0x0) {
    (**(code **)(*resource_chain_2 + FUNCTION_POINTER_OFFSET))();
  }
  
  // 设置渲染状态
  *shader_params = RENDER_STATE_ACTIVE;
  *(uint64_t *)(shader_params + 0x4706) = 0;
  shader_params[0x4708] = (float)*(ushort *)((longlong)texture_data + 0x32c);
  shader_params[0x4709] = (float)*(ushort *)((longlong)texture_data + 0x32e);
  shader_params[0x470a] = 0;
  shader_params[0x470b] = FLOAT_ONE;
  shader_params[0xd62] = (uint)*(ushort *)((longlong)texture_data + 0x32c);
  shader_params[0xd63] = (uint)*(ushort *)((longlong)texture_data + 0x32e);
  shader_params[0xd64] = (uint)*(ushort *)((longlong)texture_data + 0x32c);
  shader_params[0xd65] = (uint)*(ushort *)((longlong)texture_data + 0x32e);
  shader_params[1] = RENDER_STATE_FLAG_1;
  shader_params[0x473c] = 0;
  *(int8_t *)((longlong)shader_params + 0x11c37) = 1;
  *(byte *)((longlong)shader_params + 0x1bd9) = 
      *(byte *)((longlong)shader_params + 0x1bd9) | RENDER_FLAG_MODIFIED;
  *(byte *)(shader_params + 0x6f6) = 
      *(byte *)(shader_params + 0x6f6) | RENDER_FLAG_ACTIVE_1;
  *(int16_t *)((longlong)shader_params + 0x9a31) = 0;
  *(int8_t *)(shader_params + 0x4931) = 1;
  
  // 检查是否需要高级渲染
  if (*(longlong *)(shader_params + 0x2674) != 0) {
    // 设置高级渲染参数
    buffer_size_3 = 1;
    buffer_size_5 = 0x1018a;
    buffer_offset = 0x2f;
    buffer_size_1 = 0x80;
    buffer_size_2 = 0x80;
    buffer_size_6 = *(int32_t *)(render_params + 0x1bd4);
    render_ptr = &UNK_1809fcc28;
    render_data_ptr = render_stack;
    render_stack[0] = 0;
    render_data_param = 0x11;
    global_data = strcpy_s(render_stack, 0x80, &UNK_180a1aa20);
    FUN_1800b1d80(global_data, &resource_chain_1, &render_ptr, &buffer_size_1);
    
    // 配置渲染链
    render_object = resource_chain_1;
    render_ptr = &UNK_18098bcb0;
    shader_params[1] = shader_params[1] | RENDER_FLAG_MODIFIED;
    *(uint64_t *)(shader_params + 0x2684) = 0;
    *(uint64_t *)(shader_params + 0x2686) = 0;
    resource_chain_3 = resource_chain_1;
    
    if (resource_chain_1 != (longlong *)0x0) {
      (**(code **)(*resource_chain_1 + 0x28))(resource_chain_1);
    }
    
    resource_chain_3 = *(longlong **)(shader_params + 0x25aa);
    *(longlong **)(shader_params + 0x25aa) = render_object;
    if (resource_chain_3 != (longlong *)0x0) {
      (**(code **)(*resource_chain_3 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 设置纹理数据
    resource_chain_4 = texture_data;
    (**(code **)(*texture_data + 0x28))(texture_data);
    resource_chain_4 = *(longlong **)(shader_params + 0x25a4);
    *(longlong **)(shader_params + 0x25a4) = texture_data;
    if (resource_chain_4 != (longlong *)0x0) {
      (**(code **)(*resource_chain_4 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 初始化资源标志
    resource_flag = 0;
    shader_params[0xd5f] = 0;
    shader_params[0xd5e] = render_mode;
    
    // 清理资源链
    resource_chain_5 = *(longlong **)(shader_params + 0x265c);
    *(uint64_t *)(shader_params + 0x265c) = 0;
    if (resource_chain_5 != (longlong *)0x0) {
      (**(code **)(*resource_chain_5 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 创建新资源对象
    render_object = (longlong *)FUN_1800be440();
    if (render_object != (longlong *)0x0) {
      resource_chain_6 = render_object;
      (**(code **)(*render_object + 0x28))(render_object);
    }
    
    resource_chain_6 = *(longlong **)(shader_params + 0x2660);
    *(longlong **)(shader_params + 0x2660) = render_object;
    if (resource_chain_6 != (longlong *)0x0) {
      (**(code **)(*resource_chain_6 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 获取渲染参数
    resource_manager = *(longlong *)(*(longlong *)(render_context + 0x38) + 0x60b80);
    if (resource_manager == 0) {
      buffer_size_7 = FLOAT_ONE;
      buffer_size_8 = FLOAT_ONE;
      global_data = 0x3f8000003f800000;
    } else {
      global_data = *(uint64_t *)(resource_manager + 0x20);
    }
    
    *(uint64_t *)(shader_params + 0x4932) = global_data;
    FUN_180094c20(render_buffer_data);
    
    // 设置渲染参数
    render_param_1 = *render_buffer;
    render_param_2 = render_buffer[1];
    security_flag = 1;
    security_ptr = (uint64_t *)CONCAT44(security_ptr._4_4_, 0x447a0000);
    FUN_180286300(render_buffer_data, render_mode, &render_param_1);
    
    // 处理渲染数据
    resource_manager = 2;
    vertex_data = (uint64_t *)(shader_params + 0xc);
    matrix_data = render_buffer_data;
    
    do {
      texcoord_data = matrix_data;
      normal_data = vertex_data;
      global_data = texcoord_data[1];
      *normal_data = *texcoord_data;
      normal_data[1] = global_data;
      global_data = texcoord_data[3];
      normal_data[2] = texcoord_data[2];
      normal_data[3] = global_data;
      global_data = texcoord_data[5];
      normal_data[4] = texcoord_data[4];
      normal_data[5] = global_data;
      global_data = texcoord_data[7];
      normal_data[6] = texcoord_data[6];
      normal_data[7] = global_data;
      global_data = texcoord_data[9];
      normal_data[8] = texcoord_data[8];
      normal_data[9] = global_data;
      global_data = texcoord_data[0xb];
      normal_data[10] = texcoord_data[10];
      normal_data[0xb] = global_data;
      global_data = texcoord_data[0xd];
      normal_data[0xc] = texcoord_data[0xc];
      normal_data[0xd] = global_data;
      global_data = texcoord_data[0xf];
      normal_data[0xe] = texcoord_data[0xe];
      normal_data[0xf] = global_data;
      resource_manager = resource_manager + -1;
      vertex_data = normal_data + 0x10;
      matrix_data = texcoord_data + 0x10;
    } while (resource_manager != 0);
    
    global_data = texcoord_data[0x11];
    normal_data[0x10] = texcoord_data[0x10];
    normal_data[0x11] = global_data;
    global_data = texcoord_data[0x13];
    normal_data[0x12] = texcoord_data[0x12];
    normal_data[0x13] = global_data;
    global_data = texcoord_data[0x15];
    normal_data[0x14] = texcoord_data[0x14];
    normal_data[0x15] = global_data;
    
    mode_param = *(int32_t *)((longlong)texcoord_data + 0xb4);
    texture_param_1 = *(int32_t *)(texcoord_data + 0x17);
    texture_param_2 = *(int32_t *)((longlong)texcoord_data + 0xbc);
    *(int32_t *)(normal_data + 0x16) = *(int32_t *)(texcoord_data + 0x16);
    *(int32_t *)((longlong)normal_data + 0xb4) = mode_param;
    *(int32_t *)(normal_data + 0x17) = texture_param_1;
    *(int32_t *)((longlong)normal_data + 0xbc) = texture_param_2;
    
    // 执行渲染操作
    FUN_18024b8d0(shader_params);
    
    // 检查渲染上下文
    if (*(longlong *)(render_context + 0x38) == -14000) {
      *(int8_t *)(shader_params + 0x473d) = 0;
    } else {
      FUN_1801c1c40(shader_params + 0x4740);
      *(int8_t *)(shader_params + 0x473d) = 1;
    }
    
    // 设置渲染标志
    *(int8_t *)(shader_params + 0x268c) = 1;
    *(byte *)(shader_params + 0x6f6) = 
        *(byte *)(shader_params + 0x6f6) | RENDER_FLAG_ACTIVE_2;
    
    // 获取渲染管理器
    render_object = *(longlong **)(render_params + 0x3580);
    if (render_object != (longlong *)0x0) {
      resource_chain_7 = render_object;
      (**(code **)(*render_object + 0x28))(render_object);
    }
    
    resource_chain_7 = *(longlong **)(shader_params + 0xd60);
    *(longlong **)(shader_params + 0xd60) = render_object;
    if (resource_chain_7 != (longlong *)0x0) {
      (**(code **)(*resource_chain_7 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 设置渲染参数
    shader_params[0x4a7d] = *(int32_t *)(*(longlong *)(render_context + 0x38) + 0x3ec4);
    shader_params[0x4a7e] = *(float *)(*(longlong *)(render_context + 0x38) + 0x3ec8) * 0.05 *
                               *(float *)(*(longlong *)(*(longlong *)(render_context + 0x38) + 0x81f0) + 0xc);
    *(int8_t *)(shader_params + 0x718) = 1;
    
    // 执行渲染函数
    render_flag = func_0x0001800e2bf0(_DAT_180c86890, shader_params);
    *(int8_t *)((longlong)shader_params + 0x1c61) = render_flag;
    
    // 检查渲染状态
    if (shader_params[2] != -1) {
      resource_flag = (byte)shader_params[6];
    }
    *(byte *)((longlong)shader_params + 0x1c62) = resource_flag & 1;
    
    mode_param = func_0x00018024c420(shader_params);
    shader_params[0x719] = mode_param;
    
    // 设置渲染缓冲区参数
    resource_data_1 = 0;
    resource_data_3 = 0xff00;
    resource_data_4 = 0;
    resource_data_5 = 0xffffffffffffffff;
    resource_data_6 = 0xffffffff;
    resource_data_7 = 0xff;
    resource_data_8 = 0xffffffff;
    resource_data_9 = 0;
    resource_data_2 = 0x400;
    resource_data_11 = 0;
    buffer_param = 0;
    buffer_data = 0;
    buffer_size_4 = 0;
    buffer_size_9 = 0;
    resource_data_2 = 0;
    
    // 检查是否需要特殊渲染处理
    if (*(char *)(*(longlong *)(render_context + 0x38) + 0x27b8) != '\0') {
      render_object = (longlong *)
               **(uint64_t **)(*(longlong *)(*(longlong *)(render_context + 0x38) + 0x81f8) + 0xf0);
      (**(code **)(*render_object + 0xa8))(render_object, &render_buffer);
      
      if (render_buffer != (longlong *)0x0) {
        resource_manager = (**(code **)(*render_buffer + 0x178))();
        *(int32_t *)(resource_manager + 0x2c4) = FLOAT_ONE;
        security_ptr = &resource_data_1;
        (**(code **)(*render_buffer + 0x1c8))
                  (render_buffer, shader_params, *(longlong *)(render_context + 0x38),
                   *(longlong *)(*(longlong *)(render_context + 0x38) + 0x81f8) + 0x70);
      }
      
      security_ptr = &resource_data_1;
      (**(code **)(*render_buffer + 0x1c8))
                (render_buffer, shader_params, *(longlong *)(render_context + 0x38),
                 *(longlong *)(*(longlong *)(render_context + 0x38) + 0x81f8) + 0x70);
      
      if (render_buffer != (longlong *)0x0) {
        (**(code **)(*render_buffer + FUNCTION_POINTER_OFFSET))();
      }
    }
    
    // 更新渲染状态
    LOCK();
    state_ptr = (int *)(render_params + 0x11a48);
    state_value = *state_ptr;
    *state_ptr = *state_ptr + 1;
    UNLOCK();
    
    // 存储渲染结果
    *(int32_t **)(render_params + 0x9a48 + (longlong)state_value * 8) = shader_params;
    global_data = *(uint64_t *)(render_params + 0x9a3c);
    *(uint64_t *)(shader_params + 0x268d) = *(uint64_t *)(render_params + 0x9a34);
    *(uint64_t *)(shader_params + 0x268f) = global_data;
    
    if (resource_chain_1 != (longlong *)0x0) {
      (**(code **)(*resource_chain_1 + FUNCTION_POINTER_OFFSET))();
    }
    
    // 执行最终渲染操作
    FUN_1808fc050(security_hash ^ (ulonglong)security_stack);
  }
  
  // 清理渲染资源
  buffer_ptr = &UNK_180a3c3e0;
  buffer_data = 0;
  data_ptr = (uint64_t *)0x0;
  buffer_param = 0;
  
  vertex_data = (uint64_t *)FUN_18062b420(_DAT_180c8ed18, 0x10, 0x13);
  *(int8_t *)vertex_data = 0;
  data_ptr = vertex_data;
  mode_param = FUN_18064e990(vertex_data);
  buffer_data = CONCAT44(buffer_data._4_4_, mode_param);
  *vertex_data = 0x616d776f64616873;
  vertex_data[1] = 0x68706172675f70;
  buffer_param = 0xf;
  
  // 创建渲染管理器
  render_object = (longlong *)FUN_1801f20c0();
  if (render_object != (longlong *)0x0) {
    resource_chain_8 = render_object;
    (**(code **)(*render_object + 0x28))(render_object);
  }
  
  resource_chain_8 = *(longlong **)(shader_params + 0x2674);
  *(longlong **)(shader_params + 0x2674) = render_object;
  if (resource_chain_8 != (longlong *)0x0) {
    (**(code **)(*resource_chain_8 + FUNCTION_POINTER_OFFSET))();
  }
  
  buffer_ptr = &UNK_180a3c3e0;
  FUN_18064e900(vertex_data);
}

// 函数别名定义
#define render_system_cleanup_render_objects rendering_system_cleanup_render_objects
#define render_system_advanced_data_processor rendering_system_advanced_data_processor
#define render_system_initialize_state rendering_system_initialize_state
#define render_system_advanced_render_control rendering_system_advanced_render_control
#define render_system_resource_cleanup rendering_system_cleanup_render_objects
#define render_system_data_transform_processor rendering_system_advanced_data_processor
#define render_system_render_pipeline_control rendering_system_advanced_render_control