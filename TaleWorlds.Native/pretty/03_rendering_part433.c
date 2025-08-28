#include "TaleWorlds.Native.Split.h"

// 03_rendering_part433.c - 7 个函数

// 函数: void FUN_180504020(int64_t *param_1,int64_t param_2)
void FUN_180504020(int64_t *param_1,int64_t param_2)

{
  int32_t *puVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  bool bVar8;
  int32_t uVar9;
  int32_t uVar10;
  int64_t lVar11;
  int64_t lVar12;
  uint64_t uVar13;
  uint uVar14;
  int64_t *plVar15;
  uint uVar16;
  int64_t *plVar17;
  uint uVar18;
  int64_t lStack_108;
  int64_t lStack_100;
  int64_t lStack_f8;
  int32_t uStack_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  int32_t uStack_d8;
  int32_t uStack_d4;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  int64_t lStack_b0;
  int64_t lStack_a8;
  int32_t uStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int32_t uStack_80;
  int64_t lStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  uint uStack_60;
  int32_t uStack_5c;
  int64_t lStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)(param_2 + 8);
  if (uVar3 != uVar4) {
    uStack_68 = (int32_t)*param_1;
    uStack_64 = *(int32_t *)((int64_t)param_1 + 4);
    lStack_78 = *param_1;
    lVar11 = *param_1;
    uStack_60 = *(uint *)(param_1 + 1);
    uStack_5c = *(int32_t *)((int64_t)param_1 + 0xc);
    while (uStack_60 = uStack_60 + 1, uStack_60 != uVar4) {
      uVar13 = (uint64_t)(uStack_60 + (uStack_60 >> 4) * -0x10);
      lVar5 = *(int64_t *)(lVar11 + 8 + (uint64_t)(uStack_60 >> 4) * 8);
      lStack_108 = *(int64_t *)(lVar5 + uVar13 * 0x50);
      *(uint64_t *)(lVar5 + uVar13 * 0x50) = 0;
      lStack_100 = *(int64_t *)(lVar5 + 8 + uVar13 * 0x50);
      *(uint64_t *)(lVar5 + 8 + uVar13 * 0x50) = 0;
      lStack_f8 = *(int64_t *)(lVar5 + 0x10 + uVar13 * 0x50);
      *(uint64_t *)(lVar5 + 0x10 + uVar13 * 0x50) = 0;
      uStack_f0 = *(int32_t *)(lVar5 + 0x18 + uVar13 * 0x50);
      *(int32_t *)(lVar5 + 0x18 + uVar13 * 0x50) = *(int32_t *)(lVar5 + 0x18 + uVar13 * 0x50);
      plVar15 = (int64_t *)(lVar5 + 0x20 + uVar13 * 0x50);
      lStack_e8 = *plVar15;
      lStack_e0 = plVar15[1];
      puVar1 = (int32_t *)(lVar5 + 0x30 + uVar13 * 0x50);
      uStack_d8 = *puVar1;
      uStack_d4 = puVar1[1];
      uStack_d0 = puVar1[2];
      uStack_cc = puVar1[3];
      plVar15 = (int64_t *)(lVar5 + 0x40 + uVar13 * 0x50);
      lStack_c8 = *plVar15;
      lStack_c0 = plVar15[1];
      uStack_70 = CONCAT44(uStack_5c,uStack_60);
      uVar16 = uStack_60;
      uVar18 = uStack_60;
      while (lStack_58 = lStack_78, uStack_50 = uStack_70, uVar18 != uVar3) {
        uVar18 = uVar18 - 1;
        uVar14 = uVar18 >> 4;
        uVar13 = (uint64_t)(uVar18 + uVar14 * -0x10);
        lVar5 = *(int64_t *)(*(int64_t *)(lStack_78 + 8 + (uint64_t)uVar14 * 8) + uVar13 * 0x50);
        fVar2 = *(float *)(lVar5 + 0xca4);
        if (*(float *)(lStack_108 + 0xca4) == fVar2) {
          bVar8 = *(float *)(lStack_108 + 0xc90) < *(float *)(lVar5 + 0xc90);
        }
        else {
          bVar8 = *(float *)(lStack_108 + 0xca4) < fVar2;
        }
        if (!bVar8) break;
        plVar17 = (int64_t *)(*(int64_t *)(lStack_78 + 8 + (uint64_t)uVar14 * 8) + uVar13 * 0x50)
        ;
        plVar15 = (int64_t *)
                  (*(int64_t *)(lStack_78 + 8 + (uint64_t)(uVar16 >> 4) * 8) +
                  (uint64_t)(uVar16 + (uVar16 >> 4) * -0x10) * 0x50);
        if (plVar15 != plVar17) {
          plVar15[1] = *plVar15;
          lVar5 = *plVar15;
          *plVar15 = 0;
          lVar6 = plVar15[1];
          plVar15[1] = 0;
          lVar7 = plVar15[2];
          plVar15[2] = 0;
          lVar12 = plVar15[3];
          *(int *)(plVar15 + 3) = (int)plVar15[3];
          lStack_b8 = *plVar15;
          *plVar15 = lVar5;
          lStack_b0 = plVar15[1];
          plVar15[1] = lVar6;
          lStack_a8 = plVar15[2];
          plVar15[2] = lVar7;
          uStack_a0 = (int32_t)plVar15[3];
          *(int *)(plVar15 + 3) = (int)lVar12;
          if (lStack_b8 != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900(lStack_b8);
          }
          lVar5 = *plVar15;
          *plVar15 = *plVar17;
          *plVar17 = lVar5;
          lVar5 = plVar15[1];
          plVar15[1] = plVar17[1];
          plVar17[1] = lVar5;
          lVar5 = plVar15[2];
          plVar15[2] = plVar17[2];
          plVar17[2] = lVar5;
          lVar5 = plVar15[3];
          *(int *)(plVar15 + 3) = (int)plVar17[3];
          *(int *)(plVar17 + 3) = (int)lVar5;
          lStack_b8 = 0;
        }
        lVar5 = plVar17[5];
        plVar15[4] = plVar17[4];
        plVar15[5] = lVar5;
        uVar9 = *(int32_t *)((int64_t)plVar17 + 0x34);
        lVar5 = plVar17[7];
        uVar10 = *(int32_t *)((int64_t)plVar17 + 0x3c);
        *(int *)(plVar15 + 6) = (int)plVar17[6];
        *(int32_t *)((int64_t)plVar15 + 0x34) = uVar9;
        *(int *)(plVar15 + 7) = (int)lVar5;
        *(int32_t *)((int64_t)plVar15 + 0x3c) = uVar10;
        lVar5 = plVar17[9];
        plVar15[8] = plVar17[8];
        plVar15[9] = lVar5;
        uVar16 = uVar16 - 1;
      }
      plVar15 = (int64_t *)
                (*(int64_t *)(lStack_78 + 8 + (uint64_t)(uVar16 >> 4) * 8) +
                (uint64_t)(uVar16 + (uVar16 >> 4) * -0x10) * 0x50);
      if (plVar15 != &lStack_108) {
        plVar15[1] = *plVar15;
        lVar5 = *plVar15;
        *plVar15 = 0;
        lVar6 = plVar15[1];
        plVar15[1] = 0;
        lVar7 = plVar15[2];
        plVar15[2] = 0;
        lVar12 = plVar15[3];
        *(int *)(plVar15 + 3) = (int)plVar15[3];
        lStack_98 = *plVar15;
        *plVar15 = lVar5;
        lStack_90 = plVar15[1];
        plVar15[1] = lVar6;
        lStack_88 = plVar15[2];
        plVar15[2] = lVar7;
        uStack_80 = (int32_t)plVar15[3];
        *(int *)(plVar15 + 3) = (int)lVar12;
        if (lStack_98 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900(lStack_98);
        }
        lVar5 = *plVar15;
        *plVar15 = lStack_108;
        lVar6 = plVar15[1];
        plVar15[1] = lStack_100;
        lVar7 = plVar15[2];
        plVar15[2] = lStack_f8;
        lVar12 = plVar15[3];
        *(int32_t *)(plVar15 + 3) = uStack_f0;
        lStack_98 = 0;
        lStack_108 = lVar5;
        lStack_100 = lVar6;
        lStack_f8 = lVar7;
        uStack_f0 = (int)lVar12;
      }
      plVar15[4] = lStack_e8;
      plVar15[5] = lStack_e0;
      *(int32_t *)(plVar15 + 6) = uStack_d8;
      *(int32_t *)((int64_t)plVar15 + 0x34) = uStack_d4;
      *(int32_t *)(plVar15 + 7) = uStack_d0;
      *(int32_t *)((int64_t)plVar15 + 0x3c) = uStack_cc;
      plVar15[8] = lStack_c8;
      plVar15[9] = lStack_c0;
      if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
    }
  }
  return;
}





