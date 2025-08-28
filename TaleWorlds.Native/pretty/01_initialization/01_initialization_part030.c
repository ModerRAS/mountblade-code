#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part030.c - 初始化模块第30部分
// 包含8个函数，主要涉及动态数组、线程本地存储、内存池管理等初始化功能

// 全局变量声明
extern void *system_memory_pool_ptr;  // 内存分配器指针
extern void *global_var_9040_ptr;   // 未知数据结构指针
extern void *global_var_9024_ptr;   // 未知数据结构指针  
extern void *global_var_9008_ptr;   // 未知数据结构指针

/**
 * 向动态数组中添加元素
 * 当数组空间不足时自动扩容
 * 
 * @param array_info 数组信息结构体指针 [0]=数据指针, [1]=当前大小, [2]=容量, [3]=分配标志
 * @param element 要添加的元素指针
 */
void dynamic_array_add_element(uint64_t *array_info, uint64_t *element)
{
  int64_t current_capacity;
  uint64_t *data_ptr;
  uint64_t *current_end;
  uint64_t *capacity_end;
  uint64_t *new_data;
  
  // 获取数组当前状态
  current_end = (uint64_t *)array_info[1];
  capacity_end = (uint64_t *)array_info[2];
  
  // 检查是否有剩余空间
  if (current_end < capacity_end) {
    // 有空间，直接添加
    array_info[1] = (uint64_t)(current_end + 1);
    *current_end = *element;
    return;
  }
  
  // 空间不足，需要扩容
  data_ptr = (uint64_t *)*array_info;
  current_capacity = (int64_t)current_end - (int64_t)data_ptr >> 3;
  
  // 计算新容量（至少为1，否则加倍）
  if (current_capacity == 0) {
    current_capacity = 1;
  }
  else {
    current_capacity = current_capacity * 2;
    if (current_capacity == 0) {
      new_data = (uint64_t *)0x0;
      goto reallocate_complete;
    }
  }
  
  // 分配新内存
  new_data = (uint64_t *)memory_allocate(system_memory_pool_ptr, current_capacity * 8, (char)array_info[3]);
  
reallocate_complete:
  data_ptr = (uint64_t *)*array_info;
  current_end = (uint64_t *)array_info[1];
  
  // 复制现有数据到新位置
  if (data_ptr != current_end) {
    memmove(new_data, data_ptr, (int64_t)current_end - (int64_t)data_ptr);
  }
  
  // 添加新元素
  *new_data = *element;
  
  // 释放旧内存（如果存在）
  if (*array_info != 0) {
    memory_deallocate();
  }
  
  // 更新数组信息
  *array_info = (uint64_t)new_data;
  array_info[1] = (uint64_t)(new_data + 1);
  array_info[2] = (uint64_t)(new_data + current_capacity);
  return;
}

/**
 * 从线程本地存储中获取值
 * 使用线程ID作为哈希键进行查找
 * 
 * @param tls_base 线程本地存储基地址
 * @return 找到的值，失败返回0
 */
