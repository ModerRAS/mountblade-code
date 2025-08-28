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



undefined8 FUN_180068a90(ulonglong *param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  bool bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  
  uVar11 = *param_1;
  uVar10 = 0;
  uVar8 = uVar10;
  uVar12 = uVar10;
  uVar14 = uVar10;
  do {
    uVar9 = uVar8;
    if (uVar11 == 0) break;
    uVar7 = *(longlong *)(uVar11 + 0x20) - *(longlong *)(uVar11 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar11 + 0x28) - *(longlong *)(uVar11 + 0x20)) <
        0x8000000000000001) {
      uVar7 = uVar10;
    }
    uVar13 = uVar12;
    if ((uVar7 != 0) && (uVar14 = uVar14 + 1, uVar9 = uVar11, uVar13 = uVar7, uVar7 <= uVar12)) {
      uVar9 = uVar8;
      uVar13 = uVar12;
    }
    plVar1 = (longlong *)(uVar11 + 8);
    uVar11 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar11 = uVar10;
    }
    uVar8 = uVar9;
    uVar12 = uVar13;
  } while (uVar14 < 3);
  if (uVar14 != 0) {
    cVar5 = FUN_180068ce0(uVar9,param_2);
    if (cVar5 != '\0') {
      return 1;
    }
    uVar11 = *param_1;
    while (uVar11 != 0) {
      if (uVar11 != uVar9) {
        lVar4 = *(longlong *)(uVar11 + 0x38);
        if (*(char *)(uVar11 + 0x48) == '\0') {
          if ((ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20)) <
              0x8000000000000001) goto LAB_180068c92;
          LOCK();
          plVar1 = (longlong *)(uVar11 + 0x30);
          lVar3 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if ((ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4) < 0x8000000000000001)
          goto LAB_180068c87;
          LOCK();
          puVar2 = (ulonglong *)(uVar11 + 0x28);
          uVar8 = *puVar2;
          *puVar2 = *puVar2 + 1;
          UNLOCK();
          plVar1 = *(longlong **)(uVar11 + 0x60);
          lVar3 = *(longlong *)
                   (plVar1[3] +
                   (((uVar8 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5)
                    + plVar1[1] & *plVar1 - 1U) * 8);
          lVar4 = *(longlong *)(lVar3 + 8);
          *param_2 = *(undefined8 *)(lVar4 + (ulonglong)((uint)uVar8 & 0x1f) * 8);
          LOCK();
          plVar1 = (longlong *)(lVar4 + 0x108);
          lVar4 = *plVar1;
          *plVar1 = *plVar1 + 1;
          UNLOCK();
          if (lVar4 == 0x1f) {
            *(undefined8 *)(lVar3 + 8) = 0;
            func_0x000180060c10(*(undefined8 *)(uVar11 + 0x50));
          }
          bVar6 = true;
        }
        else {
          if (0x8000000000000000 <
              (ulonglong)((*(longlong *)(uVar11 + 0x30) - lVar4) - *(longlong *)(uVar11 + 0x20))) {
            LOCK();
            plVar1 = (longlong *)(uVar11 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            if (0x8000000000000000 < (ulonglong)((lVar3 - *(longlong *)(uVar11 + 0x20)) - lVar4)) {
              LOCK();
              puVar2 = (ulonglong *)(uVar11 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              plVar1 = *(longlong **)(uVar11 + 0x58);
              uVar12 = (ulonglong)((uint)uVar8 & 0x1f);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              *param_2 = *(undefined8 *)(lVar4 + uVar12 * 8);
              *(undefined1 *)((lVar4 - uVar12) + 0x12f) = 1;
              bVar6 = true;
              goto LAB_180068c94;
            }
LAB_180068c87:
            LOCK();
            *(longlong *)(uVar11 + 0x38) = *(longlong *)(uVar11 + 0x38) + 1;
            UNLOCK();
          }
LAB_180068c92:
          bVar6 = false;
        }
LAB_180068c94:
        if (bVar6) {
          return 1;
        }
      }
      plVar1 = (longlong *)(uVar11 + 8);
      uVar11 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar11 = uVar10;
      }
    }
  }
  return 0;
}



