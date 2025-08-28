#include "TaleWorlds.Native.Split.h"

// 99_part_01_part070.c - 15 个函数

// 函数: void FUN_1800e94a0(longlong param_1,uint param_2)
void FUN_1800e94a0(longlong param_1,uint param_2)

{
  if ((int)param_2 < (int)(param_2 + 0x200)) {
                    // WARNING: Subroutine does not return
    memset(*(longlong *)(param_1 + 8 + (ulonglong)(param_2 >> 9) * 8) +
           (longlong)(int)(param_2 + (param_2 >> 9) * -0x200) * 0x60,0,0x60);
  }
  return;
}






// 函数: void FUN_1800e94be(void)
void FUN_1800e94be(void)

{
  uint unaff_EBX;
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  memset(*(longlong *)(unaff_RBP + 8 + (ulonglong)(unaff_EBX >> 9) * 8) +
         (longlong)(int)(unaff_EBX + (unaff_EBX >> 9) * -0x200) * 0x60,0,0x60);
}






// 函数: void FUN_1800e9522(void)
void FUN_1800e9522(void)

{
  return;
}






// 函数: void FUN_1800e9540(longlong param_1,uint param_2)
void FUN_1800e9540(longlong param_1,uint param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  
  uVar5 = (ulonglong)param_2;
  if ((int)param_2 < (int)(param_2 + 0x200)) {
    do {
      puVar3 = (undefined8 *)
               (*(longlong *)(param_1 + 8 + (uVar5 >> 9) * 8) +
               (longlong)((int)uVar5 + (int)(uVar5 >> 9) * -0x200) * 0x330);
      puVar3[0x11] = 0;
      *(undefined4 *)(puVar3 + 0x12) = 0x1060101;
      *(undefined4 *)((longlong)puVar3 + 0x94) = 0xff000000;
      *(undefined4 *)(puVar3 + 0x13) = 0x40300ff;
      *(undefined8 *)((longlong)puVar3 + 0x9c) = 0x30503;
      *(undefined8 *)((longlong)puVar3 + 0xa4) = 0;
      *(undefined8 *)((longlong)puVar3 + 0xac) = 0;
      *(undefined8 *)((longlong)puVar3 + 0xb4) = 0;
      *(undefined4 *)((longlong)puVar3 + 0xbc) = 0;
      puVar3[0x18] = 0x900;
      puVar3[0x33] = 0;
      puVar3[0x34] = 0;
      puVar3[0x35] = 0;
      puVar3[0x36] = 0;
      puVar3[0x37] = 0;
      puVar3[0x3b] = 0;
      puVar3[0x3c] = 0;
      puVar3[0x3d] = 0;
      *(undefined4 *)(puVar3 + 0x3e) = 0xc;
      puVar3[0x55] = 0;
      puVar3[0x56] = 0;
      puVar3[0x3f] = 0;
      puVar3[0x40] = 0;
      *(undefined4 *)(puVar3 + 0x5c) = 0;
      puVar3[0x50] = 0;
      *(undefined4 *)(puVar3 + 0x10) = 0;
      puVar2 = puVar3;
      for (lVar1 = 0x10; lVar1 != 0; lVar1 = lVar1 + -1) {
        *puVar2 = 0;
        puVar2 = puVar2 + 1;
      }
      *(undefined1 *)((longlong)puVar3 + 0x321) = 0;
      *(undefined4 *)(puVar3 + 0x62) = 0;
      *(undefined4 *)(puVar3 + 0x5a) = 0;
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
      *(undefined4 *)((longlong)puVar3 + 0x314) = 0;
      puVar3[0x41] = 0;
      puVar3[0x54] = 0;
      puVar3[0x57] = 0;
      *(undefined4 *)((longlong)puVar3 + 0x30c) = 0xffffffff;
      puVar3[0x58] = 0;
      puVar3[0x59] = 0;
      *(undefined1 *)(puVar3 + 100) = 0;
      *(undefined1 *)((longlong)puVar3 + 0x322) = 0;
      uVar4 = (int)uVar5 + 1;
      uVar5 = (ulonglong)uVar4;
    } while ((int)uVar4 < (int)(param_2 + 0x200));
  }
  return;
}






