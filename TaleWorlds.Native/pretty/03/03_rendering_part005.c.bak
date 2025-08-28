#include "TaleWorlds.Native.Split.h"

// 03_rendering_part005.c - 2 个函数

// 函数: void FUN_180270d70(longlong param_1,longlong param_2,longlong param_3)
// 处理动画曲线数据，解析曲线属性并处理关键帧
void process_animation_curve_data(longlong animation_context, longlong name_offset, longlong curve_data)

{
  char char_temp1;
  char char_temp2;
  char *string_ptr1;
  ulonglong ulong_counter;
  longlong long_offset;
  void *version_format_ptr;
  uint64_t *node_ptr1;
  char *string_ptr2;
  uint64_t *node_ptr2;
  char *string_ptr3;
  int version_array[2];
  float time_array[2];
  float value_array[2];
  uint64_t stack_guard1;
  int int_stack1;
  float float_stack1;
  uint64_t stack_guard2;
  int int_stack2;
  float float_stack2;
  uint64_t stack_guard3;
  
  // 初始化曲线处理
  initialize_curve_parser(animation_context, curve_data);
  stack_guard1 = 0xfffffffffffffffe;
  *(uint64_t *)(animation_context + 0x18) = *(uint64_t *)(animation_context + 0x10);
  
  // 查找"curve"属性
  string_ptr2 = "curve";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  node_ptr1 = *(uint64_t **)(curve_data + 0x30);
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
    
    // 检查是否为"curve"属性
    if (string_ptr1 == string_ptr3 + -0x180a180f3) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) break;
      long_offset = (longlong)&CURVE_CONSTANT_180a180f4 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_CURVE_SECTION;
      }
    }
    node_ptr1 = (uint64_t *)node_ptr1[0xb];
  } while( true );
  
FOUND_CURVE_SECTION:
  // 查找"name"属性
  string_ptr2 = "name";
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
    
    // 检查是否为"name"属性
    if (string_ptr1 == string_ptr3 + -0x180a03a83) {
      string_ptr1 = string_ptr2 + (longlong)string_ptr1;
      if (string_ptr1 <= string_ptr2) {
      FOUND_NAME_VALUE:
        string_ptr2 = (char *)0x180d48d24;
        if ((char *)node_ptr2[1] != (char *)0x0) {
          string_ptr2 = (char *)node_ptr2[1];
        }
        long_offset = name_offset - (longlong)string_ptr2;
        goto COMPARE_NAMES;
      }
      long_offset = (longlong)&NAME_CONSTANT_180a03a84 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_NAME_VALUE;
      }
    }
  }
  goto NAME_MISMATCH;
  
  while (string_ptr2 = string_ptr2 + 1, char_temp2 != '\0') {
  COMPARE_NAMES:
    char_temp1 = *string_ptr2;
    char_temp2 = string_ptr2[long_offset];
    if (char_temp1 != char_temp2) break;
  }
  
  if (char_temp1 != char_temp2) {
  NAME_MISMATCH:
    // 重新查找"curve"属性
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
      long_offset = (longlong)&CURVE_CONSTANT_180a180f4 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_CURVE_SECTION;
      }
    }
    goto FOUND_CURVE_SECTION;
  }
  
  // 初始化版本数组
  version_array[0] = 0;
  
  // 查找"version"属性
  string_ptr2 = "version";
  do {
    string_ptr3 = string_ptr2;
    string_ptr2 = string_ptr3 + 1;
  } while (*string_ptr2 != '\0');
  
  node_ptr2 = (uint64_t *)node_ptr1[8];
  do {
    if (node_ptr2 == (uint64_t *)0x0) goto PROCESS_DEFAULT_SECTION;
    string_ptr2 = (char *)*node_ptr2;
    if (string_ptr2 == (char *)0x0) {
      string_ptr1 = (char *)0x0;
      string_ptr2 = (char *)0x180d48d24;
    }
    else {
      string_ptr1 = (char *)node_ptr2[2];
    }
    
    // 检查是否为"version"属性
    if (string_ptr1 == string_ptr3 + -0x180a015af) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
      FOUND_VERSION_VALUE:
        string_ptr2 = (char *)0x180d48d24;
        if ((char *)node_ptr2[1] != (char *)0x0) {
          string_ptr2 = (char *)node_ptr2[1];
        }
        ulong_counter = 0xffffffffffffffff;
        do {
          ulong_counter = ulong_counter + 1;
        } while (string_ptr2[ulong_counter] != '\0');
        
        // 验证版本格式
        if (((ulong_counter < 3) || (*string_ptr2 != '0')) ||
           (version_format_ptr = &VERSION_FORMAT_180a3cb84, (string_ptr2[1] + 0xa8U & 0xdf) != 0)) {
          version_format_ptr = &VERSION_FORMAT_180a063a0;
        }
        parse_version_string(string_ptr2, version_format_ptr, version_array);
        break;
      }
      long_offset = (longlong)&VERSION_CONSTANT_180a015b0 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_VERSION_VALUE;
      }
    }
    node_ptr2 = (uint64_t *)node_ptr2[6];
  } while( true );
  
