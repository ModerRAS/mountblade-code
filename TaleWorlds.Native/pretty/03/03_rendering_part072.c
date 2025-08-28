#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part072.c - 渲染系统高级数据处理器和资源管理器
// 本文件包含6个核心函数，主要负责渲染系统的高级数据处理、资源管理和状态同步

/**
 * 渲染系统高级数据处理器 - 主要处理渲染数据的累积、插值和同步
 * 
 * 参数:
 * - param_1: 渲染上下文指针，包含渲染状态和数据缓冲区
 * - param_2: 浮点参数，用于数据累积计算
 * - param_3: 未定义4字节参数，渲染模式或状态标志
 * - param_4: 字符参数，控制处理模式的标志位
 * - param_5: 8字节指针数组，包含位置和变换数据
 * - param_6: 8字节参数，配置或选项参数
 * - param_7: 字符参数，处理方式选择标志
 * 
 * 功能说明:
 * - 根据param_7的值选择不同的数据处理路径
 * - 实现渲染数据的累积、插值和同步
 * - 处理位置、变换和状态数据的更新
 * - 管理多个渲染缓冲区的数据一致性
 */
void render_system_advanced_data_processor(longlong render_context, float data_accumulator, int32_t render_mode, char processing_flag, uint64_t *transform_data, uint64_t config_param, char mode_selector)
{
  uint64_t temp_var1;
  int processed_count;
  float threshold_value;
  float distance_x;
  float distance_y;
  float distance_z;
  float accumulated_value;
  float interpolation_factor;
  float interpolation_result;
  
  if (mode_selector == '\0') {
    // 常规数据处理模式
    data_accumulator = data_accumulator + *(float *)(render_context + 0x114);
    *(float *)(render_context + 0x114) = data_accumulator;
    threshold_value = 1.0 / (float)*(int *)(render_context + 0x11c);
    if (processing_flag == '\0') {
      if (data_accumulator <= threshold_value) {
        *(int32_t *)(render_context + 0x118) = 0;
      }
      else {
        // 计算距离并检查阈值
        distance_x = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
        distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
        distance_z = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
        if (50.0 < SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * (1.0 / data_accumulator)) {
          // 更新变换数据缓冲区
          temp_var1 = transform_data[1];
          *(uint64_t *)(render_context + 0xd0) = *transform_data;
          *(uint64_t *)(render_context + 0xd8) = temp_var1;
          temp_var1 = transform_data[3];
          *(uint64_t *)(render_context + 0xe0) = transform_data[2];
          *(uint64_t *)(render_context + 0xe8) = temp_var1;
          temp_var1 = transform_data[5];
          *(uint64_t *)(render_context + 0xf0) = transform_data[4];
          *(uint64_t *)(render_context + 0xf8) = temp_var1;
          temp_var1 = transform_data[7];
          *(uint64_t *)(render_context + 0x100) = transform_data[6];
          *(uint64_t *)(render_context + 0x108) = temp_var1;
          // 复制到工作缓冲区
          temp_var1 = transform_data[1];
          *(uint64_t *)(render_context + 0x90) = *transform_data;
          *(uint64_t *)(render_context + 0x98) = temp_var1;
          temp_var1 = transform_data[3];
          *(uint64_t *)(render_context + 0xa0) = transform_data[2];
          *(uint64_t *)(render_context + 0xa8) = temp_var1;
          temp_var1 = transform_data[5];
          *(uint64_t *)(render_context + 0xb0) = transform_data[4];
          *(uint64_t *)(render_context + 0xb8) = temp_var1;
          temp_var1 = transform_data[7];
          *(uint64_t *)(render_context + 0xc0) = transform_data[6];
          *(uint64_t *)(render_context + 200) = temp_var1;
        }
        // 计算处理数量和插值因子
        processed_count = (int)(data_accumulator * (float)*(int *)(render_context + 0x11c));
        *(int *)(render_context + 0x118) = processed_count;
        interpolation_result = (float)processed_count * threshold_value;
        interpolation_factor = interpolation_result / data_accumulator;
        *(float *)(render_context + 0x114) = data_accumulator - interpolation_result;
        
        // 更新主变换数据
        temp_var1 = transform_data[1];
        *(uint64_t *)(render_context + 0xd0) = *transform_data;
        *(uint64_t *)(render_context + 0xd8) = temp_var1;
        temp_var1 = transform_data[3];
        *(uint64_t *)(render_context + 0xe0) = transform_data[2];
        *(uint64_t *)(render_context + 0xe8) = temp_var1;
        temp_var1 = transform_data[5];
        *(uint64_t *)(render_context + 0xf0) = transform_data[4];
        *(uint64_t *)(render_context + 0xf8) = temp_var1;
        
        // 执行插值计算
        accumulated_value = *(float *)(transform_data + 7);
        distance_y = *(float *)((longlong)transform_data + 0x34);
        distance_z = *(float *)(transform_data + 6);
        *(float *)(render_context + 0x124) = threshold_value;
        *(float *)(render_context + 0x128) = threshold_value;
        threshold_value = (distance_z - *(float *)(render_context + 0xc0)) * interpolation_factor + *(float *)(render_context + 0xc0);
        interpolation_result = *(float *)(render_context + 0x8c) / interpolation_result;
        *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
        *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
        *(float *)(render_context + 0x100) = threshold_value;
        *(float *)(render_context + 0x104) = (distance_y - *(float *)(render_context + 0xc4)) * interpolation_factor + *(float *)(render_context + 0xc4);
        *(float *)(render_context + 0x108) = (accumulated_value - *(float *)(render_context + 200)) * interpolation_factor + *(float *)(render_context + 200);
        *(int32_t *)(render_context + 0x10c) = 0x7f7fffff;
        *(float *)(render_context + 0x78) = (threshold_value - *(float *)(render_context + 0xc0)) * interpolation_result;
        *(float *)(render_context + 0x7c) = (*(float *)(render_context + 0x104) - *(float *)(render_context + 0xc4)) * interpolation_result;
        *(float *)(render_context + 0x80) = (*(float *)(render_context + 0x108) - *(float *)(render_context + 200)) * interpolation_result;
        *(int32_t *)(render_context + 0x84) = 0x7f7fffff;
        if (0.0 < *(float *)(render_context + 0x88)) {
          func_0x00018030a230();
        }
        // 同步工作缓冲区
        *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
        *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
        *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
        *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
        *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
        *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
        *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
        *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
      }
    }
    else {
      // 直接更新模式
      temp_var1 = transform_data[1];
      *(uint64_t *)(render_context + 0x90) = *transform_data;
      *(uint64_t *)(render_context + 0x98) = temp_var1;
      temp_var1 = transform_data[3];
      *(uint64_t *)(render_context + 0xa0) = transform_data[2];
      *(uint64_t *)(render_context + 0xa8) = temp_var1;
      temp_var1 = transform_data[5];
      *(uint64_t *)(render_context + 0xb0) = transform_data[4];
      *(uint64_t *)(render_context + 0xb8) = temp_var1;
      temp_var1 = transform_data[7];
      *(uint64_t *)(render_context + 0xc0) = transform_data[6];
      *(uint64_t *)(render_context + 200) = temp_var1;
      temp_var1 = transform_data[1];
      *(uint64_t *)(render_context + 0xd0) = *transform_data;
      *(uint64_t *)(render_context + 0xd8) = temp_var1;
      temp_var1 = transform_data[3];
      *(uint64_t *)(render_context + 0xe0) = transform_data[2];
      *(uint64_t *)(render_context + 0xe8) = temp_var1;
      temp_var1 = transform_data[5];
      *(uint64_t *)(render_context + 0xf0) = transform_data[4];
      *(uint64_t *)(render_context + 0xf8) = temp_var1;
      temp_var1 = transform_data[7];
      *(uint64_t *)(render_context + 0x100) = transform_data[6];
      *(uint64_t *)(render_context + 0x108) = temp_var1;
      *(int32_t *)(render_context + 0x114) = 0;
      *(float *)(render_context + 0x124) = threshold_value;
      *(float *)(render_context + 0x128) = threshold_value;
      *(int32_t *)(render_context + 0x118) = 1;
    }
  }
  else {
    // 强制处理模式
    threshold_value = *(float *)(render_context + 0x60) - *(float *)(transform_data + 7);
    distance_y = *(float *)(render_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
    distance_x = *(float *)(render_context + 0x58) - *(float *)(transform_data + 6);
    interpolation_factor = 1.0 / data_accumulator;
    if (50.0 < SQRT(distance_y * distance_y + distance_x * distance_x + threshold_value * threshold_value) * interpolation_factor) {
      temp_var1 = transform_data[1];
      *(uint64_t *)(render_context + 0xd0) = *transform_data;
      *(uint64_t *)(render_context + 0xd8) = temp_var1;
      temp_var1 = transform_data[3];
      *(uint64_t *)(render_context + 0xe0) = transform_data[2];
      *(uint64_t *)(render_context + 0xe8) = temp_var1;
      temp_var1 = transform_data[5];
      *(uint64_t *)(render_context + 0xf0) = transform_data[4];
      *(uint64_t *)(render_context + 0xf8) = temp_var1;
      temp_var1 = transform_data[7];
      *(uint64_t *)(render_context + 0x100) = transform_data[6];
      *(uint64_t *)(render_context + 0x108) = temp_var1;
    }
    *(int32_t *)(render_context + 0x118) = 1;
    *(float *)(render_context + 0x124) = data_accumulator;
    *(uint64_t *)(render_context + 0x68) = *(uint64_t *)(render_context + 0x78);
    *(uint64_t *)(render_context + 0x70) = *(uint64_t *)(render_context + 0x80);
    *(int32_t *)(render_context + 0x114) = 0;
    threshold_value = *(float *)(render_context + 0x8c);
    distance_x = *(float *)(transform_data + 7);
    distance_y = *(float *)((longlong)transform_data + 0x34);
    *(float *)(render_context + 0x78) = (*(float *)(transform_data + 6) - *(float *)(render_context + 0x100)) * interpolation_factor * threshold_value;
    *(float *)(render_context + 0x7c) = (distance_y - *(float *)(render_context + 0x104)) * interpolation_factor * threshold_value;
    *(float *)(render_context + 0x80) = (distance_x - *(float *)(render_context + 0x108)) * interpolation_factor * threshold_value;
    *(int32_t *)(render_context + 0x84) = 0x7f7fffff;
    if (0.0 < *(float *)(render_context + 0x88)) {
      func_0x00018030a230();
    }
    // 同步工作缓冲区
    *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
    *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
    *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
    *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
    *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
    *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
    *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
    *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
    temp_var1 = transform_data[1];
    *(uint64_t *)(render_context + 0xd0) = *transform_data;
    *(uint64_t *)(render_context + 0xd8) = temp_var1;
    temp_var1 = transform_data[3];
    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
    *(uint64_t *)(render_context + 0xe8) = temp_var1;
    temp_var1 = transform_data[5];
    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
    *(uint64_t *)(render_context + 0xf8) = temp_var1;
    temp_var1 = transform_data[7];
    *(uint64_t *)(render_context + 0x100) = transform_data[6];
    *(uint64_t *)(render_context + 0x108) = temp_var1;
    *(int32_t *)(render_context + 0x128) = render_mode;
  }
  // 更新基础变换数据
  temp_var1 = transform_data[1];
  *(uint64_t *)(render_context + 0x28) = *transform_data;
  *(uint64_t *)(render_context + 0x30) = temp_var1;
  temp_var1 = transform_data[3];
  *(uint64_t *)(render_context + 0x38) = transform_data[2];
  *(uint64_t *)(render_context + 0x40) = temp_var1;
  temp_var1 = transform_data[5];
  *(uint64_t *)(render_context + 0x48) = transform_data[4];
  *(uint64_t *)(render_context + 0x50) = temp_var1;
  temp_var1 = transform_data[7];
  *(uint64_t *)(render_context + 0x58) = transform_data[6];
  *(uint64_t *)(render_context + 0x60) = temp_var1;
  return;
}

/**
 * 渲染系统双上下文数据处理器 - 在两个渲染上下文之间处理和同步数据
 * 
 * 参数:
 * - param_1: 主渲染上下文指针
 * - param_2: 次渲染上下文指针
 * - param_3: 8字节指针数组，包含变换数据
 * - param_4: 字符参数，处理模式标志
 * 
 * 功能说明:
 * - 在两个渲染上下文之间同步变换数据
 * - 实现数据的插值和平滑过渡
 * - 管理多个缓冲区的数据一致性
 * - 处理距离阈值和状态更新
 */
void render_system_dual_context_data_processor(longlong primary_context, longlong secondary_context, uint64_t *transform_data, char processing_mode)
{
  uint64_t temp_var1;
  int processed_count;
  float *buffer_ptr;
  float distance_x;
  float distance_y;
  float distance_z;
  float interpolation_factor;
  float threshold_value;
  float data_accumulator;
  float interpolation_result;
  float temp_distance;
  int32_t temp_stack_value;
  
  data_accumulator = interpolation_factor + *(float *)(primary_context + 0x114);
  *(float *)(primary_context + 0x114) = data_accumulator;
  threshold_value = distance_x / (float)processed_count;
  if (processing_mode == '\0') {
    if (data_accumulator <= threshold_value) {
      *(int32_t *)(primary_context + 0x118) = 0;
    }
    else {
      // 计算距离并检查阈值
      distance_x = *(float *)(primary_context + 0x60) - *(float *)(transform_data + 7);
      distance_y = *(float *)(primary_context + 0x5c) - *(float *)((longlong)transform_data + 0x34);
      distance_z = *(float *)(primary_context + 0x58) - *(float *)(transform_data + 6);
      if (50.0 < SQRT(distance_y * distance_y + distance_z * distance_z + distance_x * distance_x) * (distance_x / data_accumulator)) {
        // 更新主上下文缓冲区
        temp_var1 = transform_data[1];
        *(uint64_t *)(primary_context + 0xd0) = *transform_data;
        *(uint64_t *)(primary_context + 0xd8) = temp_var1;
        temp_var1 = transform_data[3];
        *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xe8) = temp_var1;
        temp_var1 = transform_data[5];
        *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xf8) = temp_var1;
        temp_var1 = transform_data[7];
        *(uint64_t *)(primary_context + 0x100) = transform_data[6];
        *(uint64_t *)(primary_context + 0x108) = temp_var1;
        // 复制到工作缓冲区
        temp_var1 = transform_data[1];
        *(uint64_t *)(primary_context + 0x90) = *transform_data;
        *(uint64_t *)(primary_context + 0x98) = temp_var1;
        temp_var1 = transform_data[3];
        *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
        *(uint64_t *)(primary_context + 0xa8) = temp_var1;
        temp_var1 = transform_data[5];
        *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
        *(uint64_t *)(primary_context + 0xb8) = temp_var1;
        temp_var1 = transform_data[7];
        *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
        *(uint64_t *)(primary_context + 200) = temp_var1;
      }
      // 计算处理数量和插值
      processed_count = (int)(data_accumulator * (float)processed_count);
      *(int *)(primary_context + 0x118) = processed_count;
      interpolation_result = (float)processed_count * threshold_value;
      interpolation_factor = interpolation_result / data_accumulator;
      *(float *)(primary_context + 0x114) = data_accumulator - interpolation_result;
      temp_var1 = transform_data[1];
      *(uint64_t *)(primary_context + 0xd0) = *transform_data;
      *(uint64_t *)(primary_context + 0xd8) = temp_var1;
      temp_var1 = transform_data[3];
      *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
      *(uint64_t *)(primary_context + 0xe8) = temp_var1;
      temp_var1 = transform_data[5];
      *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
      *(uint64_t *)(primary_context + 0xf8) = temp_var1;
      data_accumulator = *(float *)(primary_context + 0xc4);
      distance_x = *(float *)(transform_data + 7);
      distance_z = *(float *)((longlong)transform_data + 0x34);
      distance_y = *(float *)(transform_data + 6);
      *(float *)(primary_context + 0x124) = threshold_value;
      *(float *)(primary_context + 0x128) = threshold_value;
      buffer_ptr = (float *)(primary_context + 0x78);
      temp_distance = (distance_x - *(float *)(primary_context + 200)) * interpolation_factor + *(float *)(primary_context + 200);
      distance_y = (distance_y - *(float *)(primary_context + 0xc0)) * interpolation_factor + *(float *)(primary_context + 0xc0);
      temp_var1 = *(uint64_t *)(primary_context + 0x80);
      interpolation_result = *(float *)(secondary_context + 0x8c) / interpolation_result;
      *(uint64_t *)(secondary_context + 0x68) = *(uint64_t *)buffer_ptr;
      *(uint64_t *)(secondary_context + 0x70) = temp_var1;
      *(float *)(secondary_context + 0x100) = distance_y;
      *(float *)(secondary_context + 0x104) = (distance_z - data_accumulator) * interpolation_factor + data_accumulator;
      *(float *)(secondary_context + 0x108) = temp_distance;
      *(int32_t *)(secondary_context + 0x10c) = 0x7f7fffff;
      temp_stack_value = 0x7f7fffff;
      threshold_value = (*(float *)(secondary_context + 0x104) - *(float *)(secondary_context + 0xc4)) * interpolation_result;
      distance_x = (*(float *)(secondary_context + 0x108) - *(float *)(secondary_context + 200)) * interpolation_result;
      data_accumulator = *(float *)(secondary_context + 0x88);
      *buffer_ptr = (distance_y - *(float *)(secondary_context + 0xc0)) * interpolation_result;
      *(float *)(primary_context + 0x7c) = threshold_value;
      *(float *)(primary_context + 0x80) = distance_x;
      *(int32_t *)(primary_context + 0x84) = 0x7f7fffff;
      if (0.0 < data_accumulator) {
        func_0x00018030a230(buffer_ptr, data_accumulator, threshold_value, distance_x, distance_y);
      }
      // 同步次上下文缓冲区
      *(uint64_t *)(secondary_context + 0x90) = *(uint64_t *)(secondary_context + 0xd0);
      *(uint64_t *)(secondary_context + 0x98) = *(uint64_t *)(secondary_context + 0xd8);
      *(uint64_t *)(secondary_context + 0xa0) = *(uint64_t *)(secondary_context + 0xe0);
      *(uint64_t *)(secondary_context + 0xa8) = *(uint64_t *)(secondary_context + 0xe8);
      *(uint64_t *)(secondary_context + 0xb0) = *(uint64_t *)(secondary_context + 0xf0);
      *(uint64_t *)(secondary_context + 0xb8) = *(uint64_t *)(secondary_context + 0xf8);
      *(uint64_t *)(secondary_context + 0xc0) = *(uint64_t *)(secondary_context + 0x100);
      *(uint64_t *)(secondary_context + 200) = *(uint64_t *)(secondary_context + 0x108);
    }
  }
  else {
    // 直接更新模式
    temp_var1 = transform_data[1];
    *(uint64_t *)(primary_context + 0x90) = *transform_data;
    *(uint64_t *)(primary_context + 0x98) = temp_var1;
    temp_var1 = transform_data[3];
    *(uint64_t *)(primary_context + 0xa0) = transform_data[2];
    *(uint64_t *)(primary_context + 0xa8) = temp_var1;
    temp_var1 = transform_data[5];
    *(uint64_t *)(primary_context + 0xb0) = transform_data[4];
    *(uint64_t *)(primary_context + 0xb8) = temp_var1;
    temp_var1 = transform_data[7];
    *(uint64_t *)(primary_context + 0xc0) = transform_data[6];
    *(uint64_t *)(primary_context + 200) = temp_var1;
    temp_var1 = transform_data[1];
    *(uint64_t *)(primary_context + 0xd0) = *transform_data;
    *(uint64_t *)(primary_context + 0xd8) = temp_var1;
    temp_var1 = transform_data[3];
    *(uint64_t *)(primary_context + 0xe0) = transform_data[2];
    *(uint64_t *)(primary_context + 0xe8) = temp_var1;
    temp_var1 = transform_data[5];
    *(uint64_t *)(primary_context + 0xf0) = transform_data[4];
    *(uint64_t *)(primary_context + 0xf8) = temp_var1;
    temp_var1 = transform_data[7];
    *(uint64_t *)(primary_context + 0x100) = transform_data[6];
    *(uint64_t *)(primary_context + 0x108) = temp_var1;
    *(int32_t *)(primary_context + 0x114) = 0;
    *(float *)(primary_context + 0x124) = threshold_value;
    *(float *)(primary_context + 0x128) = threshold_value;
    *(int32_t *)(primary_context + 0x118) = 1;
  }
  // 更新次上下文变换数据
  temp_var1 = transform_data[1];
  *(uint64_t *)(secondary_context + 0x28) = *transform_data;
  *(uint64_t *)(secondary_context + 0x30) = temp_var1;
  temp_var1 = transform_data[3];
  *(uint64_t *)(secondary_context + 0x38) = transform_data[2];
  *(uint64_t *)(secondary_context + 0x40) = temp_var1;
  temp_var1 = transform_data[5];
  *(uint64_t *)(secondary_context + 0x48) = transform_data[4];
  *(uint64_t *)(secondary_context + 0x50) = temp_var1;
  temp_var1 = transform_data[7];
  *(uint64_t *)(secondary_context + 0x58) = transform_data[6];
  *(uint64_t *)(secondary_context + 0x60) = temp_var1;
  return;
}

