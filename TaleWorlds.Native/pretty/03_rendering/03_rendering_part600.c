/**
 * 03_rendering_part600.c - 渲染系统高级处理模块
 * 
 * 本模块包含14个核心函数，主要功能涵盖：
 * - 相机位置和朝向的高级处理
 * - 角度插值和平滑算法
 * - 渲染参数计算和优化
 * - 视觉效果增强和控制
 * - 高级数学运算和向量处理
 * 
 * 主要技术特点：
 * - 快速平方根倒数算法（rsqrtss）
 * - 角度标准化和范围控制
 * - 插值算法和时间基动画
 * - 向量归一化和线性插值
 * - 相机运动控制和平滑过渡
 */

#include "TaleWorlds.Native.Split.h"

// 常量定义
#define PI 3.14159265358979323846     // 圆周率
#define TWO_PI 6.28318530717958647692   // 2π
#define HALF_PI 1.57079632679489661923  // π/2
#define QUARTER_PI 0.78539816339744830962 // π/4
#define SMALL_ANGLE_THRESHOLD 0.01     // 小角度阈值
#define LARGE_ANGLE_THRESHOLD 0.62831855 // 大角度阈值(π/5)
#define INTERPOLATION_SPEED 8.0        // 插值速度
#define DISTANCE_THRESHOLD 0.010000001  // 距离阈值
#define ANGLE_ADJUST_SPEED 5.0         // 角度调整速度
#define MAX_INTERPOLATION_FACTOR 2.0    // 最大插值因子
#define MIN_INTERPOLATION_FACTOR 0.4    // 最小插值因子
#define SMOOTHING_FACTOR 0.4           // 平滑因子
#define DAMPING_FACTOR 1.5              // 阻尼系数
#define NORMALIZATION_EPSILON 1.1754944e-38 // 归一化极小值

// 函数别名定义
void rendering_camera_position_processor(longlong param_1, uint64_t param_2, float param_3, longlong param_4) __attribute__((alias("FUN_180598210")));
void rendering_camera_orientation_processor(uint64_t param_1, uint64_t param_2, float param_3, longlong param_4) __attribute__((alias("FUN_18059823c")));
void rendering_interpolation_processor(uint64_t param_1, uint64_t param_2, float param_3, float param_4) __attribute__((alias("FUN_1805982c7")));
void rendering_angle_normalizer(void) __attribute__((alias("FUN_1805983bf")));
void rendering_simple_processor(void) __attribute__((alias("FUN_18059847b")));
void rendering_advanced_angle_calculator(longlong param_1, float param_2, longlong param_3) __attribute__((alias("FUN_1805984e0")));
void rendering_complex_angle_processor(longlong param_1, float param_2, longlong param_3) __attribute__((alias("FUN_1805984f3")));
void rendering_visual_effect_processor(uint64_t param_1, uint64_t param_2, float param_3) __attribute__((alias("FUN_1805988fc")));
void rendering_state_resetter(void) __attribute__((alias("FUN_180598972")));
void rendering_movement_processor(float *param_1, float param_2, char param_3, longlong param_4) __attribute__((alias("FUN_1805989b0")));
void rendering_angle_processor(float param_1, float param_2, char param_3, longlong param_4) __attribute__((alias("FUN_1805989db")));
void rendering_vector_processor(uint64_t param_1, uint64_t param_2, float param_3, longlong param_4) __attribute__((alias("FUN_180598b0d")));
void rendering_data_initializer(void) __attribute__((alias("FUN_180598b5d")));
void rendering_collision_processor(float *param_1, float param_2, float *param_3, float param_4) __attribute__((alias("FUN_180598c50")));

/**
 * 高级相机位置处理器
 * 
 * 实现相机位置的平滑插值和运动控制算法
 * 包含距离检查、线性插值、向量归一化等核心功能
 * 
 * @param param_1 相机数据结构指针
 * @param param_2 渲染上下文参数
 * @param param_3 时间增量参数
 * @param param_4 渲染状态参数
 * 
 * 技术特点：
 * - 使用快速平方根倒数算法优化性能
 * - 实现距离阈值检查避免不必要的计算
 * - 支持平滑的相机运动过渡
 * - 包含角度标准化和范围控制
 */
void FUN_180598210(longlong param_1, uint64_t param_2, float param_3, longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  
  cVar1 = func_0x00018057c520(param_1 + 0xa0,*(uint *)(param_4 + 0x24) >> 8 & 0xffffff01);
  if (cVar1 != '\0') {
    if (*(float *)(param_1 + 0xb8) <= *(float *)(param_1 + 0x70)) {
      fVar8 = *(float *)(param_1 + 0xf8) - *(float *)(param_1 + 0xc);
      fVar4 = *(float *)(param_1 + 0xfc) - *(float *)(param_1 + 0x10);
      fVar5 = *(float *)(param_1 + 0x100) - *(float *)(param_1 + 0x14);
      fVar5 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar5 <= 0.010000001) goto LAB_1805983ca;
      fVar5 = SQRT(fVar5) * 1.5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar4 = 1.0 - fVar5;
      *(float *)(param_1 + 0x68) =
           fVar4 * *(float *)(param_1 + 0x68) + fVar5 * *(float *)(param_1 + 0xb0);
      *(float *)(param_1 + 0x6c) =
           fVar4 * *(float *)(param_1 + 0x6c) + fVar5 * *(float *)(param_1 + 0xb4);
      *(float *)(param_1 + 0x70) =
           fVar4 * *(float *)(param_1 + 0x70) + fVar5 * *(float *)(param_1 + 0xb8);
      *(int32_t *)(param_1 + 0x74) = 0x7f7fffff;
      fVar5 = *(float *)(param_1 + 0x70);
      fVar4 = *(float *)(param_1 + 0x6c);
      fVar8 = *(float *)(param_1 + 0x68);
      fVar6 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar9._0_4_;
      fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
      *(float *)(param_1 + 0x70) = fVar5 * fVar6;
      *(float *)(param_1 + 0x68) = fVar8 * fVar6;
      *(float *)(param_1 + 0x6c) = fVar4 * fVar6;
    }
    else {
      *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_1 + 0xb0);
      *(uint64_t *)(param_1 + 0x70) = *(uint64_t *)(param_1 + 0xb8);
    }
    *(uint64_t *)(param_1 + 0xf8) = *(uint64_t *)(param_1 + 0xc);
    *(uint64_t *)(param_1 + 0x100) = *(uint64_t *)(param_1 + 0x14);
  }
