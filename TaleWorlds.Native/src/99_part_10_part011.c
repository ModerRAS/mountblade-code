#include "TaleWorlds.Native.Split.h"

/**
 * 99_part_10_part011.c - 数据结构和数组处理模块
 * 
 * 本模块包含17个核心函数，主要功能：
 * - 数据结构指针管理和数组处理
 * - 内存分配和数据复制
 * - 结构体初始化和配置
 * - 数组遍历和元素操作
 * - 动态数组管理和扩容
 * 
 * 主要函数：
 * - ArrayPointerInitializerAndDataManager：数组指针初始化器和数据管理器
 * - StructureDataProcessorAndArrayHandler：结构体数据处理器和数组处理器
 * - MemoryAllocatorAndDataCopier：内存分配器和数据复制器
 * - DynamicArrayManagerAndExpander：动态数组管理器和扩容器
 * - StructureInitializerAndConfigurator：结构体初始化器和配置器
 */

// 常量定义
#define ARRAY_ELEMENT_SIZE_120 0x78
#define ARRAY_ELEMENT_SIZE_16 0x10
#define ARRAY_ELEMENT_SIZE_8 8
#define POINTER_SIZE_8 8
#define DEFAULT_FLOAT_VALUE 0x3f400000
#define MAX_UINT_VALUE 0xffffffff
#define MEMORY_BLOCK_SIZE_64 0x40
#define MEMORY_BLOCK_SIZE_184 0xb8
#define MEMORY_BLOCK_SIZE_428 0x1ac

// 类型别名
typedef void* ArrayPointer;
typedef longlong StructurePointer;
typedef uint ArrayIndex;
typedef ulonglong MemorySize;
typedef undefined8* DataBuffer;
typedef longlong* ArrayIterator;
typedef uint ElementCount;
typedef ulonglong ArrayCapacity;

// 枚举定义
typedef enum {
    ARRAY_OPERATION_SUCCESS = 0,
    ARRAY_OPERATION_FAILURE = 1,
    MEMORY_ALLOCATION_SUCCESS = 0,
    MEMORY_ALLOCATION_FAILURE = 1
} OperationStatus;

typedef enum {
    ELEMENT_SIZE_SMALL = 4,
    ELEMENT_SIZE_MEDIUM = 8,
    ELEMENT_SIZE_LARGE = 0x78,
    ELEMENT_SIZE_EXTRA_LARGE = 0x10
} ElementSizeType;

typedef enum {
    ARRAY_TYPE_FIXED = 0,
    ARRAY_TYPE_DYNAMIC = 1,
    ARRAY_TYPE_HYBRID = 2
} ArrayType;

// 结构体定义
typedef struct {
    ArrayPointer base_pointer;
    ArrayPointer data_pointer;
    ElementCount element_count;
    ArrayCapacity array_capacity;
    ElementSizeType element_size;
    ArrayType array_type;
} ArrayManager;

typedef struct {
    StructurePointer structure_base;
    DataBuffer data_buffer;
    MemorySize buffer_size;
    OperationStatus operation_status;
    ElementCount active_elements;
} StructureDataProcessor;

typedef struct {
    ArrayIterator iterator_start;
    ArrayIterator iterator_end;
    ArrayIndex current_index;
    ElementCount total_elements;
    MemorySize iteration_step;
} ArrayIteratorContext;

/**
 * 数组指针初始化器和数据管理器
 * 
 * 功能：
 * - 初始化数组指针和管理器结构
 * - 计算数组容量和边界
 * - 管理数据指针的内存布局
 * - 处理大小数组的配置
 * 
 * 参数：
 * - 无直接参数，通过寄存器访问上下文
 * 
 * 返回值：
 * - void：无返回值，直接操作内存结构
 * 
 * 技术实现：
 * - 使用指针算术计算数组边界
 * - 支持动态大小数组的容量计算
 * - 处理不同元素大小的数组配置
 */
void ArrayPointerInitializerAndDataManager(void) {
    StructurePointer context_pointer;
    
    // 初始化主数据指针
    *(longlong *)(context_pointer + 0x38) = *(longlong *)(context_pointer + 0x70);
    
    // 计算大数组的容量边界（120字节元素）
    *(ulonglong *)(context_pointer + 0x40) = 
        (ulonglong)*(uint *)(context_pointer + 0x78) * ARRAY_ELEMENT_SIZE_120 + 
        *(longlong *)(context_pointer + 0x70);
    
    // 初始化次数据指针
    *(longlong *)(context_pointer + 0x50) = *(longlong *)(context_pointer + 0x80);
    
    // 计算小数组的容量边界（4字节元素）
    *(ulonglong *)(context_pointer + 0x58) = 
        *(longlong *)(context_pointer + 0x80) + 
        (ulonglong)*(uint *)(context_pointer + 0x88) * ELEMENT_SIZE_SMALL;
    
    return;
}






