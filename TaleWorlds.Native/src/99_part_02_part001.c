#include "TaleWorlds.Native.Split.h"

// 99_part_02_part001.c - 16 个函数

#include "TaleWorlds.Native.Split.h"

// 99_part_02.c - 500 个函数


// 函数: void FUN_1800e9ba1(void)
void FUN_1800e9ba1(void)

{
  longlong unaff_RSI;
  
                    // WARNING: Subroutine does not return
  FUN_18064e900(unaff_RSI + -0x10);
}






// 函数: void FUN_1800e9bbe(void)
void FUN_1800e9bbe(void)

{
  return;
}






// 函数: void FUN_1800e9bc0(longlong *param_1,undefined8 *param_2,undefined1 param_3)
void FUN_1800e9bc0(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong lVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  bool bVar19;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong lStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  iVar3 = (int)param_1[1];
  if (iVar3 != *(int *)(param_2 + 1)) {
    iVar17 = 0;
    lVar15 = (longlong)*(int *)(param_2 + 1) - (longlong)iVar3;
    for (lVar12 = lVar15; lVar12 != 0; lVar12 = lVar12 >> 1) {
      iVar17 = iVar17 + 1;
    }
    uStack_68 = (undefined4)*param_1;
    uStack_64 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_60 = (undefined4)param_1[1];
    uStack_5c = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_88 = *param_2;
    uStack_80 = param_2[1];
    FUN_1800eb500(&uStack_68,&uStack_88,(longlong)(iVar17 + -1) * 2,param_3);
    uStack_48 = (undefined4)*param_1;
    uStack_44 = *(undefined4 *)((longlong)param_1 + 4);
    uStack_40 = (undefined4)param_1[1];
    uStack_3c = *(undefined4 *)((longlong)param_1 + 0xc);
    if (lVar15 < 0x1d) {
      uStack_38 = *param_2;
      uStack_30 = param_2[1];
      uStack_28 = uStack_48;
      uStack_24 = uStack_44;
      uStack_20 = uStack_40;
      uStack_1c = uStack_3c;
      FUN_1800ea540(&uStack_28,&uStack_38);
    }
    else {
      lVar12 = *param_1;
      uVar16 = iVar3 + 0x1c;
      uStack_50 = CONCAT44(uStack_8c,uVar16);
      lStack_58 = lVar12;
      FUN_1800ea540(&uStack_48,&lStack_58);
      uVar6 = *(uint *)(param_2 + 1);
      for (; uVar16 != uVar6; uVar16 = uVar16 + 1) {
        puVar14 = (ulonglong *)
                  (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar16 >> 0xb) * 8) +
                  (ulonglong)(uVar16 + (uVar16 >> 0xb) * -0x800) * 0x10);
        uVar10 = *puVar14;
        plVar11 = (longlong *)puVar14[1];
        uVar18 = uVar16;
        uVar5 = uVar16;
        while( true ) {
          uVar5 = uVar5 - 1;
          puVar14 = (ulonglong *)
                    (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
                    (ulonglong)(uVar5 & 0x7ff) * 0x10);
          uVar4 = *puVar14;
          bVar19 = uVar10 < uVar4;
          if (uVar10 == uVar4) {
            bVar19 = *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184) <
                     *(int *)(*(longlong *)(*plVar11 + 0x18) + 0x184);
          }
          uVar13 = uVar18 >> 0xb;
          if (!bVar19) break;
          puVar1 = (undefined4 *)
                   (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar5 >> 0xb) * 8) +
                   (ulonglong)(uVar5 & 0x7ff) * 0x10);
          uVar7 = puVar1[1];
          uVar8 = puVar1[2];
          uVar9 = puVar1[3];
          puVar2 = (undefined4 *)
                   (*(longlong *)(lVar12 + 8 + (ulonglong)uVar13 * 8) +
                   (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
          *puVar2 = *puVar1;
          puVar2[1] = uVar7;
          puVar2[2] = uVar8;
          puVar2[3] = uVar9;
          uVar18 = uVar18 - 1;
        }
        puVar14 = (ulonglong *)
                  (*(longlong *)(lVar12 + 8 + (ulonglong)uVar13 * 8) +
                  (ulonglong)(uVar18 + uVar13 * -0x800) * 0x10);
        *puVar14 = uVar10;
        puVar14[1] = (ulonglong)plVar11;
      }
    }
  }
  return;
}






