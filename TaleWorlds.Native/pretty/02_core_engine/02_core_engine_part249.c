#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part249.c - 渲染管线和资源管理函数
// 包含5个函数，主要处理渲染管线状态、资源查询、字符串比较等功能

/**
 * 处理渲染管线状态更新
 * 根据不同的渲染类型执行相应的状态更新和资源管理
 * 
 * @param render_context 渲染上下文指针
 * @param render_type 渲染类型 (8=标准渲染, 0x20=批处理渲染, 0x80=纹理渲染, 0x100=清理渲染)
 * @param resource_handle 资源句柄
 * @param output_param 输出参数指针
 */
void update_render_pipeline_state(longlong render_context, int render_type, longlong resource_handle, longlong output_param)
{
  longlong *resource_ptr;
  longlong texture_data;
  int32_t texture_info;
  uint format_flags;
  int lock_result;
  void *string_ptr;
  int8_t stack_buffer[32];
  longlong *temp_ptr1;
  longlong temp_value1;
  longlong *temp_ptr2;
  uint64_t param_block1;
  int32_t param_block2;
  int32_t param_block3;
  uint64_t param_block4;
  int32_t param_block5;
  int8_t large_buffer[200];
  int32_t render_param1;
  int32_t render_param2;
  int32_t render_param3;
  ulonglong security_cookie;
  
  param_block4 = 0xfffffffffffffffe;
  security_cookie = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  
  // 处理标准渲染和批处理渲染
  if (((render_type == 8) || (render_type == 0x20)) &&
     ((*(longlong *)(render_context + 0x308) != 0 || (*(longlong *)(render_context + 0x310) != 0)))) {
    
    resource_ptr = (longlong *)0x0;
    get_resource_info(resource_handle, &resource_ptr);
    temp_value1 = 0;
    get_texture_dimensions(resource_ptr, &temp_value1);
    
    if ((temp_value1 != 0) && (-1 < *(int *)(temp_value1 + 8))) {
      texture_info = get_texture_format(resource_handle, &render_param1);
      validate_texture_format(texture_info, &DEFAULT_TEXTURE_FORMAT);
      param_block1 = CONCAT44(render_param3, render_param1);
      param_block2 = render_param2;
      param_block3 = 0x7f7fffff; // 最大浮点数值
      
      // 调用渲染管线处理函数
      (**(code **)(render_context + 0x310))
                (*(uint64_t *)(render_context + 0x308), render_type == 8, *(int32_t *)(temp_value1 + 8),
                 &param_block1);
    }
  }
  
  // 处理批处理渲染
  if (render_type == 0x20) {
    resource_ptr = (longlong *)0x0;
    temp_value1 = resource_handle;
    texture_info = get_resource_reference(resource_handle, &resource_ptr);
    validate_texture_format(texture_info, &DEFAULT_TEXTURE_FORMAT);
    release_resource_reference(resource_handle, 0);
    
    if ((resource_ptr == (longlong *)0x0) || (texture_data = *resource_ptr, texture_data == 0)) {
      param_block1 = render_context + 0x60;
      lock_result = _Mtx_lock(param_block1);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      get_render_queue_data(render_context + 0x410, &temp_value1);
    }
    else {
      param_block1 = render_context + 0x60;
      if (*(longlong *)(texture_data + 0x80) == resource_handle) {
        lock_result = _Mtx_lock();
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        temp_value1 = CONCAT44(temp_value1._4_4_, *(int32_t *)(texture_data + 0x50));
        update_batch_resources(render_context + 0xb0, &temp_value1);
      }
      else {
        lock_result = _Mtx_lock(param_block1);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        get_render_queue_data(render_context + 0x410, &temp_value1);
      }
    }
    lock_result = _Mtx_unlock(render_context + 0x60);
    if (lock_result != 0) {
      __Throw_C_error_std__YAXH_Z(lock_result);
    }
  }
  else if (render_type == 0x80) {
    // 处理纹理渲染
    resource_ptr = (longlong *)0x0;
    texture_info = get_resource_reference(resource_handle, &resource_ptr);
    validate_texture_format(texture_info, &DEFAULT_TEXTURE_FORMAT);
    
    if (((resource_ptr != (longlong *)0x0) && (texture_data = *resource_ptr, texture_data != 0)) &&
       (*(int *)(texture_data + 0x10) != 0)) {
      
      temp_value1 = 0;
      if (*(int *)(texture_data + 0x10) != 1) {
        param_block5 = 0;
        // WARNING: Subroutine does not return
        memset(large_buffer, 0, 200);
      }
      
      format_flags = 8;
      if (*(char *)(texture_data + 0x49) != '\0') {
        format_flags = 0x10;
      }
      
      uint combined_flags = format_flags | 0x10000;
      if (*(char *)(texture_data + 0x48) != '\0') {
        combined_flags = format_flags;
      }
      
      string_ptr = &DEFAULT_TEXTURE_FORMAT;
      if (*(void **)(texture_data + 0x20) != (void *)0x0) {
        string_ptr = *(void **)(texture_data + 0x20);
      }
      
      temp_ptr1 = &temp_value1;
      texture_info = create_texture_resource(*(uint64_t *)(render_context + 0x370), string_ptr, combined_flags, 0);
      string_ptr = &DEFAULT_TEXTURE_FORMAT;
      if (*(void **)(texture_data + 0x20) != (void *)0x0) {
        string_ptr = *(void **)(texture_data + 0x20);
      }
      
      validate_texture_format(texture_info, string_ptr);
      *(longlong *)(output_param + 8) = temp_value1;
    }
  }
  else if (render_type == 0x100) {
    // 处理清理渲染
    cleanup_render_resource(*(uint64_t *)(output_param + 8));
  }
  
  // WARNING: Subroutine does not return
  security_cleanup(security_cookie ^ (ulonglong)stack_buffer);
}