int64_t thread_local_storage_get_value(int64_t tls_base)
{
  int64_t *counter_ptr;
  uint *slot_ptr;
  uint64_t *hash_table;
  uint64_t hash_value;
  uint thread_id;
  uint64_t slot_index;
  int64_t found_value;
  uint64_t *current_table;
  bool slot_available;
  char stack_buffer[16];
  
  // 计算线程ID的哈希值
  thread_id = GetCurrentThreadId();
  hash_value = (thread_id >> 0x10 ^ thread_id) * -0x7a143595;
  hash_value = (hash_value >> 0xd ^ hash_value) * -0x3d4d51cb;
  slot_index = (uint64_t)(hash_value >> 0x10 ^ hash_value);
  
  // 遍历哈希表链
  hash_table = *(uint64_t **)(tls_base + 0x30);
  for (current_table = hash_table; hash_value = slot_index, current_table != (uint64_t *)0x0; current_table = (uint64_t *)current_table[2])
  {
    while( true ) {
      // 计算槽位索引
      slot_index = slot_index & *current_table - 1;
      uint slot_thread_id = *(uint *)(slot_index * 0x10 + current_table[1]);
      
      if (slot_thread_id == thread_id) {
        // 找到匹配的线程ID
        found_value = *(int64_t *)(current_table[1] + 8 + slot_index * 0x10);
        if (current_table == hash_table) {
          return found_value;  // 在主表中找到，直接返回
        }
        
        // 需要将值迁移到主表
        do {
          slot_index = slot_index & *hash_table - 1;
          if (*(int *)(hash_table[1] + slot_index * 0x10) == 0) {
            slot_ptr = (uint *)(hash_table[1] + slot_index * 0x10);
            LOCK();
            slot_available = *slot_ptr == 0;
            if (slot_available) {
              *slot_ptr = thread_id;
            }
            UNLOCK();
            if (slot_available) {
              *(int64_t *)(hash_table[1] + 8 + slot_index * 0x10) = found_value;
              return found_value;
            }
          }
          slot_index = slot_index + 1;
        } while( true );
      }
      
      if (slot_thread_id == 0) break;  // 空槽位，结束搜索
      slot_index = slot_index + 1;
    }
  }
  
  // 未找到现有值，分配新值
  LOCK();
  counter_ptr = (int64_t *)(tls_base + 0x38);
  found_value = *counter_ptr;
  *counter_ptr = *counter_ptr + 1;
  UNLOCK();
  slot_index = found_value + 1;
  
  while( true ) {
    // 检查是否需要扩容
    if (*hash_table >> 1 <= slot_index) {
      LOCK();
      slot_ptr = (uint *)(tls_base + 600);
      uint resize_flag = *slot_ptr;
      *slot_ptr = *slot_ptr | 1;
      UNLOCK();
      
      if ((resize_flag & 1) == 0) {
        current_table = *(uint64_t **)(tls_base + 0x30);
        hash_table = current_table;
        uint64_t table_size = *current_table;
        
        if (*current_table >> 1 <= slot_index) {
          // 计算新的表大小
          uint64_t new_size;
          do {
            uint64_t old_size = new_size = table_size;
            new_size = old_size * 2;
          } while ((old_size & 0x7fffffffffffffff) <= slot_index);
          
          // 分配新表
          hash_table = (uint64_t *)memory_allocate(system_memory_pool_ptr, new_size * 0x20 + 0x1f, 10);
          if (hash_table == (uint64_t *)0x0) {
            LOCK();
            *(int64_t *)(tls_base + 0x38) = *(int64_t *)(tls_base + 0x38) + -1;
            UNLOCK();
            *(int32_t *)(tls_base + 600) = 0;
            return 0;
          }
          
          // 初始化新表
          *hash_table = new_size;
          hash_table[1] = (uint64_t)(-(int)(hash_table + 3) & 7) + (int64_t)(hash_table + 3);
          found_value = 0;
          for (; new_size != 0; new_size = new_size - 1) {
            *(uint64_t *)(found_value + 8 + hash_table[1]) = 0;
            *(int32_t *)(found_value + hash_table[1]) = 0;
            found_value = found_value + 0x10;
          }
          hash_table[2] = (uint64_t)current_table;
          *(uint64_t **)(tls_base + 0x30) = hash_table;
        }
        *(int32_t *)(tls_base + 600) = 0;
      }
    }
    
    // 检查负载因子
    if (slot_index < (*hash_table >> 2) + (*hash_table >> 1)) {
      found_value = allocate_thread_local_value(tls_base, 0, stack_buffer);
      if (found_value == 0) {
        LOCK();
        *(int64_t *)(tls_base + 0x38) = *(int64_t *)(tls_base + 0x38) + -1;
        UNLOCK();
        return 0;
      }
      
      if (stack_buffer[0] != '\0') {
        LOCK();
        *(int64_t *)(tls_base + 0x38) = *(int64_t *)(tls_base + 0x38) + -1;
        UNLOCK();
      }
      
      // 插入新值到哈希表
      do {
        slot_index = slot_index & *hash_table - 1;
        if (*(int *)(hash_table[1] + slot_index * 0x10) == 0) {
          slot_ptr = (uint *)(hash_table[1] + slot_index * 0x10);
          LOCK();
          slot_available = *slot_ptr == 0;
          if (slot_available) {
            *slot_ptr = thread_id;
          }
          UNLOCK();
          if (slot_available) {
            *(int64_t *)(hash_table[1] + 8 + slot_index * 0x10) = found_value;
            return found_value;
          }
        }
        slot_index = slot_index + 1;
      } while( true );
    }
    hash_table = *(uint64_t **)(tls_base + 0x30);
  }
}

/**
 * 线程本地存储获取值的内部实现
 * 寄存器版本，优化性能
 */
