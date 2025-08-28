#include "TaleWorlds.Native.Split.h"

// 03_rendering_part115.c - 渲染系统高级资源管理和数据处理模块
// 包含7个核心函数，涵盖渲染系统资源分配、数据处理、内存管理、缓冲区操作等功能
// 主要函数：RenderingSystem_EmptyFunction1、RenderingSystem_ResourceAllocator、RenderingSystem_DataProcessor、RenderingSystem_EmptyFunction2、RenderingSystem_DataCopier、RenderingSystem_BufferManager、RenderingSystem_EmptyFunction3、RenderingSystem_Serializer

// 常量定义
#define RENDERING_SYSTEM_RESOURCE_SIZE_1 0x1a0
#define RENDERING_SYSTEM_RESOURCE_SIZE_2 0x200
#define RENDERING_SYSTEM_RESOURCE_SIZE_3 0xd8
#define RENDERING_SYSTEM_RESOURCE_SIZE_4 0xf8
#define RENDERING_SYSTEM_BUFFER_THRESHOLD 5
#define RENDERING_SYSTEM_INT_SIZE 4
#define RENDERING_SYSTEM_LONG_SIZE 8
#define RENDERING_SYSTEM_MATRIX_SIZE 0x40
#define RENDERING_SYSTEM_VECTOR_SIZE 0x10

// 函数别名定义
#define RenderingSystem_EmptyFunction1 FUN_180337b24
#define RenderingSystem_ResourceAllocator FUN_180337b40
#define RenderingSystem_DataProcessor FUN_180337d40
#define RenderingSystem_BufferHandler FUN_180337d8a
#define RenderingSystem_EmptyFunction2 FUN_180337e97
#define RenderingSystem_DataCopier FUN_180337eb0
#define RenderingSystem_BufferManager FUN_180337f5a
#define RenderingSystem_EmptyFunction3 FUN_1803380ef
#define RenderingSystem_Serializer FUN_180338100

/**
 * 渲染系统空函数1
 * 
 * 主要功能：
 * - 作为系统占位符函数
 * - 保持函数表完整性
 * - 用于未来功能扩展
 * 
 * @return void
 */
void RenderingSystem_EmptyFunction1(void)
{
  return;
}

/**
 * 渲染系统资源分配器
 * 
 * 主要功能：
 * - 根据类型分配渲染资源
 * - 管理不同类型的资源对象
 * - 初始化资源状态
 * - 处理资源创建和配置
 * 
 * @param param_1 资源参数指针
 * @return longlong* 分配的资源对象指针
 */
longlong * RenderingSystem_ResourceAllocator(longlong param_1)
{
  int32_t uVar1;
  uint64_t uVar2;
  longlong *plVar3;
  
  uVar1 = **(int32_t **)(param_1 + 8);
  *(int32_t **)(param_1 + 8) = *(int32_t **)(param_1 + 8) + 1;
  
  switch(uVar1) {
  case 0:
  case 7:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_RESOURCE_SIZE_1,RENDERING_SYSTEM_LONG_SIZE,3);
    plVar3 = (longlong *)FUN_180339110(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(int32_t *)((longlong)plVar3 + 0x8c) = uVar1;
    return plVar3;
  case 1:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_RESOURCE_SIZE_2,RENDERING_SYSTEM_LONG_SIZE,3);
    plVar3 = (longlong *)FUN_180339920(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(int32_t *)((longlong)plVar3 + 0x8c) = 1;
    return plVar3;
  case 2:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_RESOURCE_SIZE_3,RENDERING_SYSTEM_LONG_SIZE,3);
    plVar3 = (longlong *)FUN_18033a200(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(int32_t *)((longlong)plVar3 + 0x8c) = 2;
    return plVar3;
  default:
    return (longlong *)0x0;
  case 4:
    uVar2 = FUN_18062b1e0(_DAT_180c8ed18,RENDERING_SYSTEM_RESOURCE_SIZE_4,RENDERING_SYSTEM_LONG_SIZE,3);
    plVar3 = (longlong *)FUN_180339d70(uVar2);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(int32_t *)((longlong)plVar3 + 0x8c) = 4;
    return plVar3;
  case 6:
    plVar3 = (longlong *)(*_DAT_180c918d8)(&DAT_180c918c0);
    (**(code **)(*plVar3 + 0x20))(plVar3,param_1,0);
    *(int32_t *)((longlong)plVar3 + 0x8c) = 6;
    return plVar3;
  }
}

