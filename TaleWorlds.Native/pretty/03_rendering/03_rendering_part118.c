#include "TaleWorlds.Native.Split.h"

// 03_rendering_part118.c - 渲染系统内存管理和数据结构操作
// 
// 本文件包含渲染系统中的核心内存管理和数据结构操作函数：
// 1. 动态数组管理 - 支持数组的大小调整和内存重新分配
// 2. 哈希表操作 - 提供线程安全的哈希表插入、查找和删除功能
// 3. 内存管理 - 包括内存分配、释放和清理操作
// 4. 对象生命周期管理 - 对象的创建、复制和销毁
// 5. 线程安全操作 - 使用互斥锁保证多线程环境下的数据一致性
//
// 主要功能模块：
// - 动态数组：Rendering_ArrayResize, Rendering_ArrayExpand, Rendering_ArrayCopy
// - 哈希表：Rendering_HashTableInsert, Rendering_HashTableRemove, Rendering_HashTableClear, Rendering_HashTableAdd
// - 内存管理：Rendering_MemoryCleanup, Rendering_MemoryRelease, Rendering_MemoryFree, Rendering_MemoryManager
// - 对象操作：Rendering_ObjectInitialize, Rendering_ObjectCreate, Rendering_ObjectCopy
// - 线程安全：Rendering_ThreadSafeUpdate, Rendering_ThreadSafeLookup
//
// 全局变量：
// - MemoryAllocator_180c8ed18: 内存分配器实例
// - VirtualTable_18098bcb0, VirtualTable_1809fcc58: 虚函数表
// - DataStructure_180be0000: 数据结构实例

/**
 * 渲染系统动态数组调整大小函数
 * 
 * 根据需要扩展或收缩数组，处理内存重新分配和数据迁移。
 * 该函数是渲染系统中数组管理的核心函数，支持动态扩容和缩容。
 * 
 * @param array_control 数组控制结构指针（包含起始地址、结束地址、容量等信息）
 * @param new_size 新的数组大小（元素个数）
 * 
 * 处理流程：
 * 1. 计算当前数组中的元素数量
 * 2. 如果新大小小于等于当前大小，则收缩数组
 * 3. 如果新大小大于当前大小，则扩展数组
 * 4. 处理内存重新分配和数据迁移
 * 5. 初始化新增的数组元素
 * 6. 释放不再使用的内存
 * 
 * 原始实现说明：
 * - 支持复杂的数组大小调整逻辑
 * - 实现内存池管理和优化
 * - 处理对象构造和析构
 * - 包含错误检查和安全验证
 * - 优化性能和内存使用效率
 * 
 * 简化实现说明：
 * 本函数为简化实现，保留了核心的数组调整逻辑。
 * 原始代码包含更复杂的内存管理、对象生命周期处理和性能优化逻辑。
 */