/**
 * 获取资源的时间戳信息
 * 用于计算资源的生命周期或使用时间
 * 
 * @param resource_id 资源ID
 * @param resource_type 资源类型
 * @return 时间戳信息（转换为毫秒）
 */
float get_resource_timestamp(uint64_t resource_id, uint64_t resource_type)
{
  longlong resource_ptr;
  int timestamp_buffer[4];
  
  resource_ptr = find_resource_by_id(resource_id, resource_type, 0);
  if (resource_ptr != 0) {
    timestamp_buffer[0] = -1;
    get_resource_timestamp_internal(resource_ptr, timestamp_buffer);
    return (float)timestamp_buffer[0] * 0.001; // 转换为毫秒
  }
  return -1.0;
}


/**
 * 查找并处理渲染资源
 * 根据给定的参数查找资源，如果找到则进行相应的处理
 * 
 * @param render_context 渲染上下文
 * @param output_ptr 输出指针
 * @param param_array 参数数组
 * @param process_flag 处理标志
 * @param additional_data 附加数据
 * @return 资源指针或输出指针
 */
longlong *process_render_resource(longlong render_context, longlong *output_ptr, int *param_array, int32_t process_flag, longlong additional_data)
{
  int32_t process_result;
  int search_result;
  uint string_length;
  uint buffer_size;
  longlong resource_ptr;
  uint64_t *string_buffer;
  uint64_t format_string;
  int8_t *message_ptr;
  longlong *result_ptr;
  ulonglong total_length;
  uint allocated_size;
  longlong *temp_result;
  void *error_msg_ptr;
  uint64_t *format_buffer1;
  int32_t format_length1;
  uint64_t format_string1;
  void *error_msg_ptr1;
  uint64_t *format_buffer2;
  int32_t format_length2;
  uint64_t format_string2;
  void *error_msg_ptr2;
  uint64_t *format_buffer3;
  int32_t format_length3;
  uint64_t format_string3;
  void *error_msg_ptr3;
  longlong temp_value1;
  int32_t temp_param1;
  void *temp_ptr1;
  longlong temp_value2;
  int32_t temp_param2;
  int8_t stack_buffer1[32];
  void *temp_ptr2;
  longlong temp_value3;
  int32_t temp_param3;
  void *temp_ptr3;
  longlong temp_value4;
  int32_t temp_param4;
  int8_t stack_buffer2[32];
  uint64_t security_cookie;
  longlong *temp_ptr4;
  longlong *temp_ptr5;
  
  security_cookie = 0xfffffffffffffffe;
  
  // 检查是否启用了快速路径
  if (*(char *)(render_context + 0x210) != '\0') {
    result_ptr = *(longlong **)(render_context + 0x1e8);
    *output_ptr = (longlong)result_ptr;
    if (result_ptr == (longlong *)0x0) {
      return output_ptr;
    }
    (**(code **)(*result_ptr + 0x28))();
    return output_ptr;
  }
  
  // 处理非标准路径
  if (*param_array != 1) {
    resource_ptr = find_resource_by_params(render_context, param_array + 2, 1);
    if (additional_data == 0) goto STANDARD_PROCESSING;
    if (resource_ptr != 0) goto RESOURCE_FOUND;
    
    // 创建错误消息：资源未找到
    error_msg_ptr = &DEFAULT_ERROR_MESSAGE;
    format_string3 = 0;
    format_buffer3 = (uint64_t *)0x0;
    format_length3 = 0;
    string_buffer = (uint64_t *)allocate_string_buffer(_DAT_180c8ed18, 0x10, 0x13);
    *(int8_t *)string_buffer = 0;
    format_buffer3 = string_buffer;
    process_result = get_string_length(string_buffer);
    format_string3 = CONCAT44(format_string3._4_4_, process_result);
    *string_buffer = 0x2220656e656353; // "Scene" 字符串的一部分
    format_length3 = 7;
    
    format_string = build_error_message(&error_msg_ptr, stack_buffer2, additional_data + 0x4d8);
    
    // 创建详细错误信息
    error_msg_ptr1 = &DEFAULT_ERROR_MESSAGE;
    format_string2 = 0;
    format_buffer2 = (uint64_t *)0x0;
    format_length2 = 0;
    string_buffer = (uint64_t *)allocate_string_buffer(_DAT_180c8ed18, 0x37, 0x13);
    *(int8_t *)string_buffer = 0;
    format_buffer2 = string_buffer;
    process_result = get_string_length(string_buffer);
    format_string2 = CONCAT44(format_string2._4_4_, process_result);
    *string_buffer = 0x2064656972742022; // " dirty " 字符串的一部分
    string_buffer[1] = 0x636f6c6c61206f74; // "t alloc" 字符串的一部分
    *(int32_t *)(string_buffer + 2) = 0x20657461; // " ate " 字符串的一部分
    *(int32_t *)((longlong)string_buffer + 0x14) = 0x69206e61; // " ani " 字符串的一部分
    *(int32_t *)(string_buffer + 3) = 0x6c61766e; // "naval" 字符串的一部分
    *(int32_t *)((longlong)string_buffer + 0x1c) = 0x73206469; // " dis " 字符串的一部分
    *(int32_t *)(string_buffer + 4) = 0x646e756f; // "ound " 字符串的一部分
    *(int32_t *)((longlong)string_buffer + 0x24) = 0x65766520; // " eve " 字符串的一部分
    *(int32_t *)(string_buffer + 5) = 0x7720746e; // "nt w " 字符串的一部分
    *(int32_t *)((longlong)string_buffer + 0x2c) = 0x20687469; // " ith " 字符串的一部分
    *(int32_t *)(string_buffer + 6) = 0x656d616e; // "name" 字符串的一部分
    *(int16_t *)((longlong)string_buffer + 0x34) = 0x2220; // " \"" 字符串的一部分
    *(int8_t *)((longlong)string_buffer + 0x36) = 0;
    format_length2 = 0x36;
    
    format_string = build_error_message(format_string, &temp_ptr3, &error_msg_ptr1);
    resource_ptr = build_error_message(format_string, &temp_ptr2, param_array + 2);
    
    message_ptr = (int8_t *)0x0;
    allocated_size = 0;
    buffer_size = *(uint *)(resource_ptr + 0x10);
    total_length = (ulonglong)buffer_size;
    string_length = 0;
    
    if (*(longlong *)(resource_ptr + 8) == 0) {
STRING_COPY_LOOP:
      allocated_size = string_length;
      if (buffer_size != 0) {
        // WARNING: Subroutine does not return
        memcpy(message_ptr, *(uint64_t *)(resource_ptr + 8), total_length);
      }
    }
    else if (buffer_size != 0) {
      search_result = buffer_size + 1;
      if (search_result < 0x10) {
        search_result = 0x10;
      }
      message_ptr = (int8_t *)allocate_string_buffer(_DAT_180c8ed18, (longlong)search_result, 0x13);
      *message_ptr = 0;
      string_length = get_string_length(message_ptr);
      goto STRING_COPY_LOOP;
    }
    
    if (message_ptr != (int8_t *)0x0) {
      message_ptr[total_length] = 0;
    }
    
    if (buffer_size != 0xfffffffe) {
      buffer_size = buffer_size + 3;
      if (message_ptr == (int8_t *)0x0) {
        if ((int)buffer_size < 0x10) {
          buffer_size = 0x10;
        }
        message_ptr = (int8_t *)allocate_string_buffer(_DAT_180c8ed18, (longlong)(int)buffer_size, 0x13);
        *message_ptr = 0;
      }
      else {
        if (buffer_size <= allocated_size) goto FINALIZE_STRING;
        message_ptr = (int8_t *)reallocate_string_buffer(_DAT_180c8ed18, message_ptr, buffer_size, 0x10, 0x13);
      }
      get_string_length(message_ptr);
    }
    
FINALIZE_STRING:
    *(int16_t *)(message_ptr + total_length) = 0xa22;
    message_ptr[total_length + 2] = 0;
    temp_ptr2 = &DEFAULT_ERROR_MESSAGE;
    if (temp_value3 != 0) {
      // WARNING: Subroutine does not return
      cleanup_string_buffer();
    }
    temp_value3 = 0;
    temp_param3 = 0;
    temp_ptr2 = &DEFAULT_STRING_BUFFER;
    temp_ptr3 = &DEFAULT_ERROR_MESSAGE;
    if (temp_value4 != 0) {
      // WARNING: Subroutine does not return
      cleanup_string_buffer();
    }
    temp_value4 = 0;
    temp_param4 = 0;
    temp_ptr3 = &DEFAULT_STRING_BUFFER;
    error_msg_ptr1 = &DEFAULT_ERROR_MESSAGE;
    // WARNING: Subroutine does not return
    cleanup_string_buffer(format_buffer2);
  }
  
  // 查找资源
  resource_ptr = find_resource_by_id(render_context, param_array[10]);
  if (additional_data == 0) {
STANDARD_PROCESSING:
    if (resource_ptr == 0) {
      result_ptr = *(longlong **)(render_context + 0x1e8);
      *output_ptr = (longlong)result_ptr;
      if (result_ptr == (longlong *)0x0) {
        return output_ptr;
      }
      (**(code **)(*result_ptr + 0x28))();
      return output_ptr;
    }
    
RESOURCE_FOUND:
    process_render_command(render_context, output_ptr);
    process_result = 8;
    if (*output_ptr == 0) {
      result_ptr = (longlong *)allocate_resource_structure(_DAT_180c8ed18, 0xb8, 8, 3);
      *result_ptr = (longlong)&RESOURCE_VTABLE_START;
      *result_ptr = (longlong)&RESOURCE_VTABLE_END;
      *(int32_t *)(result_ptr + 1) = 0;
      *result_ptr = (longlong)&RESOURCE_DATA_START;
      temp_result = result_ptr;
      initialize_resource_callbacks(result_ptr + 2);
      *(int32_t *)(result_ptr + 10) = process_flag;
      result_ptr[0xb] = additional_data;
      
      if (*(int *)(_DAT_180c8a9c8 + 0x9a0) != 0) {
        _DAT_180c967dc = _DAT_180c967dc + 1;
        log_resource_event(_DAT_180c86928, 0, 0x1000000000000, 3, &RESOURCE_EVENT_ID, _DAT_180c967dc, process_result, temp_result);
      }
      
      *result_ptr = (longlong)&RESOURCE_PROCESSOR_START;
      result_ptr[0x11] = 0;
      *(int32_t *)(result_ptr + 0x12) = 0xffffffff;
      temp_ptr4 = result_ptr + 0x13;
      result_ptr[0x15] = 0;
      result_ptr[0x16] = (longlong)_guard_check_icall;
      setup_resource_processing(result_ptr, resource_ptr, process_flag, additional_data);
      temp_ptr5 = result_ptr;
      (**(code **)(*result_ptr + 0x28))(result_ptr);
      (**(code **)(*result_ptr + 0x28))(result_ptr);
      temp_result = (longlong *)*output_ptr;
      *output_ptr = (longlong)result_ptr;
      if (temp_result != (longlong *)0x0) {
        (**(code **)(*temp_result + 0x38))();
      }
      (**(code **)(*result_ptr + 0x38))(result_ptr);
    }
    else {
      setup_resource_processing(*output_ptr, resource_ptr, process_flag, additional_data);
    }
    return output_ptr;
  }
  
  if (resource_ptr != 0) goto RESOURCE_FOUND;
  
  // 创建资源未找到的错误消息
  error_msg_ptr2 = &DEFAULT_ERROR_MESSAGE;
  format_string1 = 0;
  format_buffer1 = (uint64_t *)0x0;
  format_length1 = 0;
  string_buffer = (uint64_t *)allocate_string_buffer(_DAT_180c8ed18, 0x10, 0x13);
  *(int8_t *)string_buffer = 0;
  format_buffer1 = string_buffer;
  process_result = get_string_length(string_buffer);
  format_string1 = CONCAT44(format_string1._4_4_, process_result);
  *string_buffer = 0x2220656e656353; // "Scene" 字符串的一部分
  format_length1 = 7;
  
  format_string = build_error_message(&error_msg_ptr2, stack_buffer1, additional_data + 0x4d8);
  
  error_msg_ptr = &DEFAULT_ERROR_MESSAGE;
  format_string3 = 0;
  format_buffer3 = (uint64_t *)0x0;
  format_length3 = 0;
  string_buffer = (uint64_t *)allocate_string_buffer(_DAT_180c8ed18, 0x37, 0x13);
  *(int8_t *)string_buffer = 0;
  format_buffer3 = string_buffer;
  process_result = get_string_length(string_buffer);
  format_string3 = CONCAT44(format_string3._4_4_, process_result);
  *string_buffer = 0x2064656972742022; // " dirty " 字符串的一部分
  string_buffer[1] = 0x636f6c6c61206f74; // "t alloc" 字符串的一部分
  *(int32_t *)(string_buffer + 2) = 0x20657461; // " ate " 字符串的一部分
  *(int32_t *)((longlong)string_buffer + 0x14) = 0x69206e61; // " ani " 字符串的一部分
  *(int32_t *)(string_buffer + 3) = 0x6c61766e; // "naval" 字符串的一部分
  *(int32_t *)((longlong)string_buffer + 0x1c) = 0x73206469; // " dis " 字符串的一部分
  *(int32_t *)(string_buffer + 4) = 0x646e756f; // "ound " 字符串的一部分
  *(int32_t *)((longlong)string_buffer + 0x24) = 0x65766520; // " eve " 字符串的一部分
  *(int32_t *)(string_buffer + 5) = 0x7720746e; // "nt w " 字符串的一部分
  *(int32_t *)((longlong)string_buffer + 0x2c) = 0x20687469; // " ith " 字符串的一部分
  *(int32_t *)(string_buffer + 6) = 0x656d616e; // "name" 字符串的一部分
  *(int16_t *)((longlong)string_buffer + 0x34) = 0x2220; // " \"" 字符串的一部分
  *(int8_t *)((longlong)string_buffer + 0x36) = 0;
  format_length3 = 0x36;
  
  format_string = build_error_message(format_string, &temp_ptr1, &error_msg_ptr);
  resource_ptr = build_error_message(format_string, &temp_ptr2, param_array + 2);
  
  message_ptr = (int8_t *)0x0;
  allocated_size = 0;
  buffer_size = *(uint *)(resource_ptr + 0x10);
  total_length = (ulonglong)buffer_size;
  string_length = 0;
  
  if (*(longlong *)(resource_ptr + 8) == 0) {
STRING_COPY_LOOP_2:
    allocated_size = string_length;
    if (buffer_size != 0) {
      // WARNING: Subroutine does not return
      memcpy(message_ptr, *(uint64_t *)(resource_ptr + 8), total_length);
    }
  }
  else if (buffer_size != 0) {
    search_result = buffer_size + 1;
    if (search_result < 0x10) {
      search_result = 0x10;
    }
    message_ptr = (int8_t *)allocate_string_buffer(_DAT_180c8ed18, (longlong)search_result, 0x13);
    *message_ptr = 0;
    string_length = get_string_length(message_ptr);
    goto STRING_COPY_LOOP_2;
  }
  
  if (message_ptr != (int8_t *)0x0) {
    message_ptr[total_length] = 0;
  }
  
  if (buffer_size != 0xfffffffe) {
    buffer_size = buffer_size + 3;
    if (message_ptr == (int8_t *)0x0) {
      if ((int)buffer_size < 0x10) {
        buffer_size = 0x10;
      }
      message_ptr = (int8_t *)allocate_string_buffer(_DAT_180c8ed18, (longlong)(int)buffer_size, 0x13);
      *message_ptr = 0;
    }
    else {
      if (buffer_size <= allocated_size) goto FINALIZE_STRING_2;
      message_ptr = (int8_t *)reallocate_string_buffer(_DAT_180c8ed18, message_ptr, buffer_size, 0x10, 0x13);
    }
    get_string_length(message_ptr);
  }
  
FINALIZE_STRING_2:
  *(int16_t *)(message_ptr + total_length) = 0xa22;
  message_ptr[total_length + 2] = 0;
  temp_ptr2 = &DEFAULT_ERROR_MESSAGE;
  if (temp_value1 != 0) {
    // WARNING: Subroutine does not return
    cleanup_string_buffer();
  }
  temp_value1 = 0;
  temp_param1 = 0;
  temp_ptr2 = &DEFAULT_STRING_BUFFER;
  temp_ptr1 = &DEFAULT_ERROR_MESSAGE;
  if (temp_value2 != 0) {
    // WARNING: Subroutine does not return
    cleanup_string_buffer();
  }
  temp_value2 = 0;
  temp_param2 = 0;
  temp_ptr1 = &DEFAULT_STRING_BUFFER;
  error_msg_ptr = &DEFAULT_ERROR_MESSAGE;
  // WARNING: Subroutine does not return
  cleanup_string_buffer(format_buffer3);
}