undefined8 FUN_180068ce0(longlong param_1,undefined8 *param_2)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x60);
      lVar5 = *(longlong *)
               (plVar1[3] +
               (((uVar4 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 8);
      lVar3 = *(longlong *)(lVar5 + 8);
      *param_2 = *(undefined8 *)(lVar3 + (ulonglong)((uint)uVar4 & 0x1f) * 8);
      LOCK();
      plVar1 = (longlong *)(lVar3 + 0x108);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      if (lVar3 == 0x1f) {
        *(undefined8 *)(lVar5 + 8) = 0;
        func_0x000180060c10(*(undefined8 *)(param_1 + 0x50));
      }
      return 1;
    }
  }
  else {
    if ((ulonglong)
        ((*(longlong *)(param_1 + 0x30) - *(longlong *)(param_1 + 0x38)) -
        *(longlong *)(param_1 + 0x20)) < 0x8000000000000001) {
      return 0;
    }
    LOCK();
    plVar1 = (longlong *)(param_1 + 0x30);
    lVar3 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    if (0x8000000000000000 <
        (ulonglong)((lVar3 - *(longlong *)(param_1 + 0x20)) - *(longlong *)(param_1 + 0x38))) {
      LOCK();
      puVar2 = (ulonglong *)(param_1 + 0x28);
      uVar4 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      plVar1 = *(longlong **)(param_1 + 0x58);
      uVar6 = (ulonglong)((uint)uVar4 & 0x1f);
      lVar3 = *(longlong *)
               (plVar1[2] + 8 +
               (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10) >> 5) +
                plVar1[1] & *plVar1 - 1U) * 0x10);
      *param_2 = *(undefined8 *)(lVar3 + uVar6 * 8);
      *(undefined1 *)((lVar3 - uVar6) + 0x12f) = 1;
      return 1;
    }
  }
  LOCK();
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + 1;
  UNLOCK();
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

longlong FUN_180068ec0(longlong *param_1,longlong *param_2,int param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  
  if (param_3 == 3) {
    lVar2 = 0x180bfd400;
  }
  else if (param_3 == 4) {
    lVar2 = *param_1;
  }
  else {
    if (param_3 == 0) {
      lVar2 = *param_1;
      if (lVar2 != 0) {
        if (*(code **)(lVar2 + 0x10) != (code *)0x0) {
          (**(code **)(lVar2 + 0x10))(lVar2,0,0,param_4,0xfffffffffffffffe);
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar2);
      }
    }
    else {
      if (param_3 == 1) {
        lVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x20,8,DAT_180bf65bc);
        lVar2 = *param_2;
        *(undefined8 *)(lVar1 + 0x10) = 0;
        *(code **)(lVar1 + 0x18) = _guard_check_icall;
        if (lVar1 != lVar2) {
          pcVar3 = *(code **)(lVar2 + 0x10);
          if (pcVar3 != (code *)0x0) {
            (*pcVar3)(lVar1,lVar2,1);
            pcVar3 = *(code **)(lVar2 + 0x10);
          }
          *(code **)(lVar1 + 0x10) = pcVar3;
          *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar2 + 0x18);
        }
        *param_1 = lVar1;
        return 0;
      }
      if (param_3 == 2) {
        *param_1 = *param_2;
        *param_2 = 0;
        return 0;
      }
    }
    lVar2 = 0;
  }
  return lVar2;
}



undefined8 *
FUN_180068ff0(undefined8 *param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x10);
  puVar1 = &DAT_18098bc73;
  if (*(undefined **)(param_2 + 8) != (undefined *)0x0) {
    puVar1 = *(undefined **)(param_2 + 8);
  }
  strcpy_s(param_1[1],0x100,puVar1,param_4,0xfffffffffffffffe);
  return param_1;
}



undefined8 * FUN_180069070(undefined8 *param_1)