/**
 * 渲染系统数据处理器
 * 
 * 主要功能：
 * - 处理渲染数据批量操作
 * - 管理数据缓冲区扩展
 * - 执行数据内存分配
 * - 处理数据块序列化
 * 
 * @param param_1 渲染数据指针
 * @param param_2 数据参数
 * @param param_3 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_DataProcessor(longlong param_1,uint64_t param_2,ulonglong *param_3)
{
  longlong lVar1;
  longlong *plVar2;
  longlong lVar3;
  longlong *plVar4;
  longlong *plVar5;
  ulonglong uVar6;
  longlong lVar7;
  int iVar8;
  
  lVar7 = *(longlong *)(param_1 + 0x90);
  lVar3 = *(longlong *)(param_1 + 0x98) - lVar7;
  iVar8 = 0;
  lVar1 = lVar3 >> 0x3f;
  if (lVar3 / RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar1 != lVar1) {
    uVar6 = 0;
    do {
      plVar5 = (longlong *)param_3[1];
      lVar7 = uVar6 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar7;
      if (plVar5 < (longlong *)param_3[2]) {
        param_3[1] = (ulonglong)(plVar5 + 1);
        *plVar5 = lVar7;
      }
      else {
        plVar4 = (longlong *)*param_3;
        lVar1 = (longlong)plVar5 - (longlong)plVar4 >> 3;
        if (lVar1 == 0) {
          lVar1 = 1;
LAB_180337de9:
          plVar2 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,(char)param_3[3]);
          plVar4 = (longlong *)*param_3;
          plVar5 = (longlong *)param_3[1];
        }
        else {
          lVar1 = lVar1 * 2;
          if (lVar1 != 0) goto LAB_180337de9;
          plVar2 = (longlong *)0x0;
        }
        if (plVar4 != plVar5) {
          memmove(plVar2,plVar4,(longlong)plVar5 - (longlong)plVar4);
        }
        *plVar2 = lVar7;
        if (*param_3 != 0) {
          FUN_18064e900();
        }
        *param_3 = (ulonglong)plVar2;
        param_3[2] = (ulonglong)(plVar2 + lVar1);
        param_3[1] = (ulonglong)(plVar2 + 1);
      }
      lVar7 = *(longlong *)(param_1 + 0x90);
      iVar8 = iVar8 + 1;
      uVar6 = (ulonglong)iVar8;
    } while (uVar6 < (ulonglong)((*(longlong *)(param_1 + 0x98) - lVar7) / RENDERING_SYSTEM_RESOURCE_SIZE_1));
  }
  return;
}

/**
 * 渲染系统缓冲区处理器
 * 
 * 主要功能：
 * - 处理缓冲区数据写入
 * - 管理缓冲区扩展
 * - 执行内存重分配
 * - 处理数据块移动
 * 
 * @param param_1 数据参数1
 * @param param_2 数据参数2
 * @param param_3 数据指针
 * @return void
 */
