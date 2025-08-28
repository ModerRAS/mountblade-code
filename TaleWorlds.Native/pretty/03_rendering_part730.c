#include "TaleWorlds.Native.Split.h"

// =============================================================================
// 03_rendering_part730.c - 渲染系统图像处理与SIMD优化模块
// =============================================================================

// =============================================================================
// 常量定义
// =============================================================================

// 渲染系统SIMD处理模式常量
#define RENDERING_SIMD_MODE_SAD_8X8        0  // 8x8块绝对差求和
#define RENDERING_SIMD_MODE_SAD_16X16      1  // 16x16块绝对差求和
#define RENDERING_SIMD_MODE_SAD_32X32      2  // 32x32块绝对差求和
#define RENDERING_SIMD_MODE_AVERAGE_SAD    3  // 平均绝对差求和
#define RENDERING_SIMD_MODE_BLOCK_MATCH    4  // 块匹配处理

// 渲染系统像素处理常量
#define RENDERING_PIXEL_MAX_VALUE          255  // 像素最大值
#define RENDERING_PIXEL_MIN_VALUE          0    // 像素最小值
#define RENDERING_PIXEL_SCALE_FACTOR       64   // 像素缩放因子
#define RENDERING_PIXEL_ROUND_OFFSET       32   // 像素舍入偏移

// 渲染系统SIMD向量大小常量
#define SIMD_VECTOR_SIZE_128               16   // 128位向量大小
#define SIMD_VECTOR_SIZE_256               32   // 256位向量大小
#define SIMD_PROCESSING_BLOCK_8            8    // 8元素处理块
#define SIMD_PROCESSING_BLOCK_16           16   // 16元素处理块
#define SIMD_PROCESSING_BLOCK_32           32   // 32元素处理块

// =============================================================================
// 函数声明
// =============================================================================

/**
 * @brief 渲染系统图像绝对差计算器 - 计算两个图像块之间的绝对差值
 * @param param_1 源图像数据指针
 * @param param_2 源图像步长
 * @param param_3 目标图像数据指针
 * @param param_4 目标图像步长
 * @param param_5 计算结果输出指针
 * 
 * 该函数使用SIMD指令优化计算两个图像块之间的绝对差值总和，
 * 支持8x8块的高效处理，主要用于运动估计和图像匹配。
 */
void rendering_system_absolute_difference_calculator(uint *param_1, int param_2, uint *param_3, int param_4, int *param_5);

/**
 * @brief 渲染系统平均绝对差计算器(8x8) - 计算平均绝对差
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @param param_5 平均图像数据
 * @return 计算得到的绝对差值
 * 
 * 使用AVX2指令集优化8x8块的平均绝对差计算，
 * 结合vpavgb和vpsadbw指令实现高效处理。
 */
undefined8 rendering_system_average_absolute_difference_8x8(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4, undefined1 (*param_5)[32]);

/**
 * @brief 渲染系统绝对差求和器(8x8) - 计算绝对差总和
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @return 计算得到的绝对差总和
 * 
 * 使用AVX2指令集优化8x8块的绝对差求和计算，
 * 采用vpsadbw指令实现高效的字节级绝对差计算。
 */
undefined4 rendering_system_absolute_difference_sum_8x8(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4);

/**
 * @brief 渲染系统平均绝对差计算器(16x16) - 计算大块平均绝对差
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @param param_5 平均图像数据
 * @return 计算得到的绝对差值
 * 
 * 使用AVX2指令集优化16x16块的平均绝对差计算，
 * 适用于需要更高精度的图像匹配应用。
 */
undefined8 rendering_system_average_absolute_difference_16x16(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4, undefined1 (*param_5)[32]);

/**
 * @brief 渲染系统绝对差求和器(16x16) - 计算大块绝对差总和
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @return 计算得到的绝对差总和
 * 
 * 使用AVX2指令集优化16x16块的绝对差求和计算，
 * 提供比8x8块更高的计算精度。
 */
