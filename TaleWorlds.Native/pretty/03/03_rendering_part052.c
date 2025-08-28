#include "TaleWorlds.Native.Split.h"

// 03_rendering_part052.c - 渲染系统高级标志位和材质处理模块
// 包含13个核心函数，涵盖渲染标志位处理、材质参数初始化、材质数据解析等高级渲染功能

// 函数: void process_rendering_flag_patterns(void)
// 功能: 处理渲染标志位模式，根据预定义的模式数据设置渲染缓冲区
// 参数: 无 (使用寄存器传递参数)
// 返回值: 无
void process_rendering_flag_patterns(void)

{
  ushort width_offset;
  undefined1 flag_value;
  longlong pattern_index;
  int row_index;
  undefined1 full_intensity;
  int unaff_ESI;
  int col_index;
  int max_cols;
  longlong in_R10;
  longlong in_R11;
  longlong char_offset;
  undefined1 max_value;
  
  row_index = 0;
  char_offset = 0;
  do {
    col_index = 0;
    do {
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_0)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(pattern_index + *(longlong *)(in_R10 + 0x18)) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_0)[char_offset] == 'X') {
        flag_value = 0xff;
      }
      *(undefined1 *)(pattern_index + 0x6d + *(longlong *)(in_R10 + 0x18)) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_1)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_1)[char_offset] == 'X') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x6e + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_2)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 2 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_2)[char_offset] == 'X') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x6f + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      full_intensity = 0xff;
      if ((&RENDER_PATTERN_DATA_3)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 3 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_3)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x70 + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_4)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 4 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_4)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x71 + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_5)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 5 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_5)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x72 + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_6)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 6 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_6)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x73 + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      max_value = 0xff;
      full_intensity = 0xff;
      if ((&RENDER_PATTERN_DATA_7)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 7 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_7)[char_offset] == 'X') {
        flag_value = max_value;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x74 + pattern_index) = flag_value;
      pattern_index = (longlong)
              (int)((uint)*(ushort *)(in_R11 + 8) +
                   ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index);
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_8)[char_offset] == '.') {
        flag_value = 0xff;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 8 + pattern_index) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_8)[char_offset] == 'X') {
        flag_value = max_value;
      }
      *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 0x75 + pattern_index) = flag_value;
      max_cols = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_9)[char_offset] == '.') {
        flag_value = max_value;
      }
      *(undefined1 *)((longlong)max_cols + 9 + *(longlong *)(in_R10 + 0x18)) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_9)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)((longlong)max_cols + 0x76 + *(longlong *)(in_R10 + 0x18)) = flag_value;
      max_cols = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_10)[char_offset] == '.') {
        flag_value = max_value;
      }
      *(undefined1 *)((longlong)max_cols + 10 + *(longlong *)(in_R10 + 0x18)) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_10)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      *(undefined1 *)((longlong)max_cols + 0x77 + *(longlong *)(in_R10 + 0x18)) = flag_value;
      max_cols = (uint)*(ushort *)(in_R11 + 8) +
              ((uint)*(ushort *)(in_R11 + 10) + row_index) * unaff_ESI + col_index;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_11)[char_offset] == '.') {
        flag_value = max_value;
      }
      *(undefined1 *)((longlong)max_cols + 0xb + *(longlong *)(in_R10 + 0x18)) = flag_value;
      flag_value = 0;
      if ((&RENDER_PATTERN_DATA_11)[char_offset] == 'X') {
        flag_value = full_intensity;
      }
      char_offset = char_offset + 0xc;
      col_index = col_index + 0xc;
      *(undefined1 *)((longlong)max_cols + 0x78 + *(longlong *)(in_R10 + 0x18)) = flag_value;
    } while (col_index < 0x6c);
    row_index = row_index + 1;
  } while (row_index < 0x1b);
  width_offset = *(ushort *)(in_R11 + 10);
  *(float *)(in_R10 + 0x38) = ((float)*(ushort *)(in_R11 + 8) + 0.5) * *(float *)(in_R10 + 0x30);
  *(float *)(in_R10 + 0x3c) = ((float)width_offset + 0.5) * *(float *)(in_R10 + 0x34);
  return;
}



// 函数: void set_rendering_corner_flags(void)
// 功能: 设置渲染角落标志位，用于渲染边界处理
// 参数: 无 (使用寄存器传递参数)
// 返回值: 无
void set_rendering_corner_flags(void)

