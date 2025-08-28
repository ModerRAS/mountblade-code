#include "TaleWorlds.Native.Split.h"

// 01_initialization_part062.c - 初始化模块第62部分
// 包含16个函数，主要处理内存分配、数据复制和初始化操作

// 函数: void process_buffer_with_offset(void* context, longlong buffer_base)
// 处理带有偏移量的缓冲区，进行数据初始化和复制操作
void process_buffer_with_offset(void* context, longlong buffer_base)

{
  longlong *buffer_ptr;
  longlong *temp_ptr;
  byte *byte_ptr;
  char char_val;
  int32_t uint_val;
  uint size_val;
  longlong *alloc_ptr;
  longlong mem_ptr;
  int counter;
  int offset_val;
  longlong index;
  ulonglong count;
  char *char_array_ptr;
  uint *uint_ptr;
  int32_t esi_val;
  uint array_size;
  longlong context_ptr;
  int loop_counter;
  int temp_counter;
  int32_t *data_ptr;
  int capacity;
  uint *temp_uint_ptr;
  ulonglong block_start;
  ulonglong block_end;
  bool is_allocated;
  
  // 计算缓冲区偏移量
  buffer_base = (longlong)*(int *)(buffer_base + 0x250) * 0x128 + buffer_base;
  uint_val = FUN_180080380(buffer_base, esi_val);
  *(int32_t *)(context_ptr + 0x30) = uint_val;
  FUN_1800802e0(buffer_base, uint_val);
  
  // 检查是否有数据源
  if (*(longlong *)(context_ptr + 0x10) == 0) {
    if (*(int *)(context_ptr + 0x18) != 0) {
      *(int32_t *)(context_ptr + 0x2c) = *(int32_t *)(context_ptr + 0x30);
      return;
    }
  }
  else {
    // 获取数组大小和容量
    char_val = *(char *)(context_ptr + 0x44);
    count = (ulonglong)char_val;
    buffer_ptr = (longlong *)(context_ptr + 0x38);
    capacity = (int)char_val;
    
    // 检查是否需要重新分配内存
    if (*(int *)(context_ptr + 0x40) == (int)char_val) {
      alloc_ptr = (longlong *)*buffer_ptr;
    }
    else {
      *(int *)(context_ptr + 0x40) = capacity;
      if (*buffer_ptr != 0) {
        // 释放现有内存
        FUN_18064e900();
      }
      *buffer_ptr = 0;
      
      // 分配新内存
      if (char_val == '\0') {
        alloc_ptr = (longlong *)0x0;
        *buffer_ptr = 0;
      }
      else {
        alloc_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)char_val * 4);
        *buffer_ptr = (longlong)alloc_ptr;
      }
    }
    
    // 初始化数组数据
    if (alloc_ptr != (longlong *)0x0) {
      loop_counter = 0;
      array_size = (uint)char_val;
      temp_counter = loop_counter;
      
      // 批量初始化（优化性能）
      if ((0 < capacity) && (0xf < array_size)) {
        offset_val = *(int *)(context_ptr + 0x2c);
        temp_ptr = (longlong *)((longlong)alloc_ptr + (longlong)(char_val + -1) * 4);
        
        // 检查内存范围
        if ((((longlong *)(context_ptr + 0x2c) < alloc_ptr) || (temp_ptr < (longlong *)(context_ptr + 0x2c)))
           && ((buffer_ptr < alloc_ptr || (temp_counter = 0, temp_ptr < buffer_ptr)))) {
          size_val = array_size & 0x8000000f;
          if ((int)size_val < 0) {
            size_val = (size_val - 1 | 0xfffffff0) + 1;
          }
          
          // 批量填充数据（16字节对齐优化）
          alloc_ptr = alloc_ptr + 4;
          counter = 8;
          do {
            *(int *)(alloc_ptr + -4) = loop_counter + offset_val;
            *(int *)((longlong)alloc_ptr + -0x1c) = loop_counter + 1 + offset_val;
            *(int *)(alloc_ptr + -3) = loop_counter + 2 + offset_val;
            *(int *)((longlong)alloc_ptr + -0x14) = loop_counter + 3 + offset_val;
            loop_counter = loop_counter + 0x10;
            *(int *)(alloc_ptr + -2) = counter + -4 + offset_val;
            *(int *)((longlong)alloc_ptr + -0xc) = counter + -3 + offset_val;
            *(int *)(alloc_ptr + -1) = counter + -2 + offset_val;
            *(int *)((longlong)alloc_ptr + -4) = counter + -1 + offset_val;
            *(int *)alloc_ptr = counter + offset_val;
            *(int *)((longlong)alloc_ptr + 4) = counter + 1 + offset_val;
            *(int *)(alloc_ptr + 1) = counter + 2 + offset_val;
            *(int *)((longlong)alloc_ptr + 0xc) = counter + 3 + offset_val;
            *(int *)(alloc_ptr + 2) = counter + 4 + offset_val;
            *(int *)((longlong)alloc_ptr + 0x14) = counter + 5 + offset_val;
            *(int *)(alloc_ptr + 3) = counter + 6 + offset_val;
            *(int *)((longlong)alloc_ptr + 0x1c) = counter + 7 + offset_val;
            alloc_ptr = alloc_ptr + 8;
            counter = counter + 0x10;
            temp_counter = loop_counter;
          } while (loop_counter < (int)(array_size - size_val));
        }
      }
      
      // 填充剩余元素
      for (index = (longlong)temp_counter; index < (longlong)count; index = index + 1) {
        loop_counter = *(int *)(context_ptr + 0x2c) + temp_counter;
        temp_counter = temp_counter + 1;
        *(int *)(*buffer_ptr + index * 4) = loop_counter;
      }
      
      // 处理索引映射
      temp_counter = *(int *)(context_ptr + 0x18);
      loop_counter = 0;
      if (0 < (longlong)temp_counter) {
        index = 0;
        do {
          offset_val = *(int *)(context_ptr + 0x30) + loop_counter;
          loop_counter = loop_counter + 1;
          byte_ptr = (byte *)(*(longlong *)(context_ptr + 0x10) + index);
          index = index + 1;
          *(int *)(*buffer_ptr + (ulonglong)*byte_ptr * 4) = offset_val;
        } while (index < temp_counter);
      }
    }
    
    // 获取全局缓冲区指针
    uint_ptr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
    if (capacity == 0) {
      array_size = (int)char_val - 1;
    }
    else {
      // 线程安全地分配索引
      LOCK();
      array_size = *uint_ptr;
      *uint_ptr = *uint_ptr + (int)char_val;
      UNLOCK();
      
      block_start = (ulonglong)(array_size >> 0xb);
      block_end = (ulonglong)(char_val + -1 + array_size >> 0xb);
      
      // 检查并分配内存块
      if (block_start <= block_end) {
        char_array_ptr = (char *)((longlong)uint_ptr + block_start + 0x108);
        index = (block_end - block_start) + 1;
        temp_uint_ptr = uint_ptr + block_start * 2 + 2;
        
        do {
          temp_counter = (int)block_start;
          if (*(longlong *)temp_uint_ptr == 0) {
            // 分配新的内存块
            mem_ptr = FUN_18062b420(_DAT_180c8ed18, 0x2000, 0x25);
            LOCK();
            is_allocated = *(longlong *)(uint_ptr + (longlong)temp_counter * 2 + 2) == 0;
            if (is_allocated) {
              *(longlong *)(uint_ptr + (longlong)temp_counter * 2 + 2) = mem_ptr;
            }
            UNLOCK();
            
            if (is_allocated) {
              LOCK();
              *(int8_t *)((longlong)temp_counter + 0x108 + (longlong)uint_ptr) = 0;
              UNLOCK();
            }
            else {
              if (mem_ptr != 0) {
                FUN_18064e900();
              }
              do {
              } while (*char_array_ptr != '\0');
            }
          }
          else {
            do {
            } while (*char_array_ptr != '\0');
          }
          
          block_start = (ulonglong)(temp_counter + 1);
          temp_uint_ptr = temp_uint_ptr + 2;
          char_array_ptr = char_array_ptr + 1;
          index = index + -1;
        } while (index != 0);
      }
    }
    
    // 复制数据到目标缓冲区
    data_ptr = *(int32_t **)(context_ptr + 0x38);
    size_val = array_size >> 0xb;
    *(uint *)(context_ptr + 0x2c) = array_size;
    
    if (size_val == (int)char_val + array_size >> 0xb) {
      // 批量复制数据
      memcpy(*(longlong *)(uint_ptr + (ulonglong)size_val * 2 + 2) +
             (ulonglong)(array_size + size_val * -0x800) * 4, data_ptr, (count & 0xffffffff) << 2);
    }
    
    if (capacity != 0) {
      count = count & 0xffffffff;
      do {
        uint_val = *data_ptr;
        data_ptr = data_ptr + 1;
        *(int32_t *)
         (*(longlong *)(uint_ptr + (ulonglong)(array_size >> 0xb) * 2 + 2) +
         (ulonglong)(array_size + (array_size >> 0xb) * -0x800) * 4) = uint_val;
        count = count - 1;
        array_size = array_size + 1;
      } while (count != 0);
    }
  }
  return;
}



