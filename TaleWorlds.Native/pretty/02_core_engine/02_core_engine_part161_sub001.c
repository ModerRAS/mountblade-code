#include "TaleWorlds.Native.Split.h"
#include "../include/global_constants.h"

// 02_core_engine_part161_sub001.c - 核心引擎模块第161部分子文件1
// 包含7个函数，主要处理内存分配、数据复制和边界框计算等功能

#include "TaleWorlds.Native.Split.h"

// 函数: void FUN_18014ae70(int64_t param_1,int64_t *param_2,int64_t param_3,int64_t param_4)
// 功能: 调整数组大小并复制数据，处理内存重新分配
void resize_and_copy_array(int64_t param_1, int64_t *param_2, int64_t param_3, int64_t param_4)

{
  int64_t lVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  void *puVar6;
  
  lVar2 = *param_2;
  lVar1 = param_2[1];
  lVar3 = SUB168(SEXT816(in_RAX) * SEXT816(lVar1 - lVar2), 8);
  uVar5 = (lVar3 >> 3) - (lVar3 >> 0x3f);
  lVar3 = SUB168(SEXT816(param_4) * SEXT816(param_1 - param_3), 8);
  if ((uint64_t)((lVar3 >> 3) - (lVar3 >> 0x3f)) < uVar5) {
    if (uVar5 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = allocate_memory(system_memory_pool_ptr, uVar5 * 0x30, (char)unaff_RDI[3]);
    }
    if (lVar2 != lVar1) {
      // WARNING: Subroutine does not return
      memmove(lVar3, lVar2, lVar1 - lVar2);
    }
    if (*unaff_RDI != 0) {
      // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    *unaff_RDI = lVar3;
    lVar3 = uVar5 * 0x30 + lVar3;
    unaff_RDI[1] = lVar3;
    unaff_RDI[2] = lVar3;
  }
  else {
    lVar3 = SUB168(SEXT816(param_4) * SEXT816(unaff_RDI[1] - param_3), 8);
    uVar4 = (lVar3 >> 3) - (lVar3 >> 0x3f);
    if (uVar4 < uVar5) {
      lVar3 = uVar4 * 0x30 + lVar2;
      FUN_18014fb60(lVar2, lVar3);
      lVar2 = FUN_18014fb60(lVar3, lVar1, unaff_RDI[1]);
    }
    else {
      lVar2 = FUN_18014fb60(lVar2, lVar1);
    }
    unaff_RDI[1] = lVar2;
  }
  FUN_18014e160(unaff_RDI + 4, unaff_RSI + 0x20);
  if (unaff_RDI + 8 != (int64_t *)(unaff_RSI + 0x40)) {
    FUN_18014eff0(unaff_RDI + 8, *(int64_t *)(unaff_RSI + 0x40), *(uint64_t *)(unaff_RSI + 0x48));
  }
  *(int32_t *)(unaff_RDI + 0xe) = *(int32_t *)(unaff_RSI + 0x70);
  puVar6 = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 0x68) != (void *)0x0) {
    puVar6 = *(void **)(unaff_RSI + 0x68);
  }
  // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
  // WARNING: Treating indirect jump as call
  strcpy_s(unaff_RDI[0xd], 0x80, puVar6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014aec1(void)
// 功能: 初始化数组并设置默认值
void initialize_array_with_defaults(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t *unaff_RDI;
  void *puVar2;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  if (unaff_RBX == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = allocate_memory(system_memory_pool_ptr, unaff_RBX * 0x30, (char)unaff_RDI[3]);
  }
  if (unaff_R14 != unaff_R15) {
    // WARNING: Subroutine does not return
    memmove(lVar1);
  }
  if (*unaff_RDI != 0) {
    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *unaff_RDI = lVar1;
  lVar1 = unaff_RBX * 0x30 + lVar1;
  unaff_RDI[1] = lVar1;
  unaff_RDI[2] = lVar1;
  FUN_18014e160(unaff_RDI + 4, unaff_RSI + 0x20);
  if (unaff_RDI + 8 != (int64_t *)(unaff_RSI + 0x40)) {
    FUN_18014eff0(unaff_RDI + 8, *(int64_t *)(unaff_RSI + 0x40), *(uint64_t *)(unaff_RSI + 0x48));
  }
  *(int32_t *)(unaff_RDI + 0xe) = *(int32_t *)(unaff_RSI + 0x70);
  puVar2 = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 0x68) != (void *)0x0) {
    puVar2 = *(void **)(unaff_RSI + 0x68);
  }
  // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
  // WARNING: Treating indirect jump as call
  strcpy_s(unaff_RDI[0xd], 0x80, puVar2);
  return;
}





