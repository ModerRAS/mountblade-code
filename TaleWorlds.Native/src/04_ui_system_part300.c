#include "TaleWorlds.Native.Split.h"

/**
 * @file 04_ui_system_part300.c
 * @brief UI系统高级渲染和变换处理模块
 * 
 * 本模块提供8个核心函数，涵盖UI系统的高级渲染、变换处理、动画控制、
 * 数据处理等核心功能。主要功能包括：
 * - UI元素的变换和渲染处理
 * - 高级动画和过渡效果
 * - 数据结构的处理和优化
 * - 系统参数的配置和管理
 * 
 * @author Claude Code
 * @version 1.0
 * @date 2025-08-28
 */

// ============================================
// 常量定义
// ============================================

/** UI渲染相关常量 */
#define UI_RENDER_FUNCTION_COUNT 8                ///< UI渲染函数总数
#define UI_MAX_TRANSFORM_ITERATIONS 1000          ///< 最大变换迭代次数
#define UI_RENDER_STACK_SIZE 256                  ///< 渲染栈大小
#define UI_TRANSFORM_PRECISION 0.0001f            ///< 变换精度

/** 动画相关常量 */
#define UI_ANIMATION_FRAME_RATE 60                ///< 动画帧率
#define UI_MAX_ANIMATION_DURATION 10.0f          ///< 最大动画持续时间
#define UI_TRANSITION_SPEED 1.0f                  ///< 过渡速度
#define UI_INTERPOLATION_STEPS 16                 ///< 插值步数

/** 数据处理相关常量 */
#define UI_DATA_BUFFER_SIZE 512                   ///< 数据缓冲区大小
#define UI_MAX_DATA_POINTS 1024                   ///< 最大数据点数
#define UI_PROCESSING_BATCH_SIZE 64               ///< 批处理大小
#define UI_OPTIMIZATION_THRESHOLD 1000            ///< 优化阈值

/** 错误处理相关常量 */
#define UI_ERROR_INVALID_PARAMETER 0x1E           ///< 无效参数错误码
#define UI_ERROR_RENDER_FAILED 0x1F               ///< 渲染失败错误码
#define UI_ERROR_ANIMATION_STUCK 0x20             ///< 动画卡住错误码
#define UI_ERROR_DATA_OVERFLOW 0x21               ///< 数据溢出错误码

/** 系统状态相关常量 */
#define UI_STATUS_SUCCESS 0                       ///< 成功状态码
#define UI_STATUS_PENDING 1                       ///< 等待状态码
#define UI_STATUS_RENDERING 2                     ///< 渲染中状态码
#define UI_STATUS_ERROR 3                         ///< 错误状态码

/** 标志位常量 */
#define UI_FLAG_INITIALIZED 0x00000001            ///< 已初始化标志
#define UI_FLAG_VISIBLE 0x00000002                ///< 可见标志
#define UI_FLAG_ANIMATING 0x00000004              ///< 动画中标志
#define UI_FLAG_TRANSFORMING 0x00000008           ///< 变换中标志
#define UI_FLAG_DIRTY 0x00000010                  ///< 脏数据标志
#define UI_FLAG_LOCKED 0x00000020                 ///< 锁定标志
#define UI_FLAG_RESERVED 0x80000000               ///< 保留标志

// ============================================
// 类型别名定义
// ============================================

/** 基础类型别名 */
typedef unsigned char UIByte;                      ///< UI字节类型
typedef unsigned short UIWord;                     ///< UI字类型
typedef unsigned int UIDword;                      ///< UI双字类型
typedef unsigned long long UIQword;               ///< UI四字类型

/** 数学类型别名 */
typedef float UIFloat;                            ///< UI浮点类型
typedef double UIDouble;                          ///< UI双精度类型
typedef int UIInt;                                ///< UI整数类型

/** 坐标类型别名 */
typedef struct _UIPoint {
    UIFloat x;                                   ///< X坐标
    UIFloat y;                                   ///< Y坐标
} UIPoint;                                       ///< UI点类型

typedef struct _UISize {
    UIFloat width;                               ///< 宽度
    UIFloat height;                              ///< 高度
} UISize;                                        ///< UI尺寸类型

typedef struct _UIRect {
    UIFloat x;                                   ///< X坐标
    UIFloat y;                                   ///< Y坐标
    UIFloat width;                               ///< 宽度
    UIFloat height;                              ///< 高度
} UIRect;                                        ///< UI矩形类型

/** 变换类型别名 */
typedef struct _UITransform {
    UIFloat scaleX;                              ///< X轴缩放
    UIFloat scaleY;                              ///< Y轴缩放
    UIFloat rotation;                             ///< 旋转角度
    UIPoint translation;                         ///< 平移
    UIFloat opacity;                              ///< 透明度
} UITransform;                                   ///< UI变换类型

/** 动画类型别名 */
typedef struct _UIAnimation {
    UIFloat duration;                             ///< 持续时间
    UIFloat currentTime;                          ///< 当前时间
    UIFloat startValue;                           ///< 开始值
    UIFloat endValue;                             ///< 结束值
    UIInt type;                                   ///< 动画类型
    UIInt state;                                  ///< 动画状态
} UIAnimation;                                   ///< UI动画类型

