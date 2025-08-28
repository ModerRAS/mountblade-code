#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part208.c - 核心引擎模块第208部分
// 本文件包含8个函数，主要处理内存管理、数据结构和资源释放等功能

// 函数: 释放纹理资源并重置相关状态
// 原函数名: FUN_18018b590
void release_texture_resources(int64_t texture_context)

{
  int texture_width;
  int texture_height;
  int texture_depth;
  int64_t texture_manager;
  void *texture_data;
  int64_t texture_info;
  int64_t *resource_pool;
  uint64_t new_buffer;
  void *default_texture;
  int dimensions[2];
  int64_t cleanup_context;
  int *buffer_ptr;
  code *cleanup_callback;
  code *texture_callback;
  
  // 获取纹理管理器
  texture_manager = *(int64_t *)(texture_context + 0xb0);
  texture_data = *(void **)(*(int64_t *)(texture_manager + 0xa8) + 0x70);
  default_texture = &system_buffer_ptr;
  if (texture_data != (void *)0x0) {
    default_texture = texture_data;
  }
  
  // 调用纹理清理回调
  (**(code **)(*(int64_t *)(texture_manager + 0x10) + 0x10))((int64_t *)(texture_manager + 0x10),default_texture);
  
  texture_info = *(int64_t *)(*(int64_t *)(texture_manager + 0xa8) + 0x20);
  if (*(int64_t *)(texture_manager + 0xb0) != 0) {
    // 释放纹理资源
    free_texture_memory();
  }
  
  // 重置纹理状态
  *(uint64_t *)(texture_manager + 0xb0) = 0;
  dimensions[0] = *(int *)(texture_info + 0x24);
  *(int *)(texture_manager + 0xb8) = dimensions[0];
  texture_width = *(int *)(texture_info + 0x28);
  *(int *)(texture_manager + 0xbc) = texture_width;
  texture_depth = *(int *)(texture_info + 0x2c);
  *(int *)(texture_manager + 0xc0) = texture_depth;
  
  // 计算纹理缩放因子
  *(float *)(texture_manager + 0xc4) = 1.0 / (float)dimensions[0];
  *(float *)(texture_manager + 200) = 1.0 / (float)texture_width;
  *(float *)(texture_manager + 0xcc) = 1.0 / (float)texture_depth;
  
  // 计算总像素数
  dimensions[0] = texture_depth * texture_width * dimensions[0];
  if (dimensions[0] * 3 == 0) {
    new_buffer = 0;
  }
  else {
    // 分配新的纹理缓冲区
    new_buffer = allocate_texture_buffer(system_memory_pool_ptr,(int64_t)(dimensions[0] * 3) * 4,3);
  }
  
  *(uint64_t *)(texture_manager + 0xb0) = new_buffer;
  resource_pool = *(int64_t **)(*(int64_t *)(texture_manager + 0xa8) + 0x88);
  buffer_ptr = dimensions;
  cleanup_callback = (code *)&memory_allocator_3120_ptr;
  texture_callback = cleanup_texture_resources;
  cleanup_context = texture_manager;
  
  // 执行资源清理
  (**(code **)(*resource_pool + 0x60))
            (resource_pool,&system_memory_e0d0,*(int64_t *)(texture_manager + 0xa8) + 0xc,0,&cleanup_context);
  
  if (cleanup_callback != (code *)0x0) {
    (*cleanup_callback)(&cleanup_context,0,0);
  }
  return;
}



// 全局变量重叠警告已忽略



// 函数: 初始化纹理对象并设置相关属性
// 原函数名: FUN_18018b740
void initialize_texture_object(int64_t render_context)

