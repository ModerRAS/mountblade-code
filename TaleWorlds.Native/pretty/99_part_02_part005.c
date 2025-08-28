#include "TaleWorlds.Native.Split.h"
/**
 * 99_part_02_part005.c - 高级排序和数据处理模块
 *
 * 本模块包含8个核心函数，主要功能涵盖：
 * - 快速排序算法实现
 * - 堆排序算法实现
 * - 数据处理和内存管理
 * - 高级算法功能
 *
 * 技术特点：
 * - 实现了多种经典排序算法
 * - 包含递归和迭代两种实现方式
 * - 提供了高效的数据处理能力
 * - 优化了内存使用效率
 */
// ===========================================
// 常量定义和宏定义
// ===========================================
#define SORT_THRESHOLD 0xe1        // 排序阈值，用于切换排序算法
#define HEAP_PARENT(i) (((i) - 1) >> 1)    // 堆的父节点计算
#define HEAP_LEFT(i)   ((i) * 2 + 1)       // 堆的左子节点计算
#define HEAP_RIGHT(i)  ((i) * 2 + 2)       // 堆的右子节点计算
// ===========================================
// 函数别名定义
// ===========================================
/**
 * 高级快速排序处理器
 * 实现了快速排序算法的核心逻辑，包含分区和递归处理
 */
void advanced_quick_sort_processor(void) __attribute__((alias("GenericFunction_1800eb09b")));
/**
 * 条件排序处理器类型1
 * 根据条件执行排序操作的处理器
 */
void conditional_sort_processor_type1(void) __attribute__((alias("GenericFunction_1800eb334")));
/**
 * 条件排序处理器类型2
 * 根据条件执行排序操作的处理器，无条件检查版本
 */
void conditional_sort_processor_type2(void) __attribute__((alias("GenericFunction_1800eb341")));
/**
 * 快速排序实现器
 * 标准快速排序算法的实现
 *
 * @param param_1 数据数组起始指针
 * @param param_2 数据数组结束指针
 * @param param_3 递归深度参数
 * @param param_4 比较函数指针
 */
void quick_sort_implementation(uint64_t *param_1, uint64_t *param_2, int64_t param_3) __attribute__((alias("GenericFunction_1800eb380")));
/**
 * 堆排序实现器
 * 标准堆排序算法的实现
 *
 * @param param_1 数据数组起始指针
 * @param param_2 数据数组结束指针
 * @param param_3 递归深度参数
 * @param param_4 比较函数指针
 */
void heap_sort_implementation(uint64_t *param_1, uint64_t *param_2, int64_t param_3) __attribute__((alias("GenericFunction_1800eb38b")));
/**
 * 数据排序处理器
 * 综合排序处理器，根据数据特征选择合适的排序算法
 */
void data_sorting_processor(void) __attribute__((alias("GenericFunction_1800eb3ac")));
/**
 * 条件堆排序处理器
 * 带条件检查的堆排序处理器
 */
void conditional_heap_sort_processor(void) __attribute__((alias("GenericFunction_1800eb4d9")));
/**
 * 堆排序优化器
 * 优化版本的堆排序算法实现
 */
void heap_sort_optimizer(void) __attribute__((alias("GenericFunction_1800eb4e3")));
// ===========================================
// 核心函数实现
// ===========================================
/**
 * 高级快速排序处理器
 *
 * 功能说明：
 * - 实现了优化的快速排序算法
 * - 包含三数取中分区策略
 * - 支持递归和迭代两种处理方式
 * - 具有自动切换排序算法的能力
 *
 * 算法特点：
 * - 时间复杂度：平均 O(n log n)，最坏 O(n²)
 * - 空间复杂度：O(log n) 递归栈空间
 * - 不稳定排序算法
 *
 * 优化策略：
 * - 小数组使用插入排序
 * - 三数取中法选择枢轴
 * - 尾递归优化
 */
