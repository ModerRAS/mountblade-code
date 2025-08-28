#include "TaleWorlds.Native.Split.h"

// 01_initialization_part036.c - 初始化模块第36部分
// 本文件包含文件系统、I/O完成端口和内存管理相关的初始化函数

// 函数: 创建文件句柄并关联到I/O完成端口
void create_file_handle_with_completion_port(longlong engine_context, longlong file_params)

{
  int lock_result;
  longlong file_handle;
  longlong completion_port;
  char *file_path;
  undefined8 *file_entry;
  ulonglong hash_value;
  uint char_index;
  undefined1 stack_buffer [32];
  ulonglong access_flags;
  undefined4 share_mode;
  undefined8 creation_disposition;
  longlong mutex_address;
  undefined8 stack_guard;
  longlong hash_params [4];
  undefined *temp_ptr1;
  undefined *temp_ptr2;
  ulonglong security_cookie;
  ulonglong file_count;
  
  // 初始化栈保护和安全cookie
  stack_guard = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  initialize_string_helper(&temp_ptr1);
  
  // 获取文件路径
  file_path = &DAT_18098bc73;  // 默认路径
  if (temp_ptr2 != (undefined *)0x0) {
    file_path = temp_ptr2;  // 使用自定义路径
  }
  
  // 计算文件路径哈希值
  hash_value = 0;
  creation_disposition = 0;
  share_mode = 0x60000001;
  access_flags = CONCAT44(access_flags._4_4_,3);
  
  // 创建文件句柄
  file_handle = CreateFileA(file_path, 0x80000000, 1, 0);  // GENERIC_READ, FILE_SHARE_READ
  if (file_handle == -1) {
    // 文件创建失败，抛出错误
    file_path = &DAT_18098bc73;
    if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
      file_path = *(undefined **)(file_params + 8);
    }
    // 错误处理：文件创建失败
    throw_file_error(_DAT_180c86928, &ERROR_FILE_CREATE_FAILED, file_path);
  }
  
  // 创建I/O完成端口
  completion_port = CreateIoCompletionPort(file_handle, *(undefined8 *)(engine_context + 0x213430), 0, 0);
  if (completion_port != *(longlong *)(engine_context + 0x213430)) {
    // I/O完成端口创建失败
    file_path = &DAT_18098bc73;
    if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
      file_path = *(undefined **)(file_params + 8);
    }
    // 错误处理：I/O完成端口创建失败
    throw_file_error(_DAT_180c86928, &ERROR_COMPLETION_PORT_FAILED, file_path);
  }
  
  // 获取文件表互斥锁
  mutex_address = engine_context + 0x2133e0;
  lock_result = _Mtx_lock(mutex_address);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 查找或创建文件表项
  file_entry = *(undefined8 **)(engine_context + 0x2133d8);
  if (file_entry == (undefined8 *)0x0) {
    file_count = *(ulonglong *)(engine_context + 0x2133d0);
    if (0xff < file_count) {
      // 文件表已满，需要扩展
      lock_result = _Mtx_unlock(mutex_address);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      
      // 准备错误信息
      _DAT_00000018 = *(undefined4 *)(file_params + 0x10);
      file_path = &DAT_18098bc73;
      if (*(undefined **)(file_params + 8) != (undefined *)0x0) {
        file_path = *(undefined **)(file_params + 8);
      }
      
      // 复制文件路径到错误缓冲区
      strcpy_s(_DAT_00000010, 0x100, file_path);
      
      // 计算文件路径哈希值用于错误处理
      file_count = hash_value;
      if (0 < *(int *)(file_params + 0x10)) {
        do {
          hash_value = hash_value * 0x1f + (longlong)*(char *)(file_count + *(longlong *)(file_params + 8));
          char_index = (int)file_count + 1;
          file_count = (ulonglong)char_index;
        } while ((int)char_index < *(int *)(file_params + 0x10));
      }
      
      // 保存文件句柄和哈希值
      global_file_handle = file_handle;
      access_flags = hash_value;
      
      // 创建新的文件表项
      create_file_table_entry(engine_context + 0x330, hash_params, file_count, file_params);
      *(undefined8 *)(hash_params[0] + 0x118) = 0;
      temp_ptr1 = &UNK_18098bcb0;
      
      // 触发安全检查
      security_check_failed(security_cookie ^ (ulonglong)stack_buffer);
    }
    
    // 分配新的文件表项
    file_entry = (undefined8 *)(file_count * 0x130 + engine_context + 0x2003d0);
    *(ulonglong *)(engine_context + 0x2133d0) = file_count + 1;
  }
  else {
    // 重用现有的文件表项
    *(undefined8 *)(engine_context + 0x2133d8) = *file_entry;
  }
  
  // 初始化文件表项
  memset(file_entry + 1, 0, 0x128);
}



// WARNING: 全局变量起始地址与较小符号重叠

// 函数: 分配缓冲区并读取文件数据
undefined8 allocate_buffer_and_read_file(longlong buffer_manager, longlong file_handle, longlong file_info)

