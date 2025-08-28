#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part143.c - 核心引擎模块第143部分
// 包含8个函数，主要涉及渲染状态管理、内存清理和初始化操作

// 函数: 处理渲染状态更新和边界检查
// 参数: 通过寄存器传递多个参数
// 功能: 更新渲染边界状态，处理碰撞检测，管理渲染队列
void update_render_state_with_bounds(void)

{
  int32_t *puVar1;
  float fVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong lVar5;
  int iVar6;
  int *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong lVar7;
  int iVar8;
  longlong unaff_R13;
  int unaff_R14D;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  float fStack0000000000000054;
  char in_stack_00000100;
  char in_stack_00000108;
  int8_t in_stack_00000110;
  float fStack0000000000000118;
  float fStack000000000000011c;
  
  uVar9 = (ulonglong)(unaff_ESI + 0x1b);
  lVar7 = SYSTEM_DATA_MANAGER_A;
  do {
    lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x1af8) + 0x210);
    iVar8 = unaff_ESI;
    if (unaff_ESI < 0) {
      iVar8 = *(int *)(lVar5 + 0xc);
    }
    iVar6 = *unaff_RBX + unaff_ESI;
    fVar12 = (*(float *)(lVar5 + 0x18) - *(float *)(lVar5 + 0x14)) *
             *(float *)((longlong)iVar8 * 0x1c + *(longlong *)(lVar5 + 0x38)) +
             *(float *)(lVar5 + 0x14) + *(float *)(unaff_RBP + 0x40);
    fStack0000000000000040 = fVar12 + 4.0;
    fStack0000000000000038 = fVar12 - 4.0;
    if (*(int *)(lVar7 + 0x1b2c) == iVar6) {
      *(int *)(lVar7 + 0x1b34) = iVar6;
    }
    if (*(int *)(lVar7 + 0x1b30) == iVar6) {
      *(int8_t *)(lVar7 + 0x1b3f) = 1;
    }
    lVar5 = *(longlong *)(lVar7 + 0x1af8);
    if (((((*(float *)(lVar5 + 0x22c) <= unaff_XMM7_Da && unaff_XMM7_Da != *(float *)(lVar5 + 0x22c)
           ) && (unaff_XMM8_Da < *(float *)(lVar5 + 0x234))) &&
         (*(float *)(lVar5 + 0x228) <= fStack0000000000000040 &&
          fStack0000000000000040 != *(float *)(lVar5 + 0x228))) &&
        (fStack0000000000000038 < *(float *)(lVar5 + 0x230))) ||
       (((iVar6 != 0 && (iVar6 == *(int *)(lVar7 + 0x1b2c))) || (*(char *)(lVar7 + 0x2e38) != '\0'))
       )) {
      in_stack_00000108 = '\0';
      in_stack_00000100 = '\0';
      if ((((*(byte *)(unaff_RBX + 1) & 2) == 0) &&
          ((FUN_18010f170(&stack0x00000038,iVar6,&stack0x00000108,&stack0x00000100,0),
           in_stack_00000108 != '\0' || (in_stack_00000100 != '\0')))) &&
         (*(int32_t *)(unaff_R13 + 0x1dcc) = 4, in_stack_00000100 != '\0')) {
        lVar5 = 0x1d;
        iVar8 = unaff_ESI;
        if ((*(byte *)(*(longlong *)(unaff_RBX + 0xe) + 8 + uVar9) & 2) != 0) {
          iVar8 = unaff_R14D;
        }
      }
      else {
        lVar5 = (ulonglong)(in_stack_00000108 != '\0') + 0x1b;
        iVar8 = unaff_R14D;
      }
      puVar1 = (int32_t *)(lVar7 + 0x1628 + (lVar5 + 10) * 0x10);
      uStack0000000000000048 = *puVar1;
      uStack000000000000004c = puVar1[1];
      uStack0000000000000050 = puVar1[2];
      fStack0000000000000054 = (float)puVar1[3] * *(float *)(lVar7 + 0x1628);
      fStack0000000000000030 = (float)(int)fVar12;
      fStack000000000000011c = *(float *)(unaff_RBP + 0x234);
      if (unaff_XMM7_Da <= *(float *)(unaff_RBP + 0x234)) {
        fStack000000000000011c = unaff_XMM7_Da;
      }
      fStack0000000000000034 = unaff_XMM8_Da + 1.0;
      if (unaff_XMM8_Da + 1.0 <= *(float *)(unaff_RBP + 0x22c)) {
        fStack0000000000000034 = *(float *)(unaff_RBP + 0x22c);
      }
      fStack0000000000000118 = fStack0000000000000030;
      uVar4 = func_0x000180121e20(&stack0x00000048);
      FUN_180293d20(*(uint64_t *)(unaff_RBP + 0x2e8),&stack0x00000030,&stack0x00000118,uVar4,
                    0x3f800000);
      lVar7 = SYSTEM_DATA_MANAGER_A;
      unaff_R14D = iVar8;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar9 = uVar9 + 0x1c;
  } while (unaff_ESI < unaff_RBX[4]);
  if (unaff_R14D != -1) {
    if ((*(char *)((longlong)unaff_RBX + 9) == '\0') && (iVar8 = 0, 0 < unaff_RBX[4] + 1)) {
      lVar5 = 0;
      do {
        iVar8 = iVar8 + 1;
        *(int32_t *)(lVar5 + 4 + *(longlong *)(unaff_RBX + 0xe)) =
             *(int32_t *)(lVar5 + *(longlong *)(unaff_RBX + 0xe));
        lVar5 = lVar5 + 0x1c;
      } while (iVar8 < unaff_RBX[4] + 1);
    }
    *(int8_t *)((longlong)unaff_RBX + 9) = 1;
    iVar8 = unaff_R14D + -1;
    in_stack_00000110 = 1;
    lVar5 = *(longlong *)(*(longlong *)(lVar7 + 0x1af8) + 0x210);
    fVar12 = ((*(float *)(lVar7 + 0x118) - *(float *)(lVar7 + 0x1b48)) + 4.0) -
             *(float *)(*(longlong *)(lVar7 + 0x1af8) + 0x40);
    if (iVar8 < 0) {
      iVar8 = *(int *)(lVar5 + 0xc);
    }
    fVar2 = *(float *)(lVar5 + 0x14);
    lVar3 = *(longlong *)(lVar5 + 0x38);
    fVar10 = *(float *)(lVar5 + 0x18) - fVar2;
    fVar11 = fVar10 * *(float *)((longlong)iVar8 * 0x1c + lVar3) + fVar2 +
             *(float *)(lVar7 + 0x1688);
    if (fVar11 <= fVar12) {
      fVar11 = fVar12;
    }
    if ((*(byte *)(unaff_RBX + 1) & 4) != 0) {
      iVar8 = unaff_R14D + 1;
      if (iVar8 < 0) {
        iVar8 = *(int *)(lVar5 + 0xc);
      }
      lVar5 = (longlong)iVar8 * 0x1c;
      fVar12 = (fVar10 * *(float *)(lVar5 + lVar3) + fVar2) - *(float *)(lVar7 + 0x1688);
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
    }
    FUN_1801342e0(unaff_R14D,lVar5,lVar3,fVar11);
  }
  *(int8_t *)((longlong)unaff_RBX + 9) = in_stack_00000110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 处理渲染状态更新的变体版本