// 函数: void FUN_18014af28(uint64_t param_1,uint64_t param_2,int64_t param_3,int64_t param_4)
// 功能: 调整缓冲区大小并处理数据迁移
void adjust_buffer_size(uint64_t param_1, uint64_t param_2, int64_t param_3, int64_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  void *puVar4;
  int64_t unaff_R14;
  
  lVar2 = SUB168(SEXT816(param_4) * SEXT816(*(int64_t *)(unaff_RDI + 8) - param_3), 8);
  uVar3 = (lVar2 >> 3) - (lVar2 >> 0x3f);
  if (uVar3 < unaff_RBX) {
    FUN_18014fb60();
    uVar1 = FUN_18014fb60(uVar3 * 0x30 + unaff_R14);
  }
  else {
    uVar1 = FUN_18014fb60();
  }
  *(uint64_t *)(unaff_RDI + 8) = uVar1;
  FUN_18014e160(unaff_RDI + 0x20, unaff_RSI + 0x20);
  if ((uint64_t *)(unaff_RDI + 0x40) != (uint64_t *)(unaff_RSI + 0x40)) {
    FUN_18014eff0((uint64_t *)(unaff_RDI + 0x40), *(uint64_t *)(unaff_RSI + 0x40),
                  *(uint64_t *)(unaff_RSI + 0x48));
  }
  *(int32_t *)(unaff_RDI + 0x70) = *(int32_t *)(unaff_RSI + 0x70);
  puVar4 = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 0x68) != (void *)0x0) {
    puVar4 = *(void **)(unaff_RSI + 0x68);
  }
  // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
  // WARNING: Treating indirect jump as call
  strcpy_s(*(uint64_t *)(unaff_RDI + 0x68), 0x80, puVar4);
  return;
}





// 函数: void FUN_18014af8f(void)
// 功能: 复制结构体数据并更新指针
void copy_structure_data(void)

{
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  void *puVar1;
  
  FUN_18014e160(unaff_RDI + 0x20, unaff_RSI + 0x20);
  if ((uint64_t *)(unaff_RDI + 0x40) != (uint64_t *)(unaff_RSI + 0x40)) {
    FUN_18014eff0((uint64_t *)(unaff_RDI + 0x40), *(uint64_t *)(unaff_RSI + 0x40),
                  *(uint64_t *)(unaff_RSI + 0x48));
  }
  *(int32_t *)(unaff_RDI + 0x70) = *(int32_t *)(unaff_RSI + 0x70);
  puVar1 = &system_buffer_ptr;
  if (*(void **)(unaff_RSI + 0x68) != (void *)0x0) {
    puVar1 = *(void **)(unaff_RSI + 0x68);
  }
  // WARNING: Could not recover jumptable at 0x00018014afdc. Too many branches
  // WARNING: Treating indirect jump as call
  strcpy_s(*(uint64_t *)(unaff_RDI + 0x68), 0x80, puVar1);
  return;
}