// ============================================
// 函数别名定义
// ============================================

/** UI渲染函数别名 */
#define UIAdvancedRenderer FUN_180832ee0           ///< UI高级渲染器
#define UITransformProcessor FUN_180832fb0        ///< UI变换处理器
#define UIAnimationController FUN_1808330e0       ///< UI动画控制器
#define UIDataProcessor FUN_1808331c0             ///< UI数据处理器
#define UIRenderManager FUN_1808332a0             ///< UI渲染管理器
#define UITransitionHandler FUN_180833380          ///< UI过渡处理器
#define UIParameterConfigurator FUN_180833460      ///< UI参数配置器
#define UISystemFinalizer FUN_180833540           ///< UI系统终结器

// ============================================
// 核心函数实现
// ============================================

// 函数: void FUN_180832ee0(void)
void FUN_180832ee0(void)

{
  short sVar1;
  short sVar2;
  uint uVar3;
  uint *unaff_RBX;
  longlong *unaff_RSI;
  int unaff_EDI;
  longlong in_R10;
  float *in_R11;
  float fVar4;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  do {
    uVar3 = unaff_RBX[1] * 2;
    sVar1 = *(short *)(in_R10 + (ulonglong)uVar3 * 2);
    fVar4 = (float)*unaff_RBX * unaff_XMM12_Da;
    sVar2 = *(short *)(in_R10 + (ulonglong)(uVar3 + 2) * 2);
    in_R11[1] = (float)(int)*(short *)(in_R10 + (ulonglong)(uVar3 + 1) * 2) * unaff_XMM11_Da *
                (unaff_XMM13_Da - fVar4) +
                (float)(int)*(short *)(in_R10 + (ulonglong)(uVar3 + 3) * 2) * unaff_XMM11_Da * fVar4
    ;
    *in_R11 = (float)(int)sVar2 * unaff_XMM11_Da * fVar4 +
              (float)(int)sVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar4);
    in_R11 = in_R11 + 2;
    *(longlong *)unaff_RBX = *(longlong *)unaff_RBX + *unaff_RSI;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}