// 函数: void FUN_1806a9050(longlong param_1,longlong param_2)
void FUN_1806a9050(longlong param_1,longlong param_2)

{
  uint uVar1;
  ulonglong uVar2;
  undefined4 auStackX_8 [2];
  
  FUN_1806b1560(param_2,param_1 + 8);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x18,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x1c,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x20,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x24,4);
  auStackX_8[0]._0_1_ = *(undefined1 *)(param_1 + 0x68);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),auStackX_8,1);
  auStackX_8[0] = CONCAT31(auStackX_8[0]._1_3_,*(undefined1 *)(param_1 + 0x69));
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),auStackX_8,1);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x28,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x2c,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x30,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x48,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x4c,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x50,4);
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x78);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),auStackX_8,4);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      (**(code **)(**(longlong **)(param_2 + 8) + 8))
                (*(longlong **)(param_2 + 8),
                 *(longlong *)(*(longlong *)(param_1 + 0x70) + uVar2 * 8) + 0x4c,4);
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while (uVar1 < *(uint *)(param_1 + 0x78));
  }
  FUN_1806a9930(param_2,param_1 + 0x80);
  FUN_1806a9930(param_2,param_1 + 0x90);
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x80);
  *(ulonglong *)(param_1 + 0x40) =
       *(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) * 8;
  *(longlong *)(param_1 + 0x58) = *(longlong *)(param_1 + 0x90);
  *(ulonglong *)(param_1 + 0x60) =
       *(longlong *)(param_1 + 0x90) + (ulonglong)*(uint *)(param_1 + 0x98) * 8;
  return;
}






// 函数: void FUN_1806a9230(longlong param_1,longlong *param_2)
void FUN_1806a9230(longlong param_1,longlong *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined4 auStackX_8 [2];
  
  FUN_1806b1560(param_2,param_1 + 8);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],param_1 + 0x18,4);
  uVar1 = (**(code **)(**(longlong **)(*param_2 + 0x98) + 0x20))
                    (*(longlong **)(*param_2 + 0x98),auStackX_8,*(undefined8 *)(param_1 + 0x28));
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],uVar1,4);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],param_1 + 0x30,4);
  FUN_1806b1560(param_2,param_1 + 0x38);
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x48);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],auStackX_8,4);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],param_1 + 0x4c,4);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],param_1 + 0x50,4);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],param_1 + 0x54,4);
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x60);
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],auStackX_8,4);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x60) != 0) {
    do {
      puVar3 = (undefined8 *)((ulonglong)uVar2 * 0x10 + *(longlong *)(param_1 + 0x58));
      (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],puVar3 + 1,4);
      uVar1 = (**(code **)(**(longlong **)(*param_2 + 0x98) + 0x20))
                        (*(longlong **)(*param_2 + 0x98),auStackX_8,*puVar3);
      (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],uVar1,4);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x60));
  }
  uVar1 = (**(code **)(**(longlong **)(*param_2 + 0x98) + 0x20))
                    (*(longlong **)(*param_2 + 0x98),auStackX_8,*(undefined8 *)(param_1 + 0x20));
  (**(code **)(*(longlong *)param_2[1] + 8))((longlong *)param_2[1],uVar1,4);
  return;
}






// 函数: void FUN_1806a932d(void)
void FUN_1806a932d(void)

{
  undefined8 uVar1;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  undefined8 *puVar2;
  
  do {
    puVar2 = (undefined8 *)((ulonglong)unaff_EBX * 0x10 + *(longlong *)(unaff_RBP + 0x58));
    (**(code **)(*(longlong *)unaff_RSI[1] + 8))((longlong *)unaff_RSI[1],puVar2 + 1,4);
    uVar1 = (**(code **)(**(longlong **)(*unaff_RSI + 0x98) + 0x20))
                      (*(longlong **)(*unaff_RSI + 0x98),&stack0x00000030,*puVar2);
    (**(code **)(*(longlong *)unaff_RSI[1] + 8))((longlong *)unaff_RSI[1],uVar1,4);
    unaff_EBX = unaff_EBX + 1;
  } while (unaff_EBX < *(uint *)(unaff_RBP + 0x60));
  uVar1 = (**(code **)(**(longlong **)(*unaff_RSI + 0x98) + 0x20))
                    (*(longlong **)(*unaff_RSI + 0x98),&stack0x00000030,
                     *(undefined8 *)(unaff_RBP + 0x20));
  (**(code **)(*(longlong *)unaff_RSI[1] + 8))((longlong *)unaff_RSI[1],uVar1,4);
  return;
}