// 函数: void FUN_180504440(void)
void FUN_180504440(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}





// 函数: void FUN_180504486(void)
void FUN_180504486(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  if (0 < unaff_RSI) {
                    // WARNING: Subroutine does not return
    memcpy(&stack0x00000ce0,*(int32_t *)(unaff_R15 + -0xc),0xcb0);
  }
  if (unaff_RSI == 0) {
    lVar1 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_R15 - unaff_RBP),8);
    lVar1 = (lVar1 >> 10) - (lVar1 >> 0x3f);
    if (1 < lVar1) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000030,((lVar1 + -2 >> 1) + 1) * 0xcb0 + unaff_RBP + -0xcb0,0xcb0);
    }
    if (1 < lVar1) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000030,unaff_R15 + -0xcb0,0xcb0);
    }
  }
  return;
}





// 函数: void FUN_18050469c(void)
void FUN_18050469c(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  if (unaff_RSI == 0) {
    lVar1 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_R15 - unaff_RBP),8);
    lVar1 = (lVar1 >> 10) - (lVar1 >> 0x3f);
    if (1 < lVar1) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000030,((lVar1 + -2 >> 1) + 1) * 0xcb0 + unaff_RBP + -0xcb0,0xcb0);
    }
    if (1 < lVar1) {
                    // WARNING: Subroutine does not return
      memcpy(&stack0x00000030,unaff_R15 + -0xcb0,0xcb0);
    }
  }
  return;
}





