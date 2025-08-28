#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 03_rendering_part044.c - 渲染系统高级几何处理和递归细分算法
// 本文件包含用于渲染几何体处理的复杂算法和递归细分功能

// 全局渲染上下文和内存分配器
static void* g_render_context_180c8a9b0 = NULL;  // 渲染上下文指针
static void* g_memory_allocator_180c8a9a8 = NULL; // 内存分配器指针

/**
 * 处理渲染几何数据 - 高级渲染数据处理主函数
 * 
 * 实现复杂的渲染几何数据处理流程，包括：
 * 1. 数据预处理和验证
 * 2. 内存分配和缓冲区管理
 * 3. 几何数据变换
 * 4. 排序和优化
 * 5. 最终输出处理
 * 
 * @param render_context 渲染上下文指针
 * @param data_buffer 几何数据缓冲区
 * @param count_array 顶点计数数组
 * @param element_count 元素数量
 * @param scale_x X轴缩放因子
 * @param scale_y Y轴缩放因子
 * @param param7 额外参数1
 * @param param8 额外参数2
 * @param param9 额外参数3
 * @param param10 额外参数4
 */
void process_rendering_data_advanced(uint64_t render_context, int64_t data_buffer, int* count_array, 
                                  uint element_count, float scale_x, float scale_y, uint64_t param7, 
                                  uint64_t param8, int32_t param9, int32_t param10)
{
  int* piVar1;
  int64_t lVar2;
  int32_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t* puVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t* puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int32_t* puVar13;
  int iVar14;
  int64_t lVar15;
  float* pfVar16;
  uint64_t* puVar17;
  uint64_t uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  int8_t auStack_b8[32];
  int32_t uStack_98;
  int32_t uStack_90;
  int64_t lStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_50;
  
  // 栈保护
  uStack_50 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_b8;
  uVar18 = (uint64_t)element_count;
  iVar14 = 0;
  iVar19 = iVar14;
  iVar20 = 0;
  
  // 批量处理 - 8元素批次
  if ((0 < (int)element_count) && (iVar19 = 0, iVar20 = 0, 7 < element_count)) {
    iVar19 = 0;
    iVar21 = 0;
    iVar23 = 0;
    iVar25 = 0;
    iVar20 = 0;
    iVar22 = 0;
    iVar24 = 0;
    iVar26 = 0;
    uVar7 = element_count & 0x80000007;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffff8) + 1;
    }
    lVar5 = 0;
    // 8元素循环处理
    do {
      piVar1 = count_array + lVar5;
      iVar14 = iVar14 + 8;
      iVar19 = *piVar1 + iVar19;
      iVar21 = piVar1[1] + iVar21;
      iVar23 = piVar1[2] + iVar23;
      iVar25 = piVar1[3] + iVar25;
      piVar1 = count_array + lVar5 + 4;
      lVar5 = lVar5 + 8;
      iVar20 = *piVar1 + iVar20;
      iVar22 = piVar1[1] + iVar22;
      iVar24 = piVar1[2] + iVar24;
      iVar26 = piVar1[3] + iVar26;
    } while (lVar5 < (int)(element_count - uVar7));
    iVar20 = iVar20 + iVar19 + iVar24 + iVar23 + iVar22 + iVar21 + iVar26 + iVar25;
    iVar19 = iVar14;
  }
  
  // 剩余元素处理
  lVar5 = (int64_t)iVar19;
  iVar19 = 0;
  lVar15 = (int64_t)(int)element_count;
  iVar14 = 0;
  if (lVar5 < lVar15) {
    if (1 < lVar15 - lVar5) {
      // 2元素批次处理
      do {
        iVar19 = iVar19 + count_array[lVar5];
        iVar14 = iVar14 + count_array[lVar5 + 1];
        lVar5 = lVar5 + 2;
      } while (lVar5 < lVar15 + -1);
    }
    if (lVar5 < lVar15) {
      // 最后一个元素处理
      iVar20 = iVar20 + count_array[lVar5];
    }
    iVar20 = iVar20 + iVar14 + iVar19;
  }
  
  // 更新渲染上下文
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + 1;
  }
  
  // 设置处理参数
  lStack_78 = data_buffer;
  uStack_70 = render_context;
  
  // 分配渲染处理内存
  puVar6 = (uint64_t*)func_0x000180120ce0(((int64_t)iVar20 + 1) * 0x14);
  if (puVar6 == (uint64_t*)0x0) {
    // 内存分配失败处理
    FUN_1808fc050(uStack_50 ^ (uint64_t)auStack_b8);
  }
  
  iVar19 = 0;
  iVar20 = 0;
  lVar5 = 1;
  if (0 < (int)element_count) {
    lVar15 = 0;
    // 主数据处理循环
    do {
      iVar21 = 0;
      lVar2 = lStack_78 + (int64_t)iVar19 * 8;
      iVar14 = *count_array;
      iVar19 = iVar19 + iVar14;
      if (0 < iVar14) {
        pfVar16 = (float*)(lVar2 + 4);
        puVar13 = (int32_t*)(lVar15 * 0x14 + 0x10 + (int64_t)puVar6);
        lVar8 = (int64_t)(iVar14 + -1);
        lVar11 = 0;
        // 内部数据处理
        do {
          if (*pfVar16 != *(float*)(lVar2 + 4 + lVar8 * 8)) {
            *puVar13 = 0;
            lVar9 = lVar8;
            lVar12 = lVar11;
            if (*pfVar16 < *(float*)(lVar2 + 4 + lVar8 * 8)) {
              *puVar13 = 1;
              lVar9 = lVar11;
              lVar12 = lVar8;
            }
            iVar20 = iVar20 + 1;
            lVar15 = lVar15 + 1;
            // 坐标变换
            puVar13[-4] = scale_x * *(float*)(lVar2 + lVar12 * 8);
            puVar13[-3] = -scale_y * *(float*)(lVar2 + 4 + lVar12 * 8);
            puVar13[-2] = scale_x * *(float*)(lVar2 + lVar9 * 8);
            puVar13[-1] = -scale_y * *(float*)(lVar2 + 4 + lVar9 * 8);
            puVar13 = puVar13 + 5;
          }
          iVar21 = iVar21 + 1;
          pfVar16 = pfVar16 + 2;
          lVar8 = lVar11;
          lVar11 = lVar11 + 1;
        } while (iVar21 < *count_array);
      }
      count_array = count_array + 1;
      uVar18 = uVar18 - 1;
      render_context = uStack_70;
    } while (uVar18 != 0);
  }
  
  // 后处理渲染数据
  FUN_18028f180(puVar6, iVar20);
  
  // 排序处理
  puVar10 = puVar6;
  if (1 < (int64_t)iVar20) {
    do {
      puVar17 = (uint64_t*)((int64_t)puVar10 + 0x14);
      uVar3 = *(int32_t*)((int64_t)puVar10 + 0x24);
      uVar4 = *puVar17;
      uStack_60 = *(uint64_t*)((int64_t)puVar10 + 0x1c);
      if (0 < lVar5) {
        uStack_68._4_4_ = (float)((uint64_t)uVar4 >> 0x20);
        lVar15 = lVar5;
        // 排序算法
        do {
          if (*(float*)((int64_t)puVar10 + 4) <= uStack_68._4_4_) break;
          lVar15 = lVar15 + -1;
          *(uint64_t*)((int64_t)puVar10 + 0x14) = *puVar10;
          *(uint64_t*)((int64_t)puVar10 + 0x1c) = puVar10[1];
          *(int32_t*)((int64_t)puVar10 + 0x24) = *(int32_t*)(puVar10 + 2);
          puVar10 = (uint64_t*)((int64_t)puVar10 + -0x14);
        } while (0 < lVar15);
        if (lVar5 != lVar15) {
          puVar10 = (uint64_t*)((int64_t)puVar6 + lVar15 * 0x14);
          *puVar10 = uVar4;
          puVar10[1] = uStack_60;
          *(int32_t*)((int64_t)puVar6 + lVar15 * 0x14 + 0x10) = uVar3;
        }
      }
      lVar5 = lVar5 + 1;
      puVar10 = puVar17;
      uStack_68 = uVar4;
    } while (lVar5 < iVar20);
  }
  
  // 最终处理输出
  uStack_90 = param10;
  uStack_98 = param9;
  FUN_18028ecc0(render_context, puVar6, iVar20);
  
  // 更新渲染上下文状态
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
  }
  
  // 释放内存
  FUN_180059ba0(puVar6, g_memory_allocator_180c8a9a8);
}

