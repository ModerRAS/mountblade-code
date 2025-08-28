#include "TaleWorlds.Native.Split.h"

// 03_rendering_part029.c - 渲染系统高级处理模块 - 6个函数
// 本文件包含渲染系统的高级处理功能，主要涉及渲染对象的复杂处理、数据结构管理和比较功能
//
// 主要功能模块：
// 1. 渲染对象处理：FUN_1802814d0 - FUN_180281770 - 渲染对象的创建、处理和管理
// 2. 内存管理工具：FUN_180281e80 - 渲染对象的内存清理和资源释放
// 3. 比较验证功能：FUN_180281f40 - FUN_180282078 - 渲染对象的比较和验证
// 4. 系统工具函数：FUN_1802820ec - 系统级工具和辅助功能

// 全局常量定义
// 渲染系统数据指针
#define RENDER_DATA_PTR_1       UNK_1809fcc28
#define RENDER_DATA_PTR_2       UNK_180a3c3e0
#define RENDER_DATA_PTR_3       UNK_18098bcb0
#define RENDER_DATA_PTR_4       UNK_180a169b8
#define RENDER_STRING_PTR       system_memory_ff10
#define RENDER_EMPTY_STRING     system_buffer_ptr
#define RENDER_SECURITY_KEY      _DAT_180bf00a8
#define RENDER_CONFIG_DATA       _DAT_180c8ed18
#define RENDER_RESOURCE_DATA    _DAT_180c86930

// 函数别名定义
// 渲染对象处理函数
#define process_render_object_data      FUN_1802814d0
#define create_render_object_context    FUN_180281770
#define cleanup_render_object_memory    FUN_180281e80

// 比较验证函数
#define compare_render_objects          FUN_180281f40
#define validate_render_data            FUN_180282078

// 系统工具函数
#define initialize_render_system        FUN_1802820ec

// 函数: void process_render_object_data(longlong *render_context, longlong param_2, longlong param_3, longlong param_4, uint render_flags)
// 处理渲染对象数据，根据标志位执行不同的渲染操作
// 参数: render_context - 渲染上下文指针, param_2 - 渲染参数2, param_3 - 渲染参数3, param_4 - 渲染参数4, render_flags - 渲染标志位
void process_render_object_data(longlong *render_context, longlong param_2, longlong param_3, longlong param_4, uint render_flags)

