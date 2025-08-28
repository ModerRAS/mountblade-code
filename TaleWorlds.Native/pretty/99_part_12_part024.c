#include "TaleWorlds.Native.Split.h"

// 99_part_12_part024.c - 图形渲染矩阵变换模块
// 
// 本模块包含13个函数，主要用于3D图形渲染中的矩阵变换和数学运算
// 涉及顶点变换、矩阵乘法、向量运算等图形渲染核心功能
// 
// 主要数学常数：
// - 0.8828: 主要缩放系数
// - 0.4697: 次要缩放系数  
// - 0.7071: 1/√2，用于45度角变换
// - 0.4472136: 1/√5，用于五点平均变换
// - 0.3673, 0.46, 0.7, 0.93: 复合变换权重系数

// 数学常数定义
#define SCALE_PRIMARY 0.8828f      // 主要缩放系数
#define SCALE_SECONDARY 0.4697f    // 次要缩放系数
#define SCALE_45_DEGREE 0.7071f    // 45度角变换系数 (1/√2)
#define SCALE_5_POINT_AVG 0.4472136f // 五点平均系数 (1/√5)
#define WEIGHT_3673 0.3673f        // 权重系数1
#define WEIGHT_46 0.46f            // 权重系数2
#define WEIGHT_70 0.7f             // 权重系数3
#define WEIGHT_93 0.93f            // 权重系数4

// 类型别名定义
typedef longlong MatrixPtr;
typedef float* FloatPtr;
typedef uint VertexCount;

// 函数别名：矩阵变换处理器 - 主要变换函数
void MatrixTransform_Primary(longlong vertexData, longlong *matrixData, uint vertexCount);

// 函数别名：矩阵变换处理器 - 次要变换函数
void MatrixTransform_Secondary(longlong vertexData, longlong matrixData, uint vertexCount);

// 函数别名：空函数1
void EmptyFunction_1(void);

// 函数别名：五点平均变换函数
void FivePointAverageTransform(longlong vertexData, longlong *matrixData, uint vertexCount);

// 函数别名：参数化五点平均变换函数
void ParametricFivePointAverage(longlong vertexData, undefined8 paramData, uint vertexCount);

// 函数别名：空函数2
void EmptyFunction_2(void);

// 函数别名：45度角变换函数
void Degree45Transform(longlong vertexData, longlong *matrixData, uint vertexCount);

// 函数别名：参数化45度角变换函数
void ParametricDegree45Transform(longlong vertexData, longlong matrixData, uint vertexCount);

// 函数别名：空函数3
void EmptyFunction_3(void);

// 函数别名：复合45度角变换函数
void CompositeDegree45Transform(longlong vertexData, longlong *matrixData, uint vertexCount);

// 函数别名：参数化复合45度角变换函数
void ParametricCompositeDegree45Transform(longlong vertexData, longlong matrixData, uint vertexCount);

// 函数别名：空函数4
void EmptyFunction_4(void);

// 函数别名：权重复合变换函数
void WeightedCompositeTransform(longlong vertexData, longlong *matrixData, uint vertexCount);

/**
 * 主要矩阵变换函数
 * 
 * 此函数执行主要的矩阵变换操作，使用主要和次要缩放系数
 * 对顶点数据进行双通道变换处理
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针数组，包含8个矩阵指针
 * @param vertexCount 顶点数量
 */