/**
 * 处理渲染数据变体1 - 渲染数据处理优化版本
 * 
 * 实现另一种渲染数据处理方法，与主函数相比有以下特点：
 * 1. 简化的数据处理流程
 * 2. 不同的内存管理策略
 * 3. 优化的几何变换处理
 * 
 * @param param_1 处理参数（可能是缩放因子）
 */
void process_rendering_data_variant1(float param_1)
{
  int64_t lVar1;
  uint64_t* puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar10;
  int* unaff_RDI;
  int32_t* puVar11;
  float* pfVar12;
  uint64_t* puVar13;
  int iVar14;
  int iVar15;
  uint64_t unaff_R14;
  int64_t lVar16;
  int iVar17;
  int32_t uVar18;
  float unaff_XMM6_Da;
  int64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  float in_stack_000000e0;
  
  iVar15 = 0;
  iVar17 = 0;
  lVar9 = 1;
  if (0 < (int)unaff_RSI) {
    lVar16 = 0;
    // 主数据处理循环
    do {
      iVar14 = 0;
      lVar1 = in_stack_00000040 + (int64_t)iVar15 * 8;
      iVar3 = *unaff_RDI;
      iVar15 = iVar15 + iVar3;
      if (0 < iVar3) {
        pfVar12 = (float*)(lVar1 + 4);
        puVar11 = (int32_t*)(lVar16 * 0x14 + 0x10 + unaff_RBP);
        lVar6 = (int64_t)(iVar3 + -1);
        lVar8 = 0;
        // 内部数据处理循环
        do {
          param_1 = *pfVar12;
          if (param_1 != *(float*)(lVar1 + 4 + lVar6 * 8)) {
            *puVar11 = 0;
            lVar7 = lVar6;
            lVar10 = lVar8;
            if (*pfVar12 < *(float*)(lVar1 + 4 + lVar6 * 8)) {
              *puVar11 = 1;
              lVar7 = lVar8;
              lVar10 = lVar6;
            }
            iVar17 = iVar17 + 1;
            lVar16 = lVar16 + 1;
            // 坐标变换处理
            puVar11[-4] = in_stack_000000e0 * *(float*)(lVar1 + lVar10 * 8);
            puVar11[-3] = unaff_XMM6_Da * *(float*)(lVar1 + 4 + lVar10 * 8);
            param_1 = in_stack_000000e0 * *(float*)(lVar1 + lVar7 * 8);
            puVar11[-2] = param_1;
            puVar11[-1] = unaff_XMM6_Da * *(float*)(lVar1 + 4 + lVar7 * 8);
            puVar11 = puVar11 + 5;
          }
          iVar14 = iVar14 + 1;
          pfVar12 = pfVar12 + 2;
          lVar6 = lVar8;
          lVar8 = lVar8 + 1;
        } while (iVar14 < *unaff_RDI);
      }
      unaff_RDI = unaff_RDI + 1;
      unaff_RSI = unaff_RSI + -1;
      unaff_R14 = in_stack_00000048;
    } while (unaff_RSI != 0);
  }
  
  // 后处理数据
  FUN_18028f180(param_1, iVar17);
  
  // 排序处理
  if (1 < (int64_t)iVar17) {
    puVar13 = (uint64_t*)(unaff_RBP + 0x14);
    do {
      uVar18 = *(int32_t*)(puVar13 + 2);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      if (0 < lVar9) {
        fStack0000000000000054 = (float)((uint64_t)uVar4 >> 0x20);
        lVar16 = lVar9;
        puVar2 = puVar13;
        // 排序算法实现
        do {
          if (*(float*)(puVar2 + -2) <= fStack0000000000000054) break;
          lVar16 = lVar16 + -1;
          *(int32_t*)puVar2 = *(int32_t*)((int64_t)puVar2 + -0x14);
          *(int32_t*)((int64_t)puVar2 + 4) = *(int32_t*)(puVar2 + -2);
          *(int32_t*)((int64_t)puVar2 + 1) = *(int32_t*)((int64_t)puVar2 + -0xc);
          *(int32_t*)((int64_t)puVar2 + 0xc) = *(int32_t*)(puVar2 + -1);
          *(int32_t*)((int64_t)puVar2 + 2) = *(int32_t*)((int64_t)puVar2 + -4);
          puVar2 = (uint64_t*)((int64_t)puVar2 + -0x14);
        } while (0 < lVar16);
        if (lVar9 != lVar16) {
          puVar2 = (uint64_t*)(unaff_RBP + lVar16 * 0x14);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          *(int32_t*)(unaff_RBP + 0x10 + lVar16 * 0x14) = uVar18;
        }
      }
      lVar9 = lVar9 + 1;
      puVar13 = (uint64_t*)((int64_t)puVar13 + 0x14);
    } while (lVar9 < iVar17);
  }
  
  // 最终处理和清理
  uVar18 = FUN_18028ecc0(unaff_R14);
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(uVar18, g_memory_allocator_180c8a9a8);
}