// 函数: void FUN_1800e9beb(undefined4 *param_1,undefined8 *param_2,undefined1 param_3)
void FUN_1800e9beb(undefined4 *param_1,undefined8 *param_2,undefined1 param_3)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  longlong in_RAX;
  longlong lVar12;
  uint uVar13;
  ulonglong *puVar14;
  longlong unaff_RBP;
  undefined8 *unaff_RSI;
  uint uVar15;
  longlong unaff_RDI;
  int iVar16;
  uint uVar17;
  undefined8 *unaff_R14;
  bool bVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  
  iVar16 = 0;
  for (lVar12 = in_RAX - unaff_RDI; lVar12 != 0; lVar12 = lVar12 >> 1) {
    iVar16 = iVar16 + 1;
  }
  uVar19 = *param_1;
  uVar20 = param_1[1];
  uVar21 = param_1[2];
  uVar22 = param_1[3];
  uVar4 = param_2[1];
  *(undefined8 *)(unaff_RBP + -0x29) = *param_2;
  *(undefined8 *)(unaff_RBP + -0x21) = uVar4;
  *(undefined4 *)(unaff_RBP + -9) = uVar19;
  *(undefined4 *)(unaff_RBP + -5) = uVar20;
  *(undefined4 *)(unaff_RBP + -1) = uVar21;
  *(undefined4 *)(unaff_RBP + 3) = uVar22;
  FUN_1800eb500(unaff_RBP + -9,unaff_RBP + -0x29,(longlong)(iVar16 + -1) * 2,param_3);
  uVar19 = *(undefined4 *)unaff_RSI;
  uVar20 = *(undefined4 *)((longlong)unaff_RSI + 4);
  uVar21 = *(undefined4 *)(unaff_RSI + 1);
  uVar22 = *(undefined4 *)((longlong)unaff_RSI + 0xc);
  if (in_RAX - unaff_RDI < 0x1d) {
    uVar4 = unaff_R14[1];
    *(undefined8 *)(unaff_RBP + 0x27) = *unaff_R14;
    *(undefined8 *)(unaff_RBP + 0x2f) = uVar4;
    *(undefined4 *)(unaff_RBP + 0x37) = uVar19;
    *(undefined4 *)(unaff_RBP + 0x3b) = uVar20;
    *(undefined4 *)(unaff_RBP + 0x3f) = uVar21;
    *(undefined4 *)(unaff_RBP + 0x43) = uVar22;
    FUN_1800ea540(unaff_RBP + 0x37,unaff_RBP + 0x27);
  }
  else {
    uVar4 = *unaff_RSI;
    uVar15 = (int)unaff_RDI + 0x1c;
    *(undefined8 *)(unaff_RBP + -0x39) = uVar4;
    *(uint *)(unaff_RBP + -0x31) = uVar15;
    *(undefined8 *)(unaff_RBP + 7) = *(undefined8 *)(unaff_RBP + -0x39);
    *(undefined8 *)(unaff_RBP + 0xf) = *(undefined8 *)(unaff_RBP + -0x31);
    *(undefined4 *)(unaff_RBP + 0x17) = uVar19;
    *(undefined4 *)(unaff_RBP + 0x1b) = uVar20;
    *(undefined4 *)(unaff_RBP + 0x1f) = uVar21;
    *(undefined4 *)(unaff_RBP + 0x23) = uVar22;
    FUN_1800ea540(unaff_RBP + 0x17,unaff_RBP + 7);
    uVar10 = *(uint *)(unaff_R14 + 1);
    *(undefined8 *)(unaff_RBP + -0x39) = uVar4;
    *(uint *)(unaff_RBP + -0x31) = uVar15;
    uVar19 = *(undefined4 *)(unaff_RBP + -0x39);
    uVar20 = *(undefined4 *)(unaff_RBP + -0x35);
    uVar21 = *(undefined4 *)(unaff_RBP + -0x31);
    uVar22 = *(undefined4 *)(unaff_RBP + -0x2d);
    *(undefined4 *)(unaff_RBP + -0x39) = uVar19;
    *(undefined4 *)(unaff_RBP + -0x35) = uVar20;
    *(undefined4 *)(unaff_RBP + -0x31) = uVar21;
    *(undefined4 *)(unaff_RBP + -0x2d) = uVar22;
    if (uVar15 != uVar10) {
      lVar12 = *(longlong *)(unaff_RBP + -0x39);
      uVar15 = *(uint *)(unaff_RBP + -0x31);
      while( true ) {
        *(undefined4 *)(unaff_RBP + -0x19) = uVar19;
        *(undefined4 *)(unaff_RBP + -0x15) = uVar20;
        *(undefined4 *)(unaff_RBP + -0x11) = uVar21;
        *(undefined4 *)(unaff_RBP + -0xd) = uVar22;
        lVar5 = *(longlong *)(unaff_RBP + -0x19);
        puVar1 = (undefined8 *)
                 (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar15 >> 0xb) * 8) +
                 (ulonglong)(uVar15 + (uVar15 >> 0xb) * -0x800) * 0x10);
        uVar4 = *puVar1;
        uVar11 = puVar1[1];
        *(undefined8 *)(unaff_RBP + -0x29) = uVar4;
        *(undefined8 *)(unaff_RBP + -0x21) = uVar11;
        plVar6 = *(longlong **)(unaff_RBP + -0x21);
        uVar7 = *(ulonglong *)(unaff_RBP + -0x29);
        uVar17 = *(uint *)(unaff_RBP + -0x11);
        uVar9 = uVar15;
        while( true ) {
          uVar9 = uVar9 - 1;
          puVar14 = (ulonglong *)
                    (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
                    (ulonglong)(uVar9 & 0x7ff) * 0x10);
          uVar8 = *puVar14;
          bVar18 = uVar7 < uVar8;
          if (uVar7 == uVar8) {
            bVar18 = *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184) <
                     *(int *)(*(longlong *)(*plVar6 + 0x18) + 0x184);
          }
          uVar13 = uVar17 >> 0xb;
          if (!bVar18) break;
          puVar2 = (undefined4 *)
                   (*(longlong *)(lVar12 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
                   (ulonglong)(uVar9 & 0x7ff) * 0x10);
          uVar19 = puVar2[1];
          uVar20 = puVar2[2];
          uVar21 = puVar2[3];
          puVar3 = (undefined4 *)
                   (*(longlong *)(lVar5 + 8 + (ulonglong)uVar13 * 8) +
                   (ulonglong)(uVar17 + uVar13 * -0x800) * 0x10);
          *puVar3 = *puVar2;
          puVar3[1] = uVar19;
          puVar3[2] = uVar20;
          puVar3[3] = uVar21;
          uVar17 = uVar17 - 1;
        }
        uVar15 = uVar15 + 1;
        lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar13 * 8);
        *(uint *)(unaff_RBP + -0x31) = uVar15;
        puVar1 = (undefined8 *)(lVar5 + (ulonglong)(uVar17 + uVar13 * -0x800) * 0x10);
        *puVar1 = uVar4;
        puVar1[1] = uVar11;
        if (uVar15 == uVar10) break;
        uVar19 = *(undefined4 *)(unaff_RBP + -0x39);
        uVar20 = *(undefined4 *)(unaff_RBP + -0x35);
        uVar21 = *(undefined4 *)(unaff_RBP + -0x31);
        uVar22 = *(undefined4 *)(unaff_RBP + -0x2d);
      }
    }
  }
  return;
}