/**
 * 渲染系统高级变换处理器 - 处理高级变换和插值计算
 * 
 * 参数:
 * - param_1: 渲染上下文指针
 * - param_2: 浮点参数，用于变换计算
 * - param_3: 8字节指针数组，包含变换数据
 * - param_4: 浮点参数，缩放因子
 * 
 * 功能说明:
 * - 执行高级变换计算和插值
 * - 处理距离阈值和变换矩阵
 * - 在多个缓冲区之间同步变换数据
 * - 实现平滑的变换过渡效果
 */
void render_system_advanced_transform_processor(longlong render_context, float transform_param, uint64_t *transform_data, float scale_factor)
{
  float distance_squared_x;
  float distance_squared_y;
  float distance_squared_z;
  uint64_t temp_var5;
  longlong context_register;
  float xmm0_param;
  float xmm2_param;
  float interpolation_result;
  float xmm4_param;
  float xmm5_param;
  float interpolation_factor;
  float threshold_value;
  float unaff_xmm8_param;
  float temp_stack_value;
  int32_t temp_stack_value2;
  
  // 检查距离阈值
  if (50.0 < SQRT(xmm2_param + transform_param + xmm0_param) * scale_factor) {
    // 更新变换缓冲区
    temp_var5 = transform_data[1];
    *(uint64_t *)(render_context + 0xd0) = *transform_data;
    *(uint64_t *)(render_context + 0xd8) = temp_var5;
    temp_var5 = transform_data[3];
    *(uint64_t *)(render_context + 0xe0) = transform_data[2];
    *(uint64_t *)(render_context + 0xe8) = temp_var5;
    temp_var5 = transform_data[5];
    *(uint64_t *)(render_context + 0xf0) = transform_data[4];
    *(uint64_t *)(render_context + 0xf8) = temp_var5;
    temp_var5 = transform_data[7];
    *(uint64_t *)(render_context + 0x100) = transform_data[6];
    *(uint64_t *)(render_context + 0x108) = temp_var5;
    // 复制到工作缓冲区
    temp_var5 = transform_data[1];
    *(uint64_t *)(render_context + 0x90) = *transform_data;
    *(uint64_t *)(render_context + 0x98) = temp_var5;
    temp_var5 = transform_data[3];
    *(uint64_t *)(render_context + 0xa0) = transform_data[2];
    *(uint64_t *)(render_context + 0xa8) = temp_var5;
    temp_var5 = transform_data[5];
    *(uint64_t *)(render_context + 0xb0) = transform_data[4];
    *(uint64_t *)(render_context + 0xb8) = temp_var5;
    temp_var5 = transform_data[7];
    *(uint64_t *)(render_context + 0xc0) = transform_data[6];
    *(uint64_t *)(render_context + 200) = temp_var5;
  }
  // 计算处理数量和插值
  *(int *)(render_context + 0x118) = (int)(xmm5_param * xmm4_param);
  threshold_value = (float)(int)(xmm5_param * xmm4_param) * unaff_xmm8_param;
  interpolation_result = threshold_value / xmm5_param;
  *(float *)(render_context + 0x114) = xmm5_param - threshold_value;
  temp_var5 = transform_data[1];
  *(uint64_t *)(render_context + 0xd0) = *transform_data;
  *(uint64_t *)(render_context + 0xd8) = temp_var5;
  temp_var5 = transform_data[3];
  *(uint64_t *)(render_context + 0xe0) = transform_data[2];
  *(uint64_t *)(render_context + 0xe8) = temp_var5;
  temp_var5 = transform_data[5];
  *(uint64_t *)(render_context + 0xf0) = transform_data[4];
  *(uint64_t *)(render_context + 0xf8) = temp_var5;
  distance_squared_x = *(float *)(render_context + 0xc4);
  distance_squared_y = *(float *)(transform_data + 7);
  distance_squared_z = *(float *)((longlong)transform_data + 0x34);
  distance_squared_z = *(float *)(transform_data + 6);
  *(float *)(render_context + 0x124) = unaff_xmm8_param;
  *(float *)(render_context + 0x128) = unaff_xmm8_param;
  temp_stack_value = (distance_squared_y - *(float *)(render_context + 200)) * interpolation_result + *(float *)(render_context + 200);
  interpolation_factor = (distance_squared_z - *(float *)(render_context + 0xc0)) * interpolation_result + *(float *)(render_context + 0xc0);
  temp_var5 = *(uint64_t *)(render_context + 0x80);
  threshold_value = *(float *)(context_register + 0x8c) / threshold_value;
  *(uint64_t *)(context_register + 0x68) = *(uint64_t *)(render_context + 0x78);
  *(uint64_t *)(context_register + 0x70) = temp_var5;
  *(float *)(context_register + 0x100) = interpolation_factor;
  *(float *)(context_register + 0x104) = (distance_squared_z - distance_squared_x) * interpolation_result + distance_squared_x;
  *(float *)(context_register + 0x108) = temp_stack_value;
  *(int32_t *)(context_register + 0x10c) = 0x7f7fffff;
  distance_squared_x = *(float *)(context_register + 0x104);
  distance_squared_y = *(float *)(context_register + 0xc4);
  distance_squared_z = *(float *)(context_register + 0x108);
  distance_squared_z = *(float *)(context_register + 200);
  temp_stack_value2 = 0x7f7fffff;
  interpolation_result = *(float *)(context_register + 0x88);
  *(float *)(render_context + 0x78) = (interpolation_factor - *(float *)(context_register + 0xc0)) * threshold_value;
  *(float *)(render_context + 0x7c) = (distance_squared_x - distance_squared_y) * threshold_value;
  *(float *)(render_context + 0x80) = (distance_squared_z - distance_squared_z) * threshold_value;
  *(int32_t *)(render_context + 0x84) = 0x7f7fffff;
  if (0.0 < interpolation_result) {
    func_0x00018030a230();
  }
  // 同步上下文缓冲区
  *(uint64_t *)(context_register + 0x90) = *(uint64_t *)(context_register + 0xd0);
  *(uint64_t *)(context_register + 0x98) = *(uint64_t *)(context_register + 0xd8);
  *(uint64_t *)(context_register + 0xa0) = *(uint64_t *)(context_register + 0xe0);
  *(uint64_t *)(context_register + 0xa8) = *(uint64_t *)(context_register + 0xe8);
  *(uint64_t *)(context_register + 0xb0) = *(uint64_t *)(context_register + 0xf0);
  *(uint64_t *)(context_register + 0xb8) = *(uint64_t *)(context_register + 0xf8);
  *(uint64_t *)(context_register + 0xc0) = *(uint64_t *)(context_register + 0x100);
  *(uint64_t *)(context_register + 200) = *(uint64_t *)(context_register + 0x108);
  // 更新基础变换数据
  temp_var5 = transform_data[1];
  *(uint64_t *)(context_register + 0x28) = *transform_data;
  *(uint64_t *)(context_register + 0x30) = temp_var5;
  temp_var5 = transform_data[3];
  *(uint64_t *)(context_register + 0x38) = transform_data[2];
  *(uint64_t *)(context_register + 0x40) = temp_var5;
  temp_var5 = transform_data[5];
  *(uint64_t *)(context_register + 0x48) = transform_data[4];
  *(uint64_t *)(context_register + 0x50) = temp_var5;
  temp_var5 = transform_data[7];
  *(uint64_t *)(context_register + 0x58) = transform_data[6];
  *(uint64_t *)(context_register + 0x60) = temp_var5;
  return;
}

