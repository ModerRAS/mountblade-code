#include "TaleWorlds.Native.Split.h"

// 01_initialization_part039.c - 内存池管理和线程安全操作模块

// 常量定义
#define MEMORY_POOL_INITIALIZED_STATE (&unknown_var_3608_ptr)
#define MEMORY_POOL_COMPLETED_STATE (&unknown_var_3768_ptr)
#define MEMORY_POOL_ENTRY_SIZE 0x1a8
#define MEMORY_POOL_BATCH_SIZE 32
#define MEMORY_POOL_REF_COUNT_OFFSET 0x3530
#define MEMORY_POOL_NEXT_BLOCK_OFFSET 0x3538

/**
 * 初始化内存池管理器
 * 
 * 此函数负责初始化一个复杂的内存池管理系统，包括：
 * - 设置内存池的初始状态
 * - 初始化哈希表结构
 * - 配置线程同步机制
 * - 处理内存块的分发和回收
 * 
 * @param pool_manager 内存池管理器的指针
 * 
 * 功能说明：
 * 1. 设置内存池管理器的状态指针
 * 2. 遍历内存块范围，处理每个内存块的初始化
 * 3. 使用哈希表来管理内存块的分配
 * 4. 实现线程安全的内存块分配和回收
 * 5. 处理内存块的引用计数和生命周期管理
 */
void InitializeMemoryPoolManager(uint64_t *pool_manager)

{
  int *ref_count_ptr;
  int ref_count;
  ulonglong start_index;
  ulonglong end_index;
  longlong *hash_table_ptr;
  longlong pool_base;
  longlong current_head;
  longlong next_head;
  longlong memory_block;
  ulonglong block_index;
  bool compare_success;
  
  // 设置内存池管理器的初始状态
  *pool_manager = MEMORY_POOL_INITIALIZED_STATE;
  start_index = pool_manager[4];
  memory_block = 0;
  end_index = pool_manager[5];
  
  // 遍历内存块范围
  for (block_index = end_index; block_index != start_index; block_index = block_index + 1) {
    // 每32个内存块处理一次批量操作
    if ((block_index & 0x1f) == 0) {
      if (memory_block != 0) {
        pool_base = pool_manager[10];
        LOCK();
        ref_count_ptr = (int *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET);
        ref_count = *ref_count_ptr;
        *ref_count_ptr = *ref_count_ptr + -0x80000000;
        UNLOCK();
        
        // 如果引用计数为0，将内存块加入到空闲链表
        if (ref_count == 0) {
          current_head = *(longlong *)(pool_base + 0x28);
          do {
            *(longlong *)(memory_block + MEMORY_POOL_NEXT_BLOCK_OFFSET) = current_head;
            *(int32_t *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET) = 1;
            hash_table_ptr = (longlong *)(pool_base + 0x28);
            LOCK();
            next_head = *hash_table_ptr;
            compare_success = current_head == next_head;
            if (compare_success) {
              *hash_table_ptr = memory_block;
              next_head = current_head;
            }
            UNLOCK();
            if (compare_success) break;
            LOCK();
            ref_count_ptr = (int *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET);
            ref_count = *ref_count_ptr;
            *ref_count_ptr = *ref_count_ptr + 0x7fffffff;
            UNLOCK();
            current_head = next_head;
          } while (ref_count == 1);
        }
      }
LAB_PROCESS_MEMORY_BLOCK:
      hash_table_ptr = (longlong *)pool_manager[0xc];
      memory_block = *(longlong *)
               (*(longlong *)
                 (hash_table_ptr[3] +
                 (((block_index & 0xffffffffffffffe0) - **(longlong **)(hash_table_ptr[3] + hash_table_ptr[1] * 8) >> 5)
                  + hash_table_ptr[1] & *hash_table_ptr - 1U) * 8) + 8);
    }
    else if (memory_block == 0) goto LAB_PROCESS_MEMORY_BLOCK;
    
    // 初始化单个内存块
    FUN_180069530((ulonglong)((uint)block_index & 0x1f) * MEMORY_POOL_ENTRY_SIZE + memory_block);
  }
  
  // 处理剩余的内存块
  memory_block = pool_manager[8];
  if ((memory_block != 0) && ((end_index != start_index || ((start_index & 0x1f) != 0)))) {
    pool_base = pool_manager[10];
    LOCK();
    ref_count_ptr = (int *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET);
    ref_count = *ref_count_ptr;
    *ref_count_ptr = *ref_count_ptr + -0x80000000;
    UNLOCK();
    
    if (ref_count == 0) {
      current_head = *(longlong *)(pool_base + 0x28);
      do {
        *(longlong *)(memory_block + MEMORY_POOL_NEXT_BLOCK_OFFSET) = current_head;
        *(int32_t *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET) = 1;
        hash_table_ptr = (longlong *)(pool_base + 0x28);
        LOCK();
        next_head = *hash_table_ptr;
        compare_success = current_head == next_head;
        if (compare_success) {
          *hash_table_ptr = memory_block;
          next_head = current_head;
        }
        UNLOCK();
        if (compare_success) break;
        LOCK();
        ref_count_ptr = (int *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET);
        ref_count = *ref_count_ptr;
        *ref_count_ptr = *ref_count_ptr + 0x7fffffff;
        UNLOCK();
        current_head = next_head;
      } while (ref_count == 1);
    }
  }
  
  // 如果存在哈希表，执行最终的清理操作
  if (pool_manager[0xc] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18006e5d0();
  }
  
  // 设置内存池管理器为完成状态
  *pool_manager = MEMORY_POOL_COMPLETED_STATE;
  return;
}