{
  int64_t *texture_object;
  int64_t *texture_methods;
  void *texture_format;
  int64_t init_params[3];
  
  // 分配纹理对象内存
  texture_object = (int64_t *)allocate_texture_object(system_memory_pool_ptr,0xd0,8,3);
  *texture_object = (int64_t)&texture_vtable_base;
  *texture_object = (int64_t)&texture_vtable_extended;
  *(int32_t *)(texture_object + 1) = 0;
  *texture_object = (int64_t)&texture_methods_table;
  texture_methods = texture_object + 2;
  *texture_methods = (int64_t)&texture_resource_manager;
  texture_object[3] = 0;
  *(int32_t *)(texture_object + 4) = 0;
  *texture_methods = (int64_t)&texture_shader_interface;
  texture_object[3] = (int64_t)(texture_object + 5);
  *(int32_t *)(texture_object + 4) = 0;
  *(int8_t *)(texture_object + 5) = 0;
  texture_object[0x16] = 0;
  texture_object[0x15] = render_context;
  
  // 设置渲染上下文
  if (render_context != 0) {
    texture_format = &system_buffer_ptr;
    if (*(void **)(render_context + 0x70) != (void *)0x0) {
      texture_format = *(void **)(render_context + 0x70);
    }
    (**(code **)(*texture_methods + 0x10))(texture_methods,texture_format);
  }
  
  // 初始化纹理属性
  texture_object[0x17] = 0;
  *(int32_t *)(texture_object + 0x18) = 0;
  *(int32_t *)((int64_t)texture_object + 0xc4) = 0x7f7fffff;  // 最大浮点值
  *(int32_t *)(texture_object + 0x19) = 0x7f7fffff;
  *(int32_t *)((int64_t)texture_object + 0xcc) = 0x7f7fffff;
  
  // 调用纹理初始化方法
  (**(code **)(*texture_object + 0x28))(texture_object);
  texture_methods = *(int64_t **)(render_context + 0xb0);
  *(int64_t **)(render_context + 0xb0) = texture_object;
  
  // 释放旧的纹理对象
  if (texture_methods != (int64_t *)0x0) {
    (**(code **)(*texture_methods + 0x38))();
  }
  
  texture_methods = *(int64_t **)(render_context + 0xb0);
  setup_texture_resources(core_system_data_texture,init_params);
  (**(code **)(*texture_methods + 0x28))(texture_methods);
  
  // 更新资源链表
  texture_object = *(int64_t **)(init_params[0] + 0x10);
  *(int64_t **)(init_params[0] + 0x10) = texture_methods;
  if (texture_object != (int64_t *)0x0) {
    (**(code **)(*texture_object + 0x38))();
  }
  return;
}



// 全局变量重叠警告已忽略



// 函数: 从哈希表中移除纹理资源
// 原函数名: FUN_18018b8c0
void remove_texture_from_hash_table(int64_t texture_context)

{
  int64_t hash_table;
  int64_t *current_entry;
  int64_t *previous_entry;
  int64_t hash_key1;
  int64_t *next_entry;
  int64_t *temp_entry;
  
  // 获取哈希表信息
  hash_table = *(int64_t *)(*(int64_t *)(texture_context + 0xb0) + 0xa8);
  hash_key1 = *(int64_t *)(core_system_data_texture + 8);
  current_entry = (int64_t *)
           (hash_key1 + ((*(uint64_t *)(hash_table + 0x14) ^ *(uint64_t *)(hash_table + 0xc)) %
                    (uint64_t)*(uint *)(core_system_data_texture + 0x10)) * 8);
  next_entry = (int64_t *)*current_entry;
  
  do {
    if (next_entry == (int64_t *)0x0) {
LAB_18018b92f:
      hash_table = *(int64_t *)(core_system_data_texture + 0x10);
      current_entry = (int64_t *)(hash_key1 + hash_table * 8);
      next_entry = (int64_t *)*current_entry;
LAB_18018b93a:
      if (next_entry == *(int64_t **)(hash_key1 + hash_table * 8)) {
        return;
      }
      hash_table = next_entry[3];
      previous_entry = current_entry;
      
      // 查找链表中的下一个条目
      while (hash_table == 0) {
        previous_entry = previous_entry + 1;
        hash_table = *previous_entry;
      }
      
      temp_entry = (int64_t *)*current_entry;
      previous_entry = (int64_t *)temp_entry[3];
      if (temp_entry == next_entry) {
        *current_entry = (int64_t)previous_entry;
      }
      else {
        // 从链表中移除条目
        for (; previous_entry != next_entry; previous_entry = (int64_t *)previous_entry[3]) {
          temp_entry = previous_entry;
        }
        temp_entry[3] = previous_entry[3];
      }
      
      // 释放条目资源
      if ((int64_t *)next_entry[2] != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)next_entry[2] + 0x38))();
      }
      // 释放条目内存
      free_memory_block(next_entry);
    }
    
    // 检查是否找到目标条目
    if ((*(int64_t *)(hash_table + 0xc) == *next_entry) && (*(int64_t *)(hash_table + 0x14) == next_entry[1])) {
      if (next_entry != (int64_t *)0x0) {
        hash_table = *(int64_t *)(core_system_data_texture + 0x10);
        goto LAB_18018b93a;
      }
      goto LAB_18018b92f;
    }
    next_entry = (int64_t *)next_entry[3];
  } while( true );
}