PROCESS_DEFAULT_SECTION:
  // 查找"default"属性
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
    
    // 检查是否为"default"属性
    if (string_ptr1 == string_ptr3 + -0x180a0b1bf) {
      string_ptr1 = string_ptr2 + (longlong)string_ptr1;
      if (string_ptr1 <= string_ptr2) {
      FOUND_DEFAULT_VALUE:
        long_offset = 0x180d48d24;
        if (node_ptr2[1] != 0) {
          long_offset = node_ptr2[1];
        }
        goto PROCESS_DEFAULT_VALUE;
      }
      long_offset = (longlong)&DEFAULT_CONSTANT_180a0b1c0 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_DEFAULT_VALUE;
      }
    }
  }
  long_offset = 0;
  
PROCESS_DEFAULT_VALUE:
  // 处理默认值
  if ((animation_context + 0x34 != 0) && (long_offset != 0)) {
    parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, animation_context + 0x34);
  }
  
  // 查找"curve_multiplier"属性
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
    
    // 检查是否为"curve_multiplier"属性
    if (string_ptr1 == string_ptr3 + -0x180a180af) {
      string_ptr1 = string_ptr1 + (longlong)string_ptr2;
      if (string_ptr1 <= string_ptr2) {
      FOUND_MULTIPLIER_VALUE:
        long_offset = 0x180d48d24;
        if (node_ptr2[1] != 0) {
          long_offset = node_ptr2[1];
        }
        goto PROCESS_MULTIPLIER_VALUE;
      }
      long_offset = (longlong)&MULTIPLIER_CONSTANT_180a180b0 - (longlong)string_ptr2;
      while (*string_ptr2 == string_ptr2[long_offset]) {
        string_ptr2 = string_ptr2 + 1;
        if (string_ptr1 <= string_ptr2) goto FOUND_MULTIPLIER_VALUE;
      }
    }
  }
  long_offset = 0;
  