{
  ulonglong buffer_count;
  char allocation_success;
  int lock_result;
  undefined8 read_result;
  ulonglong data_size;
  undefined8 *buffer_entry;
  ulonglong aligned_size;
  ulonglong base_address;
  
  // 计算文件数据的对齐地址和大小
  base_address = *(ulonglong *)(file_info + 0x118) & 0xfffffffffffff000;  // 4KB对齐
  data_size = (*(longlong *)(file_info + 0x120) - base_address) + *(ulonglong *)(file_info + 0x118);
  aligned_size = (ulonglong)(-(uint)((data_size & 0xfff) != 0) & 0x1000) + (data_size & 0xfffffffffffff000);
  
  // 获取缓冲区管理器锁
  lock_result = _Mtx_lock(buffer_manager + 0x200380);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 查找可用的缓冲区项
  buffer_entry = *(undefined8 **)(buffer_manager + 0x200378);
  if (buffer_entry == (undefined8 *)0x0) {
    buffer_count = *(ulonglong *)(buffer_manager + 0x200370);
    if (0xfff < buffer_count) {
      // 缓冲区池已满，需要分配新缓冲区
      lock_result = _Mtx_unlock(buffer_manager + 0x200380);
      if (lock_result != 0) {
        __Throw_C_error_std__YAXH_Z(lock_result);
      }
      
      // 初始化文件读取上下文
      initialize_file_read_context(0x20, file_info);
      read_buffer_offset = 0;
      read_buffer_size = 0;
      read_buffer_base = 0;
      
      // 尝试分配缓冲区
      allocation_success = allocate_read_buffer(buffer_manager, 0x20, 0x1e0, 0x1e8, 0x1f0);
      if (allocation_success == '\0') {
        // 分配失败，释放资源
        release_buffer_slot(buffer_manager + 0x370, 0);
        read_result = 0;
      }
      else {
        // 初始化读取参数
        read_context_flags = 0;
        read_context_offset = 0;
        read_context_size = 0;
        
        // 加锁保护读取操作
        LOCK();
        read_context_address = base_address;
        read_context_data_size = data_size;
        read_context_aligned_size = aligned_size;
        read_context_base_address = base_address;
        read_context_file_handle = file_handle;
        *(int *)(file_handle + 0x120) = *(int *)(file_handle + 0x120) + 1;  // 增加引用计数
        UNLOCK();
        
        // 执行文件读取
        lock_result = ReadFile(*(undefined8 *)(file_handle + 0x128), read_buffer_ptr, aligned_size & 0xffffffff, 0, 0);
        if (lock_result != 0) {
          // 读取失败
          throw_file_error(_DAT_180c86928, &ERROR_FILE_READ_FAILED);
        }
        
        // 检查错误状态
        lock_result = GetLastError();
        if (lock_result != 0x3e5) {  // ERROR_IO_PENDING
          // 读取过程中发生错误
          throw_file_error(_DAT_180c86928, &ERROR_READ_OPERATION_FAILED, lock_result);
        }
        
        read_result = 1;  // 读取成功
      }
      return read_result;
    }
    
    // 从缓冲区池中分配新项
    buffer_entry = (undefined8 *)(buffer_count * 0x200 + buffer_manager + 0x370);
    *(ulonglong *)(buffer_manager + 0x200370) = buffer_count + 1;
  }
  else {
    // 重用现有的缓冲区项
    *(undefined8 *)(buffer_manager + 0x200378) = *buffer_entry;
    *buffer_entry = 0;
  }
  
  // 初始化缓冲区
  memset(buffer_entry, 0, 0x200);
}



// 函数: 复制文件信息结构
longlong copy_file_info_structure(longlong dest_info, longlong src_info)

{
  longlong callback_ptr1;
  code *callback_func;
  undefined *file_path;
  
  // 复制基本信息
  *(undefined4 *)(dest_info + 0x10) = *(undefined4 *)(src_info + 0x10);  // 文件大小
  file_path = &DAT_18098bc73;  // 默认路径
  if (*(undefined **)(src_info + 8) != (undefined *)0x0) {
    file_path = *(undefined **)(src_info + 8);  // 使用源路径
  }
  strcpy_s(*(undefined8 *)(dest_info + 8), 0x100, file_path);  // 复制文件路径
  
  // 复制文件属性
  *(undefined8 *)(dest_info + 0x118) = *(undefined8 *)(src_info + 0x118);  // 文件属性
  callback_ptr1 = dest_info + 0x148;  // 第一个回调结构地址
  
  // 复制文件偏移和句柄信息
  *(undefined8 *)(dest_info + 0x120) = *(undefined8 *)(src_info + 0x120);  // 文件偏移
  *(undefined8 *)(dest_info + 0x128) = *(undefined8 *)(src_info + 0x128);  // 文件句柄
  *(undefined8 *)(dest_info + 0x130) = *(undefined8 *)(src_info + 0x130);  // 映射句柄
  *(undefined8 *)(dest_info + 0x138) = *(undefined8 *)(src_info + 0x138);  // 视图句柄
  *(undefined1 *)(dest_info + 0x140) = *(undefined1 *)(src_info + 0x140);  // 访问标志
  
  // 处理第一个回调结构
  if (callback_ptr1 != src_info + 0x148) {
    // 调用目标的析构回调（如果有）
    if (*(code **)(dest_info + 0x158) != (code *)0x0) {
      (**(code **)(dest_info + 0x158))(callback_ptr1, 0, 0);
    }
    
    // 复制源回调函数
    callback_func = *(code **)(src_info + 0x158);
    if (callback_func != (code *)0x0) {
      (*callback_func)(callback_ptr1, src_info + 0x148, 1);  // 调用复制回调
      callback_func = *(code **)(src_info + 0x158);
    }
    
    // 设置新的回调函数
    *(code **)(dest_info + 0x158) = callback_func;
    *(undefined8 *)(dest_info + 0x160) = *(undefined8 *)(src_info + 0x160);  // 回调数据
  }
  
  // 处理第二个回调结构
  callback_ptr1 = dest_info + 0x168;
  if (callback_ptr1 != src_info + 0x168) {
    // 调用目标的析构回调（如果有）
    if (*(code **)(dest_info + 0x178) != (code *)0x0) {
      (**(code **)(dest_info + 0x178))(callback_ptr1, 0, 0);
    }
    
    // 复制源回调函数
    callback_func = *(code **)(src_info + 0x178);
    if (callback_func != (code *)0x0) {
      (*callback_func)(callback_ptr1, src_info + 0x168, 1);  // 调用复制回调
      callback_func = *(code **)(src_info + 0x178);
    }
    
    // 设置新的回调函数
    *(code **)(dest_info + 0x178) = callback_func;
    *(undefined8 *)(dest_info + 0x180) = *(undefined8 *)(src_info + 0x180);  // 回调数据
  }
  
  // 复制其他文件信息
  *(undefined8 *)(dest_info + 0x188) = *(undefined8 *)(src_info + 0x188);  // 时间戳
  *(undefined8 *)(dest_info + 400) = *(undefined8 *)(src_info + 400);     // 扩展属性
  *(undefined8 *)(dest_info + 0x198) = *(undefined8 *)(src_info + 0x198);  // 安全描述符
  *(undefined8 *)(dest_info + 0x1a0) = *(undefined8 *)(src_info + 0x1a0);  // 文件ID
  
  return dest_info;
}





