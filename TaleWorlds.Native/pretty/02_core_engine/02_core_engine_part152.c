#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part152.c - 核心引擎渲染和状态管理模块
// 本文件包含11个函数，主要负责渲染状态管理、资源处理和引擎控制

// 函数: void FUN_18013b5f5(void)
// 功能: 处理引擎渲染状态更新和资源管理
void update_engine_render_state(void)

{
  uint status_flags;
  int *resource_ptr;
  byte state_flag;
  longlong resource_handle;
  int16_t index_value;
  int32_t render_flags;
  longlong current_resource;
  int *resource_array;
  uint texture_id;
  longlong next_resource;
  uint64_t *engine_context;
  char state_char;
  int state_value;
  ulonglong frame_counter;
  ulonglong loop_index;
  longlong global_data;
  byte render_mode;
  longlong render_context;
  uint64_t xmm0_reg;
  int8_t *output_param;
  char input_param;
  
  // 获取当前资源句柄
  current_resource = engine_context[0x81];
  state_value = (int)frame_counter;
  state_char = (char)frame_counter;
  
  // 检查资源状态并更新
  if ((*(int *)(engine_context + 0x83) != state_value) && (current_resource == 0)) {
    current_resource = find_resource_by_id(*(uint64_t *)(global_data + 0x2df8),*(int32_t *)(engine_context + 0x83));
    if (current_resource == 0) {
      current_resource = create_resource_from_template(xmm0_reg,*(int32_t *)(engine_context + 0x83));
      if (input_param != state_char) {
        *(int32_t *)(current_resource + 0x88) = *(int32_t *)(global_data + 0x1a90);
      }
    }
    else if (*(ulonglong *)(current_resource + 0x10) != frame_counter) {
      if (engine_context[0x81] == frame_counter) {
        *(int *)(engine_context + 0x83) = state_value;
        *(int8_t *)((longlong)engine_context + 0xb2) = 0;
      }
      else {
        release_resource(engine_context[0x81]);
        global_data = _DAT_180c8a9b0;
        *(char *)((longlong)engine_context + 0xb2) = state_char;
      }
      goto setup_render_context;
    }
    activate_resource(current_resource);
    global_data = _DAT_180c8a9b0;
    *(uint64_t *)(_DAT_180c8a9b0 + 0x1bf4) = engine_context[8];
    *(ulonglong *)(global_data + 0x1bfc) = frame_counter;
    *(int32_t *)(global_data + 0x1bd0) = 1;
    *(int8_t *)(global_data + 0x1c14) = 1;
    *(uint64_t *)(global_data + 0x1c04) = engine_context[10];
    *(int32_t *)(global_data + 0x1bd4) = 1;
    *(char *)(render_context + 0x1c14) = state_char;
  }
  
  // 检查渲染模式标志
  if (((*(byte *)(current_resource + 0xa0) & 0x20) == 0) || ((*(byte *)(current_resource + 4) & 8) == 0)) {
    if (*(int *)(current_resource + 0x88) < *(int *)(render_context + 0x1a90)) {
      next_resource = *(longlong *)(current_resource + 8);
      while (resource_handle = next_resource, resource_handle != 0) {
        current_resource = resource_handle;
        next_resource = *(longlong *)(resource_handle + 8);
      }
      if (*(int *)(render_context + 0x1a90) <= *(int *)(current_resource + 0x88)) {
        *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      next_resource = *(longlong *)(current_resource + 0x68);
      if (next_resource == 0) {
      cleanup_render_state:
        *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(next_resource + 0xbc) <= *(short *)((longlong)engine_context + 0xbc)) {
        if (next_resource != 0) {
          *(uint64_t *)(global_data + 0x1bf4) = *(uint64_t *)(current_resource + 0x38);
          *(ulonglong *)(global_data + 0x1bfc) = frame_counter;
          *(int32_t *)(global_data + 0x1bd0) = 1;
          *(int8_t *)(global_data + 0x1c14) = 1;
          *(uint64_t *)(global_data + 0x1c04) = *(uint64_t *)(current_resource + 0x40);
          *(int32_t *)(global_data + 0x1bd4) = 1;
          *(char *)(render_context + 0x1c14) = state_char;
          state_flag = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
          render_mode = state_flag | 1;
          *(byte *)((longlong)engine_context + 0x432) = render_mode;
          if ((*(byte *)(current_resource + 4) & 1) != 0) {
            return;
          }
          next_resource = *(longlong *)(current_resource + 0x30);
          if ((next_resource != 0) && (*(int *)(next_resource + 0x1c) == *(int *)(engine_context + 1))) {
            render_mode = state_flag | 3;
            *(byte *)((longlong)engine_context + 0x432) = render_mode;
            next_resource = *(longlong *)(current_resource + 0x30);
          }
          if ((((render_mode & 2) == 0) && (next_resource != 0)) &&
             (*(int *)(next_resource + 0x18) == *(int *)(engine_context + 1))) {
            *(int32_t *)((longlong)engine_context + 0xdc) = 2;
          }
          status_flags = *(uint *)((longlong)engine_context + 0xc);
          *(uint *)((longlong)engine_context + 0xc) = status_flags | 0x1010002;
          texture_id = status_flags & 0xfffffffe | 0x1010002;
          if ((*(byte *)(current_resource + 0xa0) & 0x40) != 0) {
            texture_id = status_flags | 0x1010003;
          }
          *(uint *)((longlong)engine_context + 0xc) = texture_id;
          if (*(ulonglong *)(current_resource + 0x30) != frame_counter) {
            resource_ptr = *(int **)(engine_context[0x81] + 0x30);
            if (((resource_ptr != (int *)0x0) && (*(int *)(engine_context + 1) != 0)) && (0 < *resource_ptr)) {
              resource_array = *(int **)(resource_ptr + 2);
              loop_index = frame_counter;
              do {
                state_value = (int)loop_index;
                if (*resource_array == *(int *)(engine_context + 1)) {
                  if (*(int **)(resource_ptr + 2) + (longlong)state_value * 10 != (int *)0x0) {
                    index_value = (int16_t)(((longlong)state_value * 0x28) / 0x28);
                    goto update_resource_index;
                  }
                  break;
                }
                loop_index = (ulonglong)(state_value + 1);
                frame_counter = frame_counter + 1;
                resource_array = resource_array + 10;
              } while ((longlong)frame_counter < (longlong)*resource_ptr);
            }
            index_value = 0xffff;
          update_resource_index:
            *(int16_t *)(engine_context + 0x86) = index_value;
          }
          if ((((*(byte *)(current_resource + 0xa1) & 2) != 0) ||
              (*(int *)(current_resource + 0x9c) == *(int *)(engine_context + 1))) &&
             (output_param != (int8_t *)0x0)) {
            *output_param = 0;
          }
          render_flags = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
          *(int32_t *)(engine_context + 0x11) = render_flags;
          return;
        }
        goto cleanup_render_state;
      }
    }
  }
  
  // 处理引擎上下文状态
  if (engine_context[0x81] == 0) {
    *(int *)(engine_context + 0x83) = state_value;
  }
  else {
    release_all_resources();
    global_data = _DAT_180c8a9b0;
  }
  *(char *)((longlong)engine_context + 0xb2) = state_char;
  
setup_render_context:
  *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfc;
  if (0.0 < *(float *)(global_data + 0x2e04)) {
    return;
  }
  *(int32_t *)(global_data + 0x2e04) = *(int32_t *)(global_data + 0x1c);
  return;
}



// WARNING: 全局变量以'_'开头可能与较小符号重叠地址



// 函数: void FUN_18013b670(longlong param_1)
// 功能: 处理带参数的引擎状态更新
void update_engine_state_with_param(longlong param_1)

{
  uint state_flags;
  int *resource_data;
  longlong temp_handle;
  byte mode_flag;
  int16_t resource_index;
  int32_t render_config;
  int *resource_list;
  uint texture_handle;
  ulonglong counter;
  longlong resource_chain;
  uint64_t *engine_context;
  int state_value;
  ulonglong loop_counter;
  longlong global_data;
  byte render_state;
  longlong render_device;
  uint64_t xmm0_reg;
  int8_t *status_output;
  char stack_param;
  
  // 获取渲染模式标志
  mode_flag = (byte)(*(uint *)(param_1 + 0xc) >> 0x15) & 1;
  stack_param = '\0';
  
  // 检查渲染状态
  if (((*(uint *)(global_data + 0x1bd0) != 0) &&
      ((*(uint *)(engine_context + 0x1c) & *(uint *)(global_data + 0x1bd0)) != 0)) &&
     (*(char *)(global_data + 0x1c14) != '\0')) {
    mode_flag = 1;
  }
  *(int8_t *)(global_data + 0x1c14) = 0;
  
  if (mode_flag != 0) {
    if (engine_context[0x81] == 0) {
      *(int32_t *)(engine_context + 0x83) = 0;
    }
    else {
      release_resource(engine_context[0x81]);
      global_data = _DAT_180c8a9b0;
    }
    *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfc;
    *(int8_t *)((longlong)engine_context + 0xb2) = 0;
    if (0.0 < *(float *)(global_data + 0x2e04)) {
      return;
    }
    *(int32_t *)(global_data + 0x2e04) = *(int32_t *)(global_data + 0x1c);
    return;
  }
  
  counter = 0;
  resource_chain = engine_context[0x81];
  if ((*(int *)(engine_context + 0x83) != 0) && (resource_chain == 0)) {
    resource_chain = find_resource_by_id(*(uint64_t *)(global_data + 0x2df8),*(int32_t *)(engine_context + 0x83));
    if (resource_chain == 0) {
      resource_chain = create_resource_from_template(xmm0_reg,*(int32_t *)(engine_context + 0x83));
      if (stack_param != '\0') {
        *(int32_t *)(resource_chain + 0x88) = *(int32_t *)(global_data + 0x1a90);
      }
    }
    else if (*(longlong *)(resource_chain + 0x10) != 0) {
      if (engine_context[0x81] == 0) {
        *(int32_t *)(engine_context + 0x83) = 0;
        *(int8_t *)((longlong)engine_context + 0xb2) = 0;
      }
      else {
        release_resource(engine_context[0x81]);
        global_data = _DAT_180c8a9b0;
        *(int8_t *)((longlong)engine_context + 0xb2) = 0;
      }
      goto setup_render_context;
    }
    activate_resource(resource_chain);
    global_data = _DAT_180c8a9b0;
    *(uint64_t *)(_DAT_180c8a9b0 + 0x1bf4) = engine_context[8];
    *(uint64_t *)(global_data + 0x1bfc) = 0;
    *(int32_t *)(global_data + 0x1bd0) = 1;
    *(int8_t *)(global_data + 0x1c14) = 1;
    *(uint64_t *)(global_data + 0x1c04) = engine_context[10];
    *(int32_t *)(global_data + 0x1bd4) = 1;
    *(int8_t *)(render_device + 0x1c14) = 0;
  }
  
  // 处理资源链和渲染状态
  if (((*(byte *)(resource_chain + 0xa0) & 0x20) == 0) || ((*(byte *)(resource_chain + 4) & 8) == 0)) {
    if (*(int *)(resource_chain + 0x88) < *(int *)(render_device + 0x1a90)) {
      temp_handle = *(longlong *)(resource_chain + 8);
      while (resource_handle = temp_handle, resource_handle != 0) {
        resource_chain = resource_handle;
        temp_handle = *(longlong *)(resource_handle + 8);
      }
      if (*(int *)(render_device + 0x1a90) <= *(int *)(resource_chain + 0x88)) {
        *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd | 1;
        return;
      }
    }
    else {
      temp_handle = *(longlong *)(resource_chain + 0x68);
      if (temp_handle == 0) {
      cleanup_render_state:
        *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
        return;
      }
      if (*(short *)(temp_handle + 0xbc) <= *(short *)((longlong)engine_context + 0xbc)) {
        if (temp_handle != 0) {
          *(uint64_t *)(global_data + 0x1bf4) = *(uint64_t *)(resource_chain + 0x38);
          *(uint64_t *)(global_data + 0x1bfc) = 0;
          *(int32_t *)(global_data + 0x1bd0) = 1;
          *(int8_t *)(global_data + 0x1c14) = 1;
          *(uint64_t *)(global_data + 0x1c04) = *(uint64_t *)(resource_chain + 0x40);
          *(int32_t *)(global_data + 0x1bd4) = 1;
          *(int8_t *)(render_device + 0x1c14) = 0;
          mode_flag = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
          render_state = mode_flag | 1;
          *(byte *)((longlong)engine_context + 0x432) = render_state;
          if ((*(byte *)(resource_chain + 4) & 1) != 0) {
            return;
          }
          temp_handle = *(longlong *)(resource_chain + 0x30);
          if ((temp_handle != 0) && (*(int *)(temp_handle + 0x1c) == *(int *)(engine_context + 1))) {
            render_state = mode_flag | 3;
            *(byte *)((longlong)engine_context + 0x432) = render_state;
            temp_handle = *(longlong *)(resource_chain + 0x30);
          }
          if ((((render_state & 2) == 0) && (temp_handle != 0)) &&
             (*(int *)(temp_handle + 0x18) == *(int *)(engine_context + 1))) {
            *(int32_t *)((longlong)engine_context + 0xdc) = 2;
          }
          state_flags = *(uint *)((longlong)engine_context + 0xc);
          *(uint *)((longlong)engine_context + 0xc) = state_flags | 0x1010002;
          texture_handle = state_flags & 0xfffffffe | 0x1010002;
          if ((*(byte *)(resource_chain + 0xa0) & 0x40) != 0) {
            texture_handle = state_flags | 0x1010003;
          }
          *(uint *)((longlong)engine_context + 0xc) = texture_handle;
          if (*(longlong *)(resource_chain + 0x30) != 0) {
            resource_data = *(int **)(engine_context[0x81] + 0x30);
            if (((resource_data != (int *)0x0) && (*(int *)(engine_context + 1) != 0)) && (0 < *resource_data)) {
              resource_list = *(int **)(resource_data + 2);
              loop_counter = counter;
              do {
                state_value = (int)loop_counter;
                if (*resource_list == *(int *)(engine_context + 1)) {
                  if (*(int **)(resource_data + 2) + (longlong)state_value * 10 != (int *)0x0) {
                    resource_index = (int16_t)(((longlong)state_value * 0x28) / 0x28);
                    goto update_resource_index;
                  }
                  break;
                }
                loop_counter = (ulonglong)(state_value + 1);
                counter = counter + 1;
                resource_list = resource_list + 10;
              } while ((longlong)counter < (longlong)*resource_data);
            }
            resource_index = 0xffff;
          update_resource_index:
            *(int16_t *)(engine_context + 0x86) = resource_index;
          }
          if ((((*(byte *)(resource_chain + 0xa1) & 2) != 0) ||
              (*(int *)(resource_chain + 0x9c) == *(int *)(engine_context + 1))) &&
             (status_output != (int8_t *)0x0)) {
            *status_output = 0;
          }
          render_config = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
          *(int32_t *)(engine_context + 0x11) = render_config;
          return;
        }
        goto cleanup_render_state;
      }
    }
  }
  
  // 最终状态处理
  if (engine_context[0x81] == 0) {
    *(int32_t *)(engine_context + 0x83) = 0;
  }
  else {
    release_all_resources();
    global_data = _DAT_180c8a9b0;
  }
  *(int8_t *)((longlong)engine_context + 0xb2) = 0;
  
setup_render_context:
  *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfc;
  if (0.0 < *(float *)(global_data + 0x2e04)) {
    return;
  }
  *(int32_t *)(global_data + 0x2e04) = *(int32_t *)(global_data + 0x1c);
  return;
}





// 函数: void FUN_18013b704(void)
// 功能: 重置引擎状态和渲染参数
void reset_engine_state(void)

{
  longlong engine_context;
  int32_t reset_value;
  longlong global_data;
  
  // 重置引擎状态参数
  *(int32_t *)(engine_context + 0x418) = reset_value;
  *(int8_t *)(engine_context + 0xb2) = 0;
  *(byte *)(engine_context + 0x432) = *(byte *)(engine_context + 0x432) & 0xfc;
  
  // 检查并更新全局渲染时间
  if (*(float *)(global_data + 0x2e04) <= 0.0) {
    *(int32_t *)(global_data + 0x2e04) = *(int32_t *)(global_data + 0x1c);
    return;
  }
  return;
}



// WARNING: 全局变量以'_'开头可能与较小符号重叠地址



// 函数: void FUN_18013b7f6(void)
// 功能: 处理资源优先级和渲染队列
void process_resource_priority(void)

{
  uint render_flags;
  int *resource_data;
  byte priority_flag;
  int16_t priority_index;
  int32_t queue_config;
  int *resource_list;
  uint texture_id;
  longlong resource_handle;
  uint64_t *engine_context;
  int priority_value;
  ulonglong resource_counter;
  longlong render_source;
  longlong global_data;
  byte queue_state;
  longlong render_target;
  int8_t *status_flag;
  
  // 获取资源句柄
  resource_handle = *(longlong *)(render_source + 0x68);
  if (resource_handle != 0) {
    if (*(short *)((longlong)engine_context + 0xbc) < *(short *)(resource_handle + 0xbc)) {
      if (engine_context[0x81] == 0) {
        *(int *)(engine_context + 0x83) = (int)resource_counter;
      }
      else {
        release_resource(engine_context[0x81]);
        global_data = _DAT_180c8a9b0;
      }
      *(char *)((longlong)engine_context + 0xb2) = (char)resource_counter;
      *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfc;
      if (*(float *)(global_data + 0x2e04) <= 0.0) {
        *(int32_t *)(global_data + 0x2e04) = *(int32_t *)(global_data + 0x1c);
        return;
      }
    }
    else {
      if (resource_handle == 0) goto cleanup_priority_queue;
      *(uint64_t *)(global_data + 0x1bf4) = *(uint64_t *)(render_source + 0x38);
      *(ulonglong *)(global_data + 0x1bfc) = resource_counter;
      *(int32_t *)(global_data + 0x1bd0) = 1;
      *(int8_t *)(global_data + 0x1c14) = 1;
      *(uint64_t *)(global_data + 0x1c04) = *(uint64_t *)(render_source + 0x40);
      *(int32_t *)(global_data + 0x1bd4) = 1;
      *(char *)(render_target + 0x1c14) = (char)resource_counter;
      priority_flag = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
      queue_state = priority_flag | 1;
      *(byte *)((longlong)engine_context + 0x432) = queue_state;
      if ((*(byte *)(render_source + 4) & 1) == 0) {
        resource_handle = *(longlong *)(render_source + 0x30);
        if ((resource_handle != 0) && (*(int *)(resource_handle + 0x1c) == *(int *)(engine_context + 1))) {
          queue_state = priority_flag | 3;
          *(byte *)((longlong)engine_context + 0x432) = queue_state;
          resource_handle = *(longlong *)(render_source + 0x30);
        }
        if ((((queue_state & 2) == 0) && (resource_handle != 0)) &&
           (*(int *)(resource_handle + 0x18) == *(int *)(engine_context + 1))) {
          *(int32_t *)((longlong)engine_context + 0xdc) = 2;
        }
        render_flags = *(uint *)((longlong)engine_context + 0xc);
        *(uint *)((longlong)engine_context + 0xc) = render_flags | 0x1010002;
        texture_id = render_flags & 0xfffffffe | 0x1010002;
        if ((*(byte *)(render_source + 0xa0) & 0x40) != 0) {
          texture_id = render_flags | 0x1010003;
        }
        *(uint *)((longlong)engine_context + 0xc) = texture_id;
        if (*(ulonglong *)(render_source + 0x30) != resource_counter) {
          resource_data = *(int **)(engine_context[0x81] + 0x30);
          if (((resource_data != (int *)0x0) && (*(int *)(engine_context + 1) != 0)) && (0 < *resource_data)) {
            resource_list = *(int **)(resource_data + 2);
            resource_counter = resource_counter;
            do {
              priority_value = (int)resource_counter;
              if (*resource_list == *(int *)(engine_context + 1)) {
                if (*(int **)(resource_data + 2) + (longlong)priority_value * 10 != (int *)0x0) {
                  priority_index = (int16_t)(((longlong)priority_value * 0x28) / 0x28);
                  goto update_priority_index;
                }
                break;
              }
              resource_counter = (ulonglong)(priority_value + 1);
              resource_counter = resource_counter + 1;
              resource_list = resource_list + 10;
            } while ((longlong)resource_counter < (longlong)*resource_data);
          }
          priority_index = 0xffff;
        update_priority_index:
          *(int16_t *)(engine_context + 0x86) = priority_index;
        }
        if ((((*(byte *)(render_source + 0xa1) & 2) != 0) ||
            (*(int *)(render_source + 0x9c) == *(int *)(engine_context + 1))) &&
           (status_flag != (int8_t *)0x0)) {
          *status_flag = 0;
        }
        queue_config = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
        *(int32_t *)(engine_context + 0x11) = queue_config;
      }
    }
    return;
  }
  
cleanup_priority_queue:
  *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
  return;
}





// 函数: void FUN_18013b86d(longlong param_1)
// 功能: 处理单个资源的激活和状态更新
void activate_single_resource(longlong param_1)

{
  uint render_flags;
  int *resource_data;
  byte activation_flag;
  int16_t resource_index;
  int32_t activation_config;
  int *resource_list;
  uint texture_id;
  longlong resource_handle;
  uint64_t *engine_context;
  int index_value;
  ulonglong resource_counter;
  longlong render_source;
  longlong global_data;
  byte active_state;
  longlong render_target;
  int8_t *status_output;
  
  // 检查资源有效性
  if (param_1 == 0) {
    *(byte *)((longlong)engine_context + 0x432) = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
    return;
  }
  
  // 激活资源并设置渲染参数
  *(uint64_t *)(global_data + 0x1bf4) = *(uint64_t *)(render_source + 0x38);
  *(ulonglong *)(global_data + 0x1bfc) = resource_counter;
  *(int32_t *)(global_data + 0x1bd0) = 1;
  *(int8_t *)(global_data + 0x1c14) = 1;
  *(uint64_t *)(global_data + 0x1c04) = *(uint64_t *)(render_source + 0x40);
  *(int32_t *)(global_data + 0x1bd4) = 1;
  *(char *)(render_target + 0x1c14) = (char)resource_counter;
  activation_flag = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
  active_state = activation_flag | 1;
  *(byte *)((longlong)engine_context + 0x432) = active_state;
  
  if ((*(byte *)(render_source + 4) & 1) == 0) {
    resource_handle = *(longlong *)(render_source + 0x30);
    if ((resource_handle != 0) && (*(int *)(resource_handle + 0x1c) == *(int *)(engine_context + 1))) {
      active_state = activation_flag | 3;
      *(byte *)((longlong)engine_context + 0x432) = active_state;
      resource_handle = *(longlong *)(render_source + 0x30);
    }
    if ((((active_state & 2) == 0) && (resource_handle != 0)) && 
        (*(int *)(resource_handle + 0x18) == *(int *)(engine_context + 1))) {
      *(int32_t *)((longlong)engine_context + 0xdc) = 2;
    }
    render_flags = *(uint *)((longlong)engine_context + 0xc);
    *(uint *)((longlong)engine_context + 0xc) = render_flags | 0x1010002;
    texture_id = render_flags & 0xfffffffe | 0x1010002;
    if ((*(byte *)(render_source + 0xa0) & 0x40) != 0) {
      texture_id = render_flags | 0x1010003;
    }
    *(uint *)((longlong)engine_context + 0xc) = texture_id;
    if (*(ulonglong *)(render_source + 0x30) != resource_counter) {
      resource_data = *(int **)(engine_context[0x81] + 0x30);
      if (((resource_data != (int *)0x0) && (*(int *)(engine_context + 1) != 0)) && (0 < *resource_data)) {
        resource_list = *(int **)(resource_data + 2);
        resource_counter = resource_counter;
        do {
          index_value = (int)resource_counter;
          if (*resource_list == *(int *)(engine_context + 1)) {
            if (*(int **)(resource_data + 2) + (longlong)index_value * 10 != (int *)0x0) {
              resource_index = (int16_t)(((longlong)index_value * 0x28) / 0x28);
              goto update_resource_index;
            }
            break;
          }
          resource_counter = (ulonglong)(index_value + 1);
          resource_counter = resource_counter + 1;
          resource_list = resource_list + 10;
        } while ((longlong)resource_counter < (longlong)*resource_data);
      }
      resource_index = 0xffff;
    update_resource_index:
      *(int16_t *)(engine_context + 0x86) = resource_index;
    }
    if ((((*(byte *)(render_source + 0xa1) & 2) != 0) ||
        (*(int *)(render_source + 0x9c) == *(int *)(engine_context + 1))) &&
       (status_output != (int8_t *)0x0)) {
      *status_output = 0;
    }
    activation_config = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
    *(int32_t *)(engine_context + 0x11) = activation_config;
  }
  return;
}





// 函数: void FUN_18013b88a(void)
// 功能: 批量激活资源并更新渲染状态
void activate_resource_batch(void)

{
  uint render_flags;
  int *resource_data;
  byte batch_flag;
  int16_t batch_index;
  int32_t batch_config;
  int *resource_list;
  uint texture_id;
  longlong resource_handle;
  uint64_t *engine_context;
  int batch_value;
  ulonglong resource_counter;
  longlong render_source;
  longlong global_data;
  byte batch_state;
  longlong render_target;
  int8_t *status_output;
  
  // 批量激活资源并设置渲染参数
  *(uint64_t *)(global_data + 0x1bf4) = *(uint64_t *)(render_source + 0x38);
  *(ulonglong *)(global_data + 0x1bfc) = resource_counter;
  *(int32_t *)(global_data + 0x1bd0) = 1;
  *(int8_t *)(global_data + 0x1c14) = 1;
  *(uint64_t *)(global_data + 0x1c04) = *(uint64_t *)(render_source + 0x40);
  *(int32_t *)(global_data + 0x1bd4) = 1;
  *(char *)(render_target + 0x1c14) = (char)resource_counter;
  batch_flag = *(byte *)((longlong)engine_context + 0x432) & 0xfd;
  batch_state = batch_flag | 1;
  *(byte *)((longlong)engine_context + 0x432) = batch_state;
  
  if ((*(byte *)(render_source + 4) & 1) == 0) {
    resource_handle = *(longlong *)(render_source + 0x30);
    if ((resource_handle != 0) && (*(int *)(resource_handle + 0x1c) == *(int *)(engine_context + 1))) {
      batch_state = batch_flag | 3;
      *(byte *)((longlong)engine_context + 0x432) = batch_state;
      resource_handle = *(longlong *)(render_source + 0x30);
    }
    if ((((batch_state & 2) == 0) && (resource_handle != 0)) && 
        (*(int *)(resource_handle + 0x18) == *(int *)(engine_context + 1))) {
      *(int32_t *)((longlong)engine_context + 0xdc) = 2;
    }
    render_flags = *(uint *)((longlong)engine_context + 0xc);
    *(uint *)((longlong)engine_context + 0xc) = render_flags | 0x1010002;
    texture_id = render_flags & 0xfffffffe | 0x1010002;
    if ((*(byte *)(render_source + 0xa0) & 0x40) != 0) {
      texture_id = render_flags | 0x1010003;
    }
    *(uint *)((longlong)engine_context + 0xc) = texture_id;
    if (*(ulonglong *)(render_source + 0x30) != resource_counter) {
      resource_data = *(int **)(engine_context[0x81] + 0x30);
      if (((resource_data != (int *)0x0) && (*(int *)(engine_context + 1) != 0)) && (0 < *resource_data)) {
        resource_list = *(int **)(resource_data + 2);
        resource_counter = resource_counter;
        do {
          batch_value = (int)resource_counter;
          if (*resource_list == *(int *)(engine_context + 1)) {
            if (*(int **)(resource_data + 2) + (longlong)batch_value * 10 != (int *)0x0) {
              batch_index = (int16_t)(((longlong)batch_value * 0x28) / 0x28);
              goto update_batch_index;
            }
            break;
          }
          resource_counter = (ulonglong)(batch_value + 1);
          resource_counter = resource_counter + 1;
          resource_list = resource_list + 10;
        } while ((longlong)resource_counter < (longlong)*resource_data);
      }
      batch_index = 0xffff;
    update_batch_index:
      *(int16_t *)(engine_context + 0x86) = batch_index;
    }
    if ((((*(byte *)(render_source + 0xa1) & 2) != 0) ||
        (*(int *)(render_source + 0x9c) == *(int *)(engine_context + 1))) &&
       (status_output != (int8_t *)0x0)) {
      *status_output = 0;
    }
    batch_config = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
    *(int32_t *)(engine_context + 0x11) = batch_config;
  }
  return;
}





// 函数: void FUN_18013b9df(void)
// 功能: 空操作函数，占位符
void noop_function(void)

{
  return;
}





// 函数: void FUN_18013b9eb(void)
// 功能: 处理资源索引和状态标志更新
void update_resource_index_and_status(void)

{
  int16_t index_value;
  int32_t status_flags;
  uint64_t *engine_context;
  int context_param;
  longlong render_source;
  longlong resource_base;
  int8_t *status_output;
  
  // 计算资源索引值
  if ((longlong)context_param * 0x28 + resource_base == 0) {
    index_value = 0xffff;
  }
  else {
    index_value = (int16_t)(((longlong)context_param * 0x28) / 0x28);
  }
  *(int16_t *)(engine_context + 0x86) = index_value;
  
  // 检查并更新状态标志
  if ((((*(byte *)(render_source + 0xa1) & 2) != 0) ||
      (*(int *)(render_source + 0x9c) == *(int *)(engine_context + 1))) &&
     (status_output != (int8_t *)0x0)) {
    *status_output = 0;
  }
  
  // 处理渲染命令
  status_flags = process_render_commands(*(uint64_t *)(engine_context[0x81] + 0x68),*engine_context);
  *(int32_t *)(engine_context + 0x11) = status_flags;
  return;
}



// WARNING: 全局变量以'_'开头可能与较小符号重叠地址



// 函数: void FUN_18013ba30(longlong param_1)
// 功能: 处理渲染参数验证和资源分配
void validate_render_parameters(longlong param_1)

{
  longlong global_context;
  char validation_result;
  int32_t xmm0_value;
  longlong render_stack[4];
  
  // 获取全局上下文
  global_context = _DAT_180c8a9b0;
  *(int32_t *)(param_1 + 0x144) = *(int32_t *)(param_1 + 0x84);
  render_stack[0] = *(longlong *)(param_1 + 0x3a0);
  
  // 验证渲染参数
  if (*(char *)(global_context + 0xc1) == '\0') {
    if (*(float *)(global_context + 0x1b48) < 0.0) {
      return;
    }
    if (*(float *)(global_context + 0x1b4c) < 0.0) {
      return;
    }
    if (*(float *)(render_stack[0] + 0x50) <= *(float *)(global_context + 0x1b48)) {
      return;
    }
    if (*(float *)(global_context + 0x1660) + *(float *)(global_context + 0x1660) + *(float *)(global_context + 0x19f8) <=
        *(float *)(global_context + 0x1b4c)) {
      return;
    }
  }
  
  // 执行渲染验证和资源分配
  validation_result = validate_render_context();
  if (validation_result != '\0') {
    allocate_render_resources(xmm0_value,render_stack);
    global_context = _DAT_180c8a9b0;
    if ((*(byte *)(_DAT_180c8a9b0 + 0x1dd4) & 1) == 0) {
      initialize_render_system();
    }
    if (*(int *)(global_context + 0x1df4) == -1) {
      setup_render_pipeline();
    }
    *(int8_t *)(global_context + 0x1dd1) = 0;
  }
  return;
}



// WARNING: 全局变量以'_'开头可能与较小符号重叠地址



// 函数: void FUN_18013baa6(void)
// 功能: 执行渲染资源分配和系统初始化
void allocate_render_resources(void)

{
  longlong global_context;
  
  // 分配渲染资源
  allocate_render_resources();
  global_context = _DAT_180c8a9b0;
  if ((*(byte *)(_DAT_180c8a9b0 + 0x1dd4) & 1) == 0) {
    initialize_render_system();
  }
  if (*(int *)(global_context + 0x1df4) == -1) {
    setup_render_pipeline();
  }
  *(int8_t *)(global_context + 0x1dd1) = 0;
  return;
}





// 函数: void FUN_18013badf(void)
// 功能: 空操作函数，占位符
void empty_function(void)

{
  return;
}



// WARNING: 全局变量以'_'开头可能与较小符号重叠地址