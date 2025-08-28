#include "TaleWorlds.Native.Split.h"

// 03_rendering_part004.c - 渲染曲线和动画参数处理函数

// 函数: void process_curve_animation_parameters(longlong animation_context, undefined8 param_2, undefined8 param_3, longlong config_data)
// 处理曲线动画参数，解析动画配置并设置关键帧
void process_curve_animation_parameters(longlong animation_context, undefined8 param_2, undefined8 param_3, longlong config_data)

{
  char curve_match;
  char name_match;
  char *curve_ptr;
  ulonglong str_length;
  longlong offset;
  undefined *temp_ptr;
  undefined8 *node_ptr;
  char *str_ptr;
  undefined8 *attr_ptr;
  char *search_ptr;
  int version_stack[2];
  float time_stack[2];
  float value_stack[2];
  undefined8 curve_flags;
  int key_index;
  float key_time;
  undefined8 time_flags;
  int key_index2;
  float key_time2;
  undefined8 time_flags2;
  
  // 初始化曲线处理
  initialize_curve_processor(animation_context, config_data);
  set_animation_config(animation_context + 8, &curve_config_table, config_data);
  curve_flags = 0xfffffffffffffffe;
  *(undefined8 *)(animation_context + 0x48) = *(undefined8 *)(animation_context + 0x40);
  str_ptr = "curve";
  do {
    search_ptr = str_ptr;
    str_ptr = search_ptr + 1;
  } while (*str_ptr != '\0');
  node_ptr = *(undefined8 **)(config_data + 0x30);
  do {
    if (node_ptr == (undefined8 *)0x0) {
      return;
    }
    str_ptr = (char *)*node_ptr;
    if (str_ptr == (char *)0x0) {
      curve_ptr = (char *)0x0;
      str_ptr = (char *)0x180d48d24;
    }
    else {
      curve_ptr = (char *)node_ptr[2];
    }
    if (curve_ptr == search_ptr + -0x180a180f3) {
      curve_ptr = curve_ptr + (longlong)str_ptr;
      if (curve_ptr <= str_ptr) break;
      offset = (longlong)&curve_keyword_table - (longlong)str_ptr;
      while (*str_ptr == str_ptr[offset]) {
        str_ptr = str_ptr + 1;
        if (curve_ptr <= str_ptr) goto HANDLE_CURVE_FOUND;
      }
    }
    node_ptr = (undefined8 *)node_ptr[0xb];
  } while( true );
HANDLE_CURVE_FOUND:
  str_ptr = "name";
  do {
    search_ptr = str_ptr;
    str_ptr = search_ptr + 1;
  } while (*str_ptr != '\0');
  for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
      attr_ptr = (undefined8 *)attr_ptr[6]) {
    str_ptr = (char *)*attr_ptr;
    if (str_ptr == (char *)0x0) {
      curve_ptr = (char *)0x0;
      str_ptr = (char *)0x180d48d24;
    }
    else {
      curve_ptr = (char *)attr_ptr[2];
    }
    if (curve_ptr == search_ptr + -0x180a03a83) {
      curve_ptr = str_ptr + (longlong)curve_ptr;
      if (curve_ptr <= str_ptr) {
FALLBACK_TO_DEFAULT_NAME:
        str_ptr = (char *)0x180d48d24;
        if ((char *)attr_ptr[1] != (char *)0x0) {
          str_ptr = (char *)attr_ptr[1];
        }
        offset = (longlong)&default_name_table - (longlong)str_ptr;
        goto COMPARE_NAME;
      }
      offset = (longlong)&name_keyword_table - (longlong)str_ptr;
      while (*str_ptr == str_ptr[offset]) {
        str_ptr = str_ptr + 1;
        if (curve_ptr <= str_ptr) goto FALLBACK_TO_DEFAULT_NAME;
      }
    }
  }
  goto HANDLE_NAME_MISMATCH;
  while (str_ptr = str_ptr + 1, name_match != '\0') {
COMPARE_NAME:
    curve_match = *str_ptr;
    name_match = str_ptr[offset];
    if (curve_match != name_match) break;
  }
  if (curve_match != name_match) {
HANDLE_NAME_MISMATCH:
    str_ptr = "curve";
    do {
      search_ptr = str_ptr;
      str_ptr = search_ptr + 1;
    } while (*str_ptr != '\0');
    while( true ) {
      do {
        node_ptr = (undefined8 *)node_ptr[0xb];
        if (node_ptr == (undefined8 *)0x0) {
          return;
        }
        str_ptr = (char *)*node_ptr;
        if (str_ptr == (char *)0x0) {
          curve_ptr = (char *)0x0;
          str_ptr = (char *)0x180d48d24;
        }
        else {
          curve_ptr = (char *)node_ptr[2];
        }
      } while (curve_ptr != search_ptr + -0x180a180f3);
      curve_ptr = curve_ptr + (longlong)str_ptr;
      if (curve_ptr <= str_ptr) break;
      offset = (longlong)&curve_keyword_table - (longlong)str_ptr;
      while (*str_ptr == str_ptr[offset]) {
        str_ptr = str_ptr + 1;
        if (curve_ptr <= str_ptr) goto HANDLE_CURVE_FOUND;
      }
    }
    goto HANDLE_CURVE_FOUND;
  }
  version_stack[0] = 0;
  str_ptr = "version";
  do {
    search_ptr = str_ptr;
    str_ptr = search_ptr + 1;
  } while (*str_ptr != '\0');
  attr_ptr = (undefined8 *)node_ptr[8];
  do {
    if (attr_ptr == (undefined8 *)0x0) goto HANDLE_VERSION_DONE;
    str_ptr = (char *)*attr_ptr;
    if (str_ptr == (char *)0x0) {
      curve_ptr = (char *)0x0;
      str_ptr = (char *)0x180d48d24;
    }
    else {
      curve_ptr = (char *)attr_ptr[2];
    }
    if (curve_ptr == search_ptr + -0x180a015af) {
      curve_ptr = curve_ptr + (longlong)str_ptr;
      if (curve_ptr <= str_ptr) {
FALLBACK_TO_DEFAULT_VERSION:
        str_ptr = (char *)0x180d48d24;
        if ((char *)attr_ptr[1] != (char *)0x0) {
          str_ptr = (char *)attr_ptr[1];
        }
        str_length = 0xffffffffffffffff;
        do {
          str_length = str_length + 1;
        } while (str_ptr[str_length] != '\0');
        if (((str_length < 3) || (*str_ptr != '0')) ||
           (temp_ptr = &version_validator, (str_ptr[1] + 0xa8U & 0xdf) != 0)) {
          temp_ptr = &default_version_parser;
        }
        parse_version_string(str_ptr, temp_ptr, version_stack);
HANDLE_VERSION_DONE:
        str_ptr = "default";
        do {
          search_ptr = str_ptr;
          str_ptr = search_ptr + 1;
        } while (*str_ptr != '\0');
        for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
            attr_ptr = (undefined8 *)attr_ptr[6]) {
          str_ptr = (char *)*attr_ptr;
          if (str_ptr == (char *)0x0) {
            curve_ptr = (char *)0x0;
            str_ptr = (char *)0x180d48d24;
          }
          else {
            curve_ptr = (char *)attr_ptr[2];
          }
          if (curve_ptr == search_ptr + -0x180a0b1bf) {
            curve_ptr = str_ptr + (longlong)curve_ptr;
            if (curve_ptr <= str_ptr) {
FALLBACK_TO_DEFAULT_VALUE:
              offset = 0x180d48d24;
              if (attr_ptr[1] != 0) {
                offset = attr_ptr[1];
              }
              goto HANDLE_DEFAULT_VALUE;
            }
            offset = (longlong)&default_keyword_table - (longlong)str_ptr;
            while (*str_ptr == str_ptr[offset]) {
              str_ptr = str_ptr + 1;
              if (curve_ptr <= str_ptr) goto FALLBACK_TO_DEFAULT_VALUE;
            }
          }
        }
        offset = 0;
HANDLE_DEFAULT_VALUE:
        if ((animation_context + 100 != 0) && (offset != 0)) {
          parse_animation_parameter(offset, &default_param_table, animation_context + 100);
        }
        str_ptr = "curve_multiplier";
        do {
          search_ptr = str_ptr;
          str_ptr = search_ptr + 1;
        } while (*str_ptr != '\0');
        for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
            attr_ptr = (undefined8 *)attr_ptr[6]) {
          str_ptr = (char *)*attr_ptr;
          if (str_ptr == (char *)0x0) {
            curve_ptr = (char *)0x0;
            str_ptr = (char *)0x180d48d24;
          }
          else {
            curve_ptr = (char *)attr_ptr[2];
          }
          if (curve_ptr == search_ptr + -0x180a180af) {
            curve_ptr = curve_ptr + (longlong)str_ptr;
            if (curve_ptr <= str_ptr) {
FALLBACK_TO_MULTIPLIER:
              offset = 0x180d48d24;
              if (attr_ptr[1] != 0) {
                offset = attr_ptr[1];
              }
              goto HANDLE_MULTIPLIER;
            }
            offset = (longlong)&multiplier_keyword_table - (longlong)str_ptr;
            while (*str_ptr == str_ptr[offset]) {
              str_ptr = str_ptr + 1;
              if (curve_ptr <= str_ptr) goto FALLBACK_TO_MULTIPLIER;
            }
          }
        }
        offset = 0;
HANDLE_MULTIPLIER:
        if ((animation_context + 0x60 != 0) && (offset != 0)) {
          parse_animation_parameter(offset, &default_param_table, animation_context + 0x60);
        }
        str_ptr = "keys";
        if (version_stack[0] != 1) {
          do {
            search_ptr = str_ptr;
            str_ptr = search_ptr + 1;
          } while (*str_ptr != '\0');
          node_ptr = (undefined8 *)node_ptr[6];
          do {
            if (node_ptr == (undefined8 *)0x0) {
              return;
            }
            str_ptr = (char *)*node_ptr;
            if (str_ptr == (char *)0x0) {
              curve_ptr = (char *)0x0;
              str_ptr = (char *)0x180d48d24;
            }
            else {
              curve_ptr = (char *)node_ptr[2];
            }
            if (curve_ptr == search_ptr + -0x180a180c3) {
              curve_ptr = str_ptr + (longlong)curve_ptr;
              if (curve_ptr <= str_ptr) {
HANDLE_KEYS_SECTION:
                str_ptr = "key";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                node_ptr = (undefined8 *)node_ptr[6];
                do {
                  if (node_ptr == (undefined8 *)0x0) {
                    return;
                  }
                  str_ptr = (char *)*node_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)node_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a18107) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) {
HANDLE_KEY_ENTRY:
                      str_ptr = "time";
                      do {
                        search_ptr = str_ptr;
                        str_ptr = search_ptr + 1;
                      } while (*str_ptr != '\0');
                      for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                          attr_ptr = (undefined8 *)attr_ptr[6]) {
                        str_ptr = (char *)*attr_ptr;
                        if (str_ptr == (char *)0x0) {
                          curve_ptr = (char *)0x0;
                          str_ptr = (char *)0x180d48d24;
                        }
                        else {
                          curve_ptr = (char *)attr_ptr[2];
                        }
                        if (curve_ptr == search_ptr + -0x180a1810b) {
                          curve_ptr = curve_ptr + (longlong)str_ptr;
                          if (curve_ptr <= str_ptr) {
FALLBACK_TO_TIME_VALUE:
                            offset = 0x180d48d24;
                            if (attr_ptr[1] != 0) {
                              offset = attr_ptr[1];
                            }
                            parse_animation_parameter(offset, &default_param_table, time_stack);
                            break;
                          }
                          offset = (longlong)&time_keyword_table - (longlong)str_ptr;
                          while (*str_ptr == str_ptr[offset]) {
                            str_ptr = str_ptr + 1;
                            if (curve_ptr <= str_ptr) goto FALLBACK_TO_TIME_VALUE;
                          }
                        }
                      }
                      str_ptr = "value";
                      do {
                        search_ptr = str_ptr;
                        str_ptr = search_ptr + 1;
                      } while (*str_ptr != '\0');
                      for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                          attr_ptr = (undefined8 *)attr_ptr[6]) {
                        str_ptr = (char *)*attr_ptr;
                        if (str_ptr == (char *)0x0) {
                          curve_ptr = (char *)0x0;
                          str_ptr = (char *)0x180d48d24;
                        }
                        else {
                          curve_ptr = (char *)attr_ptr[2];
                        }
                        if (curve_ptr == search_ptr + -0x180a0696b) {
                          curve_ptr = curve_ptr + (longlong)str_ptr;
                          if (curve_ptr <= str_ptr) {
FALLBACK_TO_VALUE_PARAM:
                            offset = 0x180d48d24;
                            if (attr_ptr[1] != 0) {
                              offset = attr_ptr[1];
                            }
                            parse_animation_parameter(offset, &default_param_table, value_stack);
                            break;
                          }
                          offset = (longlong)&value_keyword_table - (longlong)str_ptr;
                          while (*str_ptr == str_ptr[offset]) {
                            str_ptr = str_ptr + 1;
                            if (curve_ptr <= str_ptr) goto FALLBACK_TO_VALUE_PARAM;
                          }
                        }
                      }
                      process_keyframe_data(node_ptr, &keyframe_processor, &animation_context);
                      add_keyframe_to_curve(
                                (longlong *)(animation_context + 0x38),(int)time_stack[0],value_stack[0],0,0);
                      str_ptr = "key";
                      do {
                        search_ptr = str_ptr;
                        str_ptr = search_ptr + 1;
                      } while (*str_ptr != '\0');
                      node_ptr = (undefined8 *)node_ptr[0xb];
                      if (node_ptr == (undefined8 *)0x0) {
                        return;
                      }
                      do {
                        str_ptr = (char *)*node_ptr;
                        if (str_ptr == (char *)0x0) {
                          curve_ptr = (char *)0x0;
                          str_ptr = (char *)0x180d48d24;
                        }
                        else {
                          curve_ptr = (char *)node_ptr[2];
                        }
                        if (curve_ptr == search_ptr + -0x180a18107) {
                          curve_ptr = curve_ptr + (longlong)str_ptr;
                          if (curve_ptr <= str_ptr) goto HANDLE_KEY_ENTRY;
                          offset = (longlong)&key_keyword_table - (longlong)str_ptr;
                          while (*str_ptr == str_ptr[offset]) {
                            str_ptr = str_ptr + 1;
                            if (curve_ptr <= str_ptr) goto HANDLE_KEY_ENTRY;
                          }
                        }
                        node_ptr = (undefined8 *)node_ptr[0xb];
                        if (node_ptr == (undefined8 *)0x0) {
                          return;
                        }
                      } while( true );
                    }
                    offset = (longlong)&key_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto HANDLE_KEY_ENTRY;
                    }
                  }
                  node_ptr = (undefined8 *)node_ptr[0xb];
                } while( true );
              }
              offset = (longlong)&keys_keyword_table - (longlong)str_ptr;
              while (*str_ptr == str_ptr[offset]) {
                str_ptr = str_ptr + 1;
                if (curve_ptr <= str_ptr) goto HANDLE_KEYS_SECTION;
              }
            }
            node_ptr = (undefined8 *)node_ptr[0xb];
          } while( true );
        }
        do {
          search_ptr = str_ptr;
          str_ptr = search_ptr + 1;
        } while (*str_ptr != '\0');
        node_ptr = (undefined8 *)node_ptr[6];
        do {
          if (node_ptr == (undefined8 *)0x0) {
            return;
          }
          str_ptr = (char *)*node_ptr;
          if (str_ptr == (char *)0x0) {
            curve_ptr = (char *)0x0;
            str_ptr = (char *)0x180d48d24;
          }
          else {
            curve_ptr = (char *)node_ptr[2];
          }
          if (curve_ptr == search_ptr + -0x180a180c3) {
            curve_ptr = str_ptr + (longlong)curve_ptr;
            if (curve_ptr <= str_ptr) {
HANDLE_ALT_KEYS:
              str_ptr = "key";
              do {
                search_ptr = str_ptr;
                str_ptr = search_ptr + 1;
              } while (*str_ptr != '\0');
              for (node_ptr = (undefined8 *)node_ptr[6]; node_ptr != (undefined8 *)0x0;
                  node_ptr = (undefined8 *)node_ptr[0xb]) {
                str_ptr = (char *)*node_ptr;
                if (str_ptr == (char *)0x0) {
                  curve_ptr = (char *)0x0;
                  str_ptr = (char *)0x180d48d24;
                }
                else {
                  curve_ptr = (char *)node_ptr[2];
                }
                if (curve_ptr == search_ptr + -0x180a18107) {
                  curve_ptr = curve_ptr + (longlong)str_ptr;
                  if (curve_ptr <= str_ptr) goto HANDLE_ALT_KEY_ENTRY;
                  offset = (longlong)&key_keyword_table - (longlong)str_ptr;
                  while (*str_ptr == str_ptr[offset]) {
                    str_ptr = str_ptr + 1;
                    if (curve_ptr <= str_ptr) goto HANDLE_ALT_KEY_ENTRY;
                  }
                }
              }
              node_ptr = (undefined8 *)0x0;
HANDLE_ALT_KEY_ENTRY:
              do {
                str_ptr = "time";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                    attr_ptr = (undefined8 *)attr_ptr[6]) {
                  str_ptr = (char *)*attr_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)attr_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a1810b) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) {
FALLBACK_TO_ALT_TIME:
                      offset = 0x180d48d24;
                      if (attr_ptr[1] != 0) {
                        offset = attr_ptr[1];
                      }
                      parse_animation_parameter(offset, &default_param_table, time_stack);
                      break;
                    }
                    offset = (longlong)&time_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto FALLBACK_TO_ALT_TIME;
                    }
                  }
                }
                str_ptr = "value";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                    attr_ptr = (undefined8 *)attr_ptr[6]) {
                  str_ptr = (char *)*attr_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)attr_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a0696b) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) {
FALLBACK_TO_ALT_VALUE:
                      offset = 0x180d48d24;
                      if (attr_ptr[1] != 0) {
                        offset = attr_ptr[1];
                      }
                      parse_animation_parameter(offset, &default_param_table, value_stack);
                      break;
                    }
                    offset = (longlong)&value_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto FALLBACK_TO_ALT_VALUE;
                    }
                  }
                }
                process_keyframe_data(node_ptr, &keyframe_processor, &animation_context);
                key_index = (int)(time_stack[0] * 29.0);
                key_time = value_stack[0];
                time_flags = 0;
                str_ptr = "key";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                for (node_ptr = (undefined8 *)node_ptr[0xb]; node_ptr != (undefined8 *)0x0;
                    node_ptr = (undefined8 *)node_ptr[0xb]) {
                  str_ptr = (char *)*node_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)node_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a18107) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) goto HANDLE_SECOND_KEY_ENTRY;
                    offset = (longlong)&key_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto HANDLE_SECOND_KEY_ENTRY;
                    }
                  }
                }
                node_ptr = (undefined8 *)0x0;