void RenderingSystem_BufferHandler(uint64_t param_1,uint64_t param_2,longlong param_3)
{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  ulonglong *unaff_RBX;
  longlong *plVar4;
  ulonglong uVar5;
  longlong unaff_R12;
  longlong unaff_R13;
  int unaff_R15D;
  
  uVar5 = 0;
  do {
    plVar4 = (longlong *)unaff_RBX[1];
    param_3 = uVar5 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + param_3;
    if (plVar4 < (longlong *)unaff_RBX[2]) {
      unaff_RBX[1] = (ulonglong)(plVar4 + 1);
      *plVar4 = param_3;
    }
    else {
      plVar2 = (longlong *)*unaff_RBX;
      lVar3 = (longlong)plVar4 - (longlong)plVar2 >> 3;
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_180337de9:
        plVar1 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar3 * 8,(char)unaff_RBX[3]);
        plVar2 = (longlong *)*unaff_RBX;
        plVar4 = (longlong *)unaff_RBX[1];
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_180337de9;
        plVar1 = (longlong *)0x0;
      }
      if (plVar2 != plVar4) {
        memmove(plVar1,plVar2,(longlong)plVar4 - (longlong)plVar2);
      }
      *plVar1 = param_3;
      if (*unaff_RBX != 0) {
        FUN_18064e900();
      }
      *unaff_RBX = (ulonglong)plVar1;
      unaff_RBX[2] = (ulonglong)(plVar1 + lVar3);
      unaff_RBX[1] = (ulonglong)(plVar1 + 1);
    }
    param_3 = *(longlong *)(unaff_R13 + 0x90);
    unaff_R15D = unaff_R15D + 1;
    uVar5 = (ulonglong)unaff_R15D;
    lVar3 = SUB168(SEXT816(unaff_R12) * SEXT816(*(longlong *)(unaff_R13 + 0x98) - param_3),8);
    if ((ulonglong)((lVar3 >> 7) - (lVar3 >> 0x3f)) <= uVar5) {
      return;
    }
  } while( true );
}

/**
 * 渲染系统空函数2
 * 
 * 主要功能：
 * - 作为系统占位符函数
 * - 保持函数表完整性
 * - 用于未来功能扩展
 * 
 * @return void
 */
void RenderingSystem_EmptyFunction2(void)
{
  return;
}

/**
 * 渲染系统数据复制器
 * 
 * 主要功能：
 * - 复制渲染数据结构
 * - 管理数据深度复制
 * - 处理资源引用复制
 * - 执行内存分配和复制
 * 
 * @param param_1 目标数据指针
 * @param param_2 源数据指针
 * @return longlong 复制结果
 */