int64_t thread_local_storage_get_value_internal(void)
{
  int64_t *counter_ptr;
  uint *slot_ptr;
  int *int_slot_ptr;
  uint resize_flag;
  uint64_t *hash_table;
  uint64_t hash_value;
  int64_t new_value;
  uint64_t table_size;
  uint64_t slot_index;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int64_t unaff_R14;
  int unaff_R15D;
  bool slot_available;
  char in_stack_00000050;
  
  LOCK();
  counter_ptr = (int64_t *)(unaff_R14 + 0x38);
  new_value = *counter_ptr;
  *counter_ptr = *counter_ptr + 1;
  UNLOCK();
  slot_index = new_value + 1;
  
  while( true ) {
    // 检查是否需要扩容
    if (*unaff_RDI >> 1 <= slot_index) {
      LOCK();
      slot_ptr = (uint *)(unaff_R14 + 600);
      resize_flag = *slot_ptr;
      *slot_ptr = *slot_ptr | 1;
      UNLOCK();
      
      if ((resize_flag & 1) == 0) {
        hash_table = *(uint64_t **)(unaff_R14 + 0x30);
        unaff_RDI = hash_table;
        table_size = *hash_table;
        
        if (*hash_table >> 1 <= slot_index) {
          // 计算新表大小
          uint64_t old_size;
          do {
            old_size = table_size;
            table_size = old_size * 2;
          } while ((old_size & 0x7fffffffffffffff) <= slot_index);
          
          // 分配新表
          unaff_RDI = (uint64_t *)memory_allocate(system_memory_pool_ptr, old_size * 0x20 + 0x1f, 10);
          if (unaff_RDI == (uint64_t *)0x0) {
            LOCK();
            *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
            UNLOCK();
            *(int32_t *)(unaff_R14 + 600) = 0;
            return 0;
          }
          
          // 初始化新表
          *unaff_RDI = table_size;
          unaff_RDI[1] = (uint64_t)(-(int)(unaff_RDI + 3) & 7) + (int64_t)(unaff_RDI + 3);
          new_value = 0;
          for (; table_size != 0; table_size = table_size - 1) {
            *(uint64_t *)(new_value + 8 + unaff_RDI[1]) = 0;
            *(int32_t *)(new_value + unaff_RDI[1]) = 0;
            new_value = new_value + 0x10;
          }
          unaff_RDI[2] = (uint64_t)hash_table;
          *(uint64_t **)(unaff_R14 + 0x30) = unaff_RDI;
        }
        *(int32_t *)(unaff_R14 + 600) = 0;
      }
    }
    
    // 检查负载因子
    if (slot_index < (*unaff_RDI >> 2) + (*unaff_RDI >> 1)) break;
    unaff_RDI = *(uint64_t **)(unaff_R14 + 0x30);
  }
  
  // 分配新值
  new_value = allocate_thread_local_value();
  if (new_value == 0) {
    LOCK();
    *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
    UNLOCK();
    return 0;
  }
  
  if (in_stack_00000050 != '\0') {
    LOCK();
    *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
    UNLOCK();
  }
  
  // 插入到哈希表
  do {
    slot_index = unaff_RSI & *unaff_RDI - 1;
    if (*(int *)(unaff_RDI[1] + slot_index * 0x10) == 0) {
      int_slot_ptr = (int *)(unaff_RDI[1] + slot_index * 0x10);
      LOCK();
      slot_available = *int_slot_ptr == 0;
      if (slot_available) {
        *int_slot_ptr = unaff_R15D;
      }
      UNLOCK();
      if (slot_available) {
        *(int64_t *)(unaff_RDI[1] + 8 + slot_index * 0x10) = new_value;
        return new_value;
      }
    }
    unaff_RSI = slot_index + 1;
  } while( true );
}

/**
 * 在哈希表之间复制值
 * 用于线程本地存储的值迁移
 */
uint64_t copy_hash_table_value(uint64_t param_1, uint64_t param_2, int64_t *param_3)
{
  int *int_slot_ptr;
  uint64_t value_to_copy;
  int64_t in_RAX;
  uint64_t unaff_RSI;
  uint64_t slot_index;
  int64_t *unaff_RDI;
  int unaff_R15D;
  bool slot_available;
  
  value_to_copy = *(uint64_t *)(param_3[1] + 8 + in_RAX * 0x10);
  if (param_3 == unaff_RDI) {
    return value_to_copy;  // 源和目标相同，直接返回
  }
  
  // 在目标表中查找空槽位
  do {
    slot_index = unaff_RSI & *unaff_RDI - 1U;
    if (*(int *)(unaff_RDI[1] + slot_index * 0x10) == 0) {
      int_slot_ptr = (int *)(unaff_RDI[1] + slot_index * 0x10);
      LOCK();
      slot_available = *int_slot_ptr == 0;
      if (slot_available) {
        *int_slot_ptr = unaff_R15D;
      }
      UNLOCK();
      if (slot_available) {
        *(uint64_t *)(unaff_RDI[1] + 8 + slot_index * 0x10) = value_to_copy;
        return value_to_copy;
      }
    }
    unaff_RSI = slot_index + 1;
  } while( true );
}

/**
 * 线程本地存储扩容处理
 * 当哈希表负载过高时进行扩容
 */
