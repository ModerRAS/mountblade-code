#include "TaleWorlds.Native.Split.h"

/**
 * @file 03_rendering_part201.c
 * @brief 渲染系统高级数据处理和变换模块
 * 
 * 本模块包含5个核心函数，涵盖渲染系统高级数据处理、参数计算、
 * 状态管理、函数跳转和内存管理等高级渲染功能。
 * 
 * 主要功能：
 * - 渲染系统高级数据处理和变换
 * - 渲染系统高级参数计算和变换
 * - 渲染系统状态设置和管理
 * - 渲染系统函数跳转和路由
 * - 渲染系统高级数据处理和内存管理
 */

// 常量定义
#define RENDERING_SYSTEM_PARAM_SCALE_FACTOR 0.05f      // 渲染系统参数缩放因子
#define RENDERING_SYSTEM_PARAM_MULTIPLIER 0.9f          // 渲染系统参数乘数
#define RENDERING_SYSTEM_MEMORY_ALIGNMENT 0x28         // 渲染系统内存对齐大小
#define RENDERING_SYSTEM_BUFFER_SIZE 0x58              // 渲染系统缓冲区大小
#define RENDERING_SYSTEM_DATA_OFFSET 0x120             // 渲染系统数据偏移量
#define RENDERING_SYSTEM_OFFSET_STEP 0x10              // 渲染系统偏移步长
#define RENDERING_SYSTEM_MAX_ITERATIONS 7              // 渲染系统最大迭代次数

// 函数别名定义
#define RenderingSystemAdvancedDataProcessor FUN_180384a67              // 渲染系统高级数据处理器
#define RenderingSystemAdvancedParameterCalculator FUN_180384c38       // 渲染系统高级参数计算器
#define RenderingSystemStateSetter FUN_180384e7e                         // 渲染系统状态设置器
#define RenderingSystemFunctionRouter FUN_180384e9c                      // 渲染系统函数路由器
#define RenderingSystemAdvancedMemoryManager FUN_180384ed0               // 渲染系统高级内存管理器

// 辅助函数声明
void* FUN_180387860(void);
void* FUN_180387380(void);
void* FUN_180388290(void);
void* FUN_180388120(void);
void* FUN_180388040(void);
void* FUN_180387ed0(void);
void FUN_1808fc050(ulonglong param);
void FUN_18024fb60(void* param1, void* param2, void* param3);
void* FUN_18062b420(void* param1, longlong param2, char param3);
void* FUN_18062b1e0(void* param1, longlong param2, longlong param3, void* param4);
void FUN_18015b810(void* param1, longlong param2, longlong param3, longlong param4, ulonglong param5, void* param6);
longlong func_0x00018066bd70(longlong param);
void FUN_18064e900(void);

