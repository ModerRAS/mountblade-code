#include "TaleWorlds.Native.Split.h"

// 01_initialization_part039.c - 内存池管理和线程安全操作模块

// 常量定义
#define MEMORY_POOL_INITIALIZED_STATE (&UNK_1809ff3e8)
#define MEMORY_POOL_COMPLETED_STATE (&UNK_1809ff488)
#define MEMORY_POOL_ENTRY_SIZE 0x1a8
#define MEMORY_POOL_BATCH_SIZE 32
#define MEMORY_POOL_BLOCK_HEADER_SIZE 0x3530
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
void InitializeMemoryPoolManager(undefined8 *pool_manager)

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
            *(undefined4 *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET) = 1;
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
    ProcessMemoryBlock((ulonglong)((uint)block_index & 0x1f) * MEMORY_POOL_ENTRY_SIZE + memory_block);
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
        *(undefined4 *)(memory_block + MEMORY_POOL_REF_COUNT_OFFSET) = 1;
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
    CleanupMemoryPoolSystem();
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
undefined8 * GetThreadLocalStorageData(longlong *thread_context)

{
  longlong *plVar1;
  uint *puVar2;
  ulonglong *puVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  uint uVar14;
  undefined8 *puVar15;
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
        puVar15 = *(undefined8 **)(puVar3[1] + 8 + uVar6 * 0x10);
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
              *(undefined8 **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar15;
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
  puVar15 = (undefined8 *)0x0;
  
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
            *(undefined4 *)(param_1 + 0x4b) = 0;
            return (undefined8 *)0x0;
          }
          
          // 初始化新的哈希表
          *puVar7 = uVar12;
          puVar7[1] = (ulonglong)(-(int)(puVar7 + 3) & 7) + (longlong)(puVar7 + 3);
          puVar11 = puVar15;
          for (; uVar12 != 0; uVar12 = uVar12 - 1) {
            *(undefined8 *)((longlong)puVar11 + puVar7[1] + 8) = 0;
            *(undefined4 *)((longlong)puVar11 + puVar7[1]) = 0;
            puVar11 = puVar11 + 2;
          }
          puVar7[2] = (ulonglong)puVar3;
          param_1[6] = (longlong)puVar7;
        }
        *(undefined4 *)(param_1 + 0x4b) = 0;
      }
    }
    if (uVar6 < (*puVar7 >> 2) + (*puVar7 >> 1)) break;
    puVar7 = (ulonglong *)param_1[6];
  }
  // 查找可用的线程数据槽位
  puVar11 = (undefined8 *)*param_1;
  while (puVar11 != (undefined8 *)0x0) {
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
    puVar11 = (undefined8 *)(*plVar1 + -8);
    if (*plVar1 == 0) {
      puVar11 = puVar15;
    }
  }
  
  // 没有找到可用槽位，创建新的线程数据结构
  bVar17 = false;
  puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x68,10);
  puVar11 = puVar15;
  if (puVar8 != (undefined8 *)0x0) {
    // 初始化新的线程数据结构
    puVar8[1] = 0;
    *(undefined1 *)(puVar8 + 2) = 0;
    puVar8[3] = 0;
    *puVar8 = &UNK_1809ff488;
    puVar8[4] = 0;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = 0;
    puVar8[8] = 0;
    *(undefined1 *)(puVar8 + 9) = 0;
    puVar8[10] = param_1;
    *puVar8 = &UNK_1809ff3e8;
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
      puVar11 = (undefined8 *)(lVar9 + 8);
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
  if (puVar11 == (undefined8 *)0x0) {
    LOCK();
    param_1[7] = param_1[7] + -1;
    UNLOCK();
    return (undefined8 *)0x0;
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
        *(undefined8 **)(puVar7[1] + 8 + uVar13 * 0x10) = puVar11;
        return puVar11;
      }
    }
    uVar13 = uVar13 + 1;
  } while( true );
}



/**
 * 释放线程本地存储数据
 * 根据标志位决定是否释放线程数据结构
 * 原函数名：FUN_18006d450
 * 
 * @param thread_data 线程数据指针
 * @param flags 释放标志位，第0位为1时表示需要释放内存
 * @return 返回传入的线程数据指针
 */