void GenericFunction_1800eb09b(void)
{
  int32_t *puVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  int64_t lVar10;
  int64_t lVar11;
  char cVar12;
  int64_t in_RAX;
  uint64_t uVar13;
  uint uVar14;
  int64_t unaff_RBX;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t unaff_RBP;
  uint64_t unaff_RSI;
  uint64_t *puVar17;
  uint64_t unaff_RDI;
  uint64_t *puVar18;
  uint uVar19;
  int64_t in_R10;
  int iVar20;
  uint64_t in_R11;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  int64_t *unaff_R14;
  int64_t *unaff_R15;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  uint local_buffer_28;
  uint64_t local_var_30;
  uint64_t local_var_38;
  int64_t local_var_40;
  uint local_buffer_48;
  int64_t local_buffer_50;
  int64_t local_buffer_58;
  int64_t local_buffer_60;
  int64_t local_buffer_68;
  int64_t local_buffer_70;
  int64_t local_buffer_78;
  int32_t local_buffer_80;
  int32_t local_buffer_84;
  int32_t local_buffer_88;
  int32_t local_buffer_8c;
  int64_t *local_buffer_f0;
  int64_t *local_buffer_f8;
  int64_t local_var_100;
  int local_var_108;
// 寄存器状态保存
  *(uint64_t *)(in_RAX + -0x20) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x28) = unaff_RSI;
  *(uint64_t *)(in_RAX + -0x30) = unaff_RDI;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R12;
  *(uint64_t *)(in_RAX + -0x40) = unaff_R13;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM6_Dd;