{
  ushort height_offset;
  int buffer_offset;
  int unaff_ESI;
  longlong in_R10;
  longlong in_R11;
  
  buffer_offset = (uint)*(ushort *)(in_R11 + 10) * unaff_ESI + (uint)*(ushort *)(in_R11 + 8);
  *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + (longlong)(buffer_offset + unaff_ESI)) = 0xff;
  *(undefined1 *)((longlong)(buffer_offset + unaff_ESI) + *(longlong *)(in_R10 + 0x18)) = 0xff;
  *(undefined1 *)(*(longlong *)(in_R10 + 0x18) + 1 + (longlong)buffer_offset) = 0xff;
  *(undefined1 *)((longlong)buffer_offset + *(longlong *)(in_R10 + 0x18)) = 0xff;
  height_offset = *(ushort *)(in_R11 + 10);
  *(float *)(in_R10 + 0x38) = ((float)*(ushort *)(in_R11 + 8) + 0.5) * *(float *)(in_R10 + 0x30);
  *(float *)(in_R10 + 0x3c) = ((float)height_offset + 0.5) * *(float *)(in_R10 + 0x34);
  return;
}



// 函数: longlong initialize_rendering_material_manager(longlong material_manager)
// 功能: 初始化渲染材质管理器，设置默认材质参数
// 参数: material_manager - 材质管理器指针
// 返回值: 初始化后的材质管理器指针
longlong initialize_rendering_material_manager(longlong material_manager)

{
  *(undefined8 *)(material_manager + 8) = 0;
  *(undefined8 *)(material_manager + 0x10) = 0;
  *(undefined8 *)(material_manager + 0x18) = 0;
  *(undefined8 *)(material_manager + 0x20) = 0;
  *(undefined8 *)(material_manager + 0x28) = 0;
  *(undefined8 *)(material_manager + 0x30) = 0;
  *(undefined8 *)(material_manager + 0x38) = 0;
  *(undefined8 *)(material_manager + 4) = 0x3f800000;
  *(undefined2 *)(material_manager + 0x4c) = 0x3f;
  *(undefined4 *)(material_manager + 0xc) = 0;
  reset_rendering_material_state(material_manager);
  return material_manager;
}



// 警告: 全局变量'_'与较小符号在相同地址重叠

// 函数: void release_rendering_material_resources(longlong material_manager,undefined8 resource_handle,undefined8 cleanup_param,undefined8 release_param)
// 功能: 释放渲染材质资源，清理材质相关的内存和句柄
// 参数: 
//   material_manager - 材质管理器指针
//   resource_handle - 资源句柄
//   cleanup_param - 清理参数
//   release_param - 释放参数
// 返回值: 无
void release_rendering_material_resources(longlong material_manager,undefined8 resource_handle,undefined8 cleanup_param,undefined8 release_param)

{
  longlong resource_ptr;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;
  reset_rendering_material_state();
  resource_ptr = *(longlong *)(material_manager + 0x38);
  if (resource_ptr != 0) {
    if (GLOBAL_RESOURCE_MANAGER != 0) {
      *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) = *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE,cleanup_param,release_param,cleanup_flag);
  }
  resource_ptr = *(longlong *)(material_manager + 0x28);
  if (resource_ptr != 0) {
    if (GLOBAL_RESOURCE_MANAGER != 0) {
      *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) = *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE,cleanup_param,release_param,cleanup_flag);
  }
  resource_ptr = *(longlong *)(material_manager + 0x18);
  if (resource_ptr != 0) {
    if (GLOBAL_RESOURCE_MANAGER != 0) {
      *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) = *(int *)(GLOBAL_RESOURCE_MANAGER + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE,cleanup_param,release_param,cleanup_flag);
  }
  return;
}



// 警告: 全局变量'_'与较小符号在相同地址重叠

// 函数: void reset_rendering_material_state(undefined4 *material_state)
// 功能: 重置渲染材质状态，清理材质相关的状态数据
// 参数: material_state - 材质状态指针
// 返回值: 无
void reset_rendering_material_state(undefined4 *material_state)