{
  *param_1 = &UNK_18098bcb0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *param_1 = &UNK_1809feda8;
  param_1[1] = param_1 + 3;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = _guard_check_icall;
  param_1[0x2f] = 0;
  param_1[0x30] = _guard_check_icall;
  param_1[0x27] = 0xffffffffffffffff;
  param_1[0x24] = 0xffffffffffffffff;
  param_1[0x23] = 0xffffffffffffffff;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  return param_1;
}





// 函数: void FUN_180069130(longlong param_1,longlong param_2)
void FUN_180069130(longlong param_1,longlong param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_2 + 0x10);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(param_1,param_2,2);
    pcVar1 = *(code **)(param_2 + 0x10);
  }
  *(code **)(param_1 + 0x10) = pcVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(code **)(param_2 + 0x18) = _guard_check_icall;
  *(undefined8 *)(param_2 + 0x10) = 0;
  return;
}



longlong FUN_180069190(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x128,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_1800691e0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x118,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}





// 函数: void FUN_180069220(longlong param_1,undefined8 param_2,int param_3)
void FUN_180069220(longlong param_1,undefined8 param_2,int param_3)

{
  if (param_3 + 1 < 0x100) {
                    // WARNING: Subroutine does not return
    memcpy(*(undefined1 **)(param_1 + 8),param_2,(longlong)param_3);
  }
  **(undefined1 **)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}





// 函数: void FUN_180069241(void)
void FUN_180069241(void)

{
                    // WARNING: Subroutine does not return
  memcpy();
}





// 函数: void FUN_180069266(undefined1 *param_1)
void FUN_180069266(undefined1 *param_1)

{
  longlong unaff_RDI;
  
  *param_1 = 0;
  *(undefined4 *)(unaff_RDI + 0x10) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180069280(longlong param_1,longlong param_2,longlong param_3)
void FUN_180069280(longlong param_1,longlong param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStack_198 [32];
  undefined8 uStack_178;
  undefined *puStack_168;
  undefined1 *puStack_160;
  undefined4 uStack_158;
  undefined1 auStack_150 [264];
  ulonglong uStack_48;
  
  uStack_178 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_198;
  puStack_168 = &UNK_1809feda8;
  puStack_160 = auStack_150;
  uStack_158 = 0;
  auStack_150[0] = 0;
  lVar1 = strstr(*(undefined8 *)(param_1 + 8));
  if (lVar1 != 0) {
    lVar2 = -1;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(lVar2 + param_3) != '\0');
                    // WARNING: Subroutine does not return
    memcpy(puStack_160,*(longlong *)(param_1 + 8),lVar1 - *(longlong *)(param_1 + 8));
  }
  puStack_168 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_198);
}





// 函数: void FUN_1800693f0(longlong param_1,longlong param_2)
void FUN_1800693f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    **(undefined1 **)(param_1 + 8) = 0;
    return;
  }
  lVar1 = -1;
  do {
    lVar1 = lVar1 + 1;
  } while (*(char *)(param_2 + lVar1) != '\0');
  if ((int)lVar1 < 0x100) {
    *(int *)(param_1 + 0x10) = (int)lVar1;
                    // WARNING: Could not recover jumptable at 0x000180069429. Too many branches
                    // WARNING: Treating indirect jump as call
    strcpy_s(*(undefined8 *)(param_1 + 8),0x100);
    return;
  }
  FUN_180626f80(&UNK_18098bc48,0x100,param_2);
  *(undefined4 *)(param_1 + 0x10) = 0;
  **(undefined1 **)(param_1 + 8) = 0;
  return;
}



longlong FUN_180069470(longlong param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  if ((param_2 & 1) != 0) {
    free(param_1,0x130,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
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





// 函数: void FUN_1800695a0(longlong param_1)
void FUN_1800695a0(longlong param_1)

{
  *(undefined **)(param_1 + 8) = &UNK_18098bcb0;
  return;
}



undefined8 *
FUN_1800696d0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x30,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 * FUN_180069720(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_1809feeb8;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}



undefined8 FUN_180069760(undefined8 param_1,ulonglong param_2)

{
  FUN_1800697a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