// 函数: void initialize_buffer_data(void* context, ulonglong size)
// 初始化缓冲区数据，处理内存分配和数据初始化
void initialize_buffer_data(void* context, ulonglong size)

{
  longlong *buffer_ptr;
  longlong *temp_ptr;
  byte *byte_ptr;
  int32_t uint_val;
  uint buffer_size;
  uint remaining_size;
  longlong *alloc_ptr;
  longlong mem_ptr;
  int counter;
  int offset_val;
  longlong index;
  uint array_size;
  ulonglong buffer_count;
  char *char_ptr;
  uint *global_ptr;
  longlong context_ptr;
  int loop_counter;
  int temp_counter;
  int32_t *data_ptr;
  ulonglong block_start;
  uint *block_ptr;
  ulonglong block_end;
  ulonglong data_size;
  bool is_allocated;
  
  buffer_ptr = (longlong *)(context_ptr + 0x38);
  array_size = (uint)buffer_count;
  
  // 检查缓冲区大小是否匹配
  if (*(uint *)(context_ptr + 0x40) == array_size) {
    alloc_ptr = (longlong *)*buffer_ptr;
  }
  else {
    *(uint *)(context_ptr + 0x40) = array_size;
    if (*buffer_ptr != 0) {
      // 释放现有内存
      FUN_18064e900();
    }
    *buffer_ptr = 0;
    
    // 分配新内存
    if ((char)buffer_count == '\0') {
      alloc_ptr = (longlong *)0x0;
      *buffer_ptr = 0;
    }
    else {
      alloc_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)(char)buffer_count * 4);
      *buffer_ptr = (longlong)alloc_ptr;
    }
  }
  
  // 初始化数组数据
  if (alloc_ptr != (longlong *)0x0) {
    loop_counter = 0;
    temp_counter = loop_counter;
    
    // 批量初始化（优化性能）
    if ((0 < (int)array_size) && (0xf < array_size)) {
      offset_val = *(int *)(context_ptr + 0x2c);
      temp_ptr = (longlong *)((longlong)alloc_ptr + (longlong)(int)(array_size - 1) * 4);
      
      // 检查内存范围
      if ((((longlong *)(context_ptr + 0x2c) < alloc_ptr) || (temp_ptr < (longlong *)(context_ptr + 0x2c)))
         && ((buffer_ptr < alloc_ptr || (temp_counter = 0, temp_ptr < buffer_ptr)))) {
        remaining_size = array_size & 0x8000000f;
        if ((int)remaining_size < 0) {
          remaining_size = (remaining_size - 1 | 0xfffffff0) + 1;
        }
        
        // 批量填充数据（16字节对齐优化）
        alloc_ptr = alloc_ptr + 4;
        counter = 8;
        do {
          *(int *)(alloc_ptr + -4) = loop_counter + offset_val;
          *(int *)((longlong)alloc_ptr + -0x1c) = loop_counter + 1 + offset_val;
          *(int *)(alloc_ptr + -3) = loop_counter + 2 + offset_val;
          *(int *)((longlong)alloc_ptr + -0x14) = loop_counter + 3 + offset_val;
          loop_counter = loop_counter + 0x10;
          *(int *)(alloc_ptr + -2) = counter + -4 + offset_val;
          *(int *)((longlong)alloc_ptr + -0xc) = counter + -3 + offset_val;
          *(int *)(alloc_ptr + -1) = counter + -2 + offset_val;
          *(int *)((longlong)alloc_ptr + -4) = counter + -1 + offset_val;
          *(int *)alloc_ptr = counter + offset_val;
          *(int *)((longlong)alloc_ptr + 4) = counter + 1 + offset_val;
          *(int *)(alloc_ptr + 1) = counter + 2 + offset_val;
          *(int *)((longlong)alloc_ptr + 0xc) = counter + 3 + offset_val;
          *(int *)(alloc_ptr + 2) = counter + 4 + offset_val;
          *(int *)((longlong)alloc_ptr + 0x14) = counter + 5 + offset_val;
          *(int *)(alloc_ptr + 3) = counter + 6 + offset_val;
          *(int *)((longlong)alloc_ptr + 0x1c) = counter + 7 + offset_val;
          alloc_ptr = alloc_ptr + 8;
          counter = counter + 0x10;
          temp_counter = loop_counter;
        } while (loop_counter < (int)(array_size - remaining_size));
      }
    }
    
    // 填充剩余元素
    for (index = (longlong)temp_counter; index < (longlong)buffer_count; index = index + 1) {
      loop_counter = *(int *)(context_ptr + 0x2c) + temp_counter;
      temp_counter = temp_counter + 1;
      *(int *)(*buffer_ptr + index * 4) = loop_counter;
    }
    
    // 处理索引映射
    temp_counter = *(int *)(context_ptr + 0x18);
    loop_counter = 0;
    if (0 < (longlong)temp_counter) {
      index = 0;
      do {
        offset_val = *(int *)(context_ptr + 0x30) + loop_counter;
        loop_counter = loop_counter + 1;
        byte_ptr = (byte *)(*(longlong *)(context_ptr + 0x10) + index);
        index = index + 1;
        *(int *)(*buffer_ptr + (ulonglong)*byte_ptr * 4) = offset_val;
      } while (index < temp_counter);
    }
  }
  
  // 获取全局缓冲区指针
  global_ptr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
  if (array_size == 0) {
    remaining_size = 0xffffffff;
  }
  else {
    // 线程安全地分配索引
    LOCK();
    remaining_size = *global_ptr;
    *global_ptr = *global_ptr + array_size;
    UNLOCK();
    
    block_start = (ulonglong)(remaining_size >> 0xb);
    block_end = (ulonglong)((array_size - 1) + remaining_size >> 0xb);
    
    // 检查并分配内存块
    if (block_start <= block_end) {
      char_ptr = (char *)((longlong)global_ptr + block_start + 0x108);
      index = (block_end - block_start) + 1;
      block_ptr = global_ptr + block_start * 2 + 2;
      
      do {
        temp_counter = (int)block_start;
        if (*(longlong *)block_ptr == 0) {
          // 分配新的内存块
          mem_ptr = FUN_18062b420(_DAT_180c8ed18, 0x2000, 0x25);
          LOCK();
          is_allocated = *(longlong *)(global_ptr + (longlong)temp_counter * 2 + 2) == 0;
          if (is_allocated) {
            *(longlong *)(global_ptr + (longlong)temp_counter * 2 + 2) = mem_ptr;
          }
          UNLOCK();
          
          if (is_allocated) {
            LOCK();
            *(int8_t *)((longlong)temp_counter + 0x108 + (longlong)global_ptr) = 0;
            UNLOCK();
          }
          else {
            if (mem_ptr != 0) {
              FUN_18064e900();
            }
            do {
            } while (*char_ptr != '\0');
          }
        }
        else {
          do {
          } while (*char_ptr != '\0');
        }
        
        block_start = (ulonglong)(temp_counter + 1);
        block_ptr = block_ptr + 2;
        char_ptr = char_ptr + 1;
        index = index + -1;
      } while (index != 0);
    }
  }
  
  // 复制数据到目标缓冲区
  data_ptr = *(int32_t **)(context_ptr + 0x38);
  buffer_size = remaining_size >> 0xb;
  *(uint *)(context_ptr + 0x2c) = remaining_size;
  
  if (buffer_size == array_size + remaining_size >> 0xb) {
    // 批量复制数据
    memcpy(*(longlong *)(global_ptr + (ulonglong)buffer_size * 2 + 2) +
           (ulonglong)(remaining_size + buffer_size * -0x800) * 4, data_ptr, (buffer_count & 0xffffffff) << 2);
  }
  
  if (array_size != 0) {
    data_size = buffer_count & 0xffffffff;
    do {
      uint_val = *data_ptr;
      data_ptr = data_ptr + 1;
      *(int32_t *)
       (*(longlong *)(global_ptr + (ulonglong)(remaining_size >> 0xb) * 2 + 2) +
       (ulonglong)(remaining_size + (remaining_size >> 0xb) * -0x800) * 4) = uint_val;
      data_size = data_size - 1;
      remaining_size = remaining_size + 1;
    } while (data_size != 0);
  }
  return;
}



