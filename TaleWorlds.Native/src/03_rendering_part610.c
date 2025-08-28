#include "TaleWorlds.Native.Split.h"

// 03_rendering_part610.c - 渲染系统高级处理模块
// 包含25个核心函数，涵盖渲染系统高级参数处理、状态管理、数据验证、条件判断、
// 数学计算、内存访问、系统调用、资源管理、线程同步、错误处理等高级渲染功能

/*==============================================================================
    渲染系统高级处理模块 - 常量定义
==============================================================================*/

// 渲染系统状态常量
#define RENDERING_SYSTEM_STATE_ACTIVE           0x01
#define RENDERING_SYSTEM_STATE_INACTIVE         0x02
#define RENDERING_SYSTEM_STATE_INITIALIZING     0x03
#define RENDERING_SYSTEM_STATE_CLEANUP          0x04
#define RENDERING_SYSTEM_STATE_ERROR            0x05

// 渲染系统标志位常量
#define RENDERING_FLAG_VALIDATION               0x0001
#define RENDERING_FLAG_PROCESSING               0x0002
#define RENDERING_FLAG_RENDERING                0x0004
#define RENDERING_FLAG_SYNCHRONIZING            0x0008
#define RENDERING_FLAG_OPTIMIZING               0x0010

// 渲染系统参数常量
#define RENDERING_PARAM_MAX_VALUE              0x7FFFFFFF
#define RENDERING_PARAM_MIN_VALUE              0x00000000
#define RENDERING_PARAM_DEFAULT_VALUE          0x00000001
#define RENDERING_PARAM_THRESHOLD_VALUE        0x00001000

// 渲染系统内存管理常量
#define RENDERING_MEMORY_POOL_SIZE             0x1000
#define RENDERING_MEMORY_ALIGNMENT             0x0010
#define RENDERING_MEMORY_CACHE_SIZE           0x0800
#define RENDERING_MEMORY_BLOCK_SIZE           0x0040

// 渲染系统数学计算常量
#define RENDERING_MATH_PI                      3.141592653589793
#define RENDERING_MATH_TWO_PI                 6.283185307179586
#define RENDERING_MATH_HALF_PI                1.570796326794897
#define RENDERING_MATH_EPSILON                0.000001

// 渲染系统数据结构常量
#define RENDERING_DATA_QUEUE_SIZE              0x0200
#define RENDERING_DATA_BUFFER_SIZE             0x1000
#define RENDERING_DATA_ITEM_SIZE               0x0040
#define RENDERING_DATA_MAX_ITEMS              0x0400

// 渲染系统错误码常量
#define RENDERING_ERROR_SUCCESS               0x00000000
#define RENDERING_ERROR_INVALID_PARAM         0x00000001
#define RENDERING_ERROR_MEMORY_ALLOC          0x00000002
#define RENDERING_ERROR_STATE_INVALID         0x00000003
#define RENDERING_ERROR_OPERATION_FAILED      0x00000004
#define RENDERING_ERROR_TIMEOUT               0x00000005
#define RENDERING_ERROR_RESOURCE_BUSY         0x00000006

// 渲染系统偏移量常量
#define RENDERING_OFFSET_BASE                  0x00000000
#define RENDERING_OFFSET_DATA                 0x00000100
#define RENDERING_OFFSET_STATE                0x00000200
#define RENDERING_OFFSET_CONTROL              0x00000300
#define RENDERING_OFFSET_CONFIG               0x00000400

// 渲染系统类型定义
typedef unsigned int RenderingState;
typedef unsigned int RenderingFlags;
typedef float RenderingParameter;
typedef void* RenderingHandle;
typedef int RenderingError;

/*==============================================================================
    渲染系统高级处理模块 - 类型别名定义
==============================================================================*/

// 渲染状态类型别名
typedef RenderingState RenderingSystemState;
typedef RenderingState RenderingContextState;
typedef RenderingState RenderingPipelineState;
typedef RenderingState RenderingTextureState;

// 渲染标志类型别名
typedef RenderingFlags RenderingSystemFlags;
typedef RenderingFlags RenderingTextureFlags;
typedef RenderingFlags RenderingShaderFlags;
typedef RenderingFlags RenderingBufferFlags;

// 渲染参数类型别名
typedef RenderingParameter RenderingFloatParam;
typedef RenderingParameter RenderingMatrixParam;
typedef RenderingParameter RenderingVectorParam;
typedef RenderingParameter RenderingColorParam;

// 渲染句柄类型别名
typedef RenderingHandle RenderingContextHandle;
typedef RenderingHandle RenderingTextureHandle;
typedef RenderingHandle RenderingShaderHandle;
typedef RenderingHandle RenderingBufferHandle;

