#include "TaleWorlds.Native.Split.h"

// 03_rendering_part005.c - 渲染系统曲线和动画处理模块
// 本文件包含曲线数据处理、动画关键帧管理和内存分配功能

/**
 * 处理动画曲线数据的函数
 * 解析和处理动画曲线的关键帧数据，包括时间、值和曲线类型
 * 
 * @param animation_context 动画上下文指针
 * @param name_offset 名称偏移量
 * @param curve_data 曲线数据指针
 */
void process_animation_curve_data(longlong animation_context, longlong name_offset, longlong curve_data)
{
  char char_temp1;
  char char_temp2;
  char *string_ptr1;
  ulonglong length_counter;
  longlong offset_value;
  void *data_ptr1;
  uint64_t *node_ptr1;
  char *string_ptr2;
  uint64_t *node_ptr2;
  char *string_ptr3;
  int version_info[2];
  float time_values[2];
  float value_pairs[2];
  uint64_t curve_flags;
  int keyframe_time;
  float keyframe_value;
  uint64_t keyframe_flags;
  int keyframe_time2;
  float keyframe_value2;
  uint64_t keyframe_flags2;
  
  // 初始化曲线处理
  initialize_curve_processor(animation_context, curve_data);
  curve_flags = 0xfffffffffffffffe;
  
  // 复制曲线引用
  *(uint64_t *)(animation_context + 0x18) = *(uint64_t *)(animation_context + 0x10);
  
  // 查找曲线类型标识符
  string_ptr2 = "curve";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  // 遍历曲线数据节点
  node_ptr1 = *(uint64_t **)(curve_data + 0x30);
  do {
    if (node_ptr1 == (uint64_t *)0x0) {
      return;
    }
    
    string_ptr2 = (char *)*node_ptr1;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;  // 默认字符串常量
    }
    else {
      string_ptr1 = (char *)node_ptr1[2];
    }
    
    // 检查是否为曲线类型
    if (string_ptr1 == string_ptr3 + -0x180a180f3) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) break;
      
      offset_value = (longlong)&CURVE_TYPE_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto MATCH_FOUND_CURVE;
      }
    }
    node_ptr1 = (uint64_t *)node_ptr1[0xb];
  } while( true );
  
MATCH_FOUND_CURVE:
  // 查找曲线名称
  string_ptr2 = "name";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  // 在曲线属性中查找名称
  for (node_ptr2 = (uint64_t *)node_ptr1[8]; node_ptr2 != (uint64_t *)0x0;
      node_ptr2 = (uint64_t *)node_ptr2[6]) {
    string_ptr2 = (char *)*node_ptr2;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)node_ptr2[2];
    }
    
    // 检查名称属性
    if (string_ptr1 == string_ptr3 + -0x180a03a83) {
      string_ptr1 = string_ptr2 + (longlong)string_ptr1;
      if (string_ptr1 <= string_ptr2) {
        // 获取名称值
        string_ptr2 = (char *)0x180d48d24;
        if ((char *)node_ptr2[1] != (char *)0x0) {
          string_ptr2 = (char *)node_ptr2[1];
        }
        offset_value = name_offset - (longlong)string_ptr2;
        goto PROCESS_NAME_OFFSET;
      }
      
      offset_value = (longlong)&NAME_STRING_CONSTANT - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto GET_NAME_VALUE;
      }
    }
  }
  goto HANDLE_CURVE_DATA;
  
  while (string_ptr2 = string_ptr2 + 1, char_temp2 != '\0') {
PROCESS_NAME_OFFSET:
    char_temp1 = *string_ptr2;
    char_temp2 = string_ptr2[offset_value];
    if (char_temp1 != char_temp2) break;
  }
  
  if (char_temp1 != char_temp2) {
HANDLE_CURVE_DATA:
    // 重新查找曲线数据
    string_ptr2 = "curve";
    do {
      string_ptr3 = string_ptr2;
      string_ptr2 = string_ptr3 + 1;
    } while (*string_ptr2 != '\0');
    
    while( true ) {
      do {
        node_ptr1 = (uint64_t *)node_ptr1[0xb];
        if (node_ptr1 == (uint64_t *)0x0) {
          return;
        }
        string_ptr2 = (char *)*node_ptr1;
        if (string_ptr2 == (char *)0x0) {
          string_ptr1 = (char *)0x0;
          string_ptr2 = (char *)0x180d48d24;
        }
        else {
          string_ptr1 = (char *)node_ptr1[2];
        }
      } while (string_ptr1 != string_ptr3 + -0x180a180f3);
      
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) break;
      
      offset_value = (longlong)&CURVE_TYPE_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto MATCH_FOUND_CURVE;
      }
    }
    goto MATCH_FOUND_CURVE;
  }
  
  // 处理版本信息
  version_info[0] = 0;
  string_ptr2 = "version";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  node_ptr2 = (uint64_t *)node_ptr1[8];
  do {
    if (node_ptr2 == (uint64_t *)0x0) goto PROCESS_DEFAULT_VALUE;
    
    string_ptr2 = (char *)*node_ptr2;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)node_ptr2[2];
    }
    
    // 检查版本属性
    if (string_ptr1 == string_ptr3 + -0x180a015af) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
        // 获取版本字符串
        string_ptr2 = (char *)0x180d48d24;
        if ((char *)node_ptr2[1] != (char *)0x0) {
          string_ptr2 = (char *)node_ptr2[1];
        }
        
        // 计算字符串长度
        length_counter = 0xffffffffffffffff;
        do {
          length_counter = length_counter + 1;
        } while (string_ptr2[length_counter] != '\0');
        
        // 验证版本格式（检查是否为"0.x"格式）
        if (((length_counter < 3) || (*string_ptr2 != '0')) ||
           (data_ptr1 = &VERSION_FORMAT_STRING, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
          data_ptr1 = &DEFAULT_VERSION_STRING;
        }
        
        // 解析版本信息
        parse_version_string(string_ptr2, data_ptr1, version_info);
      }
    }
    node_ptr2 = (uint64_t *)node_ptr2[6];
  } while( true );
  
