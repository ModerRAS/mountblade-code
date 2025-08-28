#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part156.c - 27 个函数

/**
 * 处理游戏对象的动画数据
 * @param object_ptr 对象指针
 * @param animation_id 动画ID
 */
void process_object_animation_data(uint64_t object_ptr, ulonglong animation_id)

{
  float position_x;
  float position_y;
  short animation_flag;
  longlong data_offset;
  int8_t animation_data [16];
  int *frame_count_ptr;
  ulonglong current_offset;
  longlong animation_length;
  int current_frame;
  uint64_t *object_table;
  longlong timeline_offset;
  uint animation_index;
  ulonglong timeline_base;
  longlong timeline_position;
  int timeline_frame;
  longlong in_R10;
  uint64_t extraout_XMM0_Qa;
  uint64_t texture_id;
  ulonglong render_param;
  
code_r0x00018013d378:
  current_offset = (longlong)(int)animation_id * 0x38 + in_R10;
  do {
    do {
      while( true ) {
        if (current_offset == 0) {
          current_offset = allocate_animation_buffer(*object_table);
          animation_data = SEXT816(timeline_position) *
                   SEXT816((longlong)(current_offset - *(longlong *)(object_table + 0x2e30)));
          *(int *)(object_table + 0x5c) = (int)(animation_data._8_8_ >> 4) - (animation_data._12_4_ >> 0x1f);
        }
        position_x = *(float *)(object_table + 8);
        position_y = *(float *)((longlong)object_table + 0x34);
        *(float *)(current_offset + 0x10) =
             *(float *)((longlong)object_table + 0x44) - *(float *)(object_table + 7);
        *(float *)(current_offset + 0xc) = position_x - position_y;
        *(uint64_t *)(current_offset + 0x14) = object_table[10];
        *(int32_t *)(current_offset + 0x24) = *(int32_t *)(object_table + 6);
        texture_id = *(uint64_t *)((longlong)object_table + 0x34);
        *(uint64_t *)(current_offset + 0x1c) = texture_id;
        *(int32_t *)(current_offset + 0x28) = *(int32_t *)(object_table + 0x83);
        *(int32_t *)(current_offset + 0x2c) = *(int32_t *)((longlong)object_table + 0x14);
        *(int16_t *)(current_offset + 0x30) = *(int16_t *)(object_table + 0x86);
        *(int8_t *)(current_offset + 0x32) = *(int8_t *)((longlong)object_table + 0xb2);
        do {
          timeline_frame = timeline_frame + 1;
          timeline_position = timeline_position + 8;
          if (timeline_frame == *(int *)(object_table + 0x1aa0)) {
            current_frame = (int)timeline_base;
            if (*(ulonglong *)(frame_count_ptr + 2) != timeline_base) {
              current_frame = *frame_count_ptr + -1;
            }
            render_animation_frame(texture_id,*(int *)(object_table + 0x2e28) * 0x60 + current_frame);
            current_offset = timeline_base;
            if (*(int *)(object_table + 0x2e28) != (int)timeline_base) {
              do {
                data_offset = *(longlong *)(object_table + 0x2e30);
                timeline_offset = *(longlong *)(current_offset + data_offset);
                animation_length = strstr(timeline_offset,&ANIMATION_START_MARKER);
                if (animation_length != 0) {
                  timeline_offset = animation_length;
                }
                texture_id = render_texture_data(extraout_XMM0_Qa,&TEXTURE_FORMAT_TABLE,*object_table,timeline_offset);
                current_frame = *(int *)(current_offset + 0x24 + data_offset);
                if ((current_frame != 0) && (current_frame != 0x11111111)) {
                  texture_id = render_texture_data(texture_id,&POSITION_DATA_TABLE,(int)*(float *)(current_offset + 0x1c + data_offset)
                                         ,(int)*(float *)(current_offset + 0x20 + data_offset));
                  render_texture_data(texture_id,&FRAME_DATA_TABLE,*(int32_t *)(current_offset + 0x24 + data_offset));
                }
                position_x = *(float *)(current_offset + 0xc + data_offset);
                if (((position_x != 0.0) || (*(float *)(current_offset + 0x10 + data_offset) != 0.0)) ||
                   (*(int *)(current_offset + 0x24 + data_offset) == 0x11111111)) {
                  render_texture_data(position_x,&COORDINATE_DATA_TABLE,(int)position_x,
                                (int)*(float *)(current_offset + 0x10 + data_offset));
                }
                position_x = *(float *)(current_offset + 0x14 + data_offset);
                render_param = (ulonglong)(uint)position_x;
                if ((position_x != 0.0) || (*(float *)(current_offset + 0x18 + data_offset) != 0.0)) {
                  render_param = render_texture_data(render_param,&RENDER_PARAMS_TABLE,(int)position_x,
                                         (int)*(float *)(current_offset + 0x18 + data_offset));
                }
                texture_id = render_texture_data(render_param,&TEXTURE_PARAMS_TABLE,*(int8_t *)(current_offset + 0x32 + data_offset));
                current_frame = *(int *)(current_offset + 0x28 + data_offset);
                if (current_frame != 0) {
                  animation_flag = *(short *)(current_offset + 0x30 + data_offset);
                  if (animation_flag == -1) {
                    texture_id = render_texture_data(texture_id,&ANIMATION_FLAG_TABLE);
                  }
                  else {
                    texture_id = render_texture_data(texture_id,&FRAME_INDEX_TABLE,current_frame,(int)animation_flag);
                  }
                  if (*(int *)(current_offset + 0x2c + data_offset) != 0) {
                    texture_id = render_texture_data(texture_id,&RENDER_STATE_TABLE);
                  }
                }
                render_texture_data(texture_id,&GLOBAL_RENDER_CONTEXT);
                animation_index = (int)timeline_base + 1;
                timeline_base = (ulonglong)animation_index;
                current_offset = current_offset + 0x38;
              } while (animation_index != *(uint *)(object_table + 0x2e28));
            }
            return;
          }
          object_table = *(uint64_t **)(timeline_position + *(longlong *)(object_table + 0x1aa8));
        } while ((*(uint *)((longlong)object_table + 0xc) & 0x100) != 0);
        if (*(int *)(object_table + 0x5c) == -1) break;
        current_offset = (longlong)*(int *)(object_table + 0x5c) * 0x38 + *(longlong *)(object_table + 0x2e30);
      }
      animation_id = timeline_base & 0xffffffff;
      current_offset = timeline_base;
    } while (*(int *)(GLOBAL_ENGINE_CONTEXT + 0x2e28) == 0);
    in_R10 = *(longlong *)(GLOBAL_ENGINE_CONTEXT + 0x2e30);
    frame_count_ptr = (int *)(in_R10 + 8);
    render_param = timeline_base;
    do {
      if (*frame_count_ptr == *(int *)(object_table + 1)) goto code_r0x00018013d378;
      animation_id = (ulonglong)((int)animation_id + 1);
      render_param = render_param + 1;
      frame_count_ptr = frame_count_ptr + 0xe;
    } while (render_param != (longlong)*(int *)(GLOBAL_ENGINE_CONTEXT + 0x2e28));
  } while( true );
}