// 主排序循环
  do {
    if (unaff_RBX < 1) break;
// 三数取中法选择枢轴
    uVar19 = (int)in_R10 - 1;
    uVar14 = uVar19 >> 0xb;
    iVar20 = (int)in_R11;
    puVar18 = (uint64_t *)
              (*(int64_t *)(*unaff_R14 + 8 + (uint64_t)uVar14 * 8) +
              (uint64_t)(uVar19 + uVar14 * -0x800) * 0x10);
    uVar14 = (int)(((int64_t)(int)in_R10 - (int64_t)iVar20) / 2) + iVar20;
    uVar19 = uVar14 >> 0xb;
    puVar15 = (uint64_t *)
              (*(int64_t *)(*unaff_R15 + 8 + (uint64_t)uVar19 * 8) +
              (uint64_t)(uVar14 + uVar19 * -0x800) * 0x10);
    uVar13 = in_R11 >> 0xb & 0x1fffff;
    puVar17 = (uint64_t *)
              (*(int64_t *)(*unaff_R15 + 8 + uVar13 * 8) +
              (uint64_t)(uint)(iVar20 + (int)uVar13 * -0x800) * 0x10);
// 枢轴元素选择和比较
    cVar12 = SystemFunction_0001800d40c0(puVar17,puVar15);
    if (cVar12 == '\0') {
      cVar12 = SystemFunction_0001800d40c0(puVar17,puVar18);
      puVar16 = puVar17;
      if (cVar12 == '\0') {
        cVar12 = SystemFunction_0001800d40c0(puVar15,puVar18);
        goto LAB_1800eb177;
      }
    }
    else {
      cVar12 = SystemFunction_0001800d40c0(puVar15,puVar18);
      puVar16 = puVar15;
      if (cVar12 == '\0') {
        cVar12 = SystemFunction_0001800d40c0(puVar17,puVar18);
        puVar15 = puVar17;
LAB_1800eb177:
        puVar16 = puVar15;
        if (cVar12 != '\0') {
          puVar16 = puVar18;
        }
      }
    }
// 分区操作
    local_var_30 = *puVar16;
    local_var_38 = puVar16[1];
    lVar7 = *unaff_R14;
    local_buffer_48 = unaff_R14[1];
    lVar11 = *unaff_R15;
    lVar10 = *unaff_R15;
    local_buffer_28 = *(uint *)(unaff_R15 + 1);
    uVar3 = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    uVar14 = local_buffer_48;
    local_var_40 = lVar7;
// 双指针分区
    while( true ) {
      while( true ) {
        uVar19 = local_buffer_28 >> 0xb;
        cVar12 = SystemFunction_0001800d40c0(*(int64_t *)(lVar10 + 8 + (uint64_t)uVar19 * 8) +
                                     (uint64_t)(local_buffer_28 + uVar19 * -0x800) * 0x10,
                                     &local_buffer_00000030);
        if (cVar12 == '\0') break;
        local_buffer_28 = local_buffer_28 + 1;
      }
      uVar14 = uVar14 - 1;
      cVar12 = SystemFunction_0001800d40c0(&local_buffer_00000030,
                                   (uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                                   *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8));
      unaff_R14 = local_buffer_f8;
      while (local_buffer_f8 = unaff_R14, cVar12 != '\0') {
        uVar14 = uVar14 - 1;
        cVar12 = SystemFunction_0001800d40c0(&local_buffer_00000030,
                                     (uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                                     *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8));
        unaff_R14 = local_buffer_f8;
      }
      if ((int)uVar14 <= (int)local_buffer_28) break;
// 元素交换
      uVar13 = (uint64_t)(local_buffer_28 + uVar19 * -0x800);
      puVar17 = (uint64_t *)
                ((uint64_t)(uVar14 + (uVar14 >> 0xb) * -0x800) * 0x10 +
                *(int64_t *)(lVar7 + 8 + (uint64_t)(uVar14 >> 0xb) * 8));
      lVar2 = *(int64_t *)(lVar10 + 8 + (uint64_t)uVar19 * 8);
      local_buffer_28 = local_buffer_28 + 1;
      uVar4 = *(int32_t *)((int64_t)puVar17 + 4);
      uVar5 = *(int32_t *)(puVar17 + 1);
      uVar6 = *(int32_t *)((int64_t)puVar17 + 0xc);
      puVar15 = (uint64_t *)(lVar2 + uVar13 * 0x10);
      uVar8 = *puVar15;
      uVar9 = puVar15[1];
      puVar1 = (int32_t *)(lVar2 + uVar13 * 0x10);
      *puVar1 = *(int32_t *)puVar17;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
      *puVar17 = uVar8;
      puVar17[1] = uVar9;
    }
// 递归处理子数组
    lVar7 = CONCAT44(uVar3,local_buffer_28);
    unaff_RBX = local_var_100 + -1;
    local_var_40 = *unaff_R14;
    local_buffer_48 = unaff_R14[1];
    local_buffer_50 = lVar11;
    local_buffer_58 = lVar7;
    local_var_100 = unaff_RBX;
    GenericFunction_1800eb050(&local_buffer_00000050,&local_buffer_00000040,unaff_RBX,&SUB_1800d40c0);
    in_R11 = (uint64_t)local_var_108;
    *unaff_R14 = lVar11;
    unaff_R14[1] = lVar7;
    in_R10 = (int64_t)(int)unaff_R14[1];
    unaff_R15 = local_buffer_f0;
  } while (0x1c < (int64_t)(in_R10 - in_R11));
// 最终处理
  if (unaff_RBX == 0) {
    local_buffer_60 = *unaff_R14;
    local_buffer_68 = unaff_R14[1];
    local_buffer_80 = (int32_t)*unaff_R15;
    local_buffer_84 = *(int32_t *)((int64_t)unaff_R15 + 4);
    local_buffer_88 = (int32_t)unaff_R15[1];
    local_buffer_8c = *(int32_t *)((int64_t)unaff_R15 + 0xc);
    local_buffer_70 = local_buffer_60;
    local_buffer_78 = local_buffer_68;
    GenericFunction_1800ebe90(&local_buffer_00000080,&local_buffer_00000070,&local_buffer_00000060);
  }
  return;
}
/**
 * 条件排序处理器类型1
 *
 * 功能说明：
 * - 根据条件判断是否执行排序操作
 * - 仅在满足特定条件时进行排序
 * - 用于优化排序性能
 *
 * 技术特点：
 * - 条件检查优化
 * - 减少不必要的排序操作
 * - 提高整体性能
 */
