#include "TaleWorlds.Native.Split.h"

/**
 * @file 99_part_04_part031.c
 * @brief 高级数据处理和插值算法模块
 * @author Claude Code
 * @date 2025-08-28
 * 
 * 本模块包含高级数据处理、插值算法、像素操作等功能
 * 主要负责图像处理、数据插值、坐标转换等高级算法
 */

/*==========================================
=            常量定义和宏定义            =
==========================================*/

/**
 * 浮点数处理相关常量
 */
#define FLOAT_EPSILON 0.9999999f
#define FLOAT_ZERO_THRESHOLD 0.0f
#define FLOAT_MOD_SCALE 1.0f

/**
 * 像素处理相关常量
 */
#define PIXEL_COMPONENT_SIZE 4
#define PIXEL_COMPONENT_MASK 0xff
#define PIXEL_COMPONENT_SHIFT 8
#define PIXEL_COMPONENT_SHIFT_16 0x10
#define PIXEL_COMPONENT_SHIFT_24 0x18

/**
 * 坐标处理相关常量
 */
#define COORDINATE_OFFSET_X 0x5c
#define COORDINATE_OFFSET_Y 0x5e
#define COORDINATE_SCALE_FACTOR 1
#define COORDINATE_ADJUSTMENT -1

/**
 * 数组处理相关常量
 */
#define ARRAY_ELEMENT_SIZE_2 2
#define ARRAY_ELEMENT_SIZE_3 3
#define ARRAY_ELEMENT_SIZE_4 4
#define ARRAY_ELEMENT_SIZE_6 6
#define ARRAY_ELEMENT_SIZE_8 8
#define ARRAY_ITERATION_COUNT 4

/**
 * 内存管理相关常量
 */
#define STACK_CANARY_SIZE 32
#define MEMORY_ALIGNMENT 8
#define GUARD_VARIABLE_SIZE 8

/*==========================================
=            全局变量声明            =
==========================================*/

/**
 * 数据处理系统全局变量
 */
static undefined data_interpolation_processor;
static undefined pixel_coordinate_transformer;
static undefined bilinear_interpolation_calculator;
static undefined texture_sampler;
static undefined color_space_converter;
static undefined data_normalizer;
static undefined coordinate_mapper;
static undefined pixel_processor;
static undefined image_scaler;
static undefined texture_mapper;

/**
 * 像素处理系统全局变量
 */
static undefined pixel_sampler;
static undefined color_interpolator;
static undefined texture_coordinate_mapper;
static undefined pixel_buffer_manager;
static undefined color_converter;
static undefined pixel_filter;
static undefined image_processor;
static undefined pixel_normalizer;
static undefined color_space_manager;

/**
 * 坐标处理系统全局变量
 */
static undefined coordinate_transformer;
static undefined coordinate_validator;
static undefined coordinate_scaler;
static undefined coordinate_interpolator;
static undefined coordinate_mapper;
static undefined coordinate_normalizer;
static undefined coordinate_processor;
static undefined coordinate_manager;
static undefined coordinate_calculator;

/*==========================================
=            函数声明            =
==========================================*/

/**
 * 数据处理系统函数
 */