/**
 * 处理动画帧渲染
 * @param render_param 渲染参数
 */
void render_animation_frame_data(int32_t render_param)

{
  short animation_flag;
  int frame_index;
  longlong data_offset;
  longlong timeline_offset;
  longlong animation_length;
  uint current_index;
  ulonglong timeline_base;
  uint64_t *object_table;
  longlong object_data;
  int32_t texture_data;
  uint64_t render_result;
  float position_data;
  float render_value;
  
  // 调用基础动画帧渲染函数
  render_base_animation_frame(render_param,*(int *)(object_data + 0x2e28) * 0x60 + (int)timeline_base);
  current_index = timeline_base;
  if (*(int *)(object_data + 0x2e28) != (int)timeline_base) {
    do {
      data_offset = *(longlong *)(object_data + 0x2e30);
      timeline_offset = *(longlong *)(current_index + data_offset);
      animation_length = strstr(timeline_offset,&ANIMATION_START_MARKER);
      if (animation_length != 0) {
        timeline_offset = animation_length;
      }
      texture_data = render_texture_data(render_result,&TEXTURE_FORMAT_TABLE,*object_table,timeline_offset);
      frame_index = *(int *)(current_index + 0x24 + data_offset);
      if ((frame_index != 0) && (frame_index != 0x11111111)) {
        texture_data = render_texture_data(texture_data,&POSITION_DATA_TABLE,(int)*(float *)(current_index + 0x1c + data_offset),
                              (int)*(float *)(current_index + 0x20 + data_offset));
        render_texture_data(texture_data,&FRAME_DATA_TABLE,*(int32_t *)(current_index + 0x24 + data_offset));
      }
      position_data = *(float *)(current_index + 0xc + data_offset);
      if (((position_data != 0.0) || (*(float *)(current_index + 0x10 + data_offset) != 0.0)) ||
         (*(int *)(current_index + 0x24 + data_offset) == 0x11111111)) {
        render_texture_data(position_data,&COORDINATE_DATA_TABLE,(int)position_data,
                      (int)*(float *)(current_index + 0x10 + data_offset));
      }
      position_data = *(float *)(current_index + 0x14 + data_offset);
      if ((position_data != 0.0) || (*(float *)(current_index + 0x18 + data_offset) != 0.0)) {
        position_data = (float)render_texture_data(position_data,&RENDER_PARAMS_TABLE,(int)position_data,
                             (int)*(float *)(current_index + 0x18 + data_offset));
      }
      texture_data = render_texture_data(position_data,&TEXTURE_PARAMS_TABLE,*(int8_t *)(current_index + 0x32 + data_offset));
      frame_index = *(int *)(current_index + 0x28 + data_offset);
      if (frame_index != 0) {
        animation_flag = *(short *)(current_index + 0x30 + data_offset);
        if (animation_flag == -1) {
          texture_data = render_texture_data(texture_data,&ANIMATION_FLAG_TABLE);
        }
        else {
          texture_data = render_texture_data(texture_data,&FRAME_INDEX_TABLE,frame_index,(int)animation_flag);
        }
        if (*(int *)(current_index + 0x2c + data_offset) != 0) {
          texture_data = render_texture_data(texture_data,&RENDER_STATE_TABLE);
        }
      }
      render_texture_data(texture_data,&GLOBAL_RENDER_CONTEXT);
      current_index = (int)timeline_base + 1;
      timeline_base = (ulonglong)current_index;
      current_index = current_index + 0x38;
    } while (current_index != *(uint *)(object_data + 0x2e28));
  }
  return;
}

