#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part630.c - 1 个函数

// 函数: void FUN_18061d2b5(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_18061d2b5(int64_t param_1,uint64_t param_2,uint64_t param_3,int64_t param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  char cVar10;
  int32_t *puVar11;
  int64_t lVar12;
  int32_t *puVar13;
  int64_t lVar14;
  uint64_t uVar15;
  int64_t *plVar16;
  int iVar17;
  uint64_t uVar18;
  int32_t *puVar19;
  uint64_t uVar20;
  int iVar21;
  uint64_t uVar22;
  int64_t lVar23;
  uint64_t uVar24;
  int64_t unaff_RDI;
  uint64_t uVar25;
  uint64_t uVar26;
  uint uVar27;
  int32_t uVar28;
  float fVar29;
  float fVar30;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int64_t *plStackX_20;
  uint64_t in_stack_00000078;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  
  if ((uint64_t)(param_1 / 0x60) < param_3) {
    FUN_180622130(unaff_RDI + 0x28,param_3 - param_1 / 0x60);
  }
  else {
    *(uint64_t *)(unaff_RDI + 0x30) = param_3 * 0x60 + param_4;
  }
  iVar21 = *(int *)(unaff_RDI + 0x1a8);
  uVar24 = 0;
  uVar20 = uVar24;
  uVar25 = uVar24;
  uVar28 = unaff_XMM6_Da;
  uVar4 = unaff_XMM6_Dc;
  if (0 < iVar21) {
    do {
      in_stack_00000088 = uVar4;
      in_stack_00000080 = uVar28;
      plVar3 = *(int64_t **)(uVar20 + *(int64_t *)(unaff_RDI + 0x48));
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x130))(plVar3,&plStackX_20);
      lVar14 = *(int64_t *)(unaff_RDI + 0x28);
      *(int32_t *)(uVar24 + lVar14) = *puVar11;
      *(int32_t *)(uVar24 + 4 + lVar14) = puVar11[1];
      *(int32_t *)(uVar24 + 8 + lVar14) = puVar11[2];
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x140))(plVar3,&stack0x00000030);
      lVar14 = *(int64_t *)(unaff_RDI + 0x28);
      *(int32_t *)(lVar14 + 0x10 + uVar24) = *puVar11;
      *(int32_t *)(lVar14 + 0x14 + uVar24) = puVar11[1];
      *(int32_t *)(lVar14 + 0x18 + uVar24) = puVar11[2];
      uVar28 = (**(code **)(*plVar3 + 0xf0))(plVar3);
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0xc + uVar24) = uVar28;
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x108))(plVar3,&stack0x0000003c);
      lVar14 = *(int64_t *)(unaff_RDI + 0x28);
      *(int32_t *)(lVar14 + 0x20 + uVar24) = *puVar11;
      *(int32_t *)(lVar14 + 0x24 + uVar24) = puVar11[1];
      *(int32_t *)(lVar14 + 0x28 + uVar24) = puVar11[2];
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar14 = *(int64_t *)(unaff_RDI + 0x28);
      *(int32_t *)(lVar14 + 0x30 + uVar24) = *puVar11;
      *(int32_t *)(lVar14 + 0x34 + uVar24) = puVar11[1];
      *(int32_t *)(lVar14 + 0x38 + uVar24) = puVar11[2];
      *(int32_t *)(lVar14 + 0x3c + uVar24) = puVar11[3];
      *(int32_t *)(lVar14 + 0x40 + uVar24) = puVar11[4];
      *(int32_t *)(lVar14 + 0x44 + uVar24) = puVar11[5];
      *(int32_t *)(lVar14 + 0x48 + uVar24) = puVar11[6];
      uVar28 = (**(code **)(*plVar3 + 0x1c8))(plVar3);
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0x1c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x1d8))(plVar3);
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0x2c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x118))(plVar3);
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0x4c + uVar24) = uVar28;
      uVar28 = (**(code **)(*plVar3 + 0x128))(plVar3);
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0x50 + uVar24) = uVar28;
      fVar29 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x168))(plVar3);
      *(float *)(*(int64_t *)(unaff_RDI + 0x28) + 0x54 + uVar24) = fVar29 * fVar30;
      fVar29 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      fVar30 = (float)(**(code **)(*plVar3 + 0x158))(plVar3);
      uVar24 = uVar24 + 0x60;
      *(float *)(*(int64_t *)(unaff_RDI + 0x28) + -8 + uVar24) = fVar29 * fVar30;
      uVar27 = (int)uVar25 + 1;
      plVar3[2] = (int64_t)(int)uVar25;
      iVar21 = *(int *)(unaff_RDI + 0x1a8);
      uVar20 = uVar20 + 8;
      uVar25 = (uint64_t)uVar27;
      uVar28 = in_stack_00000080;
      uVar4 = in_stack_00000088;
    } while ((int)uVar27 < iVar21);
  }
  uVar24 = 0;
  iVar17 = *(int *)(unaff_RDI + 0x1ac);
  if (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + iVar21) {
    lVar23 = (int64_t)iVar21 * 0x60;
    lVar14 = (int64_t)iVar21 * 8;
    do {
      plVar3 = *(int64_t **)(lVar14 + *(int64_t *)(unaff_RDI + 0x48));
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + 0xc + lVar23) = 0;
      lVar12 = *(int64_t *)(unaff_RDI + 0x28);
      *(uint64_t *)(lVar12 + 0x10 + lVar23) = 0;
      *(int32_t *)(lVar12 + 0x18 + lVar23) = 0;
      *(uint64_t *)(lVar12 + lVar23) = 0;
      *(int32_t *)(lVar12 + 8 + lVar23) = 0;
      *(int32_t *)(lVar12 + 0x1c + lVar23) = 0x7f7fffff;
      lVar12 = *(int64_t *)(unaff_RDI + 0x28);
      *(uint64_t *)(lVar12 + 0x20 + lVar23) = 0;
      *(int32_t *)(lVar12 + 0x28 + lVar23) = 0;
      *(int32_t *)(lVar12 + 0x2c + lVar23) = 0x7f7fffff;
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar12 = *(int64_t *)(unaff_RDI + 0x28);
      lVar14 = lVar14 + 8;
      lVar23 = lVar23 + 0x60;
      *(int32_t *)(lVar12 + -0x30 + lVar23) = *puVar11;
      *(int32_t *)(lVar12 + -0x2c + lVar23) = puVar11[1];
      *(int32_t *)(lVar12 + -0x28 + lVar23) = puVar11[2];
      *(int32_t *)(lVar12 + -0x24 + lVar23) = puVar11[3];
      *(int32_t *)(lVar12 + -0x20 + lVar23) = puVar11[4];
      *(int32_t *)(lVar12 + -0x1c + lVar23) = puVar11[5];
      *(int32_t *)(lVar12 + -0x18 + lVar23) = puVar11[6];
      *(int32_t *)(lVar12 + -0x14 + lVar23) = 0;
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + -0x10 + lVar23) = 0;
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + -0xc + lVar23) = 0x7f7fffff;
      *(int32_t *)(*(int64_t *)(unaff_RDI + 0x28) + -8 + lVar23) = 0x7f7fffff;
      lVar12 = (int64_t)iVar21;
      iVar21 = iVar21 + 1;
      plVar3[2] = lVar12;
      iVar17 = *(int *)(unaff_RDI + 0x1ac);
    } while (iVar21 < *(int *)(unaff_RDI + 0x1b0) + iVar17 + *(int *)(unaff_RDI + 0x1a8));
  }
  FUN_180621d60(unaff_RDI + 8,(int64_t)iVar17);
  lVar23 = *(int64_t *)(unaff_RDI + 0x10) - *(int64_t *)(unaff_RDI + 8);
  lVar14 = lVar23 >> 0x3f;
  uVar20 = uVar24;
  uVar25 = uVar24;
  if (lVar23 / 0x1c + lVar14 != lVar14) {
    do {
      plVar3 = *(int64_t **)
                (*(int64_t *)(unaff_RDI + 0x48) +
                (int64_t)(*(int *)(unaff_RDI + 0x1a8) + (int)uVar25) * 8);
      puVar11 = (int32_t *)(**(code **)(*plVar3 + 0x90))(plVar3,&stack0x00000048);
      lVar14 = *(int64_t *)(unaff_RDI + 8);
      uVar20 = uVar20 + 0x1c;
      uVar27 = (int)uVar25 + 1;
      *(int32_t *)(lVar14 + -0x1c + uVar20) = *puVar11;
      *(int32_t *)(lVar14 + -0x18 + uVar20) = puVar11[1];
      *(int32_t *)(lVar14 + -0x14 + uVar20) = puVar11[2];
      *(int32_t *)(lVar14 + -0x10 + uVar20) = puVar11[3];
      *(int32_t *)(lVar14 + -0xc + uVar20) = puVar11[4];
      *(int32_t *)(lVar14 + -8 + uVar20) = puVar11[5];
      *(int32_t *)(lVar14 + -4 + uVar20) = puVar11[6];
      uVar25 = (uint64_t)uVar27;
    } while ((uint64_t)(int64_t)(int)uVar27 <
             (uint64_t)((*(int64_t *)(unaff_RDI + 0x10) - lVar14) / 0x1c));
  }
  FUN_18033a920(unaff_RDI + 0x200,
                *(int64_t *)(unaff_RDI + 0x50) - *(int64_t *)(unaff_RDI + 0x48) >> 3);
  lVar14 = *(int64_t *)(unaff_RDI + 0xb0) - *(int64_t *)(unaff_RDI + 0xa8);
  uVar27 = *(int *)(unaff_RDI + 0x1b0) + *(int *)(unaff_RDI + 0x1ac) + *(int *)(unaff_RDI + 0x1a8);
  lVar14 = lVar14 / 6 + (lVar14 >> 0x3f);
  uVar20 = (uint64_t)(int)uVar27;
  uVar25 = (lVar14 >> 2) - (lVar14 >> 0x3f);
  if (uVar25 < uVar20) {
    FUN_1806223a0(unaff_RDI + 0xa8,uVar20 - uVar25);
  }
  else {
    *(uint64_t *)(unaff_RDI + 0xb0) = *(int64_t *)(unaff_RDI + 0xa8) + uVar20 * 0x18;
  }
  lVar14 = *(int64_t *)(unaff_RDI + 200);
  uVar25 = *(int64_t *)(unaff_RDI + 0xd0) - lVar14 >> 5;
  if (uVar25 < uVar20) {
    FUN_180622500((int64_t *)(unaff_RDI + 200),uVar20 - uVar25);
  }
  else {
    *(uint64_t *)(unaff_RDI + 0xd0) = uVar20 * 0x20 + lVar14;
  }
  uVar25 = (*(int64_t *)(unaff_RDI + 0xf0) - *(int64_t *)(unaff_RDI + 0xe8)) / 0x70;
  if (uVar25 < uVar20) {
    FUN_1806226d0(unaff_RDI + 0xe8,uVar20 - uVar25);
  }
  else {
    *(uint64_t *)(unaff_RDI + 0xf0) = uVar20 * 0x70 + *(int64_t *)(unaff_RDI + 0xe8);
  }
  uVar18 = *(uint64_t *)(unaff_RDI + 0x128);
  uVar25 = *(uint64_t *)(unaff_RDI + 0x130);
  uVar15 = (int64_t)(uVar25 - uVar18) >> 3;
  if (uVar15 < uVar20) {
    uVar22 = uVar20 - uVar15;
    if ((uint64_t)((int64_t)(*(int64_t *)(unaff_RDI + 0x138) - uVar25) >> 3) < uVar22) {
      uVar26 = uVar15 * 2;
      if (uVar15 == 0) {
        uVar26 = 1;
      }
      if (uVar26 < uVar20) {
        uVar26 = uVar20;
      }
      uVar15 = uVar25;
      uVar25 = uVar24;
      if (uVar26 != 0) {
        uVar25 = FUN_18062b420(system_memory_pool_ptr,uVar26 * 8,*(int8_t *)(unaff_RDI + 0x140));
        uVar18 = *(uint64_t *)(unaff_RDI + 0x128);
        uVar15 = *(uint64_t *)(unaff_RDI + 0x130);
      }
      if (uVar18 != uVar15) {
                    // WARNING: Subroutine does not return
        memmove(uVar25,uVar18,uVar15 - uVar18);
      }
      if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
        memset(uVar25,0,uVar22 * 8);
      }
      if (*(int64_t *)(unaff_RDI + 0x128) != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *(uint64_t *)(unaff_RDI + 0x128) = uVar25;
      *(uint64_t *)(unaff_RDI + 0x138) = uVar25 + uVar26 * 8;
    }
    else if (uVar22 != 0) {
                    // WARNING: Subroutine does not return
      memset(uVar25,0,uVar22 * 8);
    }
  }
  else {
    uVar25 = uVar18 + uVar20 * 8;
  }
  *(uint64_t *)(unaff_RDI + 0x130) = uVar25;
  uVar24 = (*(int64_t *)(unaff_RDI + 0x110) - *(int64_t *)(unaff_RDI + 0x108)) / 0x30;
  if (uVar24 < uVar20) {
    FUN_180622920(unaff_RDI + 0x108,uVar20 - uVar24);
  }
  else {
    *(uint64_t *)(unaff_RDI + 0x110) = uVar20 * 0x30 + *(int64_t *)(unaff_RDI + 0x108);
  }
  lVar14 = *(int64_t *)(unaff_RDI + 0x68);
  uVar24 = (uint64_t)(int)(uVar27 * 4);
  if ((uint64_t)(*(int64_t *)(unaff_RDI + 0x78) - lVar14 >> 5) < uVar24) {
    if (uVar24 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(system_memory_pool_ptr,uVar24 << 5,*(int8_t *)(unaff_RDI + 0x80));
      lVar14 = *(int64_t *)(unaff_RDI + 0x68);
    }
    if (lVar14 != *(int64_t *)(unaff_RDI + 0x70)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(int64_t *)(unaff_RDI + 0x70) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(int64_t *)(unaff_RDI + 0x68) = lVar23;
    *(int64_t *)(unaff_RDI + 0x70) = lVar23;
    *(uint64_t *)(unaff_RDI + 0x78) = uVar24 * 0x20 + lVar23;
  }
  lVar14 = *(int64_t *)(unaff_RDI + 0x88);
  if ((uint64_t)(*(int64_t *)(unaff_RDI + 0x98) - lVar14 >> 6) < uVar24) {
    if (uVar24 == 0) {
      puVar11 = (int32_t *)0x0;
    }
    else {
      puVar11 = (int32_t *)
                FUN_18062b420(system_memory_pool_ptr,uVar24 << 6,*(int8_t *)(unaff_RDI + 0xa0));
      lVar14 = *(int64_t *)(unaff_RDI + 0x88);
    }
    lVar23 = *(int64_t *)(unaff_RDI + 0x90);
    puVar13 = puVar11;
    if (lVar14 != lVar23) {
      lVar14 = lVar14 - (int64_t)puVar11;
      puVar19 = puVar11 + 5;
      do {
        puVar1 = puVar19 + 0x10;
        *puVar13 = *(int32_t *)(lVar14 + -0x14 + (int64_t)puVar19);
        puVar13 = puVar13 + 0x10;
        puVar19[-4] = *(int32_t *)(lVar14 + -0x50 + (int64_t)puVar1);
        puVar19[-3] = *(int32_t *)(lVar14 + -0x4c + (int64_t)puVar1);
        puVar19[-2] = *(int32_t *)(lVar14 + -0x48 + (int64_t)puVar1);
        puVar19[-1] = *(int32_t *)(lVar14 + -0x44 + (int64_t)puVar1);
        *puVar19 = *(int32_t *)(lVar14 + -0x40 + (int64_t)puVar1);
        puVar19[1] = *(int32_t *)(lVar14 + -0x3c + (int64_t)puVar1);
        puVar19[2] = *(int32_t *)(lVar14 + -0x38 + (int64_t)puVar1);
        puVar19[3] = *(int32_t *)(lVar14 + -0x34 + (int64_t)puVar1);
        puVar19[4] = *(int32_t *)(lVar14 + -0x30 + (int64_t)puVar1);
        puVar19[5] = *(int32_t *)(lVar14 + -0x2c + (int64_t)puVar1);
        puVar19[6] = *(int32_t *)(lVar14 + -0x28 + (int64_t)puVar1);
        *(int8_t *)(puVar19 + 7) = *(int8_t *)(lVar14 + -0x24 + (int64_t)puVar1);
        *(int16_t *)((int64_t)puVar19 + 0x1e) =
             *(int16_t *)(lVar14 + -0x22 + (int64_t)puVar1);
        puVar19[8] = *(int32_t *)(lVar14 + -0x20 + (int64_t)puVar1);
        puVar19[9] = *(int32_t *)(lVar14 + -0x1c + (int64_t)puVar1);
        puVar19[10] = *(int32_t *)(lVar14 + -0x18 + (int64_t)puVar1);
        lVar12 = (int64_t)puVar19 + lVar14 + 0x2c;
        puVar19 = puVar1;
      } while (lVar12 != lVar23);
      lVar14 = *(int64_t *)(unaff_RDI + 0x88);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    *(int32_t **)(unaff_RDI + 0x88) = puVar11;
    *(int32_t **)(unaff_RDI + 0x90) = puVar13;
    *(int32_t **)(unaff_RDI + 0x98) = puVar11 + uVar24 * 0x10;
  }
  lVar14 = *(int64_t *)(unaff_RDI + 0x188);
  uVar20 = (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3) + uVar24;
  if ((uint64_t)((*(int64_t *)(unaff_RDI + 0x198) - lVar14) / 0x30) < uVar20) {
    if (uVar20 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(system_memory_pool_ptr,uVar20 * 0x30,*(int8_t *)(unaff_RDI + 0x1a0));
      lVar14 = *(int64_t *)(unaff_RDI + 0x188);
    }
    if (lVar14 != *(int64_t *)(unaff_RDI + 400)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(int64_t *)(unaff_RDI + 400) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar14);
    }
    *(int64_t *)(unaff_RDI + 0x188) = lVar23;
    *(int64_t *)(unaff_RDI + 400) = lVar23;
    *(uint64_t *)(unaff_RDI + 0x198) = uVar20 * 0x30 + lVar23;
  }
  lVar14 = *(int64_t *)(unaff_RDI + 0x148);
  uVar24 = (*(int64_t *)(unaff_RDI + 0x1c8) - *(int64_t *)(unaff_RDI + 0x1c0) >> 3) + uVar24;
  if ((uint64_t)(*(int64_t *)(unaff_RDI + 0x158) - lVar14 >> 3) < uVar24) {
    if (uVar24 == 0) {
      lVar23 = 0;
    }
    else {
      lVar23 = FUN_18062b420(system_memory_pool_ptr,uVar24 * 8,*(int8_t *)(unaff_RDI + 0x160));
      lVar14 = *(int64_t *)(unaff_RDI + 0x148);
    }
    if (lVar14 != *(int64_t *)(unaff_RDI + 0x150)) {
                    // WARNING: Subroutine does not return
      memmove(lVar23,lVar14,*(int64_t *)(unaff_RDI + 0x150) - lVar14);
    }
    if (lVar14 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    *(int64_t *)(unaff_RDI + 0x148) = lVar23;
    *(uint64_t *)(unaff_RDI + 0x158) = lVar23 + uVar24 * 8;
    *(int64_t *)(unaff_RDI + 0x150) = lVar23;
  }
  if (uVar27 != 0) {
    uVar24 = (uint64_t)uVar27;
    lVar14 = 0;
    lVar23 = 0;
    do {
      plVar3 = *(int64_t **)(lVar14 + *(int64_t *)(unaff_RDI + 0x48));
      cVar10 = (**(code **)(*plVar3 + 0x20))(plVar3,&unknown_var_2112_ptr);
      plVar16 = (int64_t *)0x0;
      if (cVar10 != '\0') {
        plVar16 = plVar3;
      }
      (**(code **)(*plVar16 + 0xb8))(plVar16,&plStackX_20,1);
      *(int64_t **)(lVar14 + *(int64_t *)(unaff_RDI + 0x128)) = plStackX_20;
      puVar13 = (int32_t *)(**(code **)(*plStackX_20 + 0x48))(plStackX_20,&stack0x00000048);
      lVar14 = lVar14 + 8;
      uVar28 = puVar13[1];
      uVar4 = puVar13[2];
      uVar5 = puVar13[3];
      uVar6 = *(uint64_t *)(puVar13 + 4);
      uVar7 = *(uint64_t *)(puVar13 + 6);
      uVar8 = *(uint64_t *)(puVar13 + 8);
      uVar9 = *(uint64_t *)(puVar13 + 10);
      lVar12 = *(int64_t *)(unaff_RDI + 0x108);
      puVar11 = (int32_t *)(lVar23 + lVar12);
      *puVar11 = *puVar13;
      puVar11[1] = uVar28;
      puVar11[2] = uVar4;
      puVar11[3] = uVar5;
      puVar2 = (uint64_t *)(lVar23 + 0x10 + lVar12);
      *puVar2 = uVar6;
      puVar2[1] = uVar7;
      puVar2 = (uint64_t *)(lVar23 + 0x20 + lVar12);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      uVar24 = uVar24 - 1;
      lVar23 = lVar23 + 0x30;
    } while (uVar24 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000078 ^ (uint64_t)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