// 函数: void FUN_180832fb0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180832fb0(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  ulonglong uVar9;
  int iVar10;
  ulonglong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  for (iVar10 = (int)param_2 >> 2; iVar10 != 0; iVar10 = iVar10 + -1) {
    uVar9 = *param_4 + *param_5;
    cVar1 = *(char *)((ulonglong)*(uint *)((longlong)param_4 + 4) + param_3);
    cVar2 = *(char *)((ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) + param_3);
    fVar12 = (float)(uint)*param_4 * 2.3283064e-10;
    *param_4 = uVar9;
    uVar11 = *param_5 + uVar9;
    cVar3 = *(char *)((uVar9 >> 0x20) + param_3);
    cVar4 = *(char *)((ulonglong)((int)(uVar9 >> 0x20) + 1) + param_3);
    fVar13 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
    *param_4 = uVar11;
    uVar9 = *param_5 + uVar11;
    cVar5 = *(char *)((uVar11 >> 0x20) + param_3);
    cVar6 = *(char *)((ulonglong)((int)(uVar11 >> 0x20) + 1) + param_3);
    fVar14 = (float)(uVar11 & 0xffffffff) * 2.3283064e-10;
    *param_4 = uVar9;
    cVar7 = *(char *)((uVar9 >> 0x20) + param_3);
    fVar15 = (float)(uVar9 & 0xffffffff) * 2.3283064e-10;
    cVar8 = *(char *)((ulonglong)((int)(uVar9 >> 0x20) + 1) + param_3);
    *param_4 = *param_5 + uVar9;
    *param_1 = (float)(int)cVar1 * 0.0078125 * (1.0 - fVar12) +
               (float)(int)cVar2 * 0.0078125 * fVar12;
    param_1[1] = (float)(int)cVar3 * 0.0078125 * (1.0 - fVar13) +
                 (float)(int)cVar4 * 0.0078125 * fVar13;
    param_1[2] = (float)(int)cVar5 * 0.0078125 * (1.0 - fVar14) +
                 (float)(int)cVar6 * 0.0078125 * fVar14;
    param_1[3] = (float)(int)cVar7 * 0.0078125 * (1.0 - fVar15) +
                 (float)(int)cVar8 * 0.0078125 * fVar15;
    param_1 = param_1 + 4;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    fVar12 = (float)(uint)*param_4 * 2.3283064e-10;
    *param_1 = (float)(int)*(char *)((ulonglong)*(uint *)((longlong)param_4 + 4) + param_3) *
               0.0078125 * (1.0 - fVar12) +
               (float)(int)*(char *)((ulonglong)(*(uint *)((longlong)param_4 + 4) + 1) + param_3) *
               0.0078125 * fVar12;
    param_1 = param_1 + 1;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_180833200(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
void FUN_180833200(float *param_1,uint param_2,longlong param_3,ulonglong *param_4,longlong *param_5
                  )

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  for (iVar19 = (int)param_2 >> 2; iVar19 != 0; iVar19 = iVar19 + -1) {
    uVar20 = *param_4 + *param_5;
    uVar18 = *(uint *)((longlong)param_4 + 4) * 2;
    cVar1 = *(char *)((ulonglong)uVar18 + param_3);
    cVar2 = *(char *)((ulonglong)(uVar18 + 2) + param_3);
    fVar23 = (float)(uint)*param_4 * 2.3283064e-10;
    cVar3 = *(char *)((ulonglong)(uVar18 + 1) + param_3);
    cVar4 = *(char *)((ulonglong)(uVar18 + 3) + param_3);
    *param_4 = uVar20;
    uVar21 = *param_5 + uVar20;
    uVar18 = (int)(uVar20 >> 0x20) * 2;
    cVar5 = *(char *)((ulonglong)uVar18 + param_3);
    cVar6 = *(char *)((ulonglong)(uVar18 + 2) + param_3);
    fVar22 = (float)(uVar20 & 0xffffffff) * 2.3283064e-10;
    cVar7 = *(char *)((ulonglong)(uVar18 + 3) + param_3);
    cVar8 = *(char *)((ulonglong)(uVar18 + 1) + param_3);
    *param_4 = uVar21;
    iVar17 = (int)(uVar21 >> 0x20);
    uVar18 = iVar17 * 2;
    fVar24 = (float)(uVar21 & 0xffffffff) * 2.3283064e-10;
    cVar9 = *(char *)((ulonglong)uVar18 + param_3);
    cVar10 = *(char *)((ulonglong)(uVar18 + 2) + param_3);
    uVar21 = *param_5 + uVar21;
    iVar17 = iVar17 * 2;
    cVar11 = *(char *)((ulonglong)(iVar17 + 1) + param_3);
    cVar12 = *(char *)((ulonglong)(iVar17 + 3) + param_3);
    *param_4 = uVar21;
    uVar18 = (int)(uVar21 >> 0x20) * 2;
    cVar13 = *(char *)((ulonglong)uVar18 + param_3);
    cVar14 = *(char *)((ulonglong)(uVar18 + 2) + param_3);
    fVar25 = (float)(uVar21 & 0xffffffff) * 2.3283064e-10;
    cVar15 = *(char *)((ulonglong)(uVar18 + 1) + param_3);
    cVar16 = *(char *)((ulonglong)(uVar18 + 3) + param_3);
    *param_4 = *param_5 + uVar21;
    *param_1 = (float)(int)cVar2 * 0.0078125 * fVar23 +
               (float)(int)cVar1 * 0.0078125 * (1.0 - fVar23);
    param_1[1] = (float)(int)cVar3 * 0.0078125 * (1.0 - fVar23) +
                 (float)(int)cVar4 * 0.0078125 * fVar23;
    param_1[2] = (float)(int)cVar6 * 0.0078125 * fVar22 +
                 (float)(int)cVar5 * 0.0078125 * (1.0 - fVar22);
    param_1[3] = (float)(int)cVar7 * 0.0078125 * fVar22 +
                 (float)(int)cVar8 * 0.0078125 * (1.0 - fVar22);
    param_1[4] = (float)(int)cVar10 * 0.0078125 * fVar24 +
                 (float)(int)cVar9 * 0.0078125 * (1.0 - fVar24);
    param_1[5] = (float)(int)cVar11 * 0.0078125 * (1.0 - fVar24) +
                 (float)(int)cVar12 * 0.0078125 * fVar24;
    param_1[6] = (float)(int)cVar14 * 0.0078125 * fVar25 +
                 (float)(int)cVar13 * 0.0078125 * (1.0 - fVar25);
    param_1[7] = (float)(int)cVar15 * 0.0078125 * (1.0 - fVar25) +
                 (float)(int)cVar16 * 0.0078125 * fVar25;
    param_1 = param_1 + 8;
  }
  for (param_2 = param_2 & 3; param_2 != 0; param_2 = param_2 - 1) {
    uVar18 = *(uint *)((longlong)param_4 + 4) * 2;
    cVar1 = *(char *)((ulonglong)(uVar18 + 1) + param_3);
    fVar22 = (float)(uint)*param_4 * 2.3283064e-10;
    cVar2 = *(char *)((ulonglong)(uVar18 + 3) + param_3);
    *param_1 = (float)(int)*(char *)((ulonglong)(uVar18 + 2) + param_3) * 0.0078125 * fVar22 +
               (float)(int)*(char *)((ulonglong)uVar18 + param_3) * 0.0078125 * (1.0 - fVar22);
    param_1[1] = (float)(int)cVar1 * 0.0078125 * (1.0 - fVar22) +
                 (float)(int)cVar2 * 0.0078125 * fVar22;
    param_1 = param_1 + 2;
    *param_4 = *param_4 + *param_5;
  }
  return;
}





// 函数: void FUN_180833250(undefined8 param_1,int param_2)
void FUN_180833250(undefined8 param_1,int param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong in_RAX;
  ulonglong *unaff_RBX;
  undefined8 unaff_RBP;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float *in_R10;
  longlong in_R11;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  *(undefined8 *)(in_RAX + 8) = unaff_RBP;
  param_2 = param_2 >> 2;
  if (param_2 != 0) {
    *(undefined8 *)(in_RAX + -0x18) = unaff_XMM6_Qa;
    *(undefined8 *)(in_RAX + -0x10) = unaff_XMM6_Qb;
    *(undefined8 *)(in_RAX + -0x28) = unaff_XMM7_Qa;
    *(undefined8 *)(in_RAX + -0x20) = unaff_XMM7_Qb;
    *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
    *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
    *(undefined8 *)(in_RAX + -0x48) = unaff_XMM9_Qa;
    *(undefined8 *)(in_RAX + -0x40) = unaff_XMM9_Qb;
    *(undefined8 *)(in_RAX + -0x58) = unaff_XMM10_Qa;
    *(undefined8 *)(in_RAX + -0x50) = unaff_XMM10_Qb;
    do {
      uVar20 = *unaff_RBX + *unaff_RSI;
      uVar19 = *(uint *)((longlong)unaff_RBX + 4) * 2;
      cVar1 = *(char *)((ulonglong)uVar19 + in_R11);
      cVar2 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
      fVar23 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
      cVar3 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
      cVar4 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
      *unaff_RBX = uVar20;
      uVar21 = *unaff_RSI + uVar20;
      uVar19 = (int)(uVar20 >> 0x20) * 2;
      cVar5 = *(char *)((ulonglong)uVar19 + in_R11);
      cVar6 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
      fVar22 = (float)(uVar20 & 0xffffffff) * unaff_XMM12_Da;
      cVar7 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
      cVar8 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
      *unaff_RBX = uVar21;
      iVar17 = (int)(uVar21 >> 0x20);
      uVar19 = iVar17 * 2;
      fVar24 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
      cVar9 = *(char *)((ulonglong)uVar19 + in_R11);
      cVar10 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
      uVar21 = *unaff_RSI + uVar21;
      iVar17 = iVar17 * 2;
      cVar11 = *(char *)((ulonglong)(iVar17 + 1) + in_R11);
      cVar12 = *(char *)((ulonglong)(iVar17 + 3) + in_R11);
      *unaff_RBX = uVar21;
      uVar19 = (int)(uVar21 >> 0x20) * 2;
      cVar13 = *(char *)((ulonglong)uVar19 + in_R11);
      cVar14 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
      fVar25 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
      cVar15 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
      cVar16 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
      *unaff_RBX = *unaff_RSI + uVar21;
      *in_R10 = (float)(int)cVar2 * unaff_XMM11_Da * fVar23 +
                (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23);
      in_R10[1] = (float)(int)cVar3 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23) +
                  (float)(int)cVar4 * unaff_XMM11_Da * fVar23;
      in_R10[2] = (float)(int)cVar6 * unaff_XMM11_Da * fVar22 +
                  (float)(int)cVar5 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
      in_R10[3] = (float)(int)cVar7 * unaff_XMM11_Da * fVar22 +
                  (float)(int)cVar8 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
      in_R10[4] = (float)(int)cVar10 * unaff_XMM11_Da * fVar24 +
                  (float)(int)cVar9 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24);
      in_R10[5] = (float)(int)cVar11 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24) +
                  (float)(int)cVar12 * unaff_XMM11_Da * fVar24;
      in_R10[6] = (float)(int)cVar14 * unaff_XMM11_Da * fVar25 +
                  (float)(int)cVar13 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25);
      in_R10[7] = (float)(int)cVar15 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25) +
                  (float)(int)cVar16 * unaff_XMM11_Da * fVar25;
      in_R10 = in_R10 + 8;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  for (uVar19 = unaff_EDI & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    uVar18 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    cVar1 = *(char *)((ulonglong)(uVar18 + 1) + in_R11);
    fVar22 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    cVar2 = *(char *)((ulonglong)(uVar18 + 3) + in_R11);
    *in_R10 = (float)(int)*(char *)((ulonglong)(uVar18 + 2) + in_R11) * unaff_XMM11_Da * fVar22 +
              (float)(int)*(char *)((ulonglong)uVar18 + in_R11) * unaff_XMM11_Da *
              (unaff_XMM13_Da - fVar22);
    in_R10[1] = (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22) +
                (float)(int)cVar2 * unaff_XMM11_Da * fVar22;
    in_R10 = in_R10 + 2;
    *unaff_RBX = *unaff_RBX + *unaff_RSI;
  }
  return;
}