// 函数: void process_buffer_with_size(void* context, int size_param, ulonglong data_size)
// 处理指定大小的缓冲区，进行内存分配和数据初始化
void process_buffer_with_size(void* context, int size_param, ulonglong data_size)

{
  longlong *buffer_ptr;
  longlong *temp_ptr;
  byte *byte_ptr;
  int32_t uint_val;
  uint buffer_size;
  uint remaining_size;
  longlong *alloc_ptr;
  longlong mem_ptr;
  int counter;
  int offset_val;
  longlong index;
  int ebx_val;
  char *char_ptr;
  uint *global_ptr;
  longlong context_ptr;
  int loop_counter;
  int temp_counter;
  int32_t *data_ptr;
  ulonglong block_start;
  uint array_size;
  ulonglong r12_val;
  uint *block_ptr;
  ulonglong block_end;
  ulonglong copy_size;
  bool is_allocated;
  
  buffer_ptr = (longlong *)(context_ptr + 0x38);
  array_size = (uint)r12_val;
  
  // 检查缓冲区大小是否匹配
  if (*(int *)(context_ptr + 0x40) == ebx_val) {
    alloc_ptr = (longlong *)*buffer_ptr;
  }
  else {
    *(uint *)(context_ptr + 0x40) = array_size;
    if (*buffer_ptr != 0) {
      // 释放现有内存
      FUN_18064e900();
    }
    *buffer_ptr = 0;
    
    // 分配新内存
    if ((char)ebx_val == '\0') {
      alloc_ptr = (longlong *)0x0;
      *buffer_ptr = 0;
    }
    else {
      alloc_ptr = (longlong *)FUN_18062b1e0(_DAT_180c8ed18, (longlong)(char)ebx_val * 4);
      *buffer_ptr = (longlong)alloc_ptr;
    }
  }
  
  // 初始化数组数据
  if (alloc_ptr != (longlong *)0x0) {
    loop_counter = 0;
    temp_counter = loop_counter;
    
    // 批量初始化（优化性能）
    if ((0 < (int)array_size) && (0xf < array_size)) {
      offset_val = *(int *)(context_ptr + 0x2c);
      temp_ptr = (longlong *)((longlong)alloc_ptr + (longlong)(int)(array_size - 1) * 4);
      
      // 检查内存范围
      if ((((longlong *)(context_ptr + 0x2c) < alloc_ptr) || (temp_ptr < (longlong *)(context_ptr + 0x2c)))
         && ((buffer_ptr < alloc_ptr || (temp_counter = 0, temp_ptr < buffer_ptr)))) {
        remaining_size = array_size & 0x8000000f;
        if ((int)remaining_size < 0) {
          remaining_size = (remaining_size - 1 | 0xfffffff0) + 1;
        }
        
        // 批量填充数据（16字节对齐优化）
        alloc_ptr = alloc_ptr + 4;
        counter = 8;
        do {
          *(int *)(alloc_ptr + -4) = loop_counter + offset_val;
          *(int *)((longlong)alloc_ptr + -0x1c) = loop_counter + 1 + offset_val;
          *(int *)(alloc_ptr + -3) = loop_counter + 2 + offset_val;
          *(int *)((longlong)alloc_ptr + -0x14) = loop_counter + 3 + offset_val;
          loop_counter = loop_counter + 0x10;
          *(int *)(alloc_ptr + -2) = counter + -4 + offset_val;
          *(int *)((longlong)alloc_ptr + -0xc) = counter + -3 + offset_val;
          *(int *)(alloc_ptr + -1) = counter + -2 + offset_val;
          *(int *)((longlong)alloc_ptr + -4) = counter + -1 + offset_val;
          *(int *)alloc_ptr = counter + offset_val;
          *(int *)((longlong)alloc_ptr + 4) = counter + 1 + offset_val;
          *(int *)(alloc_ptr + 1) = counter + 2 + offset_val;
          *(int *)((longlong)alloc_ptr + 0xc) = counter + 3 + offset_val;
          *(int *)(alloc_ptr + 2) = counter + 4 + offset_val;
          *(int *)((longlong)alloc_ptr + 0x14) = counter + 5 + offset_val;
          *(int *)(alloc_ptr + 3) = counter + 6 + offset_val;
          *(int *)((longlong)alloc_ptr + 0x1c) = counter + 7 + offset_val;
          alloc_ptr = alloc_ptr + 8;
          counter = counter + 0x10;
          temp_counter = loop_counter;
        } while (loop_counter < (int)(array_size - remaining_size));
      }
    }
    
    // 填充剩余元素
    for (index = (longlong)temp_counter; index < (longlong)r12_val; index = index + 1) {
      loop_counter = *(int *)(context_ptr + 0x2c) + temp_counter;
      temp_counter = temp_counter + 1;
      *(int *)(*buffer_ptr + index * 4) = loop_counter;
    }
    
    // 处理索引映射
    temp_counter = *(int *)(context_ptr + 0x18);
    loop_counter = 0;
    if (0 < (longlong)temp_counter) {
      index = 0;
      do {
        offset_val = *(int *)(context_ptr + 0x30) + loop_counter;
        loop_counter = loop_counter + 1;
        byte_ptr = (byte *)(*(longlong *)(context_ptr + 0x10) + index);
        index = index + 1;
        *(int *)(*buffer_ptr + (ulonglong)*byte_ptr * 4) = offset_val;
      } while (index < temp_counter);
    }
  }
  
  // 获取全局缓冲区指针
  global_ptr = (uint *)((longlong)*(int *)(_DAT_180c86890 + 0xc20) * 0x128 + _DAT_180c86890 + 0x9d0);
  if (array_size == 0) {
    remaining_size = 0xffffffff;
  }
  else {
    // 线程安全地分配索引
    LOCK();
    remaining_size = *global_ptr;
    *global_ptr = *global_ptr + array_size;
    UNLOCK();
    
    block_start = (ulonglong)(remaining_size >> 0xb);
    block_end = (ulonglong)((array_size - 1) + remaining_size >> 0xb);
    
    // 检查并分配内存块
    if (block_start <= block_end) {
      char_ptr = (char *)((longlong)global_ptr + block_start + 0x108);
      index = (block_end - block_start) + 1;
      block_ptr = global_ptr + block_start * 2 + 2;
      
      do {
        temp_counter = (int)block_start;
        if (*(longlong *)block_ptr == 0) {
          // 分配新的内存块
          mem_ptr = FUN_18062b420(_DAT_180c8ed18, 0x2000, 0x25);
          LOCK();
          is_allocated = *(longlong *)(global_ptr + (longlong)temp_counter * 2 + 2) == 0;
          if (is_allocated) {
            *(longlong *)(global_ptr + (longlong)temp_counter * 2 + 2) = mem_ptr;
          }
          UNLOCK();
          
          if (is_allocated) {
            LOCK();
            *(int8_t *)((longlong)temp_counter + 0x108 + (longlong)global_ptr) = 0;
            UNLOCK();
          }
          else {
            if (mem_ptr != 0) {
              FUN_18064e900();
            }
            do {
            } while (*char_ptr != '\0');
          }
        }
        else {
          do {
          } while (*char_ptr != '\0');
        }
        
        block_start = (ulonglong)(temp_counter + 1);
        block_ptr = block_ptr + 2;
        char_ptr = char_ptr + 1;
        index = index + -1;
      } while (index != 0);
    }
  }
  
  // 复制数据到目标缓冲区
  data_ptr = *(int32_t **)(context_ptr + 0x38);
  buffer_size = remaining_size >> 0xb;
  *(uint *)(context_ptr + 0x2c) = remaining_size;
  
  if (buffer_size == array_size + remaining_size >> 0xb) {
    // 批量复制数据
    memcpy(*(longlong *)(global_ptr + (ulonglong)buffer_size * 2 + 2) +
           (ulonglong)(remaining_size + buffer_size * -0x800) * 4, data_ptr, (r12_val & 0xffffffff) << 2);
  }
  
  if (array_size != 0) {
    copy_size = r12_val & 0xffffffff;
    do {
      uint_val = *data_ptr;
      data_ptr = data_ptr + 1;
      *(int32_t *)
       (*(longlong *)(global_ptr + (ulonglong)(remaining_size >> 0xb) * 2 + 2) +
       (ulonglong)(remaining_size + (remaining_size >> 0xb) * -0x800) * 4) = uint_val;
      copy_size = copy_size - 1;
      remaining_size = remaining_size + 1;
    } while (copy_size != 0);
  }
  return;
}