// 函数: 关闭文件句柄并释放文件表项
void close_file_handle_and_release_entry(longlong engine_context, undefined8 *file_entry, undefined8 param_3, undefined8 param_4)

{
  int lock_result;
  undefined8 cleanup_flag;
  
  cleanup_flag = 0xfffffffffffffffe;  // 清理标志
  
  // 关闭文件句柄
  CloseHandle(file_entry[0x25]);
  
  // 获取文件表互斥锁
  lock_result = _Mtx_lock(engine_context + 0x2133e0);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 调用文件项的清理回调
  (**(code **)*file_entry)(file_entry, 0, param_3, param_4, cleanup_flag);
  
  // 将文件项返回到空闲链表
  *file_entry = *(undefined8 *)(engine_context + 0x2133d8);
  *(undefined8 **)(engine_context + 0x2133d8) = file_entry;
  
  // 释放互斥锁
  lock_result = _Mtx_unlock(engine_context + 0x2133e0);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  return;
}





// 函数: 清理内存池并释放所有未使用的内存块
// 功能: 遍历内存池，将所有未使用的内存块释放回空闲链表，并更新内存池的统计信息
// 参数: param_1 - 内存池管理器指针
void cleanup_memory_pool(longlong memory_pool_manager)

{
  longlong *memory_stats;
  longlong *free_list_head;
  longlong block_size;
  char has_blocks;
  longlong *current_block;
  longlong *list_end;
  longlong *next_block;
  longlong *block_info;
  
  // 查找可用的内存块
  has_blocks = find_available_memory_block(memory_pool_manager + 0x10, &block_info);
  do {
    if (has_blocks == '\0') {
      return;  // 没有更多块需要处理
    }
    
    // 获取内存池统计信息
    memory_stats = *(longlong **)(memory_pool_manager + 0x318);
    if (block_info != (longlong *)0x0) {
      // 标记块为已释放
      *(undefined1 *)(block_info + 4) = 0;
      
      // 更新内存池统计信息
      *memory_stats = *memory_stats - block_info[1];  // 减少已使用内存
      memory_stats[2] = memory_stats[2] + block_info[1];  // 增加空闲内存
      
      // 处理块链表
      next_block = (longlong *)block_info[3];
      list_end = (longlong *)memory_stats[3];
      current_block = block_info;
      
      if (next_block != list_end) {
        // 遍历链表，处理所有未使用的块
        do {
          if ((next_block == (longlong *)0x0) || ((char)next_block[4] != '\0')) break;
          
          // 重新链接块
          block_size = current_block[2];
          next_block[2] = block_size;
          if (block_size != 0) {
            *(longlong **)(block_size + 0x18) = next_block;
          }
          
          // 更新块大小信息
          next_block[1] = next_block[1] + current_block[1];
          *current_block = memory_stats[0x28005];  // 添加到空闲链表
          memory_stats[0x28005] = (longlong)current_block;
          
          list_end = (longlong *)memory_stats[3];
          memory_stats = next_block + 3;
          current_block = next_block;
          next_block = (longlong *)*memory_stats;
        } while ((longlong *)*memory_stats != list_end);
      }
      
      // 处理剩余的块
      next_block = (longlong *)current_block[2];
      while (((current_block != list_end && (next_block != (longlong *)0x0)) && ((char)next_block[4] == '\0'))) {
        block_size = next_block[2];
        current_block[2] = block_size;
        if (block_size != 0) {
          *(longlong **)(block_size + 0x18) = current_block;
        }
        current_block[1] = current_block[1] + next_block[1];
        *next_block = memory_stats[0x28005];
        memory_stats[0x28005] = (longlong)next_block;
        list_end = (longlong *)memory_stats[3];
        next_block = (longlong *)current_block[2];
      }
    }
    
    // 继续查找下一个可用块
    has_blocks = find_available_memory_block(memory_pool_manager + 0x10, &block_info);
  } while( true );
}





// 函数: 释放缓冲区槽位并将其返回到空闲链表
// 功能: 将指定的缓冲区槽位释放，并将其添加到缓冲区管理器的空闲链表中
// 参数: param_1 - 缓冲区管理器指针
//       param_2 - 要释放的缓冲区槽位指针
void release_buffer_slot(longlong buffer_manager, undefined8 *buffer_slot)

{
  int lock_result;
  
  // 获取缓冲区管理器锁
  lock_result = _Mtx_lock(buffer_manager + 0x200010);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  
  // 清理缓冲区槽位的回调结构
  cleanup_callback_structure(buffer_slot + 4);
  
  // 将槽位添加到空闲链表头部
  *buffer_slot = *(undefined8 *)(buffer_manager + 0x200008);
  *(undefined8 **)(buffer_manager + 0x200008) = buffer_slot;
  
  // 释放锁
  lock_result = _Mtx_unlock(buffer_manager + 0x200010);
  if (lock_result != 0) {
    __Throw_C_error_std__YAXH_Z(lock_result);
  }
  return;
}



// WARNING: 全局变量起始地址与较小符号重叠