/**
 * 处理渲染数据变体2 - 渲染数据处理优化版本，与变体1略有不同
 * 
 * 实现第三种渲染数据处理方法，具有以下特点：
 * 1. 与变体1相似但有不同的实现细节
 * 2. 可能针对不同的渲染场景优化
 * 3. 具有特定的内存访问模式
 * 
 * @param param_1 处理参数（可能是缩放因子）
 */
void process_rendering_data_variant2(float param_1)
{
  int64_t lVar1;
  uint64_t* puVar2;
  int iVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar10;
  int* unaff_RDI;
  int32_t* puVar11;
  float* pfVar12;
  uint64_t* puVar13;
  int iVar14;
  int iVar15;
  uint64_t unaff_R14;
  int64_t lVar16;
  int iVar17;
  int32_t uVar18;
  float unaff_XMM6_Da;
  int64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  float in_stack_000000e0;
  
  iVar15 = 0;
  iVar17 = 0;
  lVar9 = 1;
  if (0 < (int)unaff_RSI) {
    lVar16 = 0;
    // 主数据处理循环
    do {
      iVar14 = 0;
      lVar1 = in_stack_00000040 + (int64_t)iVar15 * 8;
      iVar3 = *unaff_RDI;
      iVar15 = iVar15 + iVar3;
      if (0 < iVar3) {
        pfVar12 = (float*)(lVar1 + 4);
        puVar11 = (int32_t*)(lVar16 * 0x14 + 0x10 + unaff_RBP);
        lVar6 = (int64_t)(iVar3 + -1);
        lVar8 = 0;
        // 内部数据处理循环
        do {
          param_1 = *pfVar12;
          if (param_1 != *(float*)(lVar1 + 4 + lVar6 * 8)) {
            *puVar11 = 0;
            lVar7 = lVar6;
            lVar10 = lVar8;
            if (*pfVar12 < *(float*)(lVar1 + 4 + lVar6 * 8)) {
              *puVar11 = 1;
              lVar7 = lVar8;
              lVar10 = lVar6;
            }
            iVar17 = iVar17 + 1;
            lVar16 = lVar16 + 1;
            // 坐标变换处理
            puVar11[-4] = in_stack_000000e0 * *(float*)(lVar1 + lVar10 * 8);
            puVar11[-3] = unaff_XMM6_Da * *(float*)(lVar1 + 4 + lVar10 * 8);
            param_1 = in_stack_000000e0 * *(float*)(lVar1 + lVar7 * 8);
            puVar11[-2] = param_1;
            puVar11[-1] = unaff_XMM6_Da * *(float*)(lVar1 + 4 + lVar7 * 8);
            puVar11 = puVar11 + 5;
          }
          iVar14 = iVar14 + 1;
          pfVar12 = pfVar12 + 2;
          lVar6 = lVar8;
          lVar8 = lVar8 + 1;
        } while (iVar14 < *unaff_RDI);
      }
      unaff_RDI = unaff_RDI + 1;
      unaff_RSI = unaff_RSI + -1;
      unaff_R14 = in_stack_00000048;
    } while (unaff_RSI != 0);
  }
  
  // 后处理数据
  FUN_18028f180(param_1, iVar17);
  
  // 排序处理
  if (1 < (int64_t)iVar17) {
    puVar13 = (uint64_t*)(unaff_RBP + 0x14);
    do {
      uVar18 = *(int32_t*)(puVar13 + 2);
      uVar4 = *puVar13;
      uVar5 = puVar13[1];
      if (0 < lVar9) {
        fStack0000000000000054 = (float)((uint64_t)uVar4 >> 0x20);
        lVar16 = lVar9;
        puVar2 = puVar13;
        // 排序算法实现
        do {
          if (*(float*)(puVar2 + -2) <= fStack0000000000000054) break;
          lVar16 = lVar16 + -1;
          *(int32_t*)puVar2 = *(int32_t*)((int64_t)puVar2 + -0x14);
          *(int32_t*)((int64_t)puVar2 + 4) = *(int32_t*)(puVar2 + -2);
          *(int32_t*)((int64_t)puVar2 + 1) = *(int32_t*)((int64_t)puVar2 + -0xc);
          *(int32_t*)((int64_t)puVar2 + 0xc) = *(int32_t*)(puVar2 + -1);
          *(int32_t*)((int64_t)puVar2 + 2) = *(int32_t*)((int64_t)puVar2 + -4);
          puVar2 = (uint64_t*)((int64_t)puVar2 + -0x14);
        } while (0 < lVar16);
        if (lVar9 != lVar16) {
          puVar2 = (uint64_t*)(unaff_RBP + lVar16 * 0x14);
          *puVar2 = uVar4;
          puVar2[1] = uVar5;
          *(int32_t*)(unaff_RBP + 0x10 + lVar16 * 0x14) = uVar18;
        }
      }
      lVar9 = lVar9 + 1;
      puVar13 = (uint64_t*)((int64_t)puVar13 + 0x14);
    } while (lVar9 < iVar17);
  }
  
  // 最终处理和清理
  uVar18 = FUN_18028ecc0(unaff_R14);
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(uVar18, g_memory_allocator_180c8a9a8);
}