// 函数: void allocate_and_copy_buffer(void* context, uint *global_buffer, uint data_size)
// 分配缓冲区并复制数据，处理内存管理和数据复制
void allocate_and_copy_buffer(void* context, uint *global_buffer, uint data_size)

{
  int32_t uint_val;
  longlong mem_ptr;
  uint buffer_offset;
  char *char_ptr;
  uint *buffer_ptr;
  uint current_offset;
  longlong context_ptr;
  int32_t *data_ptr;
  ulonglong block_start;
  uint r12d_val;
  uint64_t *r13_ptr;
  uint *block_ptr;
  int block_index;
  ulonglong block_end;
  ulonglong copy_size;
  longlong index;
  bool is_allocated;
  
  // 线程安全地分配缓冲区空间
  LOCK();
  current_offset = *global_buffer;
  *global_buffer = *global_buffer + r12d_val;
  UNLOCK();
  
  block_start = (ulonglong)(current_offset >> 0xb);
  block_end = (ulonglong)((r12d_val - 1) + current_offset >> 0xb);
  
  // 检查并分配内存块
  if (block_start <= block_end) {
    char_ptr = (char *)((longlong)global_buffer + block_start + 0x108);
    index = (block_end - block_start) + 1;
    block_ptr = global_buffer + (ulonglong)(current_offset >> 0xb) * 2 + 2;
    
    do {
      block_index = (int)block_start;
      if (*(longlong *)block_ptr == 0) {
        // 分配新的内存块
        mem_ptr = FUN_18062b420(_DAT_180c8ed18, 0x2000, 0x25);
        LOCK();
        is_allocated = *(longlong *)(global_buffer + (longlong)block_index * 2 + 2) == 0;
        if (is_allocated) {
          *(longlong *)(global_buffer + (longlong)block_index * 2 + 2) = mem_ptr;
        }
        UNLOCK();
        
        if (is_allocated) {
          LOCK();
          *(int8_t *)((longlong)block_index + 0x108 + (longlong)global_buffer) = 0;
          UNLOCK();
        }
        else {
          if (mem_ptr != 0) {
            FUN_18064e900();
          }
          do {
          } while (*char_ptr != '\0');
        }
      }
      else {
        do {
        } while (*char_ptr != '\0');
      }
      
      block_start = (ulonglong)(block_index + 1);
      block_ptr = block_ptr + 2;
      char_ptr = char_ptr + 1;
      index = index + -1;
    } while (index != 0);
    
    r13_ptr = (uint64_t *)(context_ptr + 0x38);
  }
  
  // 复制数据到缓冲区
  data_ptr = (int32_t *)*r13_ptr;
  buffer_offset = current_offset >> 0xb;
  *(uint *)(context_ptr + 0x2c) = current_offset;
  
  if (buffer_offset != r12d_val + current_offset >> 0xb) {
    if (r12d_val != 0) {
      copy_size = (ulonglong)r12d_val;
      do {
        uint_val = *data_ptr;
        data_ptr = data_ptr + 1;
        *(int32_t *)
         (*(longlong *)(global_buffer + (ulonglong)(current_offset >> 0xb) * 2 + 2) +
         (ulonglong)(current_offset + (current_offset >> 0xb) * -0x800) * 4) = uint_val;
        copy_size = copy_size - 1;
        current_offset = current_offset + 1;
      } while (copy_size != 0);
    }
    return;
  }
  
  // 批量复制数据
  memcpy(*(longlong *)(global_buffer + (ulonglong)buffer_offset * 2 + 2) +
         (ulonglong)(current_offset + buffer_offset * -0x800) * 4, data_ptr, (ulonglong)r12d_val << 2);
}