// 函数: 创建文件表项并将其添加到哈希表中
// 功能: 根据给定的键值在哈希表中查找或创建文件表项
// 参数: param_1 - 文件表管理器指针
//       param_2 - 输出参数，返回创建的文件表项
//       param_3 - 保留参数
//       param_4 - 文件信息参数
//       param_5 - 哈希键值
// 返回: param_2 - 指向创建的文件表项
longlong *
create_file_table_entry(longlong file_table_manager, longlong *file_entry, undefined8 param_3, undefined8 param_4,
                        ulonglong hash_key)

{
  longlong hash_table_base;
  ulonglong hash_index;
  longlong new_entry;
  undefined8 extension_data;
  
  // 计算哈希索引
  hash_index = hash_key % (ulonglong)*(uint *)(file_table_manager + 0x10);
  
  // 在哈希表中查找现有项
  new_entry = find_file_entry_by_key(file_table_manager, 
                                     *(undefined8 *)(*(longlong *)(file_table_manager + 8) + hash_index * 8),
                                     param_4);
  
  if (new_entry == 0) {
    // 未找到现有项，创建新的文件表项
    expand_file_table_if_needed(file_table_manager + 0x20, &hash_key, 
                                *(undefined4 *)(file_table_manager + 0x10),
                                *(undefined4 *)(file_table_manager + 0x18), 1);
    
    // 分配新的文件表项内存
    new_entry = allocate_memory_block(_DAT_180c8ed18, 0x128, *(undefined1 *)(file_table_manager + 0x2c));
    
    // 初始化文件读取上下文
    initialize_file_read_context(new_entry, param_4);
    
    // 清理文件表项字段
    *(undefined8 *)(new_entry + 0x118) = 0;  // 清理扩展属性
    *(undefined8 *)(new_entry + 0x120) = 0;  // 清理时间戳
    
    // 如果有扩展数据，分配并初始化
    if ((char)hash_key != '\0') {
      extension_data = allocate_memory_block(_DAT_180c8ed18, (ulonglong)hash_key._4_4_ * 8 + 8, 8,
                                            *(undefined1 *)(file_table_manager + 0x2c));
      // WARNING: 子函数不返回
      memset(extension_data, 0, (ulonglong)hash_key._4_4_ * 8);
    }
    
    // 将新项插入哈希表
    *(undefined8 *)(new_entry + 0x120) = *(undefined8 *)(*(longlong *)(file_table_manager + 8) + hash_index * 8);
    *(longlong *)(*(longlong *)(file_table_manager + 8) + hash_index * 8) = new_entry;
    
    // 更新文件表计数
    *(longlong *)(file_table_manager + 0x18) = *(longlong *)(file_table_manager + 0x18) + 1;
    
    // 设置输出参数
    hash_table_base = *(longlong *)(file_table_manager + 8);
    *file_entry = new_entry;
    file_entry[1] = hash_table_base + hash_index * 8;
    *(undefined1 *)(file_entry + 2) = 1;  // 标记为新创建的项
  }
  else {
    // 找到现有项
    hash_table_base = *(longlong *)(file_table_manager + 8);
    *file_entry = new_entry;
    file_entry[1] = hash_table_base + hash_index * 8;
    *(undefined1 *)(file_entry + 2) = 0;  // 标记为现有项
  }
  
  return file_entry;
}



// 函数: 查找可用内存块
// 功能: 在内存池中查找可用的内存块，优先选择最小的合适块以减少内存碎片
// 参数: param_1 - 内存池管理器指针
//       param_2 - 输出参数，返回找到的内存块信息
// 返回: 1表示找到可用块，0表示未找到
undefined8 find_available_memory_block(ulonglong *memory_pool_manager, undefined8 *block_info)