// 函数: void FUN_1805046a5(void)
void FUN_1805046a5(void)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t unaff_R12;
  int64_t unaff_R15;
  
  lVar1 = SUB168(SEXT816(unaff_R12) * SEXT816(unaff_R15 - unaff_RBP),8);
  lVar1 = (lVar1 >> 10) - (lVar1 >> 0x3f);
  if (1 < lVar1) {
                    // WARNING: Subroutine does not return
    memcpy(&stack0x00000030,((lVar1 + -2 >> 1) + 1) * 0xcb0 + unaff_RBP + -0xcb0,0xcb0);
  }
  if (1 < lVar1) {
                    // WARNING: Subroutine does not return
    memcpy(&stack0x00000030,unaff_R15 + -0xcb0,0xcb0);
  }
  return;
}





// 函数: void FUN_1805047b7(void)
void FUN_1805047b7(void)

{
  return;
}



int64_t *
FUN_1805047e0(int64_t *param_1,int32_t *param_2,int32_t *param_3,uint64_t *param_4)

{
  int32_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int iVar11;
  int32_t *puVar12;
  
  *param_1 = (int64_t)param_4;
  if (param_2 != param_3) {
    puVar12 = param_2 + 2;
    do {
      *param_4 = &unknown_var_5552_ptr;
      *(int32_t *)(param_4 + 1) = *puVar12;
      *(int32_t *)((int64_t)param_4 + 0xc) = puVar12[1];
      *param_4 = &unknown_var_5584_ptr;
      param_4[2] = *(uint64_t *)(puVar12 + 2);
      uVar8 = *(uint64_t *)(puVar12 + 6);
      param_4[3] = *(uint64_t *)(puVar12 + 4);
      param_4[4] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 10);
      param_4[5] = *(uint64_t *)(puVar12 + 8);
      param_4[6] = uVar8;
      uVar5 = puVar12[0xd];
      uVar6 = puVar12[0xe];
      uVar7 = puVar12[0xf];
      *(int32_t *)(param_4 + 7) = puVar12[0xc];
      *(int32_t *)((int64_t)param_4 + 0x3c) = uVar5;
      *(int32_t *)(param_4 + 8) = uVar6;
      *(int32_t *)((int64_t)param_4 + 0x44) = uVar7;
      uVar8 = *(uint64_t *)(puVar12 + 0x12);
      param_4[9] = *(uint64_t *)(puVar12 + 0x10);
      param_4[10] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0x16);
      param_4[0xb] = *(uint64_t *)(puVar12 + 0x14);
      param_4[0xc] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0x1a);
      param_4[0xd] = *(uint64_t *)(puVar12 + 0x18);
      param_4[0xe] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0x1e);
      param_4[0xf] = *(uint64_t *)(puVar12 + 0x1c);
      param_4[0x10] = uVar8;
      *(int32_t *)(param_4 + 0x11) = puVar12[0x20];
      uVar8 = *(uint64_t *)(puVar12 + 0x23);
      *(uint64_t *)((int64_t)param_4 + 0x8c) = *(uint64_t *)(puVar12 + 0x21);
      *(uint64_t *)((int64_t)param_4 + 0x94) = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0x27);
      *(uint64_t *)((int64_t)param_4 + 0x9c) = *(uint64_t *)(puVar12 + 0x25);
      *(uint64_t *)((int64_t)param_4 + 0xa4) = uVar8;
      *(int32_t *)((int64_t)param_4 + 0xac) = puVar12[0x29];
      uVar5 = puVar12[0x2b];
      uVar6 = puVar12[0x2c];
      uVar7 = puVar12[0x2d];
      *(int32_t *)(param_4 + 0x16) = puVar12[0x2a];
      *(int32_t *)((int64_t)param_4 + 0xb4) = uVar5;
      *(int32_t *)(param_4 + 0x17) = uVar6;
      *(int32_t *)((int64_t)param_4 + 0xbc) = uVar7;
      *(int32_t *)(param_4 + 0x18) = puVar12[0x2e];
      *(int32_t *)((int64_t)param_4 + 0xc4) = puVar12[0x2f];
      *(int8_t *)(param_4 + 0x19) = *(int8_t *)(puVar12 + 0x30);
      plVar4 = *(int64_t **)(puVar12 + 0x32);
      param_4[0x1a] = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
      plVar4 = *(int64_t **)(puVar12 + 0x34);
      param_4[0x1b] = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
      plVar4 = *(int64_t **)(puVar12 + 0x36);
      param_4[0x1c] = plVar4;
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))();
      }
      param_4[0x1d] = *(uint64_t *)(puVar12 + 0x38);
      param_4[0x1e] = *(uint64_t *)(puVar12 + 0x3a);
      FUN_1804ffe50(param_4 + 0x20,puVar12 + 0x3e);
      param_4[0x50] = *(uint64_t *)(puVar12 + 0x9e);
      *(int32_t *)(param_4 + 0x51) = puVar12[0xa0];
      uVar8 = *(uint64_t *)(puVar12 + 0xa4);
      param_4[0x52] = *(uint64_t *)(puVar12 + 0xa2);
      param_4[0x53] = uVar8;
      *(int32_t *)(param_4 + 0x54) = puVar12[0xa6];
      *(int32_t *)((int64_t)param_4 + 0x2a4) = puVar12[0xa7];
      uVar8 = *(uint64_t *)(puVar12 + 0xaa);
      param_4[0x55] = *(uint64_t *)(puVar12 + 0xa8);
      param_4[0x56] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xae);
      param_4[0x57] = *(uint64_t *)(puVar12 + 0xac);
      param_4[0x58] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xb2);
      param_4[0x59] = *(uint64_t *)(puVar12 + 0xb0);
      param_4[0x5a] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xb6);
      param_4[0x5b] = *(uint64_t *)(puVar12 + 0xb4);
      param_4[0x5c] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xba);
      param_4[0x5d] = *(uint64_t *)(puVar12 + 0xb8);
      param_4[0x5e] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xbe);
      param_4[0x5f] = *(uint64_t *)(puVar12 + 0xbc);
      param_4[0x60] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xc2);
      param_4[0x61] = *(uint64_t *)(puVar12 + 0xc0);
      param_4[0x62] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xc6);
      param_4[99] = *(uint64_t *)(puVar12 + 0xc4);
      param_4[100] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xca);
      param_4[0x65] = *(uint64_t *)(puVar12 + 200);
      param_4[0x66] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xce);
      param_4[0x67] = *(uint64_t *)(puVar12 + 0xcc);
      param_4[0x68] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xd2);
      param_4[0x69] = *(uint64_t *)(puVar12 + 0xd0);
      param_4[0x6a] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xd6);
      param_4[0x6b] = *(uint64_t *)(puVar12 + 0xd4);
      param_4[0x6c] = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xda);
      param_4[0x6d] = *(uint64_t *)(puVar12 + 0xd8);
      param_4[0x6e] = uVar8;
      param_4[0x6f] = *(uint64_t *)(puVar12 + 0xdc);
      *(int32_t *)(param_4 + 0x70) = puVar12[0xde];
      uVar8 = *(uint64_t *)(puVar12 + 0xe1);
      *(uint64_t *)((int64_t)param_4 + 900) = *(uint64_t *)(puVar12 + 0xdf);
      *(uint64_t *)((int64_t)param_4 + 0x38c) = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xe5);
      *(uint64_t *)((int64_t)param_4 + 0x394) = *(uint64_t *)(puVar12 + 0xe3);
      *(uint64_t *)((int64_t)param_4 + 0x39c) = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xe9);
      *(uint64_t *)((int64_t)param_4 + 0x3a4) = *(uint64_t *)(puVar12 + 0xe7);
      *(uint64_t *)((int64_t)param_4 + 0x3ac) = uVar8;
      uVar8 = *(uint64_t *)(puVar12 + 0xed);
      *(uint64_t *)((int64_t)param_4 + 0x3b4) = *(uint64_t *)(puVar12 + 0xeb);
      *(uint64_t *)((int64_t)param_4 + 0x3bc) = uVar8;
      *(int16_t *)((int64_t)param_4 + 0x3c4) = *(int16_t *)(puVar12 + 0xef);
      param_4[0x79] = *(uint64_t *)(puVar12 + 0xf0);
      *(int8_t *)(param_4 + 0x7a) = *(int8_t *)(puVar12 + 0xf2);
      *(int8_t *)((int64_t)param_4 + 0x3d1) = *(int8_t *)((int64_t)puVar12 + 0x3c9);
      *(int8_t *)((int64_t)param_4 + 0x3d2) = *(int8_t *)((int64_t)puVar12 + 0x3ca);
      iVar3 = puVar12[0x2f3];
      *(int *)((int64_t)param_4 + 0xbd4) = iVar3;
      iVar11 = 0;
      if (0 < iVar3) {
        puVar9 = (uint64_t *)(puVar12 + 0xf3);
        lVar10 = (int64_t)param_4 + (0x3d4 - (int64_t)puVar9);
        do {
          uVar8 = puVar9[1];
          *(uint64_t *)(lVar10 + (int64_t)puVar9) = *puVar9;
          ((uint64_t *)(lVar10 + (int64_t)puVar9))[1] = uVar8;
          uVar8 = puVar9[3];
          puVar2 = (uint64_t *)(lVar10 + 0x10 + (int64_t)puVar9);
          *puVar2 = puVar9[2];
          puVar2[1] = uVar8;
          uVar8 = puVar9[5];
          puVar2 = (uint64_t *)(lVar10 + 0x20 + (int64_t)puVar9);
          *puVar2 = puVar9[4];
          puVar2[1] = uVar8;
          uVar8 = puVar9[7];
          puVar2 = (uint64_t *)(lVar10 + 0x30 + (int64_t)puVar9);
          *puVar2 = puVar9[6];
          puVar2[1] = uVar8;
          iVar11 = iVar11 + 1;
          puVar9 = puVar9 + 8;
        } while (iVar11 < *(int *)((int64_t)param_4 + 0xbd4));
      }
      *param_1 = *param_1 + 0xbe0;
      param_4 = (uint64_t *)*param_1;
      puVar1 = puVar12 + 0x2f6;
      puVar12 = puVar12 + 0x2f8;
    } while (puVar1 != param_3);
  }
  return param_1;
}



