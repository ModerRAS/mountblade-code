#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part070.c - 15 个函数

// 函数: void FUN_1800e94a0(int64_t param_1,uint param_2)
void FUN_1800e94a0(int64_t param_1,uint param_2)

{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
                    // WARNING: Subroutine does not return
    memset(*(int64_t *)(param_1 + 8 + (uint64_t)(param_2 >> 9) * 8) +
           (int64_t)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x60,0,0x60);
  }
  return;
}






// 函数: void FUN_1800e94be(void)
void FUN_1800e94be(void)

{
  uint unaff_EBX;
  int64_t unaff_RBP;
  
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(unaff_RBP + 8 + (uint64_t)(unaff_EBX >> 9) * 8) +
         (int64_t)(int)(unaff_EBX + (unaff_EBX >> 9) * -0x200) * 0x60,0,0x60);
}






// 函数: void FUN_1800e9522(void)
void FUN_1800e9522(void)

{
  return;
}






// 函数: void FUN_1800e9540(int64_t param_1,uint param_2)
void FUN_1800e9540(int64_t param_1,uint param_2)

{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t uVar5;
  
  uVar5 = (uint64_t)param_2;
  if ((int)param_2 < (int)(param_2 + 0x200)) {
    do {
      puVar3 = (uint64_t *)
               (*(int64_t *)(param_1 + 8 + (uVar5 >> 9) * 8) +
               (int64_t)((int)uVar5 + (int)(uVar5 >> 9) * -0x200) * 0x330);
      puVar3[0x11] = 0;
      *(int32_t *)(puVar3 + 0x12) = 0x1060101;
      *(int32_t *)((int64_t)puVar3 + 0x94) = 0xff000000;
      *(int32_t *)(puVar3 + 0x13) = 0x40300ff;
      *(uint64_t *)((int64_t)puVar3 + 0x9c) = 0x30503;
      *(uint64_t *)((int64_t)puVar3 + 0xa4) = 0;
      *(uint64_t *)((int64_t)puVar3 + 0xac) = 0;
      *(uint64_t *)((int64_t)puVar3 + 0xb4) = 0;
      *(int32_t *)((int64_t)puVar3 + 0xbc) = 0;
      puVar3[0x18] = 0x900;
      puVar3[0x33] = 0;
      puVar3[0x34] = 0;
      puVar3[0x35] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x3b] = 0;
      puVar3[0x3c] = 0;
      puVar3[0x3d] = 0;
      *(int32_t *)(puVar3 + 0x3e) = 0xc;
      puVar3[0x55] = 0;
      puVar3[0x56] = 0;
      puVar3[0x3f] = 0;
      puVar3[0x40] = 0;
      *(int32_t *)(puVar3 + 0x5c) = 0;
      puVar3[0x50] = 0;
      *(int32_t *)(puVar3 + 0x10) = 0;
      puVar2 = puVar3;
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(int8_t *)((int64_t)puVar3 + 0x321) = 0;
      *(int32_t *)(puVar3 + 0x62) = 0;
      *(int32_t *)(puVar3 + 0x5a) = 0;
      puVar3[0x19] = 0x3f800000;
      puVar3[0x1a] = 0;
      puVar3[0x1b] = 0x3f80000000000000;
      puVar3[0x1c] = 0;
      puVar3[0x1d] = 0;
      puVar3[0x1e] = 0x3f800000;
      puVar3[0x1f] = 0;
      puVar3[0x20] = 0x3f80000000000000;
      puVar3[0x21] = 0x3f800000;
      puVar3[0x22] = 0;
      puVar3[0x23] = 0x3f80000000000000;
      puVar3[0x24] = 0;
      puVar3[0x25] = 0;
      puVar3[0x26] = 0x3f800000;
      puVar3[0x27] = 0;
      puVar3[0x28] = 0x3f80000000000000;
      puVar3[0x5d] = 0;
      puVar3[0x5e] = 0;
      puVar3[0x5b] = 0;
      puVar3[0x51] = 0;
      puVar3[0x52] = 0;
      puVar3[0x53] = 0;
      *(int32_t *)((int64_t)puVar3 + 0x314) = 0;
      puVar3[0x41] = 0;
      puVar3[0x54] = 0;
      puVar3[0x57] = 0;
      *(int32_t *)((int64_t)puVar3 + 0x30c) = 0xffffffff;
      puVar3[0x58] = 0;
      puVar3[0x59] = 0;
      *(int8_t *)(puVar3 + 100) = 0;
      *(int8_t *)((int64_t)puVar3 + 0x322) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
    } while ((int)uVar4 < (int)(param_2 + 0x200));
  }
  return;
}






