#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part473.c
 * @brief 渲染系统高级处理模块
 * 
 * 本模块包含13个核心函数，主要负责渲染系统的高级处理功能，包括：
 * - 参数处理和状态管理
 * - 坐标转换和投影计算
 * - 渲染状态切换和清理
 * - 资源管理和生命周期控制
 * 
 * @author 反编译代码美化处理
 * @version 1.0
 * @date 2025-08-28
 */

/*=============================================
            常量定义和类型别名
=============================================*/

/** 渲染状态标志位 */
#define RENDER_STATE_FLAG_NONE           0x00000000
#define RENDER_STATE_FLAG_ACTIVE         0x00000001
#define RENDER_STATE_FLAG_ENABLED        0x00000002
#define RENDER_STATE_FLAG_DISABLED       0x00000004

/** 渲染模式枚举 */
#define RENDER_MODE_NORMAL               0x00000001
#define RENDER_MODE_SHADOW               0x00000002
#define RENDER_MODE_REFLECTION           0x00000005

/** 内存对齐常量 */
#define MEMORY_ALIGNMENT_SIZE           0xA60
#define RENDER_STATE_OFFSET             0x30C0
#define RENDER_DATA_OFFSET              0x3A28

/** 浮点数精度常量 */
#define FLOAT_EPSILON                   0.01999672f
#define FLOAT_MAX_VALUE                 3.4028235e+38f
#define FLOAT_ZERO_THRESHOLD           0.2f

/** 位掩码常量 */
#define BIT_MASK_9TH                    0x200    // 第9位掩码
#define BIT_MASK_6TH                    0x40     // 第6位掩码
#define BIT_MASK_1ST                    0x01     // 第1位掩码

/** 内存偏移量 */
#define OFFSET_RENDER_CONTEXT          0x20
#define OFFSET_RENDER_STATE            0x590
#define OFFSET_RENDER_FLAGS            0x56C
#define OFFSET_RENDER_MODE             0x568
#define OFFSET_RENDER_INDEX           0x560
#define OFFSET_RENDER_DATA            0x8D8
#define OFFSET_RENDER_POSITION        0x988
#define OFFSET_RENDER_TRANSFORM       0x98C
#define OFFSET_RENDER_SCALE           0x990

/*=============================================
            类型别名定义
=============================================*/

/** 渲染上下文指针类型 */
typedef longlong* RenderContextPtr;

/** 渲染状态结构体指针 */
typedef void* RenderStatePtr;

/** 坐标向量类型 */
typedef float* Vector3f;

/** 渲染参数类型 */
typedef struct {
    float x, y, z, w;
} RenderVector4f;

/** 渲染矩阵类型 */
typedef struct {
    float m00, m01, m02, m03;
    float m10, m11, m12, m13;
    float m20, m21, m22, m23;
    float m30, m31, m32, m33;
} RenderMatrix4x4f;

/** 渲染配置类型 */
typedef struct {
    int mode;
    int flags;
    int index;
    float scale;
    RenderVector4f position;
    RenderVector4f transform;
} RenderConfig;

/** 渲染数据类型 */
typedef struct {
    void* data;
    int size;
    int capacity;
    int flags;
} RenderData;

/*=============================================
            函数别名定义
=============================================*/

/** 渲染参数处理函数别名 */
#define RenderParameterProcessor       FUN_18051f1ed
#define RenderParameterProcessorAlt    FUN_18051f289

/** 渲染坐标转换函数别名 */
#define RenderCoordinateTransformer     FUN_18051f339
#define RenderCoordinateAdjuster       FUN_18051f485

/** 渲染状态管理函数别名 */
#define RenderStateManager             FUN_18051f4c1
#define RenderStateUpdater             FUN_18051f528

/** 渲染碰撞检测函数别名 */
#define RenderCollisionDetector        FUN_18051f570

/** 渲染模式切换函数别名 */
#define RenderModeSwitcher             FUN_18051f700
#define RenderModeUpdater              FUN_18051f7cd
#define RenderModeProcessor            FUN_18051f839

/** 渲染资源管理函数别名 */
#define RenderResourceManager          FUN_18051fa40

/** 空函数别名 */
#define RenderEmptyFunction1           FUN_18051f98f
#define RenderEmptyFunction2           FUN_18051f994

/*=============================================
            外部函数声明
=============================================*/
extern void FUN_180593b40(longlong, undefined8, undefined4, undefined8, bool);
extern char func_0x000180522f60(longlong);
extern char func_0x000180522f60(void);
extern void FUN_180511990(longlong, int, int, bool, char, int);
extern void FUN_18052e450(longlong, int, int, int);
extern void FUN_18052e130(longlong, int);
extern void FUN_1805d1c80(longlong, undefined8*, int);
extern void func_0x0001805da580(void);

/*=============================================
            全局变量声明
=============================================*/
extern undefined8 UNK_1809f89f0;
extern undefined8 DAT_180c8ed30;

// 函数: void FUN_18051f1ed(longlong param_1,float *param_2)
void FUN_18051f1ed(longlong param_1,float *param_2)