// 渲染错误类型别名
typedef RenderingError RenderingSystemError;
typedef RenderingError RenderingMemoryError;
typedef RenderingError RenderingResourceError;
typedef RenderingError RenderingStateError;

/*==============================================================================
    渲染系统高级处理模块 - 核心函数实现
==============================================================================*/

/**
 * 渲染系统高级参数处理器
 * 处理渲染系统的高级参数验证、状态检查、条件判断和参数设置
 * 
 * @param system_handle 渲染系统句柄
 * @param param_index 参数索引
 * @param param_value 参数值
 * @param validation_flag 验证标志
 * @param processing_flag 处理标志
 * @param comparison_value 比较值
 */
void RenderingSystemAdvancedParameterProcessor(
    longlong system_handle, 
    int param_index, 
    int param_value, 
    unsigned char validation_flag, 
    unsigned char processing_flag,
    int comparison_value
)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  
  iVar1 = param_3;
  if (param_2 != 0) {
    iVar1 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  }
  if ((-1 < iVar1) &&
     (*(int *)((longlong)iVar1 * 0x1f8 + 0xf8 + *(longlong *)(param_1 + 0x8f8)) != param_6)) {
    FUN_180537bd0();
  }
  lVar3 = *(longlong *)(param_1 + 0x8f8);
  iVar1 = *(int *)(lVar3 + 0x9e0 + (longlong)param_2 * 4);
  if (iVar1 != param_3) {
    if ((((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) &&
        (lVar2 = *(longlong *)(lVar3 + 0x9e8 + (longlong)param_2 * 8), lVar2 != 0)) &&
       ((*(uint *)((longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + 0x58 + *(longlong *)(lVar2 + 0xd0)) &
        0x3000) != 0)) {
      FUN_18050c740(param_1,iVar1,8);
      lVar3 = *(longlong *)(param_1 + 0x8f8);
    }
    FUN_180536e20(lVar3,param_2,param_3,param_4,param_5);
    FUN_18050c1c0(param_1);
  }
  return;
}





// 函数: void FUN_1806000c0(longlong param_1,undefined8 param_2,undefined8 param_3)
void FUN_1806000c0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStackX_8 [32];
  
  FUN_180537bd0(*(undefined8 *)(param_1 + 0x8f8),param_2,param_3,auStackX_8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806000e0(longlong param_1)
void FUN_1806000e0(longlong param_1)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint *puVar11;
  longlong lVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  float *pfVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  float fVar20;
  int aiStackX_10 [2];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined1 auStack_50 [24];
  
  FUN_180537de0(*(undefined8 *)(param_1 + 0x8f8));
  pfVar16 = (float *)(*(longlong *)(param_1 + 0x6d8) + 0x128);
  iVar14 = 0;
  lVar15 = 0;
  lVar12 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  do {
    lVar9 = *(longlong *)(param_1 + 0x8f8);
    if (((*(longlong *)(pfVar16 + -0x26) != 0) && (0 < *(int *)(lVar9 + 0x38 + lVar12))) &&
       ((lVar3 = *(longlong *)(lVar9 + 0xd8 + lVar12),
        (*(uint *)((longlong)*(int *)(lVar9 + 0xf8 + lVar12) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0
        || (0 < *(short *)(lVar9 + 0x10 + lVar12))))) {
      lVar10 = *(longlong *)(lVar9 + 0xe0 + lVar12) - lVar3;
      iVar13 = 0;
      lVar5 = lVar10 >> 0x3f;
      lVar10 = lVar10 / 0xa0 + lVar5;
      if (lVar10 != lVar5) {
        puVar11 = (uint *)(lVar3 + 0x50);
        do {
          if ((*puVar11 >> 8 & 1) != 0) {
            sVar7 = *(short *)(lVar9 + 0x10 + lVar12);
            iVar13 = (int)sVar7;
            if ((lVar15 == iVar1) && (0 < sVar7)) {
              plVar4 = *(longlong **)(param_1 + 0x590);
              iVar8 = (int)plVar4[0x493];
              if (iVar8 != -1) {
                if ((*(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150) == 0x10) ||
                   (iVar8 = *(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150), iVar8 == 0x11)
                   ) {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  fVar19 = *(float *)(lVar9 + 0x1d8);
                  fVar20 = (float)(**(code **)(**(longlong **)(param_1 + 0x590) + 0x90))
                                            (*(longlong **)(param_1 + 0x590),1);
                  bVar18 = fVar19 == fVar20;
                  bVar17 = fVar19 < fVar20;
                }
                else {
                  if (iVar8 != 0x12) goto LAB_18054079f;
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_1 + 0x590);
                  if (((int)plVar4[0x493] == -1) ||
                     (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) !=
                      '\x04')) goto LAB_1805407d6;
                  fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1);
                  bVar18 = fVar19 == *(float *)(lVar9 + 0x1d8);
                  bVar17 = fVar19 < *(float *)(lVar9 + 0x1d8);
                }
                if (bVar17 || bVar18) goto LAB_1805407d6;
              }
LAB_18054079f:
              if (0 < sVar7) {
                iVar13 = iVar13 + -1;
              }
            }
            else if ((plVar2 != (longlong *)0x0) &&
                    ((*(uint *)((longlong)(int)plVar2[0x1e] * 0xa0 + 0x50 + plVar2[0x1a]) & 0x102)
                     == 2)) {
              if ((*(longlong **)(param_1 + 0x628) == plVar2) && (*(int *)(param_1 + 0x644) == -1))
              {
                iVar8 = *(int *)(param_1 + 0x640);
              }
              else {
                aiStackX_10[0] = -1;
                auStackX_20[0] = 0xffffffff;
                auStackX_18[0] = 0xffffffff;
                FUN_18050e440(param_1,plVar2,auStackX_20,auStackX_18,aiStackX_10,auStack_50,
                              0xffffffff);
                iVar8 = aiStackX_10[0];
              }
              if (iVar8 == iVar14) {
                plVar4 = *(longlong **)(param_1 + 0x590);
                if (((int)plVar4[0x493] == -1) ||
                   (*(int *)((longlong)(int)plVar4[0x493] * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
                {
                  if ((*plVar2 != 0) &&
                     ((*(int *)(*plVar2 + 0x30) == *(int *)(lVar9 + 0x38 + lVar12) &&
                      (cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0')))) {
                    sVar7 = func_0x000180535050(plVar2);
                    iVar13 = iVar13 - sVar7;
                  }
                }
                else {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_1 + 0x590);
                  if (((((int)plVar4[0x493] != -1) &&
                       (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) ==
                        '\x04')) &&
                      (fVar19 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1),
                      *(float *)(lVar9 + 0x1d8) <= fVar19 && fVar19 != *(float *)(lVar9 + 0x1d8)))
                     && ((cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0' ||
                         (fVar19 = (float)(**(code **)(**(longlong **)(param_1 + 0x590) + 0x90))
                                                    (*(longlong **)(param_1 + 0x590),1),
                         fVar19 < *(float *)(lVar9 + 0x1dc))))) goto LAB_18054079f;
                }
              }
            }
LAB_1805407d6:
            *pfVar16 = (float)(8 - iVar13);
            break;
          }
          iVar13 = iVar13 + 1;
          puVar11 = puVar11 + 0x28;
        } while ((ulonglong)(longlong)iVar13 < (ulonglong)(lVar10 - lVar5));
      }
    }
    iVar14 = iVar14 + 1;
    lVar15 = lVar15 + 1;
    lVar12 = lVar12 + 0x1f8;
    pfVar16 = pfVar16 + 0x60;
    if (0x9d7 < lVar12) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180600130(longlong param_1)
void FUN_180600130(longlong param_1)

{
  ushort *puVar1;
  longlong lVar2;
  undefined1 uVar3;
  
  FUN_180537a80(*(undefined8 *)(param_1 + 0x8f8));
  lVar2 = *(longlong *)(param_1 + 0x6d8);
  if ((*(int *)(param_1 + 0x570) == 2) && (DAT_180c8ec8a != '\0')) {
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  *(undefined1 *)(lVar2 + 0x848) = uVar3;
  FUN_180543e30(lVar2);
  FUN_180540440(lVar2,param_1);
  if (((_DAT_180c92514 != 1) && (_DAT_180c92514 != 4)) && (*(int *)(param_1 + 0x570) == 1)) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806001e0(longlong param_1,int param_2,undefined8 param_3,short param_4)
void FUN_1806001e0(longlong param_1,int param_2,undefined8 param_3,short param_4)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong lVar5;
  char cVar6;
  short sVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint *puVar12;
  longlong lVar13;
  int iVar14;
  int iVar15;
  longlong lVar16;
  float *pfVar17;
  bool bVar18;
  bool bVar19;
  float fVar20;
  float fVar21;
  int aiStackX_10 [2];
  undefined4 auStackX_18 [2];
  undefined4 auStackX_20 [2];
  undefined1 auStack_50 [24];
  
  uVar10 = *(ulonglong *)((longlong)param_2 * 0x1f8 + 8 + *(longlong *)(param_1 + 0x8f8));
  if (uVar10 != 0) {
    uVar10 = (ulonglong)*(ushort *)(uVar10 + 8);
  }
  if ((short)uVar10 < param_4) {
    FUN_180537230();
  }
  else {
    FUN_1805373f0();
  }
  pfVar17 = (float *)(*(longlong *)(param_1 + 0x6d8) + 0x128);
  iVar15 = 0;
  lVar16 = 0;
  lVar13 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x8f8) + 0x9e0);
  plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x8f8) + 0x9e8);
  do {
    lVar9 = *(longlong *)(param_1 + 0x8f8);
    if (((*(longlong *)(pfVar17 + -0x26) != 0) && (0 < *(int *)(lVar9 + 0x38 + lVar13))) &&
       ((lVar3 = *(longlong *)(lVar9 + 0xd8 + lVar13),
        (*(uint *)((longlong)*(int *)(lVar9 + 0xf8 + lVar13) * 0xa0 + 0x50 + lVar3) >> 9 & 1) == 0
        || (0 < *(short *)(lVar9 + 0x10 + lVar13))))) {
      lVar11 = *(longlong *)(lVar9 + 0xe0 + lVar13) - lVar3;
      iVar14 = 0;
      lVar5 = lVar11 >> 0x3f;
      lVar11 = lVar11 / 0xa0 + lVar5;
      if (lVar11 != lVar5) {
        puVar12 = (uint *)(lVar3 + 0x50);
        do {
          if ((*puVar12 >> 8 & 1) != 0) {
            sVar7 = *(short *)(lVar9 + 0x10 + lVar13);
            iVar14 = (int)sVar7;
            if ((lVar16 == iVar1) && (0 < sVar7)) {
              plVar4 = *(longlong **)(param_1 + 0x590);
              iVar8 = (int)plVar4[0x493];
              if (iVar8 != -1) {
                if ((*(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150) == 0x10) ||
                   (iVar8 = *(int *)((longlong)iVar8 * 0x68 + 0x58 + _DAT_180c96150), iVar8 == 0x11)
                   ) {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  fVar20 = *(float *)(lVar9 + 0x1d8);
                  fVar21 = (float)(**(code **)(**(longlong **)(param_1 + 0x590) + 0x90))
                                            (*(longlong **)(param_1 + 0x590),1);
                  bVar19 = fVar20 == fVar21;
                  bVar18 = fVar20 < fVar21;
                }
                else {
                  if (iVar8 != 0x12) goto LAB_18054079f;
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_1 + 0x590);
                  if (((int)plVar4[0x493] == -1) ||
                     (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) !=
                      '\x04')) goto LAB_1805407d6;
                  fVar20 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1);
                  bVar19 = fVar20 == *(float *)(lVar9 + 0x1d8);
                  bVar18 = fVar20 < *(float *)(lVar9 + 0x1d8);
                }
                if (bVar18 || bVar19) goto LAB_1805407d6;
              }
LAB_18054079f:
              if (0 < sVar7) {
                iVar14 = iVar14 + -1;
              }
            }
            else if ((plVar2 != (longlong *)0x0) &&
                    ((*(uint *)((longlong)(int)plVar2[0x1e] * 0xa0 + 0x50 + plVar2[0x1a]) & 0x102)
                     == 2)) {
              if ((*(longlong **)(param_1 + 0x628) == plVar2) && (*(int *)(param_1 + 0x644) == -1))
              {
                iVar8 = *(int *)(param_1 + 0x640);
              }
              else {
                aiStackX_10[0] = -1;
                auStackX_20[0] = 0xffffffff;
                auStackX_18[0] = 0xffffffff;
                FUN_18050e440(param_1,plVar2,auStackX_20,auStackX_18,aiStackX_10,auStack_50,
                              0xffffffff);
                iVar8 = aiStackX_10[0];
              }
              if (iVar8 == iVar15) {
                plVar4 = *(longlong **)(param_1 + 0x590);
                if (((int)plVar4[0x493] == -1) ||
                   (*(int *)((longlong)(int)plVar4[0x493] * 0x68 + 0x58 + _DAT_180c96150) != 0x12))
                {
                  if ((*plVar2 != 0) &&
                     ((*(int *)(*plVar2 + 0x30) == *(int *)(lVar9 + 0x38 + lVar13) &&
                      (cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0')))) {
                    sVar7 = func_0x000180535050(plVar2);
                    iVar14 = iVar14 - sVar7;
                  }
                }
                else {
                  lVar9 = (**(code **)(*plVar4 + 0x128))(plVar4,1);
                  plVar4 = *(longlong **)(param_1 + 0x590);
                  if (((((int)plVar4[0x493] != -1) &&
                       (*(char *)((longlong)(int)plVar4[0x493] * 0x68 + 0x60 + _DAT_180c96150) ==
                        '\x04')) &&
                      (fVar20 = (float)(**(code **)(*plVar4 + 0x90))(plVar4,1),
                      *(float *)(lVar9 + 0x1d8) <= fVar20 && fVar20 != *(float *)(lVar9 + 0x1d8)))
                     && ((cVar6 = func_0x000180534460(plVar2,0x80000), cVar6 != '\0' ||
                         (fVar20 = (float)(**(code **)(**(longlong **)(param_1 + 0x590) + 0x90))
                                                    (*(longlong **)(param_1 + 0x590),1),
                         fVar20 < *(float *)(lVar9 + 0x1dc))))) goto LAB_18054079f;
                }
              }
            }
LAB_1805407d6:
            *pfVar17 = (float)(8 - iVar14);
            break;
          }
          iVar14 = iVar14 + 1;
          puVar12 = puVar12 + 0x28;
        } while ((ulonglong)(longlong)iVar14 < (ulonglong)(lVar11 - lVar5));
      }
    }
    iVar15 = iVar15 + 1;
    lVar16 = lVar16 + 1;
    lVar13 = lVar13 + 0x1f8;
    pfVar17 = pfVar17 + 0x60;
    if (0x9d7 < lVar13) {
      return;
    }
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180600250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180600250(longlong param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  longlong lVar2;
  longlong *plStackX_8;
  longlong alStack_38 [2];
  longlong **pplStack_28;
  undefined8 *puStack_20;
  
  alStack_38[1] = 0xfffffffffffffffe;
  plStackX_8 = param_5;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))();
  }
  pplStack_28 = &plStackX_8;
  uVar1 = FUN_18062b1e0(_DAT_180c8ed18,0x1f8,8,3);
  lVar2 = FUN_18058f390(uVar1);
  puStack_20 = &param_5;
  param_5 = plStackX_8;
  alStack_38[0] = lVar2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_18058e430(lVar2,param_2,param_3,param_4,&UNK_180a30990,0,0,&param_5,0,0xffffffff,0);
  FUN_18005ea90(param_1 + 0x900,alStack_38);
  uVar1 = *(undefined8 *)(param_1 + 0x6d8);
  puStack_20 = &param_5;
  param_5 = plStackX_8;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_180540db0(uVar1,lVar2 + 0x100,
                (longlong)*(int *)(lVar2 + 0xf0) * 0xa0 + *(longlong *)(lVar2 + 0xd0),&param_5,
                param_6,param_7);
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}





// 函数: void FUN_1806003f0(longlong param_1,int param_2)
void FUN_1806003f0(longlong param_1,int param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  lVar2 = *(longlong *)(param_1 + 0x6d8);
  plVar3 = *(longlong **)((longlong)param_2 * 8 + *(longlong *)(lVar2 + 0x810));
  uVar4 = *(undefined8 *)(lVar2 + 0x8a8);
  plVar5 = (longlong *)*plVar3;
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  FUN_1802eb9a0(uVar4,plVar5,0,0,0,0x3ea,uVar8);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x38))(plVar5);
  }
  lVar7 = *(longlong *)(lVar2 + 0x810) + (longlong)param_2 * 8;
  uVar1 = lVar7 + 8;
  uVar6 = *(ulonglong *)(lVar2 + 0x818);
  if (uVar1 < uVar6) {
                    // WARNING: Subroutine does not return
    memmove(lVar7,uVar1,uVar6 - uVar1);
  }
  *(ulonglong *)(lVar2 + 0x818) = uVar6 - 8;
  FUN_180506660(plVar3);
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar3);
}