undefined8 FreeThreadLocalStorageData(undefined8 thread_data, ulonglong flags)

{
  // 确保内存池管理器已初始化
  FUN_18006cf00();
  
  // 如果标志位要求释放内存，则释放线程数据结构
  if ((flags & 1) != 0) {
    free(thread_data, 0x68);
  }
  
  return thread_data;
}



/**
 * 处理内存池分配请求
 * 遍历内存池链表，寻找合适的内存块进行分配
 * 原函数名：FUN_18006d4e0
 * 
 * @param pool_head 内存池链表头指针
 * @param alloc_params 分配参数
 * @return 成功返回1，失败返回0
 */
undefined8 ProcessMemoryPoolAllocation(ulonglong *pool_head, undefined8 alloc_params)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  uVar13 = 0;
  uVar7 = *pool_head;
  uVar8 = uVar13;
  uVar10 = uVar13;
  uVar12 = uVar13;
  
  // 遍历内存池链表，寻找最多3个合适的内存池
  do {
    uVar9 = uVar8;
    uVar11 = uVar10;
    if (uVar7 == 0) break;
    
    // 计算可用内存大小
    uVar6 = *(longlong *)(uVar7 + 0x20) - *(longlong *)(uVar7 + 0x28);
    if ((ulonglong)(*(longlong *)(uVar7 + 0x28) - *(longlong *)(uVar7 + 0x20)) < 0x8000000000000001)
    {
      uVar6 = uVar13;
    }
    
    // 记录最佳候选内存池
    if ((uVar6 != 0) && (uVar12 = uVar12 + 1, uVar9 = uVar7, uVar11 = uVar6, uVar6 <= uVar10)) {
      uVar9 = uVar8;
      uVar11 = uVar10;
    }
    
    // 移动到下一个内存池
    plVar1 = (longlong *)(uVar7 + 8);
    uVar7 = *plVar1 - 8;
    if (*plVar1 == 0) {
      uVar7 = uVar13;
    }
    uVar8 = uVar9;
    uVar10 = uVar11;
  } while (uVar12 < 3);
  
  // 如果找到候选内存池，尝试分配
  if (uVar12 != 0) {
    cVar5 = FUN_18006d810(uVar9, alloc_params, uVar7, uVar11, 0xfffffffffffffffe);
    if (cVar5 != '\0') {
      return 1;
    }
    
    // 遍历其他内存池尝试分配
    uVar7 = *pool_head;
    while (uVar7 != 0) {
      if (uVar7 != uVar9) {
        if (*(char *)(uVar7 + 0x48) == '\0') {
          // 简单分配模式
          cVar5 = FUN_18006da90(uVar7, alloc_params);
        }
        else {
          // 复杂分配模式，需要处理内存块管理
          if (0x8000000000000000 <
              (ulonglong)
              ((*(longlong *)(uVar7 + 0x30) - *(longlong *)(uVar7 + 0x38)) -
              *(longlong *)(uVar7 + 0x20))) {
            
            // 增加使用计数
            LOCK();
            plVar1 = (longlong *)(uVar7 + 0x30);
            lVar3 = *plVar1;
            *plVar1 = *plVar1 + 1;
            UNLOCK();
            
            if (0x8000000000000000 <
                (ulonglong)((lVar3 - *(longlong *)(uVar7 + 0x20)) - *(longlong *)(uVar7 + 0x38))) {
              
              // 处理内存块分配
              LOCK();
              puVar2 = (ulonglong *)(uVar7 + 0x28);
              uVar8 = *puVar2;
              *puVar2 = *puVar2 + 1;
              UNLOCK();
              
              // 计算内存块位置并初始化
              plVar1 = *(longlong **)(uVar7 + 0x58);
              lVar4 = *(longlong *)
                       (plVar1[2] + 8 +
                       (((uVar8 & 0xffffffffffffffe0) - *(longlong *)(plVar1[2] + plVar1[1] * 0x10)
                        >> 5) + plVar1[1] & *plVar1 - 1U) * 0x10);
              uVar8 = (ulonglong)((uint)uVar8 & 0x1f);
              lVar3 = uVar8 * 0x1a8 + lVar4;
              
              // 调用初始化函数
              FUN_18006dcb0(alloc_params, lVar3);
              FUN_180069530(lVar3);
              *(undefined1 *)((lVar4 - uVar8) + 0x352f) = 1;
              cVar5 = '\x01';
              goto LAB_18006d67d;
            }
            
            // 增加分配计数
            LOCK();
            *(longlong *)(uVar7 + 0x38) = *(longlong *)(uVar7 + 0x38) + 1;
            UNLOCK();
          }
          cVar5 = '\0';
        }
LAB_18006d67d:
        if (cVar5 != '\0') {
          return 1;
        }
      }
      
      // 移动到下一个内存池
      plVar1 = (longlong *)(uVar7 + 8);
      uVar7 = *plVar1 - 8;
      if (*plVar1 == 0) {
        uVar7 = uVar13;
      }
    }
  }
  return 0;
}