{
  float fVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  byte bStack0000000000000028;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  longlong lStack0000000000000060;
  undefined8 uStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  undefined4 in_stack_00000080;
  undefined4 in_stack_00000088;
  undefined4 in_stack_00000090;
  undefined4 in_stack_00000098;
  undefined4 in_stack_000000a0;
  undefined4 in_stack_000000a8;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  
  lVar2 = *(longlong *)(param_1 + 0x20);
  lVar7 = *(longlong *)(param_1 + 0x590);
  if (lVar7 != 0) {
    if (*(longlong *)(lVar7 + 0x2460) == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x2460) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar7 + 0x2470) | uVar8) >> 9 & 1) == 0) {
      if (*(longlong *)(lVar7 + 0x24a8) == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = *(ulonglong *)(*(longlong *)(lVar7 + 0x24a8) + 0x1d0);
      }
      if (((*(ulonglong *)(lVar7 + 0x24b8) | uVar8) >> 9 & 1) == 0) {
        bStack0000000000000028 = (byte)((uint)*(undefined4 *)(param_1 + 0x56c) >> 8) & 1;
        _fStack0000000000000050 = 0;
        _fStack0000000000000058 = 0x7f7fffff3f800000;
        cStack0000000000000074 = '\0';
        fStack0000000000000070 = 0.0;
        lStack0000000000000060 = 0;
        uStack0000000000000068 = 0;
        FUN_180593b40(lVar2,*(undefined8 *)(*(longlong *)(param_1 + 0x8d8) + 0x18),&stack0x00000040,
                      param_2,*(int *)(param_1 + 0x568) != 1);
        if (cStack0000000000000074 == '\x02') {
          uVar6 = *(uint *)(lStack0000000000000060 + 0x18);
        }
        else {
          uVar6 = 0;
        }
        if ((((uVar6 & 0x40) != 0) && (0.2 < fStack0000000000000058)) &&
           (lVar7 = lStack0000000000000060, fVar12 = fStack0000000000000058,
           cVar5 = func_0x000180522f60(param_1), cVar5 != '\0')) {
          if (lVar7 == 0) {
            lVar7 = 0;
          }
          else {
            lVar7 = *(longlong *)(lVar7 + 0x10);
          }
          if (*(float *)(lVar7 + 0x88) <= 0.0 && *(float *)(lVar7 + 0x88) != 0.0) {
            fVar10 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x80) * 10.0;
            fVar11 = *(float *)(*(longlong *)(param_1 + 0x5f0) + 0x84) * 10.0;
            fVar1 = param_2[2];
            fVar14 = *param_2 - fVar10;
            fVar15 = param_2[1] - fVar11;
            fVar13 = (*param_2 + fVar10) - fVar14;
            fVar10 = (param_2[1] + fVar11) - fVar15;
            fVar12 = ((fStack0000000000000044 - fVar15) * fStack0000000000000054 +
                      (fStack0000000000000040 - fVar14) * fStack0000000000000050 +
                     (in_stack_00000048 - fVar1) * fVar12) /
                     (fStack0000000000000054 * fVar10 + fStack0000000000000050 * fVar13 +
                     (fVar1 - fVar1) * fVar12);
            *param_2 = fVar12 * fVar13 + fVar14;
            param_2[1] = fVar12 * fVar10 + fVar15;
            param_2[2] = (fVar1 - fVar1) * fVar12 + fVar1;
            param_2[3] = 3.4028235e+38;
            goto FUN_18051f4c1;
          }
        }
        fVar12 = param_2[2];
        if ((fVar12 <= fStack0000000000000070) ||
           (((*(byte *)(lVar2 + 0x40) & 1) != 0 &&
            ((cVar5 = func_0x000180522f60(param_1), cVar5 != '\0' ||
             (fVar12 - fStack0000000000000070 < 0.01999672)))))) {
          param_2[2] = fStack0000000000000070;
        }
      }
    }
  }
FUN_18051f4c1:
  fVar12 = *(float *)(lVar2 + 0x10);
  fVar1 = *(float *)(lVar2 + 0x14);
  fVar10 = param_2[1];
  fVar11 = param_2[2];
  *(float *)(param_1 + 0x988) = (*(float *)(lVar2 + 0xc) - *param_2) + *(float *)(param_1 + 0x988);
  uVar3 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 2);
  *(float *)(param_1 + 0x98c) = (fVar12 - fVar10) + *(float *)(param_1 + 0x98c);
  *(float *)(param_1 + 0x990) = (fVar1 - fVar11) + *(float *)(param_1 + 0x990);
  *(undefined8 *)(lVar2 + 0xc) = uVar3;
  *(undefined8 *)(lVar2 + 0x14) = uVar4;
  if (-1 < *(int *)(param_1 + 0x560)) {
    lVar2 = *(longlong *)(param_1 + 0x8d8);
    lVar9 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
    lVar7 = *(longlong *)(lVar9 + 0x30c0 + lVar2);
    *(undefined8 *)(lVar7 + 0xc) = uVar3;
    *(undefined8 *)(lVar7 + 0x14) = uVar4;
    *(undefined8 *)(lVar9 + 0x3a28 + lVar2) = 0;
    *(undefined8 *)(lVar9 + 0x3a30 + lVar2) = 0;
    *(undefined4 *)(lVar9 + 0x3a38 + lVar2) = 0;
  }
  return;
}





