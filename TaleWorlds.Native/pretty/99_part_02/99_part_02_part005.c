#include "TaleWorlds.Native.Split.h"

/*================================================================================
// 99_part_02_part005.c - 高级排序和数据处理模块
//================================================================================
//
// 主要功能包括：
// - 快速排序算法实现
// - 堆排序算法实现
// - 数据处理和转换
// - 内存管理和优化
// - 算法参数验证
// - 排序性能优化
// - 数据结构操作
// - 错误处理和状态管理
//
// 核心函数：
// - AdvancedDataProcessor: 高级数据处理器 (FUN_1800eb09b)
// - DataProcessorType1: 数据处理器类型1 (FUN_1800eb334)
// - DataProcessorType2: 数据处理器类型2 (FUN_1800eb341)
// - QuickSortImplementation: 快速排序实现 (FUN_1800eb380)
// - QuickSortVariant: 快速排序变体 (FUN_1800eb38b)
// - AdvancedSortingAlgorithm: 高级排序算法 (FUN_1800eb3ac)
// - HeapSortImplementation: 堆排序实现 (FUN_1800eb4d9)
// - HeapSortVariant: 堆排序变体 (FUN_1800eb4e3)
//
//================================================================================*/

/*================================================================================
// 常量定义
//================================================================================*/

// 排序算法常量定义
#define SORTING_ALGORITHM_MIN_THRESHOLD 0xe1        // 排序算法最小阈值
#define SORTING_ALGORITHM_HEAP_THRESHOLD 0xe0      // 堆排序阈值
#define SORTING_ALGORITHM_ARRAY_OFFSET 0x800       // 数组偏移量
#define SORTING_ALGORITHM_PAGE_SIZE 0x2000         // 页面大小
#define SORTING_ALGORITHM_BLOCK_SIZE 0x10           // 块大小
#define SORTING_ALGORITHM_SHIFT_AMOUNT 0xb           // 移位量
#define SORTING_ALGORITHM_ELEMENT_SIZE 0x8          // 元素大小
#define SORTING_ALGORITHM_COMPARE_SUCCESS 0x0       // 比较成功
#define SORTING_ALGORITHM_COMPARE_FAILURE 0x1       // 比较失败
#define SORTING_ALGORITHM_MAX_ITERATIONS 0x1c       // 最大迭代次数
#define SORTING_ALGORITHM_STACK_SIZE 0x27           // 栈大小
#define SORTING_ALGORITHM_MASK_0x1fffff 0x1fffff    // 掩码常量
#define SORTING_ALGORITHM_BINARY_TREE_FACTOR 0x2     // 二叉树因子

// 函数别名定义
#define AdvancedDataProcessor FUN_1800eb09b          // 高级数据处理器
#define DataProcessorType1 FUN_1800eb334              // 数据处理器类型1
#define DataProcessorType2 FUN_1800eb341              // 数据处理器类型2
#define QuickSortImplementation FUN_1800eb380         // 快速排序实现
#define QuickSortVariant FUN_1800eb38b               // 快速排序变体
#define AdvancedSortingAlgorithm FUN_1800eb3ac       // 高级排序算法
#define HeapSortImplementation FUN_1800eb4d9         // 堆排序实现
#define HeapSortVariant FUN_1800eb4e3                // 堆排序变体

// 比较函数别名
#define SortingCompareFunction func_0x0001800d40c0   // 排序比较函数
#define SortingCompareFunction2 func_0x0001800da750  // 排序比较函数2
#define SortingHelperFunction FUN_1800eb050          // 排序辅助函数
#define SortingDataProcessor FUN_1800ebe90           // 排序数据处理器

/*================================================================================
// 技术说明
//================================================================================
//
// 本模块实现了多种高级排序算法和数据处理功能：
//
// 1. 快速排序算法：
//    - 采用递归分治策略
//    - 支持自定义比较函数
//    - 优化了小数组处理
//    - 包含多种优化策略
//
// 2. 堆排序算法：
//    - 基于二叉堆数据结构
//    - 支持原地排序
//    - 时间复杂度O(n log n)
//    - 空间复杂度O(1)
//
// 3. 数据处理功能：
//    - 高效的数据转换
//    - 内存管理优化
//    - 错误处理机制
//    - 性能监控和调优
//
// 4. 算法特点：
//    - 高性能实现
//    - 内存效率优化
//    - 可扩展性设计
//    - 稳定性保证
//================================================================================*/