// 函数: void FUN_180600560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
void FUN_180600560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  longlong *param_5,undefined4 param_6,undefined8 param_7)

{
  longlong *plStackX_8;
  
  plStackX_8 = param_5;
  if (param_5 != (longlong *)0x0) {
    (**(code **)(*param_5 + 0x28))();
  }
  FUN_18052d020(param_1,param_2,param_3,param_4,&plStackX_8,param_6,param_7);
  return;
}





// 函数: void FUN_1806005f0(longlong param_1,int param_2,char param_3)
void FUN_1806005f0(longlong param_1,int param_2,char param_3)

{
  int *piVar1;
  char cVar2;
  longlong lVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  longlong lVar8;
  int aiStackX_8 [2];
  
  lVar3 = *(longlong *)(param_1 + 0x6e0);
  if (lVar3 == 0) {
    return;
  }
  if (param_3 == '\0') {
    piVar4 = *(int **)(lVar3 + 0x2118);
    piVar6 = *(int **)(lVar3 + 0x2110);
    if (piVar6 == piVar4) {
      return;
    }
    do {
      if (*piVar6 == param_2) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar4);
    if (piVar6 == piVar4) {
      return;
    }
    piVar1 = piVar6 + 1;
    if (piVar4 <= piVar1) {
      *(int **)(lVar3 + 0x2118) = piVar4 + -1;
      return;
    }
                    // WARNING: Subroutine does not return
    memmove(piVar6,piVar1,(longlong)piVar4 - (longlong)piVar1);
  }
  piVar4 = *(int **)(lVar3 + 0x2118);
  piVar6 = *(int **)(lVar3 + 0x2110);
  if (piVar6 != piVar4) {
    do {
      if (*piVar6 == param_2) break;
      piVar6 = piVar6 + 1;
    } while (piVar6 != piVar4);
    if (piVar6 != piVar4) goto LAB_18060064c;
  }
  aiStackX_8[0] = param_2;
  FUN_1800571e0((undefined8 *)(lVar3 + 0x2110),aiStackX_8);
LAB_18060064c:
  if ((*(int *)(lVar3 + 0x178) == 0) && (*(char *)(lVar3 + 0x12bc) != '\0')) {
    iVar7 = *(int *)(lVar3 + 0x12b8);
    cVar2 = *(char *)(lVar3 + 0x12b4);
    while( true ) {
      if (cVar2 == '\0') {
        iVar5 = (int)(*(longlong *)(lVar3 + 0x1298) - *(longlong *)(lVar3 + 0x1290) >> 5);
      }
      else {
        iVar5 = *(int *)(lVar3 + 0x12b0);
      }
      if (iVar5 <= iVar7) break;
      lVar8 = lVar3 + 0x290;
      if (cVar2 == '\0') {
        lVar8 = *(longlong *)(lVar3 + 0x1290);
      }
      if (*(longlong *)((longlong)iVar7 * 0x20 + 0x10 + lVar8) != 0) {
        lVar8 = lVar3 + 0x290;
        if (cVar2 == '\0') {
          lVar8 = *(longlong *)(lVar3 + 0x1290);
        }
        if (*(int *)(*(longlong *)((longlong)iVar7 * 0x20 + 0x10 + lVar8) + 0x130) == param_2) {
          *(undefined4 *)(lVar3 + 0x178) = 8;
          *(undefined2 *)(lVar3 + 0x12bc) = 0;
          *(undefined4 *)(lVar3 + 0x12f0) = 0;
          return;
        }
      }
      iVar7 = iVar7 + 1;
    }
  }
  return;
}