// 函数: void FUN_18051f289(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)
void FUN_18051f289(undefined8 param_1,longlong param_2,undefined4 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  undefined1 in_CL;
  longlong lVar7;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *unaff_RDI;
  float in_XMM0_Dc;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 uStack0000000000000028;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  float fStack0000000000000058;
  longlong lStack0000000000000060;
  undefined8 uStack0000000000000068;
  float fStack0000000000000070;
  char cStack0000000000000074;
  
  fStack0000000000000054 = (float)((ulonglong)param_1 >> 0x20);
  fStack0000000000000050 = (float)param_1;
  cStack0000000000000074 = '\0';
  fStack0000000000000070 = 0.0;
  lStack0000000000000060 = 0;
  uStack0000000000000068 = 0;
  uStack0000000000000028 = in_CL;
  fStack0000000000000058 = in_XMM0_Dc;
  FUN_180593b40(0,*(undefined8 *)(param_2 + 0x18),param_3,param_4,*(int *)(unaff_RBX + 0x568) != 1);
  if (cStack0000000000000074 == '\x02') {
    uVar5 = *(uint *)(lStack0000000000000060 + 0x18);
  }
  else {
    uVar5 = 0;
  }
  if (((uVar5 & 0x40) != 0) && (0.2 < fStack0000000000000058)) {
    lVar6 = lStack0000000000000060;
    cVar4 = func_0x000180522f60();
    if (cVar4 != '\0') {
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = *(longlong *)(lVar6 + 0x10);
      }
      if (*(float *)(lVar6 + 0x88) <= 0.0 && *(float *)(lVar6 + 0x88) != 0.0) {
        fVar8 = *(float *)(*(longlong *)(unaff_RBX + 0x5f0) + 0x80) * 10.0;
        fVar10 = *(float *)(*(longlong *)(unaff_RBX + 0x5f0) + 0x84) * 10.0;
        fVar9 = unaff_RDI[2];
        fVar12 = *unaff_RDI - fVar8;
        fVar13 = unaff_RDI[1] - fVar10;
        fVar11 = (*unaff_RDI + fVar8) - fVar12;
        fVar10 = (unaff_RDI[1] + fVar10) - fVar13;
        fVar8 = ((fStack0000000000000044 - fVar13) * fStack0000000000000054 +
                 (fStack0000000000000040 - fVar12) * fStack0000000000000050 +
                (in_stack_00000048 - fVar9) * fStack0000000000000058) /
                (fStack0000000000000054 * fVar10 + fStack0000000000000050 * fVar11 +
                (fVar9 - fVar9) * fStack0000000000000058);
        *unaff_RDI = fVar8 * fVar11 + fVar12;
        unaff_RDI[1] = fVar8 * fVar10 + fVar13;
        unaff_RDI[2] = (fVar9 - fVar9) * fVar8 + fVar9;
        unaff_RDI[3] = 3.4028235e+38;
        goto LAB_18051f4b9;
      }
    }
  }
  fVar9 = unaff_RDI[2];
  if (fStack0000000000000070 < fVar9) {
    if ((*(byte *)(unaff_RSI + 0x40) & 1) == 0) goto LAB_18051f4b9;
    cVar4 = func_0x000180522f60();
    if ((cVar4 == '\0') && (0.01999672 <= fVar9 - fStack0000000000000070)) goto LAB_18051f4b9;
  }
  unaff_RDI[2] = fStack0000000000000070;
LAB_18051f4b9:
  fVar9 = *(float *)(unaff_RSI + 0x10);
  fVar8 = *(float *)(unaff_RSI + 0x14);
  fVar10 = unaff_RDI[1];
  fVar11 = unaff_RDI[2];
  *(float *)(unaff_RBX + 0x988) =
       (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + 0x988);
  uVar2 = *(undefined8 *)unaff_RDI;
  uVar3 = *(undefined8 *)(unaff_RDI + 2);
  *(float *)(unaff_RBX + 0x98c) = (fVar9 - fVar10) + *(float *)(unaff_RBX + 0x98c);
  *(float *)(unaff_RBX + 0x990) = (fVar8 - fVar11) + *(float *)(unaff_RBX + 0x990);
  *(undefined8 *)(unaff_RSI + 0xc) = uVar2;
  *(undefined8 *)(unaff_RSI + 0x14) = uVar3;
  if (-1 < *(int *)(unaff_RBX + 0x560)) {
    lVar6 = *(longlong *)(unaff_RBX + 0x8d8);
    lVar7 = (longlong)*(int *)(unaff_RBX + 0x560) * 0xa60;
    lVar1 = *(longlong *)(lVar7 + 0x30c0 + lVar6);
    *(undefined8 *)(lVar1 + 0xc) = uVar2;
    *(undefined8 *)(lVar1 + 0x14) = uVar3;
    *(undefined8 *)(lVar7 + 0x3a28 + lVar6) = 0;
    *(undefined8 *)(lVar7 + 0x3a30 + lVar6) = 0;
    *(undefined4 *)(lVar7 + 0x3a38 + lVar6) = 0;
  }
  return;
}