// 函数: void FUN_1800e9c62(undefined8 param_1,undefined8 param_2)
void FUN_1800e9c62(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  uint uVar13;
  ulonglong *puVar14;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  uint uVar15;
  uint unaff_EDI;
  uint uVar16;
  longlong unaff_R14;
  bool bVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 in_XMM1_Dc;
  undefined4 uVar20;
  undefined4 in_XMM1_Dd;
  undefined4 uVar21;
  
  *(int *)(unaff_RBP + 0x17) = (int)param_2;
  *(int *)(unaff_RBP + 0x1b) = (int)((ulonglong)param_2 >> 0x20);
  *(undefined4 *)(unaff_RBP + 0x1f) = in_XMM1_Dc;
  *(undefined4 *)(unaff_RBP + 0x23) = in_XMM1_Dd;
  FUN_1800ea540();
  uVar10 = *(uint *)(unaff_R14 + 8);
  *(undefined8 *)(unaff_RBP + -0x39) = unaff_RBX;
  *(uint *)(unaff_RBP + -0x31) = unaff_EDI;
  uVar18 = *(undefined4 *)(unaff_RBP + -0x39);
  uVar19 = *(undefined4 *)(unaff_RBP + -0x35);
  uVar20 = *(undefined4 *)(unaff_RBP + -0x31);
  uVar21 = *(undefined4 *)(unaff_RBP + -0x2d);
  *(undefined4 *)(unaff_RBP + -0x39) = uVar18;
  *(undefined4 *)(unaff_RBP + -0x35) = uVar19;
  *(undefined4 *)(unaff_RBP + -0x31) = uVar20;
  *(undefined4 *)(unaff_RBP + -0x2d) = uVar21;
  if (unaff_EDI != uVar10) {
    lVar4 = *(longlong *)(unaff_RBP + -0x39);
    uVar15 = *(uint *)(unaff_RBP + -0x31);
    while( true ) {
      *(undefined4 *)(unaff_RBP + -0x19) = uVar18;
      *(undefined4 *)(unaff_RBP + -0x15) = uVar19;
      *(undefined4 *)(unaff_RBP + -0x11) = uVar20;
      *(undefined4 *)(unaff_RBP + -0xd) = uVar21;
      lVar5 = *(longlong *)(unaff_RBP + -0x19);
      puVar1 = (undefined8 *)
               (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar15 >> 0xb) * 8) +
               (ulonglong)(uVar15 + (uVar15 >> 0xb) * -0x800) * 0x10);
      uVar11 = *puVar1;
      uVar12 = puVar1[1];
      *(undefined8 *)(unaff_RBP + -0x29) = uVar11;
      *(undefined8 *)(unaff_RBP + -0x21) = uVar12;
      plVar6 = *(longlong **)(unaff_RBP + -0x21);
      uVar7 = *(ulonglong *)(unaff_RBP + -0x29);
      uVar16 = *(uint *)(unaff_RBP + -0x11);
      uVar9 = uVar15;
      while( true ) {
        uVar9 = uVar9 - 1;
        puVar14 = (ulonglong *)
                  (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
                  (ulonglong)(uVar9 & 0x7ff) * 0x10);
        uVar8 = *puVar14;
        bVar17 = uVar7 < uVar8;
        if (uVar7 == uVar8) {
          bVar17 = *(int *)(*(longlong *)(*(longlong *)puVar14[1] + 0x18) + 0x184) <
                   *(int *)(*(longlong *)(*plVar6 + 0x18) + 0x184);
        }
        uVar13 = uVar16 >> 0xb;
        if (!bVar17) break;
        puVar2 = (undefined4 *)
                 (*(longlong *)(lVar4 + 8 + (ulonglong)(uVar9 >> 0xb) * 8) +
                 (ulonglong)(uVar9 & 0x7ff) * 0x10);
        uVar18 = puVar2[1];
        uVar19 = puVar2[2];
        uVar20 = puVar2[3];
        puVar3 = (undefined4 *)
                 (*(longlong *)(lVar5 + 8 + (ulonglong)uVar13 * 8) +
                 (ulonglong)(uVar16 + uVar13 * -0x800) * 0x10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar18;
        puVar3[2] = uVar19;
        puVar3[3] = uVar20;
        uVar16 = uVar16 - 1;
      }
      uVar15 = uVar15 + 1;
      lVar5 = *(longlong *)(lVar5 + 8 + (ulonglong)uVar13 * 8);
      *(uint *)(unaff_RBP + -0x31) = uVar15;
      puVar1 = (undefined8 *)(lVar5 + (ulonglong)(uVar16 + uVar13 * -0x800) * 0x10);
      *puVar1 = uVar11;
      puVar1[1] = uVar12;
      if (uVar15 == uVar10) break;
      uVar18 = *(undefined4 *)(unaff_RBP + -0x39);
      uVar19 = *(undefined4 *)(unaff_RBP + -0x35);
      uVar20 = *(undefined4 *)(unaff_RBP + -0x31);
      uVar21 = *(undefined4 *)(unaff_RBP + -0x2d);
    }
  }
  return;
}