/**
 * 处理几何数据 - 专门用于几何体数据处理的函数
 * 
 * 实现几何数据的专门处理流程，包括：
 * 1. 几何顶点数据的批量处理
 * 2. 坐标变换和缩放
 * 3. 几何数据的排序和优化
 * 
 * @param param_1 处理参数（可能是缩放因子）
 * @param param_2 几何数据上下文
 * @param param_3 几体缩放因子
 */
void process_geometric_data(float param_1, uint64_t param_2, float param_3)
{
  uint64_t* puVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t in_RCX;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar9;
  int* unaff_RDI;
  int32_t* puVar10;
  float* pfVar11;
  uint64_t* puVar12;
  int iVar13;
  int unaff_R12D;
  int64_t unaff_R14;
  int unaff_R15D;
  int32_t uVar14;
  float unaff_XMM6_Da;
  int64_t in_stack_00000040;
  uint64_t in_stack_00000048;
  float fStack0000000000000054;
  
  // 几何数据处理循环
  do {
    iVar13 = 0;
    lVar8 = in_RCX + (int64_t)unaff_R12D * 8;
    iVar2 = *unaff_RDI;
    unaff_R12D = unaff_R12D + iVar2;
    if (0 < iVar2) {
      pfVar11 = (float*)(lVar8 + 4);
      puVar10 = (int32_t*)(unaff_R14 * 0x14 + 0x10 + unaff_RBP);
      lVar5 = (int64_t)(iVar2 + -1);
      lVar7 = 0;
      // 几何顶点处理
      do {
        param_1 = *pfVar11;
        if (param_1 != *(float*)(lVar8 + 4 + lVar5 * 8)) {
          *puVar10 = 0;
          lVar6 = lVar5;
          lVar9 = lVar7;
          if (*pfVar11 < *(float*)(lVar8 + 4 + lVar5 * 8)) {
            *puVar10 = (int)unaff_RBX;
            lVar6 = lVar7;
            lVar9 = lVar5;
          }
          unaff_R15D = unaff_R15D + 1;
          unaff_R14 = unaff_R14 + 1;
          // 几体坐标变换
          puVar10[-4] = param_3 * *(float*)(lVar8 + lVar9 * 8);
          puVar10[-3] = unaff_XMM6_Da * *(float*)(lVar8 + 4 + lVar9 * 8);
          param_1 = param_3 * *(float*)(lVar8 + lVar6 * 8);
          puVar10[-2] = param_1;
          puVar10[-1] = unaff_XMM6_Da * *(float*)(lVar8 + 4 + lVar6 * 8);
          puVar10 = puVar10 + 5;
        }
        iVar13 = iVar13 + 1;
        pfVar11 = pfVar11 + 2;
        in_RCX = in_stack_00000040;
        lVar5 = lVar7;
        lVar7 = lVar7 + 1;
      } while (iVar13 < *unaff_RDI);
    }
    unaff_RDI = unaff_RDI + 1;
    unaff_RSI = unaff_RSI - unaff_RBX;
  } while (unaff_RSI != 0);
  
  // 后处理几何数据
  FUN_18028f180(param_1, unaff_R15D);
  
  // 几何数据排序
  if (unaff_RBX < unaff_R15D) {
    puVar12 = (uint64_t*)(unaff_RBP + 0x14);
    do {
      uVar14 = *(int32_t*)(puVar12 + 2);
      uVar3 = *puVar12;
      uVar4 = puVar12[1];
      if (0 < unaff_RBX) {
        fStack0000000000000054 = (float)((uint64_t)uVar3 >> 0x20);
        lVar8 = unaff_RBX;
        puVar1 = puVar12;
        // 排序算法实现
        do {
          if (*(float*)(puVar1 + -2) <= fStack0000000000000054) break;
          lVar8 = lVar8 + -1;
          *(int32_t*)puVar1 = *(int32_t*)((int64_t)puVar1 + -0x14);
          *(int32_t*)((int64_t)puVar1 + 4) = *(int32_t*)(puVar1 + -2);
          *(int32_t*)((int64_t)puVar1 + 1) = *(int32_t*)((int64_t)puVar1 + -0xc);
          *(int32_t*)((int64_t)puVar1 + 0xc) = *(int32_t*)(puVar1 + -1);
          *(int32_t*)((int64_t)puVar1 + 2) = *(int32_t*)((int64_t)puVar1 + -4);
          puVar1 = (uint64_t*)((int64_t)puVar1 + -0x14);
        } while (0 < lVar8);
        if (unaff_RBX != lVar8) {
          puVar1 = (uint64_t*)(unaff_RBP + lVar8 * 0x14);
          *puVar1 = uVar3;
          puVar1[1] = uVar4;
          *(int32_t*)(unaff_RBP + 0x10 + lVar8 * 0x14) = uVar14;
        }
      }
      unaff_RBX = unaff_RBX + 1;
      puVar12 = (uint64_t*)((int64_t)puVar12 + 0x14);
    } while (unaff_RBX < unaff_R15D);
  }
  
  // 最终处理和清理
  uVar14 = FUN_18028ecc0(in_stack_00000048);
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(uVar14, g_memory_allocator_180c8a9a8);
}