// 函数: void FUN_18051f339(float param_1,undefined8 param_2,undefined8 param_3,float param_4)
void FUN_18051f339(float param_1,undefined8 param_2,undefined8 param_3,float param_4)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong in_RAX;
  longlong lVar6;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *unaff_RDI;
  float fVar7;
  float fVar8;
  float in_XMM4_Da;
  float fVar9;
  float fVar10;
  float fVar11;
  float in_stack_00000048;
  float fStack0000000000000050;
  float fStack0000000000000054;
  
  fVar7 = *(float *)(in_RAX + 0x80) * 10.0;
  fVar8 = *(float *)(in_RAX + 0x84) * 10.0;
  fVar1 = unaff_RDI[2];
  fVar10 = *unaff_RDI - fVar7;
  fVar11 = unaff_RDI[1] - fVar8;
  fVar9 = (*unaff_RDI + fVar7) - fVar10;
  fVar8 = (unaff_RDI[1] + fVar8) - fVar11;
  fVar7 = ((in_XMM4_Da - fVar11) * fStack0000000000000054 +
           (param_1 - fVar10) * fStack0000000000000050 + (in_stack_00000048 - fVar1) * param_4) /
          (fStack0000000000000054 * fVar8 + fStack0000000000000050 * fVar9 +
          (fVar1 - fVar1) * param_4);
  *unaff_RDI = fVar7 * fVar9 + fVar10;
  unaff_RDI[1] = fVar7 * fVar8 + fVar11;
  unaff_RDI[2] = (fVar1 - fVar1) * fVar7 + fVar1;
  unaff_RDI[3] = 3.4028235e+38;
  fVar1 = *(float *)(unaff_RSI + 0x10);
  fVar7 = *(float *)(unaff_RSI + 0x14);
  fVar8 = unaff_RDI[1];
  fVar9 = unaff_RDI[2];
  *(float *)(unaff_RBX + 0x988) =
       (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + 0x988);
  uVar4 = *(undefined8 *)unaff_RDI;
  uVar5 = *(undefined8 *)(unaff_RDI + 2);
  *(float *)(unaff_RBX + 0x98c) = (fVar1 - fVar8) + *(float *)(unaff_RBX + 0x98c);
  *(float *)(unaff_RBX + 0x990) = (fVar7 - fVar9) + *(float *)(unaff_RBX + 0x990);
  *(undefined8 *)(unaff_RSI + 0xc) = uVar4;
  *(undefined8 *)(unaff_RSI + 0x14) = uVar5;
  if (-1 < *(int *)(unaff_RBX + 0x560)) {
    lVar2 = *(longlong *)(unaff_RBX + 0x8d8);
    lVar6 = (longlong)*(int *)(unaff_RBX + 0x560) * 0xa60;
    lVar3 = *(longlong *)(lVar6 + 0x30c0 + lVar2);
    *(undefined8 *)(lVar3 + 0xc) = uVar4;
    *(undefined8 *)(lVar3 + 0x14) = uVar5;
    *(undefined8 *)(lVar6 + 0x3a28 + lVar2) = 0;
    *(undefined8 *)(lVar6 + 0x3a30 + lVar2) = 0;
    *(undefined4 *)(lVar6 + 0x3a38 + lVar2) = 0;
  }
  return;
}





// 函数: void FUN_18051f485(void)
void FUN_18051f485(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *unaff_RDI;
  float fVar10;
  float in_stack_00000070;
  
  fVar10 = unaff_RDI[2];
  if (in_stack_00000070 < fVar10) {
    if ((*(byte *)(unaff_RSI + 0x40) & 1) == 0) goto LAB_18051f4b9;
    cVar8 = func_0x000180522f60();
    if ((cVar8 == '\0') && (0.01999672 <= fVar10 - in_stack_00000070)) goto LAB_18051f4b9;
  }
  unaff_RDI[2] = in_stack_00000070;
LAB_18051f4b9:
  fVar10 = *(float *)(unaff_RSI + 0x10);
  fVar1 = *(float *)(unaff_RSI + 0x14);
  fVar2 = unaff_RDI[1];
  fVar3 = unaff_RDI[2];
  *(float *)(unaff_RBX + 0x988) =
       (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + 0x988);
  uVar6 = *(undefined8 *)unaff_RDI;
  uVar7 = *(undefined8 *)(unaff_RDI + 2);
  *(float *)(unaff_RBX + 0x98c) = (fVar10 - fVar2) + *(float *)(unaff_RBX + 0x98c);
  *(float *)(unaff_RBX + 0x990) = (fVar1 - fVar3) + *(float *)(unaff_RBX + 0x990);
  *(undefined8 *)(unaff_RSI + 0xc) = uVar6;
  *(undefined8 *)(unaff_RSI + 0x14) = uVar7;
  if (-1 < *(int *)(unaff_RBX + 0x560)) {
    lVar4 = *(longlong *)(unaff_RBX + 0x8d8);
    lVar9 = (longlong)*(int *)(unaff_RBX + 0x560) * 0xa60;
    lVar5 = *(longlong *)(lVar9 + 0x30c0 + lVar4);
    *(undefined8 *)(lVar5 + 0xc) = uVar6;
    *(undefined8 *)(lVar5 + 0x14) = uVar7;
    *(undefined8 *)(lVar9 + 0x3a28 + lVar4) = 0;
    *(undefined8 *)(lVar9 + 0x3a30 + lVar4) = 0;
    *(undefined4 *)(lVar9 + 0x3a38 + lVar4) = 0;
  }
  return;
}