PROCESS_DEFAULT_VALUE:
  // 处理默认值
  string_ptr2 = "default";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  for (node_ptr2 = (uint64_t *)node_ptr1[8]; node_ptr2 != (uint64_t *)0x0;
      node_ptr2 = (uint64_t *)node_ptr2[6]) {
    string_ptr2 = (char *)*node_ptr2;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)node_ptr2[2];
    }
    
    // 检查默认值属性
    if (string_ptr1 == string_ptr3 + -0x180a0b1bf) {
      string_ptr1 = string_ptr2 + (longlong)string_ptr1;
      if (string_ptr1 <= string_ptr2) {
        // 获取默认值
        offset_value = 0x180d48d24;
        if (node_ptr2[1] != 0) {
          offset_value = node_ptr2[1];
        }
        goto PROCESS_DEFAULT_VALUE_OFFSET;
      }
      
      offset_value = (longlong)&DEFAULT_VALUE_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto GET_DEFAULT_VALUE;
      }
    }
  }
  
  offset_value = 0;
  
PROCESS_DEFAULT_VALUE_OFFSET:
  // 应用默认值到动画上下文
  if ((animation_context + 0x34 != 0) && (offset_value != 0)) {
    parse_animation_value(offset_value, &VALUE_PARSER_TABLE, animation_context + 0x34);
  }
  
  // 处理曲线乘数
  string_ptr2 = "curve_multiplier";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  for (node_ptr2 = (uint64_t *)node_ptr1[8]; node_ptr2 != (uint64_t *)0x0;
      node_ptr2 = (uint64_t *)node_ptr2[6]) {
    string_ptr2 = (char *)*node_ptr2;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)node_ptr2[2];
    }
    
    // 检查曲线乘数属性
    if (string_ptr1 == string_ptr3 + -0x180a180af) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
        // 获取曲线乘数值
        offset_value = 0x180d48d24;
        if (node_ptr2[1] != 0) {
          offset_value = node_ptr2[1];
        }
        goto PROCESS_CURVE_MULTIPLIER;
      }
      
      offset_value = (longlong)&CURVE_MULTIPLIER_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto GET_CURVE_MULTIPLIER;
      }
    }
  }
  
  offset_value = 0;
  
PROCESS_CURVE_MULTIPLIER:
  // 应用曲线乘数到动画上下文
  if ((animation_context + 0x30 != 0) && (offset_value != 0)) {
    parse_animation_value(offset_value, &VALUE_PARSER_TABLE, animation_context + 0x30);
  }
  
  // 处理关键帧数据
  string_ptr2 = "keys";
  if (version_info[0] != 1) {
    do {
      string_ptr3 = string_ptr2;
      string_ptr2 = string_ptr3 + 1;
    } while (*string_ptr2 != '\0');
    
    node_ptr1 = (uint64_t *)node_ptr1[6];
    do {
      if (node_ptr1 == (uint64_t *)0x0) {
        return;
      }
      
      string_ptr2 = (char *)*node_ptr1;
      if (string_ptr2 == (char *)0x0) {
        string_ptr1 = (char *)0x0;
        string_ptr2 = (char *)0x180d48d24;
      }
      else {
        string_ptr1 = (char *)node_ptr1[2];
      }
      
      // 检查关键帧属性
      if (string_ptr1 == string_ptr3 + -0x180a180c3) {
        string_ptr1 = string_ptr2 + (longlong)string_ptr1;
        if (string_ptr1 <= string_ptr2) {
          // 处理单个关键帧
          process_single_keyframe(node_ptr1, animation_context);
        }
      }
      node_ptr1 = (uint64_t *)node_ptr1[0xb];
    } while( true );
  }
  
  // 处理关键帧数组
  process_keyframe_array(node_ptr1, animation_context);
}