// 全局变量重叠警告已忽略



// 函数: 解析纹理数据并创建纹理对象
// 原函数名: FUN_18018b9e0
void parse_texture_data_and_create(int64_t texture_params,int64_t data_stream)

{
  uint *texture_type_ptr;
  byte *texture_name;
  uint texture_type;
  int64_t name_length;
  byte *current_char;
  int32_t *texture_flags;
  int texture_format;
  int texture_quality;
  int64_t *texture_table;
  int8_t name_buffer[32];
  uint64_t stream_position;
  void *texture_data_ptr;
  byte *texture_name_buffer;
  int name_length_int;
  byte texture_full_name[1032];
  uint64_t checksum;
  
  stream_position = 0xfffffffffffffffe;
  checksum = GET_SECURITY_COOKIE() ^ (uint64_t)name_buffer;
  *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
  texture_quality = 0;
  texture_data_ptr = &memory_allocator_336_ptr;
  texture_name_buffer = texture_full_name;
  name_length_int = 0;
  texture_full_name[0] = 0;
  texture_type = **(uint **)(data_stream + 8);
  texture_type_ptr = *(uint **)(data_stream + 8) + 1;
  *(uint **)(data_stream + 8) = texture_type_ptr;
  
  // 读取纹理名称
  if (texture_type != 0) {
    read_texture_name(&texture_data_ptr,texture_type_ptr,texture_type);
    *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + (uint64_t)texture_type;
  }
  
  // 查找纹理类型
  texture_table = (int64_t *)0x180bf6740;
  do {
    name_length = -1;
    do {
      name_length = name_length + 1;
    } while (*(char *)(*texture_table + name_length) != '\0');
    texture_format = (int)name_length;
    
    // 比较纹理名称
    if (name_length_int == texture_format) {
      if (name_length_int != 0) {
        current_char = texture_name_buffer;
        do {
          texture_name = current_char + (*texture_table - (int64_t)texture_name_buffer);
          texture_format = (uint)*current_char - (uint)*texture_name;
          if (texture_format != 0) break;
          current_char = current_char + 1;
        } while (*texture_name != 0);
      }
LAB_18018baee:
      // 设置纹理类型
      if (texture_format == 0) {
        *(int32_t *)(texture_params + 8) = *(int32_t *)((int64_t)texture_quality * 0x10 + 0x180bf6748);
        goto LAB_18018baff;
      }
    }
    else if (name_length_int == 0) goto LAB_18018baee;
    texture_quality = texture_quality + 1;
    texture_table = texture_table + 2;
    if (0x180bf674f < (int64_t)texture_table) {
LAB_18018baff:
      texture_data_ptr = &system_state_ptr;
      
      // 读取纹理属性
      *(int32_t *)(texture_params + 0x24) = **(int32_t **)(data_stream + 8);
      *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
      *(int32_t *)(texture_params + 0x28) = **(int32_t **)(data_stream + 8);
      *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
      *(int32_t *)(texture_params + 0x2c) = **(int32_t **)(data_stream + 8);
      texture_flags = (int32_t *)(*(int64_t *)(data_stream + 8) + 4);
      *(int32_t **)(data_stream + 8) = texture_flags;
      
      // 处理特殊纹理类型
      if (*(int *)(texture_params + 8) == 0) {
        *(int32_t *)(texture_params + 0x20) = *texture_flags;
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
        *(int32_t *)(texture_params + 0x1c) = **(int32_t **)(data_stream + 8);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
        *(int32_t *)(texture_params + 0xc) = **(int32_t **)(data_stream + 8);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
        *(int32_t *)(texture_params + 0x10) = **(int32_t **)(data_stream + 8);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
        *(int32_t *)(texture_params + 0x14) = **(int32_t **)(data_stream + 8);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
        *(int32_t *)(texture_params + 0x18) = **(int32_t **)(data_stream + 8);
        *(int64_t *)(data_stream + 8) = *(int64_t *)(data_stream + 8) + 4;
      }
      // 清理并返回
      cleanup_texture_parser(checksum ^ (uint64_t)name_buffer);
    }
  } while( true );
}





// 函数: 序列化纹理数据到数据流
// 原函数名: FUN_18018bbd0
void serialize_texture_data(int64_t texture_params,int64_t *data_stream)