int64_t thread_local_storage_expand_table(void)
{
  uint *resize_flag_ptr;
  int *int_slot_ptr;
  uint resize_flag;
  uint64_t *hash_table;
  uint64_t hash_value;
  int64_t new_value;
  uint64_t table_size;
  uint64_t slot_index;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *unaff_RDI;
  int32_t uVar8;
  int64_t unaff_R12;
  int64_t unaff_R14;
  int unaff_R15D;
  bool slot_available;
  char in_stack_00000050;
  
  while( true ) {
    do {
      uVar8 = (int32_t)unaff_R12;
      *(int32_t *)(unaff_R14 + 600) = uVar8;
      
      do {
        do {
          // 检查是否可以插入而不扩容
          if (unaff_RBP < (*unaff_RDI >> 2) + (*unaff_RDI >> 1)) {
            new_value = allocate_thread_local_value();
            if (new_value == 0) {
              LOCK();
              *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
              UNLOCK();
              return 0;
            }
            
            if (in_stack_00000050 != (char)unaff_R12) {
              LOCK();
              *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
              UNLOCK();
            }
            
            // 插入新值
            do {
              slot_index = unaff_RSI & *unaff_RDI - 1;
              if (*(int *)(unaff_RDI[1] + slot_index * 0x10) == 0) {
                int_slot_ptr = (int *)(unaff_RDI[1] + slot_index * 0x10);
                LOCK();
                slot_available = *int_slot_ptr == 0;
                if (slot_available) {
                  *int_slot_ptr = unaff_R15D;
                }
                UNLOCK();
                if (slot_available) {
                  *(int64_t *)(unaff_RDI[1] + 8 + slot_index * 0x10) = new_value;
                  return new_value;
                }
              }
              unaff_RSI = slot_index + 1;
            } while( true );
          }
          unaff_RDI = *(uint64_t **)(unaff_R14 + 0x30);
        } while (unaff_RBP < *unaff_RDI >> 1);
        
        // 设置扩容标志
        LOCK();
        resize_flag_ptr = (uint *)(unaff_R14 + 600);
        resize_flag = *resize_flag_ptr;
        *resize_flag_ptr = *resize_flag_ptr | 1;
        UNLOCK();
      } while ((resize_flag & 1) != 0);
      
      // 执行扩容
      hash_table = *(uint64_t **)(unaff_R14 + 0x30);
      unaff_RDI = hash_table;
      table_size = *hash_table;
    } while (unaff_RBP < *hash_table >> 1);
    
    // 计算新表大小
    uint64_t old_size;
    do {
      old_size = table_size;
      table_size = old_size * 2;
    } while ((old_size & 0x7fffffffffffffff) <= unaff_RBP);
    
    // 分配新表
    unaff_RDI = (uint64_t *)memory_allocate(system_memory_pool_ptr, old_size * 0x20 + 0x1f, 10);
    if (unaff_RDI == (uint64_t *)0x0) break;
    
    // 初始化新表
    *unaff_RDI = table_size;
    unaff_RDI[1] = (uint64_t)(-(int)(unaff_RDI + 3) & 7) + (int64_t)(unaff_RDI + 3);
    new_value = unaff_R12;
    for (; table_size != 0; table_size = table_size - 1) {
      *(int64_t *)(new_value + 8 + unaff_RDI[1]) = unaff_R12;
      *(int32_t *)(new_value + unaff_RDI[1]) = uVar8;
      new_value = new_value + 0x10;
    }
    unaff_RDI[2] = (uint64_t)hash_table;
    *(uint64_t **)(unaff_R14 + 0x30) = unaff_RDI;
  }
  
  // 扩容失败，清理状态
  LOCK();
  *(int64_t *)(unaff_R14 + 0x38) = *(int64_t *)(unaff_R14 + 0x38) + -1;
  UNLOCK();
  *(int32_t *)(unaff_R14 + 600) = uVar8;
  return 0;
}

/**
 * 分配线程本地存储值
 * 创建新的线程本地存储条目
 */