// WARNING: 全局变量起始地址与较小符号重叠

/**
 * 获取线程本地存储数据
 * 使用线程ID进行哈希查找，获取线程特定的数据存储
 * 原函数名：FUN_18006d0b0
 * 
 * @param thread_context 线程上下文指针
 * @return 线程本地存储数据指针，失败返回NULL
 */
uint64_t * GetThreadLocalStorageData(longlong *thread_context)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  uint64_t *puVar8;
  longlong lVar9;
  longlong lVar10;
  uint64_t *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint64_t *puVar15;
  bool bVar16;
  bool bVar17;
  
  // 获取当前线程ID并计算哈希值
  uVar5 = GetCurrentThreadId();
  uVar14 = (uVar5 >> 0x10 ^ uVar5) * -0x7a143595;
  uVar14 = (uVar14 >> 0xd ^ uVar14) * -0x3d4d51cb;
  uVar13 = (ulonglong)(uVar14 >> 0x10 ^ uVar14);
  
  // 获取线程本地存储哈希表
  puVar7 = (ulonglong *)param_1[6];
  
  // 遍历哈希表链表查找线程数据
  for (puVar3 = puVar7; uVar6 = uVar13, puVar3 != (ulonglong *)0x0; puVar3 = (ulonglong *)puVar3[2])
  {
    while( true ) {
      // 计算哈希槽位索引
      uVar6 = uVar6 & *puVar3 - 1;
      uVar14 = *(uint *)(uVar6 * 0x10 + puVar3[1]);
      
      // 如果找到匹配的线程ID，返回对应的线程数据
      if (uVar14 == uVar5) {
        puVar15 = *(uint64_t **)(puVar3[1] + 8 + uVar6 * 0x10);
        if (puVar3 == puVar7) {
          return puVar15;
        }
        
        // 在主哈希表中添加缓存条目
        do {
          uVar13 = uVar13 & *puVar7 - 1;
          // 检查主哈希表中的空槽位
          if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
            puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
            LOCK();
            bVar17 = *puVar2 == 0;
            if (bVar17) {
              *puVar2 = uVar5;
            }
            UNLOCK();
            if (bVar17) {
              *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
              return puVar15;
            }
          }
          uVar13 = uVar13 + 1;
        } while( true );
      }
      if (uVar14 == 0) break;
      uVar6 = uVar6 + 1;
    }
  }
  
  // 增加活跃线程计数
  LOCK();
  plVar1 = param_1 + 7;
  lVar9 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  uVar6 = lVar9 + 1;
  puVar15 = (uint64_t *)0x0;
  
  // 检查是否需要扩展哈希表
  while( true ) {
    if (*puVar7 >> 1 <= uVar6) {
      // 设置扩展标志
      LOCK();
      puVar2 = (uint *)(param_1 + 0x4b);
      uVar14 = *puVar2;
      *puVar2 = *puVar2 | 1;
      UNLOCK();
      if ((uVar14 & 1) == 0) {
        // 执行哈希表扩展
        puVar3 = (ulonglong *)param_1[6];
        puVar7 = puVar3;
        uVar12 = *puVar3;
        if (*puVar3 >> 1 <= uVar6) {
          // 计算新的哈希表大小
          do {
            uVar4 = uVar12;
            uVar12 = uVar4 * 2;
          } while ((uVar4 & 0x7fffffffffffffff) <= uVar6);
          
          // 分配新的哈希表内存
          puVar7 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 0x20 + 0x1f,10);
          if (puVar7 == (ulonglong *)0x0) {
            // 分配失败，回滚计数器
            LOCK();
            param_1[7] = param_1[7] + -1;
            UNLOCK();
            *(int32_t *)(param_1 + 0x4b) = 0;
            return (uint64_t *)0x0;
          }
          
          // 初始化新的哈希表
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(uint64_t *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(int32_t *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(int32_t *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  // 查找可用的线程数据槽位
  puVar11 = (uint64_t *)*param_1;
  while (puVar11 != (uint64_t *)0x0) {
    if ((*(char *)(puVar11 + 2) != '\0') && (*(char *)(puVar11 + 9) == '\0')) {
      bVar17 = true;
      LOCK();
      bVar16 = *(char *)(puVar11 + 2) == '\x01';
      if (bVar16) {
        *(char *)(puVar11 + 2) = '\0';
      }
      UNLOCK();
      if (bVar16) goto LAB_18006d3bb;
    }
    plVar1 = puVar11 + 1;
    puVar11 = (uint64_t *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  
  // 没有找到可用槽位，创建新的线程数据结构
  bVar17 = false;
  puVar8 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (uint64_t *)0x0) {
    // 初始化新的线程数据结构
    puVar8[1] = 0;
    *(int8_t *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &unknown_var_3768_ptr;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(int8_t *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &unknown_var_3608_ptr;
    puVar8[0xb] = 0x20;
    puVar8[0xc] = 0;
    
    // 初始化线程数据结构
    FUN_18005f430(puVar8);
    
    // 增加线程数据计数
    LOCK();
    *(int *)(param_1 + 1) = (int)param_1[1] + 1;
    UNLOCK();
    
    // 将新的线程数据结构添加到链表头部
    lVar9 = *param_1;
    do {
      puVar11 = (uint64_t *)(lVar9 + 8);
      if (lVar9 == 0) {
        puVar11 = puVar15;
      }
      puVar8[1] = puVar11;
      LOCK();
      lVar10 = *param_1;
      bVar16 = lVar9 == lVar10;
      if (bVar16) {
        *param_1 = (longlong)puVar8;
        lVar10 = lVar9;
      }
      UNLOCK();
      lVar9 = lVar10;
      puVar11 = puVar8;
    } while (!bVar16);
  }
  
LAB_18006d3bb:
  // 检查是否成功分配了线程数据结构
  if (puVar11 == (uint64_t *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (uint64_t *)0x0;
  }
  
  // 如果是重用的数据结构，减少活跃线程计数
  if (bVar17) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
  }
  
  // 将线程数据结构插入到哈希表中
  do {
    uVar13 = uVar13 & *puVar7 - 1;
    if (*(int *)(puVar7[1] + uVar13 * 0x10) == 0) {
      puVar2 = (uint *)(puVar7[1] + uVar13 * 0x10);
      LOCK();
      bVar17 = *puVar2 == 0;
      if (bVar17) {
        *puVar2 = uVar5;
      }
      UNLOCK();
      if (bVar17) {
        *(uint64_t **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



/**
 * 处理内存块数据转换
 * 将源内存块数据转换为目标格式并进行处理
 * 原函数名：FUN_18006de00
 * 
 * @param result_ptr 结果指针
 * @param src_start 源数据起始地址
 * @param src_end 源数据结束地址
 * @param dest_start 目标数据起始地址
 * @return 返回结果指针
 */
longlong * ProcessMemoryBlockDataConversion(longlong *result_ptr, uint64_t *src_start, uint64_t *src_end, uint64_t *dest_start)

{
  uint64_t *puVar1;
  code *pcVar2;
  uint64_t *puVar3;
  void *puVar4;
  
  *result_ptr = (longlong)dest_start;
  if (src_start != src_end) {
    puVar3 = src_start + 0x2b;
    do {
      // 初始化目标数据结构
      *dest_start = &unknown_var_720_ptr;
      dest_start[1] = 0;
      *(int32_t *)(dest_start + 2) = 0;
      *dest_start = &unknown_var_2008_ptr;
      dest_start[1] = dest_start + 3;
      *(int32_t *)(dest_start + 2) = 0;
      *(int8_t *)(dest_start + 3) = 0;
      
      // 复制属性数据
      *(int32_t *)(dest_start + 2) = *(int32_t *)(puVar3 + -0x29);
      puVar4 = &system_buffer_ptr;
      if ((void *)puVar3[-0x2a] != (void *)0x0) {
        puVar4 = (void *)puVar3[-0x2a];
      }
      strcpy_s(dest_start[1], 0x100, puVar4);
      
      // 复制数据字段
      dest_start[0x23] = puVar3[-8];
      dest_start[0x24] = puVar3[-7];
      dest_start[0x25] = puVar3[-6];
      dest_start[0x26] = puVar3[-5];
      dest_start[0x27] = puVar3[-4];
      *(int8_t *)(dest_start + 0x28) = *(int8_t *)(puVar3 + -3);
      
      // 处理回调函数1
      dest_start[0x2b] = 0;
      dest_start[0x2c] = _guard_check_icall;
      if (dest_start + 0x29 != puVar3 + -2) {
        pcVar2 = (code *)*puVar3;
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(dest_start + 0x29, puVar3 + -2, 2);
          pcVar2 = (code *)*puVar3;
        }
        dest_start[0x2b] = pcVar2;
        dest_start[0x2c] = puVar3[1];
        *puVar3 = 0;
        puVar3[1] = _guard_check_icall;
      }
      
      // 处理回调函数2
      dest_start[0x2f] = 0;
      dest_start[0x30] = _guard_check_icall;
      if (dest_start + 0x2d != puVar3 + 2) {
        pcVar2 = (code *)puVar3[4];
        if (pcVar2 != (code *)0x0) {
          (*pcVar2)(dest_start + 0x2d, puVar3 + 2, 2);
          pcVar2 = (code *)puVar3[4];
        }
        dest_start[0x2f] = pcVar2;
        dest_start[0x30] = puVar3[5];
        puVar3[4] = 0;
        puVar3[5] = _guard_check_icall;
      }
      
      // 复制剩余数据
      dest_start[0x31] = puVar3[6];
      dest_start[0x32] = puVar3[7];
      dest_start[0x33] = puVar3[8];
      dest_start[0x34] = puVar3[9];
      
      // 移动到下一个数据块
      *result_ptr = *result_ptr + 0x1a8;
      dest_start = (uint64_t *)*result_ptr;
      puVar1 = puVar3 + 10;
      puVar3 = puVar3 + 0x35;
    } while (puVar1 != src_end);
  }
  return result_ptr;
}



/**
 * 分配指定大小的内存块
 * 从内存池中分配指定大小的内存块，如果需要则分割现有块
 * 原函数名：FUN_18006e000
 * 
 * @param pool_info 内存池信息指针
 * @param size 需要分配的内存大小
 * @return 成功返回分配的内存块指针，失败返回NULL
 */
longlong * AllocateMemoryBlockOfSize(longlong pool_info, longlong size)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  
  // 获取内存池管理器
  plVar5 = *(longlong **)(pool_info + 0x318);
  uVar4 = size + 0xfU & 0xfffffffffffffff0;  // 对齐到16字节边界
  plVar3 = (longlong *)0x0;
  plVar2 = (longlong *)plVar5[3];
  
  // 查找合适的空闲内存块
  if (plVar2 != (longlong *)0x0) {
    do {
      if ((((char)plVar2[4] == '\0') && (uVar4 <= (ulonglong)plVar2[1])) &&
         ((plVar3 == (longlong *)0x0 || ((ulonglong)plVar2[1] < (ulonglong)plVar3[1])))) {
        plVar3 = plVar2;  // 记录最佳匹配的内存块
      }
      plVar2 = (longlong *)plVar2[2];
    } while (plVar2 != (longlong *)0x0);
    
    if (plVar3 != (longlong *)0x0) {
      // 检查是否需要分割内存块
      if (uVar4 < (ulonglong)plVar3[1]) {
        // 分割内存块
        plVar2 = (longlong *)func_0x00018006e810(plVar5 + 4);
        *(int8_t *)(plVar2 + 4) = 0;
        *plVar2 = *plVar3 + uVar4;
        plVar2[1] = plVar3[1] - uVar4;
        lVar1 = plVar3[2];
        plVar2[2] = lVar1;
        if (lVar1 != 0) {
          *(longlong **)(lVar1 + 0x18) = plVar2;
        }
        plVar3[2] = (longlong)plVar2;
        plVar2[3] = (longlong)plVar3;
        plVar3[1] = uVar4;
      }
      
      // 标记内存块为已使用
      *(int8_t *)(plVar3 + 4) = 1;
      *plVar5 = *plVar5 + uVar4;
      plVar5[2] = plVar5[2] - uVar4;
      return plVar3;
    }
  }
  return (longlong *)0x0;
}



/**
 * 清理和销毁内存池管理器
 * 释放内存池管理器占用的所有资源，包括互斥锁、条件变量等
 * 原函数名：FUN_18006e0b0
 * 
 * @param manager 内存池管理器指针
 * @param flags 销毁标志，第0位为1时表示释放管理器内存
 * @return 传入的管理器指针
 */
longlong CleanupAndDestroyMemoryPoolManager(longlong manager, ulonglong flags)

{
  // 执行清理操作
  FUN_18006e5d0();
  _Mtx_destroy_in_situ();
  _Cnd_destroy_in_situ();
  FUN_18006e4a0(manager + 200);
  FUN_180049470(manager);
  
  // 根据标志决定是否释放管理器内存
  if ((flags & 1) != 0) {
    free(manager, 0x408);
  }
  
  return manager;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address