// 函数: void FUN_1800e9790(longlong param_1,uint param_2)
void FUN_1800e9790(longlong param_1,uint param_2)

{
  uint uVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_2;
  if ((int)param_2 < (int)(param_2 + 0x10)) {
    do {
      FUN_180245b90((longlong)((int)uVar2 + (int)(uVar2 >> 4) * -0x10) * 0x12c30 +
                    *(longlong *)(param_1 + 8 + (uVar2 >> 4) * 8));
      uVar1 = (int)uVar2 + 1;
      uVar2 = (ulonglong)uVar1;
    } while ((int)uVar1 < (int)(param_2 + 0x10));
  }
  return;
}



undefined8 *
FUN_1800e97f0(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



undefined8 *
FUN_1800e9840(undefined8 *param_1,ulonglong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  if ((longlong *)param_1[8] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[8] + 0x38))();
  }
  if ((code *)param_1[6] != (code *)0x0) {
    (*(code *)param_1[6])(param_1 + 4,0,0,param_4,uVar1);
  }
  *param_1 = &UNK_18098bdc8;
  *param_1 = &UNK_180a21720;
  *param_1 = &UNK_180a21690;
  if ((param_2 & 1) != 0) {
    free(param_1,0x58);
  }
  return param_1;
}






// 函数: void FUN_1800e98d0(longlong *param_1,undefined8 *param_2)
void FUN_1800e98d0(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  longlong lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  bool bVar21;
  undefined4 uStack_ac;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  longlong lStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  iVar5 = (int)param_1[1];
  if (iVar5 != *(int *)(param_2 + 1)) {
    iVar19 = 0;
    lVar17 = (longlong)*(int *)(param_2 + 1) - (longlong)iVar5;
    for (lVar13 = lVar17; lVar13 != 0; lVar13 = lVar13 >> 1) {
      iVar19 = iVar19 + 1;
    }
    uStack_98 = *param_2;
    uStack_90 = param_2[1];
    uStack_88 = (undefined4)*param_1;
    uStack_84 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_80 = (undefined4)param_1[1];
    uStack_7c = *(undefined4 *)((longlong)param_1 + 0xc);
    FUN_1800ea950(&uStack_88,&uStack_98,(longlong)(iVar19 + -1) * 2);
    uStack_68 = (undefined4)*param_1;
    uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_60 = (undefined4)param_1[1];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
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
        uVar15 = (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800);
        lVar17 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
        puVar14 = (ulonglong *)(lVar17 + uVar15 * 0x18);
        uVar10 = *puVar14;
        uVar11 = puVar14[1];
        uVar4 = *(undefined8 *)(lVar17 + 0x10 + uVar15 * 0x18);
        uVar20 = uVar18;
        uVar6 = uVar18;
        while( true ) {
          uVar6 = uVar6 - 1;
          uVar16 = (ulonglong)(uVar6 & 0x7ff);
          puVar14 = (ulonglong *)
                    (*(longlong *)(lVar13 + 8 + (ulonglong)(uVar6 >> 0xb) * 8) + uVar16 * 0x18);
          uVar15 = *puVar14;
          bVar21 = uVar10 < uVar15;
          if (uVar10 == uVar15) {
            bVar21 = uVar11 < puVar14[1];
          }
          if (!bVar21) break;
          lVar17 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar6 >> 0xb) * 8);
          puVar1 = (undefined8 *)(lVar17 + uVar16 * 0x18);
          uVar12 = puVar1[1];
          puVar3 = (undefined4 *)(lVar17 + 0x10 + uVar16 * 0x18);
          uVar8 = *puVar3;
          uVar9 = puVar3[1];
          lVar17 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar20 >> 0xb) * 8);
          uVar15 = (ulonglong)(uVar20 + (uVar20 >> 0xb) * -0x800);
          puVar2 = (undefined8 *)(lVar17 + uVar15 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (undefined4 *)(lVar17 + 0x10 + uVar15 * 0x18);
          *puVar3 = uVar8;
          puVar3[1] = uVar9;
          uVar20 = uVar20 - 1;
        }
        uVar15 = (ulonglong)(uVar20 + (uVar20 >> 0xb) * -0x800);
        lVar17 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar20 >> 0xb) * 8);
        puVar14 = (ulonglong *)(lVar17 + uVar15 * 0x18);
        *puVar14 = uVar10;
        puVar14[1] = uVar11;
        *(undefined8 *)(lVar17 + 0x10 + uVar15 * 0x18) = uVar4;
      }
    }
  }
  return;
}






