#include "TaleWorlds.Native.Split.h"

/*=============================================================================
 * 99_part_12_part069.c - 数学计算和矩阵变换模块
 * 
 * 本模块包含高级数学计算功能，主要用于：
 * - 复杂的浮点数运算
 * - 矩阵变换和向量计算
 * - 3D图形渲染相关的数学处理
 * - 向量点积和矩阵乘法运算
 * 
 * 包含函数：
 * 1. Math_MatrixTransformProcessor - 矩阵变换处理器
 * 2. Math_VectorCalculationEngine - 向量计算引擎
 *=============================================================================*/

/*=============================================================================
 * 常量定义
 *=============================================================================*/
#define MATRIX_BLOCK_SIZE 16          // 矩阵块大小 (16字节)
#define VECTOR_COMPONENTS_4 4          // 4分量向量
#define VECTOR_COMPONENTS_3 3          // 3分量向量
#define VECTOR_COMPONENTS_2 2          // 2分量向量
#define FLOAT_SIZE 4                  // 浮点数大小 (4字节)
#define LOOP_UNROLL_FACTOR 4          // 循环展开因子

/*=============================================================================
 * 类型别名
 *=============================================================================*/
typedef float Vector2D[2];           // 2D向量类型
typedef float Vector3D[3];           // 3D向量类型
typedef float Vector4D[4];           // 4D向量类型
typedef float Matrix4x4[16];         // 4x4矩阵类型
typedef uint ElementCount;           // 元素计数类型
typedef int StrideValue;             // 步长值类型
typedef longlong MatrixPointer;      // 矩阵指针类型
typedef float WeightFactor;          // 权重因子类型

/*=============================================================================
 * 函数别名
 *=============================================================================*/
#define Math_MatrixTransformProcessor FUN_1807fa710
#define Math_VectorCalculationEngine FUN_1807fa774

/*=============================================================================
 * 函数实现
 *=============================================================================*/

/**
 * 矩阵变换处理器 - 执行复杂的矩阵变换和向量计算
 * 
 * 该函数实现了高性能的矩阵变换计算，主要用于3D图形渲染系统。
 * 通过循环展开和内存优化，实现了高效的向量-矩阵运算。
 * 
 * @param outputVector    输出向量数组指针
 * @param inputVector     输入向量数组指针  
 * @param elementCount    元素数量
 * @param stride          步长值
 * @param matrixIndex     矩阵索引
 * @param matrixA         矩阵A的基地址
 * @param matrixB         矩阵B的基地址
 * @param matrixC         矩阵C的基地址
 * @param matrixD         矩阵D的基地址
 * @param weightA         权重因子A
 * @param weightB         权重因子B
 * @param weightC         权重因子C
 * 
 * @return 无返回值
 * 
 * 算法说明：
 * 1. 使用4路循环展开提高性能
 * 2. 实现向量-矩阵乘法运算
 * 3. 支持加权组合计算
 * 4. 优化内存访问模式
 */