/**
 * 渲染系统资源同步器 - 同步渲染资源数据
 * 
 * 参数:
 * - param_1: 未定义8字节参数，资源标识符
 * - param_2: 长整型参数，渲染上下文指针
 * - param_3: 8字节指针数组，包含资源数据
 * 
 * 功能说明:
 * - 同步渲染资源数据到指定上下文
 * - 管理资源状态和缓冲区更新
 * - 确保数据一致性
 */
void render_system_resource_synchronizer(uint64_t resource_id, longlong render_context, uint64_t *resource_data)
{
  uint64_t temp_var1;
  
  // 调用渲染系统更新函数
  func_0x00018030a230();
  // 同步资源数据缓冲区
  *(uint64_t *)(render_context + 0x90) = *(uint64_t *)(render_context + 0xd0);
  *(uint64_t *)(render_context + 0x98) = *(uint64_t *)(render_context + 0xd8);
  *(uint64_t *)(render_context + 0xa0) = *(uint64_t *)(render_context + 0xe0);
  *(uint64_t *)(render_context + 0xa8) = *(uint64_t *)(render_context + 0xe8);
  *(uint64_t *)(render_context + 0xb0) = *(uint64_t *)(render_context + 0xf0);
  *(uint64_t *)(render_context + 0xb8) = *(uint64_t *)(render_context + 0xf8);
  *(uint64_t *)(render_context + 0xc0) = *(uint64_t *)(render_context + 0x100);
  *(uint64_t *)(render_context + 200) = *(uint64_t *)(render_context + 0x108);
  // 更新资源数据
  temp_var1 = resource_data[1];
  *(uint64_t *)(render_context + 0x28) = *resource_data;
  *(uint64_t *)(render_context + 0x30) = temp_var1;
  temp_var1 = resource_data[3];
  *(uint64_t *)(render_context + 0x38) = resource_data[2];
  *(uint64_t *)(render_context + 0x40) = temp_var1;
  temp_var1 = resource_data[5];
  *(uint64_t *)(render_context + 0x48) = resource_data[4];
  *(uint64_t *)(render_context + 0x50) = temp_var1;
  temp_var1 = resource_data[7];
  *(uint64_t *)(render_context + 0x58) = resource_data[6];
  *(uint64_t *)(render_context + 0x60) = temp_var1;
  return;
}