PROCESS_MULTIPLIER_VALUE:
  // 处理曲线乘数
  if ((animation_context + 0x30 != 0) && (long_offset != 0)) {
    parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, animation_context + 0x30);
  }
  
  // 查找"keys"属性
  string_ptr2 = "keys";
  if (version_array[0] != 1) {
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
      
      // 检查是否为"keys"属性
      if (string_ptr1 == string_ptr3 + -0x180a180c3) {
        string_ptr1 = string_ptr2 + (longlong)string_ptr1;
        if (string_ptr1 <= string_ptr2) {
        PROCESS_KEYS_SECTION:
          // 处理关键帧数据
          string_ptr2 = "key";
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
            
            // 检查是否为"key"属性
            if (string_ptr1 == string_ptr3 + -0x180a18107) {
              string_ptr1 = string_ptr1 + (longlong)string_ptr2;
              if (string_ptr1 <= string_ptr2) {
              PROCESS_SINGLE_KEY:
                // 处理单个关键帧
                string_ptr2 = "time";
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
                  
                  // 检查是否为"time"属性
                  if (string_ptr1 == string_ptr3 + -0x180a1810b) {
                    string_ptr1 = string_ptr1 + (longlong)string_ptr2;
                    if (string_ptr1 <= string_ptr2) {
                    FOUND_TIME_VALUE:
                      long_offset = 0x180d48d24;
                      if (node_ptr2[1] != 0) {
                        long_offset = node_ptr2[1];
                      }
                      parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, time_array);
                      break;
                    }
                    long_offset = (longlong)&TIME_CONSTANT_180a1810c - (longlong)string_ptr2;
                    while (*string_ptr2 == string_ptr2[long_offset]) {
                      string_ptr2 = string_ptr2 + 1;
                      if (string_ptr1 <= string_ptr2) goto FOUND_TIME_VALUE;
                    }
                  }
                }
                
                // 查找"value"属性
                string_ptr2 = "value";
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
                  
                  // 检查是否为"value"属性
                  if (string_ptr1 == string_ptr3 + -0x180a0696b) {
                    string_ptr1 = string_ptr1 + (longlong)string_ptr2;
                    if (string_ptr1 <= string_ptr2) {
                    FOUND_VALUE_DATA:
                      long_offset = 0x180d48d24;
                      if (node_ptr2[1] != 0) {
                        long_offset = node_ptr2[1];
                      }
                      parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, value_array);
                      break;
                    }
                    long_offset = (longlong)&VALUE_CONSTANT_180a0696c - (longlong)string_ptr2;
                    while (*string_ptr2 == string_ptr2[long_offset]) {
                      string_ptr2 = string_ptr2 + 1;
                      if (string_ptr1 <= string_ptr2) goto FOUND_VALUE_DATA;
                    }
                  }
                }
                
                // 处理关键帧数据
                process_keyframe_data(node_ptr1, &KEYFRAME_HANDLER_180a18100, &stack0x00000008);
                (**(code **)(*(longlong *)(animation_context + 8) + 8))
                          ((longlong *)(animation_context + 8), (int)time_array[0], value_array[0], 0, 0);
                
                // 继续处理下一个关键帧
                string_ptr2 = "key";
                do {
                  string_ptr3 = string_ptr2;
                  string_ptr2 = string_ptr3 + 1;
                } while (*string_ptr2 != '\0');
                
                node_ptr1 = (uint64_t *)node_ptr1[0xb];
                if (node_ptr1 == (uint64_t *)0x0) {
                  return;
                }
                
                do {
                  string_ptr2 = (char *)*node_ptr1;
                  if (string_ptr2 == (char *)0x0) {
                    string_ptr1 = (char *)0x0;
                    string_ptr2 = (char *)0x180d48d24;
                  }
                  else {
                    string_ptr1 = (char *)node_ptr1[2];
                  }
                  if (string_ptr1 == string_ptr3 + -0x180a18107) {
                    string_ptr1 = string_ptr1 + (longlong)string_ptr2;
                    if (string_ptr1 <= string_ptr2) goto PROCESS_SINGLE_KEY;
                    long_offset = (longlong)&KEY_CONSTANT_180a18108 - (longlong)string_ptr2;
                    while (*string_ptr2 == string_ptr2[long_offset]) {
                      string_ptr2 = string_ptr2 + 1;
                      if (string_ptr1 <= string_ptr2) goto PROCESS_SINGLE_KEY;
                    }
                  }
                  node_ptr1 = (uint64_t *)node_ptr1[0xb];
                  if (node_ptr1 == (uint64_t *)0x0) {
                    return;
                  }
                } while( true );
              }
              long_offset = (longlong)&KEY_CONSTANT_180a18108 - (longlong)string_ptr2;
              while (*string_ptr2 == string_ptr2[long_offset]) {
                string_ptr2 = string_ptr2 + 1;
                if (string_ptr1 <= string_ptr2) goto PROCESS_SINGLE_KEY;
              }
            }
            node_ptr1 = (uint64_t *)node_ptr1[0xb];
          } while( true );
        }
        long_offset = (longlong)&KEYS_CONSTANT_180a180c4 - (longlong)string_ptr2;
        while (*string_ptr2 == string_ptr2[long_offset]) {
          string_ptr2 = string_ptr2 + 1;
          if (string_ptr1 <= string_ptr2) goto PROCESS_KEYS_SECTION;
        }
      }
      node_ptr1 = (uint64_t *)node_ptr1[0xb];
    } while( true );
  }
  
  // 处理旧版本的关键帧格式
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
    
    // 检查是否为"keys"属性
    if (string_ptr1 == string_ptr3 + -0x180a180c3) {
      string_ptr1 = string_ptr2 + (longlong)string_ptr1;
      if (string_ptr1 <= string_ptr2) {
      PROCESS_LEGACY_KEYS:
        // 处理旧版本的关键帧
        string_ptr2 = "key";
        do {
          string_ptr3 = string_ptr2;
          string_ptr2 = string_ptr3 + 1;
        } while (*string_ptr2 != '\0');
        
        for (node_ptr1 = (uint64_t *)node_ptr1[6]; node_ptr1 != (uint64_t *)0x0;
            node_ptr1 = (uint64_t *)node_ptr1[0xb]) {
          string_ptr2 = (char *)*node_ptr1;
          if (string_ptr2 == (char *)0x0) {
            string_ptr1 = (char *)0x0;
            string_ptr2 = (char *)0x180d48d24;
          }
          else {
            string_ptr1 = (char *)node_ptr1[2];
          }
          
          // 检查是否为"key"属性
          if (string_ptr1 == string_ptr3 + -0x180a18107) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) goto PROCESS_LEGACY_KEY;
            long_offset = (longlong)&KEY_CONSTANT_180a18108 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto PROCESS_LEGACY_KEY;
            }
          }
        }
        node_ptr1 = (uint64_t *)0x0;
        
      PROCESS_LEGACY_KEY:
        // 处理旧版本的关键帧数据
        string_ptr2 = "time";
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
          
          // 检查是否为"time"属性
          if (string_ptr1 == string_ptr3 + -0x180a1810b) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
            FOUND_LEGACY_TIME:
              long_offset = 0x180d48d24;
              if (node_ptr2[1] != 0) {
                long_offset = node_ptr2[1];
              }
              parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, time_array);
              break;
            }
            long_offset = (longlong)&TIME_CONSTANT_180a1810c - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto FOUND_LEGACY_TIME;
            }
          }
        }
        
        // 查找"value"属性
        string_ptr2 = "value";
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
          
          // 检查是否为"value"属性
          if (string_ptr1 == string_ptr3 + -0x180a0696b) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
            FOUND_LEGACY_VALUE:
              long_offset = 0x180d48d24;
              if (node_ptr2[1] != 0) {
                long_offset = node_ptr2[1];
              }
              parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, value_array);
              break;
            }
            long_offset = (longlong)&VALUE_CONSTANT_180a0696c - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto FOUND_LEGACY_VALUE;
            }
          }
        }
        
        // 处理旧版本关键帧数据
        process_keyframe_data(node_ptr1, &KEYFRAME_HANDLER_180a18100, &stack0x00000008);
        int_stack1 = (int)(time_array[0] * 29.0);
        float_stack1 = value_array[0];
        stack_guard2 = 0;
        
        // 查找下一个关键帧
        string_ptr2 = "key";
        do {
          string_ptr3 = string_ptr2;
          string_ptr2 = string_ptr3 + 1;
        } while (*string_ptr2 != '\0');
        
        for (node_ptr1 = (uint64_t *)node_ptr1[0xb]; node_ptr1 != (uint64_t *)0x0;
            node_ptr1 = (uint64_t *)node_ptr1[0xb]) {
          string_ptr2 = (char *)*node_ptr1;
          if (string_ptr2 == (char *)0x0) {
            string_ptr1 = (char *)0x0;
            string_ptr2 = (char *)0x180d48d24;
          }
          else {
            string_ptr1 = (char *)node_ptr1[2];
          }
          if (string_ptr1 == string_ptr3 + -0x180a18107) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) goto PROCESS_SECOND_LEGACY_KEY;
            long_offset = (longlong)&KEY_CONSTANT_180a18108 - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto PROCESS_SECOND_LEGACY_KEY;
            }
          }
        }
        node_ptr1 = (uint64_t *)0x0;
        
      PROCESS_SECOND_LEGACY_KEY:
        // 处理第二个关键帧
        string_ptr2 = "time";
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
          
          // 检查是否为"time"属性
          if (string_ptr1 == string_ptr3 + -0x180a1810b) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
            FOUND_SECOND_LEGACY_TIME:
              long_offset = 0x180d48d24;
              if (node_ptr2[1] != 0) {
                long_offset = node_ptr2[1];
              }
              parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, time_array);
              break;
            }
            long_offset = (longlong)&TIME_CONSTANT_180a1810c - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto FOUND_SECOND_LEGACY_TIME;
            }
          }
        }
        
        // 查找第二个关键帧的"value"属性
        string_ptr2 = "value";
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
          
          // 检查是否为"value"属性
          if (string_ptr1 == string_ptr3 + -0x180a0696b) {
            string_ptr1 = string_ptr1 + (longlong)string_ptr2;
            if (string_ptr1 <= string_ptr2) {
            FOUND_SECOND_LEGACY_VALUE:
              long_offset = 0x180d48d24;
              if (node_ptr2[1] != 0) {
                long_offset = node_ptr2[1];
              }
              parse_numeric_value(long_offset, &NUMERIC_PARSER_180a06430, value_array);
              break;
            }
            long_offset = (longlong)&VALUE_CONSTANT_180a0696c - (longlong)string_ptr2;
            while (*string_ptr2 == string_ptr2[long_offset]) {
              string_ptr2 = string_ptr2 + 1;
              if (string_ptr1 <= string_ptr2) goto FOUND_SECOND_LEGACY_VALUE;
            }
          }
        }
        
        // 处理第二个关键帧数据
        process_keyframe_data(node_ptr1, &KEYFRAME_HANDLER_180a18100, &stack0x00000008);
        int_stack2 = (int)(time_array[0] * 29.0);
        float_stack2 = value_array[0];
        stack_guard3 = 0;
        
        // 添加关键帧到动画曲线
        add_keyframe_to_curve(animation_context + 0x10, &int_stack1);
        
        // 继续处理剩余的关键帧
        string_ptr2 = "key";
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
          } while (string_ptr1 != string_ptr3 + -0x180a18107);
          
          string_ptr1 = string_ptr1 + (longlong)string_ptr2;
          if (string_ptr1 <= string_ptr2) break;
          long_offset = (longlong)&KEY_CONSTANT_180a18108 - (longlong)string_ptr2;
          while (*string_ptr2 == string_ptr2[long_offset]) {
            string_ptr2 = string_ptr2 + 1;
            if (string_ptr1 <= string_ptr2) goto PROCESS_LEGACY_KEY;
          }
        }
      } while( true );
    }
    long_offset = (longlong)&KEYS_CONSTANT_180a180c4 - (longlong)string_ptr2;
    while (*string_ptr2 == string_ptr2[long_offset]) {
      string_ptr2 = string_ptr2 + 1;
      if (string_ptr1 <= string_ptr2) goto PROCESS_LEGACY_KEYS;
    }
  }
  node_ptr1 = (uint64_t *)node_ptr1[0xb];
} while( true );
}



// 函数: uint64_t * FUN_180270dd0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
// 清理动画曲线资源，释放内存
uint64_t * 
cleanup_animation_curve(uint64_t *curve_context, ulonglong cleanup_flags, uint64_t reserved1, uint64_t reserved2)

{
  uint64_t cleanup_marker;
  
  cleanup_marker = 0xfffffffffffffffe;
  cleanup_curve_resources(curve_context + 1);
  *curve_context = &ANIMATION_CURVE_VTABLE_1809ffa18;
  
  if ((cleanup_flags & 1) != 0) {
    free(curve_context, 0x1c68, reserved1, reserved2, cleanup_marker);
  }
  
  return curve_context;
}