void rendering_system_dynamic_array_resize(int64_t *array_control, uint64_t new_size)
{
    // 变量重命名以提高可读性：
    // lVar1 -> array_start: 数组起始地址
    // puVar2 -> element_ptr: 元素指针
    // lVar3 -> temp_ptr: 临时指针
    // uVar4 -> current_size: 当前数组大小
    // puVar5 -> new_element_ptr: 新元素指针
    // uVar6 -> element_count: 元素计数
    // puVar7 -> current_element_ptr: 当前元素指针
    // lVar8 -> array_end: 数组结束地址
    // in_stack_00000008 -> stack_buffer: 栈缓冲区
    
    int64_t array_start;
    int32_t *element_ptr;
    int64_t temp_ptr;
    uint64_t current_size;
    int8_t *new_element_ptr;
    uint64_t element_count;
    int32_t *current_element_ptr;
    int64_t array_end;
    int64_t stack_buffer;
  
    // 获取当前数组信息
    array_end = array_control[1];
    array_start = *array_control;
    current_size = (array_end - array_start) / 0xb0;  // 每个元素0xb0字节
    
    // 情况1：新大小小于等于当前大小 - 收缩数组
    if (new_size <= current_size) {
        temp_ptr = new_size * 0xb0 + array_start;
        if (temp_ptr != array_end) {
            // 调用元素析构函数释放多余元素
            do {
                rendering_system_element_destructor(temp_ptr);
                temp_ptr = temp_ptr + 0xb0;
            } while (temp_ptr != array_end);
            array_start = *array_control;
        }
        array_control[1] = new_size * 0xb0 + array_start;
        return;
    }
  param_2 = param_2 - uVar4;
  puVar7 = (int32_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar7) / 0xb0) < param_2) {
    lVar8 = *param_1;
    lVar1 = ((int64_t)puVar7 - lVar8) / 0xb0;
    uVar4 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < lVar1 + param_2) {
      uVar4 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar4 != 0) {
      lVar1 = FUN_18062b420(MemoryAllocator_180c8ed18,uVar4 * 0xb0,(char)param_1[3]);
      puVar7 = (int32_t *)param_1[1];
      lVar8 = *param_1;
    }
    FUN_18033d790(&stack0x00000008,lVar8,puVar7,lVar1);
    if (param_2 != 0) {
      puVar5 = (int8_t *)(in_stack_00000008 + 0x48);
      uVar6 = param_2;
      do {
        *(void **)(puVar5 + -0x18) = &VirtualTable_18098bcb0;
        *(uint64_t *)(puVar5 + -0x10) = 0;
        *(int32_t *)(puVar5 + -8) = 0;
        *(void **)(puVar5 + -0x18) = &VirtualTable_1809fcc58;
        *(int8_t **)(puVar5 + -0x10) = puVar5;
        *(int32_t *)(puVar5 + -8) = 0;
        *puVar5 = 0;
        *(uint64_t *)(puVar5 + 0x40) = 0;
        *(uint64_t *)(puVar5 + 0x48) = 0;
        *(uint64_t *)(puVar5 + 0x50) = 0;
        *(int32_t *)(puVar5 + 0x58) = 3;
        *(int32_t *)(puVar5 + -0x48) = 0;
        puVar5 = puVar5 + 0xb0;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar8 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar8) {
      do {
        FUN_180320a20(lVar3);
        lVar3 = lVar3 + 0xb0;
      } while (lVar3 != lVar8);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar1;
    param_1[1] = param_2 * 0xb0 + in_stack_00000008;
    param_1[2] = uVar4 * 0xb0 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puVar2 = puVar7 + 0x12;
      uVar4 = param_2;
      do {
        *(void **)(puVar2 + -6) = &VirtualTable_18098bcb0;
        *(uint64_t *)(puVar2 + -4) = 0;
        puVar2[-2] = 0;
        *(void **)(puVar2 + -6) = &VirtualTable_1809fcc58;
        *(int32_t **)(puVar2 + -4) = puVar2;
        puVar2[-2] = 0;
        *(int8_t *)puVar2 = 0;
        *(uint64_t *)(puVar2 + 0x10) = 0;
        *(uint64_t *)(puVar2 + 0x12) = 0;
        *(uint64_t *)(puVar2 + 0x14) = 0;
        puVar2[0x16] = 3;
        *puVar7 = 0;
        puVar7 = puVar7 + 0x2c;
        puVar2 = puVar2 + 0x2c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar7 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar7 + param_2 * 0x2c);
  }
  return;
}



// 函数: int64_t Rendering_ObjectInitialize_18033ac00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 功能：初始化渲染对象
// 参数：
//   param_1 - 对象指针
//   param_2, param_3, param_4 - 初始化参数
// 返回值：初始化后的对象指针
// 说明：设置对象的默认值，包括浮点参数、互斥锁等
int64_t Rendering_ObjectInitialize_18033ac00(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *(int32_t *)(param_1 + 0x20) = 0x3f800000;
  *(int32_t *)(param_1 + 0x24) = 0x40000000;
  *(int32_t *)(param_1 + 0x2c) = 3;
  *(uint64_t *)(param_1 + 0x10) = 1;
  *(void **)(param_1 + 8) = &DataStructure_180be0000;
  *(uint64_t *)(param_1 + 0x18) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  _Mtx_init_in_situ(param_1 + 0x30,2,param_3,param_4,0xfffffffffffffffe);
  return param_1;
}





