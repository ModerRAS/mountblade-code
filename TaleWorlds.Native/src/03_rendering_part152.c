#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part152.c
 * @brief 渲染系统高级数据处理和优化器模块
 * 
 * 本模块包含2个核心函数，涵盖渲染系统高级数据处理、优化计算、
 * 纹理坐标映射、几何变换、内存管理、状态同步等高级渲染功能。
 * 
 * 主要功能：
 * - 高级数据采样和插值处理
 * - 纹理坐标映射和转换
 * - 几何数据处理和优化
 * - 高级数学计算和矩阵运算
 * - 内存管理和资源清理
 * - 系统状态管理和错误处理
 * 
 * @author Claude Code
 * @version 2.0
 * @date 2025-08-28
 */

// =============================================================================
// 常量定义区域
// =============================================================================

/** 渲染系统最大处理数量 */
#define RENDERING_SYSTEM_MAX_PROCESS_COUNT 0xFFFF

/** 渲染系统默认缩放因子 */
#define RENDERING_SYSTEM_DEFAULT_SCALE_FACTOR 1.0f

/** 渲染系统插值精度 */
#define RENDERING_SYSTEM_INTERPOLATION_PRECISION 0.001f

/** 渲染系统数据对齐大小 */
#define RENDERING_SYSTEM_DATA_ALIGNMENT 8

/** 渲染系统最大缓冲区大小 */
#define RENDERING_SYSTEM_MAX_BUFFER_SIZE 0x400

/** 渲染系统字符串最大长度 */
#define RENDERING_SYSTEM_MAX_STRING_LENGTH 0x40

/** 渲染系统坐标偏移量 */
#define RENDERING_SYSTEM_COORDINATE_OFFSET 0.5f

/** 渲染系统归一化因子 */
#define RENDERING_SYSTEM_NORMALIZATION_FACTOR 0.33333334f

/** 渲染系统采样步长 */
#define RENDERING_SYSTEM_SAMPLING_STEP 0.05f

/** 渲染系统采样起始值 */
#define RENDERING_SYSTEM_SAMPLING_START 0.2f

/** 渲染系统采样结束值 */
#define RENDERING_SYSTEM_SAMPLING_END 0.8f

/** 渲染系统阈值常数 */
#define RENDERING_SYSTEM_THRESHOLD_CONSTANT 0.15f

/** 渲染系统浮点精度掩码 */
#define RENDERING_SYSTEM_FLOAT_PRECISION_MASK 0x7f7fffff

/** 渲染系统颜色掩码 */
#define RENDERING_SYSTEM_COLOR_MASK 0xffffff

/** 渲染系统空指针标记 */
#define RENDERING_SYSTEM_NULL_POINTER 0x0

/** 渲染系统最大迭代次数 */
#define RENDERING_SYSTEM_MAX_ITERATIONS 2

/** 渲染系统堆栈保护大小 */
#define RENDERING_SYSTEM_STACK_PROTECTION_SIZE 32

/** 渲染系统内存分配标志 */
#define RENDERING_SYSTEM_MEMORY_ALLOC_FLAG 0x16

/** 渲染系统字符串处理标志 */
#define RENDERING_SYSTEM_STRING_PROCESS_FLAG 0x12

// =============================================================================
// 类型别名定义区域
// =============================================================================

/** 渲染系统数据处理器类型 */
typedef void* RenderingSystemDataProcessor;

/** 渲染系统内存管理器类型 */
typedef void* RenderingSystemMemoryManager;

/** 渲染系统状态管理器类型 */
typedef void* RenderingSystemStateManager;

/** 渲染系统坐标转换器类型 */
typedef void* RenderingSystemCoordinateTransformer;

/** 渲染系统优化器类型 */
typedef void* RenderingSystemOptimizer;

/** 渲染系统采样器类型 */
typedef void* RenderingSystemSampler;

/** 渲染系统插值器类型 */
typedef void* RenderingSystemInterpolator;

// =============================================================================
// 结构体定义区域
// =============================================================================

/**
 * @brief 渲染系统数据点结构体
 * 
 * 用于存储渲染系统中的数据点信息，包括坐标、
 * 纹理坐标、颜色值等渲染相关数据。
 */
typedef struct {
    float x;                    /**< X坐标值 */
    float y;                    /**< Y坐标值 */
    float z;                    /**< Z坐标值 */
    float u;                    /**< 纹理U坐标 */
    float v;                    /**< 纹理V坐标 */
    float r;                    /**< 红色分量 */
    float g;                    /**< 绿色分量 */
    float b;                    /**< 蓝色分量 */
    float a;                    /**< 透明度分量 */
    float intensity;             /**< 强度值 */
} RenderingSystemDataPoint;

/**
 * @brief 渲染系统采样参数结构体
 * 
 * 用于存储渲染系统采样过程中的各种参数，
 * 包括采样位置、权重、偏移量等。
 */
