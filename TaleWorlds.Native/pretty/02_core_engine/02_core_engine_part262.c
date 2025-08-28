#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part262.c - 核心引擎内存管理和数据结构操作模块

// 函数: resize_entity_pool - 调整实体池大小
// 参数: 
//   pool_info - 池信息结构体指针，包含起始地址、结束地址和容量信息
//   new_size - 新的实体数量
// 功能: 扩展或收缩实体池，处理内存重分配和数据迁移
void resize_entity_pool(longlong *pool_info, ulonglong new_size)

{
  void *entity_ptr;
  int32_t temp_var1;
  int32_t temp_var2;
  int32_t temp_var3;
  uint64_t temp_var4;
  int32_t *data_ptr1;
  int32_t *data_ptr2;
  uint64_t *data_ptr3;
  longlong pool_start;
  ulonglong current_capacity;
  longlong pool_end;
  int32_t *entity_data;
  int32_t *new_pool_start;
  void *name_ptr;
  ulonglong entities_to_add;
  int32_t *pool_capacity_ptr;
  longlong old_capacity;
  
  old_capacity = pool_info[1];
  pool_start = *pool_info;
  current_capacity = (old_capacity - pool_start) / 0xe0;
  if (new_size <= current_capacity) {
    pool_start = new_size * 0xe0 + pool_start;
    if (pool_start != old_capacity) {
      do {
        *(void **)(pool_start + 8) = &EMPTY_ENTITY_MARKER;
        pool_start = pool_start + 0xe0;
      } while (pool_start != old_capacity);
      pool_start = *pool_info;
    }
    pool_info[1] = new_size * 0xe0 + pool_start;
    return;
  }
  new_size = new_size - current_capacity;
  entity_data = (int32_t *)pool_info[1];
  if ((ulonglong)((pool_info[2] - (longlong)entity_data) / 0xe0) < new_size) {
    new_pool_start = (int32_t *)*pool_info;
    old_capacity = ((longlong)entity_data - (longlong)new_pool_start) / 0xe0;
    current_capacity = old_capacity * 2;
    if (old_capacity == 0) {
      current_capacity = 1;
    }
    if (current_capacity < old_capacity + new_size) {
      current_capacity = old_capacity + new_size;
    }
    data_ptr1 = (int32_t *)0x0;
    if (current_capacity != 0) {
      data_ptr1 = (int32_t *)
               allocate_memory(MEMORY_ALLOCATOR,current_capacity * 0xe0,(char)pool_info[3],0x4924924924924925,
                             0xfffffffffffffffe);
      entity_data = (int32_t *)pool_info[1];
      new_pool_start = (int32_t *)*pool_info;
    }
    pool_capacity_ptr = data_ptr1;
    if (new_pool_start != entity_data) {
      old_capacity = (longlong)new_pool_start - (longlong)data_ptr1;
      new_pool_start = data_ptr1 + 6;
      do {
        *pool_capacity_ptr = *(int32_t *)(old_capacity + -0x18 + (longlong)new_pool_start);
        *(void **)(new_pool_start + -4) = &EMPTY_ENTITY_MARKER;
        *(uint64_t *)(new_pool_start + -2) = 0;
        *new_pool_start = 0;
        *(void **)(new_pool_start + -4) = &ENTITY_LIST_HEAD;
        *(int32_t **)(new_pool_start + -2) = new_pool_start + 2;
        *new_pool_start = 0;
        *(int8_t *)(new_pool_start + 2) = 0;
        *new_pool_start = *(int32_t *)(old_capacity + (longlong)new_pool_start);
        entity_ptr = *(void **)(old_capacity + -8 + (longlong)new_pool_start);
        name_ptr = &DEFAULT_ENTITY_NAME;
        if (entity_ptr != (void *)0x0) {
          name_ptr = entity_ptr;
        }
        strcpy_s(*(uint64_t *)(new_pool_start + -2),0x80,name_ptr);
        data_ptr3 = (uint64_t *)(old_capacity + 0x88 + (longlong)new_pool_start);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(new_pool_start + 0x22) = *data_ptr3;
        *(uint64_t *)(new_pool_start + 0x24) = temp_var4;
        data_ptr3 = (uint64_t *)(old_capacity + 0x98 + (longlong)new_pool_start);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(new_pool_start + 0x26) = *data_ptr3;
        *(uint64_t *)(new_pool_start + 0x28) = temp_var4;
        data_ptr2 = (int32_t *)(old_capacity + 0xa8 + (longlong)new_pool_start);
        temp_var1 = data_ptr2[1];
        temp_var2 = data_ptr2[2];
        temp_var3 = data_ptr2[3];
        new_pool_start[0x2a] = *data_ptr2;
        new_pool_start[0x2b] = temp_var1;
        new_pool_start[0x2c] = temp_var2;
        new_pool_start[0x2d] = temp_var3;
        data_ptr3 = (uint64_t *)(old_capacity + 0xb8 + (longlong)new_pool_start);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(new_pool_start + 0x2e) = *data_ptr3;
        *(uint64_t *)(new_pool_start + 0x30) = temp_var4;
        pool_capacity_ptr = pool_capacity_ptr + 0x38;
        data_ptr2 = (int32_t *)((longlong)new_pool_start + old_capacity + 200);
        new_pool_start = new_pool_start + 0x38;
      } while (data_ptr2 != entity_data);
    }
    if (new_size != 0) {
      data_ptr3 = (uint64_t *)(pool_capacity_ptr + 4);
      entities_to_add = new_size;
      do {
        data_ptr3[-1] = &EMPTY_ENTITY_MARKER;
        *data_ptr3 = 0;
        *(int32_t *)(data_ptr3 + 1) = 0;
        data_ptr3[-1] = &ENTITY_LIST_HEAD;
        *data_ptr3 = data_ptr3 + 2;
        *(int32_t *)(data_ptr3 + 1) = 0;
        *(int8_t *)(data_ptr3 + 2) = 0;
        *(int32_t *)(data_ptr3 + -2) = 0xffffffff;
        data_ptr3[0x12] = 0x3f800000;
        data_ptr3[0x13] = 0;
        data_ptr3[0x14] = 0x3f80000000000000;
        data_ptr3[0x15] = 0;
        *(int32_t *)(data_ptr3 + 0x16) = 0;
        *(int32_t *)((longlong)data_ptr3 + 0xb4) = 0;
        *(int32_t *)(data_ptr3 + 0x17) = 0x3f800000;
        *(int32_t *)((longlong)data_ptr3 + 0xbc) = 0;
        data_ptr3[0x18] = 0;
        data_ptr3[0x19] = 0x3f80000000000000;
        data_ptr3 = data_ptr3 + 0x1c;
        entities_to_add = entities_to_add - 1;
      } while (entities_to_add != 0);
    }
    old_capacity = pool_info[1];
    pool_start = *pool_info;
    if (pool_start != old_capacity) {
      do {
        *(void **)(pool_start + 8) = &EMPTY_ENTITY_MARKER;
        pool_start = pool_start + 0xe0;
      } while (pool_start != old_capacity);
      pool_start = *pool_info;
    }
    if (pool_start != 0) {
                    // WARNING: Subroutine does not return
      free_memory();
    }
    *pool_info = (longlong)data_ptr1;
    pool_info[1] = (longlong)(pool_capacity_ptr + new_size * 0x38);
    pool_info[2] = (longlong)(data_ptr1 + current_capacity * 0x38);
  }
  else {
    if (new_size != 0) {
      data_ptr3 = (uint64_t *)(entity_data + 4);
      current_capacity = new_size;
      do {
        data_ptr3[-1] = &EMPTY_ENTITY_MARKER;
        *data_ptr3 = 0;
        *(int32_t *)(data_ptr3 + 1) = 0;
        data_ptr3[-1] = &ENTITY_LIST_HEAD;
        *data_ptr3 = data_ptr3 + 2;
        *(int32_t *)(data_ptr3 + 1) = 0;
        *(int8_t *)(data_ptr3 + 2) = 0;
        *entity_data = 0xffffffff;
        data_ptr3[0x12] = 0x3f800000;
        data_ptr3[0x13] = 0;
        data_ptr3[0x14] = 0x3f80000000000000;
        data_ptr3[0x15] = 0;
        data_ptr3[0x16] = 0;
        data_ptr3[0x17] = 0x3f800000;
        data_ptr3[0x18] = 0;
        data_ptr3[0x19] = 0x3f80000000000000;
        entity_data = entity_data + 0x38;
        data_ptr3 = data_ptr3 + 0x1c;
        current_capacity = current_capacity - 1;
      } while (current_capacity != 0);
      entity_data = (int32_t *)pool_info[1];
    }
    pool_info[1] = (longlong)(entity_data + new_size * 0x38);
  }
  return;
}



