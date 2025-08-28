#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part021.c - 11 个函数

// 函数: void initialize_resource_manager(longlong *engine_context,longlong resource_params)
// 初始化资源管理器，处理游戏资源的加载和管理
void initialize_resource_manager(longlong *engine_context,longlong resource_params)

{
  uint resource_size;
  int resource_index;
  uint64_t resource_handle;
  longlong *resource_ptr;
  void *resource_data;
  longlong resource_offset;
  ulonglong resource_count;
  int8_t stack_buffer [32];
  int32_t stack_flags;
  void *stack_ptr;
  longlong stack_data;
  uint stack_size;
  uint64_t stack_param1;
  int32_t stack_param2;
  void *stack_buffer_ptr;
  longlong stack_offset;
  uint stack_capacity;
  uint64_t stack_control;
  void *stack_string_ptr;
  longlong stack_length;
  int32_t stack_id;
  void **stack_ptr_ptr;
  void *stack_resource_ptr;
  longlong stack_resource_data;
  int32_t stack_resource_flags[4];
  int32_t stack_resource_value;
  int32_t stack_resource_type;
  int8_t stack_resource_bool;
  int32_t stack_resource_format[9];
  int8_t stack_resource_status;
  int32_t stack_resource_id[2];
  uint64_t stack_resource_hash;
  void **stack_resource_handle_ptr;
  void *stack_resource_string_ptr;
  int8_t *stack_resource_data_ptr;
  int32_t stack_resource_config;
  int8_t resource_name_buffer [136];
  ulonglong stack_checksum;
  
  stack_resource_hash = 0xfffffffffffffffe;
  stack_checksum = GET_SECURITY_COOKIE() ^ (ulonglong)stack_buffer;
  stack_param2 = 0;
  stack_ptr_ptr = &stack_string_ptr;
  stack_string_ptr = &system_data_buffer_ptr;
  stack_control = 0;
  stack_length = 0;
  stack_id = 0;
  stack_capacity = 0x100;
  stack_resource_bool = 0;
  stack_resource_format[0] = 0;
  resource_data = &system_buffer_ptr;
  if (*(void **)(resource_params + 8) != (void *)0x0) {
    resource_data = *(void **)(resource_params + 8);
  }
  FUN_180627c50(&stack_string_ptr,resource_data);
  stack_resource_value = 0;
  stack_capacity = stack_capacity & 0xffffff00;
  resource_handle = FUN_18062b1e0(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  resource_ptr = (longlong *)FUN_1801954d0(resource_handle,&stack_string_ptr);
  stack_ptr_ptr = (void **)resource_ptr;
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x28))(resource_ptr);
  }
  stack_resource_flags[0] = 0x3f800000;
  stack_resource_flags[1] = 0;
  stack_resource_flags[2] = 0;
  stack_resource_flags[3] = 0;
  stack_resource_type = 0;
  stack_resource_value = 0x3f800000;
  stack_resource_id[0] = 0;
  stack_resource_id[1] = 0;
  stack_resource_format[4] = 0x3f800000;
  stack_resource_format[5] = 0x1010101;
  stack_resource_format[6] = 1;
  stack_resource_status = 1;
  stack_resource_string_ptr = &unknown_var_3432_ptr;
  stack_resource_data_ptr = resource_name_buffer;
  resource_name_buffer[0] = 0;
  stack_resource_config = *(int32_t *)(resource_params + 0x10);
  resource_data = &system_buffer_ptr;
  if (*(void **)(resource_params + 8) != (void *)0x0) {
    resource_data = *(void **)(resource_params + 8);
  }
  strcpy_s(resource_name_buffer,0x80,resource_data);
  FUN_18019e140(&stack_ptr,&stack_resource_string_ptr);
  stack_resource_string_ptr = &system_state_ptr;
  stack_buffer_ptr = &system_data_buffer_ptr;
  stack_control = 0;
  stack_offset = 0;
  stack_size = 0;
  resource_offset = *engine_context;
  FUN_1806279c0(&stack_resource_ptr,resource_params);
  resource_index = FUN_1801426a0(resource_offset,&stack_resource_ptr);
  stack_resource_ptr = &system_data_buffer_ptr;
  if (stack_resource_data != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  stack_resource_data = 0;
  stack_resource_flags[0] = 0;
  stack_resource_ptr = &system_state_ptr;
  if ((resource_index < 0) ||
     (resource_offset = *(longlong *)(*engine_context + 0x888),
     (ulonglong)(*(longlong *)(*engine_context + 0x890) - resource_offset >> 5) <= (ulonglong)(longlong)resource_index)) {
    resource_offset = FUN_180628ca0();
  }
  else {
    resource_offset = (longlong)resource_index * 0x20 + resource_offset;
  }
  stack_ptr = &system_data_buffer_ptr;
  stack_param1 = 0;
  stack_data = 0;
  stack_size = 0;
  stack_param2 = 1;
  resource_size = *(uint *)(resource_offset + 0x10);
  resource_count = (ulonglong)resource_size;
  if (*(longlong *)(resource_offset + 8) != 0) {
    FUN_1806277c0(&stack_ptr,resource_count);
  }
  if (resource_size != 0) {
                    // WARNING: Subroutine does not return
    memcpy(stack_data,*(uint64_t *)(resource_offset + 8),resource_count);
  }
  if (stack_data != 0) {
    *(int8_t *)(resource_count + stack_data) = 0;
  }
  stack_param1 = CONCAT44(*(uint *)(resource_offset + 0x1c),(int32_t)stack_param1);
  if (0 < stack_id) {
    stack_size = resource_size;
    FUN_1806277c0(&stack_ptr,stack_id);
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)stack_size + stack_data,stack_length,(longlong)(stack_id + 1));
  }
  stack_offset = stack_data;
  stack_control._0_4_ = (int32_t)stack_param1;
  stack_size = 0;
  stack_param2 = 0;
  stack_data = 0;
  stack_param1 = 0;
  stack_ptr = &system_state_ptr;
  stack_flags = 0xffffffff;
  stack_size = resource_size;
  stack_control._4_4_ = *(uint *)(resource_offset + 0x1c);
  FUN_1801a6440(resource_ptr,init_system_data_file,&stack_buffer_ptr,&stack_resource_flags);
  FUN_18019e260(resource_ptr);
  (**(code **)(*(longlong *)engine_context[0x56] + 0x138))((longlong *)engine_context[0x56],resource_ptr);
  FUN_180199500(resource_ptr,0x3d072b02,1);
  FUN_1801a2ea0(resource_ptr);
  (**(code **)(*(longlong *)engine_context[0x56] + 0x140))((longlong *)engine_context[0x56],resource_ptr);
  Sleep(1000);
  stack_buffer_ptr = &system_data_buffer_ptr;
  if (stack_offset != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  stack_offset = 0;
  stack_control = (ulonglong)stack_control._4_4_ << 0x20;
  stack_buffer_ptr = &system_state_ptr;
  stack_ptr = &system_data_buffer_ptr;
  if (stack_length != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  stack_length = 0;
  stack_id = 0;
  stack_ptr = &system_state_ptr;
  if (resource_ptr != (longlong *)0x0) {
    (**(code **)(*resource_ptr + 0x38))(resource_ptr);
  }
  stack_ptr_ptr = &stack_string_ptr;
  stack_string_ptr = &system_data_buffer_ptr;
  if (stack_length != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  stack_length = 0;
  stack_control = stack_control & 0xffffffff00000000;
  stack_string_ptr = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_checksum ^ (ulonglong)stack_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void process_shader_files(void)
// 处理着色器文件，进行文件路径解析和着色器编译
void process_shader_files(void)

{
  uint file_size;
  longlong *engine_ptr;
  uint64_t *shader_data;
  char path_separator;
  uint64_t *shader_ptr;
  int8_t *file_path;
  int32_t *file_size_ptr;
  int file_count;
  int shader_index;
  longlong file_offset;
  ulonglong path_length;
  uint64_t *file_iterator;
  int file_id;
  longlong total_files;
  uint *shader_entry;
  void *file_handle;
  int32_t file_type;
  int8_t shader_buffer [32];
  void *shader_output;
  int8_t *shader_input;
  uint shader_length;
  uint64_t shader_info;
  void *shader_reader;
  int8_t *file_content;
  uint content_size;
  ulonglong file_info;
  void *file_writer;
  longlong file_data;
  int max_path_length;
  int32_t buffer_size;
  longlong *global_engine_ptr;
  longlong file_count_limit;
  void *temp_buffer;
  void *file_buffer;
  int32_t file_mode;
  void *resource_handle;
  longlong resource_data;
  int32_t resource_flags;
  uint64_t *shader_array[2];
  uint64_t shader_metadata;
  int32_t shader_version;
  uint64_t shader_config;
  ulonglong stack_guard;
  
  shader_config = 0xfffffffffffffffe;
  stack_guard = GET_SECURITY_COOKIE() ^ (ulonglong)shader_buffer;
  global_engine_ptr = system_main_module_state;
  total_files = *(longlong *)(*system_main_module_state + 0x890) - *(longlong *)(*system_main_module_state + 0x888) >> 5;
  file_count = 0;
  file_count_limit = total_files;
  if (0 < (int)total_files) {
    do {
      shader_index = file_count;
      file_id = 0;
      if (file_count < 0) {
LAB_file_processing_error:
        file_offset = FUN_180628ca0();
      }
      else {
        file_offset = *(longlong *)(*system_main_module_state + 0x888);
        if ((ulonglong)(*(longlong *)(*system_main_module_state + 0x890) - file_offset >> 5) <=
            (ulonglong)(longlong)file_count) goto LAB_file_processing_error;
        file_offset = (longlong)file_count * 0x20 + file_offset;
      }
      shader_reader = &system_data_buffer_ptr;
      file_info = 0;
      file_content = (int8_t *)0x0;
      content_size = 0;
      FUN_1806277c0(&shader_reader,*(int32_t *)(file_offset + 0x10));
      if (*(int *)(file_offset + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(file_content,*(uint64_t *)(file_offset + 8),*(int *)(file_offset + 0x10) + 1);
      }
      if (*(longlong *)(file_offset + 8) != 0) {
        content_size = 0;
        if (file_content != (int8_t *)0x0) {
          *file_content = 0;
        }
        file_info = file_info & 0xffffffff;
      }
      if (shader_index < 0) {
LAB_path_processing_error:
        file_offset = FUN_180628ca0();
      }
      else {
        file_offset = *(longlong *)(*system_main_module_state + 0x8a8);
        if ((ulonglong)(*(longlong *)(*system_main_module_state + 0x8b0) - file_offset >> 5) <
            (ulonglong)(longlong)shader_index) goto LAB_path_processing_error;
        file_offset = (longlong)shader_index * 0x20 + file_offset;
      }
      file_writer = &system_data_buffer_ptr;
      file_data = 0;
      file_handle = (int8_t *)0x0;
      file_type = 0;
      FUN_1806277c0(&file_writer,*(int32_t *)(file_offset + 0x10));
      if (*(int *)(file_offset + 0x10) != 0) {
                    // WARNING: Subroutine does not return
        memcpy(file_handle,*(uint64_t *)(file_offset + 8),*(int *)(file_offset + 0x10) + 1);
      }
      if (*(longlong *)(file_offset + 8) != 0) {
        file_type = 0;
        if (file_handle != (int8_t *)0x0) {
          *file_handle = 0;
        }
        file_data = file_data & 0xffffffff;
      }
      file_count = content_size + 8;
      FUN_1806277c0(&shader_reader,file_count);
      *(uint64_t *)(file_content + content_size) = 0x6a624f656e656353;
      *(int8_t *)((longlong)(file_content + content_size) + 8) = 0;
      content_size = file_count;
      path_separator = FUN_180624a00(&shader_reader);
      if (path_separator == '\0') {
        file_writer = &system_data_buffer_ptr;
        if (file_handle != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        file_handle = (int8_t *)0x0;
        file_data = file_data & 0xffffffff00000000;
        file_writer = &system_state_ptr;
        shader_reader = &system_data_buffer_ptr;
        if (file_content != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      else {
        shader_array[0] = (uint64_t *)0x0;
        shader_array[1] = (uint64_t *)0x0;
        shader_metadata = 0;
        shader_version = 3;
        FUN_18062c5f0(&shader_reader,&shader_array);
        shader_ptr = shader_array[1];
        shader_data = shader_array[0];
        file_offset = (longlong)shader_array[1] - (longlong)shader_array[0];
        FUN_18004b100(&file_buffer);
        file_path = &system_buffer_ptr;
        if (file_handle != (int8_t *)0x0) {
          file_path = file_handle;
        }
        System_DataHandler(&file_buffer,&unknown_var_6404_ptr,file_path);
        path_separator = FUN_180624a00(&file_buffer);
        if (path_separator == '\0') {
          FUN_180624910(&file_buffer);
        }
        engine_ptr = global_engine_ptr;
        file_count = (int)(file_offset >> 5);
        file_offset = (longlong)file_count;
        if (0 < file_count) {
          shader_entry = (uint *)(shader_data + 2);
          do {
            FUN_180061db0();
            FUN_180061be0();
            shader_output = &system_data_buffer_ptr;
            shader_info._0_4_ = 0;
            shader_info._4_4_ = 0;
            shader_input = (int8_t *)0x0;
            shader_length = 0;
            FUN_1806277c0(&shader_output,*shader_entry);
            if (*shader_entry != 0) {
                    // WARNING: Subroutine does not return
              memcpy(shader_input,*(uint64_t *)(shader_entry + -2),*shader_entry + 1);
            }
            if (*(longlong *)(shader_entry + -2) != 0) {
              shader_length = 0;
              if (shader_input != (int8_t *)0x0) {
                *shader_input = 0;
              }
              shader_info._4_4_ = 0;
            }
            shader_index = shader_length + 0xd;
            FUN_1806277c0(&shader_output,shader_index);
            shader_ptr = (uint64_t *)(shader_input + shader_length);
            *shader_ptr = 0x782e656e6563732f;
            *(int32_t *)(shader_ptr + 1) = 0x6e656373;
            *(int16_t *)((longlong)shader_ptr + 0xc) = 0x65;
            file_path = &system_buffer_ptr;
            if (shader_input != (int8_t *)0x0) {
              file_path = shader_input;
            }
            shader_length = shader_index;
            total_files = strstr(file_path,&unknown_var_6424_ptr);
            if (total_files == 0) {
              file_path = &system_buffer_ptr;
              if (shader_input != (int8_t *)0x0) {
                file_path = shader_input;
              }
              total_files = strstr(file_path,&unknown_var_6456_ptr);
              if (total_files != 0) goto LAB_shader_found;
              file_path = &system_buffer_ptr;
              if (shader_input != (int8_t *)0x0) {
                file_path = shader_input;
              }
              total_files = strstr(file_path,&unknown_var_6480_ptr);
              if (total_files != 0) goto LAB_shader_found;
              file_path = &system_buffer_ptr;
              if (shader_input != (int8_t *)0x0) {
                file_path = shader_input;
              }
              total_files = strstr(file_path,&unknown_var_6504_ptr);
              if (total_files != 0) goto LAB_shader_found;
              file_path = &system_buffer_ptr;
              if (shader_input != (int8_t *)0x0) {
                file_path = shader_input;
              }
              total_files = strstr(file_path,&unknown_var_6536_ptr);
              if (total_files != 0) goto LAB_shader_found;
              path_separator = FUN_180624af0(&shader_output);
              if (path_separator == '\0') {
                shader_length = 0;
                if (shader_input != (int8_t *)0x0) {
                  *shader_input = 0;
                }
                file_size = *shader_entry;
                path_length = (ulonglong)file_size;
                if (*(longlong *)(shader_entry + -2) != 0) {
                  FUN_1806277c0(&shader_output,path_length);
                }
                if (file_size != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(shader_input,*(uint64_t *)(shader_entry + -2),path_length);
                }
                if (shader_input != (int8_t *)0x0) {
                  shader_input[path_length] = 0;
                }
                shader_info._4_4_ = shader_entry[3];
                shader_length = file_size;
                FUN_1806277c0(&shader_output,0x12);
                file_size_ptr = (int32_t *)(shader_input + shader_length);
                *file_size_ptr = 0x6563732f;
                file_size_ptr[1] = 0x782e656e;
                file_size_ptr[2] = 0x2e6f6373;
                file_size_ptr[3] = 0x65637378;
                *(int16_t *)(file_size_ptr + 4) = 0x656e;
                *(int8_t *)((longlong)file_size_ptr + 0x12) = 0;
                shader_length = 0x12;
                path_separator = FUN_180624af0(&shader_output);
                if (path_separator != '\0') goto LAB_shader_processing;
                shader_output = &system_data_buffer_ptr;
                if (shader_input != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                shader_info = (ulonglong)shader_info._4_4_ << 0x20;
              }
              else {
LAB_shader_processing:
                shader_index = *shader_entry - 1;
                if (-1 < shader_index) {
                  total_files = (longlong)shader_index;
                  do {
                    if (*(char *)(total_files + *(longlong *)(shader_entry + -2)) == '/') goto LAB_shader_path_found;
                    shader_index = shader_index + -1;
                    total_files = total_files + -1;
                  } while (-1 < total_files);
                }
                shader_index = -1;
LAB_shader_path_found:
                FUN_180629a40(shader_data + (longlong)file_id * 4,&temp_buffer,shader_index + 1,0xffffffff);
                file_type = FUN_180054360(engine_ptr,&temp_buffer);
                if (init_system_data_file != 0) {
                  FUN_18005c1c0(file_type,&resource_handle);
                  shader_reader = &system_data_buffer_ptr;
                  file_data = 0;
                  file_content = (int8_t *)0x0;
                  file_type = 0;
                  FUN_1806277c0(&shader_reader,max_path_length);
                  if (max_path_length != 0) {
                    // WARNING: Subroutine does not return
                    memcpy(file_content,file_data,max_path_length + 1);
                  }
                  if (file_data != 0) {
                    file_type = 0;
                    if (file_content != (int8_t *)0x0) {
                      *file_content = 0;
                    }
                    file_data = file_data & 0xffffffff;
                  }
                  file_handle = &system_buffer_ptr;
                  if (file_buffer != (void *)0x0) {
                    file_handle = file_buffer;
                  }
                  System_DataHandler(&shader_reader,&unknown_var_6576_ptr,file_handle);
                  FUN_18062db60(&shader_reader,&resource_handle);
                  init_system_data_file = 0;
                  shader_reader = &system_data_buffer_ptr;
                  if (file_content != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  file_content = (int8_t *)0x0;
                  file_data = file_data & 0xffffffff00000000;
                  shader_reader = &system_state_ptr;
                  resource_handle = &system_data_buffer_ptr;
                  if (resource_data != 0) {
                    // WARNING: Subroutine does not return
                    FUN_18064e900();
                  }
                  resource_data = 0;
                  resource_flags = 0;
                  resource_handle = &system_state_ptr;
                }
                temp_buffer = &system_data_buffer_ptr;
                if (file_buffer != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                file_buffer = (void *)0x0;
                file_mode = 0;
                temp_buffer = &system_state_ptr;
                shader_output = &system_data_buffer_ptr;
                if (shader_input != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900();
                }
                shader_info = (ulonglong)shader_info._4_4_ << 0x20;
              }
            }
            else {
LAB_shader_found:
              shader_output = &system_data_buffer_ptr;
              if (shader_input != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900();
              }
              shader_info = (ulonglong)shader_info._4_4_ << 0x20;
            }
            shader_input = (int8_t *)0x0;
            shader_output = &system_state_ptr;
            file_id = file_id + 1;
            shader_entry = shader_entry + 8;
            file_offset = file_offset + -1;
            total_files = file_count_limit;
            shader_ptr = shader_array[1];
            shader_index = file_count;
          } while (file_offset != 0);
        }
        file_buffer = &system_data_buffer_ptr;
        if (file_data != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        file_data = 0;
        buffer_size = 0;
        file_buffer = &system_state_ptr;
        for (file_iterator = shader_data; file_iterator != shader_ptr; file_iterator = file_iterator + 4) {
          (**(code **)*file_iterator)(file_iterator,0);
        }
        if (shader_data != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(shader_data);
        }
        file_writer = &system_data_buffer_ptr;
        if (file_handle != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        file_handle = (int8_t *)0x0;
        file_data = file_data & 0xffffffff00000000;
        file_writer = &system_state_ptr;
        shader_reader = &system_data_buffer_ptr;
        if (file_content != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      file_handle = (int8_t *)0x0;
      file_writer = &system_state_ptr;
      file_info = file_info & 0xffffffff00000000;
      file_content = (int8_t *)0x0;
      shader_reader = &system_state_ptr;
      file_count = shader_index + 1;
    } while (file_count < (int)total_files);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(stack_guard ^ (ulonglong)shader_buffer);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void initialize_render_pipeline(void)
// 初始化渲染管线，设置渲染相关的全局变量和数据结构
void initialize_render_pipeline(void)

{
  uint64_t *render_target;
  uint64_t *render_state;
  uint64_t render_config;
  longlong mutex_data;
  
  render_state = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x198,8,3);
  render_target = render_state + 4;
  FUN_180637560(render_target);
  *render_target = &unknown_var_6384_ptr;
  *(int16_t *)(render_state + 0x1a) = 1;
  *(int32_t *)(render_state + 9) = 0;
  *(int8_t *)((longlong)render_state + 0x54) = 0;
  *render_target = &unknown_var_264_ptr;
  render_target = render_state + 0x1b;
  FUN_180637560(render_target);
  *render_target = &unknown_var_6384_ptr;
  *(int16_t *)(render_state + 0x31) = 1;
  *(int32_t *)(render_state + 0x20) = 0;
  *(int8_t *)((longlong)render_state + 0x10c) = 0;
  *render_target = &unknown_var_264_ptr;
  *render_state = 0;
  *(int8_t *)(render_state + 3) = 0;
  render_state[2] = 0xffffffff00000000;
  *(int32_t *)(render_state + 1) = 0xe;
  system_message_context = render_state;
  render_config = FUN_18062b1e0(system_memory_pool_ptr,0x480,8,3);
  init_system_data_file = FUN_18004bd10(render_config);
  render_config = FUN_18062b1e0(system_memory_pool_ptr,0x10420,8,3);
  init_system_data_file = FUN_18005c090(render_config);
  init_system_data_file = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(init_system_data_file + 0x19) = 0;
  *(int16_t *)(init_system_data_file + 0x1d) = 0;
  *(int8_t *)(init_system_data_file + 0x1f) = 0;
  *(int32_t *)(init_system_data_file + 0x28) = 3;
  *(longlong *)init_system_data_file = init_system_data_file;
  *(longlong *)(init_system_data_file + 8) = init_system_data_file;
  *(uint64_t *)(init_system_data_file + 0x10) = 0;
  *(int8_t *)(init_system_data_file + 0x18) = 0;
  *(uint64_t *)(init_system_data_file + 0x20) = 0;
  init_system_data_file = FUN_18062b1e0(system_memory_pool_ptr,8,4,3);
  *(int32_t *)(init_system_data_file + 4) = 0;
  render_config = FUN_18062b1e0(system_memory_pool_ptr,0x80,8,3);
  init_system_data_file = FUN_18015c450(render_config);
  mutex_data = FUN_18062b1e0(system_memory_pool_ptr,0xe8,8,3);
  _Mtx_init_in_situ(mutex_data,2);
  _Mtx_init_in_situ(mutex_data + 0x50,2);
  *(uint64_t *)(mutex_data + 0xa0) = 0;
  *(uint64_t *)(mutex_data + 0xa8) = 0;
  *(uint64_t *)(mutex_data + 0xb0) = 0;
  *(int32_t *)(mutex_data + 0xb8) = 3;
  *(uint64_t *)(mutex_data + 0xc0) = 0;
  *(uint64_t *)(mutex_data + 200) = 0;
  *(uint64_t *)(mutex_data + 0xd0) = 0;
  *(int32_t *)(mutex_data + 0xd8) = 0x20;
  *(int32_t *)(mutex_data + 0xe0) = 0;
  init_system_data_file = mutex_data;
  render_config = FUN_18062b1e0(system_memory_pool_ptr,0x70,8,3);
                    // WARNING: Subroutine does not return
  memset(render_config,0,0x70);
}




// 函数: void cleanup_resource_array(longlong *resource_array)
// 清理资源数组，释放分配的资源
void cleanup_resource_array(longlong *resource_array)

{
  longlong array_start;
  longlong array_end;
  
  array_start = resource_array[1];
  for (array_end = *resource_array; array_end != array_start; array_end = array_end + 0x48) {
    FUN_180058c20(array_end);
  }
  if (*resource_array == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}




// 函数: void initialize_resource_handler(longlong resource_handle,uint64_t param2,uint64_t param3,uint64_t param4)
// 初始化资源处理器，设置资源处理的相关参数
void initialize_resource_handler(longlong resource_handle,uint64_t param2,uint64_t param3,uint64_t param4)

{
  FUN_180058210(resource_handle,*(uint64_t *)(resource_handle + 0x10),param3,param4,0xfffffffffffffffe);
  return;
}




// 函数: void destroy_resource_handler(longlong resource_handle)
// 销毁资源处理器，清理相关资源
void destroy_resource_handler(longlong resource_handle)

{
  longlong resource_data;
  longlong resource_ptr;
  ulonglong resource_count;
  ulonglong resource_index;
  
  resource_count = *(ulonglong *)(resource_handle + 0x10);
  resource_data = *(longlong *)(resource_handle + 8);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(longlong *)(resource_data + resource_index * 8);
      if (resource_ptr != 0) {
        if (*(longlong **)(resource_ptr + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(resource_ptr + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(resource_ptr);
      }
      *(uint64_t *)(resource_data + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(ulonglong *)(resource_handle + 0x10);
  }
  *(uint64_t *)(resource_handle + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(resource_handle + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}




// 函数: longlong create_resource_context(longlong context_ptr)
// 创建资源上下文，初始化资源管理所需的数据结构
longlong create_resource_context(longlong context_ptr)

{
  *(uint64_t *)(context_ptr + 8) = &system_state_ptr;
  *(uint64_t *)(context_ptr + 0x10) = 0;
  *(int32_t *)(context_ptr + 0x18) = 0;
  *(uint64_t *)(context_ptr + 8) = &system_data_buffer_ptr;
  *(uint64_t *)(context_ptr + 0x20) = 0;
  *(uint64_t *)(context_ptr + 0x10) = 0;
  *(int32_t *)(context_ptr + 0x18) = 0;
  return context_ptr;
}




// 函数: void destroy_resource_context(longlong context_ptr)
// 销毁资源上下文，释放相关资源
void destroy_resource_context(longlong context_ptr)

{
  *(uint64_t *)(context_ptr + 8) = &system_data_buffer_ptr;
  if (*(longlong *)(context_ptr + 0x10) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(context_ptr + 0x10) = 0;
  *(int32_t *)(context_ptr + 0x20) = 0;
  *(uint64_t *)(context_ptr + 8) = &system_state_ptr;
  return;
}




// 函数: void initialize_resource_manager_v2(longlong resource_handle,uint64_t param2,uint64_t param3,uint64_t param4)
// 初始化资源管理器版本2，提供更高级的资源管理功能
void initialize_resource_manager_v2(longlong resource_handle,uint64_t param2,uint64_t param3,uint64_t param4)

{
  FUN_180058210(resource_handle,*(uint64_t *)(resource_handle + 0x10),param3,param4,0xfffffffffffffffe);
  return;
}




// 函数: void destroy_resource_manager_v2(longlong resource_handle)
// 销毁资源管理器版本2，清理所有相关资源
void destroy_resource_manager_v2(longlong resource_handle)

{
  longlong resource_data;
  longlong resource_ptr;
  ulonglong resource_count;
  ulonglong resource_index;
  
  resource_count = *(ulonglong *)(resource_handle + 0x10);
  resource_data = *(longlong *)(resource_handle + 8);
  resource_index = 0;
  if (resource_count != 0) {
    do {
      resource_ptr = *(longlong *)(resource_data + resource_index * 8);
      if (resource_ptr != 0) {
        if (*(longlong **)(resource_ptr + 0x10) != (longlong *)0x0) {
          (**(code **)(**(longlong **)(resource_ptr + 0x10) + 0x38))();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(resource_ptr);
      }
      *(uint64_t *)(resource_data + resource_index * 8) = 0;
      resource_index = resource_index + 1;
    } while (resource_index < resource_count);
    resource_count = *(ulonglong *)(resource_handle + 0x10);
  }
  *(uint64_t *)(resource_handle + 0x18) = 0;
  if ((1 < resource_count) && (*(longlong *)(resource_handle + 8) != 0)) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void emergency_exit(uint64_t exit_code,int32_t exit_status)
// 紧急退出函数，在发生严重错误时调用
void emergency_exit(uint64_t exit_code,int32_t exit_status)

{
  code *exit_handler;
  
  if (system_cache_buffer != 0) {
    func_0x00018005a410(system_cache_buffer + 8);
  }
  Sleep(2000);
  _Exit(exit_status);
  exit_handler = (code *)swi(3);
  (*exit_handler)();
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void finalize_initialization(void)
// 完成初始化过程，执行最后的清理和设置工作
void finalize_initialization(void)

{
  uint64_t *global_ptr;
  uint64_t temp_value;
  char *config_data;
  int lock_status;
  char *config_ptr;
  uint64_t unused_param;
  uint64_t stack_guard;
  
  config_data = init_system_data_file;
  stack_guard = 0xfffffffffffffffe;
  if (*init_system_data_file != '\0') {
    global_ptr = (uint64_t *)*init_system_data_file;
    lock_status = _Mtx_lock(0x180c91970);
    if (lock_status != 0) {
      __Throw_C_error_std__YAXH_Z(lock_status);
    }
    temp_value = SYSTEM_DATA_MANAGER_A;
    SYSTEM_DATA_MANAGER_A = *global_ptr;
    FUN_1801299b0(&unknown_var_6880_ptr,0,0,unused_param,stack_guard);
    FUN_18010f010(&unknown_var_6896_ptr,*(int32_t *)(config_data + 4));
    FUN_18010f010(&unknown_var_6928_ptr,*(int32_t *)(config_data + 8));
    FUN_18010f010(&unknown_var_6960_ptr,*(int32_t *)(config_data + 0xc));
    FUN_18010f010(&unknown_var_6992_ptr,*(int32_t *)(config_data + 0x10));
    FUN_18010f010(&unknown_var_7024_ptr,*(int32_t *)(config_data + 0x14));
    FUN_18010f010(&unknown_var_7064_ptr,*(int32_t *)(config_data + 0x18));
    for (config_ptr = *(char **)(config_data + 0x28); config_ptr != config_data + 0x20;
        config_ptr = (char *)func_0x00018066bd70(config_ptr)) {
      FUN_18010f010(&unknown_var_7104_ptr,*(int32_t *)(config_ptr + 0x20),*(int32_t *)(config_ptr + 0x24));
    }
    for (config_ptr = *(char **)(config_data + 0x58); config_ptr != config_data + 0x50;
        config_ptr = (char *)func_0x00018066bd70(config_ptr)) {
      FUN_18010f010(&unknown_var_7144_ptr,*(int32_t *)(config_ptr + 0x20),*(int32_t *)(config_ptr + 0x24));
    }
    FUN_18010f010(&unknown_var_7184_ptr,*(int32_t *)(config_data + 0x80));
    FUN_18010f010(&unknown_var_7224_ptr,*(int32_t *)(config_data + 0x84));
    FUN_18010f010(&unknown_var_7264_ptr,*(int32_t *)(config_data + 0x88));
    FUN_18012cfe0();
    SYSTEM_DATA_MANAGER_A = temp_value;
    lock_status = _Mtx_unlock(0x180c91970);
    if (lock_status != 0) {
      __Throw_C_error_std__YAXH_Z(lock_status);
    }
  }
  return;
}