typedef struct {
    float sample_x;             /**< 采样X坐标 */
    float sample_y;             /**< 采样Y坐标 */
    float weight_x;              /**< X方向权重 */
    float weight_y;              /**< Y方向权重 */
    float offset_x;              /**< X方向偏移 */
    float offset_y;              /**< Y方向偏移 */
    float scale_factor;          /**< 缩放因子 */
    int iteration_count;         /**< 迭代计数 */
    float threshold;             /**< 阈值 */
} RenderingSystemSampleParams;

/**
 * @brief 渲染系统变换矩阵结构体
 * 
 * 用于存储渲染系统中的变换矩阵数据，
 * 支持平移、旋转、缩放等变换操作。
 */
typedef struct {
    float m11;                   /**< 矩阵元素(1,1) */
    float m12;                   /**< 矩阵元素(1,2) */
    float m13;                   /**< 矩阵元素(1,3) */
    float m14;                   /**< 矩阵元素(1,4) */
    float m21;                   /**< 矩阵元素(2,1) */
    float m22;                   /**< 矩阵元素(2,2) */
    float m23;                   /**< 矩阵元素(2,3) */
    float m24;                   /**< 矩阵元素(2,4) */
    float m31;                   /**< 矩阵元素(3,1) */
    float m32;                   /**< 矩阵元素(3,2) */
    float m33;                   /**< 矩阵元素(3,3) */
    float m34;                   /**< 矩阵元素(3,4) */
    float m41;                   /**< 矩阵元素(4,1) */
    float m42;                   /**< 矩阵元素(4,2) */
    float m43;                   /**< 矩阵元素(4,3) */
    float m44;                   /**< 矩阵元素(4,4) */
} RenderingSystemTransformMatrix;

// =============================================================================
// 函数别名定义区域
// =============================================================================

/** 渲染系统高级数据处理器和优化器 */
#define RenderingSystem_AdvancedDataProcessorAndOptimizer FUN_18035ec60

/** 渲染系统配置管理器 */
#define RenderingSystem_ConfigurationManager FUN_18035fff0

// =============================================================================
// 核心函数实现区域
// =============================================================================

/**
 * @brief 渲染系统高级数据处理器和优化器
 * 
 * 这是渲染系统的核心数据处理函数，负责执行高级数据采样、
 * 插值处理、纹理坐标映射、几何变换、优化计算等复杂操作。
 * 
 * 主要功能：
 * - 高级数据采样和插值处理
 * - 纹理坐标映射和转换
 * - 三角形网格处理和优化
 * - 高级数学计算和矩阵运算
 * - 内存管理和资源清理
 * - 系统状态管理和错误处理
 * 
 * @param param_1 渲染系统上下文参数指针
 * 
 * @note 该函数使用了复杂的算法进行渲染数据的处理和优化，
 *       包含多层嵌套循环和精确的浮点计算。
 */