HANDLE_SECOND_KEY_ENTRY:
                str_ptr = "time";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                    attr_ptr = (undefined8 *)attr_ptr[6]) {
                  str_ptr = (char *)*attr_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)attr_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a1810b) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) {
FALLBACK_TO_SECOND_TIME:
                      offset = 0x180d48d24;
                      if (attr_ptr[1] != 0) {
                        offset = attr_ptr[1];
                      }
                      parse_animation_parameter(offset, &default_param_table, time_stack);
                      break;
                    }
                    offset = (longlong)&time_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto FALLBACK_TO_SECOND_TIME;
                    }
                  }
                }
                str_ptr = "value";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                for (attr_ptr = (undefined8 *)node_ptr[8]; attr_ptr != (undefined8 *)0x0;
                    attr_ptr = (undefined8 *)attr_ptr[6]) {
                  str_ptr = (char *)*attr_ptr;
                  if (str_ptr == (char *)0x0) {
                    curve_ptr = (char *)0x0;
                    str_ptr = (char *)0x180d48d24;
                  }
                  else {
                    curve_ptr = (char *)attr_ptr[2];
                  }
                  if (curve_ptr == search_ptr + -0x180a0696b) {
                    curve_ptr = curve_ptr + (longlong)str_ptr;
                    if (curve_ptr <= str_ptr) {
FALLBACK_TO_SECOND_VALUE:
                      offset = 0x180d48d24;
                      if (attr_ptr[1] != 0) {
                        offset = attr_ptr[1];
                      }
                      parse_animation_parameter(offset, &default_param_table, value_stack);
                      break;
                    }
                    offset = (longlong)&value_keyword_table - (longlong)str_ptr;
                    while (*str_ptr == str_ptr[offset]) {
                      str_ptr = str_ptr + 1;
                      if (curve_ptr <= str_ptr) goto FALLBACK_TO_SECOND_VALUE;
                    }
                  }
                }
                process_keyframe_data(node_ptr, &keyframe_processor, &animation_context);
                key_index2 = (int)(time_stack[0] * 29.0);
                key_time2 = value_stack[0];
                time_flags2 = 0;
                add_control_point_to_curve(animation_context + 0x40, &key_index);
                str_ptr = "key";
                do {
                  search_ptr = str_ptr;
                  str_ptr = search_ptr + 1;
                } while (*str_ptr != '\0');
                while( true ) {
                  do {
                    node_ptr = (undefined8 *)node_ptr[0xb];
                    if (node_ptr == (undefined8 *)0x0) {
                      return;
                    }
                    str_ptr = (char *)*node_ptr;
                    if (str_ptr == (char *)0x0) {
                      curve_ptr = (char *)0x0;
                      str_ptr = (char *)0x180d48d24;
                    }
                    else {
                      curve_ptr = (char *)node_ptr[2];
                    }
                  } while (curve_ptr != search_ptr + -0x180a18107);
                  curve_ptr = str_ptr + (longlong)curve_ptr;
                  if (curve_ptr <= str_ptr) break;
                  offset = (longlong)&key_keyword_table - (longlong)str_ptr;
                  while (*str_ptr == str_ptr[offset]) {
                    str_ptr = str_ptr + 1;
                    if (curve_ptr <= str_ptr) goto HANDLE_ALT_KEY_ENTRY;
                  }
                }
              } while( true );
            }
            offset = (longlong)&keys_keyword_table - (longlong)str_ptr;
            while (*str_ptr == str_ptr[offset]) {
              str_ptr = str_ptr + 1;
              if (curve_ptr <= str_ptr) goto HANDLE_ALT_KEYS;
            }
          }
          node_ptr = (undefined8 *)node_ptr[0xb];
        } while( true );
      }
      offset = (longlong)&curve_config_table - (longlong)str_ptr;
      while (*str_ptr == str_ptr[offset]) {
        str_ptr = str_ptr + 1;
        if (curve_ptr <= str_ptr) goto FALLBACK_TO_DEFAULT_VERSION;
      }
    }
    attr_ptr = (undefined8 *)attr_ptr[6];
  } while( true );
}