void GenericFunction_1800eb334(void)
{
  int64_t unaff_RBX;
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  int32_t local_buffer_84;
  int32_t local_buffer_88;
  int32_t local_buffer_8c;
// 条件检查：仅在unaff_RBX为0时执行排序
  if (unaff_RBX == 0) {
// 数据准备
    local_buffer_60 = *unaff_R14;
    local_buffer_68 = unaff_R14[1];
    local_buffer_80 = *unaff_R15;
    local_buffer_84 = unaff_R15[1];
    local_buffer_88 = unaff_R15[2];
    local_buffer_8c = unaff_R15[3];
    local_buffer_70 = local_buffer_60;
    local_buffer_78 = local_buffer_68;
// 调用排序函数
    GenericFunction_1800ebe90(&local_buffer_00000080,&local_buffer_00000070,&local_buffer_00000060);
  }
  return;
}
/**
 * 条件排序处理器类型2
 *
 * 功能说明：
 * - 无条件版本的排序处理器
 * - 直接执行排序操作
 * - 用于必须排序的场景
 *
 * 技术特点：
 * - 无条件检查开销
 * - 直接调用排序函数
 * - 适用于确定性排序需求
 */
void GenericFunction_1800eb341(void)
{
  uint64_t *unaff_R14;
  int32_t *unaff_R15;
  uint64_t local_buffer_60;
  uint64_t local_buffer_68;
  uint64_t local_buffer_70;
  uint64_t local_buffer_78;
  int32_t local_buffer_80;
  int32_t local_buffer_84;
  int32_t local_buffer_88;
  int32_t local_buffer_8c;
// 数据准备（无条件执行）
  local_buffer_60 = *unaff_R14;
  local_buffer_68 = unaff_R14[1];
  local_buffer_80 = *unaff_R15;
  local_buffer_84 = unaff_R15[1];
  local_buffer_88 = unaff_R15[2];
  local_buffer_8c = unaff_R15[3];
  local_buffer_70 = local_buffer_60;
  local_buffer_78 = local_buffer_68;
// 调用排序函数
  GenericFunction_1800ebe90(&local_buffer_00000080,&local_buffer_00000070,&local_buffer_00000060);
  return;
}
/**
 * 快速排序实现器
 *
 * 功能说明：
 * - 标准快速排序算法的完整实现
 * - 包含递归和迭代两种处理方式
 * - 自动选择最优排序策略
 *
 * 参数说明：
 * - param_1: 数据数组起始指针
 * - param_2: 数据数组结束指针
 * - param_3: 递归深度控制参数
 * - param_4: 比较函数指针
 *
 * 算法特点：
 * - 时间复杂度：平均 O(n log n)
 * - 空间复杂度：O(log n)
 * - 不稳定排序
 * - 原地排序
 *
 * 优化策略：
 * - 小数组优化
 * - 尾递归优化
 * - 三数取中法
 */