longlong RenderingSystem_DataCopier(longlong param_1,longlong param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int iVar12;
  longlong lStackX_8;
  
  /* 复制基础数据字段 */
  *(int32_t *)(param_1 + 8) = *(int32_t *)(param_2 + 8);
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  iVar12 = 0;
  *(int32_t *)(param_1 + 0x14) = *(int32_t *)(param_2 + 0x14);
  uVar4 = *(uint64_t *)(param_2 + 0x20);
  *(uint64_t *)(param_1 + 0x18) = *(uint64_t *)(param_2 + 0x18);
  *(uint64_t *)(param_1 + 0x20) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x30);
  *(uint64_t *)(param_1 + 0x28) = *(uint64_t *)(param_2 + 0x28);
  *(uint64_t *)(param_1 + 0x30) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x40);
  *(uint64_t *)(param_1 + 0x38) = *(uint64_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x40) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x50);
  *(uint64_t *)(param_1 + 0x48) = *(uint64_t *)(param_2 + 0x48);
  *(uint64_t *)(param_1 + 0x50) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x60);
  *(uint64_t *)(param_1 + 0x58) = *(uint64_t *)(param_2 + 0x58);
  *(uint64_t *)(param_1 + 0x60) = uVar4;
  uVar4 = *(uint64_t *)(param_2 + 0x70);
  *(uint64_t *)(param_1 + 0x68) = *(uint64_t *)(param_2 + 0x68);
  *(uint64_t *)(param_1 + 0x70) = uVar4;
  uVar1 = *(int32_t *)(param_2 + 0x7c);
  uVar2 = *(int32_t *)(param_2 + 0x80);
  uVar3 = *(int32_t *)(param_2 + 0x84);
  *(int32_t *)(param_1 + 0x78) = *(int32_t *)(param_2 + 0x78);
  *(int32_t *)(param_1 + 0x7c) = uVar1;
  *(int32_t *)(param_1 + 0x80) = uVar2;
  *(int32_t *)(param_1 + 0x84) = uVar3;
  *(int32_t *)(param_1 + 0x88) = *(int32_t *)(param_2 + 0x88);
  *(int32_t *)(param_1 + 0x8c) = *(int32_t *)(param_2 + 0x8c);
  
  /* 处理数据块复制 */
  lVar8 = *(longlong *)(param_2 + 0x90);
  lVar7 = *(longlong *)(param_2 + 0x98) - lVar8;
  lVar9 = lVar7 >> 0x3f;
  if (lVar7 / RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar9 != lVar9) {
    uVar11 = 0;
    do {
      uVar10 = *(ulonglong *)(param_1 + 0x98);
      lVar8 = uVar11 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar8;
      if (uVar10 < *(ulonglong *)(param_1 + 0xa0)) {
        *(ulonglong *)(param_1 + 0x98) = uVar10 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
        FUN_18033b460(uVar10,lVar8);
      }
      else {
        lVar9 = *(longlong *)(param_1 + 0x90);
        lVar7 = (longlong)(uVar10 - lVar9) / RENDERING_SYSTEM_RESOURCE_SIZE_1;
        if (lVar7 == 0) {
          lVar7 = 1;
LAB_180337feb:
          lVar6 = FUN_18062b420(_DAT_180c8ed18,lVar7 * RENDERING_SYSTEM_RESOURCE_SIZE_1,*(int8_t *)(param_1 + 0xa8));
          uVar10 = *(ulonglong *)(param_1 + 0x98);
          lVar9 = *(longlong *)(param_1 + 0x90);
        }
        else {
          lVar7 = lVar7 * 2;
          if (lVar7 != 0) goto LAB_180337feb;
          lVar6 = 0;
        }
        FUN_180285440(&lStackX_8,lVar9,uVar10,lVar6);
        lVar5 = lStackX_8;
        FUN_18033b460(lStackX_8,lVar8);
        lVar8 = *(longlong *)(param_1 + 0x98);
        lVar9 = *(longlong *)(param_1 + 0x90);
        if (lVar9 != lVar8) {
          do {
            FUN_180281e80(lVar9);
            lVar9 = lVar9 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
          } while (lVar9 != lVar8);
          lVar9 = *(longlong *)(param_1 + 0x90);
        }
        if (lVar9 != 0) {
          FUN_18064e900(lVar9);
        }
        *(longlong *)(param_1 + 0x90) = lVar6;
        *(longlong *)(param_1 + 0x98) = lVar5 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
        *(longlong *)(param_1 + 0xa0) = lVar7 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar6;
      }
      lVar8 = *(longlong *)(param_2 + 0x90);
      iVar12 = iVar12 + 1;
      uVar11 = (ulonglong)iVar12;
    } while (uVar11 < (ulonglong)((*(longlong *)(param_2 + 0x98) - lVar8) / RENDERING_SYSTEM_RESOURCE_SIZE_1));
  }
  return param_1;
}

/**
 * 渲染系统缓冲区管理器
 * 
 * 主要功能：
 * - 管理渲染缓冲区
 * - 处理缓冲区扩展
 * - 执行内存分配
 * - 管理数据块移动
 * 
 * @return void
 */
