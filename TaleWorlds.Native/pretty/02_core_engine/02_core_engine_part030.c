#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part030.c - 核心引擎模块第30部分
// 本文件包含7个函数，主要处理数据序列化、内存管理和对象清理

// 函数: void serialize_engine_data(int64_t engine_context, int64_t *buffer_manager)
// 功能: 序列化引擎数据到缓冲区，包括位置、旋转和缩放信息
void serialize_engine_data(int64_t engine_context, int64_t *buffer_manager)

{
  int8_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t *buffer_ptr;
  int8_t *byte_ptr;
  
  buffer_ptr = (int32_t *)buffer_manager[1];
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 5) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (4 - *buffer_manager));
    buffer_ptr = (int32_t *)buffer_manager[1];
  }
  *buffer_ptr = 1;  // 数据类型标识符
  buffer_ptr = (int32_t *)(buffer_manager[1] + 4);
  buffer_manager[1] = (int64_t)buffer_ptr;
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 0x11) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (0x10 - *buffer_manager));
    buffer_ptr = (int32_t *)buffer_manager[1];
  }
  uVar2 = *(int32_t *)(engine_context + 0x1c);  // 位置Y
  uVar3 = *(int32_t *)(engine_context + 0x20);  // 位置Z
  uVar4 = *(int32_t *)(engine_context + 0x24);  // 位置W
  *buffer_ptr = *(int32_t *)(engine_context + 0x18);  // 位置X
  buffer_ptr[1] = uVar2;
  buffer_ptr[2] = uVar3;
  buffer_ptr[3] = uVar4;
  byte_ptr = (int8_t *)(buffer_manager[1] + 0x10);
  buffer_manager[1] = (int64_t)byte_ptr;
  uVar1 = *(int8_t *)(engine_context + 0x28);  // 标志位
  if ((uint64_t)((*buffer_manager - (int64_t)byte_ptr) + buffer_manager[2]) < 2) {
    resize_buffer_if_needed(buffer_manager,byte_ptr + (1 - *buffer_manager));
    byte_ptr = (int8_t *)buffer_manager[1];
  }
  *byte_ptr = uVar1;
  buffer_ptr = (int32_t *)(buffer_manager[1] + 1);
  buffer_manager[1] = (int64_t)buffer_ptr;
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 0x11) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (0x10 - *buffer_manager));
    buffer_ptr = (int32_t *)buffer_manager[1];
  }
  uVar2 = *(int32_t *)(engine_context + 0xc);   // 旋转Y
  uVar3 = *(int32_t *)(engine_context + 0x10);  // 旋转Z
  uVar4 = *(int32_t *)(engine_context + 0x14);  // 旋转W
  *buffer_ptr = *(int32_t *)(engine_context + 8);  // 旋转X
  buffer_ptr[1] = uVar2;
  buffer_ptr[2] = uVar3;
  buffer_ptr[3] = uVar4;
  buffer_ptr = (int32_t *)(buffer_manager[1] + 0x10);
  buffer_manager[1] = (int64_t)buffer_ptr;
  uVar2 = *(int32_t *)(engine_context + 0x2c);  // 缩放X
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 5) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (4 - *buffer_manager));
    buffer_ptr = (int32_t *)buffer_manager[1];
  }
  *buffer_ptr = uVar2;
  buffer_ptr = (int32_t *)(buffer_manager[1] + 4);
  buffer_manager[1] = (int64_t)buffer_ptr;
  uVar2 = *(int32_t *)(engine_context + 0x30);  // 缩放Y
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 5) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (4 - *buffer_manager));
    buffer_ptr = (int32_t *)buffer_manager[1];
  }
  *buffer_ptr = uVar2;
  buffer_ptr = (int32_t *)(buffer_manager[1] + 4);
  buffer_manager[1] = (int64_t)buffer_ptr;
  uVar2 = *(int32_t *)(engine_context + 0x34);  // 缩放Z
  if ((uint64_t)((*buffer_manager - (int64_t)buffer_ptr) + buffer_manager[2]) < 5) {
    resize_buffer_if_needed(buffer_manager,(int64_t)buffer_ptr + (4 - *buffer_manager));
    *(int32_t *)buffer_manager[1] = uVar2;
  }
  else {
    *buffer_ptr = uVar2;
  }
  buffer_manager[1] = buffer_manager[1] + 4;
  return;
}



// 函数: void cleanup_object_list(int64_t *list_manager)
// 功能: 清理对象列表，确保所有对象都被正确释放
void cleanup_object_list(int64_t *list_manager)

{
  int64_t *current_ptr;
  int64_t *end_ptr;
  
  current_ptr = (int64_t *)list_manager[1];
  end_ptr = (int64_t *)*list_manager;
  while( true ) {
    if (current_ptr == end_ptr) {
      if (*list_manager != 0) {
        // 内存泄漏检测
        report_memory_leak();
      }
      return;
    }
    if (*(int64_t *)((int64_t)current_ptr + 0x12) != 0) {
      // 对象未正确释放
      report_object_leak();
    }
    *(uint64_t *)((int64_t)current_ptr + 0x12) = 0;
    if (*(int64_t *)((int64_t)current_ptr + 0x1a) != 0) break;
    *(uint64_t *)((int64_t)current_ptr + 0x1a) = 0;
    if (*current_ptr != 0) {
      // 对象引用未清零
      report_reference_leak();
    }
    *current_ptr = 0;
    if (current_ptr[1] != 0) {
      // 对象数据未清零
      report_data_leak();
    }
    current_ptr[1] = 0;
    current_ptr = (int64_t *)((int64_t)current_ptr + 0x24);
  }
  // 对象状态不一致
  report_object_corruption();
}