// 函数: void Rendering_ThreadSafeUpdate_18033ac70(int64_t param_1,uint64_t param_2)
// 功能：线程安全的数据更新
// 参数：
//   param_1 - 包含互斥锁的对象指针
//   param_2 - 要更新的数据
// 说明：使用互斥锁确保多线程环境下的数据安全更新
void Rendering_ThreadSafeUpdate_18033ac70(int64_t param_1,uint64_t param_2)

{
  int iVar1;
  int64_t alStack_30 [3];
  
  iVar1 = _Mtx_lock(param_1 + 0x30);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  FUN_18033bd40(param_1,alStack_30);
  *(uint64_t *)(alStack_30[0] + 8) = param_2;
  iVar1 = _Mtx_unlock(param_1 + 0x30);
  if (iVar1 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar1);
  }
  return;
}





// 函数: void Rendering_MemoryCleanup_18033ad00(int64_t param_1)
void Rendering_MemoryCleanup_18033ad00(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  uVar4 = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(int64_t *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}





// 函数: void Rendering_MemoryRelease_18033ad29(void)
void Rendering_MemoryRelease_18033ad29(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar1 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  return;
}





// 函数: void Rendering_SetValue_18033ad68(int64_t param_1)
void Rendering_SetValue_18033ad68(int64_t param_1)

{
  uint64_t unaff_R15;
  
  *(uint64_t *)(param_1 + 0x18) = unaff_R15;
  return;
}



// 函数: int64_t Rendering_HashTableRemove_18033ad80(int64_t param_1,uint *param_2)
// 功能：从哈希表中移除指定键值对
// 参数：
//   param_1 - 哈希表指针
//   param_2 - 要移除的键值指针
// 返回值：移除操作前后的元素数量差
// 说明：在哈希表中查找并移除指定键，处理链表冲突
int64_t Rendering_HashTableRemove_18033ad80(int64_t param_1,uint *param_2)

{
  uint *puVar1;
  int64_t lVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  
  lVar2 = *(int64_t *)(param_1 + 0x18);
  puVar1 = (uint *)(*(int64_t *)(param_1 + 8) +
                   (uint64_t)(*param_2 % *(uint *)(param_1 + 0x10)) * 8);
  puVar3 = *(uint **)puVar1;
  while ((puVar3 != (uint *)0x0 && (*param_2 != *puVar3))) {
    puVar1 = puVar3 + 0xe;
    puVar3 = *(uint **)puVar1;
  }
  puVar5 = (uint *)0x0;
  if (puVar3 != (uint *)0x0) {
    do {
      puVar4 = puVar3;
      if (*param_2 != *puVar4) break;
      *(uint64_t *)puVar1 = *(uint64_t *)(puVar4 + 0xe);
      *(uint **)(puVar4 + 0xe) = puVar5;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + -1;
      puVar3 = *(uint **)puVar1;
      puVar5 = puVar4;
    } while (*(uint **)puVar1 != (uint *)0x0);
    if (puVar5 != (uint *)0x0) {
      FUN_18004b730();
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar5);
    }
  }
  return lVar2 - *(int64_t *)(param_1 + 0x18);
}