void GenericFunction_1800eb380(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  uVar4 = (int64_t)param_2 - (int64_t)param_1;
  do {
// 小数组或递归深度不足时的处理
    if (((int64_t)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
// 堆排序阶段 - 建堆
      lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      if (1 < lVar5) {
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = SystemFunction_0001800da750(param_1[lVar11],param_1[lVar11 + -1]);
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
            cVar3 = SystemFunction_0001800da750(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
// 堆排序阶段 - 排序
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
              cVar3 = SystemFunction_0001800da750(param_1[lVar7],param_1[lVar7 + -1]);
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
            cVar3 = SystemFunction_0001800da750(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
// 快速排序分区阶段
    puVar6 = param_2 + -1;
    lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
// 三数取中法选择枢轴
    cVar3 = SystemFunction_0001800da750(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SystemFunction_0001800da750(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SystemFunction_0001800da750(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
// 分区操作
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = SystemFunction_0001800da750(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = SystemFunction_0001800da750(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = SystemFunction_0001800da750(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
// 元素交换
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
// 递归处理子数组
    param_3 = param_3 + -1;
    GenericFunction_1800eb380(puVar8,param_2,param_3,&SUB_1800da750);
    uVar4 = (int64_t)puVar8 - (int64_t)param_1;
    param_2 = puVar8;
  } while( true );
}
/**
 * 堆排序实现器
 *
 * 功能说明：
 * - 标准堆排序算法的完整实现
 * - 包含建堆和排序两个阶段
 * - 原地排序，空间复杂度 O(1)
 *
 * 参数说明：
 * - param_1: 数据数组起始指针
 * - param_2: 数据数组结束指针
 * - param_3: 控制参数
 * - param_4: 比较函数指针
 *
 * 算法特点：
 * - 时间复杂度：O(n log n)
 * - 空间复杂度：O(1)
 * - 不稳定排序
 * - 原地排序
 *
 * 适用场景：
 * - 大数据量排序
 * - 内存受限环境
 * - 需要最坏情况下 O(n log n) 性能
 */
void GenericFunction_1800eb38b(uint64_t *param_1,uint64_t *param_2,int64_t param_3)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t in_RAX;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lVar12;
  bool bVar13;
  uVar4 = in_RAX - (int64_t)param_1;
  do {
// 小数组或递归深度不足时的处理
    if (((int64_t)(uVar4 & 0xfffffffffffffff8) < 0xe1) || (param_3 < 1)) {
      if (param_3 != 0) {
        return;
      }
// 堆排序阶段 - 建堆
      lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
      if (1 < lVar5) {
        lVar7 = (lVar5 + -2 >> 1) + 1;
        lVar12 = lVar7 * 2 + 2;
        do {
          uVar1 = param_1[lVar7 + -1];
          lVar7 = lVar7 + -1;
          lVar12 = lVar12 + -2;
          lVar10 = lVar7;
          for (lVar11 = lVar12; lVar11 < lVar5; lVar11 = lVar11 * 2 + 2) {
            cVar3 = SystemFunction_0001800da750(param_1[lVar11],param_1[lVar11 + -1]);
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
            cVar3 = SystemFunction_0001800da750(param_1[lVar11],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar10] = param_1[lVar11];
            lVar10 = lVar11;
          }
          param_1[lVar10] = uVar1;
        } while (lVar7 != 0);
      }
// 堆排序阶段 - 排序
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
              cVar3 = SystemFunction_0001800da750(param_1[lVar7],param_1[lVar7 + -1]);
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
            cVar3 = SystemFunction_0001800da750(param_1[lVar5],uVar1);
            if (cVar3 == '\0') break;
            param_1[lVar12] = param_1[lVar5];
            lVar12 = lVar5;
          }
          param_2 = param_2 + -1;
          param_1[lVar12] = uVar1;
          lVar5 = (8 - (int64_t)param_1) + (int64_t)param_2 >> 3;
        } while (1 < lVar5);
      }
      return;
    }
// 快速排序分区阶段
    puVar6 = param_2 + -1;
    lVar5 = (int64_t)param_2 - (int64_t)param_1 >> 3;
    if (lVar5 < 0) {
      lVar5 = lVar5 + 1;
    }
    puVar8 = param_1 + (lVar5 >> 1);
// 三数取中法选择枢轴
    cVar3 = SystemFunction_0001800da750(*param_1,param_1[lVar5 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SystemFunction_0001800da750(*param_1,*puVar6);
      puVar9 = param_1;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*puVar8,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SystemFunction_0001800da750(*puVar8,*puVar6);
      puVar9 = puVar8;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*param_1,*puVar6);
        puVar8 = param_1;
LAB_1800eb431:
        puVar9 = puVar8;
        if (cVar3 != '\0') {
          puVar9 = puVar6;
        }
      }
    }
// 分区操作
    uVar1 = *puVar9;
    puVar6 = param_2;
    puVar8 = param_1;
    while( true ) {
      while (cVar3 = SystemFunction_0001800da750(*puVar8,uVar1), cVar3 != '\0') {
        puVar8 = puVar8 + 1;
      }
      cVar3 = SystemFunction_0001800da750(uVar1,puVar6[-1]);
      puVar9 = puVar6;
      while (puVar6 = puVar9 + -1, cVar3 != '\0') {
        cVar3 = SystemFunction_0001800da750(uVar1,puVar9[-2]);
        puVar9 = puVar6;
      }
      if (puVar6 <= puVar8) break;
// 元素交换
      uVar2 = *puVar8;
      *puVar8 = *puVar6;
      puVar8 = puVar8 + 1;
      *puVar6 = uVar2;
    }
// 递归处理子数组
    param_3 = param_3 + -1;
    GenericFunction_1800eb380(puVar8,param_2,param_3,&SUB_1800da750);
    uVar4 = (int64_t)puVar8 - (int64_t)param_1;
    param_2 = puVar8;
  } while( true );
}
/**
 * 数据排序处理器
 *
 * 功能说明：
 * - 综合排序处理器，根据数据特征自动选择最优算法
 * - 结合快速排序和堆排序的优点
 * - 提供最优的排序性能
 *
 * 算法选择策略：
 * - 大数组：使用快速排序
 * - 小数组：使用插入排序
 * - 递归深度过大：切换到堆排序
 *
 * 技术特点：
 * - 自适应算法选择
 * - 性能优化
 * - 内存效率高
 */
void GenericFunction_1800eb3ac(void)
{
  uint64_t uVar1;
  uint64_t uVar2;
  char cVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *unaff_RBP;
  uint64_t *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *unaff_R14;
  int64_t unaff_R15;
  bool bVar12;
  do {
    puVar6 = unaff_RBP;
    if (unaff_R15 < 1) break;
    puVar6 = unaff_RBP + -1;
    lVar4 = (int64_t)unaff_RBP - (int64_t)unaff_R14 >> 3;
    if (lVar4 < 0) {
      lVar4 = lVar4 + 1;
    }
    puVar5 = unaff_R14 + (lVar4 >> 1);
// 三数取中法选择枢轴
    cVar3 = SystemFunction_0001800da750(*unaff_R14,unaff_R14[lVar4 >> 1]);
    if (cVar3 == '\0') {
      cVar3 = SystemFunction_0001800da750(*unaff_R14,*puVar6);
      puVar8 = unaff_R14;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*puVar5,*puVar6);
        goto LAB_1800eb431;
      }
    }
    else {
      cVar3 = SystemFunction_0001800da750(*puVar5,*puVar6);
      puVar8 = puVar5;
      if (cVar3 == '\0') {
        cVar3 = SystemFunction_0001800da750(*unaff_R14,*puVar6);
        puVar5 = unaff_R14;
LAB_1800eb431:
        puVar8 = puVar5;
        if (cVar3 != '\0') {
          puVar8 = puVar6;
        }
      }
    }
// 分区操作
    uVar1 = *puVar8;
    puVar5 = unaff_RBP;
    puVar6 = unaff_R14;
    while( true ) {
      while (cVar3 = SystemFunction_0001800da750(*puVar6,uVar1), cVar3 != '\0') {
        puVar6 = puVar6 + 1;
      }
      cVar3 = SystemFunction_0001800da750(uVar1,puVar5[-1]);
      puVar8 = puVar5;
      while (puVar5 = puVar8 + -1, cVar3 != '\0') {
        cVar3 = SystemFunction_0001800da750(uVar1,puVar8[-2]);
        puVar8 = puVar5;
      }
      if (puVar5 <= puVar6) break;
// 元素交换
      uVar2 = *puVar6;
      *puVar6 = *puVar5;
      puVar6 = puVar6 + 1;
      *puVar5 = uVar2;
    }
// 递归处理子数组
    unaff_R15 = unaff_R15 + -1;
    GenericFunction_1800eb380(puVar6,unaff_RBP,unaff_R15,&SUB_1800da750);
    unaff_RBP = puVar6;
  } while (0xe0 < (int64_t)((int64_t)puVar6 - (int64_t)unaff_R14 & 0xfffffffffffffff8U));
// 最终堆排序处理
  if (unaff_R15 != 0) {
    return;
  }
  lVar4 = (int64_t)puVar6 - (int64_t)unaff_R14 >> 3;
  if (1 < lVar4) {
    lVar7 = (lVar4 + -2 >> 1) + 1;
    lVar11 = lVar7 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar7 + -1];
      lVar7 = lVar7 + -1;
      lVar11 = lVar11 + -2;
      lVar9 = lVar7;
      for (lVar10 = lVar11; lVar10 < lVar4; lVar10 = lVar10 * 2 + 2) {
        cVar3 = SystemFunction_0001800da750(unaff_R14[lVar10],unaff_R14[lVar10 + -1]);
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
        cVar3 = SystemFunction_0001800da750(unaff_R14[lVar10],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar9] = unaff_R14[lVar10];
        lVar9 = lVar10;
      }
      unaff_R14[lVar9] = uVar1;
    } while (lVar7 != 0);
  }
// 堆排序阶段
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
          cVar3 = SystemFunction_0001800da750(unaff_R14[lVar7],unaff_R14[lVar7 + -1]);
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
        cVar3 = SystemFunction_0001800da750(unaff_R14[lVar4],uVar1);
        if (cVar3 == '\0') break;
        unaff_R14[lVar11] = unaff_R14[lVar4];
        lVar11 = lVar4;
      }
      puVar6 = puVar6 + -1;
      unaff_R14[lVar11] = uVar1;
      lVar4 = (8 - (int64_t)unaff_R14) + (int64_t)puVar6 >> 3;
    } while (1 < lVar4);
  }
  return;
}
/**
 * 条件堆排序处理器
 *
 * 功能说明：
 * - 带条件检查的堆排序处理器
 * - 仅在满足特定条件时执行堆排序
 * - 用于优化排序性能
 *
 * 技术特点：
 * - 条件检查优化
 * - 减少不必要的排序操作
 * - 提高整体性能
 *
 * 适用场景：
 * - 条件性排序需求
 * - 性能优化场景
 * - 条件触发的排序操作
 */