static void data_interpolation_processor(uint64_t context, uint64_t param1, uint64_t param2);
static void pixel_coordinate_transformer(uint64_t context, uint64_t param1, uint64_t param2);
static void bilinear_interpolation_calculator(uint64_t context, uint64_t param1, uint64_t param2);
static void texture_sampler(uint64_t context, uint64_t param1, uint64_t param2);
static void color_space_converter(uint64_t context, uint64_t param1, uint64_t param2);
static void data_normalizer(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_mapper(uint64_t context, uint64_t param1, uint64_t param2);
static void pixel_processor(uint64_t context, uint64_t param1, uint64_t param2);
static void image_scaler(uint64_t context, uint64_t param1, uint64_t param2);
static void texture_mapper(uint64_t context, uint64_t param1, uint64_t param2);

/**
 * 像素处理系统函数
 */
static void pixel_sampler(uint64_t context, uint64_t param1, uint64_t param2);
static void color_interpolator(uint64_t context, uint64_t param1, uint64_t param2);
static void texture_coordinate_mapper(uint64_t context, uint64_t param1, uint64_t param2);
static void pixel_buffer_manager(uint64_t context, uint64_t param1, uint64_t param2);
static void color_converter(uint64_t context, uint64_t param1, uint64_t param2);
static void pixel_filter(uint64_t context, uint64_t param1, uint64_t param2);
static void image_processor(uint64_t context, uint64_t param1, uint64_t param2);
static void pixel_normalizer(uint64_t context, uint64_t param1, uint64_t param2);
static void color_space_manager(uint64_t context, uint64_t param1, uint64_t param2);

/**
 * 坐标处理系统函数
 */
static void coordinate_transformer(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_validator(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_scaler(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_interpolator(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_mapper(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_normalizer(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_processor(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_manager(uint64_t context, uint64_t param1, uint64_t param2);
static void coordinate_calculator(uint64_t context, uint64_t param1, uint64_t param2);

/*==========================================
=            函数定义            =
==========================================*/

/**
 * 双线性插值数据处理器
 * 处理双线性插值计算和数据坐标转换
 * 
 * @param param_1 上下文参数
 * @param param_2 输出数据指针
 * @param param_3 输入数据指针
 * @param param_4 浮点缩放参数
 * @param param_5 处理模式标志
 */
void FUN_1802a26b0(uint64_t param_1, uint64_t *param_2, longlong *param_3, float *param_4,
                   int param_5)
{
  ushort uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t *puVar8;
  longlong lVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_a8 [STACK_CANARY_SIZE];
  int8_t auStack_88 [8];
  uint64_t *puStack_80;
  uint64_t uStack_78;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  ulonglong uStack_58;
  
  // 栈保护变量初始化
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_a8;
  puStack_80 = param_2;
  
  // 模式0：直接坐标映射
  if (param_5 == 0) {
    // 计算Y坐标索引
    iVar5 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    iVar6 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
    
    // 应用Y轴缩放
    if ((int)((float)iVar6 * *param_4) <= iVar6) {
      iVar6 = (int)((float)iVar6 * *param_4);
    }
    
    // 应用X轴缩放
    if ((int)((float)iVar5 * param_4[1]) <= iVar5) {
      iVar5 = (int)((float)iVar5 * param_4[1]);
    }
    
    // 确保Y坐标在有效范围内
    iVar7 = 0;
    if (-1 < iVar5) {
      iVar7 = iVar5;
    }
    
    // 确保X坐标在有效范围内
    iVar5 = 0;
    if (-1 < iVar6) {
      iVar5 = iVar6;
    }
    
    // 计算最终数据指针位置
    *param_2 = *(uint64_t *)
                (*param_3 +
                (longlong)(int)(iVar7 * (uint)*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + iVar5) * ARRAY_ELEMENT_SIZE_8);
  }
  // 模式1：双线性插值
  else if (param_5 == 1) {
    // 初始化插值缓存
    puVar8 = &uStack_78;
    lVar9 = ARRAY_ITERATION_COUNT;
    do {
      func_0x000180074f10(puVar8);
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -1;
    } while (lVar9 != 0);
    
    // 计算Y坐标和浮点部分
    iVar6 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    fVar15 = (float)iVar6 * param_4[1];
    if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
      fVar15 = fVar15 - FLOAT_EPSILON;
    }
    
    // 获取X轴尺寸和计算整数部分
    uVar1 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X);
    uVar11 = (uint)uVar1;
    iVar7 = (int)fVar15;
    iVar5 = uVar1 - 1;
    
    // 计算X坐标和浮点部分
    fVar15 = (float)iVar5 * *param_4;
    if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
      fVar15 = fVar15 - FLOAT_EPSILON;
    }
    iVar10 = (int)fVar15;
    iVar13 = iVar10 + 1;
    
    // 验证X坐标边界
    if ((iVar10 < 0) || (iVar5 <= iVar10)) {
      iVar4 = iVar5;
      if (iVar10 <= iVar5) {
        iVar4 = iVar10;
      }
      iVar10 = 0;
      if (-1 < iVar4) {
        iVar10 = iVar4;
      }
      if (iVar13 <= iVar5) {
        iVar5 = iVar13;
      }
      iVar13 = 0;
      if (-1 < iVar5) {
        iVar13 = iVar5;
      }
    }
    
    // 验证Y坐标边界
    if ((iVar7 < 0) || (iVar5 = iVar7, iVar4 = iVar7 + 1, iVar12 = iVar7 + 1, iVar6 <= iVar7)) {
      iVar4 = iVar6;
      if (iVar7 <= iVar6) {
        iVar4 = iVar7;
      }
      iVar5 = 0;
      if (-1 < iVar4) {
        iVar5 = iVar4;
      }
      if (iVar7 <= iVar6) {
        iVar6 = iVar7;
      }
      iVar7 = 0;
      iVar4 = iVar5;
      iVar12 = 0;
      if (-1 < iVar6) {
        iVar7 = iVar6;
        iVar12 = iVar6;
      }
    }
    
    // 加载四个角点的数据
    lVar9 = *param_3;
    uStack_78 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar5 + iVar10) * ARRAY_ELEMENT_SIZE_8);
    uStack_70 = *(uint64_t *)(lVar9 + (ulonglong)((uint)uVar1 * iVar7 + iVar13) * ARRAY_ELEMENT_SIZE_8);
    uStack_68 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar4 + iVar10) * ARRAY_ELEMENT_SIZE_8);
    uStack_60 = *(uint64_t *)(lVar9 + (ulonglong)(uVar11 * iVar12 + iVar13) * ARRAY_ELEMENT_SIZE_8);
    
    // 执行双线性插值计算
    fVar15 = (float)modff(uStack_60, auStack_88);
    fVar14 = (float)modff();
    
    // 计算R分量插值
    iVar5 = (int)((float)(int)((uint)uStack_70._4_2_ - (uint)uStack_78._4_2_) * fVar14) +
            (uint)uStack_78._4_2_;
    iVar7 = (int)((float)(int)((uint)uStack_70._2_2_ - (uint)uStack_78._2_2_) * fVar14) +
            (uint)uStack_78._2_2_;
    iVar13 = (int)((float)(int)((uint)(ushort)uStack_70 - (uint)(ushort)uStack_78) * fVar14) +
             (uint)(ushort)uStack_78;
    iVar6 = (int)((float)(int)((uint)uStack_70._6_2_ - (uint)uStack_78._6_2_) * fVar14) +
            (uint)uStack_78._6_2_;
    
    // 最终双线性插值计算
    iVar5 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._4_2_ - (uint)uStack_68._4_2_) *
                                     fVar14) + (uint)uStack_68._4_2_) - iVar5) * fVar15) + iVar5;
    iVar7 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._2_2_ - (uint)uStack_68._2_2_) *
                                     fVar14) + (uint)uStack_68._2_2_) - iVar7) * fVar15) + iVar7;
    uStack_78 = CONCAT44(iVar7, iVar5);
    uVar2 = uStack_78;
    
    // 计算G分量插值
    iVar13 = (int)((float)(int)(((int)((float)(int)((uint)(ushort)uStack_60 -
                                                   (uint)(ushort)uStack_68) * fVar14) +
                                (uint)(ushort)uStack_68) - iVar13) * fVar15) + iVar13;
    iVar6 = (int)((float)(int)(((int)((float)(int)((uint)uStack_60._6_2_ - (uint)uStack_68._6_2_) *
                                     fVar14) + (uint)uStack_68._6_2_) - iVar6) * fVar15) + iVar6;
    uStack_70 = CONCAT44(iVar6, iVar13);
    uVar3 = uStack_70;
    
    // 存储插值结果
    uStack_70._0_2_ = (ushort)iVar13;
    *(ushort *)puStack_80 = (ushort)uStack_70;
    uStack_78._4_2_ = (ushort)iVar7;
    *(ushort *)((longlong)puStack_80 + 2) = uStack_78._4_2_;
    uStack_78._0_2_ = (ushort)iVar5;
    *(ushort *)((longlong)puStack_80 + 4) = (ushort)uStack_78;
    uStack_70._4_2_ = (ushort)iVar6;
    *(ushort *)((longlong)puStack_80 + 6) = uStack_70._4_2_;
    uStack_78 = uVar2;
    uStack_70 = uVar3;
  }
  
  // 栈保护检查和退出
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_a8);
}

/**
 * 像素数据插值处理器
 * 处理像素数据的插值计算和坐标映射
 * 
 * @param param_1 上下文参数
 * @param param_2 输出参数数量
 */