// 函数: void FUN_1800e9790(int64_t param_1,uint param_2)
void FUN_1800e9790(int64_t param_1,uint param_2)

{
  uint uVar1;
  uint64_t uVar2;
  
  uVar2 = (uint64_t)param_2;
  if ((int)param_2 < (int)(param_2 + 0x10)) {
    do {
      FUN_180245b90((int64_t)((int)uVar2 + (int)(uVar2 >> 4) * -0x10) * 0x12c30 +
                    *(int64_t *)(param_1 + 8 + (uVar2 >> 4) * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (uint64_t)uVar1;
    } while ((int)uVar1 < (int)(param_2 + 0x10));
  }
  return;
}



uint64_t *
FUN_1800e97f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1800e9840(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1 + 4,0,0,param_4,uVar1);
  }
  *param_1 = &unknown_var_1000_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}






// 函数: void FUN_1800e98d0(int64_t *param_1,uint64_t *param_2)
void FUN_1800e98d0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int32_t uVar8;
  int32_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  int64_t lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  int32_t uStack_ac;
  uint64_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int64_t lStack_78;
  uint64_t uStack_70;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  
  iVar5 = (int)param_1[1];
  if (iVar5 != *(int *)(param_2 + 1)) {
    iVar19 = 0;
    lVar17 = (int64_t)*(int *)(param_2 + 1) - (int64_t)iVar5;
    for (lVar13 = lVar17; lVar13 != 0; lVar13 = lVar13 >> 1) {
      iVar19 = iVar19 + 1;
    }
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_88 = (int32_t)*param_1;
    uStack_84 = *(int32_t *)((int64_t)param_1 + 4);
    uStack_80 = (int32_t)param_1[1];
    uStack_7c = *(int32_t *)((int64_t)param_1 + 0xc);
    FUN_1800ea950(&uStack_88,&uStack_98,(int64_t)(iVar19 + -1) * 2);
    uStack_68 = (int32_t)*param_1;
    uStack_64 = *(int32_t *)((int64_t)param_1 + 4);
    uStack_60 = (int32_t)param_1[1];
    uStack_5c = *(int32_t *)((int64_t)param_1 + 0xc);
    if (lVar17 < 0x1d) {
      uStack_58 = *param_2;
      uStack_50 = param_2[1];
      uStack_48 = uStack_68;
      uStack_44 = uStack_64;
      uStack_40 = uStack_60;
      uStack_3c = uStack_5c;
      FUN_1800eac80(&uStack_48,&uStack_58);
    }
    else {
      lVar13 = *param_1;
      uVar18 = iVar5 + 0x1c;
      uStack_70 = CONCAT44(uStack_ac,uVar18);
      lStack_78 = lVar13;
      FUN_1800eac80(&uStack_68,&lStack_78);
      uVar7 = *(uint *)(param_2 + 1);
      for (; uVar18 != uVar7; uVar18 = uVar18 + 1) {
        uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -0x800);
        lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
        puVar14 = (uint64_t *)(lVar17 + uVar15 * 0x18);
        uVar10 = *puVar14;
        uVar11 = puVar14[1];
        uVar4 = *(uint64_t *)(lVar17 + 0x10 + uVar15 * 0x18);
        uVar20 = uVar18;
        uVar6 = uVar18;
        while( true ) {
          uVar6 = uVar6 - 1;
          uVar16 = (uint64_t)(uVar6 & 0x7ff);
          puVar14 = (uint64_t *)
                    (*(int64_t *)(lVar13 + 8 + (uint64_t)(uVar6 >> 0xb) * 8) + uVar16 * 0x18);
          uVar15 = *puVar14;
          bVar21 = uVar10 < uVar15;
          if (uVar10 == uVar15) {
            bVar21 = uVar11 < puVar14[1];
          }
          if (!bVar21) break;
          lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar6 >> 0xb) * 8);
          puVar1 = (uint64_t *)(lVar17 + uVar16 * 0x18);
          uVar12 = puVar1[1];
          puVar3 = (int32_t *)(lVar17 + 0x10 + uVar16 * 0x18);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
          uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -0x800);
          puVar2 = (uint64_t *)(lVar17 + uVar15 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (int32_t *)(lVar17 + 0x10 + uVar15 * 0x18);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          uVar20 = uVar20 - 1;
        }
        uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -0x800);
        lVar17 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
        puVar14 = (uint64_t *)(lVar17 + uVar15 * 0x18);
        *puVar14 = uVar10;
        puVar14[1] = uVar11;
        *(uint64_t *)(lVar17 + 0x10 + uVar15 * 0x18) = uVar4;
      }
    }
  }
  return;
}