/**
 * 处理单个关键帧的辅助函数
 * 解析关键帧的时间、值和插值类型
 * 
 * @param keyframe_node 关键帧节点指针
 * @param animation_context 动画上下文指针
 */
static void process_single_keyframe(uint64_t *keyframe_node, longlong animation_context)
{
  char *string_ptr1;
  char *string_ptr2;
  char *string_ptr3;
  longlong offset_value;
  uint64_t *sub_node_ptr;
  float time_values[2];
  float value_pairs[2];
  int keyframe_time;
  float keyframe_value;
  uint64_t keyframe_flags;
  
  // 获取关键帧时间
  string_ptr2 = "time";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  for (sub_node_ptr = (uint64_t *)keyframe_node[8]; sub_node_ptr != (uint64_t *)0x0;
      sub_node_ptr = (uint64_t *)sub_node_ptr[6]) {
    string_ptr2 = (char *)*sub_node_ptr;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)sub_node_ptr[2];
    }
    
    // 检查时间属性
    if (string_ptr1 == string_ptr3 + -0x180a1810b) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
        // 获取时间值
        offset_value = 0x180d48d24;
        if (sub_node_ptr[1] != 0) {
          offset_value = sub_node_ptr[1];
        }
        parse_animation_value(offset_value, &VALUE_PARSER_TABLE, time_values);
        break;
      }
      
      offset_value = (longlong)&TIME_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto GET_TIME_VALUE;
      }
    }
  }
  
  // 获取关键帧值
  string_ptr2 = "value";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  for (sub_node_ptr = (uint64_t *)keyframe_node[8]; sub_node_ptr != (uint64_t *)0x0;
      sub_node_ptr = (uint64_t *)sub_node_ptr[6]) {
    string_ptr2 = (char *)*sub_node_ptr;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)sub_node_ptr[2];
    }
    
    // 检查值属性
    if (string_ptr1 == string_ptr3 + -0x180a0696b) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
        // 获取关键帧值
        offset_value = 0x180d48d24;
        if (sub_node_ptr[1] != 0) {
          offset_value = sub_node_ptr[1];
        }
        parse_animation_value(offset_value, &VALUE_PARSER_TABLE, value_pairs);
        break;
      }
      
      offset_value = (longlong)&VALUE_STRING - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[offset_value]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto GET_VALUE_VALUE;
      }
    }
  }
  
  // 处理关键帧数据
  process_keyframe_data(keyframe_node, &KEYFRAME_HANDLER, &stack0x00000008);
  
  // 调用关键帧处理回调
  (**(code **)(*(longlong *)(animation_context + 8) + 8))
            ((longlong *)(animation_context + 8), (int)time_values[0], value_pairs[0], 0, 0);
}

/**
 * 创建和管理动画数据结构
 * 分配内存并初始化动画数据容器
 * 
 * @param data_container 数据容器指针
 * @param allocation_flags 分配标志
 * @param cleanup_param 清理参数
 * @param debug_param 调试参数
 * @return 初始化后的数据容器指针
 */
uint64_t *
create_animation_data_container(uint64_t *data_container, ulonglong allocation_flags, 
                                uint64_t cleanup_param, uint64_t debug_param)
{
  uint64_t management_flags;
  
  management_flags = 0xfffffffffffffffe;
  
  // 初始化数据容器
  initialize_data_container(data_container + 1);
  
  // 设置容器类型标识
  *data_container = &ANIMATION_CONTAINER_TYPE;
  
  // 根据分配标志决定是否需要清理内存
  if ((allocation_flags & 1) != 0) {
    free(data_container, 0x1c68, cleanup_param, debug_param, management_flags);
  }
  
  return data_container;
}

// 字符串常量定义（原始代码中的引用）
#define CURVE_TYPE_STRING "curve"
#define NAME_STRING_CONSTANT "name"  
#define VERSION_FORMAT_STRING "version_format"
#define DEFAULT_VERSION_STRING "default_version"
#define VALUE_PARSER_TABLE "value_parser_table"
#define DEFAULT_VALUE_STRING "default_value"
#define CURVE_MULTIPLIER_STRING "curve_multiplier"
#define TIME_STRING "time"
#define VALUE_STRING "value"
#define KEYFRAME_HANDLER "keyframe_handler"
#define ANIMATION_CONTAINER_TYPE "animation_container"

// 函数引用声明（原始代码中的函数调用）
void initialize_curve_processor(longlong context, longlong data);
void parse_version_string(char *version_str, void *format_ptr, int *version_info);
void parse_animation_value(longlong value_ptr, void *parser_table, void *output);
void process_keyframe_array(uint64_t *keyframe_array, longlong context);
void process_keyframe_data(uint64_t *keyframe, void *handler, void *stack_data);
void initialize_data_container(uint64_t *container);