// 参数: 通过寄存器传递多个参数
// 功能: 与update_render_state_with_bounds类似，但使用不同的寄存器布局
void update_render_state_variant(void)

{
  int32_t *puVar1;
  float fVar2;
  longlong lVar3;
  int32_t uVar4;
  longlong lVar5;
  int iVar6;
  int *unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  int iVar7;
  longlong unaff_R13;
  int unaff_R14D;
  ulonglong uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack0000000000000040;
  int32_t uStack0000000000000048;
  int32_t uStack000000000000004c;
  int32_t uStack0000000000000050;
  float fStack0000000000000054;
  char in_stack_00000100;
  char in_stack_00000108;
  int8_t in_stack_00000110;
  float fStack0000000000000118;
  float fStack000000000000011c;
  
  uVar8 = (ulonglong)(unaff_ESI + 0x1b);
  do {
    lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x210);
    iVar7 = unaff_ESI;
    if (unaff_ESI < 0) {
      iVar7 = *(int *)(lVar5 + 0xc);
    }
    iVar6 = *unaff_RBX + unaff_ESI;
    fVar11 = (*(float *)(lVar5 + 0x18) - *(float *)(lVar5 + 0x14)) *
             *(float *)((longlong)iVar7 * 0x1c + *(longlong *)(lVar5 + 0x38)) +
             *(float *)(lVar5 + 0x14) + *(float *)(unaff_RBP + 0x40);
    fStack0000000000000040 = fVar11 + 4.0;
    fStack0000000000000038 = fVar11 - 4.0;
    if (*(int *)(unaff_RDI + 0x1b2c) == iVar6) {
      *(int *)(unaff_RDI + 0x1b34) = iVar6;
    }
    if (*(int *)(unaff_RDI + 0x1b30) == iVar6) {
      *(int8_t *)(unaff_RDI + 0x1b3f) = 1;
    }
    lVar5 = *(longlong *)(unaff_RDI + 0x1af8);
    if (((((*(float *)(lVar5 + 0x22c) <= unaff_XMM7_Da && unaff_XMM7_Da != *(float *)(lVar5 + 0x22c)
           ) && (unaff_XMM8_Da < *(float *)(lVar5 + 0x234))) &&
         (*(float *)(lVar5 + 0x228) <= fStack0000000000000040 &&
          fStack0000000000000040 != *(float *)(lVar5 + 0x228))) &&
        (fStack0000000000000038 < *(float *)(lVar5 + 0x230))) ||
       (((iVar6 != 0 && (iVar6 == *(int *)(unaff_RDI + 0x1b2c))) ||
        (*(char *)(unaff_RDI + 0x2e38) != '\0')))) {
      in_stack_00000108 = '\0';
      in_stack_00000100 = '\0';
      if ((((*(byte *)(unaff_RBX + 1) & 2) == 0) &&
          ((FUN_18010f170(&stack0x00000038,iVar6,&stack0x00000108,&stack0x00000100,0),
           in_stack_00000108 != '\0' || (in_stack_00000100 != '\0')))) &&
         (*(int32_t *)(unaff_R13 + 0x1dcc) = 4, in_stack_00000100 != '\0')) {
        lVar5 = 0x1d;
        iVar7 = unaff_ESI;
        if ((*(byte *)(*(longlong *)(unaff_RBX + 0xe) + 8 + uVar8) & 2) != 0) {
          iVar7 = unaff_R14D;
        }
      }
      else {
        lVar5 = (ulonglong)(in_stack_00000108 != '\0') + 0x1b;
        iVar7 = unaff_R14D;
      }
      puVar1 = (int32_t *)(unaff_RDI + 0x1628 + (lVar5 + 10) * 0x10);
      uStack0000000000000048 = *puVar1;
      uStack000000000000004c = puVar1[1];
      uStack0000000000000050 = puVar1[2];
      fStack0000000000000054 = (float)puVar1[3] * *(float *)(unaff_RDI + 0x1628);
      fStack0000000000000030 = (float)(int)fVar11;
      fStack000000000000011c = *(float *)(unaff_RBP + 0x234);
      if (unaff_XMM7_Da <= *(float *)(unaff_RBP + 0x234)) {
        fStack000000000000011c = unaff_XMM7_Da;
      }
      fStack0000000000000034 = unaff_XMM8_Da + 1.0;
      if (unaff_XMM8_Da + 1.0 <= *(float *)(unaff_RBP + 0x22c)) {
        fStack0000000000000034 = *(float *)(unaff_RBP + 0x22c);
      }
      fStack0000000000000118 = fStack0000000000000030;
      uVar4 = func_0x000180121e20(&stack0x00000048);
      FUN_180293d20(*(uint64_t *)(unaff_RBP + 0x2e8),&stack0x00000030,&stack0x00000118,uVar4,
                    0x3f800000);
      unaff_RDI = SYSTEM_DATA_MANAGER_A;
      unaff_R14D = iVar7;
    }
    unaff_ESI = unaff_ESI + 1;
    uVar8 = uVar8 + 0x1c;
  } while (unaff_ESI < unaff_RBX[4]);
  if (unaff_R14D != -1) {
    if ((*(char *)((longlong)unaff_RBX + 9) == '\0') && (iVar7 = 0, 0 < unaff_RBX[4] + 1)) {
      lVar5 = 0;
      do {
        iVar7 = iVar7 + 1;
        *(int32_t *)(lVar5 + 4 + *(longlong *)(unaff_RBX + 0xe)) =
             *(int32_t *)(lVar5 + *(longlong *)(unaff_RBX + 0xe));
        lVar5 = lVar5 + 0x1c;
      } while (iVar7 < unaff_RBX[4] + 1);
    }
    *(int8_t *)((longlong)unaff_RBX + 9) = 1;
    iVar7 = unaff_R14D + -1;
    in_stack_00000110 = 1;
    lVar5 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x210);
    fVar11 = ((*(float *)(unaff_RDI + 0x118) - *(float *)(unaff_RDI + 0x1b48)) + 4.0) -
             *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x40);
    if (iVar7 < 0) {
      iVar7 = *(int *)(lVar5 + 0xc);
    }
    fVar2 = *(float *)(lVar5 + 0x14);
    lVar3 = *(longlong *)(lVar5 + 0x38);
    fVar9 = *(float *)(lVar5 + 0x18) - fVar2;
    fVar10 = fVar9 * *(float *)((longlong)iVar7 * 0x1c + lVar3) + fVar2 +
             *(float *)(unaff_RDI + 0x1688);
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    if ((*(byte *)(unaff_RBX + 1) & 4) != 0) {
      iVar7 = unaff_R14D + 1;
      if (iVar7 < 0) {
        iVar7 = *(int *)(lVar5 + 0xc);
      }
      lVar5 = (longlong)iVar7 * 0x1c;
      fVar11 = (fVar9 * *(float *)(lVar5 + lVar3) + fVar2) - *(float *)(unaff_RDI + 0x1688);
      if (fVar11 <= fVar10) {
        fVar10 = fVar11;
      }
    }
    FUN_1801342e0(unaff_R14D,lVar5,lVar3,fVar10);
  }
  *(int8_t *)((longlong)unaff_RBX + 9) = in_stack_00000110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}