/**
 * 处理动画数据循环
 * 处理动画帧的循环渲染逻辑
 */
void process_animation_data_loop(void)

{
  short animation_flag;
  int frame_index;
  longlong data_offset;
  longlong timeline_offset;
  longlong animation_length;
  uint current_index;
  ulonglong timeline_base;
  uint64_t *object_table;
  longlong object_data;
  int32_t texture_data;
  uint64_t render_result;
  float position_data;
  float render_value;
  
  current_index = timeline_base;
  do {
    data_offset = *(longlong *)(object_data + 0x2e30);
    timeline_offset = *(longlong *)(current_index + data_offset);
    animation_length = strstr(timeline_offset,&ANIMATION_START_MARKER);
    if (animation_length != 0) {
      timeline_offset = animation_length;
    }
    texture_data = render_texture_data(render_result,&TEXTURE_FORMAT_TABLE,*object_table,timeline_offset);
    frame_index = *(int *)(current_index + 0x24 + data_offset);
    if ((frame_index != 0) && (frame_index != 0x11111111)) {
      texture_data = render_texture_data(texture_data,&POSITION_DATA_TABLE,(int)*(float *)(current_index + 0x1c + data_offset),
                            (int)*(float *)(current_index + 0x20 + data_offset));
      render_texture_data(texture_data,&FRAME_DATA_TABLE,*(int32_t *)(current_index + 0x24 + data_offset));
    }
    position_data = *(float *)(current_index + 0xc + data_offset);
    if (((position_data != 0.0) || (*(float *)(current_index + 0x10 + data_offset) != 0.0)) ||
       (*(int *)(current_index + 0x24 + data_offset) == 0x11111111)) {
      render_texture_data(position_data,&COORDINATE_DATA_TABLE,(int)position_data,
                    (int)*(float *)(current_index + 0x10 + data_offset));
    }
    position_data = *(float *)(current_index + 0x14 + data_offset);
    if ((position_data != 0.0) || (*(float *)(current_index + 0x18 + data_offset) != 0.0)) {
      position_data = (float)render_texture_data(position_data,&RENDER_PARAMS_TABLE,(int)position_data,
                           (int)*(float *)(current_index + 0x18 + data_offset));
    }
    texture_data = render_texture_data(position_data,&TEXTURE_PARAMS_TABLE,*(int8_t *)(current_index + 0x32 + data_offset));
    frame_index = *(int *)(current_index + 0x28 + data_offset);
    if (frame_index != 0) {
      animation_flag = *(short *)(current_index + 0x30 + data_offset);
      if (animation_flag == -1) {
        texture_data = render_texture_data(texture_data,&ANIMATION_FLAG_TABLE);
      }
      else {
        texture_data = render_texture_data(texture_data,&FRAME_INDEX_TABLE,frame_index,(int)animation_flag);
      }
      if (*(int *)(current_index + 0x2c + data_offset) != 0) {
        texture_data = render_texture_data(texture_data,&RENDER_STATE_TABLE);
      }
    }
    render_texture_data(texture_data,&GLOBAL_RENDER_CONTEXT);
    current_index = (int)timeline_base + 1;
    timeline_base = (ulonglong)current_index;
    current_index = current_index + 0x38;
  } while (current_index != *(uint *)(object_data + 0x2e28));
  return;
}

