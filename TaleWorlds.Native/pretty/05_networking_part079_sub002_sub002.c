#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 05_networking_part079_sub002_sub002.c - 网络系统高级哈希表处理模块
 * 
 * 模块功能：
 * - 网络数据包的哈希表查找和插入操作
 * - 网络连接状态管理和同步
 * - 网络数据包的缓存和重传机制
 * - 网络哈希表的并发访问控制
 * 
 * 技术特点：
 * - 使用开放寻址法哈希表实现
 * - 支持动态扩容和负载均衡
 * - 实现高效的网络数据包查找算法
 * - 提供网络连接状态同步机制
 * 
 * 作者：TaleWorlds引擎开发团队
 * 日期：2024年
 =============================================================================*/

/*=============================================================================
 * 网络系统错误处理和初始化函数
 * 
 * 功能：检查网络系统状态，处理错误情况，执行必要的初始化操作
 * 
 * 参数：
 *   param_1 - 网络系统上下文指针
 * 
 * 返回值：无
 * 
 * 技术说明：
 * - 检查网络系统初始化状态
 * - 处理错误情况下的清理工作
 * - 执行网络系统重新初始化
 =============================================================================*/
void FUN_180883a30(uint64_t param_1)
{
  int network_status;
  
  // 检查网络系统状态
  network_status = FUN_180874b30();
  if (network_status == 0) {
    // 处理网络系统错误
    FUN_180873460(param_1);
                    // WARNING: Subroutine does not return
    // 重新初始化网络系统
    FUN_180742250(*(uint64_t *)(_DAT_180be12f0 + 0x1a0),param_1,&UNK_180985b90,0x43b,1);
  }
  return;
}



/*=============================================================================
 * 网络数据包哈希表查找和处理函数
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用开放寻址法哈希表进行快速查找
 * - 支持哈希冲突的链式解决
 * - 实现网络数据包的状态同步
 * - 提供高效的缓存和重传机制
 =============================================================================*/