// 函数: void FUN_18014aff0(uint64_t *param_1)
// 功能: 计算边界框并更新相关数据
void calculate_bounding_box(uint64_t *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int64_t lVar5;
  int64_t lVar6;
  float *pfVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint uVar10;
  int64_t lVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t uVar15;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  int32_t uStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  int32_t uStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  int32_t uStack_7c;
  uint64_t uStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  uint64_t uVar11;
  
  uVar9 = 0;
  fStack_b8 = -3.4028235e+38;
  fStack_b4 = -3.4028235e+38;
  fStack_b0 = -3.4028235e+38;
  uStack_7c = 0xff7fffff;
  lVar5 = param_1[8];
  fStack_c8 = -3.4028235e+38;
  fStack_c4 = -3.4028235e+38;
  fStack_c0 = -3.4028235e+38;
  fStack_d8 = 3.4028235e+38;
  fStack_d4 = 3.4028235e+38;
  fStack_d0 = 3.4028235e+38;
  uStack_cc = 0x7f7fffff;
  lVar12 = param_1[9] - lVar5 >> 0x3f;
  lVar14 = (param_1[9] - lVar5) / 0x88 + lVar12;
  uVar8 = uVar9;
  uVar13 = uVar9;
  fStack_a8 = fStack_b8;
  fStack_a4 = fStack_b4;
  fStack_a0 = fStack_b0;
  if (lVar14 != lVar12) {
    do {
      lVar6 = *(int64_t *)(lVar5 + 0x28 + uVar8);
      uVar15 = *(int64_t *)(lVar5 + 0x30 + uVar8) - lVar6 >> 4;
      if (uVar15 != 0) {
        pfVar7 = (float *)(lVar6 + 8);
        uVar11 = uVar9;
        do {
          fStack_a8 = pfVar7[-2];
          fStack_b8 = fStack_a8;
          if (fStack_d8 <= fStack_a8) {
            fStack_b8 = fStack_d8;
          }
          fStack_a4 = pfVar7[-1];
          fStack_b4 = fStack_a4;
          if (fStack_d4 <= fStack_a4) {
            fStack_b4 = fStack_d4;
          }
          fStack_a0 = *pfVar7;
          fStack_b0 = fStack_a0;
          if (fStack_d0 <= fStack_a0) {
            fStack_b0 = fStack_d0;
          }
          fStack_d8 = fStack_b8;
          fStack_d4 = fStack_b4;
          fStack_d0 = fStack_b0;
          uStack_cc = uStack_ac;
          if (fStack_a8 <= fStack_c8) {
            fStack_a8 = fStack_c8;
          }
          if (fStack_a4 <= fStack_c4) {
            fStack_a4 = fStack_c4;
          }
          if (fStack_a0 <= fStack_c0) {
            fStack_a0 = fStack_c0;
          }
          fStack_c8 = fStack_a8;
          fStack_c4 = fStack_a4;
          fStack_c0 = fStack_a0;
          uVar10 = (int)uVar11 + 1;
          uVar11 = (uint64_t)uVar10;
          pfVar7 = pfVar7 + 4;
          uStack_7c = uStack_9c;
        } while ((uint64_t)(int64_t)(int)uVar10 < uVar15);
      }
      uVar10 = (int)uVar13 + 1;
      uVar8 = uVar8 + 0x88;
      uVar13 = (uint64_t)uVar10;
      fStack_b8 = fStack_a8;
      fStack_b4 = fStack_a4;
      fStack_b0 = fStack_a0;
    } while ((uint64_t)(int64_t)(int)uVar10 < (uint64_t)(lVar14 - lVar12));
  }
  pfVar7 = (float *)*param_1;
  lVar5 = param_1[1] - (int64_t)pfVar7 >> 0x3f;
  lVar12 = (param_1[1] - (int64_t)pfVar7) / 0x30 + lVar5;
  uVar8 = uVar9;
  if (lVar12 != lVar5) {
    do {
      fVar1 = *pfVar7;
      fStack_b8 = pfVar7[1];
      fVar2 = pfVar7[5];
      fStack_b0 = pfVar7[3];
      fStack_a8 = fStack_b8;
      if (fVar2 <= fStack_b8) {
        fStack_a8 = fVar2;
      }
      fStack_b4 = pfVar7[2];
      fVar3 = pfVar7[7];
      fVar4 = pfVar7[6];
      fStack_a0 = fStack_b0;
      if (fVar3 <= fStack_b0) {
        fStack_a0 = fVar3;
      }
      fStack_a4 = fStack_b4;
      if (fVar4 <= fStack_b4) {
        fStack_a4 = fVar4;
      }
      fStack_a8 = fStack_a8 - fVar1;
      fStack_a0 = fStack_a0 - fVar1;
      fStack_a4 = fStack_a4 - fVar1;
      if (fStack_d8 <= fStack_a8) {
        fStack_a8 = fStack_d8;
      }
      if (fStack_d4 <= fStack_a4) {
        fStack_a4 = fStack_d4;
      }
      if (fStack_d0 <= fStack_a0) {
        fStack_a0 = fStack_d0;
      }
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      fStack_d0 = fStack_a0;
      uStack_cc = uStack_9c;
      if (fStack_b8 <= fVar2) {
        fStack_b8 = fVar2;
      }
      if (fStack_b0 <= fVar3) {
        fStack_b0 = fVar3;
      }
      if (fStack_b4 <= fVar4) {
        fStack_b4 = fVar4;
      }
      fStack_b8 = fStack_b8 + fVar1;
      fStack_b0 = fStack_b0 + fVar1;
      fStack_b4 = fStack_b4 + fVar1;
      if (fStack_b8 <= fStack_c8) {
        fStack_b8 = fStack_c8;
      }
      if (fStack_b4 <= fStack_c4) {
        fStack_b4 = fStack_c4;
      }
      if (fStack_b0 <= fStack_c0) {
        fStack_b0 = fStack_c0;
      }
      fStack_c8 = fStack_b8;
      fStack_c4 = fStack_b4;
      fStack_c0 = fStack_b0;
      uVar10 = (int)uVar8 + 1;
      pfVar7 = pfVar7 + 0xc;
      uVar8 = (uint64_t)uVar10;
      uStack_7c = uStack_ac;
    } while ((uint64_t)(int64_t)(int)uVar10 < (uint64_t)(lVar12 - lVar5));
  }
  lVar5 = param_1[4];
  uVar13 = param_1[5] - lVar5 >> 5;
  uVar8 = uVar9;
  if (uVar13 != 0) {
    do {
      fStack_b0 = *(float *)(lVar5 + uVar9);
      fStack_b8 = *(float *)(lVar5 + 4 + uVar9);
      fStack_b4 = *(float *)(lVar5 + 8 + uVar9);
      fVar1 = *(float *)(lVar5 + 0xc + uVar9);
      fStack_a8 = fStack_b8 - fStack_b0;
      fStack_a4 = fStack_b4 - fStack_b0;
      fStack_a0 = fVar1 - fStack_b0;
      if (fStack_d8 <= fStack_a8) {
        fStack_a8 = fStack_d8;
      }
      if (fStack_d4 <= fStack_a4) {
        fStack_a4 = fStack_d4;
      }
      if (fStack_d0 <= fStack_a0) {
        fStack_a0 = fStack_d0;
      }
      fStack_d8 = fStack_a8;
      fStack_d4 = fStack_a4;
      fStack_d0 = fStack_a0;
      uStack_cc = uStack_9c;
      fStack_b8 = fStack_b0 + fStack_b8;
      if (fStack_b8 <= fStack_c8) {
        fStack_b8 = fStack_c8;
      }
      fStack_b4 = fStack_b0 + fStack_b4;
      fStack_b0 = fStack_b0 + fVar1;
      if (fStack_b4 <= fStack_c4) {
        fStack_b4 = fStack_c4;
      }
      if (fStack_b0 <= fStack_c0) {
        fStack_b0 = fStack_c0;
      }
      fStack_c8 = fStack_b8;
      fStack_c4 = fStack_b4;
      fStack_c0 = fStack_b0;
      uVar10 = (int)uVar8 + 1;
      uVar9 = uVar9 + 0x20;
      uVar8 = (uint64_t)uVar10;
      uStack_7c = uStack_ac;
    } while ((uint64_t)(int64_t)(int)uVar10 < uVar13);
  }
  fStack_98 = fStack_d8;
  fStack_94 = fStack_d4;
  fStack_90 = fStack_d0;
  uStack_8c = uStack_cc;
  fStack_88 = fStack_b8;
  fStack_84 = fStack_b4;
  fStack_80 = fStack_b0;
  FUN_1800b9f60(&fStack_98);
  param_1[0x1f] = CONCAT44(fStack_94, fStack_98);
  param_1[0x20] = CONCAT44(uStack_8c, fStack_90);
  param_1[0x21] = CONCAT44(fStack_84, fStack_88);
  param_1[0x22] = CONCAT44(uStack_7c, fStack_80);
  param_1[0x23] = uStack_78;
  param_1[0x24] = uStack_70;
  *(int32_t *)(param_1 + 0x25) = uStack_68;
  return;
}