undefined4 rendering_system_absolute_difference_sum_16x16(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4);

/**
 * @brief 渲染系统平均绝对差计算器(32x32) - 计算超大块平均绝对差
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @param param_5 平均图像数据
 * @return 计算得到的绝对差值
 * 
 * 使用AVX2指令集优化32x32块的平均绝对差计算，
 * 适用于高精度的图像分析和匹配应用。
 */
undefined8 rendering_system_average_absolute_difference_32x32(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4, undefined1 (*param_5)[32]);

/**
 * @brief 渲染系统绝对差求和器(32x32) - 计算超大块绝对差总和
 * @param param_1 第一个图像块数据
 * @param param_2 第一个图像步长
 * @param param_3 第二个图像块数据
 * @param param_4 第二个图像步长
 * @return 计算得到的绝对差总和
 * 
 * 使用AVX2指令集优化32x32块的绝对差求和计算，
 * 提供最高精度的绝对差计算能力。
 */
undefined4 rendering_system_absolute_difference_sum_32x32(undefined1 (*param_1)[32], int param_2, undefined1 (*param_3)[32], int param_4);

/**
 * @brief 渲染系统多参考帧匹配器 - 执行多参考帧的块匹配
 * @param param_1 当前图像块数据
 * @param param_2 图像步长
 * @param param_3 参考帧数据指针数组
 * @param param_4 参考帧步长
 * @param param_5 匹配结果输出
 * 
 * 使用AVX2指令集实现高效的多参考帧块匹配，
 * 支持运动估计和视频压缩应用。
 */
void rendering_system_multi_reference_frame_matcher(undefined1 (*param_1)[32], int param_2, longlong *param_3, int param_4, undefined1 (*param_5)[16]);

/**
 * @brief 渲染系统双线性插值器 - 执行双线性插值操作
 * @param param_1 源图像数据
 * @param param_2 源图像步长
 * @param param_3 目标图像数据
 * @param param_4 目标图像步长
 * @param param_5 插值系数
 * @param param_6 插值步长
 * @param param_7 宽度
 * @param param_8 高度
 * @param param_9 插值模式
 * 
 * 实现高质量的双线性插值算法，
 * 支持图像缩放和几何变换应用。
 */
void rendering_system_bilinear_interpolator(longlong param_1, longlong param_2, longlong param_3, longlong param_4, longlong param_5, uint param_6, int param_7, uint param_8, int param_9);

// =============================================================================
// 函数别名定义
// =============================================================================

// 主要功能函数别名
#define rendering_system_image_block_comparator      rendering_system_absolute_difference_calculator
#define rendering_system_sad_calculator_8x8          rendering_system_average_absolute_difference_8x8
#define rendering_system_sad_calculator_16x16        rendering_system_average_absolute_difference_16x16
#define rendering_system_sad_calculator_32x32        rendering_system_average_absolute_difference_32x32
#define rendering_system_motion_estimator             rendering_system_multi_reference_frame_matcher
#define rendering_system_image_scaler                rendering_system_bilinear_interpolator

// 技术实现函数别名
#define rendering_system_simd_abs_diff_processor     FUN_1806970f0
#define rendering_system_avx2_avg_sad_8x8            FUN_1806972a0
#define rendering_system_avx2_sad_8x8                FUN_180697340
#define rendering_system_avx2_avg_sad_16x16          FUN_1806973c0
#define rendering_system_avx2_sad_16x16              FUN_180697460
#define rendering_system_avx2_avg_sad_32x32          FUN_1806974e0
#define rendering_system_avx2_sad_32x32              FUN_180697580
#define rendering_system_avx2_multi_ref_match        FUN_180697600
#define rendering_system_avx2_sad_multi_ref          FUN_180697680
#define rendering_system_avx2_large_ref_match        FUN_1806976f0
#define rendering_system_avx2_sad_large_ref          FUN_180697770
#define rendering_system_quad_ref_matcher            FUN_1806977e0
#define rendering_system_octal_ref_matcher            FUN_1806978b0
#define rendering_system_error_handler               FUN_1806979e0
#define rendering_system_interpolation_core          FUN_180697ae0
#define rendering_system_interpolation_optimized     FUN_180697b09
#define rendering_system_empty_function              FUN_180697c23
#define rendering_system_advanced_interpolator        FUN_180697c30
#define rendering_system_interpolation_accelerated   FUN_180697c6b
#define rendering_system_cleanup_function             FUN_180697dc2

