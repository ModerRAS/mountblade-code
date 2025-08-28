#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part040_sub002_sub002.c - 渲染系统高级资源管理子模块
// 代码美化完成：渲染系统高级资源管理子模块，包含7个核心函数，涵盖渲染参数计算、数据解析、资源管理、矩阵变换等高级渲染功能

/**
 * 计算渲染参数范围
 * @param param_1 渲染上下文指针
 * @param param_2 起始参数
 * @param param_3 结束参数
 * @param param_4 输出参数数组
 */
void calculate_rendering_parameter_range(uint64_t render_context, int start_param, int end_param, int64_t *output_params)
{
  int64_t calculated_offset;
  int64_t *context_ptr;
  int range_start;
  int range_end;
  int32_t register_value;
  int stack_param;
  
  // 计算参数范围
  range_start = end_param + -1 + start_param;
  if ((range_start < range_start) || (range_start < 0)) {
    range_start = range_start;
  }
  *(int *)(output_params + 1) = range_start;
  range_start = range_start - range_end;
  stack_param = 0;
  calculated_offset = 0;
  
  // 验证参数范围有效性
  if ((((-1 < range_end) && (calculated_offset = 0, -1 < range_start)) &&
      (stack_param = 0, calculated_offset = 0, range_end <= range_start)) &&
     (calculated_offset = 0, range_start <= range_start - range_end))
  {
    calculated_offset = CONCAT44(register_value, range_end) + *output_params;
    stack_param = range_start;
  }
  
  // 设置输出参数
  *context_ptr = calculated_offset;
  *(int32_t *)(context_ptr + 1) = 0;
  *(int *)((int64_t)context_ptr + 0xc) = stack_param;
  return;
}

/**
 * 解析渲染数据块
 * @param param_1 输出数据指针
 * @param param_2 输入数据指针
 * @param param_3 数据类型标识
 * @return 解析后的数据指针
 */
int32_t * parse_rendering_data_block(int32_t *output_data, int64_t *input_data, uint data_type)
{
  int32_t parsed_value;
  int32_t temp_value;
  byte data_byte;
  uint data_length;
  uint64_t data_offset;
  int64_t data_ptr;
  uint index_val;
  int current_pos;
  int max_pos;
  int temp_index;
  uint64_t max_offset;
  uint64_t current_offset;
  int32_t stack_val_1;
  int32_t stack_val_2;
  int stack_index;
  
  data_length = *(uint *)((int64_t)input_data + 0xc);
  max_offset = (uint64_t)data_length;
  data_offset = 0;
  
  // 初始化数据偏移
  if ((int)data_length < 0) {
    data_offset = max_offset;
  }
  *(int *)(input_data + 1) = (int)data_offset;
  
  // 解析数据块
  if ((int)data_offset < (int)data_length) {
    max_offset = (uint64_t)data_length;
    do {
      current_pos = (int)data_offset;
      data_byte = func_0x00018028afe0();
      
      // 处理数据字节
      while (0x1b < data_byte) {
        current_pos = (int)input_data[1];
        temp_index = (int)max_offset;
        max_offset = max_offset & 0xffffffff;
        
        // 检查数据边界
        if ((current_pos < temp_index) && 
            (*(char *)((int64_t)current_pos + *input_data) == '\x1e')) {
          data_length = current_pos + 1;
          data_offset = (uint64_t)data_length;
          
          // 验证数据长度
          if ((temp_index < (int)data_length) || ((int)data_length < 0)) {
            data_offset = max_offset & 0xffffffff;
          }
          current_pos = (int)data_offset;
          *(int *)(input_data + 1) = current_pos;
          
          if (current_pos < temp_index) {
            if (current_pos < temp_index) {
              data_byte = 0;
              while (((current_pos = (int)data_offset, (data_byte & 0xf) != 0xf && 
                      ((data_byte & 0xf0) != 0xf0)) && (current_pos < temp_index))) {
                data_byte = *(byte *)((int64_t)current_pos + *input_data);
                *(uint *)(input_data + 1) = current_pos + 1U;
                data_offset = (uint64_t)(current_pos + 1U);
              }
            }
          }
        }
        else {
          func_0x00018028b140(input_data);
          max_offset = (uint64_t)*(uint *)((int64_t)input_data + 0xc);
          max_offset = (uint64_t)*(uint *)((int64_t)input_data + 0xc);
          data_offset = (uint64_t)*(uint *)(input_data + 1);
        }
        data_byte = func_0x00018028afe0();
      }
      
      data_length = (uint)max_offset;
      current_pos = (int)data_offset;
      if (current_pos < (int)data_length) {
        data_offset = (uint64_t)(current_pos + 1U);
        data_byte = *(byte *)((int64_t)current_pos + *input_data);
        *(uint *)(input_data + 1) = current_pos + 1U;
      }
      else {
        data_byte = 0;
        data_offset = data_offset & 0xffffffff;
      }
      
      index_val = (uint)data_byte;
      if (data_byte == 0xc) {
        temp_index = (int)data_offset;
        if (temp_index < (int)data_length) {
          data_offset = (uint64_t)(temp_index + 1U);
          data_byte = *(byte *)((int64_t)temp_index + *input_data);
          *(uint *)(input_data + 1) = temp_index + 1U;
        }
        else {
          data_byte = 0;
        }
        index_val = data_byte | 0x100;
      }
      
      // 检查数据类型匹配
      if (index_val == data_type) {
        current_pos = current_pos - max_pos;
        stack_val_1 = 0;
        parsed_value = 0;
        stack_val_2 = 0;
        temp_value = 0;
        stack_index = 0;
        temp_index = 0;
        
        // 验证数据范围
        if (((max_pos < 0) || (stack_val_1 = parsed_value, stack_val_2 = temp_value, 
             stack_index = temp_index, current_pos < 0)) ||
            (((int)data_length < max_pos || ((int)(data_length - max_pos) < current_pos)))) {
          goto data_processing_complete;
        }
        
        data_ptr = (int64_t)max_pos + *input_data;
        stack_index = current_pos;
        goto set_output_data;
      }
    } while ((int)data_offset < (int)data_length);
  }
  
  // 初始化输出数据
  stack_val_1 = 0;
  stack_val_2 = 0;
  stack_index = 0;
  
  if (-1 < (int)data_length) {
    data_ptr = *input_data;
    stack_index = 0;
set_output_data:
    stack_val_1 = (int32_t)data_ptr;
    stack_val_2 = (int32_t)((uint64_t)data_ptr >> 0x20);
  }
  
data_processing_complete:
  *output_data = stack_val_1;
  output_data[1] = stack_val_2;
  output_data[2] = 0;
  output_data[3] = stack_index;
  return output_data;
}

/**
 * 处理渲染数据序列
 * @param param_1 输出数据指针
 * @param param_2 输入数据指针
 * @param param_3 数据处理模式
 * @return 处理后的数据指针
 */