// 函数: void FUN_18014b01e(uint64_t param_1,int64_t param_2,uint64_t param_3)
// 功能: 处理边界框数据的详细计算和更新
void process_bounding_box_data(uint64_t param_1, int64_t param_2, uint64_t param_3)

{
  float fVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t in_RAX;
  int64_t in_RCX;
  float *pfVar8;
  uint uVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t unaff_RBX;
  int64_t lVar12;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint64_t unaff_RDI;
  uint64_t uVar13;
  uint64_t uVar14;
  int in_R10D;
  uint64_t in_R11;
  float fVar15;
  float fVar16;
  float fVar17;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  float fVar18;
  float fVar19;
  int32_t uVar20;
  float fVar21;
  float fVar22;
  int32_t uVar23;
  int32_t in_XMM2_Dc;
  int32_t in_XMM2_Dd;
  float fVar24;
  float fVar25;
  
  uVar23 = (int32_t)((uint64_t)param_3 >> 0x20);
  uVar20 = (int32_t)param_3;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  lVar2 = *(int64_t *)(in_RCX + 0x40);
  *(int32_t *)(unaff_RBP + -0x69) = uVar20;
  *(int32_t *)(unaff_RBP + -0x65) = uVar23;
  *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
  *(int *)(unaff_RBP + -0x79) = (int)param_1;
  *(int *)(unaff_RBP + -0x75) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(unaff_RBP + -0x71) = in_XMM0_Dc;
  *(int32_t *)(unaff_RBP + -0x6d) = in_XMM0_Dd;
  lVar10 = param_2 - lVar2 >> 0x3f;
  lVar12 = (param_2 - lVar2) / 0x88 + lVar10;
  if (lVar12 != lVar10) {
    uVar14 = in_R11 & 0xffffffff;
    do {
      lVar3 = *(int64_t *)(lVar2 + 0x28 + uVar14);
      uVar11 = in_R11 & 0xffffffff;
      uVar13 = *(int64_t *)(lVar2 + 0x30 + uVar14) - lVar3 >> 4;
      if (uVar13 != 0) {
        pfVar8 = (float *)(lVar3 + 8);
        do {
          fVar18 = pfVar8[-2];
          if (*(float *)(unaff_RBP + -0x79) <= fVar18) {
            *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x79);
          }
          else {
            *(float *)(unaff_RBP + -0x59) = fVar18;
          }
          fVar22 = pfVar8[-1];
          if (*(float *)(unaff_RBP + -0x75) <= fVar22) {
            *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x75);
          }
          else {
            *(float *)(unaff_RBP + -0x55) = fVar22;
          }
          fVar17 = *pfVar8;
          if (*(float *)(unaff_RBP + -0x71) <= fVar17) {
            *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x71);
          }
          else {
            *(float *)(unaff_RBP + -0x51) = fVar17;
          }
          *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + -0x59);
          *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + -0x51);
          if (fVar18 <= *(float *)(unaff_RBP + -0x69)) {
            *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x69);
          }
          else {
            *(float *)(unaff_RBP + -0x49) = fVar18;
          }
          if (fVar22 <= *(float *)(unaff_RBP + -0x65)) {
            *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x65);
          }
          else {
            *(float *)(unaff_RBP + -0x45) = fVar22;
          }
          if (fVar17 <= *(float *)(unaff_RBP + -0x61)) {
            *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x61);
          }
          else {
            *(float *)(unaff_RBP + -0x41) = fVar17;
          }
          uVar20 = *(int32_t *)(unaff_RBP + -0x49);
          uVar23 = *(int32_t *)(unaff_RBP + -0x45);
          in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x41);
          in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x3d);
          uVar9 = (int)uVar11 + 1;
          uVar11 = (uint64_t)uVar9;
          pfVar8 = pfVar8 + 4;
          *(int32_t *)(unaff_RBP + -0x69) = uVar20;
          *(int32_t *)(unaff_RBP + -0x65) = uVar23;
          *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
          *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
        } while ((uint64_t)(int64_t)(int)uVar9 < uVar13);
      }
      in_R10D = in_R10D + 1;
      uVar14 = uVar14 + 0x88;
    } while ((uint64_t)(int64_t)in_R10D < (uint64_t)(lVar12 - lVar10));
  }
  pfVar8 = (float *)*unaff_RSI;
  uVar14 = in_R11 & 0xffffffff;
  lVar2 = unaff_RSI[1] - (int64_t)pfVar8 >> 0x3f;
  lVar10 = (unaff_RSI[1] - (int64_t)pfVar8) / 0x30 + lVar2;
  if (lVar10 != lVar2) {
    do {
      fVar18 = *pfVar8;
      fVar22 = pfVar8[1];
      fVar17 = pfVar8[5];
      fVar19 = pfVar8[3];
      fVar16 = fVar22;
      if (fVar17 <= fVar22) {
        fVar16 = fVar17;
      }
      fVar21 = pfVar8[2];
      fVar25 = pfVar8[7];
      fVar1 = pfVar8[6];
      fVar24 = fVar19;
      if (fVar25 <= fVar19) {
        fVar24 = fVar25;
      }
      fVar15 = fVar21;
      if (fVar1 <= fVar21) {
        fVar15 = fVar1;
      }
      if (*(float *)(unaff_RBP + -0x79) <= fVar16 - fVar18) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar16 - fVar18;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar15 - fVar18) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar15 - fVar18;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar24 - fVar18) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar24 - fVar18;
      }
      if (fVar22 <= fVar17) {
        fVar22 = fVar17;
      }
      if (fVar19 <= fVar25) {
        fVar19 = fVar25;
      }
      *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + -0x49);
      *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + -0x41);
      if (fVar21 <= fVar1) {
        fVar21 = fVar1;
      }
      if (fVar22 + fVar18 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar22 + fVar18;
      }
      if (fVar21 + fVar18 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar21 + fVar18;
      }
      if (fVar19 + fVar18 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar19 + fVar18;
      }
      uVar20 = *(int32_t *)(unaff_RBP + -0x59);
      uVar23 = *(int32_t *)(unaff_RBP + -0x55);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x51);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x4d);
      uVar9 = (int)uVar14 + 1;
      uVar14 = (uint64_t)uVar9;
      pfVar8 = pfVar8 + 0xc;
      *(int32_t *)(unaff_RBP + -0x69) = uVar20;
      *(int32_t *)(unaff_RBP + -0x65) = uVar23;
      *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
    } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)(lVar10 - lVar2));
  }
  lVar2 = unaff_RSI[4];
  uVar11 = unaff_RSI[5] - lVar2 >> 5;
  uVar14 = in_R11;
  if (uVar11 != 0) {
    do {
      fVar18 = *(float *)(lVar2 + in_R11);
      fVar22 = *(float *)(lVar2 + 4 + in_R11);
      fVar17 = *(float *)(lVar2 + 8 + in_R11);
      fVar19 = *(float *)(lVar2 + 0xc + in_R11);
      fVar25 = fVar22 - fVar18;
      fVar16 = fVar17 - fVar18;
      fVar21 = fVar19 - fVar18;
      if (*(float *)(unaff_RBP + -0x79) <= fVar25) {
        *(float *)(unaff_RBP + -0x49) = *(float *)(unaff_RBP + -0x79);
      }
      else {
        *(float *)(unaff_RBP + -0x49) = fVar25;
      }
      if (*(float *)(unaff_RBP + -0x75) <= fVar16) {
        *(float *)(unaff_RBP + -0x45) = *(float *)(unaff_RBP + -0x75);
      }
      else {
        *(float *)(unaff_RBP + -0x45) = fVar16;
      }
      if (*(float *)(unaff_RBP + -0x71) <= fVar21) {
        *(float *)(unaff_RBP + -0x41) = *(float *)(unaff_RBP + -0x71);
      }
      else {
        *(float *)(unaff_RBP + -0x41) = fVar21;
      }
      fVar22 = fVar18 + fVar22;
      *(uint64_t *)(unaff_RBP + -0x79) = *(uint64_t *)(unaff_RBP + -0x49);
      *(uint64_t *)(unaff_RBP + -0x71) = *(uint64_t *)(unaff_RBP + -0x41);
      if (fVar22 <= *(float *)(unaff_RBP + -0x69)) {
        *(float *)(unaff_RBP + -0x59) = *(float *)(unaff_RBP + -0x69);
      }
      else {
        *(float *)(unaff_RBP + -0x59) = fVar22;
      }
      fVar17 = fVar18 + fVar17;
      fVar18 = fVar18 + fVar19;
      if (fVar17 <= *(float *)(unaff_RBP + -0x65)) {
        *(float *)(unaff_RBP + -0x55) = *(float *)(unaff_RBP + -0x65);
      }
      else {
        *(float *)(unaff_RBP + -0x55) = fVar17;
      }
      if (fVar18 <= *(float *)(unaff_RBP + -0x61)) {
        *(float *)(unaff_RBP + -0x51) = *(float *)(unaff_RBP + -0x61);
      }
      else {
        *(float *)(unaff_RBP + -0x51) = fVar18;
      }
      uVar20 = *(int32_t *)(unaff_RBP + -0x59);
      uVar23 = *(int32_t *)(unaff_RBP + -0x55);
      in_XMM2_Dc = *(int32_t *)(unaff_RBP + -0x51);
      in_XMM2_Dd = *(int32_t *)(unaff_RBP + -0x4d);
      uVar9 = (int)uVar14 + 1;
      in_R11 = in_R11 + 0x20;
      *(int32_t *)(unaff_RBP + -0x69) = uVar20;
      *(int32_t *)(unaff_RBP + -0x65) = uVar23;
      *(int32_t *)(unaff_RBP + -0x61) = in_XMM2_Dc;
      *(int32_t *)(unaff_RBP + -0x5d) = in_XMM2_Dd;
      uVar14 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 < uVar11);
  }
  *(int32_t *)(unaff_RBP + -0x39) = *(int32_t *)(unaff_RBP + -0x79);
  *(int32_t *)(unaff_RBP + -0x35) = *(int32_t *)(unaff_RBP + -0x75);
  *(int32_t *)(unaff_RBP + -0x31) = *(int32_t *)(unaff_RBP + -0x71);
  *(int32_t *)(unaff_RBP + -0x2d) = *(int32_t *)(unaff_RBP + -0x6d);
  *(int32_t *)(unaff_RBP + -0x29) = uVar20;
  *(int32_t *)(unaff_RBP + -0x25) = uVar23;
  *(int32_t *)(unaff_RBP + -0x21) = in_XMM2_Dc;
  *(int32_t *)(unaff_RBP + -0x1d) = in_XMM2_Dd;
  FUN_1800b9f60(unaff_RBP + -0x39);
  uVar4 = *(uint64_t *)(unaff_RBP + -0x31);
  uVar20 = *(int32_t *)(unaff_RBP + -9);
  uVar5 = *(uint64_t *)(unaff_RBP + -0x29);
  uVar6 = *(uint64_t *)(unaff_RBP + -0x21);
  unaff_RSI[0x1f] = *(uint64_t *)(unaff_RBP + -0x39);
  unaff_RSI[0x20] = uVar4;
  uVar4 = *(uint64_t *)(unaff_RBP + -0x19);
  uVar7 = *(uint64_t *)(unaff_RBP + -0x11);
  unaff_RSI[0x21] = uVar5;
  unaff_RSI[0x22] = uVar6;
  unaff_RSI[0x23] = uVar4;
  unaff_RSI[0x24] = uVar7;
  *(int32_t *)(unaff_RSI + 0x25) = uVar20;
  return;
}