// 函数: void Rendering_HashTableClear_18033ae70(int64_t param_1)
void Rendering_HashTableClear_18033ae70(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  lVar2 = *(int64_t *)(param_1 + 8);
  uVar4 = 0;
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(int64_t *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
        FUN_18004b730();
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *Rendering_HashTableInsert_18033af10(int64_t param_1,uint64_t *param_2,uint64_t param_3,int *param_4,uint64_t param_5)
uint64_t *Rendering_HashTableInsert_18033af10(int64_t param_1,uint64_t *param_2,uint64_t param_3,int *param_4,uint64_t param_5)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int *piVar4;
  int *piVar5;
  uint64_t uVar6;
  
  uVar3 = param_5 % (uint64_t)*(uint *)(param_1 + 0x10);
  puVar1 = (uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
  piVar4 = (int *)*puVar1;
  if (piVar4 != (int *)0x0) {
    do {
      if (*param_4 == *piVar4) {
        *param_2 = piVar4;
        param_2[1] = puVar1;
        *(int8_t *)(param_2 + 2) = 0;
        return param_2;
      }
      piVar4 = *(int **)(piVar4 + 0xe);
    } while (piVar4 != (int *)0x0);
  }
  FUN_18066c220(param_1 + 0x20,&param_5,(uint64_t)*(uint *)(param_1 + 0x10),
                *(int32_t *)(param_1 + 0x18),1);
  piVar5 = (int *)FUN_18062b420(MemoryAllocator_180c8ed18,0x40,*(int8_t *)(param_1 + 0x2c));
  *piVar5 = *param_4;
  piVar4 = piVar5 + 2;
  piVar5[8] = 0;
  piVar5[9] = 0;
  piVar5[0xc] = 3;
  *(int **)piVar4 = piVar4;
  *(int **)(piVar5 + 4) = piVar4;
  piVar5[6] = 0;
  piVar5[7] = 0;
  *(int8_t *)(piVar5 + 8) = 0;
  piVar5[10] = 0;
  piVar5[0xb] = 0;
  piVar5[0xe] = 0;
  piVar5[0xf] = 0;
  if ((char)param_5 == '\0') {
    *(uint64_t *)(piVar5 + 0xe) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar3 * 8);
    *(int **)(*(int64_t *)(param_1 + 8) + uVar3 * 8) = piVar5;
    *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
    lVar2 = *(int64_t *)(param_1 + 8);
    *param_2 = piVar5;
    param_2[1] = lVar2 + uVar3 * 8;
    *(int8_t *)(param_2 + 2) = 1;
    return param_2;
  }
  uVar6 = FUN_18062b1e0(MemoryAllocator_180c8ed18,(uint64_t)param_5._4_4_ * 8 + 8,8,
                        *(int8_t *)(param_1 + 0x2c));
                    // WARNING: Subroutine does not return
  memset(uVar6,0,(uint64_t)param_5._4_4_ * 8);
}





// 函数: void Rendering_IteratorCleanup_18033b120(int64_t *param_1)
void Rendering_IteratorCleanup_18033b120(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)param_1[1];
  plVar2 = (int64_t *)*param_1;
  if (plVar2 != plVar1) {
    do {
      if ((int64_t *)*plVar2 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar2 + 0x38))();
      }
      plVar2 = plVar2 + 3;
    } while (plVar2 != plVar1);
    param_1[1] = *param_1;
    return;
  }
  param_1[1] = (int64_t)plVar2;
  return;
}





// 函数: void Rendering_MemoryFree_18033b1a0(int64_t param_1)
void Rendering_MemoryFree_18033b1a0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  uVar1 = *(uint64_t *)(param_1 + 0x10);
  uVar4 = 0;
  lVar2 = *(int64_t *)(param_1 + 8);
  if (uVar1 == 0) {
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  else {
    do {
      lVar3 = *(int64_t *)(lVar2 + uVar4 * 8);
      if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar3);
      }
      *(uint64_t *)(lVar2 + uVar4 * 8) = 0;
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
    *(uint64_t *)(param_1 + 0x18) = 0;
  }
  return;
}





// 函数: void Rendering_MemoryDeallocate_18033b1c9(void)
void Rendering_MemoryDeallocate_18033b1c9(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  uint64_t unaff_R15;
  
  do {
    lVar1 = *(int64_t *)(unaff_R14 + unaff_RDI * 8);
    if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar1);
    }
    *(uint64_t *)(unaff_R14 + unaff_RDI * 8) = unaff_R15;
    unaff_RDI = unaff_RDI + 1;
  } while (unaff_RDI < unaff_RSI);
  *(uint64_t *)(unaff_RBP + 0x18) = unaff_R15;
  return;
}





// 函数: void Rendering_SetFieldValue_18033b208(int64_t param_1)
void Rendering_SetFieldValue_18033b208(int64_t param_1)