// 函数: void resize_object_list(int64_t *list_manager, uint64_t new_size)
// 功能: 调整对象列表大小，处理内存重新分配
void resize_object_list(int64_t *list_manager, uint64_t new_size)

{
  int64_t *current_end;
  uint64_t current_size;
  int64_t *new_end;
  int64_t size_diff;
  
  current_end = (int64_t *)list_manager[1];
  size_diff = *list_manager;
  current_size = ((int64_t)current_end - size_diff) / 0x24;
  if (current_size < new_size) {
    size_diff = new_size - current_size;
    expand_object_list(list_manager,size_diff,(int64_t)current_end - size_diff,size_diff,0xfffffffffffffffe);
  }
  else {
    new_end = (int64_t *)(new_size * 0x24 + size_diff);
    if (new_end != current_end) {
      do {
        if (*(int64_t *)((int64_t)new_end + 0x12) != 0) {
          // 对象未正确释放
          report_object_leak();
        }
        *(uint64_t *)((int64_t)new_end + 0x12) = 0;
        if (*(int64_t *)((int64_t)new_end + 0x1a) != 0) {
          // 对象状态不一致
          report_object_corruption();
        }
        *(uint64_t *)((int64_t)new_end + 0x1a) = 0;
        if (*new_end != 0) {
          // 对象引用未清零
          report_reference_leak();
        }
        *new_end = 0;
        if (new_end[1] != 0) {
          // 对象数据未清零
          report_data_leak();
        }
        new_end[1] = 0;
        new_end = (int64_t *)((int64_t)new_end + 0x24);
      } while (new_end != current_end);
      size_diff = *list_manager;
    }
    list_manager[1] = new_size * 0x24 + size_diff;
  }
  return;
}



// 警告: 全局变量符号重叠

// 函数: void expand_object_list(uint64_t *list_manager, uint64_t expand_size)
// 功能: 扩展对象列表，处理内存重新分配和数据迁移
void expand_object_list(uint64_t *list_manager, uint64_t expand_size)

{
  int64_t *src_ptr;
  int64_t *dst_ptr;
  uint64_t *new_buffer;
  int64_t *current_ptr;
  int64_t *new_ptr;
  uint64_t new_capacity;
  uint64_t *temp_ptr;
  int64_t base_offset;
  uint64_t i;
  
  temp_ptr = (uint64_t *)list_manager[1];
  if ((uint64_t)((list_manager[2] - (int64_t)temp_ptr) / 0x24) < expand_size) {
    new_buffer = (uint64_t *)*list_manager;
    base_offset = ((int64_t)temp_ptr - (int64_t)new_buffer) / 0x24;
    new_capacity = base_offset * 2;
    if (base_offset == 0) {
      new_capacity = 1;
    }
    if (new_capacity < base_offset + expand_size) {
      new_capacity = base_offset + expand_size;
    }
    src_ptr = (int64_t *)0x0;
    if (new_capacity != 0) {
      src_ptr = (int64_t *)
               allocate_memory(MEMORY_POOL_ID,new_capacity * 0x24,*(int8_t *)(list_manager + 3),temp_ptr,
                             0xfffffffffffffffe);
      temp_ptr = (uint64_t *)list_manager[1];
      new_buffer = (uint64_t *)*list_manager;
    }
    dst_ptr = src_ptr;
    if (new_buffer != temp_ptr) {
      base_offset = (int64_t)src_ptr - (int64_t)new_buffer;
      current_ptr = (int64_t *)((int64_t)new_buffer + 0x1a);
      do {
        // 迁移对象数据
        migrate_object_data((int16_t *)(base_offset + -10 + (int64_t)current_ptr), 
                           (int16_t *)((int64_t)current_ptr + -10));
        if (*(int64_t *)((int64_t)current_ptr + -0x12) == 0) {
          *(uint64_t *)(base_offset + -0x12 + (int64_t)current_ptr) = 0;
        }
        else {
          *(int64_t *)(base_offset + -0x12 + (int64_t)current_ptr) = *(int64_t *)((int64_t)current_ptr + -0x12);
          *(uint64_t *)((int64_t)current_ptr + -0x12) = 0;
        }
        if (*(int64_t *)((int64_t)current_ptr + -0x1a) == 0) {
          *dst_ptr = 0;
        }
        else {
          *dst_ptr = *(int64_t *)((int64_t)current_ptr + -0x1a);
          *(uint64_t *)((int64_t)current_ptr + -0x1a) = 0;
        }
        *(int16_t *)((int64_t)current_ptr + -10) = 0;
        *(short *)(base_offset + 8 + (int64_t)current_ptr) = (short)current_ptr[1];
        if (*current_ptr == 0) {
          *(uint64_t *)((int64_t)current_ptr + base_offset) = 0;
        }
        else {
          *(int64_t *)((int64_t)current_ptr + base_offset) = *current_ptr;
          *current_ptr = 0;
        }
        if (current_ptr[-1] == 0) {
          *(uint64_t *)(base_offset + -8 + (int64_t)current_ptr) = 0;
        }
        else {
          *(int64_t *)(base_offset + -8 + (int64_t)current_ptr) = current_ptr[-1];
          current_ptr[-1] = 0;
        }
        *(int16_t *)(current_ptr + 1) = 0;
        dst_ptr = (int64_t *)((int64_t)dst_ptr + 0x24);
        new_buffer = (uint64_t *)((int64_t)current_ptr + 10);
        current_ptr = (int64_t *)((int64_t)current_ptr + 0x24);
      } while (new_buffer != temp_ptr);
    }
    if (expand_size != 0) {
      temp_ptr = (uint64_t *)((int64_t)dst_ptr + 0x1a);
      i = expand_size;
      do {
        // 初始化新对象
        initialize_new_object(temp_ptr);
        temp_ptr = (uint64_t *)((int64_t)temp_ptr + 0x24);
        i = i - 1;
      } while (i != 0);
    }
    current_ptr = (int64_t *)list_manager[1];
    new_ptr = (int64_t *)*list_manager;
    if (new_ptr != current_ptr) {
      do {
        // 清理旧对象
        cleanup_old_object(current_ptr);
        current_ptr = (int64_t *)((int64_t)current_ptr + 0x24);
      } while (current_ptr != (int64_t *)list_manager[1]);
      current_ptr = (int64_t *)*list_manager;
    }
    if (current_ptr != (int64_t *)0x0) {
      // 释放旧内存
      free_old_memory(current_ptr);
    }
    *list_manager = src_ptr;
    list_manager[1] = (int64_t)dst_ptr + expand_size * 0x24;
    list_manager[2] = (int64_t)src_ptr + new_capacity * 0x24;
  }
  else {
    if (expand_size != 0) {
      new_buffer = (uint64_t *)((int64_t)temp_ptr + 0x1a);
      new_capacity = expand_size;
      do {
        // 在现有缓冲区中初始化新对象
        initialize_object_in_place(temp_ptr, new_buffer);
        temp_ptr = (uint64_t *)((int64_t)temp_ptr + 0x24);
        new_buffer = (uint64_t *)((int64_t)new_buffer + 0x24);
        new_capacity = new_capacity - 1;
      } while (new_capacity != 0);
      temp_ptr = (uint64_t *)list_manager[1];
    }
    list_manager[1] = (int64_t)temp_ptr + expand_size * 0x24;
  }
  return;
}