/**
 * 处理数据排序 - 渲染数据排序函数
 * 
 * 实现渲染数据的排序功能，包括：
 * 1. 数据预处理
 * 2. 高效排序算法
 * 3. 结果输出处理
 * 
 * @param param_1 排序参数
 */
void process_data_sorting(int32_t param_1)
{
  uint64_t* puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t* puVar5;
  int unaff_R15D;
  int32_t uVar6;
  float fStack0000000000000054;
  
  // 预处理数据
  FUN_18028f180(param_1, unaff_R15D);
  
  // 排序处理
  if (unaff_RBX < unaff_R15D) {
    puVar5 = (uint64_t*)(unaff_RBP + 0x14);
    do {
      uVar6 = *(int32_t*)(puVar5 + 2);
      uVar2 = *puVar5;
      uVar3 = puVar5[1];
      if (0 < unaff_RBX) {
        fStack0000000000000054 = (float)((uint64_t)uVar2 >> 0x20);
        lVar4 = unaff_RBX;
        puVar1 = puVar5;
        // 排序算法实现
        do {
          if (*(float*)(puVar1 + -2) <= fStack0000000000000054) break;
          lVar4 = lVar4 + -1;
          *(int32_t*)puVar1 = *(int32_t*)((int64_t)puVar1 + -0x14);
          *(int32_t*)((int64_t)puVar1 + 4) = *(int32_t*)(puVar1 + -2);
          *(int32_t*)((int64_t)puVar1 + 1) = *(int32_t*)((int64_t)puVar1 + -0xc);
          *(int32_t*)((int64_t)puVar1 + 0xc) = *(int32_t*)(puVar1 + -1);
          *(int32_t*)((int64_t)puVar1 + 2) = *(int32_t*)((int64_t)puVar1 + -4);
          puVar1 = (uint64_t*)((int64_t)puVar1 + -0x14);
        } while (0 < lVar4);
        if (unaff_RBX != lVar4) {
          puVar1 = (uint64_t*)(unaff_RBP + lVar4 * 0x14);
          *puVar1 = uVar2;
          puVar1[1] = uVar3;
          *(int32_t*)(unaff_RBP + 0x10 + lVar4 * 0x14) = uVar6;
        }
      }
      unaff_RBX = unaff_RBX + 1;
      puVar5 = (uint64_t*)((int64_t)puVar5 + 0x14);
    } while (unaff_RBX < unaff_R15D);
  }
  
  // 最终处理和清理
  uVar6 = FUN_18028ecc0();
  if (g_render_context_180c8a9b0 != 0) {
    *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
  }
  FUN_180059ba0(uVar6, g_memory_allocator_180c8a9a8);
}

/**
 * 处理数据流 - 渲染数据流处理函数
 * 
 * 实现渲染数据流的处理，包括：
 * 1. 数据流读取和解析
 * 2. 实时数据处理
 * 3. 流式输出处理
 * 
 * @param param_1 数据流参数
 * @param param_2 处理参数（可能是缩放因子）
 */