void FUN_1807d9ce0(longlong param_1,longlong *param_2,uint param_3)
{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  float fVar34;
  float fVar35;
  ulonglong uVar36;
  uint uVar37;
  
  uVar37 = 0;
  if (param_3 >> 2 != 0) {
    lVar5 = *param_2;
    lVar6 = param_2[1];
    lVar7 = param_2[4];
    lVar8 = param_2[3];
    lVar9 = param_2[2];
    lVar10 = param_2[7];
    lVar11 = param_2[5];
    lVar12 = param_2[6];
    do {
      uVar4 = uVar37 * 0x18;
      puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar4 * 4);
      uVar13 = puVar1[1];
      uVar14 = puVar1[2];
      uVar15 = puVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
      fVar16 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar18 = pfVar2[2];
      fVar19 = pfVar2[3];
      puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
      uVar20 = *puVar3;
      uVar21 = puVar3[1];
      fVar22 = (float)puVar3[2];
      fVar23 = (float)puVar3[3];
      puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
      uVar24 = *puVar3;
      uVar25 = puVar3[1];
      uVar26 = puVar3[2];
      uVar27 = puVar3[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
      fVar28 = *pfVar2;
      fVar29 = pfVar2[1];
      fVar30 = pfVar2[2];
      fVar31 = pfVar2[3];
      puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
      uVar32 = *puVar3;
      uVar33 = puVar3[1];
      fVar34 = (float)puVar3[2];
      fVar35 = (float)puVar3[3];
      uVar36 = (ulonglong)(uVar37 * 4);
      uVar37 = uVar37 + 1;
      puVar3 = (undefined4 *)(lVar5 + uVar36 * 4);
      *puVar3 = *puVar1;
      puVar3[1] = fVar18;
      puVar3[2] = uVar24;
      puVar3[3] = fVar30;
      puVar1 = (undefined4 *)(lVar6 + uVar36 * 4);
      *puVar1 = uVar13;
      puVar1[1] = fVar19;
      puVar1[2] = uVar25;
      puVar1[3] = fVar31;
      puVar1 = (undefined4 *)(lVar9 + uVar36 * 4);
      *puVar1 = uVar14;
      puVar1[1] = uVar20;
      puVar1[2] = uVar26;
      puVar1[3] = uVar32;
      puVar1 = (undefined4 *)(lVar8 + uVar36 * 4);
      *puVar1 = uVar15;
      puVar1[1] = uVar21;
      puVar1[2] = uVar27;
      puVar1[3] = uVar33;
      pfVar2 = (float *)(lVar7 + uVar36 * 4);
      *pfVar2 = fVar16 * SCALE_PRIMARY;
      pfVar2[1] = fVar22 * SCALE_PRIMARY;
      pfVar2[2] = fVar28 * SCALE_PRIMARY;
      pfVar2[3] = fVar34 * SCALE_PRIMARY;
      pfVar2 = (float *)(lVar11 + uVar36 * 4);
      *pfVar2 = fVar17 * SCALE_PRIMARY;
      pfVar2[1] = fVar23 * SCALE_PRIMARY;
      pfVar2[2] = fVar29 * SCALE_PRIMARY;
      pfVar2[3] = fVar35 * SCALE_PRIMARY;
      pfVar2 = (float *)(lVar12 + uVar36 * 4);
      *pfVar2 = fVar16 * SCALE_SECONDARY;
      pfVar2[1] = fVar22 * SCALE_SECONDARY;
      pfVar2[2] = fVar28 * SCALE_SECONDARY;
      pfVar2[3] = fVar34 * SCALE_SECONDARY;
      pfVar2 = (float *)(lVar10 + uVar36 * 4);
      *pfVar2 = fVar17 * SCALE_SECONDARY;
      pfVar2[1] = fVar23 * SCALE_SECONDARY;
      pfVar2[2] = fVar29 * SCALE_SECONDARY;
      pfVar2[3] = fVar35 * SCALE_SECONDARY;
    } while (uVar37 < param_3 >> 2);
  }
  return;
}

/**
 * 次要矩阵变换函数
 * 
 * 此函数执行次要的矩阵变换操作，使用寄存器中的动态缩放系数
 * 对顶点数据进行双通道变换处理
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据结构指针
 * @param vertexCount 顶点数量
 */