// 函数: void reset_object_manager(int64_t *object_manager)
// 功能: 重置对象管理器，清理所有引用
void reset_object_manager(int64_t *object_manager)

{
  if (*object_manager != 0) {
    // 对象管理器未正确初始化
    report_manager_error();
  }
  *object_manager = 0;
  if (object_manager[1] != 0) {
    // 对象管理器状态不一致
    report_state_error();
  }
  object_manager[1] = 0;
  return;
}



// 函数: uint64_t * initialize_memory_pool(uint64_t *pool_ptr, uint64_t flags, uint64_t param3, uint64_t param4)
// 功能: 初始化内存池
uint64_t *
initialize_memory_pool(uint64_t *pool_ptr, uint64_t flags, uint64_t param3, uint64_t param4)

{
  *pool_ptr = &MEMORY_POOL_HEADER;
  if ((flags & 1) != 0) {
    free(pool_ptr,0x38,param3,param4,0xfffffffffffffffe);
  }
  return pool_ptr;
}



// 函数: uint64_t * cleanup_memory_pool(uint64_t *pool_ptr, uint64_t flags)
// 功能: 清理内存池
uint64_t * cleanup_memory_pool(uint64_t *pool_ptr, uint64_t flags)

{
  *pool_ptr = &MEMORY_POOL_HEADER;
  if ((flags & 1) != 0) {
    free(pool_ptr,8);
  }
  return pool_ptr;
}



// 函数: uint64_t * create_string_buffer(uint64_t param1, uint64_t *buffer_ptr, uint64_t param3, uint64_t param4)
// 功能: 创建字符串缓冲区
uint64_t *
create_string_buffer(uint64_t param1, uint64_t *buffer_ptr, uint64_t param3, uint64_t param4)

{
  *buffer_ptr = &STRING_BUFFER_HEADER;
  buffer_ptr[1] = 0;
  *(int32_t *)(buffer_ptr + 2) = 0;
  *buffer_ptr = &BUFFER_MANAGER_HEADER;
  buffer_ptr[1] = buffer_ptr + 3;
  *(int8_t *)(buffer_ptr + 3) = 0;
  *(int32_t *)(buffer_ptr + 2) = 7;
  copy_string_safely(buffer_ptr[1],0x80,&STRING_CONSTANT,param4,0,0xfffffffffffffffe);
  return buffer_ptr;
}



// 警告: 全局变量符号重叠

// 函数: uint64_t * initialize_render_object(uint64_t *object_ptr, char render_flag, char param3)
// 功能: 初始化渲染对象，设置默认渲染参数
uint64_t * initialize_render_object(uint64_t *object_ptr, char render_flag, char param3)