{
  longlong *block_ptr;
  ulonglong *allocation_counter;
  longlong allocation_size;
  longlong block_offset;
  char has_available_block;
  bool allocation_success;
  ulonglong current_block;
  ulonglong best_block;
  ulonglong best_size;
  ulonglong current_size;
  ulonglong block_head;
  ulonglong available_count;
  ulonglong smallest_size;
  ulonglong block_address;
  
  block_head = *memory_pool_manager;
  best_block = 0;
  best_size = 0;
  current_size = 0;
  available_count = 0;
  
  // 遍历内存池，寻找最佳匹配的内存块（最多检查3个块）
  do {
    current_block = best_block;
    if (block_head == 0) break;
    
    // 计算当前块的可用大小
    current_size = *(longlong *)(block_head + 0x20) - *(longlong *)(block_head + 0x28);
    if ((ulonglong)(*(longlong *)(block_head + 0x28) - *(longlong *)(block_head + 0x20)) <
        0x8000000000000001) {
      current_size = 0;
    }
    
    smallest_size = best_size;
    if ((current_size != 0) && (available_count = available_count + 1, 
        current_block = block_head, smallest_size = current_size, current_size <= best_size)) {
      current_block = best_block;
      smallest_size = best_size;
    }
    
    block_ptr = (longlong *)(block_head + 8);
    block_head = *block_ptr - 8;
    if (*block_ptr == 0) {
      block_head = 0;
    }
    best_block = current_block;
    best_size = smallest_size;
  } while (available_count < 3);
  
  if (available_count != 0) {
    // 检查最佳候选块是否可用
    has_available_block = check_memory_block_availability(current_block, block_info);
    if (has_available_block != '\0') {
      return 1;  // 找到可用块
    }
    
    // 如果最佳块不可用，继续搜索其他块
    block_head = *memory_pool_manager;
    while (block_head != 0) {
      if (block_head != current_block) {
        block_offset = *(longlong *)(block_head + 0x38);
        if (*(char *)(block_head + 0x48) == '\0') {
          // 处理普通内存块
          if ((ulonglong)((*(longlong *)(block_head + 0x30) - block_offset) - 
              *(longlong *)(block_head + 0x20)) < 0x8000000000000001) goto allocation_failed;
          
          // 尝试分配内存
          LOCK();
          block_ptr = (longlong *)(block_head + 0x30);
          allocation_size = *block_ptr;
          *block_ptr = *block_ptr + 1;
          UNLOCK();
          
          if ((ulonglong)((allocation_size - *(longlong *)(block_head + 0x20)) - block_offset) < 
              0x8000000000000001) goto increment_counter;
          
          // 分配位图内存
          LOCK();
          allocation_counter = (ulonglong *)(block_head + 0x28);
          block_address = *allocation_counter;
          *allocation_counter = *allocation_counter + 1;
          UNLOCK();
          
          block_ptr = *(longlong **)(block_head + 0x60);
          allocation_size = *(longlong *)
                   (block_ptr[3] +
                   (((block_address & 0xffffffffffffffe0) - **(longlong **)(block_ptr[3] + block_ptr[1] * 8) >> 5)
                    + block_ptr[1] & *block_ptr - 1U) * 8);
          block_offset = *(longlong *)(allocation_size + 8);
          *block_info = *(undefined8 *)(block_offset + (ulonglong)((uint)block_address & 0x1f) * 8);
          
          // 更新位图引用计数
          LOCK();
          block_ptr = (longlong *)(block_offset + 0x108);
          block_offset = *block_ptr;
          *block_ptr = *block_ptr + 1;
          UNLOCK();
          
          if (block_offset == 0x1f) {
            *(undefined8 *)(allocation_size + 8) = 0;
            release_bitmap_memory(*(undefined8 *)(block_head + 0x50));
          }
          allocation_success = true;
        }
        else {
          // 处理大内存块
          if (0x8000000000000000 <
              (ulonglong)((*(longlong *)(block_head + 0x30) - block_offset) - 
              *(longlong *)(block_head + 0x20))) {
            
            LOCK();
            block_ptr = (longlong *)(block_head + 0x30);
            allocation_size = *block_ptr;
            *block_ptr = *block_ptr + 1;
            UNLOCK();
            
            if (0x8000000000000000 < (ulonglong)((allocation_size - *(longlong *)(block_head + 0x20)) - block_offset)) {
              LOCK();
              allocation_counter = (ulonglong *)(block_head + 0x28);
              block_address = *allocation_counter;
              *allocation_counter = *allocation_counter + 1;
              UNLOCK();
              
              block_ptr = *(longlong **)(block_head + 0x58);
              current_size = (ulonglong)((uint)block_address & 0x1f);
              allocation_size = *(longlong *)
                       (block_ptr[2] + 8 +
                       (((block_address & 0xffffffffffffffe0) - *(longlong *)(block_ptr[2] + block_ptr[1] * 0x10)
                        >> 5) + block_ptr[1] & *block_ptr - 1U) * 0x10);
              *block_info = *(undefined8 *)(allocation_size + current_size * 8);
              *(undefined1 *)((allocation_size - current_size) + 0x12f) = 1;
              allocation_success = true;
              goto allocation_succeeded;
            }
increment_counter:
            LOCK();
            *(longlong *)(block_head + 0x38) = *(longlong *)(block_head + 0x38) + 1;
            UNLOCK();
          }
allocation_failed:
          allocation_success = false;
        }
allocation_succeeded:
        if (allocation_success) {
          return 1;  // 分配成功
        }
      }
      
      // 移动到下一个块
      block_ptr = (longlong *)(block_head + 8);
      block_head = *block_ptr - 8;
      if (*block_ptr == 0) {
        block_head = 0;
      }
    }
  }
  return 0;  // 未找到可用块
}



// 函数: 检查内存块可用性并尝试分配
// 功能: 检查指定的内存块是否可用，如果可用则进行分配操作
// 参数: param_1 - 内存块指针
//       param_2 - 输出参数，返回分配的内存地址
// 返回: 1表示分配成功，0表示分配失败
undefined8 check_memory_block_availability(longlong memory_block, undefined8 *allocated_address)

