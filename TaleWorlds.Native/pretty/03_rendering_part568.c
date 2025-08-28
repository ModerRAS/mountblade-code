/* SystemController - SystemCore_StateProcessor0 的语义化别名 */
#define SystemController SystemCore_StateProcessor0

/**
 * @file 03_rendering_part568.c
 * @brief 渲染系统高级数学计算和矩阵变换处理器
 * 
 * 本文件包含渲染系统中的高级数学计算功能，主要涉及：
 * - 向量标准化和归一化处理
 * - 矩阵变换和坐标系统转换
 * - 3D空间中的角度和距离计算
 * - 浮点数精度优化和数值稳定性处理
 * - 渲染参数的动态调整和优化
 * 
 * 主要功能：处理3D渲染中的复杂数学运算，包括向量变换、矩阵运算、
 * 角度标准化等，为渲染系统提供高精度的数学计算支持。
 * 
 * @version 1.0
 * @date 2025-08-28
 * @author Claude Code
 */

#include "TaleWorlds.Native.Split.h"

/* ============================================================================
 * 常量定义 - 渲染系统数学计算常量
 * ============================================================================ */

#define PI 3.1415927f                              // 圆周率常量
#define TWO_PI 6.2831855f                          // 2倍圆周率
#define NORMALIZATION_THRESHOLD_LOW 0.98010004f   // 标准化阈值下限
#define NORMALIZATION_THRESHOLD_HIGH 1.0201f      // 标准化阈值上限
#define FLOAT_MIN_NORMAL 1.1754944e-38f           // 最小标准化浮点数
#define FLOAT_MAX 3.4028235e+38f                  // 最大浮点数
#define EPSILON 1e-07f                              // 浮点数比较精度
#define VERY_SMALL_EPSILON 1e-09f                  // 极小浮点数精度
#define INFINITY_FLOAT -1e+30f                     // 浮点数无穷大
#define NORMALIZATION_FACTOR 0.5f                  // 标准化因子
#define SCALE_FACTOR_100 100.0f                    // 100倍缩放因子
#define ANGLE_SCALE_FACTOR 17.5f                   // 角度缩放因子
#define DISTANCE_SCALE_FACTOR 1.25f                // 距离缩放因子
#define VECTOR_SCALE_FACTOR 0.2f                   // 向量缩放因子
#define MAX_FLOAT_VALUE 0x7f7fffff                 // 最大浮点数值

/**
 * @brief 渲染系统高级数学计算器
 * @details 执行渲染系统中的高级数学计算和矩阵变换操作
 * 
 * 功能：
 * - 执行向量的标准化和归一化处理
 * - 处理矩阵变换和坐标系统转换
 * - 计算3D空间中的角度和距离
 * - 优化浮点数精度和数值稳定性
 * - 动态调整渲染参数
 * 
 * @param param_1 渲染上下文指针
 * @param param_2 渲染参数数据
 * @return 无返回值
 * 
 * @note 本函数包含复杂的数学运算，涉及SIMD指令和优化算法
 */