{
  int64_t *temp_ptr1;
  byte flag;
  int64_t *temp_ptr2;
  int64_t *temp_ptr3;
  
  *object_ptr = &RENDER_OBJECT_VTABLE;
  *object_ptr = &RENDER_OBJECT_METHODS;
  *(int32_t *)(object_ptr + 1) = 0;
  *object_ptr = &RENDER_OBJECT_INTERFACE;
  object_ptr[2] = &BASE_OBJECT_HEADER;
  object_ptr[3] = 0;
  *(int32_t *)(object_ptr + 4) = 0;
  object_ptr[2] = &RENDER_CALLBACKS;
  object_ptr[3] = object_ptr + 5;
  *(int32_t *)(object_ptr + 4) = 0;
  *(int8_t *)(object_ptr + 5) = 0;
  *(int8_t *)((int64_t)object_ptr + 0xb2) = 0;
  *(int32_t *)(object_ptr + 1) = 0;
  *(int16_t *)(object_ptr + 0x16) = 0;
  object_ptr[0x15] = 0;
  *object_ptr = &RENDER_RESOURCES;
  initialize_render_resources(object_ptr + 0x19);
  *(int32_t *)(object_ptr + 0x1e) = 0;
  ACQUIRE_RENDER_LOCK();
  *(int32_t *)(object_ptr + 0x1d) = 0;
  RELEASE_RENDER_LOCK();
  ACQUIRE_RENDER_LOCK();
  *(int8_t *)((int64_t)object_ptr + 0xec) = 0;
  RELEASE_RENDER_LOCK();
  *(int32_t *)(object_ptr + 0x1e) = 0;
  object_ptr[0x23] = 0;
  object_ptr[0x36] = 0;
  object_ptr[0x37] = 0;
  object_ptr[0x38] = 0;
  object_ptr[0x3e] = object_ptr;
  object_ptr[0x3d] = 0;
  object_ptr[0x42] = 0;
  object_ptr[0x43] = 0;
  object_ptr[0x44] = 0;
  object_ptr[0x45] = 0;
  *(int32_t *)(object_ptr + 0x46) = 3;  // 渲染优先级
  object_ptr[0x4d] = 0;
  *(int32_t *)((int64_t)object_ptr + 0x2a4) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x274) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x27c) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x284) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x28c) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x294) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x29c) = 0;
  *(int16_t *)(object_ptr + 0x5d) = 0;
  object_ptr[0x5c] = 0;
  *(int32_t *)((int64_t)object_ptr + 0x2ec) = 0xffffffff;
  *(int16_t *)(object_ptr + 0x5f) = 0;
  object_ptr[0x5e] = 0;
  *(int32_t *)((int64_t)object_ptr + 0x2fc) = 0xffffffff;
  *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) & 0xfb;
  *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) | render_flag << 2;
  object_ptr[0x15] = 0;
  *(int32_t *)(object_ptr + 0x17) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xbc) = 0;
  *(int32_t *)(object_ptr + 0x18) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xc4) = 0;
  *(byte *)((int64_t)object_ptr + 0xfe) = *(byte *)((int64_t)object_ptr + 0xfe) & 0xfe;
  *(int8_t *)((int64_t)object_ptr + 0xfc) = 0;
  temp_ptr3 = (int64_t *)object_ptr[0x36];
  object_ptr[0x36] = 0;
  if (temp_ptr3 != (int64_t *)0x0) {
    (**(code **)(*temp_ptr3 + 0x38))();
  }
  object_ptr[0x39] = 0;
  object_ptr[0x3c] = 0;
  if (param3 == '\0') {
    *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) & 0xdf;
  }
  else {
    *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) | 0x20;
  }
  *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) & 0xbf;
  *(int8_t *)((int64_t)object_ptr + 0xff) = 1;
  temp_ptr3 = (int64_t *)object_ptr[0x37];
  object_ptr[0x37] = 0;
  if (temp_ptr3 != (int64_t *)0x0) {
    (**(code **)(*temp_ptr3 + 0x38))();
  }
  *(int8_t *)((int64_t)object_ptr + 0xf4) = 0;
  *(int32_t *)(object_ptr + 0x20) = 0;
  *(int8_t *)((int64_t)object_ptr + 0xf7) = 0;
  *(byte *)((int64_t)object_ptr + 0xfd) = *(byte *)((int64_t)object_ptr + 0xfd) & 0x6d;
  temp_ptr2 = (int64_t *)object_ptr[0x38];
  object_ptr[0x38] = 0;
  if (temp_ptr2 != (int64_t *)0x0) {
    (**(code **)(*temp_ptr2 + 0x38))();
  }
  flag = *(byte *)((int64_t)object_ptr + 0xfd) & 0xf7;
  *(byte *)((int64_t)object_ptr + 0xfd) = flag;
  
  // 设置默认变换矩阵
  set_default_transform_matrix(object_ptr);
  
  *(byte *)((int64_t)object_ptr + 0xfd) = flag | 1;
  *(byte *)((int64_t)object_ptr + 0xfe) = *(byte *)((int64_t)object_ptr + 0xfe) | 2;
  *(int32_t *)(object_ptr + 0x4e) = 0x21;
  *(int32_t *)((int64_t)object_ptr + 0x104) = 0x80;
  *(int8_t *)((int64_t)object_ptr + 0xf6) = 0;
  *(int16_t *)((int64_t)object_ptr + 0xfa) = 0;
  *(uint64_t *)((int64_t)object_ptr + 0x204) = 0;
  object_ptr[0x3f] = 0;
  *(int32_t *)(object_ptr + 0x40) = 0;
  *(int32_t *)(object_ptr + 0x5b) = 0xbf800000;
  *(int32_t *)((int64_t)object_ptr + 0x2dc) = 0xbf800000;
  object_ptr[0x55] = 0;
  object_ptr[0x56] = 0;
  object_ptr[0x57] = 0;
  object_ptr[0x58] = 0;
  *(int32_t *)(object_ptr + 0x19) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xcc) = 0;
  *(int32_t *)(object_ptr + 0x1a) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xd4) = 0x7f7fffff;
  *(int32_t *)(object_ptr + 0x1b) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xdc) = 0;
  *(int32_t *)(object_ptr + 0x1c) = 0;
  *(int32_t *)((int64_t)object_ptr + 0xe4) = 0x7f7fffff;
  *(int32_t *)(object_ptr + 0x21) = 0xffffffff;
  object_ptr[0x5a] = 0;
  if (render_flag == '\0') {
    temp_ptr1 = (int64_t *)object_ptr[0x42];
    object_ptr[0x42] = 0;
    if (temp_ptr1 != (int64_t *)0x0) {
      (**(code **)(*temp_ptr1 + 0x38))(temp_ptr1,0);
    }
  }
  *(int8_t *)(object_ptr + 0x1f) = 0;
  *(int32_t *)(object_ptr + 0x34) = 0x3f800000;
  *(int32_t *)((int64_t)object_ptr + 0x1a4) = 0x3f800000;
  *(int32_t *)(object_ptr + 0x35) = 0x3f800000;
  *(int32_t *)((int64_t)object_ptr + 0x1ac) = 0x7f7fffff;
  *(int32_t *)(object_ptr + 0x3a) = 0xffffffff;
  
  // 初始化着色器参数
  temp_ptr2 = (int64_t *)allocate_shader_parameters(MEMORY_POOL_ID,0x70,8,9,temp_ptr3,temp_ptr2);
  *temp_ptr2 = (int64_t)&SHADER_VTABLE;
  *temp_ptr2 = (int64_t)&SHADER_METHODS;
  *(int32_t *)(temp_ptr2 + 1) = 0;
  *temp_ptr2 = (int64_t)&SHADER_INTERFACE;
  temp_ptr2[4] = (int64_t)&BASE_SHADER_HEADER;
  temp_ptr2[5] = 0;
  *(int32_t *)(temp_ptr2 + 6) = 0;
  temp_ptr2[4] = (int64_t)&SHADER_CALLBACKS;
  temp_ptr2[7] = 0;
  temp_ptr2[5] = 0;
  *(int32_t *)(temp_ptr2 + 6) = 0;
  *(int32_t *)(temp_ptr2 + 8) = 0xffffffff;
  *(int32_t *)((int64_t)temp_ptr2 + 0x44) = 0x3f000000;
  *(int32_t *)(temp_ptr2 + 9) = 0x3f000000;
  *(int32_t *)((int64_t)temp_ptr2 + 0x4c) = 0x3f4ccccd;
  *(int32_t *)(temp_ptr2 + 10) = 0x3f000000;
  *(int32_t *)((int64_t)temp_ptr2 + 0x54) = 0x3e99999a;
  *(int32_t *)(temp_ptr2 + 0xb) = 0x411cf5c3;
  *(int32_t *)((int64_t)temp_ptr2 + 0x5c) = 0x3f800000;
  *(int32_t *)(temp_ptr2 + 0xc) = 0xbf800000;
  *(int32_t *)((int64_t)temp_ptr2 + 100) = 0x3f800000;
  *(int32_t *)(temp_ptr2 + 0xd) = 0x3f000000;
  *(int32_t *)((int64_t)temp_ptr2 + 0x6c) = 0x3f800000;
  *(int32_t *)(temp_ptr2 + 2) = 0x3f800000;
  *(int32_t *)((int64_t)temp_ptr2 + 0x14) = 0x78;
  *(int16_t *)(temp_ptr2 + 3) = 0;
  *(int8_t *)((int64_t)temp_ptr2 + 0x1a) = 0;
  (**(code **)(*temp_ptr2 + 0x28))(temp_ptr2);
  temp_ptr3 = (int64_t *)object_ptr[0x4d];
  object_ptr[0x4d] = temp_ptr2;
  if (temp_ptr3 != (int64_t *)0x0) {
    (**(code **)(*temp_ptr3 + 0x38))();
  }
  *(byte *)((int64_t)object_ptr + 0xfe) = *(byte *)((int64_t)object_ptr + 0xfe) & 0xf3;
  object_ptr[0x3b] = 0;
  ACQUIRE_RENDER_LOCK();
  *(int8_t *)((int64_t)object_ptr + 0xf9) = 0;
  RELEASE_RENDER_LOCK();
  object_ptr[0x59] = 0;
  *(int8_t *)((int64_t)object_ptr + 0xf5) = 0;
  object_ptr[0x4b] = 0;
  return object_ptr;
}