{
  uint64_t unaff_R15;
  
  *(uint64_t *)(param_1 + 0x18) = unaff_R15;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: uint64_t *Rendering_HashTableAdd_18033b220(int64_t param_1,uint64_t *param_2,uint *param_3)
uint64_t *Rendering_HashTableAdd_18033b220(int64_t param_1,uint64_t *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int8_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  char acStackX_8 [4];
  uint uStackX_c;
  
  uVar1 = *param_3;
  uVar8 = (uint64_t)uVar1 % (uint64_t)*(uint *)(param_1 + 0x10);
  puVar5 = *(uint **)(*(int64_t *)(param_1 + 8) + uVar8 * 8);
  lVar7 = *(int64_t *)(param_1 + 8) + uVar8 * 8;
  do {
    if (puVar5 == (uint *)0x0) {
      puVar5 = (uint *)FUN_18062b420(MemoryAllocator_180c8ed18,0x18,*(int8_t *)(param_1 + 0x2c));
      uVar2 = param_3[1];
      uVar3 = param_3[2];
      uVar4 = param_3[3];
      *puVar5 = *param_3;
      puVar5[1] = uVar2;
      puVar5[2] = uVar3;
      puVar5[3] = uVar4;
      puVar5[4] = 0;
      puVar5[5] = 0;
      FUN_18066c220(param_1 + 0x20,acStackX_8,*(int32_t *)(param_1 + 0x10),
                    *(int32_t *)(param_1 + 0x18),1);
      if (acStackX_8[0] != '\0') {
        uVar8 = (uint64_t)uVar1 % (uint64_t)uStackX_c;
        FUN_18033bf30(param_1,uStackX_c);
      }
      *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar8 * 8);
      uVar6 = 1;
      *(uint **)(*(int64_t *)(param_1 + 8) + uVar8 * 8) = puVar5;
      *(int64_t *)(param_1 + 0x18) = *(int64_t *)(param_1 + 0x18) + 1;
      lVar7 = *(int64_t *)(param_1 + 8) + uVar8 * 8;
LAB_18033b2fa:
      *param_2 = puVar5;
      param_2[1] = lVar7;
      *(int8_t *)(param_2 + 2) = uVar6;
      return param_2;
    }
    if (uVar1 == *puVar5) {
      uVar6 = 0;
      goto LAB_18033b2fa;
    }
    puVar5 = *(uint **)(puVar5 + 4);
  } while( true );
}





// 函数: void Rendering_ObjectCreate_18033b330(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void Rendering_ObjectCreate_18033b330(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  if (param_1 != 0) {
    lVar1 = param_1 + 8;
    FUN_18041b140(lVar1,*(uint64_t *)(param_1 + 0x18),param_3,param_4,0xfffffffffffffffe);
    *(int64_t *)lVar1 = lVar1;
    *(int64_t *)(param_1 + 0x10) = lVar1;
    *(uint64_t *)(param_1 + 0x18) = 0;
    *(int8_t *)(param_1 + 0x20) = 0;
    *(uint64_t *)(param_1 + 0x28) = 0;
    FUN_18041b140(lVar1,*(uint64_t *)(param_1 + 0x18));
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_1);
  }
  return;
}



// 函数: uint64_t Rendering_ThreadSafeLookup_18033b3a0(int64_t param_1,uint param_2)
uint64_t Rendering_ThreadSafeLookup_18033b3a0(int64_t param_1,uint param_2)