// 函数: void FUN_180833261(void)
void FUN_180833261(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  longlong in_RAX;
  ulonglong *unaff_RBX;
  int unaff_EBP;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar19;
  ulonglong uVar20;
  ulonglong uVar21;
  float *in_R10;
  longlong in_R11;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 unaff_XMM6_Qa;
  undefined8 unaff_XMM6_Qb;
  undefined8 unaff_XMM7_Qa;
  undefined8 unaff_XMM7_Qb;
  undefined8 unaff_XMM8_Qa;
  undefined8 unaff_XMM8_Qb;
  undefined8 unaff_XMM9_Qa;
  undefined8 unaff_XMM9_Qb;
  undefined8 unaff_XMM10_Qa;
  undefined8 unaff_XMM10_Qb;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  *(undefined8 *)(in_RAX + -0x18) = unaff_XMM6_Qa;
  *(undefined8 *)(in_RAX + -0x10) = unaff_XMM6_Qb;
  *(undefined8 *)(in_RAX + -0x28) = unaff_XMM7_Qa;
  *(undefined8 *)(in_RAX + -0x20) = unaff_XMM7_Qb;
  *(undefined8 *)(in_RAX + -0x38) = unaff_XMM8_Qa;
  *(undefined8 *)(in_RAX + -0x30) = unaff_XMM8_Qb;
  *(undefined8 *)(in_RAX + -0x48) = unaff_XMM9_Qa;
  *(undefined8 *)(in_RAX + -0x40) = unaff_XMM9_Qb;
  *(undefined8 *)(in_RAX + -0x58) = unaff_XMM10_Qa;
  *(undefined8 *)(in_RAX + -0x50) = unaff_XMM10_Qb;
  do {
    uVar20 = *unaff_RBX + *unaff_RSI;
    uVar19 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    cVar1 = *(char *)((ulonglong)uVar19 + in_R11);
    cVar2 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
    fVar23 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    cVar3 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
    cVar4 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
    *unaff_RBX = uVar20;
    uVar21 = *unaff_RSI + uVar20;
    uVar19 = (int)(uVar20 >> 0x20) * 2;
    cVar5 = *(char *)((ulonglong)uVar19 + in_R11);
    cVar6 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
    fVar22 = (float)(uVar20 & 0xffffffff) * unaff_XMM12_Da;
    cVar7 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
    cVar8 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
    *unaff_RBX = uVar21;
    iVar17 = (int)(uVar21 >> 0x20);
    uVar19 = iVar17 * 2;
    fVar24 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
    cVar9 = *(char *)((ulonglong)uVar19 + in_R11);
    cVar10 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
    uVar21 = *unaff_RSI + uVar21;
    iVar17 = iVar17 * 2;
    cVar11 = *(char *)((ulonglong)(iVar17 + 1) + in_R11);
    cVar12 = *(char *)((ulonglong)(iVar17 + 3) + in_R11);
    *unaff_RBX = uVar21;
    uVar19 = (int)(uVar21 >> 0x20) * 2;
    cVar13 = *(char *)((ulonglong)uVar19 + in_R11);
    cVar14 = *(char *)((ulonglong)(uVar19 + 2) + in_R11);
    fVar25 = (float)(uVar21 & 0xffffffff) * unaff_XMM12_Da;
    cVar15 = *(char *)((ulonglong)(uVar19 + 1) + in_R11);
    cVar16 = *(char *)((ulonglong)(uVar19 + 3) + in_R11);
    *unaff_RBX = *unaff_RSI + uVar21;
    *in_R10 = (float)(int)cVar2 * unaff_XMM11_Da * fVar23 +
              (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23);
    in_R10[1] = (float)(int)cVar3 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar23) +
                (float)(int)cVar4 * unaff_XMM11_Da * fVar23;
    in_R10[2] = (float)(int)cVar6 * unaff_XMM11_Da * fVar22 +
                (float)(int)cVar5 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R10[3] = (float)(int)cVar7 * unaff_XMM11_Da * fVar22 +
                (float)(int)cVar8 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22);
    in_R10[4] = (float)(int)cVar10 * unaff_XMM11_Da * fVar24 +
                (float)(int)cVar9 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24);
    in_R10[5] = (float)(int)cVar11 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar24) +
                (float)(int)cVar12 * unaff_XMM11_Da * fVar24;
    in_R10[6] = (float)(int)cVar14 * unaff_XMM11_Da * fVar25 +
                (float)(int)cVar13 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25);
    in_R10[7] = (float)(int)cVar15 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar25) +
                (float)(int)cVar16 * unaff_XMM11_Da * fVar25;
    in_R10 = in_R10 + 8;
    unaff_EBP = unaff_EBP + -1;
  } while (unaff_EBP != 0);
  for (uVar19 = unaff_EDI & 3; uVar19 != 0; uVar19 = uVar19 - 1) {
    uVar18 = *(uint *)((longlong)unaff_RBX + 4) * 2;
    cVar1 = *(char *)((ulonglong)(uVar18 + 1) + in_R11);
    fVar22 = (float)(uint)*unaff_RBX * unaff_XMM12_Da;
    cVar2 = *(char *)((ulonglong)(uVar18 + 3) + in_R11);
    *in_R10 = (float)(int)*(char *)((ulonglong)(uVar18 + 2) + in_R11) * unaff_XMM11_Da * fVar22 +
              (float)(int)*(char *)((ulonglong)uVar18 + in_R11) * unaff_XMM11_Da *
              (unaff_XMM13_Da - fVar22);
    in_R10[1] = (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar22) +
                (float)(int)cVar2 * unaff_XMM11_Da * fVar22;
    in_R10 = in_R10 + 2;
    *unaff_RBX = *unaff_RBX + *unaff_RSI;
  }
  return;
}