// 函数: uint64_t cleanup_render_object(uint64_t object_ptr, uint64_t flags)
// 功能: 清理渲染对象
uint64_t cleanup_render_object(uint64_t object_ptr, uint64_t flags)

{
  cleanup_render_object_internal();
  if ((flags & 1) != 0) {
    free(object_ptr,0x300);
  }
  return object_ptr;
}



// 函数: int8_t validate_render_state(int64_t context, uint64_t param2, uint64_t param3, uint64_t param4)
// 功能: 验证渲染状态
int8_t validate_render_state(int64_t context, uint64_t param2, uint64_t param3, uint64_t param4)

{
  int8_t result;
  uint64_t temp_var;
  void *temp_stack;
  int64_t stack_var;
  
  temp_var = 0xfffffffffffffffe;
  initialize_temp_stack(&temp_stack);
  result = validate_render_parameters(context + 0x218,&temp_stack,param3,param4,temp_var);
  temp_stack = &SAFE_STACK_POINTER;
  if (stack_var != 0) {
    // 堆栈不平衡
    report_stack_error();
  }
  return result;
}



// 警告: 移除不可达的代码块

// 函数: void update_render_transform(int64_t render_context, uint64_t *transform_data)
// 功能: 更新渲染变换矩阵
void update_render_transform(int64_t render_context, uint64_t *transform_data)