void process_data_stream(int32_t param_1, float param_2)
{
  int32_t* puVar1;
  int64_t lVar2;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int32_t* puVar3;
  int64_t in_R11;
  int32_t unaff_R15D;
  int32_t uVar4;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000050;
  float fStack0000000000000054;
  int32_t uStack0000000000000058;
  int32_t uStack000000000000005c;
  int32_t in_stack_00000100;
  int32_t in_stack_00000108;
  
  puVar3 = (int32_t*)(unaff_RBP + 0x14);
  // 数据流处理循环
  do {
    uVar4 = puVar3[4];
    uStack0000000000000050 = *puVar3;
    fStack0000000000000054 = (float)puVar3[1];
    uStack0000000000000058 = puVar3[2];
    uStack000000000000005c = puVar3[3];
    lVar2 = unaff_RBX;
    puVar1 = puVar3;
    if (0 < unaff_RBX) {
      // 排序算法实现
      do {
        if ((float)puVar1[-4] <= fStack0000000000000054) break;
        param_1 = puVar1[-5];
        lVar2 = lVar2 + -1;
        *puVar1 = param_1;
        puVar1[1] = puVar1[-4];
        puVar1[2] = puVar1[-3];
        puVar1[3] = puVar1[-2];
        puVar1[4] = puVar1[-1];
        puVar1 = puVar1 + -5;
      } while (0 < lVar2);
      param_2 = fStack0000000000000054;
      if (unaff_RBX != lVar2) {
        puVar1 = (int32_t*)(unaff_RBP + lVar2 * 0x14);
        *puVar1 = uStack0000000000000050;
        puVar1[1] = fStack0000000000000054;
        puVar1[2] = uStack0000000000000058;
        puVar1[3] = uStack000000000000005c;
        *(int32_t*)(unaff_RBP + 0x10 + lVar2 * 0x14) = uVar4;
      }
    }
    unaff_RBX = unaff_RBX + 1;
    puVar3 = puVar3 + 5;
    if (in_R11 <= unaff_RBX) {
      uStack0000000000000028 = in_stack_00000108;
      uVar4 = FUN_18028ecc0(param_1, param_2, unaff_R15D, puVar3, in_stack_00000100);
      if (g_render_context_180c8a9b0 != 0) {
        *(int*)(g_render_context_180c8a9b0 + 0x3a8) = *(int*)(g_render_context_180c8a9b0 + 0x3a8) + -1;
      }
      FUN_180059ba0(uVar4, g_memory_allocator_180c8a9a8);
    }
  } while( true );
}

/**
 * 清理渲染资源 - 渲染资源清理函数
 * 
 * 实现渲染资源的清理工作，包括：
 * 1. 更新渲染上下文状态
 * 2. 释放相关资源
 */
void cleanup_rendering_resources(void)
{
  int64_t in_RAX;
  
  // 更新渲染上下文状态
  *(int*)(in_RAX + 0x3a8) = *(int*)(in_RAX + 0x3a8) + -1;
  // 释放资源
  FUN_180059ba0();
}

/**
 * 递归几何细分 - 实现几何体的递归细分算法
 * 
 * 实现几何体的递归细分功能，包括：
 * 1. 几何体的细分计算
 * 2. 递归深度控制
 * 3. 细分精度控制
 * 
 * @param param_1 输出缓冲区
 * @param param_2 顶点计数指针
 * @param param_3 X坐标1
 * @param param_4 Y坐标1
 * @param param_5 X坐标2
 * @param param_6 Y坐标2
 * @param param_7 X坐标3
 * @param param_8 Y坐标3
 * @param param_9 容差参数
 * @param param_10 递归深度
 * @return 处理状态
 */
uint64_t recursive_geometric_subdivision(int64_t param_1, int* param_2, float param_3, float param_4, 
                                         float param_5, float param_6, float param_7, float param_8, 
                                         float param_9, int param_10)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  // 计算中点
  param_5 = param_5 * 0.5;
  param_6 = param_6 * 0.5;
  fVar5 = (param_4 + param_8) * 0.25 + param_6;
  fVar4 = (param_3 + param_7) * 0.25 + param_5;
  fVar3 = (param_7 * 0.5 + param_3 * 0.5) - fVar4;
  fVar2 = (param_8 * 0.5 + param_4 * 0.5) - fVar5;
  
  // 递归深度检查
  if (param_10 < 0x11) {
    if (fVar2 * fVar2 + fVar3 * fVar3 <= param_9) {
      // 达到精度要求，输出结果
      iVar1 = *param_2;
      if (param_1 != 0) {
        *(float*)(param_1 + (int64_t)iVar1 * 8) = param_7;
        *(float*)(param_1 + 4 + (int64_t)iVar1 * 8) = param_8;
      }
      *param_2 = iVar1 + 1;
    }
    else {
      // 未达到精度要求，继续递归细分
      fVar2 = param_5 + param_3 * 0.5;
      fVar3 = param_6 + param_4 * 0.5;
      FUN_18028f6d0(fVar2, fVar3, param_3, param_4, fVar2, fVar3, fVar4, fVar5, param_9, param_10 + 1);
      FUN_18028f6d0(param_1, param_2, fVar4, fVar5, param_5 + param_7 * 0.5, param_6 + param_8 * 0.5,
                    param_7, param_8, param_9, param_10 + 1);
    }
  }
  return 1;
}

/**
 * 执行几何计算 - 高级几何计算函数
 * 
 * 实现复杂的几何计算功能，包括：
 * 1. 几何参数的预处理
 * 2. 坐标变换计算
 * 3. 递归几何处理
 * 
 * @param param_1 输入参数
 * @param param_2 输出计数指针
 * @param param_3 几何参数
 * @return 处理状态
 */
uint64_t perform_geometric_calculation(float param_1, int* param_2, float param_3)
{
  int iVar1;
  int64_t in_RAX;
  int unaff_EBX;
  int64_t unaff_RDI;
  float in_XMM4_Da;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  float unaff_XMM7_Da;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM10_Da;
  float unaff_XMM14_Da;
  float fStack0000000000000028;
  float fStack0000000000000040;
  int iStack0000000000000048;
  float in_stack_00000140;
  
  // 设置几何参数
  *(int32_t*)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t*)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t*)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t*)(in_RAX + -0xc) = unaff_XMM6_Dd;
  
  // 条件判断
  if (param_1 + param_3 <= in_stack_00000140) {
    iVar1 = *param_2;
    if (unaff_RDI != 0) {
      *(int32_t*)(unaff_RDI + (int64_t)iVar1 * 8) = unaff_XMM9_Da;
      *(int32_t*)(unaff_RDI + 4 + (int64_t)iVar1 * 8) = unaff_XMM10_Da;
    }
    *param_2 = iVar1 + 1;
  }
  else {
    // 高级几何处理
    fStack0000000000000028 = unaff_XMM7_Da + in_XMM4_Da;
    fStack0000000000000040 = in_stack_00000140;
    iStack0000000000000048 = unaff_EBX + 1;
    FUN_18028f6d0();
    fStack0000000000000028 = unaff_XMM7_Da + unaff_XMM14_Da;
    fStack0000000000000040 = in_stack_00000140;
    iStack0000000000000048 = unaff_EBX + 1;
    FUN_18028f6d0();
  }
  return 1;
}