/**
 * 渲染系统资源数据更新器 - 更新渲染资源数据
 * 
 * 参数:
 * - param_1: 未定义8字节参数，资源标识符
 * - param_2: 长整型参数，渲染上下文指针
 * - param_3: 8字节指针数组，包含资源数据
 * 
 * 功能说明:
 * - 更新渲染资源数据到指定上下文
 * - 处理资源数据的复制和同步
 * - 维护资源状态的一致性
 */
void render_system_resource_data_updater(uint64_t resource_id, longlong render_context, uint64_t *resource_data)
{
  uint64_t temp_var1;
  
  // 更新资源数据
  temp_var1 = resource_data[1];
  *(uint64_t *)(render_context + 0x28) = *resource_data;
  *(uint64_t *)(render_context + 0x30) = temp_var1;
  temp_var1 = resource_data[3];
  *(uint64_t *)(render_context + 0x38) = resource_data[2];
  *(uint64_t *)(render_context + 0x40) = temp_var1;
  temp_var1 = resource_data[5];
  *(uint64_t *)(render_context + 0x48) = resource_data[4];
  *(uint64_t *)(render_context + 0x50) = temp_var1;
  temp_var1 = resource_data[7];
  *(uint64_t *)(render_context + 0x58) = resource_data[6];
  *(uint64_t *)(render_context + 0x60) = temp_var1;
  return;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统高级资源管理器 - 管理渲染资源的生命周期
 * 
 * 参数:
 * - param_1: 8字节指针数组，资源管理器上下文
 * - param_2: 无符号长整型参数，资源标志
 * - param_3: 未定义8字节参数，资源配置
 * - param_4: 未定义8字节参数，资源选项
 * 
 * 返回值:
 * - uint64_t*: 资源管理器上下文指针
 * 
 * 功能说明:
 * - 初始化和配置资源管理器
 * - 管理资源的生命周期和状态
 * - 处理资源的分配和释放
 * - 维护资源状态的一致性
 */
uint64_t * render_system_advanced_resource_manager(uint64_t *resource_context, ulonglong resource_flags, uint64_t resource_config, uint64_t resource_options)
{
  longlong lock_handle;
  longlong resource_table;
  longlong lock_address;
  int resource_indices [2];
  uint64_t *temp_stack_ptr;
  uint64_t temp_var4;
  longlong resource_ptr;
  
  temp_var4 = 0xfffffffffffffffe;
  *resource_context = &unknown_var_4072_ptr;
  resource_table = render_system_data_texture;
  resource_indices[0] = *(int *)(resource_context + 2);
  resource_ptr = (longlong)resource_indices[0];
  lock_address = render_system_data_texture + 0x2b8;
  lock_handle = lock_address;
  // 获取独占锁
  AcquireSRWLockExclusive(lock_address);
  *(int8_t *)(resource_table + 1) = 1;
  *(int8_t *)(*(longlong *)(resource_table + 0x180) + resource_ptr * 0x30) = 0;
  // 调用资源管理函数
  FUN_1800571e0(resource_table + 0xe0, resource_indices, resource_config, resource_options, temp_var4, lock_handle, 1);
  *(int32_t *)(resource_context + 2) = 0xffffffff;
  // 释放独占锁
  ReleaseSRWLockExclusive(lock_address);
  if ((longlong *)resource_context[0x30] != (longlong *)0x0) {
    // 调用资源清理回调
    (**(code **)(*(longlong *)resource_context[0x30] + 0x38))();
  }
  // 设置资源上下文状态
  resource_context[0x1c] = &unknown_var_720_ptr;
  resource_context[7] = &unknown_var_720_ptr;
  temp_stack_ptr = resource_context + 3;
  FUN_1800f89b0();
  *resource_context = &unknown_var_3696_ptr;
  *resource_context = &unknown_var_3552_ptr;
  // 根据标志释放资源
  if ((resource_flags & 1) != 0) {
    free(resource_context, 0x188);
  }
  return resource_context;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统内存分配器 - 管理渲染系统的内存分配
 * 
 * 参数:
 * - param_1: 整型指针，内存管理器上下文
 * - param_2: 整型指针，分配结果存储位置
 * - param_3: 整型参数，分配大小
 * 
 * 返回值:
 * - int*: 分配结果指针
 * 
 * 功能说明:
 * - 管理渲染系统的内存分配
 * - 处理内存块的分配和释放
 * - 维护内存池的状态
 * - 实现线程安全的内存管理
 */
int * render_system_memory_allocator(int *memory_context, int *allocation_result, int allocation_size)
{
  uint requested_size;
  longlong *block_ptr;
  longlong *next_block;
  longlong block_size;
  int available_size;
  int total_size;
  uint64_t *new_block;
  uint block_capacity;
  uint64_t temp_var9;
  
  temp_var9 = 0xfffffffffffffffe;
  block_capacity = allocation_size + 0xffU & 0xffffff00;
  total_size = _Mtx_lock(memory_context + 6);
  if (total_size != 0) {
    __Throw_C_error_std__YAXH_Z(total_size);
  }
  while( true ) {
    block_ptr = *(longlong **)(memory_context + 2);
    for (next_block = block_ptr; next_block != (longlong *)0x0; next_block = (longlong *)*next_block) {
      requested_size = *(uint *)(next_block + 2);
      if ((int)block_capacity <= (int)requested_size) {
        available_size = *(int *)((longlong)next_block + 0x14);
        if (requested_size == block_capacity) {
          // 精确匹配，直接使用该块
          if (next_block == block_ptr) {
            *(longlong *)(memory_context + 2) = *block_ptr;
          }
          if (next_block == *(longlong **)(memory_context + 4)) {
            *(longlong *)(memory_context + 4) = (*(longlong **)(memory_context + 4))[1];
          }
          if ((longlong *)next_block[1] != (longlong *)0x0) {
            *(longlong *)next_block[1] = *next_block;
          }
          if (*next_block != 0) {
            *(longlong *)(*next_block + 8) = next_block[1];
          }
          // 释放匹配的块
          FUN_18064e900(next_block);
        }
        *(uint *)((longlong)next_block + 0x14) = available_size + block_capacity;
        *(uint *)(next_block + 2) = requested_size - block_capacity;
        *allocation_result = available_size;
        allocation_result[1] = block_capacity;
        goto LAB_18030a42d;
      }
    }
    if ((char)memory_context[1] == '\0') break;
    total_size = *memory_context;
    available_size = total_size * 2;
    block_size = *(longlong *)(memory_context + 4);
    if ((block_size == 0) || (*(int *)(block_size + 0x14) + *(int *)(block_size + 0x10) != total_size)) {
      // 创建新的内存块
      new_block = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x18, 8, CONCAT71((uint7)(uint3)((uint)total_size >> 8), 3), temp_var9);
      *new_block = 0;
      new_block[1] = 0;
      *(int32_t *)(new_block + 2) = 0;
      *(int32_t *)((longlong)new_block + 0x14) = 0xffffffff;
      *(int *)((longlong)new_block + 0x14) = *memory_context;
      *(int *)(new_block + 2) = available_size - *memory_context;
      new_block[1] = *(uint64_t *)(memory_context + 4);
      if (*(uint64_t **)(memory_context + 4) != (uint64_t *)0x0) {
        **(uint64_t **)(memory_context + 4) = new_block;
      }
      if ((*(longlong *)(memory_context + 2) == 0) && (*(longlong *)(memory_context + 4) == 0)) {
        *(uint64_t **)(memory_context + 2) = new_block;
      }
      *(uint64_t **)(memory_context + 4) = new_block;
      *memory_context = available_size;
    }
    else {
      // 扩展现有内存块
      *(int *)(block_size + 0x10) = (*(int *)(block_size + 0x10) - total_size) + available_size;
      *memory_context = available_size;
    }
  }
  allocation_result[0] = -1;
  allocation_result[1] = -1;
LAB_18030a42d:
  total_size = _Mtx_unlock(memory_context + 6);
  if (total_size != 0) {
    __Throw_C_error_std__YAXH_Z(total_size);
  }
  return allocation_result;
}

// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 渲染系统内存块管理器 - 管理内存块的分配和释放
 * 
 * 参数:
 * - param_1: 长整型参数，内存管理器上下文
 * - param_2: 未定义8字节参数，内存块大小
 * 
 * 功能说明:
 * - 管理内存块的分配和释放
 * - 处理内存块的合并和分割
 * - 维护内存池的完整性
 * - 实现高效的内存管理策略
 */
void render_system_memory_block_manager(longlong memory_context, uint64_t block_size)
{
  int mutex_result;
  int block_index;
  longlong *current_block;
  longlong last_block;
  longlong *next_block;
  int block_count;
  uint64_t *new_block;
  int stack_size;
  uint64_t temp_var8;
  
  temp_var8 = 0xfffffffffffffffe;
  mutex_result = _Mtx_lock(memory_context + 0x18);
  if (mutex_result != 0) {
    __Throw_C_error_std__YAXH_Z(mutex_result);
  }
  current_block = *(longlong **)(memory_context + 8);
  mutex_result = (int)block_size;
  stack_size = (int)((ulonglong)block_size >> 0x20);
  do {
    if (current_block == (longlong *)0x0) {
      last_block = *(longlong *)(memory_context + 0x10);
      if (last_block == 0) {
        // 创建新的内存块
        new_block = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x18, 8, 3, temp_var8);
        *(int *)((longlong)new_block + 0x14) = mutex_result;
        *(int *)(new_block + 2) = stack_size;
        *new_block = 0;
        new_block[1] = 0;
        *(uint64_t **)(memory_context + 0x10) = new_block;
LAB_18030a65e:
        *(uint64_t **)(memory_context + 8) = new_block;
      }
      else if (*(int *)(last_block + 0x14) + *(int *)(last_block + 0x10) == mutex_result) {
        // 扩展现有块
        *(int *)(last_block + 0x10) = stack_size + *(int *)(last_block + 0x10);
      }
      else {
        // 创建新的块并链接
        new_block = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x18, 8, 3, temp_var8);
        new_block[1] = 0;
        *(int *)((longlong)new_block + 0x14) = mutex_result;
        *(int *)(new_block + 2) = stack_size;
        *new_block = 0;
        new_block[1] = *(uint64_t *)(memory_context + 0x10);
        **(uint64_t **)(memory_context + 0x10) = new_block;
        *(uint64_t **)(memory_context + 0x10) = new_block;
      }
LAB_18030a662:
      mutex_result = _Mtx_unlock(memory_context + 0x18);
      if (mutex_result != 0) {
        __Throw_C_error_std__YAXH_Z(mutex_result);
      }
      return;
    }
    block_index = *(int *)((longlong)current_block + 0x14);
    if (mutex_result < block_index) {
      next_block = (longlong *)current_block[1];
      if (next_block == (longlong *)0x0) {
        if (stack_size + mutex_result != block_index) {
          // 创建新的块
          new_block = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x18, 8, 3, temp_var8);
          *(int *)((longlong)new_block + 0x14) = mutex_result;
          *(int *)(new_block + 2) = stack_size;
          *new_block = current_block;
          new_block[1] = 0;
          current_block[1] = (longlong)new_block;
          goto LAB_18030a65e;
        }
        // 调整当前块大小
        *(int *)((longlong)current_block + 0x14) = block_index - stack_size;
        *(int *)(current_block + 2) = (int)current_block[2] + stack_size;
      }
      else {
        block_count = (int)next_block[2];
        if (*(int *)((longlong)next_block + 0x14) + block_count == mutex_result) {
          if (stack_size + mutex_result == block_index) {
            // 合并块
            if (current_block == *(longlong **)(memory_context + 0x10)) {
              *(longlong **)(memory_context + 0x10) = next_block;
              block_count = (int)next_block[2];
            }
            *(int *)(next_block + 2) = (int)current_block[2] + block_count + stack_size;
            last_block = *current_block;
            *next_block = last_block;
            if (last_block != 0) {
              *(longlong **)(last_block + 8) = next_block;
            }
            // 释放当前块
            FUN_18064e900(current_block);
          }
          *(int *)(next_block + 2) = block_count + stack_size;
        }
        else if (stack_size + mutex_result == block_index) {
          // 调整当前块大小
          *(int *)((longlong)current_block + 0x14) = block_index - stack_size;
          *(int *)(current_block + 2) = (int)current_block[2] + stack_size;
        }
        else {
          // 在块之间插入新块
          new_block = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr, 0x18, 8, 3, temp_var8);
          *(int *)((longlong)new_block + 0x14) = mutex_result;
          *(int *)(new_block + 2) = stack_size;
          *new_block = current_block;
          new_block[1] = next_block;
          *next_block = (longlong)new_block;
          current_block[1] = (longlong)new_block;
        }
      }
      goto LAB_18030a662;
    }
    current_block = (longlong *)*current_block;
  } while( true );
}