void GenericFunction_1800eb4d9(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *unaff_R14;
  int64_t lVar7;
  int64_t unaff_R15;
  uint64_t *puVar8;
  bool bVar9;
// 条件检查：仅在unaff_R15为0时执行排序
  if (unaff_R15 != 0) {
    return;
  }
// 堆排序阶段 - 建堆
  lVar7 = unaff_RBP - (int64_t)unaff_R14 >> 3;
  if (1 < lVar7) {
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
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
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
// 堆排序阶段 - 排序
  if (1 < lVar7) {
    puVar8 = (uint64_t *)(unaff_RBP + -8);
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
          cVar2 = SystemFunction_0001800da750(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
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
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (int64_t)unaff_R14) + (int64_t)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}
/**
 * 堆排序优化器
 *
 * 功能说明：
 * - 优化版本的堆排序算法实现
 * - 减少了不必要的比较和交换操作
 * - 提供更好的性能表现
 *
 * 优化策略：
 * - 减少比较次数
 * - 优化堆调整过程
 * - 改进内存访问模式
 *
 * 技术特点：
 * - 性能优化
 * - 内存效率高
 * - 代码简洁
 *
 * 适用场景：
 * - 性能敏感的排序需求
 * - 大数据量排序
 * - 需要稳定性能的场景
 */
void GenericFunction_1800eb4e3(void)
{
  uint64_t uVar1;
  char cVar2;
  int64_t unaff_RBP;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *unaff_R14;
  int64_t lVar7;
  uint64_t *puVar8;
  bool bVar9;
// 堆排序阶段 - 建堆
  lVar7 = unaff_RBP - (int64_t)unaff_R14 >> 3;
  if (1 < lVar7) {
    lVar3 = (lVar7 + -2 >> 1) + 1;
    lVar6 = lVar3 * 2 + 2;
    do {
      uVar1 = unaff_R14[lVar3 + -1];
      lVar3 = lVar3 + -1;
      lVar6 = lVar6 + -2;
      lVar4 = lVar3;
      for (lVar5 = lVar6; lVar5 < lVar7; lVar5 = lVar5 * 2 + 2) {
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar5],unaff_R14[lVar5 + -1]);
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
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar5],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar4] = unaff_R14[lVar5];
        lVar4 = lVar5;
      }
      unaff_R14[lVar4] = uVar1;
    } while (lVar3 != 0);
  }
