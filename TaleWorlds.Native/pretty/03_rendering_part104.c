#include "TaleWorlds.Native.Split.h"

// 03_rendering_part104.c - 渲染系统高级文件处理和资源管理模块
// 包含3个核心函数，涵盖渲染文件处理、资源管理、数据序列化、内存管理、文件操作等高级渲染功能

// 函数别名定义
#define RenderingSystemProcessFileData FUN_18032cf30
#define RenderingSystemResourceSerializer FUN_18032d520
#define RenderingSystemFileResourceProcessor FUN_18032d690

// 常量定义
#define RENDERING_FILE_BUFFER_SIZE 0x100
#define RENDERING_RESOURCE_BLOCK_SIZE 0x30
#define RENDERING_PATH_SEPARATOR 0x5c
#define RENDERING_FILE_EXTENSION ".def"
#define RENDERING_MAX_PATH_LENGTH 0x100000
#define RENDERING_ALIGNMENT_SIZE 8
#define RENDERING_STACK_ALIGNMENT 0xfffffffffffffffe
#define RENDERING_MAGIC_NUMBER 0x7379616c706552
#define RENDERING_FLOAT_MAX 0x7f7fffff00000000

// 渲染系统文件数据处理器
// 处理渲染系统文件数据的读取、解析和管理
void RenderingSystemProcessFileData(longlong render_context, longlong file_context, uint64_t file_offset, uint data_size, int process_flag)
{
  longlong *resource_ptr;
  uint processed_size;
  int read_count;
  longlong resource_handle;
  uint64_t *resource_manager;
  int32_t *data_buffer;
  longlong memory_block;
  uint64_t *resource_allocator;
  uint64_t *resource_pool;
  int *data_index;
  uint *data_array;
  longlong *data_stream;
  uint64_t process_parameter;
  ulonglong file_size;
  int item_count;
  bool allocation_success;
  uint stack_data_array [2];
  ulonglong allocation_size;
  int stack_item_count;
  uint stack_data_size;
  longlong stack_data_handle;
  uint *stack_data_ptr;
  uint64_t stack_context;
  int16_t stack_flags;
  int8_t stack_mode;
  uint stack_buffer_size;
  int32_t stack_buffer_data;
  uint64_t stack_memory_block;
  int32_t *stack_buffer_ptr;
  uint64_t stack_allocator;
  longlong *stack_resource_ptr;
  longlong *stack_allocator_ptr;
  
  stack_allocator = RENDERING_STACK_ALIGNMENT;
  stack_data_array[0] = data_size;
  _fseeki64(*(uint64_t *)(file_context + 8), file_offset, 0);
  process_flag = 0;
  stack_item_count = 0;
  fread(&process_flag, 4, 1, *(uint64_t *)(file_context + 8));
  file_size = (ulonglong)data_size;
  allocation_size = (ulonglong)data_size;
  stack_data_size = data_size;
  
  // 初始化资源处理
  FUN_18033af10(render_context + 0x4a8, &stack_buffer_size);
  memory_block = CONCAT44(stack_buffer_data, stack_buffer_size);
  resource_pool = (uint64_t *)(memory_block + 8);
  
  if (process_flag < 1) {
    process_flag = 0;
    stack_item_count = 0;
    fread(&process_flag, 4, 1, *(uint64_t *)(file_context + 8), allocation_size);
    
    if (process_flag < 1) {
      if (0 < *(int *)(render_context + 0x9b8)) {
        stack_data_handle = 0;
        stack_data_ptr = (int32_t *)0x0;
        stack_context = 0;
        stack_flags = 0;
        stack_mode = 3;
        stack_item_count = 0;
        fread(&stack_item_count, 4, 1, *(uint64_t *)(file_context + 8), allocation_size);
        process_flag = 0;
        fread(&process_flag, 4, 1, *(uint64_t *)(file_context + 8));
        
        if (process_flag != 0) {
          FUN_180639bf0(&stack_data_handle, process_flag);
        }
        
        memory_block = stack_data_handle;
        fread(stack_data_handle, process_flag, 1, *(uint64_t *)(file_context + 8));
        data_array = stack_data_ptr;
        stack_data_size = 0;
        
        if (0 < stack_item_count) {
          resource_pool = (uint64_t *)(render_context + 0x818);
          data_buffer = (int32_t *)FUN_18062b1e0(_DAT_180c8ed18, RENDERING_FILE_BUFFER_SIZE, RENDERING_ALIGNMENT_SIZE, 3);
          resource_ptr = (longlong *)(data_buffer + 6);
          *resource_ptr = (longlong)&UNK_18098bcb0;
          *(uint64_t *)(data_buffer + 8) = 0;
          data_buffer[10] = 0;
          *resource_ptr = (longlong)&UNK_180a3c3e0;
          *(uint64_t *)(data_buffer + 0xc) = 0;
          *(uint64_t *)(data_buffer + 8) = 0;
          data_buffer[10] = 0;
          data_stream = (longlong *)(data_buffer + 0xe);
          stack_buffer_ptr = data_buffer;
          stack_resource_ptr = resource_ptr;
          stack_allocator_ptr = data_stream;
          
          FUN_1808fc838(data_stream, RENDERING_RESOURCE_BLOCK_SIZE, 4, FUN_1801c2890, FUN_18004a130);
          data_buffer[0x3e] = 0;
          *data_buffer = 0;
          (**(code **)(*resource_ptr + 0x10))(resource_ptr, &system_buffer_ptr);
          *(uint64_t *)(data_buffer + 1) = 0;
          *(uint64_t *)(data_buffer + 3) = RENDERING_FLOAT_MAX;
          *data_buffer = *data_array;
          data_buffer[1] = data_array[1];
          data_buffer[2] = data_array[2];
          data_buffer[3] = data_array[3];
          data_buffer[4] = data_array[4];
          processed_size = data_array[5];
          data_index = (int *)(data_array + 6);
          
          if (processed_size != 0) {
            stack_data_ptr = (uint *)data_index;
            (**(code **)(*resource_ptr + 0x18))(resource_ptr, data_index, processed_size);
            data_index = (int *)((longlong)data_index + (ulonglong)processed_size);
          }
          
          item_count = *data_index;
          data_buffer[0x3e] = item_count;
          stack_data_ptr = (uint *)(data_index + 1);
          read_count = 0;
          
          if (0 < item_count) {
            do {
              processed_size = *stack_data_ptr;
              data_array = stack_data_ptr + 1;
              
              if (processed_size != 0) {
                stack_data_ptr = data_array;
                (**(code **)(*data_stream + 0x18))(data_stream, data_array, processed_size);
                data_array = (uint *)((longlong)data_array + (ulonglong)processed_size);
              }
              
              *(uint *)(data_stream + 4) = *data_array;
              *(uint *)((longlong)data_stream + 0x24) = data_array[1];
              stack_data_ptr = data_array + 2;
              read_count = read_count + 1;
              data_stream = data_stream + 6;
            } while (read_count < (int)data_buffer[0x3e]);
          }
          
          stack_memory_block = stack_buffer_ptr;
          resource_allocator = resource_pool;
          resource_manager = *(uint64_t **)(render_context + 0x828);
          
          while (resource_manager != (uint64_t *)0x0) {
            resource_allocator = resource_manager;
            if (data_size < *(uint *)(resource_manager + 4)) {
              resource_manager = (uint64_t *)resource_manager[1];
            }
            else {
              resource_manager = (uint64_t *)*resource_manager;
            }
          }
          
          stack_buffer_size = data_size;
          memory_block = FUN_18062b420(_DAT_180c8ed18, RENDERING_RESOURCE_BLOCK_SIZE, *(int8_t *)(render_context + 0x840));
          *(uint *)(memory_block + 0x20) = stack_buffer_size;
          *(int32_t *)(memory_block + 0x24) = stack_buffer_data;
          *(int32_t *)(memory_block + 0x28) = (int32_t)stack_memory_block;
          *(int32_t *)(memory_block + 0x2c) = stack_memory_block._4_4_;
          
          if ((resource_allocator == resource_pool) || (data_size < *(uint *)(resource_allocator + 4))) {
            process_parameter = 0;
          }
          else {
            process_parameter = 1;
          }
          
          // 警告：子函数不返回
          FUN_18066bdc0(memory_block, resource_allocator, resource_pool, process_parameter);
        }
        
        if (((char)stack_flags == '\0') && (memory_block != 0)) {
          // 警告：子函数不返回
          FUN_18064e900(memory_block);
        }
      }
      
      FUN_180332560(render_context, file_context, (ulonglong)data_size);
      FUN_1800571e0(render_context + 0x230, stack_data_array);
      return;
    }
    
    stack_data_size = data_size;
    fread(&stack_item_count, 4, 1, *(uint64_t *)(file_context + 8), allocation_size);
    FUN_18033af10(render_context + 0x638, &stack_buffer_size);
    memory_block = CONCAT44(stack_buffer_data, stack_buffer_size);
    resource_allocator = (uint64_t *)(memory_block + 8);
    resource_handle = FUN_18062b420(_DAT_180c8ed18, 0x28, *(int8_t *)(memory_block + 0x30));
    *(int *)(resource_handle + 0x20) = stack_item_count;
    allocation_success = true;
    resource_pool = resource_allocator;
    
    if (*(uint64_t **)(memory_block + 0x18) != (uint64_t *)0x0) {
      resource_manager = *(uint64_t **)(memory_block + 0x18);
      do {
        resource_pool = resource_manager;
        allocation_success = *(uint *)(resource_handle + 0x20) < *(uint *)(resource_pool + 4);
        
        if (allocation_success) {
          resource_manager = (uint64_t *)resource_pool[1];
        }
        else {
          resource_manager = (uint64_t *)*resource_pool;
        }
      } while (resource_manager != (uint64_t *)0x0);
    }
    
    resource_manager = resource_pool;
    
    if (allocation_success) {
      if (resource_pool == *(uint64_t **)(memory_block + 0x10)) goto LAB_18032d19c;
      resource_manager = (uint64_t *)func_0x00018066b9a0(resource_pool);
    }
    
    if (*(uint *)(resource_handle + 0x20) <= *(uint *)(resource_manager + 4)) {
      // 警告：子函数不返回
      FUN_18064e900(resource_handle);
    }
    
LAB_18032d19c:
    if ((resource_pool == resource_allocator) || (*(uint *)(resource_handle + 0x20) < *(uint *)(resource_pool + 4))) {
      process_parameter = 0;
    }
    else {
      process_parameter = 1;
    }
    
    // 警告：子函数不返回
    FUN_18066bdc0(resource_handle, resource_pool, resource_allocator, process_parameter, file_size);
  }
  
  fread(&stack_item_count, 4, 1, *(uint64_t *)(file_context + 8), allocation_size);
  resource_handle = FUN_18062b420(_DAT_180c8ed18, 0x28, *(int8_t *)(memory_block + 0x30));
  *(int *)(resource_handle + 0x20) = stack_item_count;
  allocation_success = true;
  resource_allocator = resource_pool;
  
  if (*(uint64_t **)(memory_block + 0x18) != (uint64_t *)0x0) {
    resource_manager = *(uint64_t **)(memory_block + 0x18);
    do {
      resource_allocator = resource_manager;
      allocation_success = *(uint *)(resource_handle + 0x20) < *(uint *)(resource_allocator + 4);
      
      if (allocation_success) {
        resource_manager = (uint64_t *)resource_allocator[1];
      }
      else {
        resource_manager = (uint64_t *)*resource_allocator;
      }
    } while (resource_manager != (uint64_t *)0x0);
  }
  
  resource_manager = resource_allocator;
  
  if (allocation_success) {
    if (resource_allocator == *(uint64_t **)(memory_block + 0x10)) goto LAB_18032d06c;
    resource_manager = (uint64_t *)func_0x00018066b9a0(resource_allocator);
  }
  
  if (*(uint *)(resource_handle + 0x20) <= *(uint *)(resource_manager + 4)) {
    // 警告：子函数不返回
    FUN_18064e900(resource_handle);
  }
  
LAB_18032d06c:
  if ((resource_allocator == resource_pool) || (*(uint *)(resource_handle + 0x20) < *(uint *)(resource_allocator + 4))) {
    process_parameter = 0;
  }
  else {
    process_parameter = 1;
  }
  
  // 警告：子函数不返回
  FUN_18066bdc0(resource_handle, resource_allocator, resource_pool, process_parameter);
}