// 函数: void FUN_180384a67(void)
void FUN_180384a67(void)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar12;
  longlong unaff_RDI;
  ulonglong *puVar13;
  longlong unaff_R12;
  float *pfVar14;
  longlong lVar15;
  longlong unaff_R15;
  undefined8 extraout_XMM0_Qa;
  ulonglong in_stack_000001d0;
  
  puVar13 = (ulonglong *)(unaff_RDI + 0x3580);
  if ((*(byte *)(unaff_RBP + 0xc0) & 0x80) == 0) {
    lVar15 = 0x28;
    lVar12 = 0x28;
    do {
      puVar9 = (undefined8 *)unaff_RBX[2];
      puVar10 = unaff_RBX;
      if (puVar9 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar9[4] < *puVar13) {
            puVar9 = (undefined8 *)*puVar9;
          }
          else {
            puVar10 = puVar9;
            puVar9 = (undefined8 *)puVar9[1];
          }
        } while (puVar9 != (undefined8 *)0x0);
      }
      if ((puVar10 == unaff_RBX) || (*puVar13 < (ulonglong)puVar10[4])) {
        puVar10 = (undefined8 *)FUN_180387860();
        puVar10 = (undefined8 *)*puVar10;
      }
      if (*(longlong *)(lVar12 + (longlong)puVar10) == unaff_R12) goto FUN_180384e7e;
      lVar12 = lVar12 + 8;
    } while (lVar12 < 0x58);
    puVar9 = (undefined8 *)(unaff_R15 + 0xb0);
    pfVar14 = (float *)(unaff_R15 + 0x50);
    lVar12 = unaff_RBP - unaff_R15;
    do {
      puVar10 = (undefined8 *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar13) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860();
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar2 = *(int *)(*(longlong *)(lVar15 + (longlong)puVar11) + 0xc);
      iVar3 = *(int *)(*(longlong *)(lVar15 + (longlong)puVar11) + 0x10);
      puVar10 = (undefined8 *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar13) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860();
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar4 = *(int *)(*(longlong *)(lVar15 + (longlong)puVar11) + 0xc);
      iVar5 = *(int *)(*(longlong *)(lVar15 + (longlong)puVar11) + 0x10);
      puVar10 = (undefined8 *)unaff_RBX[2];
      puVar11 = unaff_RBX;
      if (puVar10 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar10[4] < *puVar13) {
            puVar10 = (undefined8 *)*puVar10;
          }
          else {
            puVar11 = puVar10;
            puVar10 = (undefined8 *)puVar10[1];
          }
        } while (puVar10 != (undefined8 *)0x0);
      }
      if ((puVar11 == unaff_RBX) || (*puVar13 < (ulonglong)puVar11[4])) {
        puVar11 = (undefined8 *)FUN_180387860();
        puVar11 = (undefined8 *)*puVar11;
      }
      iVar6 = *(int *)(*(longlong *)(lVar15 + (longlong)puVar11) + 0x10);
      fVar1 = *(float *)(*(longlong *)(lVar15 + (longlong)puVar11) + 4);
      puVar11 = (undefined8 *)unaff_RBX[2];
      puVar10 = unaff_RBX;
      if (puVar11 != (undefined8 *)0x0) {
        do {
          if ((ulonglong)puVar11[4] < *puVar13) {
            puVar11 = (undefined8 *)*puVar11;
          }
          else {
            puVar10 = puVar11;
            puVar11 = (undefined8 *)puVar11[1];
          }
        } while (puVar11 != (undefined8 *)0x0);
      }
      if ((puVar10 == unaff_RBX) || (*puVar13 < (ulonglong)puVar10[4])) {
        puVar10 = (undefined8 *)FUN_180387860();
        puVar10 = (undefined8 *)*puVar10;
      }
      puVar10 = (undefined8 *)(lVar15 + (longlong)puVar10);
      lVar15 = lVar15 + 8;
      *pfVar14 = 0.05 / (float)(int)((float *)*puVar10)[4] + *(float *)*puVar10;
      pfVar14[1] = 0.05 / (float)iVar6 + fVar1;
      pfVar14[2] = ((float)iVar4 * 0.9) / (float)iVar5;
      pfVar14[3] = ((float)iVar2 * 0.9) / (float)iVar3;
      pfVar14 = pfVar14 + 4;
      puVar10 = (undefined8 *)((longlong)puVar9 + lVar12 + 0x120);
      uVar7 = puVar10[1];
      *puVar9 = *puVar10;
      puVar9[1] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar9 + lVar12 + 0x130);
      uVar7 = puVar10[1];
      puVar9[2] = *puVar10;
      puVar9[3] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar9 + lVar12 + 0x140);
      uVar7 = puVar10[1];
      puVar9[4] = *puVar10;
      puVar9[5] = uVar7;
      puVar10 = (undefined8 *)((longlong)puVar9 + lVar12 + 0x150);
      uVar7 = puVar10[1];
      puVar9[6] = *puVar10;
      puVar9[7] = uVar7;
      puVar9 = puVar9 + 8;
    } while (lVar15 < 0x58);
  }
  else {
    plVar8 = (longlong *)FUN_180387380();
    if (*plVar8 == unaff_R12) {
FUN_180384e7e:
      *(int *)(unaff_R15 + 0x1c) = (int)unaff_R12;
    }
    else {
      plVar8 = (longlong *)FUN_180387380(extraout_XMM0_Qa,puVar13);
      iVar2 = *(int *)(*plVar8 + 0xc);
      iVar3 = *(int *)(*plVar8 + 0x10);
      plVar8 = (longlong *)FUN_180387380();
      iVar4 = *(int *)(*plVar8 + 0xc);
      iVar5 = *(int *)(*plVar8 + 0x10);
      plVar8 = (longlong *)FUN_180387380();
      iVar6 = *(int *)(*plVar8 + 0x10);
      fVar1 = *(float *)(*plVar8 + 4);
      puVar9 = (undefined8 *)FUN_180387380();
      *(float *)(unaff_R15 + 0x50) = 0.05 / (float)(int)((float *)*puVar9)[4] + *(float *)*puVar9;
      *(float *)(unaff_R15 + 0x54) = 0.05 / (float)iVar6 + fVar1;
      *(float *)(unaff_R15 + 0x58) = ((float)iVar4 * 0.9) / (float)iVar5;
      *(float *)(unaff_R15 + 0x5c) = ((float)iVar2 * 0.9) / (float)iVar3;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1d8);
      *(undefined8 *)(unaff_R15 + 0xb0) = *(undefined8 *)(unaff_RBP + 0x1d0);
      *(undefined8 *)(unaff_R15 + 0xb8) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1e8);
      *(undefined8 *)(unaff_R15 + 0xc0) = *(undefined8 *)(unaff_RBP + 0x1e0);
      *(undefined8 *)(unaff_R15 + 200) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x1f8);
      *(undefined8 *)(unaff_R15 + 0xd0) = *(undefined8 *)(unaff_RBP + 0x1f0);
      *(undefined8 *)(unaff_R15 + 0xd8) = uVar7;
      uVar7 = *(undefined8 *)(unaff_RBP + 0x208);
      *(undefined8 *)(unaff_R15 + 0xe0) = *(undefined8 *)(unaff_RBP + 0x200);
      *(undefined8 *)(unaff_R15 + 0xe8) = uVar7;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180384c38(void)