/**
 * 分配内存池中的下一个内存块
 * 处理内存池的分配逻辑，包括边界检查和扩展处理
 * 原函数名：FUN_18006d6c0
 * 
 * @param pool_info 内存池信息指针
 * @param param2 分配参数2
 * @param param3 分配参数3
 * @param param4 分配参数4
 * @return 成功返回1，失败返回0
 */
undefined8 AllocateNextMemoryBlock(longlong pool_info, undefined8 param2, undefined8 param3, undefined8 param4)

{
  ulonglong uVar1;
  longlong *plVar2;
  char cVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  uVar1 = *(ulonglong *)(pool_info + 0x20);
  
  // 检查是否有未对齐的内存块需要处理
  if ((uVar1 & 0x1f) != 0) {
    FUN_18006cd80((ulonglong)((uint)uVar1 & 0x1f) * 0x1a8 + *(longlong *)(pool_info + 0x40));
LAB_18006d7fb:
    *(ulonglong *)(pool_info + 0x20) = uVar1 + 1;
    return 1;
  }
  
  // 检查是否有足够的可用空间进行分配
  if ((0x8000000000000000 < (*(longlong *)(pool_info + 0x28) - uVar1) - 0x20) &&
     (plVar2 = *(longlong **)(pool_info + 0x60), plVar2 != (longlong *)0x0)) {
    
    // 计算哈希表中的下一个位置
    uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
    puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
    
    // 检查哈希槽位是否可用
    if ((*puVar5 == 1) || (puVar5[1] == 0)) {
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    else {
      // 槽位被占用，尝试重新分配
      cVar3 = FUN_18005f430(pool_info);
      if (cVar3 == '\0') {
        return 0;
      }
      plVar2 = *(longlong **)(pool_info + 0x60);
      uVar4 = *plVar2 - 1U & plVar2[1] + 1U;
      puVar5 = *(ulonglong **)(plVar2[3] + uVar4 * 8);
      *puVar5 = uVar1;
      plVar2[1] = uVar4;
    }
    
    // 处理内存块的初始化
    uVar4 = FUN_18006d920(*(undefined8 *)(pool_info + 0x50));
    if (uVar4 != 0) {
      *(undefined8 *)(uVar4 + 0x3508) = 0;
      FUN_18006cd80(uVar4, param2, param3, param4, uVar6);
      puVar5[1] = uVar4;
      *(ulonglong *)(pool_info + 0x40) = uVar4;
      goto LAB_18006d7fb;
    }
    
    // 分配失败，回滚哈希表状态
    plVar2 = *(longlong **)(pool_info + 0x60);
    plVar2[1] = *plVar2 - 1U & plVar2[1] - 1U;
    puVar5[1] = 0;
  }
  return 0;
}



/**
 * 从内存池分配指定内存块
 * 根据内存池类型和状态选择合适的分配策略
 * 原函数名：FUN_18006d810
 * 
 * @param pool_info 内存池信息指针
 * @param alloc_params 分配参数
 * @return 成功返回1，失败返回0
 */
undefined8 AllocateSpecificMemoryBlock(longlong pool_info, undefined8 alloc_params)

{
  longlong *plVar1;
  ulonglong *puVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  
  // 检查内存池类型
  if (*(char *)(pool_info + 0x48) == '\0') {
    // 简单内存池分配
    uVar7 = FUN_18006da90();
  }
  else {
    // 复杂内存池分配，需要管理内存块状态
    if (0x8000000000000000 <
        (ulonglong)
        ((*(longlong *)(pool_info + 0x30) - *(longlong *)(pool_info + 0x38)) -
        *(longlong *)(pool_info + 0x20))) {
      
      // 增加使用计数
      LOCK();
      plVar1 = (longlong *)(pool_info + 0x30);
      lVar3 = *plVar1;
      *plVar1 = *plVar1 + 1;
      UNLOCK();
      
      if (0x8000000000000000 <
          (ulonglong)((lVar3 - *(longlong *)(pool_info + 0x20)) - *(longlong *)(pool_info + 0x38))) {
        
        // 处理内存块分配
        LOCK();
        puVar2 = (ulonglong *)(pool_info + 0x28);
        uVar4 = *puVar2;
        *puVar2 = *puVar2 + 1;
        UNLOCK();
        
        // 计算内存块位置并初始化
        plVar1 = *(longlong **)(pool_info + 0x58);
        lVar5 = plVar1[2];
        lVar6 = *(longlong *)
                 (lVar5 + 8 +
                 (((uVar4 & 0xffffffffffffffe0) - *(longlong *)(lVar5 + plVar1[1] * 0x10) >> 5) +
                  plVar1[1] & *plVar1 - 1U) * 0x10);
        uVar8 = (ulonglong)((uint)uVar4 & 0x1f);
        lVar3 = uVar8 * 0x1a8 + lVar6;
        
        // 调用初始化函数
        FUN_18006dcb0(alloc_params, lVar3, plVar1, lVar5, 0xfffffffffffffffe, lVar6, uVar4);
        FUN_180069530(lVar3);
        *(undefined1 *)((lVar6 - uVar8) + 0x352f) = 1;
        return 1;
      }
      
      // 增加分配计数
      LOCK();
      *(longlong *)(pool_info + 0x38) = *(longlong *)(pool_info + 0x38) + 1;
      UNLOCK();
    }
    uVar7 = 0;
  }
  return uVar7;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 分配内存块描述符
 * 从预分配的内存块池中获取可用的内存块描述符
 * 原函数名：FUN_18006d920
 * 
 * @param descriptor_pool 描述符池指针
 * @return 成功返回内存块描述符指针，失败返回0
 */
longlong AllocateMemoryBlockDescriptor(longlong descriptor_pool)

{
  ulonglong *puVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  
  // 检查是否有预分配的可用描述符
  if (*(ulonglong *)(descriptor_pool + 0x10) < *(ulonglong *)(descriptor_pool + 0x20)) {
    LOCK();
    puVar1 = (ulonglong *)(descriptor_pool + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(ulonglong *)(descriptor_pool + 0x20)) &&
       (lVar6 = uVar4 * 0x3548 + *(longlong *)(descriptor_pool + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  
  // 从链表中查找可用的描述符
  lVar6 = *(longlong *)(descriptor_pool + 0x28);
LAB_18006d957:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_18006d9f6:
      // 没有可用的描述符，分配新的描述符
      lVar6 = FUN_18062b420(_DAT_180c8ed18, 0x3548, 10);
      if (lVar6 == 0) {
        return 0;
      }
      
      // 初始化新分配的描述符
      *(undefined8 *)(lVar6 + 0x3500) = 0;
      *(undefined8 *)(lVar6 + 0x3508) = 0;
      *(undefined4 *)(lVar6 + 0x3530) = 0;
      *(undefined8 *)(lVar6 + 0x3538) = 0;
      *(undefined2 *)(lVar6 + 0x3540) = 0x100;
      return lVar6;
    }
    // 检查描述符是否可用
    puVar2 = (uint *)(lVar9 + 0x3530);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_18006d9d7:
      // 描述符不可用，继续查找
      lVar6 = *(longlong *)(descriptor_pool + 0x28);
      goto LAB_18006d957;
    }
    
    // 尝试获取描述符所有权
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_18006d9d7;
    
    // 从链表中移除描述符
    LOCK();
    lVar6 = *(longlong *)(descriptor_pool + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(longlong *)(descriptor_pool + 0x28) = *(longlong *)(lVar9 + 0x3538);
      lVar6 = lVar9;
    }
    UNLOCK();
    
    if (bVar10) {
      // 成功获取描述符
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_18006d9f6;
    }
    
    // 释放所有权并继续查找
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    
    if (uVar5 == 0x80000001) {
      // 处理特殊的引用计数情况
      lVar8 = *(longlong *)(descriptor_pool + 0x28);
      do {
        *(longlong *)(lVar9 + 0x3538) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(longlong *)(descriptor_pool + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(longlong *)(descriptor_pool + 0x28) = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar10) break;
        LOCK();
        uVar5 = *puVar2;
        *puVar2 = *puVar2 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (uVar5 == 1);
    }
  } while( true );
}





/**
 * 释放内存块描述符
 * 清理内存块描述符并标记为可用状态
 * 原函数名：FUN_18006da50
 * 
 * @param descriptor 描述符指针
 */
void FreeMemoryBlockDescriptor(longlong *descriptor)

{
  // 调用清理函数释放内存块
  FUN_180069530((ulonglong)(*(uint *)(descriptor + 1) & 0x1f) * 0x1a8 + *descriptor);
  
  // 标记描述符为可用状态
  *(undefined1 *)((*descriptor - (ulonglong)(*(uint *)(descriptor + 1) & 0x1f)) + 0x352f) = 1;
  
  return;
}



/**
 * 执行快速内存分配
 * 在内存池中执行快速路径的内存分配操作
 * 原函数名：FUN_18006da90
 * 
 * @param pool_info 内存池信息指针
 * @param alloc_params 分配参数
 * @return 成功返回分配的内存地址，失败返回0
 */
ulonglong FastMemoryAllocation(longlong pool_info, undefined8 alloc_params)

{
  longlong *plVar1;
  ulonglong *puVar2;
  uint *puVar3;
  uint uVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  ulonglong uVar11;
  bool bVar12;
  
  // 计算可用内存空间
  uVar8 = (*(longlong *)(pool_info + 0x30) - *(longlong *)(pool_info + 0x38)) -
          *(longlong *)(pool_info + 0x20);
  
  if (0x8000000000000000 < uVar8) {
    // 增加使用计数
    LOCK();
    plVar1 = (longlong *)(pool_info + 0x30);
    lVar5 = *plVar1;
    *plVar1 = *plVar1 + 1;
    UNLOCK();
    
    uVar8 = *(ulonglong *)(pool_info + 0x20);
    if (0x8000000000000000 < (lVar5 - uVar8) - *(longlong *)(pool_info + 0x38)) {
      
      // 执行内存分配
      LOCK();
      puVar2 = (ulonglong *)(pool_info + 0x28);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      
      // 计算内存块位置
      plVar1 = *(longlong **)(pool_info + 0x60);
      uVar11 = (uVar8 & 0xffffffffffffffe0) - **(longlong **)(plVar1[3] + plVar1[1] * 8) >> 5;
      lVar5 = *(longlong *)(plVar1[3] + (plVar1[1] + uVar11 & *plVar1 - 1U) * 8);
      uVar6 = *(ulonglong *)(lVar5 + 8);
      lVar10 = (ulonglong)((uint)uVar8 & 0x1f) * 0x1a8 + uVar6;
      lVar7 = *(longlong *)(pool_info + 0x50);
      
      // 初始化内存块
      FUN_18006dcb0(alloc_params, lVar10, uVar11, plVar1, 0xfffffffffffffffe, uVar6, uVar8, lVar5);
      FUN_180069530(lVar10);
      
      // 更新内存块计数
      LOCK();
      puVar2 = (ulonglong *)(uVar6 + 0x3508);
      uVar8 = *puVar2;
      *puVar2 = *puVar2 + 1;
      UNLOCK();
      
      if (uVar8 == 0x1f) {
        // 内存块已满，执行清理操作
        *(undefined8 *)(lVar5 + 8) = 0;
        LOCK();
        puVar3 = (uint *)(uVar6 + 0x3530);
        uVar4 = *puVar3;
        *puVar3 = *puVar3 + 0x80000000;
        UNLOCK();
        uVar8 = (ulonglong)uVar4;
        
        if (uVar4 == 0) {
          // 将内存块返回到空闲链表
          uVar11 = *(ulonglong *)(lVar7 + 0x28);
          do {
            *(ulonglong *)(uVar6 + 0x3538) = uVar11;
            *(undefined4 *)(uVar6 + 0x3530) = 1;
            puVar2 = (ulonglong *)(lVar7 + 0x28);
            LOCK();
            uVar9 = *puVar2;
            bVar12 = uVar11 == uVar9;
            if (bVar12) {
              *puVar2 = uVar6;
              uVar9 = uVar11;
            }
            UNLOCK();
            uVar8 = uVar9;
            if (bVar12) break;
            LOCK();
            puVar3 = (uint *)(uVar6 + 0x3530);
            uVar4 = *puVar3;
            uVar8 = (ulonglong)uVar4;
            *puVar3 = *puVar3 + 0x7fffffff;
            UNLOCK();
            uVar11 = uVar9;
          } while (uVar4 == 1);
        }
      }
      return CONCAT71((int7)(uVar8 >> 8), 1);
    }
    
    // 增加分配计数
    LOCK();
    *(longlong *)(pool_info + 0x38) = *(longlong *)(pool_info + 0x38) + 1;
    UNLOCK();
  }
  return uVar8 & 0xffffffffffffff00;
}





// 函数: void FUN_18006dc10(longlong *param_1)
/**
 * 释放内存块并更新计数器
 * 释放指定的内存块并更新相关的计数器和链表状态
 * 原函数名：FUN_18006dc10
 * 
 * @param block_info 内存块信息指针
 */
void ReleaseMemoryBlockAndUpdateCounters(longlong *block_info)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  bool bVar8;
  
  // 释放内存块
  FUN_180069530((ulonglong)(*(uint *)(block_info + 1) & 0x1f) * 0x1a8 + *block_info);
  
  // 更新使用计数
  LOCK();
  plVar1 = (longlong *)(*block_info + 0x3508);
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + 1;
  UNLOCK();
  
  if (lVar4 == 0x1f) {
    // 内存块已满，执行清理操作
    *(undefined8 *)(block_info[2] + 8) = 0;
    lVar4 = *block_info;
    lVar5 = block_info[3];
    
    // 更新状态标志
    LOCK();
    piVar2 = (int *)(lVar4 + 0x3530);
    iVar3 = *piVar2;
    *piVar2 = *piVar2 + -0x80000000;
    UNLOCK();
    
    if (iVar3 == 0) {
      // 将内存块返回到空闲链表
      lVar7 = *(longlong *)(lVar5 + 0x28);
      do {
        *(longlong *)(lVar4 + 0x3538) = lVar7;
        *(undefined4 *)(lVar4 + 0x3530) = 1;
        plVar1 = (longlong *)(lVar5 + 0x28);
        LOCK();
        lVar6 = *plVar1;
        bVar8 = lVar7 == lVar6;
        if (bVar8) {
          *plVar1 = lVar4;
          lVar6 = lVar7;
        }
        UNLOCK();
        if (bVar8) {
          return;
        }
        LOCK();
        piVar2 = (int *)(lVar4 + 0x3530);
        iVar3 = *piVar2;
        *piVar2 = *piVar2 + 0x7fffffff;
        UNLOCK();
        lVar7 = lVar6;
      } while (iVar3 == 1);
    }
  }
  return;
}



/**
 * 复制内存块描述符数据
 * 将源内存块描述符的数据复制到目标描述符
 * 原函数名：FUN_18006dcb0
 * 
 * @param dest_desc 目标描述符指针
 * @param src_desc 源描述符指针
 * @return 返回目标描述符指针
 */
longlong CopyMemoryBlockDescriptorData(longlong dest_desc, longlong src_desc)

{
  longlong lVar1;
  undefined *puVar2;
  
  // 复制基本属性
  *(undefined4 *)(dest_desc + 0x10) = *(undefined4 *)(src_desc + 0x10);
  
  // 复制名称字符串
  puVar2 = &DAT_18098bc73;
  if (*(undefined **)(src_desc + 8) != (undefined *)0x0) {
    puVar2 = *(undefined **)(src_desc + 8);
  }
  strcpy_s(*(undefined8 *)(dest_desc + 8), 0x100, puVar2);
  
  // 复制各种属性字段
  *(undefined8 *)(dest_desc + 0x118) = *(undefined8 *)(src_desc + 0x118);
  lVar1 = dest_desc + 0x148;
  *(undefined8 *)(dest_desc + 0x120) = *(undefined8 *)(src_desc + 0x120);
  *(undefined8 *)(dest_desc + 0x128) = *(undefined8 *)(src_desc + 0x128);
  *(undefined8 *)(dest_desc + 0x130) = *(undefined8 *)(src_desc + 0x130);
  *(undefined8 *)(dest_desc + 0x138) = *(undefined8 *)(src_desc + 0x138);
  *(undefined1 *)(dest_desc + 0x140) = *(undefined1 *)(src_desc + 0x140);
  
  // 复制第一个扩展数据区域
  if (lVar1 != src_desc + 0x148) {
    if (*(code **)(dest_desc + 0x158) != (code *)0x0) {
      (**(code **)(dest_desc + 0x158))(lVar1, 0, 0);
    }
    FUN_180069130(lVar1, src_desc + 0x148);
  }
  
  // 复制第二个扩展数据区域
  lVar1 = dest_desc + 0x168;
  if (lVar1 != src_desc + 0x168) {
    if (*(code **)(dest_desc + 0x178) != (code *)0x0) {
      (**(code **)(dest_desc + 0x178))(lVar1, 0, 0);
    }
    FUN_180069130(lVar1, src_desc + 0x168);
  }
  
  // 复制剩余的属性字段
  *(undefined8 *)(dest_desc + 0x188) = *(undefined8 *)(src_desc + 0x188);
  *(undefined8 *)(dest_desc + 400) = *(undefined8 *)(src_desc + 400);
  *(undefined8 *)(dest_desc + 0x198) = *(undefined8 *)(src_desc + 0x198);
  *(undefined8 *)(dest_desc + 0x1a0) = *(undefined8 *)(src_desc + 0x1a0);
  
  return dest_desc;
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
longlong * ProcessMemoryBlockDataConversion(longlong *result_ptr, undefined8 *src_start, undefined8 *src_end, undefined8 *dest_start)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  *result_ptr = (longlong)dest_start;
  if (src_start != src_end) {
    puVar3 = src_start + 0x2b;
    do {
      // 初始化目标数据结构
      *dest_start = &UNK_18098bcb0;
      dest_start[1] = 0;
      *(undefined4 *)(dest_start + 2) = 0;
      *dest_start = &UNK_1809feda8;
      dest_start[1] = dest_start + 3;
      *(undefined4 *)(dest_start + 2) = 0;
      *(undefined1 *)(dest_start + 3) = 0;
      
      // 复制属性数据
      *(undefined4 *)(dest_start + 2) = *(undefined4 *)(puVar3 + -0x29);
      puVar4 = &DAT_18098bc73;
      if ((undefined *)puVar3[-0x2a] != (undefined *)0x0) {
        puVar4 = (undefined *)puVar3[-0x2a];
      }
      strcpy_s(dest_start[1], 0x100, puVar4);
      
      // 复制数据字段
      dest_start[0x23] = puVar3[-8];
      dest_start[0x24] = puVar3[-7];
      dest_start[0x25] = puVar3[-6];
      dest_start[0x26] = puVar3[-5];
      dest_start[0x27] = puVar3[-4];
      *(undefined1 *)(dest_start + 0x28) = *(undefined1 *)(puVar3 + -3);
      
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
      dest_start = (undefined8 *)*result_ptr;
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
        *(undefined1 *)(plVar2 + 4) = 0;
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
      *(undefined1 *)(plVar3 + 4) = 1;
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