// 函数: void FUN_1800e9ca1(undefined8 param_1,undefined8 param_2)
void FUN_1800e9ca1(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulonglong *puVar11;
  longlong unaff_RBP;
  uint unaff_ESI;
  longlong unaff_RDI;
  uint uVar12;
  uint uVar13;
  uint unaff_R12D;
  bool bVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  
  uVar16 = (undefined4)((ulonglong)param_2 >> 0x20);
  uVar15 = (undefined4)param_2;
  while( true ) {
    *(undefined4 *)(unaff_RBP + -0x19) = uVar15;
    *(undefined4 *)(unaff_RBP + -0x15) = uVar16;
    *(undefined4 *)(unaff_RBP + -0x11) = in_XMM1_Dc;
    *(undefined4 *)(unaff_RBP + -0xd) = in_XMM1_Dd;
    lVar3 = *(longlong *)(unaff_RBP + -0x19);
    puVar1 = (undefined8 *)
             (*(longlong *)(unaff_RDI + 8 + (ulonglong)(unaff_ESI >> 0xb) * 8) +
             (ulonglong)(unaff_ESI + (unaff_ESI >> 0xb) * -0x800) * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    *(undefined8 *)(unaff_RBP + -0x29) = uVar7;
    *(undefined8 *)(unaff_RBP + -0x21) = uVar8;
    plVar4 = *(longlong **)(unaff_RBP + -0x21);
    uVar5 = *(ulonglong *)(unaff_RBP + -0x29);
    uVar12 = *(uint *)(unaff_RBP + -0x11);
    uVar13 = unaff_ESI;
    while( true ) {
      uVar13 = uVar13 - 1;
      puVar11 = (ulonglong *)
                (*(longlong *)(unaff_RDI + 8 + (ulonglong)(uVar13 >> 0xb) * 8) +
                (ulonglong)(uVar13 & 0x7ff) * 0x10);
      uVar6 = *puVar11;
      bVar14 = uVar5 < uVar6;
      if (uVar5 == uVar6) {
        bVar14 = *(int *)(*(longlong *)(*(longlong *)puVar11[1] + 0x18) + 0x184) <
                 *(int *)(*(longlong *)(*plVar4 + 0x18) + 0x184);
      }
      uVar10 = uVar12 >> 0xb;
      if (!bVar14) break;
      puVar1 = (undefined8 *)
               (*(longlong *)(unaff_RDI + 8 + (ulonglong)(uVar13 >> 0xb) * 8) +
               (ulonglong)(uVar13 & 0x7ff) * 0x10);
      uVar9 = puVar1[1];
      puVar2 = (undefined8 *)
               (*(longlong *)(lVar3 + 8 + (ulonglong)uVar10 * 8) +
               (ulonglong)(uVar12 + uVar10 * -0x800) * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar9;
      uVar12 = uVar12 - 1;
    }
    unaff_ESI = unaff_ESI + 1;
    lVar3 = *(longlong *)(lVar3 + 8 + (ulonglong)uVar10 * 8);
    *(uint *)(unaff_RBP + -0x31) = unaff_ESI;
    puVar1 = (undefined8 *)(lVar3 + (ulonglong)(uVar12 + uVar10 * -0x800) * 0x10);
    *puVar1 = uVar7;
    puVar1[1] = uVar8;
    if (unaff_ESI == unaff_R12D) break;
    uVar15 = *(undefined4 *)(unaff_RBP + -0x39);
    uVar16 = *(undefined4 *)(unaff_RBP + -0x35);
    in_XMM1_Dc = *(undefined4 *)(unaff_RBP + -0x31);
    in_XMM1_Dd = *(undefined4 *)(unaff_RBP + -0x2d);
  }
  return;
}






// 函数: void FUN_1800e9da9(void)
void FUN_1800e9da9(void)

{
  return;
}






// 函数: void FUN_1800e9db1(void)
void FUN_1800e9db1(void)

{
  return;
}






// 函数: void FUN_1800e9db9(void)
void FUN_1800e9db9(void)

{
  return;
}






// 函数: void FUN_1800e9dcd(undefined8 param_1,undefined8 param_2)
void FUN_1800e9dcd(undefined8 param_1,undefined8 param_2)

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
  *(undefined4 *)(unaff_RBP + 0x27) = *unaff_R14;
  *(undefined4 *)(unaff_RBP + 0x2b) = uVar1;
  *(undefined4 *)(unaff_RBP + 0x2f) = uVar2;
  *(undefined4 *)(unaff_RBP + 0x33) = uVar3;
  *(undefined8 *)(unaff_RBP + 0x37) = param_2;
  *(undefined8 *)(unaff_RBP + 0x3f) = in_XMM1_Qb;
  FUN_1800ea540(unaff_RBP + 0x37,unaff_RBP + 0x27);
  return;
}






// 函数: void FUN_1800e9df0(longlong *param_1,longlong param_2)
void FUN_1800e9df0(longlong *param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  longlong lVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  uint uVar16;
  ulonglong uVar17;
  uint uVar18;
  
  uVar5 = *(uint *)(param_1 + 1);
  uVar6 = *(uint *)(param_2 + 8);
  if (uVar5 != uVar6) {
    lVar12 = *param_1;
    lVar11 = *param_1;
    uVar13 = *(uint *)(param_1 + 1);
    while (uVar13 = uVar13 + 1, uVar13 != uVar6) {
      uVar17 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(lVar11 + 8 + (ulonglong)(uVar13 >> 0xb) * 8);
      uVar3 = *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18);
      puVar1 = (undefined8 *)(lVar7 + uVar17 * 0x18);
      uVar8 = *puVar1;
      uVar9 = puVar1[1];
      uVar14 = uVar13;
      uVar18 = uVar13;
      while (uVar18 != uVar5) {
        uVar18 = uVar18 - 1;
        uVar16 = uVar18 & 0x7ff;
        cVar15 = func_0x0001800d4090(uVar3,*(undefined8 *)
                                            (*(longlong *)
                                              (lVar12 + 8 + (ulonglong)(uVar18 >> 0xb) * 8) + 0x10 +
                                            (ulonglong)uVar16 * 0x18));
        if (cVar15 == '\0') break;
        lVar7 = *(longlong *)(lVar12 + 8 + (ulonglong)(uVar18 >> 0xb) * 8);
        puVar1 = (undefined8 *)(lVar7 + (ulonglong)uVar16 * 0x18);
        uVar10 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar7 + 0x10 + (ulonglong)uVar16 * 0x18);
        lVar7 = *(longlong *)(lVar12 + 8 + (ulonglong)(uVar14 >> 0xb) * 8);
        uVar17 = (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800);
        puVar2 = (undefined8 *)(lVar7 + uVar17 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar10;
        *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18) = uVar4;
        uVar14 = uVar14 - 1;
      }
      uVar17 = (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800);
      lVar7 = *(longlong *)(lVar12 + 8 + (ulonglong)(uVar14 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar7 + uVar17 * 0x18);
      *puVar1 = uVar8;
      puVar1[1] = uVar9;
      *(undefined8 *)(lVar7 + 0x10 + uVar17 * 0x18) = uVar3;
    }
  }
  return;
}