/**
 * 空函数 - 动画处理占位符
 */
void animation_processing_placeholder(void)

{
  return;
}

/**
 * 从剪贴板读取Unicode文本数据
 * @return 返回剪贴板文本数据的指针
 */
longlong read_clipboard_unicode_text(void)

{
  ushort *text_ptr;
  ushort char_value;
  int text_length;
  int char_size;
  uint buffer_size;
  longlong clipboard_data;
  ushort *unicode_text;
  longlong new_buffer;
  uint required_size;
  uint allocated_size;
  
  // 检查是否需要初始化剪贴板功能
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)__tls_index * 8) +
               0x48) < _DAT_180d49270) && (FUN_1808fcb90(&DAT_180d49270), _DAT_180d49270 == -1)) {
    _DAT_180d49278 = 0;
    _DAT_180d49280 = 0;
    FUN_1808fc820(&UNK_180941a80);
    FUN_1808fcb30(&DAT_180d49270);
  }
  clipboard_data = _DAT_180d49280;
  if (_DAT_180d49280 == 0) {
    text_length = OpenClipboard(0);
    if (text_length != 0) {
      clipboard_data = GetClipboardData(0xd);  // CF_UNICODETEXT
      if (clipboard_data != 0) {
        unicode_text = (ushort *)GlobalLock(clipboard_data);
        if (unicode_text != (ushort *)0x0) {
          char_value = *unicode_text;
          text_ptr = unicode_text;
          text_length = 0;
          while (char_value != 0) {
            text_ptr = text_ptr + 1;
            if (char_value < 0x80) {
              char_size = 1;
            }
            else if (char_value < 0x800) {
              char_size = 2;
            }
            else {
              char_size = 0;
              if (0x3ff < (ushort)(char_value + 0x2400)) {
                char_size = ((ushort)(char_value + 0x2800) < 0x400) + 3;
              }
            }
            text_length = text_length + char_size;
            char_value = *text_ptr;
          }
          required_size = text_length + 1;
          if (_DAT_180d4927c < (int)required_size) {
            if (_DAT_180d4927c == 0) {
              buffer_size = 8;
            }
            else {
              buffer_size = _DAT_180d4927c / 2 + _DAT_180d4927c;
            }
            allocated_size = required_size;
            if ((int)required_size < (int)buffer_size) {
              allocated_size = buffer_size;
            }
            if (_DAT_180d4927c < (int)allocated_size) {
              if (_DAT_180c8a9b0 != 0) {
                *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
              }
              new_buffer = func_0x000180120ce0((longlong)(int)allocated_size,_DAT_180c8a9a8);
              if (_DAT_180d49280 != 0) {
                memcpy(new_buffer,_DAT_180d49280,(longlong)_DAT_180d49278);
              }
              _DAT_180d49278 = (ulonglong)allocated_size << 0x20;
              _DAT_180d49280 = new_buffer;
            }
          }
          _DAT_180d49278 = CONCAT44(_DAT_180d4927c,required_size);
          FUN_180121c40(_DAT_180d49280,required_size,unicode_text,0);
        }
        GlobalUnlock(clipboard_data);
        CloseClipboard();
        return _DAT_180d49280;
      }
      CloseClipboard();
    }
    return 0;
  }
  _DAT_180d49278 = 0;
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(clipboard_data,_DAT_180c8a9a8);
}