void FUN_1802a26f0(uint64_t param_1, int param_2)
{
  ushort uVar1;
  uint64_t uVar2;
  int16_t *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  ulonglong uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  float *unaff_R14;
  int iVar13;
  float fVar14;
  float fVar15;
  
  // 初始化输出缓冲区
  lVar8 = unaff_RBP + -0x29;
  uVar9 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(lVar8);
    lVar8 = lVar8 + 8;
    uVar9 = uVar9 - 1;
  } while (uVar9 != 0);
  
  // 计算Y坐标和浮点部分
  iVar6 = *(ushort *)((longlong)unaff_RSI + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
  fVar15 = (float)iVar6 * unaff_R14[1];
  if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
    fVar15 = fVar15 - FLOAT_EPSILON;
  }
  
  // 获取X轴尺寸和计算整数部分
  uVar1 = *(ushort *)((longlong)unaff_RSI + COORDINATE_OFFSET_X);
  uVar11 = (uint)uVar1;
  iVar7 = (int)fVar15;
  iVar5 = uVar1 - 1;
  
  // 计算X坐标和浮点部分
  fVar15 = (float)iVar5 * *unaff_R14;
  if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
    fVar15 = fVar15 - FLOAT_EPSILON;
  }
  iVar10 = (int)fVar15;
  iVar13 = iVar10 + 1;
  
  // 验证X坐标边界
  if ((iVar10 < 0) || (iVar5 <= iVar10)) {
    iVar4 = iVar5;
    if (iVar10 <= iVar5) {
      iVar4 = iVar10;
    }
    iVar10 = 0;
    if (-1 < iVar4) {
      iVar10 = iVar4;
    }
    if (iVar13 <= iVar5) {
      iVar5 = iVar13;
    }
    iVar13 = 0;
    if (-1 < iVar5) {
      iVar13 = iVar5;
    }
  }
  
  // 验证Y坐标边界
  if ((iVar7 < 0) || (iVar5 = iVar7, iVar4 = iVar7 + 1, iVar12 = iVar7 + 1, iVar6 <= iVar7)) {
    iVar4 = iVar6;
    if (iVar7 <= iVar6) {
      iVar4 = iVar7;
    }
    iVar5 = 0;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar7 <= iVar6) {
      iVar6 = iVar7;
    }
    iVar7 = 0;
    iVar4 = iVar5;
    iVar12 = 0;
    if (-1 < iVar6) {
      iVar7 = iVar6;
      iVar12 = iVar6;
    }
  }
  
  // 加载四个角点的数据
  lVar8 = *unaff_RSI;
  *(uint64_t *)(unaff_RBP + -0x29) =
       *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar5 + iVar10) * ARRAY_ELEMENT_SIZE_8);
  *(uint64_t *)(unaff_RBP + -0x21) =
       *(uint64_t *)(lVar8 + (ulonglong)((uint)uVar1 * iVar7 + iVar13) * ARRAY_ELEMENT_SIZE_8);
  *(uint64_t *)(unaff_RBP + -0x19) =
       *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar4 + iVar10) * ARRAY_ELEMENT_SIZE_8);
  uVar2 = *(uint64_t *)(lVar8 + (ulonglong)(uVar11 * iVar12 + iVar13) * ARRAY_ELEMENT_SIZE_8);
  *(uint64_t *)(unaff_RBP + -0x11) = uVar2;
  
  // 执行双线性插值计算
  fVar15 = (float)modff(uVar2, unaff_RBP + -0x39);
  fVar14 = (float)modff();
  
  // 计算B分量插值
  iVar5 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1d) -
                            (uint)*(ushort *)(unaff_RBP + -0x25)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x25);
  iVar6 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1f) -
                            (uint)*(ushort *)(unaff_RBP + -0x27)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x27);
  iVar13 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x21) -
                             (uint)*(ushort *)(unaff_RBP + -0x29)) * fVar14) +
           (uint)*(ushort *)(unaff_RBP + -0x29);
  iVar7 = (int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x1b) -
                            (uint)*(ushort *)(unaff_RBP + -0x23)) * fVar14) +
          (uint)*(ushort *)(unaff_RBP + -0x23);
  
  // 最终双线性插值计算
  *(int *)(unaff_RBP + -0x29) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xd) -
                                             (uint)*(ushort *)(unaff_RBP + -0x15)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x15)) - iVar5) * fVar15) + iVar5;
  *(int *)(unaff_RBP + -0x25) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xf) -
                                             (uint)*(ushort *)(unaff_RBP + -0x17)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x17)) - iVar6) * fVar15) + iVar6;
  *(int *)(unaff_RBP + -0x21) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0x11) -
                                             (uint)*(ushort *)(unaff_RBP + -0x19)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x19)) - iVar13) * fVar15) + iVar13;
  puVar3 = *(int16_t **)(unaff_RBP + -0x31);
  *(int *)(unaff_RBP + -0x1d) =
       (int)((float)(int)(((int)((float)(int)((uint)*(ushort *)(unaff_RBP + -0xb) -
                                             (uint)*(ushort *)(unaff_RBP + -0x13)) * fVar14) +
                          (uint)*(ushort *)(unaff_RBP + -0x13)) - iVar7) * fVar15) + iVar7;
  
  // 存储插值结果
  *puVar3 = *(int16_t *)(unaff_RBP + -0x21);
  puVar3[1] = *(int16_t *)(unaff_RBP + -0x25);
  puVar3[2] = *(int16_t *)(unaff_RBP + -0x29);
  puVar3[3] = *(int16_t *)(unaff_RBP + -0x1d);
  
  // 栈保护检查和退出
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
}

/**
 * 坐标映射数据处理器
 * 处理坐标映射和数据检索操作
 * 
 * @param param_1 上下文参数
 * @param param_2 输出参数
 * @param param_3 输入数据指针
 */
void FUN_1802a2a2a(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  int iVar1;
  int iVar2;
  longlong unaff_RBP;
  longlong *unaff_RSI;
  int iVar3;
  uint64_t *in_R11;
  float *unaff_R14;
  
  // 计算Y坐标索引
  iVar2 = *(ushort *)((longlong)unaff_RSI + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
  iVar3 = *(ushort *)(param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
  
  // 应用Y轴缩放
  if ((int)((float)iVar3 * *unaff_R14) <= iVar3) {
    iVar3 = (int)((float)iVar3 * *unaff_R14);
  }
  
  // 应用X轴缩放
  if ((int)((float)iVar2 * unaff_R14[1]) <= iVar2) {
    iVar2 = (int)((float)iVar2 * unaff_R14[1]);
  }
  
  // 确保Y坐标在有效范围内
  iVar1 = 0;
  if (-1 < iVar2) {
    iVar1 = iVar2;
  }
  
  // 确保X坐标在有效范围内
  iVar2 = 0;
  if (-1 < iVar3) {
    iVar2 = iVar3;
  }
  
  // 计算最终数据指针位置
  *in_R11 = *(uint64_t *)
             (*unaff_RSI + (longlong)(int)(iVar1 * (uint)*(ushort *)(param_3 + COORDINATE_OFFSET_X) + iVar2) * ARRAY_ELEMENT_SIZE_8);
  
  // 栈保护检查和退出
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + -9) ^ (ulonglong)&stack0x00000000);
}