{
  longlong *allocation_ptr;
  ulonglong *allocation_counter;
  longlong allocation_size;
  ulonglong allocation_index;
  longlong bitmap_base;
  ulonglong bit_index;
  
  if (*(char *)(memory_block + 0x48) == '\0') {
    // 处理普通内存块
    if ((ulonglong)
        ((*(longlong *)(memory_block + 0x30) - *(longlong *)(memory_block + 0x38)) -
        *(longlong *)(memory_block + 0x20)) < 0x8000000000000001) {
      return 0;  // 内存块已满
    }
    
    // 增加分配计数器
    LOCK();
    allocation_ptr = (longlong *)(memory_block + 0x30);
    allocation_size = *allocation_ptr;
    *allocation_ptr = *allocation_ptr + 1;
    UNLOCK();
    
    if (0x8000000000000000 <
        (ulonglong)((allocation_size - *(longlong *)(memory_block + 0x20)) - *(longlong *)(memory_block + 0x38))) {
      // 分配位图索引
      LOCK();
      allocation_counter = (ulonglong *)(memory_block + 0x28);
      allocation_index = *allocation_counter;
      *allocation_counter = *allocation_counter + 1;
      UNLOCK();
      
      // 计算位图位置
      allocation_ptr = *(longlong **)(memory_block + 0x60);
      bitmap_base = *(longlong *)
               (allocation_ptr[3] +
               (((allocation_index & 0xffffffffffffffe0) - **(longlong **)(allocation_ptr[3] + allocation_ptr[1] * 8) >> 5) +
                allocation_ptr[1] & *allocation_ptr - 1U) * 8);
      allocation_size = *(longlong *)(bitmap_base + 8);
      *allocated_address = *(undefined8 *)(allocation_size + (ulonglong)((uint)allocation_index & 0x1f) * 8);
      
      // 更新位图引用计数
      LOCK();
      allocation_ptr = (longlong *)(allocation_size + 0x108);
      allocation_size = *allocation_ptr;
      *allocation_ptr = *allocation_ptr + 1;
      UNLOCK();
      
      if (allocation_size == 0x1f) {
        *(undefined8 *)(bitmap_base + 8) = 0;
        release_bitmap_memory(*(undefined8 *)(memory_block + 0x50));
      }
      return 1;  // 分配成功
    }
  }
  else {
    // 处理大内存块
    if ((ulonglong)
        ((*(longlong *)(memory_block + 0x30) - *(longlong *)(memory_block + 0x38)) -
        *(longlong *)(memory_block + 0x20)) < 0x8000000000000001) {
      return 0;  // 内存块已满
    }
    
    // 增加分配计数器
    LOCK();
    allocation_ptr = (longlong *)(memory_block + 0x30);
    allocation_size = *allocation_ptr;
    *allocation_ptr = *allocation_ptr + 1;
    UNLOCK();
    
    if (0x8000000000000000 <
        (ulonglong)((allocation_size - *(longlong *)(memory_block + 0x20)) - *(longlong *)(memory_block + 0x38))) {
      // 分配大内存块索引
      LOCK();
      allocation_counter = (ulonglong *)(memory_block + 0x28);
      allocation_index = *allocation_counter;
      *allocation_counter = *allocation_counter + 1;
      UNLOCK();
      
      // 计算大内存块位置
      allocation_ptr = *(longlong **)(memory_block + 0x58);
      bit_index = (ulonglong)((uint)allocation_index & 0x1f);
      allocation_size = *(longlong *)
               (allocation_ptr[2] + 8 +
               (((allocation_index & 0xffffffffffffffe0) - *(longlong *)(allocation_ptr[2] + allocation_ptr[1] * 0x10) >> 5) +
                allocation_ptr[1] & *allocation_ptr - 1U) * 0x10);
      *allocated_address = *(undefined8 *)(allocation_size + bit_index * 8);
      *(undefined1 *)((allocation_size - bit_index) + 0x12f) = 1;
      return 1;  // 分配成功
    }
  }
  
  // 内存块已满，增加失败计数器
  LOCK();
  *(longlong *)(memory_block + 0x38) = *(longlong *)(memory_block + 0x38) + 1;
  UNLOCK();
  return 0;  // 分配失败
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 内存管理操作
// 功能: 根据操作类型执行不同的内存管理任务，包括释放、复制和移动内存块
// 参数: param_1 - 目标内存块指针
//       param_2 - 源内存块指针
//       param_3 - 操作类型 (0=释放, 1=复制构造, 2=移动, 3=获取, 4=引用)
//       param_4 - 清理标志
// 返回: 操作结果或内存块指针
longlong memory_management_operation(longlong *target_block, longlong *source_block, int operation_type, undefined8 cleanup_flag)

{
  longlong result;
  longlong source_value;
  code *callback_func;
  
  if (operation_type == 3) {
    result = 0x180bfd400;  // 返回默认内存管理器
  }
  else if (operation_type == 4) {
    result = *target_block;  // 返回当前块
  }
  else {
    if (operation_type == 0) {
      // 释放内存块
      result = *target_block;
      if (result != 0) {
        if (*(code **)(result + 0x10) != (code *)0x0) {
          // 调用析构回调
          (**(code **)(result + 0x10))(result, 0, 0, cleanup_flag, 0xfffffffffffffffe);
        }
        // WARNING: 子函数不返回
        deallocate_memory_block(result);
      }
    }
    else {
      if (operation_type == 1) {
        // 复制构造内存块
        result = allocate_memory_block(_DAT_180c8ed18, 0x20, 8, DAT_180bf65bc);
        source_value = *source_block;
        *(undefined8 *)(result + 0x10) = 0;
        *(code **)(result + 0x18) = _guard_check_icall;
        if (result != source_value) {
          callback_func = *(code **)(source_value + 0x10);
          if (callback_func != (code *)0x0) {
            // 调用复制回调
            (*callback_func)(result, source_value, 1);
            callback_func = *(code **)(source_value + 0x10);
          }
          *(code **)(result + 0x10) = callback_func;
          *(undefined8 *)(result + 0x18) = *(undefined8 *)(source_value + 0x18);
        }
        *target_block = result;
        return 0;
      }
      if (operation_type == 2) {
        // 移动内存块
        *target_block = *source_block;
        *source_block = 0;
        return 0;
      }
    }
    result = 0;
  }
  return result;
}



// 函数: 初始化文件读取上下文
// 功能: 为文件读取操作初始化上下文结构，设置文件路径和基本信息
// 参数: param_1 - 文件读取上下文指针
//       param_2 - 文件信息指针
//       param_3 - 保留参数
//       param_4 - 保留参数
// 返回: 初始化后的文件读取上下文指针
undefined8 *
initialize_file_read_context(undefined8 *file_context, longlong file_info, undefined8 param_3, undefined8 param_4)

{
  undefined *file_path;
  
  // 初始化基本字段
  *file_context = &UNK_18098bcb0;  // 设置默认路径
  file_context[1] = 0;               // 清理偏移量
  *(undefined4 *)(file_context + 2) = 0;  // 清理大小
  
  *file_context = &UNK_1809feda8;  // 设置路径缓冲区
  file_context[1] = file_context + 3;  // 设置路径指针
  *(undefined4 *)(file_context + 2) = 0;  // 清理路径长度
  *(undefined1 *)(file_context + 3) = 0;  // 路径终止符
  
  // 复制文件大小
  *(undefined4 *)(file_context + 2) = *(undefined4 *)(file_info + 0x10);
  
  // 复制文件路径
  file_path = &DAT_18098bc73;  // 默认路径
  if (*(undefined **)(file_info + 8) != (undefined *)0x0) {
    file_path = *(undefined **)(file_info + 8);  // 使用指定路径
  }
  strcpy_s(file_context[1], 0x100, file_path, param_4, 0xfffffffffffffffe);
  
  return file_context;
}



// 函数: 初始化内存管理器
// 功能: 初始化内存管理器的各个字段，包括回调函数和安全检查
// 参数: param_1 - 内存管理器指针
// 返回: 初始化后的内存管理器指针
undefined8 * initialize_memory_manager(undefined8 *memory_manager)

{
  // 初始化基本字段
  *memory_manager = &UNK_18098bcb0;  // 设置默认值
  memory_manager[1] = 0;               // 清理计数器
  *(undefined4 *)(memory_manager + 2) = 0;  // 清理标志
  
  *memory_manager = &UNK_1809feda8;  // 设置数据缓冲区
  memory_manager[1] = memory_manager + 3;  // 设置数据指针
  *(undefined4 *)(memory_manager + 2) = 0;  // 清理数据长度
  *(undefined1 *)(memory_manager + 3) = 0;  // 数据终止符
  
  // 初始化回调函数和安全检查
  memory_manager[0x2b] = 0;           // 清理回调1
  memory_manager[0x2c] = _guard_check_icall;  // 设置安全检查
  memory_manager[0x2f] = 0;           // 清理回调2
  memory_manager[0x30] = _guard_check_icall;  // 设置安全检查
  
  // 初始化引用计数和大小限制
  memory_manager[0x27] = 0xffffffffffffffff;  // 最大引用计数
  memory_manager[0x24] = 0xffffffffffffffff;  // 最大大小
  memory_manager[0x23] = 0xffffffffffffffff;  // 最大块数
  memory_manager[0x25] = 0;           // 当前引用计数
  memory_manager[0x26] = 0;           // 当前大小
  *(undefined1 *)(memory_manager + 0x28) = 0;  // 当前块数
  
  return memory_manager;
}





// 函数: 复制回调函数
// 功能: 将源对象的回调函数复制到目标对象，并执行回调操作
// 参数: param_1 - 目标对象指针
//       param_2 - 源对象指针
void copy_callback_functions(longlong target_object, longlong source_object)

{
  code *callback_func;
  
  // 获取源对象的回调函数
  callback_func = *(code **)(source_object + 0x10);
  if (callback_func != (code *)0x0) {
    // 执行回调操作（类型2）
    (*callback_func)(target_object, source_object, 2);
    callback_func = *(code **)(source_object + 0x10);
  }
  
  // 复制回调函数和数据
  *(code **)(target_object + 0x10) = callback_func;
  *(undefined8 *)(target_object + 0x18) = *(undefined8 *)(source_object + 0x18);
  
  // 清理源对象的回调函数
  *(code **)(source_object + 0x18) = _guard_check_icall;
  *(undefined8 *)(source_object + 0x10) = 0;
  return;
}



// 函数: 释放文件信息
// 功能: 释放文件信息结构，根据标志决定是否实际释放内存
// 参数: param_1 - 文件信息指针
//       param_2 - 释放标志（位0表示是否释放内存）
//       param_3 - 保留参数
//       param_4 - 保留参数
// 返回: 文件信息指针
longlong release_file_info(longlong file_info, ulonglong release_flags, undefined8 param_3, undefined8 param_4)

{
  // 设置默认文件路径
  *(undefined **)(file_info + 8) = &UNK_18098bcb0;
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(file_info, 0x128, param_3, param_4, 0xfffffffffffffffe);
  }
  return file_info;
}