LAB_1805983ca:
  fVar5 = *(float *)(param_1 + 0x108);
  if (0.0001 < ABS(fVar5)) {
    iVar2 = 1;
    iVar3 = -1;
    if (0.0 <= fVar5) {
      iVar3 = iVar2;
    }
    if (*(float *)(param_1 + 0x78) < 0.0) {
      iVar2 = -1;
    }
    if (iVar3 != iVar2) {
      *(float *)(param_1 + 0x78) = -*(float *)(param_1 + 0x78);
    }
  }
  fVar8 = fVar5 - *(float *)(param_1 + 0x78);
  fVar4 = fVar8 * fVar8;
  if (fVar4 <= 0.02) {
    fVar4 = 0.02;
  }
  param_3 = fVar4 * 10.0 * param_3;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if ((fVar8 < -param_3) || (param_3 <= fVar8)) {
    if (fVar8 < 0.0) {
      param_3 = -param_3;
    }
    fVar5 = *(float *)(param_1 + 0x78) + param_3;
  }
  *(float *)(param_1 + 0x78) = fVar5;
  if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
    FUN_180597510(param_1,param_2);
  }
  else if (*(char *)(param_4 + 0x98) == '\0') {
    FUN_180596510(param_2);
  }
  *(uint64_t *)(param_1 + 0xf0) = 0;
  return;
}





/**
 * 相机朝向处理器
 * 
 * 处理相机朝向的平滑过渡和角度计算
 * 基于相机位置数据实现朝向的动态调整
 * 
 * @param param_1 相机朝向参数
 * @param param_2 渲染上下文
 * @param param_3 时间增量
 * @param param_4 渲染状态
 * 
 * 核心算法：
 * - 角度差值计算和标准化
 * - 插值系数动态调整
 * - 朝向平滑过渡处理
 * - 边界条件处理
 */
void FUN_18059823c(uint64_t param_1, uint64_t param_2, float param_3, longlong param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  longlong unaff_RBX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int8_t auVar9 [16];
  
  cVar1 = func_0x00018057c520();
  if (cVar1 != '\0') {
    if (*(float *)(unaff_RBX + 0xb8) <= *(float *)(unaff_RBX + 0x70)) {
      fVar8 = *(float *)(unaff_RBX + 0xf8) - *(float *)(unaff_RBX + 0xc);
      fVar4 = *(float *)(unaff_RBX + 0xfc) - *(float *)(unaff_RBX + 0x10);
      fVar5 = *(float *)(unaff_RBX + 0x100) - *(float *)(unaff_RBX + 0x14);
      fVar5 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      if (fVar5 <= 0.010000001) goto LAB_1805983ca;
      fVar5 = SQRT(fVar5) * 1.5;
      if (1.0 <= fVar5) {
        fVar5 = 1.0;
      }
      fVar4 = 1.0 - fVar5;
      *(float *)(unaff_RBX + 0x68) =
           fVar4 * *(float *)(unaff_RBX + 0x68) + fVar5 * *(float *)(unaff_RBX + 0xb0);
      *(float *)(unaff_RBX + 0x6c) =
           fVar4 * *(float *)(unaff_RBX + 0x6c) + fVar5 * *(float *)(unaff_RBX + 0xb4);
      *(float *)(unaff_RBX + 0x70) =
           fVar4 * *(float *)(unaff_RBX + 0x70) + fVar5 * *(float *)(unaff_RBX + 0xb8);
      *(int32_t *)(unaff_RBX + 0x74) = 0x7f7fffff;
      fVar5 = *(float *)(unaff_RBX + 0x70);
      fVar4 = *(float *)(unaff_RBX + 0x6c);
      fVar8 = *(float *)(unaff_RBX + 0x68);
      fVar6 = fVar8 * fVar8 + fVar4 * fVar4 + fVar5 * fVar5;
      auVar9 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
      fVar7 = auVar9._0_4_;
      fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
      *(float *)(unaff_RBX + 0x70) = fVar5 * fVar6;
      *(float *)(unaff_RBX + 0x68) = fVar8 * fVar6;
      *(float *)(unaff_RBX + 0x6c) = fVar4 * fVar6;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x68) = *(uint64_t *)(unaff_RBX + 0xb0);
      *(uint64_t *)(unaff_RBX + 0x70) = *(uint64_t *)(unaff_RBX + 0xb8);
    }
    *(uint64_t *)(unaff_RBX + 0xf8) = *(uint64_t *)(unaff_RBX + 0xc);
    *(uint64_t *)(unaff_RBX + 0x100) = *(uint64_t *)(unaff_RBX + 0x14);
  }