// 函数: void FUN_18051f4c1(void)
void FUN_18051f4c1(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  longlong unaff_RBX;
  longlong unaff_RSI;
  float *unaff_RDI;
  
  fVar1 = *(float *)(unaff_RSI + 0x10);
  fVar2 = *(float *)(unaff_RSI + 0x14);
  fVar3 = unaff_RDI[1];
  fVar4 = unaff_RDI[2];
  *(float *)(unaff_RBX + 0x988) =
       (*(float *)(unaff_RSI + 0xc) - *unaff_RDI) + *(float *)(unaff_RBX + 0x988);
  uVar7 = *(undefined8 *)unaff_RDI;
  uVar8 = *(undefined8 *)(unaff_RDI + 2);
  *(float *)(unaff_RBX + 0x98c) = (fVar1 - fVar3) + *(float *)(unaff_RBX + 0x98c);
  *(float *)(unaff_RBX + 0x990) = (fVar2 - fVar4) + *(float *)(unaff_RBX + 0x990);
  *(undefined8 *)(unaff_RSI + 0xc) = uVar7;
  *(undefined8 *)(unaff_RSI + 0x14) = uVar8;
  if (-1 < *(int *)(unaff_RBX + 0x560)) {
    lVar5 = *(longlong *)(unaff_RBX + 0x8d8);
    lVar9 = (longlong)*(int *)(unaff_RBX + 0x560) * 0xa60;
    lVar6 = *(longlong *)(lVar9 + 0x30c0 + lVar5);
    *(undefined8 *)(lVar6 + 0xc) = uVar7;
    *(undefined8 *)(lVar6 + 0x14) = uVar8;
    *(undefined8 *)(lVar9 + 0x3a28 + lVar5) = 0;
    *(undefined8 *)(lVar9 + 0x3a30 + lVar5) = 0;
    *(undefined4 *)(lVar9 + 0x3a38 + lVar5) = 0;
  }
  return;
}





// 函数: void FUN_18051f528(undefined8 param_1)
void FUN_18051f528(undefined8 param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong in_RAX;
  longlong lVar3;
  longlong unaff_RBX;
  undefined8 in_XMM0_Qb;
  
  lVar1 = *(longlong *)(unaff_RBX + 0x8d8);
  lVar3 = in_RAX * 0xa60;
  lVar2 = *(longlong *)(lVar3 + 0x30c0 + lVar1);
  *(undefined8 *)(lVar2 + 0xc) = param_1;
  *(undefined8 *)(lVar2 + 0x14) = in_XMM0_Qb;
  *(undefined8 *)(lVar3 + 0x3a28 + lVar1) = 0;
  *(undefined8 *)(lVar3 + 0x3a30 + lVar1) = 0;
  *(undefined4 *)(lVar3 + 0x3a38 + lVar1) = 0;
  return;
}





// 函数: void FUN_18051f570(longlong param_1,float *param_2)
void FUN_18051f570(longlong param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(param_1 + 0x988);
  fVar2 = *param_2;
  if (0.0 < *(float *)(param_1 + 0x990) * param_2[2] +
            *(float *)(param_1 + 0x98c) * param_2[1] + fVar1 * fVar2) {
    if (0.0 < fVar1 * fVar2) {
      if (ABS(fVar2) <= ABS(fVar1)) {
        *(float *)(param_1 + 0x988) = fVar1 - fVar2;
      }
      else {
        *(undefined4 *)(param_1 + 0x988) = 0;
      }
    }
    fVar1 = *(float *)(param_1 + 0x98c);
    fVar2 = param_2[1];
    if (0.0 < fVar1 * fVar2) {
      if (ABS(fVar1) < ABS(fVar2)) {
        *(undefined4 *)(param_1 + 0x98c) = 0;
        return;
      }
      *(float *)(param_1 + 0x98c) = fVar1 - fVar2;
    }
  }
  return;
}





// 函数: void FUN_18051f700(longlong param_1,undefined4 param_2)
void FUN_18051f700(longlong param_1,undefined4 param_2)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  
  iVar2 = *(int *)(param_1 + 0x980);
  *(undefined4 *)(param_1 + 0x980) = param_2;
  if (*(char *)(param_1 + 0x984) == '\0') goto LAB_18051f7bf;
  if (*(char *)(*(longlong *)(param_1 + 0x738) + 0x99) != '\0') {
    lVar11 = (longlong)*(int *)(param_1 + 0x560) * 0xa60;
    if (*(int *)(lVar11 + 0x3608 + *(longlong *)(param_1 + 0x8d8)) == 1) {
      param_2 = *(undefined4 *)(lVar11 + 0x3a20 + *(longlong *)(param_1 + 0x8d8));
    }
  }
  *(undefined4 *)(*(longlong *)(param_1 + 0x738) + 0x1dc) = param_2;
  if (*(int *)(param_1 + 0x564) < 0) goto LAB_18051f7bf;
  lVar11 = (longlong)*(int *)(param_1 + 0x564) * 0xa60 + *(longlong *)(param_1 + 0x8d8);
  if (*(char *)(*(longlong *)(lVar11 + 0x37d8) + 0x99) == '\0') {
LAB_18051f7b2:
    uVar6 = *(undefined4 *)(lVar11 + 0x3a20);
  }
  else {
    lVar8 = (longlong)*(int *)(lVar11 + 0x3600) * 0xa60;
    if (*(int *)(lVar8 + 0x3608 + *(longlong *)(lVar11 + 0x3978)) != 1) goto LAB_18051f7b2;
    uVar6 = *(undefined4 *)(lVar8 + 0x3a20 + *(longlong *)(lVar11 + 0x3978));
  }
  *(undefined4 *)(*(longlong *)(lVar11 + 0x37d8) + 0x1dc) = uVar6;