uint64_t *allocate_thread_local_value(int64_t *tls_base, char param_2, int8_t *param_3)
{
  int64_t *next_ptr;
  uint64_t *new_entry;
  int64_t current_head;
  int64_t old_head;
  uint64_t *list_head;
  uint64_t *allocated_entry;
  uint64_t hash_value;
  uint64_t new_size;
  bool success;
  
  allocated_entry = (uint64_t *)0x0;
  new_entry = (uint64_t *)*tls_base;
  
  do {
    if (new_entry == (uint64_t *)0x0) {
      // 链表为空，创建新条目
      *param_3 = 0;
      if (param_2 == '\0') {
        // 创建标准条目
        new_entry = (uint64_t *)memory_allocate(system_memory_pool_ptr, 0x68, 10, 0, 0xfffffffffffffffe);
        if (new_entry == (uint64_t *)0x0) {
          return (uint64_t *)0x0;
        }
        // 初始化标准条目
        new_entry[1] = 0;
        *(int8_t *)(new_entry + 2) = 0;
        new_entry[3] = 0;
        *new_entry = &global_var_9040_ptr;
        new_entry[4] = 0;
        new_entry[5] = 0;
        new_entry[6] = 0;
        new_entry[7] = 0;
        new_entry[8] = 0;
        *(int8_t *)(new_entry + 9) = 0;
        new_entry[10] = tls_base;
        *new_entry = &global_var_9024_ptr;
        new_entry[0xb] = 0x20;
        new_entry[0xc] = 0;
        initialize_thread_local_entry(new_entry);
      }
      else {
        // 创建扩展条目
        new_entry = (uint64_t *)memory_allocate(system_memory_pool_ptr, 0x88, 10, 0, 0xfffffffffffffffe);
        if (new_entry == (uint64_t *)0x0) {
          return (uint64_t *)0x0;
        }
        // 初始化扩展条目
        new_entry[1] = 0;
        *(int8_t *)(new_entry + 2) = 0;
        new_entry[3] = 0;
        *new_entry = &global_var_9040_ptr;
        new_entry[4] = 0;
        new_entry[5] = 0;
        new_entry[6] = 0;
        new_entry[7] = 0;
        new_entry[8] = 0;
        *(int8_t *)(new_entry + 9) = 1;
        new_entry[10] = tls_base;
        *new_entry = &global_var_9008_ptr;
        new_entry[0xb] = 0;
        new_entry[0xc] = 0;
        new_entry[0xd] = 0x10;
        new_entry[0xe] = 0;
        new_entry[0xf] = 0;
        new_entry[0x10] = 0;
        
        // 计算哈希表大小
        hash_value = tls_base[4] - 1U | tls_base[4] - 1U >> 1;
        hash_value = hash_value | hash_value >> 2;
        hash_value = hash_value | hash_value >> 4;
        new_size = 1;
        do {
          hash_value = hash_value | hash_value >> (((byte)new_size & 7) << 3);
          new_size = new_size * 2;
        } while (new_size < 8);
        new_size = hash_value + 1 >> 1;
        if ((uint64_t)new_entry[0xd] < new_size) {
          new_entry[0xd] = new_size;
        }
        initialize_thread_local_entry_extended(new_entry, 0);
      }
      
      list_head = allocated_entry;
      if (new_entry != (uint64_t *)0x0) {
        // 原子操作插入到链表头部
        LOCK();
        *(int *)(tls_base + 1) = (int)tls_base[1] + 1;
        UNLOCK();
        
        current_head = *tls_base;
        do {
          list_head = (uint64_t *)(current_head + 8);
          if (current_head == 0) {
            list_head = allocated_entry;
          }
          new_entry[1] = list_head;
          LOCK();
          old_head = *tls_base;
          success = current_head == old_head;
          if (success) {
            *tls_base = (int64_t)new_entry;
            old_head = current_head;
          }
          UNLOCK();
          current_head = old_head;
          list_head = new_entry;
        } while (!success);
      }
      return list_head;
    }
    
    // 检查现有条目是否可重用
    if ((*(char *)(new_entry + 2) != '\0') && (*(char *)(new_entry + 9) == param_2)) {
      LOCK();
      success = *(char *)(new_entry + 2) == '\x01';
      if (success) {
        *(char *)(new_entry + 2) = '\0';
      }
      UNLOCK();
      if (success) {
        *param_3 = 1;
        return new_entry;
      }
    }
    
    // 移动到下一个条目
    next_ptr = new_entry + 1;
    new_entry = (uint64_t *)(*next_ptr + -8);
    if (*next_ptr == 0) {
      new_entry = allocated_entry;
    }
  } while( true );
}

/**
 * 向事件队列添加事件
 * 管理事件队列的空间分配和事件插入
 */