// 函数: 释放内存块
// 功能: 释放内存块，根据标志决定是否实际释放内存
// 参数: param_1 - 内存块指针
//       param_2 - 释放标志（位0表示是否释放内存）
//       param_3 - 保留参数
//       param_4 - 保留参数
// 返回: 内存块指针
undefined8 *
release_memory_block(undefined8 *memory_block, ulonglong release_flags, undefined8 param_3, undefined8 param_4)

{
  // 设置默认值
  *memory_block = &UNK_18098bcb0;
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(memory_block, 0x118, param_3, param_4, 0xfffffffffffffffe);
  }
  return memory_block;
}





// 函数: 复制字符串数据
// 功能: 安全地复制字符串数据到目标缓冲区，并确保字符串正确终止
// 参数: param_1 - 目标字符串结构指针
//       param_2 - 源字符串数据
//       param_3 - 要复制的字符数
void copy_string_data(longlong target_string, undefined8 source_data, int copy_length)

{
  // 检查缓冲区大小是否足够
  if (copy_length + 1 < 0x100) {
    // WARNING: 子函数不返回
    memcpy(*(undefined1 **)(target_string + 8), source_data, (longlong)copy_length);
  }
  // 确保字符串正确终止
  **(undefined1 **)(target_string + 8) = 0;
  *(undefined4 *)(target_string + 0x10) = 0;
  return;
}





// 函数: 内存复制操作
// 功能: 执行内存复制操作（简化实现）
// 注意: 这是一个简化实现，原始实现可能包含更多参数和错误处理
void memory_copy_operation(void)

{
  // WARNING: 子函数不返回
  memcpy();
}





// 函数: 重置字符串
// 功能: 重置字符串结构，清空字符串内容并重置长度
// 参数: param_1 - 字符串结构指针
void reset_string(undefined1 *string_struct)