// 函数: void copy_to_buffer_with_offset(void* context, longlong buffer_base, uint esi_val, uint data_size)
// 使用偏移量将数据复制到缓冲区
void copy_to_buffer_with_offset(void* context, longlong buffer_base, uint esi_val, uint data_size)

{
  int32_t uint_val;
  uint buffer_offset;
  longlong base_ptr;
  uint esi_offset;
  longlong context_ptr;
  int32_t *data_ptr;
  ulonglong copy_size;
  uint r12d_val;
  uint64_t *r13_ptr;
  
  data_ptr = (int32_t *)*r13_ptr;
  buffer_offset = esi_val >> 0xb;
  *(uint *)(context_ptr + 0x2c) = esi_val;
  
  if (buffer_offset != r12d_val + esi_val >> 0xb) {
    if (r12d_val != 0) {
      copy_size = (ulonglong)r12d_val;
      do {
        uint_val = *data_ptr;
        data_ptr = data_ptr + 1;
        *(int32_t *)
         (*(longlong *)(base_ptr + 8 + (ulonglong)(esi_val >> 0xb) * 8) +
         (ulonglong)(esi_val + (esi_val >> 0xb) * -0x800) * 4) = uint_val;
        copy_size = copy_size - 1;
        esi_val = esi_val + 1;
      } while (copy_size != 0);
    }
    return;
  }
  
  // 批量复制数据
  memcpy(*(longlong *)(base_ptr + 8 + (ulonglong)buffer_offset * 8) +
         (ulonglong)(esi_val + buffer_offset * -0x800) * 4, data_ptr, (ulonglong)r12d_val << 2);
}