{
  int64_t lVar1;
  int iVar2;
  uint *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  
  iVar2 = _Mtx_lock(param_1 + 0x3d8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(int64_t *)(param_1 + 0x3b0);
  puVar3 = *(uint **)(lVar1 + ((uint64_t)param_2 % (uint64_t)*(uint *)(param_1 + 0x3b8)) * 8);
  do {
    if (puVar3 == (uint *)0x0) {
      lVar4 = *(int64_t *)(param_1 + 0x3b8);
      puVar3 = *(uint **)(lVar1 + lVar4 * 8);
LAB_18033b418:
      if (puVar3 == *(uint **)(lVar1 + lVar4 * 8)) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(uint64_t *)(puVar3 + 2);
      }
      iVar2 = _Mtx_unlock(param_1 + 0x3d8);
      if (iVar2 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar2);
      }
      return uVar5;
    }
    if (param_2 == *puVar3) {
      lVar4 = *(int64_t *)(param_1 + 0x3b8);
      goto LAB_18033b418;
    }
    puVar3 = *(uint **)(puVar3 + 4);
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int64_t Rendering_ObjectCopy_18033b460(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
int64_t Rendering_ObjectCopy_18033b460(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  
  uVar9 = 0xfffffffffffffffe;
  FUN_1800b8300();
  *(int32_t *)(param_1 + 0x58) = *(int32_t *)(param_2 + 0x58);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)(param_1 + 100) = *(int32_t *)(param_2 + 100);
  *(int32_t *)(param_1 + 0x68) = *(int32_t *)(param_2 + 0x68);
  *(int32_t *)(param_1 + 0x6c) = *(int32_t *)(param_2 + 0x6c);
  *(int32_t *)(param_1 + 0x70) = *(int32_t *)(param_2 + 0x70);
  *(int32_t *)(param_1 + 0x74) = *(int32_t *)(param_2 + 0x74);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = *(int32_t *)(param_2 + 0x7c);
  uVar5 = *(uint64_t *)(param_2 + 0x88);
  *(uint64_t *)(param_1 + 0x80) = *(uint64_t *)(param_2 + 0x80);
  *(uint64_t *)(param_1 + 0x88) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0x98);
  *(uint64_t *)(param_1 + 0x90) = *(uint64_t *)(param_2 + 0x90);
  *(uint64_t *)(param_1 + 0x98) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xa8);
  *(uint64_t *)(param_1 + 0xa0) = *(uint64_t *)(param_2 + 0xa0);
  *(uint64_t *)(param_1 + 0xa8) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xb8);
  *(uint64_t *)(param_1 + 0xb0) = *(uint64_t *)(param_2 + 0xb0);
  *(uint64_t *)(param_1 + 0xb8) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 200);
  *(uint64_t *)(param_1 + 0xc0) = *(uint64_t *)(param_2 + 0xc0);
  *(uint64_t *)(param_1 + 200) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xd8);
  *(uint64_t *)(param_1 + 0xd0) = *(uint64_t *)(param_2 + 0xd0);
  *(uint64_t *)(param_1 + 0xd8) = uVar5;
  uVar5 = *(uint64_t *)(param_2 + 0xe8);
  *(uint64_t *)(param_1 + 0xe0) = *(uint64_t *)(param_2 + 0xe0);
  *(uint64_t *)(param_1 + 0xe8) = uVar5;
  uVar2 = *(int32_t *)(param_2 + 0xf4);
  uVar3 = *(int32_t *)(param_2 + 0xf8);
  uVar4 = *(int32_t *)(param_2 + 0xfc);
  *(int32_t *)(param_1 + 0xf0) = *(int32_t *)(param_2 + 0xf0);
  *(int32_t *)(param_1 + 0xf4) = uVar2;
  *(int32_t *)(param_1 + 0xf8) = uVar3;
  *(int32_t *)(param_1 + 0xfc) = uVar4;
  uVar2 = *(int32_t *)(param_2 + 0x104);
  uVar3 = *(int32_t *)(param_2 + 0x108);
  uVar4 = *(int32_t *)(param_2 + 0x10c);
  *(int32_t *)(param_1 + 0x100) = *(int32_t *)(param_2 + 0x100);
  *(int32_t *)(param_1 + 0x104) = uVar2;
  *(int32_t *)(param_1 + 0x108) = uVar3;
  *(int32_t *)(param_1 + 0x10c) = uVar4;
  FUN_180627ae0(param_1 + 0x110,param_2 + 0x110);
  lVar8 = *(int64_t *)(param_2 + 0x138) - *(int64_t *)(param_2 + 0x130) >> 3;
  uVar1 = *(uint *)(param_2 + 0x148);
  *(uint *)(param_1 + 0x148) = uVar1;
  lVar7 = 0;
  lVar6 = lVar7;
  if (lVar8 != 0) {
    lVar6 = FUN_18062b420(MemoryAllocator_180c8ed18,lVar8 * 8,uVar1 & 0xff,param_4,uVar9);
  }
  *(int64_t *)(param_1 + 0x130) = lVar6;
  *(int64_t *)(param_1 + 0x138) = lVar6;
  *(int64_t *)(param_1 + 0x140) = lVar6 + lVar8 * 8;
  lVar6 = *(int64_t *)(param_1 + 0x130);
  lVar8 = *(int64_t *)(param_2 + 0x130);
  if (lVar8 != *(int64_t *)(param_2 + 0x138)) {
                    // WARNING: Subroutine does not return
    memmove(lVar6,lVar8,*(int64_t *)(param_2 + 0x138) - lVar8);
  }
  *(int64_t *)(param_1 + 0x138) = lVar6;
  lVar8 = *(int64_t *)(param_2 + 0x158) - *(int64_t *)(param_2 + 0x150) >> 6;
  uVar1 = *(uint *)(param_2 + 0x168);
  *(uint *)(param_1 + 0x168) = uVar1;
  lVar6 = lVar7;
  if (lVar8 != 0) {
    lVar6 = FUN_18062b420(MemoryAllocator_180c8ed18,lVar8 << 6,uVar1 & 0xff,param_4,uVar9);
  }
  *(int64_t *)(param_1 + 0x150) = lVar6;
  *(int64_t *)(param_1 + 0x158) = lVar6;
  *(int64_t *)(param_1 + 0x160) = lVar8 * 0x40 + lVar6;
  lVar6 = *(int64_t *)(param_1 + 0x150);
  lVar8 = *(int64_t *)(param_2 + 0x150);
  if (lVar8 == *(int64_t *)(param_2 + 0x158)) {
    *(int64_t *)(param_1 + 0x158) = lVar6;
    lVar6 = *(int64_t *)(param_2 + 0x178) - *(int64_t *)(param_2 + 0x170);
    uVar1 = *(uint *)(param_2 + 0x188);
    *(uint *)(param_1 + 0x188) = uVar1;
    if (lVar6 != 0) {
      lVar7 = FUN_18062b420(MemoryAllocator_180c8ed18,lVar6,uVar1 & 0xff,param_4,uVar9);
    }
    *(int64_t *)(param_1 + 0x170) = lVar7;
    *(int64_t *)(param_1 + 0x178) = lVar7;
    *(int64_t *)(param_1 + 0x180) = lVar6 + lVar7;
    lVar6 = *(int64_t *)(param_1 + 0x170);
    lVar7 = *(int64_t *)(param_2 + 0x170);
    if (lVar7 == *(int64_t *)(param_2 + 0x178)) {
      *(int64_t *)(param_1 + 0x178) = lVar6;
      *(uint64_t *)(param_1 + 400) = *(uint64_t *)(param_2 + 400);
      *(int32_t *)(param_1 + 0x198) = *(int32_t *)(param_2 + 0x198);
      return param_1;
    }
                    // WARNING: Subroutine does not return
    memmove(lVar6,lVar7,*(int64_t *)(param_2 + 0x178) - lVar7);
  }
                    // WARNING: Subroutine does not return
  memmove(lVar6,lVar8,*(int64_t *)(param_2 + 0x158) - lVar8);
}