{
  longlong string_base;
  
  // 清空字符串内容
  *string_struct = 0;
  // 重置字符串长度
  *(undefined4 *)(string_base + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 字符串搜索和替换
// 功能: 在字符串中搜索子字符串并进行替换操作
// 参数: param_1 - 目标字符串结构指针
//       param_2 - 搜索字符串指针
//       param_3 - 替换字符串指针
// 注意: 这是一个简化实现，原始实现可能包含更复杂的搜索替换逻辑
void string_search_and_replace(longlong target_string, longlong search_string, longlong replace_string)

{
  longlong search_pos;
  longlong search_len;
  longlong replace_len;
  undefined1 stack_buffer [32];
  undefined8 stack_guard;
  undefined *temp_ptr;
  undefined1 *result_buffer;
  undefined4 result_len;
  undefined1 work_buffer [264];
  ulonglong security_cookie;
  
  // 初始化栈保护
  stack_guard = 0xfffffffffffffffe;
  security_cookie = _DAT_180bf00a8 ^ (ulonglong)stack_buffer;
  temp_ptr = &UNK_1809feda8;
  result_buffer = work_buffer;
  result_len = 0;
  work_buffer[0] = 0;
  
  // 搜索目标字符串中的子字符串
  search_pos = strstr(*(undefined8 *)(target_string + 8));
  if (search_pos != 0) {
    // 计算搜索字符串长度
    search_len = -1;
    replace_len = -1;
    do {
      search_len = search_len + 1;
    } while (*(char *)(search_string + search_len) != '\0');
    
    // 计算替换字符串长度
    do {
      replace_len = replace_len + 1;
    } while (*(char *)(replace_len + replace_string) != '\0');
    
    // WARNING: 子函数不返回
    // 复制搜索位置之前的内容
    memcpy(result_buffer, *(longlong *)(target_string + 8), search_pos - *(longlong *)(target_string + 8));
  }
  
  temp_ptr = &UNK_18098bcb0;
  // WARNING: 子函数不返回
  // 执行安全检查
  perform_security_check(security_cookie ^ (ulonglong)stack_buffer);
}





// 函数: 设置字符串值
// 功能: 为字符串结构设置新的字符串值，处理长度限制和缓冲区大小
// 参数: param_1 - 目标字符串结构指针
//       param_2 - 源字符串指针
void set_string_value(longlong target_string, longlong source_string)

{
  longlong string_length;
  
  if (source_string == 0) {
    // 清空字符串
    *(undefined4 *)(target_string + 0x10) = 0;
    **(undefined1 **)(target_string + 8) = 0;
    return;
  }
  
  // 计算源字符串长度
  string_length = -1;
  do {
    string_length = string_length + 1;
  } while (*(char *)(source_string + string_length) != '\0');
  
  if ((int)string_length < 0x100) {
    // 字符串长度在限制范围内
    *(int *)(target_string + 0x10) = (int)string_length;
    // WARNING: 无法恢复跳转表，分支过多
    // WARNING: 将间接跳转视为调用
    strcpy_s(*(undefined8 *)(target_string + 8), 0x100);
    return;
  }
  
  // 字符串过长，处理错误情况
  handle_string_too_long_error(&UNK_18098bc48, 0x100, source_string);
  *(undefined4 *)(target_string + 0x10) = 0;
  **(undefined1 **)(target_string + 8) = 0;
  return;
}



// 函数: 释放文件表项
// 功能: 释放文件表项，根据标志决定是否实际释放内存
// 参数: param_1 - 文件表项指针
//       param_2 - 释放标志（位0表示是否释放内存）
//       param_3 - 保留参数
//       param_4 - 保留参数
// 返回: 文件表项指针
longlong release_file_table_entry(longlong file_entry, ulonglong release_flags, undefined8 param_3, undefined8 param_4)

{
  // 设置默认文件路径
  *(undefined **)(file_entry + 8) = &UNK_18098bcb0;
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(file_entry, 0x130, param_3, param_4, 0xfffffffffffffffe);
  }
  return file_entry;
}





// 函数: void FUN_180069530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_180069530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((code *)param_1[0x2f] != (code *)0x0) {
    (*(code *)param_1[0x2f])(param_1 + 0x2d,0,0,param_4,0xfffffffffffffffe);
  }
  if ((code *)param_1[0x2b] != (code *)0x0) {
    (*(code *)param_1[0x2b])(param_1 + 0x29,0,0);
  }
  *param_1 = &UNK_18098bcb0;
  return;
}





// 函数: 重置文件信息
// 功能: 重置文件信息结构，设置默认文件路径
// 参数: param_1 - 文件信息指针
void reset_file_info(longlong file_info)

{
  // 设置默认文件路径
  *(undefined **)(file_info + 8) = &UNK_18098bcb0;
  return;
}



// 函数: 释放内存管理器
// 功能: 释放内存管理器，根据标志决定是否实际释放内存
// 参数: param_1 - 内存管理器指针
//       param_2 - 释放标志（位0表示是否释放内存）
//       param_3 - 保留参数
//       param_4 - 保留参数
// 返回: 内存管理器指针
undefined8 *
release_memory_manager(undefined8 *memory_manager, ulonglong release_flags, undefined8 param_3, undefined8 param_4)

{
  // 重置内存管理器的各个字段
  *memory_manager = &UNK_18098bdc8;
  *memory_manager = &UNK_180a21720;
  *memory_manager = &UNK_180a21690;
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(memory_manager, 0x30, param_3, param_4, 0xfffffffffffffffe);
  }
  return memory_manager;
}



// 函数: 释放字符串缓冲区
// 功能: 释放字符串缓冲区，根据标志决定是否实际释放内存
// 参数: param_1 - 字符串缓冲区指针
//       param_2 - 释放标志（位0表示是否释放内存）
// 返回: 字符串缓冲区指针
undefined8 * release_string_buffer(undefined8 *string_buffer, ulonglong release_flags)

{
  // 重置字符串缓冲区
  *string_buffer = &UNK_1809feeb8;
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(string_buffer, 0x58);
  }
  return string_buffer;
}



// 函数: 释放扩展属性
// 功能: 释放扩展属性结构，根据标志决定是否实际释放内存
// 参数: param_1 - 扩展属性指针
//       param_2 - 释放标志（位0表示是否释放内存）
// 返回: 扩展属性指针
undefined8 release_extended_attributes(undefined8 extended_attr, ulonglong release_flags)

{
  // 执行清理操作
  cleanup_extended_attributes();
  
  // 根据标志决定是否释放内存
  if ((release_flags & 1) != 0) {
    free(extended_attr, 0x68);
  }
  return extended_attr;
}