int64_t FUN_180504b50(int64_t param_1,int64_t param_2,int64_t param_3)

{
  int *piVar1;
  uint64_t *puVar2;
  int iVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int iVar6;
  uint64_t uVar7;
  int *piVar8;
  int iVar9;
  int64_t lVar10;
  int *piVar11;
  int *piVar12;
  
  lVar10 = (param_2 - param_1) + SUB168(SEXT816(-0x53896e7bf53896e7) * SEXT816(param_2 - param_1),8)
  ;
  lVar10 = (lVar10 >> 0xb) - (lVar10 >> 0x3f);
  if (0 < lVar10) {
    piVar12 = (int *)(param_3 + 0xbd4);
    piVar11 = (int *)(param_1 + 8);
    param_3 = param_3 + lVar10 * 0xbe0;
    do {
      piVar12[-0x2f3] = *piVar11;
      piVar12[-0x2f2] = piVar11[1];
      *(uint64_t *)(piVar12 + -0x2f1) = *(uint64_t *)(piVar11 + 2);
      uVar7 = *(uint64_t *)(piVar11 + 6);
      *(uint64_t *)(piVar12 + -0x2ef) = *(uint64_t *)(piVar11 + 4);
      *(uint64_t *)(piVar12 + -0x2ed) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 10);
      *(uint64_t *)(piVar12 + -0x2eb) = *(uint64_t *)(piVar11 + 8);
      *(uint64_t *)(piVar12 + -0x2e9) = uVar7;
      iVar3 = piVar11[0xd];
      iVar9 = piVar11[0xe];
      iVar6 = piVar11[0xf];
      piVar12[-0x2e7] = piVar11[0xc];
      piVar12[-0x2e6] = iVar3;
      piVar12[-0x2e5] = iVar9;
      piVar12[-0x2e4] = iVar6;
      uVar7 = *(uint64_t *)(piVar11 + 0x12);
      *(uint64_t *)(piVar12 + -0x2e3) = *(uint64_t *)(piVar11 + 0x10);
      *(uint64_t *)(piVar12 + -0x2e1) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0x16);
      *(uint64_t *)(piVar12 + -0x2df) = *(uint64_t *)(piVar11 + 0x14);
      *(uint64_t *)(piVar12 + -0x2dd) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0x1a);
      *(uint64_t *)(piVar12 + -0x2db) = *(uint64_t *)(piVar11 + 0x18);
      *(uint64_t *)(piVar12 + -0x2d9) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0x1e);
      *(uint64_t *)(piVar12 + -0x2d7) = *(uint64_t *)(piVar11 + 0x1c);
      *(uint64_t *)(piVar12 + -0x2d5) = uVar7;
      piVar12[-0x2d3] = piVar11[0x20];
      uVar7 = *(uint64_t *)(piVar11 + 0x23);
      *(uint64_t *)(piVar12 + -0x2d2) = *(uint64_t *)(piVar11 + 0x21);
      *(uint64_t *)(piVar12 + -0x2d0) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0x27);
      *(uint64_t *)(piVar12 + -0x2ce) = *(uint64_t *)(piVar11 + 0x25);
      *(uint64_t *)(piVar12 + -0x2cc) = uVar7;
      piVar12[-0x2ca] = piVar11[0x29];
      iVar3 = piVar11[0x2b];
      iVar9 = piVar11[0x2c];
      iVar6 = piVar11[0x2d];
      piVar12[-0x2c9] = piVar11[0x2a];
      piVar12[-0x2c8] = iVar3;
      piVar12[-0x2c7] = iVar9;
      piVar12[-0x2c6] = iVar6;
      piVar12[-0x2c5] = piVar11[0x2e];
      piVar12[-0x2c4] = piVar11[0x2f];
      *(char *)(piVar12 + -0x2c3) = (char)piVar11[0x30];
      plVar4 = *(int64_t **)(piVar11 + 0x32);
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      plVar5 = *(int64_t **)(piVar12 + -0x2c1);
      *(int64_t **)(piVar12 + -0x2c1) = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      plVar4 = *(int64_t **)(piVar11 + 0x34);
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      plVar5 = *(int64_t **)(piVar12 + -0x2bf);
      *(int64_t **)(piVar12 + -0x2bf) = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      plVar4 = *(int64_t **)(piVar11 + 0x36);
      if (plVar4 != (int64_t *)0x0) {
        (**(code **)(*plVar4 + 0x28))(plVar4);
      }
      plVar5 = *(int64_t **)(piVar12 + -0x2bd);
      *(int64_t **)(piVar12 + -0x2bd) = plVar4;
      if (plVar5 != (int64_t *)0x0) {
        (**(code **)(*plVar5 + 0x38))();
      }
      *(uint64_t *)(piVar12 + -699) = *(uint64_t *)(piVar11 + 0x38);
      *(uint64_t *)(piVar12 + -0x2b9) = *(uint64_t *)(piVar11 + 0x3a);
      FUN_180505560(piVar12 + -0x2b5,piVar11 + 0x3e);
      *(uint64_t *)(piVar12 + -0x255) = *(uint64_t *)(piVar11 + 0x9e);
      piVar12[-0x253] = piVar11[0xa0];
      uVar7 = *(uint64_t *)(piVar11 + 0xa4);
      *(uint64_t *)(piVar12 + -0x251) = *(uint64_t *)(piVar11 + 0xa2);
      *(uint64_t *)(piVar12 + -0x24f) = uVar7;
      piVar12[-0x24d] = piVar11[0xa6];
      piVar12[-0x24c] = piVar11[0xa7];
      uVar7 = *(uint64_t *)(piVar11 + 0xaa);
      *(uint64_t *)(piVar12 + -0x24b) = *(uint64_t *)(piVar11 + 0xa8);
      *(uint64_t *)(piVar12 + -0x249) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xae);
      *(uint64_t *)(piVar12 + -0x247) = *(uint64_t *)(piVar11 + 0xac);
      *(uint64_t *)(piVar12 + -0x245) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xb2);
      *(uint64_t *)(piVar12 + -0x243) = *(uint64_t *)(piVar11 + 0xb0);
      *(uint64_t *)(piVar12 + -0x241) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xb6);
      *(uint64_t *)(piVar12 + -0x23f) = *(uint64_t *)(piVar11 + 0xb4);
      *(uint64_t *)(piVar12 + -0x23d) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xba);
      *(uint64_t *)(piVar12 + -0x23b) = *(uint64_t *)(piVar11 + 0xb8);
      *(uint64_t *)(piVar12 + -0x239) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xbe);
      *(uint64_t *)(piVar12 + -0x237) = *(uint64_t *)(piVar11 + 0xbc);
      *(uint64_t *)(piVar12 + -0x235) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xc2);
      *(uint64_t *)(piVar12 + -0x233) = *(uint64_t *)(piVar11 + 0xc0);
      *(uint64_t *)(piVar12 + -0x231) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xc6);
      *(uint64_t *)(piVar12 + -0x22f) = *(uint64_t *)(piVar11 + 0xc4);
      *(uint64_t *)(piVar12 + -0x22d) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xca);
      *(uint64_t *)(piVar12 + -0x22b) = *(uint64_t *)(piVar11 + 200);
      *(uint64_t *)(piVar12 + -0x229) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xce);
      *(uint64_t *)(piVar12 + -0x227) = *(uint64_t *)(piVar11 + 0xcc);
      *(uint64_t *)(piVar12 + -0x225) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xd2);
      *(uint64_t *)(piVar12 + -0x223) = *(uint64_t *)(piVar11 + 0xd0);
      *(uint64_t *)(piVar12 + -0x221) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xd6);
      *(uint64_t *)(piVar12 + -0x21f) = *(uint64_t *)(piVar11 + 0xd4);
      *(uint64_t *)(piVar12 + -0x21d) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xda);
      *(uint64_t *)(piVar12 + -0x21b) = *(uint64_t *)(piVar11 + 0xd8);
      *(uint64_t *)(piVar12 + -0x219) = uVar7;
      *(uint64_t *)(piVar12 + -0x217) = *(uint64_t *)(piVar11 + 0xdc);
      piVar12[-0x215] = piVar11[0xde];
      uVar7 = *(uint64_t *)(piVar11 + 0xe1);
      *(uint64_t *)(piVar12 + -0x214) = *(uint64_t *)(piVar11 + 0xdf);
      *(uint64_t *)(piVar12 + -0x212) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xe5);
      *(uint64_t *)(piVar12 + -0x210) = *(uint64_t *)(piVar11 + 0xe3);
      *(uint64_t *)(piVar12 + -0x20e) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xe9);
      *(uint64_t *)(piVar12 + -0x20c) = *(uint64_t *)(piVar11 + 0xe7);
      *(uint64_t *)(piVar12 + -0x20a) = uVar7;
      uVar7 = *(uint64_t *)(piVar11 + 0xed);
      *(uint64_t *)(piVar12 + -0x208) = *(uint64_t *)(piVar11 + 0xeb);
      *(uint64_t *)(piVar12 + -0x206) = uVar7;
      *(short *)(piVar12 + -0x204) = (short)piVar11[0xef];
      *(uint64_t *)(piVar12 + -0x203) = *(uint64_t *)(piVar11 + 0xf0);
      *(char *)(piVar12 + -0x201) = (char)piVar11[0xf2];
      *(int8_t *)((int64_t)piVar12 + -0x803) = *(int8_t *)((int64_t)piVar11 + 0x3c9);
      *(int8_t *)((int64_t)piVar12 + -0x802) = *(int8_t *)((int64_t)piVar11 + 0x3ca);
      iVar3 = piVar11[0x2f3];
      *piVar12 = iVar3;
      iVar9 = 0;
      if (0 < iVar3) {
        piVar1 = piVar12 + -0x200;
        piVar8 = piVar1;
        do {
          puVar2 = (uint64_t *)((int64_t)piVar8 + (int64_t)piVar11 + (0x3cc - (int64_t)piVar1))
          ;
          uVar7 = puVar2[1];
          *(uint64_t *)piVar8 = *puVar2;
          *(uint64_t *)(piVar8 + 2) = uVar7;
          puVar2 = (uint64_t *)((int64_t)piVar8 + (int64_t)piVar11 + (0x3dc - (int64_t)piVar1))
          ;
          uVar7 = puVar2[1];
          *(uint64_t *)(piVar8 + 4) = *puVar2;
          *(uint64_t *)(piVar8 + 6) = uVar7;
          puVar2 = (uint64_t *)((int64_t)piVar8 + (int64_t)piVar11 + (0x3ec - (int64_t)piVar1))
          ;
          uVar7 = puVar2[1];
          *(uint64_t *)(piVar8 + 8) = *puVar2;
          *(uint64_t *)(piVar8 + 10) = uVar7;
          puVar2 = (uint64_t *)((int64_t)piVar8 + (int64_t)piVar11 + (0x3fc - (int64_t)piVar1))
          ;
          uVar7 = puVar2[1];
          *(uint64_t *)(piVar8 + 0xc) = *puVar2;
          *(uint64_t *)(piVar8 + 0xe) = uVar7;
          iVar9 = iVar9 + 1;
          piVar8 = piVar8 + 0x10;
        } while (iVar9 < *piVar12);
      }
      lVar10 = lVar10 + -1;
      piVar11 = piVar11 + 0x2f8;
      piVar12 = piVar12 + 0x2f8;
    } while (0 < lVar10);
  }
  return param_3;
}