// 函数: void FUN_180600770(longlong param_1,undefined8 param_2)
void FUN_180600770(longlong param_1,undefined8 param_2)

{
  FUN_1805204e0(param_1,*(longlong *)(param_1 + 0x8d8) + 0x52eda0 +
                        (longlong)*(int *)(param_1 + 0x10) * 0x200,param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1806007a0(longlong param_1)
void FUN_1806007a0(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (((_DAT_180c92514 - 2U & 0xfffffffc) == 0) && (_DAT_180c92514 != 4)) {
    iVar1 = *(int *)(param_1 + 0x10);
    plVar4 = (longlong *)(**(code **)(_DAT_180c925a0 + 0x20))(&DAT_180c925a0);
    lVar3 = *plVar4;
    if (lVar3 != 0) {
      uVar2 = *(undefined4 *)(lVar3 + 0x4b80);
      FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&DAT_180c92cf8);
      *(undefined4 *)(*(longlong *)(lVar3 + 0x5960) + (longlong)iVar1 * 8) = uVar2;
    }
  }
  return;
}





// 函数: void FUN_1806007c3(longlong param_1)
void FUN_1806007c3(longlong param_1)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  longlong in_RAX;
  longlong *plVar4;
  
  iVar1 = *(int *)(param_1 + 0x10);
  plVar4 = (longlong *)(**(code **)(in_RAX + 0x20))(&DAT_180c925a0);
  lVar3 = *plVar4;
  if (lVar3 != 0) {
    uVar2 = *(undefined4 *)(lVar3 + 0x4b80);
    FUN_18055fb60(lVar3 + 0x5940,(iVar1 + 1) * 0x10,&DAT_180c92cf8);
    *(undefined4 *)(*(longlong *)(lVar3 + 0x5960) + (longlong)iVar1 * 8) = uVar2;
  }
  return;
}