/**
 * 检查操作状态 - 简单的状态检查函数
 * 
 * 提供基本的操作状态检查功能，通常用于其他几何处理函数
 * 
 * @return 固定返回值1，表示操作成功
 */
uint64_t check_operation_status(void)
{
  return 1;
}

/**
 * 高级几何处理器 - 复杂的几何处理算法
 * 
 * 实现高级的几何处理算法，包括：
 * 1. 复杂的几何变换
 * 2. 精确的细分控制
 * 3. 递归几何处理
 * 
 * @param param_1 输出缓冲区
 * @param param_2 顶点计数指针
 * @param param_3 X坐标1
 * @param param_4 Y坐标1
 * @param param_5 X坐标2
 * @param param_6 Y坐标2
 * @param param_7 X坐标3
 * @param param_8 Y坐标3
 * @param param_9 X坐标4
 * @param param_10 Y坐标4
 * @param param_11 容差参数
 * @param param_12 递归深度
 */
void advanced_geometric_processor(int64_t param_1, int* param_2, float param_3, float param_4, float param_5,
                                float param_6, float param_7, float param_8, float param_9, float param_10,
                                float param_11, int param_12)
{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStackX_18;
  float fStackX_20;
  
  // 计算周长和面积相关参数
  fVar2 = SQRT((param_8 - param_6) * (param_8 - param_6) + (param_7 - param_5) * (param_7 - param_5)
              ) + SQRT((param_6 - param_4) * (param_6 - param_4) +
                       (param_5 - param_3) * (param_5 - param_3)) +
          SQRT((param_10 - param_8) * (param_10 - param_8) +
               (param_9 - param_7) * (param_9 - param_7));
  // 计算误差
  fVar2 = fVar2 * fVar2 -
          ((param_10 - param_4) * (param_10 - param_4) + (param_9 - param_3) * (param_9 - param_3));
  fStackX_18 = param_3;
  fStackX_20 = param_4;
  
  // 递归深度检查
  if (param_12 < 0x11) {
    do {
      if (fVar2 <= param_11) {
        // 达到精度要求，输出结果
        iVar1 = *param_2;
        if (param_1 != 0) {
          *(float*)(param_1 + (int64_t)iVar1 * 8) = param_9;
          *(float*)(param_1 + 4 + (int64_t)iVar1 * 8) = param_10;
        }
        *param_2 = iVar1 + 1;
        return;
      }
      param_12 = param_12 + 1;
      // 计算新的控制点
      fVar2 = param_8 * 0.5;
      fVar7 = param_7 * 0.5 + param_5 * 0.5;
      fVar4 = fStackX_20 * 0.5 + param_6 * 0.5;
      fVar5 = fStackX_18 * 0.5 + param_5 * 0.5;
      param_8 = param_10 * 0.5 + fVar2;
      fVar2 = fVar2 + param_6 * 0.5;
      param_7 = param_9 * 0.5 + param_7 * 0.5;
      fVar3 = (fVar7 + fVar5) * 0.5;
      param_6 = (fVar2 + param_8) * 0.5;
      fVar2 = (fVar2 + fVar4) * 0.5;
      param_5 = (fVar7 + param_7) * 0.5;
      fVar6 = (param_6 + fVar2) * 0.5;
      fVar7 = (param_5 + fVar3) * 0.5;
      
      // 递归调用处理
      FUN_18028f8f0(param_1, param_2, fStackX_18, fStackX_20, fVar5, fVar4, fVar3, fVar2, fVar7, fVar6,
                    param_11, param_12);
      
      // 重新计算误差
      fVar2 = SQRT((param_8 - param_6) * (param_8 - param_6) +
                   (param_7 - param_5) * (param_7 - param_5)) +
              SQRT((param_6 - fVar6) * (param_6 - fVar6) + (param_5 - fVar7) * (param_5 - fVar7)) +
              SQRT((param_10 - param_8) * (param_10 - param_8) +
                   (param_9 - param_7) * (param_9 - param_7));
      fVar2 = fVar2 * fVar2 -
              ((param_10 - fVar6) * (param_10 - fVar6) + (param_9 - fVar7) * (param_9 - fVar7));
      fStackX_18 = fVar7;
      fStackX_20 = fVar6;
    } while (param_12 < 0x11);
  }
  return;
}

/**
 * 终极几何处理器 - 最高级的几何处理算法
 * 
 * 实现最复杂的几何处理算法，包括：
 * 1. 多层次的几何变换
 * 2. 精确的递归控制
 * 3. 高级的几何细分
 * 
 * @param param_1 几何处理上下文
 * @param param_2 容差参数
 */