void rendering_system_advanced_math_calculator(int64_t param_1, uint64_t param_2)
{
  /* ============================================================================
   * 变量声明区域
   * ============================================================================ */
  
  // 基础变量声明
  int iVar1;                                    // 整数临时变量，用于循环计数和条件判断
  float fVar2, fVar3, fVar4;                     // 浮点数临时变量，用于存储中间计算结果
  uint64_t uVar5, uVar6, uVar7, uVar8;        // 8位未定义变量，用于数据传输和存储
  float fVar9, fVar10, fVar11;                   // 浮点数计算变量，用于向量运算
  float *pfVar12;                                // 浮点数指针，指向渲染数据数组
  int64_t lVar13;                               // 长整型临时变量，用于内存地址计算
  
  // 寄存器相关变量
  int64_t unaff_RBX;                           // RBX寄存器值，存储渲染对象指针
  float *unaff_RBP;                             // RBP寄存器值，作为栈基址指针
  char unaff_R13B;                              // R13B寄存器值，用于索引计算
  int64_t unaff_R14;                           // R14寄存器值，存储渲染上下文
  
  // SIMD和数学计算相关变量
  float in_XMM1_Da;                             // XMM1寄存器值，用于SIMD计算
  float fVar14, fVar15, fVar16;                 // 浮点数计算变量，用于向量和矩阵运算
  int8_t in_XMM2 [16];                      // XMM2寄存器数组，用于SIMD数据传输
  int8_t auVar17 [16];                      // 计算结果数组，存储SIMD运算结果
  
  // 主要计算变量
  float fVar18, fVar19, fVar20;                  // 主要浮点数计算变量，用于距离和角度计算
  float fVar21, fVar22, fVar23;                  // 向量和矩阵计算变量
  float fVar24, fVar25, fVar26;                  // 距离和角度计算变量
  float fVar27, fVar28, fVar29;                  // 坐标变换变量
  float fVar30, fVar31;                          // 最终结果变量，存储计算输出
  
  // 栈变量声明
  float fStack0000000000000030;                 // 栈浮点数变量1，存储矩阵元素
  float fStack0000000000000034;                 // 栈浮点数变量2，存储矩阵元素
  float fStack0000000000000038;                 // 栈浮点数变量3，存储矩阵元素
  int32_t uStack000000000000003c;            // 栈未定义4位变量，用于数据对齐
  
  // 输入栈变量
  float in_stack_00000040;                      // 输入栈浮点数1，存储向量X分量
  int in_stack_00000048;                         // 输入栈整数，存储索引值
  float in_stack_00000050;                      // 输入栈浮点数2，存储缩放因子
  float in_stack_00000060;                      // 输入栈浮点数3，存储向量X分量
  float fStack0000000000000064;                 // 栈浮点数变量4，存储向量Y分量
  float in_stack_00000068;                      // 输入栈浮点数4，存储向量Y分量
  float fStack000000000000006c;                 // 栈浮点数变量5，存储向量Z分量
  float in_stack_00000070;                      // 输入栈浮点数5，存储向量X分量
  float fStack0000000000000074;                 // 栈浮点数变量6，存储向量Y分量
  float in_stack_00000078;                      // 输入栈浮点数6，存储向量Z分量
  float fStack000000000000007c;                 // 栈浮点数变量7，存储向量W分量
  
  /* ============================================================================
   * 主要计算逻辑开始
   * ============================================================================ */
  
  // 第一阶段：SIMD数据初始化和平方根计算
  // 从XMM2寄存器复制高位数据到结果数组
  auVar17._4_12_ = in_XMM2._4_12_;
  // 计算平方根：sqrt(XMM2的低32位 + XMM1的值)
  auVar17._0_4_ = SQRT(in_XMM2._0_4_ + in_XMM1_Da);
  // 调用渲染数据获取函数，返回浮点数数组指针
  pfVar12 = (float *)FUN_180535610(param_1,param_2,auVar17._0_8_);
  
  // 第二阶段：从渲染上下文提取数据指针
  // 从参数1的0x30偏移处获取第一个8位数据
  uVar5 = *(uint64_t *)(param_1 + 0x30);
  // 从参数1的0x38偏移处获取第二个8位数据
  uVar6 = *(uint64_t *)(param_1 + 0x38);
  
  // 第三阶段：从渲染数据数组加载向量分量
  // 加载第一个向量的各个分量
  in_stack_00000040 = pfVar12[4];                // 向量1的X分量
  fStack0000000000000074 = pfVar12[5];          // 向量1的Y分量
  in_stack_00000078 = pfVar12[6];                // 向量1的Z分量
  fStack000000000000007c = pfVar12[7];          // 向量1的W分量
  
  // 加载第二个向量的各个分量
  fVar15 = pfVar12[8];                           // 向量2的X分量
  fVar21 = pfVar12[9];                           // 向量2的Y分量
  fVar29 = pfVar12[10];                          // 向量2的Z分量
  fVar23 = pfVar12[0xb];                         // 向量2的W分量
  
  // 加载第三个向量的各个分量
  in_stack_00000060 = *pfVar12;                  // 向量3的X分量
  fStack0000000000000064 = pfVar12[1];           // 向量3的Y分量
  in_stack_00000068 = pfVar12[2];                // 向量3的Z分量
  fStack000000000000006c = pfVar12[3];           // 向量3的W分量
  *(uint64_t *)(unaff_RBP + -0x1c) = uVar5;
  *(uint64_t *)(unaff_RBP + -0x1a) = uVar6;
  *(uint64_t *)(unaff_RBP + -0x10) = uVar5;
  *(uint64_t *)(unaff_RBP + -0xe) = uVar6;
  unaff_RBP[-0x20] = fVar15;
  unaff_RBP[-0x1f] = fVar21;
  unaff_RBP[-0x1e] = fVar29;
  unaff_RBP[-0x1d] = fVar23;
  fVar31 = unaff_RBP[-0x1f];
  fVar25 = unaff_RBP[-0x20];
  fVar18 = in_stack_00000040 * in_stack_00000040 + fStack0000000000000074 * fStack0000000000000074 +
           in_stack_00000078 * in_stack_00000078;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  unaff_RBP[-0x14] = fVar15;
  unaff_RBP[-0x13] = fVar21;
  unaff_RBP[-0x12] = fVar29;
  unaff_RBP[-0x11] = fVar23;
  if ((fVar18 <= 0.98010004) || (1.0201 <= fVar18)) {
LAB_18057aad4:
    fVar23 = unaff_RBP[-0x1d];
    auVar17 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
    fVar15 = auVar17._0_4_;
    fVar21 = fVar15 * 0.5 * (3.0 - fVar18 * fVar15 * fVar15);
    in_stack_00000040 = in_stack_00000040 * fVar21;
    fVar15 = fVar25 * fVar25 + fVar31 * fVar31 + fVar29 * fVar29;
    fStack0000000000000074 = fStack0000000000000074 * fVar21;
    in_stack_00000078 = in_stack_00000078 * fVar21;
    auVar17 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar21 = auVar17._0_4_;
    fVar26 = unaff_RBP[-8];
    fVar27 = unaff_RBP[-7];
    fVar28 = unaff_RBP[-6];
    fVar20 = unaff_RBP[-5];
    fVar18 = fVar21 * 0.5 * (3.0 - fVar15 * fVar21 * fVar21);
    fVar15 = fVar25 * fVar18;
    fVar21 = fVar31 * fVar18;
    fVar29 = fVar29 * fVar18;
    unaff_RBP[-0x14] = fVar15;
    unaff_RBP[-0x13] = fVar21;
    unaff_RBP[-0x12] = fVar29;
    unaff_RBP[-0x11] = fVar23;
    unaff_RBP[-0x20] = fVar15;
    unaff_RBP[-0x1f] = fVar21;
    unaff_RBP[-0x1e] = fVar29;
    unaff_RBP[-0x1d] = fVar23;
    fVar31 = fVar21;
    fVar25 = fVar15;
  }
  else {
    fVar14 = fVar25 * fVar25 + fVar31 * fVar31 + fVar29 * fVar29;
    if ((fVar14 <= 0.98010004) ||
       (fVar26 = in_stack_00000060, fVar27 = fStack0000000000000064, fVar28 = in_stack_00000068,
       fVar20 = fStack000000000000006c, 1.0201 <= fVar14)) goto LAB_18057aad4;
  }
  in_stack_00000070 = in_stack_00000040;
  if (*(float *)(unaff_RBX + 0x68) == -1e+30) {
    uVar5 = *(uint64_t *)(param_1 + 0x30);
    uVar6 = *(uint64_t *)(param_1 + 0x38);
    *(float *)(unaff_RBX + 0x98) = fVar26;
    *(float *)(unaff_RBX + 0x9c) = fVar27;
    *(float *)(unaff_RBX + 0xa0) = fVar28;
    *(float *)(unaff_RBX + 0xa4) = fVar20;
    *(float *)(unaff_RBX + 200) = fVar26;
    *(float *)(unaff_RBX + 0xcc) = fVar27;
    *(float *)(unaff_RBX + 0xd0) = fVar28;
    *(float *)(unaff_RBX + 0xd4) = fVar20;
    *(float *)(unaff_RBX + 0xa8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xac) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xb0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xb4) = fStack000000000000007c;
    *(float *)(unaff_RBX + 0xd8) = in_stack_00000040;
    *(float *)(unaff_RBX + 0xdc) = fStack0000000000000074;
    *(float *)(unaff_RBX + 0xe0) = in_stack_00000078;
    *(float *)(unaff_RBX + 0xe4) = fStack000000000000007c;
    *(uint64_t *)(unaff_RBX + 0x68) = uVar5;
    *(uint64_t *)(unaff_RBX + 0x70) = uVar6;
    *(float *)(unaff_RBX + 0xb8) = fVar15;
    *(float *)(unaff_RBX + 0xbc) = fVar21;
    *(float *)(unaff_RBX + 0xc0) = fVar29;
    *(float *)(unaff_RBX + 0xc4) = fVar23;
    *(float *)(unaff_RBX + 0xe8) = fVar15;
    *(float *)(unaff_RBX + 0xec) = fVar21;
    *(float *)(unaff_RBX + 0xf0) = fVar29;
    *(float *)(unaff_RBX + 0xf4) = fVar23;
    fVar18 = fVar29;
    goto LAB_18057b795;
  }
  if (*(int *)(unaff_RBX + 0x104) == 0) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 200);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xcc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xd0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xd4);
  }
  else if (*(int *)(unaff_RBX + 0x104) == 1) {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xd8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xdc);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xe0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xe4);
  }
  else {
    fStack0000000000000030 = *(float *)(unaff_RBX + 0xe8);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0xec);
    fStack0000000000000038 = *(float *)(unaff_RBX + 0xf0);
    uStack000000000000003c = *(int32_t *)(unaff_RBX + 0xf4);
  }
  FUN_1801c1720(unaff_RBX + 0x98,unaff_RBP + -0x14);
  FUN_1801c1720(&stack0x00000060,unaff_RBP + -0x10);
  fVar31 = unaff_RBP[-0xe] - unaff_RBP[-0x12];
  if (fVar31 <= 3.1415927) {
    if (fVar31 < -3.1415927) {
      fVar31 = fVar31 + 6.2831855;
    }
  }
  else {
    fVar31 = fVar31 + -6.2831855;
  }
  fVar25 = *(float *)(unaff_RBX + 0xf8);
  lVar13 = *(int64_t *)(*(int64_t *)(unaff_R14 + 0x10) + 0x168);
  fVar23 = unaff_RBP[-0x1c] - *(float *)(lVar13 + 0xa0);
  fVar14 = unaff_RBP[-0x1b] - *(float *)(lVar13 + 0xa4);
  fVar15 = *(float *)(unaff_RBX + 0x68);
  fStack0000000000000038 =
       (fStack0000000000000038 * fVar25 + *(float *)(unaff_RBX + 0x70)) - unaff_RBP[-0x1a];
  fVar21 = fVar23 * fVar23 + fVar14 * fVar14;
  iVar1 = *(int *)(unaff_RBX + 0x104);
  fVar21 = (float)(fVar21 <= 1.1754944e-38) * 1.1754944e-38 + fVar21;
  auVar17 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar29 = auVar17._0_4_;
  fVar18 = fVar29 * 0.5 * (3.0 - fVar21 * fVar29 * fVar29);
  fVar21 = *(float *)(unaff_RBX + 0xfc);
  fVar29 = *(float *)(unaff_RBX + 0x6c);
  uVar5 = *(uint64_t *)(unaff_RBX + 0xe0);
  uVar6 = *(uint64_t *)(unaff_RBX + 200);
  uVar7 = *(uint64_t *)(unaff_RBX + 0xd0);
  *(uint64_t *)(unaff_RBP + 0x10) = *(uint64_t *)(unaff_RBX + 0xd8);
  *(uint64_t *)(unaff_RBP + 0x12) = uVar5;
  fStack0000000000000030 =
       (fStack0000000000000030 * fVar25 + fVar15 +
       fVar18 * fVar23 * ABS(fVar31) * 0.2 * fVar21 * (1.0 / fVar25)) - unaff_RBP[-0x1c];
  fStack0000000000000034 =
       (fStack0000000000000034 * fVar25 + fVar29 +
       fVar18 * fVar14 * ABS(fVar31) * 0.2 * fVar21 * (1.0 / fVar25)) - unaff_RBP[-0x1b];
  *(uint64_t *)(unaff_RBP + 0xc) = uVar6;
  *(uint64_t *)(unaff_RBP + 0xe) = uVar7;
  fVar31 = *(float *)(unaff_RBX + 0xec);
  fVar25 = *(float *)(unaff_RBX + 0xf0);
  fVar15 = *(float *)(unaff_RBX + 0xf4);
  uStack000000000000003c = 0x7f7fffff;
  unaff_RBP[0x14] = *(float *)(unaff_RBX + 0xe8);
  unaff_RBP[0x15] = fVar31;
  unaff_RBP[0x16] = fVar25;
  unaff_RBP[0x17] = fVar15;
  if (iVar1 == 0) {
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    fVar31 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    if (fVar31 <= 1e-09) {
      fVar31 = 0.0;
      fVar15 = 0.0;
      fVar25 = 1.0;
    }
    else {
      fVar31 = 1.0 / SQRT(fVar31);
      fVar15 = fStack0000000000000030 * fVar31;
      fVar25 = unaff_RBP[0xd] * fVar31;
      fVar31 = unaff_RBP[0xe] * fVar31;
    }
    fStack0000000000000030 = unaff_RBP[0x15] * fVar31 - unaff_RBP[0x16] * fVar25;
    unaff_RBP[0xe] = fVar31;
    unaff_RBP[0xd] = fVar25;
    fStack0000000000000034 = unaff_RBP[0x16] * fVar15 - unaff_RBP[0x14] * fVar31;
    unaff_RBP[0xc] = fVar15;
    fStack0000000000000038 = unaff_RBP[0x14] * fVar25 - unaff_RBP[0x15] * fVar15;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x10);
      fStack0000000000000034 = unaff_RBP[0x10] * unaff_RBP[0xe] - unaff_RBP[0x12] * unaff_RBP[0xc];
      fStack0000000000000030 = unaff_RBP[0x12] * unaff_RBP[0xd] - unaff_RBP[0x11] * unaff_RBP[0xe];
      fStack0000000000000038 = unaff_RBP[0x11] * unaff_RBP[0xc] - unaff_RBP[0x10] * unaff_RBP[0xd];
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      fVar25 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar31 = auVar17._0_4_;
      fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar31;
      unaff_RBP[0x14] = fVar31 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar31;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xe0) * fVar25 - *(float *)(unaff_RBX + 0xdc) * fVar31;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xd8) * fVar31 - *(float *)(unaff_RBX + 0xe0) * fVar15;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xdc) * fVar15 - *(float *)(unaff_RBX + 0xd8) * fVar25;
      uStack000000000000003c = 0x7f7fffff;
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      func_0x00018023a1e0(unaff_RBP + 0x14);
      fStack0000000000000030 = unaff_RBP[0x15] * unaff_RBP[0xe] - unaff_RBP[0x16] * unaff_RBP[0xd];
      fStack0000000000000038 = unaff_RBP[0x14] * unaff_RBP[0xd] - unaff_RBP[0x15] * unaff_RBP[0xc];
      fStack0000000000000034 = unaff_RBP[0x16] * unaff_RBP[0xc] - unaff_RBP[0x14] * unaff_RBP[0xe];
      unaff_RBP[0x10] = fStack0000000000000030;
      unaff_RBP[0x11] = fStack0000000000000034;
      unaff_RBP[0x12] = fStack0000000000000038;
      unaff_RBP[0x13] = 3.4028235e+38;
      fVar31 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar25 = auVar17._0_4_;
      fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
      unaff_RBP[0x10] = fStack0000000000000030 * fVar31;
      unaff_RBP[0x11] = unaff_RBP[0x11] * fVar31;
      unaff_RBP[0x12] = unaff_RBP[0x12] * fVar31;
    }
  }
  else if (iVar1 == 1) {
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x10);
    fVar31 = unaff_RBP[0x12];
    fVar25 = unaff_RBP[0x11];
    fVar15 = unaff_RBP[0x10];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xd] - fVar25 * unaff_RBP[0xe];
    fStack0000000000000034 = fVar15 * unaff_RBP[0xe] - fVar31 * unaff_RBP[0xc];
    fStack0000000000000038 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xd];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x14);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar31 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