/**
 * 渲染系统资源数据初始化器 - 初始化资源数据结构
 * 
 * 参数:
 * - param_1: 未定义8字节参数，资源标识符
 * - param_2: 8字节指针数组，资源数据上下文
 * - param_3: 未定义8字节参数，资源配置
 * - param_4: 未定义8字节参数，资源选项
 * 
 * 返回值:
 * - uint64_t*: 资源数据上下文指针
 * 
 * 功能说明:
 * - 初始化资源数据结构
 * - 设置资源数据的初始状态
 * - 配置资源管理参数
 * - 返回初始化完成的资源数据上下文
 */
uint64_t * render_system_resource_data_initializer(uint64_t resource_id, uint64_t *resource_data_context, uint64_t resource_config, uint64_t resource_options)
{
  // 初始化资源数据结构
  *resource_data_context = &unknown_var_720_ptr;
  resource_data_context[1] = 0;
  *(int32_t *)(resource_data_context + 2) = 0;
  *resource_data_context = &unknown_var_3432_ptr;
  resource_data_context[1] = resource_data_context + 3;
  *(int8_t *)(resource_data_context + 3) = 0;
  *(int32_t *)(resource_data_context + 2) = 0x1c;
  // 复制资源数据字符串
  strcpy_s(resource_data_context[1], 0x80, &unknown_var_4304_ptr, resource_options, 0, 0xfffffffffffffffe);
  return resource_data_context;
}

// WARNING: 全局变量起始地址与较小符号重叠