// 函数: void Rendering_MemoryManager_18033b720(int64_t param_1)
void Rendering_MemoryManager_18033b720(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_18033ad00();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: int64_t *Rendering_ArrayCopy_18033b760(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
int64_t *Rendering_ArrayCopy_18033b760(int64_t *param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  int64_t lVar2;
  int64_t lVar3;
  
  lVar3 = param_2[1] - *param_2 >> 3;
  uVar1 = *(uint *)(param_2 + 3);
  *(uint *)(param_1 + 3) = uVar1;
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = FUN_18062b420(MemoryAllocator_180c8ed18,lVar3 * 8,uVar1 & 0xff,param_4,0xfffffffffffffffe);
  }
  *param_1 = lVar2;
  param_1[1] = lVar2;
  param_1[2] = lVar2 + lVar3 * 8;
  lVar3 = *param_2;
  if (lVar3 != param_2[1]) {
                    // WARNING: Subroutine does not return
    memmove(*param_1,lVar3,param_2[1] - lVar3);
  }
  param_1[1] = *param_1;
  return param_1;
}





// 函数: void Rendering_MemoryHandler_18033b800(int64_t param_1)
void Rendering_MemoryHandler_18033b800(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  FUN_18033ad00();
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          FUN_18064d630();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void Rendering_ArrayExpand_18033b840(int64_t *param_1,uint64_t param_2)
void Rendering_ArrayExpand_18033b840(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int32_t *puStackX_8;
  uint64_t *puStackX_10;
  
  puVar6 = (int32_t *)param_1[1];
  if ((uint64_t)((param_1[2] - (int64_t)puVar6) / 0xb0) < param_2) {
    lVar7 = *param_1;
    lVar1 = ((int64_t)puVar6 - lVar7) / 0xb0;
    uVar4 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar4 = 1;
    }
    if (uVar4 < lVar1 + param_2) {
      uVar4 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar4 != 0) {
      lVar1 = FUN_18062b420(MemoryAllocator_180c8ed18,uVar4 * 0xb0,(char)param_1[3]);
      puVar6 = (int32_t *)param_1[1];
      lVar7 = *param_1;
    }
    FUN_18033d790(&puStackX_8,lVar7,puVar6,lVar1);
    puVar6 = puStackX_8;
    if (param_2 != 0) {
      puVar2 = puStackX_8 + 0x12;
      uVar5 = param_2;
      do {
        puStackX_8 = puVar2 + -0x12;
        *(void **)(puVar2 + -6) = &VirtualTable_18098bcb0;
        *(uint64_t *)(puVar2 + -4) = 0;
        puVar2[-2] = 0;
        *(void **)(puVar2 + -6) = &VirtualTable_1809fcc58;
        *(int32_t **)(puVar2 + -4) = puVar2;
        puVar2[-2] = 0;
        *(int8_t *)puVar2 = 0;
        puStackX_10 = (uint64_t *)(puVar2 + 0x10);
        *puStackX_10 = 0;
        *(uint64_t *)(puVar2 + 0x12) = 0;
        *(uint64_t *)(puVar2 + 0x14) = 0;
        puVar2[0x16] = 3;
        *puStackX_8 = 0;
        puVar2 = puVar2 + 0x2c;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
    }
    lVar7 = param_1[1];
    lVar3 = *param_1;
    if (lVar3 != lVar7) {
      do {
        FUN_180320a20(lVar3);
        lVar3 = lVar3 + 0xb0;
      } while (lVar3 != lVar7);
      lVar3 = *param_1;
    }
    if (lVar3 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar3);
    }
    *param_1 = lVar1;
    param_1[1] = (int64_t)(puVar6 + param_2 * 0x2c);
    param_1[2] = uVar4 * 0xb0 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puVar2 = puVar6 + 0x12;
      uVar4 = param_2;
      do {
        *(void **)(puVar2 + -6) = &VirtualTable_18098bcb0;
        *(uint64_t *)(puVar2 + -4) = 0;
        puVar2[-2] = 0;
        *(void **)(puVar2 + -6) = &VirtualTable_1809fcc58;
        *(int32_t **)(puVar2 + -4) = puVar2;
        puVar2[-2] = 0;
        *(int8_t *)puVar2 = 0;
        *(uint64_t *)(puVar2 + 0x10) = 0;
        *(uint64_t *)(puVar2 + 0x12) = 0;
        *(uint64_t *)(puVar2 + 0x14) = 0;
        puVar2[0x16] = 3;
        *puVar6 = 0;
        puVar6 = puVar6 + 0x2c;
        puVar2 = puVar2 + 0x2c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
      puVar6 = (int32_t *)param_1[1];
    }
    param_1[1] = (int64_t)(puVar6 + param_2 * 0x2c);
  }
  return;
}