/**
 * 清理渲染队列资源
 * 释放渲染队列中所有已分配的资源
 * 
 * @param render_context 渲染上下文指针
 */
void cleanup_render_queue(longlong render_context)
{
  uint64_t *resource_array;
  longlong array_end;
  int cleanup_count;
  int32_t resource_id;
  uint64_t *current_resource;
  ulonglong resource_count;
  int lock_result;
  
  initialize_resource_cleanup();
  cleanup_count = 0;
  
  // 加锁以保护渲染队列
  lock_result = _Mtx_lock(render_context + 0x60);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 获取资源数组信息
  resource_array = *(uint64_t **)(render_context + 0x410);
  *(uint64_t *)(render_context + 0x410) = 0;
  array_end = *(longlong *)(render_context + 0x418);
  *(uint64_t *)(render_context + 0x418) = 0;
  *(uint64_t *)(render_context + 0x420) = 0;
  *(int32_t *)(render_context + 0x428) = 3;
  
  // 解锁
  lock_result = _Mtx_unlock(render_context + 0x60);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 计算资源数量并清理
  resource_count = array_end - (longlong)resource_array >> 3;
  current_resource = resource_array;
  if (resource_count != 0) {
    do {
      resource_id = release_resource_reference(*current_resource);
      validate_texture_format(resource_id, &DEFAULT_TEXTURE_FORMAT);
      cleanup_count = cleanup_count + 1;
      current_resource = current_resource + 1;
    } while ((ulonglong)(longlong)cleanup_count < resource_count);
  }
  
  // 释放资源数组内存
  if (resource_array == (uint64_t *)0x0) {
    return;
  }
  // WARNING: Subroutine does not return
  release_memory_buffer(resource_array);
}