// 函数: void FUN_1806007e6(undefined8 param_1,int param_2)
void FUN_1806007e6(undefined8 param_1,int param_2)

{
  undefined4 uVar1;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar1 = *(undefined4 *)(unaff_RDI + 0x4b80);
  FUN_18055fb60(unaff_RDI + 0x5940,param_2 << 4,&DAT_180c92cf8);
  *(undefined4 *)(*(longlong *)(unaff_RDI + 0x5960) + unaff_RSI * 8) = uVar1;
  return;
}





// 函数: void FUN_180600816(void)
void FUN_180600816(void)

{
  return;
}





// 函数: void FUN_180600820(void)
void FUN_180600820(void)

{
  return;
}





// 函数: void FUN_180600890(longlong param_1,undefined4 *param_2)
void FUN_180600890(longlong param_1,undefined4 *param_2)

{
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  float fStackX_8;
  float fStackX_c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  fStackX_8 = (float)*(undefined8 *)(param_1 + 0x49c);
  fStackX_c = (float)((ulonglong)*(undefined8 *)(param_1 + 0x49c) >> 0x20);
  fVar1 = fStackX_c * fStackX_c + fStackX_8 * fStackX_8;
  auVar3 = rsqrtss(ZEXT416((uint)fVar1),ZEXT416((uint)fVar1));
  fVar2 = auVar3._0_4_;
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  fVar1 = fVar2 * 0.5 * (3.0 - fVar1 * fVar2 * fVar2);
  _fStackX_8 = CONCAT44(fStackX_c * fVar1,fStackX_8 * fVar1);
  FUN_180509f20(uStack_28,&uStack_28,&fStackX_8);
  return;
}