// 函数: void FUN_1806a9396(void)
void FUN_1806a9396(void)

{
  undefined8 uVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  
  uVar1 = (**(code **)(**(longlong **)(*unaff_RSI + 0x98) + 0x20))
                    (*(longlong **)(*unaff_RSI + 0x98),&stack0x00000030,
                     *(undefined8 *)(unaff_RBP + 0x20));
  (**(code **)(*(longlong *)unaff_RSI[1] + 8))((longlong *)unaff_RSI[1],uVar1,4);
  return;
}






// 函数: void FUN_1806a93e0(longlong param_1,longlong param_2)
void FUN_1806a93e0(longlong param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined4 auStackX_8 [2];
  
  FUN_1806b1560(param_2,param_1 + 8);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x18,4);
  FUN_1806b1560(param_2,param_1 + 0x20);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x30,4);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),param_1 + 0x48,4);
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x68);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),auStackX_8,4);
  uVar7 = 0;
  uVar8 = uVar7;
  if (*(int *)(param_1 + 0x68) != 0) {
    do {
      lVar9 = uVar8 * 0x78 + *(longlong *)(param_1 + 0x60);
      FUN_1806b1560(param_2,lVar9 + 0x58);
      (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),lVar9 + 0x68,4);
      (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),lVar9 + 0x6c,4);
      (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),lVar9 + 0x70,4);
      (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),lVar9 + 0x74,4);
      (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),lVar9 + 0x4c,4);
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x68));
  }
  auStackX_8[0] = *(undefined4 *)(param_1 + 0x88);
  (**(code **)(**(longlong **)(param_2 + 8) + 8))(*(longlong **)(param_2 + 8),auStackX_8,4);
  uVar8 = uVar7;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      (**(code **)(**(longlong **)(param_2 + 8) + 8))
                (*(longlong **)(param_2 + 8),*(longlong *)(param_1 + 0x80) + uVar8 * 4,4);
      uVar10 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar10;
    } while (uVar10 < *(uint *)(param_1 + 0x88));
  }
  if (*(int *)(param_1 + 0x78) != *(int *)(param_1 + 0x68)) {
    puVar5 = *(undefined8 **)(param_1 + 0x70);
    puVar6 = puVar5 + (ulonglong)*(uint *)(param_1 + 0x78) * 0xf;
    for (; puVar5 < puVar6; puVar5 = puVar5 + 0xf) {
      *puVar5 = &UNK_18094a9a8;
    }
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (*(uint *)(param_1 + 0x68) != 0) {
      uVar11 = (ulonglong)*(uint *)(param_1 + 0x68);
      uVar8 = uVar7;
      do {
        lVar9 = *(longlong *)(param_1 + 0x60) + uVar8;
        if ((uint)uVar7 < (*(uint *)(param_1 + 0x7c) & 0x7fffffff)) {
          puVar5 = (undefined8 *)(uVar7 * 0x78 + *(longlong *)(param_1 + 0x70));
          *puVar5 = &UNK_18094a9a8;
          uVar4 = *(undefined8 *)(lVar9 + 0x10);
          puVar5[1] = *(undefined8 *)(lVar9 + 8);
          puVar5[2] = uVar4;
          *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar9 + 0x18);
          puVar5[4] = *(undefined8 *)(lVar9 + 0x20);
          puVar5[5] = *(undefined8 *)(lVar9 + 0x28);
          *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar9 + 0x30);
          uVar4 = *(undefined8 *)(lVar9 + 0x40);
          puVar5[7] = *(undefined8 *)(lVar9 + 0x38);
          puVar5[8] = uVar4;
          *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(lVar9 + 0x48);
          *(undefined4 *)((longlong)puVar5 + 0x4c) = *(undefined4 *)(lVar9 + 0x4c);
          *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(lVar9 + 0x50);
          *(undefined4 *)((longlong)puVar5 + 0x54) = *(undefined4 *)(lVar9 + 0x54);
          uVar1 = *(undefined4 *)(lVar9 + 0x5c);
          uVar2 = *(undefined4 *)(lVar9 + 0x60);
          uVar3 = *(undefined4 *)(lVar9 + 100);
          *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(lVar9 + 0x58);
          *(undefined4 *)((longlong)puVar5 + 0x5c) = uVar1;
          *(undefined4 *)(puVar5 + 0xc) = uVar2;
          *(undefined4 *)((longlong)puVar5 + 100) = uVar3;
          *(undefined4 *)(puVar5 + 0xd) = *(undefined4 *)(lVar9 + 0x68);
          *(undefined4 *)((longlong)puVar5 + 0x6c) = *(undefined4 *)(lVar9 + 0x6c);
          *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(lVar9 + 0x70);
          *(undefined4 *)((longlong)puVar5 + 0x74) = *(undefined4 *)(lVar9 + 0x74);
          *(int *)(param_1 + 0x78) = *(int *)(param_1 + 0x78) + 1;
        }
        else {
          FUN_1806ae100(param_1 + 0x70);
        }
        uVar8 = uVar8 + 0x78;
        uVar7 = (ulonglong)*(uint *)(param_1 + 0x78);
        uVar11 = uVar11 - 1;
      } while (uVar11 != 0);
    }
  }
  *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x70);
  *(ulonglong *)(param_1 + 0x40) =
       (ulonglong)*(uint *)(param_1 + 0x78) * 0x78 + *(longlong *)(param_1 + 0x70);
  *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x80);
  *(ulonglong *)(param_1 + 0x58) =
       *(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a9570(undefined8 *param_1,longlong param_2)
void FUN_1806a9570(undefined8 *param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong lVar6;
  longlong unaff_RBX;
  ulonglong unaff_RBP;
  ulonglong uVar7;
  ulonglong uVar8;
  
  puVar5 = (undefined8 *)(param_2 + (longlong)param_1);
  if (param_1 < puVar5) {
    do {
      *param_1 = &UNK_18094a9a8;
      param_1 = param_1 + 0xf;
    } while (param_1 < puVar5);
  }
  *(int *)(unaff_RBX + 0x78) = (int)unaff_RBP;
  if (*(uint *)(unaff_RBX + 0x68) != 0) {
    uVar8 = (ulonglong)*(uint *)(unaff_RBX + 0x68);
    uVar7 = unaff_RBP;
    do {
      lVar6 = *(longlong *)(unaff_RBX + 0x60) + uVar7;
      if ((uint)unaff_RBP < (*(uint *)(unaff_RBX + 0x7c) & 0x7fffffff)) {
        puVar5 = (undefined8 *)((unaff_RBP & 0xffffffff) * 0x78 + *(longlong *)(unaff_RBX + 0x70));
        *puVar5 = &UNK_18094a9a8;
        uVar4 = *(undefined8 *)(lVar6 + 0x10);
        puVar5[1] = *(undefined8 *)(lVar6 + 8);
        puVar5[2] = uVar4;
        *(undefined4 *)(puVar5 + 3) = *(undefined4 *)(lVar6 + 0x18);
        puVar5[4] = *(undefined8 *)(lVar6 + 0x20);
        puVar5[5] = *(undefined8 *)(lVar6 + 0x28);
        *(undefined4 *)(puVar5 + 6) = *(undefined4 *)(lVar6 + 0x30);
        uVar4 = *(undefined8 *)(lVar6 + 0x40);
        puVar5[7] = *(undefined8 *)(lVar6 + 0x38);
        puVar5[8] = uVar4;
        *(undefined4 *)(puVar5 + 9) = *(undefined4 *)(lVar6 + 0x48);
        *(undefined4 *)((longlong)puVar5 + 0x4c) = *(undefined4 *)(lVar6 + 0x4c);
        *(undefined4 *)(puVar5 + 10) = *(undefined4 *)(lVar6 + 0x50);
        *(undefined4 *)((longlong)puVar5 + 0x54) = *(undefined4 *)(lVar6 + 0x54);
        uVar1 = *(undefined4 *)(lVar6 + 0x5c);
        uVar2 = *(undefined4 *)(lVar6 + 0x60);
        uVar3 = *(undefined4 *)(lVar6 + 100);
        *(undefined4 *)(puVar5 + 0xb) = *(undefined4 *)(lVar6 + 0x58);
        *(undefined4 *)((longlong)puVar5 + 0x5c) = uVar1;
        *(undefined4 *)(puVar5 + 0xc) = uVar2;
        *(undefined4 *)((longlong)puVar5 + 100) = uVar3;
        *(undefined4 *)(puVar5 + 0xd) = *(undefined4 *)(lVar6 + 0x68);
        *(undefined4 *)((longlong)puVar5 + 0x6c) = *(undefined4 *)(lVar6 + 0x6c);
        *(undefined4 *)(puVar5 + 0xe) = *(undefined4 *)(lVar6 + 0x70);
        *(undefined4 *)((longlong)puVar5 + 0x74) = *(undefined4 *)(lVar6 + 0x74);
        *(int *)(unaff_RBX + 0x78) = *(int *)(unaff_RBX + 0x78) + 1;
      }
      else {
        FUN_1806ae100(unaff_RBX + 0x70);
      }
      uVar7 = uVar7 + 0x78;
      unaff_RBP = (ulonglong)*(uint *)(unaff_RBX + 0x78);
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  *(longlong *)(unaff_RBX + 0x38) = *(longlong *)(unaff_RBX + 0x70);
  *(ulonglong *)(unaff_RBX + 0x40) =
       (ulonglong)*(uint *)(unaff_RBX + 0x78) * 0x78 + *(longlong *)(unaff_RBX + 0x70);
  *(longlong *)(unaff_RBX + 0x50) = *(longlong *)(unaff_RBX + 0x80);
  *(ulonglong *)(unaff_RBX + 0x58) =
       *(longlong *)(unaff_RBX + 0x80) + (ulonglong)*(uint *)(unaff_RBX + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a9659(void)
void FUN_1806a9659(void)

{
  longlong unaff_RBX;
  
  *(longlong *)(unaff_RBX + 0x38) = *(longlong *)(unaff_RBX + 0x70);
  *(ulonglong *)(unaff_RBX + 0x40) =
       (ulonglong)*(uint *)(unaff_RBX + 0x78) * 0x78 + *(longlong *)(unaff_RBX + 0x70);
  *(longlong *)(unaff_RBX + 0x50) = *(longlong *)(unaff_RBX + 0x80);
  *(ulonglong *)(unaff_RBX + 0x58) =
       *(longlong *)(unaff_RBX + 0x80) + (ulonglong)*(uint *)(unaff_RBX + 0x88) * 4;
  return;
}






// 函数: void FUN_1806a96a0(undefined8 *param_1,longlong *param_2)
void FUN_1806a96a0(undefined8 *param_1,longlong *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 auStackX_8 [2];
  undefined4 auStackX_10 [2];
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined4 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined4 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined4 uStack_40;
  undefined8 uStack_3c;
  undefined4 uStack_34;
  
  auStackX_8[0] = 4;
  (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],auStackX_10,auStackX_8);
  uVar7 = 0;
  puStack_a8 = &UNK_18094a9a8;
  uStack_90 = 0xffffffff;
  puStack_a0 = &DAT_18098bc73;
  puStack_98 = &DAT_18098bc73;
  puStack_88 = &DAT_18098bc73;
  puStack_80 = &DAT_18098bc73;
  puStack_70 = &DAT_18098bc73;
  puStack_68 = &DAT_18098bc73;
  puStack_50 = &DAT_18098bc73;
  puStack_48 = &DAT_18098bc73;
  uStack_78 = 0xffffffff;
  uStack_60 = 0;
  uStack_5c = 0xffffffff;
  uStack_58 = 0;
  uStack_40 = 0xffffffff;
  uStack_3c = 0;
  uStack_34 = 0;
  FUN_1806b10f0(param_2,auStackX_10[0],&puStack_a8);
  if ((int)param_2[1] != 0) {
    do {
      lVar8 = uVar7 * 0x78 + *param_2;
      FUN_1806b14d0(param_1,lVar8 + 0x58);
      auStackX_8[0] = 4;
      (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],lVar8 + 0x68,auStackX_8);
      auStackX_8[0] = 4;
      (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],lVar8 + 0x6c,auStackX_8);
      auStackX_8[0] = 4;
      (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],lVar8 + 0x70,auStackX_8);
      auStackX_8[0] = 4;
      (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],lVar8 + 0x74,auStackX_8);
      auStackX_8[0] = 4;
      (**(code **)(*(longlong *)param_1[1] + 8))((longlong *)param_1[1],lVar8 + 0x4c,auStackX_8);
      lVar5 = (**(code **)(*(longlong *)*param_1 + 0x68))
                        ((longlong *)*param_1,&puStack_a8,*(undefined4 *)(lVar8 + 0x4c));
      uVar6 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar6;
      uVar4 = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar8 + 8) = *(undefined8 *)(lVar5 + 8);
      *(undefined8 *)(lVar8 + 0x10) = uVar4;
      *(undefined4 *)(lVar8 + 0x18) = *(undefined4 *)(lVar5 + 0x18);
      *(undefined8 *)(lVar8 + 0x20) = *(undefined8 *)(lVar5 + 0x20);
      *(undefined8 *)(lVar8 + 0x28) = *(undefined8 *)(lVar5 + 0x28);
      *(undefined4 *)(lVar8 + 0x30) = *(undefined4 *)(lVar5 + 0x30);
      uVar1 = *(undefined4 *)(lVar5 + 0x3c);
      uVar2 = *(undefined4 *)(lVar5 + 0x40);
      uVar3 = *(undefined4 *)(lVar5 + 0x44);
      *(undefined4 *)(lVar8 + 0x38) = *(undefined4 *)(lVar5 + 0x38);
      *(undefined4 *)(lVar8 + 0x3c) = uVar1;
      *(undefined4 *)(lVar8 + 0x40) = uVar2;
      *(undefined4 *)(lVar8 + 0x44) = uVar3;
      *(undefined4 *)(lVar8 + 0x48) = *(undefined4 *)(lVar5 + 0x48);
      *(undefined4 *)(lVar8 + 0x4c) = *(undefined4 *)(lVar5 + 0x4c);
      *(undefined4 *)(lVar8 + 0x50) = *(undefined4 *)(lVar5 + 0x50);
      *(undefined4 *)(lVar8 + 0x54) = *(undefined4 *)(lVar5 + 0x54);
    } while (uVar6 < *(uint *)(param_2 + 1));
  }
  return;
}