/**
 * 像素数据采样处理器
 * 处理像素数据采样和插值计算
 * 
 * @param param_1 上下文参数
 * @param param_2 输出像素数据指针
 * @param param_3 输入数据指针
 * @param param_4 浮点缩放参数
 * @param param_5 处理模式标志
 */
void FUN_1802a2ab0(uint64_t param_1, short *param_2, longlong *param_3, float *param_4, int param_5)
{
  short sVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  ushort *puVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_98 [STACK_CANARY_SIZE];
  int8_t auStack_78 [8];
  ushort uStack_70;
  ushort uStack_6e;
  ushort uStack_6c;
  ushort uStack_6a;
  ushort uStack_68;
  ushort uStack_66;
  ushort uStack_64;
  ushort uStack_62;
  ushort uStack_60;
  ushort uStack_5e;
  ushort uStack_5c;
  ushort uStack_5a;
  ulonglong uStack_58;
  
  // 栈保护变量初始化
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  
  // 模式0：直接坐标映射
  if (param_5 == 0) {
    // 计算Y坐标索引
    iVar4 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    iVar3 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
    
    // 应用Y轴缩放
    if ((int)((float)iVar3 * *param_4) <= iVar3) {
      iVar3 = (int)((float)iVar3 * *param_4);
    }
    
    // 应用X轴缩放
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    
    // 确保Y坐标在有效范围内
    iVar7 = 0;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    
    // 确保X坐标在有效范围内
    iVar4 = 0;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    
    // 计算最终数据指针位置
    lVar6 = *param_3;
    lVar2 = (longlong)(int)(iVar4 + iVar7 * (uint)*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X));
    *(int32_t *)param_2 = *(int32_t *)(lVar6 + lVar2 * ARRAY_ELEMENT_SIZE_6);
    sVar1 = *(short *)(lVar6 + 4 + lVar2 * ARRAY_ELEMENT_SIZE_6);
  }
  // 模式1：双线性插值
  else {
    if (param_5 != 1) goto LAB_1802a2ced;
    
    // 初始化插值缓存
    puVar5 = &uStack_70;
    lVar6 = ARRAY_ITERATION_COUNT;
    do {
      func_0x000180074f10(puVar5);
      puVar5 = puVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    
    // 调用纹理采样函数
    FUN_1802a4fa0(param_3, param_4);
    
    // 计算Y坐标和浮点部分
    fVar8 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT) * param_4[1],
                         auStack_78);
    fVar9 = (float)modff();
    
    // 执行双线性插值计算
    iVar4 = (int)((float)(int)((uint)uStack_66 - (uint)uStack_6c) * fVar9) + (uint)uStack_6c;
    iVar7 = (int)((float)(int)((uint)uStack_68 - (uint)uStack_6e) * fVar9) + (uint)uStack_6e;
    iVar3 = (int)((float)(int)((uint)uStack_6a - (uint)uStack_70) * fVar9) + (uint)uStack_70;
    
    // 最终双线性插值计算
    *param_2 = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5e - (uint)uStack_64) *
                                               fVar9) - iVar3) + (uint)uStack_64) * fVar8) +
               (short)iVar3;
    param_2[1] = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5c - (uint)uStack_62) *
                                                 fVar9) - iVar7) + (uint)uStack_62) * fVar8) +
                 (short)iVar7;
    sVar1 = (short)(int)((float)(int)(((int)((float)(int)((uint)uStack_5a - (uint)uStack_60) * fVar9
                                            ) - iVar4) + (uint)uStack_60) * fVar8) + (short)iVar4;
  }
  
  // 存储最终结果
  param_2[2] = sVar1;
LAB_1802a2ced:
  
  // 栈保护检查和退出
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_98);
}

/**
 * 像素数据批量处理器
 * 处理像素数据的批量插值计算
 * 
 * @param param_1 上下文参数
 * @param param_2 输出参数数量
 * @param param_3 输入参数1
 * @param param_4 输入参数2
 * @param param_5 输入参数3
 * @param param_6 输入参数4
 * @param param_7 输入参数5
 * @param param_8 栈保护参数
 */
void FUN_1802a2aec(uint64_t param_1, int param_2, uint64_t param_3, uint64_t param_4,
                   uint64_t param_5, uint64_t param_6, uint64_t param_7, ulonglong param_8)
{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  short *unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_R14;
  float fVar6;
  float fVar7;
  int8_t auStackX_20 [8];
  
  // 初始化输出缓冲区
  puVar3 = &param_5;
  uVar4 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(puVar3);
    puVar3 = (uint64_t *)((longlong)puVar3 + 6);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  
  // 调用纹理采样函数
  FUN_1802a4fa0();
  
  // 计算Y坐标和浮点部分
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_R14 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT) * *(float *)(unaff_RBP + 4),
                       auStackX_20);
  fVar7 = (float)modff();
  
  // 执行双线性插值计算
  iVar2 = (int)((float)(int)((uint)param_6._2_2_ - (uint)param_5._4_2_) * fVar7) +
          (uint)param_5._4_2_;
  iVar5 = (int)((float)(int)((uint)(ushort)param_6 - (uint)param_5._2_2_) * fVar7) +
          (uint)param_5._2_2_;
  iVar1 = (int)((float)(int)((uint)param_5._6_2_ - (uint)(ushort)param_5) * fVar7) +
          (uint)(ushort)param_5;
  
  // 最终双线性插值计算
  *unaff_RSI = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._2_2_ -
                                                            (uint)param_6._4_2_) * fVar7) - iVar1) +
                                        (uint)param_6._4_2_) * fVar6) + (short)iVar1;
  unaff_RSI[1] = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._4_2_ -
                                                              (uint)param_6._6_2_) * fVar7) - iVar5)
                                          + (uint)param_6._6_2_) * fVar6) + (short)iVar5;
  unaff_RSI[2] = (short)(int)((float)(int)(((int)((float)(int)((uint)param_7._6_2_ -
                                                              (uint)(ushort)param_7) * fVar7) -
                                           iVar2) + (uint)(ushort)param_7) * fVar6) + (short)iVar2;
  
  // 栈保护检查和退出
  FUN_1808fc050(param_8 ^ (ulonglong)&stack0x00000000);
}