// 函数: void FUN_1800e98fb(int32_t *param_1,uint64_t *param_2)
void FUN_1800e98fb(int32_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t in_RAX;
  int64_t lVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  int64_t unaff_RBP;
  uint64_t *unaff_RSI;
  uint uVar18;
  int64_t unaff_RDI;
  int iVar19;
  uint uVar20;
  uint64_t *unaff_R14;
  bool bVar21;
  int32_t uVar22;
  int32_t uVar23;
  int32_t uVar24;
  int32_t uVar25;
  
  iVar19 = 0;
  for (lVar13 = in_RAX - unaff_RDI; lVar13 != 0; lVar13 = lVar13 >> 1) {
    iVar19 = iVar19 + 1;
  }
  uVar4 = param_2[1];
  uVar22 = *param_1;
  uVar23 = param_1[1];
  uVar24 = param_1[2];
  uVar25 = param_1[3];
  *(uint64_t *)(unaff_RBP + -0x39) = *param_2;
  *(uint64_t *)(unaff_RBP + -0x31) = uVar4;
  *(int32_t *)(unaff_RBP + -0x29) = uVar22;
  *(int32_t *)(unaff_RBP + -0x25) = uVar23;
  *(int32_t *)(unaff_RBP + -0x21) = uVar24;
  *(int32_t *)(unaff_RBP + -0x1d) = uVar25;
  FUN_1800ea950(unaff_RBP + -0x29,unaff_RBP + -0x39,(int64_t)(iVar19 + -1) * 2);
  uVar22 = *(int32_t *)unaff_RSI;
  uVar23 = *(int32_t *)((int64_t)unaff_RSI + 4);
  uVar24 = *(int32_t *)(unaff_RSI + 1);
  uVar25 = *(int32_t *)((int64_t)unaff_RSI + 0xc);
  if (in_RAX - unaff_RDI < 0x1d) {
    uVar4 = unaff_R14[1];
    *(uint64_t *)(unaff_RBP + 7) = *unaff_R14;
    *(uint64_t *)(unaff_RBP + 0xf) = uVar4;
    *(int32_t *)(unaff_RBP + 0x17) = uVar22;
    *(int32_t *)(unaff_RBP + 0x1b) = uVar23;
    *(int32_t *)(unaff_RBP + 0x1f) = uVar24;
    *(int32_t *)(unaff_RBP + 0x23) = uVar25;
    FUN_1800eac80(unaff_RBP + 0x17,unaff_RBP + 7);
  }
  else {
    uVar4 = *unaff_RSI;
    uVar18 = (int)unaff_RDI + 0x1c;
    *(uint64_t *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    *(uint64_t *)(unaff_RBP + -0x19) = *(uint64_t *)(unaff_RBP + -0x59);
    *(uint64_t *)(unaff_RBP + -0x11) = *(uint64_t *)(unaff_RBP + -0x51);
    *(int32_t *)(unaff_RBP + -9) = uVar22;
    *(int32_t *)(unaff_RBP + -5) = uVar23;
    *(int32_t *)(unaff_RBP + -1) = uVar24;
    *(int32_t *)(unaff_RBP + 3) = uVar25;
    FUN_1800eac80(unaff_RBP + -9,unaff_RBP + -0x19);
    uVar9 = *(uint *)(unaff_R14 + 1);
    *(uint64_t *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    uVar22 = *(int32_t *)(unaff_RBP + -0x59);
    uVar23 = *(int32_t *)(unaff_RBP + -0x55);
    uVar24 = *(int32_t *)(unaff_RBP + -0x51);
    uVar25 = *(int32_t *)(unaff_RBP + -0x4d);
    *(int32_t *)(unaff_RBP + -0x59) = uVar22;
    *(int32_t *)(unaff_RBP + -0x55) = uVar23;
    *(int32_t *)(unaff_RBP + -0x51) = uVar24;
    *(int32_t *)(unaff_RBP + -0x4d) = uVar25;
    if (uVar18 != uVar9) {
      lVar13 = *(int64_t *)(unaff_RBP + -0x59);
      uVar18 = *(uint *)(unaff_RBP + -0x51);
      while( true ) {
        *(int32_t *)(unaff_RBP + -0x49) = uVar22;
        *(int32_t *)(unaff_RBP + -0x45) = uVar23;
        *(int32_t *)(unaff_RBP + -0x41) = uVar24;
        *(int32_t *)(unaff_RBP + -0x3d) = uVar25;
        lVar5 = *(int64_t *)(unaff_RBP + -0x49);
        uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -0x800);
        lVar6 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar6 + uVar15 * 0x18);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar4 = *(uint64_t *)(lVar6 + 0x10 + uVar15 * 0x18);
        *(uint64_t *)(unaff_RBP + 0x27) = uVar10;
        *(uint64_t *)(unaff_RBP + 0x2f) = uVar11;
        uVar15 = *(uint64_t *)(unaff_RBP + 0x2f);
        uVar7 = *(uint64_t *)(unaff_RBP + 0x27);
        uVar20 = *(uint *)(unaff_RBP + -0x41);
        uVar8 = uVar18;
        while( true ) {
          uVar8 = uVar8 - 1;
          uVar17 = (uint64_t)(uVar8 & 0x7ff);
          puVar14 = (uint64_t *)
                    (*(int64_t *)(lVar13 + 8 + (uint64_t)(uVar8 >> 0xb) * 8) + uVar17 * 0x18);
          uVar16 = *puVar14;
          bVar21 = uVar7 < uVar16;
          if (uVar7 == uVar16) {
            bVar21 = uVar15 < puVar14[1];
          }
          if (!bVar21) break;
          lVar6 = *(int64_t *)(lVar13 + 8 + (uint64_t)(uVar8 >> 0xb) * 8);
          puVar1 = (uint64_t *)(lVar6 + uVar17 * 0x18);
          uVar12 = puVar1[1];
          puVar3 = (int32_t *)(lVar6 + 0x10 + uVar17 * 0x18);
          uVar22 = *puVar3;
          uVar23 = puVar3[1];
          lVar6 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
          uVar16 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -0x800);
          puVar2 = (uint64_t *)(lVar6 + uVar16 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (int32_t *)(lVar6 + 0x10 + uVar16 * 0x18);
          *puVar3 = uVar22;
          puVar3[1] = uVar23;
          uVar20 = uVar20 - 1;
        }
        uVar18 = uVar18 + 1;
        *(uint *)(unaff_RBP + -0x51) = uVar18;
        uVar15 = (uint64_t)(uVar20 + (uVar20 >> 0xb) * -0x800);
        lVar5 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar20 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar5 + uVar15 * 0x18);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        *(uint64_t *)(lVar5 + 0x10 + uVar15 * 0x18) = uVar4;
        if (uVar18 == uVar9) break;
        uVar22 = *(int32_t *)(unaff_RBP + -0x59);
        uVar23 = *(int32_t *)(unaff_RBP + -0x55);
        uVar24 = *(int32_t *)(unaff_RBP + -0x51);
        uVar25 = *(int32_t *)(unaff_RBP + -0x4d);
      }
    }
  }
  return;
}