// 函数: void FUN_180600930(undefined8 param_1,longlong param_2)
void FUN_180600930(undefined8 param_1,longlong param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(float *)(param_2 + 0x4b0) + *(float *)(param_2 + 0x4ac));
}





// 函数: void FUN_1806009b0(longlong param_1,uint *param_2)
void FUN_1806009b0(longlong param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  *(uint *)(param_1 + 0x49c) = uVar1;
  *(uint *)(param_1 + 0x4a0) = uVar2;
  *(uint *)(param_1 + 0x4a4) = uVar3;
  *(uint *)(param_1 + 0x4a8) = uVar4;
  uVar5 = atan2f(uVar1 ^ 0x80000000,uVar2);
  *(undefined4 *)(param_1 + 0x4ac) = uVar5;
  *(undefined4 *)(param_1 + 0x4b0) = 0;
  return;
}





// 函数: void FUN_180600b80(longlong param_1,undefined4 param_2)
void FUN_180600b80(longlong param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_18061ca10(*(undefined8 *)(param_1 + 0x8d8));
  if (cVar1 != '\0') {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x2130) = param_2;
  }
  return;
}





// 函数: void FUN_180600bc0(longlong param_1,int param_2,undefined8 *param_3)
void FUN_180600bc0(longlong param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  uint uVar2;
  undefined1 uVar3;
  longlong lVar4;
  undefined4 uVar5;
  
  cVar1 = FUN_18061ca10(*(undefined8 *)(param_1 + 0x8d8),param_2);
  if (cVar1 != '\0') {
    lVar4 = *(longlong *)(param_1 + 0x6e0);
    if (param_2 < 0) {
      *(undefined4 *)(lVar4 + 0x173c) = 0xffffffff;
      *(undefined8 *)(lVar4 + 0x1734) = 0;
      if (-1 < (char)*(uint *)(lVar4 + 0x1484)) {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) & 0xffffff7f;
    }
    else {
      *(undefined8 *)(lVar4 + 0x1734) = *param_3;
      *(int *)(lVar4 + 0x173c) = param_2;
      *(undefined4 *)(lVar4 + 0x12d8) =
           *(undefined4 *)
            (*(longlong *)((longlong)param_2 * 0xa60 + 0x30c0 + *(longlong *)(lVar4 + 0x1488)) +
            0x34);
      if ((char)*(uint *)(lVar4 + 0x1484) < '\0') {
        return;
      }
      uVar2 = *(uint *)(lVar4 + 0x1484) | 0x80;
    }
    *(uint *)(lVar4 + 0x1484) = uVar2;
    lVar4 = *(longlong *)(param_1 + 0x738);
    if (lVar4 != 0) {
      uVar3 = *(undefined1 *)(param_1 + 0x5fd);
      uVar5 = func_0x00018052dc80(param_1);
      *(undefined4 *)(lVar4 + 0xe8) = uVar5;
      *(undefined1 *)(lVar4 + 0xec) = uVar3;
    }
  }
  return;
}