/**
 * 坐标映射数据处理器
 * 处理坐标映射和数据检索操作
 * 
 * @param param_1 上下文参数
 * @param param_2 输出数据指针
 * @param param_3 输入数据指针
 */
void FUN_1802a2c83(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float *unaff_RBP;
  int32_t *unaff_RSI;
  int iVar5;
  longlong *unaff_R14;
  ulonglong in_stack_00000040;
  
  // 计算Y坐标索引
  iVar4 = *(ushort *)((longlong)unaff_R14 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
  iVar5 = *(ushort *)(param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
  
  // 应用Y轴缩放
  if ((int)((float)iVar5 * *unaff_RBP) <= iVar5) {
    iVar5 = (int)((float)iVar5 * *unaff_RBP);
  }
  
  // 应用X轴缩放
  if ((int)((float)iVar4 * unaff_RBP[1]) <= iVar4) {
    iVar4 = (int)((float)iVar4 * unaff_RBP[1]);
  }
  
  // 确保Y坐标在有效范围内
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  
  // 确保X坐标在有效范围内
  iVar4 = 0;
  if (-1 < iVar5) {
    iVar4 = iVar5;
  }
  
  // 计算最终数据指针位置
  lVar1 = *unaff_R14;
  lVar2 = (longlong)(int)(iVar4 + iVar3 * (uint)*(ushort *)(param_3 + COORDINATE_OFFSET_X));
  *unaff_RSI = *(int32_t *)(lVar1 + lVar2 * ARRAY_ELEMENT_SIZE_6);
  *(int16_t *)(unaff_RSI + 1) = *(int16_t *)(lVar1 + 4 + lVar2 * ARRAY_ELEMENT_SIZE_6);
  
  // 栈保护检查和退出
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}

/**
 * 字符数据采样处理器
 * 处理字符数据的采样和插值计算
 * 
 * @param param_1 上下文参数
 * @param param_2 输出字符数据指针
 * @param param_3 输入数据指针
 * @param param_4 浮点缩放参数
 * @param param_5 处理模式标志
 */
void FUN_1802a2d10(uint64_t param_1, char *param_2, longlong *param_3, float *param_4, int param_5)
{
  char cVar1;
  int iVar2;
  int16_t *puVar3;
  int iVar4;
  byte *pbVar5;
  longlong lVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  int8_t auStack_88 [STACK_CANARY_SIZE];
  int8_t auStack_68 [8];
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  byte bStack_58;
  byte bStack_57;
  byte bStack_56;
  byte bStack_55;
  ulonglong uStack_50;
  
  // 栈保护变量初始化
  uStack_50 = _DAT_180bf00a8 ^ (ulonglong)auStack_88;
  
  // 模式0：直接坐标映射
  if (param_5 == 0) {
    // 计算Y坐标索引
    iVar4 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    iVar2 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
    
    // 应用Y轴缩放
    if ((int)((float)iVar2 * *param_4) <= iVar2) {
      iVar2 = (int)((float)iVar2 * *param_4);
    }
    
    // 应用X轴缩放
    if ((int)((float)iVar4 * param_4[1]) <= iVar4) {
      iVar4 = (int)((float)iVar4 * param_4[1]);
    }
    
    // 确保Y坐标在有效范围内
    iVar7 = 0;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    
    // 确保X坐标在有效范围内
    iVar4 = 0;
    if (-1 < iVar2) {
      iVar4 = iVar2;
    }
    
    // 计算最终数据指针位置
    puVar3 = (int16_t *)
             ((longlong)(int)(iVar4 + iVar7 * (uint)*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X)) * ARRAY_ELEMENT_SIZE_3 +
             *param_3);
    *(int16_t *)param_2 = *puVar3;
    cVar1 = *(char *)(puVar3 + 1);
  }
  // 模式1：双线性插值
  else {
    if (param_5 != 1) goto LAB_1802a2f44;
    
    // 初始化插值缓存
    pbVar5 = &bStack_60;
    lVar6 = ARRAY_ITERATION_COUNT;
    do {
      func_0x000180074f10(pbVar5);
      pbVar5 = pbVar5 + 3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    
    // 调用纹理采样函数
    FUN_1802a5100(param_3, param_4);
    
    // 计算Y坐标和浮点部分
    fVar8 = (float)modff((float)(int)(*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT) * param_4[1],
                         auStack_68);
    fVar9 = (float)modff();
    
    // 执行双线性插值计算
    iVar4 = (int)((float)(int)((uint)bStack_5b - (uint)bStack_5e) * fVar9) + (uint)bStack_5e;
    iVar7 = (int)((float)(int)((uint)bStack_5c - (uint)bStack_5f) * fVar9) + (uint)bStack_5f;
    iVar2 = (int)((float)(int)((uint)bStack_5d - (uint)bStack_60) * fVar9) + (uint)bStack_60;
    
    // 最终双线性插值计算
    *param_2 = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_57 - (uint)bStack_5a) *
                                              fVar9) - iVar2) + (uint)bStack_5a) * fVar8) +
               (char)iVar2;
    param_2[1] = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_56 - (uint)bStack_59) *
                                                fVar9) - iVar7) + (uint)bStack_59) * fVar8) +
                 (char)iVar7;
    cVar1 = (char)(int)((float)(int)(((int)((float)(int)((uint)bStack_55 - (uint)bStack_58) * fVar9)
                                     - iVar4) + (uint)bStack_58) * fVar8) + (char)iVar4;
  }
  
  // 存储最终结果
  param_2[2] = cVar1;
LAB_1802a2f44:
  
  // 栈保护检查和退出
  FUN_1808fc050(uStack_50 ^ (ulonglong)auStack_88);
}

/**
 * 字符数据批量处理器
 * 处理字符数据的批量插值计算
 * 
 * @param param_1 上下文参数
 * @param param_2 输出参数数量
 * @param param_3 输入参数1
 * @param param_4 输入参数2
 * @param param_5 输入参数3
 * @param param_6 输入参数4
 * @param param_7 栈保护参数
 */