// 函数: void FUN_1806a9749(undefined4 param_1)
void FUN_1806a9749(undefined4 param_1)

{
  longlong *plVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint unaff_EBX;
  longlong unaff_RBP;
  longlong lVar7;
  undefined8 *unaff_R14;
  longlong *unaff_R15;
  
  do {
    lVar7 = (ulonglong)unaff_EBX * 0x78 + *unaff_R15;
    FUN_1806b14d0(param_1,lVar7 + 0x58);
    plVar1 = (longlong *)unaff_R14[1];
    *(undefined4 *)(unaff_RBP + 0x67) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,lVar7 + 0x68,unaff_RBP + 0x67);
    plVar1 = (longlong *)unaff_R14[1];
    *(undefined4 *)(unaff_RBP + 0x67) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,lVar7 + 0x6c,unaff_RBP + 0x67);
    plVar1 = (longlong *)unaff_R14[1];
    *(undefined4 *)(unaff_RBP + 0x67) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,lVar7 + 0x70,unaff_RBP + 0x67);
    plVar1 = (longlong *)unaff_R14[1];
    *(undefined4 *)(unaff_RBP + 0x67) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,lVar7 + 0x74,unaff_RBP + 0x67);
    plVar1 = (longlong *)unaff_R14[1];
    *(undefined4 *)(unaff_RBP + 0x67) = 4;
    (**(code **)(*plVar1 + 8))(plVar1,lVar7 + 0x4c,unaff_RBP + 0x67);
    lVar6 = (**(code **)(*(longlong *)*unaff_R14 + 0x68))
                      ((longlong *)*unaff_R14,unaff_RBP + -0x49,*(undefined4 *)(lVar7 + 0x4c));
    unaff_EBX = unaff_EBX + 1;
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    *(undefined8 *)(lVar7 + 8) = *(undefined8 *)(lVar6 + 8);
    *(undefined8 *)(lVar7 + 0x10) = uVar5;
    *(undefined4 *)(lVar7 + 0x18) = *(undefined4 *)(lVar6 + 0x18);
    *(undefined8 *)(lVar7 + 0x20) = *(undefined8 *)(lVar6 + 0x20);
    *(undefined8 *)(lVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
    *(undefined4 *)(lVar7 + 0x30) = *(undefined4 *)(lVar6 + 0x30);
    param_1 = *(undefined4 *)(lVar6 + 0x38);
    uVar2 = *(undefined4 *)(lVar6 + 0x3c);
    uVar3 = *(undefined4 *)(lVar6 + 0x40);
    uVar4 = *(undefined4 *)(lVar6 + 0x44);
    *(undefined4 *)(lVar7 + 0x38) = param_1;
    *(undefined4 *)(lVar7 + 0x3c) = uVar2;
    *(undefined4 *)(lVar7 + 0x40) = uVar3;
    *(undefined4 *)(lVar7 + 0x44) = uVar4;
    *(undefined4 *)(lVar7 + 0x48) = *(undefined4 *)(lVar6 + 0x48);
    *(undefined4 *)(lVar7 + 0x4c) = *(undefined4 *)(lVar6 + 0x4c);
    *(undefined4 *)(lVar7 + 0x50) = *(undefined4 *)(lVar6 + 0x50);
    *(undefined4 *)(lVar7 + 0x54) = *(undefined4 *)(lVar6 + 0x54);
  } while (unaff_EBX < *(uint *)(unaff_R15 + 1));
  return;
}