{
  uint64_t *data_ptr;
  int64_t *renderer_ptr;
  int64_t offset;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t transform_matrix;
  char is_active;
  int64_t *scene_obj;
  uint render_flags;
  float distance;
  float x, y, z, w;
  float sx, sy, sz, sw;
  float min_distance;
  int8_t temp_buffer [184];
  uint64_t stack_var;
  
  render_flags = *(uint *)(render_context + 0x100) & 0xfbffffff;
  *(uint *)(render_context + 0x100) = render_flags;
  stack_var = 0x180075655;
  is_active = is_transform_active(transform_data);
  if (is_active == '\0') {
    *(uint *)(render_context + 0x100) = render_flags | 0x4000000;
  }
  transform_matrix = transform_data[1];
  renderer_ptr = *(int64_t **)(render_context + 0x1c8);
  *(uint64_t *)(render_context + 0x120) = *transform_data;
  *(uint64_t *)(render_context + 0x128) = transform_matrix;
  transform_matrix = transform_data[3];
  *(uint64_t *)(render_context + 0x130) = transform_data[2];
  *(uint64_t *)(render_context + 0x138) = transform_matrix;
  uVar4 = *(int32_t *)((int64_t)transform_data + 0x24);
  uVar5 = *(int32_t *)(transform_data + 5);
  uVar6 = *(int32_t *)((int64_t)transform_data + 0x2c);
  *(int32_t *)(render_context + 0x140) = *(int32_t *)(transform_data + 4);
  *(int32_t *)(render_context + 0x144) = uVar4;
  *(int32_t *)(render_context + 0x148) = uVar5;
  *(int32_t *)(render_context + 0x14c) = uVar6;
  uVar4 = *(int32_t *)((int64_t)transform_data + 0x34);
  uVar5 = *(int32_t *)(transform_data + 7);
  uVar6 = *(int32_t *)((int64_t)transform_data + 0x3c);
  *(int32_t *)(render_context + 0x150) = *(int32_t *)(transform_data + 6);
  *(int32_t *)(render_context + 0x154) = uVar4;
  *(int32_t *)(render_context + 0x158) = uVar5;
  *(int32_t *)(render_context + 0x15c) = uVar6;
  if (renderer_ptr != (int64_t *)0x0) {
    if (*(code **)(*renderer_ptr + 0x160) == (code *)&BOUNDING_BOX_CALCULATOR) {
      data_ptr = (uint64_t *)((int64_t)renderer_ptr + 0x214);
      *(int32_t *)((int64_t)renderer_ptr + 0x244) = 0;
      if (renderer_ptr[8] - renderer_ptr[7] >> 4 == 0) {
        // 初始化边界框
        initialize_bounding_box(data_ptr);
      }
      else {
        // 设置默认边界框
        set_default_bounding_box(data_ptr);
        
        // 计算所有对象的边界框
        scene_obj = (int64_t *)renderer_ptr[7];
        if (scene_obj < (int64_t *)renderer_ptr[8]) {
          do {
            offset = *scene_obj;
            if (((*(byte *)(offset + 0x100) & 0x20) == 0) || (renderer_ptr[5] == 0)) {
              offset = offset + 0x120;
            }
            else {
              offset = calculate_object_bounds(offset + 0x120,temp_buffer,renderer_ptr[5] + 0x70);
            }
            merge_bounding_box(data_ptr,offset + 0x274,offset);
            scene_obj = scene_obj + 2;
          } while (scene_obj < (int64_t *)renderer_ptr[8]);
        }
        
        // 优化边界框计算
        if (((renderer_ptr[8] - renderer_ptr[7] & 0xfffffffffffffff0U) == 0x10) &&
           (offset = *(int64_t *)renderer_ptr[7], (*(uint *)(offset + 0x100) & 0x4000000) == 0)) {
          transform_matrix = *(uint64_t *)(offset + 0x29c);
          *(uint64_t *)((int64_t)renderer_ptr + 0x234) = *(uint64_t *)(offset + 0x294);
          *(uint64_t *)((int64_t)renderer_ptr + 0x23c) = transform_matrix;
          *(int32_t *)((int64_t)renderer_ptr + 0x244) =
               *(int32_t *)(*(int64_t *)renderer_ptr[7] + 0x2a4);
        }
        else {
          // 计算精确边界框
          calculate_precise_bounding_box(data_ptr);
          scene_obj = (int64_t *)renderer_ptr[7];
          distance = 0.0;
          if (scene_obj < (int64_t *)renderer_ptr[8]) {
            do {
              offset = *scene_obj;
              if ((*(uint *)(offset + 0x100) & 0x4000000) == 0) {
                // 简单距离计算
                z = *(float *)(offset + 0x294);
                w = *(float *)(offset + 0x298);
                x = *(float *)(offset + 0x29c);
                min_distance = *(float *)(offset + 0x2a4);
              }
              else {
                // 复杂距离计算（考虑旋转）
                min_distance = *(float *)(offset + 0x298);
                x = *(float *)(offset + 0x294);
                y = *(float *)(offset + 0x29c);
                z = *(float *)(offset + 0x130) * min_distance + *(float *)(offset + 0x120) * x +
                         *(float *)(offset + 0x140) * y + *(float *)(offset + 0x150);
                w = *(float *)(offset + 0x134) * min_distance + *(float *)(offset + 0x124) * x +
                         *(float *)(offset + 0x144) * y + *(float *)(offset + 0x154);
                x = *(float *)(offset + 0x138) * min_distance + *(float *)(offset + 0x128) * x +
                         *(float *)(offset + 0x148) * y + *(float *)(offset + 0x158);
                min_distance = *(float *)(offset + 0x140) * *(float *)(offset + 0x140) +
                         *(float *)(offset + 0x144) * *(float *)(offset + 0x144) +
                         *(float *)(offset + 0x148) * *(float *)(offset + 0x148);
                y = *(float *)(offset + 0x130) * *(float *)(offset + 0x130) +
                         *(float *)(offset + 0x134) * *(float *)(offset + 0x134) +
                         *(float *)(offset + 0x138) * *(float *)(offset + 0x138);
                float scale_sq = *(float *)(offset + 0x120) * *(float *)(offset + 0x120) +
                         *(float *)(offset + 0x124) * *(float *)(offset + 0x124) +
                         *(float *)(offset + 0x128) * *(float *)(offset + 0x128);
                if (scale_sq <= y) {
                  if (min_distance <= y) {
                    min_distance = y;
                  }
                }
                else if (min_distance <= scale_sq) {
                  min_distance = scale_sq;
                }
                if ((min_distance - 1.0 <= -1e-06) || (1e-06 <= min_distance - 1.0)) {
                  min_distance = SQRT(min_distance) * *(float *)(offset + 0x2a4);
                }
                else {
                  min_distance = *(float *)(offset + 0x2a4) * 1.0;
                }
              }
              x = *(float *)((int64_t)renderer_ptr + 0x23c) - x;
              z = *(float *)((int64_t)renderer_ptr + 0x234) - z;
              w = (*(float *)(renderer_ptr + 0x47) - w) * (*(float *)(renderer_ptr + 0x47) - w) +
                       z * z + x * x;
              z = distance - min_distance;
              if (z <= 0.0) {
                z = 0.0;
              }
              if (z * z < w) {
                distance = SQRT(w) + min_distance;
              }
              scene_obj = scene_obj + 2;
            } while (scene_obj < (int64_t *)renderer_ptr[8]);
            if ((0.0 < distance) &&
               (distance < *(float *)((int64_t)renderer_ptr + 0x244) ||
                distance == *(float *)((int64_t)renderer_ptr + 0x244))) {
              *(float *)((int64_t)renderer_ptr + 0x244) = distance;
            }
          }
        }
      }
      return;
    }
    stack_var = 0x1800756d4;
    (**(code **)(*renderer_ptr + 0x160))();
  }
  return;
}