int64_t * process_rendering_data_sequence(int64_t *output_data, int64_t *input_data, int process_mode)
{
  int data_length;
  int8_t first_byte;
  int8_t second_byte;
  byte third_byte;
  int fourth_val;
  int64_t data_ptr;
  uint64_t byte_count;
  int fifth_val;
  uint sixth_val;
  int seventh_val;
  uint64_t eighth_val;
  uint ninth_val;
  int stack_index;
  
  data_length = *(int *)((int64_t)input_data + 0xc);
  fourth_val = 0;
  
  if (data_length < 0) {
    fourth_val = data_length;
  }
  *(int *)(input_data + 1) = fourth_val;
  data_ptr = (int64_t)fourth_val;
  
  // 读取前两个字节
  if (data_ptr < data_length) {
    fourth_val = fourth_val + 1;
    first_byte = *(int8_t *)(data_ptr + *input_data);
    data_ptr = data_ptr + 1;
  }
  else {
    first_byte = 0;
  }
  
  if (data_ptr < data_length) {
    fourth_val = fourth_val + 1;
    second_byte = *(int8_t *)(data_ptr + *input_data);
  }
  else {
    second_byte = 0;
  }
  
  // 读取第三个字节
  if (fourth_val < data_length) {
    data_ptr = (int64_t)fourth_val;
    fourth_val = fourth_val + 1;
    byte_count = (uint64_t)*(byte *)(data_ptr + *input_data);
  }
  else {
    byte_count = 0;
  }
  
  fifth_val = (int)byte_count;
  fourth_val = fifth_val * process_mode + fourth_val;
  
  // 验证数据长度
  if ((data_length < fourth_val) || (fourth_val < 0)) {
    fourth_val = data_length;
  }
  
  ninth_val = 0;
  *(int *)(input_data + 1) = fourth_val;
  eighth_val = byte_count;
  
  // 处理数据序列
  if ((char)byte_count != '\0') {
    do {
      if (fourth_val < data_length) {
        data_ptr = (int64_t)fourth_val;
        fourth_val = fourth_val + 1;
        third_byte = *(byte *)(data_ptr + *input_data);
      }
      else {
        third_byte = 0;
      }
      ninth_val = ninth_val << 8 | (uint)third_byte;
      eighth_val = eighth_val - 1;
    } while (eighth_val != 0);
    *(int *)(input_data + 1) = fourth_val;
  }
  
  sixth_val = 0;
  if (fifth_val != 0) {
    do {
      if (fourth_val < data_length) {
        data_ptr = (int64_t)fourth_val;
        fourth_val = fourth_val + 1;
        third_byte = *(byte *)(data_ptr + *input_data);
      }
      else {
        third_byte = 0;
      }
      sixth_val = sixth_val << 8 | (uint)third_byte;
      byte_count = byte_count - 1;
    } while (byte_count != 0);
    *(int *)(input_data + 1) = fourth_val;
  }
  
  stack_index = 0;
  seventh_val = sixth_val - ninth_val;
  fourth_val = ninth_val + 2 + (CONCAT11(first_byte, second_byte) + 1) * fifth_val;
  data_ptr = 0;
  
  // 验证最终数据范围
  if ((((-1 < fourth_val) && (data_ptr = 0, -1 < seventh_val)) && 
       (stack_index = 0, data_ptr = 0, fourth_val <= data_length)) &&
      (data_ptr = 0, seventh_val <= data_length - fourth_val)) {
    data_ptr = (int64_t)fourth_val + *input_data;
    stack_index = seventh_val;
  }
  
  // 设置输出数据
  *output_data = data_ptr;
  *(int32_t *)(output_data + 1) = 0;
  *(int *)((int64_t)output_data + 0xc) = stack_index;
  return output_data;
}

/**
 * 查找渲染数据标识
 * @param param_1 数据基础地址
 * @param param_2 数据偏移量
 * @param param_3 查找的标识字符串
 * @return 找到的数据偏移量
 */
int find_rendering_data_identifier(int64_t base_address, uint data_offset, char *identifier_string)
{
  uint current_offset;
  uint64_t calc_offset;
  int current_index;
  int max_entries;
  
  current_index = 0;
  max_entries = (uint)*(byte *)((uint64_t)data_offset + 4 + base_address) * 0x100 +
               (uint)*(byte *)((uint64_t)data_offset + 5 + base_address);
  
  if (max_entries != 0) {
    do {
      current_offset = current_index * 0x10 + data_offset + 0xc;
      calc_offset = (uint64_t)current_offset;
      
      // 比较标识字符串
      if (((((uint)*(byte *)((uint64_t)current_offset + base_address) == (int)*identifier_string) &&
           ((uint)*(byte *)(calc_offset + 1 + base_address) == (int)identifier_string[1])) &&
          ((uint)*(byte *)(calc_offset + 2 + base_address) == (int)identifier_string[2])) &&
         ((uint)*(byte *)(calc_offset + 3 + base_address) == (int)identifier_string[3])) {
        return (((uint)*(byte *)(calc_offset + 8 + base_address) * 0x100 + 
                (uint)*(byte *)(calc_offset + 9 + base_address)) * 0x100 + 
               (uint)*(byte *)(calc_offset + 10 + base_address)) * 0x100 +
               (uint)*(byte *)(calc_offset + 0xb + base_address);
      }
      current_index = current_index + 1;
    } while (current_index < max_entries);
  }
  return 0;
}

/**
 * 处理渲染资源块
 * @param param_1 输出资源指针
 * @param param_2 输入数据指针
 * @param param_3 资源处理参数
 * @return 处理后的资源指针
 */