// 函数: void memcpy_with_params(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t data_ptr)
// 使用参数进行内存复制操作
void memcpy_with_params(longlong param_1, uint64_t param_2, uint64_t param_3, uint64_t data_ptr)

{
  longlong base_ptr;
  int esi_val;
  uint r12d_val;
  
  // 执行内存复制
  memcpy(*(longlong *)(base_ptr + 8 + param_1 * 8) +
         (ulonglong)(uint)(esi_val + (int)param_1 * -0x800) * 4, data_ptr, (ulonglong)r12d_val << 2);
}



// 函数: void empty_function_1(void)
// 空函数1 - 可能用于初始化或占位
void empty_function_1(void)

{
  return;
}



// 函数: void empty_function_2(void)
// 空函数2 - 可能用于初始化或占位
void empty_function_2(void)

{
  return;
}



// 函数: void empty_function_3(void)
// 空函数3 - 可能用于初始化或占位
void empty_function_3(void)

{
  return;
}



// 函数: void copy_data_to_buffer(void* context, uint esi_val, int32_t *data_ptr, uint data_size)
// 将数据复制到缓冲区，处理偏移量和大小
void copy_data_to_buffer(void* context, uint esi_val, int32_t *data_ptr, uint data_size)

{
  int32_t uint_val;
  longlong base_ptr;
  uint esi_offset;
  int32_t *source_ptr;
  ulonglong copy_size;
  uint r12d_val;
  
  if (r12d_val != 0) {
    copy_size = (ulonglong)r12d_val;
    do {
      uint_val = *source_ptr;
      source_ptr = source_ptr + 1;
      *(int32_t *)
       (*(longlong *)(base_ptr + 8 + (ulonglong)(esi_val >> 0xb) * 8) +
       (ulonglong)(esi_val + (esi_val >> 0xb) * -0x800) * 4) = uint_val;
      copy_size = copy_size - 1;
      esi_val = esi_val + 1;
    } while (copy_size != 0);
  }
  return;
}