/**
 * 查找着色器程序索引
 * 在着色器缓存中查找指定的着色器程序
 * 
 * @param shader_context 着色器上下文
 * @param shader_info 着色器信息
 * @return 着色器程序索引，如果未找到返回-1
 */
int find_shader_program_index(longlong shader_context, longlong shader_info)
{
  byte *shader_name_ptr;
  int comparison_result;
  int shader_count;
  int index;
  longlong current_offset;
  byte *cached_name_ptr;
  void *error_msg_ptr;
  int name_length;
  longlong cache_entry_ptr;
  longlong *shader_cache;
  uint64_t error_param;
  
  error_param = 0xfffffffffffffffe;
  current_offset = get_shader_cache_offset(*(uint64_t *)(shader_context + 0x1f8));
  if (current_offset == 0) {
    comparison_result = _Mtx_lock(shader_context + 0x318);
    if (comparison_result != 0) {
      __Throw_C_error_std__YAXH_Z(comparison_result);
    }
    
    comparison_result = 0;
    shader_count = (int)((*(longlong *)(shader_context + 0x3a0) - *(longlong *)(shader_context + 0x398)) / 0x98);
    if (0 < shader_count) {
      current_offset = 0;
      name_length = *(int *)(shader_info + 0x10);
      shader_cache = (longlong *)(*(longlong *)(shader_context + 0x398) + 8);
      
      do {
        index = (int)shader_cache[1];
        if (name_length == index) {
          if (name_length != 0) {
            cached_name_ptr = *(byte **)(shader_info + 8);
            current_offset = *shader_cache - (longlong)cached_name_ptr;
            do {
              shader_name_ptr = cached_name_ptr + current_offset;
              index = (uint)*cached_name_ptr - (uint)*shader_name_ptr;
              if (index != 0) break;
              cached_name_ptr = cached_name_ptr + 1;
            } while (*shader_name_ptr != 0);
          }
        NAME_MATCH_CHECK:
          if (index == 0) goto SHADER_FOUND;
        }
        else if (name_length == 0) goto NAME_MATCH_CHECK;
        
        comparison_result = comparison_result + 1;
        current_offset = current_offset + 1;
        shader_cache = shader_cache + 0x13;
      } while (current_offset < shader_count);
    }
    
    error_msg_ptr = &DEFAULT_TEXTURE_FORMAT;
    if (*(void **)(shader_info + 8) != (void *)0x0) {
      error_msg_ptr = *(void **)(shader_info + 8);
    }
    log_shader_error(_DAT_180c86928, 0, 0x1000000000000, 3, &SHADER_NOT_FOUND_ID, error_msg_ptr, error_param);
    comparison_result = -1;
    
SHADER_FOUND:
    index = _Mtx_unlock(shader_context + 0x318);
    if (index != 0) {
      __Throw_C_error_std__YAXH_Z(index);
    }
  }
  else {
    comparison_result = *(int *)(current_offset + 0x54);
  }
  return comparison_result;
}