// 函数: void FUN_1800e996b(uint64_t param_1,uint64_t param_2)
void FUN_1800e996b(uint64_t param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  uint uVar9;
  uint uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t *puVar14;
  uint64_t uVar15;
  uint64_t uVar16;
  uint64_t uVar17;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar18;
  uint unaff_EDI;
  uint uVar19;
  int64_t unaff_R14;
  bool bVar20;
  int32_t uVar21;
  int32_t uVar22;
  int32_t in_XMM1_Dc;
  int32_t uVar23;
  int32_t in_XMM1_Dd;
  int32_t uVar24;
  
  *(int *)(unaff_RBP + -9) = (int)param_2;
  *(int *)(unaff_RBP + -5) = (int)((uint64_t)param_2 >> 0x20);
  *(int32_t *)(unaff_RBP + -1) = in_XMM1_Dc;
  *(int32_t *)(unaff_RBP + 3) = in_XMM1_Dd;
  FUN_1800eac80();
  uVar10 = *(uint *)(unaff_R14 + 8);
  *(uint64_t *)(unaff_RBP + -0x59) = unaff_RBX;
  *(uint *)(unaff_RBP + -0x51) = unaff_EDI;
  uVar21 = *(int32_t *)(unaff_RBP + -0x59);
  uVar22 = *(int32_t *)(unaff_RBP + -0x55);
  uVar23 = *(int32_t *)(unaff_RBP + -0x51);
  uVar24 = *(int32_t *)(unaff_RBP + -0x4d);
  *(int32_t *)(unaff_RBP + -0x59) = uVar21;
  *(int32_t *)(unaff_RBP + -0x55) = uVar22;
  *(int32_t *)(unaff_RBP + -0x51) = uVar23;
  *(int32_t *)(unaff_RBP + -0x4d) = uVar24;
  if (unaff_EDI != uVar10) {
    lVar5 = *(int64_t *)(unaff_RBP + -0x59);
    uVar18 = *(uint *)(unaff_RBP + -0x51);
    while( true ) {
      *(int32_t *)(unaff_RBP + -0x49) = uVar21;
      *(int32_t *)(unaff_RBP + -0x45) = uVar22;
      *(int32_t *)(unaff_RBP + -0x41) = uVar23;
      *(int32_t *)(unaff_RBP + -0x3d) = uVar24;
      lVar6 = *(int64_t *)(unaff_RBP + -0x49);
      uVar15 = (uint64_t)(uVar18 + (uVar18 >> 0xb) * -0x800);
      lVar7 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar18 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar7 + uVar15 * 0x18);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar4 = *(uint64_t *)(lVar7 + 0x10 + uVar15 * 0x18);
      *(uint64_t *)(unaff_RBP + 0x27) = uVar11;
      *(uint64_t *)(unaff_RBP + 0x2f) = uVar12;
      uVar15 = *(uint64_t *)(unaff_RBP + 0x2f);
      uVar8 = *(uint64_t *)(unaff_RBP + 0x27);
      uVar19 = *(uint *)(unaff_RBP + -0x41);
      uVar9 = uVar18;
      while( true ) {
        uVar9 = uVar9 - 1;
        uVar17 = (uint64_t)(uVar9 & 0x7ff);
        puVar14 = (uint64_t *)
                  (*(int64_t *)(lVar5 + 8 + (uint64_t)(uVar9 >> 0xb) * 8) + uVar17 * 0x18);
        uVar16 = *puVar14;
        bVar20 = uVar8 < uVar16;
        if (uVar8 == uVar16) {
          bVar20 = uVar15 < puVar14[1];
        }
        if (!bVar20) break;
        lVar7 = *(int64_t *)(lVar5 + 8 + (uint64_t)(uVar9 >> 0xb) * 8);
        puVar1 = (uint64_t *)(lVar7 + uVar17 * 0x18);
        uVar13 = puVar1[1];
        puVar3 = (int32_t *)(lVar7 + 0x10 + uVar17 * 0x18);
        uVar21 = *puVar3;
        uVar22 = puVar3[1];
        lVar7 = *(int64_t *)(lVar6 + 8 + (uint64_t)(uVar19 >> 0xb) * 8);
        uVar16 = (uint64_t)(uVar19 + (uVar19 >> 0xb) * -0x800);
        puVar2 = (uint64_t *)(lVar7 + uVar16 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar3 = (int32_t *)(lVar7 + 0x10 + uVar16 * 0x18);
        *puVar3 = uVar21;
        puVar3[1] = uVar22;
        uVar19 = uVar19 - 1;
      }
      uVar18 = uVar18 + 1;
      *(uint *)(unaff_RBP + -0x51) = uVar18;
      uVar15 = (uint64_t)(uVar19 + (uVar19 >> 0xb) * -0x800);
      lVar6 = *(int64_t *)(lVar6 + 8 + (uint64_t)(uVar19 >> 0xb) * 8);
      puVar1 = (uint64_t *)(lVar6 + uVar15 * 0x18);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(uint64_t *)(lVar6 + 0x10 + uVar15 * 0x18) = uVar4;
      if (uVar18 == uVar10) break;
      uVar21 = *(int32_t *)(unaff_RBP + -0x59);
      uVar22 = *(int32_t *)(unaff_RBP + -0x55);
      uVar23 = *(int32_t *)(unaff_RBP + -0x51);
      uVar24 = *(int32_t *)(unaff_RBP + -0x4d);
    }
  }
  return;
}