// =============================================================================
// 技术说明
// =============================================================================

/*
 * 技术特性说明：
 * 
 * 1. SIMD优化技术：
 *    - 使用AVX2指令集进行向量化处理
 *    - 支持128位和256位SIMD操作
 *    - 实现高效的并行计算能力
 * 
 * 2. 图像处理算法：
 *    - 绝对差求和(SAD)算法
 *    - 平均绝对差计算
 *    - 多参考帧块匹配
 *    - 双线性插值算法
 * 
 * 3. 性能优化策略：
 *    - 循环展开和向量化
 *    - 内存访问优化
 *    - 分支预测优化
 *    - 缓存友好的数据布局
 * 
 * 4. 应用场景：
 *    - 视频编码运动估计
 *    - 图像匹配和识别
 *    - 图像缩放和变换
 *    - 计算机视觉处理
 * 
 * 5. 算法复杂度：
 *    - 时间复杂度：O(n) 线性复杂度
 *    - 空间复杂度：O(1) 常数空间
 *    - 并行度：支持SIMD并行处理
 * 
 * 6. 精度控制：
 *    - 支持不同块大小(8x8, 16x16, 32x32)
 *    - 可配置的计算精度
 *    - 饱和运算处理
 * 
 * 7. 内存管理：
 *    - 对齐内存访问
 *    - 高效的缓存利用
 *    - 最小化内存带宽占用
 */

// =============================================================================
// 函数实现
// =============================================================================