// 函数: void FUN_1806a9866(void)
void FUN_1806a9866(void)

{
  return;
}






// 函数: void FUN_1806a9880(longlong param_1,longlong *param_2)
void FUN_1806a9880(longlong param_1,longlong *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined8 uStackX_8;
  undefined4 auStackX_10 [2];
  undefined4 auStackX_18 [2];
  
  uStackX_8 = CONCAT44(uStackX_8._4_4_,4);
  (**(code **)(**(longlong **)(param_1 + 8) + 8))
            (*(longlong **)(param_1 + 8),auStackX_10,&uStackX_8);
  uVar3 = 0;
  uStackX_8 = 0;
  FUN_1806b11f0(param_2,auStackX_10[0],&uStackX_8);
  if ((int)param_2[1] != 0) {
    do {
      uStackX_8._0_4_ = 4;
      puVar1 = (undefined4 *)(*param_2 + uVar3 * 8);
      (**(code **)(**(longlong **)(param_1 + 8) + 8))
                (*(longlong **)(param_1 + 8),auStackX_18,&uStackX_8);
      uStackX_8 = CONCAT44(uStackX_8._4_4_,4);
      (**(code **)(**(longlong **)(param_1 + 8) + 8))
                (*(longlong **)(param_1 + 8),puVar1 + 1,&uStackX_8);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
      *puVar1 = auStackX_18[0];
    } while (uVar2 < *(uint *)(param_2 + 1));
  }
  return;
}