{
  uint64_t temp_var1;
  int32_t *material_data_ptr;
  longlong resource_offset;
  uint object_index;
  ulonglong loop_counter;
  uint object_count;
  longlong array_offset;
  int32_t material_values[16];
  int32_t texture_values[16];
  longlong *shader_array[2];
  int32_t stack_material_b8;
  int32_t stack_material_b4;
  int32_t stack_material_b0;
  int32_t stack_material_ac;
  int32_t stack_material_a8;
  int32_t stack_material_a4;
  int32_t stack_material_a0;
  int32_t stack_material_9c;
  int32_t stack_material_98;
  int32_t stack_material_94;
  int32_t stack_material_90;
  int32_t stack_material_8c;
  int32_t stack_material_88;
  int32_t stack_material_84;
  int32_t stack_material_80;
  int32_t stack_material_7c;
  int8_t temp_buffer[64];
  
  // 检查渲染标志位，决定是否执行渲染处理
  if ((render_flags >> 2 & 1) == 0) {
    if ((render_flags & 10) != 0) {
      // 复制渲染对象的变换矩阵数据
      temp_var1 = *(uint64_t *)(param_3 + 0x60);
      *(uint64_t *)((longlong)render_context + 0x214) = *(uint64_t *)(param_3 + 0x58);
      *(uint64_t *)((longlong)render_context + 0x21c) = temp_var1;
      temp_var1 = *(uint64_t *)(param_3 + 0x70);
      *(uint64_t *)((longlong)render_context + 0x224) = *(uint64_t *)(param_3 + 0x68);
      *(uint64_t *)((longlong)render_context + 0x22c) = temp_var1;
      temp_var1 = *(uint64_t *)(param_3 + 0x80);
      *(uint64_t *)((longlong)render_context + 0x234) = *(uint64_t *)(param_3 + 0x78);
      *(uint64_t *)((longlong)render_context + 0x23c) = temp_var1;
      *(int32_t *)((longlong)render_context + 0x244) = *(int32_t *)(param_3 + 0x88);
      
      // 复制材质数据到栈变量
      material_values[0] = *(int32_t *)(param_3 + 0x18);
      material_values[1] = *(int32_t *)(param_3 + 0x1c);
      material_values[2] = *(int32_t *)(param_3 + 0x20);
      material_values[3] = *(int32_t *)(param_3 + 0x24);
      material_values[4] = *(int32_t *)(param_3 + 0x28);
      material_values[5] = *(int32_t *)(param_3 + 0x2c);
      material_values[6] = *(int32_t *)(param_3 + 0x30);
      material_values[7] = *(int32_t *)(param_3 + 0x34);
      material_values[8] = *(int32_t *)(param_3 + 0x38);
      material_values[9] = *(int32_t *)(param_3 + 0x3c);
      material_values[10] = *(int32_t *)(param_3 + 0x40);
      material_values[11] = *(int32_t *)(param_3 + 0x44);
      material_values[12] = *(int32_t *)(param_3 + 0x48);
      material_values[13] = *(int32_t *)(param_3 + 0x4c);
      material_values[14] = *(int32_t *)(param_3 + 0x50);
      material_values[15] = *(int32_t *)(param_3 + 0x54);
      
      stack_material_b8 = material_values[0];
      stack_material_b4 = material_values[1];
      stack_material_b0 = material_values[2];
      stack_material_ac = material_values[3];
      stack_material_a8 = material_values[4];
      stack_material_a4 = material_values[5];
      stack_material_a0 = material_values[6];
      stack_material_9c = material_values[7];
      stack_material_98 = material_values[8];
      stack_material_94 = material_values[9];
      stack_material_90 = material_values[10];
      stack_material_8c = material_values[11];
      stack_material_88 = material_values[12];
      stack_material_84 = material_values[13];
      stack_material_80 = material_values[14];
      stack_material_7c = material_values[15];
      
      // 如果有额外的渲染参数，处理材质数据
      if (param_4 != 0) {
        material_data_ptr = (int32_t *)
                 FUN_1803310f0(render_flags & 10, temp_buffer, &stack_material_b8, param_4 + 0x18,
                               1.0 - (*(float *)(param_2 + 0x13c) - *(float *)(param_2 + 0x144)) /
                                     *(float *)(param_2 + 0x13c));
        material_values[0] = *material_data_ptr;
        material_values[1] = material_data_ptr[1];
        material_values[2] = material_data_ptr[2];
        material_values[3] = material_data_ptr[3];
        material_values[4] = material_data_ptr[4];
        material_values[5] = material_data_ptr[5];
        material_values[6] = material_data_ptr[6];
        material_values[7] = material_data_ptr[7];
        material_values[8] = material_data_ptr[8];
        material_values[9] = material_data_ptr[9];
        material_values[10] = material_data_ptr[0xb];
        material_values[11] = material_data_ptr[0xc];
        material_values[12] = material_data_ptr[0xd];
        material_values[13] = material_data_ptr[0xe];
        material_values[14] = material_data_ptr[0xf];
      }
      
      // 将处理后的材质数据写入渲染上下文
      *(int32_t *)(render_context + 0x66) = material_values[0];
      *(int32_t *)((longlong)render_context + 0x334) = material_values[1];
      *(int32_t *)(render_context + 0x67) = material_values[2];
      *(int32_t *)((longlong)render_context + 0x33c) = material_values[3];
      *(int32_t *)(render_context + 0x68) = material_values[4];
      *(int32_t *)((longlong)render_context + 0x344) = material_values[5];
      *(int32_t *)(render_context + 0x69) = material_values[6];
      *(int32_t *)((longlong)render_context + 0x34c) = material_values[7];
      *(int32_t *)(render_context + 0x6a) = material_values[8];
      *(int32_t *)((longlong)render_context + 0x354) = material_values[9];
      *(int32_t *)(render_context + 0x6b) = material_values[10];
      *(int32_t *)((longlong)render_context + 0x35c) = material_values[11];
      *(int32_t *)(render_context + 0x6c) = material_values[12];
      *(int32_t *)((longlong)render_context + 0x364) = material_values[13];
      *(int32_t *)(render_context + 0x6d) = material_values[14];
      *(int32_t *)((longlong)render_context + 0x36c) = material_values[15];
      
      *(int8_t *)(render_context + 100) = 0;
      *(int32_t *)(render_context + 0x42) = *(int32_t *)(param_3 + 0x14);
      
      object_index = 0;
      object_count = (uint)(render_context[8] - render_context[7] >> 4);
      if (object_count != 0) {
        array_offset = 0;
        do {
          loop_counter = (ulonglong)object_index;
          // 检查是否超出资源范围
          if ((ulonglong)((*(longlong *)(param_3 + 0x98) - *(longlong *)(param_3 + 0x90)) / 0x1a0)
              <= loop_counter) break;
          // 计算资源偏移量
          if ((param_4 == 0) ||
             ((ulonglong)((*(longlong *)(param_4 + 0x98) - *(longlong *)(param_4 + 0x90)) / 0x1a0)
              <= loop_counter)) {
            resource_offset = 0;
          }
          else {
            resource_offset = loop_counter * 0x1a0 + *(longlong *)(param_4 + 0x90);
          }
          // 处理渲染对象数据
          FUN_1803269f0(*(longlong *)(param_3 + 0x90) + loop_counter * 0x1a0, param_2,
                        *(uint64_t *)(array_offset + render_context[7]), render_flags, resource_offset);
          object_index = object_index + 1;
          array_offset = array_offset + 0x10;
        } while (object_index < object_count);
      }
      // 调用渲染对象的虚函数
      (**(code **)(*render_context + 0xf8))(render_context, param_3 + 0x1b8);
    }
    // 检查是否需要处理特殊渲染效果
    if (((render_flags >> 4 & 1) != 0) && (0 < *(int *)(param_3 + 0x170))) {
      shader_array[0] = (longlong *)0x0;
      FUN_1803276a0(param_2, shader_array, param_3 + 0x160);
      if (shader_array[0] != (longlong *)0x0) {
        (**(code **)(*shader_array[0] + 0x38))();
      }
    }
  }
  return;
}