uint64_t event_queue_add_event(int64_t queue_ptr, int64_t *event_data, uint64_t param_3, uint64_t param_4)
{
  uint64_t queue_index;
  char resize_result;
  int64_t new_block;
  uint64_t queue_capacity;
  uint64_t *queue_array;
  uint64_t slot_index;
  uint64_t new_size;
  
  queue_index = *(uint64_t *)(queue_ptr + 0x20);
  new_size = (uint64_t)((uint)queue_index & 0x1f);
  
  // 检查是否需要分配新的块
  if ((queue_index & 0x1f) == 0) {
    slot_index = 0;
    if (*(int64_t *)(queue_ptr + 0x40) == 0) {
    need_new_block:
      // 检查队列是否有足够空间
      if ((((*(int64_t *)(queue_ptr + 0x28) - queue_index) - 0x20 < 0x8000000000000001) ||
          (((*(int64_t *)(queue_ptr + 0x80) == 0 ||
            (*(int64_t *)(queue_ptr + 0x60) == *(int64_t *)(queue_ptr + 0x68))) &&
           (resize_result = resize_event_queue(queue_ptr, *(uint64_t *)(queue_ptr + 0x60), new_size, param_4,
                                  0xfffffffffffffffe), resize_result == '\0')))) ||
         (new_block = allocate_event_block(*(uint64_t *)(queue_ptr + 0x50)), new_block == 0)) {
        return 0;
      }
      
      // 初始化新块
      do {
        *(int8_t *)(new_block + 0x110 + slot_index) = 0;
        slot_index = slot_index + 1;
      } while (slot_index != 0x20);
      
      if (*(int64_t *)(queue_ptr + 0x40) == 0) {
        *(int64_t *)(new_block + 0x100) = new_block;
      }
      else {
        *(uint64_t *)(new_block + 0x100) = *(uint64_t *)(*(int64_t *)(queue_ptr + 0x40) + 0x100);
        *(int64_t *)(*(int64_t *)(queue_ptr + 0x40) + 0x100) = new_block;
      }
      *(int64_t *)(queue_ptr + 0x40) = new_block;
      *(int64_t *)(queue_ptr + 0x60) = *(int64_t *)(queue_ptr + 0x60) + 1;
    }
    else {
      // 在现有块中查找空槽位
      uint64_t search_index = slot_index;
      do {
        if (*(char *)(*(int64_t *)(*(int64_t *)(queue_ptr + 0x40) + 0x100) + 0x110 + search_index) == '\0')
          goto need_new_block;
        search_index = search_index + 1;
      } while (search_index < 0x20);
      new_block = *(int64_t *)(*(int64_t *)(queue_ptr + 0x40) + 0x100);
      *(int64_t *)(queue_ptr + 0x40) = new_block;
      
      do {
        *(int8_t *)(new_block + 0x110 + slot_index) = 0;
        slot_index = slot_index + 1;
      } while (slot_index != 0x20);
    }
    
    // 插入事件数据
    event_data = (int64_t *)*event_data;
    **(int64_t **)(queue_ptr + 0x40) = (int64_t)event_data;
    if (event_data != (int64_t *)0x0) {
      // 调用事件回调
      (**(code **)(*event_data + 0x28))();
    }
    
    // 更新队列索引
    queue_array = (uint64_t *)
             (*(int64_t *)(queue_ptr + 0x70) * 0x10 +
             *(int64_t *)(*(int64_t *)(queue_ptr + 0x58) + 0x10));
    *queue_array = queue_index;
    queue_array[1] = *(uint64_t *)(queue_ptr + 0x40);
    *(uint64_t *)(*(int64_t *)(queue_ptr + 0x58) + 8) = *(uint64_t *)(queue_ptr + 0x70);
    *(uint64_t *)(queue_ptr + 0x70) =
         *(int64_t *)(queue_ptr + 0x68) - 1U & *(int64_t *)(queue_ptr + 0x70) + 1U;
  }
  else {
    // 直接插入到当前块
    event_data = (int64_t *)*event_data;
    *(int64_t **)(*(int64_t *)(queue_ptr + 0x40) + new_size * 8) = event_data;
    if (event_data != (int64_t *)0x0) {
      (**(code **)(*event_data + 0x28))();
    }
  }
  
  *(uint64_t *)(queue_ptr + 0x20) = queue_index + 1;
  return 1;
}

/**
 * 向事件队列添加事件的简化版本
 */
uint64_t event_queue_add_event_simple(int64_t queue_ptr, int64_t *event_data)
{
  uint64_t queue_index;
  char resize_result;
  int64_t *event_callback;
  uint64_t queue_capacity;
  uint64_t slot_index;
  uint64_t uStackX_18;
  int64_t *plStackX_20;
  
  queue_index = *(uint64_t *)(queue_ptr + 0x20);
  slot_index = (uint64_t)((uint)queue_index & 0x1f);
  
  if ((queue_index & 0x1f) != 0) {
    // 直接插入
    event_data = (int64_t *)*event_data;
    *(int64_t **)(*(int64_t *)(queue_ptr + 0x40) + slot_index * 8) = event_data;
    if (event_data != (int64_t *)0x0) {
      (**(code **)(*event_data + 0x28))();
    }
  update_index:
    *(uint64_t *)(queue_ptr + 0x20) = queue_index + 1;
    return 1;
  }
  
  // 检查是否有空间分配新块
  if (0x8000000000000000 < (*(int64_t *)(queue_ptr + 0x28) - queue_index) - 0x20) {
    resize_result = resize_event_queue_simple(queue_ptr, &uStackX_18, queue_index, slot_index, 0xfffffffffffffffe);
    if (resize_result != '\0') {
      event_callback = (int64_t *)allocate_event_block(*(uint64_t *)(queue_ptr + 0x50));
      if (event_callback != (int64_t *)0x0) {
        event_callback[0x21] = 0;
        event_data = (int64_t *)*event_data;
        *event_callback = (int64_t)event_data;
        if (event_data != (int64_t *)0x0) {
          plStackX_20 = event_callback;
          (**(code **)(*event_data + 0x28))();
        }
        *(int64_t **)(uStackX_18 + 8) = event_callback;
        *(int64_t **)(queue_ptr + 0x40) = event_callback;
        goto update_index;
      }
      event_callback = *(int64_t **)(queue_ptr + 0x60);
      event_callback[1] = *event_callback - 1U & event_callback[1] - 1U;
      *(uint64_t *)(uStackX_18 + 8) = 0;
    }
  }
  return 0;
}