// 函数: void FUN_1800e9e25(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
void FUN_1800e9e25(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint in_EAX;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 unaff_RBX;
  uint uVar14;
  undefined8 unaff_RBP;
  undefined8 unaff_RSI;
  uint uVar15;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  int in_XMM0_Dc;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  longlong lStackX_20;
  undefined8 uStack0000000000000038;
  undefined8 uStack0000000000000048;
  undefined8 uStack0000000000000060;
  uint in_stack_000000d0;
  uint in_stack_000000e0;
  
  *(undefined8 *)(in_R11 + -8) = unaff_RBP;
  uVar14 = in_XMM0_Dc + 1;
  if (uVar14 != in_EAX) {
    *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
    *(undefined8 *)(in_R11 + -0x10) = unaff_RSI;
    *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
    *(undefined8 *)(in_R11 + -0x20) = unaff_R12;
    *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
    *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
    *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
    *(undefined4 *)(in_R11 + -0x48) = unaff_XMM6_Da;
    *(undefined4 *)(in_R11 + -0x44) = unaff_XMM6_Db;
    *(undefined4 *)(in_R11 + -0x40) = unaff_XMM6_Dc;
    *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
    do {
      uStack0000000000000038 = CONCAT44(param_5._4_4_,uVar14);
      uVar11 = (ulonglong)(uVar14 + (uVar14 >> 0xb) * -0x800);
      lVar5 = *(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar14 >> 0xb) * 8);
      uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
      puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar13 = uVar14;
      uVar12 = uVar14;
      uVar15 = uVar14;
      uStack0000000000000048 = uStack0000000000000038;
      uStack0000000000000060 = uVar3;
      if (uVar14 != param_3) {
        do {
          uVar15 = uVar15 - 1;
          uVar10 = uVar15 & 0x7ff;
          cVar9 = func_0x0001800d4090(uVar3,*(undefined8 *)
                                             (*(longlong *)
                                               (lStackX_20 + 8 + (ulonglong)(uVar15 >> 0xb) * 8) +
                                              0x10 + (ulonglong)uVar10 * 0x18));
          uVar13 = uVar12;
          param_3 = in_stack_000000e0;
          if (cVar9 == '\0') break;
          lVar5 = *(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar15 >> 0xb) * 8);
          puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar10 * 0x18);
          uVar8 = puVar1[1];
          uVar4 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar10 * 0x18);
          uVar13 = uVar12 - 1;
          lVar5 = *(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar12 >> 0xb) * 8);
          uVar11 = (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800);
          puVar2 = (undefined8 *)(lVar5 + uVar11 * 0x18);
          *puVar2 = *puVar1;
          puVar2[1] = uVar8;
          *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18) = uVar4;
          uVar12 = uVar13;
        } while (uVar15 != in_stack_000000e0);
      }
      uVar14 = uVar14 + 1;
      uVar11 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
      lVar5 = *(longlong *)(lStackX_20 + 8 + (ulonglong)(uVar13 >> 0xb) * 8);
      puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18) = uVar3;
    } while (uVar14 != in_stack_000000d0);
  }
  return;
}