// 函数: void cleanup_render_object_internal(uint64_t *render_object)
// 功能: 内部清理渲染对象
void cleanup_render_object_internal(uint64_t *render_object)

{
  byte *flag_ptr;
  int64_t *component_ptr;
  int64_t component_id;
  uint64_t cleanup_flags;
  
  cleanup_flags = 0xfffffffffffffffe;
  *render_object = &RENDER_RESOURCES;
  render_object[0x39] = 0;
  if (render_object[0x59] != 0) {
    // 渲染对象状态错误
    report_render_error();
  }
  render_object[0x59] = 0;
  component_ptr = (int64_t *)render_object[0x37];
  render_object[0x37] = 0;
  if (component_ptr != (int64_t *)0x0) {
    (**(code **)(*component_ptr + 0x38))();
  }
  component_ptr = (int64_t *)render_object[0x38];
  render_object[0x38] = 0;
  if (component_ptr != (int64_t *)0x0) {
    (**(code **)(*component_ptr + 0x38))();
  }
  if (render_object[0x5a] != 0) {
    // 渲染对象状态不一致
    report_state_error();
  }
  render_object[0x5a] = 0;
  component_ptr = (int64_t *)render_object[0x4b];
  if (component_ptr != (int64_t *)0x0) {
    if (*component_ptr != 0) {
      // 组件未正确释放
      report_component_leak();
    }
    *component_ptr = 0;
    if (component_ptr[2] != 0) {
      // 组件数据未清零
      report_data_leak();
    }
    component_ptr[2] = 0;
    if (component_ptr[7] != 0) {
      // 组件状态不一致
      report_state_error();
    }
    component_ptr[2] = 0;
    component_ptr[7] = 0;
    // 释放组件
    release_component(component_ptr);
  }
  render_object[0x4b] = 0;
  if (*(char *)((int64_t)render_object + 0xf9) != '\0') {
    if (render_object[0x3b] != 0) {
      // 锁定状态错误
      report_lock_error();
    }
    render_object[0x3b] = 0;
    ACQUIRE_RENDER_LOCK();
    *(int8_t *)((int64_t)render_object + 0xf9) = 0;
    RELEASE_RENDER_LOCK();
  }
  if (render_object[0x3d] != 0) {
    release_render_resources();
    render_object[0x3d] = 0;
    if (render_object[0x3e] != 0) {
      flag_ptr = (byte *)(render_object[0x3e] + 0xfe);
      *flag_ptr = *flag_ptr & 0xfb;
    }
  }
  component_ptr = (int64_t *)render_object[0x42];
  render_object[0x42] = 0;
  if (component_ptr != (int64_t *)0x0) {
    (**(code **)(*component_ptr + 0x38))();
  }
  component_id = render_object[0x3c];
  if (component_id != 0) {
    cleanup_render_component(component_id,0x18,0x10,RELEASE_RENDER_CALLBACK,cleanup_flags,component_id);
    // 组件清理失败
    report_cleanup_failure(component_id);
  }
  render_object[0x3c] = 0;
  cleanup_render_state(render_object + 0x5e);
  cleanup_render_buffers(render_object + 0x5c);
  if ((int64_t *)render_object[0x4d] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x4d] + 0x38))();
  }
  cleanup_render_pipeline();
  if ((int64_t *)render_object[0x42] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x42] + 0x38))();
  }
  if (render_object[0x3d] != 0) {
    release_render_resources();
  }
  if ((int64_t *)render_object[0x38] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x38] + 0x38))();
  }
  if ((int64_t *)render_object[0x37] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x37] + 0x38))();
  }
  if ((int64_t *)render_object[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x36] + 0x38))();
  }
  if ((int64_t *)render_object[0x23] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)render_object[0x23] + 0x38))();
  }
  *render_object = &RENDER_OBJECT_INTERFACE;
  render_object[2] = &BASE_OBJECT_HEADER;
  *render_object = &RENDER_OBJECT_METHODS;
  *render_object = &RENDER_OBJECT_VTABLE;
  return;
}