/**
 * 调整事件队列大小
 * 为事件队列分配新的存储空间
 */
uint64_t resize_event_queue(int64_t queue_ptr, int64_t param_2)
{
  uint64_t *old_array;
  int64_t old_capacity;
  uint64_t capacity_flag;
  uint64_t *new_array;
  uint64_t new_capacity;
  uint64_t old_size;
  uint64_t *data_start;
  uint64_t *src_ptr;
  uint64_t copy_index;
  uint64_t *dst_ptr;
  int64_t items_copied;
  
  old_capacity = *(int64_t *)(queue_ptr + 0x68);
  *(int64_t *)(queue_ptr + 0x68) = old_capacity * 2;
  new_array = (uint64_t *)memory_allocate(system_memory_pool_ptr, old_capacity * 0x20 + 0x27, 10);
  if (new_array == (uint64_t *)0x0) {
    *(uint64_t *)(queue_ptr + 0x68) = *(uint64_t)(queue_ptr + 0x68) >> 1;
    return 0;
  }
  
  items_copied = 0;
  data_start = (uint64_t *)((uint64_t)(-(int)(new_array + 4) & 7) + (int64_t)(new_array + 4));
  
  // 复制现有数据
  if (*(int64_t *)(queue_ptr + 0x60) != 0) {
    old_size = *(int64_t *)(queue_ptr + 0x70) - *(int64_t *)(queue_ptr + 0x60) & old_capacity - 1U;
    dst_ptr = data_start;
    do {
      items_copied = items_copied + 1;
      new_capacity = old_size + 1 & old_capacity - 1U;
      old_array = (uint64_t *)(*(int64_t *)(queue_ptr + 0x78) + old_size * 0x10);
      capacity_flag = old_array[1];
      *dst_ptr = *old_array;
      dst_ptr[1] = capacity_flag;
      old_size = new_capacity;
      dst_ptr = dst_ptr + 2;
    } while (new_capacity != *(uint64_t *)(queue_ptr + 0x70));
  }
  
  // 初始化新数组
  *new_array = *(uint64_t *)(queue_ptr + 0x68);
  new_array[1] = param_2 + -1;
  new_array[2] = data_start;
  capacity_flag = *(uint64_t *)(queue_ptr + 0x80);
  new_array[3] = capacity_flag;
  *(int64_t *)(queue_ptr + 0x70) = items_copied;
  *(uint64_t **)(queue_ptr + 0x78) = data_start;
  *(uint64_t **)(queue_ptr + 0x80) = new_array;
  *(uint64_t **)(queue_ptr + 0x58) = new_array;
  return CONCAT71((int7)((uint64_t)capacity_flag >> 8), 1);
}

/**
 * 初始化线程本地存储条目
 */