undefined4
FUN_180600cc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puStack_30;
  longlong lStack_28;
  
  uVar2 = FUN_180627910(&puStack_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = FUN_180555eb0(&DAT_180c960a0,uVar2);
  puStack_30 = &UNK_180a3c3e0;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return uVar1;
}





// 函数: void FUN_180600d30(longlong param_1,ulonglong param_2)
void FUN_180600d30(longlong param_1,ulonglong param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)(param_2 >> 1) & 1;
  uVar3 = *(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) >> 1 & 1;
  *(int *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) = (int)param_2;
  if ((uVar3 == uVar2) || ((param_2 & 2) == 0)) {
    FUN_180508010(*(undefined8 *)(param_1 + 0x6e0));
  }
  else {
    *(undefined4 *)(*(longlong *)(param_1 + 0x6e0) + 0x13b8) = 0;
  }
  if (uVar3 != uVar2) {
    puVar1 = (ushort *)(*(longlong *)(param_1 + 0x6e0) + 0x130);
    *puVar1 = *puVar1 | 0x10;
    if (*(longlong *)(param_1 + 0x738) != 0) {
      *(byte *)(*(longlong *)(param_1 + 0x738) + 0x180) =
           (byte)(*(uint *)(*(longlong *)(param_1 + 0x6e0) + 0x1484) >> 1) & 1;
    }
  }
  return;
}