/**
 * 查找纹理索引
 * 在纹理缓存中查找指定的纹理
 * 
 * @param texture_context 纹理上下文
 * @param texture_info 纹理信息
 * @return 纹理索引，如果未找到返回-1
 */
int find_texture_index(longlong texture_context, longlong texture_info)
{
  byte *texture_name_ptr;
  int name_length;
  byte *cached_name_ptr;
  void *error_msg_ptr;
  int comparison_result;
  int texture_count;
  int index;
  longlong current_offset;
  longlong *texture_cache;
  longlong name_offset;
  
  index = 0;
  texture_count = (int)((*(longlong *)(texture_context + 0x3e0) - *(longlong *)(texture_context + 0x3d8)) / 0x28);
  if (0 < texture_count) {
    name_length = *(int *)(texture_info + 0x10);
    current_offset = 0;
    texture_cache = (longlong *)(*(longlong *)(texture_context + 0x3d8) + 8);
    
    do {
      comparison_result = (int)texture_cache[1];
      if (name_length == comparison_result) {
        if (name_length != 0) {
          cached_name_ptr = *(byte **)(texture_info + 8);
          name_offset = *texture_cache - (longlong)cached_name_ptr;
          do {
            texture_name_ptr = cached_name_ptr + name_offset;
            comparison_result = (uint)*cached_name_ptr - (uint)*texture_name_ptr;
            if (comparison_result != 0) break;
            cached_name_ptr = cached_name_ptr + 1;
          } while (*texture_name_ptr != 0);
        }
      NAME_MATCH_CHECK:
        if (comparison_result == 0) {
          return index;
        }
      }
      else if (name_length == 0) goto NAME_MATCH_CHECK;
      
      index = index + 1;
      current_offset = current_offset + 1;
      texture_cache = texture_cache + 5;
    } while (current_offset < texture_count);
  }
  
  error_msg_ptr = &DEFAULT_TEXTURE_FORMAT;
  if (*(void **)(texture_info + 8) != (void *)0x0) {
    error_msg_ptr = *(void **)(texture_info + 8);
  }
  log_texture_error(_DAT_180c86928, 0, 0x1000000000000, 3, &TEXTURE_NOT_FOUND_ID, error_msg_ptr);
  return -1;
}