void ultimate_geometric_processor(uint64_t param_1, float param_2)
{
  int iVar1;
  int64_t in_RAX;
  int64_t unaff_RBX;
  int unaff_ESI;
  int* unaff_RDI;
  float fVar2;
  float fVar3;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float fVar4;
  float unaff_XMM11_Da;
  float fVar5;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack0000000000000028;
  float fStack0000000000000030;
  float fStack0000000000000038;
  float fStack0000000000000040;
  float fStack0000000000000048;
  int iStack0000000000000058;
  float in_stack_00000120;
  float in_stack_00000128;
  float fStack0000000000000148;
  
  // 设置几何参数
  *(int32_t*)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t*)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t*)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t*)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  
  // 终极几何处理循环
  do {
    if (param_2 <= unaff_XMM9_Da) {
      // 达到精度要求，输出结果
      iVar1 = *unaff_RDI;
      if (unaff_RBX != 0) {
        *(float*)(unaff_RBX + (int64_t)iVar1 * 8) = unaff_XMM13_Da;
        *(float*)(unaff_RBX + 4 + (int64_t)iVar1 * 8) = unaff_XMM14_Da;
      }
      *unaff_RDI = iVar1 + 1;
      return;
    }
    unaff_ESI = unaff_ESI + 1;
    // 计算新的控制点
    fVar4 = unaff_XMM15_Da * 0.5 + unaff_XMM10_Da * 0.5;
    fStack0000000000000028 = in_stack_00000128 * 0.5 + unaff_XMM11_Da * 0.5;
    fVar2 = in_stack_00000120 * 0.5 + unaff_XMM10_Da * 0.5;
    fVar3 = unaff_XMM14_Da * 0.5 + unaff_XMM8_Da * 0.5;
    fVar5 = unaff_XMM8_Da * 0.5 + unaff_XMM11_Da * 0.5;
    unaff_XMM15_Da = unaff_XMM13_Da * 0.5 + unaff_XMM15_Da * 0.5;
    fStack0000000000000030 = (fVar4 + fVar2) * 0.5;
    unaff_XMM11_Da = (fVar5 + fVar3) * 0.5;
    fStack0000000000000038 = (fVar5 + fStack0000000000000028) * 0.5;
    unaff_XMM10_Da = (fVar4 + unaff_XMM15_Da) * 0.5;
    fVar5 = (unaff_XMM11_Da + fStack0000000000000038) * 0.5;
    fVar4 = (unaff_XMM10_Da + fStack0000000000000030) * 0.5;
    fStack0000000000000040 = fVar4;
    fStack0000000000000048 = fVar5;
    iStack0000000000000058 = unaff_ESI;
    fStack0000000000000148 = fVar3;
    
    // 递归调用处理
    FUN_18028f8f0(fStack0000000000000038, fStack0000000000000030, in_stack_00000120, in_stack_00000128,
                  fVar2);
    
    // 重新计算误差
    fVar2 = SQRT((fVar3 - unaff_XMM11_Da) * (fVar3 - unaff_XMM11_Da) +
                 (unaff_XMM15_Da - unaff_XMM10_Da) * (unaff_XMM15_Da - unaff_XMM10_Da)) +
            SQRT((unaff_XMM11_Da - fVar5) * (unaff_XMM11_Da - fVar5) +
                 (unaff_XMM10_Da - fVar4) * (unaff_XMM10_Da - fVar4)) +
            SQRT((unaff_XMM14_Da - fVar3) * (unaff_XMM14_Da - fVar3) +
                 (unaff_XMM13_Da - unaff_XMM15_Da) * (unaff_XMM13_Da - unaff_XMM15_Da));
    param_2 = fVar2 * fVar2 -
              ((unaff_XMM14_Da - fVar5) * (unaff_XMM14_Da - fVar5) +
              (unaff_XMM13_Da - fVar4) * (unaff_XMM13_Da - fVar4));
    unaff_XMM8_Da = fStack0000000000000148;
    in_stack_00000120 = fVar4;
    in_stack_00000128 = fVar5;
  } while (unaff_ESI < 0x11);
  return;
}

// 兼容性包装函数 - 保持与原始代码的兼容性
void FUN_18028f350(uint64_t param_1, int64_t param_2, int* param_3, uint param_4, float param_5,
                   float param_6, uint64_t param_7, uint64_t param_8, int32_t param_9,
                   int32_t param_10)
{
    process_rendering_data_advanced(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);
}

void FUN_18028f499(float param_1)
{
    process_rendering_data_variant1(param_1);
}

void FUN_18028f4a1(float param_1)
{
    process_rendering_data_variant2(param_1);
}

void FUN_18028f4d4(float param_1, uint64_t param_2, float param_3)
{
    process_geometric_data(param_1, param_2, param_3);
}

void FUN_18028f5d1(int32_t param_1)
{
    process_data_sorting(param_1);
}

void FUN_18028f5ec(int32_t param_1, float param_2)
{
    process_data_stream(param_1, param_2);
}

void FUN_18028f68e(void)
{
    cleanup_rendering_resources();
}

uint64_t FUN_18028f6d0(int64_t param_1, int* param_2, float param_3, float param_4, float param_5, float param_6,
                       float param_7, float param_8, float param_9, int param_10)
{
    return recursive_geometric_subdivision(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10);
}

uint64_t FUN_18028f7d7(float param_1, int* param_2, float param_3)
{
    return perform_geometric_calculation(param_1, param_2, param_3);
}

uint64_t FUN_18028f898(void)
{
    return check_operation_status();
}

void FUN_18028f8f0(int64_t param_1, int* param_2, float param_3, float param_4, float param_5, float param_6,
                   float param_7, float param_8, float param_9, float param_10, float param_11, int param_12)
{
    advanced_geometric_processor(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12);
}

void FUN_18028fa3b(uint64_t param_1, float param_2)
{
    ultimate_geometric_processor(param_1, param_2);
}