uint64_t *initialize_thread_local_entry(int64_t entry_ptr)
{
  int64_t *old_entry_ptr;
  uint64_t entry_count;
  int64_t old_capacity;
  int64_t new_capacity;
  uint64_t *new_entry;
  uint64_t *new_data;
  uint64_t *new_hash_table;
  uint64_t hash_index;
  int64_t copy_index;
  uint64_t *src_ptr;
  uint64_t *dst_ptr;
  int64_t items_to_copy;
  
  old_entry_ptr = *(int64_t **)(entry_ptr + 0x60);
  if (old_entry_ptr == (int64_t *)0x0) {
    old_capacity = *(int64_t *)(entry_ptr + 0x58);
    new_capacity = old_capacity;
    items_to_copy = 0;
  }
  else {
    new_capacity = *old_entry_ptr;
    old_capacity = *(int64_t *)(entry_ptr + 0x58);
    items_to_copy = new_capacity;
  }
  
  // 分配新条目
  new_entry = (uint64_t *)memory_allocate(system_memory_pool_ptr, (old_capacity + new_capacity * 2) * 8 + 0x36, 10);
  new_data = new_entry;
  if (new_entry != (uint64_t *)0x0) {
    // 计算对齐的哈希表位置
    new_hash_table = (uint64_t *)((uint64_t)(-(int)(new_entry + 5) & 7) + (int64_t)(new_entry + 5));
    new_data = (uint64_t *)
              ((uint64_t)(-(int)(new_hash_table + new_capacity * 2) & 7) + (int64_t)(new_hash_table + new_capacity * 2));
    
    // 复制现有数据
    if (old_entry_ptr != (int64_t *)0x0) {
      entry_count = old_entry_ptr[1];
      hash_index = entry_count;
      dst_ptr = new_data;
      do {
        hash_index = *old_entry_ptr - 1U & hash_index + 1;
        *dst_ptr = *(uint64_t *)(old_entry_ptr[3] + hash_index * 8);
        dst_ptr = dst_ptr + 1;
      } while (hash_index != entry_count);
    }
    
    // 初始化新的哈希表槽位
    if (new_capacity != 0) {
      dst_ptr = new_data + items_to_copy;
      src_ptr = new_hash_table;
      do {
        *src_ptr = 1;
        *dst_ptr = src_ptr;
        dst_ptr = dst_ptr + 1;
        src_ptr = src_ptr + 2;
        new_capacity = new_capacity + -1;
      } while (new_capacity != 0);
    }
    
    // 设置新条目的字段
    new_entry[4] = old_entry_ptr;
    new_entry[2] = new_hash_table;
    new_entry[3] = new_data;
    *new_entry = *(uint64_t *)(entry_ptr + 0x58);
    new_entry[1] = *(int64_t *)(entry_ptr + 0x58) - 1U & items_to_copy - 1U;
    new_data = (uint64_t *)CONCAT71((int7)(items_to_copy - 1U >> 8), 1);
    *(uint64_t **)(entry_ptr + 0x60) = new_entry;
    *(int64_t *)(entry_ptr + 0x58) = *(int64_t)(entry_ptr + 0x58) << 1;
  }
  return new_data;
}

/**
 * 初始化哈希表结构的辅助函数
 */
uint64_t initialize_hash_table_structure(void)
{
  uint64_t table_size;
  int64_t in_RAX;
  uint64_t *new_table;
  uint64_t *new_data;
  uint64_t hash_index;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  uint64_t *in_R9;
  uint64_t *src_ptr;
  uint64_t *dst_ptr;
  
  // 计算对齐的数据区域
  new_data = (uint64_t *)((uint64_t)(-(int)in_RAX & 7) + in_RAX);
  dst_ptr = (uint64_t *)
           ((uint64_t)(-(int)(new_data + unaff_RBX * 2) & 7) + (int64_t)(new_data + unaff_RBX * 2));
  
  // 复制现有数据
  if (unaff_RDI != (int64_t *)0x0) {
    table_size = unaff_RDI[1];
    hash_index = table_size;
    src_ptr = dst_ptr;
    do {
      hash_index = *unaff_RDI - 1U & hash_index + 1;
      *src_ptr = *(uint64_t *)(unaff_RDI[3] + hash_index * 8);
      src_ptr = src_ptr + 1;
    } while (hash_index != table_size);
  }
  
  // 初始化新的哈希表槽位
  if (unaff_RBX != 0) {
    src_ptr = dst_ptr + unaff_RBP;
    new_table = new_data;
    do {
      *new_table = 1;
      *src_ptr = new_table;
      src_ptr = src_ptr + 1;
      new_table = new_table + 2;
      unaff_RBX = unaff_RBX + -1;
    } while (unaff_RBX != 0);
  }
  
  // 设置哈希表结构
  in_R9[4] = unaff_RDI;
  in_R9[2] = new_data;
  in_R9[3] = dst_ptr;
  *in_R9 = *(uint64_t *)(unaff_RSI + 0x58);
  in_R9[1] = *(int64_t *)(unaff_RSI + 0x58) - 1U & unaff_RBP - 1U;
  *(uint64_t **)(unaff_RSI + 0x60) = in_R9;
  *(int64_t *)(unaff_RSI + 0x58) = *(int64_t)(unaff_RSI + 0x58) << 1;
  return CONCAT71((int7)(unaff_RBP - 1U >> 8), 1);
}

// 外部函数声明
extern void *memory_allocate(void *, size_t, int, ...);
extern void memory_deallocate(void);
extern void LOCK(void);
extern void UNLOCK(void);
extern uint GetCurrentThreadId(void);
extern void memmove(void *, const void *, size_t);
extern int64_t allocate_thread_local_value(void);
extern void initialize_thread_local_entry_extended(uint64_t *, int64_t);
extern int64_t allocate_event_block(uint64_t);
extern char resize_event_queue_simple(int64_t, uint64_t *, uint64_t, uint64_t, uint64_t);