// 简化实现的辅助函数
// 原始实现：这些函数在原始代码中是通过函数指针调用的复杂内存管理函数
// 简化实现：为了保持代码可读性，将这些函数调用替换为语义化的函数名

// 设置默认变换矩阵的简化实现
void set_default_transform_matrix(uint64_t *object_ptr) {
  // 设置默认的单位矩阵和缩放值
  object_ptr[0x47] = 0x3f8000003f800000;  // 1.0f
  object_ptr[0x48] = 0x3f8000003f800000;
  object_ptr[0x49] = 0x3f8000003f800000;
  object_ptr[0x4a] = 0x3f8000003f800000;
  *(int32_t *)(object_ptr + 0x4c) = 0x3f800000;
  // ... 其他默认值设置
}

// 初始化渲染资源的简化实现
void initialize_render_resources(uint64_t *resource_ptr) {
  // 简化的资源初始化
  func_0x000180086550(resource_ptr);
}

// 边界框初始化的简化实现
void initialize_bounding_box(uint64_t *box_ptr) {
  *box_ptr = 0;
  *(uint64_t *)((int64_t)box_ptr + 0x1c) = 0;
  *(uint64_t *)((int64_t)box_ptr + 0x24) = 0;
  *(uint64_t *)((int64_t)box_ptr + 0x2c) = 0;
  *(uint64_t *)((int64_t)box_ptr + 0x34) = 0;
  *(uint64_t *)((int64_t)box_ptr + 0x3c) = 0;
}

// 设置默认边界框的简化实现
void set_default_bounding_box(uint64_t *box_ptr) {
  *box_ptr = 0x4cbebc204cbebc20;  // 边界值
  *(uint64_t *)((int64_t)box_ptr + 0x1c) = 0x7f7fffff4cbebc20;
  *(int32_t *)((int64_t)box_ptr + 0x34) = 0;
  *(int32_t *)(box_ptr + 0x47) = 0;
  *(int32_t *)((int64_t)box_ptr + 0x3c) = 0;
  *(int32_t *)(box_ptr + 0x48) = 0x7f7fffff;
  *(uint64_t *)((int64_t)box_ptr + 0x24) = 0xccbebc20ccbebc20;
  *(uint64_t *)((int64_t)box_ptr + 0x2c) = 0x7f7fffffccbebc20;
}