// 函数: void FUN_1800e9a94(uint64_t param_1,uint64_t param_2)
void FUN_1800e9a94(uint64_t param_1,uint64_t param_2)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t unaff_RBP;
  int32_t *unaff_R14;
  uint64_t in_XMM1_Qb;
  
  uVar1 = unaff_R14[1];
  uVar2 = unaff_R14[2];
  uVar3 = unaff_R14[3];
  *(int32_t *)(unaff_RBP + 7) = *unaff_R14;
  *(int32_t *)(unaff_RBP + 0xb) = uVar1;
  *(int32_t *)(unaff_RBP + 0xf) = uVar2;
  *(int32_t *)(unaff_RBP + 0x13) = uVar3;
  *(uint64_t *)(unaff_RBP + 0x17) = param_2;
  *(uint64_t *)(unaff_RBP + 0x1f) = in_XMM1_Qb;
  FUN_1800eac80(unaff_RBP + 0x17,unaff_RBP + 7);
  return;
}






// 函数: void FUN_1800e9ab1(void)
void FUN_1800e9ab1(void)

{
  return;
}






// 函数: void FUN_1800e9ab9(void)
void FUN_1800e9ab9(void)

{
  return;
}






// 函数: void FUN_1800e9ac1(void)
void FUN_1800e9ac1(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1800e9ae0(uint64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (uint64_t *)0x0;
  }
  puVar1 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,param_1 * 8 + 0x10,3);
  *puVar1 = param_1 << 0x20 | 8;
  iVar3 = 0;
  puVar2 = puVar1 + 2;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((uint64_t)(int64_t)iVar3 < param_1);
  return puVar1 + 2;
}






// 函数: void FUN_1800e9b50(int64_t param_1)
void FUN_1800e9b50(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t **)(uVar3 + param_1) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(param_1 + -0x10);
}






// 函数: void FUN_1800e9b5a(int64_t param_1)
void FUN_1800e9b5a(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  
  uVar3 = 0;
  uVar1 = *(uint64_t *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(int64_t **)(uVar3 + param_1) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (uint64_t)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(param_1 + -0x10);
}






// 函数: void FUN_1800e9b7d(void)
void FUN_1800e9b7d(void)

{
  int64_t in_RAX;
  uint64_t unaff_RBX;
  int unaff_EBP;
  int64_t unaff_RSI;
  
  do {
    if (*(int64_t **)(unaff_RBX + unaff_RSI) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(unaff_RBX + unaff_RSI) + 0x38))();
    }
    unaff_RBX = (uint64_t)(uint)((int)unaff_RBX + unaff_EBP);
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(unaff_RSI + -0x10);
}