{
  int32_t texture_value;
  int *texture_type_table;
  int texture_index;
  int32_t *stream_ptr;
  
  stream_ptr = (int32_t *)data_stream[1];
  if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
    expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
    stream_ptr = (int32_t *)data_stream[1];
  }
  
  // 写入纹理类型
  texture_index = 0;
  texture_type_table = (int *)0x180bf6748;
  *stream_ptr = 0;
  data_stream[1] = data_stream[1] + 4;
  
  // 查找并写入纹理类型数据
  do {
    if (*texture_type_table == *(int *)(texture_params + 8)) {
      write_texture_type_data(data_stream,*(uint64_t *)((int64_t)texture_index * 0x10 + 0x180bf6740));
      break;
    }
    texture_index = texture_index + 1;
    texture_type_table = texture_type_table + 4;
  } while ((int64_t)texture_type_table < 0x180bf6758);
  
  // 写入纹理属性
  stream_ptr = (int32_t *)data_stream[1];
  texture_value = *(int32_t *)(texture_params + 0x24);
  if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
    expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
    stream_ptr = (int32_t *)data_stream[1];
  }
  *stream_ptr = texture_value;
  data_stream[1] = data_stream[1] + 4;
  
  stream_ptr = (int32_t *)data_stream[1];
  texture_value = *(int32_t *)(texture_params + 0x28);
  if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
    expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
    stream_ptr = (int32_t *)data_stream[1];
  }
  *stream_ptr = texture_value;
  data_stream[1] = data_stream[1] + 4;
  
  stream_ptr = (int32_t *)data_stream[1];
  texture_value = *(int32_t *)(texture_params + 0x2c);
  if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
    expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
    stream_ptr = (int32_t *)data_stream[1];
  }
  *stream_ptr = texture_value;
  stream_ptr = (int32_t *)(data_stream[1] + 4);
  data_stream[1] = (int64_t)stream_ptr;
  
  // 处理特殊纹理类型的额外数据
  if (*(int *)(texture_params + 8) == 0) {
    texture_value = *(int32_t *)(texture_params + 0x20);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
    
    stream_ptr = (int32_t *)data_stream[1];
    texture_value = *(int32_t *)(texture_params + 0x1c);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
    
    stream_ptr = (int32_t *)data_stream[1];
    texture_value = *(int32_t *)(texture_params + 0xc);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
    
    stream_ptr = (int32_t *)data_stream[1];
    texture_value = *(int32_t *)(texture_params + 0x10);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
    
    stream_ptr = (int32_t *)data_stream[1];
    texture_value = *(int32_t *)(texture_params + 0x14);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
    
    stream_ptr = (int32_t *)data_stream[1];
    texture_value = *(int32_t *)(texture_params + 0x18);
    if ((uint64_t)((*data_stream - (int64_t)stream_ptr) + data_stream[2]) < 5) {
      expand_data_buffer(data_stream,(int64_t)stream_ptr + (4 - *data_stream));
      stream_ptr = (int32_t *)data_stream[1];
    }
    *stream_ptr = texture_value;
    data_stream[1] = data_stream[1] + 4;
  }
  return;
}





// 函数: 写入纹理数据到数据流
// 原函数名: FUN_18018bd0d
void write_texture_data_to_stream(int32_t *stream_position)