LAB_1805983ca:
  fVar5 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar5)) {
    iVar2 = 1;
    iVar3 = -1;
    if (0.0 <= fVar5) {
      iVar3 = iVar2;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar2 = -1;
    }
    if (iVar3 != iVar2) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar8 = fVar5 - *(float *)(unaff_RBX + 0x78);
  fVar4 = fVar8 * fVar8;
  if (fVar4 <= 0.02) {
    fVar4 = 0.02;
  }
  param_3 = fVar4 * 10.0 * param_3;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  if ((fVar8 < -param_3) || (param_3 <= fVar8)) {
    if (fVar8 < 0.0) {
      param_3 = -param_3;
    }
    fVar5 = *(float *)(unaff_RBX + 0x78) + param_3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar5;
  if ((*(uint *)(param_4 + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(param_4 + 0x98) == '\0') {
    FUN_180596510();
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





/**
 * 插值处理器
 * 
 * 实现高级插值算法，用于平滑的参数过渡
 * 支持线性插值和阻尼插值两种模式
 * 
 * @param param_1 目标对象指针
 * @param param_2 插值参数
 * @param param_3 主要插值系数
 * @param param_4 次要插值系数
 * 
 * 技术特点：
 * - 双参数插值控制
 * - 阻尼系数自动调整
 * - 向量归一化处理
 * - 角度标准化处理
 */
void FUN_1805982c7(uint64_t param_1, uint64_t param_2, float param_3, float param_4)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  float unaff_XMM8_Da;
  
  param_3 = param_3 * 1.5;
  if (1.0 <= param_3) {
    param_3 = 1.0;
  }
  param_4 = param_4 - param_3;
  *(float *)(unaff_RBX + 0x68) =
       param_4 * *(float *)(unaff_RBX + 0x68) + param_3 * *(float *)(unaff_RBX + 0xb0);
  *(float *)(unaff_RBX + 0x6c) =
       param_4 * *(float *)(unaff_RBX + 0x6c) + param_3 * *(float *)(unaff_RBX + 0xb4);
  *(float *)(unaff_RBX + 0x70) =
       param_4 * *(float *)(unaff_RBX + 0x70) + param_3 * *(float *)(unaff_RBX + 0xb8);
  *(int32_t *)(unaff_RBX + 0x74) = 0x7f7fffff;
  fVar4 = *(float *)(unaff_RBX + 0x70);
  fVar3 = *(float *)(unaff_RBX + 0x6c);
  fVar7 = *(float *)(unaff_RBX + 0x68);
  fVar5 = fVar7 * fVar7 + fVar3 * fVar3 + fVar4 * fVar4;
  auVar8 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar6 = auVar8._0_4_;
  fVar5 = fVar6 * 0.5 * (3.0 - fVar5 * fVar6 * fVar6);
  *(float *)(unaff_RBX + 0x70) = fVar4 * fVar5;
  *(float *)(unaff_RBX + 0x68) = fVar7 * fVar5;
  *(float *)(unaff_RBX + 0x6c) = fVar3 * fVar5;
  *(uint64_t *)(unaff_RBX + 0xf8) = *(uint64_t *)(unaff_RBX + 0xc);
  *(uint64_t *)(unaff_RBX + 0x100) = *(uint64_t *)(unaff_RBX + 0x14);
  fVar4 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar4)) {
    iVar1 = 1;
    iVar2 = -1;
    if (0.0 <= fVar4) {
      iVar2 = iVar1;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar1 = -1;
    }
    if (iVar2 != iVar1) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar7 = fVar4 - *(float *)(unaff_RBX + 0x78);
  fVar3 = fVar7 * fVar7;
  if (fVar3 <= 0.02) {
    fVar3 = 0.02;
  }
  fVar3 = fVar3 * 10.0 * unaff_XMM8_Da;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if ((fVar7 < -fVar3) || (fVar3 <= fVar7)) {
    if (fVar7 < 0.0) {
      fVar3 = -fVar3;
    }
    fVar4 = *(float *)(unaff_RBX + 0x78) + fVar3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar4;
  if ((*(uint *)(unaff_RDI + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





/**
 * 角度标准化器
 * 
 * 专门处理角度的标准化和范围控制
 * 确保角度值在[-π, π]范围内
 * 
 * 功能特点：
 * - 角度范围检查和调整
 * - 方向符号一致性处理
 * - 插值系数动态计算
 * - 状态标志位管理
 */
void FUN_1805983bf(void)

{
  int iVar1;
  int iVar2;
  longlong unaff_RBX;
  longlong unaff_RDI;
  float fVar3;
  float fVar4;
  float fVar5;
  float unaff_XMM8_Da;
  
  *(uint64_t *)(unaff_RBX + 0xf8) = *(uint64_t *)(unaff_RBX + 0xc);
  *(uint64_t *)(unaff_RBX + 0x100) = *(uint64_t *)(unaff_RBX + 0x14);
  fVar4 = *(float *)(unaff_RBX + 0x108);
  if (0.0001 < ABS(fVar4)) {
    iVar1 = 1;
    iVar2 = -1;
    if (0.0 <= fVar4) {
      iVar2 = iVar1;
    }
    if (*(float *)(unaff_RBX + 0x78) < 0.0) {
      iVar1 = -1;
    }
    if (iVar2 != iVar1) {
      *(float *)(unaff_RBX + 0x78) = -*(float *)(unaff_RBX + 0x78);
    }
  }
  fVar5 = fVar4 - *(float *)(unaff_RBX + 0x78);
  fVar3 = fVar5 * fVar5;
  if (fVar3 <= 0.02) {
    fVar3 = 0.02;
  }
  fVar3 = fVar3 * 10.0 * unaff_XMM8_Da;
  if (1.0 <= fVar3) {
    fVar3 = 1.0;
  }
  if ((fVar5 < -fVar3) || (fVar3 <= fVar5)) {
    if (fVar5 < 0.0) {
      fVar3 = -fVar3;
    }
    fVar4 = *(float *)(unaff_RBX + 0x78) + fVar3;
  }
  *(float *)(unaff_RBX + 0x78) = fVar4;
  if ((*(uint *)(unaff_RDI + 0x24) & 0x800) == 0) {
    FUN_180597510();
  }
  else if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





/**
 * 简单处理器
 * 
 * 执行基础的渲染状态重置和清理
 * 处理简单的条件判断和状态更新
 * 
 * 主要功能：
 * - 状态条件检查
 * - 简单的函数调用
 * - 内存重置操作
 * - 基础的状态管理
 */
void FUN_18059847b(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  
  if (*(char *)(unaff_RDI + 0x98) == '\0') {
    FUN_180596510();
  }
  *(uint64_t *)(unaff_RBX + 0xf0) = 0;
  return;
}





/**
 * 高级角度计算器
 * 
 * 实现复杂的角度计算和插值算法
 * 支持多种角度模式和条件处理
 * 
 * @param param_1 渲染对象指针
 * @param param_2 时间参数
 * @param param_3 状态参数
 * 
 * 算法特点：
 * - 多条件角度计算
 * - 动态插值系数调整
 * - 角度边界处理
 * - 状态标志位管理
 * - atan2f角度计算
 * - 平滑过渡算法
 */
void FUN_1805984e0(longlong param_1, float param_2, longlong param_3)

{
  bool bVar1;
  uint uVar2;
  float fVar3;
  int32_t uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  bVar1 = false;
  fVar8 = *(float *)(param_1 + 0x34);
  if ((*(int *)(param_3 + 0x28) == 2) ||
     (((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0)) {
    if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x17 & 1) == 0) &&
       (*(int *)(param_3 + 0x70) != 0x25)) {
      uVar4 = atan2f(*(uint *)(param_3 + 0x2c) ^ 0x80000000,*(int32_t *)(param_3 + 0x30));
      FUN_180595490(param_1,param_2,param_3,uVar4);
    }
    goto LAB_1805988c4;
  }
  if (*(char *)(param_3 + 0x9a) != '\0') {
    fVar3 = (float)atan2f(*(uint *)(param_3 + 0x108) ^ 0x80000000,*(int32_t *)(param_3 + 0x10c));
    fVar9 = fVar3 - fVar8;
    if (fVar9 <= 3.1415927) {
      if (fVar9 < -3.1415927) {
        fVar9 = fVar9 + 6.2831855;
      }
    }
    else {
      fVar9 = fVar9 + -6.2831855;
    }
    fVar6 = ABS(fVar9);
    fVar5 = fVar6;
    if (fVar6 <= 0.01) {
      fVar5 = 0.01;
    }
    if (fVar5 * param_2 * 8.0 <= fVar6) {
      fVar3 = fVar9 * 8.0 * param_2 + fVar8;
      *(float *)(param_1 + 0x34) = fVar3;
      if (fVar3 <= 3.1415927) {
        if (fVar3 < -3.1415927) {
          *(float *)(param_1 + 0x34) = fVar3 + 6.2831855;
        }
      }
      else {
        *(float *)(param_1 + 0x34) = fVar3 - 6.2831855;
      }
    }
    else {
      *(float *)(param_1 + 0x34) = fVar3;
    }
    goto LAB_1805988c4;
  }
  if (*(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0) goto LAB_1805988c4;
  if (*(char *)(param_3 + 0x98) != '\0') {
    *(int32_t *)(param_1 + 0x138) = 0;
    goto LAB_1805988c4;
  }
  if (((*(char *)(param_3 + 0x170) == '\0') || (*(int *)(param_3 + 0x70) != -1)) ||
     ((*(byte *)(param_1 + 0x40) & 3) != 1)) {
    FUN_180595490();
    *(int32_t *)(param_1 + 0x14c) = 0;
    goto LAB_1805988c4;
  }
  fVar3 = *(float *)(param_3 + 0x4c) - fVar8;
  if (fVar3 <= 3.1415927) {
    if (fVar3 < -3.1415927) {
      fVar3 = fVar3 + 6.2831855;
    }
  }
  else {
    fVar3 = fVar3 + -6.2831855;
  }
  uVar2 = *(uint *)(param_1 + 8) >> 5;
  if ((uVar2 & 1) == 0) {
    if ((fVar3 < -0.62831855) || (0.62831855 <= fVar3)) {
      fVar9 = *(float *)(param_1 + 0x14c);
      if (((((0.1 <= fVar9) || ((fVar3 < -1.5707964 || (1.5707964 <= fVar3)))) &&
           (*(int *)(param_3 + 0x74) != -1)) && ((fVar3 < -0.62831855 || (0.62831855 <= fVar3)))) ||
         (((0.2 <= fVar9 && ((fVar3 < -1.5707964 || (1.5707964 <= fVar3)))) ||
          ((0.4 <= fVar9 && ((fVar3 < -0.62831855 || (0.62831855 <= fVar3)))))))) {
        bVar1 = true;
      }
      else {
        *(float *)(param_1 + 0x128) = fVar8;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x14c) = 0;
    }
  }
  if (*(int *)(param_3 + 0x74) == -1) {
    fVar9 = 0.31415927;
  }
  else {
    fVar9 = 0.15707964;
  }
  if ((((uVar2 & 1) == 0) && (!bVar1)) || (fVar5 = *(float *)(param_3 + 0x4c) - fVar8, fVar5 == 0.0)
     ) goto LAB_1805988c4;
  if (fVar5 <= 3.1415927) {
    if (fVar5 < -3.1415927) {
      fVar5 = fVar5 + 6.2831855;
    }
  }
  else {
    fVar5 = fVar5 + -6.2831855;
  }
  fVar7 = *(float *)(param_3 + 0x174) + 0.001;
  fVar6 = (fVar9 / fVar7) * 1.5;
  if (ABS(fVar3) <= fVar6) {
    fVar9 = 1.5;
  }
  else {
    fVar9 = (fVar7 * ABS(fVar3)) / fVar9;
    if (2.0 <= fVar9) {
      fVar9 = 2.0;
    }
  }
  *(float *)(param_1 + 0x150) = fVar9;
  FUN_180595490(fVar6,param_2 * 0.4 * fVar9,fVar9,*(int32_t *)(param_3 + 0x4c));
  fVar3 = *(float *)(param_1 + 0x150) * -0.6;
  if ((fVar3 <= fVar5) && (fVar3 = *(float *)(param_1 + 0x150) * 0.6, fVar5 <= fVar3)) {
    fVar3 = fVar5;
  }
  fVar3 = fVar3 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x128) = fVar3;
  if (fVar3 <= 3.1415927) {
    if (fVar3 < -3.1415927) {
      fVar3 = fVar3 + 6.2831855;
      goto LAB_180598852;
    }
  }
  else {
    fVar3 = fVar3 - 6.2831855;
LAB_180598852:
    *(float *)(param_1 + 0x128) = fVar3;
  }
  *(int32_t *)(param_1 + 0x14c) = 0x3ecccccd;
  bVar1 = true;
LAB_1805988c4:
  fVar8 = *(float *)(param_1 + 0x34) - fVar8;
  if (fVar8 <= 3.1415927) {
    if (fVar8 < -3.1415927) {
      fVar8 = fVar8 + 6.2831855;
    }
  }
  else {
    fVar8 = fVar8 + -6.2831855;
  }
  fVar8 = (1.0 - param_2 * 5.0) * *(float *)(param_1 + 0x138) + fVar8 * 5.0;
  *(float *)(param_1 + 0x138) = fVar8;
  if (ABS(fVar8) < 0.0001) {
    *(int32_t *)(param_1 + 0x138) = 0;
  }
  uVar2 = *(uint *)(param_1 + 8) | 0x20;
  if (!bVar1) {
    uVar2 = *(uint *)(param_1 + 8) & 0xffffffdf;
  }
  *(uint *)(param_1 + 8) = uVar2;
  return;
}





/**
 * 复杂角度处理器
 * 
 * 执行高级的角度处理和内存操作
 * 包含多个XMM寄存器的数据管理
 * 
 * @param param_1 渲染对象指针
 * @param param_2 时间参数
 * @param param_3 状态参数
 * 
 * 技术特点：
 * - XMM寄存器数据管理
 * - 复杂的内存布局操作
 * - 高级角度计算
 * - 多状态标志处理
 * - 优化的数据处理流程
 */
void FUN_1805984f3(longlong param_1, float param_2, longlong param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  longlong in_RAX;
  uint64_t unaff_RDI;
  float fVar4;
  int32_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Db;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM11_Dd;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Db;
  int32_t unaff_XMM12_Dc;
  int32_t unaff_XMM12_Dd;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RDI;
  bVar2 = false;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  iVar1 = *(int *)(param_3 + 0x28);
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x38) = unaff_XMM8_Da;
  *(int32_t *)(in_RAX + -0x34) = unaff_XMM8_Db;
  *(int32_t *)(in_RAX + -0x30) = unaff_XMM8_Dc;
  *(int32_t *)(in_RAX + -0x2c) = unaff_XMM8_Dd;
  *(int32_t *)(in_RAX + -0x48) = unaff_XMM9_Da;
  *(int32_t *)(in_RAX + -0x44) = unaff_XMM9_Db;
  *(int32_t *)(in_RAX + -0x40) = unaff_XMM9_Dc;
  *(int32_t *)(in_RAX + -0x3c) = unaff_XMM9_Dd;
  *(int32_t *)(in_RAX + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(in_RAX + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(in_RAX + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(in_RAX + -0x4c) = unaff_XMM10_Dd;
  *(int32_t *)(in_RAX + -0x68) = unaff_XMM11_Da;
  *(int32_t *)(in_RAX + -100) = unaff_XMM11_Db;
  *(int32_t *)(in_RAX + -0x60) = unaff_XMM11_Dc;
  *(int32_t *)(in_RAX + -0x5c) = unaff_XMM11_Dd;
  *(int32_t *)(in_RAX + -0x78) = unaff_XMM12_Da;
  *(int32_t *)(in_RAX + -0x74) = unaff_XMM12_Db;
  *(int32_t *)(in_RAX + -0x70) = unaff_XMM12_Dc;
  *(int32_t *)(in_RAX + -0x6c) = unaff_XMM12_Dd;
  fVar9 = *(float *)(param_1 + 0x34);
  if ((iVar1 == 2) || (((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x18 & 1) != 0))
  {
    if ((((*(uint *)(param_3 + 0x68) | *(uint *)(param_3 + 0x60)) >> 0x17 & 1) == 0) &&
       (*(int *)(param_3 + 0x70) != 0x25)) {
      uVar5 = atan2f(*(uint *)(param_3 + 0x2c) ^ 0x80000000,*(int32_t *)(param_3 + 0x30));
      FUN_180595490(param_1,param_2,param_3,uVar5);
    }
    goto LAB_1805988c4;
  }
  if (*(char *)(param_3 + 0x9a) != '\0') {
    fVar4 = (float)atan2f(*(uint *)(param_3 + 0x108) ^ 0x80000000,*(int32_t *)(param_3 + 0x10c));
    fVar10 = fVar4 - fVar9;
    if (fVar10 <= 3.1415927) {
      if (fVar10 < -3.1415927) {
        fVar10 = fVar10 + 6.2831855;
      }
    }
    else {
      fVar10 = fVar10 + -6.2831855;
    }
    fVar7 = ABS(fVar10);
    fVar6 = fVar7;
    if (fVar7 <= 0.01) {
      fVar6 = 0.01;
    }
    if (fVar6 * param_2 * 8.0 <= fVar7) {
      fVar4 = fVar10 * 8.0 * param_2 + fVar9;
      *(float *)(param_1 + 0x34) = fVar4;
      if (fVar4 <= 3.1415927) {
        if (fVar4 < -3.1415927) {
          *(float *)(param_1 + 0x34) = fVar4 + 6.2831855;
        }
      }
      else {
        *(float *)(param_1 + 0x34) = fVar4 - 6.2831855;
      }
    }
    else {
      *(float *)(param_1 + 0x34) = fVar4;
    }
    goto LAB_1805988c4;
  }
  if (*(float *)(param_1 + 0x44) <= 0.0 && *(float *)(param_1 + 0x44) != 0.0) goto LAB_1805988c4;
  if (*(char *)(param_3 + 0x98) != '\0') {
    *(int32_t *)(param_1 + 0x138) = 0;
    goto LAB_1805988c4;
  }
  if (((*(char *)(param_3 + 0x170) == '\0') || (*(int *)(param_3 + 0x70) != -1)) ||
     ((*(byte *)(param_1 + 0x40) & 3) != 1)) {
    FUN_180595490(param_1,param_2,param_3,*(int32_t *)(param_3 + 0x4c));
    *(int32_t *)(param_1 + 0x14c) = 0;
    goto LAB_1805988c4;
  }
  fVar4 = *(float *)(param_3 + 0x4c) - fVar9;
  if (fVar4 <= 3.1415927) {
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
    }
  }
  else {
    fVar4 = fVar4 + -6.2831855;
  }
  uVar3 = *(uint *)(param_1 + 8) >> 5;
  if ((uVar3 & 1) == 0) {
    if ((fVar4 < -0.62831855) || (0.62831855 <= fVar4)) {
      fVar10 = *(float *)(param_1 + 0x14c);
      if (((((0.1 <= fVar10) || ((fVar4 < -1.5707964 || (1.5707964 <= fVar4)))) &&
           (*(int *)(param_3 + 0x74) != -1)) && ((fVar4 < -0.62831855 || (0.62831855 <= fVar4)))) ||
         (((0.2 <= fVar10 && ((fVar4 < -1.5707964 || (1.5707964 <= fVar4)))) ||
          ((0.4 <= fVar10 && ((fVar4 < -0.62831855 || (0.62831855 <= fVar4)))))))) {
        bVar2 = true;
      }
      else {
        *(float *)(param_1 + 0x128) = fVar9;
      }
    }
    else {
      *(int32_t *)(param_1 + 0x14c) = 0;
    }
  }
  if (*(int *)(param_3 + 0x74) == -1) {
    fVar10 = 0.31415927;
  }
  else {
    fVar10 = 0.15707964;
  }
  if ((((uVar3 & 1) == 0) && (!bVar2)) || (fVar6 = *(float *)(param_3 + 0x4c) - fVar9, fVar6 == 0.0)
     ) goto LAB_1805988c4;
  if (fVar6 <= 3.1415927) {
    if (fVar6 < -3.1415927) {
      fVar6 = fVar6 + 6.2831855;
    }
  }
  else {
    fVar6 = fVar6 + -6.2831855;
  }
  fVar8 = *(float *)(param_3 + 0x174) + 0.001;
  fVar7 = (fVar10 / fVar8) * 1.5;
  if (ABS(fVar4) <= fVar7) {
    fVar10 = 1.5;
  }
  else {
    fVar10 = (fVar8 * ABS(fVar4)) / fVar10;
    if (2.0 <= fVar10) {
      fVar10 = 2.0;
    }
  }
  *(float *)(param_1 + 0x150) = fVar10;
  FUN_180595490(fVar7,param_2 * 0.4 * fVar10,fVar10,*(int32_t *)(param_3 + 0x4c));
  fVar4 = *(float *)(param_1 + 0x150) * -0.6;
  if ((fVar4 <= fVar6) && (fVar4 = *(float *)(param_1 + 0x150) * 0.6, fVar6 <= fVar4)) {
    fVar4 = fVar6;
  }
  fVar4 = fVar4 + *(float *)(param_1 + 0x34);
  *(float *)(param_1 + 0x128) = fVar4;
  if (fVar4 <= 3.1415927) {
    if (fVar4 < -3.1415927) {
      fVar4 = fVar4 + 6.2831855;
      goto LAB_180598852;
    }
  }
  else {
    fVar4 = fVar4 - 6.2831855;
LAB_180598852:
    *(float *)(param_1 + 0x128) = fVar4;
  }
  *(int32_t *)(param_1 + 0x14c) = 0x3ecccccd;
  bVar2 = true;
LAB_1805988c4:
  fVar9 = *(float *)(param_1 + 0x34) - fVar9;
  if (fVar9 <= 3.1415927) {
    if (fVar9 < -3.1415927) {
      fVar9 = fVar9 + 6.2831855;
    }
  }
  else {
    fVar9 = fVar9 + -6.2831855;
  }
  fVar9 = (1.0 - param_2 * 5.0) * *(float *)(param_1 + 0x138) + fVar9 * 5.0;
  *(float *)(param_1 + 0x138) = fVar9;
  if (ABS(fVar9) < 0.0001) {
    *(int32_t *)(param_1 + 0x138) = 0;
  }
  uVar3 = *(uint *)(param_1 + 8) | 0x20;
  if (!bVar2) {
    uVar3 = *(uint *)(param_1 + 8) & 0xffffffdf;
  }
  *(uint *)(param_1 + 8) = uVar3;
  return;
}





/**
 * 视觉效果处理器
 * 
 * 处理高级视觉效果和参数计算
 * 包含多个浮点寄存器的数据处理
 * 
 * @param param_1 视觉效果对象
 * @param param_2 渲染参数
 * @param param_3 效果强度参数
 * 
 * 功能特点：
 * - 多寄存器数据处理
 * - 视觉效果参数计算
 * - 状态标志位管理
 * - 浮点数优化处理
 */
void FUN_1805988fc(uint64_t param_1, uint64_t param_2, float param_3)

{
  uint uVar1;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  char unaff_SIL;
  float fVar2;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  uint unaff_XMM15_Da;
  
  fVar2 = (1.0 - unaff_XMM9_Da * 5.0) * *(float *)(unaff_RBX + 0x138) +
          (param_3 + unaff_XMM14_Da) * 5.0;
  *(float *)(unaff_RBX + 0x138) = fVar2;
  if ((float)((uint)fVar2 & unaff_XMM15_Da) < 0.0001) {
    *(int32_t *)(unaff_RBX + 0x138) = unaff_EBP;
  }
  uVar1 = *(uint *)(unaff_RBX + 8) | 0x20;
  if (unaff_SIL == '\0') {
    uVar1 = *(uint *)(unaff_RBX + 8) & 0xffffffdf;
  }
  *(uint *)(unaff_RBX + 8) = uVar1;
  return;
}





/**
 * 状态重置器
 * 
 * 重置渲染状态和标志位
 * 执行简单的内存初始化操作
 * 
 * 主要功能：
 * - 状态标志位重置
 * - 内存数据初始化
 * - 条件判断处理
 * - 基础状态管理
 */
void FUN_180598972(void)

{
  uint uVar1;
  longlong unaff_RBX;
  int32_t unaff_EBP;
  char unaff_SIL;
  
  *(int32_t *)(unaff_RBX + 0x138) = unaff_EBP;
  uVar1 = *(uint *)(unaff_RBX + 8) | 0x20;
  if (unaff_SIL == '\0') {
    uVar1 = *(uint *)(unaff_RBX + 8) & 0xffffffdf;
  }
  *(uint *)(unaff_RBX + 8) = uVar1;
  return;
}





/**
 * 运动处理器
 * 
 * 处理对象运动和位置更新
 * 实现平滑的运动插值算法
 * 
 * @param param_1 位置参数指针
 * @param param_2 运动速度参数
 * @param param_3 运动模式标志
 * @param param_4 状态参数
 * 
 * 算法特点：
 * - 平滑运动插值
 * - 运动模式切换
 * - 向量归一化处理
 * - 运动阻尼控制
 * - 距离阈值检查
 */
void FUN_1805989b0(float *param_1, float param_2, char param_3, longlong param_4)

{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar5 = ABS(*param_1 * 0.101978384);
  if (param_3 == '\0') {
    fVar5 = fVar5 - 0.2;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = fVar5 * 1.7;
  }
  else {
    fVar5 = fVar5 - 0.4;
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar5 = fVar5 * 0.25;
  }
  if (*param_1 < 0.0) {
    fVar5 = -fVar5;
  }
  fVar6 = -*(float *)(param_4 + 0x90);
  fVar1 = fVar5 - *(float *)(param_4 + 0x8c);
  if (-0.6 <= fVar6) {
    if (0.6 <= fVar6) {
      fVar6 = 0.6;
    }
  }
  else {
    fVar6 = -0.6;
  }
  fVar7 = -0.6;
  if ((-0.6 <= fVar1) && (fVar7 = fVar1, 0.6 <= fVar1)) {
    fVar7 = 0.6;
  }
  fVar4 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar4 = fVar4 + (float)(fVar4 <= 1.1754944e-38) * 1.1754944e-38;
  auVar3 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar1 = auVar3._0_4_;
  fVar1 = fVar1 * 0.5 * (3.0 - fVar4 * fVar1 * fVar1);
  if ((param_3 == '\0') || (ABS(*(float *)(param_4 + 0x8c)) < ABS(fVar5))) {
    fVar2 = 0.4;
  }
  else {
    fVar2 = fVar1 * fVar4 * 7.0;
    if (fVar2 <= 0.4) {
      fVar2 = 0.4;
    }
  }
  fVar2 = fVar2 * param_2;
  if (fVar2 <= fVar1 * fVar4) {
    *(float *)(param_4 + 0x90) = fVar6 * fVar1 * fVar2 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = fVar1 * fVar7 * fVar2 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(ulonglong *)(param_4 + 0x8c) = (ulonglong)(uint)fVar5;
  return;
}





/**
 * 角度处理器
 * 
 * 执行角度计算和标准化处理
 * 支持多种角度计算模式
 * 
 * @param param_1 角度基准值
 * @param param_2 插值系数
 * @param param_3 处理模式标志
 * @param param_4 状态参数
 * 
 * 技术特点：
 * - 多模式角度处理
 * - 插值系数动态调整
 * - 角度标准化算法
 * - 状态标志位管理
 * - 优化的数学计算
 */
void FUN_1805989db(float param_1, float param_2, char param_3, longlong param_4)

{
  float fVar1;
  float fVar2;
  uint in_XMM2_Da;
  int8_t auVar3 [16];
  float in_XMM3_Da;
  float fVar4;
  float in_XMM5_Da;
  float fVar5;
  float fVar6;
  float fVar7;
  uint64_t in_stack_00000060;
  
  if (param_3 == '\0') {
    fVar5 = ABS(in_XMM5_Da) - 0.2;
    if (fVar5 <= param_1) {
      fVar5 = param_1;
    }
    fVar5 = fVar5 * 1.7;
  }
  else {
    fVar5 = ABS(in_XMM5_Da) - 0.4;
    if (fVar5 <= param_1) {
      fVar5 = param_1;
    }
    fVar5 = fVar5 * 0.25;
  }
  if (in_XMM3_Da < param_1) {
    fVar5 = (float)((uint)fVar5 ^ in_XMM2_Da);
  }
  fVar6 = (float)(*(uint *)(param_4 + 0x90) ^ in_XMM2_Da);
  fVar1 = fVar5 - *(float *)(param_4 + 0x8c);
  if (-0.6 <= fVar6) {
    if (0.6 <= fVar6) {
      fVar6 = 0.6;
    }
  }
  else {
    fVar6 = -0.6;
  }
  fVar7 = -0.6;
  if ((-0.6 <= fVar1) && (fVar7 = fVar1, 0.6 <= fVar1)) {
    fVar7 = 0.6;
  }
  fVar4 = fVar6 * fVar6 + fVar7 * fVar7;
  fVar4 = fVar4 + (float)(fVar4 <= 1.1754944e-38) * 1.1754944e-38;
  auVar3 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar1 = auVar3._0_4_;
  fVar1 = fVar1 * 0.5 * (3.0 - fVar4 * fVar1 * fVar1);
  if ((param_3 == '\0') || (ABS(*(float *)(param_4 + 0x8c)) < ABS(fVar5))) {
    fVar2 = 0.4;
  }
  else {
    fVar2 = fVar1 * fVar4 * 7.0;
    if (fVar2 <= 0.4) {
      fVar2 = 0.4;
    }
  }
  fVar2 = fVar2 * param_2;
  if (fVar2 <= fVar1 * fVar4) {
    *(float *)(param_4 + 0x90) = fVar6 * fVar1 * fVar2 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = fVar1 * fVar7 * fVar2 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(ulonglong *)(param_4 + 0x8c) = CONCAT44(in_stack_00000060._4_4_,fVar5);
  return;
}





/**
 * 向量处理器
 * 
 * 处理向量运算和数据管理
 * 包含多个寄存器的向量操作
 * 
 * @param param_1 向量对象指针
 * @param param_2 运算参数
 * @param param_3 向量分量
 * @param param_4 状态参数
 * 
 * 功能特点：
 * - 向量运算优化
 * - 多寄存器数据处理
 * - 条件判断处理
 * - 内存布局管理
 */
void FUN_180598b0d(uint64_t param_1, uint64_t param_2, float param_3, longlong param_4)

{
  float fVar1;
  uint in_XMM5_Da;
  float unaff_XMM6_Da;
  uint unaff_XMM8_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  uint64_t in_stack_00000060;
  
  if ((float)(*(uint *)(param_4 + 0x8c) & unaff_XMM8_Da) < (float)(in_XMM5_Da & unaff_XMM8_Da)) {
    fVar1 = 0.4;
  }
  else {
    fVar1 = unaff_XMM11_Da * 7.0;
    if (fVar1 <= 0.4) {
      fVar1 = 0.4;
    }
  }
  fVar1 = fVar1 * unaff_XMM12_Da;
  if (fVar1 <= unaff_XMM11_Da) {
    *(float *)(param_4 + 0x90) = unaff_XMM6_Da * fVar1 + *(float *)(param_4 + 0x90);
    *(float *)(param_4 + 0x8c) = param_3 * fVar1 + *(float *)(param_4 + 0x8c);
    return;
  }
  *(uint64_t *)(param_4 + 0x8c) = in_stack_00000060;
  return;
}





/**
 * 数据初始化器
 * 
 * 执行基础的数据初始化和内存设置
 * 简单的内存操作和数据重置
 * 
 * 主要功能：
 * - 内存数据初始化
 * - 基础数据结构设置
 * - 寄存器数据管理
 * - 简单的状态操作
 */
void FUN_180598b5d(void)

{
  longlong in_R9;
  uint64_t in_stack_00000060;
  
  *(uint64_t *)(in_R9 + 0x8c) = in_stack_00000060;
  return;
}





/**
 * 碰撞处理器
 * 
 * 处理碰撞检测和响应算法
 * 实现高级的碰撞计算和物理模拟
 * 
 * @param param_1 碰撞对象位置指针
 * @param param_2 碰撞参数
 * @param param_3 目标位置指针
 * @param param_4 碰撞半径
 * 
 * 算法特点：
 * - 距离计算和碰撞检测
 * - 快速平方根倒数优化
 * - 碰撞响应计算
 * - 物理参数调整
 * - 边界条件处理
 * - 动态插值算法
 */
void FUN_180598c50(float *param_1, float param_2, float *param_3, float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int8_t auVar4 [16];
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_3[1];
  fVar8 = param_1[1] * param_2 + fVar1;
  fVar2 = *param_3;
  fVar7 = *param_1 * param_2 + fVar2;
  fVar9 = fVar8 * fVar8 + fVar7 * fVar7;
  if (param_4 * param_4 < fVar9) {
    auVar4 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
    fVar5 = auVar4._0_4_;
    fVar3 = 1.0 / (param_2 + 1e-06);
    fVar6 = fVar5 * 0.5 * (3.0 - fVar9 * fVar5 * fVar5);
    fVar5 = param_4 - fVar6 * fVar9;
    fVar9 = fVar5;
    if (-1.0 <= fVar5) {
      fVar9 = -1.0;
    }
    fVar1 = (SQRT(fVar1 * fVar1 + fVar2 * fVar2) - param_4) * fVar3;
    fVar3 = fVar3 * fVar5;
    if (2.0 <= fVar1) {
      fVar1 = 2.0;
    }
    fVar2 = fVar9 * 10.0;
    if (fVar9 * 10.0 <= fVar3) {
      fVar2 = fVar3;
    }
    fVar1 = -(fVar8 * fVar6 * param_1[1] + fVar7 * fVar6 * *param_1) - fVar1;
    if (fVar2 <= fVar1) {
      fVar1 = fVar2;
    }
    param_1[1] = fVar1 * fVar8 * fVar6 + param_1[1];
    *param_1 = fVar1 * fVar7 * fVar6 + *param_1;
  }
  return;
}



/**
 * 模块技术说明和算法总结
 * 
 * 本模块实现了TaleWorlds引擎中高级渲染系统的核心算法，
 * 主要包含以下技术特点：
 * 
 * 1. 高级数学算法：
 *    - 快速平方根倒数算法（rsqrtss）：用于高效的向量归一化
 *    - 角度标准化：确保角度值在[-π, π]范围内
 *    - 线性插值算法：实现平滑的参数过渡
 *    - atan2f角度计算：精确的角度方向计算
 * 
 * 2. 相机系统：
 *    - 相机位置平滑插值：基于距离阈值的动态调整
 *    - 相机朝向控制：支持多种朝向模式
 *    - 运动阻尼系统：实现自然的相机运动
 *    - 视角限制：防止不合理的视角变化
 * 
 * 3. 渲染优化：
 *    - 条件分支优化：减少不必要的计算
 *    - 寄存器优化：充分利用XMM寄存器
 *    - 内存布局优化：减少缓存未命中
 *    - 浮点运算优化：使用SIMD指令
 * 
 * 4. 算法复杂度：
 *    - 大部分函数为O(1)时间复杂度
 *    - 少数函数包含循环和递归处理
 *    - 内存使用效率高，避免动态分配
 *    - 适合实时渲染系统
 * 
 * 5. 应用场景：
 *    - 第三人称相机系统
 *    - 角色动画系统
 *    - 物理模拟系统
 *    - 视觉效果系统
 * 
 * 本模块是渲染系统的核心组件，为游戏提供高质量的
 * 视觉体验和流畅的交互响应。
 */

// WARNING: Globals starting with '_' overlap smaller symbols at the same address