// 函数: void FUN_1800e98fb(undefined4 *param_1,undefined8 *param_2)
void FUN_1800e98fb(undefined4 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong in_RAX;
  longlong lVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  uint uVar18;
  longlong unaff_RDI;
  int iVar19;
  uint uVar20;
  undefined8 *unaff_R14;
  bool bVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  
  iVar19 = 0;
  for (lVar13 = in_RAX - unaff_RDI; lVar13 != 0; lVar13 = lVar13 >> 1) {
    iVar19 = iVar19 + 1;
  }
  uVar4 = param_2[1];
  uVar22 = *param_1;
  uVar23 = param_1[1];
  uVar24 = param_1[2];
  uVar25 = param_1[3];
  *(undefined8 *)(unaff_RBP + -0x39) = *param_2;
  *(undefined8 *)(unaff_RBP + -0x31) = uVar4;
  *(undefined4 *)(unaff_RBP + -0x29) = uVar22;
  *(undefined4 *)(unaff_RBP + -0x25) = uVar23;
  *(undefined4 *)(unaff_RBP + -0x21) = uVar24;
  *(undefined4 *)(unaff_RBP + -0x1d) = uVar25;
  FUN_1800ea950(unaff_RBP + -0x29,unaff_RBP + -0x39,(longlong)(iVar19 + -1) * 2);
  uVar22 = *(undefined4 *)unaff_RSI;
  uVar23 = *(undefined4 *)((longlong)unaff_RSI + 4);
  uVar24 = *(undefined4 *)(unaff_RSI + 1);
  uVar25 = *(undefined4 *)((longlong)unaff_RSI + 0xc);
  if (in_RAX - unaff_RDI < 0x1d) {
    uVar4 = unaff_R14[1];
    *(undefined8 *)(unaff_RBP + 7) = *unaff_R14;
    *(undefined8 *)(unaff_RBP + 0xf) = uVar4;
    *(undefined4 *)(unaff_RBP + 0x17) = uVar22;
    *(undefined4 *)(unaff_RBP + 0x1b) = uVar23;
    *(undefined4 *)(unaff_RBP + 0x1f) = uVar24;
    *(undefined4 *)(unaff_RBP + 0x23) = uVar25;
    FUN_1800eac80(unaff_RBP + 0x17,unaff_RBP + 7);
  }
  else {
    uVar4 = *unaff_RSI;
    uVar18 = (int)unaff_RDI + 0x1c;
    *(undefined8 *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    *(undefined8 *)(unaff_RBP + -0x19) = *(undefined8 *)(unaff_RBP + -0x59);
    *(undefined8 *)(unaff_RBP + -0x11) = *(undefined8 *)(unaff_RBP + -0x51);
    *(undefined4 *)(unaff_RBP + -9) = uVar22;
    *(undefined4 *)(unaff_RBP + -5) = uVar23;
    *(undefined4 *)(unaff_RBP + -1) = uVar24;
    *(undefined4 *)(unaff_RBP + 3) = uVar25;
    FUN_1800eac80(unaff_RBP + -9,unaff_RBP + -0x19);
    uVar9 = *(uint *)(unaff_R14 + 1);
    *(undefined8 *)(unaff_RBP + -0x59) = uVar4;
    *(uint *)(unaff_RBP + -0x51) = uVar18;
    uVar22 = *(undefined4 *)(unaff_RBP + -0x59);
    uVar23 = *(undefined4 *)(unaff_RBP + -0x55);
    uVar24 = *(undefined4 *)(unaff_RBP + -0x51);
    uVar25 = *(undefined4 *)(unaff_RBP + -0x4d);
    *(undefined4 *)(unaff_RBP + -0x59) = uVar22;
    *(undefined4 *)(unaff_RBP + -0x55) = uVar23;
    *(undefined4 *)(unaff_RBP + -0x51) = uVar24;
    *(undefined4 *)(unaff_RBP + -0x4d) = uVar25;
    if (uVar18 != uVar9) {
      lVar13 = *(longlong *)(unaff_RBP + -0x59);
      uVar18 = *(uint *)(unaff_RBP + -0x51);
      while( true ) {
        *(undefined4 *)(unaff_RBP + -0x49) = uVar22;
        *(undefined4 *)(unaff_RBP + -0x45) = uVar23;
        *(undefined4 *)(unaff_RBP + -0x41) = uVar24;
        *(undefined4 *)(unaff_RBP + -0x3d) = uVar25;
        lVar5 = *(longlong *)(unaff_RBP + -0x49);
        uVar15 = (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800);
        lVar6 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
        puVar1 = (undefined8 *)(lVar6 + uVar15 * 0x18);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar6 + 0x10 + uVar15 * 0x18);
        *(undefined8 *)(unaff_RBP + 0x27) = uVar10;
        *(undefined8 *)(unaff_RBP + 0x2f) = uVar11;
        uVar15 = *(ulonglong *)(unaff_RBP + 0x2f);
        uVar7 = *(ulonglong *)(unaff_RBP + 0x27);
        uVar20 = *(uint *)(unaff_RBP + -0x41);
        uVar8 = uVar18;
        while( true ) {
          uVar8 = uVar8 - 1;
          uVar17 = (ulonglong)(uVar8 & 0x7ff);
          puVar14 = (ulonglong *)
                    (*(longlong *)(lVar13 + 8 + (ulonglong)(uVar8 >> 0xb) * 8) + uVar17 * 0x18);
          uVar16 = *puVar14;
          bVar21 = uVar7 < uVar16;
          if (uVar7 == uVar16) {
            bVar21 = uVar15 < puVar14[1];
          }
          if (!bVar21) break;
          lVar6 = *(longlong *)(lVar13 + 8 + (ulonglong)(uVar8 >> 0xb) * 8);
          puVar1 = (undefined8 *)(lVar6 + uVar17 * 0x18);
          uVar12 = puVar1[1];
          puVar3 = (undefined4 *)(lVar6 + 0x10 + uVar17 * 0x18);
          uVar22 = *puVar3;
          uVar23 = puVar3[1];
          lVar6 = *(longlong *)(lVar5 + 8 + (ulonglong)(uVar20 >> 0xb) * 8);
          uVar16 = (ulonglong)(uVar20 + (uVar20 >> 0xb) * -0x800);
          puVar2 = (undefined8 *)(lVar6 + uVar16 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar12;
          puVar3 = (undefined4 *)(lVar6 + 0x10 + uVar16 * 0x18);
          *puVar3 = uVar22;
          puVar3[1] = uVar23;
          uVar20 = uVar20 - 1;
        }
        uVar18 = uVar18 + 1;
        *(uint *)(unaff_RBP + -0x51) = uVar18;
        uVar15 = (ulonglong)(uVar20 + (uVar20 >> 0xb) * -0x800);
        lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)(uVar20 >> 0xb) * 8);
        puVar1 = (undefined8 *)(lVar5 + uVar15 * 0x18);
        *puVar1 = uVar10;
        puVar1[1] = uVar11;
        *(undefined8 *)(lVar5 + 0x10 + uVar15 * 0x18) = uVar4;
        if (uVar18 == uVar9) break;
        uVar22 = *(undefined4 *)(unaff_RBP + -0x59);
        uVar23 = *(undefined4 *)(unaff_RBP + -0x55);
        uVar24 = *(undefined4 *)(unaff_RBP + -0x51);
        uVar25 = *(undefined4 *)(unaff_RBP + -0x4d);
      }
    }
  }
  return;
}