// 函数: void FUN_1806a98c7(void)
void FUN_1806a98c7(void)

{
  undefined4 *puVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar2;
  ulonglong unaff_RDI;
  undefined4 uStack0000000000000040;
  undefined4 in_stack_00000050;
  
  do {
    uStack0000000000000040 = 4;
    puVar1 = (undefined4 *)(*unaff_RSI + unaff_RDI * 8);
    (**(code **)(**(longlong **)(unaff_RBP + 8) + 8))
              (*(longlong **)(unaff_RBP + 8),&stack0x00000050,&stack0x00000040);
    uStack0000000000000040 = 4;
    (**(code **)(**(longlong **)(unaff_RBP + 8) + 8))
              (*(longlong **)(unaff_RBP + 8),puVar1 + 1,&stack0x00000040);
    uVar2 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar2;
    *puVar1 = in_stack_00000050;
  } while (uVar2 < *(uint *)(unaff_RSI + 1));
  return;
}






// 函数: void FUN_1806a9920(void)
void FUN_1806a9920(void)

{
  return;
}






// 函数: void FUN_1806a9930(longlong param_1,longlong *param_2)
void FUN_1806a9930(longlong param_1,longlong *param_2)

{
  longlong lVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 auStackX_8 [2];
  
  auStackX_8[0] = (undefined4)param_2[1];
  (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),auStackX_8,4);
  uVar3 = 0;
  if ((int)param_2[1] != 0) {
    do {
      lVar1 = *param_2;
      auStackX_8[0] = *(undefined4 *)(lVar1 + uVar3 * 8);
      (**(code **)(**(longlong **)(param_1 + 8) + 8))(*(longlong **)(param_1 + 8),auStackX_8,4);
      (**(code **)(**(longlong **)(param_1 + 8) + 8))
                (*(longlong **)(param_1 + 8),lVar1 + uVar3 * 8 + 4,4);
      uVar2 = (int)uVar3 + 1;
      uVar3 = (ulonglong)uVar2;
    } while (uVar2 < *(uint *)(param_2 + 1));
  }
  return;
}