{
  int32_t texture_data;
  int64_t buffer_size;
  int32_t *current_position;
  int64_t *stream_info;
  int64_t texture_context;
  
  texture_data = *(int32_t *)(texture_context + 0x20);
  if ((uint64_t)((buffer_size - (int64_t)stream_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    stream_position = (int32_t *)stream_info[1];
  }
  *stream_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  current_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x1c);
  if ((uint64_t)((*stream_info - (int64_t)current_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    current_position = (int32_t *)stream_info[1];
  }
  *current_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  current_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0xc);
  if ((uint64_t)((*stream_info - (int64_t)current_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    current_position = (int32_t *)stream_info[1];
  }
  *current_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  current_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x10);
  if ((uint64_t)((*stream_info - (int64_t)current_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    current_position = (int32_t *)stream_info[1];
  }
  *current_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  current_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x14);
  if ((uint64_t)((*stream_info - (int64_t)current_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    current_position = (int32_t *)stream_info[1];
  }
  *current_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  current_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x18);
  if ((uint64_t)((*stream_info - (int64_t)current_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    current_position = (int32_t *)stream_info[1];
  }
  *current_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  return;
}





// 函数: 写入部分纹理数据到数据流
// 原函数名: FUN_18018bd5f
void write_partial_texture_data(void)

{
  int32_t texture_data;
  int32_t *stream_position;
  int64_t *stream_info;
  int32_t texture_flags;
  int64_t texture_context;
  
  expand_data_buffer();
  *(int32_t *)stream_info[1] = texture_flags;
  stream_info[1] = stream_info[1] + 4;
  stream_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0xc);
  if ((uint64_t)((*stream_info - (int64_t)stream_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    stream_position = (int32_t *)stream_info[1];
  }
  *stream_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  stream_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x10);
  if ((uint64_t)((*stream_info - (int64_t)stream_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    stream_position = (int32_t *)stream_info[1];
  }
  *stream_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  stream_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x14);
  if ((uint64_t)((*stream_info - (int64_t)stream_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    stream_position = (int32_t *)stream_info[1];
  }
  *stream_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  stream_position = (int32_t *)stream_info[1];
  texture_data = *(int32_t *)(texture_context + 0x18);
  if ((uint64_t)((*stream_info - (int64_t)stream_position) + stream_info[2]) < 5) {
    expand_data_buffer();
    stream_position = (int32_t *)stream_info[1];
  }
  *stream_position = texture_data;
  stream_info[1] = stream_info[1] + 4;
  return;
}



// 全局变量重叠警告已忽略

uint64_t *
add_texture_to_hash_table(int64_t hash_table,uint64_t *texture_entry,uint64_t entry_key,int64_t *texture_data,
             uint64_t hash_value)

{
  uint64_t *existing_entry;
  int64_t hash_index;
  uint64_t table_size;
  int32_t texture_format;
  int32_t texture_quality;
  int32_t *new_texture;
  uint64_t new_texture_id;
  int64_t *texture_properties;
  
  // 计算哈希索引
  table_size = hash_value % (uint64_t)*(uint *)(hash_table + 0x10);
  existing_entry = (uint64_t *)(*(int64_t *)(hash_table + 8) + table_size * 8);
  texture_properties = (int64_t *)*existing_entry;
  
  do {
    if (texture_properties == (int64_t *)0x0) {
LAB_18018bee2:
      // 扩展哈希表
      expand_hash_table(hash_table + 0x20,&hash_value,(uint64_t)*(uint *)(hash_table + 0x10),
                    *(int32_t *)(hash_table + 0x18),1);
      
      // 创建新的纹理条目
      new_texture = (int32_t *)create_texture_entry(system_memory_pool_ptr,0x20,*(int8_t *)(hash_table + 0x2c));
      texture_format = *(int32_t *)((int64_t)texture_data + 4);
      hash_index = texture_data[1];
      texture_quality = *(int32_t *)((int64_t)texture_data + 0xc);
      *new_texture = (int)*texture_data;
      new_texture[1] = texture_format;
      new_texture[2] = (int)hash_index;
      new_texture[3] = texture_quality;
      *(uint64_t *)(new_texture + 4) = 0;
      *(uint64_t *)(new_texture + 6) = 0;
      
      // 插入到哈希表
      if ((char)hash_value == '\0') {
        *(uint64_t *)(new_texture + 6) = *(uint64_t *)(*(int64_t *)(hash_table + 8) + table_size * 8);
        *(int32_t **)(*(int64_t *)(hash_table + 8) + table_size * 8) = new_texture;
        *(int64_t *)(hash_table + 0x18) = *(int64_t *)(hash_table + 0x18) + 1;
        hash_index = *(int64_t *)(hash_table + 8);
        *texture_entry = new_texture;
        texture_entry[1] = hash_index + table_size * 8;
        *(int8_t *)(texture_entry + 2) = 1;
        return texture_entry;
      }
      
      // 处理哈希冲突
      new_texture_id = create_collision_list(system_memory_pool_ptr,(uint64_t)hash_value._4_4_ * 8 + 8,8,
                            *(int8_t *)(hash_table + 0x2c));
      // 初始化冲突列表
      memset(new_texture_id,0,(uint64_t)hash_value._4_4_ * 8);
    }
    
    // 检查是否已存在相同条目
    if ((*texture_data == *texture_properties) && (texture_data[1] == texture_properties[1])) {
      if (texture_properties != (int64_t *)0x0) {
        *texture_entry = texture_properties;
        texture_entry[1] = existing_entry;
        *(int8_t *)(texture_entry + 2) = 0;
        return texture_entry;
      }
      goto LAB_18018bee2;
    }
    texture_properties = (int64_t *)texture_properties[3];
  } while( true );
}





// 函数: 复制纹理数据到目标缓冲区
// 原函数名: FUN_18018c050
void copy_texture_data_to_buffer(int64_t source_context,uint64_t data_offset,uint64_t data_size,int64_t *target_context)

{
  // 复制纹理数据
  memcpy(*(uint64_t *)(*target_context + 0xb0),*(uint64_t *)(source_context + 8),
         (int64_t)(*(int *)target_context[1] * 0xc));
}





// 函数: 处理纹理资源并更新引用计数
// 原函数名: FUN_18018c160
int64_t * process_texture_resources(int64_t *resource_manager,uint64_t *texture_handle)

{
  int64_t old_ref_count;
  int64_t old_data_ptr;
  int64_t old_texture_id;
  int64_t old_texture_data;
  int64_t new_ref_count;
  char is_valid;
  int64_t *texture_object;
  int32_t texture_flags;
  int64_t *stack_resource;
  uint64_t *stack_handle;
  int64_t stack_context;
  int64_t stack_data;
  int32_t stack_format;
  int32_t stack_quality;
  
  stack_resource = &stack_context;
  stack_context = 0;
  stack_data = 0;
  stack_format = 3;
  stack_quality = 0;
  stack_handle = texture_handle;
  texture_object = (int64_t *)get_texture_object_cache();
  
  // 交换纹理对象数据
  if (texture_object != &stack_context) {
    texture_object[1] = *texture_object;
    old_ref_count = *texture_object;
    *texture_object = 0;
    old_data_ptr = texture_object[1];
    texture_object[1] = 0;
    old_texture_id = texture_object[2];
    texture_object[2] = 0;
    new_ref_count = texture_object[3];
    *(int *)(texture_object + 3) = (int)texture_object[3];
    old_texture_data = *texture_object;
    *texture_object = old_ref_count;
    texture_object[1] = old_data_ptr;
    texture_object[2] = old_texture_id;
    *(int *)(texture_object + 3) = (int)new_ref_count;
    
    if (old_texture_data != 0) {
      // 释放旧纹理数据
      free_texture_memory();
    }
    
    old_ref_count = *texture_object;
    *texture_object = stack_context;
    old_data_ptr = texture_object[1];
    texture_object[1] = stack_quality;
    old_texture_id = texture_object[2];
    texture_object[2] = stack_data;
    old_texture_data = texture_object[3];
    *(int32_t *)(texture_object + 3) = stack_format;
    stack_context = old_ref_count;
    stack_quality = old_data_ptr;
    stack_data = old_texture_id;
    stack_format = (int)old_texture_data;
  }
  
  *(int32_t *)(texture_object + 4) = stack_quality;
  stack_resource = &stack_context;
  
  if (stack_context != 0) {
    // 释放纹理资源
    free_texture_memory();
  }
  
  // 处理纹理资源
  process_resource_manager(resource_manager,&stack_resource,texture_handle);
  texture_object = stack_resource;
  is_valid = validate_texture_resource(stack_resource + 8,texture_handle);
  
  if (is_valid == '\0') {
    process_resource_manager(resource_manager,&stack_resource,texture_handle);
    texture_object = stack_resource;
    if (stack_resource != resource_manager) {
      resource_manager[4] = resource_manager[4] + -1;
      release_resource_object(stack_resource);
      texture_flags = remove_resource_reference(texture_object,resource_manager);
      update_resource_references(texture_flags,texture_object);
    }
    *texture_handle = &default_texture_resource;
    if (texture_handle[1] != 0) {
      // 释放纹理内存
      free_texture_memory();
    }
    texture_handle[1] = 0;
    *(int32_t *)(texture_handle + 3) = 0;
    texture_object = (int64_t *)0x0;
  }
  else {
    *texture_handle = &default_texture_resource;
    if (texture_handle[1] != 0) {
      // 释放纹理内存
      free_texture_memory();
    }
    texture_handle[1] = 0;
    *(int32_t *)(texture_handle + 3) = 0;
    texture_object = texture_object + 8;
  }
  *texture_handle = &texture_resource_manager;
  return texture_object;
}



// 全局变量重叠警告已忽略