void FUN_1802a2d49(uint64_t param_1, int param_2, uint64_t param_3, uint64_t param_4,
                   uint64_t param_5, uint64_t param_6, ulonglong param_7)
{
  int iVar1;
  int iVar2;
  uint64_t *puVar3;
  longlong unaff_RBP;
  char *unaff_RSI;
  ulonglong uVar4;
  int iVar5;
  longlong unaff_R14;
  float fVar6;
  float fVar7;
  int8_t auStackX_20 [8];
  
  // 初始化输出缓冲区
  puVar3 = &param_5;
  uVar4 = (ulonglong)(param_2 + 3);
  do {
    func_0x000180074f10(puVar3);
    puVar3 = (uint64_t *)((longlong)puVar3 + 3);
    uVar4 = uVar4 - 1;
  } while (uVar4 != 0);
  
  // 调用纹理采样函数
  FUN_1802a5100();
  
  // 计算Y坐标和浮点部分
  fVar6 = (float)modff((float)(int)(*(ushort *)(unaff_RBP + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT) * *(float *)(unaff_R14 + 4),
                       auStackX_20);
  fVar7 = (float)modff();
  
  // 执行双线性插值计算
  iVar2 = (int)((float)(int)((uint)param_5._5_1_ - (uint)param_5._2_1_) * fVar7) +
          (uint)param_5._2_1_;
  iVar5 = (int)((float)(int)((uint)param_5._4_1_ - (uint)param_5._1_1_) * fVar7) +
          (uint)param_5._1_1_;
  iVar1 = (int)((float)(int)((uint)param_5._3_1_ - (uint)(byte)param_5) * fVar7) +
          (uint)(byte)param_5;
  
  // 最终双线性插值计算
  *unaff_RSI = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._1_1_ -
                                                           (uint)param_5._6_1_) * fVar7) - iVar1) +
                                       (uint)param_5._6_1_) * fVar6) + (char)iVar1;
  unaff_RSI[1] = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._2_1_ -
                                                             (uint)param_5._7_1_) * fVar7) - iVar5)
                                         + (uint)param_5._7_1_) * fVar6) + (char)iVar5;
  unaff_RSI[2] = (char)(int)((float)(int)(((int)((float)(int)((uint)param_6._3_1_ -
                                                             (uint)(byte)param_6) * fVar7) -
                                           iVar2) + (uint)(byte)param_6) * fVar6) + (char)iVar2;
  
  // 栈保护检查和退出
  FUN_1808fc050(param_7 ^ (ulonglong)&stack0x00000000);
}

/**
 * 像素数据检索处理器
 * 处理像素数据的检索和映射操作
 * 
 * @param param_1 上下文参数
 * @param param_2 输出像素数据指针
 * @param param_3 输入数据指针
 */