/**
 * 向剪贴板写入Unicode文本数据
 * @param param1 保留参数
 * @param param2 文本数据指针
 * @param param3 保留参数
 * @param param4 保留参数
 */
void write_clipboard_unicode_text(uint64_t param1,uint64_t param2,uint64_t param3,uint64_t param4)

{
  uint64_t clipboard_handle;
  longlong memory_handle;
  int text_length;
  longlong result;
  
  text_length = OpenClipboard(0);
  if (text_length != 0) {
    text_length = FUN_1801219c0(param2,0);
    memory_handle = GlobalAlloc(2,(longlong)(text_length + 1) * 2);
    if (memory_handle != 0) {
      clipboard_handle = GlobalLock(memory_handle);
      FUN_180121740(clipboard_handle,text_length + 1,param2,param4,0);
      GlobalUnlock(memory_handle);
      EmptyClipboard();
      result = SetClipboardData(0xd,memory_handle);
      if (result == 0) {
        GlobalFree(memory_handle);
      }
    }
    CloseClipboard();
  }
  return;
}

/**
 * 向剪贴板写入默认Unicode文本
 * 写入内部文本数据到剪贴板
 */
void write_default_clipboard_text(void)

{
  int text_length;
  longlong memory_handle;
  uint64_t clipboard_handle;
  longlong result;
  
  text_length = FUN_1801219c0();
  memory_handle = GlobalAlloc(2,(longlong)(text_length + 1) * 2);
  if (memory_handle != 0) {
    clipboard_handle = GlobalLock(memory_handle);
    FUN_180121740(clipboard_handle,text_length + 1);
    GlobalUnlock(memory_handle);
    EmptyClipboard();
    result = SetClipboardData(0xd,memory_handle);
    if (result == 0) {
      GlobalFree(memory_handle);
    }
  }
  CloseClipboard();
  return;
}

/**
 * 空函数 - 剪贴板处理占位符
 */
void clipboard_processing_placeholder(void)

{
  return;
}

/**
 * 向数组中添加指针元素
 * @param array_ptr 数组指针
 * @param element_ptr 元素指针
 */
void add_pointer_to_array(int *array_ptr,uint64_t *element_ptr)

{
  int current_size;
  int new_size;
  uint64_t new_buffer;
  int required_size;
  
  current_size = array_ptr[1];
  if (*array_ptr == current_size) {
    required_size = *array_ptr + 1;
    if (current_size == 0) {
      new_size = 8;
    }
    else {
      new_size = current_size / 2 + current_size;
    }
    if (required_size < new_size) {
      required_size = new_size;
    }
    if (current_size < required_size) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      new_buffer = func_0x000180120ce0((longlong)required_size << 3,_DAT_180c8a9a8);
      if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 3);
      }
      *(uint64_t *)(array_ptr + 2) = new_buffer;
      array_ptr[1] = required_size;
    }
  }
  *(uint64_t *)(*(longlong *)(array_ptr + 2) + (longlong)*array_ptr * 8) = *element_ptr;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 向数组中添加指针元素（寄存器版本）
 * 处理指针数组元素的添加操作
 */
void add_pointer_to_array_reg(void)