// 函数: void initialize_curve_processor(longlong processor_context, longlong config_data)
// 初始化曲线处理器，解析基础配置参数
void initialize_curve_processor(longlong processor_context, longlong config_data)

{
  undefined8 *attr_iter;
  char *str_iter;
  longlong param_offset;
  char *match_ptr;
  char *search_ptr;
  
  str_iter = "base";
  do {
    search_ptr = str_iter;
    str_iter = search_ptr + 1;
  } while (*str_iter != '\0');
  for (attr_iter = *(undefined8 **)(config_data + 0x40); attr_iter != (undefined8 *)0x0;
      attr_iter = (undefined8 *)attr_iter[6]) {
    str_iter = (char *)*attr_iter;
    if (str_iter == (char *)0x0) {
      match_ptr = (char *)0x0;
      str_iter = (char *)0x180d48d24;
    }
    else {
      match_ptr = (char *)attr_iter[2];
    }
    if (match_ptr == search_ptr + -0x180a04ee3) {
      match_ptr = match_ptr + (longlong)str_iter;
      if (match_ptr <= str_iter) {
FALLBACK_TO_BASE_VALUE:
        param_offset = 0x180d48d24;
        if (attr_iter[1] != 0) {
          param_offset = attr_iter[1];
        }
        goto HANDLE_BASE_PARAM;
      }
      param_offset = (longlong)&base_keyword_table - (longlong)str_iter;
      while (*str_iter == str_iter[param_offset]) {
        str_iter = str_iter + 1;
        if (match_ptr <= str_iter) goto FALLBACK_TO_BASE_VALUE;
      }
    }
  }
  param_offset = 0;
HANDLE_BASE_PARAM:
  if ((processor_context + 4 != 0) && (param_offset != 0)) {
    parse_animation_parameter(param_offset, &default_param_table, processor_context + 4);
  }
  str_iter = "bias";
  do {
    search_ptr = str_iter;
    str_iter = search_ptr + 1;
  } while (*str_iter != '\0');
  attr_iter = *(undefined8 **)(config_data + 0x40);
  do {
    if (attr_iter == (undefined8 *)0x0) {
      param_offset = 0;
HANDLE_BIAS_PARAM:
      if ((processor_context != 0) && (param_offset != 0)) {
        parse_animation_parameter(param_offset, &default_param_table, processor_context);
      }
      return;
    }
    str_iter = (char *)*attr_iter;
    if (str_iter == (char *)0x0) {
      match_ptr = (char *)0x0;
      str_iter = (char *)0x180d48d24;
    }
    else {
      match_ptr = (char *)attr_iter[2];
    }
    if (match_ptr == search_ptr + -0x180a1628f) {
      match_ptr = match_ptr + (longlong)str_iter;
      if (match_ptr <= str_iter) {
FALLBACK_TO_BIAS_VALUE:
        param_offset = 0x180d48d24;
        if (attr_iter[1] != 0) {
          param_offset = attr_iter[1];
        }
        goto HANDLE_BIAS_PARAM;
      }
      param_offset = (longlong)&bias_keyword_table - (longlong)str_iter;
      while (*str_iter == str_iter[param_offset]) {
        str_iter = str_iter + 1;
        if (match_ptr <= str_iter) goto FALLBACK_TO_BIAS_VALUE;
      }
    }
    attr_iter = (undefined8 *)attr_iter[6];
  } while( true );
}