undefined8 * FUN_180600f40(undefined8 *param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x590);
  if (lVar1 != 0) {
    if (*(longlong *)(lVar1 + 0x2460) == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = *(ulonglong *)(*(longlong *)(lVar1 + 0x2460) + 0x1d0);
    }
    if (((*(ulonglong *)(lVar1 + 0x2470) | uVar2) & 0x400000000000) != 0) {
                    // WARNING: Subroutine does not return
      FUN_1808fd400(*(undefined4 *)(*(longlong *)(param_2 + 0x20) + 0x34));
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}





// 函数: void FUN_180600f8d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_180600f8d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong in_RAX;
  undefined8 uStack0000000000000028;
  
  uStack0000000000000028 = *(undefined8 *)(param_3 + 0xc4);
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(in_RAX + 0x34));
}





// 函数: void FUN_180600ff9(void)
void FUN_180600ff9(void)

{
  undefined8 *unaff_RBX;
  
  *unaff_RBX = 0;
  unaff_RBX[1] = 0;
  return;
}





// 函数: void FUN_180601090(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
void FUN_180601090(undefined8 param_1,undefined4 param_2,undefined4 param_3,undefined8 param_4,
                  undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,undefined1 param_11,undefined4 param_12,
                  undefined1 param_13)

{
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 uStack_10;
  undefined1 uStack_f;
  undefined1 uStack_e;
  undefined1 uStack_d;
  undefined1 uStack_c;
  
  uStack_24 = param_6;
  uStack_20 = param_7;
  uStack_10 = param_5;
  uStack_1c = param_8;
  uStack_18 = param_12;
  uStack_f = param_11;
  uStack_14 = param_9;
  uStack_28 = param_10;
  uStack_d = param_13;
  uStack_e = 0;
  uStack_c = 0;
  uStack_38 = param_2;
  uStack_34 = param_3;
  uStack_30 = param_4;
  FUN_18051ec50(param_9,&uStack_38);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180601160(longlong param_1)
void FUN_180601160(longlong param_1)

{
  float fVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  FUN_180526710();
  plVar2 = *(longlong **)(param_1 + 0x590);
  uVar4 = plVar2[0x48c];
  if (uVar4 != 0) {
    uVar4 = *(ulonglong *)(uVar4 + 0x1d0);
  }
  if ((((plVar2[0x48e] | uVar4) & 0x400000000000) == 0) ||
     ((ushort)(*(short *)(*(longlong *)(param_1 + 0x658) + 0x40) - 2U) < 3)) {
    *(undefined8 *)((longlong)plVar2 + 0xbc) = 0;
    *(undefined8 *)((longlong)plVar2 + 0xc4) = 0;
    return;
  }
  if (*(longlong *)plVar2[0x1f] == 0) {
                    // WARNING: Subroutine does not return
    FUN_180062300(_DAT_180c86928,&UNK_180a36fd8);
  }
  lVar3 = FUN_18040db80(*(longlong *)plVar2[0x1f]);
  fVar7 = 0.0;
  fVar1 = *(float *)(lVar3 + 0x18);
  fVar5 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
  fVar6 = *(float *)(lVar3 + 0x18);
  if (fVar6 <= fVar5) {
    if (fVar6 <= *(float *)(plVar2[0x1f] + 0x30)) goto LAB_18058ad28;
    fVar6 = fVar6 - *(float *)(plVar2[0x1f] + 0x30);
  }
  else {
    fVar5 = *(float *)(plVar2[0x1f] + 0x30);
    fVar6 = (float)(**(code **)(*plVar2 + 0x90))(plVar2,0);
    fVar6 = fVar6 - fVar5;
  }
  fVar6 = fVar6 * (1.0 / fVar1);
  if ((0.0 <= fVar6) && (fVar7 = fVar6, 1.0 <= fVar6)) {
    fVar7 = 1.0;
  }
LAB_18058ad28:
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar6 = *(float *)(lVar3 + 0xc);
  *(float *)((longlong)plVar2 + 0xbc) = fVar7 * *(float *)(lVar3 + 8);
  *(float *)(plVar2 + 0x18) = fVar7 * fVar6;
  *(float *)((longlong)plVar2 + 0xc4) = fVar7 * fVar1;
  *(undefined4 *)(plVar2 + 0x19) = 0x7f7fffff;
  return;
}