LAB_18057b6d9:
      auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
      fVar25 = auVar17._0_4_;
      fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
      unaff_RBP[0xd] = unaff_RBP[0xd] * fVar31;
      unaff_RBP[0xc] = fVar31 * fStack0000000000000030;
      unaff_RBP[0xe] = unaff_RBP[0xe] * fVar31;
    }
    else {
      fStack0000000000000030 =
           *(float *)(unaff_RBX + 0xf0) * fVar25 - *(float *)(unaff_RBX + 0xec) * fVar31;
      fStack0000000000000034 =
           *(float *)(unaff_RBX + 0xe8) * fVar31 - *(float *)(unaff_RBX + 0xf0) * fVar15;
      fStack0000000000000038 =
           *(float *)(unaff_RBX + 0xec) * fVar15 - *(float *)(unaff_RBX + 0xe8) * fVar25;
      uStack000000000000003c = 0x7f7fffff;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      func_0x00018023a1e0(unaff_RBP + 0xc);
      fStack0000000000000034 = unaff_RBP[0x10] * unaff_RBP[0xe] - unaff_RBP[0x12] * unaff_RBP[0xc];
      fStack0000000000000030 = unaff_RBP[0x12] * unaff_RBP[0xd] - unaff_RBP[0x11] * unaff_RBP[0xe];
      fStack0000000000000038 = unaff_RBP[0x11] * unaff_RBP[0xc] - unaff_RBP[0x10] * unaff_RBP[0xd];
      unaff_RBP[0x14] = fStack0000000000000030;
      unaff_RBP[0x15] = fStack0000000000000034;
      unaff_RBP[0x16] = fStack0000000000000038;
      unaff_RBP[0x17] = 3.4028235e+38;
      fVar25 = fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000038 * fStack0000000000000038;
      auVar17 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
      fVar31 = auVar17._0_4_;
      fVar31 = fVar31 * 0.5 * (3.0 - fVar25 * fVar31 * fVar31);
      unaff_RBP[0x15] = unaff_RBP[0x15] * fVar31;
      unaff_RBP[0x14] = fVar31 * fStack0000000000000030;
      unaff_RBP[0x16] = unaff_RBP[0x16] * fVar31;
    }
  }
  else {
    unaff_RBP[0x14] = fStack0000000000000030;
    unaff_RBP[0x15] = fStack0000000000000034;
    unaff_RBP[0x16] = fStack0000000000000038;
    unaff_RBP[0x17] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0x14);
    fVar31 = unaff_RBP[0x15];
    fVar25 = unaff_RBP[0x16];
    fVar15 = unaff_RBP[0x14];
    fStack0000000000000030 = fVar31 * unaff_RBP[0xe] - fVar25 * unaff_RBP[0xd];
    fStack0000000000000034 = fVar25 * unaff_RBP[0xc] - fVar15 * unaff_RBP[0xe];
    fStack0000000000000038 = fVar15 * unaff_RBP[0xd] - fVar31 * unaff_RBP[0xc];
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    if (1e-07 <= fStack0000000000000030 * fStack0000000000000030 +
                 fStack0000000000000034 * fStack0000000000000034 +
                 fStack0000000000000038 * fStack0000000000000038) {
      func_0x00018023a1e0(unaff_RBP + 0x10);
      fStack0000000000000030 = unaff_RBP[0x11] * unaff_RBP[0x16] - unaff_RBP[0x12] * unaff_RBP[0x15]
      ;
      fStack0000000000000038 = unaff_RBP[0x10] * unaff_RBP[0x15] - unaff_RBP[0x11] * unaff_RBP[0x14]
      ;
      fStack0000000000000034 = unaff_RBP[0x12] * unaff_RBP[0x14] - unaff_RBP[0x10] * unaff_RBP[0x16]
      ;
      unaff_RBP[0xc] = fStack0000000000000030;
      unaff_RBP[0xd] = fStack0000000000000034;
      unaff_RBP[0xe] = fStack0000000000000038;
      unaff_RBP[0xf] = 3.4028235e+38;
      fVar31 = fStack0000000000000030 * fStack0000000000000030 +
               fStack0000000000000034 * fStack0000000000000034 +
               fStack0000000000000038 * fStack0000000000000038;
      goto LAB_18057b6d9;
    }
    fStack0000000000000030 =
         *(float *)(unaff_RBX + 0xdc) * fVar25 - *(float *)(unaff_RBX + 0xe0) * fVar31;
    fStack0000000000000038 =
         *(float *)(unaff_RBX + 0xd8) * fVar31 - *(float *)(unaff_RBX + 0xdc) * fVar15;
    fStack0000000000000034 =
         *(float *)(unaff_RBX + 0xe0) * fVar15 - *(float *)(unaff_RBX + 0xd8) * fVar25;
    uStack000000000000003c = 0x7f7fffff;
    unaff_RBP[0xc] = fStack0000000000000030;
    unaff_RBP[0xd] = fStack0000000000000034;
    unaff_RBP[0xe] = fStack0000000000000038;
    unaff_RBP[0xf] = 3.4028235e+38;
    func_0x00018023a1e0(unaff_RBP + 0xc);
    fStack0000000000000030 = unaff_RBP[0x15] * unaff_RBP[0xe] - unaff_RBP[0x16] * unaff_RBP[0xd];
    fStack0000000000000038 = unaff_RBP[0x14] * unaff_RBP[0xd] - unaff_RBP[0x15] * unaff_RBP[0xc];
    fStack0000000000000034 = unaff_RBP[0x16] * unaff_RBP[0xc] - unaff_RBP[0x14] * unaff_RBP[0xe];
    unaff_RBP[0x10] = fStack0000000000000030;
    unaff_RBP[0x11] = fStack0000000000000034;
    unaff_RBP[0x12] = fStack0000000000000038;
    unaff_RBP[0x13] = 3.4028235e+38;
    fVar31 = fStack0000000000000030 * fStack0000000000000030 +
             fStack0000000000000034 * fStack0000000000000034 +
             fStack0000000000000038 * fStack0000000000000038;
    auVar17 = rsqrtss(ZEXT416((uint)fVar31),ZEXT416((uint)fVar31));
    fVar25 = auVar17._0_4_;
    fVar31 = fVar25 * 0.5 * (3.0 - fVar31 * fVar25 * fVar25);
    unaff_RBP[0x10] = fStack0000000000000030 * fVar31;
    unaff_RBP[0x11] = unaff_RBP[0x11] * fVar31;
    unaff_RBP[0x12] = unaff_RBP[0x12] * fVar31;
  }
  uStack000000000000003c = 0x7f7fffff;
  uVar5 = *(uint64_t *)(unaff_RBP + 0xe);
  uVar6 = *(uint64_t *)(unaff_RBP + 0x10);
  uVar7 = *(uint64_t *)(unaff_RBP + 0x12);
  fVar15 = unaff_RBP[-0x20];
  fVar21 = unaff_RBP[-0x1f];
  fVar29 = unaff_RBP[-0x1e];
  fVar23 = unaff_RBP[-0x1d];
  fVar18 = unaff_RBP[-0x1e];
  fVar31 = unaff_RBP[-0x1f];
  fVar25 = unaff_RBP[-0x20];
  *(uint64_t *)(unaff_RBX + 200) = *(uint64_t *)(unaff_RBP + 0xc);
  *(uint64_t *)(unaff_RBX + 0xd0) = uVar5;
  uVar5 = *(uint64_t *)(unaff_RBP + 0x14);
  uVar8 = *(uint64_t *)(unaff_RBP + 0x16);
  *(uint64_t *)(unaff_RBX + 0xd8) = uVar6;
  *(uint64_t *)(unaff_RBX + 0xe0) = uVar7;
  *(uint64_t *)(unaff_RBX + 0xe8) = uVar5;
  *(uint64_t *)(unaff_RBX + 0xf0) = uVar8;
  *(uint64_t *)(unaff_RBP + -0x10) = *(uint64_t *)(unaff_RBP + -0x1c);
  *(uint64_t *)(unaff_RBP + -0xe) = *(uint64_t *)(unaff_RBP + -0x1a);
  unaff_RBP[-0x14] = fVar15;
  unaff_RBP[-0x13] = fVar21;
  unaff_RBP[-0x12] = fVar29;
  unaff_RBP[-0x11] = fVar23;
  unaff_RBP[-8] = in_stack_00000060;
  unaff_RBP[-7] = fStack0000000000000064;
  unaff_RBP[-6] = in_stack_00000068;
  unaff_RBP[-5] = fStack000000000000006c;
  fVar26 = in_stack_00000060;
  fVar27 = fStack0000000000000064;
  fVar28 = in_stack_00000068;