LAB_18051f7bf:
  if (((*(byte *)(param_1 + 0x56c) & 1) == 0) && (iVar3 = *(int *)(param_1 + 0x980), -1 < iVar2)) {
    if ((*(int *)(param_1 + 0x568) == 1) && (*(longlong *)(param_1 + 0x6e0) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x10;
    }
    if (-1 < iVar3) {
      lVar11 = *(longlong *)(param_1 + 0x8d8);
      if (*(char *)(lVar11 + 0x87a93c) == '\0') {
        uVar7 = (uint)(*(longlong *)(lVar11 + 0x87a920) - *(longlong *)(lVar11 + 0x87a918) >> 3);
      }
      else {
        uVar7 = *(uint *)(lVar11 + 0x87a938);
      }
      if (0 < (int)uVar7) {
        lVar11 = 0;
        uVar10 = (ulonglong)uVar7;
        do {
          lVar4 = *(longlong *)(param_1 + 0x8d8);
          lVar8 = lVar4 + 0x876958;
          if (*(char *)(lVar4 + 0x87a93c) == '\0') {
            lVar8 = *(longlong *)(lVar4 + 0x87a918);
          }
          lVar8 = *(longlong *)(lVar8 + lVar11);
          lVar5 = *(longlong *)(lVar8 + 0x6e0);
          if (((*(int *)(lVar8 + 0x568) == 1) && (lVar5 != 0)) &&
             (uVar7 = *(uint *)(lVar8 + 0x980), -1 < (int)uVar7)) {
            iVar9 = *(int *)(lVar4 + 0x87b770) >> 3;
            if (((*(byte *)((longlong)(iVar9 * iVar2 + ((int)uVar7 >> 3)) +
                           *(longlong *)(lVar4 + 0x87b768)) & (&UNK_1809f89f0)[uVar7 & 7]) != 0) &&
               ((*(byte *)((longlong)(iVar9 * iVar3 + ((int)uVar7 >> 3)) +
                          *(longlong *)(lVar4 + 0x87b768)) & (&UNK_1809f89f0)[uVar7 & 7]) == 0)) {
              *(undefined4 *)(lVar5 + 0x1b6c) = 0;
              *(undefined1 *)(lVar5 + 0x17a8) = 0;
              *(undefined8 *)(lVar5 + 0x1798) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar5 + 0x17a0) * 8);
              *(undefined4 *)(lVar5 + 0x1c0c) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c14) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c1c) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c24) = 0xffffffff;
              *(undefined4 *)(lVar5 + 0x1c2c) = 0;
              *(undefined4 *)(lVar5 + 0x200c) = 0;
              *(undefined1 *)(lVar5 + 0x1c48) = 0;
              *(undefined8 *)(lVar5 + 0x1c38) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar5 + 0x1c40) * 8);
            }
          }
          lVar11 = lVar11 + 8;
          uVar10 = uVar10 - 1;
        } while (uVar10 != 0);
      }
    }
  }
  return;
}





// 函数: void FUN_18051f7cd(void)
void FUN_18051f7cd(void)

{
  ushort *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  uint uVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  int unaff_EBP;
  longlong lVar9;
  longlong in_R9;
  
  iVar2 = *(int *)(in_R9 + 0x980);
  if (-1 < unaff_EBP) {
    if ((*(int *)(in_R9 + 0x568) == 1) && (*(longlong *)(in_R9 + 0x6e0) != 0)) {
      puVar1 = (ushort *)(*(longlong *)(in_R9 + 0x6e0) + 0x130);
      *puVar1 = *puVar1 | 0x10;
    }
    if (-1 < iVar2) {
      lVar9 = *(longlong *)(in_R9 + 0x8d8);
      if (*(char *)(lVar9 + 0x87a93c) == '\0') {
        uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
      }
      else {
        uVar5 = *(uint *)(lVar9 + 0x87a938);
      }
      if (0 < (int)uVar5) {
        lVar9 = 0;
        uVar8 = (ulonglong)uVar5;
        do {
          lVar3 = *(longlong *)(in_R9 + 0x8d8);
          lVar6 = lVar3 + 0x876958;
          if (*(char *)(lVar3 + 0x87a93c) == '\0') {
            lVar6 = *(longlong *)(lVar3 + 0x87a918);
          }
          lVar6 = *(longlong *)(lVar6 + lVar9);
          lVar4 = *(longlong *)(lVar6 + 0x6e0);
          if (((*(int *)(lVar6 + 0x568) == 1) && (lVar4 != 0)) &&
             (uVar5 = *(uint *)(lVar6 + 0x980), -1 < (int)uVar5)) {
            iVar7 = *(int *)(lVar3 + 0x87b770) >> 3;
            if (((*(byte *)((longlong)(iVar7 * unaff_EBP + ((int)uVar5 >> 3)) +
                           *(longlong *)(lVar3 + 0x87b768)) & (&UNK_1809f89f0)[uVar5 & 7]) != 0) &&
               ((*(byte *)((longlong)(iVar7 * iVar2 + ((int)uVar5 >> 3)) +
                          *(longlong *)(lVar3 + 0x87b768)) & (&UNK_1809f89f0)[uVar5 & 7]) == 0)) {
              *(undefined4 *)(lVar4 + 0x1b6c) = 0;
              *(undefined1 *)(lVar4 + 0x17a8) = 0;
              *(undefined8 *)(lVar4 + 0x1798) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x17a0) * 8);
              *(undefined4 *)(lVar4 + 0x1c0c) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c14) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c1c) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c24) = 0xffffffff;
              *(undefined4 *)(lVar4 + 0x1c2c) = 0;
              *(undefined4 *)(lVar4 + 0x200c) = 0;
              *(undefined1 *)(lVar4 + 0x1c48) = 0;
              *(undefined8 *)(lVar4 + 0x1c38) =
                   *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar4 + 0x1c40) * 8);
            }
          }
          lVar9 = lVar9 + 8;
          uVar8 = uVar8 - 1;
        } while (uVar8 != 0);
      }
    }
  }
  return;
}