// 函数: void update_buffer_if_needed(void* context)
// 根据需要更新缓冲区内容
void update_buffer_if_needed(void* context)

{
  longlong context_ptr;
  
  if (*(int *)(context_ptr + 0x18) != 0) {
    *(int32_t *)(context_ptr + 0x2c) = *(int32_t *)(context_ptr + 0x30);
    return;
  }
  return;
}



// 函数: void create_and_initialize_object(uint64_t param_1, uint64_t param_2, uint64_t param_3)
// 创建并初始化对象，处理内存分配和初始化
void create_and_initialize_object(uint64_t param_1, uint64_t param_2, uint64_t param_3)

{
  uint64_t object_ptr;
  longlong *instance_ptr;
  
  // 创建对象
  object_ptr = FUN_18062b1e0(_DAT_180c8ed18, 0xf0, 8, 3, 0xfffffffffffffffe);
  instance_ptr = (longlong *)FUN_18007f2f0(object_ptr);
  
  if (instance_ptr != (longlong *)0x0) {
    // 调用对象的初始化方法
    (**(code **)(*instance_ptr + 0x28))(instance_ptr);
  }
  
  // 设置对象属性
  FUN_18007e2b0(instance_ptr, param_1);
  FUN_18007e5b0(instance_ptr, param_3);
  
  if (instance_ptr != (longlong *)0x0) {
    // 调用对象的清理方法
    (**(code **)(*instance_ptr + 0x38))(instance_ptr);
  }
  return;
}