/**
 * 更新纹理缓存状态
 * 根据当前状态更新纹理缓存的相关参数
 * 
 * @param texture_context 纹理上下文指针
 */
void update_texture_cache_state(longlong texture_context)
{
  int cache_status;
  
  if (*(char *)(texture_context + 0x210) == '\0') {
    cache_status = check_texture_cache_status(*(uint64_t *)(texture_context + 0x368));
    if (cache_status == 0) {
      *(uint64_t *)(texture_context + 0x380) = *(uint64_t *)(texture_context + 0x378);
      return;
    }
    log_texture_cache_error(_DAT_180c86928, 0, 0x1000000000000, 3, &CACHE_UPDATE_ERROR_ID);
  }
  return;
}


/**
 * 执行资源回调函数
 * 调用资源的特定回调函数
 * 
 * @param resource_ptr 资源指针
 */
void execute_resource_callback(longlong *resource_ptr)
{
  (**(code **)(*resource_ptr + 0x68))();
  return;
}


/**
 * 处理渲染资源创建
 * 根据参数创建和处理渲染资源
 * 
 * @param render_context 渲染上下文
 * @param resource_params 资源参数
 * @param process_data 处理数据
 * @param output_param 输出参数
 * @param additional_data 附加数据
 * @return 处理结果
 */