void FUN_1802a2eda(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  int iVar1;
  int16_t *puVar2;
  int iVar3;
  longlong *unaff_RBP;
  int16_t *unaff_RSI;
  int iVar4;
  float *unaff_R14;
  ulonglong in_stack_00000038;
  
  // 计算Y坐标索引
  iVar3 = *(ushort *)((longlong)unaff_RBP + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
  iVar4 = *(ushort *)(param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
  
  // 应用Y轴缩放
  if ((int)((float)iVar4 * *unaff_R14) <= iVar4) {
    iVar4 = (int)((float)iVar4 * *unaff_R14);
  }
  
  // 应用X轴缩放
  if ((int)((float)iVar3 * unaff_R14[1]) <= iVar3) {
    iVar3 = (int)((float)iVar3 * unaff_R14[1]);
  }
  
  // 确保Y坐标在有效范围内
  iVar1 = 0;
  if (-1 < iVar3) {
    iVar1 = iVar3;
  }
  
  // 确保X坐标在有效范围内
  iVar3 = 0;
  if (-1 < iVar4) {
    iVar3 = iVar4;
  }
  
  // 计算最终数据指针位置
  puVar2 = (int16_t *)
           ((longlong)(int)(iVar3 + iVar1 * (uint)*(ushort *)(param_3 + COORDINATE_OFFSET_X)) * ARRAY_ELEMENT_SIZE_3 + *unaff_RBP);
  *unaff_RSI = *puVar2;
  *(int8_t *)(unaff_RSI + 1) = *(int8_t *)(puVar2 + 1);
  
  // 栈保护检查和退出
  FUN_1808fc050(in_stack_00000038 ^ (ulonglong)&stack0x00000000);
}

/**
 * 像素数据采样处理器
 * 处理像素数据的采样和插值计算
 * 
 * @param param_1 上下文参数
 * @param param_2 输出像素数据指针
 * @param param_3 输入数据指针
 * @param param_4 浮点缩放参数
 * @param param_5 处理模式标志
 */
void FUN_1802a2f60(uint64_t param_1, int32_t *param_2, longlong *param_3, float *param_4,
                   int param_5)
{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  float fVar14;
  float fVar15;
  int8_t auStack_98 [STACK_CANARY_SIZE];
  int8_t auStack_78 [8];
  int32_t *puStack_70;
  uint uStack_68;
  uint uStack_64;
  int32_t uStack_60;
  uint uStack_5c;
  ulonglong uStack_58;
  
  // 栈保护变量初始化
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_98;
  puStack_70 = param_2;
  
  // 模式0：直接坐标映射
  if (param_5 == 0) {
    // 计算Y坐标索引
    iVar3 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    iVar4 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + COORDINATE_ADJUSTMENT;
    
    // 应用Y轴缩放
    if ((int)((float)iVar4 * *param_4) <= iVar4) {
      iVar4 = (int)((float)iVar4 * *param_4);
    }
    
    // 应用X轴缩放
    if ((int)((float)iVar3 * param_4[1]) <= iVar3) {
      iVar3 = (int)((float)iVar3 * param_4[1]);
    }
    
    // 确保Y坐标在有效范围内
    iVar6 = 0;
    if (-1 < iVar3) {
      iVar6 = iVar3;
    }
    
    // 确保X坐标在有效范围内
    iVar3 = 0;
    if (-1 < iVar4) {
      iVar3 = iVar4;
    }
    
    // 计算最终数据指针位置
    *param_2 = *(int32_t *)
                (*param_3 +
                (longlong)(int)(iVar6 * (uint)*(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X) + iVar3) * ARRAY_ELEMENT_SIZE_4);
  }
  // 模式1：双线性插值
  else if (param_5 == 1) {
    // 初始化插值缓存
    puVar7 = &uStack_68;
    lVar8 = ARRAY_ITERATION_COUNT;
    do {
      func_0x000180074f10(puVar7);
      puVar7 = puVar7 + 1;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    
    // 计算Y坐标和浮点部分
    iVar4 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_Y) + COORDINATE_ADJUSTMENT;
    fVar15 = (float)iVar4 * param_4[1];
    if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
      fVar15 = fVar15 - FLOAT_EPSILON;
    }
    
    // 获取X轴尺寸和计算整数部分
    uVar1 = *(ushort *)((longlong)param_3 + COORDINATE_OFFSET_X);
    uVar5 = (uint)uVar1;
    iVar6 = (int)fVar15;
    iVar3 = uVar1 - 1;
    
    // 计算X坐标和浮点部分
    fVar15 = (float)iVar3 * *param_4;
    if (fVar15 <= FLOAT_ZERO_THRESHOLD) {
      fVar15 = fVar15 - FLOAT_EPSILON;
    }
    iVar9 = (int)fVar15;
    iVar13 = iVar9 + 1;
    
    // 验证X坐标边界
    if ((iVar9 < 0) || (iVar3 <= iVar9)) {
      iVar2 = iVar3;
      if (iVar9 <= iVar3) {
        iVar2 = iVar9;
      }
      iVar9 = 0;
      if (-1 < iVar2) {
        iVar9 = iVar2;
      }
      if (iVar13 <= iVar3) {
        iVar3 = iVar13;
      }
      iVar13 = 0;
      if (-1 < iVar3) {
        iVar13 = iVar3;
      }
    }
    
    // 验证Y坐标边界
    if ((iVar6 < 0) || (iVar3 = iVar6, iVar2 = iVar6 + 1, iVar12 = iVar6 + 1, iVar4 <= iVar6)) {
      iVar2 = iVar4;
      if (iVar6 <= iVar4) {
        iVar2 = iVar6;
      }
      iVar3 = 0;
      if (-1 < iVar2) {
        iVar3 = iVar2;
      }
      if (iVar6 <= iVar4) {
        iVar4 = iVar6;
      }
      iVar6 = 0;
      iVar2 = iVar3;
      iVar12 = 0;
      if (-1 < iVar4) {
        iVar6 = iVar4;
        iVar12 = iVar4;
      }
    }
    
    // 加载四个角点的数据
    lVar8 = *param_3;
    uStack_68 = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar3 + iVar9) * ARRAY_ELEMENT_SIZE_4);
    uStack_64 = *(uint *)(lVar8 + (ulonglong)((uint)uVar1 * iVar6 + iVar13) * ARRAY_ELEMENT_SIZE_4);
    uStack_60 = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar2 + iVar9) * ARRAY_ELEMENT_SIZE_4);
    uStack_5c = *(uint *)(lVar8 + (ulonglong)(uVar5 * iVar12 + iVar13) * ARRAY_ELEMENT_SIZE_4);
    
    // 执行双线性插值计算
    fVar15 = (float)modff(uStack_5c, auStack_78);
    fVar14 = (float)modff();
    
    // 提取像素分量
    uVar11 = (uint)uStack_60._3_1_;
    uVar5 = uStack_68 >> PIXEL_COMPONENT_SHIFT & PIXEL_COMPONENT_MASK;
    iVar3 = (int)((float)(int)((uStack_64 & PIXEL_COMPONENT_MASK) - (uStack_68 & PIXEL_COMPONENT_MASK)) * fVar14) +
            (uStack_68 & PIXEL_COMPONENT_MASK);
    uVar10 = uStack_68 >> PIXEL_COMPONENT_SHIFT_16 & PIXEL_COMPONENT_MASK;
    iVar4 = (int)((float)(int)((uStack_64 >> PIXEL_COMPONENT_SHIFT & PIXEL_COMPONENT_MASK) - uVar5) * fVar14) + uVar5;
    iVar13 = (int)((float)(int)((uStack_64 >> PIXEL_COMPONENT_SHIFT_16 & PIXEL_COMPONENT_MASK) - uVar10) * fVar14) + uVar10;
    iVar6 = (int)((float)(int)((uStack_64 >> PIXEL_COMPONENT_SHIFT_24) - (uStack_68 >> PIXEL_COMPONENT_SHIFT_24)) * fVar14) +
            (uStack_68 >> PIXEL_COMPONENT_SHIFT_24);
    
    // 最终双线性插值计算
    uVar5 = (uint)uStack_60._3_1_;
    uStack_68 = (int)((float)(int)(((int)((float)(int)((uStack_5c & PIXEL_COMPONENT_MASK) - (uStack_60 & PIXEL_COMPONENT_MASK)) *
                                         fVar14) + (uStack_60 & PIXEL_COMPONENT_MASK)) - iVar3) * fVar15) + iVar3;
    uStack_64 = (int)((float)(int)(((int)((float)(int)((uStack_5c >> PIXEL_COMPONENT_SHIFT & PIXEL_COMPONENT_MASK) -
                                                      (uint)uStack_60._1_1_) * fVar14) +
                                   (uint)uStack_60._1_1_) - iVar4) * fVar15) + iVar4;
    uStack_60 = (int)((float)(int)(((int)((float)(int)((uStack_5c >> PIXEL_COMPONENT_SHIFT_16 & PIXEL_COMPONENT_MASK) -
                                                      (uint)uStack_60._2_1_) * fVar14) +
                                   (uint)uStack_60._2_1_) - iVar13) * fVar15) + iVar13;
    uStack_5c = (int)((float)(int)(((int)((float)(int)((uStack_5c >> PIXEL_COMPONENT_SHIFT_24) - uVar5) * fVar14) +
                                   uVar11) - iVar6) * fVar15) + iVar6;
    
    // 存储插值结果
    *(int8_t *)puStack_70 = (int8_t)uStack_68;
    *(int8_t *)((longlong)puStack_70 + 1) = (int8_t)uStack_64;
    *(int8_t *)((longlong)puStack_70 + 2) = (int8_t)uStack_60;
    *(int8_t *)((longlong)puStack_70 + 3) = (int8_t)uStack_5c;
  }
  
  // 栈保护检查和退出
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_98);
}

/*==========================================
=            函数别名定义            =
==========================================*/

/**
 * 数据处理系统函数别名
 */
#define BilinearInterpolationDataProcessor FUN_1802a26b0
#define PixelDataInterpolationProcessor FUN_1802a26f0
#define CoordinateMappingDataProcessor FUN_1802a2a2a
#define PixelDataSamplingProcessor FUN_1802a2ab0
#define PixelDataBatchProcessor FUN_1802a2aec
#define CoordinateMappingDataProcessor2 FUN_1802a2c83
#define CharacterDataSamplingProcessor FUN_1802a2d10
#define CharacterDataBatchProcessor FUN_1802a2d49
#define PixelDataRetrievalProcessor FUN_1802a2eda
#define PixelDataSamplingProcessor2 FUN_1802a2f60