void FUN_1807d9d14(longlong param_1,longlong param_2,uint param_3)
{
  undefined4 *puVar1;
  float *pfVar2;
  undefined4 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  longlong in_RAX;
  ulonglong uVar35;
  undefined8 unaff_RBX;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  uint in_R10D;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 unaff_XMM7_Da;
  undefined4 unaff_XMM7_Db;
  undefined4 unaff_XMM7_Dc;
  undefined4 unaff_XMM7_Dd;
  float unaff_XMM8_Da;
  float unaff_XMM8_Db;
  float unaff_XMM8_Dc;
  float unaff_XMM8_Dd;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBX;
  lVar5 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(in_RAX + 0x10) = unaff_RBP;
  lVar6 = *(longlong *)(param_2 + 0x20);
  *(undefined8 *)(in_RAX + 0x18) = unaff_RSI;
  lVar7 = *(longlong *)(param_2 + 0x18);
  *(undefined8 *)(in_RAX + 0x20) = unaff_RDI;
  lVar8 = *(longlong *)(param_2 + 0x10);
  *(undefined8 *)(in_RAX + -8) = unaff_R12;
  lVar9 = *(longlong *)(param_2 + 0x38);
  *(undefined8 *)(in_RAX + -0x10) = unaff_R14;
  lVar10 = *(longlong *)(param_2 + 0x28);
  *(undefined8 *)(in_RAX + -0x18) = unaff_R15;
  lVar11 = *(longlong *)(param_2 + 0x30);
  *(undefined4 *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(undefined4 *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(undefined4 *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(undefined4 *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  *(undefined4 *)(in_RAX + -0x38) = unaff_XMM7_Da;
  *(undefined4 *)(in_RAX + -0x34) = unaff_XMM7_Db;
  *(undefined4 *)(in_RAX + -0x30) = unaff_XMM7_Dc;
  *(undefined4 *)(in_RAX + -0x2c) = unaff_XMM7_Dd;
  do {
    uVar4 = in_R10D * 0x18;
    puVar1 = (undefined4 *)(param_1 + (ulonglong)uVar4 * 4);
    uVar12 = puVar1[1];
    uVar13 = puVar1[2];
    uVar14 = puVar1[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
    fVar15 = *pfVar2;
    fVar16 = pfVar2[1];
    fVar17 = pfVar2[2];
    fVar18 = pfVar2[3];
    puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
    uVar19 = *puVar3;
    uVar20 = puVar3[1];
    fVar21 = (float)puVar3[2];
    fVar22 = (float)puVar3[3];
    puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
    uVar23 = *puVar3;
    uVar24 = puVar3[1];
    uVar25 = puVar3[2];
    uVar26 = puVar3[3];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
    fVar27 = *pfVar2;
    fVar28 = pfVar2[1];
    fVar29 = pfVar2[2];
    fVar30 = pfVar2[3];
    puVar3 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
    uVar31 = *puVar3;
    uVar32 = puVar3[1];
    fVar33 = (float)puVar3[2];
    fVar34 = (float)puVar3[3];
    uVar35 = (ulonglong)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    puVar3 = (undefined4 *)(in_R11 + uVar35 * 4);
    *puVar3 = *puVar1;
    puVar3[1] = fVar17;
    puVar3[2] = uVar23;
    puVar3[3] = fVar29;
    puVar1 = (undefined4 *)(lVar5 + uVar35 * 4);
    *puVar1 = uVar12;
    puVar1[1] = fVar18;
    puVar1[2] = uVar24;
    puVar1[3] = fVar30;
    puVar1 = (undefined4 *)(lVar8 + uVar35 * 4);
    *puVar1 = uVar13;
    puVar1[1] = uVar19;
    puVar1[2] = uVar25;
    puVar1[3] = uVar31;
    puVar1 = (undefined4 *)(lVar7 + uVar35 * 4);
    *puVar1 = uVar14;
    puVar1[1] = uVar20;
    puVar1[2] = uVar26;
    puVar1[3] = uVar32;
    pfVar2 = (float *)(lVar6 + uVar35 * 4);
    *pfVar2 = fVar15 * unaff_XMM8_Da;
    pfVar2[1] = fVar21 * unaff_XMM8_Db;
    pfVar2[2] = fVar27 * unaff_XMM8_Dc;
    pfVar2[3] = fVar33 * unaff_XMM8_Dd;
    pfVar2 = (float *)(lVar10 + uVar35 * 4);
    *pfVar2 = fVar16 * unaff_XMM8_Da;
    pfVar2[1] = fVar22 * unaff_XMM8_Db;
    pfVar2[2] = fVar28 * unaff_XMM8_Dc;
    pfVar2[3] = fVar34 * unaff_XMM8_Dd;
    pfVar2 = (float *)(lVar11 + uVar35 * 4);
    *pfVar2 = fVar15 * unaff_XMM9_Da;
    pfVar2[1] = fVar21 * unaff_XMM9_Db;
    pfVar2[2] = fVar27 * unaff_XMM9_Dc;
    pfVar2[3] = fVar33 * unaff_XMM9_Dd;
    pfVar2 = (float *)(lVar9 + uVar35 * 4);
    *pfVar2 = fVar16 * unaff_XMM9_Da;
    pfVar2[1] = fVar22 * unaff_XMM9_Db;
    pfVar2[2] = fVar28 * unaff_XMM9_Dc;
    pfVar2[3] = fVar34 * unaff_XMM9_Dd;
  } while (in_R10D < param_3);
  return;
}

/**
 * 空函数1
 * 
 * 此函数为空实现，可能用作占位符或未来扩展
 */
void FUN_1807d9e44(void)
{
  return;
}

/**
 * 五点平均变换函数
 * 
 * 此函数执行五点平均变换操作，使用1/√5系数
 * 对顶点数据进行平滑处理
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针数组
 * @param vertexCount 顶点数量
 */
void FUN_1807d9e60(longlong param_1,longlong *param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  uint uVar21;
  
  uVar21 = 0;
  if (param_3 >> 2 != 0) {
    lVar5 = *param_2;
    do {
      uVar4 = uVar21 * 0x18;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
      fVar6 = pfVar2[2];
      fVar7 = pfVar2[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
      fVar8 = *pfVar3;
      fVar9 = pfVar3[2];
      fVar10 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
      fVar11 = *pfVar3;
      fVar12 = pfVar3[1];
      fVar13 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
      fVar14 = *pfVar3;
      fVar15 = pfVar3[1];
      fVar16 = pfVar3[2];
      fVar17 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[2];
      fVar20 = pfVar3[3];
      uVar4 = uVar21 * 4;
      uVar21 = uVar21 + 1;
      pfVar3 = (float *)(lVar5 + (ulonglong)uVar4 * 4);
      *pfVar3 = (pfVar2[1] + *pfVar2 + pfVar1[1] + *pfVar1 + pfVar1[2]) * SCALE_5_POINT_AVG;
      pfVar3[1] = (fVar10 + fVar9 + fVar7 + fVar6 + fVar8) * SCALE_5_POINT_AVG;
      pfVar3[2] = (fVar15 + fVar14 + fVar12 + fVar11 + fVar13) * SCALE_5_POINT_AVG;
      pfVar3[3] = (fVar20 + fVar19 + fVar17 + fVar16 + fVar18) * SCALE_5_POINT_AVG;
    } while (uVar21 < param_3 >> 2);
  }
  return;
}

/**
 * 参数化五点平均变换函数
 * 
 * 此函数执行参数化的五点平均变换操作，使用动态缩放系数
 * 对顶点数据进行平滑处理
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param paramData 参数数据指针
 * @param vertexCount 顶点数量
 */
void FUN_1807d9e84(longlong param_1,undefined8 param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint in_R10D;
  longlong in_R11;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  
  do {
    uVar4 = in_R10D * 0x18;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
    fVar5 = pfVar2[2];
    fVar6 = pfVar2[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
    fVar7 = *pfVar3;
    fVar8 = pfVar3[2];
    fVar9 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
    fVar10 = *pfVar3;
    fVar11 = pfVar3[1];
    fVar12 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
    fVar13 = *pfVar3;
    fVar14 = pfVar3[1];
    fVar15 = pfVar3[2];
    fVar16 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
    fVar17 = *pfVar3;
    fVar18 = pfVar3[2];
    fVar19 = pfVar3[3];
    uVar4 = in_R10D * 4;
    in_R10D = in_R10D + 1;
    pfVar3 = (float *)(in_R11 + (ulonglong)uVar4 * 4);
    *pfVar3 = (pfVar2[1] + *pfVar2 + pfVar1[1] + *pfVar1 + pfVar1[2]) * unaff_XMM9_Da;
    pfVar3[1] = (fVar9 + fVar8 + fVar6 + fVar5 + fVar7) * unaff_XMM9_Db;
    pfVar3[2] = (fVar14 + fVar13 + fVar11 + fVar10 + fVar12) * unaff_XMM9_Dc;
    pfVar3[3] = (fVar19 + fVar18 + fVar16 + fVar15 + fVar17) * unaff_XMM9_Dd;
  } while (in_R10D < param_3);
  return;
}

/**
 * 空函数2
 * 
 * 此函数为空实现，可能用作占位符或未来扩展
 */
void FUN_1807d9f40(void)
{
  return;
}

/**
 * 45度角变换函数
 * 
 * 此函数执行45度角变换操作，使用1/√2系数
 * 对顶点数据进行旋转变换
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针数组
 * @param vertexCount 顶点数量
 */
void FUN_1807d9f50(longlong param_1,longlong *param_2,uint param_3)
{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ulonglong uVar28;
  uint uVar29;
  
  uVar29 = 0;
  if (param_3 >> 2 != 0) {
    lVar5 = *param_2;
    lVar6 = param_2[1];
    lVar7 = param_2[3];
    lVar8 = param_2[2];
    do {
      uVar4 = uVar29 * 0x18;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
      uVar11 = *puVar2;
      uVar12 = puVar2[1];
      fVar13 = (float)puVar2[2];
      fVar14 = (float)puVar2[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
      fVar15 = *pfVar3;
      fVar16 = pfVar3[2];
      fVar17 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
      uVar21 = *puVar2;
      uVar22 = puVar2[1];
      fVar23 = (float)puVar2[2];
      fVar24 = (float)puVar2[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
      fVar25 = *pfVar3;
      fVar26 = pfVar3[2];
      fVar27 = pfVar3[3];
      uVar28 = (ulonglong)(uVar29 * 4);
      uVar29 = uVar29 + 1;
      pfVar3 = (float *)(lVar5 + uVar28 * 4);
      *pfVar3 = *pfVar1 + fVar10 * SCALE_45_DEGREE;
      pfVar3[1] = fVar13 + fVar15 * SCALE_45_DEGREE;
      pfVar3[2] = fVar18 + fVar20 * SCALE_45_DEGREE;
      pfVar3[3] = fVar23 + fVar25 * SCALE_45_DEGREE;
      pfVar1 = (float *)(lVar6 + uVar28 * 4);
      *pfVar1 = fVar9 + fVar10 * SCALE_45_DEGREE;
      pfVar1[1] = fVar14 + fVar15 * SCALE_45_DEGREE;
      pfVar1[2] = fVar19 + fVar20 * SCALE_45_DEGREE;
      pfVar1[3] = fVar24 + fVar25 * SCALE_45_DEGREE;
      puVar2 = (undefined4 *)(lVar8 + uVar28 * 4);
      *puVar2 = uVar11;
      puVar2[1] = fVar16;
      puVar2[2] = uVar21;
      puVar2[3] = fVar26;
      puVar2 = (undefined4 *)(lVar7 + uVar28 * 4);
      *puVar2 = uVar12;
      puVar2[1] = fVar17;
      puVar2[2] = uVar22;
      puVar2[3] = fVar27;
    } while (uVar29 < param_3 >> 2);
  }
  return;
}

/**
 * 参数化45度角变换函数
 * 
 * 此函数执行参数化的45度角变换操作，使用动态缩放系数
 * 对顶点数据进行旋转变换
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针
 * @param vertexCount 顶点数量
 */
void FUN_1807d9f74(longlong param_1,longlong param_2,uint param_3)
{
  float *pfVar1;
  undefined4 *puVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  ulonglong uVar27;
  uint in_R10D;
  longlong in_R11;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  
  lVar5 = *(longlong *)(param_2 + 8);
  lVar6 = *(longlong *)(param_2 + 0x18);
  lVar7 = *(longlong *)(param_2 + 0x10);
  do {
    uVar4 = in_R10D * 0x18;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
    fVar8 = pfVar1[1];
    fVar9 = pfVar1[2];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
    uVar10 = *puVar2;
    uVar11 = puVar2[1];
    fVar12 = (float)puVar2[2];
    fVar13 = (float)puVar2[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
    fVar14 = *pfVar3;
    fVar15 = pfVar3[2];
    fVar16 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
    fVar17 = *pfVar3;
    fVar18 = pfVar3[1];
    fVar19 = pfVar3[2];
    puVar2 = (undefined4 *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    fVar22 = (float)puVar2[2];
    fVar23 = (float)puVar2[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
    fVar24 = *pfVar3;
    fVar25 = pfVar3[2];
    fVar26 = pfVar3[3];
    uVar27 = (ulonglong)(in_R10D * 4);
    in_R10D = in_R10D + 1;
    pfVar3 = (float *)(in_R11 + uVar27 * 4);
    *pfVar3 = *pfVar1 + fVar9 * unaff_XMM9_Da;
    pfVar3[1] = fVar12 + fVar14 * unaff_XMM9_Db;
    pfVar3[2] = fVar17 + fVar19 * unaff_XMM9_Dc;
    pfVar3[3] = fVar22 + fVar24 * unaff_XMM9_Dd;
    pfVar1 = (float *)(lVar5 + uVar27 * 4);
    *pfVar1 = fVar8 + fVar9 * unaff_XMM9_Da;
    pfVar1[1] = fVar13 + fVar14 * unaff_XMM9_Db;
    pfVar1[2] = fVar18 + fVar19 * unaff_XMM9_Dc;
    pfVar1[3] = fVar23 + fVar24 * unaff_XMM9_Dd;
    puVar2 = (undefined4 *)(lVar7 + uVar27 * 4);
    *puVar2 = uVar10;
    puVar2[1] = fVar15;
    puVar2[2] = uVar20;
    puVar2[3] = fVar25;
    puVar2 = (undefined4 *)(lVar6 + uVar27 * 4);
    *puVar2 = uVar11;
    puVar2[1] = fVar16;
    puVar2[2] = uVar21;
    puVar2[3] = fVar26;
  } while (in_R10D < param_3);
  return;
}

/**
 * 空函数3
 * 
 * 此函数为空实现，可能用作占位符或未来扩展
 */
void FUN_1807da056(void)
{
  return;
}

/**
 * 复合45度角变换函数
 * 
 * 此函数执行复合的45度角变换操作，使用1/√2系数
 * 对顶点数据进行复杂的旋转变换
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针数组
 * @param vertexCount 顶点数量
 */
void FUN_1807da060(longlong param_1,longlong *param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint uVar25;
  
  uVar25 = 0;
  if (param_3 >> 2 != 0) {
    lVar5 = *param_2;
    lVar6 = param_2[1];
    do {
      uVar4 = uVar25 * 0x18;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
      fVar7 = pfVar1[1];
      fVar8 = pfVar1[2];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
      fVar9 = pfVar2[1];
      fVar10 = pfVar2[2];
      fVar11 = pfVar2[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
      fVar12 = *pfVar3;
      fVar13 = pfVar3[2];
      fVar14 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
      fVar15 = *pfVar3;
      fVar16 = pfVar3[1];
      fVar17 = pfVar3[2];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
      fVar18 = *pfVar3;
      fVar19 = pfVar3[1];
      fVar20 = pfVar3[2];
      fVar21 = pfVar3[3];
      pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
      fVar22 = *pfVar3;
      fVar23 = pfVar3[2];
      fVar24 = pfVar3[3];
      uVar4 = uVar25 * 4;
      uVar25 = uVar25 + 1;
      pfVar3 = (float *)(lVar5 + (ulonglong)uVar4 * 4);
      *pfVar3 = (*pfVar2 + fVar8) * SCALE_45_DEGREE + *pfVar1;
      pfVar3[1] = (fVar13 + fVar12) * SCALE_45_DEGREE + fVar10;
      pfVar3[2] = (fVar18 + fVar17) * SCALE_45_DEGREE + fVar15;
      pfVar3[3] = (fVar23 + fVar22) * SCALE_45_DEGREE + fVar20;
      pfVar1 = (float *)(lVar6 + (ulonglong)uVar4 * 4);
      *pfVar1 = (fVar9 + fVar8) * SCALE_45_DEGREE + fVar7;
      pfVar1[1] = (fVar14 + fVar12) * SCALE_45_DEGREE + fVar11;
      pfVar1[2] = (fVar19 + fVar17) * SCALE_45_DEGREE + fVar16;
      pfVar1[3] = (fVar24 + fVar22) * SCALE_45_DEGREE + fVar21;
    } while (uVar25 < param_3 >> 2);
  }
  return;
}

/**
 * 参数化复合45度角变换函数
 * 
 * 此函数执行参数化的复合45度角变换操作，使用动态缩放系数
 * 对顶点数据进行复杂的旋转变换
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针
 * @param vertexCount 顶点数量
 */
void FUN_1807da084(longlong param_1,longlong param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  uint uVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint in_R10D;
  longlong in_R11;
  float unaff_XMM9_Da;
  float unaff_XMM9_Db;
  float unaff_XMM9_Dc;
  float unaff_XMM9_Dd;
  
  lVar5 = *(longlong *)(param_2 + 8);
  do {
    uVar4 = in_R10D * 0x18;
    pfVar1 = (float *)(param_1 + (ulonglong)uVar4 * 4);
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
    pfVar2 = (float *)(param_1 + (ulonglong)(uVar4 + 4) * 4);
    fVar8 = pfVar2[1];
    fVar9 = pfVar2[2];
    fVar10 = pfVar2[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 8) * 4);
    fVar11 = *pfVar3;
    fVar12 = pfVar3[2];
    fVar13 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0xc) * 4);
    fVar14 = *pfVar3;
    fVar15 = pfVar3[1];
    fVar16 = pfVar3[2];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x10) * 4);
    fVar17 = *pfVar3;
    fVar18 = pfVar3[1];
    fVar19 = pfVar3[2];
    fVar20 = pfVar3[3];
    pfVar3 = (float *)(param_1 + (ulonglong)(uVar4 + 0x14) * 4);
    fVar21 = *pfVar3;
    fVar22 = pfVar3[2];
    fVar23 = pfVar3[3];
    uVar4 = in_R10D * 4;
    in_R10D = in_R10D + 1;
    pfVar3 = (float *)(in_R11 + (ulonglong)uVar4 * 4);
    *pfVar3 = (*pfVar2 + fVar7) * unaff_XMM9_Da + *pfVar1;
    pfVar3[1] = (fVar12 + fVar11) * unaff_XMM9_Db + fVar9;
    pfVar3[2] = (fVar17 + fVar16) * unaff_XMM9_Dc + fVar14;
    pfVar3[3] = (fVar22 + fVar21) * unaff_XMM9_Dd + fVar19;
    pfVar1 = (float *)(lVar5 + (ulonglong)uVar4 * 4);
    *pfVar1 = (fVar8 + fVar7) * unaff_XMM9_Da + fVar6;
    pfVar1[1] = (fVar13 + fVar11) * unaff_XMM9_Db + fVar10;
    pfVar1[2] = (fVar18 + fVar16) * unaff_XMM9_Dc + fVar15;
    pfVar1[3] = (fVar23 + fVar21) * unaff_XMM9_Dd + fVar20;
  } while (in_R10D < param_3);
  return;
}

/**
 * 空函数4
 * 
 * 此函数为空实现，可能用作占位符或未来扩展
 */
void FUN_1807da150(void)
{
  return;
}

/**
 * 权重复合变换函数
 * 
 * 此函数执行权重复合变换操作，使用多个权重系数
 * 对顶点数据进行复杂的复合变换
 * 
 * @param vertexData 顶点数据缓冲区指针
 * @param matrixData 矩阵数据指针数组
 * @param vertexCount 顶点数量
 */
void FUN_1807da160(longlong param_1,longlong *param_2,uint param_3)
{
  float *pfVar1;
  float *pfVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  uint uVar40;
  ulonglong uVar41;
  uint uVar42;
  
  uVar42 = 0;
  if (param_3 >> 2 != 0) {
    lVar3 = *param_2;
    lVar4 = param_2[1];
    lVar5 = param_2[4];
    lVar6 = param_2[3];
    lVar7 = param_2[2];
    lVar8 = param_2[5];
    do {
      uVar40 = uVar42 * 0x20;
      pfVar1 = (float *)(param_1 + (ulonglong)uVar40 * 4);
      fVar9 = pfVar1[1];
      fVar10 = pfVar1[2];
      fVar11 = pfVar1[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 4) * 4);
      fVar12 = *pfVar2;
      fVar13 = pfVar2[1];
      fVar14 = pfVar2[2];
      fVar15 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 8) * 4);
      fVar16 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar18 = pfVar2[2];
      fVar19 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 0xc) * 4);
      fVar20 = *pfVar2;
      fVar21 = pfVar2[1];
      fVar22 = pfVar2[2];
      fVar23 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 0x10) * 4);
      fVar24 = *pfVar2;
      fVar25 = pfVar2[1];
      fVar26 = pfVar2[2];
      fVar27 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 0x14) * 4);
      fVar28 = *pfVar2;
      fVar29 = pfVar2[1];
      fVar30 = pfVar2[2];
      fVar31 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 0x18) * 4);
      fVar32 = *pfVar2;
      fVar33 = pfVar2[1];
      fVar34 = pfVar2[2];
      fVar35 = pfVar2[3];
      pfVar2 = (float *)(param_1 + (ulonglong)(uVar40 + 0x1c) * 4);
      fVar36 = *pfVar2;
      fVar37 = pfVar2[1];
      fVar38 = pfVar2[2];
      fVar39 = pfVar2[3];
      uVar41 = (ulonglong)(uVar42 * 4);
      uVar42 = uVar42 + 1;
      pfVar2 = (float *)(lVar3 + uVar41 * 4);
      *pfVar2 = *pfVar1 + fVar12 * WEIGHT_3673;
      pfVar2[1] = fVar16 + fVar20 * WEIGHT_3673;
      pfVar2[2] = fVar24 + fVar28 * WEIGHT_3673;
      pfVar2[3] = fVar32 + fVar36 * WEIGHT_3673;
      pfVar1 = (float *)(lVar4 + uVar41 * 4);
      *pfVar1 = fVar9 + fVar13 * WEIGHT_3673;
      pfVar1[1] = fVar17 + fVar21 * WEIGHT_3673;
      pfVar1[2] = fVar25 + fVar29 * WEIGHT_3673;
      pfVar1[3] = fVar33 + fVar37 * WEIGHT_3673;
      pfVar1 = (float *)(lVar7 + uVar41 * 4);
      *pfVar1 = fVar10;
      pfVar1[1] = fVar18;
      pfVar1[2] = fVar26;
      pfVar1[3] = fVar34;
      pfVar1 = (float *)(lVar6 + uVar41 * 4);
      *pfVar1 = fVar11;
      pfVar1[1] = fVar19;
      pfVar1[2] = fVar27;
      pfVar1[3] = fVar35;
      pfVar1 = (float *)(lVar5 + uVar41 * 4);
      *pfVar1 = fVar15 * WEIGHT_46 + fVar14 * WEIGHT_70 + fVar12 * WEIGHT_93;
      pfVar1[1] = fVar23 * WEIGHT_46 + fVar22 * WEIGHT_70 + fVar20 * WEIGHT_93;
      pfVar1[2] = fVar31 * WEIGHT_46 + fVar30 * WEIGHT_70 + fVar28 * WEIGHT_93;
      pfVar1[3] = fVar39 * WEIGHT_46 + fVar38 * WEIGHT_70 + fVar36 * WEIGHT_93;
      pfVar1 = (float *)(lVar8 + uVar41 * 4);
      *pfVar1 = fVar14 * WEIGHT_46 + fVar15 * WEIGHT_70 + fVar13 * WEIGHT_93;
      pfVar1[1] = fVar22 * WEIGHT_46 + fVar23 * WEIGHT_70 + fVar21 * WEIGHT_93;
      pfVar1[2] = fVar30 * WEIGHT_46 + fVar31 * WEIGHT_70 + fVar29 * WEIGHT_93;
      pfVar1[3] = fVar38 * WEIGHT_46 + fVar39 * WEIGHT_70 + fVar37 * WEIGHT_93;
    } while (uVar42 < param_3 >> 2);
  }
  return;
}