ulonglong process_render_resource_creation(longlong render_context, longlong resource_params, uint64_t process_data, int32_t *output_param, uint64_t additional_data)
{
  int32_t process_result;
  ulonglong render_state;
  longlong resource_ptr;
  ulonglong creation_result;
  void *error_msg_ptr;
  longlong temp_value;
  
  if ((*(char *)(render_context + 0x210) == '\0') &&
      (render_state = _DAT_180c8a9c8, *(int *)(_DAT_180c8a9c8 + 0xb60) == 1)) {
    
    // 如果有资源句柄且参数有效
    if ((*(longlong *)(render_context + 0x18) != 0) && (0 < *(int *)(resource_params + 0x10))) {
      (**(code **)(render_context + 0x20))(resource_params, process_data, additional_data, render_context + 8);
    }
    
    // 查找资源
    resource_ptr = find_resource_by_params(render_context, resource_params, 0);
    if (resource_ptr != 0) {
      process_result = get_resource_processing_info(resource_ptr, &temp_value);
      validate_texture_format(process_result, &DEFAULT_TEXTURE_FORMAT);
      if (temp_value != 0) {
        setup_resource_processing_data(temp_value, process_data, &DEFAULT_PROCESSING_INFO);
        initialize_render_state();
        apply_render_parameters(temp_value, *output_param);
        creation_result = finalize_resource_creation(temp_value);
        return creation_result;
      }
    }
    
    // 记录资源创建失败
    error_msg_ptr = &DEFAULT_TEXTURE_FORMAT;
    if (*(void **)(resource_params + 8) != (void *)0x0) {
      error_msg_ptr = *(void **)(resource_params + 8);
    }
    creation_result = log_resource_creation_error(_DAT_180c86928, 0, 0x1000000000000, 3, &RESOURCE_CREATION_FAILED_ID, error_msg_ptr);
    return creation_result & 0xffffffffffffff00;
  }
  return render_state & 0xffffffffffffff00;
}


/**
 * 创建默认渲染资源
 * 创建默认的渲染资源并返回结果
 * 
 * @return 创建结果
 */
ulonglong create_default_render_resource(void)
{
  int32_t process_result;
  longlong resource_ptr;
  ulonglong creation_result;
  int32_t *render_params;
  longlong stack_param;
  
  resource_ptr = find_resource_by_params();
  if (resource_ptr != 0) {
    process_result = get_resource_processing_info(resource_ptr, &stack_param);
    validate_texture_format(process_result, &DEFAULT_TEXTURE_FORMAT);
    resource_ptr = stack_param;
    if (stack_param != 0) {
      setup_resource_processing_data(stack_param);
      initialize_render_state();
      apply_render_parameters(resource_ptr, *render_params);
      creation_result = finalize_resource_creation(resource_ptr);
      return creation_result;
    }
  }
  creation_result = log_resource_creation_error(_DAT_180c86928, 0, 0x1000000000000, 3, &RESOURCE_CREATION_FAILED_ID);
  return creation_result & 0xffffffffffffff00;
}


/**
 * 创建备用渲染资源
 * 创建备用渲染资源并返回结果
 * 
 * @return 创建结果
 */
ulonglong create_alternative_render_resource(void)
{
  ulonglong creation_result;
  longlong context_ptr;
  longlong resource_handle;
  longlong stack_param;
  
  stack_param = context_ptr;
  if (*(longlong *)(resource_handle + 8) != 0) {
    stack_param = *(longlong *)(resource_handle + 8);
  }
  creation_result = log_resource_creation_error(_DAT_180c86928, 0, 0x1000000000000, 3, &RESOURCE_CREATION_FAILED_ID);
  return creation_result & 0xffffffffffffff00;
}