// 函数: void FUN_1806a9968(void)
void FUN_1806a9968(void)

{
  longlong lVar1;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  uint uVar2;
  ulonglong unaff_RDI;
  undefined4 uStack0000000000000030;
  
  do {
    lVar1 = *unaff_RSI;
    uStack0000000000000030 = *(undefined4 *)(lVar1 + unaff_RDI * 8);
    (**(code **)(**(longlong **)(unaff_RBP + 8) + 8))
              (*(longlong **)(unaff_RBP + 8),&stack0x00000030,4);
    (**(code **)(**(longlong **)(unaff_RBP + 8) + 8))
              (*(longlong **)(unaff_RBP + 8),lVar1 + unaff_RDI * 8 + 4,4);
    uVar2 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar2;
  } while (uVar2 < *(uint *)(unaff_RSI + 1));
  return;
}






// 函数: void FUN_1806a99b3(void)
void FUN_1806a99b3(void)

{
  return;
}



undefined8 * FUN_1806a99d0(undefined8 *param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  ulonglong uVar10;
  
  uVar8 = 0;
  *param_1 = &UNK_18094a3e8;
  plVar1 = param_1 + 0x10;
  uVar4 = *(undefined4 *)(param_2 + 0xc);
  uVar5 = *(undefined4 *)(param_2 + 0x10);
  uVar6 = *(undefined4 *)(param_2 + 0x14);
  plVar2 = param_1 + 0x12;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)((longlong)param_1 + 0xc) = uVar4;
  *(undefined4 *)(param_1 + 2) = uVar5;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)((longlong)param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 0x28);
  *(undefined4 *)((longlong)param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x2c);
  *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 0x30);
  param_1[7] = *(undefined8 *)(param_2 + 0x38);
  param_1[8] = *(undefined8 *)(param_2 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 0x48);
  *(undefined4 *)((longlong)param_1 + 0x4c) = *(undefined4 *)(param_2 + 0x4c);
  *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 0x50);
  param_1[0xb] = *(undefined8 *)(param_2 + 0x58);
  param_1[0xc] = *(undefined8 *)(param_2 + 0x60);
  *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0x68);
  *(undefined1 *)((longlong)param_1 + 0x69) = *(undefined1 *)(param_2 + 0x69);
  *param_1 = &UNK_18094aef0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *plVar1 = 0;
  param_1[0x11] = 0;
  *plVar2 = 0;
  param_1[0x13] = 0;
  lVar7 = param_1[7];
  uVar10 = uVar8;
  if ((int)(param_1[8] - lVar7 >> 3) != 0) {
    do {
      puVar3 = (undefined8 *)(lVar7 + uVar10 * 8);
      if (*(uint *)(param_1 + 0x11) < (*(uint *)((longlong)param_1 + 0x8c) & 0x7fffffff)) {
        *(undefined8 *)(*plVar1 + (ulonglong)*(uint *)(param_1 + 0x11) * 8) = *puVar3;
        *(int *)(param_1 + 0x11) = *(int *)(param_1 + 0x11) + 1;
      }
      else {
        FUN_1806ae480(plVar1,puVar3);
      }
      lVar7 = param_1[7];
      uVar9 = (int)uVar10 + 1;
      uVar10 = (ulonglong)uVar9;
    } while (uVar9 < (uint)(param_1[8] - lVar7 >> 3));
  }
  lVar7 = param_1[0xb];
  if ((int)(param_1[0xc] - lVar7 >> 3) != 0) {
    do {
      puVar3 = (undefined8 *)(lVar7 + uVar8 * 8);
      if (*(uint *)(param_1 + 0x13) < (*(uint *)((longlong)param_1 + 0x9c) & 0x7fffffff)) {
        *(undefined8 *)(*plVar2 + (ulonglong)*(uint *)(param_1 + 0x13) * 8) = *puVar3;
        *(int *)(param_1 + 0x13) = *(int *)(param_1 + 0x13) + 1;
      }
      else {
        FUN_1806ae480(plVar2,puVar3);
      }
      lVar7 = param_1[0xb];
      uVar9 = (int)uVar8 + 1;
      uVar8 = (ulonglong)uVar9;
    } while (uVar9 < (uint)(param_1[0xc] - lVar7 >> 3));
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 * FUN_1806a9b80(undefined8 *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  *param_1 = &UNK_18094af38;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  FUN_1806b0950(param_1 + 1,0x40);
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x6c) = 0xffffffff;
  param_1[0xe] = 0;
  FUN_1806b0720(param_1 + 8,0x40);
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  lVar1 = (**(code **)(*_DAT_180be0050 + 8))
                    (_DAT_180be0050,0xb8,&UNK_18094b068,&UNK_18094b020,0x1ac);
  if (lVar1 != 0) {
    uVar2 = FUN_1806a9cc0(lVar1);
  }
  param_1[0x13] = uVar2;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(undefined4 *)(param_1 + 0x19) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xcc) = 0xffffffff;
  param_1[0x1a] = 0;
  FUN_1806b0950(param_1 + 0x14,0x40);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 1;
  return param_1;
}



undefined8 * FUN_1806a9cc0(undefined8 *param_1)

{
  *param_1 = &UNK_18094aef8;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined4 *)(param_1 + 6) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x34) = 0xffffffff;
  param_1[7] = 0;
  FUN_1806b0b40(param_1 + 1,0x40);
  *(undefined4 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0x74) = 0xffffffff;
  param_1[0xf] = 0;
  FUN_1806b0560(param_1 + 9,0x40);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 0x15) = 0x3f400000;
  *(undefined4 *)((longlong)param_1 + 0xac) = 0xffffffff;
  param_1[0x16] = 0;
  FUN_1806a6390(param_1 + 0x10,0x40);
  return param_1;
}