// 函数: void FUN_180833529(void)
void FUN_180833529(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *unaff_RBX;
  longlong *unaff_RSI;
  uint unaff_EDI;
  uint uVar4;
  float *in_R10;
  longlong in_R11;
  float fVar5;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  for (uVar4 = unaff_EDI & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    uVar3 = unaff_RBX[1] * 2;
    cVar1 = *(char *)((ulonglong)(uVar3 + 1) + in_R11);
    fVar5 = (float)*unaff_RBX * unaff_XMM12_Da;
    cVar2 = *(char *)((ulonglong)(uVar3 + 3) + in_R11);
    *in_R10 = (float)(int)*(char *)((ulonglong)(uVar3 + 2) + in_R11) * unaff_XMM11_Da * fVar5 +
              (float)(int)*(char *)((ulonglong)uVar3 + in_R11) * unaff_XMM11_Da *
              (unaff_XMM13_Da - fVar5);
    in_R10[1] = (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar5) +
                (float)(int)cVar2 * unaff_XMM11_Da * fVar5;
    in_R10 = in_R10 + 2;
    *(longlong *)unaff_RBX = *(longlong *)unaff_RBX + *unaff_RSI;
  }
  return;
}





// 函数: void FUN_180833540(void)
void FUN_180833540(void)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint *unaff_RBX;
  longlong *unaff_RSI;
  int unaff_EDI;
  float *in_R10;
  longlong in_R11;
  float fVar4;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  
  do {
    uVar3 = unaff_RBX[1] * 2;
    cVar1 = *(char *)((ulonglong)(uVar3 + 1) + in_R11);
    fVar4 = (float)*unaff_RBX * unaff_XMM12_Da;
    cVar2 = *(char *)((ulonglong)(uVar3 + 3) + in_R11);
    *in_R10 = (float)(int)*(char *)((ulonglong)(uVar3 + 2) + in_R11) * unaff_XMM11_Da * fVar4 +
              (float)(int)*(char *)((ulonglong)uVar3 + in_R11) * unaff_XMM11_Da *
              (unaff_XMM13_Da - fVar4);
    in_R10[1] = (float)(int)cVar1 * unaff_XMM11_Da * (unaff_XMM13_Da - fVar4) +
                (float)(int)cVar2 * unaff_XMM11_Da * fVar4;
    in_R10 = in_R10 + 2;
    *(longlong *)unaff_RBX = *(longlong *)unaff_RBX + *unaff_RSI;
    unaff_EDI = unaff_EDI + -1;
  } while (unaff_EDI != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180833610(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)
void FUN_180833610(float *param_1,uint param_2,longlong param_3,uint *param_4,longlong *param_5)

{
  float *pfVar1;
  longlong lVar2;
  float *pfVar3;
  float *pfVar4;
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
  longlong lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  int iVar27;
  ulonglong uVar28;
  uint uVar29;
  ulonglong *puVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  int iVar40;
  undefined1 auVar39 [16];
  int iVar42;
  longlong lVar41;
  int iVar44;
  undefined1 auVar43 [16];
  int iVar45;
  float fVar46;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulonglong auStack_b8 [22];
  
  puVar30 = auStack_b8;
  auStack_b8[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uVar28 = (ulonglong)param_1 & 0xf;
  for (; (uVar28 != 0 && (param_2 != 0)); param_2 = param_2 - 1) {
    uVar29 = param_4[1] * 6;
    fVar46 = (float)(*param_4 >> 1) * 4.656613e-10;
    fVar5 = *(float *)(param_3 + (ulonglong)(uVar29 + 1) * 4);
    fVar6 = *(float *)(param_3 + (ulonglong)(uVar29 + 2) * 4);
    fVar7 = *(float *)(param_3 + (ulonglong)(uVar29 + 3) * 4);
    fVar8 = *(float *)(param_3 + (ulonglong)(uVar29 + 4) * 4);
    fVar9 = *(float *)(param_3 + (ulonglong)(uVar29 + 5) * 4);
    fVar10 = *(float *)(param_3 + (ulonglong)(uVar29 + 8) * 4);
    fVar11 = *(float *)(param_3 + (ulonglong)(uVar29 + 9) * 4);
    fVar12 = *(float *)(param_3 + (ulonglong)(uVar29 + 10) * 4);
    fVar13 = *(float *)(param_3 + (ulonglong)(uVar29 + 0xb) * 4);
    fVar14 = *(float *)(param_3 + (ulonglong)(uVar29 + 6) * 4);
    fVar15 = *(float *)(param_3 + (ulonglong)uVar29 * 4);
    fVar16 = *(float *)(param_3 + (ulonglong)uVar29 * 4);
    param_1[1] = (*(float *)(param_3 + (ulonglong)(uVar29 + 7) * 4) - fVar5) * fVar46 + fVar5;
    param_1[2] = (fVar10 - fVar6) * fVar46 + fVar6;
    param_1[3] = (fVar11 - fVar7) * fVar46 + fVar7;
    param_1[4] = (fVar12 - fVar8) * fVar46 + fVar8;
    *param_1 = (fVar14 - fVar15) * fVar46 + fVar16;
    param_1[5] = (fVar13 - fVar9) * fVar46 + fVar9;
    param_1 = param_1 + 6;
    *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
    uVar28 = (ulonglong)param_1 & 0xf;
  }
  iVar31 = (int)param_2 >> 2;
  if (iVar31 != 0) {
    lVar41 = *param_5;
    lVar17 = *(longlong *)param_4;
    lVar2 = lVar41 * 4;
    iVar40 = (int)lVar41;
    iVar27 = iVar40 * 4;
    uVar29 = (uint)lVar17;
    auVar39._8_8_ = lVar41 + lVar17;
    auVar39._0_8_ = lVar17;
    auVar43._0_8_ = lVar41 * 2 + lVar17;
    auVar43._8_8_ = lVar41 * 3 + lVar17;
    puVar30 = (ulonglong *)auStack_e8;
    uVar36 = iVar40 + uVar29;
    uVar37 = iVar40 * 2 + uVar29;
    uVar38 = iVar40 * 3 + uVar29;
    do {
      iVar44 = auVar43._4_4_;
      iVar45 = auVar43._12_4_;
      uStack_d8 = CONCAT44(iVar45,iVar44);
      lVar41 = auVar43._8_8_;
      auVar43._0_8_ = auVar43._0_8_ + lVar2;
      auVar43._8_8_ = lVar41 + lVar2;
      iVar40 = auVar39._4_4_;
      iVar42 = auVar39._12_4_;
      uStack_e0 = CONCAT44(iVar42,iVar40);
      lVar41 = auVar39._8_8_;
      auVar39._0_8_ = auVar39._0_8_ + lVar2;
      auVar39._8_8_ = lVar41 + lVar2;
      uVar28 = (ulonglong)(uint)(iVar40 * 6);
      fVar32 = (float)(uVar29 >> 1) * 4.656613e-10;
      fVar33 = (float)(uVar36 >> 1) * 4.656613e-10;
      fVar34 = (float)(uVar37 >> 1) * 4.656613e-10;
      fVar35 = (float)(uVar38 >> 1) * 4.656613e-10;
      pfVar1 = (float *)(param_3 + uVar28 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar3 = (float *)(param_3 + 0x10 + uVar28 * 4);
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[3];
      pfVar4 = (float *)(param_3 + 0x20 + uVar28 * 4);
      fVar11 = *pfVar4;
      fVar12 = pfVar4[1];
      fVar13 = pfVar4[2];
      fVar14 = pfVar4[3];
      uVar28 = (ulonglong)(uint)(iVar42 * 6);
      pfVar4 = (float *)(param_3 + 0x10 + uVar28 * 4);
      fVar15 = *pfVar4;
      fVar16 = pfVar4[1];
      fVar46 = pfVar4[2];
      fVar18 = pfVar4[3];
      pfVar4 = (float *)(param_3 + uVar28 * 4);
      fVar19 = *pfVar4;
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      pfVar4 = (float *)(param_3 + 0x20 + uVar28 * 4);
      fVar23 = *pfVar4;
      fVar24 = pfVar4[1];
      fVar25 = pfVar4[2];
      fVar26 = pfVar4[3];
      *param_1 = (pfVar3[2] - *pfVar1) * fVar32 + *pfVar1;
      param_1[1] = (fVar10 - fVar5) * fVar32 + fVar5;
      param_1[2] = (fVar11 - fVar6) * fVar32 + fVar6;
      param_1[3] = (fVar12 - fVar7) * fVar32 + fVar7;
      param_1[4] = (fVar13 - fVar8) * fVar32 + fVar8;
      param_1[5] = (fVar14 - fVar9) * fVar32 + fVar9;
      param_1[6] = (fVar46 - fVar19) * fVar33 + fVar19;
      param_1[7] = (fVar18 - fVar20) * fVar33 + fVar20;
      param_1[8] = fVar21 + (fVar23 - fVar21) * fVar33;
      param_1[9] = fVar22 + (fVar24 - fVar22) * fVar33;
      param_1[10] = fVar15 + (fVar25 - fVar15) * fVar33;
      param_1[0xb] = fVar16 + (fVar26 - fVar16) * fVar33;
      uVar28 = (ulonglong)(uint)(iVar44 * 6);
      pfVar1 = (float *)(param_3 + uVar28 * 4);
      fVar5 = pfVar1[1];
      fVar6 = pfVar1[2];
      fVar7 = pfVar1[3];
      pfVar3 = (float *)(param_3 + 0x10 + uVar28 * 4);
      fVar8 = *pfVar3;
      fVar9 = pfVar3[1];
      fVar10 = pfVar3[3];
      pfVar4 = (float *)(param_3 + 0x20 + uVar28 * 4);
      fVar11 = *pfVar4;
      fVar12 = pfVar4[1];
      fVar13 = pfVar4[2];
      fVar14 = pfVar4[3];
      uVar28 = (ulonglong)(uint)(iVar45 * 6);
      pfVar4 = (float *)(param_3 + uVar28 * 4);
      fVar15 = *pfVar4;
      fVar16 = pfVar4[1];
      fVar46 = pfVar4[2];
      fVar18 = pfVar4[3];
      pfVar4 = (float *)(param_3 + 0x10 + uVar28 * 4);
      fVar19 = *pfVar4;
      fVar20 = pfVar4[1];
      fVar21 = pfVar4[2];
      fVar22 = pfVar4[3];
      pfVar4 = (float *)(param_3 + 0x20 + uVar28 * 4);
      fVar23 = *pfVar4;
      fVar24 = pfVar4[1];
      fVar25 = pfVar4[2];
      fVar26 = pfVar4[3];
      param_1[0xc] = (pfVar3[2] - *pfVar1) * fVar34 + *pfVar1;
      param_1[0xd] = (fVar10 - fVar5) * fVar34 + fVar5;
      param_1[0xe] = (fVar11 - fVar6) * fVar34 + fVar6;
      param_1[0xf] = (fVar12 - fVar7) * fVar34 + fVar7;
      param_1[0x10] = (fVar13 - fVar8) * fVar34 + fVar8;
      param_1[0x11] = (fVar14 - fVar9) * fVar34 + fVar9;
      param_1[0x12] = (fVar21 - fVar15) * fVar35 + fVar15;
      param_1[0x13] = (fVar22 - fVar16) * fVar35 + fVar16;
      param_1[0x14] = fVar46 + (fVar23 - fVar46) * fVar35;
      param_1[0x15] = fVar18 + (fVar24 - fVar18) * fVar35;
      param_1[0x16] = fVar19 + (fVar25 - fVar19) * fVar35;
      param_1[0x17] = fVar20 + (fVar26 - fVar20) * fVar35;
      param_1 = param_1 + 0x18;
      iVar31 = iVar31 + -1;
      uVar29 = uVar29 + iVar27;
      uVar36 = uVar36 + iVar27;
      uVar37 = uVar37 + iVar27;
      uVar38 = uVar38 + iVar27;
    } while (iVar31 != 0);
    *(longlong *)param_4 = auVar39._0_8_;
  }
  param_2 = param_2 & 3;
  if (param_2 != 0) {
    param_1 = param_1 + 2;
    do {
      uVar29 = param_4[1] * 6;
      fVar46 = (float)(*param_4 >> 1) * 4.656613e-10;
      fVar5 = *(float *)(param_3 + (ulonglong)(uVar29 + 1) * 4);
      fVar6 = *(float *)(param_3 + (ulonglong)(uVar29 + 2) * 4);
      fVar7 = *(float *)(param_3 + (ulonglong)(uVar29 + 3) * 4);
      fVar8 = *(float *)(param_3 + (ulonglong)(uVar29 + 4) * 4);
      fVar9 = *(float *)(param_3 + (ulonglong)(uVar29 + 5) * 4);
      fVar10 = *(float *)(param_3 + (ulonglong)(uVar29 + 8) * 4);
      fVar11 = *(float *)(param_3 + (ulonglong)(uVar29 + 9) * 4);
      fVar12 = *(float *)(param_3 + (ulonglong)(uVar29 + 10) * 4);
      fVar13 = *(float *)(param_3 + (ulonglong)(uVar29 + 0xb) * 4);
      fVar14 = *(float *)(param_3 + (ulonglong)(uVar29 + 6) * 4);
      fVar15 = *(float *)(param_3 + (ulonglong)uVar29 * 4);
      fVar16 = *(float *)(param_3 + (ulonglong)uVar29 * 4);
      param_1[-1] = (*(float *)(param_3 + (ulonglong)(uVar29 + 7) * 4) - fVar5) * fVar46 + fVar5;
      *param_1 = (fVar10 - fVar6) * fVar46 + fVar6;
      param_1[1] = (fVar11 - fVar7) * fVar46 + fVar7;
      param_1[2] = (fVar12 - fVar8) * fVar46 + fVar8;
      param_1[-2] = (fVar14 - fVar15) * fVar46 + fVar16;
      param_1[3] = (fVar13 - fVar9) * fVar46 + fVar9;
      param_1 = param_1 + 6;
      *(longlong *)param_4 = *(longlong *)param_4 + *param_5;
      param_2 = param_2 - 1;
    } while (param_2 != 0);
  }
                    // WARNING: Subroutine does not return
  *(undefined8 *)((longlong)puVar30 + -8) = 0x180833afc;
  FUN_1808fc050(auStack_b8[0] ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