// 函数: void FUN_1800e9e40(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
void FUN_1800e9e40(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  uint param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 unaff_RBX;
  uint unaff_EBP;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  longlong in_R11;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  undefined4 uStackX_20;
  undefined4 uStackX_24;
  uint uStack0000000000000038;
  uint uStack0000000000000048;
  undefined8 uStack0000000000000060;
  uint in_stack_000000d0;
  uint in_stack_000000e0;
  
  *(undefined8 *)(in_R11 + 0x10) = unaff_RBX;
  *(undefined8 *)(in_R11 + -0x10) = unaff_RSI;
  *(undefined8 *)(in_R11 + -0x18) = unaff_RDI;
  *(undefined8 *)(in_R11 + -0x20) = unaff_R12;
  *(undefined8 *)(in_R11 + -0x28) = unaff_R13;
  *(undefined8 *)(in_R11 + -0x30) = unaff_R14;
  *(undefined8 *)(in_R11 + -0x38) = unaff_R15;
  *(undefined4 *)(in_R11 + -0x48) = unaff_XMM6_Da;
  *(undefined4 *)(in_R11 + -0x44) = unaff_XMM6_Db;
  *(undefined4 *)(in_R11 + -0x40) = unaff_XMM6_Dc;
  *(undefined4 *)(in_R11 + -0x3c) = unaff_XMM6_Dd;
  do {
    uStack0000000000000038 = param_5;
    uVar11 = (ulonglong)(unaff_EBP + (unaff_EBP >> 0xb) * -0x800);
    uStack0000000000000048 = param_5;
    lVar5 = *(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(unaff_EBP >> 0xb) * 8);
    uVar3 = *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18);
    puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
    uVar6 = *puVar1;
    uVar7 = puVar1[1];
    uVar13 = param_5;
    if (unaff_EBP != param_3) {
      uVar12 = param_5;
      uStack0000000000000060 = uVar3;
      do {
        param_5 = param_5 - 1;
        uVar10 = param_5 & 0x7ff;
        cVar9 = func_0x0001800d4090(uVar3,*(undefined8 *)
                                           (*(longlong *)
                                             (CONCAT44(uStackX_24,uStackX_20) + 8 +
                                             (ulonglong)(param_5 >> 0xb) * 8) + 0x10 +
                                           (ulonglong)uVar10 * 0x18));
        uVar13 = uVar12;
        param_3 = in_stack_000000e0;
        if (cVar9 == '\0') break;
        lVar5 = *(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(param_5 >> 0xb) * 8)
        ;
        puVar1 = (undefined8 *)(lVar5 + (ulonglong)uVar10 * 0x18);
        uVar8 = puVar1[1];
        uVar4 = *(undefined8 *)(lVar5 + 0x10 + (ulonglong)uVar10 * 0x18);
        uVar13 = uVar12 - 1;
        lVar5 = *(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(uVar12 >> 0xb) * 8);
        uVar11 = (ulonglong)(uVar12 + (uVar12 >> 0xb) * -0x800);
        puVar2 = (undefined8 *)(lVar5 + uVar11 * 0x18);
        *puVar2 = *puVar1;
        puVar2[1] = uVar8;
        *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18) = uVar4;
        uVar12 = uVar13;
      } while (param_5 != in_stack_000000e0);
    }
    unaff_EBP = unaff_EBP + 1;
    uVar11 = (ulonglong)(uVar13 + (uVar13 >> 0xb) * -0x800);
    lVar5 = *(longlong *)(CONCAT44(uStackX_24,uStackX_20) + 8 + (ulonglong)(uVar13 >> 0xb) * 8);
    puVar1 = (undefined8 *)(lVar5 + uVar11 * 0x18);
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    *(undefined8 *)(lVar5 + 0x10 + uVar11 * 0x18) = uVar3;
    param_5 = unaff_EBP;
    if (unaff_EBP == in_stack_000000d0) {
      return;
    }
  } while( true );
}






// 函数: void FUN_1800e9fb7(void)
void FUN_1800e9fb7(void)

{
  return;
}






// 函数: void FUN_1800e9fbf(void)
void FUN_1800e9fbf(void)

{
  return;
}