// 函数: void FUN_18051f839(void)
void FUN_18051f839(void)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint in_EAX;
  longlong lVar4;
  int iVar5;
  ulonglong uVar6;
  int unaff_EBP;
  int unaff_ESI;
  longlong lVar7;
  longlong in_R9;
  
  lVar7 = 0;
  uVar6 = (ulonglong)in_EAX;
  do {
    lVar2 = *(longlong *)(in_R9 + 0x8d8);
    lVar4 = lVar2 + 0x876958;
    if (*(char *)(lVar2 + 0x87a93c) == '\0') {
      lVar4 = *(longlong *)(lVar2 + 0x87a918);
    }
    lVar4 = *(longlong *)(lVar4 + lVar7);
    lVar3 = *(longlong *)(lVar4 + 0x6e0);
    if (((*(int *)(lVar4 + 0x568) == 1) && (lVar3 != 0)) &&
       (uVar1 = *(uint *)(lVar4 + 0x980), -1 < (int)uVar1)) {
      iVar5 = *(int *)(lVar2 + 0x87b770) >> 3;
      if (((*(byte *)((longlong)(iVar5 * unaff_EBP + ((int)uVar1 >> 3)) +
                     *(longlong *)(lVar2 + 0x87b768)) & (&UNK_1809f89f0)[uVar1 & 7]) != 0) &&
         ((*(byte *)((longlong)(iVar5 * unaff_ESI + ((int)uVar1 >> 3)) +
                    *(longlong *)(lVar2 + 0x87b768)) & (&UNK_1809f89f0)[uVar1 & 7]) == 0)) {
        *(undefined4 *)(lVar3 + 0x1b6c) = 0;
        *(undefined1 *)(lVar3 + 0x17a8) = 0;
        *(undefined8 *)(lVar3 + 0x1798) =
             *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar3 + 0x17a0) * 8);
        *(undefined4 *)(lVar3 + 0x1c0c) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c14) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c1c) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c24) = 0xffffffff;
        *(undefined4 *)(lVar3 + 0x1c2c) = 0;
        *(undefined4 *)(lVar3 + 0x200c) = 0;
        *(undefined1 *)(lVar3 + 0x1c48) = 0;
        *(undefined8 *)(lVar3 + 0x1c38) =
             *(undefined8 *)(&DAT_180c8ed30 + (longlong)*(int *)(lVar3 + 0x1c40) * 8);
      }
    }
    lVar7 = lVar7 + 8;
    uVar6 = uVar6 - 1;
  } while (uVar6 != 0);
  return;
}





// 函数: void FUN_18051f98f(void)
void FUN_18051f98f(void)

{
  return;
}





// 函数: void FUN_18051f994(void)
void FUN_18051f994(void)

{
  return;
}