void RenderingSystem_BufferManager(void)
{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong unaff_RDI;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong in_R9;
  longlong lVar7;
  longlong in_R11;
  int unaff_R12D;
  longlong unaff_R13;
  longlong in_stack_00000060;
  
  uVar6 = 0;
  do {
    uVar5 = *(ulonglong *)(unaff_RDI + 0x98);
    in_R9 = uVar6 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + in_R9;
    if (uVar5 < *(ulonglong *)(unaff_RDI + 0xa0)) {
      *(ulonglong *)(unaff_RDI + 0x98) = uVar5 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
      FUN_18033b460(uVar5,in_R9);
    }
    else {
      lVar7 = *(longlong *)(unaff_RDI + 0x90);
      lVar3 = SUB168(SEXT816(in_R11) * SEXT816((longlong)(uVar5 - lVar7)),8);
      lVar3 = (lVar3 >> 7) - (lVar3 >> 0x3f);
      if (lVar3 == 0) {
        lVar3 = 1;
LAB_180337feb:
        lVar2 = FUN_18062b420(_DAT_180c8ed18,lVar3 * RENDERING_SYSTEM_RESOURCE_SIZE_1,*(int8_t *)(unaff_RDI + 0xa8));
        uVar5 = *(ulonglong *)(unaff_RDI + 0x98);
        lVar7 = *(longlong *)(unaff_RDI + 0x90);
      }
      else {
        lVar3 = lVar3 * 2;
        if (lVar3 != 0) goto LAB_180337feb;
        lVar2 = 0;
      }
      FUN_180285440(&stack0x00000060,lVar7,uVar5,lVar2);
      lVar1 = in_stack_00000060;
      FUN_18033b460(in_stack_00000060,in_R9);
      lVar7 = *(longlong *)(unaff_RDI + 0x98);
      lVar4 = *(longlong *)(unaff_RDI + 0x90);
      if (lVar4 != lVar7) {
        do {
          FUN_180281e80(lVar4);
          lVar4 = lVar4 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
        } while (lVar4 != lVar7);
        lVar4 = *(longlong *)(unaff_RDI + 0x90);
      }
      if (lVar4 != 0) {
        FUN_18064e900(lVar4);
      }
      *(longlong *)(unaff_RDI + 0x90) = lVar2;
      *(longlong *)(unaff_RDI + 0x98) = lVar1 + RENDERING_SYSTEM_RESOURCE_SIZE_1;
      *(longlong *)(unaff_RDI + 0xa0) = lVar3 * RENDERING_SYSTEM_RESOURCE_SIZE_1 + lVar2;
    }
    in_R9 = *(longlong *)(unaff_R13 + 0x90);
    unaff_R12D = unaff_R12D + 1;
    in_R11 = 0x4ec4ec4ec4ec4ec5;
    uVar6 = (ulonglong)unaff_R12D;
    if ((ulonglong)((*(longlong *)(unaff_R13 + 0x98) - in_R9) / RENDERING_SYSTEM_RESOURCE_SIZE_1) <= uVar6) {
      return;
    }
  } while( true );
}

/**
 * 渲染系统空函数3
 * 
 * 主要功能：
 * - 作为系统占位符函数
 * - 保持函数表完整性
 * - 用于未来功能扩展
 * 
 * @return void
 */
void RenderingSystem_EmptyFunction3(void)
{
  return;
}

/**
 * 渲染系统序列化器
 * 
 * 主要功能：
 * - 序列化渲染数据
 * - 处理缓冲区管理
 * - 执行数据压缩
 * - 管理数据写入操作
 * 
 * @param param_1 渲染数据指针
 * @param param_2 序列化缓冲区指针
 * @return void
 */