// 函数: void process_data_with_buffers(uint64_t param_1, longlong param_2, uint64_t param_3, longlong param_4)
// 使用缓冲区处理数据，进行复杂的内存操作
void process_data_with_buffers(uint64_t param_1, longlong param_2, uint64_t param_3, longlong param_4)

{
  longlong *buffer_ptr;
  int data_size;
  int8_t stack_data [32];
  longlong *stack_buffer;
  longlong *buffer_array[2];
  uint64_t stack_param;
  ulonglong stack_hash;
  
  stack_param = 0xfffffffffffffffe;
  stack_hash = _DAT_180bf00a8 ^ (ulonglong)stack_data;
  
  // 更新数据指针
  *(longlong *)(param_4 + 8) = *(longlong *)(param_4 + 8) + 4;
  
  // 计算数据大小
  data_size = *(int *)(param_2 + 0x14) * *(int *)(param_2 + 0x10);
  
  // 分配缓冲区
  buffer_ptr = (longlong *)FUN_180081590(param_1, buffer_array, data_size);
  buffer_ptr = (longlong *)*buffer_ptr;
  
  if (buffer_ptr != (longlong *)0x0) {
    stack_buffer = buffer_ptr;
    // 初始化缓冲区
    (**(code **)(*buffer_ptr + 0x28))(buffer_ptr);
  }
  
  // 更新缓冲区链表
  stack_buffer = *(longlong **)(param_2 + 0x20);
  *(longlong **)(param_2 + 0x20) = buffer_ptr;
  
  if (stack_buffer != (longlong *)0x0) {
    // 清理旧缓冲区
    (**(code **)(*stack_buffer + 0x38))();
  }
  
  if (buffer_array[0] != (longlong *)0x0) {
    // 清理临时缓冲区
    (**(code **)(*buffer_array[0] + 0x38))();
  }
  
  // 复制数据
  memcpy(*(uint64_t *)(*(longlong *)(param_2 + 0x20) + 0x10), *(uint64_t *)(param_4 + 8),
         (longlong)data_size);
}



// 函数: uint8_t external_function_1;
// 外部函数1声明 - 可能是库函数或系统调用
uint8_t external_function_1;



// 函数: uint8_t external_function_2;
// 外部函数2声明 - 可能是库函数或系统调用
uint8_t external_function_2;



// 函数: uint8_t external_function_3;
// 外部函数3声明 - 可能是库函数或系统调用
uint8_t external_function_3;