// 函数: void FUN_180504f30(int64_t *param_1,int64_t *param_2,uint64_t param_3,int32_t *param_4,
void FUN_180504f30(int64_t *param_1,int64_t *param_2,uint64_t param_3,int32_t *param_4,
                  int32_t *param_5)

{
  code *pcVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  pcVar1 = *(code **)(*param_1 + 0x78);
  uVar2 = FUN_180627ae0(&puStack_48,*param_2 + 0x60,param_3,param_4,0,0xfffffffffffffffe);
  FUN_180628a40(&puStack_48);
  plVar3 = (int64_t *)(*pcVar1)(param_1,uVar2);
  plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
  (**(code **)(*plVar3 + 0x50))(plVar3,*param_4);
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_40 = 0;
  uStack_30 = 0;
  puStack_48 = &system_state_ptr;
  if (4 < (uint64_t)(param_2[1] - *param_2 >> 5)) {
    (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    pcVar1 = *(code **)(*param_1 + 0x78);
    uVar2 = FUN_180627ae0(&puStack_48,*param_2 + 0x80);
    FUN_180628a40(&puStack_48);
    plVar3 = (int64_t *)(*pcVar1)(param_1,uVar2);
    plVar3 = (int64_t *)(**(code **)(*plVar3 + 0x70))(plVar3,&unknown_var_1532_ptr);
    (**(code **)(*plVar3 + 0x28))(plVar3,*param_5);
    puStack_48 = &system_data_buffer_ptr;
    if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_40 = 0;
    uStack_30 = 0;
    puStack_48 = &system_state_ptr;
    if (5 < (uint64_t)(param_2[1] - *param_2 >> 5)) {
      (**(code **)(*param_1 + 0x70))(param_1,&system_temp_buffer);
    }
  }
  return;
}