{
  longlong memory_tracker;
  uint64_t new_buffer;
  int *array_ptr;
  int new_capacity;
  uint64_t *element_ptr;
  
  if (memory_tracker != 0) {
    *(int *)(memory_tracker + 0x3a8) = *(int *)(memory_tracker + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0((longlong)new_capacity << 3,_DAT_180c8a9a8);
  if (*(longlong *)(array_ptr + 2) != 0) {
    memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 3);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = new_capacity;
  *(uint64_t *)(*(longlong *)(array_ptr + 2) + (longlong)*array_ptr * 8) = *element_ptr;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 向数组中添加指针元素（简化版本）
 * 快速添加指针到数组
 */
void add_pointer_to_array_simple(void)

{
  int *array_ptr;
  uint64_t *element_ptr;
  
  *(uint64_t *)(*(longlong *)(array_ptr + 2) + (longlong)*array_ptr * 8) = *element_ptr;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 释放对象资源
 * @param object_ptr 对象指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_object_resources(uint64_t *object_ptr,uint64_t param2,uint64_t param3,uint64_t param4)

{
  longlong resource_ptr;
  
  resource_ptr = object_ptr[3];
  if (resource_ptr != 0) {
    object_ptr[2] = 0;
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  resource_ptr = object_ptr[1];
  if (resource_ptr != 0) {
    *object_ptr = 0;
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  *(int32_t *)(object_ptr + 4) = 0;
  resource_ptr = object_ptr[3];
  if (resource_ptr != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  resource_ptr = object_ptr[1];
  if (resource_ptr != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  return;
}

/**
 * 调整数组容量
 * @param array_ptr 数组指针
 * @param new_capacity 新容量
 */
void resize_array_capacity(int *array_ptr,int new_capacity)

{
  uint64_t new_buffer;
  
  if (array_ptr[1] < new_capacity) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)new_capacity << 5,_DAT_180c8a9a8);
    if (*(longlong *)(array_ptr + 2) != 0) {
      memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 5);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = new_capacity;
  }
  return;
}

/**
 * 调整数组容量（寄存器版本）
 * 处理数组容量的动态调整
 */
void resize_array_capacity_reg(void)

{
  longlong memory_tracker;
  uint64_t new_buffer;
  int *array_ptr;
  longlong new_capacity;
  
  if (memory_tracker != 0) {
    *(int *)(memory_tracker + 0x3a8) = *(int *)(memory_tracker + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0(new_capacity << 5,_DAT_180c8a9a8);
  if (*(longlong *)(array_ptr + 2) != 0) {
    memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr << 5);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = (int)new_capacity;
  return;
}

/**
 * 空函数 - 数组处理占位符
 */
void array_processing_placeholder(void)

{
  return;
}

/**
 * 初始化数组元素
 * @param array_ptr 数组指针
 */
void initialize_array_element(int32_t *array_ptr)

{
  int current_size;
  int new_size;
  
  current_size = array_ptr[1];
  if (current_size < 1) {
    if (current_size == 0) {
      new_size = 8;
    }
    else {
      new_size = current_size / 2 + current_size;
    }
    current_size = 1;
    if (1 < new_size) {
      current_size = new_size;
    }
    FUN_18011dbd0(array_ptr,current_size);
    *array_ptr = 1;
    return;
  }
  *array_ptr = 1;
  return;
}

/**
 * 设置数组大小
 * @param array_ptr 数组指针
 * @param new_size 新大小
 */
void set_array_size(int *array_ptr,int new_size)

{
  int current_size;
  int expanded_size;
  uint64_t new_buffer;
  int required_size;
  
  current_size = array_ptr[1];
  if (new_size <= current_size) {
    *array_ptr = new_size;
    return;
  }
  if (current_size == 0) {
    expanded_size = 8;
  }
  else {
    expanded_size = current_size / 2 + current_size;
  }
  required_size = new_size;
  if (new_size < expanded_size) {
    required_size = expanded_size;
  }
  if (current_size < required_size) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)required_size * 0x30,_DAT_180c8a9a8);
    if (*(longlong *)(array_ptr + 2) != 0) {
      memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr * 0x30);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = required_size;
    *array_ptr = new_size;
    return;
  }
  *array_ptr = new_size;
  return;
}

/**
 * 设置数组大小（寄存器版本）
 * 处理数组大小的动态设置
 */
void set_array_size_reg(int current_size)

{
  int expanded_size;
  uint64_t new_buffer;
  int *array_ptr;
  int required_size;
  int new_size;
  
  if (current_size == 0) {
    expanded_size = 8;
  }
  else {
    expanded_size = current_size / 2 + current_size;
  }
  required_size = new_size;
  if (new_size < expanded_size) {
    required_size = expanded_size;
  }
  if (current_size < required_size) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)required_size * 0x30,_DAT_180c8a9a8);
    if (*(longlong *)(array_ptr + 2) != 0) {
      memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr * 0x30);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = required_size;
    *array_ptr = new_size;
    return;
  }
  *array_ptr = new_size;
  return;
}

/**
 * 设置无符号整数数组元素
 * 设置无符号整数数组中的元素值
 */
void set_uint_array_element(void)

{
  int32_t *array_ptr;
  int32_t element_value;
  
  *array_ptr = element_value;
  return;
}

/**
 * 设置无符号整数数组元素（简化版本）
 * 快速设置无符号整数数组元素
 */
void set_uint_array_element_simple(void)

{
  int32_t *array_ptr;
  int32_t element_value;
  
  *array_ptr = element_value;
  return;
}

/**
 * 向结构体数组中添加元素
 * @param array_ptr 数组指针
 * @param element_ptr 元素指针
 */
void add_struct_to_array(int *array_ptr,uint64_t *element_ptr)

{
  uint64_t *dest_ptr;
  int current_size;
  longlong data_offset;
  int new_size;
  uint64_t new_buffer;
  longlong base_offset;
  int required_size;
  
  current_size = array_ptr[1];
  if (*array_ptr == current_size) {
    required_size = *array_ptr + 1;
    if (current_size == 0) {
      new_size = 8;
    }
    else {
      new_size = current_size / 2 + current_size;
    }
    if (required_size < new_size) {
      required_size = new_size;
    }
    if (current_size < required_size) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
      }
      new_buffer = func_0x000180120ce0((longlong)required_size * 0x30,_DAT_180c8a9a8);
      if (*(longlong *)(array_ptr + 2) != 0) {
        memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr * 0x30);
      }
      *(uint64_t *)(array_ptr + 2) = new_buffer;
      array_ptr[1] = required_size;
    }
  }
  base_offset = (longlong)*array_ptr;
  new_buffer = element_ptr[1];
  data_offset = *(longlong *)(array_ptr + 2);
  dest_ptr = (uint64_t *)(data_offset + base_offset * 0x30);
  *dest_ptr = *element_ptr;
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[3];
  dest_ptr = (uint64_t *)(data_offset + 0x10 + base_offset * 0x30);
  *dest_ptr = element_ptr[2];
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[5];
  dest_ptr = (uint64_t *)(data_offset + 0x20 + base_offset * 0x30);
  *dest_ptr = element_ptr[4];
  dest_ptr[1] = new_buffer;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 向结构体数组中添加元素（寄存器版本）
 * 处理结构体数组元素的添加操作
 */