{
  longlong resource_ptr;
  longlong global_manager;
  
  *material_state = 0;
  global_manager = GLOBAL_RESOURCE_MANAGER;
  resource_ptr = *(longlong *)(material_state + 6);
  if (resource_ptr != 0) {
    *(undefined8 *)(material_state + 4) = 0;
    if (global_manager != 0) {
      *(int *)(global_manager + 0x3a8) = *(int *)(global_manager + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE);
  }
  resource_ptr = *(longlong *)(material_state + 10);
  if (resource_ptr != 0) {
    *(undefined8 *)(material_state + 8) = 0;
    if (global_manager != 0) {
      *(int *)(global_manager + 0x3a8) = *(int *)(global_manager + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE);
  }
  resource_ptr = *(longlong *)(material_state + 0xe);
  if (resource_ptr != 0) {
    *(undefined8 *)(material_state + 0xc) = 0;
    if (global_manager != 0) {
      *(int *)(global_manager + 0x3a8) = *(int *)(global_manager + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(resource_ptr,GLOBAL_RESOURCE_BASE);
  }
  *(undefined8 *)(material_state + 0x10) = 0;
  material_state[0x12] = 0;
  *(undefined2 *)((longlong)material_state + 0x4e) = 0;
  *(undefined8 *)(material_state + 0x14) = 0;
  *(undefined8 *)(material_state + 0x16) = 0;
  *(undefined8 *)(material_state + 0x18) = 0;
  *(undefined1 *)(material_state + 0x1a) = 1;
  material_state[0x1b] = 0;
  return;
}



// 警告: 全局变量'_'与较小符号在相同地址重叠

// 函数: void process_rendering_material_batch(longlong material_context)
// 功能: 处理渲染材质批次，优化材质渲染性能
// 参数: material_context - 材质上下文指针
// 返回值: 无
void process_rendering_material_batch(longlong material_context)

{
  undefined8 *material_data_ptr;
  ushort material_index;
  undefined8 material_property;
  longlong resource_manager;
  undefined8 *material_slot_ptr;
  ushort *material_array_ptr;
  float *float_property_ptr;
  int material_count;
  ulonglong max_index;
  longlong texture_ptr;
  uint current_index;
  ulonglong material_size;
  ulonglong property_size;
  int texture_slot;
  float scale_factor;
  undefined4 default_value;
  
  resource_manager = GLOBAL_RESOURCE_MANAGER;
  property_size = 0;
  current_index = 0;
  if (*(uint *)(material_context + 0x10) != 0) {
    material_array_ptr = *(ushort **)(material_context + 0x18);
    material_size = (ulonglong)*(uint *)(material_context + 0x10);
    max_index = property_size;
    do {
      material_index = *material_array_ptr;
      material_array_ptr = material_array_ptr + 0x14;
      current_index = (uint)material_index;
      if ((uint)material_index <= (uint)max_index) {
        current_index = (uint)max_index;
      }
      max_index = (ulonglong)current_index;
      material_size = material_size - 1;
    } while (material_size != 0);
  }
  texture_ptr = *(longlong *)(material_context + 0x28);
  if (texture_ptr == 0) {
    texture_ptr = *(longlong *)(material_context + 0x38);
    if (texture_ptr == 0) {
      *(undefined1 *)(material_context + 0x68) = 0;
      resize_rendering_buffers(material_context,current_index + 1);
      material_count = *(int *)(material_context + 0x10);
      max_index = property_size;
      if (0 < material_count) {
        do {
          texture_slot = (int)max_index;
          material_size = (ulonglong)*(ushort *)(*(longlong *)(material_context + 0x18) + (longlong)texture_slot * 0x28);
          *(undefined4 *)(*(longlong *)(material_context + 0x28) + material_size * 4) =
               *(undefined4 *)(*(longlong *)(material_context + 0x18) + 4 + (longlong)texture_slot * 0x28);
          *(short *)(*(longlong *)(material_context + 0x38) + material_size * 2) = (short)max_index;
          max_index = (ulonglong)(texture_slot + 1U);
          material_count = *(int *)(material_context + 0x10);
        } while ((int)(texture_slot + 1U) < material_count);
      }
      texture_slot = *(int *)(material_context + 0x30);
      if (texture_slot < 0x21) {
        resource_manager = *(longlong *)(material_context + 0x40);
      }
      else {
        material_index = *(ushort *)(*(longlong *)(material_context + 0x38) + 0x40);
        if (material_index == 0xffff) {
          resource_manager = *(longlong *)(material_context + 0x40);
        }
        else {
          resource_manager = *(longlong *)(material_context + 0x18) + (ulonglong)material_index * 0x28;
        }
      }
      if (resource_manager != 0) {
        if (*(short *)(*(longlong *)(material_context + 0x18) + -0x28 + (longlong)material_count * 0x28) != 9) {
          resize_rendering_texture_array(material_context + 0x10,material_count + 1);
          texture_slot = *(int *)(material_context + 0x30);
        }
        texture_ptr = (longlong)*(int *)(material_context + 0x10);
        resource_manager = *(longlong *)(material_context + 0x18);
        if (texture_slot < 0x21) {
          material_slot_ptr = *(undefined8 **)(material_context + 0x40);
        }
        else {
          material_index = *(ushort *)(*(longlong *)(material_context + 0x38) + 0x40);
          if (material_index == 0xffff) {
            material_slot_ptr = *(undefined8 **)(material_context + 0x40);
          }
          else {
            material_slot_ptr = (undefined8 *)(resource_manager + (ulonglong)material_index * 0x28);
          }
        }
        material_property = material_slot_ptr[1];
        material_data_ptr = (undefined8 *)(resource_manager + -0x28 + texture_ptr * 0x28);
        *material_data_ptr = *material_slot_ptr;
        material_data_ptr[1] = material_property;
        material_property = material_slot_ptr[3];
        material_data_ptr = (undefined8 *)(resource_manager + -0x18 + texture_ptr * 0x28);
        *material_data_ptr = material_slot_ptr[2];
        material_data_ptr[1] = material_property;
        *(undefined8 *)(resource_manager + -8 + texture_ptr * 0x28) = material_slot_ptr[4];
        scale_factor = *(float *)(resource_manager + -0x24 + texture_ptr * 0x28) * 4.0;
        *(undefined2 *)(resource_manager + -0x28 + texture_ptr * 0x28) = 9;
        *(float *)(resource_manager + -0x24 + texture_ptr * 0x28) = scale_factor;
        *(float *)(*(longlong *)(material_context + 0x28) + 0x24) = scale_factor;
        *(short *)(*(longlong *)(material_context + 0x38) +
                  (ulonglong)*(ushort *)(resource_manager + -0x28 + texture_ptr * 0x28) * 2) =
             *(short *)(material_context + 0x10) + -1;
        texture_slot = *(int *)(material_context + 0x30);
      }
      max_index = property_size;
      if (((int)(uint)*(ushort *)(material_context + 0x4c) < texture_slot) &&
         (material_index = *(ushort *)
                   (*(longlong *)(material_context + 0x38) + (ulonglong)*(ushort *)(material_context + 0x4c) * 2),
         material_index != 0xffff)) {
        max_index = *(longlong *)(material_context + 0x18) + (ulonglong)material_index * 0x28;
      }
      *(ulonglong *)(material_context + 0x40) = max_index;
      if (max_index == 0) {
        default_value = 0;
      }
      else {
        default_value = *(undefined4 *)(max_index + 4);
      }
      max_index = (ulonglong)(int)(current_index + 1);
      *(undefined4 *)(material_context + 0x48) = default_value;
      if (3 < max_index) {
        float_property_ptr = (float *)(*(longlong *)(material_context + 0x28) + 8);
        texture_ptr = (max_index - 4 >> 2) + 1;
        property_size = texture_ptr * 4;
        do {
          if (float_property_ptr[-2] <= 0.0 && float_property_ptr[-2] != 0.0) {
            float_property_ptr[-2] = *(float *)(material_context + 0x48);
          }
          if (float_property_ptr[-1] <= 0.0 && float_property_ptr[-1] != 0.0) {
            float_property_ptr[-1] = *(float *)(material_context + 0x48);
          }
          if (*float_property_ptr <= 0.0 && *float_property_ptr != 0.0) {
            *float_property_ptr = *(float *)(material_context + 0x48);
          }
          if (float_property_ptr[1] <= 0.0 && float_property_ptr[1] != 0.0) {
            float_property_ptr[1] = *(float *)(material_context + 0x48);
          }
          float_property_ptr = float_property_ptr + 4;
          texture_ptr = texture_ptr + -1;
        } while (texture_ptr != 0);
      }
      if ((longlong)property_size < (longlong)max_index) {
        texture_ptr = *(longlong *)(material_context + 0x28);
        do {
          float_property_ptr = (float *)(texture_ptr + property_size * 4);
          if (*float_property_ptr <= 0.0 && *float_property_ptr != 0.0) {
            *(undefined4 *)(texture_ptr + property_size * 4) = *(undefined4 *)(material_context + 0x48);
          }
          property_size = property_size + 1;
        } while ((longlong)property_size < (longlong)max_index);
      }
      return;
    }
    *(undefined8 *)(material_context + 0x30) = 0;
    if (resource_manager != 0) {
      *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) + -1;
    }
                    // 警告: 子函数不返回
    release_resource_handle(texture_ptr,GLOBAL_RESOURCE_BASE);
  }
  *(undefined8 *)(material_context + 0x20) = 0;
  if (resource_manager != 0) {
    *(int *)(resource_manager + 0x3a8) = *(int *)(resource_manager + 0x3a8) + -1;
  }
                    // 警告: 子函数不返回
  release_resource_handle(texture_ptr,GLOBAL_RESOURCE_BASE);
}



// 函数: void resize_rendering_buffers(longlong material_context,int buffer_size)
// 功能: 调整渲染缓冲区大小，重新分配内存以适应新的材质数量
// 参数: 
//   material_context - 材质上下文指针
//   buffer_size - 缓冲区大小
// 返回值: 无
void resize_rendering_buffers(longlong material_context,int buffer_size)

{
  int *buffer_capacity_ptr;
  int *buffer_size_ptr;
  int current_capacity;
  longlong buffer_data_ptr;
  int new_capacity;
  int current_size;
  int index_size;
  
  buffer_capacity_ptr = (int *)(material_context + 0x30);
  if (*buffer_capacity_ptr < buffer_size) {
    index_size = 8;
    buffer_size_ptr = (int *)(material_context + 0x20);
    current_capacity = *(int *)(material_context + 0x24);
    if (current_capacity < buffer_size) {
      if (current_capacity == 0) {
        current_capacity = 8;
      }
      else {
        current_capacity = current_capacity / 2 + current_capacity;
      }
      new_capacity = buffer_size;
      if (buffer_size < current_capacity) {
        new_capacity = current_capacity;
      }
      resize_float_buffer(buffer_size_ptr,new_capacity);
    }
    buffer_data_ptr = (longlong)*buffer_size_ptr;
    if (*buffer_size_ptr < buffer_size) {
      for (; buffer_data_ptr < buffer_size; buffer_data_ptr = buffer_data_ptr + 1) {
        *(undefined4 *)(*(longlong *)(material_context + 0x28) + buffer_data_ptr * 4) = 0xbf800000;
      }
    }
    *buffer_size_ptr = buffer_size;
    current_capacity = *(int *)(material_context + 0x34);
    if (current_capacity < buffer_size) {
      if (current_capacity != 0) {
        index_size = current_capacity + current_capacity / 2;
      }
      current_capacity = buffer_size;
      if (buffer_size < index_size) {
        current_capacity = index_size;
      }
      resize_index_buffer(buffer_capacity_ptr,current_capacity);
    }
    buffer_data_ptr = (longlong)*buffer_capacity_ptr;
    if (*buffer_capacity_ptr < buffer_size) {
      for (; buffer_data_ptr < buffer_size; buffer_data_ptr = buffer_data_ptr + 1) {
        *(undefined2 *)(*(longlong *)(material_context + 0x38) + buffer_data_ptr * 2) = 0xffff;
      }
    }
    *buffer_capacity_ptr = buffer_size;
  }
  return;
}



// 函数: void optimize_rendering_buffer_allocation(longlong material_context)
// 功能: 优化渲染缓冲区分配，提高内存使用效率
// 参数: material_context - 材质上下文指针
// 返回值: 无
void optimize_rendering_buffer_allocation(longlong material_context)

{
  int *buffer_capacity_ptr;
  int current_capacity;
  uint new_capacity;
  longlong buffer_data_ptr;
  ulonglong allocation_size;
  int target_size;
  ulonglong unaff_RBX;
  uint default_size;
  int *buffer_size_ptr;
  undefined4 default_value;
  
  default_size = 8;
  buffer_capacity_ptr = (int *)(material_context + 0x20);
  current_capacity = *(int *)(material_context + 0x24);
  target_size = (int)unaff_RBX;
  default_value = default_value;
  if (current_capacity < target_size) {
    if (current_capacity == 0) {
      new_capacity = 8;
    }
    else {
      new_capacity = current_capacity / 2 + current_capacity;
    }
    allocation_size = unaff_RBX & 0xffffffff;
    if (target_size < (int)new_capacity) {
      allocation_size = (ulonglong)new_capacity;
    }
    default_value = resize_float_buffer(buffer_capacity_ptr,allocation_size);
  }
  buffer_data_ptr = (longlong)*buffer_capacity_ptr;
  if (*buffer_capacity_ptr < target_size) {
    for (; buffer_data_ptr < (longlong)unaff_RBX; buffer_data_ptr = buffer_data_ptr + 1) {
      *(undefined4 *)(*(longlong *)(material_context + 0x28) + buffer_data_ptr * 4) = default_value;
    }
  }
  *buffer_capacity_ptr = target_size;
  current_capacity = buffer_size_ptr[1];
  if (current_capacity < target_size) {
    if (current_capacity != 0) {
      default_size = current_capacity + current_capacity / 2;
    }
    allocation_size = unaff_RBX & 0xffffffff;
    if (target_size < (int)default_size) {
      allocation_size = (ulonglong)default_size;
    }
    resize_index_buffer(default_value,allocation_size);
  }
  buffer_data_ptr = (longlong)*buffer_size_ptr;
  if (*buffer_size_ptr < target_size) {
    for (; buffer_data_ptr < (longlong)unaff_RBX; buffer_data_ptr = buffer_data_ptr + 1) {
      *(undefined2 *)(*(longlong *)(buffer_size_ptr + 2) + buffer_data_ptr * 2) = 0xffff;
    }
  }
  *buffer_size_ptr = target_size;
  return;
}



// 函数: void initialize_rendering_buffer_with_value(undefined4 init_value)
// 功能: 使用指定值初始化渲染缓冲区
// 参数: init_value - 初始化值
// 返回值: 无
void initialize_rendering_buffer_with_value(undefined4 init_value)

{
  int *buffer_capacity_ptr;
  int current_capacity;
  uint new_capacity;
  longlong buffer_data_ptr;
  longlong material_context;
  ulonglong allocation_size;
  int target_size;
  ulonglong unaff_RBX;
  uint default_size;
  int *buffer_size_ptr;
  undefined4 stored_value;
  
  buffer_capacity_ptr = (int *)(material_context + 0x20);
  current_capacity = *(int *)(material_context + 0x24);
  target_size = (int)unaff_RBX;
  stored_value = init_value;
  if (current_capacity < target_size) {
    new_capacity = default_size;
    if (current_capacity != 0) {
      new_capacity = current_capacity / 2 + current_capacity;
    }
    allocation_size = unaff_RBX & 0xffffffff;
    if (target_size < (int)new_capacity) {
      allocation_size = (ulonglong)new_capacity;
    }
    init_value = resize_float_buffer(buffer_capacity_ptr,allocation_size);
  }
  buffer_data_ptr = (longlong)*buffer_capacity_ptr;
  if (*buffer_capacity_ptr < target_size) {
    for (; buffer_data_ptr < (longlong)unaff_RBX; buffer_data_ptr = buffer_data_ptr + 1) {
      *(undefined4 *)(*(longlong *)(material_context + 0x28) + buffer_data_ptr * 4) = stored_value;
    }
  }
  *buffer_capacity_ptr = target_size;
  current_capacity = buffer_size_ptr[1];
  if (current_capacity < target_size) {
    if (current_capacity != 0) {
      default_size = current_capacity + current_capacity / 2;
    }
    allocation_size = unaff_RBX & 0xffffffff;
    if (target_size < (int)default_size) {
      allocation_size = (ulonglong)default_size;
    }
    resize_index_buffer(init_value,allocation_size);
  }
  buffer_data_ptr = (longlong)*buffer_size_ptr;
  if (*buffer_size_ptr < target_size) {
    for (; buffer_data_ptr < (longlong)unaff_RBX; buffer_data_ptr = buffer_data_ptr + 1) {
      *(undefined2 *)(*(longlong *)(buffer_size_ptr + 2) + buffer_data_ptr * 2) = 0xffff;
    }
  }
  *buffer_size_ptr = target_size;
  return;
}



// 函数: void fast_clear_rendering_index_buffer(void)
// 功能: 快速清除渲染索引缓冲区
// 参数: 无 (使用寄存器传递参数)
// 返回值: 无
void fast_clear_rendering_index_buffer(void)

{
  longlong buffer_data_ptr;
  longlong unaff_RBX;
  int *buffer_size_ptr;
  
  resize_index_buffer();
  buffer_data_ptr = (longlong)*buffer_size_ptr;
  if (*buffer_size_ptr < (int)unaff_RBX) {
    for (; buffer_data_ptr < unaff_RBX; buffer_data_ptr = buffer_data_ptr + 1) {
      *(undefined2 *)(*(longlong *)(buffer_size_ptr + 2) + buffer_data_ptr * 2) = 0xffff;
    }
  }
  *buffer_size_ptr = (int)unaff_RBX;
  return;
}



// 函数: void optimized_clear_rendering_index_buffer(void)
// 功能: 优化的清除渲染索引缓冲区
// 参数: 无 (使用寄存器传递参数)
// 返回值: 无
void optimized_clear_rendering_index_buffer(void)

{
  longlong buffer_index;
  longlong unaff_RBX;
  undefined4 *buffer_size_ptr;
  
  if (buffer_index < unaff_RBX) {
    do {
      *(undefined2 *)(*(longlong *)(buffer_size_ptr + 2) + buffer_index * 2) = 0xffff;
      buffer_index = buffer_index + 1;
    } while (buffer_index < unaff_RBX);
  }
  *buffer_size_ptr = (int)unaff_RBX;
  return;
}



// 函数: void empty_rendering_function(void)
// 功能: 空的渲染函数，占位符使用
// 参数: 无
// 返回值: 无
void empty_rendering_function(void)

{
  return;
}



// 函数: void add_rendering_material_entry(longlong material_context,undefined2 material_id,undefined4 property1,undefined4 property2,
// 功能: 添加渲染材质条目，将新的材质属性添加到渲染系统中
// 参数: 
//   material_context - 材质上下文指针
//   material_id - 材质ID
//   property1 - 材质属性1
//   property2 - 材质属性2
//   property3 - 材质属性3
//   property4 - 材质属性4
//   property5 - 材质属性5
//   property6 - 材质属性6
//   property7 - 材质属性7
//   property8 - 材质属性8
//   scale_factor - 缩放因子
// 返回值: 无
void add_rendering_material_entry(longlong material_context,undefined2 material_id,undefined4 property1,undefined4 property2,
                  undefined4 property3,undefined4 property4,undefined4 property5,undefined4 property6,
                  undefined4 property7,undefined4 property8,float scale_factor)

{
  longlong material_index;
  longlong material_array_ptr;
  
  resize_rendering_texture_array(material_context + 0x10,*(int *)(material_context + 0x10) + 1);
  material_index = (longlong)*(int *)(material_context + 0x10);
  material_array_ptr = *(longlong *)(material_context + 0x18);
  *(undefined4 *)(material_array_ptr + -0x18 + material_index * 0x28) = property5;
  *(undefined4 *)(material_array_ptr + -0x14 + material_index * 0x28) = property6;
  *(undefined4 *)(material_array_ptr + -0x10 + material_index * 0x28) = property7;
  *(undefined4 *)(material_array_ptr + -0xc + material_index * 0x28) = property8;
  *(undefined4 *)(material_array_ptr + -8 + material_index * 0x28) = property3;
  *(undefined4 *)(material_array_ptr + -4 + material_index * 0x28) = property4;
  *(undefined4 *)(material_array_ptr + -0x20 + material_index * 0x28) = property1;
  *(undefined4 *)(material_array_ptr + -0x1c + material_index * 0x28) = property2;
  *(undefined2 *)(material_array_ptr + -0x28 + material_index * 0x28) = material_id;
  scale_factor = scale_factor + *(float *)(*(longlong *)(material_context + 0x50) + 0x24);
  *(float *)(material_array_ptr + -0x24 + material_index * 0x28) = scale_factor;
  if (*(char *)(*(longlong *)(material_context + 0x50) + 0x20) != '\0') {
    *(float *)(material_array_ptr + -0x24 + material_index * 0x28) = (float)(int)(scale_factor + 0.5);
  }
  *(undefined1 *)(material_context + 0x68) = 1;
  *(int *)(material_context + 0x6c) =
       *(int *)(material_context + 0x6c) +
       (int)((float)*(int *)(*(longlong *)(material_context + 0x58) + 0x28) *
             (*(float *)(material_array_ptr + -8 + material_index * 0x28) - *(float *)(material_array_ptr + -0x10 + material_index * 0x28)) +
            1.99) *
       (int)((*(float *)(material_array_ptr + -4 + material_index * 0x28) - *(float *)(material_array_ptr + -0xc + material_index * 0x28)) *
             (float)*(int *)(*(longlong *)(material_context + 0x58) + 0x2c) + 1.99);
  return;
}



// 函数: char * calculate_rendering_text_position(longlong render_context,float total_width,char *text_start,char *text_end,float target_position)
// 功能: 计算渲染文本位置，根据目标位置确定文本中断点
// 参数: 
//   render_context - 渲染上下文指针
//   total_width - 总宽度
//   text_start - 文本起始位置
//   text_end - 文本结束位置
//   target_position - 目标位置
// 返回值: 计算得到的文本位置指针
char * calculate_rendering_text_position(longlong render_context,float total_width,char *text_start,char *text_end,float target_position)

{
  bool is_first_segment;
  int char_code;
  longlong char_width;
  char *current_pos;
  char *segment_start;
  char *best_break_pos;
  float segment_width;
  float total_segment_width;
  float accumulated_width;
  float char_scale;
  
  best_break_pos = (char *)0x0;
  accumulated_width = 0.0;
  total_segment_width = 0.0;
  segment_width = 0.0;
  is_first_segment = true;
  total_width = target_position / total_width;
  current_pos = text_start;
  segment_start = text_start;
  if (text_start < text_end) {
    do {
      target_position = (float)(int)*current_pos;
      if ((uint)target_position < 0x80) {
        char_width = 1;
      }
      else {
        char_code = get_utf8_char_width(&target_position,current_pos,text_end);
        char_width = (longlong)char_code;
      }
      text_start = current_pos + char_width;
      if (target_position == 0.0) {
        return current_pos;
      }
      segment_start = segment_start;
      if ((uint)target_position < 0x20) {
        if (target_position == 1.4013e-44) {
          segment_width = 0.0;
          total_segment_width = 0.0;
          accumulated_width = 0.0;
          is_first_segment = true;
        }
        else if (target_position != 1.82169e-44) goto PROCESS_NORMAL_CHAR;
      }
      else {
PROCESS_NORMAL_CHAR:
        if ((int)target_position < *(int *)(render_context + 0x20)) {
          char_scale = *(float *)(*(longlong *)(render_context + 0x28) + (ulonglong)(uint)target_position * 4);
        }
        else {
          char_scale = *(float *)(render_context + 0x48);
        }
        if (((target_position == 4.48416e-44) || (target_position == 1.26117e-44)) || (target_position == 1.72192e-41)) {
          if (is_first_segment) {
            accumulated_width = accumulated_width + segment_width;
            segment_width = 0.0;
          }
          segment_width = segment_width + char_scale;
          segment_start = current_pos;
          if (!is_first_segment) {
            segment_start = segment_start;
          }
CONTINUE_SEGMENT:
          is_first_segment = false;
        }
        else {
          total_segment_width = total_segment_width + char_scale;
          segment_start = text_start;
          if (!is_first_segment) {
            segment_width = segment_width + total_segment_width;
            total_segment_width = 0.0;
            accumulated_width = accumulated_width + segment_width;
            segment_width = 0.0;
            segment_start = segment_start;
            best_break_pos = segment_start;
          }
          if (((uint)target_position < 0x40) &&
             ((0x8800500600000000U >> ((ulonglong)(uint)target_position & 0x3f) & 1) != 0))
          goto CONTINUE_SEGMENT;
          is_first_segment = true;
        }
        if (total_width <= total_segment_width + accumulated_width) {
          if (total_width <= total_segment_width) {
            return current_pos;
          }
          if (best_break_pos == (char *)0x0) {
            return segment_start;
          }
          return best_break_pos;
        }
      }
      segment_start = segment_start;
      current_pos = text_start;
    } while (text_start < text_end);
  }
  return text_start;
}



// 函数: char * optimized_rendering_text_layout(undefined8 layout_param,undefined8 text_param,float width1,float width2)
// 功能: 优化的渲染文本布局，处理文本换行和位置计算
// 参数: 
//   layout_param - 布局参数
//   text_param - 文本参数
//   width1 - 宽度参数1
//   width2 - 宽度参数2
// 返回值: 布局处理后的文本位置指针
char * optimized_rendering_text_layout(undefined8 layout_param,undefined8 text_param,float width1,float width2)

{
  char *text_position;
  int char_code;
  longlong char_width;
  char *next_char_pos;
  char *segment_start;
  char *best_break_pos;
  float segment_width;
  float total_width;
  float accumulated_width;
  char layout_flag;
  char *unaff_RBP;
  char *unaff_RSI;
  char *unaff_RDI;
  longlong render_context;
  char *unaff_R15;
  float char_scale;
  float total_segment_width;
  float in_XMM4_Da;
  float in_XMM5_Da;
  uint current_char;
  
  do {
    current_char = (uint)*unaff_RDI;
    if (current_char < 0x80) {
      char_width = 1;
    }
    else {
      char_code = get_utf8_char_width(&current_char,unaff_RDI);
      char_width = (longlong)char_code;
    }
    text_position = unaff_RDI + char_width;
    if (current_char == 0) {
      return unaff_RDI;
    }
    segment_start = unaff_RSI;
    if (current_char < 0x20) {
      if (current_char == 10) {
        width1 = 0.0;
        width2 = 0.0;
        in_XMM4_Da = 0.0;
        layout_flag = '\x01';
      }
      else if (current_char != 0xd) goto PROCESS_NORMAL_CHAR;
    }
    else {
PROCESS_NORMAL_CHAR:
      if ((int)current_char < *(int *)(render_context + 0x20)) {
        char_scale = *(float *)(*(longlong *)(render_context + 0x28) + (ulonglong)current_char * 4);
      }
      else {
        char_scale = *(float *)(render_context + 0x48);
      }
      if (((current_char == 0x20) || (current_char == 9)) ||
         (current_char == 0x3000)) {
        if (layout_flag != '\0') {
          in_XMM4_Da = in_XMM4_Da + width1;
          width1 = 0.0;
        }
        width1 = width1 + char_scale;
        segment_start = unaff_RDI;
        if (layout_flag == '\0') {
          segment_start = unaff_RSI;
        }
CONTINUE_SEGMENT:
        layout_flag = '\0';
      }
      else {
        width2 = width2 + char_scale;
        segment_start = text_position;
        if (layout_flag == '\0') {
          width1 = width1 + width2;
          width2 = 0.0;
          in_XMM4_Da = in_XMM4_Da + width1;
          width1 = 0.0;
          segment_start = unaff_RSI;
          unaff_RBP = unaff_RSI;
        }
        if ((current_char < 0x40) &&
           ((0x8800500600000000U >> ((ulonglong)current_char & 0x3f) & 1) != 0))
        goto CONTINUE_SEGMENT;
        layout_flag = '\x01';
      }
      if (in_XMM5_Da <= width2 + in_XMM4_Da) {
        if (in_XMM5_Da <= width2) {
          return unaff_RDI;
        }
        if (unaff_RBP == (char *)0x0) {
          return segment_start;
        }
        return unaff_RBP;
      }
    }
    unaff_RSI = segment_start;
    unaff_RDI = text_position;
    if (unaff_R15 <= text_position) {
      return text_position;
    }
  } while( true );
}



// 函数: void rendering_placeholder_function(void)
// 功能: 渲染占位符函数，预留的空函数
// 参数: 无
// 返回值: 无
void rendering_placeholder_function(void)

{
  return;
}