LAB_18057b795:
  fVar11 = in_stack_00000078;
  fVar10 = fStack0000000000000074;
  fVar9 = in_stack_00000070;
  fVar14 = *(float *)(unaff_RBX + 0xe8);
  fVar20 = *(float *)(unaff_RBX + 0xec);
  fVar16 = *(float *)(unaff_RBX + 0xf0);
  fVar19 = *(float *)(unaff_RBX + 0xf4);
  fVar22 = *(float *)(unaff_RBX + 0xd8);
  fVar24 = *(float *)(unaff_RBX + 0xdc);
  fVar30 = *(float *)(unaff_RBX + 0xe0);
  fVar2 = *(float *)(unaff_RBX + 200);
  fVar3 = *(float *)(unaff_RBX + 0xcc);
  fVar4 = *(float *)(unaff_RBX + 0xd0);
  unaff_RBP[0xc] = fVar27 * fVar3 + fVar26 * fVar2 + fVar28 * fVar4;
  unaff_RBP[0xd] = fVar27 * fVar24 + fVar26 * fVar22 + fVar28 * fVar30;
  unaff_RBP[0xe] = fVar27 * fVar20 + fVar26 * fVar14 + fVar28 * fVar16;
  unaff_RBP[0xf] = fVar27 * fVar19 + fVar26 * fVar19 + fVar28 * fVar19;
  unaff_RBP[0x10] =
       fStack0000000000000074 * fVar3 + in_stack_00000070 * fVar2 + in_stack_00000078 * fVar4;
  unaff_RBP[0x11] =
       fStack0000000000000074 * fVar24 + in_stack_00000070 * fVar22 + in_stack_00000078 * fVar30;
  unaff_RBP[0x12] =
       fStack0000000000000074 * fVar20 + in_stack_00000070 * fVar14 + in_stack_00000078 * fVar16;
  unaff_RBP[0x13] =
       fStack0000000000000074 * fVar19 + in_stack_00000070 * fVar19 + in_stack_00000078 * fVar19;
  unaff_RBP[0x14] = fVar25 * fVar2 + fVar31 * fVar3 + fVar18 * fVar4;
  unaff_RBP[0x15] = fVar25 * fVar22 + fVar31 * fVar24 + fVar18 * fVar30;
  unaff_RBP[0x16] = fVar25 * fVar14 + fVar31 * fVar20 + fVar18 * fVar16;
  unaff_RBP[0x17] = fVar25 * fVar19 + fVar31 * fVar19 + fVar18 * fVar19;
  FUN_1801c1720(unaff_RBP + 0xc,&stack0x00000030);
  fVar31 = *(float *)(unaff_R14 + 0x38);
  lVar13 = ((int64_t)unaff_R13B + -1) * 0x1b0;
  *(int64_t *)(unaff_RBP + -0xc) = lVar13;
  fVar30 = fStack0000000000000030 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x58);
  fVar22 = fStack0000000000000034 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x5c);
  fVar19 = fStack0000000000000038 * 100.0 * fVar31 + *(float *)(unaff_RBX + 0x60);
  *(float *)(unaff_RBX + 0x58) = fVar30;
  *(float *)(unaff_RBX + 0x5c) = fVar22;
  *(float *)(unaff_RBX + 0x60) = fVar19;
  in_stack_00000048 =
       *(int *)(lVar13 + 0x110 + *(int64_t *)(*(int64_t *)(unaff_R14 + 0x208) + 0x140));
  fVar25 = *(float *)(unaff_RBX + 0x58);
  fVar18 = *(float *)(unaff_RBX + 0x5c);
  fVar14 = *(float *)(unaff_RBX + 0x60);
  lVar13 = (int64_t)in_stack_00000048 * 0x60 +
           *(int64_t *)(*(int64_t *)(unaff_R14 + 0x208) + 0x158);
  fVar16 = 1.0 - (*(float *)(lVar13 + 0x40) + *(float *)(lVar13 + 0x3c));
  fVar24 = fVar18 * fVar18 + fVar25 * fVar25 + fVar14 * fVar14;
  unaff_RBP[0xc] = 1.1754944e-38;
  unaff_RBP[0xd] = 0.0;
  unaff_RBP[0xe] = 0.0;
  unaff_RBP[0xf] = 0.0;
  fVar20 = fVar24;
  if (fVar24 <= 1.1754944e-38) {
    fVar20 = 1.1754944e-38;
  }
  fVar19 = SQRT(fVar30 * fVar30 + fVar22 * fVar22 + fVar19 * fVar19) * 17.5 * fVar16 * fVar31;
  fVar16 = fVar16 * 1.25 * fVar31;
  if (fVar19 <= fVar16) {
    fVar19 = fVar16;
  }
  auVar17 = rsqrtss(ZEXT416((uint)fVar20),ZEXT416((uint)fVar20));
  fVar16 = auVar17._0_4_;
  fVar20 = fVar16 * 0.5 * (3.0 - fVar20 * fVar16 * fVar16);
  if (fVar19 <= fVar20 * fVar24) {
    *(float *)(unaff_RBX + 0x58) = fVar30 - fVar19 * fVar25 * fVar20;
    *(float *)(unaff_RBX + 0x5c) = *(float *)(unaff_RBX + 0x5c) - fVar19 * fVar18 * fVar20;
    in_stack_00000040 = *(float *)(unaff_RBX + 0x60) - fVar19 * fVar14 * fVar20;
    *(float *)(unaff_RBX + 0x60) = in_stack_00000040;
  }
  else {
    *(uint64_t *)(unaff_RBX + 0x58) = 0;
    in_stack_00000040 = 0.0;
    *(uint64_t *)(unaff_RBX + 0x60) = 0;
  }
  fVar25 = *(float *)(unaff_RBX + 0xcc);
  fVar18 = *(float *)(unaff_RBX + 0xd0);
  fVar14 = *(float *)(unaff_RBX + 0xdc);
  fVar20 = *(float *)(unaff_RBX + 200);
  fVar16 = *(float *)(unaff_RBX + 0xd8);
  fVar19 = *(float *)(unaff_RBX + 0xe0);
  fVar22 = *(float *)(unaff_RBX + 0xe8);
  *unaff_RBP = fVar25 * fVar27 + fVar20 * fVar26 + fVar18 * fVar28;
  unaff_RBP[1] = fVar25 * fVar10 + fVar20 * fVar9 + fVar18 * fVar11;
  unaff_RBP[2] = fVar25 * fVar21 + fVar20 * fVar15 + fVar18 * fVar29;
  unaff_RBP[3] = fVar25 * fVar23 + fVar20 * fVar23 + fVar18 * fVar23;
  fVar25 = *(float *)(unaff_RBX + 0xec);
  fVar18 = *(float *)(unaff_RBX + 0xf0);
  unaff_RBP[4] = fVar14 * fVar27 + fVar16 * fVar26 + fVar19 * fVar28;
  unaff_RBP[5] = fVar14 * fVar10 + fVar16 * fVar9 + fVar19 * fVar11;
  unaff_RBP[6] = fVar14 * fVar21 + fVar16 * fVar15 + fVar19 * fVar29;
  unaff_RBP[7] = fVar14 * fVar23 + fVar16 * fVar23 + fVar19 * fVar23;
  unaff_RBP[8] = fVar25 * fVar27 + fVar22 * fVar26 + fVar18 * fVar28;
  unaff_RBP[9] = fVar25 * fVar10 + fVar22 * fVar9 + fVar18 * fVar11;
  unaff_RBP[10] = fVar25 * fVar21 + fVar22 * fVar15 + fVar18 * fVar29;
  unaff_RBP[0xb] = fVar25 * fVar23 + fVar22 * fVar23 + fVar18 * fVar23;
  // 最终阶段：设置缩放因子并调用渲染处理函数
  in_stack_00000050 = fVar31;                        // 设置最终缩放因子
  // 调用渲染处理函数（不返回）
  AdvancedProcessor_StateManager0(&stack0x00000030);
                    // WARNING: Subroutine does not return
  // 调用最终渲染函数，应用最终的变换效果
  AdvancedSystemController(fVar31 * *(float *)(unaff_RBX + 0x58) * 0.5);
}

/* ============================================================================
 * 函数别名定义 - 用于代码可读性和维护性
 * ============================================================================ */

// 主函数别名：渲染系统高级数学计算器
#define RenderingSystem_AdvancedMathCalculator FUN_18057a9d2

/* ============================================================================
 * 技术说明
 * ============================================================================ */
/**
 * 本函数实现了渲染系统中的高级数学计算功能，包括：
 * 
 * 1. 向量标准化和归一化处理
 *    - 使用快速平方根倒数算法进行向量标准化
 *    - 处理数值稳定性，避免除零错误
 * 
 * 2. 矩阵变换和坐标系统转换
 *    - 执行3x3矩阵乘法运算
 *    - 处理齐次坐标变换
 * 
 * 3. 角度和距离计算
 *    - 实现3D空间中的角度标准化（-PI到PI范围）
 *    - 计算欧几里得距离和归一化距离
 * 
 * 4. SIMD优化
 *    - 使用XMM寄存器进行并行计算
 *    - 优化浮点数运算精度
 * 
 * 5. 渲染参数调整
 *    - 动态调整渲染参数以优化性能
 *    - 处理边界条件和特殊情况
 * 
 * 该函数是渲染管线中的关键数学计算组件，为3D渲染提供高精度的数学支持。
 */