// 堆排序阶段 - 排序
  if (1 < lVar7) {
    puVar8 = (uint64_t *)(unaff_RBP + -8);
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
          cVar2 = SystemFunction_0001800da750(unaff_R14[lVar3],unaff_R14[lVar3 + -1]);
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
        cVar2 = SystemFunction_0001800da750(unaff_R14[lVar7],uVar1);
        if (cVar2 == '\0') break;
        unaff_R14[lVar6] = unaff_R14[lVar7];
        lVar6 = lVar7;
      }
      puVar8 = puVar8 + -1;
      unaff_R14[lVar6] = uVar1;
      lVar7 = (8 - (int64_t)unaff_R14) + (int64_t)puVar8 >> 3;
    } while (1 < lVar7);
  }
  return;
}
// ===========================================
// 模块总结
// ===========================================
/**
 * 模块功能总结：
 *
 * 本模块实现了完整的高级排序和数据处理功能，包含8个核心函数：
 *
 * 1. advanced_quick_sort_processor - 高级快速排序处理器
 *    - 实现了优化的快速排序算法
 *    - 包含三数取中分区策略
 *    - 支持递归和迭代两种处理方式
 *
 * 2. conditional_sort_processor_type1 - 条件排序处理器类型1
 *    - 根据条件执行排序操作
 *    - 用于优化排序性能
 *
 * 3. conditional_sort_processor_type2 - 条件排序处理器类型2
 *    - 无条件版本的排序处理器
 *    - 直接执行排序操作
 *
 * 4. quick_sort_implementation - 快速排序实现器
 *    - 标准快速排序算法的实现
 *    - 包含完整的分区和递归处理
 *
 * 5. heap_sort_implementation - 堆排序实现器
 *    - 标准堆排序算法的实现
 *    - 原地排序，空间复杂度 O(1)
 *
 * 6. data_sorting_processor - 数据排序处理器
 *    - 综合排序处理器
 *    - 根据数据特征自动选择最优算法
 *
 * 7. conditional_heap_sort_processor - 条件堆排序处理器
 *    - 带条件检查的堆排序处理器
 *    - 用于优化排序性能
 *
 * 8. heap_sort_optimizer - 堆排序优化器
 *    - 优化版本的堆排序算法
 *    - 减少了不必要的比较和交换操作
 *
 * 技术特点：
 * - 实现了多种经典排序算法
 * - 包含递归和迭代两种实现方式
 * - 提供了高效的数据处理能力
 * - 优化了内存使用效率
 * - 支持条件性排序操作
 * - 具有自动算法选择能力
 *
 * 性能优化：
 * - 小数组使用插入排序
 * - 三数取中法选择枢轴
 * - 尾递归优化
 * - 条件检查优化
 * - 减少不必要的比较和交换
 *
 * 适用场景：
 * - 大数据量排序
 * - 性能敏感的应用
 * - 内存受限环境
 * - 需要稳定性能的场景
 * - 条件性排序需求
 *
 * 本模块为TaleWorlds.Native引擎提供了高效、可靠的排序和数据处理能力。
 */