void FUN_180384c38(void)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar14;
  undefined8 *unaff_RSI;
  ulonglong *unaff_RDI;
  float *pfVar15;
  longlong unaff_R14;
  longlong unaff_R15;
  float unaff_XMM9_Da;
  ulonglong in_stack_000001d0;
  
  pfVar15 = (float *)(unaff_R15 + 0x50);
  lVar14 = unaff_RBP - unaff_R15;
  do {
    puVar13 = (undefined8 *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        if ((ulonglong)puVar13[4] < *unaff_RDI) {
          puVar13 = (undefined8 *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
      } while (puVar13 != (undefined8 *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (ulonglong)puVar12[4])) {
      puVar12 = (undefined8 *)FUN_180387860();
      puVar12 = (undefined8 *)*puVar12;
    }
    iVar3 = *(int *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 0xc);
    iVar4 = *(int *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 0x10);
    puVar13 = (undefined8 *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        if ((ulonglong)puVar13[4] < *unaff_RDI) {
          puVar13 = (undefined8 *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
      } while (puVar13 != (undefined8 *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (ulonglong)puVar12[4])) {
      puVar12 = (undefined8 *)FUN_180387860();
      puVar12 = (undefined8 *)*puVar12;
    }
    iVar5 = *(int *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 0xc);
    iVar6 = *(int *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 0x10);
    puVar13 = (undefined8 *)unaff_RBX[2];
    puVar12 = unaff_RBX;
    if (puVar13 != (undefined8 *)0x0) {
      do {
        if ((ulonglong)puVar13[4] < *unaff_RDI) {
          puVar13 = (undefined8 *)*puVar13;
        }
        else {
          puVar12 = puVar13;
          puVar13 = (undefined8 *)puVar13[1];
        }
      } while (puVar13 != (undefined8 *)0x0);
    }
    if ((puVar12 == unaff_RBX) || (*unaff_RDI < (ulonglong)puVar12[4])) {
      puVar12 = (undefined8 *)FUN_180387860();
      puVar12 = (undefined8 *)*puVar12;
    }
    iVar7 = *(int *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 0x10);
    fVar2 = *(float *)(*(longlong *)(unaff_R14 + (longlong)puVar12) + 4);
    puVar12 = (undefined8 *)unaff_RBX[2];
    puVar13 = unaff_RBX;
    if (puVar12 != (undefined8 *)0x0) {
      do {
        if ((ulonglong)puVar12[4] < *unaff_RDI) {
          puVar12 = (undefined8 *)*puVar12;
        }
        else {
          puVar13 = puVar12;
          puVar12 = (undefined8 *)puVar12[1];
        }
      } while (puVar12 != (undefined8 *)0x0);
    }
    if ((puVar13 == unaff_RBX) || (*unaff_RDI < (ulonglong)puVar13[4])) {
      puVar13 = (undefined8 *)FUN_180387860();
      puVar13 = (undefined8 *)*puVar13;
    }
    puVar13 = (undefined8 *)(unaff_R14 + (longlong)puVar13);
    unaff_R14 = unaff_R14 + 8;
    *pfVar15 = 0.05 / (float)(int)((float *)*puVar13)[4] + *(float *)*puVar13;
    pfVar15[1] = 0.05 / (float)iVar7 + fVar2;
    pfVar15[2] = ((float)iVar5 * unaff_XMM9_Da) / (float)iVar6;
    pfVar15[3] = ((float)iVar3 * unaff_XMM9_Da) / (float)iVar4;
    pfVar15 = pfVar15 + 4;
    puVar13 = (undefined8 *)((longlong)unaff_RSI + lVar14 + 0x120);
    uVar11 = puVar13[1];
    *unaff_RSI = *puVar13;
    unaff_RSI[1] = uVar11;
    puVar13 = (undefined8 *)((longlong)unaff_RSI + lVar14 + 0x130);
    uVar11 = puVar13[1];
    unaff_RSI[2] = *puVar13;
    unaff_RSI[3] = uVar11;
    puVar13 = (undefined8 *)((longlong)unaff_RSI + lVar14 + 0x140);
    uVar11 = puVar13[1];
    unaff_RSI[4] = *puVar13;
    unaff_RSI[5] = uVar11;
    puVar1 = (undefined4 *)((longlong)unaff_RSI + lVar14 + 0x150);
    uVar8 = puVar1[1];
    uVar9 = puVar1[2];
    uVar10 = puVar1[3];
    *(undefined4 *)(unaff_RSI + 6) = *puVar1;
    *(undefined4 *)((longlong)unaff_RSI + 0x34) = uVar8;
    *(undefined4 *)(unaff_RSI + 7) = uVar9;
    *(undefined4 *)((longlong)unaff_RSI + 0x3c) = uVar10;
    unaff_RSI = unaff_RSI + 8;
  } while (unaff_R14 < 0x58);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180384e7e(void)
void FUN_180384e7e(void)

{
  undefined4 unaff_R12D;
  longlong unaff_R15;
  ulonglong in_stack_000001d0;
  
  *(undefined4 *)(unaff_R15 + 0x1c) = unaff_R12D;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_180384e9c(void)
void FUN_180384e9c(void)

{
  ulonglong in_stack_000001d0;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_000001d0 ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180384ed0(longlong param_1,undefined8 param_2,longlong param_3)
void FUN_180384ed0(longlong param_1,undefined8 param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 *puVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  char acStackX_8 [8];
  longlong lStackX_18;
  undefined8 uStackX_20;
  undefined8 *puStack_128;
  undefined8 *puStack_120;
  undefined8 *puStack_118;
  undefined4 uStack_110;
  undefined8 **ppuStack_108;
  char *pcStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  longlong lStack_e8;
  longlong *aplStack_e0 [2];
  code *pcStack_d0;
  code *pcStack_c8;
  longlong **pplStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  undefined2 uStack_ac;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined1 uStack_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  undefined2 uStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined1 uStack_64;
  longlong lStack_50;
  undefined8 uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  acStackX_8[0] = *(char *)(param_3 + 0x20);
  puVar4 = (undefined8 *)0x0;
  uStack_b8 = 0;
  uStack_ac = 0xff00;
  uStack_a8 = 0;
  uStack_a0 = 0xffffffffffffffff;
  uStack_98 = 0xffffffff;
  uStack_94 = 0xff;
  uStack_90 = 0xffffffff;
  uStack_8c = 0;
  uStack_84 = 0x400;
  uStack_80 = 0;
  uStack_78 = 0;
  uStack_70 = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_b0 = 0;
  lVar6 = *(longlong *)(param_1 + 0x90);
  lStack_50 = lVar6 + 0x27f0;
  if (acStackX_8[0] == '\0') {
    lStack_50 = lVar6 + 0x2810;
  }
  (**(code **)(**(longlong **)(lVar6 + 0x27e8) + 0x1c8))
            (*(longlong **)(lVar6 + 0x27e8),param_3,lVar6,&DAT_180a00300,&uStack_b8);
  lVar6 = param_1 + 0x100;
  lVar5 = *(longlong *)(param_1 + 0x108);
  puStack_128 = (undefined8 *)0x0;
  puStack_120 = (undefined8 *)0x0;
  puStack_118 = (undefined8 *)0x0;
  uStack_110 = 3;
  lVar3 = lVar5;
  puVar7 = puVar4;
  if (lVar5 != lVar6) {
    do {
      lVar3 = func_0x00018066bd70(lVar3);
      puVar7 = (undefined8 *)((longlong)puVar7 + 1);
    } while (lVar3 != lVar6);
    if (puVar7 != (undefined8 *)0x0) {
      puVar4 = (undefined8 *)
               FUN_18062b420(_DAT_180c8ed18,(longlong)puVar7 * 8,(undefined1)uStack_110);
    }
  }
  puStack_120 = puVar4 + (longlong)puVar7;
  puStack_118 = puStack_120;
  puStack_128 = puVar4;
  for (; lVar5 != lVar6; lVar5 = func_0x00018066bd70(lVar5)) {
    *puVar4 = *(undefined8 *)(lVar5 + 0x20);
    puVar4 = puVar4 + 1;
  }
  if (*(int *)(_DAT_180c86920 + 0x1c0) == 0) {
    pplStack_c0 = aplStack_e0;
    ppuStack_108 = &puStack_128;
    pcStack_100 = acStackX_8;
    uStack_f8 = &lStackX_18;
    uStack_f0 = &uStackX_20;
    pcStack_d0 = FUN_180388290;
    pcStack_c8 = FUN_180388120;
    lStackX_18 = param_3;
    uStackX_20 = param_2;
    lStack_e8 = param_1;
    aplStack_e0[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
    *aplStack_e0[0] = (longlong)ppuStack_108;
    aplStack_e0[0][1] = (longlong)pcStack_100;
    *(undefined4 *)(aplStack_e0[0] + 2) = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)aplStack_e0[0] + 0x14) = uStack_f8._4_4_;
    *(undefined4 *)(aplStack_e0[0] + 3) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)aplStack_e0[0] + 0x1c) = uStack_f0._4_4_;
    aplStack_e0[0][4] = lStack_e8;
    lVar6 = (longlong)puStack_120 - (longlong)puStack_128;
  }
  else {
    if (*(int *)(_DAT_180c86920 + 0x1c0) != 1) goto LAB_1803851ae;
    pplStack_c0 = aplStack_e0;
    ppuStack_108 = &puStack_128;
    pcStack_100 = acStackX_8;
    uStack_f8 = &lStackX_18;
    uStack_f0 = &uStackX_20;
    pcStack_d0 = FUN_180388040;
    pcStack_c8 = FUN_180387ed0;
    lStackX_18 = param_3;
    uStackX_20 = param_2;
    lStack_e8 = param_1;
    aplStack_e0[0] = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,DAT_180bf65bc);
    *aplStack_e0[0] = (longlong)ppuStack_108;
    aplStack_e0[0][1] = (longlong)pcStack_100;
    *(undefined4 *)(aplStack_e0[0] + 2) = (undefined4)uStack_f8;
    *(undefined4 *)((longlong)aplStack_e0[0] + 0x14) = uStack_f8._4_4_;
    *(undefined4 *)(aplStack_e0[0] + 3) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)aplStack_e0[0] + 0x1c) = uStack_f0._4_4_;
    aplStack_e0[0][4] = lStack_e8;
    lVar6 = (longlong)puStack_120 - (longlong)puStack_128;
  }
  FUN_18015b810(aplStack_e0,0,lVar6 >> 3,0x40,0xffffffffffffffff,aplStack_e0);
LAB_1803851ae:
  lVar6 = *(longlong *)(param_1 + 0x90);
  if (((*(char *)(lVar6 + 0x563) != '\0') &&
      (lVar6 = *(longlong *)(lVar6 + 0x5b0) - *(longlong *)(lVar6 + 0x5a8),
      iVar2 = (int)(lVar6 >> 0x3f), iVar1 = (int)(lVar6 / 0xc) + iVar2,
      iVar1 != iVar2 && -1 < iVar1 - iVar2)) && (*(char *)(param_3 + 0x20) != '\0')) {
    FUN_18024fb60(*(undefined8 *)(param_1 + 0xa0),param_2,param_3);
  }
  if (puStack_128 == (undefined8 *)0x0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x000180385a6a)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