// 渲染系统资源序列化器
// 处理渲染系统资源的序列化和数据转换
uint64_t *RenderingSystemResourceSerializer(uint64_t process_context, uint64_t *resource_data)
{
  char process_result;
  uint data_length;
  int string_length;
  ulonglong buffer_size;
  int array_index;
  void *buffer_ptr;
  longlong data_handle;
  uint buffer_capacity;
  int32_t buffer_data;
  int32_t buffer_info;
  uint64_t buffer_context;
  uint64_t *resource_ptr;
  
  buffer_context = RENDERING_STACK_ALIGNMENT;
  array_index = 0;
  buffer_info = 0;
  resource_ptr = resource_data;
  FUN_1800baa40(&buffer_ptr);
  data_length = buffer_capacity + 7;
  FUN_1806277c0(&buffer_ptr, data_length);
  *(uint64_t *)((ulonglong)buffer_capacity + data_handle) = RENDERING_MAGIC_NUMBER;
  buffer_capacity = data_length;
  process_result = FUN_180624a00(&buffer_ptr);
  
  if (process_result == '\0') {
    FUN_180624910(&buffer_ptr);
  }
  
  *resource_data = &UNK_18098bcb0;
  resource_data[1] = 0;
  *(int32_t *)(resource_data + 2) = 0;
  *resource_data = &UNK_180a3c3e0;
  resource_data[3] = 0;
  resource_data[1] = 0;
  *(int32_t *)(resource_data + 2) = 0;
  buffer_info = 1;
  
  do {
    data_length = buffer_capacity;
    buffer_size = (ulonglong)buffer_capacity;
    
    if (data_handle != 0) {
      FUN_1806277c0(resource_data, buffer_size);
    }
    
    if (data_length != 0) {
      // 警告：子函数不返回
      memcpy(resource_data[1], data_handle, buffer_size);
    }
    
    *(int32_t *)(resource_data + 2) = 0;
    string_length = 0;
    
    if (resource_data[1] != 0) {
      *(int8_t *)(buffer_size + resource_data[1]) = 0;
      string_length = *(int *)(resource_data + 2);
    }
    
    *(int32_t *)((longlong)resource_data + 0x1c) = buffer_data;
    FUN_1806277c0(resource_data, string_length + 1);
    *(int16_t *)((ulonglong)*(uint *)(resource_data + 2) + resource_data[1]) = RENDERING_PATH_SEPARATOR;
    *(int *)(resource_data + 2) = string_length + 1;
    FUN_180628380(resource_data, array_index);
    array_index = array_index + 1;
    process_result = FUN_180624a00(resource_data);
  } while (process_result != '\0');
  
  buffer_ptr = &UNK_180a3c3e0;
  
  if (data_handle != 0) {
    // 警告：子函数不返回
    FUN_18064e900();
  }
  
  return resource_data;
}