// 函数: cleanup_object_pool - 清理对象池中的所有对象
// 参数: 
//   pool_info - 对象池信息结构体指针
// 功能: 释放对象池中所有对象占用的内存，重置池状态
void cleanup_object_pool(ulonglong *pool_info)

{
  int *ref_count;
  uint64_t *object_ptr;
  longlong memory_block;
  ulonglong pool_start;
  ulonglong pool_end;
  
  pool_end = pool_info[1];
  for (pool_start = *pool_info; pool_start != pool_end; pool_start = pool_start + 0x150) {
    *(void **)(pool_start + 0xa0) = &EMPTY_OBJECT_MARKER;
    *(void **)(pool_start + 8) = &EMPTY_OBJECT_MARKER;
  }
  object_ptr = (uint64_t *)*pool_info;
  if (object_ptr != (uint64_t *)0x0) {
    pool_start = (ulonglong)object_ptr & 0xffffffffffc00000;
    if (pool_start != 0) {
      memory_block = pool_start + 0x80 + ((longlong)object_ptr - pool_start >> 0x10) * 0x50;
      memory_block = memory_block - (ulonglong)*(uint *)(memory_block + 4);
      if ((*(void ***)(pool_start + 0x70) == &ExceptionList) && (*(char *)(memory_block + 0xe) == '\0')) {
        *object_ptr = *(uint64_t *)(memory_block + 0x20);
        *(uint64_t **)(memory_block + 0x20) = object_ptr;
        ref_count = (int *)(memory_block + 0x18);
        *ref_count = *ref_count + -1;
        if (*ref_count == 0) {
          deallocate_memory_block();
          return;
        }
      }
      else {
        safe_memory_dealloc(pool_start,CONCAT71(0xff000000,*(void ***)(pool_start + 0x70) == &ExceptionList),
                            object_ptr,pool_start,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: resize_object_pool - 调整对象池大小
// 参数: 
//   pool_info - 对象池信息结构体指针
//   new_size - 新的对象数量
// 功能: 扩展或收缩对象池，处理复杂的对象数据结构迁移
void resize_object_pool(longlong *pool_info, ulonglong new_size)

{
  uint64_t *object_data;
  int32_t *object_fields;
  void *field_ptr;
  int32_t field_val1;
  int32_t field_val2;
  int32_t field_val3;
  uint64_t field_val4;
  int8_t *memory_ptr;
  longlong calc_result;
  ulonglong current_size;
  longlong pool_end;
  int8_t *new_memory;
  int8_t *temp_ptr;
  longlong offset;
  void *name_data;
  ulonglong objects_to_add;
  int32_t *field_array;
  
  offset = pool_info[1];
  pool_end = *pool_info;
  calc_result = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(offset - pool_end),8) + (offset - pool_end);
  current_size = (calc_result >> 8) - (calc_result >> 0x3f);
  if (new_size <= current_size) {
    calc_result = new_size * 0x150 + pool_end;
    if (calc_result != offset) {
      do {
        *(void **)(calc_result + 0xa0) = &EMPTY_OBJECT_MARKER;
        *(void **)(calc_result + 8) = &EMPTY_OBJECT_MARKER;
        calc_result = calc_result + 0x150;
      } while (calc_result != offset);
      pool_end = *pool_info;
    }
    pool_info[1] = new_size * 0x150 + pool_end;
    return;
  }
  new_size = new_size - current_size;
  offset = pool_info[1];
  pool_end = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(pool_info[2] - offset),8) +
           (pool_info[2] - offset);
  if ((ulonglong)((pool_end >> 8) - (pool_end >> 0x3f)) < new_size) {
    pool_end = *pool_info;
    calc_result = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(offset - pool_end),8) + (offset - pool_end);
    calc_result = (calc_result >> 8) - (calc_result >> 0x3f);
    current_size = calc_result * 2;
    if (calc_result == 0) {
      current_size = 1;
    }
    if (current_size < calc_result + new_size) {
      current_size = calc_result + new_size;
    }
    memory_ptr = (int8_t *)0x0;
    if (current_size != 0) {
      memory_ptr = (int8_t *)
               allocate_memory(MEMORY_ALLOCATOR,current_size * 0x150,(char)pool_info[3],0xc30c30c30c30c30d,
                             0xfffffffffffffffe);
      offset = pool_info[1];
      pool_end = *pool_info;
    }
    objects_to_add = new_size;
    new_memory = memory_ptr;
    temp_ptr = memory_ptr;
    if (pool_end != offset) {
      pool_end = pool_end - (longlong)memory_ptr;
      field_array = (int32_t *)(memory_ptr + 0x18);
      do {
        *new_memory = *(int8_t *)(pool_end + -0x18 + (longlong)field_array);
        *(void **)(field_array + -4) = &EMPTY_OBJECT_MARKER;
        *(uint64_t *)(field_array + -2) = 0;
        *field_array = 0;
        *(void **)(field_array + -4) = &OBJECT_LIST_HEAD;
        *(int32_t **)(field_array + -2) = field_array + 2;
        *field_array = 0;
        *(int8_t *)(field_array + 2) = 0;
        *field_array = *(int32_t *)(pool_end + (longlong)field_array);
        field_ptr = *(void **)(pool_end + -8 + (longlong)field_array);
        name_data = &DEFAULT_OBJECT_NAME;
        if (field_ptr != (void *)0x0) {
          name_data = field_ptr;
        }
        strcpy_s(*(uint64_t *)(field_array + -2),0x80,name_data);
        *(void **)(field_array + 0x22) = &EMPTY_OBJECT_MARKER;
        *(uint64_t *)(field_array + 0x24) = 0;
        field_array[0x26] = 0;
        *(void **)(field_array + 0x22) = &OBJECT_NAME_LIST;
        *(int32_t **)(field_array + 0x24) = field_array + 0x28;
        field_array[0x26] = 0;
        *(int8_t *)(field_array + 0x28) = 0;
        field_array[0x26] = *(int32_t *)(pool_end + 0x98 + (longlong)field_array);
        field_ptr = *(void **)(pool_end + 0x90 + (longlong)field_array);
        name_data = &DEFAULT_OBJECT_NAME;
        if (field_ptr != (void *)0x0) {
          name_data = field_ptr;
        }
        strcpy_s(*(uint64_t *)(field_array + 0x24),0x40,name_data);
        *(int8_t *)(field_array + 0x38) = *(int8_t *)(pool_end + 0xe0 + (longlong)field_array);
        field_array[0x39] = *(int32_t *)(pool_end + 0xe4 + (longlong)field_array);
        field_array[0x3a] = *(int32_t *)(pool_end + 0xe8 + (longlong)field_array);
        object_data = (uint64_t *)(pool_end + 0xec + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x3b) = *object_data;
        *(uint64_t *)(field_array + 0x3d) = field_val4;
        object_data = (uint64_t *)(pool_end + 0xfc + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x3f) = *object_data;
        *(uint64_t *)(field_array + 0x41) = field_val4;
        field_array[0x43] = *(int32_t *)(pool_end + 0x10c + (longlong)field_array);
        object_fields = (int32_t *)(pool_end + 0x110 + (longlong)field_array);
        field_val1 = object_fields[1];
        field_val2 = object_fields[2];
        field_val3 = object_fields[3];
        field_array[0x44] = *object_fields;
        field_array[0x45] = field_val1;
        field_array[0x46] = field_val2;
        field_array[0x47] = field_val3;
        object_data = (uint64_t *)(pool_end + 0x120 + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x48) = *object_data;
        *(uint64_t *)(field_array + 0x4a) = field_val4;
        field_array[0x4c] = *(int32_t *)(pool_end + 0x130 + (longlong)field_array);
        new_memory = new_memory + 0x150;
        calc_result = (longlong)field_array + pool_end + 0x138;
        field_array = field_array + 0x54;
        temp_ptr = new_memory;
      } while (calc_result != offset);
    }
    for (; objects_to_add != 0; objects_to_add = objects_to_add - 1) {
      initialize_object_data(new_memory);
      new_memory = new_memory + 0x150;
    }
    offset = pool_info[1];
    pool_end = *pool_info;
    if (pool_end != offset) {
      do {
        *(void **)(pool_end + 0xa0) = &EMPTY_OBJECT_MARKER;
        *(void **)(pool_end + 8) = &EMPTY_OBJECT_MARKER;
        pool_end = pool_end + 0x150;
      } while (pool_end != offset);
      pool_end = *pool_info;
    }
    if (pool_end != 0) {
                    // WARNING: Subroutine does not return
      free_memory();
    }
    *pool_info = (longlong)memory_ptr;
    pool_info[1] = (longlong)(temp_ptr + new_size * 0x150);
    pool_info[2] = (longlong)(memory_ptr + current_size * 0x150);
  }
  else {
    current_size = new_size;
    if (new_size != 0) {
      do {
        initialize_object_data(offset);
        offset = offset + 0x150;
        current_size = current_size - 1;
      } while (current_size != 0);
      offset = pool_info[1];
    }
    pool_info[1] = new_size * 0x150 + offset;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: expand_entity_pool_capacity - 扩展实体池容量
// 参数: 
//   pool_info - 实体池信息结构体指针
//   additional_size - 需要添加的额外实体数量
// 功能: 在当前容量不足时扩展实体池，保持现有数据完整性
void expand_entity_pool_capacity(longlong *pool_info, ulonglong additional_size)

{
  void *entity_ptr;
  int32_t temp_var1;
  int32_t temp_var2;
  int32_t temp_var3;
  uint64_t temp_var4;
  int32_t *data_ptr1;
  int32_t *data_ptr2;
  uint64_t *data_ptr3;
  ulonglong new_capacity;
  longlong pool_start;
  int32_t *entity_data;
  int32_t *pool_capacity_ptr;
  void *name_ptr;
  ulonglong entities_to_add;
  int32_t *current_pool_end;
  longlong old_capacity;
  
  entity_data = (int32_t *)pool_info[1];
  if ((ulonglong)((pool_info[2] - (longlong)entity_data) / 0xe0) < additional_size) {
    current_pool_end = (int32_t *)*pool_info;
    old_capacity = ((longlong)entity_data - (longlong)current_pool_end) / 0xe0;
    new_capacity = old_capacity * 2;
    if (old_capacity == 0) {
      new_capacity = 1;
    }
    if (new_capacity < old_capacity + additional_size) {
      new_capacity = old_capacity + additional_size;
    }
    data_ptr1 = (int32_t *)0x0;
    if (new_capacity != 0) {
      data_ptr1 = (int32_t *)
               allocate_memory(MEMORY_ALLOCATOR,new_capacity * 0xe0,(char)pool_info[3],0x4924924924924925,
                             0xfffffffffffffffe);
      entity_data = (int32_t *)pool_info[1];
      current_pool_end = (int32_t *)*pool_info;
    }
    pool_capacity_ptr = data_ptr1;
    if (current_pool_end != entity_data) {
      old_capacity = (longlong)current_pool_end - (longlong)data_ptr1;
      current_pool_end = data_ptr1 + 6;
      do {
        *pool_capacity_ptr = *(int32_t *)(old_capacity + -0x18 + (longlong)current_pool_end);
        *(void **)(current_pool_end + -4) = &EMPTY_ENTITY_MARKER;
        *(uint64_t *)(current_pool_end + -2) = 0;
        *current_pool_end = 0;
        *(void **)(current_pool_end + -4) = &ENTITY_LIST_HEAD;
        *(int32_t **)(current_pool_end + -2) = current_pool_end + 2;
        *current_pool_end = 0;
        *(int8_t *)(current_pool_end + 2) = 0;
        *current_pool_end = *(int32_t *)(old_capacity + (longlong)current_pool_end);
        entity_ptr = *(void **)(old_capacity + -8 + (longlong)current_pool_end);
        name_ptr = &DEFAULT_ENTITY_NAME;
        if (entity_ptr != (void *)0x0) {
          name_ptr = entity_ptr;
        }
        strcpy_s(*(uint64_t *)(current_pool_end + -2),0x80,name_ptr);
        data_ptr3 = (uint64_t *)(old_capacity + 0x88 + (longlong)current_pool_end);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(current_pool_end + 0x22) = *data_ptr3;
        *(uint64_t *)(current_pool_end + 0x24) = temp_var4;
        data_ptr3 = (uint64_t *)(old_capacity + 0x98 + (longlong)current_pool_end);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(current_pool_end + 0x26) = *data_ptr3;
        *(uint64_t *)(current_pool_end + 0x28) = temp_var4;
        data_ptr2 = (int32_t *)(old_capacity + 0xa8 + (longlong)current_pool_end);
        temp_var1 = data_ptr2[1];
        temp_var2 = data_ptr2[2];
        temp_var3 = data_ptr2[3];
        current_pool_end[0x2a] = *data_ptr2;
        current_pool_end[0x2b] = temp_var1;
        current_pool_end[0x2c] = temp_var2;
        current_pool_end[0x2d] = temp_var3;
        data_ptr3 = (uint64_t *)(old_capacity + 0xb8 + (longlong)current_pool_end);
        temp_var4 = data_ptr3[1];
        *(uint64_t *)(current_pool_end + 0x2e) = *data_ptr3;
        *(uint64_t *)(current_pool_end + 0x30) = temp_var4;
        pool_capacity_ptr = pool_capacity_ptr + 0x38;
        data_ptr2 = (int32_t *)((longlong)current_pool_end + old_capacity + 200);
        current_pool_end = current_pool_end + 0x38;
      } while (data_ptr2 != entity_data);
    }
    if (additional_size != 0) {
      data_ptr3 = (uint64_t *)(pool_capacity_ptr + 4);
      entities_to_add = additional_size;
      do {
        data_ptr3[-1] = &EMPTY_ENTITY_MARKER;
        *data_ptr3 = 0;
        *(int32_t *)(data_ptr3 + 1) = 0;
        data_ptr3[-1] = &ENTITY_LIST_HEAD;
        *data_ptr3 = data_ptr3 + 2;
        *(int32_t *)(data_ptr3 + 1) = 0;
        *(int8_t *)(data_ptr3 + 2) = 0;
        *(int32_t *)(data_ptr3 + -2) = 0xffffffff;
        data_ptr3[0x12] = 0x3f800000;
        data_ptr3[0x13] = 0;
        data_ptr3[0x14] = 0x3f80000000000000;
        data_ptr3[0x15] = 0;
        *(int32_t *)(data_ptr3 + 0x16) = 0;
        *(int32_t *)((longlong)data_ptr3 + 0xb4) = 0;
        *(int32_t *)(data_ptr3 + 0x17) = 0x3f800000;
        *(int32_t *)((longlong)data_ptr3 + 0xbc) = 0;
        data_ptr3[0x18] = 0;
        data_ptr3[0x19] = 0x3f80000000000000;
        data_ptr3 = data_ptr3 + 0x1c;
        entities_to_add = entities_to_add - 1;
      } while (entities_to_add != 0);
    }
    old_capacity = pool_info[1];
    pool_start = *pool_info;
    if (pool_start != old_capacity) {
      do {
        *(void **)(pool_start + 8) = &EMPTY_ENTITY_MARKER;
        pool_start = pool_start + 0xe0;
      } while (pool_start != old_capacity);
      pool_start = *pool_info;
    }
    if (pool_start != 0) {
                    // WARNING: Subroutine does not return
      free_memory();
    }
    *pool_info = (longlong)data_ptr1;
    pool_info[1] = (longlong)(pool_capacity_ptr + additional_size * 0x38);
    pool_info[2] = (longlong)(data_ptr1 + new_capacity * 0x38);
  }
  else {
    if (additional_size != 0) {
      data_ptr3 = (uint64_t *)(entity_data + 4);
      new_capacity = additional_size;
      do {
        data_ptr3[-1] = &EMPTY_ENTITY_MARKER;
        *data_ptr3 = 0;
        *(int32_t *)(data_ptr3 + 1) = 0;
        data_ptr3[-1] = &ENTITY_LIST_HEAD;
        *data_ptr3 = data_ptr3 + 2;
        *(int32_t *)(data_ptr3 + 1) = 0;
        *(int8_t *)(data_ptr3 + 2) = 0;
        *entity_data = 0xffffffff;
        data_ptr3[0x12] = 0x3f800000;
        data_ptr3[0x13] = 0;
        data_ptr3[0x14] = 0x3f80000000000000;
        data_ptr3[0x15] = 0;
        data_ptr3[0x16] = 0;
        data_ptr3[0x17] = 0x3f800000;
        data_ptr3[0x18] = 0;
        data_ptr3[0x19] = 0x3f80000000000000;
        entity_data = entity_data + 0x38;
        data_ptr3 = data_ptr3 + 0x1c;
        new_capacity = new_capacity - 1;
      } while (new_capacity != 0);
      entity_data = (int32_t *)pool_info[1];
    }
    pool_info[1] = (longlong)(entity_data + additional_size * 0x38);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: expand_object_pool_capacity - 扩展对象池容量
// 参数: 
//   pool_info - 对象池信息结构体指针
//   additional_size - 需要添加的额外对象数量
// 功能: 在当前容量不足时扩展对象池，保持现有数据完整性
void expand_object_pool_capacity(longlong *pool_info, ulonglong additional_size)

{
  uint64_t *object_data;
  int32_t *object_fields;
  void *field_ptr;
  int32_t field_val1;
  int32_t field_val2;
  int32_t field_val3;
  uint64_t field_val4;
  int8_t *memory_ptr;
  longlong calc_result;
  longlong pool_start;
  int8_t *new_memory;
  int8_t *temp_ptr;
  longlong offset;
  void *name_data;
  ulonglong new_capacity;
  ulonglong objects_to_add;
  int32_t *field_array;
  
  offset = pool_info[1];
  calc_result = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(pool_info[2] - offset),8) +
          (pool_info[2] - offset);
  if ((ulonglong)((calc_result >> 8) - (calc_result >> 0x3f)) < additional_size) {
    pool_start = *pool_info;
    calc_result = SUB168(SEXT816(-0x3cf3cf3cf3cf3cf3) * SEXT816(offset - pool_start),8) + (offset - pool_start);
    calc_result = (calc_result >> 8) - (calc_result >> 0x3f);
    new_capacity = calc_result * 2;
    if (calc_result == 0) {
      new_capacity = 1;
    }
    if (new_capacity < calc_result + additional_size) {
      new_capacity = calc_result + additional_size;
    }
    memory_ptr = (int8_t *)0x0;
    if (new_capacity != 0) {
      memory_ptr = (int8_t *)
               allocate_memory(MEMORY_ALLOCATOR,new_capacity * 0x150,(char)pool_info[3],0xc30c30c30c30c30d,
                             0xfffffffffffffffe);
      offset = pool_info[1];
      pool_start = *pool_info;
    }
    new_memory = memory_ptr;
    if (pool_start != offset) {
      pool_start = pool_start - (longlong)memory_ptr;
      field_array = (int32_t *)(memory_ptr + 0x18);
      do {
        *new_memory = *(int8_t *)(pool_start + -0x18 + (longlong)field_array);
        *(void **)(field_array + -4) = &EMPTY_OBJECT_MARKER;
        *(uint64_t *)(field_array + -2) = 0;
        *field_array = 0;
        *(void **)(field_array + -4) = &OBJECT_LIST_HEAD;
        *(int32_t **)(field_array + -2) = field_array + 2;
        *field_array = 0;
        *(int8_t *)(field_array + 2) = 0;
        *field_array = *(int32_t *)(pool_start + (longlong)field_array);
        field_ptr = *(void **)(pool_start + -8 + (longlong)field_array);
        name_data = &DEFAULT_OBJECT_NAME;
        if (field_ptr != (void *)0x0) {
          name_data = field_ptr;
        }
        strcpy_s(*(uint64_t *)(field_array + -2),0x80,name_data);
        *(void **)(field_array + 0x22) = &EMPTY_OBJECT_MARKER;
        *(uint64_t *)(field_array + 0x24) = 0;
        field_array[0x26] = 0;
        *(void **)(field_array + 0x22) = &OBJECT_NAME_LIST;
        *(int32_t **)(field_array + 0x24) = field_array + 0x28;
        field_array[0x26] = 0;
        *(int8_t *)(field_array + 0x28) = 0;
        field_array[0x26] = *(int32_t *)(pool_start + 0x98 + (longlong)field_array);
        field_ptr = *(void **)(pool_start + 0x90 + (longlong)field_array);
        name_data = &DEFAULT_OBJECT_NAME;
        if (field_ptr != (void *)0x0) {
          name_data = field_ptr;
        }
        strcpy_s(*(uint64_t *)(field_array + 0x24),0x40,name_data);
        *(int8_t *)(field_array + 0x38) = *(int8_t *)(pool_start + 0xe0 + (longlong)field_array);
        field_array[0x39] = *(int32_t *)(pool_start + 0xe4 + (longlong)field_array);
        field_array[0x3a] = *(int32_t *)(pool_start + 0xe8 + (longlong)field_array);
        object_data = (uint64_t *)(pool_start + 0xec + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x3b) = *object_data;
        *(uint64_t *)(field_array + 0x3d) = field_val4;
        object_data = (uint64_t *)(pool_start + 0xfc + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x3f) = *object_data;
        *(uint64_t *)(field_array + 0x41) = field_val4;
        field_array[0x43] = *(int32_t *)(pool_start + 0x10c + (longlong)field_array);
        object_fields = (int32_t *)(pool_start + 0x110 + (longlong)field_array);
        field_val1 = object_fields[1];
        field_val2 = object_fields[2];
        field_val3 = object_fields[3];
        field_array[0x44] = *object_fields;
        field_array[0x45] = field_val1;
        field_array[0x46] = field_val2;
        field_array[0x47] = field_val3;
        object_data = (uint64_t *)(pool_start + 0x120 + (longlong)field_array);
        field_val4 = object_data[1];
        *(uint64_t *)(field_array + 0x48) = *object_data;
        *(uint64_t *)(field_array + 0x4a) = field_val4;
        field_array[0x4c] = *(int32_t *)(pool_start + 0x130 + (longlong)field_array);
        new_memory = new_memory + 0x150;
        calc_result = (longlong)field_array + pool_start + 0x138;
        field_array = field_array + 0x54;
      } while (calc_result != offset);
    }
    temp_ptr = new_memory;
    objects_to_add = additional_size;
    if (additional_size != 0) {
      do {
        initialize_object_data(temp_ptr);
        objects_to_add = objects_to_add - 1;
        temp_ptr = temp_ptr + 0x150;
      } while (objects_to_add != 0);
    }
    offset = pool_info[1];
    pool_start = *pool_info;
    if (pool_start != offset) {
      do {
        *(void **)(pool_start + 0xa0) = &EMPTY_OBJECT_MARKER;
        *(void **)(pool_start + 8) = &EMPTY_OBJECT_MARKER;
        pool_start = pool_start + 0x150;
      } while (pool_start != offset);
      pool_start = *pool_info;
    }
    if (pool_start != 0) {
                    // WARNING: Subroutine does not return
      free_memory();
    }
    *pool_info = (longlong)memory_ptr;
    pool_info[1] = (longlong)(new_memory + additional_size * 0x150);
    pool_info[2] = (longlong)(memory_ptr + new_capacity * 0x150);
  }
  else {
    new_capacity = additional_size;
    if (additional_size != 0) {
      do {
        initialize_object_data(offset);
        offset = offset + 0x150;
        new_capacity = new_capacity - 1;
      } while (new_capacity != 0);
      offset = pool_info[1];
    }
    pool_info[1] = additional_size * 0x150 + offset;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: rebuild_index_array - 重建索引数组
// 参数: 
//   array_info - 数组信息结构体指针
//   start_index - 起始索引
//   end_index - 结束索引
// 功能: 重新构建索引数组，优化内存布局和访问性能
void rebuild_index_array(longlong *array_info, longlong start_index, longlong end_index)

{
  ulonglong required_size;
  longlong temp_index;
  longlong current_pos;
  longlong segment_end;
  ulonglong segment_count;
  
  temp_index = (end_index - start_index) / 6 + (end_index - start_index >> 0x3f);
  segment_count = (temp_index >> 4) - (temp_index >> 0x3f);
  if ((ulonglong)((array_info[2] - *array_info) / 0x60) < segment_count) {
    if (segment_count == 0) {
      temp_index = 0;
    }
    else {
      temp_index = allocate_memory(MEMORY_ALLOCATOR,segment_count * 0x60,(char)array_info[3]);
    }
    if (start_index != end_index) {
      segment_end = temp_index - start_index;
      do {
        process_index_entry(segment_end + start_index,start_index);
        start_index = start_index + 0x60;
      } while (start_index != end_index);
    }
    segment_end = array_info[1];
    current_pos = *array_info;
    if (current_pos != segment_end) {
      do {
        cleanup_index_entry(current_pos);
        current_pos = current_pos + 0x60;
      } while (current_pos != segment_end);
      current_pos = *array_info;
    }
    if (current_pos != 0) {
                    // WARNING: Subroutine does not return
      free_memory(current_pos);
    }
    *array_info = temp_index;
    temp_index = segment_count * 0x60 + temp_index;
    array_info[2] = temp_index;
    array_info[1] = temp_index;
  }
  else {
    required_size = (array_info[1] - *array_info) / 0x60;
    if (required_size < segment_count) {
      temp_index = required_size * 0x60 + start_index;
      copy_index_data(start_index,temp_index);
      temp_index = extend_index_range(temp_index,end_index,array_info[1]);
      array_info[1] = temp_index;
    }
    else {
      current_pos = copy_index_data(start_index,end_index);
      temp_index = array_info[1];
      for (segment_end = current_pos; segment_end != temp_index; segment_end = segment_end + 0x60) {
        cleanup_index_entry(segment_end);
      }
      array_info[1] = current_pos;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: optimize_index_memory - 优化索引内存布局
// 功能: 重新组织索引数据的内存布局，提高缓存命中率和访问效率
void optimize_index_memory(void)

{
  longlong new_memory_block;
  longlong range_start;
  longlong temp_var;
  longlong range_end;
  longlong *array_info;
  longlong allocation_size;
  longlong data_size;
  
  if (data_size == 0) {
    new_memory_block = 0;
  }
  else {
    new_memory_block = allocate_memory(MEMORY_ALLOCATOR,data_size * 0x60,(char)array_info[3]);
  }
  if (range_start != range_end) {
    allocation_size = new_memory_block - range_start;
    do {
      process_index_entry(allocation_size + range_start,range_start);
      range_start = range_start + 0x60;
    } while (range_start != range_end);
  }
  allocation_size = array_info[1];
  temp_var = *array_info;
  if (temp_var != allocation_size) {
    do {
      cleanup_index_entry(temp_var);
      temp_var = temp_var + 0x60;
    } while (temp_var != allocation_size);
    temp_var = *array_info;
  }
  if (temp_var != 0) {
                    // WARNING: Subroutine does not return
    free_memory(temp_var);
  }
  *array_info = new_memory_block;
  new_memory_block = data_size * 0x60 + new_memory_block;
  array_info[2] = new_memory_block;
  array_info[1] = new_memory_block;
  return;
}