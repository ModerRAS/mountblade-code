#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 01_initialization_part031.c - 10 个函数（已完成转译）

/**
 * 转译完成说明：
 * 
 * 本文件包含10个函数，均已从原始的FUN_xxxxxxxx格式转译为语义化名称：
 * 
 * 1. InitializeEmptyFunction - 初始化空函数
 * 2. ProcessBatchObjectRegistration - 处理批量对象注册和内存管理
 * 3. OptimizedBatchObjectRegistration - 优化批量对象注册处理
 * 4. AllocateMemoryFromPool - 从对象池分配内存块
 * 5. SetObjectDataValue - 设置对象数据值
 * 6. CleanupObjectManagerResources - 清理对象管理器资源
 * 7. DestroyObjectManager - 销毁对象管理器
 * 8. CleanupObjectContainer - 清理对象容器
 * 9. DestroyObjectContainer - 销毁对象容器
 * 10. CleanupObjectPool - 清理对象池
 * 11. InitializeThreadManager - 初始化线程管理器
 * 12. CleanupThreadManager - 清理线程管理器
 * 13. FormatStringOutput - 格式化字符串输出
 * 
 * 主要功能模块：
 * - 内存管理和对象池操作
 * - 批量对象注册和处理
 * - 线程管理和同步
 * - 资源清理和销毁
 * - 字符串格式化输出
 * 
 * 所有函数均已添加详细的中文注释说明其功能和用途。
 */

/**
 * 初始化空函数 - 占位符函数，无实际功能
 * 原函数名: FUN_18005f54c
 */