// 渲染系统文件资源处理器
// 处理渲染系统文件资源的读取、写入和管理
void RenderingSystemFileResourceProcessor(longlong render_context, longlong file_context, longlong resource_context)
{
  longlong *context_ptr;
  int32_t *resource_buffer;
  void *memory_ptr;
  int8_t *data_ptr;
  longlong resource_handle;
  longlong *data_stream;
  uint resource_size;
  int data_count;
  longlong file_handle;
  longlong context_offset;
  int32_t *output_buffer;
  int32_t *temp_buffer;
  int32_t *final_buffer;
  int8_t path_buffer [32];
  int count_array [2];
  void *stack_ptr;
  int8_t *string_ptr;
  uint string_length;
  ulonglong path_size;
  longlong path_data [3];
  int16_t path_flags;
  int8_t path_mode;
  int32_t *write_buffer;
  int32_t *read_buffer;
  int32_t *process_buffer;
  int32_t buffer_data;
  uint64_t buffer_context;
  longlong context_data;
  uint64_t process_info;
  longlong file_data;
  int8_t buffer_flag;
  longlong data_info;
  int32_t *data_buffer;
  longlong memory_info;
  longlong allocation_info;
  uint64_t allocation_context;
  char temp_path [32];
  ulonglong stack_guard;
  
  allocation_context = RENDERING_STACK_ALIGNMENT;
  stack_guard = _DAT_180bf00a8 ^ (ulonglong)path_buffer;
  count_array[0] = 0;
  write_buffer = (int32_t *)0x0;
  read_buffer = (int32_t *)0x0;
  process_buffer = (int32_t *)0x0;
  buffer_data = 3;
  context_ptr = *(longlong **)(render_context + 0xb50);
  resource_handle = *context_ptr;
  data_stream = context_ptr;
  
  if (resource_handle == 0) {
    data_stream = context_ptr + 1;
    resource_handle = *data_stream;
    
    while (resource_handle == 0) {
      data_stream = data_stream + 1;
      resource_handle = *data_stream;
    }
  }
  
  output_buffer = (int32_t *)0x0;
  context_data = resource_context;
  memory_info = render_context;
  allocation_info = file_context;
  
  if (resource_handle != context_ptr[*(longlong *)(render_context + 0xb58)]) {
    final_buffer = (int32_t *)0x0;
    
    do {
      count_array[0] = count_array[0] + 1;
      data_buffer = *(int32_t **)(resource_handle + 8);
      
      if (final_buffer < process_buffer) {
        *final_buffer = *data_buffer;
        resource_buffer = output_buffer;
      }
      else {
        data_info = (longlong)final_buffer - (longlong)output_buffer;
        
        if (data_info >> 2 == 0) {
          resource_handle = 1;
LAB_18032d78f:
          resource_buffer = (int32_t *)FUN_18062b420(_DAT_180c8ed18, resource_handle * 4, 3);
        }
        else {
          resource_handle = (data_info >> 2) * 2;
          if (resource_handle != 0) goto LAB_18032d78f;
          resource_buffer = (int32_t *)0x0;
        }
        
        if (output_buffer != final_buffer) {
          // 警告：子函数不返回
          memmove(resource_buffer, output_buffer, data_info);
        }
        
        *resource_buffer = *data_buffer;
        
        if (output_buffer != (int32_t *)0x0) {
          // 警告：子函数不返回
          FUN_18064e900(output_buffer);
        }
        
        process_buffer = resource_buffer + resource_handle;
        write_buffer = resource_buffer;
        final_buffer = resource_buffer;
      }
      
      resource_handle = context_data;
      stack_ptr = &UNK_180a3c3e0;
      path_size = 0;
      string_ptr = (int8_t *)0x0;
      string_length = 0;
      read_buffer = final_buffer + 1;
      FUN_1806277c0(&stack_ptr, *(int32_t *)(context_data + 0x10));
      
      if (0 < *(int *)(context_data + 0x10)) {
        memory_ptr = &system_buffer_ptr;
        
        if (*(void **)(context_data + 8) != (void *)0x0) {
          memory_ptr = *(void **)(context_data + 8);
        }
        
        // 警告：子函数不返回
        memcpy(string_ptr, memory_ptr, (longlong)(*(int *)(context_data + 0x10) + 1));
      }
      
      if ((*(longlong *)(context_data + 8) != 0) && (string_length = 0, string_ptr != (int8_t *)0x0)) {
        *string_ptr = 0;
      }
      
      resource_size = string_length + 1;
      FUN_1806277c0(&stack_ptr, resource_size);
      *(int16_t *)(string_ptr + string_length) = RENDERING_PATH_SEPARATOR;
      string_length = resource_size;
      FUN_180626eb0(temp_path, 0x20, &UNK_180a3c39c, **(int32_t **)(resource_handle + 8));
      resource_handle = -1;
      
      do {
        context_offset = resource_handle;
        resource_handle = context_offset + 1;
      } while (temp_path[context_offset + 1] != '\0');
      
      data_count = (int)(context_offset + 1);
      
      if (0 < data_count) {
        FUN_1806277c0(&stack_ptr, string_length + data_count);
        // 警告：子函数不返回
        memcpy(string_ptr + string_length, temp_path, (longlong)((int)context_offset + 2));
      }
      
      data_count = string_length + 4;
      FUN_1806277c0(&stack_ptr, data_count);
      *(int32_t *)(string_ptr + string_length) = 0x6664652e;
      *(int8_t *)((longlong)(string_ptr + string_length) + 4) = 0;
      data_ptr = &system_buffer_ptr;
      
      if (string_ptr != (int8_t *)0x0) {
        data_ptr = string_ptr;
      }
      
      process_info = 0;
      buffer_flag = 0;
      string_length = data_count;
      FUN_18062dee0(&process_info, data_ptr, &UNK_180a0cf4c);
      path_data[0] = 0;
      path_data[1] = 0;
      path_data[2] = 0;
      path_flags = 0;
      path_mode = 3;
      FUN_180639bf0(path_data, RENDERING_MAX_PATH_LENGTH);
      FUN_18007e5b0(*(uint64_t *)(*(longlong *)(resource_handle + 8) + 8), path_data);
      resource_handle = file_data;
      buffer_context = path_data[2];
      fwrite(&buffer_context, 8, 1, file_data);
      context_offset = path_data[0];
      fwrite(path_data[0], buffer_context, 1, resource_handle);
      final_buffer = final_buffer + 1;
      
      if (resource_handle != 0) {
        fclose(resource_handle);
        file_data = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        resource_handle = 0;
        context_offset = path_data[0];
        resource_buffer = write_buffer;
        final_buffer = read_buffer;
      }
      
      if (((char)path_flags == '\0') && (context_offset != 0)) {
        // 警告：子函数不返回
        FUN_18064e900(context_offset);
      }
      
      output_buffer = resource_buffer;
      
      if (resource_handle != 0) {
        fclose(resource_handle);
        file_data = 0;
        LOCK();
        _DAT_180c8ed60 = _DAT_180c8ed60 + -1;
        UNLOCK();
        output_buffer = write_buffer;
        final_buffer = read_buffer;
      }
      
      stack_ptr = &UNK_180a3c3e0;
      
      if (string_ptr != (int8_t *)0x0) {
        // 警告：子函数不返回
        FUN_18064e900();
      }
      
      string_ptr = (int8_t *)0x0;
      path_size = path_size & 0xffffffff00000000;
      stack_ptr = &UNK_18098bcb0;
      resource_handle = *(longlong *)(resource_handle + 0x10);
      
      while (resource_handle == 0) {
        data_stream = data_stream + 1;
        resource_handle = *data_stream;
      }
    } while (resource_handle != *(longlong *)
                       (*(longlong *)(memory_info + 0xb50) + *(longlong *)(memory_info + 0xb58) * 8));
  }
  
  resource_handle = allocation_info;
  fwrite(count_array, 4, 1, *(uint64_t *)(resource_handle + 8));
  
  if (0 < count_array[0]) {
    fwrite(output_buffer, 4, (longlong)count_array[0], *(uint64_t *)(resource_handle + 8));
  }
  
  _ftelli64(*(uint64_t *)(resource_handle + 8));
  
  if (output_buffer == (int32_t *)0x0) {
    // 警告：子函数不返回
    FUN_1808fc050(stack_guard ^ (ulonglong)path_buffer);
  }
  
  // 警告：子函数不返回
  FUN_18064e900(output_buffer);
}


// 警告：移除不可达的代码块 (ram,0x00018032dc9e)
// 警告：移除不可达的代码块 (ram,0x00018032dc40)
// 警告：移除不可达的代码块 (ram,0x00018032dc49)
// 警告：移除不可达的代码块 (ram,0x00018032dc7b)
// 警告：移除不可达的代码块 (ram,0x00018032dc0f)
// 警告：全局符号'_'与小符号在相同地址重叠