// 函数: void rendering_system_absolute_difference_calculator(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)
void FUN_1806970f0(uint *param_1,int param_2,uint *param_3,int param_4,int *param_5)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auVar13 [16];
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 in_XMM2 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  uint *puStackX_18;
  longlong lStack_48;
  
  iVar1 = _DAT_180bf00b0;
  lStack_48 = 8;
  puStackX_18 = param_3;
  do {
    iVar6 = 0;
    iVar14 = 0;
    iVar16 = 0;
    iVar18 = 0;
    iVar20 = 0;
    lVar12 = 8;
    puVar7 = param_1;
    puVar8 = puStackX_18;
    iVar15 = iVar14;
    iVar17 = iVar16;
    iVar19 = iVar18;
    iVar21 = iVar20;
    do {
      uVar10 = 0;
      if (1 < iVar1) {
        uVar10 = 8;
        auVar22 = pmovzxbd(in_XMM2,ZEXT416(*puVar7));
        auVar13 = pmovzxbd(ZEXT416(*puVar7),ZEXT416(*puVar8));
        auVar23._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        auVar23._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        auVar23._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        auVar23._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(*puVar8),auVar23);
        iVar14 = auVar13._0_4_ + iVar14;
        iVar16 = auVar13._4_4_ + iVar16;
        iVar18 = auVar13._8_4_ + iVar18;
        iVar20 = auVar13._12_4_ + iVar20;
        auVar22 = pmovzxbd(auVar23,ZEXT416(puVar7[1]));
        auVar13 = pmovzxbd(ZEXT416(puVar7[1]),ZEXT416(puVar8[1]));
        in_XMM2._0_4_ = auVar22._0_4_ - auVar13._0_4_;
        in_XMM2._4_4_ = auVar22._4_4_ - auVar13._4_4_;
        in_XMM2._8_4_ = auVar22._8_4_ - auVar13._8_4_;
        in_XMM2._12_4_ = auVar22._12_4_ - auVar13._12_4_;
        auVar13 = pabsd(ZEXT416(puVar8[1]),in_XMM2);
        iVar15 = auVar13._0_4_ + iVar15;
        iVar17 = auVar13._4_4_ + iVar17;
        iVar19 = auVar13._8_4_ + iVar19;
        iVar21 = auVar13._12_4_ + iVar21;
      }
      iVar11 = 0;
      iVar5 = 0;
      if (uVar10 < 8) {
        if (1 < (longlong)(8 - uVar10)) {
          pbVar2 = (byte *)(uVar10 + (longlong)puVar8);
          lVar9 = (6 - uVar10 >> 1) + 1;
          uVar10 = uVar10 + lVar9 * 2;
          do {
            uVar3 = (int)((uint)pbVar2[(longlong)puVar7 - (longlong)puVar8] - (uint)*pbVar2) >> 0x1f
            ;
            iVar11 = iVar11 + (((uint)pbVar2[(longlong)puVar7 - (longlong)puVar8] - (uint)*pbVar2 ^
                               uVar3) - uVar3);
            uVar3 = (uint)(pbVar2 + 2)[((longlong)puVar7 - (longlong)puVar8) + -1] - (uint)pbVar2[1]
            ;
            uVar4 = (int)uVar3 >> 0x1f;
            iVar5 = iVar5 + ((uVar3 ^ uVar4) - uVar4);
            lVar9 = lVar9 + -1;
            pbVar2 = pbVar2 + 2;
          } while (lVar9 != 0);
        }
        if ((longlong)uVar10 < 8) {
          uVar3 = (uint)*(byte *)(uVar10 + (longlong)puVar7) -
                  (uint)*(byte *)(uVar10 + (longlong)puVar8);
          uVar4 = (int)uVar3 >> 0x1f;
          iVar6 = iVar6 + ((uVar3 ^ uVar4) - uVar4);
        }
        iVar6 = iVar6 + iVar5 + iVar11;
      }
      puVar7 = (uint *)((longlong)puVar7 + (longlong)param_2);
      puVar8 = (uint *)((longlong)puVar8 + (longlong)param_4);
      lVar12 = lVar12 + -1;
    } while (lVar12 != 0);
    *param_5 = iVar15 + iVar14 + iVar19 + iVar18 + iVar17 + iVar16 + iVar21 + iVar20 + iVar6;
    param_5 = param_5 + 1;
    puStackX_18 = (uint *)((longlong)puStackX_18 + 1);
    lStack_48 = lStack_48 + -1;
  } while (lStack_48 != 0);
  return;
}