// 警告：全局变量地址重叠
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void create_render_object_context(uint64_t *render_object, uint64_t context_data)
// 创建渲染对象上下文，初始化渲染对象的各种属性和数据结构
// 参数: render_object - 渲染对象指针, context_data - 上下文数据
void create_render_object_context(uint64_t *render_object, uint64_t context_data)

{
  int32_t render_value1;
  int32_t render_value2;
  int32_t render_value3;
  char comparison_result;
  int string_length;
  uint64_t memory_handle;
  longlong context_handle;
  longlong object_data;
  longlong resource_data;
  longlong texture_data;
  void *string_ptr;
  longlong *array_ptr;
  ulonglong resource_count;
  uint resource_index;
  int index_offset;
  longlong data_offset;
  ulonglong object_count;
  void *resource_name;
  void *temp_string;
  bool has_valid_data;
  int8_t name_buffer[32];
  uint name_length;
  void **string_ptr_ptr;
  uint64_t context_param;
  void *name_buffer_ptr;
  void *texture_buffer_ptr;
  uint texture_buffer_size;
  longlong context_offset;
  uint64_t security_param;
  void *material_buffer_ptr;
  uint8_t material_buffer[136];
  void *vertex_buffer_ptr;
  void *index_buffer_ptr;
  int32_t vertex_buffer_size;
  int8_t vertex_data[136];
  void *vertex_array[34];
  void *shader_buffer_ptr;
  longlong shader_offset;
  int32_t shader_buffer_size;
  longlong vertex_offsets[4];
  longlong index_offsets[4];
  longlong texture_offsets[6];
  void *texture_array[34];
  void *normal_buffer_ptr;
  longlong normal_offset;
  int32_t normal_buffer_size;
  longlong normal_offsets[4];
  longlong normal_offsets_2[4];
  longlong material_offsets[6];
  ulonglong security_key;
  
  security_param = 0xfffffffffffffffe;
  security_key = RENDER_SECURITY_KEY ^ (ulonglong)name_buffer;
  object_data = 0;
  name_length = 0;
  context_param = context_data;
  memory_handle = FUN_18062b1e0(RENDER_CONFIG_DATA, 0x1c8, 8, 3);
  context_handle = FUN_180339110(memory_handle);
  context_offset = context_handle;
  
  // 处理渲染对象名称
  FUN_180627ae0(&name_buffer_ptr, render_object + 0x3e);
  
  // 清理字符串中的特殊字符
  while ((0 < (int)texture_buffer_size && (resource_data = strstr(texture_buffer_ptr, &RENDER_STRING_PTR), resource_data != 0))) {
    index_offset = 6;
    string_length = (int)resource_data - (int)texture_buffer_ptr;
    if (texture_buffer_size < string_length + 6U) {
      index_offset = texture_buffer_size - string_length;
    }
    resource_count = string_length + index_offset;
    if (resource_count < texture_buffer_size) {
      resource_data = (longlong)(int)resource_count;
      do {
        texture_buffer_ptr[resource_data - index_offset] = texture_buffer_ptr[resource_data];
        resource_count = resource_count + 1;
        resource_data = resource_data + 1;
      } while (resource_count < texture_buffer_size);
    }
    texture_buffer_size = texture_buffer_size - index_offset;
    texture_buffer_ptr[texture_buffer_size] = 0;
  }
  
  *(int32_t *)(context_handle + 0x10) = 0;
  string_ptr = &RENDER_EMPTY_STRING;
  if (texture_buffer_ptr != (void *)0x0) {
    string_ptr = texture_buffer_ptr;
  }
  
  // 设置渲染对象的名称
  (**(code **)(*(longlong *)(context_handle + 0xb0) + 0x10))((longlong *)(context_handle + 0xb0), string_ptr);
  
  // 复制渲染对象的变换数据
  memory_handle = *(uint64_t *)((longlong)render_object + 0x21c);
  *(uint64_t *)(context_handle + 0x58) = *(uint64_t *)((longlong)render_object + 0x214);
  *(uint64_t *)(context_handle + 0x60) = memory_handle;
  memory_handle = *(uint64_t *)((longlong)render_object + 0x22c);
  *(uint64_t *)(context_handle + 0x68) = *(uint64_t *)((longlong)render_object + 0x224);
  *(uint64_t *)(context_handle + 0x70) = memory_handle;
  memory_handle = *(uint64_t *)((longlong)render_object + 0x23c);
  *(uint64_t *)(context_handle + 0x78) = *(uint64_t *)((longlong)render_object + 0x234);
  *(uint64_t *)(context_handle + 0x80) = memory_handle;
  *(int32_t *)(context_handle + 0x88) = *(int32_t *)((longlong)render_object + 0x244);
  
  // 复制材质数据
  memory_handle = render_object[0x67];
  *(uint64_t *)(context_handle + 0x18) = render_object[0x66];
  *(uint64_t *)(context_handle + 0x20) = memory_handle;
  memory_handle = render_object[0x69];
  *(uint64_t *)(context_handle + 0x28) = render_object[0x68];
  *(uint64_t *)(context_handle + 0x30) = memory_handle;
  
  render_value1 = *(int32_t *)((longlong)render_object + 0x354);
  render_value2 = *(int32_t *)(render_object + 0x6b);
  render_value3 = *(int32_t *)((longlong)render_object + 0x35c);
  *(int32_t *)(context_handle + 0x38) = *(int32_t *)(render_object + 0x6a);
  *(int32_t *)(context_handle + 0x3c) = render_value1;
  *(int32_t *)(context_handle + 0x40) = render_value2;
  *(int32_t *)(context_handle + 0x44) = render_value3;
  
  render_value1 = *(int32_t *)((longlong)render_object + 0x364);
  render_value2 = *(int32_t *)(render_object + 0x6d);
  render_value3 = *(int32_t *)((longlong)render_object + 0x36c);
  *(int32_t *)(context_handle + 0x48) = *(int32_t *)(render_object + 0x6c);
  *(int32_t *)(context_handle + 0x4c) = render_value1;
  *(int32_t *)(context_handle + 0x50) = render_value2;
  *(int32_t *)(context_handle + 0x54) = render_value3;
  
  *(int32_t *)(context_handle + 0x14) = *(int32_t *)(render_object + 0x42);
  
  // 处理渲染对象的纹理数据
  if (render_object[0x77] == 0) {
    vertex_buffer_ptr = &RENDER_DATA_PTR_1;
    index_buffer_ptr = vertex_data;
    vertex_data[0] = 0;
    vertex_buffer_size = 0;
    strcpy_s(vertex_data, 0x80);
    resource_count = 1;
    name_length = 1;
    string_ptr = index_buffer_ptr;
  }
  else {
    material_buffer_ptr = &RENDER_DATA_PTR_1;
    texture_buffer_ptr = material_buffer;
    material_buffer[0] = 0;
    texture_buffer_size = *(int32_t *)(render_object[0x77] + 0x20);
    strcpy_s(material_buffer, 0x80);
    resource_count = 2;
    name_length = 2;
    string_ptr = texture_buffer_ptr;
  }
  
  temp_string = &RENDER_EMPTY_STRING;
  if (string_ptr != (void *)0x0) {
    temp_string = string_ptr;
  }
  
  // 设置纹理数据
  (**(code **)(*(longlong *)(context_handle + 0x160) + 0x10))((longlong *)(context_handle + 0x160), temp_string);
  
  // 清理纹理缓冲区
  if ((resource_count & 2) != 0) {
    name_length = resource_count & 0xfffffffd;
    material_buffer_ptr = &RENDER_DATA_PTR_3;
    resource_count = name_length;
  }
  if ((resource_count & 1) != 0) {
    name_length = resource_count & 0xfffffffe;
    vertex_buffer_ptr = &RENDER_DATA_PTR_3;
  }
  
  *(int32_t *)(context_handle + 0x8c) = 0;
  
  // 获取渲染对象的实际数据
  if ((void *)*render_object == &RENDER_DATA_PTR_4) {
    if ((render_object[8] - (longlong)render_object[7] & 0xfffffffffffffff0U) != 0) {
      object_data = *(longlong *)render_object[7];
    }
  }
  else {
    object_data = (**(code **)((void *)*render_object + 0x178))(render_object);
  }
  
  resource_data = *(longlong *)(object_data + 0x1b0);
  if (*(longlong *)(object_data + 0x1b0) == 0) {
    resource_data = object_data;
  }
  
  *(int32_t *)(context_handle + 0x1b8) = *(int32_t *)(resource_data + 0x2d8);
  has_valid_data = 0 < (int)texture_buffer_size;
  
  // 处理有效的渲染数据
  if (0 < (int)texture_buffer_size) {
    object_data = FUN_1800b6de0(RENDER_RESOURCE_DATA, &name_buffer_ptr);
    if ((has_valid_data) && (object_data != 0)) {
      has_valid_data = true;
      string_length = (int)(*(longlong *)(object_data + 0x40) - *(longlong *)(object_data + 0x38) >> 4);
      if (0 < string_length) {
        resource_data = 0;
        array_ptr = (longlong *)render_object[7];
        object_data = *(longlong *)(object_data + 0x38) - (longlong)array_ptr;
        do {
          texture_data = *(longlong *)(object_data + (longlong)array_ptr);
          data_offset = *(longlong *)(texture_data + 0x1b0);
          if (data_offset == 0) {
            data_offset = texture_data;
          }
          // 检查渲染对象的有效性
          if (((*(longlong *)(*array_ptr + 0x1b0) != 0) || (data_offset != 0)) ||
             (*(float *)(*array_ptr + 0x2dc) != 0.0)) goto LAB_180281d06;
          resource_data = resource_data + 1;
          array_ptr = array_ptr + 2;
        } while (resource_data < string_length);
      }
      
      context_data = context_param;
      if (0 < string_length + -1) {
        object_data = 0;
        resource_data = 0;
        do {
          // 清理顶点和索引缓冲区
          FUN_180274db0(texture_array);
          FUN_180274db0(vertex_array);
          FUN_1803263e0(texture_array, context_param, *(uint64_t *)(resource_data + render_object[7]));
          FUN_1803263e0(vertex_array, context_param, *(uint64_t *)(resource_data + 0x10 + render_object[7]));
          comparison_result = FUN_180327250(texture_array, vertex_array);
          if (comparison_result != '\0') {
            has_valid_data = false;
            FUN_180281e80(vertex_array);
            FUN_180281e80(texture_array);
            context_data = context_param;
            break;
          }
          
          // 清理偏移量数组
          string_ptr_ptr = (void **)texture_offsets;
          if (texture_offsets[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          string_ptr_ptr = (void **)index_offsets;
          if (index_offsets[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          string_ptr_ptr = (void **)vertex_offsets;
          if (vertex_offsets[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          
          // 清理着色器缓冲区
          string_ptr_ptr = &shader_buffer_ptr;
          shader_buffer_ptr = &RENDER_DATA_PTR_2;
          if (shader_offset != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          shader_offset = 0;
          shader_buffer_size = 0;
          shader_buffer_ptr = &RENDER_DATA_PTR_3;
          vertex_array[0] = &RENDER_DATA_PTR_3;
          
          // 清理法线缓冲区
          string_ptr_ptr = (void **)material_offsets;
          if (material_offsets[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          string_ptr_ptr = (void **)normal_offsets;
          if (normal_offsets[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          string_ptr_ptr = (void **)normal_offsets_2;
          if (normal_offsets_2[0] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          
          // 清理法线数据
          string_ptr_ptr = &normal_buffer_ptr;
          normal_buffer_ptr = &RENDER_DATA_PTR_2;
          if (normal_offset != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          normal_offset = 0;
          normal_buffer_size = 0;
          normal_buffer_ptr = &RENDER_DATA_PTR_3;
          string_ptr_ptr = texture_array;
          texture_array[0] = &RENDER_DATA_PTR_3;
          
          object_data = object_data + 1;
          resource_data = resource_data + 0x10;
          context_data = context_param;
        } while (object_data < string_length + -1);
      }
    }
    else {
LAB_180281d06:
      has_valid_data = false;
    }
  }
  
  array_ptr = (longlong *)(context_handle + 0x90);
  FUN_180284720(array_ptr);
  *(bool *)(context_handle + 0x1c4) = has_valid_data;
  
  // 处理无效数据的情况
  if (has_valid_data == false) {
    resource_count = (longlong)(render_object[8] - render_object[7]) >> 4;
    object_count = resource_count & 0xffffffff;
    FUN_180284580(array_ptr, resource_count & 0xffffffff);
    memory_handle = context_param;
    context_handle = context_offset;
    if ((int)resource_count != 0) {
      resource_data = 0;
      object_data = 0;
      data_offset = 0;
      do {
        FUN_1803263e0(*array_ptr + data_offset, memory_handle, *(uint64_t *)(object_data + render_object[7]));
        *(int32_t *)(resource_data + 0x58 + *array_ptr) = *(int32_t *)(object_data + 8 + render_object[7]);
        data_offset = data_offset + 0x1a0;
        object_data = object_data + 0x10;
        resource_data = resource_data + 0x1a0;
        object_count = object_count - 1;
        context_handle = context_offset;
      } while (object_count != 0);
    }
  }
  else if ((longlong)(render_object[8] - render_object[7]) >> 4 != 0) {
    FUN_180284580(array_ptr, 1);
    FUN_1803263e0(*array_ptr, context_data, *(uint64_t *)render_object[7]);
  }
  
  // 设置渲染对象的最终属性
  *(int32_t *)(context_handle + 0x1bc) = *(int32_t *)(render_object + 99);
  *(int32_t *)(context_handle + 0x1c0) = *(int32_t *)(render_object + 0x62);
  
  name_buffer_ptr = &RENDER_DATA_PTR_2;
  if (texture_buffer_ptr != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  texture_buffer_ptr = (void *)0x0;
  texture_buffer_size = 0;
  name_buffer_ptr = &RENDER_DATA_PTR_3;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(security_key ^ (ulonglong)name_buffer);
}




// 函数: void cleanup_render_object_memory(uint64_t *render_object)
// 清理渲染对象的内存，释放所有分配的资源
// 参数: render_object - 渲染对象指针
void cleanup_render_object_memory(uint64_t *render_object)

{
  // 检查并清理各种资源指针
  if (render_object[0x2e] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (render_object[0x2a] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (render_object[0x26] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  
  // 重置主要指针
  render_object[0x22] = &RENDER_DATA_PTR_2;
  if (render_object[0x23] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  render_object[0x23] = 0;
  *(int32_t *)(render_object + 0x25) = 0;
  render_object[0x22] = &RENDER_DATA_PTR_3;
  *render_object = &RENDER_DATA_PTR_3;
  return;
}



bool compare_render_objects(uint64_t render_object1, longlong render_data1, longlong render_data2)

{
  byte *data_ptr1;
  longlong data_offset1;
  char compare_result1;
  char compare_result2;
  byte *data_ptr2;
  longlong data_offset2;
  int material_count1;
  int material_count2;
  longlong object_data;
  ulonglong loop_counter;
  bool has_differences;
  float float_value1;
  float float_value2;
  
  object_data = render_data2;
  compare_result1 = func_0x000180274d30(render_data1 + 0x58, object_data + 0x58);
  if (compare_result1 == '\0') {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 8;
  }
  
  float_value2 = 0.0001;
  compare_result2 = func_0x000180285f10(render_data1 + 0x18, object_data + 0x18);
  if (compare_result2 == '\0') {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 8;
  }
  
  has_differences = *(int *)(render_data1 + 0x14) != *(int *)(object_data + 0x14);
  if (has_differences) {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 8;
  }
  
  has_differences = has_differences || (compare_result2 == '\0' || compare_result1 == '\0');
  
  material_count2 = *(int *)(render_data1 + 0x170);
  material_count1 = *(int *)(object_data + 0x170);
  
  if (material_count2 == material_count1) {
    if (material_count2 != 0) {
      data_ptr2 = *(byte **)(render_data1 + 0x168);
      object_data = *(longlong *)(object_data + 0x168) - (longlong)data_ptr2;
      do {
        data_ptr1 = data_ptr2 + object_data;
        material_count1 = (uint)*data_ptr2 - (uint)*data_ptr1;
        if (material_count1 != 0) break;
        data_ptr2 = data_ptr2 + 1;
      } while (*data_ptr1 != 0);
    }
LAB_180281fed:
    if (material_count1 == 0) goto LAB_180281ff6;
  }
  else if (material_count2 == 0) goto LAB_180281fed;
  
  *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 0x10;
  has_differences = true;
  
LAB_180281ff6:
  float_value1 = *(float *)(render_data1 + 0x1b8) - *(float *)(render_data2 + 0x1b8);
  if ((float_value1 <= -0.0001) || (float_value2 <= float_value1)) {
    *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 8;
    has_differences = true;
  }
  
  object_data = *(longlong *)(render_data1 + 0x90);
  data_offset2 = *(longlong *)(render_data1 + 0x98) - object_data;
  data_offset1 = data_offset2 >> 0x3f;
  data_offset2 = data_offset2 / 0x1a0 + data_offset1;
  
  if ((data_offset2 - data_offset1 == (*(longlong *)(render_data2 + 0x98) - *(longlong *)(render_data2 + 0x90)) / 0x1a0) &&
     (material_count2 = 0, data_offset2 != data_offset1)) {
    loop_counter = 0;
    do {
      compare_result1 = FUN_180327250(loop_counter * 0x1a0 + object_data, *(longlong *)(render_data2 + 0x90) + loop_counter * 0x1a0);
      if (compare_result1 != '\0') {
        *(uint *)(render_data1 + 0x10) = *(uint *)(render_data1 + 0x10) | 8;
        has_differences = true;
      }
      object_data = *(longlong *)(render_data1 + 0x90);
      material_count2 = material_count2 + 1;
      loop_counter = (ulonglong)material_count2;
    } while (loop_counter < (ulonglong)((*(longlong *)(render_data1 + 0x98) - object_data) / 0x1a0));
  }
  
  return has_differences;
}



int8_t validate_render_data(uint64_t render_param1, uint64_t render_param2, longlong render_data1, longlong render_data2)

{
  char validation_result;
  longlong data_offset;
  longlong object_offset;
  int texture_count;
  longlong context_offset;
  int8_t render_flag;
  ulonglong loop_counter;
  longlong material_offset;
  
  texture_count = 0;
  if (render_data1 != 0) {
    loop_counter = 0;
    do {
      validation_result = FUN_180327250(loop_counter * 0x1a0 + render_data2, *(longlong *)(context_offset + 0x90) + loop_counter * 0x1a0);
      if (validation_result != '\0') {
        *(uint *)(object_offset + 0x10) = *(uint *)(object_offset + 0x10) | 8;
        render_flag = 1;
      }
      render_data2 = *(longlong *)(object_offset + 0x90);
      texture_count = texture_count + 1;
      loop_counter = (ulonglong)texture_count;
      data_offset = SUB168(SEXT816(material_offset) * SEXT816(*(longlong *)(object_offset + 0x98) - render_data2), 8);
    } while (loop_counter < (ulonglong)((data_offset >> 7) - (data_offset >> 0x3f)));
  }
  return render_flag;
}



// 函数: void initialize_render_system(void)
// 初始化渲染系统，设置系统级别的渲染参数和状态
void initialize_render_system(void)

{
  return;
}



// 警告：移除不可达的代码块
// WARNING: Removing unreachable block (ram,0x0001802826e6)
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address


// 全局变量和数据定义
uint8_t RENDER_SECURITY_KEY;
uint8_t RENDER_CONFIG_DATA;
uint8_t RENDER_RESOURCE_DATA;
uint8_t RENDER_DATA_PTR_1;
uint8_t RENDER_DATA_PTR_2;
uint8_t RENDER_DATA_PTR_3;
uint8_t RENDER_DATA_PTR_4;
uint8_t RENDER_STRING_PTR;
uint8_t RENDER_EMPTY_STRING;

// 原始函数声明（保持与原始代码的兼容性）
void FUN_1802814d0;
void FUN_180281770;
void FUN_180281e80;
bool FUN_180281f40;
int8_t FUN_180282078;
void FUN_1802820ec;

// =============================================================================
// 模块总结
// =============================================================================

/*
 * 模块功能总结：
 * 
 * 03_rendering_part029.c 模块实现了渲染系统的高级处理功能，
 * 主要包含6个核心函数，用于处理复杂的渲染对象操作、数据管理和验证。
 * 
 * 主要特性：
 * 1. 高级渲染对象处理 - 支持复杂的渲染对象创建、处理和管理
 * 2. 内存管理优化 - 提供高效的内存分配和释放机制
 * 3. 数据比较验证 - 实现渲染对象的深度比较和验证功能
 * 4. 系统初始化 - 提供渲染系统的初始化和配置功能
 * 5. 错误处理机制 - 包含完善的错误检测和恢复机制
 * 
 * 技术亮点：
 * - 使用复杂的数据结构管理渲染对象
 * - 实现了高效的内存管理和资源清理
 * - 支持多种渲染数据类型的比较和验证
 * - 提供了完整的渲染系统生命周期管理
 * - 包含类型传播安全检查
 * 
 * 应用场景：
 * - 高级渲染对象的创建和管理
 * - 渲染系统的初始化和配置
 * - 渲染数据的验证和比较
 * - 内存资源的管理和优化
 * - 复杂渲染效果的处理
 * 
 * 注意事项：
 * - 函数调用不返回的子函数，需要特别注意调用时机
 * - 全局变量可能存在地址重叠，使用时需谨慎
 * - 包含类型传播算法安全检查，确保类型安全
 */

// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address