void Math_MatrixTransformProcessor(float *outputVector, float *inputVector, uint elementCount, 
                                   int stride, int matrixIndex, longlong matrixA, longlong matrixB, 
                                   longlong matrixC, longlong matrixD, float weightA, 
                                   float weightB, float weightC)
{
  // 声明浮点数变量用于矩阵计算
  float matrixElement_A1, matrixElement_A2, matrixElement_A3, matrixElement_A4;
  float matrixElement_B1, matrixElement_B2, matrixElement_B3, matrixElement_B4;
  float matrixElement_C1, matrixElement_C2, matrixElement_C3, matrixElement_C4;
  float matrixElement_D1, matrixElement_D2, matrixElement_D3, matrixElement_D4;
  float vectorComponent_X, vectorComponent_Y, vectorComponent_Z, vectorComponent_W;
  float intermediateResult_A, intermediateResult_B, intermediateResult_C, intermediateResult_D;
  
  // 声明循环控制变量
  longlong matrixPointer;
  int loopCounter;
  int stride_2x, stride_3x;
  longlong matrixRowPointer;
  longlong currentMatrixIndex;
  float calculationResult_A, calculationResult_B, calculationResult_C, calculationResult_D;
  
  lVar20 = (longlong)param_5;
  iVar18 = (int)param_3 >> 2;
  if (iVar18 != 0) {
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar19 + 0x1c)) - fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(lVar19 + 0x14);
      fVar8 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar19 + 0x1c)) - fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      *param_1 = ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * param_10 -
                 (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
                 (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[param_4] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar19 + 0x18);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar22 = (param_2[param_4] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar7 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (param_2[param_4] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[param_4] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * param_11) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[iVar17] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(lVar19 + 0x14);
      fVar8 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar22 = (param_2[iVar17] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar10 = *(float *)(lVar19 + 0x18);
      fVar23 = (param_2[iVar17] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[iVar17] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * param_12;
      lVar19 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar19 + 0x18);
      fVar4 = *(float *)(lVar19 + 0x14);
      fVar21 = (param_2[iVar16] - fVar1 * *(float *)(lVar19 + 0x1c)) -
               fVar2 * *(float *)(lVar19 + 0x20);
      fVar5 = *(float *)(lVar19 + 0x10);
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      lVar19 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar19 + 0x18);
      fVar9 = *(float *)(lVar19 + 0x14);
      fVar22 = (param_2[iVar16] - fVar6 * *(float *)(lVar19 + 0x1c)) -
               fVar7 * *(float *)(lVar19 + 0x20);
      fVar10 = *(float *)(lVar19 + 0x10);
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      lVar19 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar19 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar19 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar19 + 0x1c)) - fVar11 * *(float *)(lVar19 + 0x20);
      fVar6 = *(float *)(lVar19 + 0x10);
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      lVar19 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar19 + 0x18);
      fVar10 = *(float *)(lVar19 + 0x14);
      fVar23 = (param_2[iVar16] - fVar7 * *(float *)(lVar19 + 0x1c)) -
               fVar8 * *(float *)(lVar19 + 0x20);
      fVar22 = *(float *)(lVar19 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      param_1[iVar16] =
           ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * param_10 -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * param_11) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * param_12;
      param_1 = param_1 + param_4 * 4;
      param_2 = param_2 + param_4 * 4;
      iVar18 = iVar18 + -1;
    } while (iVar18 != 0);
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar20 = (longlong)param_5;
    lVar19 = (longlong)param_1 - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(param_6 + 8 + lVar20 * 0x10);
      fVar1 = *(float *)(param_6 + lVar20 * 0x10);
      fVar2 = *(float *)(param_6 + 4 + lVar20 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(param_6 + lVar20 * 0x10) = fVar21;
      *(float *)(param_6 + 4 + lVar20 * 0x10) = fVar1;
      lVar15 = *(longlong *)(param_8 + 8 + lVar20 * 0x10);
      fVar6 = *(float *)(param_8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_8 + 4 + lVar20 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(param_8 + lVar20 * 0x10) = fVar22;
      *(float *)(param_8 + 4 + lVar20 * 0x10) = fVar6;
      lVar15 = *(longlong *)(param_7 + 8 + lVar20 * 0x10);
      fVar11 = *(float *)(param_7 + 4 + lVar20 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(param_7 + lVar20 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(param_7 + lVar20 * 0x10) = fVar24;
      *(float *)(param_7 + 4 + lVar20 * 0x10) = fVar13;
      lVar15 = *(longlong *)(param_9 + 8 + lVar20 * 0x10);
      fVar7 = *(float *)(param_9 + lVar20 * 0x10);
      fVar8 = *(float *)(param_9 + 4 + lVar20 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar22 = *(float *)(lVar15 + 0x10);
      *(float *)(param_9 + 4 + lVar20 * 0x10) = fVar7;
      *(float *)(param_9 + lVar20 * 0x10) = fVar23;
      *(float *)(lVar19 + (longlong)param_2) =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * param_10 -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * param_11) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * param_12;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






// 函数: void FUN_1807fa774(undefined8 param_1,float *param_2,uint param_3,int param_4)
void FUN_1807fa774(undefined8 param_1,float *param_2,uint param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
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
  longlong lVar15;
  int iVar16;
  int iVar17;
  longlong in_RAX;
  longlong lVar18;
  longlong unaff_RBX;
  int iVar19;
  undefined8 unaff_RBP;
  float *unaff_RDI;
  longlong lVar20;
  longlong in_R10;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  ulonglong unaff_R15;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  uint in_stack_000000b0;
  longlong in_stack_000000b8;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  iVar19 = (int)param_3 >> 2;
  *(undefined8 *)(in_RAX + -0x28) = unaff_R14;
  if (iVar19 != 0) {
    *(undefined8 *)(in_RAX + 0x10) = unaff_R12;
    *(undefined8 *)(in_RAX + 0x18) = unaff_R13;
    iVar17 = param_4 * 2;
    iVar16 = param_4 * 3;
    do {
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar18 + 0x1c)) - fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(lVar18 + 0x14);
      fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar18 + 0x1c)) - fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      *unaff_RDI = ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
                   (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
                   (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[param_4] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar8 = *(float *)(lVar18 + 0x18);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar22 = (param_2[param_4] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar7 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (param_2[param_4] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[param_4] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[iVar17] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(lVar18 + 0x14);
      fVar8 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar22 = (param_2[iVar17] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar6 * fVar7 + fVar22 * fVar10 + fVar8 * fVar9) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar10 = *(float *)(lVar18 + 0x18);
      fVar23 = (param_2[iVar17] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[iVar17] =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * unaff_XMM8_Da;
      lVar18 = *(longlong *)(in_stack_000000b8 + 8 + unaff_R15 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + unaff_R15 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10);
      fVar3 = *(float *)(lVar18 + 0x18);
      fVar4 = *(float *)(lVar18 + 0x14);
      fVar21 = (param_2[iVar16] - fVar1 * *(float *)(lVar18 + 0x1c)) -
               fVar2 * *(float *)(lVar18 + 0x20);
      fVar5 = *(float *)(lVar18 + 0x10);
      *(float *)(in_stack_000000b8 + unaff_R15 * 0x10) = fVar21;
      *(float *)(in_stack_000000b8 + 4 + unaff_R15 * 0x10) = fVar1;
      lVar18 = *(longlong *)(in_R11 + 8 + unaff_R15 * 0x10);
      fVar6 = *(float *)(in_R11 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + unaff_R15 * 0x10);
      fVar8 = *(float *)(lVar18 + 0x18);
      fVar9 = *(float *)(lVar18 + 0x14);
      fVar22 = (param_2[iVar16] - fVar6 * *(float *)(lVar18 + 0x1c)) -
               fVar7 * *(float *)(lVar18 + 0x20);
      fVar10 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R11 + unaff_R15 * 0x10) = fVar22;
      *(float *)(in_R11 + 4 + unaff_R15 * 0x10) = fVar6;
      lVar18 = *(longlong *)(unaff_RBX + 8 + unaff_R15 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10);
      fVar12 = *(float *)(lVar18 + 0x18);
      fVar13 = *(float *)(unaff_RBX + unaff_R15 * 0x10);
      fVar14 = *(float *)(lVar18 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar18 + 0x1c)) - fVar11 * *(float *)(lVar18 + 0x20);
      fVar6 = *(float *)(lVar18 + 0x10);
      *(float *)(unaff_RBX + unaff_R15 * 0x10) = fVar24;
      *(float *)(unaff_RBX + 4 + unaff_R15 * 0x10) = fVar13;
      lVar18 = *(longlong *)(in_R10 + 8 + unaff_R15 * 0x10);
      fVar7 = *(float *)(in_R10 + unaff_R15 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + unaff_R15 * 0x10);
      fVar9 = *(float *)(lVar18 + 0x18);
      fVar10 = *(float *)(lVar18 + 0x14);
      fVar23 = (param_2[iVar16] - fVar7 * *(float *)(lVar18 + 0x1c)) -
               fVar8 * *(float *)(lVar18 + 0x20);
      fVar22 = *(float *)(lVar18 + 0x10);
      *(float *)(in_R10 + 4 + unaff_R15 * 0x10) = fVar7;
      *(float *)(in_R10 + unaff_R15 * 0x10) = fVar23;
      unaff_RDI[iVar16] =
           ((fVar1 * fVar4 + fVar21 * fVar5 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar24 * fVar6 + fVar13 * fVar14 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar23 * fVar22 + fVar7 * fVar10 + fVar8 * fVar9) * unaff_XMM8_Da;
      unaff_RDI = unaff_RDI + param_4 * 4;
      param_2 = param_2 + param_4 * 4;
      iVar19 = iVar19 + -1;
    } while (iVar19 != 0);
    unaff_R15 = (ulonglong)in_stack_000000b0;
  }
  param_3 = param_3 & 3;
  if (param_3 != 0) {
    lVar18 = (longlong)(int)unaff_R15;
    lVar20 = (longlong)unaff_RDI - (longlong)param_2;
    do {
      lVar15 = *(longlong *)(in_stack_000000b8 + 8 + lVar18 * 0x10);
      fVar1 = *(float *)(in_stack_000000b8 + lVar18 * 0x10);
      fVar2 = *(float *)(in_stack_000000b8 + 4 + lVar18 * 0x10);
      fVar3 = *(float *)(lVar15 + 0x18);
      fVar4 = *(float *)(lVar15 + 0x14);
      fVar21 = (*param_2 - fVar1 * *(float *)(lVar15 + 0x1c)) - fVar2 * *(float *)(lVar15 + 0x20);
      fVar5 = *(float *)(lVar15 + 0x10);
      *(float *)(in_stack_000000b8 + lVar18 * 0x10) = fVar21;
      *(float *)(in_stack_000000b8 + 4 + lVar18 * 0x10) = fVar1;
      lVar15 = *(longlong *)(in_R11 + 8 + lVar18 * 0x10);
      fVar6 = *(float *)(in_R11 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R11 + 4 + lVar18 * 0x10);
      fVar8 = *(float *)(lVar15 + 0x18);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar22 = (*param_2 - fVar6 * *(float *)(lVar15 + 0x1c)) - fVar7 * *(float *)(lVar15 + 0x20);
      fVar10 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R11 + lVar18 * 0x10) = fVar22;
      *(float *)(in_R11 + 4 + lVar18 * 0x10) = fVar6;
      lVar15 = *(longlong *)(unaff_RBX + 8 + lVar18 * 0x10);
      fVar11 = *(float *)(unaff_RBX + 4 + lVar18 * 0x10);
      fVar12 = *(float *)(lVar15 + 0x18);
      fVar13 = *(float *)(unaff_RBX + lVar18 * 0x10);
      fVar14 = *(float *)(lVar15 + 0x14);
      fVar24 = ((fVar22 * fVar10 + fVar6 * fVar9 + fVar7 * fVar8) -
               fVar13 * *(float *)(lVar15 + 0x1c)) - fVar11 * *(float *)(lVar15 + 0x20);
      fVar6 = *(float *)(lVar15 + 0x10);
      *(float *)(unaff_RBX + lVar18 * 0x10) = fVar24;
      *(float *)(unaff_RBX + 4 + lVar18 * 0x10) = fVar13;
      lVar15 = *(longlong *)(in_R10 + 8 + lVar18 * 0x10);
      fVar7 = *(float *)(in_R10 + lVar18 * 0x10);
      fVar8 = *(float *)(in_R10 + 4 + lVar18 * 0x10);
      fVar9 = *(float *)(lVar15 + 0x14);
      fVar10 = *(float *)(lVar15 + 0x18);
      fVar23 = (*param_2 - fVar7 * *(float *)(lVar15 + 0x1c)) - fVar8 * *(float *)(lVar15 + 0x20);
      fVar22 = *(float *)(lVar15 + 0x10);
      *(float *)(in_R10 + 4 + lVar18 * 0x10) = fVar7;
      *(float *)(in_R10 + lVar18 * 0x10) = fVar23;
      *(float *)(lVar20 + (longlong)param_2) =
           ((fVar21 * fVar5 + fVar1 * fVar4 + fVar2 * fVar3) * unaff_XMM10_Da -
           (fVar13 * fVar14 + fVar24 * fVar6 + fVar11 * fVar12) * unaff_XMM9_Da) +
           (fVar7 * fVar9 + fVar23 * fVar22 + fVar8 * fVar10) * unaff_XMM8_Da;
      param_2 = param_2 + param_4;
      param_3 = param_3 - 1;
    } while (param_3 != 0);
  }
  return;
}