void add_struct_to_array_reg(void)

{
  uint64_t *dest_ptr;
  longlong data_offset;
  longlong memory_tracker;
  uint64_t new_buffer;
  longlong base_offset;
  int *array_ptr;
  uint64_t *element_ptr;
  int new_capacity;
  
  if (memory_tracker != 0) {
    *(int *)(memory_tracker + 0x3a8) = *(int *)(memory_tracker + 0x3a8) + 1;
  }
  new_buffer = func_0x000180120ce0((longlong)new_capacity * 0x30,_DAT_180c8a9a8);
  if (*(longlong *)(array_ptr + 2) != 0) {
    memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr * 0x30);
  }
  *(uint64_t *)(array_ptr + 2) = new_buffer;
  array_ptr[1] = new_capacity;
  base_offset = (longlong)*array_ptr;
  new_buffer = element_ptr[1];
  data_offset = *(longlong *)(array_ptr + 2);
  dest_ptr = (uint64_t *)(data_offset + base_offset * 0x30);
  *dest_ptr = *element_ptr;
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[3];
  dest_ptr = (uint64_t *)(data_offset + 0x10 + base_offset * 0x30);
  *dest_ptr = element_ptr[2];
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[5];
  dest_ptr = (uint64_t *)(data_offset + 0x20 + base_offset * 0x30);
  *dest_ptr = element_ptr[4];
  dest_ptr[1] = new_buffer;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 向结构体数组中添加元素（简化版本）
 * 快速添加结构体到数组
 */
void add_struct_to_array_simple(void)

{
  uint64_t *dest_ptr;
  longlong data_offset;
  uint64_t new_buffer;
  longlong base_offset;
  int *array_ptr;
  uint64_t *element_ptr;
  
  base_offset = (longlong)*array_ptr;
  new_buffer = element_ptr[1];
  data_offset = *(longlong *)(array_ptr + 2);
  dest_ptr = (uint64_t *)(data_offset + base_offset * 0x30);
  *dest_ptr = *element_ptr;
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[3];
  dest_ptr = (uint64_t *)(data_offset + 0x10 + base_offset * 0x30);
  *dest_ptr = element_ptr[2];
  dest_ptr[1] = new_buffer;
  new_buffer = element_ptr[5];
  dest_ptr = (uint64_t *)(data_offset + 0x20 + base_offset * 0x30);
  *dest_ptr = element_ptr[4];
  dest_ptr[1] = new_buffer;
  *array_ptr = *array_ptr + 1;
  return;
}