int32_t * process_rendering_resource_block(int32_t *output_resource, int64_t *input_data, uint64_t process_params)
{
  int32_t temp_value;
  int index_1;
  int index_2;
  uint64_t *data_ptr;
  int32_t *resource_ptr;
  int64_t resource_offset;
  int64_t calc_offset;
  int temp_array[2];
  uint64_t temp_param_1;
  uint64_t temp_buffer_1;
  uint64_t temp_buffer_2;
  int8_t temp_buffer_3[16];
  
  calc_offset = 0;
  temp_array[0] = 0;
  temp_param_1 = 0;
  
  // 解析资源数据
  data_ptr = (uint64_t *)parse_rendering_data_block(&temp_buffer_1, process_params, 0x12);
  temp_buffer_1 = *data_ptr;
  temp_buffer_2._0_4_ = *(int *)(data_ptr + 1);
  temp_buffer_2._4_4_ = *(int *)((int64_t)data_ptr + 0xc);
  resource_offset = calc_offset;
  
  // 处理资源数据
  do {
    if ((int)temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
    temp_value = func_0x00018028b140(&temp_buffer_1);
    *(int32_t *)((int64_t)&temp_param_1 + resource_offset * 4) = temp_value;
    resource_offset = resource_offset + 1;
  } while (resource_offset < 2);
  
  index_2 = temp_param_1._4_4_;
  if ((temp_param_1._4_4_ != 0) && ((uint)temp_param_1 != 0)) {
    temp_buffer_2._4_4_ = 0;
    temp_buffer_1 = 0;
    
    // 验证资源范围
    if ((-1 < temp_param_1) &&
        (((temp_buffer_1 = 0, -1 < (int)(uint)temp_param_1 &&
          (temp_buffer_2._4_4_ = 0, temp_buffer_1 = 0, temp_param_1._4_4_ <= *(int *)((int64_t)input_data + 0xc))
          ) && (temp_buffer_1 = 0,
               (int)(uint)temp_param_1 <= *(int *)((int64_t)input_data + 0xc) - temp_param_1._4_4_)))) {
      temp_buffer_1 = (int64_t)temp_param_1._4_4_ + *input_data;
      temp_buffer_2._4_4_ = (uint)temp_param_1;
    }
    
    temp_buffer_2 = (uint64_t)temp_buffer_2._4_4_ << 0x20;
    data_ptr = (uint64_t *)parse_rendering_data_block(temp_buffer_3, &temp_buffer_1, 0x13);
    temp_buffer_1 = *data_ptr;
    temp_buffer_2._0_4_ = *(int *)(data_ptr + 1);
    temp_buffer_2._4_4_ = *(int *)((int64_t)data_ptr + 0xc);
    
    do {
      if ((int)temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
      index_1 = func_0x00018028b140(&temp_buffer_1);
      temp_array[resource_offset] = index_1;
      resource_offset = resource_offset + 1;
    } while (resource_offset < 1);
    
    if (temp_array[0] != 0) {
      index_2 = temp_array[0] + index_2;
      if ((*(int *)((int64_t)input_data + 0xc) < index_2) || (index_2 < 0)) {
        index_2 = *(int *)((int64_t)input_data + 0xc);
      }
      *(int *)(input_data + 1) = index_2;
      resource_ptr = (int32_t *)data_parser(temp_buffer_3, input_data);
      temp_buffer_1._0_4_ = *resource_ptr;
      temp_buffer_1._4_4_ = resource_ptr[1];
      temp_buffer_2._0_4_ = resource_ptr[2];
      temp_buffer_2._4_4_ = resource_ptr[3];
      goto set_resource_data;
    }
  }
  
  // 初始化默认资源数据
  temp_buffer_1._0_4_ = 0;
  temp_buffer_1._4_4_ = 0;
  temp_buffer_2._0_4_ = 0;
  temp_buffer_2._4_4_ = 0;
  
set_resource_data:
  *output_resource = (int32_t)temp_buffer_1;
  output_resource[1] = temp_buffer_1._4_4_;
  output_resource[2] = (int)temp_buffer_2;
  output_resource[3] = temp_buffer_2._4_4_;
  return output_resource;
}

/**
 * 初始化渲染资源管理器
 * @param param_1 资源管理器指针
 * @param param_2 资源数据地址
 * @param param_3 资源初始化参数
 * @return 初始化状态
 */
uint64_t initialize_rendering_resource_manager(int64_t resource_manager, int64_t data_address, int32_t init_params)
{
  byte format_byte_1;
  byte format_byte_2;
  uint64_t init_result;
  int8_t temp_buffer[16];
  uint resource_id;
  int offset_1;
  int offset_2;
  int32_t temp_param;
  uint temp_value;
  int64_t *data_ptr;
  uint64_t *resource_ptr;
  uint64_t calc_offset_1;
  uint64_t calc_offset_2;
  int64_t temp_offset;
  int temp_array_1[4];
  int32_t stack_value;
  int temp_array_2[2];
  int temp_array_3[4];
  uint64_t temp_buffer_1;
  uint temp_value_1;
  uint temp_value_2;
  uint64_t temp_buffer_2;
  int32_t temp_buffer_3;
  int32_t temp_buffer_4;
  int64_t temp_address;
  uint64_t temp_buffer_5;
  int8_t temp_buffer_6[24];
  
  // 初始化资源管理器基础结构
  *(int64_t *)(resource_manager + 8) = data_address;
  *(int32_t *)(resource_manager + 0x10) = init_params;
  calc_offset_1 = 0;
  temp_buffer_1._0_4_ = 0;
  temp_buffer_1._4_4_ = 0;
  temp_buffer_3 = 0;
  temp_buffer_4 = 0;
  *(uint64_t *)(resource_manager + 0x40) = 0;
  *(uint64_t *)(resource_manager + 0x48) = 0;
  stack_value = init_params;
  
  // 查找资源标识
  resource_id = find_rendering_data_identifier(data_address, init_params, &processed_var_624_ptr);
  offset_1 = find_rendering_data_identifier(data_address, init_params, &processed_var_648_ptr);
  *(int *)(resource_manager + 0x18) = offset_1;
  offset_2 = find_rendering_data_identifier(data_address, init_params, &processed_var_6872_ptr);
  *(int *)(resource_manager + 0x1c) = offset_2;
  temp_array_1[2] = find_rendering_data_identifier(data_address, init_params, &processed_var_656_ptr);
  *(int *)(resource_manager + 0x20) = temp_array_1[2];
  
  // 继续查找其他资源标识
  temp_array_1[0] = find_rendering_data_identifier(data_address, stack_value, &processed_var_640_ptr);
  *(int *)(resource_manager + 0x28) = temp_array_1[0];
  temp_param = find_rendering_data_identifier(data_address, stack_value, &processed_var_680_ptr);
  *(int32_t *)(resource_manager + 0x2c) = temp_param;
  temp_param = find_rendering_data_identifier(data_address, stack_value, &processed_var_688_ptr);
  *(int32_t *)(resource_manager + 0x30) = temp_param;
  
  // 验证必要资源
  if (resource_id == 0) {
    return 0;
  }
  if (offset_2 == 0) {
    return 0;
  }
  if (temp_array_1[0] == 0) {
    return 0;
  }
  
  if (temp_array_1[2] != 0) {
    if (offset_1 == 0) {
      return 0;
    }
    goto process_resource_data;
  }
  
  // 初始化资源数组
  temp_array_1[2] = 0;
  temp_array_1[0] = 2;
  temp_array_2[0] = 0;
  temp_array_3[0] = 0;
  temp_value = find_rendering_data_identifier(data_address, stack_value, &processed_var_664_ptr);
  
  if (temp_value == 0) {
    return 0;
  }
  
  // 设置资源管理器状态
  *(uint64_t *)(resource_manager + 0x80) = 0;
  *(uint64_t *)(resource_manager + 0x88) = 0;
  temp_buffer_1 = (uint64_t)temp_value + data_address;
  temp_buffer_4 = 0x20000000;
  *(uint64_t *)(resource_manager + 0x90) = 0;
  *(uint64_t *)(resource_manager + 0x98) = 0;
  temp_buffer_3 = 0;
  
  // 初始化资源缓冲区
  temp_buffer[8] = 0;
  temp_buffer[0] = temp_buffer_1;
  temp_buffer[12] = 0;
  temp_buffer[13] = 0x20;
  temp_value_2 = 0x20000000;
  *(int8_t (*) [16])(resource_manager + 0x40) = temp_buffer;
  
  if (*(byte *)(temp_buffer_1 + 2) < 0x20000001) {
    temp_value_2 = (uint)*(byte *)(temp_buffer_1 + 2);
  }
  
  temp_value_1 = temp_value_2;
  temp_buffer_5 = temp_buffer_1;
  temp_value_2 = 0x20000000;
  
  // 处理资源数据
  data_parser(&temp_address, &temp_buffer_5);
  data_ptr = (int64_t *)data_parser(&temp_address, &temp_buffer_5);
  temp_address = *data_ptr;
  temp_buffer_2 = data_ptr[1];
  
  resource_ptr = (uint64_t *)process_rendering_data_sequence(&temp_buffer_1, &temp_address, 0);
  temp_buffer_1._0_4_ = (int32_t)*resource_ptr;
  temp_buffer_1._4_4_ = (int32_t)((uint64_t)*resource_ptr >> 0x20);
  temp_buffer_3 = (int32_t)resource_ptr[1];
  temp_buffer_4 = (int32_t)((uint64_t)resource_ptr[1] >> 0x20);
  
  data_parser(&temp_address, &temp_buffer_5);
  resource_ptr = (uint64_t *)data_parser(&temp_address, &temp_buffer_5);
  init_result = resource_ptr[1];
  *(uint64_t *)(resource_manager + 0x60) = *resource_ptr;
  *(uint64_t *)(resource_manager + 0x68) = init_result;
  
  // 解析资源参数
  data_ptr = (int64_t *)parse_rendering_data_block(&temp_address, &temp_buffer_1, 0x11);
  temp_address = *data_ptr;
  temp_buffer_2 = data_ptr[1];
  calc_offset_2 = calc_offset_1;
  
  do {
    if (temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
    offset_1 = func_0x00018028b140(&temp_address);
    temp_array_1[calc_offset_2 + 2] = offset_1;
    calc_offset_2 = calc_offset_2 + 1;
  } while ((int64_t)calc_offset_2 < 1);
  
  // 继续处理资源数据
  data_ptr = (int64_t *)parse_rendering_data_block(&temp_address, &temp_buffer_1, 0x106);
  temp_address = *data_ptr;
  temp_buffer_2 = data_ptr[1];
  calc_offset_2 = calc_offset_1;
  
  do {
    if (temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
    offset_1 = func_0x00018028b140(&temp_address);
    temp_array_1[calc_offset_2] = offset_1;
    calc_offset_2 = calc_offset_2 + 1;
  } while ((int64_t)calc_offset_2 < 1);
  
  // 处理更多资源数据
  data_ptr = (int64_t *)parse_rendering_data_block(&temp_address, &temp_buffer_1, 0x124);
  temp_address = *data_ptr;
  temp_buffer_2 = data_ptr[1];
  calc_offset_2 = calc_offset_1;
  
  do {
    if (temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
    offset_1 = func_0x00018028b140(&temp_address);
    temp_array_2[calc_offset_2] = offset_1;
    calc_offset_2 = calc_offset_2 + 1;
  } while ((int64_t)calc_offset_2 < 1);
  
  // 处理最终资源数据
  data_ptr = (int64_t *)parse_rendering_data_block(&temp_address, &temp_buffer_1, 0x125);
  temp_address = *data_ptr;
  temp_buffer_2 = data_ptr[1];
  calc_offset_2 = calc_offset_1;
  
  do {
    if (temp_buffer_2._4_4_ <= (int)temp_buffer_2) break;
    offset_1 = func_0x00018028b140(&temp_address);
    temp_array_3[calc_offset_2] = offset_1;
    calc_offset_2 = calc_offset_2 + 1;
  } while ((int64_t)calc_offset_2 < 1);
  
  temp_address = CONCAT44(temp_buffer_1._4_4_, (int32_t)temp_buffer_1);
  temp_buffer_2 = CONCAT44(temp_buffer_4, temp_buffer_3);
  temp_buffer_1._0_4_ = (int32_t)temp_buffer_5;
  temp_buffer_1._4_4_ = temp_buffer_5._4_4_;
  temp_buffer_3 = temp_value_1;
  temp_buffer_4 = temp_value_2;
  
  // 处理资源块
  resource_ptr = (uint64_t *)process_rendering_resource_block(temp_buffer_6, &temp_buffer_1, &temp_address);
  offset_2 = temp_array_3[0];
  offset_1 = temp_array_1[2];
  init_result = resource_ptr[1];
  *(uint64_t *)(resource_manager + 0x70) = *resource_ptr;
  *(uint64_t *)(resource_manager + 0x78) = init_result;
  
  if (temp_array_1[0] != 2) {
    return 0;
  }
  if (temp_array_1[2] == 0) {
    return 0;
  }
  
  temp_value = temp_value_2;
  if (temp_array_2[0] != 0) {
    temp_offset = (int64_t)temp_array_3[0];
    if (temp_array_3[0] == 0) {
      return 0;
    }
    
    if ((int)temp_value_2 < temp_array_2[0]) {
      temp_value_1 = temp_value;
    }
    else {
      temp_value_1 = temp_array_2[0];
      if (temp_array_2[0] < 0) {
        temp_value_1 = temp_value;
      }
    }
    
    // 设置资源管理器地址
    resource_ptr = (uint64_t *)data_parser(temp_buffer_6, &temp_buffer_5);
    init_result = resource_ptr[1];
    *(uint64_t *)(resource_manager + 0x80) = *resource_ptr;
    *(uint64_t *)(resource_manager + 0x88) = init_result;
    
    temp_address = 0;
    temp_buffer_2 = 0;
    if (((-1 < offset_2) && (-1 < (int)(temp_value_2 - offset_2))) && 
        (offset_2 <= (int)temp_value_2)) {
      temp_buffer_2 = (uint64_t)(temp_value_2 - offset_2) << 0x20;
      temp_address = temp_offset + temp_buffer_5;
    }
    
    *(int64_t *)(resource_manager + 0x90) = temp_address;
    *(int64_t *)(resource_manager + 0x98) = temp_buffer_2;
    temp_value = temp_value_2;
  }
  
  // 设置最终资源参数
  if ((int)temp_value < offset_1) {
    temp_value_1 = temp_value;
  }
  else {
    temp_value_1 = offset_1;
    if (offset_1 < 0) {
      temp_value_1 = temp_value;
    }
  }
  
  resource_ptr = (uint64_t *)data_parser(temp_buffer_6, &temp_buffer_5);
  init_result = resource_ptr[1];
  *(uint64_t *)(resource_manager + 0x50) = *resource_ptr;
  *(uint64_t *)(resource_manager + 0x58) = init_result;
  
process_resource_data:
  temp_value = find_rendering_data_identifier(data_address, stack_value, &processed_var_672_ptr);
  if (temp_value == 0) {
    offset_1 = 0xffff;
  }
  else {
    offset_1 = (uint)*(byte *)((uint64_t)temp_value + 4 + data_address) * 0x100 +
               (uint)*(byte *)((uint64_t)temp_value + 5 + data_address);
  }
  *(int *)(resource_manager + 0x14) = offset_1;
  
  // 读取格式信息
  format_byte_1 = *(byte *)((uint64_t)resource_id + 2 + data_address);
  format_byte_2 = *(byte *)((uint64_t)resource_id + 3 + data_address);
  *(int32_t *)(resource_manager + 0x34) = 0;
  offset_1 = (uint)format_byte_1 * 0x100 + (uint)format_byte_2;
  
  if (offset_1 != 0) {
    do {
      temp_value = resource_id + 4 + (int)calc_offset_1 * 8;
      calc_offset_2 = (uint64_t)temp_value;
      offset_2 = (uint)*(byte *)((uint64_t)temp_value + data_address) * 0x100 +
                 (uint)*(byte *)((uint64_t)temp_value + 1 + data_address);
      
      // 检查数据格式
      if ((offset_2 == 0) ||
         ((offset_2 == 3 &&
          ((offset_2 = (uint)*(byte *)(calc_offset_2 + 3 + data_address) +
                      (uint)*(byte *)(calc_offset_2 + 2 + data_address) * 0x100, 
           offset_2 == 1 || (offset_2 == 10))))))
      {
        *(uint *)(resource_manager + 0x34) =
             (uint)*(byte *)(calc_offset_2 + 7 + data_address) +
             ((uint)*(byte *)(calc_offset_2 + 6 + data_address) +
             ((uint)*(byte *)(calc_offset_2 + 5 + data_address) + 
              (uint)*(byte *)(calc_offset_2 + 4 + data_address) * 0x100) * 0x100) * 0x100 + resource_id;
      }
      temp_value = (int)calc_offset_1 + 1;
      calc_offset_1 = (uint64_t)temp_value;
    } while ((int)temp_value < offset_1);
    
    if (*(int *)(resource_manager + 0x34) != 0) {
      *(uint *)(resource_manager + 0x38) =
           (uint)*(byte *)((int64_t)*(int *)(resource_manager + 0x1c) + 0x33 + data_address) +
           (uint)*(byte *)((int64_t)*(int *)(resource_manager + 0x1c) + 0x32 + data_address) * 0x100;
      return 1;
    }
  }
  return 0;
}

/**
 * 获取渲染数据值
 * @param param_1 资源管理器指针
 * @param param_2 数据偏移量
 * @return 渲染数据值
 */
uint get_rendering_data_value(int64_t resource_manager, uint data_offset)
{
  int entry_count;
  int64_t data_address;
  int64_t calc_offset;
  uint data_length;
  ushort format_type;
  int64_t temp_offset;
  int current_pos;
  uint temp_value;
  int search_index;
  short temp_short;
  ushort temp_ushort;
  uint64_t calc_offset_1;
  uint64_t calc_offset_2;
  int64_t found_offset;
  ushort result_ushort;
  
  calc_offset_2 = (uint64_t)*(uint *)(resource_manager + 0x34);
  data_address = *(int64_t *)(resource_manager + 8);
  temp_short = (ushort)*(byte *)(calc_offset_2 + data_address) * 0x100 + 
              (ushort)*(byte *)(calc_offset_2 + 1 + data_address);
  
  if (temp_short == 0) {
    if ((int)data_offset <
        (int)((uint)*(byte *)(calc_offset_2 + 2 + data_address) * 0x100 + 
              (*(byte *)(calc_offset_2 + 3 + data_address) - 6))) {
      return (uint)*(byte *)(calc_offset_2 + (int64_t)(int)data_offset + 6 + data_address);
    }
  }
  else if (temp_short == 6) {
    data_length = (uint)*(byte *)(calc_offset_2 + 6 + data_address) * 0x100 + 
                 (uint)*(byte *)(calc_offset_2 + 7 + data_address);
    
    if ((data_length <= data_offset) &&
       (data_offset < (uint)*(byte *)(calc_offset_2 + 9 + data_address) +
                  (uint)*(byte *)(calc_offset_2 + 8 + data_address) * 0x100 + data_length)) {
      calc_offset = (data_offset - data_length) * 2 + calc_offset_2;
      return (uint)*(byte *)(calc_offset + 0xb + data_address) + 
             (uint)*(byte *)(calc_offset + 10 + data_address) * 0x100;
    }
  }
  else if (temp_short != 2) {
    if (temp_short == 4) {
      result_ushort = (ushort)((ushort)*(byte *)(calc_offset_2 + 6 + data_address) * 0x100 +
                               (ushort)*(byte *)(calc_offset_2 + 7 + data_address)) >> 1;
      data_length = *(uint *)(resource_manager + 0x34) + 0xe;
      temp_ushort = (ushort)((ushort)*(byte *)(calc_offset_2 + 9 + data_address) +
                           (ushort)*(byte *)(calc_offset_2 + 8 + data_address) * 0x100) >> 1;
      temp_short = (ushort)*(byte *)(calc_offset_2 + 0xb + data_address) +
                   (ushort)*(byte *)(calc_offset_2 + 10 + data_address) * 0x100;
      temp_value = (ushort)((ushort)*(byte *)(calc_offset_2 + 0xc + data_address) * 0x100 +
                            (ushort)*(byte *)(calc_offset_2 + 0xd + data_address)) >> 1;
      
      if ((int)data_offset < 0x10000) {
        temp_value = data_length;
        if ((int)((uint)*(byte *)((uint64_t)data_length + data_address + (uint64_t)temp_value * 2) * 0x100 +
                 (uint)*(byte *)((uint64_t)data_length + data_address + 1 + (uint64_t)temp_value * 2)) <=
            (int)data_offset) {
          temp_value = data_length + (uint)temp_value * 2;
        }
        temp_value = temp_value - 2;
        
        for (; temp_short != 0; temp_short = temp_short + -1) {
          temp_ushort = temp_ushort >> 1;
          if ((int)((uint)*(byte *)((uint64_t)temp_value + data_address + (uint64_t)temp_ushort * 2) * 0x100 +
                   (uint)*(byte *)((uint64_t)temp_value + data_address + 1 + (uint64_t)temp_ushort * 2)) <
              (int)data_offset) {
            temp_value = temp_value + (uint)temp_ushort * 2;
          }
        }
        
        calc_offset_1 = (uint64_t)(((temp_value - data_length) + 2 >> 1 & 0xffff) * 2);
        calc_offset = ((uint)result_ushort + (uint)result_ushort * 2) * 2 + calc_offset_1 + calc_offset_2;
        current_pos = (uint)*(byte *)(calc_offset + 0x10 + data_address) * 0x100 +
                      (uint)*(byte *)(calc_offset + 0x11 + data_address);
        
        if (current_pos <= (int)data_offset) {
          data_length = ((uint)result_ushort + (uint)result_ushort * 2) * 2;
          calc_offset = data_length + calc_offset_1 + calc_offset_2;
          temp_ushort = (ushort)*(byte *)(calc_offset + 0x10 + data_address) * 0x100 +
                        (ushort)*(byte *)(calc_offset + 0x11 + data_address);
          
          if (temp_ushort == 0) {
            calc_offset = (uint)result_ushort * 4 + calc_offset_1 + calc_offset_2;
            return (uint)(ushort)((ushort)*(byte *)(calc_offset + 0x10 + data_address) * 0x100 +
                                  (ushort)*(byte *)(calc_offset + 0x11 + data_address) + (short)data_offset);
          }
          
          calc_offset = (uint64_t)temp_ushort + (int64_t)(int)((data_offset - current_pos) * 2) + 
                        (uint64_t)data_length + calc_offset_1 + calc_offset_2;
          return (uint)*(byte *)(calc_offset + 0x11 + data_address) +
                 (uint)*(byte *)(calc_offset + 0x10 + data_address) * 0x100;
        }
      }
    }
    else if ((ushort)(temp_short - 0xcU) < 2) {
      current_pos = 0;
      search_index = (((uint)*(byte *)(calc_offset_2 + 0xd + data_address) +
                       (uint)*(byte *)(calc_offset_2 + 0xc + data_address) * 0x100) * 0x100 +
                      (uint)*(byte *)(calc_offset_2 + 0xe + data_address)) * 0x100 + 
                     (uint)*(byte *)(calc_offset_2 + 0xf + data_address);
      
      if (0 < search_index) {
        calc_offset = calc_offset_2 + data_address;
        found_offset = calc_offset_2 + data_address;
        
        do {
          entry_count = (search_index - current_pos >> 1) + current_pos;
          temp_offset = (int64_t)(entry_count * 0xc);
          data_length = (uint)*(byte *)(temp_offset + 0x11 + calc_offset) * 0x10000 +
                       (uint)*(byte *)(temp_offset + 0x12 + calc_offset) * 0x100 +
                       (uint)*(byte *)(temp_offset + 0x10 + calc_offset) * 0x1000000 +
                       (uint)*(byte *)(temp_offset + 0x13 + calc_offset);
          
          if (data_length <= data_offset) {
            if (data_offset <=
                (uint)*(byte *)(found_offset + 0x15 + temp_offset) * 0x10000 +
                (uint)*(byte *)(found_offset + 0x16 + temp_offset) * 0x100 +
                (uint)*(byte *)(found_offset + 0x14 + temp_offset) * 0x1000000 +
                (uint)*(byte *)(found_offset + 0x17 + temp_offset)) {
              data_address = temp_offset + calc_offset_2 + data_address;
              temp_value = (uint)*(byte *)(data_address + 0x19) * 0x10000 +
                           (uint)*(byte *)(data_address + 0x1a) * 0x100 +
                           (uint)*(byte *)(data_address + 0x18) * 0x1000000 + 
                           (uint)*(byte *)(data_address + 0x1b);
              
              if (temp_short != 0xc) {
                return temp_value;
              }
              return data_offset + (temp_value - data_length);
            }
            current_pos = entry_count + 1;
            entry_count = search_index;
          }
          search_index = entry_count;
        } while (current_pos < search_index);
      }
    }
  }
  return 0;
}

/**
 * 添加渲染顶点数据
 * @param param_1 顶点数据指针
 * @param param_2 顶点索引
 * @param param_3 顶点类型
 * @param param_4 顶点数量
 * @param param_5 X坐标
 * @param param_6 Y坐标
 * @param param_7 Z坐标
 * @param param_8 W坐标
 * @param param_9 U坐标
 * @param param_10 V坐标
 * @return 更新后的顶点索引
 */
int add_rendering_vertex_data(int64_t vertex_data, int vertex_index, int vertex_type, int vertex_count,
                              int16_t coord_x, int16_t coord_y, int coord_z, int coord_w,
                              int coord_u, int coord_v)
{
  int64_t data_offset;
  
  if (vertex_count != 0) {
    if (vertex_type != 0) {
      data_offset = (int64_t)vertex_index * 0xe;
      vertex_index = vertex_index + 1;
      *(short *)(data_offset + vertex_data) = (short)(coord_z + coord_v >> 1);
      *(int8_t *)(data_offset + 0xc + vertex_data) = 3;
      *(int16_t *)(data_offset + 4 + vertex_data) = (int16_t)coord_v;
      *(int16_t *)(data_offset + 6 + vertex_data) = (int16_t)coord_w;
      *(short *)(data_offset + 2 + vertex_data) = (short)(coord_u + coord_w >> 1);
    }
    data_offset = (int64_t)vertex_index * 0xe;
    *(int16_t *)(data_offset + vertex_data) = coord_x;
    *(int16_t *)(data_offset + 2 + vertex_data) = coord_y;
    *(short *)(data_offset + 4 + vertex_data) = (short)coord_z;
    *(int8_t *)(data_offset + 0xc + vertex_data) = 3;
    *(short *)(data_offset + 6 + vertex_data) = (short)coord_u;
    return vertex_index + 1;
  }
  
  data_offset = (int64_t)vertex_index * 0xe;
  *(int16_t *)(data_offset + vertex_data) = coord_x;
  *(int16_t *)(data_offset + 2 + vertex_data) = coord_y;
  
  if (vertex_type != 0) {
    *(int16_t *)(data_offset + 4 + vertex_data) = (int16_t)coord_v;
    *(int16_t *)(data_offset + 6 + vertex_data) = (int16_t)coord_w;
    *(int8_t *)(data_offset + 0xc + vertex_data) = 3;
    return vertex_index + 1;
  }
  
  *(int8_t *)(data_offset + 0xc + vertex_data) = 2;
  *(int32_t *)(data_offset + 4 + vertex_data) = 0;
  return vertex_index + 1;
}

/**
 * 处理渲染顶点批次
 * @param param_1 顶点数据指针
 * @param param_2 批次参数
 * @param param_3 顶点类型
 * @param param_4 顶点数量
 * @param param_5 处理参数
 * @param param_6 X坐标
 * @param param_7 Y坐标
 * @param param_8 Z坐标
 * @param param_9 处理标志
 * @param param_10 U坐标
 * @param param_11 V坐标
 * @return 处理后的顶点索引
 */
int process_rendering_vertex_batch(int64_t vertex_data, uint64_t batch_params, int vertex_type, int vertex_count,
                                   uint64_t process_params, int16_t coord_x, int16_t coord_y,
                                   int coord_z, uint64_t process_flag, int coord_u, int coord_v)
{
  int64_t data_offset;
  uint64_t batch_offset;
  int64_t flag_offset;
  
  if (vertex_type != 0) {
    data_offset = batch_offset * 0xe;
    batch_offset = (uint64_t)((int)batch_offset + 1);
    *(short *)(data_offset + vertex_data) = (short)(coord_z + coord_v >> 1);
    *(int8_t *)(data_offset + 0xc + vertex_data) = 3;
    *(short *)(data_offset + 4 + flag_offset) = (short)coord_v;
    *(short *)(data_offset + 6 + flag_offset) = (short)coord_v;
    *(short *)(data_offset + 2 + flag_offset) = (short)(coord_z + coord_v >> 1);
  }
  
  data_offset = (int64_t)(int)batch_offset * 0xe;
  *(int16_t *)(data_offset + flag_offset) = coord_x;
  *(int16_t *)(data_offset + 2 + flag_offset) = coord_y;
  *(short *)(data_offset + 4 + flag_offset) = (short)coord_z;
  *(int8_t *)(data_offset + 0xc + flag_offset) = 3;
  *(short *)(data_offset + 6 + flag_offset) = (short)coord_u;
  return (int)batch_offset + 1;
}

/**
 * 处理渲染顶点扩展
 * @param param_1 扩展参数
 * @param param_2 顶点数据
 * @param param_3 顶点类型
 * @param param_4 扩展数据
 * @param param_5 处理参数
 * @param param_6 X坐标
 * @param param_7 Y坐标
 * @param param_8 扩展标志
 * @param param_9 扩展数据
 * @param param_10 U坐标
 * @param param_11 V坐标
 * @return 处理后的顶点索引
 */
int process_rendering_vertex_extension(uint64_t ext_params, uint64_t vertex_data, int vertex_type,
                                       uint64_t ext_data, uint64_t process_params, int16_t coord_x,
                                       int16_t coord_y, uint64_t ext_flag, uint64_t ext_data_2,
                                       int16_t coord_u, int16_t coord_v)
{
  int64_t data_offset;
  int64_t ext_offset;
  int64_t flag_offset;
  
  data_offset = ext_offset * 0xe;
  *(int16_t *)(data_offset + flag_offset) = coord_x;
  *(int16_t *)(data_offset + 2 + flag_offset) = coord_y;
  
  if (vertex_type != 0) {
    *(int16_t *)(data_offset + 4 + flag_offset) = coord_u;
    *(int16_t *)(data_offset + 6 + flag_offset) = coord_v;
    *(int8_t *)(data_offset + 0xc + flag_offset) = 3;
    return (int)ext_offset + 1;
  }
  
  *(int8_t *)(data_offset + 0xc + flag_offset) = 2;
  *(int32_t *)(data_offset + 4 + flag_offset) = 0;
  return (int)ext_offset + 1;
}

/**
 * 处理渲染变换矩阵
 * @param param_1 变换矩阵指针
 * @param param_2 矩阵参数
 * @param param_3 输出参数指针
 * @return 处理后的矩阵大小
 */
uint64_t process_rendering_transformation_matrix(int64_t matrix_ptr, uint64_t matrix_params, uint64_t *output_params)
{
  byte *data_ptr_1;
  byte *data_ptr_2;
  byte *data_ptr_3;
  byte *data_ptr_4;
  byte transform_flag;
  short matrix_short;
  int matrix_int;
  int32_t temp_param;
  uint temp_value;
  int current_pos;
  uint64_t matrix_size;
  uint64_t temp_offset_1;
  uint64_t temp_offset_2;
  uint64_t temp_offset_3;
  uint64_t temp_offset_4;
  byte temp_byte;
  short temp_short;
  uint64_t temp_ulong;
  byte *temp_byte_ptr;
  short *short_ptr;
  byte *byte_ptr_2;
  int32_t temp_param_2;
  uint64_t temp_offset_5;
  byte temp_byte_2;
  int32_t temp_param_3;
  uint64_t temp_offset_6;
  uint temp_value_2;
  uint temp_value_3;
  byte *byte_ptr_3;
  int64_t temp_long;
  int16_t temp_ushort;
  int16_t *ushort_ptr;
  uint64_t temp_offset_7;
  int64_t temp_long_2;
  int32_t temp_param_4;
  uint64_t temp_offset_8;
  int64_t temp_long_3;
  int32_t temp_param_5;
  uint temp_value_4;
  uint64_t temp_offset_9;
  float float_val_1;
  float float_val_2;
  float float_val_3;
  float float_val_4;
  float float_val_5;
  float float_val_6;
  int64_t stack_param_1;
  uint stack_value_1;
  uint stack_value_2;
  uint stack_value_3;
  uint stack_value_4;
  uint stack_value_5;
  uint stack_value_6;
  byte *stack_byte_ptr;
  float stack_float_1;
  float stack_float_2;
  float stack_float_3;
  float stack_float_4;
  
  temp_long = *(int64_t *)(matrix_ptr + 8);
  temp_offset_5 = 0;
  matrix_int = func_0x00018028c210();
  *output_params = 0;
  
  if (matrix_int < 0) {
set_matrix_size:
    temp_offset_3 = 0;
  }
  else {
    temp_long_3 = (int64_t)matrix_int;
    temp_short = (ushort)*(byte *)(temp_long_3 + temp_long) * 0x100 + 
                 (ushort)*(byte *)(temp_long_3 + 1 + temp_long);
    temp_param_2 = 0;
    
    if (temp_short < 1) {
      temp_offset_3 = temp_offset_5;
      if (temp_short == -1) {
        temp_byte_ptr = (byte *)(temp_long + 10 + temp_long_3);
        
        while( true ) {
          temp_byte = temp_byte_ptr[1];
          float_val_3 = 0.0;
          byte_ptr_3 = temp_byte_ptr + 2;
          float_val_4 = 0.0;
          data_ptr_1 = temp_byte_ptr + 3;
          byte_ptr_2 = temp_byte_ptr + 4;
          stack_param_1 = 0;
          
          // 处理变换标志
          if ((temp_byte & 2) != 0) {
            if ((temp_byte & 1) == 0) {
              matrix_int = (int)(char)*byte_ptr_2;
              current_pos = (int)(char)temp_byte_ptr[5];
              byte_ptr_2 = temp_byte_ptr + 6;
            }
            else {
              matrix_int = (int)(short)((ushort)temp_byte_ptr[5] + (ushort)*byte_ptr_2 * 0x100);
              current_pos = (int)(short)((ushort)temp_byte_ptr[7] + (ushort)temp_byte_ptr[6] * 0x100);
              byte_ptr_2 = temp_byte_ptr + 8;
            }
            float_val_4 = (float)current_pos;
            float_val_3 = (float)matrix_int;
          }
          
          temp_byte_ptr = byte_ptr_2;
          
          // 处理不同的变换类型
          if ((temp_byte & 8) == 0) {
            if ((temp_byte & 0x40) == 0) {
              if ((char)temp_byte < '\0') {
                byte_ptr_2 = temp_byte_ptr + 4;
                data_ptr_2 = temp_byte_ptr + 5;
                stack_float_1 = (float)(int)(short)((ushort)temp_byte_ptr[1] + (ushort)*temp_byte_ptr * 0x100) *
                            6.1035156e-05;
                data_ptr_3 = temp_byte_ptr + 6;
                data_ptr_4 = temp_byte_ptr + 7;
                stack_float_2 = (float)(int)(short)((ushort)temp_byte_ptr[3] + (ushort)temp_byte_ptr[2] * 0x100) *
                            6.1035156e-05;
                temp_byte_ptr = temp_byte_ptr + 8;
                stack_float_3 = (float)(int)(short)((ushort)*data_ptr_2 + (ushort)*byte_ptr_2 * 0x100) *
                            6.1035156e-05;
                stack_float_4 = (float)(int)(short)((ushort)*data_ptr_4 + (ushort)*data_ptr_3 * 0x100) *
                            6.1035156e-05;
              }
              else {
                stack_float_4 = 1.0;
                stack_float_3 = 0.0;
                stack_float_2 = 0.0;
                stack_float_1 = 1.0;
              }
            }
            else {
              byte_ptr_2 = temp_byte_ptr + 1;
              stack_float_3 = 0.0;
              temp_byte = *temp_byte_ptr;
              stack_float_2 = 0.0;
              data_ptr_2 = temp_byte_ptr + 2;
              data_ptr_3 = temp_byte_ptr + 3;
              temp_byte_ptr = temp_byte_ptr + 4;
              stack_float_1 = (float)(int)(short)((ushort)*byte_ptr_2 + (ushort)temp_byte * 0x100) *
                          6.1035156e-05;
              stack_float_4 = (float)(int)(short)((ushort)*data_ptr_3 + (ushort)*data_ptr_2 * 0x100) *
                          6.1035156e-05;
            }
          }
          else {
            byte_ptr_2 = temp_byte_ptr + 1;
            stack_float_3 = 0.0;
            temp_byte = *temp_byte_ptr;
            stack_float_2 = 0.0;
            temp_byte_ptr = temp_byte_ptr + 2;
            stack_float_1 = (float)(int)(short)((ushort)*byte_ptr_2 + (ushort)temp_byte * 0x100) *
                        6.1035156e-05;
            stack_float_4 = stack_float_1;
          }
          
          // 计算变换矩阵
          float_val_5 = SQRT(stack_float_2 * stack_float_2 + stack_float_1 * stack_float_1);
          float_val_6 = SQRT(stack_float_4 * stack_float_4 + stack_float_3 * stack_float_3);
          
          if (*(int *)(matrix_ptr + 0x4c) == 0) {
            matrix_int = process_rendering_transformation_matrix();
          }
          else {
            matrix_int = matrix_transform_processor(matrix_ptr, (uint)*byte_ptr_3 * 0x100 + (uint)*data_ptr_1, &stack_param_1);
          }
          
          if (0 < matrix_int) break;
          
          if ((temp_byte & 0x20) == 0) {
            *output_params = 0;
            return 0;
          }
        }
        
        temp_long = (int64_t)matrix_int;
        if (3 < temp_long) {
          temp_long_3 = (temp_long - 4U >> 2) + 1;
          temp_offset_3 = temp_long_3 * 4;
          
          do {
            float_val_1 = (float)(int)*(short *)(stack_param_1 + 2 + temp_offset_5);
            temp_short = *(short *)(stack_param_1 + temp_offset_5);
            *(short *)(stack_param_1 + temp_offset_5) =
                 (short)(int)(((float)(int)temp_short * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) *
                             float_val_5);
            *(short *)(stack_param_1 + 2 + temp_offset_5) =
                 (short)(int)(((float)(int)temp_short * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) *
                             float_val_6);
            
            float_val_1 = (float)(int)*(short *)(stack_param_1 + 6 + temp_offset_5);
            float_val_2 = (float)(int)*(short *)(stack_param_1 + 4 + temp_offset_5);
            *(short *)(stack_param_1 + 4 + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(stack_param_1 + 6 + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(stack_param_1 + 0x10 + temp_offset_5);
            float_val_2 = (float)(int)*(short *)(stack_param_1 + 0xe + temp_offset_5);
            *(short *)(stack_param_1 + 0xe + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(stack_param_1 + 0x10 + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(stack_param_1 + 0x14 + temp_offset_5);
            float_val_2 = (float)(int)*(short *)(stack_param_1 + 0x12 + temp_offset_5);
            *(short *)(stack_param_1 + 0x12 + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(stack_param_1 + 0x14 + temp_offset_5) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(temp_offset_5 + 0x1e + stack_param_1);
            float_val_2 = (float)(int)*(short *)(temp_offset_5 + 0x1c + stack_param_1);
            *(short *)(temp_offset_5 + 0x1c + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(temp_offset_5 + 0x1e + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(temp_offset_5 + 0x22 + stack_param_1);
            float_val_2 = (float)(int)*(short *)(temp_offset_5 + 0x20 + stack_param_1);
            *(short *)(temp_offset_5 + 0x20 + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(temp_offset_5 + 0x22 + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(temp_offset_5 + 0x2c + stack_param_1);
            float_val_2 = (float)(int)*(short *)(temp_offset_5 + 0x2a + stack_param_1);
            *(short *)(temp_offset_5 + 0x2a + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(temp_offset_5 + 0x2c + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            float_val_1 = (float)(int)*(short *)(temp_offset_5 + 0x30 + stack_param_1);
            float_val_2 = (float)(int)*(short *)(temp_offset_5 + 0x2e + stack_param_1);
            *(short *)(temp_offset_5 + 0x2e + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(temp_offset_5 + 0x30 + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            temp_offset_5 = temp_offset_5 + 0x38;
            temp_long_3 = temp_long_3 + -1;
          } while (temp_long_3 != 0);
        }
        
        if ((int64_t)temp_offset_3 < temp_long) {
          temp_long_3 = temp_offset_3 * 0xe;
          temp_long_2 = temp_long - temp_offset_3;
          
          do {
            float_val_1 = (float)(int)*(short *)(temp_long_3 + 2 + stack_param_1);
            temp_short = *(short *)(temp_long_3 + stack_param_1);
            *(short *)(temp_long_3 + stack_param_1) =
                 (short)(int)(((float)(int)temp_short * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) *
                             float_val_5);
            *(short *)(temp_long_3 + 2 + stack_param_1) =
                 (short)(int)(((float)(int)temp_short * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) *
                             float_val_6);
            
            float_val_1 = (float)(int)*(short *)(temp_long_3 + 6 + stack_param_1);
            float_val_2 = (float)(int)*(short *)(temp_long_3 + 4 + stack_param_1);
            *(short *)(temp_long_3 + 4 + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_1 + float_val_1 * stack_float_3 + float_val_3) * float_val_5);
            *(short *)(temp_long_3 + 6 + stack_param_1) =
                 (short)(int)((float_val_2 * stack_float_2 + float_val_1 * stack_float_4 + float_val_4) * float_val_6);
            
            temp_long_3 = temp_long_3 + 0xe;
            temp_long_2 = temp_long_2 + -1;
          } while (temp_long_2 != 0);
        }
        
        // 更新统计信息
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
        }
        
        temp_long_3 = func_0x000180120ce0((int64_t)matrix_int * 0xe, SYSTEM_DATA_MANAGER_B);
        if (temp_long_3 != 0) {
          // WARNING: Subroutine does not return
          memcpy(temp_long_3, stack_param_1, temp_long * 0xe);
        }
        
        if (stack_param_1 != 0) {
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
          // WARNING: Subroutine does not return
          memory_deallocator(stack_param_1, SYSTEM_DATA_MANAGER_B);
        }
        goto set_matrix_size;
      }
    }
    else {
      stack_byte_ptr = (byte *)(temp_long + 10 + temp_long_3);
      temp_byte_2 = 0;
      temp_long_2 = (int64_t)(temp_short * 2);
      temp_byte = stack_byte_ptr[temp_long_2 + -2];
      temp_byte = stack_byte_ptr[temp_long_2 + -1];
      temp_byte_ptr = (byte *)(temp_long + 0xc +
                        (uint64_t)*(byte *)(temp_long_2 + temp_long_3 + 0xb + temp_long) +
                        (uint64_t)*(byte *)(temp_long_2 + temp_long_3 + 10 + temp_long) * 0x100 + temp_long_2 +
                        temp_long_3);
      temp_value_3 = temp_byte + 1 + (uint)temp_byte * 0x100;
      temp_offset_3 = (uint64_t)temp_value_3;
      
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + 1;
      }
      
      temp_offset_1 = func_0x000180120ce0((int64_t)(int)(temp_byte + 1 + (uint)temp_byte * 0x100 + temp_short * 2) * 0xe);
      if (temp_offset_1 == 0) goto set_matrix_size;
      
      temp_offset_2 = 0;
      temp_byte = 0;
      temp_param_5 = 0;
      stack_value_4 = 0;
      
      if (temp_offset_3 != 0) {
        byte_ptr_3 = (byte *)(temp_long_2 * 0xe + 0xc + temp_offset_1);
        temp_offset_4 = temp_offset_3;
        
        do {
          if (temp_byte == 0) {
            temp_byte_2 = *temp_byte_ptr;
            if ((temp_byte_2 & 8) != 0) {
              temp_byte = temp_byte_ptr[1];
            }
            temp_byte_ptr = temp_byte_ptr + (uint64_t)((temp_byte_2 & 8) != 0) + 1;
          }
          else {
            temp_byte = temp_byte - 1;
          }
          *byte_ptr_3 = temp_byte_2;
          byte_ptr_3 = byte_ptr_3 + 0xe;
          temp_offset_4 = temp_offset_4 - 1;
        } while (temp_offset_4 != 0);
      }
      
      // 处理顶点数据
      if (temp_offset_3 != 0) {
        ushort_ptr = (int16_t *)(temp_long_2 * 0xe + temp_offset_1);
        temp_offset_4 = temp_offset_2;
        temp_offset_7 = temp_offset_3;
        
        do {
          if ((*(byte *)(ushort_ptr + 6) & 2) == 0) {
            if ((*(byte *)(ushort_ptr + 6) & 0x10) == 0) {
              temp_offset_4 = (uint64_t)
                       (uint)((int)temp_offset_4 +
                             (int)(short)((ushort)*temp_byte_ptr * 0x100 + (ushort)temp_byte_ptr[1]));
              temp_byte_ptr = temp_byte_ptr + 2;
            }
          }
          else {
            temp_byte = *temp_byte_ptr;
            temp_byte_ptr = temp_byte_ptr + 1;
            temp_value = (uint)temp_byte;
            if ((*(byte *)(ushort_ptr + 6) & 0x10) == 0) {
              temp_value = -(uint)temp_byte;
            }
            temp_offset_4 = (uint64_t)((int)temp_offset_4 + temp_value);
          }
          *ushort_ptr = (short)temp_offset_4;
          ushort_ptr = ushort_ptr + 7;
          temp_offset_7 = temp_offset_7 - 1;
        } while (temp_offset_7 != 0);
      }
      
      // 继续处理顶点数据
      if (temp_offset_3 != 0) {
        ushort_ptr = (int16_t *)(temp_offset_1 + 2 + temp_long_2 * 0xe);
        temp_offset_4 = temp_offset_2;
        temp_offset_7 = temp_offset_3;
        
        do {
          if ((*(byte *)(ushort_ptr + 5) & 4) == 0) {
            if ((*(byte *)(ushort_ptr + 5) & 0x20) == 0) {
              temp_offset_4 = (uint64_t)
                       (uint)((int)temp_offset_4 +
                             (int)(short)((ushort)*temp_byte_ptr * 0x100 + (ushort)temp_byte_ptr[1]));
              temp_byte_ptr = temp_byte_ptr + 2;
            }
          }
          else {
            temp_byte = *temp_byte_ptr;
            temp_byte_ptr = temp_byte_ptr + 1;
            temp_value = (uint)temp_byte;
            if ((*(byte *)(ushort_ptr + 5) & 0x20) == 0) {
              temp_value = -(uint)temp_byte;
            }
            temp_offset_4 = (uint64_t)((int)temp_offset_4 + temp_value);
          }
          *ushort_ptr = (short)temp_offset_4;
          ushort_ptr = ushort_ptr + 7;
          temp_offset_7 = temp_offset_7 - 1;
        } while (temp_offset_7 != 0);
      }
      
      // 处理最终的顶点数据
      stack_value_3 = 0;
      stack_value_2 = 0;
      temp_param = 0;
      stack_value_1 = 0;
      stack_value_6 = 0;
      stack_value_5 = 0;
      temp_offset_4 = temp_offset_2;
      temp_offset_7 = temp_offset_5;
      temp_param_4 = temp_param;
      temp_param_3 = temp_param;
      
      if (temp_offset_3 != 0) {
        short_ptr = (short *)(temp_long_2 * 0xe + temp_offset_1);
        temp_offset_3 = temp_offset_2;
        temp_offset_6 = temp_offset_2;
        temp_offset_8 = temp_offset_2;
        temp_offset_9 = temp_offset_2;
        temp_ulong = temp_offset_2;
        
        do {
          matrix_int = (int)temp_offset_4;
          temp_short = *short_ptr;
          temp_value_2 = (uint)temp_short;
          temp_ulong = (uint64_t)temp_value_2;
          temp_byte = *(byte *)(short_ptr + 6);
          matrix_short = short_ptr[1];
          temp_value_3 = (uint)matrix_short;
          stack_param_1 = CONCAT71(stack_param_1._1_7_, temp_byte);
          temp_value = (uint)temp_offset_2;
          
          if (stack_value_4 == temp_value) {
            if (temp_ulong != 0) {
              matrix_int = add_rendering_vertex_data(temp_offset_1, temp_offset_4, temp_offset_5, temp_offset_7,
                                                    (int)temp_offset_6, (int)temp_offset_8, stack_value_5,
                                                    stack_value_3, (int)temp_offset_3, (int)temp_offset_9);
              temp_offset_9 = (uint64_t)stack_value_6;
              temp_offset_3 = (uint64_t)stack_value_2;
              temp_byte = (byte)stack_param_1;
              temp_value = stack_value_1;
            }
            
            temp_offset_7 = (uint64_t)(~(uint)temp_byte & 1);
            if ((~(uint)temp_byte & 1) == 0) {
              temp_offset_8 = (uint64_t)temp_value_3;
            }
            else {
              temp_ulong = (uint64_t)(uint)(int)short_ptr[7];
              temp_offset_8 = (uint64_t)(uint)(int)short_ptr[8];
              stack_value_3 = temp_value_3;
              stack_value_5 = temp_value_2;
              
              if ((*(byte *)(short_ptr + 0xd) & 1) == 0) {
                temp_ulong = (uint64_t)(uint)((int)((int)short_ptr[7] + temp_value_2) >> 1);
                temp_offset_8 = (uint64_t)(uint)((int)((int)short_ptr[8] + temp_value_3) >> 1);
              }
              else {
                stack_value_1 = temp_value + 1;
                temp_ulong = temp_ulong + 1;
                short_ptr = short_ptr + 7;
              }
            }
            
            ushort_ptr = (int16_t *)((int64_t)matrix_int * 0xe + temp_offset_1);
            *(int8_t *)(ushort_ptr + 6) = 1;
            *ushort_ptr = (short)temp_ulong;
            ushort_ptr[1] = (short)temp_offset_8;
            *(int32_t *)(ushort_ptr + 2) = 0;
            stack_value_4 = (uint)*stack_byte_ptr * 0x100 + stack_byte_ptr[1] + 1;
            stack_byte_ptr = stack_byte_ptr + 2;
            temp_offset_6 = temp_ulong;
          }
          else {
            temp_ushort = (int16_t)temp_offset_9;
            current_pos = (int)temp_offset_5;
            
            if ((temp_byte & 1) != 0) {
              temp_long = (int64_t)matrix_int * 0xe;
              if (current_pos == 0) {
                temp_offset_3 = 0;
                temp_ushort = 0;
              }
              *(char *)(temp_long + 0xc + temp_offset_1) = (current_pos != 0) + '\x02';
              *(short *)(temp_long + temp_offset_1) = temp_short;
              *(short *)(temp_long + 2 + temp_offset_1) = matrix_short;
              *(short *)(temp_long + 4 + temp_offset_1) = (short)temp_offset_3;
              temp_offset_3 = (uint64_t)stack_value_2;
              *(int16_t *)(temp_long + 6 + temp_offset_1) = temp_ushort;
              goto next_vertex;
            }
            
            if (current_pos != 0) {
              temp_offset_4 = (uint64_t)(matrix_int + 1);
              ushort_ptr = (int16_t *)((int64_t)matrix_int * 0xe + temp_offset_1);
              *ushort_ptr = (short)((int)((int)temp_offset_3 + temp_value_2) >> 1);
              ushort_ptr[1] = (short)((int)((int)temp_offset_9 + temp_value_3) >> 1);
              *(int8_t *)(ushort_ptr + 6) = 3;
              ushort_ptr[2] = (short)temp_offset_3;
              ushort_ptr[3] = temp_ushort;
              temp_value = stack_value_1;
            }
            
            stack_value_1 = temp_value;
            temp_offset_9 = (uint64_t)temp_value_3;
            temp_offset_5 = 1;
            stack_value_2 = temp_value_2;
            stack_value_6 = temp_value_3;
          }
          
          temp_param_3 = (int32_t)temp_offset_6;
          temp_param_4 = (int32_t)temp_offset_8;
          temp_param_5 = (int32_t)temp_offset_3;
          temp_param = (int32_t)temp_offset_9;
          temp_param_2 = (int32_t)temp_offset_5;
          stack_value_1 = stack_value_1 + 1;
          temp_offset_2 = (uint64_t)stack_value_1;
          temp_ulong = temp_ulong + 1;
          short_ptr = short_ptr + 7;
          temp_offset_3 = temp_offset_3;
        } while ((int64_t)temp_ulong < (int64_t)(uint64_t)temp_value_3);
      }
      
      temp_value_3 = add_rendering_vertex_data(temp_offset_1, temp_offset_4, temp_param_2, temp_offset_7,
                                              temp_param_3, temp_param_4, stack_value_5, stack_value_3,
                                              temp_param_5, temp_param);
      temp_offset_5 = temp_offset_1;
      temp_offset_3 = (uint64_t)temp_value_3;
    }
    *output_params = temp_offset_5;
  }
  return temp_offset_3;
}

// 函数别名定义 - 保持兼容性
#define calculate_rendering_parameter_range FUN_18028b0d2
#define parse_rendering_data_block FUN_18028b2f0
#define process_rendering_data_sequence FUN_18028b4c0
#define find_rendering_data_identifier FUN_18028b630
#define process_rendering_resource_block FUN_18028b820
#define initialize_rendering_resource_manager FUN_18028b960
#define get_rendering_data_value FUN_18028be60
#define add_rendering_vertex_data FUN_18028c2f0
#define process_rendering_vertex_batch FUN_18028c308
#define process_rendering_vertex_extension FUN_18028c387
#define process_rendering_transformation_matrix FUN_18028c3e0

// 新增函数别名定义
#define data_parser FUN_18028b000
#define matrix_transform_processor FUN_18028e390
#define memory_deallocator FUN_180059ba0