undefined8
FUN_1806972a0(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4,
             undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 8;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(undefined1 (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



undefined4
FUN_180697340(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 8;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(undefined1 (*) [32])(*param_3 + param_4),
                          *(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



undefined8
FUN_1806973c0(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4,
             undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x10;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(undefined1 (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



undefined4
FUN_180697460(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x10;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(undefined1 (*) [32])(*param_3 + param_4),
                          *(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



undefined8
FUN_1806974e0(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4,
             undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],*(undefined1 (*) [32])(*param_3 + param_4));
    auVar4 = vpsadbw_avx2(auVar4,*(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_5 = param_5 + 2;
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



undefined4
FUN_180697580(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(*(undefined1 (*) [32])(*param_3 + param_4),
                          *(undefined1 (*) [32])(*param_1 + param_2));
    param_1 = (undefined1 (*) [32])(*param_1 + param_2 * 2);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4 * 2);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



undefined8
FUN_180697600(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4,
             undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],param_3[1]);
    auVar4 = vpsadbw_avx2(auVar4,param_1[1]);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    param_5 = param_5 + 2;
    param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



undefined4
FUN_180697680(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x20;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(param_3[1],param_1[1]);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



undefined8
FUN_1806976f0(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4,
             undefined1 (*param_5) [32])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x40;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpavgb_avx2(*param_5,*param_3);
    auVar2 = vpsadbw_avx2(auVar4,*param_1);
    auVar4 = vpavgb_avx2(param_5[1],param_3[1]);
    auVar4 = vpsadbw_avx2(auVar4,param_1[1]);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    param_5 = param_5 + 2;
    param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar4,auVar2);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return CONCAT44((int)((ulonglong)param_5 >> 0x20),auVar1._0_4_);
}



undefined4
FUN_180697770(undefined1 (*param_1) [32],int param_2,undefined1 (*param_3) [32],int param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [32];
  longlong lVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  
  lVar3 = 0x40;
  auVar5 = ZEXT832(0) << 0x40;
  do {
    auVar4 = vpsadbw_avx2(*param_3,*param_1);
    auVar2 = vpsadbw_avx2(param_3[1],param_1[1]);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    param_3 = (undefined1 (*) [32])(*param_3 + param_4);
    auVar4 = vpaddd_avx2(auVar2,auVar4);
    auVar5 = vpaddd_avx2(auVar4,auVar5);
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  auVar4 = vpsrldq_avx2(auVar5,8);
  auVar5 = vpaddd_avx2(auVar4,auVar5);
  auVar1 = vpaddd_avx(auVar5._16_16_,auVar5._0_16_);
  return auVar1._0_4_;
}



// 函数: void rendering_system_multi_reference_frame_matcher(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
void FUN_1806977e0(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [16];
  undefined1 auVar3 [32];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 (*pauVar6) [32];
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined1 auVar11 [32];
  undefined1 auVar12 [32];
  
  pauVar6 = (undefined1 (*) [32])param_3[2];
  lVar10 = param_3[1] - (longlong)pauVar6;
  lVar9 = param_3[3] - (longlong)pauVar6;
  auVar12 = ZEXT832(0) << 0x40;
  lVar8 = *param_3 - (longlong)pauVar6;
  lVar7 = 0x20;
  auVar11 = auVar12;
  auVar3 = auVar12;
  auVar4 = auVar12;
  do {
    auVar1 = *param_1;
    auVar5 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar8 + (longlong)pauVar6));
    auVar12 = vpaddd_avx2(auVar5,auVar12);
    auVar5 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar10 + (longlong)pauVar6));
    auVar11 = vpaddd_avx2(auVar5,auVar11);
    auVar5 = vpsadbw_avx2(auVar1,*pauVar6);
    auVar3 = vpaddd_avx2(auVar5,auVar3);
    auVar1 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar9 + (longlong)pauVar6));
    pauVar6 = (undefined1 (*) [32])(*pauVar6 + param_4);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    auVar4 = vpaddd_avx2(auVar1,auVar4);
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  auVar11 = vpslldq_avx2(auVar11,4);
  auVar12 = vpor_avx2(auVar11,auVar12);
  auVar11 = vpslldq_avx2(auVar4,4);
  auVar11 = vpor_avx2(auVar11,auVar3);
  auVar3 = vpunpcklqdq_avx2(auVar12,auVar11);
  auVar12 = vpunpckhqdq_avx2(auVar12,auVar11);
  auVar12 = vpaddd_avx2(auVar12,auVar3);
  auVar2 = vpaddd_avx(auVar12._16_16_,auVar12._0_16_);
  *param_5 = auVar2;
  return;
}



// 函数: void rendering_system_octal_ref_matcher(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
void FUN_1806978b0(undefined1 (*param_1) [32],int param_2,longlong *param_3,int param_4,
                  undefined1 (*param_5) [16])

{
  undefined1 auVar1 [32];
  undefined1 auVar2 [32];
  undefined1 auVar3 [16];
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  undefined1 auVar6 [32];
  undefined1 auVar7 [32];
  undefined1 (*pauVar8) [32];
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined1 auVar13 [32];
  undefined1 auVar14 [32];
  
  pauVar8 = (undefined1 (*) [32])param_3[2];
  lVar12 = param_3[1] - (longlong)pauVar8;
  lVar11 = param_3[3] - (longlong)pauVar8;
  auVar14 = ZEXT832(0) << 0x40;
  lVar10 = *param_3 - (longlong)pauVar8;
  lVar9 = 0x40;
  auVar13 = auVar14;
  auVar4 = auVar14;
  auVar5 = auVar14;
  do {
    auVar1 = *param_1;
    auVar2 = param_1[1];
    auVar6 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar10 + (longlong)pauVar8));
    auVar7 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar10 + 0x20 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar6,auVar14);
    auVar6 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar12 + (longlong)pauVar8));
    auVar14 = vpaddd_avx2(auVar14,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar12 + 0x20 + (longlong)pauVar8));
    auVar13 = vpaddd_avx2(auVar6,auVar13);
    auVar6 = vpsadbw_avx2(auVar1,*pauVar8);
    auVar13 = vpaddd_avx2(auVar13,auVar7);
    auVar7 = vpsadbw_avx2(auVar2,pauVar8[1]);
    auVar4 = vpaddd_avx2(auVar6,auVar4);
    auVar1 = vpsadbw_avx2(auVar1,*(undefined1 (*) [32])(lVar11 + (longlong)pauVar8));
    auVar4 = vpaddd_avx2(auVar4,auVar7);
    auVar2 = vpsadbw_avx2(auVar2,*(undefined1 (*) [32])(lVar11 + 0x20 + (longlong)pauVar8));
    pauVar8 = (undefined1 (*) [32])(*pauVar8 + param_4);
    param_1 = (undefined1 (*) [32])(*param_1 + param_2);
    auVar5 = vpaddd_avx2(auVar1,auVar5);
    auVar5 = vpaddd_avx2(auVar5,auVar2);
    lVar9 = lVar9 + -1;
  } while (lVar9 != 0);
  auVar13 = vpslldq_avx2(auVar13,4);
  auVar14 = vpor_avx2(auVar13,auVar14);
  auVar13 = vpslldq_avx2(auVar5,4);
  auVar13 = vpor_avx2(auVar13,auVar4);
  auVar4 = vpunpcklqdq_avx2(auVar14,auVar13);
  auVar14 = vpunpckhqdq_avx2(auVar14,auVar13);
  auVar14 = vpaddd_avx2(auVar14,auVar4);
  auVar3 = vpaddd_avx(auVar14._16_16_,auVar14._0_16_);
  *param_5 = auVar3;
  return;
}