/**
 * 释放容器资源
 * @param container_ptr 容器指针
 * @param param2 保留参数
 * @param param3 保留参数
 * @param param4 保留参数
 */
void release_container_resources(uint64_t *container_ptr,uint64_t param2,uint64_t param3,uint64_t param4)

{
  int *size_ptr;
  int index;
  longlong resource_ptr;
  ulonglong offset;
  uint current_index;
  ulonglong max_index;
  
  offset = 0;
  size_ptr = (int *)(container_ptr + 2);
  max_index = offset;
  if (0 < *size_ptr) {
    do {
      index = *(int *)(container_ptr[3] + 8 + offset);
      if ((index != -1) &&
         (resource_ptr = *(longlong *)((longlong)index * 0x60 + container_ptr[1] + 8), resource_ptr != 0)) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
        FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
      }
      current_index = (int)max_index + 1;
      offset = offset + 0x10;
      max_index = (ulonglong)current_index;
    } while ((int)current_index < *size_ptr);
  }
  resource_ptr = container_ptr[3];
  if (resource_ptr != 0) {
    size_ptr[0] = 0;
    size_ptr[1] = 0;
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  resource_ptr = container_ptr[1];
  if (resource_ptr == 0) {
    *(int32_t *)(container_ptr + 4) = 0;
    resource_ptr = container_ptr[3];
    if (resource_ptr != 0) {
      if (_DAT_180c8a9b0 != 0) {
        *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
      }
      FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
    }
    resource_ptr = container_ptr[1];
    if (resource_ptr == 0) {
      return;
    }
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
    FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
  }
  *container_ptr = 0;
  if (_DAT_180c8a9b0 != 0) {
    *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(resource_ptr,_DAT_180c8a9a8,param3,param4,0xfffffffffffffffe);
}

/**
 * 设置简单数组大小
 * @param array_ptr 数组指针
 * @param new_size 新大小
 */
void set_simple_array_size(int *array_ptr,int new_size)

{
  int current_size;
  int expanded_size;
  uint64_t new_buffer;
  int required_size;
  
  current_size = array_ptr[1];
  if (new_size <= current_size) {
    *array_ptr = new_size;
    return;
  }
  if (current_size == 0) {
    expanded_size = 8;
  }
  else {
    expanded_size = current_size / 2 + current_size;
  }
  required_size = new_size;
  if (new_size < expanded_size) {
    required_size = expanded_size;
  }
  if (current_size < required_size) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)required_size,_DAT_180c8a9a8);
    if (*(longlong *)(array_ptr + 2) != 0) {
      memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = required_size;
    *array_ptr = new_size;
    return;
  }
  *array_ptr = new_size;
  return;
}

/**
 * 设置简单数组大小（寄存器版本）
 * 处理简单数组大小的动态设置
 */
void set_simple_array_size_reg(int current_size)

{
  int expanded_size;
  uint64_t new_buffer;
  int *array_ptr;
  int required_size;
  int new_size;
  
  if (current_size == 0) {
    expanded_size = 8;
  }
  else {
    expanded_size = current_size / 2 + current_size;
  }
  required_size = new_size;
  if (new_size < expanded_size) {
    required_size = expanded_size;
  }
  if (current_size < required_size) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + 1;
    }
    new_buffer = func_0x000180120ce0((longlong)required_size,_DAT_180c8a9a8);
    if (*(longlong *)(array_ptr + 2) != 0) {
      memcpy(new_buffer,*(longlong *)(array_ptr + 2),(longlong)*array_ptr);
    }
    *(uint64_t *)(array_ptr + 2) = new_buffer;
    array_ptr[1] = required_size;
    *array_ptr = new_size;
    return;
  }
  *array_ptr = new_size;
  return;
}

/**
 * 设置整数数组元素
 * 设置整数数组中的元素值
 */
void set_int_array_element(void)

{
  int32_t *array_ptr;
  int32_t element_value;
  
  *array_ptr = element_value;
  return;
}

/**
 * 设置整数数组元素（简化版本）
 * 快速设置整数数组元素
 */
void set_int_array_element_simple(void)

{
  int32_t *array_ptr;
  int32_t element_value;
  
  *array_ptr = element_value;
  return;
}