// 函数: void FUN_1800e996b(undefined8 param_1,undefined8 param_2)
void FUN_1800e996b(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint uVar18;
  uint unaff_EDI;
  uint uVar19;
  longlong unaff_R14;
  bool bVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 in_XMM1_Dc;
  undefined4 uVar23;
  undefined4 in_XMM1_Dd;
  undefined4 uVar24;
  
  *(int *)(unaff_RBP + -9) = (int)param_2;
  *(int *)(unaff_RBP + -5) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + -1) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + 3) = in_XMM1_Dd;
  FUN_1800eac80();
  uVar10 = *(uint *)(unaff_R14 + 8);
  *(undefined8 *)(unaff_RBP + -0x59) = unaff_RBX;
  *(uint *)(unaff_RBP + -0x51) = unaff_EDI;
  uVar21 = *(undefined4 *)(unaff_RBP + -0x59);
  uVar22 = *(undefined4 *)(unaff_RBP + -0x55);
  uVar23 = *(undefined4 *)(unaff_RBP + -0x51);
  uVar24 = *(undefined4 *)(unaff_RBP + -0x4d);
  *(undefined4 *)(unaff_RBP + -0x59) = uVar21;
  *(undefined4 *)(unaff_RBP + -0x55) = uVar22;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar23;
  *(undefined4 *)(unaff_RBP + -0x4d) = uVar24;
  if (unaff_EDI != uVar10) {
    lVar5 = *(longlong *)(unaff_RBP + -0x59);
    uVar18 = *(uint *)(unaff_RBP + -0x51);
    while( true ) {
      *(undefined4 *)(unaff_RBP + -0x49) = uVar21;
      *(undefined4 *)(unaff_RBP + -0x45) = uVar22;
      *(undefined4 *)(unaff_RBP + -0x41) = uVar23;
      *(undefined4 *)(unaff_RBP + -0x3d) = uVar24;
      lVar6 = *(longlong *)(unaff_RBP + -0x49);
      uVar15 = (ulonglong)(uVar18 + (uVar18 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(lVar5 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar7 + uVar15 * 0x18);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      uVar4 = *(undefined8 *)(lVar7 + 0x10 + uVar15 * 0x18);
      *(undefined8 *)(unaff_RBP + 0x27) = uVar11;
      *(undefined8 *)(unaff_RBP + 0x2f) = uVar12;
      uVar15 = *(ulonglong *)(unaff_RBP + 0x2f);
      uVar8 = *(ulonglong *)(unaff_RBP + 0x27);
      uVar19 = *(uint *)(unaff_RBP + -0x41);
      uVar9 = uVar18;
      while( true ) {
        uVar9 = uVar9 - 1;
        uVar17 = (ulonglong)(uVar9 & 0x7ff);
        puVar14 = (ulonglong *)
                  (*(longlong *)(lVar5 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) + uVar17 * 0x18);
        uVar16 = *puVar14;
        bVar20 = uVar8 < uVar16;
        if (uVar8 == uVar16) {
          bVar20 = uVar15 < puVar14[1];
        }
        if (!bVar20) break;
        lVar7 = *(longlong *)(lVar5 + 8 + (ulonglong)(uVar9 >> 0xb) * 8);
        puVar1 = (undefined8 *)(lVar7 + uVar17 * 0x18);
        uVar13 = puVar1[1];
        puVar3 = (undefined4 *)(lVar7 + 0x10 + uVar17 * 0x18);
        uVar21 = *puVar3;
        uVar22 = puVar3[1];
        lVar7 = *(longlong *)(lVar6 + 8 + (ulonglong)(uVar19 >> 0xb) * 8);
        uVar16 = (ulonglong)(uVar19 + (uVar19 >> 0xb) * -0x800);
        puVar2 = (undefined8 *)(lVar7 + uVar16 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar13;
        puVar3 = (undefined4 *)(lVar7 + 0x10 + uVar16 * 0x18);
        *puVar3 = uVar21;
        puVar3[1] = uVar22;
        uVar19 = uVar19 - 1;
      }
      uVar18 = uVar18 + 1;
      *(uint *)(unaff_RBP + -0x51) = uVar18;
      uVar15 = (ulonglong)(uVar19 + (uVar19 >> 0xb) * -0x800);
      lVar6 = *(longlong *)(lVar6 + 8 + (ulonglong)(uVar19 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar6 + uVar15 * 0x18);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      *(undefined8 *)(lVar6 + 0x10 + uVar15 * 0x18) = uVar4;
      if (uVar18 == uVar10) break;
      uVar21 = *(undefined4 *)(unaff_RBP + -0x59);
      uVar22 = *(undefined4 *)(unaff_RBP + -0x55);
      uVar23 = *(undefined4 *)(unaff_RBP + -0x51);
      uVar24 = *(undefined4 *)(unaff_RBP + -0x4d);
    }
  }
  return;
}






// 函数: void FUN_1800e9a94(undefined8 param_1,undefined8 param_2)
void FUN_1800e9a94(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong unaff_RBP;
  undefined4 *unaff_R14;
  undefined8 in_XMM1_Qb;
  
  uVar1 = unaff_R14[1];
  uVar2 = unaff_R14[2];
  uVar3 = unaff_R14[3];
  *(undefined4 *)(unaff_RBP + 7) = *unaff_R14;
  *(undefined4 *)(unaff_RBP + 0xb) = uVar1;
  *(undefined4 *)(unaff_RBP + 0xf) = uVar2;
  *(undefined4 *)(unaff_RBP + 0x13) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x17) = param_2;
  *(undefined8 *)(unaff_RBP + 0x1f) = in_XMM1_Qb;
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

ulonglong * FUN_1800e9ae0(ulonglong param_1)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return (ulonglong *)0x0;
  }
  puVar1 = (ulonglong *)FUN_18062b420(_DAT_180c8ed18,param_1 * 8 + 0x10,3);
  *puVar1 = param_1 << 0x20 | 8;
  iVar3 = 0;
  puVar2 = puVar1 + 2;
  do {
    iVar3 = iVar3 + 1;
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  } while ((ulonglong)(longlong)iVar3 < param_1);
  return puVar1 + 2;
}






// 函数: void FUN_1800e9b50(longlong param_1)
void FUN_1800e9b50(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  if (param_1 == 0) {
    return;
  }
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(longlong **)(uVar3 + param_1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}






// 函数: void FUN_1800e9b5a(longlong param_1)
void FUN_1800e9b5a(longlong param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  
  uVar3 = 0;
  uVar1 = *(ulonglong *)(param_1 + -0x10);
  uVar2 = uVar1 >> 0x20;
  if ((int)(uVar1 >> 0x20) != 0) {
    do {
      if (*(longlong **)(uVar3 + param_1) != (longlong *)0x0) {
        (**(code **)(**(longlong **)(uVar3 + param_1) + 0x38))();
      }
      uVar3 = (ulonglong)(uint)((int)uVar3 + (int)uVar1);
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_1 + -0x10);
}






// 函数: void FUN_1800e9b7d(void)
void FUN_1800e9b7d(void)

{
  longlong in_RAX;
  ulonglong unaff_RBX;
  int unaff_EBP;
  longlong unaff_RSI;
  
  do {
    if (*(longlong **)(unaff_RBX + unaff_RSI) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(unaff_RBX + unaff_RSI) + 0x38))();
    }
    unaff_RBX = (ulonglong)(uint)((int)unaff_RBX + unaff_EBP);
    in_RAX = in_RAX + -1;
  } while (in_RAX != 0);
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RSI + -0x10);
}