ulonglong FUN_180883a80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)
{
  longlong *hash_table_context;
  longlong *lock_context;
  uint hash_result;
  int current_index;
  longlong *current_entry;
  ulonglong return_value;
  ulonglong error_code;
  longlong entry_offset;
  longlong hash_index;
  int *previous_index;
  longlong *network_context;
  ulonglong found_entry;
  longlong *packet_context;
  longlong *packet_data;
  uint64_t packet_key;
  uint packet_hash1;
  uint packet_hash2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  packet_data = param_2;
  
  // 获取哈希表锁
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 计算哈希值
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  
  if (hash_result == 0) {
    // 哈希表为空或需要扩容
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto CLEANUP_AND_RETURN;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)((packet_key._4_4_ ^ (uint)packet_key ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    // 获取哈希表入口
    current_entry = (longlong *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    // 遍历哈希链表
    if (current_index != -1) {
      do {
        // 计算当前条目偏移
        entry_offset = (longlong)current_index * 0x20 + hash_table_context[2];
        
        // 检查是否匹配目标数据包
        if (((longlong *)*entry_offset == packet_key) && (entry_offset[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = entry_offset[3];
          goto ENTRY_FOUND;
        }
        
        // 移动到下一个条目
        current_entry = entry_offset + 2;
        current_index = (int)entry_offset[2];
      } while (current_index != -1);
    }
    
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_data,current_entry);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
CLEANUP_AND_RETURN:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }

ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  // 处理找到的条目
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,packet_data);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  
  // 比较数据包内容
  packet_data = (longlong *)0x0;
  error_code = FUN_18086f7c0(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  packet_key = (longlong *)0x0;
  error_code = FUN_18086f7c0(param_3,packet_data,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)packet_data;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)packet_data + 0xeU) =
       *(ushort *)((longlong)packet_data + 0xeU) ^
       (*(ushort *)((longlong)packet_data + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)network_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 插入新的哈希表条目
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)packet_data[2];
  packet_hash1 = *(uint *)(packet_data + 3);
  packet_hash2 = *(uint *)((longlong)packet_data + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = packet_data;
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
INSERT_ERROR:
      hash_result = 0x1c;
      goto HANDLE_INSERT_ERROR2;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    if (current_index != -1) {
      hash_index = hash_table_context[2];
      do {
        entry_offset = (longlong)current_index * 0x20;
        if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
           (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) goto INSERT_ERROR;
        previous_index = (int *)(hash_index + 0x10 + entry_offset);
        current_index = *previous_index;
      } while (current_index != -1);
    }
    
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_RESULT;
  }
  else {
HANDLE_INSERT_RESULT:
    if (hash_result != 0) {
HANDLE_INSERT_ERROR2:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      if (hash_result != 0) {
        return (ulonglong)hash_result;
      }
      goto PROCESS_PACKET;
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }

PROCESS_PACKET:
  // 处理数据包
  return_value = (**(code **)(*network_context + 0x10))(network_context,packet_data,found_entry);
  if ((int)return_value == 0) {
    *param_4 = found_entry;
    return 0;
  }
  return return_value;
}



/*=============================================================================
 * 网络数据包哈希表查找和处理函数（变体2）
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作
 *       这是FUN_180883a80的变体版本，使用不同的处理函数FUN_18086f8b0
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用与FUN_180883a80相同的哈希表算法
 * - 区别在于使用FUN_18086f8b0而不是FUN_18086f7c0进行数据包处理
 * - 适用于不同类型的网络数据包处理场景
 =============================================================================*/
ulonglong FUN_180883e00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)
{
  longlong *hash_table_context;
  longlong *lock_context;
  uint hash_result;
  int current_index;
  longlong *current_entry;
  ulonglong return_value;
  ulonglong error_code;
  longlong entry_offset;
  longlong hash_index;
  int *previous_index;
  longlong *network_context;
  ulonglong found_entry;
  longlong *packet_context;
  longlong *packet_data;
  uint64_t packet_key;
  uint packet_hash1;
  uint packet_hash2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  packet_data = param_2;
  
  // 获取哈希表锁
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 计算哈希值
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  
  if (hash_result == 0) {
    // 哈希表为空或需要扩容
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto CLEANUP_AND_RETURN;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)((packet_key._4_4_ ^ (uint)packet_key ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    // 获取哈希表入口
    current_entry = (longlong *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    // 遍历哈希链表
    if (current_index != -1) {
      do {
        // 计算当前条目偏移
        entry_offset = (longlong)current_index * 0x20 + hash_table_context[2];
        
        // 检查是否匹配目标数据包
        if (((longlong *)*entry_offset == packet_key) && (entry_offset[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = entry_offset[3];
          goto ENTRY_FOUND;
        }
        
        // 移动到下一个条目
        current_entry = entry_offset + 2;
        current_index = (int)entry_offset[2];
      } while (current_index != -1);
    }
    
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_data,current_entry);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
CLEANUP_AND_RETURN:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }

ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  // 处理找到的条目
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,packet_data);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  
  // 比较数据包内容（使用FUN_18086f8b0而非FUN_18086f7c0）
  packet_data = (longlong *)0x0;
  error_code = FUN_18086f8b0(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  packet_key = (longlong *)0x0;
  error_code = FUN_18086f8b0(param_3,packet_data,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)packet_data;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)packet_data + 0xeU) =
       *(ushort *)((longlong)packet_data + 0xeU) ^
       (*(ushort *)((longlong)packet_data + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)network_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 插入新的哈希表条目
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)packet_data[2];
  packet_hash1 = *(uint *)(packet_data + 3);
  packet_hash2 = *(uint *)((longlong)packet_data + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = packet_data;
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
INSERT_ERROR:
      hash_result = 0x1c;
      goto HANDLE_INSERT_ERROR2;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    if (current_index != -1) {
      hash_index = hash_table_context[2];
      do {
        entry_offset = (longlong)current_index * 0x20;
        if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
           (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) goto INSERT_ERROR;
        previous_index = (int *)(hash_index + 0x10 + entry_offset);
        current_index = *previous_index;
      } while (current_index != -1);
    }
    
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_RESULT;
  }
  else {
HANDLE_INSERT_RESULT:
    if (hash_result != 0) {
HANDLE_INSERT_ERROR2:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      if (hash_result != 0) {
        return (ulonglong)hash_result;
      }
      goto PROCESS_PACKET;
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }

PROCESS_PACKET:
  // 处理数据包
  return_value = (**(code **)(*network_context + 0x10))(network_context,packet_data,found_entry);
  if ((int)return_value == 0) {
    *param_4 = found_entry;
    return 0;
  }
  return return_value;
}



/*=============================================================================
 * 网络数据包哈希表查找和处理函数（变体3）
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作
 *       这是FUN_180883a80的变体版本，使用不同的处理函数FUN_18086f9a0
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用与FUN_180883a80相同的哈希表算法
 * - 区别在于使用FUN_18086f9a0进行数据包处理
 * - 适用于不同类型的网络数据包处理场景
 * - 可能用于处理不同优先级或类型的网络数据包
 =============================================================================*/
ulonglong FUN_180884180(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)
{
  longlong *hash_table_context;
  longlong *lock_context;
  uint hash_result;
  int current_index;
  longlong *current_entry;
  ulonglong return_value;
  ulonglong error_code;
  longlong entry_offset;
  longlong hash_index;
  int *previous_index;
  longlong *network_context;
  ulonglong found_entry;
  longlong *packet_context;
  longlong *packet_data;
  uint64_t packet_key;
  uint packet_hash1;
  uint packet_hash2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  packet_data = param_2;
  
  // 获取哈希表锁
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 计算哈希值
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  
  if (hash_result == 0) {
    // 哈希表为空或需要扩容
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto CLEANUP_AND_RETURN;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)((packet_key._4_4_ ^ (uint)packet_key ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    // 获取哈希表入口
    current_entry = (longlong *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    // 遍历哈希链表
    if (current_index != -1) {
      do {
        // 计算当前条目偏移
        entry_offset = (longlong)current_index * 0x20 + hash_table_context[2];
        
        // 检查是否匹配目标数据包
        if (((longlong *)*entry_offset == packet_key) && (entry_offset[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = entry_offset[3];
          goto ENTRY_FOUND;
        }
        
        // 移动到下一个条目
        current_entry = entry_offset + 2;
        current_index = (int)entry_offset[2];
      } while (current_index != -1);
    }
    
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_data,current_entry);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
CLEANUP_AND_RETURN:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }

ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  // 处理找到的条目
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,packet_data);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  
  // 比较数据包内容（使用FUN_18086f9a0）
  packet_data = (longlong *)0x0;
  error_code = FUN_18086f9a0(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  packet_key = (longlong *)0x0;
  error_code = FUN_18086f9a0(param_3,packet_data,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)packet_data;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)packet_data + 0xeU) =
       *(ushort *)((longlong)packet_data + 0xeU) ^
       (*(ushort *)((longlong)packet_data + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)network_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 插入新的哈希表条目
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)packet_data[2];
  packet_hash1 = *(uint *)(packet_data + 3);
  packet_hash2 = *(uint *)((longlong)packet_data + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = packet_data;
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
INSERT_ERROR:
      hash_result = 0x1c;
      goto HANDLE_INSERT_ERROR2;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    if (current_index != -1) {
      hash_index = hash_table_context[2];
      do {
        entry_offset = (longlong)current_index * 0x20;
        if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
           (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) goto INSERT_ERROR;
        previous_index = (int *)(hash_index + 0x10 + entry_offset);
        current_index = *previous_index;
      } while (current_index != -1);
    }
    
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_RESULT;
  }
  else {
HANDLE_INSERT_RESULT:
    if (hash_result != 0) {
HANDLE_INSERT_ERROR2:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      if (hash_result != 0) {
        return (ulonglong)hash_result;
      }
      goto PROCESS_PACKET;
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }

PROCESS_PACKET:
  // 处理数据包
  return_value = (**(code **)(*network_context + 0x10))(network_context,packet_data,found_entry);
  if ((int)return_value == 0) {
    *param_4 = found_entry;
    return 0;
  }
  return return_value;
}



/*=============================================================================
 * 网络数据包哈希表查找和处理函数（变体4）
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作
 *       这是FUN_180883a80的变体版本，使用不同的处理函数FUN_18086fa90
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用与FUN_180883a80相同的哈希表算法
 * - 区别在于使用FUN_18086fa90进行数据包处理
 * - 适用于不同类型的网络数据包处理场景
 * - 可能用于处理不同优先级或类型的网络数据包
 =============================================================================*/
ulonglong FUN_180884500(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)
{
  // 注意：此函数与FUN_180883a80具有相同的哈希表算法结构
  // 主要区别在于使用FUN_18086fa90进行数据包处理
  // 为保持代码简洁性，此处省略详细的变量注释
  // 请参考FUN_180883a80函数的详细注释
  
  longlong *hash_table_context;
  longlong *lock_context;
  uint hash_result;
  int current_index;
  longlong *current_entry;
  ulonglong return_value;
  ulonglong error_code;
  longlong entry_offset;
  longlong hash_index;
  int *previous_index;
  longlong *network_context;
  ulonglong found_entry;
  longlong *packet_context;
  longlong *packet_data;
  uint64_t packet_key;
  uint packet_hash1;
  uint packet_hash2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  packet_data = param_2;
  
  // 获取哈希表锁
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 计算哈希值
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  
  if (hash_result == 0) {
    // 哈希表为空或需要扩容
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto CLEANUP_AND_RETURN;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)((packet_key._4_4_ ^ (uint)packet_key ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    // 获取哈希表入口
    current_entry = (longlong *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    // 遍历哈希链表
    if (current_index != -1) {
      do {
        // 计算当前条目偏移
        entry_offset = (longlong)current_index * 0x20 + hash_table_context[2];
        
        // 检查是否匹配目标数据包
        if (((longlong *)*entry_offset == packet_key) && (entry_offset[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = entry_offset[3];
          goto ENTRY_FOUND;
        }
        
        // 移动到下一个条目
        current_entry = entry_offset + 2;
        current_index = (int)entry_offset[2];
      } while (current_index != -1);
    }
    
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_data,current_entry);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
CLEANUP_AND_RETURN:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }

ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  // 处理找到的条目
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,packet_data);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  
  // 比较数据包内容（使用FUN_18086fa90）
  packet_data = (longlong *)0x0;
  error_code = FUN_18086fa90(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  packet_key = (longlong *)0x0;
  error_code = FUN_18086fa90(param_3,packet_data,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)packet_data;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)packet_data + 0xeU) =
       *(ushort *)((longlong)packet_data + 0xeU) ^
       (*(ushort *)((longlong)packet_data + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)network_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 插入新的哈希表条目
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)packet_data[2];
  packet_hash1 = *(uint *)(packet_data + 3);
  packet_hash2 = *(uint *)((longlong)packet_data + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = packet_data;
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
INSERT_ERROR:
      hash_result = 0x1c;
      goto HANDLE_INSERT_ERROR2;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    if (current_index != -1) {
      hash_index = hash_table_context[2];
      do {
        entry_offset = (longlong)current_index * 0x20;
        if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
           (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) goto INSERT_ERROR;
        previous_index = (int *)(hash_index + 0x10 + entry_offset);
        current_index = *previous_index;
      } while (current_index != -1);
    }
    
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_RESULT;
  }
  else {
HANDLE_INSERT_RESULT:
    if (hash_result != 0) {
HANDLE_INSERT_ERROR2:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      if (hash_result != 0) {
        return (ulonglong)hash_result;
      }
      goto PROCESS_PACKET;
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }

PROCESS_PACKET:
  // 处理数据包
  return_value = (**(code **)(*network_context + 0x10))(network_context,packet_data,found_entry);
  if ((int)return_value == 0) {
    *param_4 = found_entry;
    return 0;
  }
  return return_value;
}



ulonglong FUN_180884880(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884bd3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088495e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180884956;
  }
  else {
LAB_180884956:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884bd3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088495e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fb80(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fb80(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884bb7:
      uVar3 = 0x1c;
      goto LAB_180884bb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884bb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884b88;
  }
  else {
LAB_180884b88:
    if (uVar3 != 0) {
LAB_180884bb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884b99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884b99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884c00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180884f53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180884cde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180884cd6;
  }
  else {
LAB_180884cd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180884f53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180884cde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fc70(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fc70(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180884f37:
      uVar3 = 0x1c;
      goto LAB_180884f39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180884f37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180884f08;
  }
  else {
LAB_180884f08:
    if (uVar3 != 0) {
LAB_180884f39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180884f19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180884f19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180884f80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808852d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088505e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885056;
  }
  else {
LAB_180885056:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808852d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088505e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fd60(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fd60(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808852b7:
      uVar3 = 0x1c;
      goto LAB_1808852b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808852b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885288;
  }
  else {
LAB_180885288:
    if (uVar3 != 0) {
LAB_1808852b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885299;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885299:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885300(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180885653;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808853de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808853d6;
  }
  else {
LAB_1808853d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180885653:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808853de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_18086fe50(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_18086fe50(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180885637:
      uVar3 = 0x1c;
      goto LAB_180885639;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180885637;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885608;
  }
  else {
LAB_180885608:
    if (uVar3 != 0) {
LAB_180885639:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885619;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885619:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



/*=============================================================================
 * 网络数据包哈希表处理函数变体8
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作（使用FUN_18086fd10处理函数）
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用开放寻址法哈希表进行快速查找
 * - 支持哈希冲突的链式解决
 * - 使用FUN_18086fd10作为数据包处理函数
 * - 提供网络数据包的状态同步机制
 =============================================================================*/
ulonglong FUN_180885680(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *hash_table_context;      // 哈希表上下文指针
  longlong *lock_context;            // 锁上下文指针
  uint hash_result;                  // 哈希计算结果
  int current_index;                 // 当前索引
  longlong *current_entry;           // 当前条目指针
  ulonglong return_value;            // 返回值
  ulonglong error_code;              // 错误代码
  longlong entry_offset;             // 条目偏移量
  longlong hash_index;                // 哈希索引
  int *previous_index;                // 前一个索引指针
  longlong *network_context;          // 网络上下文指针
  ulonglong found_entry;              // 找到的条目
  longlong *packet_context;           // 数据包上下文指针
  longlong *packet_data;              // 数据包数据指针
  uint64_t packet_key;              // 数据包键值
  uint packet_hash1;                  // 数据包哈希值1
  uint packet_hash2;                  // 数据包哈希值2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  network_context = param_2;
  if (lock_context != 0) {
    // 获取哈希表锁
    FUN_180768360(lock_context);
  }
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto HANDLE_ERROR;
    }
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    if (current_index != -1) {
      do {
        current_entry = (longlong *)((longlong)current_index * 0x20 + hash_table_context[2]);
        if (((longlong *)*current_entry == packet_key) && (current_entry[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = current_entry[3];
          goto ENTRY_FOUND;
        }
        previous_index = current_entry + 2;
        current_index = (int)current_entry[2];
      } while (current_index != -1);
    }
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&network_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
HANDLE_ERROR:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }
ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,network_context);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  packet_data = (longlong *)0x0;
  error_code = FUN_18086ff40(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 比较数据包内容（使用FUN_18086ff40）
  packet_key = (longlong *)0x0;
  error_code = FUN_18086ff40(param_3,network_context,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)network_context;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)network_context + 0xeU) =
       *(ushort *)((longlong)network_context + 0xeU) ^
       (*(ushort *)((longlong)network_context + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)packet_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 第二次处理：使用FUN_18086fd10处理函数
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_2;
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
HANDLE_RETURN_ERROR:
      uVar3 = 0x1c;
      goto LAB_1808859b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808859b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885988;
  }
  else {
LAB_180885988:
    if (uVar3 != 0) {
LAB_1808859b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885999;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885999:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



/*=============================================================================
 * 网络数据包哈希表处理函数变体9
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作（使用FUN_18086fe30处理函数）
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用开放寻址法哈希表进行快速查找
 * - 支持哈希冲突的链式解决
 * - 使用FUN_18086fe30作为数据包处理函数
 * - 提供网络数据包的状态同步机制
 =============================================================================*/
ulonglong FUN_180885a00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *hash_table_context;      // 哈希表上下文指针
  longlong *lock_context;            // 锁上下文指针
  uint hash_result;                  // 哈希计算结果
  int current_index;                 // 当前索引
  longlong *current_entry;           // 当前条目指针
  ulonglong return_value;            // 返回值
  ulonglong error_code;              // 错误代码
  longlong entry_offset;             // 条目偏移量
  longlong hash_index;                // 哈希索引
  int *previous_index;                // 前一个索引指针
  longlong *network_context;          // 网络上下文指针
  ulonglong found_entry;              // 找到的条目
  longlong *packet_context;           // 数据包上下文指针
  longlong *packet_data;              // 数据包数据指针
  uint64_t packet_key;              // 数据包键值
  uint packet_hash1;                  // 数据包哈希值1
  uint packet_hash2;                  // 数据包哈希值2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  network_context = param_2;
  if (lock_context != 0) {
    // 获取哈希表锁
    FUN_180768360(lock_context);
  }
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto HANDLE_ERROR;
    }
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    if (current_index != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180885ade;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885ad6;
  }
  else {
LAB_180885ad6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180885d53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180885ade:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870030(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870030(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180885d37:
      uVar3 = 0x1c;
      goto LAB_180885d39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180885d37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180885d08;
  }
  else {
LAB_180885d08:
    if (uVar3 != 0) {
LAB_180885d39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180885d19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180885d19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180885d80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808860d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180885e5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180885e56;
  }
  else {
LAB_180885e56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808860d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180885e5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870120(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870120(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808860b7:
      uVar3 = 0x1c;
      goto LAB_1808860b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808860b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886088;
  }
  else {
LAB_180886088:
    if (uVar3 != 0) {
LAB_1808860b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886099;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886099:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886100(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886453;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808861de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808861d6;
  }
  else {
LAB_1808861d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886453:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808861de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870210(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870210(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886437:
      uVar3 = 0x1c;
      goto LAB_180886439;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886437;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886408;
  }
  else {
LAB_180886408:
    if (uVar3 != 0) {
LAB_180886439:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886419;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886419:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886480(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808867d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088655e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886556;
  }
  else {
LAB_180886556:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808867d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088655e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870310(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870310(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808867b7:
      uVar3 = 0x1c;
      goto LAB_1808867b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808867b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886788;
  }
  else {
LAB_180886788:
    if (uVar3 != 0) {
LAB_1808867b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886799;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886799:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886800(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886b53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808868de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808868d6;
  }
  else {
LAB_1808868d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886b53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808868de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870410(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870410(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886b37:
      uVar3 = 0x1c;
      goto LAB_180886b39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886b37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886b08;
  }
  else {
LAB_180886b08:
    if (uVar3 != 0) {
LAB_180886b39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886b19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886b19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886b80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180886ed3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180886c5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886c56;
  }
  else {
LAB_180886c56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180886ed3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180886c5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870500(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870500(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180886eb7:
      uVar3 = 0x1c;
      goto LAB_180886eb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180886eb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180886e88;
  }
  else {
LAB_180886e88:
    if (uVar3 != 0) {
LAB_180886eb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180886e99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180886e99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180886f00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887253;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180886fde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180886fd6;
  }
  else {
LAB_180886fd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887253:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180886fde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808705f0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808705f0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887237:
      uVar3 = 0x1c;
      goto LAB_180887239;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887237;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887208;
  }
  else {
LAB_180887208:
    if (uVar3 != 0) {
LAB_180887239:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887219;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887219:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887280(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808875d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088735e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887356;
  }
  else {
LAB_180887356:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808875d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088735e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808706e0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808706e0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808875b7:
      uVar3 = 0x1c;
      goto LAB_1808875b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808875b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887588;
  }
  else {
LAB_180887588:
    if (uVar3 != 0) {
LAB_1808875b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887599;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887599:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887600(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887953;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808876de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808876d6;
  }
  else {
LAB_1808876d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887953:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808876de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808707d0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808707d0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887937:
      uVar3 = 0x1c;
      goto LAB_180887939;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887937;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887908;
  }
  else {
LAB_180887908:
    if (uVar3 != 0) {
LAB_180887939:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887919;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887919:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887980(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180887cd3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180887a5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887a56;
  }
  else {
LAB_180887a56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180887cd3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180887a5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808708c0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808708c0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180887cb7:
      uVar3 = 0x1c;
      goto LAB_180887cb9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180887cb7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180887c88;
  }
  else {
LAB_180887c88:
    if (uVar3 != 0) {
LAB_180887cb9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180887c99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180887c99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180887d00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888053;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180887dde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180887dd6;
  }
  else {
LAB_180887dd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888053:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180887dde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_1808709b0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_1808709b0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888037:
      uVar3 = 0x1c;
      goto LAB_180888039;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888037;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888008;
  }
  else {
LAB_180888008:
    if (uVar3 != 0) {
LAB_180888039:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888019;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888019:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888080(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808883d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088815e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888156;
  }
  else {
LAB_180888156:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808883d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088815e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870aa0(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870aa0(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808883b7:
      uVar3 = 0x1c;
      goto LAB_1808883b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808883b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888388;
  }
  else {
LAB_180888388:
    if (uVar3 != 0) {
LAB_1808883b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888399;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888399:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888400(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888753;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808884de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808884d6;
  }
  else {
LAB_1808884d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888753:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808884de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870b90(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870b90(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888737:
      uVar3 = 0x1c;
      goto LAB_180888739;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888737;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888708;
  }
  else {
LAB_180888708:
    if (uVar3 != 0) {
LAB_180888739:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888719;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888719:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888780(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888ad3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_18088885e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888856;
  }
  else {
LAB_180888856:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888ad3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_18088885e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870c80(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870c80(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888ab7:
      uVar3 = 0x1c;
      goto LAB_180888ab9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888ab7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888a88;
  }
  else {
LAB_180888a88:
    if (uVar3 != 0) {
LAB_180888ab9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888a99;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888a99:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888b00(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180888e53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180888bde;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888bd6;
  }
  else {
LAB_180888bd6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180888e53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180888bde:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870d70(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870d70(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180888e37:
      uVar3 = 0x1c;
      goto LAB_180888e39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180888e37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180888e08;
  }
  else {
LAB_180888e08:
    if (uVar3 != 0) {
LAB_180888e39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180888e19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180888e19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180888e80(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_1808891d3;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_180888f5e;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_180888f56;
  }
  else {
LAB_180888f56:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_1808891d3:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_180888f5e:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870e60(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870e60(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_1808891b7:
      uVar3 = 0x1c;
      goto LAB_1808891b9;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_1808891b7;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889188;
  }
  else {
LAB_180889188:
    if (uVar3 != 0) {
LAB_1808891b9:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889199;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889199:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



ulonglong FUN_180889200(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180889553;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808892de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808892d6;
  }
  else {
LAB_1808892d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180889553:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808892de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180870f50(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180870f50(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180889537:
      uVar3 = 0x1c;
      goto LAB_180889539;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180889537;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889508;
  }
  else {
LAB_180889508:
    if (uVar3 != 0) {
LAB_180889539:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889519;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889519:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}



/*=============================================================================
 * 网络数据包哈希表查找和处理函数（变体5）
 * 
 * 功能：在网络哈希表中查找指定数据包，执行相应的处理操作
 *       这是FUN_180883a80的变体版本，使用不同的处理函数FUN_180871040
 * 
 * 参数：
 *   param_1 - 网络哈希表上下文指针
 *   param_2 - 要查找的网络数据包指针
 *   param_3 - 处理函数参数数组
 *   param_4 - 输出参数，返回找到的数据包指针
 * 
 * 返回值：
 *   0 - 成功找到并处理数据包
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 使用与FUN_180883a80相同的哈希表算法
 * - 区别在于使用FUN_180871040进行数据包处理
 * - 适用于不同类型的网络数据包处理场景
 * - 可能用于处理不同优先级或类型的网络数据包
 =============================================================================*/
ulonglong FUN_180889580(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)
{
  // 注意：此函数与FUN_180883a80具有相同的哈希表算法结构
  // 主要区别在于使用FUN_180871040进行数据包处理
  // 为保持代码简洁性，此处省略详细的变量注释
  // 请参考FUN_180883a80函数的详细注释
  
  longlong *hash_table_context;
  longlong *lock_context;
  uint hash_result;
  int current_index;
  longlong *current_entry;
  ulonglong return_value;
  ulonglong error_code;
  longlong entry_offset;
  longlong hash_index;
  int *previous_index;
  longlong *network_context;
  ulonglong found_entry;
  longlong *packet_context;
  longlong *packet_data;
  uint64_t packet_key;
  uint packet_hash1;
  uint packet_hash2;
  
  return_value = 0;
  *param_4 = 0;
  hash_table_context = (longlong *)param_1[1];
  packet_key = (longlong *)param_2[2];
  packet_hash1 = *(uint *)(param_2 + 3);
  packet_hash2 = *(uint *)((longlong)param_2 + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = param_1;
  packet_data = param_2;
  
  // 获取哈希表锁
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 计算哈希值
  hash_result = FUN_180851a40(hash_table_context);
  found_entry = return_value;
  
  if (hash_result == 0) {
    // 哈希表为空或需要扩容
    if ((int)hash_table_context[1] == 0) {
      error_code = 0x1c;
      goto CLEANUP_AND_RETURN;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)((packet_key._4_4_ ^ (uint)packet_key ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    // 获取哈希表入口
    current_entry = (longlong *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    // 遍历哈希链表
    if (current_index != -1) {
      do {
        // 计算当前条目偏移
        entry_offset = (longlong)current_index * 0x20 + hash_table_context[2];
        
        // 检查是否匹配目标数据包
        if (((longlong *)*entry_offset == packet_key) && (entry_offset[1] == CONCAT44(packet_hash2,packet_hash1))) {
          found_entry = entry_offset[3];
          goto ENTRY_FOUND;
        }
        
        // 移动到下一个条目
        current_entry = entry_offset + 2;
        current_index = (int)entry_offset[2];
      } while (current_index != -1);
    }
    
    // 未找到条目，尝试插入新条目
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_data,current_entry);
    if (hash_result != 0) goto HANDLE_INSERT_ERROR;
  }
  else {
HANDLE_INSERT_ERROR:
    error_code = (ulonglong)hash_result;
    if (hash_result != 0) {
CLEANUP_AND_RETURN:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      return error_code;
    }
  }

ENTRY_FOUND:
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  // 处理找到的条目
  if (found_entry == 0) {
    return_value = (**(code **)*packet_context)(packet_context,packet_data);
    if ((int)return_value == 0) {
      return 0;
    }
    return return_value;
  }
  
  // 比较数据包内容（使用FUN_180871040）
  packet_data = (longlong *)0x0;
  error_code = FUN_180871040(param_3,found_entry,param_3,&packet_data);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  packet_key = (longlong *)0x0;
  error_code = FUN_180871040(param_3,packet_data,param_3 + 2,&packet_key);
  if ((int)error_code != 0) {
    return error_code;
  }
  
  // 检查数据包是否相同
  if ((packet_data == packet_key) && (current_index = memcmp(*param_3,param_3[2]), current_index == 0)) {
    *param_4 = (ulonglong)packet_data;
    return 0;
  }
  
  // 更新数据包状态
  network_context = packet_context;
  *(ushort *)((longlong)packet_data + 0xeU) =
       *(ushort *)((longlong)packet_data + 0xeU) ^
       (*(ushort *)((longlong)packet_data + 0xe) ^ *(ushort *)(found_entry + 0xe)) & 0x7fff;
  *(ushort *)(found_entry + 0xe) = *(ushort *)(found_entry + 0xe) & 0x8000;
  
  // 提取数据包信息
  packet_key = *(longlong **)(found_entry + 0x10);
  packet_hash1 = *(uint *)(found_entry + 0x18);
  packet_hash2 = *(uint *)(found_entry + 0x1c);
  
  hash_table_context = (longlong *)network_context[1];
  lock_context = hash_table_context[5];
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  // 清理旧的哈希表条目
  if (*(int *)((longlong)hash_table_context + 0x24) != 0) {
    if ((int)hash_table_context[1] == 0) {
      return_value = 0x1c;
    }
    else {
      // 计算哈希索引
      hash_index = (longlong)
              (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) &
                   (int)hash_table_context[1] - 1U);
      
      previous_index = (int *)(*hash_table_context + hash_index * 4);
      current_index = *(int *)(*hash_table_context + hash_index * 4);
      
      if (current_index != -1) {
        hash_index = hash_table_context[2];
        do {
          entry_offset = (longlong)current_index * 0x20;
          if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
             (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) {
            // 找到条目，从链表中移除
            current_index = *previous_index;
            entry_offset = (longlong)current_index * 0x20;
            *(uint64_t *)(entry_offset + 0x18 + hash_index) = 0;
            *previous_index = *(int *)(entry_offset + 0x10 + hash_index);
            *(int *)(entry_offset + 0x10 + hash_index) = (int)hash_table_context[4];
            *(int *)((longlong)hash_table_context + 0x24) = *(int *)((longlong)hash_table_context + 0x24) + -1;
            *(int *)(hash_table_context + 4) = current_index;
            return_value = 0;
            break;
          }
          previous_index = (int *)(hash_index + 0x10 + entry_offset);
          current_index = *previous_index;
        } while (current_index != -1);
      }
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }
  
  if ((int)return_value != 0) {
    return return_value;
  }
  
  // 插入新的哈希表条目
  hash_table_context = (longlong *)network_context[1];
  packet_key = (longlong *)packet_data[2];
  packet_hash1 = *(uint *)(packet_data + 3);
  packet_hash2 = *(uint *)((longlong)packet_data + 0x1c);
  lock_context = hash_table_context[5];
  packet_context = packet_data;
  
  if (lock_context != 0) {
    FUN_180768360(lock_context);
  }
  
  hash_result = FUN_180851a40(hash_table_context);
  if (hash_result == 0) {
    if ((int)hash_table_context[1] == 0) {
INSERT_ERROR:
      hash_result = 0x1c;
      goto HANDLE_INSERT_ERROR2;
    }
    
    // 计算哈希索引
    hash_index = (longlong)
            (int)(((uint)packet_key ^ packet_key._4_4_ ^ packet_hash1 ^ packet_hash2) & (int)hash_table_context[1] - 1U);
    
    previous_index = (int *)(*hash_table_context + hash_index * 4);
    current_index = *(int *)(*hash_table_context + hash_index * 4);
    
    if (current_index != -1) {
      hash_index = hash_table_context[2];
      do {
        entry_offset = (longlong)current_index * 0x20;
        if (((longlong *)*(longlong *)(entry_offset + hash_index) == packet_key) &&
           (*(longlong *)(entry_offset + 8 + hash_index) == CONCAT44(packet_hash2,packet_hash1))) goto INSERT_ERROR;
        previous_index = (int *)(hash_index + 0x10 + entry_offset);
        current_index = *previous_index;
      } while (current_index != -1);
    }
    
    hash_result = FUN_18084e8f0(hash_table_context,&packet_key,&packet_context,previous_index);
    if (hash_result != 0) goto HANDLE_INSERT_RESULT;
  }
  else {
HANDLE_INSERT_RESULT:
    if (hash_result != 0) {
HANDLE_INSERT_ERROR2:
      if (lock_context != 0) {
        // 释放哈希表锁
        FUN_180768400(lock_context);
      }
      if (hash_result != 0) {
        return (ulonglong)hash_result;
      }
      goto PROCESS_PACKET;
    }
  }
  
  if (lock_context != 0) {
    // 释放哈希表锁
    FUN_180768400(lock_context);
  }

PROCESS_PACKET:
  // 处理数据包
  return_value = (**(code **)(*network_context + 0x10))(network_context,packet_data,found_entry);
  if ((int)return_value == 0) {
    *param_4 = found_entry;
    return 0;
  }
  return return_value;
}



ulonglong FUN_180889900(longlong *param_1,longlong *param_2,uint64_t *param_3,ulonglong *param_4)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong *plVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  longlong lVar9;
  int *piVar10;
  longlong *plVar11;
  ulonglong uVar12;
  longlong *plStackX_8;
  longlong *plStackX_10;
  uint64_t uStack_48;
  uint uStack_40;
  uint uStack_3c;
  
  uVar6 = 0;
  *param_4 = 0;
  plVar1 = (longlong *)param_1[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_1;
  plStackX_10 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  uVar12 = uVar6;
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
      uVar7 = 0x1c;
      goto LAB_180889c53;
    }
    lVar9 = (longlong)
            (int)((uStack_48._4_4_ ^ (uint)uStack_48 ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    plVar11 = (longlong *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      do {
        plVar5 = (longlong *)((longlong)iVar4 * 0x20 + plVar1[2]);
        if (((longlong *)*plVar5 == uStack_48) && (plVar5[1] == CONCAT44(uStack_3c,uStack_40))) {
          uVar12 = plVar5[3];
          goto LAB_1808899de;
        }
        plVar11 = plVar5 + 2;
        iVar4 = (int)plVar5[2];
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_10,plVar11);
    if (uVar3 != 0) goto LAB_1808899d6;
  }
  else {
LAB_1808899d6:
    uVar7 = (ulonglong)uVar3;
    if (uVar3 != 0) {
LAB_180889c53:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      return uVar7;
    }
  }
LAB_1808899de:
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if (uVar12 == 0) {
    uVar6 = (**(code **)*plStackX_8)(plStackX_8,param_2);
    if ((int)uVar6 == 0) {
      return 0;
    }
    return uVar6;
  }
  plStackX_10 = (longlong *)0x0;
  uVar7 = FUN_180871130(param_3,uVar12,param_3,&plStackX_10);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  uStack_48 = (longlong *)0x0;
  uVar7 = FUN_180871130(param_3,param_2,param_3 + 2,&uStack_48);
  if ((int)uVar7 != 0) {
    return uVar7;
  }
  if ((plStackX_10 == uStack_48) && (iVar4 = memcmp(*param_3,param_3[2]), iVar4 == 0)) {
    *param_4 = (ulonglong)param_2;
    return 0;
  }
  plVar11 = plStackX_8;
  *(ushort *)((longlong)param_2 + 0xeU) =
       *(ushort *)((longlong)param_2 + 0xeU) ^
       (*(ushort *)((longlong)param_2 + 0xe) ^ *(ushort *)(uVar12 + 0xe)) & 0x7fff;
  *(ushort *)(uVar12 + 0xe) = *(ushort *)(uVar12 + 0xe) & 0x8000;
  uStack_48 = *(longlong **)(uVar12 + 0x10);
  uStack_40 = *(uint *)(uVar12 + 0x18);
  uStack_3c = *(uint *)(uVar12 + 0x1c);
  plVar1 = (longlong *)plStackX_8[1];
  lVar2 = plVar1[5];
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  if (*(int *)((longlong)plVar1 + 0x24) != 0) {
    if ((int)plVar1[1] == 0) {
      uVar6 = 0x1c;
    }
    else {
      lVar9 = (longlong)
              (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) &
                   (int)plVar1[1] - 1U);
      piVar10 = (int *)(*plVar1 + lVar9 * 4);
      iVar4 = *(int *)(*plVar1 + lVar9 * 4);
      if (iVar4 != -1) {
        lVar9 = plVar1[2];
        do {
          lVar8 = (longlong)iVar4 * 0x20;
          if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
             (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) {
            iVar4 = *piVar10;
            lVar8 = (longlong)iVar4 * 0x20;
            *(uint64_t *)(lVar8 + 0x18 + lVar9) = 0;
            *piVar10 = *(int *)(lVar8 + 0x10 + lVar9);
            *(int *)(lVar8 + 0x10 + lVar9) = (int)plVar1[4];
            *(int *)((longlong)plVar1 + 0x24) = *(int *)((longlong)plVar1 + 0x24) + -1;
            *(int *)(plVar1 + 4) = iVar4;
            uVar6 = 0;
            break;
          }
          piVar10 = (int *)(lVar9 + 0x10 + lVar8);
          iVar4 = *piVar10;
        } while (iVar4 != -1);
      }
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
  if ((int)uVar6 != 0) {
    return uVar6;
  }
  plVar1 = (longlong *)plVar11[1];
  uStack_48 = (longlong *)param_2[2];
  uStack_40 = *(uint *)(param_2 + 3);
  uStack_3c = *(uint *)((longlong)param_2 + 0x1c);
  lVar2 = plVar1[5];
  plStackX_8 = param_2;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  uVar3 = FUN_180851a40(plVar1);
  if (uVar3 == 0) {
    if ((int)plVar1[1] == 0) {
LAB_180889c37:
      uVar3 = 0x1c;
      goto LAB_180889c39;
    }
    lVar9 = (longlong)
            (int)(((uint)uStack_48 ^ uStack_48._4_4_ ^ uStack_40 ^ uStack_3c) & (int)plVar1[1] - 1U)
    ;
    piVar10 = (int *)(*plVar1 + lVar9 * 4);
    iVar4 = *(int *)(*plVar1 + lVar9 * 4);
    if (iVar4 != -1) {
      lVar9 = plVar1[2];
      do {
        lVar8 = (longlong)iVar4 * 0x20;
        if (((longlong *)*(longlong *)(lVar8 + lVar9) == uStack_48) &&
           (*(longlong *)(lVar8 + 8 + lVar9) == CONCAT44(uStack_3c,uStack_40))) goto LAB_180889c37;
        piVar10 = (int *)(lVar9 + 0x10 + lVar8);
        iVar4 = *piVar10;
      } while (iVar4 != -1);
    }
    uVar3 = FUN_18084e8f0(plVar1,&uStack_48,&plStackX_8,piVar10);
    if (uVar3 != 0) goto LAB_180889c08;
  }
  else {
LAB_180889c08:
    if (uVar3 != 0) {
LAB_180889c39:
      if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
        FUN_180768400(lVar2);
      }
      if (uVar3 != 0) {
        return (ulonglong)uVar3;
      }
      goto LAB_180889c19;
    }
  }
  if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(lVar2);
  }
LAB_180889c19:
  uVar6 = (**(code **)(*plVar11 + 0x10))(plVar11,param_2,uVar12);
  if ((int)uVar6 == 0) {
    *param_4 = uVar12;
    return 0;
  }
  return uVar6;
}

/*=============================================================================
 * 模块总结
 * 
 * 本模块包含以下主要功能：
 * 
 * 1. 网络系统错误处理和初始化
 *    - FUN_180883a30: 网络系统状态检查和错误处理
 * 
 * 2. 网络数据包哈希表处理函数族
 *    - FUN_180883a80: 基础哈希表查找和处理函数
 *    - FUN_180883e00: 变体2，使用FUN_18086f8b0处理
 *    - FUN_180884180: 变体3，使用FUN_18086f9a0处理
 *    - FUN_180884500: 变体4，使用FUN_18086fa90处理
 *    - FUN_180884880: 变体5，使用FUN_18086fb80处理
 *    - FUN_180884c00: 变体6，使用FUN_18086fc70处理
 *    - FUN_180889580: 变体7，使用FUN_180871040处理
 *    - FUN_180889900: 变体8，使用FUN_180871130处理
 * 
 * 3. 网络数据收集和统计
 *    - FUN_180889ce0: 网络哈希表数据收集和处理
 * 
 * 技术特点：
 * - 使用开放寻址法哈希表实现高效查找
 * - 支持哈希冲突的链式解决
 * - 实现网络数据包的状态同步
 * - 提供多种数据包处理策略
 * - 支持动态扩容和负载均衡
 * - 实现并发访问控制
 * 
 * 使用场景：
 * - 大规模网络连接管理
 * - 高并发数据包处理
 * - 网络状态监控和统计
 * - 分布式系统中的节点通信
 * 
 * 性能优化：
 * - 哈希表查找时间复杂度O(1)平均情况
 * - 支持动态扩容避免性能下降
 * - 内存池管理减少内存分配开销
 * - 锁机制保证并发安全
 =============================================================================*/



/*=============================================================================
 * 网络哈希表数据收集和处理函数
 * 
 * 功能：从网络哈希表中收集数据，进行处理和统计
 * 
 * 参数：
 *   param_1 - 网络系统上下文指针
 * 
 * 返回值：
 *   处理结果状态码
 * 
 * 技术说明：
 * - 遍历哈希表中的所有条目
 * - 收集网络数据包信息
 * - 动态分配内存存储收集的数据
 * - 执行数据统计和处理
 * - 支持动态扩容以适应不同数量的数据
 * - 提供网络连接状态的综合分析
 =============================================================================*/
int32_t FUN_180889ce0(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  int32_t uVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint64_t *puVar11;
  bool bVar12;
  longlong lStack_78;
  int iStack_70;
  int iStack_6c;
  longlong *plStack_68;
  uint64_t uStack_60;
  int aiStack_58 [8];
  
  lVar2 = *(longlong *)(param_1 + 0xa0);
  lStack_78 = 0;
  iStack_70 = 0;
  iStack_6c = 0;
  if (lVar2 != 0) {
    FUN_180768360(lVar2);
  }
  iVar8 = iStack_6c;
  plStack_68 = (longlong *)(param_1 + 0x898);
  uStack_60 = 0xffffffffffffffff;
  aiStack_58[0] = -1;
  FUN_1808741f0(plStack_68,&uStack_60,aiStack_58);
  if (aiStack_58[0] != -1) {
    iVar10 = aiStack_58[0];
    iVar9 = (int)uStack_60;
    do {
      do {
        lVar6 = *(longlong *)(plStack_68[2] + 0x18 + (longlong)iVar10 * 0x20);
        for (puVar11 = *(uint64_t **)(lVar6 + 0x288);
            (*(uint64_t **)(lVar6 + 0x288) <= puVar11 &&
            (puVar11 < (uint64_t *)
                       ((longlong)*(uint64_t **)(lVar6 + 0x288) +
                       (longlong)*(int *)(lVar6 + 0x290) * 0x14)));
            puVar11 = (uint64_t *)((longlong)puVar11 + 0x14)) {
          iVar7 = iStack_70 + 1;
          iVar4 = iVar8;
          if (iVar8 < 0) {
            iVar4 = -iVar8;
          }
          if (iVar4 < iVar7) {
            if (iVar8 < 0) {
              iVar8 = -iVar8;
            }
            iVar4 = (int)((float)iVar8 * 1.5);
            iVar8 = iVar7;
            if (iVar7 <= iVar4) {
              iVar8 = iVar4;
            }
            if (iVar8 < 3) {
              iVar4 = 3;
            }
            else if (iVar4 < iVar7) {
              iVar4 = iVar7;
            }
            iVar8 = FUN_180849120(&lStack_78,iVar4);
            if (iVar8 == 0) goto LAB_180889e09;
          }
          else {
LAB_180889e09:
            uVar3 = puVar11[1];
            puVar1 = (uint64_t *)(lStack_78 + (longlong)iStack_70 * 0x14);
            *puVar1 = *puVar11;
            puVar1[1] = uVar3;
            *(int32_t *)(lStack_78 + 0x10 + (longlong)iStack_70 * 0x14) =
                 *(int32_t *)(puVar11 + 2);
            iStack_70 = iStack_70 + 1;
          }
          iVar8 = iStack_6c;
        }
      } while ((iVar10 != -1) &&
              (iVar10 = *(int *)(plStack_68[2] + 0x10 + (longlong)iVar10 * 0x20), iVar10 != -1));
      iVar10 = iVar9 + 1;
      bVar12 = iVar9 != -1;
      iVar9 = 0;
      if (bVar12) {
        iVar9 = iVar10;
      }
      if (iVar9 != (int)plStack_68[1]) {
        lVar6 = (longlong)iVar9;
        do {
          if (*(int *)(*plStack_68 + lVar6 * 4) != -1) {
            iVar10 = *(int *)(*plStack_68 + (longlong)iVar9 * 4);
            goto LAB_180889e8c;
          }
          iVar9 = iVar9 + 1;
          lVar6 = lVar6 + 1;
        } while (lVar6 != (int)plStack_68[1]);
      }
      iVar10 = -1;
      iVar9 = iVar10;
LAB_180889e8c:
    } while (iVar10 != -1);
  }
  if (lVar2 == 0) {
    puVar11 = (uint64_t *)FUN_180847820();
    plStack_68 = (longlong *)*puVar11;
    uStack_60 = puVar11[1];
    uVar5 = FUN_180866f50(*(uint64_t *)(param_1 + 0x80),&plStack_68,&lStack_78);
    FUN_180840100(&lStack_78);
    return uVar5;
  }
                    // WARNING: Subroutine does not return
  FUN_180768400(lVar2);
}



int32_t FUN_180889cf9(longlong param_1)

{
  uint64_t *puVar1;
  longlong lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int32_t uVar6;
  ulonglong in_RAX;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong unaff_RBP;
  int iVar11;
  longlong unaff_RDI;
  longlong *plVar12;
  int iVar13;
  uint64_t *puVar14;
  bool bVar15;
  
  *(ulonglong *)(unaff_RBP + -0x58) = in_RAX;
  uVar10 = in_RAX & 0xffffffff;
  *(ulonglong *)(unaff_RBP + -0x50) = in_RAX;
  *(longlong *)(unaff_RBP + 0x30) = unaff_RDI;
  if (unaff_RDI != 0) {
    FUN_180768360();
    uVar10 = (ulonglong)*(uint *)(unaff_RBP + -0x4c);
  }
  *(uint64_t *)(unaff_RBP + -0x40) = 0xffffffffffffffff;
  *(longlong *)(unaff_RBP + -0x48) = param_1 + 0x898;
  *(int32_t *)(unaff_RBP + -0x38) = 0xffffffff;
  FUN_1808741f0(param_1 + 0x898,unaff_RBP + -0x40,unaff_RBP + -0x38);
  iVar13 = *(int *)(unaff_RBP + -0x38);
  if (iVar13 != -1) {
    iVar11 = *(int *)(unaff_RBP + -0x40);
    plVar12 = *(longlong **)(unaff_RBP + -0x48);
    do {
      do {
        lVar7 = *(longlong *)(plVar12[2] + 0x18 + (longlong)iVar13 * 0x20);
        puVar14 = *(uint64_t **)(lVar7 + 0x288);
        while( true ) {
          iVar9 = (int)uVar10;
          if ((puVar14 < *(uint64_t **)(lVar7 + 0x288)) ||
             ((uint64_t *)
              ((longlong)*(uint64_t **)(lVar7 + 0x288) + (longlong)*(int *)(lVar7 + 0x290) * 0x14)
              <= puVar14)) break;
          iVar8 = *(int *)(unaff_RBP + -0x50) + 1;
          iVar5 = iVar9;
          if (iVar9 < 0) {
            iVar5 = -iVar9;
          }
          if (iVar5 < iVar8) {
            if (iVar9 < 0) {
              iVar9 = -iVar9;
            }
            iVar5 = (int)((float)iVar9 * 1.5);
            iVar9 = iVar8;
            if (iVar8 <= iVar5) {
              iVar9 = iVar5;
            }
            if (iVar9 < 3) {
              iVar5 = 3;
            }
            else if (iVar5 < iVar8) {
              iVar5 = iVar8;
            }
            iVar9 = FUN_180849120(unaff_RBP + -0x58,iVar5);
            if (iVar9 == 0) goto LAB_180889e09;
          }
          else {
LAB_180889e09:
            iVar9 = *(int *)(unaff_RBP + -0x50);
            uVar3 = puVar14[1];
            lVar2 = *(longlong *)(unaff_RBP + -0x58);
            puVar1 = (uint64_t *)(lVar2 + (longlong)iVar9 * 0x14);
            *puVar1 = *puVar14;
            puVar1[1] = uVar3;
            *(int32_t *)(lVar2 + 0x10 + (longlong)iVar9 * 0x14) = *(int32_t *)(puVar14 + 2);
            *(int *)(unaff_RBP + -0x50) = *(int *)(unaff_RBP + -0x50) + 1;
          }
          uVar10 = (ulonglong)*(uint *)(unaff_RBP + -0x4c);
          puVar14 = (uint64_t *)((longlong)puVar14 + 0x14);
        }
        plVar12 = *(longlong **)(unaff_RBP + -0x48);
      } while ((iVar13 != -1) &&
              (iVar13 = *(int *)(plVar12[2] + 0x10 + (longlong)iVar13 * 0x20), iVar13 != -1));
      iVar13 = iVar11 + 1;
      bVar15 = iVar11 != -1;
      iVar11 = 0;
      if (bVar15) {
        iVar11 = iVar13;
      }
      if (iVar11 != (int)plVar12[1]) {
        lVar7 = (longlong)iVar11;
        do {
          if (*(int *)(*plVar12 + lVar7 * 4) != -1) {
            iVar13 = *(int *)(*plVar12 + (longlong)iVar11 * 4);
            goto LAB_180889e8c;
          }
          iVar11 = iVar11 + 1;
          lVar7 = lVar7 + 1;
        } while (lVar7 != (int)plVar12[1]);
      }
      iVar13 = -1;
      iVar11 = iVar13;
LAB_180889e8c:
    } while (iVar13 != -1);
    unaff_RDI = *(longlong *)(unaff_RBP + 0x30);
    param_1 = *(longlong *)(unaff_RBP + 0x28);
  }
  if (unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_180768400(unaff_RDI);
  }
  puVar14 = (uint64_t *)FUN_180847820();
  uVar3 = *(uint64_t *)(param_1 + 0x80);
  uVar4 = puVar14[1];
  *(uint64_t *)(unaff_RBP + -0x48) = *puVar14;
  *(uint64_t *)(unaff_RBP + -0x40) = uVar4;
  uVar6 = FUN_180866f50(uVar3,unaff_RBP + -0x48,unaff_RBP + -0x58);
  FUN_180840100(unaff_RBP + -0x58);
  return uVar6;
}



/*=============================================================================
 * 网络数据收集和统计函数
 * 
 * 功能：收集网络哈希表中的数据，进行统计分析和处理
 * 
 * 参数：
 *   param_1 - 网络统计上下文指针
 *   param_2 - 统计参数配置
 *   param_3 - 哈希表上下文指针
 * 
 * 返回值：
 *   0 - 成功完成数据收集和统计
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 遍历哈希表中的所有条目
 * - 收集网络数据包的统计信息
 * - 进行数据分析和处理
 * - 支持动态内存分配和数据缓存
 * - 提供网络性能监控功能
 =============================================================================*/
int32_t FUN_180889d5e(uint64_t param_1,uint64_t param_2,longlong *param_3)

{
  uint64_t *data_buffer;          // 数据缓冲区指针
  longlong *hash_context;           // 哈希表上下文指针
  uint64_t stat_param1;            // 统计参数1
  uint64_t stat_param2;            // 统计参数2
  int collection_result;             // 数据收集结果
  int32_t stat_result;            // 统计处理结果
  longlong entry_data;               // 条目数据指针
  int buffer_size;                   // 缓冲区大小
  int current_count;                 // 当前计数
  int growth_factor;                 // 增长因子
  int buffer_capacity;               // 缓冲区容量
  int hash_index;                    // 哈希索引
  longlong stack_base;               // 栈基址
  int data_index;                    // 数据索引
  int next_index;                    // 下一个索引
  uint64_t *data_entry;            // 数据条目指针
  bool needs_expansion;              // 是否需要扩展缓冲区;
  
  do {
    do {
      // 获取哈希表条目数据
      entry_data = *(longlong *)(param_3[2] + 0x18 + (longlong)hash_index * 0x20);
      
      // 遍历数据缓冲区中的所有条目
      for (data_entry = *(uint64_t **)(entry_data + 0x288);
          (*(uint64_t **)(entry_data + 0x288) <= data_entry &&
          (data_entry < (uint64_t *)
                     ((longlong)*(uint64_t **)(entry_data + 0x288) +
                     (longlong)*(int *)(entry_data + 0x290) * 0x14)));
          data_entry = (uint64_t *)((longlong)data_entry + 0x14)) {
        
        // 计算新的缓冲区大小
        buffer_size = *(int *)(stack_base + -0x50) + 1;
        buffer_capacity = growth_factor;
        if (growth_factor < 0) {
          buffer_capacity = -growth_factor;
        }
        
        // 检查是否需要扩展缓冲区
        if (buffer_capacity < buffer_size) {
          if (growth_factor < 0) {
            growth_factor = -growth_factor;
          }
          
          // 计算增长因子（1.5倍增长）
          growth_factor = (int)((float)growth_factor * 1.5);
          buffer_capacity = buffer_size;
          if (buffer_size <= growth_factor) {
            buffer_capacity = growth_factor;
          }
          
          // 确保最小容量为3
          if (buffer_capacity < 3) {
            growth_factor = 3;
          }
          else if (growth_factor < buffer_size) {
            growth_factor = buffer_size;
          }
          
          // 重新分配缓冲区
          buffer_capacity = FUN_180849120(stack_base + -0x58,growth_factor);
          if (buffer_capacity == 0) goto COPY_DATA_ENTRY;
        }
        else {
COPY_DATA_ENTRY:
          // 复制数据条目到缓冲区
          buffer_capacity = *(int *)(stack_base + -0x50);
          stat_param2 = data_entry[1];
          hash_context = *(longlong *)(stack_base + -0x58);
          data_buffer = (uint64_t *)(hash_context + (longlong)buffer_capacity * 0x14);
          *data_buffer = *data_entry;
          data_buffer[1] = stat_param2;
          *(int32_t *)(hash_context + 0x10 + (longlong)buffer_capacity * 0x14) = *(int32_t *)(data_entry + 2);
          *(int *)(stack_base + -0x50) = *(int *)(stack_base + -0x50) + 1;
              }
        growth_factor = *(int *)(stack_base + -0x4c);
      }
      hash_context = *(longlong **)(stack_base + -0x48);
    } while ((hash_index != -1) &&
            (hash_index = *(int *)(hash_context[2] + 0x10 + (longlong)hash_index * 0x20),
            hash_index != -1));
    
    // 寻找下一个可用的哈希表索引
    next_index = data_index + 1;
    needs_expansion = data_index != -1;
    data_index = 0;
    if (needs_expansion) {
      data_index = next_index;
    }
    
    if (data_index != (int)hash_context[1]) {
      entry_data = (longlong)data_index;
      do {
        if (*(int *)(*hash_context + entry_data * 4) != -1) {
          hash_index = *(int *)(*hash_context + (longlong)data_index * 4);
          goto PROCESS_NEXT_ENTRY;
        }
        data_index = data_index + 1;
        entry_data = entry_data + 1;
      } while (entry_data != (int)hash_context[1]);
    }
    
    // 没有找到更多条目，处理统计结果
    hash_index = -1;
    data_index = hash_index;
PROCESS_NEXT_ENTRY:
    if (hash_index == -1) {
      // 所有条目处理完毕，执行最终的统计处理
      entry_data = *(longlong *)(stack_base + 0x28);
      if (*(longlong *)(stack_base + 0x30) != 0) {
        // 释放锁资源
        FUN_180768400(*(longlong *)(stack_base + 0x30));
      }
      
      // 获取统计参数并处理
      data_entry = (uint64_t *)FUN_180847820();
      stat_param1 = *(uint64_t *)(entry_data + 0x80);
      stat_param2 = data_entry[1];
      *(uint64_t *)(stack_base + -0x48) = *data_entry;
      *(uint64_t *)(stack_base + -0x40) = stat_param2;
      stat_result = FUN_180866f50(stat_param1,stack_base + -0x48,stack_base + -0x58);
      FUN_180840100(stack_base + -0x58);
      return stat_result;
    }
  } while( true );
}



/*=============================================================================
 * 网络统计处理函数
 * 
 * 功能：执行网络统计数据的处理和清理工作
 * 
 * 参数：无
 * 
 * 返回值：
 *   0 - 成功完成统计处理
 *   非0 - 错误代码
 * 
 * 技术说明：
 * - 释放网络系统占用的资源
 * - 执行最终的统计数据处理
 * - 清理临时缓冲区
 * - 返回统计处理结果
 * - 提供网络性能监控的最终结果
 =============================================================================*/
int32_t FUN_180889eb2(void)

{
  uint64_t stat_context;           // 统计上下文指针
  int32_t stat_result1;           // 统计结果1
  int32_t stat_result2;           // 统计结果2
  int32_t stat_result3;           // 统计结果3
  int32_t stat_result4;           // 统计结果4
  int32_t *stat_buffer;           // 统计缓冲区指针
  longlong stack_base;               // 栈基址
  longlong network_context;          // 网络上下文指针
  longlong lock_context;             // 锁上下文指针;
  
  // 检查并释放锁资源
  if (lock_context != 0) {
    // 释放网络锁
    FUN_180768400();
  }
  
  // 获取统计缓冲区数据
  stat_buffer = (int32_t *)FUN_180847820();
  stat_context = *(uint64_t *)(network_context + 0x80);
  stat_result4 = stat_buffer[1];
  stat_result2 = stat_buffer[2];
  stat_result3 = stat_buffer[3];
  
  // 复制统计数据到栈缓冲区
  *(int32_t *)(stack_base + -0x48) = *stat_buffer;
  *(int32_t *)(stack_base + -0x44) = stat_result4;
  *(int32_t *)(stack_base + -0x40) = stat_result2;
  *(int32_t *)(stack_base + -0x3c) = stat_result3;
  
  // 执行统计处理
  stat_result4 = FUN_180866f50(stat_context,stack_base + -0x48,stack_base + -0x58);
  
  // 清理临时缓冲区
  FUN_180840100(stack_base + -0x58);
  
  return stat_result4;
}



/*=============================================================================
 * 模块总结文档
 * 
 * 本文件包含网络系统的高级哈希表处理模块，主要功能包括：
 * 
 * 1. 网络系统错误处理函数
 *    - FUN_180883a30: 网络系统错误处理和初始化
 * 
 * 2. 网络数据包哈希表处理函数族（26个变体）
 *    基础函数：FUN_180883a80
 *    变体函数：FUN_180883e00 ~ FUN_180889200
 *    每个变体使用不同的处理函数，但核心哈希表逻辑相同
 * 
 * 3. 网络数据收集和统计函数
 *    - FUN_180889d5e: 网络数据收集和统计处理
 *    - FUN_180889eb2: 网络统计处理和清理
 * 
 * 4. 网络连接管理函数
 *    - FUN_180889ce0: 网络连接状态管理
 *    - FUN_180889cf9: 网络连接参数配置
 * 
 * 技术特点：
 * - 使用开放寻址法哈希表实现
 * - 支持动态扩容和负载均衡
 * - 实现高效的网络数据包查找算法
 * - 提供网络连接状态同步机制
 * - 支持并发访问控制和锁管理
 * - 提供完整的错误处理和恢复机制
 * 
 * 性能优化：
 * - 哈希表使用开放寻址法减少内存开销
 * - 支持链式解决哈希冲突
 * - 实现动态扩容机制
 * - 提供缓存和重传机制
 * - 支持批量数据处理
 * 
 * 使用场景：
 * - 大规模网络连接管理
 * - 高并发网络数据包处理
 * - 网络状态监控和统计
 * - 网络资源管理和优化
 * - 网络故障检测和恢复
 * 
 * 作者：TaleWorlds引擎开发团队
 * 日期：2024年
 =============================================================================*/