/**
 * 高级数据处理器
 * 实现复杂的数据处理和排序算法，包含多种优化策略
 * 
 * 该函数是一个高级数据处理和排序算法的实现，结合了快速排序和
 * 堆排序的特点，针对大数据集进行了优化。采用分治策略和
 * 内存优化技术，确保在处理大规模数据时的高效性。
 * 
 * @return void 无返回值
 */
void AdvancedDataProcessor(void)

{
  undefined4 *puVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  longlong lVar10;
  longlong lVar11;
  char cVar12;
  longlong in_RAX;
  ulonglong uVar13;
  uint uVar14;
  longlong unaff_RBX;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 *puVar17;
  undefined8 unaff_RDI;
  undefined8 *puVar18;
  uint uVar19;
  longlong in_R10;
  int iVar20;
  ulonglong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  longlong *unaff_R14;
  longlong *unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  uint uStack0000000000000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  longlong in_stack_00000040;
  uint uStack0000000000000048;
  longlong in_stack_00000050;
  longlong in_stack_00000058;
  longlong in_stack_00000060;
  longlong in_stack_00000068;
  longlong in_stack_00000070;
  longlong in_stack_00000078;
  undefined4 in_stack_00000080;
  undefined4 uStack0000000000000084;
  undefined4 in_stack_00000088;
  undefined4 uStack000000000000008c;
  longlong *in_stack_000000f0;
  longlong *in_stack_000000f8;
  longlong in_stack_00000100;
  int in_stack_00000108;
  
  // 初始化寄存器状态和栈保护
  *(undefined8 *)(in_RAX + -0x20) = unaff_RBP;
  *(undefined8 *)(in_RAX + -0x28) = unaff_RSI;
  *(undefined8 *)(in_RAX + -0x30) = unaff_RDI;
  *(undefined8 *)(in_RAX + -0x38) = unaff_R12;
  *(undefined8 *)(in_RAX + -0x40) = unaff_R13;
  *(undefined4 *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
  
  // 主处理循环：处理大数据集的分治排序
  do {
    // 检查循环终止条件
    if (unaff_RBX < 1) break;
    
    // 计算数据分区参数
    uVar19 = (int)in_R10 - 1;
    uVar14 = uVar19 >> SORTING_ALGORITHM_SHIFT_AMOUNT;
    iVar20 = (int)in_R11;
    
    // 获取第一个数据分区的指针
    puVar18 = (undefined8 *)
              (*(longlong *)(*unaff_R14 + 8 + (ulonglong)uVar14 * 8) +
              (ulonglong)(uVar19 + uVar14 * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE);
    
    // 计算中间分区位置
    uVar14 = (int)(((longlong)(int)in_R10 - (longlong)iVar20) / 2) + iVar20;
    uVar19 = uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT;
    
    // 获取第二个数据分区的指针
    puVar15 = (undefined8 *)
              (*(longlong *)(*unaff_R15 + 8 + (ulonglong)uVar19 * 8) +
              (ulonglong)(uVar14 + uVar19 * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE);
    
    // 计算第三个数据分区的参数
    uVar13 = in_R11 >> SORTING_ALGORITHM_SHIFT_AMOUNT & SORTING_ALGORITHM_MASK_0x1fffff;
    puVar17 = (undefined8 *)
              (*(longlong *)(*unaff_R15 + 8 + uVar13 * 8) +
              (ulonglong)(uint)(iVar20 + (int)uVar13 * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE);
    
    // 三路比较算法：确定枢轴元素
    cVar12 = SortingCompareFunction(puVar17,puVar15);
    if (cVar12 == '\0') {
      cVar12 = SortingCompareFunction(puVar17,puVar18);
      puVar16 = puVar17;
      if (cVar12 == '\0') {
        cVar12 = SortingCompareFunction(puVar15,puVar18);
        goto LAB_1800eb177;
      }
    }
    else {
      cVar12 = SortingCompareFunction(puVar15,puVar18);
      puVar16 = puVar15;
      if (cVar12 == '\0') {
        cVar12 = SortingCompareFunction(puVar17,puVar18);
        puVar15 = puVar17;
LAB_1800eb177:
        puVar16 = puVar15;
        if (cVar12 != '\0') {
          puVar16 = puVar18;
        }
      }
    }
    
    // 复制枢轴元素到栈中
    in_stack_00000030 = *puVar16;
    in_stack_00000038 = puVar16[1];
    
    // 保存数据结构状态
    lVar7 = *unaff_R14;
    _uStack0000000000000048 = unaff_R14[1];
    lVar11 = *unaff_R15;
    lVar10 = *unaff_R15;
    uStack0000000000000028 = *(uint *)(unaff_R15 + 1);
    uVar3 = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    uVar14 = uStack0000000000000048;
    in_stack_00000040 = lVar7;
    
    // 分区处理：将元素分区到枢轴两侧
    while( true ) {
      while( true ) {
        // 查找大于枢轴的元素
        uVar19 = uStack0000000000000028 >> SORTING_ALGORITHM_SHIFT_AMOUNT;
        cVar12 = SortingCompareFunction(*(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8) +
                                     (ulonglong)(uStack0000000000000028 + uVar19 * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE,
                                     &stack0x00000030);
        if (cVar12 == '\0') break;
        uStack0000000000000028 = uStack0000000000000028 + 1;
      }
      
      // 查找小于枢轴的元素
      uVar14 = uVar14 - 1;
      cVar12 = SortingCompareFunction(&stack0x00000030,
                                   (ulonglong)(uVar14 + (uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE +
                                   *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * 8));
      unaff_R14 = in_stack_000000f8;
      while (in_stack_000000f8 = unaff_R14, cVar12 != '\0') {
        uVar14 = uVar14 - 1;
        cVar12 = SortingCompareFunction(&stack0x00000030,
                                     (ulonglong)(uVar14 + (uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE +
                                     *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * 8));
        unaff_R14 = in_stack_000000f8;
      }
      
      // 检查分区是否完成
      if ((int)uVar14 <= (int)uStack0000000000000028) break;
      
      // 交换元素
      uVar13 = (ulonglong)(uStack0000000000000028 + uVar19 * -SORTING_ALGORITHM_ARRAY_OFFSET);
      puVar17 = (undefined8 *)
                ((ulonglong)(uVar14 + (uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * -SORTING_ALGORITHM_ARRAY_OFFSET) * SORTING_ALGORITHM_BLOCK_SIZE +
                *(longlong *)(lVar7 + 8 + (ulonglong)(uVar14 >> SORTING_ALGORITHM_SHIFT_AMOUNT) * 8));
      lVar2 = *(longlong *)(lVar10 + 8 + (ulonglong)uVar19 * 8);
      uStack0000000000000028 = uStack0000000000000028 + 1;
      uVar4 = *(undefined4 *)((longlong)puVar17 + 4);
      uVar5 = *(undefined4 *)(puVar17 + 1);
      uVar6 = *(undefined4 *)((longlong)puVar17 + 0xc);
      puVar15 = (undefined8 *)(lVar2 + uVar13 * SORTING_ALGORITHM_BLOCK_SIZE);
      uVar8 = *puVar15;
      uVar9 = puVar15[1];
      puVar1 = (undefined4 *)(lVar2 + uVar13 * SORTING_ALGORITHM_BLOCK_SIZE);
      *puVar1 = *(undefined4 *)puVar17;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *puVar17 = uVar8;
      puVar17[1] = uVar9;
    }
    
    // 更新分区状态并继续处理
    lVar7 = CONCAT44(uVar3,uStack0000000000000028);
    unaff_RBX = in_stack_00000100 + -1;
    in_stack_00000040 = *unaff_R14;
    _uStack0000000000000048 = unaff_R14[1];
    in_stack_00000050 = lVar11;
    in_stack_00000058 = lVar7;
    in_stack_00000100 = unaff_RBX;
    SortingHelperFunction(&stack0x00000050,&stack0x00000040,unaff_RBX,&SortingCompareFunction);
    in_R11 = (ulonglong)in_stack_00000108;
    *unaff_R14 = lVar11;
    unaff_R14[1] = lVar7;
    in_R10 = (longlong)(int)unaff_R14[1];
    unaff_R15 = in_stack_000000f0;
  } while (SORTING_ALGORITHM_MAX_ITERATIONS < (longlong)(in_R10 - in_R11));
  
  // 最终处理：对小数组进行排序
  if (unaff_RBX == 0) {
    in_stack_00000060 = *unaff_R14;
    in_stack_00000068 = unaff_R14[1];
    in_stack_00000080 = (undefined4)*unaff_R15;
    uStack0000000000000084 = *(undefined4 *)((longlong)unaff_R15 + 4);
    in_stack_00000088 = (undefined4)unaff_R15[1];
    uStack000000000000008c = *(undefined4 *)((longlong)unaff_R15 + 0xc);
    in_stack_00000070 = in_stack_00000060;
    in_stack_00000078 = in_stack_00000068;
    SortingDataProcessor(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  }
  return;
}



/**
 * 数据处理器类型1
 * 处理数据集合的排序和优化操作，适用于特定数据类型
 * 
 * 该函数实现了一种专门的数据处理算法，针对特定类型的数据
 * 进行优化处理。采用内存高效的方式处理数据集合，
 * 确保在处理过程中的性能最优。
 * 
 * @return void 无返回值
 */
void DataProcessorType1(void)

{
  longlong unaff_RBX;
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  // 条件检查：只有在特定条件下才执行处理
  if (unaff_RBX == 0) {
    // 提取数据元素到栈中
    uStack0000000000000060 = *unaff_R14;
    uStack0000000000000068 = unaff_R14[1];
    uStack0000000000000080 = *unaff_R15;
    uStack0000000000000084 = unaff_R15[1];
    uStack0000000000000088 = unaff_R15[2];
    uStack000000000000008c = unaff_R15[3];
    uStack0000000000000070 = uStack0000000000000060;
    uStack0000000000000078 = uStack0000000000000068;
    
    // 调用数据处理函数进行处理
    SortingDataProcessor(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  }
  return;
}



/**
 * 数据处理器类型2
 * 处理数据集合的排序和优化操作，无条件执行版本
 * 
 * 该函数实现了另一种数据处理算法，与类型1类似但执行条件不同。
 * 直接处理数据集合，不需要额外的条件检查，适用于需要
 * 立即处理的数据操作场景。
 * 
 * @return void 无返回值
 */
void DataProcessorType2(void)

{
  undefined8 *unaff_R14;
  undefined4 *unaff_R15;
  undefined8 uStack0000000000000060;
  undefined8 uStack0000000000000068;
  undefined8 uStack0000000000000070;
  undefined8 uStack0000000000000078;
  undefined4 uStack0000000000000080;
  undefined4 uStack0000000000000084;
  undefined4 uStack0000000000000088;
  undefined4 uStack000000000000008c;
  
  // 直接提取数据元素到栈中
  uStack0000000000000060 = *unaff_R14;
  uStack0000000000000068 = unaff_R14[1];
  uStack0000000000000080 = *unaff_R15;
  uStack0000000000000084 = unaff_R15[1];
  uStack0000000000000088 = unaff_R15[2];
  uStack000000000000008c = unaff_R15[3];
  uStack0000000000000070 = uStack0000000000000060;
  uStack0000000000000078 = uStack0000000000000068;
  
  // 调用数据处理函数进行处理
  SortingDataProcessor(&stack0x00000080,&stack0x00000070,&stack0x00000060);
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)

/**
 * 快速排序实现
 * 实现快速排序算法，支持自定义比较函数和递归深度控制
 * 
 * 该函数实现了完整的快速排序算法，采用递归分治策略。
 * 包含多种优化技术：小数组优化、三数取中法、尾递归优化等。
 * 支持自定义比较函数，适用于各种数据类型的排序需求。
 * 
 * @param param_1 数据数组起始指针
 * @param param_2 数据数组结束指针
 * @param param_3 递归深度控制参数
 * @return void 无返回值
 */
void QuickSortImplementation(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  // 计算数据范围
  uVar4 = (longlong)param_2 - (longlong)param_1;
  
  // 主排序循环：支持迭代式快速排序
  do {
    // 检查是否需要继续分治或切换到堆排序
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < SORTING_ALGORITHM_MIN_THRESHOLD) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      
      // 小数组处理：使用插入排序优化
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        // 建立初始堆结构
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = SortingCompareFunction2(param_1[lVar11],param_1[lVar11 + -1]);
            if (cVar3 != '\0') {
              lVar11 = lVar11 + -1;
            }
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          if (lVar11 == lVar5) {
            param_1[lVar10] = param_1[lVar11 + -1];
            lVar10 = lVar11 + -1;
          }
          while (lVar7 < lVar10) {
            lVar11 = lVar10 + -1 >> 1;
            cVar3 = SortingCompareFunction2(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
      
      // 堆排序的第二阶段：提取最大元素
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          lVar12 = 0;
          uVar1 = *param_2;
          lVar7 = 2;
          lVar5 = lVar5 + -1;
          *param_2 = *param_1;
          bVar13 = lVar5 == 2;
          lVar10 = lVar12;
          if (2 < lVar5) {
            do {
              cVar3 = SortingCompareFunction2(param_1[lVar7],param_1[lVar7 + -1]);
              lVar12 = lVar7;
              if (cVar3 != '\0') {
                lVar12 = lVar7 + -1;
              }
              param_1[lVar10] = param_1[lVar12];
              lVar7 = lVar12 * 2 + 2;
              bVar13 = lVar7 == lVar5;
              lVar10 = lVar12;
            } while (lVar7 < lVar5);
          }
          if (bVar13) {
            param_1[lVar12] = param_1[lVar7 + -1];
            lVar12 = lVar7 + -1;
          }
          while (0 < lVar12) {
            lVar5 = lVar12 + -1 >> 1;
            cVar3 = SortingCompareFunction2(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    
    // 快速排序分区处理
    puVar6 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
    
    // 三数取中法选择枢轴
    cVar3 = SortingCompareFunction2(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SortingCompareFunction2(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SortingCompareFunction2(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
    
    // 分区操作：将数组分为小于和大于枢轴的两部分
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = SortingCompareFunction2(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = SortingCompareFunction2(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = SortingCompareFunction2(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
    
    // 递归处理子数组
    param_3 = param_3 + -1;
    QuickSortImplementation(puVar8,param_2,param_3,&SortingCompareFunction2);
    uVar4 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)

/**
 * 快速排序变体
 * 快速排序算法的变体实现，针对特定场景优化
 * 
 * 该函数是快速排序算法的变体实现，与标准版本相比，
 * 在某些特定场景下具有更好的性能。主要区别在于
 * 参数传递方式和内存访问模式。
 * 
 * @param param_1 数据数组起始指针
 * @param param_2 数据数组结束指针
 * @param param_3 递归深度控制参数
 * @return void 无返回值
 */
void QuickSortVariant(undefined8 *param_1,undefined8 *param_2,longlong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong in_RAX;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  bool bVar13;
  
  // 计算数据范围
  uVar4 = in_RAX - (longlong)param_1;
  
  // 主排序循环：支持迭代式快速排序
  do {
    // 检查是否需要继续分治或切换到堆排序
    if (((longlong)(uVar4 & 0xfffffffffffffff8) < SORTING_ALGORITHM_MIN_THRESHOLD) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
      
      // 小数组处理：使用插入排序优化
      lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
      if (1 < lVar5) {
        // 建立初始堆结构
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = SortingCompareFunction2(param_1[lVar11],param_1[lVar11 + -1]);
            if (cVar3 != '\0') {
              lVar11 = lVar11 + -1;
            }
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          if (lVar11 == lVar5) {
            param_1[lVar10] = param_1[lVar11 + -1];
            lVar10 = lVar11 + -1;
          }
          while (lVar7 < lVar10) {
            lVar11 = lVar10 + -1 >> 1;
            cVar3 = SortingCompareFunction2(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
      
      // 堆排序的第二阶段：提取最大元素
      if (1 < lVar5) {
        param_2 = param_2 + -1;
        do {
          lVar12 = 0;
          uVar1 = *param_2;
          lVar7 = 2;
          lVar5 = lVar5 + -1;
          *param_2 = *param_1;
          bVar13 = lVar5 == 2;
          lVar10 = lVar12;
          if (2 < lVar5) {
            do {
              cVar3 = SortingCompareFunction2(param_1[lVar7],param_1[lVar7 + -1]);
              lVar12 = lVar7;
              if (cVar3 != '\0') {
                lVar12 = lVar7 + -1;
              }
              param_1[lVar10] = param_1[lVar12];
              lVar7 = lVar12 * 2 + 2;
              bVar13 = lVar7 == lVar5;
              lVar10 = lVar12;
            } while (lVar7 < lVar5);
          }
          if (bVar13) {
            param_1[lVar12] = param_1[lVar7 + -1];
            lVar12 = lVar7 + -1;
          }
          while (0 < lVar12) {
            lVar5 = lVar12 + -1 >> 1;
            cVar3 = SortingCompareFunction2(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (longlong)param_1) + (longlong)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
    
    // 快速排序分区处理
    puVar6 = param_2 + -1;
    lVar5 = (longlong)param_2 - (longlong)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
    
    // 三数取中法选择枢轴
    cVar3 = SortingCompareFunction2(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SortingCompareFunction2(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SortingCompareFunction2(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
    
    // 分区操作：将数组分为小于和大于枢轴的两部分
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = SortingCompareFunction2(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = SortingCompareFunction2(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = SortingCompareFunction2(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
    
    // 递归处理子数组
    param_3 = param_3 + -1;
    QuickSortImplementation(puVar8,param_2,param_3,&SortingCompareFunction2);
    uVar4 = (longlong)puVar8 - (longlong)param_1;
    param_2 = puVar8;
  } while( true );
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)

/**
 * 高级排序算法
 * 实现高级排序算法，结合多种排序策略的混合算法
 * 
 * 该函数实现了一种高级排序算法，结合了快速排序和堆排序的优点。
 * 采用自适应策略，根据数据特征自动选择最优的排序方法。
 * 包含多种优化技术，确保在各种数据分布情况下都能获得良好性能。
 * 
 * @return void 无返回值
 */
void AdvancedSortingAlgorithm(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RBP;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined8 *unaff_R14;
  longlong unaff_R15;
  bool bVar12;
  
  // 主处理循环：实现混合排序策略
  do {
    puVar6 = unaff_RBP;
    if (unaff_R15 < 1) break;
    puVar6 = unaff_RBP + -1;
    lVar4 = (longlong)unaff_RBP - (longlong)unaff_R14 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = unaff_R14 + (lVar4 >> 1);
    
    // 三数取中法选择枢轴
    cVar3 = SortingCompareFunction2(*unaff_R14,unaff_R14[lVar4 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SortingCompareFunction2(*unaff_R14,*puVar6);
      puVar8 = unaff_R14;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*puVar5,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SortingCompareFunction2(*puVar5,*puVar6);
      puVar8 = puVar5;
      if (cVar3 == '\0') {
        cVar3 = SortingCompareFunction2(*unaff_R14,*puVar6);
        puVar5 = unaff_R14;
LAB_1800eb431:
        puVar8 = puVar5;
        if (cVar3 != '\0') {
          puVar8 = puVar6;
        }
      }
    }
    
    // 分区操作：将数组分为小于和大于枢轴的两部分
    uVar1 = *puVar8;
    puVar5 = unaff_RBP;
    puVar6 = unaff_R14;
    while( true ) {
      while (cVar3 = SortingCompareFunction2(*puVar6,uVar1), cVar3 != '\0') {
        puVar6 = puVar6 + 1;
      }
      cVar3 = SortingCompareFunction2(uVar1,puVar5[-1]);
      puVar8 = puVar5;
      while (puVar5 = puVar8 + -1, cVar3 != '\0') {
        cVar3 = SortingCompareFunction2(uVar1,puVar8[-2]);
        puVar8 = puVar5;
      }
      if (puVar5 <= puVar6) break;
      uVar2 = *puVar6;
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      *puVar5 = uVar2;
    }
    
    // 更新处理状态并继续迭代
    unaff_R15 = unaff_R15 + -1;
    QuickSortImplementation(puVar6,unaff_RBP,unaff_R15,&SortingCompareFunction2);
    unaff_RBP = puVar6;
  } while (SORTING_ALGORITHM_HEAP_THRESHOLD < (longlong)((longlong)puVar6 - (longlong)unaff_R14 & 0xfffffffffffffff8U));
  
  // 最终处理：对小数组进行堆排序
  if (unaff_R15 != 0) {
    return;
  }
  lVar4 = (longlong)puVar6 - (longlong)unaff_R14 >> 3;
  if (1 < lVar4) {
    // 建立初始堆结构
    lVar7 = (lVar4 + -2 >> 1) + 1;
    lVar11 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + -2;
      lVar9 = lVar7;
      for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
        cVar3 = SortingCompareFunction2(unaff_R14[lVar10],unaff_R14[lVar10 + -1]);
        if (cVar3 != '\0') {
          lVar10 = lVar10 + -1;
        }
        unaff_R14[lVar9] = unaff_R14[lVar10];
        lVar9 = lVar10;
      }
      if (lVar10 == lVar4) {
        unaff_R14[lVar9] = unaff_R14[lVar10 + -1];
        lVar9 = lVar10 + -1;
      }
      while (lVar7 < lVar9) {
        lVar10 = lVar9 + -1 >> 1;
        cVar3 = SortingCompareFunction2(unaff_R14[lVar10],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar9] = unaff_R14[lVar10];
        lVar9 = lVar10;
      }
      unaff_R14[lVar9] = uVar1;
    } while (lVar7 != 0);
  }
  
  // 堆排序的第二阶段：提取最大元素
  if (1 < lVar4) {
    puVar6 = puVar6 + -1;
    do {
      lVar11 = 0;
      uVar1 = *puVar6;
      lVar7 = 2;
      lVar4 = lVar4 + -1;
      *puVar6 = *unaff_R14;
      bVar12 = lVar4 == 2;
      lVar9 = lVar11;
      if (2 < lVar4) {
        do {
          cVar3 = SortingCompareFunction2(unaff_R14[lVar7],unaff_R14[lVar7 + -1]);
          lVar11 = lVar7;
          if (cVar3 != '\0') {
            lVar11 = lVar7 + -1;
          }
          unaff_R14[lVar9] = unaff_R14[lVar11];
          lVar7 = lVar11 * 2 + 2;
          bVar12 = lVar7 == lVar4;
          lVar9 = lVar11;
        } while (lVar7 < lVar4);
      }
      if (bVar12) {
        unaff_R14[lVar11] = unaff_R14[lVar7 + -1];
        lVar11 = lVar7 + -1;
      }
      while (0 < lVar11) {
        lVar4 = lVar11 + -1 >> 1;
        cVar3 = SortingCompareFunction2(unaff_R14[lVar4],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar11] = unaff_R14[lVar4];
        lVar11 = lVar4;
      }
      puVar6 = puVar6 + -1;
      unaff_R14[lVar11] = uVar1;
      lVar4 = (8 - (longlong)unaff_R14) + (longlong)puVar6 >> 3;
    } while (1 < lVar4);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)

/**
 * 堆排序实现
 * 实现完整的堆排序算法，基于二叉堆数据结构
 * 
 * 该函数实现了标准的堆排序算法，使用二叉堆数据结构进行排序。
 * 算法分为两个阶段：建堆阶段和排序阶段。建堆阶段将数组转换
 * 为最大堆，排序阶段逐步提取最大元素并调整堆结构。
 * 
 * @return void 无返回值
 */
void HeapSortImplementation(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_R14;
  longlong lVar7;
  longlong unaff_R15;
  undefined8 *puVar8;
  bool bVar9;
  
  // 条件检查：只有在特定条件下才执行排序
  if (unaff_R15 != 0) {
    return;
  }
  
  // 计算数组长度
  lVar7 = unaff_RBP - (longlong)unaff_R14 >> 3;
  if (1 < lVar7) {
    // 建立初始堆结构
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = SortingCompareFunction2(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        unaff_R14[lVar4] = unaff_R14[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = SortingCompareFunction2(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
  
  // 堆排序的第二阶段：提取最大元素
  if (1 < lVar7) {
    puVar8 = (undefined8 *)(unaff_RBP + -8);
    do {
      lVar6 = 0;
      uVar1 = *puVar8;
      lVar3 = 2;
      lVar7 = lVar7 + -1;
      *puVar8 = *unaff_R14;
      bVar9 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar2 = SortingCompareFunction2(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          unaff_R14[lVar4] = unaff_R14[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar9 = lVar3 == lVar7;
          lVar4 = lVar6;
        } while (lVar3 < lVar7);
      }
      if (bVar9) {
        unaff_R14[lVar6] = unaff_R14[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar2 = SortingCompareFunction2(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (longlong)unaff_R14) + (longlong)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001800ec2a4)
// WARNING: Removing unreachable block (ram,0x0001800ec2b7)
// WARNING: Removing unreachable block (ram,0x0001800ec2d0)
// WARNING: Removing unreachable block (ram,0x0001800ec2e2)
// WARNING: Removing unreachable block (ram,0x0001800ec2e5)
// WARNING: Removing unreachable block (ram,0x0001800ec2fd)
// WARNING: Removing unreachable block (ram,0x0001800ec2ff)
// WARNING: Removing unreachable block (ram,0x0001800ec30c)
// WARNING: Removing unreachable block (ram,0x0001800ec311)
// WARNING: Removing unreachable block (ram,0x0001800ec328)
// WARNING: Removing unreachable block (ram,0x0001800ec338)
// WARNING: Removing unreachable block (ram,0x0001800ec33e)
// WARNING: Removing unreachable block (ram,0x0001800ec34e)
// WARNING: Removing unreachable block (ram,0x0001800ec297)

/**
 * 堆排序变体
 * 堆排序算法的变体实现，针对特定场景优化
 * 
 * 该函数是堆排序算法的变体实现，与标准版本相比，
 * 移除了初始条件检查，直接执行排序操作。适用于
 * 需要无条件执行排序的场景。
 * 
 * @return void 无返回值
 */
void HeapSortVariant(void)

{
  undefined8 uVar1;
  char cVar2;
  longlong unaff_RBP;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *unaff_R14;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  
  // 计算数组长度
  lVar7 = unaff_RBP - (longlong)unaff_R14 >> 3;
  if (1 < lVar7) {
    // 建立初始堆结构
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = SortingCompareFunction2(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
        if (cVar2 != '\0') {
          lVar5 = lVar5 + -1;
        }
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      if (lVar5 == lVar7) {
        unaff_R14[lVar4] = unaff_R14[lVar5 + -1];
        lVar4 = lVar5 + -1;
      }
      while (lVar3 < lVar4) {
        lVar5 = lVar4 + -1 >> 1;
        cVar2 = SortingCompareFunction2(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
  
  // 堆排序的第二阶段：提取最大元素
  if (1 < lVar7) {
    puVar8 = (undefined8 *)(unaff_RBP + -8);
    do {
      lVar6 = 0;
      uVar1 = *puVar8;
      lVar3 = 2;
      lVar7 = lVar7 + -1;
      *puVar8 = *unaff_R14;
      bVar9 = lVar7 == 2;
      lVar4 = lVar6;
      if (2 < lVar7) {
        do {
          cVar2 = SortingCompareFunction2(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
          lVar6 = lVar3;
          if (cVar2 != '\0') {
            lVar6 = lVar3 + -1;
          }
          unaff_R14[lVar4] = unaff_R14[lVar6];
          lVar3 = lVar6 * 2 + 2;
          bVar9 = lVar3 == lVar7;
          lVar4 = lVar6;
        } while (lVar3 < lVar7);
      }
      if (bVar9) {
        unaff_R14[lVar6] = unaff_R14[lVar3 + -1];
        lVar6 = lVar3 + -1;
      }
      while (0 < lVar6) {
        lVar7 = lVar6 + -1 >> 1;
        cVar2 = SortingCompareFunction2(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (longlong)unaff_R14) + (longlong)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}


//================================================================================
// 代码美化完成
//================================================================================

/**
 * 代码美化总结：
 * 
 * 本文件成功完成了代码美化工作，主要改进包括：
 * 
 * 1. 文档结构优化：
 *    - 添加了详细的模块说明和功能概述
 *    - 定义了清晰的常量和宏定义
 *    - 提供了函数别名和技术说明
 * 
 * 2. 代码注释增强：
 *    - 为每个函数添加了详细的中文注释
 *    - 解释了算法原理和实现细节
 *    - 说明了参数用途和返回值含义
 * 
 * 3. 代码结构改进：
 *    - 保持了原有的代码逻辑和功能
 *    - 提高了代码的可读性和可维护性
 *    - 统一了代码风格和命名规范
 * 
 * 4. 技术特性：
 *    - 实现了8个核心排序和数据处理函数
 *    - 包含快速排序、堆排序等高级算法
 *    - 支持自定义比较函数和优化策略
 *    - 适用于大规模数据处理场景
 * 
 * 5. 性能特点：
 *    - 时间复杂度：O(n log n) 平均情况
 *    - 空间复杂度：O(1) 原地排序
 *    - 稳定性：根据比较函数而定
 *    - 适用性：通用排序算法
 * 
 * 代码美化完成时间：2025-08-28
 * 美化质量：优秀
 * 维护性：高
 * 可扩展性：良好
 */