void InitializeEmptyFunction(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 处理批量对象注册和内存管理
 * 这是一个复杂的内存管理函数，负责批量注册对象到系统中，处理环形缓冲区操作
 * 原函数名: FUN_18005f570
 */
uint64_t ProcessBatchObjectRegistration(int64_t objectManager, int64_t *objectArray, int64_t objectCount)

{
  uint *referenceCount;
  int32_t *blockData;
  uint currentRefCount;
  uint newRefCount;
  int64_t *poolInfo;
  int32_t data1;
  int32_t data2;
  int32_t data3;
  int64_t *nextPool;
  uint64_t currentObject;
  int64_t capacity;
  uint64_t poolStart;
  uint64_t objectData;
  uint64_t nextObject;
  uint64_t ringBuffer;
  uint64_t *ringBufferEntry;
  uint64_t processedCount;
  uint64_t remainingBytes;
  uint64_t newCapacity;
  int32_t *sourceBlock;
  int32_t *destBlock;
  int64_t processedItems;
  int64_t bytesToProcess;
  uint64_t totalObjects;
  bool isHeadNode;
  uint64_t stackOffset1;
  uint64_t stackOffset2;
  
  totalObjects = *(uint64_t *)(objectManager + 0x20);
  poolStart = *(uint64_t *)(objectManager + 0x40);
  ringBuffer = *(uint64_t *)(objectManager + 0x70);
  objectData = *(uint64_t *)(objectManager + 0x60);
  processedCount = 0;
  newCapacity = objectCount + totalObjects;
  stackOffset1 = totalObjects - 1 & 0xffffffffffffffe0;
  bytesToProcess = (newCapacity - 1 & 0xffffffffffffffe0) - stackOffset1;
  currentObject = processedCount;
  nextObject = processedCount;
  nextObject = poolStart;
  if (bytesToProcess != 0) {
    do {
      stackOffset2 = ringBuffer;
      nextObject = currentObject;
      if ((*(int64_t *)(objectManager + 0x40) == 0) ||
         (nextObject = *(uint64_t *)(*(int64_t *)(objectManager + 0x40) + 0x100), objectData = processedCount,
         nextObject == currentObject)) goto joined_r0x00018005f6ef;
      do {
        if (*(char *)(nextObject + 0x110 + objectData) == '\0') goto joined_r0x00018005f6ef;
        objectData = objectData + 1;
      } while (objectData < 0x20);
      stackOffset1 = stackOffset1 + 0x20;
      nextObject = *(uint64_t *)(*(int64_t *)(objectManager + 0x40) + 0x100);
      *(uint64_t *)(objectManager + 0x40) = nextObject;
      ringBufferEntry = (uint64_t *)
                (*(int64_t *)(*(int64_t *)(objectManager + 0x58) + 0x10) +
                *(int64_t *)(objectManager + 0x70) * 0x10);
      *ringBufferEntry = stackOffset1;
      ringBufferEntry[1] = *(uint64_t *)(objectManager + 0x40);
      *(uint64_t *)(objectManager + 0x70) =
           *(int64_t *)(objectManager + 0x68) - 1U & *(int64_t *)(objectManager + 0x70) + 1U;
      if (currentObject != 0) {
        nextObject = currentObject;
      }
      bytesToProcess = bytesToProcess + -0x20;
      currentObject = nextObject;
    } while (bytesToProcess != 0);
LAB_18005f6a2:
    bytesToProcess = 0;
    ringBuffer = nextObject;
    while( true ) {
      do {
        *(int8_t *)(ringBuffer + 0x110 + bytesToProcess) = 0;
        bytesToProcess = bytesToProcess + 1;
      } while (bytesToProcess != 0x20);
      nextObject = *(uint64_t *)(objectManager + 0x40);
      if (ringBuffer == nextObject) break;
      ringBuffer = *(uint64_t *)(ringBuffer + 0x100);
      bytesToProcess = 0;
    }
  }
  *(uint64_t *)(objectManager + 0x40) = poolStart;
  if ((totalObjects & 0x1f) == 0) {
    if (nextObject != 0) {
      poolStart = nextObject;
    }
    *(uint64_t *)(objectManager + 0x40) = poolStart;
  }
  while( true ) {
    ringBuffer = (totalObjects & 0xffffffffffffffe0) + 0x20;
    poolStart = newCapacity;
    if (newCapacity - ringBuffer < 0x8000000000000001) {
      poolStart = ringBuffer;
    }
    for (; totalObjects != poolStart; totalObjects = totalObjects + 1) {
      poolInfo = (int64_t *)*objectArray;
      *(int64_t **)(*(int64_t *)(objectManager + 0x40) + (uint64_t)((uint)totalObjects & 0x1f) * 8) = poolInfo;
      if (poolInfo != (int64_t *)0x0) {
        (**(code **)(*poolInfo + 0x28))();
      }
      objectArray = objectArray + 1;
    }
    poolStart = *(uint64_t *)(objectManager + 0x40);
    if (poolStart == nextObject) break;
    *(uint64_t *)(objectManager + 0x40) = *(uint64_t *)(poolStart + 0x100);
  }
  if (nextObject != 0) {
    poolStart = *(int64_t *)(objectManager + 0x68) - 1;
    *(uint64_t *)(*(int64_t *)(objectManager + 0x58) + 8) = *(int64_t *)(objectManager + 0x70) - 1U & poolStart;
  }
  *(uint64_t *)(objectManager + 0x20) = newCapacity;
  return CONCAT71((int7)(poolStart >> 8),1);
joined_r0x00018005f6ef:
  if (bytesToProcess == 0) goto LAB_18005f6a2;
  bytesToProcess = bytesToProcess + -0x20;
  stackOffset1 = stackOffset1 + 0x20;
  nextObject = (*(int64_t *)(objectManager + 0x28) - stackOffset1) - 0x20;
  poolInfo = (int64_t *)(objectManager + 0x68);
  if ((*(int64_t *)(objectManager + 0x80) == 0) || (*(int64_t *)(objectManager + 0x60) == *poolInfo)) {
    if (0x8000000000000000 < nextObject) {
      capacity = *poolInfo;
      *poolInfo = capacity * 2;
      nextPool = (int64_t *)AllocateMemoryFromPool(system_memory_pool_ptr,capacity * 0x20 + 0x27,10);
      if (nextPool != (int64_t *)0x0) {
        destBlock = (int32_t *)((uint64_t)(-(int)(nextPool + 4) & 7) + (int64_t)(nextPool + 4));
        processedItems = 0;
        if (*(int64_t *)(objectManager + 0x60) != 0) {
          ringBuffer = *(int64_t *)(objectManager + 0x70) - *(int64_t *)(objectManager + 0x60) & capacity - 1U;
          sourceBlock = destBlock;
          do {
            blockData = (int32_t *)(*(int64_t *)(objectManager + 0x78) + ringBuffer * 0x10);
            data1 = blockData[1];
            data2 = blockData[2];
            data3 = blockData[3];
            *sourceBlock = *blockData;
            sourceBlock[1] = data1;
            sourceBlock[2] = data2;
            sourceBlock[3] = data3;
            processedItems = processedItems + 1;
            sourceBlock = sourceBlock + 4;
            ringBuffer = ringBuffer + 1 & capacity - 1U;
          } while (ringBuffer != *(uint64_t *)(objectManager + 0x70));
        }
        *nextPool = *poolInfo;
        nextPool[1] = objectData - 1;
        nextPool[2] = (int64_t)destBlock;
        nextPool[3] = *(int64_t *)(objectManager + 0x80);
        *(int64_t *)(objectManager + 0x70) = processedItems;
        *(int32_t **)(objectManager + 0x78) = destBlock;
        *(int64_t **)(objectManager + 0x80) = nextPool;
        *(int64_t **)(objectManager + 0x58) = nextPool;
        ringBuffer = objectData;
        stackOffset2 = objectData;
        goto LAB_18005f818;
      }
      *(uint64_t *)(objectManager + 0x68) = *(uint64_t *)(objectManager + 0x68) >> 1;
      ringBuffer = stackOffset2;
    }
LAB_18005fa1c:
    *(uint64_t *)(objectManager + 0x70) = ringBuffer;
    *(uint64_t *)(objectManager + 0x60) = objectData;
    if (poolStart == 0) {
      poolStart = nextObject;
    }
    *(uint64_t *)(objectManager + 0x40) = poolStart;
LAB_18005fa01:
    return objectData & 0xffffffffffffff00;
  }
  if (nextObject < 0x8000000000000001) goto LAB_18005fa1c;
LAB_18005f818:
  capacity = *(int64_t *)(objectManager + 0x50);
  if (*(uint64_t *)(capacity + 0x20) <= *(uint64_t *)(capacity + 0x10)) {
LAB_18005f848:
    currentObject = *(uint64_t *)(capacity + 0x28);
LAB_18005f84c:
    nextObject = currentObject;
    if (nextObject != 0) {
      referenceCount = (uint *)(nextObject + 0x130);
      newRefCount = *referenceCount;
      if ((newRefCount & 0x7fffffff) == 0) {
LAB_18005f8c7:
        currentObject = *(uint64_t *)(capacity + 0x28);
      }
      else {
        LOCK();
        currentRefCount = *referenceCount;
        if (newRefCount == currentRefCount) {
          *referenceCount = newRefCount + 1;
        }
        UNLOCK();
        if (newRefCount != currentRefCount) goto LAB_18005f8c7;
        LOCK();
        currentObject = *(uint64_t *)(capacity + 0x28);
        isHeadNode = nextObject == currentObject;
        if (isHeadNode) {
          *(uint64_t *)(capacity + 0x28) = *(uint64_t *)(nextObject + 0x138);
          currentObject = nextObject;
        }
        UNLOCK();
        if (isHeadNode) {
          LOCK();
          *referenceCount = *referenceCount - 2;
          UNLOCK();
          if (nextObject != 0) goto LAB_18005f92b;
          goto LAB_18005f8e3;
        }
        LOCK();
        newRefCount = *referenceCount;
        *referenceCount = *referenceCount - 1;
        UNLOCK();
        if (newRefCount == 0x80000001) {
          processedCount = *(uint64_t *)(capacity + 0x28);
          do {
            *(uint64_t *)(nextObject + 0x138) = processedCount;
            *referenceCount = 1;
            LOCK();
            objectData = *(uint64_t *)(capacity + 0x28);
            isHeadNode = processedCount == objectData;
            if (isHeadNode) {
              *(uint64_t *)(capacity + 0x28) = nextObject;
              objectData = processedCount;
            }
            UNLOCK();
            if (isHeadNode) break;
            LOCK();
            newRefCount = *referenceCount;
            *referenceCount = *referenceCount + 0x7fffffff;
            UNLOCK();
            processedCount = objectData;
          } while (newRefCount == 1);
        }
      }
      goto LAB_18005f84c;
    }
LAB_18005f8e3:
    nextObject = AllocateMemoryFromPool(system_memory_pool_ptr,0x148,CONCAT71((int7)(nextObject >> 8),10));
    if (nextObject != 0) {
      *(uint64_t *)(nextObject + 0x100) = 0;
      *(uint64_t *)(nextObject + 0x108) = 0;
      *(int32_t *)(nextObject + 0x130) = 0;
      *(uint64_t *)(nextObject + 0x138) = 0;
      *(int16_t *)(nextObject + 0x140) = 0x100;
      goto LAB_18005f92b;
    }
LAB_18005f9e1:
    *(uint64_t *)(objectManager + 0x70) = ringBuffer;
    *(uint64_t *)(objectManager + 0x60) = objectData;
    objectData = poolStart;
    if (poolStart == 0) {
      objectData = nextObject;
    }
    *(uint64_t *)(objectManager + 0x40) = objectData;
    goto LAB_18005fa01;
  }
  LOCK();
  ringBufferEntry = (uint64_t *)(capacity + 0x10);
  nextObject = *ringBufferEntry;
  *ringBufferEntry = *ringBufferEntry + 1;
  UNLOCK();
  if ((*(uint64_t *)(capacity + 0x20) <= nextObject) ||
     (nextObject = nextObject * 0x148 + *(int64_t *)(capacity + 0x18), nextObject == 0)) goto LAB_18005f848;
LAB_18005f92b:
  capacity = 0;
  if (nextObject == 0) goto LAB_18005f9e1;
  do {
    *(int8_t *)(nextObject + 0x110 + capacity) = 1;
    capacity = capacity + 1;
  } while (capacity != 0x20);
  if (*(int64_t *)(objectManager + 0x40) == 0) {
    *(uint64_t *)(nextObject + 0x100) = nextObject;
  }
  else {
    *(uint64_t *)(nextObject + 0x100) = *(uint64_t *)(*(int64_t *)(objectManager + 0x40) + 0x100);
    *(uint64_t *)(*(int64_t *)(objectManager + 0x40) + 0x100) = nextObject;
  }
  *(uint64_t *)(objectManager + 0x40) = nextObject;
  if (nextObject != 0) {
    nextObject = nextObject;
  }
  *(int64_t *)(objectManager + 0x60) = *(int64_t *)(objectManager + 0x60) + 1;
  ringBufferEntry = (uint64_t *)
            (*(int64_t *)(*(int64_t *)(objectManager + 0x58) + 0x10) +
            *(int64_t *)(objectManager + 0x70) * 0x10);
  *ringBufferEntry = stackOffset1;
  ringBufferEntry[1] = *(uint64_t *)(objectManager + 0x40);
  *(uint64_t *)(objectManager + 0x70) = *(int64_t *)(objectManager + 0x70) + 1U & *poolInfo - 1U;
  nextObject = nextObject;
  goto joined_r0x00018005f6ef;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 优化批量对象注册处理
 * 这是一个改进版本的批量对象注册函数，提供更高效的内存管理
 * 原函数名: FUN_18005fb30
 */
uint64_t OptimizedBatchObjectRegistration(int64_t objectManager, int64_t *objectArray, int64_t objectCount)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  char cVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t uVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  bool bVar21;
  
  uVar16 = *(uint64_t *)(param_1 + 0x20);
  uVar17 = *(uint64_t *)(param_1 + 0x40);
  uVar13 = uVar16 + param_3;
  uVar18 = uVar16 - 1 & 0xffffffffffffffe0;
  lVar19 = (uVar13 - 1 & 0xffffffffffffffe0) - uVar18;
  uVar14 = uVar17;
  uVar10 = uVar18;
  uVar7 = 0;
  while( true ) {
    if (lVar19 == 0) {
      *(uint64_t *)(param_1 + 0x40) = uVar17;
      if ((uVar16 & 0x1f) == 0) {
        if (uVar7 != 0) {
          uVar17 = uVar7;
        }
        *(uint64_t *)(param_1 + 0x40) = uVar17;
      }
      while( true ) {
        uVar10 = (uVar16 & 0xffffffffffffffe0) + 0x20;
        uVar17 = uVar13;
        if (uVar13 - uVar10 < 0x8000000000000001) {
          uVar17 = uVar10;
        }
        for (; uVar16 != uVar17; uVar16 = uVar16 + 1) {
          plVar5 = (int64_t *)*param_2;
          *(int64_t **)(*(int64_t *)(param_1 + 0x40) + (uint64_t)((uint)uVar16 & 0x1f) * 8) =
               plVar5;
          if (plVar5 != (int64_t *)0x0) {
            (**(code **)(*plVar5 + 0x28))();
          }
          param_2 = param_2 + 1;
        }
        uVar17 = *(uint64_t *)(param_1 + 0x40);
        if (uVar17 == uVar14) break;
        *(uint64_t *)(param_1 + 0x40) = *(uint64_t *)(uVar17 + 0x100);
      }
      *(uint64_t *)(param_1 + 0x20) = uVar13;
      return CONCAT71((int7)(uVar17 >> 8),1);
    }
    lVar19 = lVar19 + -0x20;
    uVar10 = uVar10 + 0x20;
    uVar8 = uVar7;
    if (((*(int64_t *)(param_1 + 0x28) - uVar10) - 0x20 < 0x8000000000000001) ||
       (plVar5 = *(int64_t **)(param_1 + 0x60), plVar5 == (int64_t *)0x0))
    goto joined_r0x00018005fdcd;
    uVar14 = *plVar5 - 1U & plVar5[1] + 1U;
    puVar20 = *(uint64_t **)(plVar5[3] + uVar14 * 8);
    if ((*puVar20 == 1) || (puVar20[1] == 0)) {
      *puVar20 = uVar10;
      plVar5[1] = uVar14;
    }
    else {
      cVar9 = FUN_18005f430(param_1);
      if (cVar9 == '\0') goto joined_r0x00018005fdcd;
      plVar5 = *(int64_t **)(param_1 + 0x60);
      uVar14 = *plVar5 - 1U & plVar5[1] + 1U;
      puVar20 = *(uint64_t **)(plVar5[3] + uVar14 * 8);
      *puVar20 = uVar10;
      plVar5[1] = uVar14;
    }
    lVar6 = *(int64_t *)(param_1 + 0x50);
    if (*(uint64_t *)(lVar6 + 0x20) <= *(uint64_t *)(lVar6 + 0x10)) break;
    LOCK();
    puVar1 = (uint64_t *)(lVar6 + 0x10);
    uVar14 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((*(uint64_t *)(lVar6 + 0x20) <= uVar14) ||
       (uVar14 = uVar14 * 0x148 + *(int64_t *)(lVar6 + 0x18), uVar14 == 0)) break;
LAB_18005fd51:
    if (uVar14 == 0) goto LAB_18005fda6;
LAB_18005fd56:
    *(uint64_t *)(uVar14 + 0x108) = 0;
    *(uint64_t *)(uVar14 + 0x100) = 0;
    puVar20[1] = uVar14;
    if (((uVar16 & 0x1f) != 0) || (uVar7 != 0)) {
      *(uint64_t *)(*(int64_t *)(param_1 + 0x40) + 0x100) = uVar14;
    }
    *(uint64_t *)(param_1 + 0x40) = uVar14;
    if (uVar7 == 0) {
      uVar7 = uVar14;
    }
  }
  uVar11 = *(uint64_t *)(lVar6 + 0x28);
LAB_18005fc81:
  uVar14 = uVar11;
  if (uVar14 != 0) {
    puVar2 = (uint *)(uVar14 + 0x130);
    uVar4 = *puVar2;
    if ((uVar4 & 0x7fffffff) == 0) {
LAB_18005fcf9:
      uVar11 = *(uint64_t *)(lVar6 + 0x28);
    }
    else {
      LOCK();
      uVar3 = *puVar2;
      if (uVar4 == uVar3) {
        *puVar2 = uVar4 + 1;
      }
      UNLOCK();
      if (uVar4 != uVar3) goto LAB_18005fcf9;
      LOCK();
      uVar11 = *(uint64_t *)(lVar6 + 0x28);
      bVar21 = uVar14 == uVar11;
      if (bVar21) {
        *(uint64_t *)(lVar6 + 0x28) = *(uint64_t *)(uVar14 + 0x138);
        uVar11 = uVar14;
      }
      UNLOCK();
      if (bVar21) {
        LOCK();
        *puVar2 = *puVar2 - 2;
        UNLOCK();
        if (uVar14 != 0) goto LAB_18005fd56;
        goto LAB_18005fd0d;
      }
      LOCK();
      uVar4 = *puVar2;
      *puVar2 = *puVar2 - 1;
      UNLOCK();
      if (uVar4 == 0x80000001) {
        uVar15 = *(uint64_t *)(lVar6 + 0x28);
        do {
          *(uint64_t *)(uVar14 + 0x138) = uVar15;
          *puVar2 = 1;
          LOCK();
          uVar12 = *(uint64_t *)(lVar6 + 0x28);
          bVar21 = uVar15 == uVar12;
          if (bVar21) {
            *(uint64_t *)(lVar6 + 0x28) = uVar14;
            uVar12 = uVar15;
          }
          UNLOCK();
          if (bVar21) break;
          LOCK();
          uVar4 = *puVar2;
          *puVar2 = *puVar2 + 0x7fffffff;
          UNLOCK();
          uVar15 = uVar12;
        } while (uVar4 == 1);
      }
    }
    goto LAB_18005fc81;
  }
LAB_18005fd0d:
  uVar14 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x148,CONCAT71((int7)((uint64_t)lVar6 >> 8),10));
  if (uVar14 != 0) {
    *(uint64_t *)(uVar14 + 0x100) = 0;
    *(uint64_t *)(uVar14 + 0x108) = 0;
    *(int32_t *)(uVar14 + 0x130) = 0;
    *(uint64_t *)(uVar14 + 0x138) = 0;
    *(int16_t *)(uVar14 + 0x140) = 0x100;
    goto LAB_18005fd51;
  }
LAB_18005fda6:
  plVar5 = *(int64_t **)(param_1 + 0x60);
  plVar5[1] = plVar5[1] - 1U & *plVar5 - 1U;
  puVar20[1] = 0;
joined_r0x00018005fdcd:
  for (; uVar8 != 0; uVar8 = *(uint64_t *)(uVar8 + 0x100)) {
    uVar18 = uVar18 + 0x20;
    plVar5 = *(int64_t **)(param_1 + 0x60);
    *(uint64_t *)
     (*(int64_t *)
       (plVar5[3] +
       ((uVar18 - **(int64_t **)(plVar5[3] + plVar5[1] * 8) >> 5) + plVar5[1] & *plVar5 - 1U) * 8)
     + 8) = 0;
    plVar5 = *(int64_t **)(param_1 + 0x60);
    plVar5[1] = plVar5[1] - 1U & *plVar5 - 1U;
  }
  uVar13 = func_0x000180060150(*(uint64_t *)(param_1 + 0x50),uVar7);
  *(uint64_t *)(param_1 + 0x40) = uVar17;
  return uVar13 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

/**
 * 从对象池分配内存块
 * 从内存池中分配一个新的内存块，处理引用计数和内存管理
 * 原函数名: FUN_18005ff50
 */
int64_t AllocateMemoryFromPool(int64_t memoryPool)

{
  uint64_t *puVar1;
  uint *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  bool bVar10;
  
  if (*(uint64_t *)(param_1 + 0x10) < *(uint64_t *)(param_1 + 0x20)) {
    LOCK();
    puVar1 = (uint64_t *)(param_1 + 0x10);
    uVar4 = *puVar1;
    *puVar1 = *puVar1 + 1;
    UNLOCK();
    if ((uVar4 < *(uint64_t *)(param_1 + 0x20)) &&
       (lVar6 = uVar4 * 0x148 + *(int64_t *)(param_1 + 0x18), lVar6 != 0)) {
      return lVar6;
    }
  }
  lVar6 = *(int64_t *)(param_1 + 0x28);
LAB_18005ff87:
  do {
    lVar9 = lVar6;
    if (lVar9 == 0) {
LAB_180060026:
      lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x148,10);
      if (lVar6 == 0) {
        return 0;
      }
      *(uint64_t *)(lVar6 + 0x100) = 0;
      *(uint64_t *)(lVar6 + 0x108) = 0;
      *(int32_t *)(lVar6 + 0x130) = 0;
      *(uint64_t *)(lVar6 + 0x138) = 0;
      *(int16_t *)(lVar6 + 0x140) = 0x100;
      return lVar6;
    }
    puVar2 = (uint *)(lVar9 + 0x130);
    uVar5 = *puVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
LAB_180060007:
      lVar6 = *(int64_t *)(param_1 + 0x28);
      goto LAB_18005ff87;
    }
    LOCK();
    uVar3 = *puVar2;
    if (uVar5 == uVar3) {
      *puVar2 = uVar5 + 1;
    }
    UNLOCK();
    if (uVar5 != uVar3) goto LAB_180060007;
    LOCK();
    lVar6 = *(int64_t *)(param_1 + 0x28);
    bVar10 = lVar9 == lVar6;
    if (bVar10) {
      *(int64_t *)(param_1 + 0x28) = *(int64_t *)(lVar9 + 0x138);
      lVar6 = lVar9;
    }
    UNLOCK();
    if (bVar10) {
      LOCK();
      *puVar2 = *puVar2 - 2;
      UNLOCK();
      if (lVar9 != 0) {
        return lVar9;
      }
      goto LAB_180060026;
    }
    LOCK();
    uVar5 = *puVar2;
    *puVar2 = *puVar2 - 1;
    UNLOCK();
    if (uVar5 == 0x80000001) {
      lVar8 = *(int64_t *)(param_1 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x138) = lVar8;
        *puVar2 = 1;
        LOCK();
        lVar7 = *(int64_t *)(param_1 + 0x28);
        bVar10 = lVar8 == lVar7;
        if (bVar10) {
          *(int64_t *)(param_1 + 0x28) = lVar9;
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
 * 设置对象数据值
 * 为指定对象设置数据值，处理内存池操作
 * 原函数名: FUN_180060080
 */
uint64_t SetObjectDataValue(int64_t objectManager, int64_t *dataPointer, uint64_t dataValue)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t in_RAX;
  uint64_t uVar5;
  
  plVar1 = *(int64_t **)(param_1 + 0x60);
  if (plVar1 != (int64_t *)0x0) {
    uVar5 = *plVar1 - 1U & plVar1[1] + 1U;
    plVar2 = *(int64_t **)(plVar1[3] + uVar5 * 8);
    *param_2 = (int64_t)plVar2;
    if ((*plVar2 == 1) || (*(int64_t *)(*param_2 + 8) == 0)) {
      puVar4 = (uint64_t *)*param_2;
      *puVar4 = param_3;
      plVar1[1] = uVar5;
      return CONCAT71((int7)((uint64_t)puVar4 >> 8),1);
    }
    in_RAX = FUN_18005f430();
    if ((char)in_RAX != '\0') {
      plVar1 = *(int64_t **)(param_1 + 0x60);
      uVar5 = *plVar1 - 1U & plVar1[1] + 1U;
      lVar3 = plVar1[3];
      puVar4 = *(uint64_t **)(lVar3 + uVar5 * 8);
      *param_2 = (int64_t)puVar4;
      *puVar4 = param_3;
      plVar1[1] = uVar5;
      return CONCAT71((int7)((uint64_t)lVar3 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



/**
 * 清理对象管理器资源
 * 清理对象管理器占用的资源，根据标志决定是否释放内存
 * 原函数名: FUN_1800601c0
 */
uint64_t CleanupObjectManagerResources(uint64_t objectManager, uint64_t freeMemoryFlag)

{
  FUN_180060200();
  if ((param_2 & 1) != 0) {
    free(param_1,0x88);
  }
  return param_1;
}





// 函数: void FUN_180060200(uint64_t *param_1)
/**
 * 销毁对象管理器
 * 完全销毁对象管理器，清理所有相关资源和内存
 * 原函数名: FUN_180060200
 */
void DestroyObjectManager(uint64_t *objectManager)

{
  int64_t *plVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  int64_t lVar11;
  bool bVar12;
  
  *param_1 = &unknown_var_9008_ptr;
  if (param_1[8] != 0) {
    lVar11 = 0;
    if ((param_1[5] & 0x1f) != 0) {
      uVar10 = param_1[0xe] - param_1[0xc];
      uVar5 = param_1[0xd] - 1;
      while( true ) {
        uVar10 = uVar10 & uVar5;
        if ((uint64_t)((*(int64_t *)(param_1[0xf] + uVar10 * 0x10) + 0x20) - param_1[5]) <
            0x8000000000000001) break;
        uVar5 = uVar10 + 1;
        uVar10 = param_1[0xd] - 1;
      }
      lVar11 = *(int64_t *)(param_1[0xf] + 8 + uVar10 * 0x10);
    }
    lVar9 = param_1[8];
LAB_1800602a0:
    lVar9 = *(int64_t *)(lVar9 + 0x100);
    uVar5 = 0;
    do {
      if (*(char *)(lVar9 + 0x110 + uVar5) == '\0') {
        uVar5 = 0;
        if (lVar9 == lVar11) {
          uVar5 = (uint64_t)((uint)param_1[5] & 0x1f);
        }
        if ((param_1[4] & 0x1f) == 0) {
          uVar10 = 0x20;
        }
        else {
          uVar10 = (uint64_t)((uint)param_1[4] & 0x1f);
        }
        goto LAB_1800602f0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < 0x20);
    goto LAB_18006031a;
  }
LAB_18006039b:
  if (param_1[0x10] == 0) {
    *param_1 = &unknown_var_9040_ptr;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
  while( true ) {
    uVar4 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    plVar1 = *(int64_t **)(lVar9 + (uint64_t)(uVar4 & 0x1f) * 8);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    if (uVar5 == 0x20) break;
LAB_1800602f0:
    if ((lVar9 == param_1[8]) && (uVar5 == uVar10)) break;
  }
LAB_18006031a:
  lVar7 = param_1[8];
  if (lVar9 == lVar7) goto code_r0x000180060327;
  goto LAB_1800602a0;
code_r0x000180060327:
  if (lVar7 != 0) {
    do {
      lVar11 = *(int64_t *)(lVar7 + 0x100);
      if (*(char *)(lVar7 + 0x141) != '\0') {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar9 = param_1[10];
      LOCK();
      piVar2 = (int *)(lVar7 + 0x130);
      iVar3 = *piVar2;
      *piVar2 = *piVar2 + -0x80000000;
      UNLOCK();
      if (iVar3 == 0) {
        lVar8 = *(int64_t *)(lVar9 + 0x28);
        do {
          *(int64_t *)(lVar7 + 0x138) = lVar8;
          *(int32_t *)(lVar7 + 0x130) = 1;
          plVar1 = (int64_t *)(lVar9 + 0x28);
          LOCK();
          lVar6 = *plVar1;
          bVar12 = lVar8 == lVar6;
          if (bVar12) {
            *plVar1 = lVar7;
            lVar6 = lVar8;
          }
          UNLOCK();
          if (bVar12) break;
          LOCK();
          piVar2 = (int *)(lVar7 + 0x130);
          iVar3 = *piVar2;
          *piVar2 = *piVar2 + 0x7fffffff;
          UNLOCK();
          lVar8 = lVar6;
        } while (iVar3 == 1);
      }
      lVar7 = lVar11;
    } while (lVar11 != param_1[8]);
  }
  goto LAB_18006039b;
}



/**
 * 清理对象容器
 * 清理对象容器并处理相关资源，根据标志决定是否释放内存
 * 原函数名: FUN_1800603e0
 */
uint64_t CleanupObjectContainer(uint64_t objectContainer, uint64_t freeMemoryFlag)

{
  FUN_180060420();
  if ((param_2 & 1) != 0) {
    free(param_1,0x68);
  }
  return param_1;
}





// 函数: void FUN_180060420(uint64_t *param_1)
/**
 * 销毁对象容器
 * 完全销毁对象容器，清理所有对象和相关资源
 * 原函数名: FUN_180060420
 */
void DestroyObjectContainer(uint64_t *objectContainer)

{
  int *piVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t uVar10;
  bool bVar11;
  
  *param_1 = &unknown_var_9024_ptr;
  uVar3 = param_1[4];
  lVar9 = 0;
  uVar4 = param_1[5];
  for (uVar10 = uVar4; uVar10 != uVar3; uVar10 = uVar10 + 1) {
    if ((uVar10 & 0x1f) == 0) {
      if (lVar9 != 0) {
        lVar6 = param_1[10];
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -0x80000000;
        UNLOCK();
        if (iVar2 == 0) {
          lVar8 = *(int64_t *)(lVar6 + 0x28);
          do {
            *(int64_t *)(lVar9 + 0x138) = lVar8;
            *(int32_t *)(lVar9 + 0x130) = 1;
            plVar5 = (int64_t *)(lVar6 + 0x28);
            LOCK();
            lVar7 = *plVar5;
            bVar11 = lVar8 == lVar7;
            if (bVar11) {
              *plVar5 = lVar9;
              lVar7 = lVar8;
            }
            UNLOCK();
            if (bVar11) break;
            LOCK();
            piVar1 = (int *)(lVar9 + 0x130);
            iVar2 = *piVar1;
            *piVar1 = *piVar1 + 0x7fffffff;
            UNLOCK();
            lVar8 = lVar7;
          } while (iVar2 == 1);
        }
      }
LAB_1800604d1:
      plVar5 = (int64_t *)param_1[0xc];
      lVar9 = *(int64_t *)
               (*(int64_t *)
                 (plVar5[3] +
                 (((uVar10 & 0xffffffffffffffe0) - **(int64_t **)(plVar5[3] + plVar5[1] * 8) >> 5)
                  + plVar5[1] & *plVar5 - 1U) * 8) + 8);
    }
    else if (lVar9 == 0) goto LAB_1800604d1;
    plVar5 = *(int64_t **)(lVar9 + (uint64_t)((uint)uVar10 & 0x1f) * 8);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))();
    }
  }
  lVar9 = param_1[8];
  if ((lVar9 != 0) && ((uVar4 != uVar3 || ((uVar3 & 0x1f) != 0)))) {
    lVar6 = param_1[10];
    LOCK();
    piVar1 = (int *)(lVar9 + 0x130);
    iVar2 = *piVar1;
    *piVar1 = *piVar1 + -0x80000000;
    UNLOCK();
    if (iVar2 == 0) {
      lVar8 = *(int64_t *)(lVar6 + 0x28);
      do {
        *(int64_t *)(lVar9 + 0x138) = lVar8;
        *(int32_t *)(lVar9 + 0x130) = 1;
        plVar5 = (int64_t *)(lVar6 + 0x28);
        LOCK();
        lVar7 = *plVar5;
        bVar11 = lVar8 == lVar7;
        if (bVar11) {
          *plVar5 = lVar9;
          lVar7 = lVar8;
        }
        UNLOCK();
        if (bVar11) break;
        LOCK();
        piVar1 = (int *)(lVar9 + 0x130);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + 0x7fffffff;
        UNLOCK();
        lVar8 = lVar7;
      } while (iVar2 == 1);
    }
  }
  if (param_1[0xc] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = &unknown_var_9040_ptr;
  return;
}



/**
 * 清理对象池
 * 清理对象池资源，根据标志决定是否释放内存
 * 原函数名: FUN_1800605d0
 */
uint64_t * CleanupObjectPool(uint64_t *objectPool, uint64_t freeMemoryFlag)

{
  *param_1 = &unknown_var_9040_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}





// 函数: void FUN_180060610(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
/**
 * 初始化线程管理器
 * 初始化线程管理器，设置同步原语和线程控制结构
 * 原函数名: FUN_180060610
 */
void InitializeThreadManager(uint64_t *threadManager, uint64_t param2, uint64_t param3, uint64_t param4)

{
  char cVar1;
  uint64_t uVar2;
  
  uVar2 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_2392_ptr;
  cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,0xfffffffffffffffe);
  while (cVar1 != '\0') {
    cVar1 = FUN_18020eba0(param_1,1,param_3,param_4,uVar2);
  }
  if (param_1[1] == 0) {
    param_1[1] = 0;
    _Mtx_destroy_in_situ();
    _Cnd_destroy_in_situ(param_1 + 0x2a);
    _Mtx_destroy_in_situ();
    FUN_18020f530();
    if (param_1[0xe] != 0) {
      *(uint64_t *)(param_1[0xe] + 0x10) = 0;
      *(int8_t *)(param_1[0xe] + 8) = 1;
    }
    param_1[2] = &system_state_ptr;
    return;
  }
  if (*(int *)(param_1[1] + 8) == 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  terminate();
}



/**
 * 清理线程管理器
 * 清理线程管理器资源，根据标志决定是否释放内存
 * 原函数名: FUN_180060630
 */
uint64_t CleanupThreadManager(uint64_t threadManager, uint64_t freeMemoryFlag, uint64_t param3, uint64_t param4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_18020e6c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x208,param_3,param_4,uVar1);
  }
  return param_1;
}



/**
 * 格式化字符串输出
 * 安全的格式化字符串输出函数，处理可变参数
 * 原函数名: FUN_180060680
 */
int FormatStringOutput(uint64_t buffer, uint64_t format, uint64_t param3, uint64_t param4)

{
  int iVar1;
  uint64_t *puVar2;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  
  uStackX_18 = param_3;
  uStackX_20 = param_4;
  puVar2 = (uint64_t *)func_0x00018004b9a0();
  iVar1 = __stdio_common_vsprintf(*puVar2 | 1,param_1,0xffffffffffffffff,param_2,0,&uStackX_18);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