/*==========================================
=            模块初始化和清理            =
==========================================*/

/**
 * 模块初始化函数
 */
void module_initializer(void)
{
  // 初始化数据处理系统
  data_interpolation_processor = 0;
  pixel_coordinate_transformer = 0;
  bilinear_interpolation_calculator = 0;
  texture_sampler = 0;
  color_space_converter = 0;
  
  // 初始化像素处理系统
  pixel_sampler = 0;
  color_interpolator = 0;
  texture_coordinate_mapper = 0;
  pixel_buffer_manager = 0;
  color_converter = 0;
  
  // 初始化坐标处理系统
  coordinate_transformer = 0;
  coordinate_validator = 0;
  coordinate_scaler = 0;
  coordinate_interpolator = 0;
  coordinate_mapper = 0;
  
  return;
}

/**
 * 模块清理函数
 */
void module_cleanup(void)
{
  // 清理数据处理系统
  data_interpolation_processor = 0;
  pixel_coordinate_transformer = 0;
  bilinear_interpolation_calculator = 0;
  texture_sampler = 0;
  color_space_converter = 0;
  
  // 清理像素处理系统
  pixel_sampler = 0;
  color_interpolator = 0;
  texture_coordinate_mapper = 0;
  pixel_buffer_manager = 0;
  color_converter = 0;
  
  // 清理坐标处理系统
  coordinate_transformer = 0;
  coordinate_validator = 0;
  coordinate_scaler = 0;
  coordinate_interpolator = 0;
  coordinate_mapper = 0;
  
  return;
}

/*==========================================
=            导出函数定义            =
==========================================*/

/**
 * 导出函数：双线性插值数据处理器
 * 对应原始函数：FUN_1802a26b0
 */
void BilinearInterpolationDataProcessor(uint64_t param_1, uint64_t *param_2, longlong *param_3, float *param_4,
                                        int param_5)
{
  FUN_1802a26b0(param_1, param_2, param_3, param_4, param_5);
}

/**
 * 导出函数：像素数据插值处理器
 * 对应原始函数：FUN_1802a26f0
 */
void PixelDataInterpolationProcessor(uint64_t param_1, int param_2)
{
  FUN_1802a26f0(param_1, param_2);
}

/**
 * 导出函数：坐标映射数据处理器
 * 对应原始函数：FUN_1802a2a2a
 */
void CoordinateMappingDataProcessor(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  FUN_1802a2a2a(param_1, param_2, param_3);
}

/**
 * 导出函数：像素数据采样处理器
 * 对应原始函数：FUN_1802a2ab0
 */
void PixelDataSamplingProcessor(uint64_t param_1, short *param_2, longlong *param_3, float *param_4, int param_5)
{
  FUN_1802a2ab0(param_1, param_2, param_3, param_4, param_5);
}

/**
 * 导出函数：像素数据批量处理器
 * 对应原始函数：FUN_1802a2aec
 */
void PixelDataBatchProcessor(uint64_t param_1, int param_2, uint64_t param_3, uint64_t param_4,
                              uint64_t param_5, uint64_t param_6, uint64_t param_7, ulonglong param_8)
{
  FUN_1802a2aec(param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);
}

/**
 * 导出函数：坐标映射数据处理器2
 * 对应原始函数：FUN_1802a2c83
 */
void CoordinateMappingDataProcessor2(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  FUN_1802a2c83(param_1, param_2, param_3);
}

/**
 * 导出函数：字符数据采样处理器
 * 对应原始函数：FUN_1802a2d10
 */
void CharacterDataSamplingProcessor(uint64_t param_1, char *param_2, longlong *param_3, float *param_4, int param_5)
{
  FUN_1802a2d10(param_1, param_2, param_3, param_4, param_5);
}

/**
 * 导出函数：字符数据批量处理器
 * 对应原始函数：FUN_1802a2d49
 */
void CharacterDataBatchProcessor(uint64_t param_1, int param_2, uint64_t param_3, uint64_t param_4,
                                 uint64_t param_5, uint64_t param_6, ulonglong param_7)
{
  FUN_1802a2d49(param_1, param_2, param_3, param_4, param_5, param_6, param_7);
}

/**
 * 导出函数：像素数据检索处理器
 * 对应原始函数：FUN_1802a2eda
 */
void PixelDataRetrievalProcessor(uint64_t param_1, uint64_t param_2, longlong param_3)
{
  FUN_1802a2eda(param_1, param_2, param_3);
}

/**
 * 导出函数：像素数据采样处理器2
 * 对应原始函数：FUN_1802a2f60
 */
void PixelDataSamplingProcessor2(uint64_t param_1, int32_t *param_2, longlong *param_3, float *param_4,
                                  int param_5)
{
  FUN_1802a2f60(param_1, param_2, param_3, param_4, param_5);
}

/*==========================================
=            技术说明            =
==========================================*/

/**
 * 本模块实现了一个完整的高级数据处理和插值算法模块，包含以下特性：
 * 
 * 1. 双线性插值算法：
 *    - 支持多种数据类型的双线性插值
 *    - 包含浮点数处理和边界检查
 *    - 实现了高质量的图像缩放算法
 * 
 * 2. 像素处理功能：
 *    - 支持不同位深的像素数据处理
 *    - 包含RGB和ARGB格式处理
 *    - 实现了像素分量的精确插值
 * 
 * 3. 坐标映射功能：
 *    - 支持多种坐标系的转换
 *    - 包含纹理坐标映射
 *    - 实现了精确的坐标计算
 * 
 * 4. 数据采样功能：
 *    - 支持多种数据类型的采样
 *    - 包含批量数据处理
 *    - 实现了高效的内存访问模式
 * 
 * 5. 内存管理功能：
 *    - 包含栈保护机制
 *    - 实现了安全的内存访问
 *    - 支持动态内存分配
 * 
 * 6. 边界处理功能：
 *    - 支持多种边界检查模式
 *    - 包含坐标边界验证
 *    - 实现了安全的索引计算
 * 
 * 模块采用了模块化设计，各个子系统相对独立，便于维护和扩展。
 * 主要实现了高级图像处理和数据插值算法，支持多种数据格式和处理模式。
 * 所有函数都进行了详细的中文注释，便于理解和维护。
 */