// 函数: 处理特定渲染场景的状态更新
// 参数: 通过寄存器传递参数
// 功能: 更新特定渲染场景的状态，处理边界条件
void update_specific_render_scene(void)

{
  float fVar1;
  int in_EAX;
  longlong lVar2;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int iVar3;
  int unaff_R14D;
  float fVar4;
  float fVar5;
  float fVar6;
  float unaff_XMM9_Da;
  int8_t uStack0000000000000110;
  
  if ((*(char *)(unaff_RBX + 9) == '\0') && (iVar3 = 0, 0 < in_EAX + 1)) {
    lVar2 = 0;
    do {
      iVar3 = iVar3 + 1;
      *(int32_t *)(lVar2 + 4 + *(longlong *)(unaff_RBX + 0x38)) =
           *(int32_t *)(lVar2 + *(longlong *)(unaff_RBX + 0x38));
      lVar2 = lVar2 + 0x1c;
    } while (iVar3 < *(int *)(unaff_RBX + 0x10) + 1);
  }
  *(int8_t *)(unaff_RBX + 9) = 1;
  iVar3 = unaff_R14D + -1;
  uStack0000000000000110 = 1;
  lVar2 = *(longlong *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x210);
  fVar6 = ((*(float *)(unaff_RDI + 0x118) - *(float *)(unaff_RDI + 0x1b48)) + unaff_XMM9_Da) -
          *(float *)(*(longlong *)(unaff_RDI + 0x1af8) + 0x40);
  if (iVar3 < 0) {
    iVar3 = *(int *)(lVar2 + 0xc);
  }
  fVar1 = *(float *)(lVar2 + 0x14);
  fVar4 = *(float *)(lVar2 + 0x18) - fVar1;
  fVar5 = fVar4 * *(float *)((longlong)iVar3 * 0x1c + *(longlong *)(lVar2 + 0x38)) + fVar1 +
          *(float *)(unaff_RDI + 0x1688);
  if (fVar5 <= fVar6) {
    fVar5 = fVar6;
  }
  if ((*(byte *)(unaff_RBX + 4) & 4) != 0) {
    iVar3 = unaff_R14D + 1;
    if (iVar3 < 0) {
      iVar3 = *(int *)(lVar2 + 0xc);
    }
    fVar6 = (fVar4 * *(float *)((longlong)iVar3 * 0x1c + *(longlong *)(lVar2 + 0x38)) + fVar1) -
            *(float *)(unaff_RDI + 0x1688);
    if (fVar6 <= fVar5) {
      fVar5 = fVar6;
    }
  }
  FUN_1801342e0(unaff_R14D,fVar5);
  *(int8_t *)(unaff_RBX + 9) = uStack0000000000000110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}