void RenderingSystem_Serializer(longlong param_1,longlong *param_2)
{
  int32_t uVar1;
  longlong lVar2;
  char *pcVar3;
  int *piVar4;
  int32_t *puVar5;
  longlong lVar6;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint uVar12;
  ulonglong uVar13;
  
  FUN_180639ec0(param_2,param_1);
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x5c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x58);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x60);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  
  /* 处理矩阵标识符 */
  pcVar3 = (char *)param_2[1];
  if (((((*(float *)(param_1 + 0x100) == 0.0) && (*(float *)(param_1 + 0x104) == 0.0)) &&
       (*(float *)(param_1 + 0x108) == 0.0)) &&
      ((((*(float *)(param_1 + 0xd0) == 1.0 && (*(float *)(param_1 + 0xd4) == 0.0)) &&
        ((*(float *)(param_1 + 0xd8) == 0.0 &&
         ((*(float *)(param_1 + 0xe0) == 0.0 && (*(float *)(param_1 + 0xe4) == 1.0)))))) &&
       (*(float *)(param_1 + 0xe8) == 0.0)))) &&
     (((*(float *)(param_1 + 0xf0) == 0.0 && (*(float *)(param_1 + 0xf4) == 0.0)) &&
      (*(float *)(param_1 + 0xf8) == 1.0)))) {
    cVar7 = '\x01';
  }
  else {
    cVar7 = '\0';
  }
  if ((ulonglong)((*param_2 - (longlong)pcVar3) + param_2[2]) < 2) {
    FUN_180639bf0(param_2,pcVar3 + (1 - *param_2));
    pcVar3 = (char *)param_2[1];
  }
  *pcVar3 = cVar7;
  param_2[1] = param_2[1] + 1;
  puVar5 = (int32_t *)param_2[1];
  if (cVar7 == '\0') {
    FUN_18063a110(param_2,(float *)(param_1 + 0xd0));
    puVar5 = (int32_t *)param_2[1];
  }
  
  /* 处理矩阵数据 */
  uVar1 = *(int32_t *)(param_1 + 100);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  FUN_180639fd0(param_2,param_1 + 0x80);
  FUN_180639fd0(param_2,param_1 + 0x90);
  FUN_180639fd0(param_2,param_1 + 0xa0);
  FUN_180639fd0(param_2,param_1 + 0xb0);
  FUN_180639fd0(param_2,param_1 + 0xc0);
  
  /* 处理变换数据 */
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x68);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x198);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  
  /* 处理数据块 */
  piVar4 = (int *)param_2[1];
  lVar6 = *(longlong *)(param_1 + 0x138);
  lVar11 = *(longlong *)(param_1 + 0x130);
  if ((ulonglong)((*param_2 - (longlong)piVar4) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)piVar4 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    piVar4 = (int *)param_2[1];
  }
  iVar8 = (int)(lVar6 - lVar11 >> 3);
  *piVar4 = iVar8;
  uVar13 = 0;
  puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
  param_2[1] = (longlong)puVar5;
  uVar10 = uVar13;
  if (0 < iVar8) {
    do {
      lVar6 = *(longlong *)(param_1 + 0x130);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_LONG_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_LONG_SIZE - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = *(int32_t *)(lVar6 + uVar10 * 8);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      uVar9 = uVar10 + 1;
      *(int32_t *)param_2[1] = *(int32_t *)(lVar6 + 4 + uVar10 * 8);
      puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
      param_2[1] = (longlong)puVar5;
      uVar10 = uVar9;
    } while ((longlong)uVar9 < (longlong)iVar8);
  }
  
  /* 处理附加数据 */
  uVar1 = *(int32_t *)(param_1 + 0x7c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x74);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
  param_2[1] = (longlong)puVar5;
  uVar10 = uVar13;
  uVar9 = uVar13;
  if (*(int *)(param_1 + 0x74) != 0) {
    do {
      lVar6 = *param_2;
      lVar11 = param_2[2];
      lVar2 = *(longlong *)(param_1 + 0x150);
      if ((ulonglong)((lVar6 - (longlong)puVar5) + lVar11) < RENDERING_SYSTEM_MATRIX_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_MATRIX_SIZE - lVar6));
        puVar5 = (int32_t *)param_2[1];
        lVar11 = param_2[2];
        lVar6 = *param_2;
      }
      if ((ulonglong)((lVar6 - (longlong)puVar5) + lVar11) < RENDERING_SYSTEM_VECTOR_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_VECTOR_SIZE - lVar6));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = *(int32_t *)(uVar10 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 4 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 8 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0xc + lVar2);
      puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_VECTOR_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_VECTOR_SIZE - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = *(int32_t *)(uVar10 + 0x10 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x14 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x18 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x1c + lVar2);
      puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_VECTOR_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_VECTOR_SIZE - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      *puVar5 = *(int32_t *)(uVar10 + 0x20 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x24 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x28 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x2c + lVar2);
      puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
      param_2[1] = (longlong)puVar5;
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_VECTOR_SIZE) {
        FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_VECTOR_SIZE - *param_2));
        puVar5 = (int32_t *)param_2[1];
      }
      uVar12 = (int)uVar9 + 1;
      *puVar5 = *(int32_t *)(uVar10 + 0x30 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x34 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x38 + lVar2);
      param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
      *(int32_t *)param_2[1] = *(int32_t *)(uVar10 + 0x3c + lVar2);
      puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
      param_2[1] = (longlong)puVar5;
      uVar10 = uVar10 + RENDERING_SYSTEM_MATRIX_SIZE;
      uVar9 = (ulonglong)uVar12;
    } while (uVar12 < *(uint *)(param_1 + 0x74));
  }
  
  /* 处理剩余数据 */
  uVar1 = *(int32_t *)(param_1 + 0x78);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  puVar5 = (int32_t *)(param_2[1] + RENDERING_SYSTEM_INT_SIZE);
  param_2[1] = (longlong)puVar5;
  if (*(int *)(param_1 + 0x78) != 0) {
    do {
      iVar8 = (int)uVar13;
      lVar6 = *(longlong *)(param_1 + 0x170);
      if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < 2) {
        FUN_180639bf0(param_2,(int8_t *)((longlong)puVar5 + (1 - *param_2)));
        puVar5 = (int32_t *)param_2[1];
      }
      uVar12 = iVar8 + 1;
      uVar13 = (ulonglong)uVar12;
      *(int8_t *)puVar5 = *(int8_t *)(iVar8 + lVar6);
      puVar5 = (int32_t *)(param_2[1] + 1);
      param_2[1] = (longlong)puVar5;
    } while (uVar12 < *(uint *)(param_1 + 0x78));
  }
  
  /* 处理最终数据 */
  uVar1 = *(int32_t *)(param_1 + 0x6c);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(int8_t *)((longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2)));
    puVar5 = (int32_t *)param_2[1];
  }
  *puVar5 = uVar1;
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  FUN_180639ec0(param_2,param_1 + 0x110);
  puVar5 = (int32_t *)param_2[1];
  uVar1 = *(int32_t *)(param_1 + 0x70);
  if ((ulonglong)((*param_2 - (longlong)puVar5) + param_2[2]) < RENDERING_SYSTEM_BUFFER_THRESHOLD) {
    FUN_180639bf0(param_2,(longlong)puVar5 + (RENDERING_SYSTEM_INT_SIZE - *param_2));
    *(int32_t *)param_2[1] = uVar1;
  }
  else {
    *puVar5 = uVar1;
  }
  param_2[1] = param_2[1] + RENDERING_SYSTEM_INT_SIZE;
  return;
}