/**
 * 获取渲染状态标志
 * 获取当前的渲染状态标志
 * 
 * @return 状态标志
 */
int8_t get_render_state_flag(void)
{
  return 0;
}


/**
 * 设置渲染参数
 * 设置渲染相关的参数
 * 
 * @param resource_ptr 资源指针
 * @param param1 参数1
 * @param param2 参数2
 * @param param3 参数3
 */
void set_render_parameters(longlong *resource_ptr, uint64_t param1, uint64_t param2, uint64_t param3)
{
  int32_t render_param1;
  int32_t render_param2;
  
  render_param1 = 0x3f800000; // 1.0f
  render_param2 = 0;
  (**(code **)(*resource_ptr + 0x58))(0x3f800000, 0, param2, &render_param1, param3);
  return;
}


/**
 * 处理索引渲染资源
 * 根据索引处理渲染资源
 * 
 * @param render_context 渲染上下文
 * @param resource_index 资源索引
 * @param process_data 处理数据
 * @param output_param 输出参数
 * @param additional_data 附加数据
 * @return 处理结果
 */
uint64_t process_indexed_render_resource(longlong render_context, int resource_index, uint64_t process_data, int32_t *output_param, uint64_t additional_data)
{
  longlong *mutex_ptr;
  int lock_result;
  int32_t process_result;
  uint64_t creation_result;
  longlong resource_data;
  longlong *temp_ptr;
  
  if ((*(char *)(render_context + 0x210) == '\0') && (*(int *)(_DAT_180c8a9c8 + 0xb60) == 1)) {
    int max_index = *(int *)(*(longlong *)(render_context + 0x1f8) + 0x50);
    if (resource_index < max_index) {
      // 如果有资源句柄且索引有效
      if ((*(longlong *)(render_context + 0x18) != 0) && (-1 < resource_index)) {
        mutex_ptr = (longlong *)(render_context + 0x318);
        temp_ptr = mutex_ptr;
        lock_result = _Mtx_lock(mutex_ptr);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
        
        resource_data = (longlong)resource_index * 0x98 + *(longlong *)(render_context + 0x398);
        if (0 < *(int *)(resource_data + 0x10)) {
          (**(code **)(render_context + 0x20))(resource_data, process_data, additional_data);
        }
        
        lock_result = _Mtx_unlock(mutex_ptr);
        if (lock_result != 0) {
          __Throw_C_error_std__YAXH_Z(lock_result);
        }
      }
      
      creation_result = find_resource_by_id(render_context, resource_index, 0);
      process_result = get_resource_processing_info(creation_result, &temp_ptr);
      validate_texture_format(process_result, &DEFAULT_TEXTURE_FORMAT);
      mutex_ptr = temp_ptr;
      setup_resource_processing_data(temp_ptr, process_data, &DEFAULT_PROCESSING_INFO);
      initialize_render_state();
      apply_render_parameters(mutex_ptr, *output_param);
      creation_result = finalize_resource_creation(mutex_ptr);
    }
    else {
      // 处理超出范围的索引
      create_alternative_resource(render_context, &temp_ptr,
                    (longlong)(resource_index - max_index) * 0x60 +
                    *(longlong *)(*(longlong *)(render_context + 0x1f8) + 0x30), output_param, 0xfffffffffffffffe);
      
      (**(code **)(*temp_ptr + 0xa8))(temp_ptr, process_data);
      (**(code **)(*temp_ptr + 0x148))(temp_ptr, additional_data);
      (**(code **)(*temp_ptr + 0x60))();
      if (temp_ptr != (longlong *)0x0) {
        (**(code **)(*temp_ptr + 0x38))();
      }
      creation_result = 1;
    }
  }
  else {
    creation_result = 0;
  }
  return creation_result;
}


/**
 * 获取渲染资源信息
 * 获取指定渲染资源的信息
 * 
 * @param resource_id 资源ID
 * @param resource_type 资源类型
 * @return 资源信息
 */
int32_t get_render_resource_info(uint64_t resource_id, uint64_t resource_type)
{
  longlong resource_ptr;
  int32_t info_buffer[2];
  int8_t temp_buffer[8];
  
  resource_ptr = find_resource_by_params(resource_id, resource_type, 0);
  if (resource_ptr != 0) {
    extract_resource_info(resource_ptr, temp_buffer, info_buffer);
    return info_buffer[0];
  }
  return 0;
}


/**
 * 获取渲染资源状态
 * 获取指定渲染资源的状态
 * 
 * @param resource_id 资源ID
 * @param resource_type 资源类型
 * @return 资源状态
 */
int32_t get_render_resource_status(uint64_t resource_id, uint64_t resource_type)
{
  longlong resource_ptr;
  int32_t status_buffer[2];
  int8_t temp_buffer[8];
  
  resource_ptr = find_resource_by_id(resource_id, resource_type, 0);
  if (resource_ptr != 0) {
    extract_resource_info(resource_ptr, temp_buffer, status_buffer);
    return status_buffer[0];
  }
  return 0;
}