// 函数: void rendering_system_error_handler(void)
void FUN_1806979e0(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}



// 函数: void rendering_system_bilinear_interpolator(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
void FUN_180697ae0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,uint param_8,int param_9)

{
  uint uVar1;
  int iVar2;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  ulonglong uVar6;
  
  param_1 = param_1 + -3;
  if (0 < (int)param_8) {
    uVar6 = (ulonglong)param_8;
    do {
      lVar5 = 0;
      uVar1 = param_6;
      if (0 < (longlong)param_9) {
        do {
          psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + param_5);
          pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + param_1);
          iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                       (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                       (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                       (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                       (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            if (iVar2 < 0) {
              iVar2 = 0;
            }
          }
          else {
            iVar2 = 0xff;
          }
          *(char *)(lVar5 + param_3) = (char)iVar2;
          lVar5 = lVar5 + 1;
          uVar1 = uVar1 + param_7;
        } while (lVar5 < param_9);
      }
      param_1 = param_1 + param_2;
      param_3 = param_3 + param_4;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}



// 函数: void rendering_system_interpolation_optimized(void)
void FUN_180697b09(void)

{
  uint uVar1;
  uint in_EAX;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  longlong lVar5;
  longlong unaff_R12;
  ulonglong uVar6;
  longlong unaff_R15;
  longlong in_stack_00000048;
  uint in_stack_00000050;
  int in_stack_00000058;
  
  uVar6 = (ulonglong)in_EAX;
  do {
    lVar5 = 0;
    uVar1 = in_stack_00000050;
    if (0 < unaff_RDI) {
      do {
        psVar4 = (short *)((ulonglong)(uVar1 & 0xf) * 0x10 + in_stack_00000048);
        pbVar3 = (byte *)(((longlong)(int)uVar1 >> 4) + unaff_RBP);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (int)psVar4[7] * (uint)pbVar3[7] + (int)psVar4[6] * (uint)pbVar3[6] +
                     (int)psVar4[5] * (uint)pbVar3[5] + (int)psVar4[4] * (uint)pbVar3[4] +
                     (int)psVar4[3] * (uint)pbVar3[3] + (int)psVar4[2] * (uint)pbVar3[2] +
                     (int)psVar4[1] * (uint)pbVar3[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          if (iVar2 < 0) {
            iVar2 = 0;
          }
        }
        else {
          iVar2 = 0xff;
        }
        *(char *)(lVar5 + unaff_RBX) = (char)iVar2;
        lVar5 = lVar5 + 1;
        uVar1 = uVar1 + in_stack_00000058;
      } while (lVar5 < unaff_RDI);
    }
    unaff_RBP = unaff_RBP + unaff_R12;
    unaff_RBX = unaff_RBX + unaff_R15;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}



// 函数: void rendering_system_empty_function(void)
void FUN_180697c23(void)

{
  return;
}



// 函数: void rendering_system_advanced_interpolator(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
void FUN_180697c30(longlong param_1,longlong param_2,undefined1 *param_3,longlong param_4,
                  longlong param_5,uint param_6,int param_7,uint param_8,int param_9)

{
  undefined1 uVar1;
  int iVar2;
  longlong lVar3;
  byte *pbVar4;
  short *psVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulonglong uStackX_8;
  undefined1 *puStackX_18;
  
  param_1 = param_1 + param_2 * -3;
  uStackX_8 = (ulonglong)param_8;
  puStackX_18 = param_3;
  if (0 < (int)param_8) {
    do {
      lVar3 = (longlong)param_9;
      if (0 < lVar3) {
        puVar6 = puStackX_18;
        uVar7 = param_6;
        do {
          psVar5 = (short *)((ulonglong)(uVar7 & 0xf) * 0x10 + param_5);
          pbVar4 = (byte *)(((longlong)(int)uVar7 >> 4) * param_2 + param_1);
          iVar2 = (int)((uint)*pbVar4 * (int)*psVar5 +
                       (uint)pbVar4[param_2 * 2] * (int)psVar5[2] +
                       (uint)pbVar4[param_2 * 4] * (int)psVar5[4] +
                       (uint)pbVar4[param_2 * 5] * (int)psVar5[5] +
                       (uint)pbVar4[param_2 * 6] * (int)psVar5[6] +
                       (uint)pbVar4[param_2 * 7] * (int)psVar5[7] +
                       (uint)pbVar4[param_2 * 3] * (int)psVar5[3] +
                       (uint)pbVar4[param_2] * (int)psVar5[1] + 0x40) >> 7;
          if (iVar2 < 0x100) {
            uVar1 = (undefined1)iVar2;
            if (iVar2 < 0) {
              uVar1 = 0;
            }
          }
          else {
            uVar1 = 0xff;
          }
          *puVar6 = uVar1;
          uVar7 = uVar7 + param_7;
          puVar6 = puVar6 + param_4;
          lVar3 = lVar3 + -1;
        } while (lVar3 != 0);
      }
      puStackX_18 = puStackX_18 + 1;
      param_1 = param_1 + 1;
      uStackX_8 = uStackX_8 - 1;
    } while (uStackX_8 != 0);
  }
  return;
}



// 函数: void rendering_system_interpolation_accelerated(void)
void FUN_180697c6b(void)

{
  undefined1 uVar1;
  int iVar2;
  ulonglong in_RAX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte *pbVar3;
  short *psVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong unaff_R13;
  longlong unaff_R14;
  undefined1 *unaff_R15;
  ulonglong uStack0000000000000050;
  undefined1 *in_stack_00000060;
  longlong in_stack_00000070;
  uint in_stack_00000078;
  int in_stack_00000080;
  int in_stack_00000090;
  
  uVar6 = in_RAX & 0xffffffff;
  uStack0000000000000050 = in_RAX;
  do {
    if (0 < unaff_R13) {
      uVar5 = in_stack_00000078;
      do {
        psVar4 = (short *)((ulonglong)(uVar5 & 0xf) * 0x10 + in_stack_00000070);
        pbVar3 = (byte *)(((longlong)(int)uVar5 >> 4) * unaff_RDI + unaff_R14);
        iVar2 = (int)((uint)*pbVar3 * (int)*psVar4 +
                     (uint)pbVar3[unaff_RDI * 2] * (int)psVar4[2] +
                     (uint)pbVar3[unaff_RDI * 4] * (int)psVar4[4] +
                     (uint)pbVar3[unaff_RDI * 5] * (int)psVar4[5] +
                     (uint)pbVar3[unaff_RDI * 6] * (int)psVar4[6] +
                     (uint)pbVar3[unaff_RDI * 7] * (int)psVar4[7] +
                     (uint)pbVar3[unaff_RDI * 3] * (int)psVar4[3] +
                     (uint)pbVar3[unaff_RDI] * (int)psVar4[1] + 0x40) >> 7;
        if (iVar2 < 0x100) {
          uVar1 = (undefined1)iVar2;
          if (iVar2 < 0) {
            uVar1 = 0;
          }
        }
        else {
          uVar1 = 0xff;
        }
        *unaff_R15 = uVar1;
        uVar5 = uVar5 + in_stack_00000080;
        unaff_R15 = unaff_R15 + unaff_RBP;
        unaff_R13 = unaff_R13 + -1;
      } while (unaff_R13 != 0);
      unaff_R13 = (longlong)in_stack_00000090;
      uVar6 = uStack0000000000000050;
      unaff_R15 = in_stack_00000060;
    }
    unaff_R15 = unaff_R15 + 1;
    unaff_R14 = unaff_R14 + 1;
    uVar6 = uVar6 - 1;
    uStack0000000000000050 = uVar6;
    in_stack_00000060 = unaff_R15;
  } while (uVar6 != 0);
  return;
}



// 函数: void rendering_system_cleanup_function(void)
void FUN_180697dc2(void)

{
  return;
}


// =============================================================================
// 模块信息
// =============================================================================

/*
 * 模块名称: 渲染系统图像处理与SIMD优化模块
 * 文件标识: 03_rendering_part730.c
 * 函数数量: 10个主要函数
 * 
 * 主要功能:
 * 1. 图像绝对差计算和优化
 * 2. 多种块大小的SAD计算(8x8, 16x16, 32x32)
 * 3. 多参考帧块匹配算法
 * 4. 双线性插值和图像缩放
 * 5. SIMD向量化处理优化
 * 
 * 技术特点:
 * - 使用AVX2指令集进行SIMD优化
 * - 支持多种图像处理算法
 * - 高效的内存访问和处理
 * - 适用于视频编码和图像处理应用
 * 
 * 应用领域:
 * - 视频压缩和编码
 * - 图像匹配和识别
 * - 计算机视觉处理
 * - 实时图像处理系统
 */