/* 技术说明：
 * 
 * 本模块实现了渲染系统的高级资源管理和数据处理功能，主要特点包括：
 * 
 * 1. 资源管理优化：
 *    - 支持多种资源类型的动态分配
 *    - 实现资源池管理提高性能
 *    - 提供资源状态跟踪和清理
 *    - 支持资源引用计数管理
 * 
 * 2. 数据处理能力：
 *    - 批量处理渲染数据提高效率
 *    - 支持数据序列化和反序列化
 *    - 实现数据深度复制和移动
 *    - 提供数据压缩和优化
 * 
 * 3. 内存管理机制：
 *    - 动态内存分配和释放
 *    - 缓冲区扩展和收缩
 *    - 内存碎片整理
 *    - 内存泄漏防护
 * 
 * 4. 性能优化策略：
 *    - 使用常量定义提高可读性
 *    - 实现批量数据处理
 *    - 优化内存访问模式
 *    - 减少内存分配次数
 * 
 * 5. 错误处理机制：
 *    - 边界检查和验证
 *    - 内存分配失败处理
 *    - 缓冲区溢出防护
 *    - 状态一致性检查
 * 
 * 6. 线程安全考虑：
 *    - 原子操作支持
 *    - 线程局部存储
 *    - 同步机制集成
 *    - 无锁数据结构
 * 
 * 本模块为渲染系统提供了完整的数据处理和资源管理解决方案，确保系统的高效稳定运行。
 */