// 函数: void FUN_18051fa40(longlong param_1,int param_2)
void FUN_18051fa40(longlong param_1,int param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  bool bVar11;
  undefined8 uStackX_18;
  
  if ((param_2 == 1) || (*(int *)(param_1 + 0x570) != 1)) goto FUN_18051fb03;
  lVar9 = *(longlong *)(param_1 + 0x6e0);
  iVar6 = *(int *)(lVar9 + 0x14a8);
  if (iVar6 == 0) {
    bVar11 = *(char *)(lVar9 + 0x2024) == (char)iVar6;
    if (*(char *)(lVar9 + 0x2024) == (char)iVar6) goto LAB_18051fb42;
LAB_18051faab:
    cVar3 = '\x01';
  }
  else {
    bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
    if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051faab;
LAB_18051fb42:
    cVar3 = '\0';
  }
  if ((bVar11 != false) || (cVar3 != '\0')) {
    FUN_180511990(param_1,*(undefined4 *)(lVar9 + 0x14b4),0xffffffff,bVar11,cVar3,0);
  }
  lVar9 = *(longlong *)(param_1 + 0x6e0);
  if (-1 < *(int *)(lVar9 + 0x14b4)) {
    *(undefined8 *)(lVar9 + 0x14b4) = 0xffffffffffffffff;
    *(undefined4 *)(lVar9 + 0x1728) = 0xffffffff;
  }
FUN_18051fb03:
  if (param_2 == 5) {
    lVar9 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (ulonglong)uVar5;
      do {
        lVar1 = *(longlong *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(longlong *)(lVar1 + 0x87a918);
        }
        lVar1 = *(longlong *)(lVar9 + lVar7);
        if (-1 < *(int *)(lVar1 + 0x10)) {
          lVar7 = *(longlong *)(lVar1 + 0x6e0);
          if (*(char *)(lVar7 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar7 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar7 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            iVar6 = *(int *)(lVar7 + 0x14a8);
            if (iVar6 == 0) {
              bVar11 = *(char *)(lVar7 + 0x2024) == (char)iVar6;
              if (*(char *)(lVar7 + 0x2024) == (char)iVar6) goto LAB_18051fc9f;
LAB_18051fbf9:
              uVar4 = 1;
            }
            else {
              bVar11 = (iVar6 - 1U & 0xfffffffd) == 0;
              if ((iVar6 - 2U & 0xfffffffd) == 0) goto LAB_18051fbf9;
LAB_18051fc9f:
              uVar4 = 0;
            }
            FUN_180511990(lVar1,*(int *)(param_1 + 0x10),0xffffffff,bVar11,uVar4,0);
            *(undefined8 *)(lVar7 + 0x14b4) = 0xffffffffffffffff;
            *(undefined4 *)(lVar7 + 0x1728) = 0xffffffff;
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
    if ((*(byte *)(param_1 + 0x56c) & 1) == 0) {
      iVar6 = *(int *)(param_1 + 0x564);
      if (iVar6 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x8d8);
        FUN_18052e450(param_1,0xffffffff,0,0);
        FUN_18052e130((longlong)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff);
      }
    }
    else {
      iVar6 = *(int *)(param_1 + 0x560);
      if (iVar6 != -1) {
        lVar9 = *(longlong *)(param_1 + 0x8d8);
        FUN_18052e130(param_1,0xffffffff);
        FUN_18052e450((longlong)iVar6 * 0xa60 + lVar9 + 0x30a0,0xffffffff,0,0);
      }
    }
  }
  else if (param_2 == 2) {
    lVar9 = *(longlong *)(param_1 + 0x8d8);
    if (*(char *)(lVar9 + 0x87a93c) == '\0') {
      uVar5 = (uint)(*(longlong *)(lVar9 + 0x87a920) - *(longlong *)(lVar9 + 0x87a918) >> 3);
    }
    else {
      uVar5 = *(uint *)(lVar9 + 0x87a938);
    }
    if (0 < (int)uVar5) {
      lVar9 = 0;
      uVar8 = (ulonglong)uVar5;
      do {
        lVar1 = *(longlong *)(param_1 + 0x8d8);
        lVar7 = lVar1 + 0x876958;
        if (*(char *)(lVar1 + 0x87a93c) == '\0') {
          lVar7 = *(longlong *)(lVar1 + 0x87a918);
        }
        if (-1 < *(int *)(*(longlong *)(lVar9 + lVar7) + 0x10)) {
          lVar1 = *(longlong *)(*(longlong *)(lVar9 + lVar7) + 0x6e0);
          if (*(char *)(lVar1 + 0x21c0) == '\0') {
            iVar6 = *(int *)(lVar1 + 0x14b4);
          }
          else {
            iVar6 = *(int *)(lVar1 + 0x21c4);
          }
          if (iVar6 == *(int *)(param_1 + 0x10)) {
            uStackX_18 = 0xffffffffffffffff;
            FUN_1805d1c80(lVar1,&uStackX_18,0);
            *(undefined4 *)(lVar1 + 0x12dc) = 0xffffffff;
            func_0x0001805da580();
          }
        }
        lVar9 = lVar9 + 8;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  *(int *)(param_1 + 0x568) = param_2;
  if (*(char *)(param_1 + 0x984) != '\0') {
    lVar9 = *(longlong *)(param_1 + 0x738);
    *(int *)(lVar9 + 0x194) = param_2;
    if ((*(int *)(param_1 + 0x568) == 1) || (*(char *)(param_1 + 0xa50) == '\0')) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
    *(undefined1 *)(lVar9 + 0x199) = uVar4;
    if ((param_2 != 5) && (*(char *)(lVar9 + 0x98) != '\0')) {
      lVar9 = *(longlong *)(param_1 + 0x8d8);
      lVar7 = (longlong)*(int *)(param_1 + 0x564) * 0xa60;
      lVar1 = *(longlong *)(lVar7 + 0x37d8 + lVar9);
      if (*(char *)(lVar1 + 0x99) != '\0') {
        lVar10 = (longlong)*(int *)(lVar7 + 0x3600 + lVar9) * 0xa60;
        lVar2 = *(longlong *)(lVar7 + 0x3978 + lVar9);
        if (*(int *)(lVar10 + 0x3608 + lVar2) == 1) {
          *(undefined4 *)(lVar1 + 0x1dc) = *(undefined4 *)(lVar10 + 0x3a20 + lVar2);
          return;
        }
      }
      *(undefined4 *)(lVar1 + 0x1dc) = *(undefined4 *)(lVar7 + 0x3a20 + lVar9);
    }
  }
  return;
}