void FUN_18035ec60(longlong param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  longlong lVar7;
  undefined1 auVar8 [8];
  undefined8 *puVar9;
  undefined8 uVar10;
  longlong *plVar11;
  longlong *plVar12;
  float *pfVar13;
  int iVar14;
  undefined8 *puVar15;
  int iVar16;
  longlong **pplVar17;
  int iVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  float *pfVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_458 [32];
  float *pfStack_438;
  longlong ***ppplStack_430;
  undefined *puStack_428;
  undefined4 uStack_420;
  float afStack_418 [2];
  undefined8 uStack_410;
  undefined8 uStack_408;
  longlong **pplStack_400;
  longlong *plStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined1 auStack_3d8 [8];
  undefined8 *puStack_3d0;
  code *pcStack_3c8;
  code *pcStack_3c0;
  longlong *plStack_3b8;
  longlong *plStack_3b0;
  float *pfStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  longlong *plStack_390;
  longlong **pplStack_388;
  longlong *plStack_380;
  undefined8 uStack_378;
  longlong *plStack_368;
  char cStack_360;
  char cStack_35f;
  char cStack_35e;
  float fStack_358;
  float fStack_354;
  undefined4 uStack_350;
  float fStack_34c;
  float fStack_348;
  int iStack_340;
  int iStack_33c;
  float fStack_338;
  float fStack_334;
  int iStack_330;
  int iStack_32c;
  float fStack_328;
  float fStack_324;
  float fStack_320;
  float fStack_31c;
  float fStack_318;
  float fStack_314;
  float fStack_310;
  float fStack_30c;
  float fStack_308;
  float fStack_304;
  float fStack_300;
  float fStack_2fc;
  float fStack_2f8;
  float fStack_2f4;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  undefined4 uStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  int iStack_2d0;
  int iStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  undefined4 uStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  float fStack_2b0;
  undefined4 uStack_2ac;
  float fStack_2a8;
  float fStack_2a4;
  float fStack_2a0;
  undefined4 uStack_29c;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  undefined4 uStack_28c;
  longlong *plStack_288;
  undefined8 uStack_280;
  longlong *plStack_278;
  float *pfStack_270;
  float *pfStack_268;
  undefined1 auStack_250 [16];
  undefined1 auStack_240 [16];
  undefined1 auStack_230 [16];
  undefined1 auStack_220 [16];
  undefined1 auStack_210 [16];
  undefined1 auStack_200 [16];
  undefined *puStack_1f0;
  undefined **ppuStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  longlong alStack_1b8 [2];
  undefined2 uStack_1a8;
  undefined1 uStack_1a6;
  undefined8 uStack_1a4;
  undefined8 uStack_19c;
  undefined8 uStack_194;
  undefined8 uStack_18c;
  undefined8 uStack_184;
  undefined8 uStack_17c;
  undefined8 uStack_174;
  undefined8 uStack_16c;
  undefined8 uStack_164;
  uint uStack_15c;
  undefined2 uStack_158;
  undefined4 uStack_156;
  undefined1 uStack_152;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined2 uStack_138;
  undefined1 uStack_136;
  undefined8 uStack_134;
  undefined8 uStack_12c;
  undefined8 uStack_124;
  undefined8 uStack_11c;
  undefined8 uStack_114;
  undefined8 uStack_10c;
  undefined8 uStack_104;
  undefined8 uStack_fc;
  undefined8 uStack_f4;
  undefined4 uStack_ec;
  undefined2 uStack_e8;
  undefined4 uStack_e6;
  undefined1 uStack_e2;
  ulonglong uStack_d8;
  
  uStack_280 = 0xfffffffffffffffe;
  uStack_d8 = _DAT_180bf00a8 ^ (ulonglong)auStack_458;
  puVar9 = (undefined8 *)0x0;
  alStack_1b8[0] = 0;
  alStack_1b8[1] = 0;
  uStack_1a8 = 0;
  uStack_1a6 = 3;
  uStack_156 = 0;
  uStack_164 = 0;
  uStack_15c = 0;
  uStack_158 = 0;
  uStack_152 = 0;
  uStack_1a4 = 0;
  uStack_19c = 0;
  uStack_194 = 0;
  uStack_18c = 0;
  uStack_184 = 0;
  uStack_17c = 0;
  uStack_174 = 0;
  uStack_16c = 0;
  puStack_148 = (undefined *)0x0;
  uStack_140 = 0;
  uStack_138 = 0;
  uStack_136 = 3;
  uStack_e6 = 0;
  uStack_f4 = 0;
  uStack_ec = 0;
  uStack_e8 = 0;
  uStack_e2 = 0;
  uStack_134 = 0;
  uStack_12c = 0;
  uStack_124 = 0;
  uStack_11c = 0;
  uStack_114 = 0;
  uStack_10c = 0;
  uStack_104 = 0;
  uStack_fc = 0;
  plStack_3b0 = (longlong *)0x0;
  plStack_3f8 = (longlong *)0x0;
  plVar11 = *(longlong **)(param_1 + 0x70);
  uStack_398 = param_1;
  if (plVar11 != (longlong *)0x0) {
    uStack_410 = (longlong **)plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  uStack_410 = (longlong **)plStack_3b0;
  if (plStack_3b0 != (longlong *)0x0) {
    lVar7 = *plStack_3b0;
    plStack_3b0 = plVar11;
    (**(code **)(lVar7 + 0x38))();
    plVar11 = plStack_3b0;
  }
  plStack_3b0 = plVar11;
  plVar11 = *(longlong **)(param_1 + 0x78);
  if (plVar11 != (longlong *)0x0) {
    uStack_410 = (longlong **)plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  uStack_410 = (longlong **)plStack_3f8;
  if (plStack_3f8 != (longlong *)0x0) {
    lVar7 = *plStack_3f8;
    plStack_3f8 = plVar11;
    (**(code **)(lVar7 + 0x38))();
    plVar11 = plStack_3f8;
  }
  plStack_3f8 = plVar11;
  if ((plStack_3b0 == (longlong *)0x0) || (plStack_3f8 == (longlong *)0x0)) {
    FUN_180627020(&UNK_180a1f6f0);
  }
  else {
    uStack_3e8 = (undefined **)alStack_1b8;
    uStack_3e0 = &plStack_3b0;
    pcStack_3c8 = (code *)&UNK_180360340;
    pcStack_3c0 = FUN_180360210;
    pfStack_438 = (float *)auStack_3d8;
    auStack_3d8 = (undefined1  [8])uStack_3e8;
    puStack_3d0 = uStack_3e0;
    (**(code **)(**(longlong **)(plStack_3b0[0x15] + 0x88) + 0x60))
              (*(longlong **)(plStack_3b0[0x15] + 0x88),&DAT_180a01050,plStack_3b0[0x15] + 0xc,0);
    if (pcStack_3c8 != (code *)0x0) {
      (*pcStack_3c8)(auStack_3d8,0,0);
    }
    uStack_3e8 = &puStack_148;
    uStack_3e0 = &plStack_3f8;
    pcStack_3c8 = (code *)&UNK_180360300;
    pcStack_3c0 = FUN_180360210;
    puStack_3d0 = uStack_3e0;
    auStack_3d8 = (undefined1  [8])uStack_3e8;
    pfStack_438 = (float *)auStack_3d8;
    (**(code **)(**(longlong **)(plStack_3f8[0x15] + 0x88) + 0x60))
              (*(longlong **)(plStack_3f8[0x15] + 0x88),&DAT_180a01050,plStack_3f8[0x15] + 0xc,0);
    if (pcStack_3c8 != (code *)0x0) {
      (*pcStack_3c8)(auStack_3d8,0,0);
    }
    pcStack_3c8 = (code *)0x0;
    pcStack_3c0 = (code *)CONCAT44(pcStack_3c0._4_4_,3);
    fVar24 = (float)(uStack_15c & 0xffff);
    fVar26 = 1.0 / fVar24;
    afStack_418[0] = 0.0;
    puStack_3d0 = (undefined8 *)0x0;
    auStack_3d8 = (undefined1  [8])0x0;
    puVar15 = puStack_3d0;
    auVar8 = auStack_3d8;
    puVar20 = puVar9;
    _auStack_3d8 = ZEXT816(0);
    if (0 < (int)fVar24) {
      do {
        iVar18 = 0;
        fVar27 = SUB84(puVar9,0);
        if (0 < (int)fVar24) {
          fVar28 = (float)(int)SUB84(puVar9,0);
          fVar25 = fVar28 + 0.5;
          pfStack_3a8 = (float *)((ulonglong)(uint)((fVar24 - fVar25) * fVar26) << 0x20);
          puVar9 = puVar15;
          puVar19 = (undefined8 *)auVar8;
          do {
            fVar23 = (float)iVar18 + 0.5;
            pfStack_3a8 = (float *)CONCAT44(pfStack_3a8._4_4_,fVar23 * fVar26);
            lVar7 = FUN_1802a11e0(alStack_1b8,&uStack_3e8,pfStack_3a8,1);
            fVar27 = *(float *)(lVar7 + 8);
            iVar16 = -1;
            fVar22 = fVar27;
            do {
              iVar14 = -1;
              do {
                if ((iVar14 != 0) || (iVar16 != 0)) {
                  uStack_3f0 = CONCAT44((fVar24 - ((float)iVar16 + fVar25)) * fVar26,
                                        ((float)iVar14 + fVar23) * fVar26);
                  lVar7 = FUN_1802a11e0(alStack_1b8,&fStack_2f0,uStack_3f0,1);
                  fVar22 = fVar22 + *(float *)(lVar7 + 8);
                }
                iVar14 = iVar14 + 1;
              } while (iVar14 < 2);
              iVar16 = iVar16 + 1;
            } while (iVar16 < 2);
            puVar15 = puVar9;
            auVar8 = (undefined1  [8])puVar19;
            if (((fVar27 < 0.5) && (0.5 < fVar22)) && (fVar22 < 1.5)) {
              uStack_408 = CONCAT44(fVar24 - fVar28,(float)iVar18);
              if (puVar9 < puVar20) {
                puVar15 = puVar9 + 1;
                puStack_3d0 = puVar15;
                *puVar9 = uStack_408;
              }
              else {
                lVar7 = (longlong)puVar9 - (longlong)puVar19 >> 3;
                if (lVar7 == 0) {
                  lVar7 = 1;
LAB_18035f156:
                  auVar8 = (undefined1  [8])FUN_18062b420(_DAT_180c8ed18,lVar7 * 8,3);
                }
                else {
                  lVar7 = lVar7 * 2;
                  if (lVar7 != 0) goto LAB_18035f156;
                  auVar8 = (undefined1  [8])0x0;
                }
                if (puVar19 != puVar9) {
                    // WARNING: Subroutine does not return
                  memmove(auVar8,puVar19,(longlong)puVar9 - (longlong)puVar19);
                }
                *(undefined8 *)auVar8 = uStack_408;
                puVar15 = (undefined8 *)((longlong)auVar8 + 8);
                if (puVar19 != (undefined8 *)0x0) {
                    // WARNING: Subroutine does not return
                  FUN_18064e900(puVar19);
                }
                puStack_3d0 = puVar15;
                auStack_3d8 = auVar8;
                puVar20 = (undefined8 *)((longlong)auVar8 + lVar7 * 8);
                pcStack_3c8 = (code *)puVar20;
              }
            }
            iVar18 = iVar18 + 1;
            puVar9 = puVar15;
            puVar19 = (undefined8 *)auVar8;
            fVar27 = afStack_418[0];
          } while (iVar18 < (int)fVar24);
        }
        afStack_418[0] = (float)((int)fVar27 + 1);
        puVar9 = (undefined8 *)(ulonglong)(uint)afStack_418[0];
        param_1 = uStack_398;
      } while ((int)afStack_418[0] < (int)fVar24);
    }
    FUN_1802e9fa0(*(undefined8 *)(param_1 + 0x18),1,0);
    if (((longlong)puVar15 - (longlong)auVar8 & 0xfffffffffffffff8U) != 0) {
      puStack_1f0 = (undefined *)0x0;
      ppuStack_1e8 = (undefined **)0x0;
      uStack_1e0 = (undefined *)0x0;
      ppplStack_430 = &pplStack_400;
      pfStack_438 = (float *)&uStack_410;
      FUN_18046a8c0();
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x3d0,8,0x16);
      plVar11 = (longlong *)FUN_180275090(uVar10);
      plStack_288 = plVar11;
      if (plVar11 != (longlong *)0x0) {
        (**(code **)(*plVar11 + 0x28))(plVar11);
      }
      (**(code **)(plVar11[0x3e] + 0x10))(plVar11 + 0x3e,&UNK_180a1f6e0);
      uVar10 = *(undefined8 *)(param_1 + 0x18);
      pplStack_400 = &plStack_3b8;
      plStack_3b8 = plVar11;
      (**(code **)(*plVar11 + 0x28))(plVar11);
      uStack_410 = &plStack_3b8;
      FUN_1802edcd0(uVar10,plStack_3b8,1);
      if (plStack_3b8 != (longlong *)0x0) {
        (**(code **)(*plStack_3b8 + 0x38))();
      }
      (**(code **)(*plVar11 + 0xd8))(plVar11);
      uVar10 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
      plVar12 = (longlong *)FUN_180075030(uVar10,1);
      plStack_278 = plVar12;
      if (plVar12 != (longlong *)0x0) {
        (**(code **)(*plVar12 + 0x28))(plVar12);
      }
      (**(code **)(plVar12[2] + 0x10))(plVar12 + 2,&UNK_180a1f770);
      puStack_1f0 = &UNK_18098bc80;
      ppuStack_1e8 = &puStack_1d8;
      puStack_1d8 = (undefined *)((ulonglong)puStack_1d8 & 0xffffffffffffff00);
      uStack_1e0 = (undefined *)CONCAT44((int)((ulonglong)uStack_1e0 >> 0x20),0x12);
      strcpy_s(&puStack_1d8,0x20,&UNK_180a1f758);
      uVar10 = FUN_1800b30d0(_DAT_180c86930,&uStack_410,&puStack_1f0,1);
      FUN_180076910(plVar12,uVar10);
      if (uStack_410 != (longlong **)0x0) {
        (*(code *)(*uStack_410)[7])();
      }
      puStack_1f0 = &UNK_18098bcb0;
      plStack_390 = (longlong *)0x0;
      pplStack_388 = (longlong **)0x0;
      pplStack_400 = &plStack_380;
      plStack_368 = (longlong *)0x0;
      uStack_378 = 0;
      plStack_380._0_1_ = 0;
      FUN_18022f2e0(&plStack_390,plVar12,0);
      pplVar17 = *(longlong ***)(*(longlong *)(param_1 + 0x18) + 0x20);
      fStack_354 = *(float *)((longlong)pplVar17 + 0x3ec4);
      uStack_410 = (longlong **)pplVar17[0xc170][4];
      fStack_358 = (float)uStack_410 * fVar26;
      pfStack_3a8 = pfStack_268;
      pplStack_400 = pplVar17;
      if (pfStack_270 != pfStack_268) {
        pfVar21 = pfStack_270 + 5;
        do {
          if (*(char *)(pfVar21 + 1) == '\0') {
            fVar24 = pfVar21[-2];
            fVar27 = pfVar21[-3];
            if ((pfVar21[-5] - fVar27) * (fVar24 - *pfVar21) -
                (fVar27 - pfVar21[-1]) * (pfVar21[-4] - fVar24) < 0.0) {
              fVar28 = (*pfVar21 + pfVar21[-4] + fVar24) * 0.33333334;
              fVar25 = (pfVar21[-5] + fVar27 + pfVar21[-1]) * 0.33333334;
              fStack_304 = fVar28 * fVar26;
              fStack_308 = fVar25 * fVar26;
              lVar7 = FUN_1802a11e0(alStack_1b8,auStack_250,CONCAT44(fStack_304,fStack_308),1);
              fVar24 = *(float *)(lVar7 + 8);
              afStack_418[0] = 1.0;
              fVar27 = 0.2;
              do {
                fVar22 = pfVar21[-2];
                fVar23 = pfVar21[-3];
                fVar1 = *pfVar21;
                fVar2 = pfVar21[-1];
                fStack_2fc = ((pfVar21[-4] - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                fStack_300 = ((pfVar21[-5] - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                lVar7 = FUN_1802a11e0(alStack_1b8,auStack_240,CONCAT44(fStack_2fc,fStack_300),1);
                fVar3 = *(float *)(lVar7 + 8);
                fStack_2f4 = ((fVar22 - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                fStack_2f8 = ((fVar23 - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                lVar7 = FUN_1802a11e0(alStack_1b8,auStack_230,CONCAT44(fStack_2f4,fStack_2f8),1);
                fVar22 = *(float *)(lVar7 + 8);
                fStack_2e0 = ((fVar2 - fVar25) * fVar27 + fVar25 + 0.5) * fVar26;
                fStack_2dc = ((fVar1 - fVar28) * fVar27 + fVar28 + 0.5) * fVar26;
                lVar7 = FUN_1802a11e0(alStack_1b8,auStack_220,CONCAT44(fStack_2dc,fStack_2e0),1);
                fVar23 = fStack_358;
                fVar24 = fVar24 + fVar3 + fVar22 + *(float *)(lVar7 + 8);
                afStack_418[0] = afStack_418[0] + 3.0;
                fVar27 = fVar27 + 0.05;
              } while (fVar27 < 0.8);
              pfStack_268 = pfStack_3a8;
              if (0.15 < fVar24 / afStack_418[0]) {
                plVar11 = pplVar17[0x521];
                fStack_2d4 = fStack_358 * pfVar21[-4];
                fStack_2d8 = fStack_358 * pfVar21[-5];
                if ((char)plVar11[0xd] == '\0') {
                  uStack_3a0 = 0;
                  lVar7 = FUN_1803a5130(plVar11,&fStack_2d8,&iStack_2d0,&uStack_3a0);
                  fVar24 = (float)(**(code **)(**(longlong **)(lVar7 + 0x60) + 8))
                                            (*(longlong **)(lVar7 + 0x60),
                                             (float)iStack_2cc + uStack_3a0._4_4_,
                                             (float)iStack_2d0 + (float)uStack_3a0);
                }
                else {
                  fVar24 = (float)(**(code **)(*(longlong *)plVar11[10] + 8))
                                            ((longlong *)plVar11[10],
                                             (1.0 / *(float *)(plVar11 + 0xb)) * fStack_2d4 *
                                             (float)(int)plVar11[0xc],
                                             fStack_2d8 * (1.0 / *(float *)(plVar11 + 0xb)) *
                                             (float)(int)plVar11[0xc]);
                  fVar24 = fVar24 + *(float *)((longlong)plVar11 + 0x5c);
                }
                plVar11 = pplVar17[0x521];
                fStack_348 = fVar23 * pfVar21[-2];
                fStack_34c = fVar23 * pfVar21[-3];
                if ((char)plVar11[0xd] == '\0') {
                  uStack_3f0 = 0;
                  lVar7 = FUN_1803a5130(plVar11,&fStack_34c,&iStack_340,&uStack_3f0);
                  fVar27 = (float)(**(code **)(**(longlong **)(lVar7 + 0x60) + 8))
                                            (*(longlong **)(lVar7 + 0x60),
                                             (float)iStack_33c + uStack_3f0._4_4_,
                                             (float)iStack_340 + (float)uStack_3f0);
                }
                else {
                  fVar27 = (float)(**(code **)(*(longlong *)plVar11[10] + 8))
                                            ((longlong *)plVar11[10],
                                             (1.0 / *(float *)(plVar11 + 0xb)) * fStack_348 *
                                             (float)(int)plVar11[0xc],
                                             fStack_34c * (1.0 / *(float *)(plVar11 + 0xb)) *
                                             (float)(int)plVar11[0xc]);
                  fVar27 = fVar27 + *(float *)((longlong)plVar11 + 0x5c);
                }
                plVar11 = pplVar17[0x521];
                fStack_334 = fVar23 * *pfVar21;
                fStack_338 = fVar23 * pfVar21[-1];
                if ((char)plVar11[0xd] == '\0') {
                  uStack_408 = 0;
                  lVar7 = FUN_1803a5130(plVar11,&fStack_338,&iStack_330,&uStack_408);
                  fVar25 = (float)(**(code **)(**(longlong **)(lVar7 + 0x60) + 8))
                                            (*(longlong **)(lVar7 + 0x60),
                                             (float)iStack_32c + uStack_408._4_4_,
                                             (float)iStack_330 + (float)uStack_408);
                }
                else {
                  fVar25 = (float)(**(code **)(*(longlong *)plVar11[10] + 8))
                                            ((longlong *)plVar11[10],
                                             (1.0 / *(float *)(plVar11 + 0xb)) * fStack_334 *
                                             (float)(int)plVar11[0xc],
                                             fStack_338 * (1.0 / *(float *)(plVar11 + 0xb)) *
                                             (float)(int)plVar11[0xc]);
                  fVar25 = fVar25 + *(float *)((longlong)plVar11 + 0x5c);
                }
                fStack_328 = (pfVar21[-5] + 0.5) * fVar26;
                fStack_324 = (pfVar21[-4] + 0.5) * fVar26;
                pfVar13 = (float *)FUN_1802a11e0(&puStack_148,auStack_210,
                                                 CONCAT44(fStack_324,fStack_328),1);
                uStack_3e8 = (undefined **)
                             CONCAT44((pfVar13[1] + pfVar13[1]) - 1.0,(*pfVar13 + *pfVar13) - 1.0);
                uStack_3e0 = (longlong **)CONCAT44(0x7f7fffff,(pfVar13[2] + pfVar13[2]) - 1.0);
                fStack_320 = (pfVar21[-3] + 0.5) * fVar26;
                fStack_31c = (pfVar21[-2] + 0.5) * fVar26;
                pfVar13 = (float *)FUN_1802a11e0(&puStack_148,auStack_200,
                                                 CONCAT44(fStack_31c,fStack_320),1);
                fStack_2e8 = (pfVar13[2] + pfVar13[2]) - 1.0;
                fStack_2ec = (pfVar13[1] + pfVar13[1]) - 1.0;
                fStack_2f0 = (*pfVar13 + *pfVar13) - 1.0;
                uStack_2e4 = 0x7f7fffff;
                fStack_318 = (pfVar21[-1] + 0.5) * fVar26;
                fStack_314 = (*pfVar21 + 0.5) * fVar26;
                pfVar13 = (float *)FUN_1802a11e0(&puStack_148,&puStack_1f0,
                                                 CONCAT44(fStack_314,fStack_318),1);
                fStack_2a0 = (pfVar13[2] + pfVar13[2]) - 1.0;
                fStack_2a4 = (pfVar13[1] + pfVar13[1]) - 1.0;
                fStack_2a8 = (*pfVar13 + *pfVar13) - 1.0;
                uStack_29c = 0x7f7fffff;
                uVar4 = 0xffffffff;
                if (fVar24 < fStack_354) {
                  uVar4 = 0xffffff;
                }
                plStack_3b8 = (longlong *)CONCAT44(plStack_3b8._4_4_,uVar4);
                uStack_350 = 0xffffffff;
                if (fVar27 < fStack_354) {
                  uStack_350 = 0xffffff;
                }
                afStack_418[0] = -NAN;
                if (fVar25 < fStack_354) {
                  afStack_418[0] = 2.3509886e-38;
                }
                uStack_410 = (longlong **)CONCAT44(pfVar21[-4] * fVar26,pfVar21[-5] * fVar26);
                uStack_398 = CONCAT44(pfVar21[-2] * fVar26,pfVar21[-3] * fVar26);
                fStack_30c = *pfVar21 * fVar26;
                fStack_310 = pfVar21[-1] * fVar26;
                fStack_2b4 = pfVar21[-4] * fVar23;
                fStack_2b8 = pfVar21[-5] * fVar23;
                uStack_2ac = 0x7f7fffff;
                fStack_2c4 = pfVar21[-2] * fVar23;
                fStack_2c8 = pfVar21[-3] * fVar23;
                uStack_2bc = 0x7f7fffff;
                fStack_294 = *pfVar21 * fVar23;
                fStack_298 = pfVar21[-1] * fVar23;
                uStack_28c = 0x7f7fffff;
                fStack_2c0 = fVar27;
                fStack_2b0 = fVar24;
                fStack_290 = fVar25;
                uVar4 = FUN_180235000(&plStack_390,&fStack_298);
                uVar5 = FUN_180235000(&plStack_390,&fStack_2c8);
                uVar6 = FUN_180235000(&plStack_390,&fStack_2b8);
                pfStack_438 = &fStack_2a8;
                uVar4 = FUN_1802350e0(&plStack_390,uVar4,&fStack_310,afStack_418);
                pfStack_438 = &fStack_2f0;
                uVar5 = FUN_1802350e0(&plStack_390,uVar5,&uStack_398,&uStack_350);
                pfStack_438 = (float *)&uStack_3e8;
                uVar6 = FUN_1802350e0(&plStack_390,uVar6,&uStack_410,&plStack_3b8);
                FUN_180235410(&plStack_390,uVar4,uVar5,uVar6);
                pfStack_268 = pfStack_3a8;
                pplVar17 = pplStack_400;
              }
            }
          }
          pfVar13 = pfVar21 + 2;
          plVar11 = plStack_288;
          pfVar21 = pfVar21 + 7;
        } while (pfVar13 != pfStack_268);
      }
      puStack_1f0 = &UNK_180234790;
      ppuStack_1e8 = (undefined **)&UNK_18022bf60;
      uStack_1e0 = &UNK_1802347a0;
      puStack_1d8 = &UNK_1802347f0;
      puStack_1d0 = &UNK_180234830;
      pcStack_1c8 = FUN_180234880;
      uStack_1c0 = 0;
      uStack_3e8 = &puStack_1f0;
      uStack_3e0 = pplStack_388;
      FUN_18040fa30(&uStack_3e8);
      if ((int)(*(int *)(pplStack_388 + 0x11) + (*(int *)(pplStack_388 + 0x11) >> 0x1f & 3U)) >> 2 <
          0) {
        uStack_420 = *(undefined4 *)(pplStack_388 + 0xc);
        puStack_428 = &DAT_18098bc73;
        if ((undefined *)plStack_390[3] != (undefined *)0x0) {
          puStack_428 = (undefined *)plStack_390[3];
        }
        ppplStack_430 = (longlong ***)((ulonglong)ppplStack_430 & 0xffffffff00000000);
        pfStack_438 = (float *)&UNK_1809ffb30;
        FUN_1800623b0(_DAT_180c86928,0,0x80000000000,3);
      }
      cStack_360 = '\x01';
      if (pplStack_388 != (longlong **)0x0) {
        if (cStack_35e != '\0') {
          FUN_180075b70(plStack_390);
        }
        FUN_18007f6a0(&plStack_380);
        if (cStack_360 != '\0') {
          FUN_180079520(plStack_390);
        }
        if (cStack_35f != '\0') {
          FUN_180079520(plStack_390);
        }
        pplVar17 = pplStack_388;
        pplStack_400 = pplStack_388;
        pplStack_388 = (longlong **)0x0;
        if (pplVar17 != (longlong **)0x0) {
          (*(code *)(*pplVar17)[7])();
        }
      }
      pplStack_400 = (longlong **)&uStack_410;
      uStack_410 = (longlong **)plVar12;
      (**(code **)(*plVar12 + 0x28))(plVar12);
      FUN_180275cf0(plVar11,0,&uStack_410,1);
      if (*(code **)(*plVar11 + 0x160) == (code *)&UNK_180277350) {
        FUN_180276f30(plVar11,(longlong)plVar11 + 0x214,0);
      }
      else {
        (**(code **)(*plVar11 + 0x160))(plVar11);
      }
      FUN_18007c860(plVar12,1);
      if (plStack_390 != (longlong *)0x0) {
        FUN_18022f390(&plStack_390);
      }
      pplStack_400 = &plStack_380;
      FUN_18007f6a0(&plStack_380);
      if (plStack_368 != (longlong *)0x0) {
        (**(code **)(*plStack_368 + 0x38))();
      }
      if (pplStack_388 != (longlong **)0x0) {
        (*(code *)(*pplStack_388)[7])();
      }
      if (plStack_390 != (longlong *)0x0) {
        (**(code **)(*plStack_390 + 0x38))();
      }
      (**(code **)(*plVar12 + 0x38))(plVar12);
      (**(code **)(*plVar11 + 0x38))(plVar11);
      if (pfStack_270 != (float *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      auVar8 = auStack_3d8;
    }
    if (auVar8 != (undefined1  [8])0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(auVar8);
    }
  }
  if (plStack_3f8 != (longlong *)0x0) {
    (**(code **)(*plStack_3f8 + 0x38))();
  }
  if (plStack_3b0 != (longlong *)0x0) {
    (**(code **)(*plStack_3b0 + 0x38))();
  }
  if (uStack_138._1_1_ == '\0') {
    if (((char)uStack_138 == '\0') && (puStack_148 != (undefined *)0x0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_148 = (undefined *)0x0;
    uStack_140 = 0;
    uStack_138 = 0;
  }
  if (uStack_1a8._1_1_ == '\0') {
    if (((char)uStack_1a8 == '\0') && (alStack_1b8[0] != 0)) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    alStack_1b8[0] = 0;
    alStack_1b8[1] = 0;
    uStack_1a8 = 0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_d8 ^ (ulonglong)auStack_458);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



/**
 * @brief 渲染系统配置管理器
 * 
 * 该函数负责渲染系统的配置管理，包括字符串处理、
 * 数组操作、参数设置等系统配置功能。
 * 
 * 主要功能：
 * - 系统配置参数管理
 * - 字符串处理和验证
 * - 数组操作和数据结构管理
 * - 参数设置和验证
 * - 系统状态初始化
 * 
 * @param param_1 配置管理器上下文参数
 * 
 * @note 该函数主要用于系统初始化阶段的配置管理工作，
 *       确保渲染系统以正确的配置参数运行。
 */
void FUN_18035fff0(undefined8 param_1)

{
  undefined1 auStack_1e8 [32];
  undefined4 uStack_1c8;
  undefined **appuStack_1c0 [2];
  undefined8 uStack_1b0;
  undefined *apuStack_1a8 [11];
  undefined4 uStack_150;
  undefined *puStack_148;
  undefined1 *puStack_140;
  undefined4 uStack_138;
  undefined1 auStack_130 [72];
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined4 uStack_d8;
  undefined1 auStack_d0 [72];
  undefined *puStack_88;
  undefined1 *puStack_80;
  undefined4 uStack_78;
  undefined1 auStack_70 [72];
  ulonglong uStack_28;
  
  uStack_1b0 = 0xfffffffffffffffe;
  uStack_28 = _DAT_180bf00a8 ^ (ulonglong)auStack_1e8;
  uStack_1c8 = 0;
  puStack_148 = &UNK_1809fcc58;
  puStack_140 = auStack_130;
  auStack_130[0] = 0;
  uStack_138 = 7;
  strcpy_s(auStack_130,0x40,&DAT_180a1f750);
  FUN_1800b8300(apuStack_1a8,&puStack_148);
  uStack_150 = 0xb;
  uStack_1c8 = 1;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_148 = &UNK_18098bcb0;
  puStack_e8 = &UNK_1809fcc58;
  puStack_e0 = auStack_d0;
  auStack_d0[0] = 0;
  uStack_d8 = 9;
  strcpy_s(auStack_d0,0x40,&DAT_180a0ff18);
  FUN_1800b8300(apuStack_1a8,&puStack_e8);
  uStack_150 = 7;
  uStack_1c8 = 2;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_e8 = &UNK_18098bcb0;
  puStack_88 = &UNK_1809fcc58;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 10;
  strcpy_s(auStack_70,0x40,&DAT_180a1f740);
  FUN_1800b8300(apuStack_1a8,&puStack_88);
  uStack_150 = 7;
  uStack_1c8 = 4;
  FUN_180180730(param_1,appuStack_1c0,apuStack_1a8);
  uStack_1c8 = 0;
  appuStack_1c0[0] = apuStack_1a8;
  apuStack_1a8[0] = &UNK_18098bcb0;
  puStack_88 = &UNK_18098bcb0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (ulonglong)auStack_1e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