// 函数: 重置渲染状态
// 参数: 通过寄存器传递参数
// 功能: 重置渲染相关的状态变量和缓冲区
void reset_render_state(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int8_t in_stack_00000110;
  
  *(int8_t *)(unaff_RBX + 9) = in_stack_00000110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}





// 函数: 清理渲染状态
// 参数: 通过寄存器传递参数
// 功能: 清理渲染状态，释放相关资源
void cleanup_render_state(void)

{
  longlong unaff_RBX;
  longlong unaff_RBP;
  int8_t in_stack_00000110;
  
  *(int8_t *)(unaff_RBX + 9) = in_stack_00000110;
  *(uint64_t *)(unaff_RBP + 0x210) = 0;
  *(int32_t *)(unaff_RBP + 0x20c) = 0;
  *(float *)(unaff_RBP + 0x100) =
       (float)(int)(*(float *)(unaff_RBP + 0x204) + *(float *)(unaff_RBP + 0x40));
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 初始化渲染参数
// 参数: param_1 - 整数参数，param_2 - 64位参数，param_3 - 无符号整数参数
// 功能: 根据参数初始化渲染设置，处理不同的渲染模式
void initialize_render_parameters(int render_mode, uint64_t context_handle, uint flags)

{
  longlong lVar1;
  uint uVar2;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  uVar2 = param_3 & 0xff ^ 1;
  *(int8_t *)(*(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8) + 0xb1) = 1;
  lVar1 = *(longlong *)(*(longlong *)(lVar1 + 0x1af8) + 0x210);
  if (lVar1 != 0) {
    if ((*(int *)(lVar1 + 0x10) == param_1) && (*(uint *)(lVar1 + 4) == uVar2)) {
      return;
    }
    FUN_180134b80();
  }
  if (param_1 != 1) {
    FUN_180134640(param_2,param_1,uVar2);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 重置渲染系统状态
// 功能: 重置渲染系统的全局状态，清理内存和缓冲区
void reset_render_system_state(void)

{
  uint64_t uVar1;
  longlong lVar2;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  *(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1dd0) = 0;
  *(uint64_t *)(lVar2 + 0x1dec) = 0;
  *(uint64_t *)(lVar2 + 0x1de0) = 0;
  *(int32_t *)(lVar2 + 0x1de8) = 0;
  *(uint64_t *)(lVar2 + 0x1df8) = 0;
  *(uint64_t *)(lVar2 + 0x1e00) = 0;
  *(uint64_t *)(lVar2 + 0x1e08) = 0;
  *(uint64_t *)(lVar2 + 0x1e10) = 0;
  *(int16_t *)(lVar2 + 0x1e18) = 0;
  *(int32_t *)(lVar2 + 0x1df4) = 0xffffffff;
  *(int8_t *)(lVar2 + 0x1e1a) = 0;
  *(int32_t *)(lVar2 + 0x1e34) = 0;
  *(uint64_t *)(lVar2 + 0x1e3c) = 0;
  *(int32_t *)(lVar2 + 0x1e38) = 0x7f7fffff;
  *(int32_t *)(lVar2 + 0x1e44) = 0xffffffff;
  uVar1 = SYSTEM_DATA_MANAGER_B;
  if (*(longlong *)(lVar2 + 0x1e50) != 0) {
    *(uint64_t *)(lVar2 + 0x1e48) = 0;
    *(int *)(lVar2 + 0x3a8) = *(int *)(lVar2 + 0x3a8) + -1;
                    // WARNING: Subroutine does not return
    FUN_180059ba0(*(longlong *)(lVar2 + 0x1e50),uVar1);
  }
  *(uint64_t *)(lVar2 + 0x1e58) = 0;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 获取渲染状态标志
// 返回值: 包含渲染状态信息的64位值
// 功能: 检查当前渲染状态，返回相应的状态标志
ulonglong get_render_status_flags(void)

{
  int iVar1;
  int32_t uVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong in_RAX;
  float fVar5;
  
  lVar4 = SYSTEM_DATA_MANAGER_A;
  lVar3 = *(longlong *)(SYSTEM_DATA_MANAGER_A + 0x1af8);
  iVar1 = *(int *)(lVar3 + 0x144);
  if ((((iVar1 == 0) || (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1b2c) == iVar1)) &&
      (*(char *)(SYSTEM_DATA_MANAGER_A + 0x120) != '\0')) &&
     ((iVar1 != 0 &&
      (*(int8_t *)(SYSTEM_DATA_MANAGER_A + 0x1b3d) = 0, *(int *)(lVar4 + 0x1b2c) == iVar1)))) {
    in_RAX = *(ulonglong *)(lVar3 + 0x220);
    uVar2 = *(int32_t *)((in_RAX - 4) + (longlong)*(int *)(lVar3 + 0x218) * 4);
    if ((*(char *)(lVar4 + 0x120) != '\0') &&
       (fVar5 = *(float *)(lVar4 + 0x38) * *(float *)(lVar4 + 0x38),
       in_RAX = in_RAX & 0xffffffffffffff00,
       fVar5 < *(float *)(lVar4 + 0x474) || fVar5 == *(float *)(lVar4 + 0x474))) {
      if (*(char *)(lVar4 + 0x1dd0) == '\0') {
        FUN_180135090();
        *(int *)(lVar4 + 0x1dec) = iVar1;
        *(int32_t *)(lVar4 + 0x1df0) = uVar2;
        *(int8_t *)(lVar4 + 0x1dd0) = 1;
        *(int32_t *)(lVar4 + 0x1dd4) = 0x25;
        *(int32_t *)(lVar4 + 0x1ddc) = 0;
      }
      uVar2 = *(int32_t *)(lVar4 + 0x1a90);
      *(int32_t *)(lVar4 + 0x1dd8) = uVar2;
      *(int8_t *)(lVar4 + 0x1dd1) = 1;
      *(uint *)(lVar3 + 0x148) = *(uint *)(lVar3 + 0x148) & 0xfffffffe;
      return CONCAT71((uint7)(uint3)((uint)uVar2 >> 8),1);
    }
  }
  return in_RAX & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 设置渲染上下文
// 参数: param_1 - 上下文句柄，param_2 - 参数数组指针
// 返回值: 操作结果状态码
// 功能: 设置渲染上下文，配置相关参数
longlong set_render_context(uint64_t context_handle, uint64_t *parameter_array)

{
  uint64_t *puVar1;
  longlong lVar2;
  int iVar3;
  
  lVar2 = SYSTEM_DATA_MANAGER_A;
  strncpy(SYSTEM_DATA_MANAGER_A + 0x1df8,&unknown_var_2304_ptr,0x21);
  *(int8_t *)(lVar2 + 0x1e18) = 0;
  FUN_18013de90(lVar2 + 0x1e48,0);
  puVar1 = (uint64_t *)(lVar2 + 0x1e58);
  *puVar1 = 0;
  *(uint64_t **)(lVar2 + 0x1de0) = puVar1;
  *puVar1 = *param_2;
  *(int32_t *)(lVar2 + 0x1de8) = 8;
  *(int32_t *)(lVar2 + 0x1df4) = *(int32_t *)(lVar2 + 0x1a90);
  iVar3 = *(int *)(lVar2 + 0x1a90);
  if ((*(int *)(lVar2 + 0x1e44) != iVar3) && (iVar3 = iVar3 + -1, *(int *)(lVar2 + 0x1e44) != iVar3)
     ) {
    return (ulonglong)(uint3)((uint)iVar3 >> 8) << 8;
  }
  return CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

// 函数: 获取渲染上下文
// 返回值: 渲染上下文指针，失败时返回0
// 功能: 获取当前的渲染上下文，验证上下文有效性
longlong get_render_context(void)

{
  longlong lVar1;
  int iVar2;
  float fVar3;
  
  lVar1 = SYSTEM_DATA_MANAGER_A;
  if (*(int *)(SYSTEM_DATA_MANAGER_A + 0x1df4) != -1) {
    iVar2 = strcmp(&unknown_var_2304_ptr,SYSTEM_DATA_MANAGER_A + 0x1df8);
    if (iVar2 == 0) {
      iVar2 = *(int *)(lVar1 + 0x1e30);
      fVar3 = (*(float *)(lVar1 + 0x1e28) - *(float *)(lVar1 + 0x1e20)) *
              (*(float *)(lVar1 + 0x1e2c) - *(float *)(lVar1 + 0x1e24));
      if (fVar3 < *(float *)(lVar1 + 0x1e38)) {
        *(float *)(lVar1 + 0x1e38) = fVar3;
        *(int32_t *)(lVar1 + 0x1e34) = 0xc00;
        *(int *)(lVar1 + 0x1e3c) = iVar2;
      }
      *(bool *)(lVar1 + 0x1e19) = *(int *)(lVar1 + 0x1e40) == iVar2;
      *(int32_t *)(lVar1 + 0x1e44) = *(int32_t *)(lVar1 + 0x1a90);
      if ((*(int *)(lVar1 + 0x1e40) == iVar2) &&
         (*(char *)((longlong)*(int *)(lVar1 + 0x1ddc) + 0x120 + lVar1) == '\0')) {
        *(int8_t *)(lVar1 + 0x1e1a) = 1;
        return lVar1 + 0x1de0;
      }
      *(int8_t *)(lVar1 + 0x1e1a) = 0;
      return lVar1 + 0x1de0;
    }
  }
  return 0;
}



// 函数: 初始化渲染数据结构
// 参数: param_1 - 要初始化的数据结构指针
// 返回值: 初始化后的数据结构指针
// 功能: 初始化渲染相关的数据结构，设置默认值
uint64_t * initialize_render_data_structure(uint64_t *data_structure)

{
  longlong lVar1;
  uint64_t *puVar2;
  
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(uint64_t *)((longlong)param_1 + 0x54) = 0;
  *(uint64_t *)((longlong)param_1 + 0x5c) = 0;
  *(int8_t *)((longlong)param_1 + 100) = 1;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 10) = 0xffffffff;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(uint64_t *)((longlong)param_1 + 0x8c) = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 0x11) = 0xffffffff;
  *(uint64_t *)((longlong)param_1 + 0x94) = 0;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  *(int8_t *)(param_1 + 0x14) = 4;
  *(byte *)((longlong)param_1 + 0xa1) = *(byte *)((longlong)param_1 + 0xa1) & 0xe0;
  puVar2 = param_1 + 0x18;
  lVar1 = 5;
  do {
    func_0x00018010e520(puVar2);
    puVar2 = puVar2 + 2;
    lVar1 = lVar1 + -1;
  } while (lVar1 != 0);
  *(int32_t *)(param_1 + 0x15) = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0xbc) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: 清理渲染资源
// 参数: param_1 - 资源管理器指针，param_2 - 清理参数，param_3 - 回调参数，param_4 - 附加参数
// 功能: 清理渲染相关的资源，释放内存，处理资源依赖关系
void cleanup_render_resources(longlong resource_manager, uint64_t cleanup_params, uint64_t callback_params, uint64_t additional_params)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  uint uVar4;
  ulonglong uVar5;
  int *piVar6;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  piVar6 = *(int **)(param_1 + 0x2df8);
  uVar3 = 0;
  uVar5 = uVar3;
  if (0 < *piVar6) {
    do {
      lVar1 = *(longlong *)(*(longlong *)(piVar6 + 2) + 8 + uVar3);
      if (lVar1 != 0) {
        FUN_18013ea00(*(uint64_t *)(lVar1 + 0x30));
        *(uint64_t *)(lVar1 + 0x30) = 0;
        *(uint64_t *)(lVar1 + 0x18) = 0;
        *(uint64_t *)(lVar1 + 0x10) = 0;
        lVar2 = *(longlong *)(lVar1 + 0x28);
        if (lVar2 == 0) {
          if (SYSTEM_DATA_MANAGER_A != 0) {
            *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
          }
                    // WARNING: Subroutine does not return
          FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar7);
        }
        if (SYSTEM_DATA_MANAGER_A != 0) {
          *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar2,SYSTEM_DATA_MANAGER_B,param_3,param_4,uVar7);
      }
      uVar4 = (int)uVar5 + 1;
      uVar3 = uVar3 + 0x10;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < *piVar6);
    piVar6 = *(int **)(param_1 + 0x2df8);
  }
  if (piVar6 == (int *)0x0) {
    *(uint64_t *)(param_1 + 0x2df8) = 0;
    return;
  }
  lVar1 = *(longlong *)(piVar6 + 10);
  if (lVar1 != 0) {
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(piVar6 + 6);
  if (lVar1 == 0) {
    lVar1 = *(longlong *)(piVar6 + 2);
    if (lVar1 == 0) {
      if (SYSTEM_DATA_MANAGER_A != 0) {
        *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
      }
                    // WARNING: Subroutine does not return
      FUN_180059ba0(piVar6,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
    }
    if (SYSTEM_DATA_MANAGER_A != 0) {
      *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
  }
  if (SYSTEM_DATA_MANAGER_A != 0) {
    *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) = *(int *)(SYSTEM_DATA_MANAGER_A + 0x3a8) + -1;
  }
                    // WARNING: Subroutine does not return
  FUN_180059ba0(lVar1,SYSTEM_DATA_MANAGER_B,param_3,param_4,0xfffffffffffffffe);
}



// WARNING: Removing unreachable block (ram,0x00018013b12c)
// WARNING: Removing unreachable block (ram,0x00018013b14a)
// WARNING: Removing unreachable block (ram,0x00018013b320)
// WARNING: Removing unreachable block (ram,0x00018013b1a7)
// WARNING: Removing unreachable block (ram,0x00018013b1b2)
// WARNING: Removing unreachable block (ram,0x00018013b1bb)
// WARNING: Removing unreachable block (ram,0x00018013b1c0)
// WARNING: Removing unreachable block (ram,0x00018013b1cc)
// WARNING: Removing unreachable block (ram,0x00018013b1ce)
// WARNING: Removing unreachable block (ram,0x00018013b1f0)
// WARNING: Removing unreachable block (ram,0x00018013b209)
// WARNING: Removing unreachable block (ram,0x00018013b210)
// WARNING: Removing unreachable block (ram,0x00018013b21b)
// WARNING: Removing unreachable block (ram,0x00018013b21f)
// WARNING: Removing unreachable block (ram,0x00018013b43a)
// WARNING: Removing unreachable block (ram,0x00018013b444)
// WARNING: Removing unreachable block (ram,0x00018013b230)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



