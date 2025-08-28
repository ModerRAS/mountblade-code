#include "TaleWorlds.Native.Split.h"

// 99_part_05_part058.c - 10 个函数

// 函数: void FUN_1802fd6af(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
void FUN_1802fd6af(undefined8 param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                  undefined8 param_5,undefined8 param_6,longlong param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  float param_13,undefined8 param_14,float param_15)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  uint uVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  uint *puVar10;
  float *unaff_RBX;
  float *unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  longlong lVar11;
  longlong unaff_R13;
  int unaff_R14D;
  longlong lVar12;
  float fVar13;
  float fVar14;
  float in_XMM1_Dc;
  float in_XMM1_Dd;
  float fVar15;
  float in_XMM2_Dc;
  float in_XMM2_Dd;
  float fVar16;
  float fVar17;
  float fVar18;
  float unaff_XMM6_Da;
  float fVar19;
  float fVar20;
  float unaff_XMM7_Da;
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float fStack000000000000006c;
  
  fVar16 = (float)((ulonglong)param_3 >> 0x20);
  fVar23 = (float)param_3;
  fVar17 = (float)((ulonglong)param_2 >> 0x20);
  fVar19 = (float)param_2;
  fVar18 = unaff_RBP[-0xc];
  fVar14 = unaff_RBP[-0xb];
  fVar15 = unaff_RBP[-10];
  fVar13 = unaff_RBP[-9];
  lVar12 = (longlong)unaff_RBP + (0x20 - unaff_R13);
  lVar11 = param_4 - unaff_R13;
  unaff_RBP[-0x20] = fVar19;
  unaff_RBP[-0x1f] = fVar17;
  unaff_RBP[-0x1e] = in_XMM1_Dc;
  unaff_RBP[-0x1d] = in_XMM1_Dd;
  unaff_RBP[-0x1c] = fVar23;
  unaff_RBP[-0x1b] = fVar16;
  unaff_RBP[-0x1a] = in_XMM2_Dc;
  unaff_RBP[-0x19] = in_XMM2_Dd;
  unaff_RBP[-0x18] = fVar18;
  unaff_RBP[-0x17] = fVar14;
  unaff_RBP[-0x16] = fVar15;
  unaff_RBP[-0x15] = fVar13;
  fStack000000000000006c = 3.4028235e+38;
  do {
    lVar6 = *(longlong *)(unaff_RSI + 0x18);
    cVar5 = *(char *)(lVar6 + 0xa0 + unaff_RDI);
    if (cVar5 < '\0') {
      puVar3 = (undefined8 *)(lVar6 + 0x50 + unaff_RDI);
      uVar7 = puVar3[1];
      puVar1 = (undefined8 *)(lVar12 + (longlong)unaff_RBX);
      *puVar1 = *puVar3;
      puVar1[1] = uVar7;
      fVar19 = unaff_XMM15_Da * fVar23 + unaff_XMM6_Da * fVar19 + unaff_XMM7_Da * fVar18;
      fVar17 = unaff_XMM15_Da * fVar16 + unaff_XMM6_Da * fVar17 + unaff_XMM7_Da * fVar14;
      fVar18 = unaff_XMM15_Da * in_XMM2_Dc + unaff_XMM6_Da * in_XMM1_Dc + unaff_XMM7_Da * fVar15;
      fVar14 = unaff_XMM12_Da + fVar19;
      fVar15 = unaff_XMM13_Da + fVar17;
      unaff_RBP[-4] = fVar19;
      unaff_RBP[-3] = fVar17;
      unaff_RBP[-2] = fVar18;
      unaff_RBP[-1] =
           unaff_XMM15_Da * in_XMM2_Dd + unaff_XMM6_Da * in_XMM1_Dd + unaff_XMM7_Da * fVar13;
      fVar18 = unaff_XMM14_Da + fVar18;
      param_11._4_4_ = 0x7f7fffff;
      param_10._0_4_ = fVar14;
      param_10._4_4_ = fVar15;
      param_11._0_4_ = fVar18;
    }
    else {
      pfVar2 = (float *)(lVar6 + 0x50 + unaff_RDI);
      fVar18 = *pfVar2;
      fVar14 = pfVar2[1];
      fVar15 = pfVar2[2];
      fVar13 = pfVar2[3];
      lVar9 = (longlong)cVar5;
      puVar10 = (uint *)(lVar9 * 0x100 + lVar6);
      pfVar2 = unaff_RBP + lVar9 * 4 + 8;
      fVar19 = *pfVar2;
      fVar17 = pfVar2[1];
      fVar23 = pfVar2[2];
      fVar16 = pfVar2[3];
      pfVar2 = (float *)(lVar12 + (longlong)unaff_RBX);
      *pfVar2 = fVar16 * fVar13 * -1.0 + fVar23 * fVar15 * -1.0 +
                (fVar18 * fVar19 - fVar17 * fVar14);
      pfVar2[1] = fVar23 * fVar13 * 1.0 + fVar19 * fVar14 * 1.0 +
                  (fVar18 * fVar17 - fVar16 * fVar15);
      pfVar2[2] = fVar16 * fVar14 * 1.0 + fVar19 * fVar15 * 1.0 +
                  (fVar18 * fVar23 - fVar17 * fVar13);
      pfVar2[3] = fVar17 * fVar15 * 1.0 + fVar19 * fVar13 * 1.0 +
                  (fVar18 * fVar16 - fVar23 * fVar14);
      fVar18 = *(float *)(param_4 + 4 + lVar9 * 0x10);
      fVar14 = *(float *)(param_4 + 8 + lVar9 * 0x10);
      fVar15 = *(float *)(param_4 + lVar9 * 0x10);
      fVar13 = fVar18 * *(float *)(lVar6 + 0x48 + unaff_RDI) -
               fVar14 * *(float *)(lVar6 + 0x44 + unaff_RDI);
      fVar19 = fVar15 * *(float *)(lVar6 + 0x44 + unaff_RDI) -
               fVar18 * *(float *)(lVar6 + 0x40 + unaff_RDI);
      fVar18 = fVar14 * *(float *)(lVar6 + 0x40 + unaff_RDI) -
               fVar15 * *(float *)(lVar6 + 0x48 + unaff_RDI);
      do {
        LOCK();
        uVar4 = *puVar10;
        *puVar10 = *puVar10 | 1;
        UNLOCK();
      } while ((uVar4 & 1) != 0);
      fVar14 = (float)puVar10[1];
      fVar15 = (float)puVar10[2];
      fVar17 = (float)puVar10[3];
      fVar23 = (float)puVar10[4];
      uVar7 = *(undefined8 *)(puVar10 + 5);
      uVar8 = *(undefined8 *)(puVar10 + 7);
      *unaff_RBP = fVar14;
      unaff_RBP[1] = fVar15;
      unaff_RBP[2] = fVar17;
      unaff_RBP[3] = fVar23;
      *(undefined8 *)(unaff_RBP + 4) = uVar7;
      *(undefined8 *)(unaff_RBP + 6) = uVar8;
      *puVar10 = 0;
      fVar21 = fVar17 * fVar19 - fVar23 * fVar18;
      fVar22 = fVar23 * fVar13 - fVar15 * fVar19;
      fVar21 = fVar21 + fVar21;
      fVar20 = fVar15 * fVar18 - fVar17 * fVar13;
      fVar22 = fVar22 + fVar22;
      fVar20 = fVar20 + fVar20;
      fVar16 = (fVar20 * fVar17 - fVar22 * fVar23) + fVar21 * fVar14 + fVar13;
      fVar13 = fVar22 * fVar14 + fVar18 + (fVar21 * fVar23 - fVar20 * fVar15);
      fVar23 = (fVar22 * fVar15 - fVar21 * fVar17) + fVar20 * fVar14 + fVar19;
      fVar19 = fVar16 * unaff_RBP[-0x1c] + fVar13 * unaff_RBP[-0x20] + fVar23 * unaff_RBP[-0x18];
      fVar17 = fVar16 * unaff_RBP[-0x1b] + fVar13 * unaff_RBP[-0x1f] + fVar23 * unaff_RBP[-0x17];
      fVar18 = fVar16 * unaff_RBP[-0x1a] + fVar13 * unaff_RBP[-0x1e] + fVar23 * unaff_RBP[-0x16];
      fVar14 = fVar19 + *(float *)(unaff_R13 + lVar9 * 0x10);
      fVar15 = fVar17 + *(float *)(unaff_R13 + 4 + lVar9 * 0x10);
      unaff_RBP[-8] = fVar19;
      unaff_RBP[-7] = fVar17;
      unaff_RBP[-6] = fVar18;
      unaff_RBP[-5] =
           fVar16 * unaff_RBP[-0x19] + fVar13 * unaff_RBP[-0x1d] + fVar23 * unaff_RBP[-0x15];
      fVar18 = fVar18 + *(float *)(unaff_R13 + 8 + lVar9 * 0x10);
      param_9._4_4_ = 0x7f7fffff;
      unaff_XMM6_Da = param_5._4_4_;
      unaff_XMM7_Da = (float)param_6;
      param_8._0_4_ = fVar14;
      param_8._4_4_ = fVar15;
      param_9._0_4_ = fVar18;
    }
    *unaff_RBX = fVar14;
    unaff_RBX[1] = fVar15;
    unaff_RBX[2] = fVar18;
    unaff_RBX[3] = 3.4028235e+38;
    FUN_18063b720(&param_14,(longlong)&param_6 + 4,unaff_RBP + (longlong)unaff_R14D * 4 + 8);
    unaff_R14D = unaff_R14D + 1;
    unaff_RDI = unaff_RDI + 0x100;
    param_13 = param_6._4_4_ * unaff_XMM11_Da;
    param_12._0_4_ = (float)param_14 * param_13;
    param_12._4_4_ = param_14._4_4_ * param_13;
    param_13 = param_15 * param_13;
    fVar19 = unaff_RBP[-0x20];
    fVar17 = unaff_RBP[-0x1f];
    in_XMM1_Dc = unaff_RBP[-0x1e];
    in_XMM1_Dd = unaff_RBP[-0x1d];
    fVar23 = unaff_RBP[-0x1c];
    fVar16 = unaff_RBP[-0x1b];
    in_XMM2_Dc = unaff_RBP[-0x1a];
    in_XMM2_Dd = unaff_RBP[-0x19];
    fVar18 = unaff_RBP[-0x18];
    fVar14 = unaff_RBP[-0x17];
    fVar15 = unaff_RBP[-0x16];
    fVar13 = unaff_RBP[-0x15];
    pfVar2 = (float *)(lVar11 + (longlong)unaff_RBX);
    *pfVar2 = (float)param_12;
    pfVar2[1] = param_12._4_4_;
    pfVar2[2] = param_13;
    pfVar2[3] = fStack000000000000006c;
    unaff_RBX = unaff_RBX + 4;
    param_4 = param_7;
  } while (unaff_R14D < *(char *)(unaff_RSI + 0x20));
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x108) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802fdab2(void)
void FUN_1802fdab2(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x420) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fdb10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802fdb10(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_R14;
  
  if (((*(short *)(param_1 + 0x40) != 0) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar7 != 0)) {
    FUN_1801b6ae0(lVar7,param_1);
  }
  *(undefined8 *)(param_1 + 0x10) = param_2;
  iVar5 = 0;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar7 + *(longlong *)(param_1 + 0x1a8));
      (**(code **)(*plVar6 + 0x1e0))(plVar6,*(undefined8 *)(param_1 + 0x10));
      lVar7 = lVar7 + 8;
      iVar5 = iVar5 + 1;
    } while ((ulonglong)(longlong)iVar5 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar7 = 0;
    do {
      iVar4 = 0;
      if (*(longlong *)(lVar7 + 0xb8 + *(longlong *)(param_1 + 0x18)) -
          *(longlong *)(lVar7 + 0xb0 + *(longlong *)(param_1 + 0x18)) >> 3 != 0) {
        lVar1 = 0;
        do {
          plVar6 = *(longlong **)
                    (lVar1 + *(longlong *)(lVar7 + 0xb0 + *(longlong *)(param_1 + 0x18)));
          (**(code **)(*plVar6 + 0x1e0))(plVar6,*(undefined8 *)(param_1 + 0x10));
          lVar1 = lVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((ulonglong)(longlong)iVar4 <
                 (ulonglong)
                 (*(longlong *)(lVar7 + 0xb8 + *(longlong *)(param_1 + 0x18)) -
                  *(longlong *)(lVar7 + 0xb0 + *(longlong *)(param_1 + 0x18)) >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar5 < *(char *)(param_1 + 0x20));
  }
  if (((*(short *)(param_1 + 0x40) == 0) || (*(longlong *)(param_1 + 0x10) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20), lVar7 == 0)) {
    return;
  }
  plVar6 = *(longlong **)(lVar7 + 0x29b8);
  if (plVar6 < *(longlong **)(lVar7 + 0x29c0)) {
    *(longlong **)(lVar7 + 0x29b8) = plVar6 + 1;
    *plVar6 = param_1;
    return;
  }
  plVar3 = *(longlong **)(lVar7 + 0x29b0);
  lVar1 = (longlong)plVar6 - (longlong)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,*(undefined1 *)(lVar7 + 0x29c8),param_4,unaff_R14)
  ;
  plVar3 = *(longlong **)(lVar7 + 0x29b0);
  plVar6 = *(longlong **)(lVar7 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar6) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(longlong)plVar6 - (longlong)plVar3);
  }
  *plVar2 = param_1;
  if (*(longlong *)(lVar7 + 0x29b0) == 0) {
    *(longlong **)(lVar7 + 0x29b0) = plVar2;
    *(longlong **)(lVar7 + 0x29b8) = plVar2 + 1;
    *(longlong **)(lVar7 + 0x29c0) = plVar2 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fdb1e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)
void FUN_1802fdb1e(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong unaff_RBX;
  int iVar4;
  int iVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 unaff_R14;
  bool in_ZF;
  
  if (((!in_ZF) && (*(longlong *)(param_1 + 0x10) != 0)) &&
     (*(longlong *)(*(longlong *)(param_1 + 0x10) + 0x20) != 0)) {
    FUN_1801b6ae0();
  }
  *(undefined8 *)(unaff_RBX + 0x10) = param_2;
  iVar5 = 0;
  if (*(longlong *)(unaff_RBX + 0x1b0) - *(longlong *)(unaff_RBX + 0x1a8) >> 3 != 0) {
    lVar7 = 0;
    do {
      plVar6 = *(longlong **)(lVar7 + *(longlong *)(unaff_RBX + 0x1a8));
      (**(code **)(*plVar6 + 0x1e0))(plVar6,*(undefined8 *)(unaff_RBX + 0x10));
      lVar7 = lVar7 + 8;
      iVar5 = iVar5 + 1;
    } while ((ulonglong)(longlong)iVar5 <
             (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - *(longlong *)(unaff_RBX + 0x1a8) >> 3));
  }
  iVar5 = 0;
  if ('\0' < *(char *)(unaff_RBX + 0x20)) {
    lVar7 = 0;
    do {
      iVar4 = 0;
      if (*(longlong *)(lVar7 + 0xb8 + *(longlong *)(unaff_RBX + 0x18)) -
          *(longlong *)(lVar7 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)) >> 3 != 0) {
        lVar1 = 0;
        do {
          plVar6 = *(longlong **)
                    (lVar1 + *(longlong *)(lVar7 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)));
          (**(code **)(*plVar6 + 0x1e0))(plVar6,*(undefined8 *)(unaff_RBX + 0x10));
          lVar1 = lVar1 + 8;
          iVar4 = iVar4 + 1;
        } while ((ulonglong)(longlong)iVar4 <
                 (ulonglong)
                 (*(longlong *)(lVar7 + 0xb8 + *(longlong *)(unaff_RBX + 0x18)) -
                  *(longlong *)(lVar7 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)) >> 3));
      }
      iVar5 = iVar5 + 1;
      lVar7 = lVar7 + 0x100;
    } while (iVar5 < *(char *)(unaff_RBX + 0x20));
  }
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(longlong *)(unaff_RBX + 0x10) == 0)) ||
     (lVar7 = *(longlong *)(*(longlong *)(unaff_RBX + 0x10) + 0x20), lVar7 == 0)) {
    return;
  }
  plVar6 = *(longlong **)(lVar7 + 0x29b8);
  if (plVar6 < *(longlong **)(lVar7 + 0x29c0)) {
    *(longlong **)(lVar7 + 0x29b8) = plVar6 + 1;
    *plVar6 = unaff_RBX;
    return;
  }
  plVar3 = *(longlong **)(lVar7 + 0x29b0);
  lVar1 = (longlong)plVar6 - (longlong)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,*(undefined1 *)(lVar7 + 0x29c8),param_4,unaff_R14)
  ;
  plVar3 = *(longlong **)(lVar7 + 0x29b0);
  plVar6 = *(longlong **)(lVar7 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar6) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(longlong)plVar6 - (longlong)plVar3);
  }
  *plVar2 = unaff_RBX;
  if (*(longlong *)(lVar7 + 0x29b0) == 0) {
    *(longlong **)(lVar7 + 0x29b0) = plVar2;
    *(longlong **)(lVar7 + 0x29b8) = plVar2 + 1;
    *(longlong **)(lVar7 + 0x29c0) = plVar2 + lVar1;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fdbb5(void)
void FUN_1802fdbb5(void)

{
  longlong lVar1;
  longlong *plVar2;
  longlong *plVar3;
  longlong unaff_RBX;
  int iVar4;
  longlong *plVar5;
  longlong lVar6;
  undefined8 in_R9;
  int unaff_R14D;
  undefined8 in_stack_00000048;
  
  lVar6 = 0;
  do {
    iVar4 = 0;
    if (*(longlong *)(lVar6 + 0xb8 + *(longlong *)(unaff_RBX + 0x18)) -
        *(longlong *)(lVar6 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)) >> 3 != 0) {
      lVar1 = 0;
      do {
        plVar5 = *(longlong **)
                  (lVar1 + *(longlong *)(lVar6 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)));
        (**(code **)(*plVar5 + 0x1e0))(plVar5,*(undefined8 *)(unaff_RBX + 0x10));
        lVar1 = lVar1 + 8;
        iVar4 = iVar4 + 1;
      } while ((ulonglong)(longlong)iVar4 <
               (ulonglong)
               (*(longlong *)(lVar6 + 0xb8 + *(longlong *)(unaff_RBX + 0x18)) -
                *(longlong *)(lVar6 + 0xb0 + *(longlong *)(unaff_RBX + 0x18)) >> 3));
    }
    unaff_R14D = unaff_R14D + 1;
    lVar6 = lVar6 + 0x100;
  } while (unaff_R14D < *(char *)(unaff_RBX + 0x20));
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(longlong *)(unaff_RBX + 0x10) == 0)) ||
     (lVar6 = *(longlong *)(*(longlong *)(unaff_RBX + 0x10) + 0x20), lVar6 == 0)) {
    return;
  }
  plVar5 = *(longlong **)(lVar6 + 0x29b8);
  if (plVar5 < *(longlong **)(lVar6 + 0x29c0)) {
    *(longlong **)(lVar6 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar3 = *(longlong **)(lVar6 + 0x29b0);
  lVar1 = (longlong)plVar5 - (longlong)plVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      plVar2 = (longlong *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar2 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar1 * 8,*(undefined1 *)(lVar6 + 0x29c8),in_R9,
                         in_stack_00000048);
  plVar3 = *(longlong **)(lVar6 + 0x29b0);
  plVar5 = *(longlong **)(lVar6 + 0x29b8);
LAB_1801b6a74:
  if (plVar3 != plVar5) {
                    // WARNING: Subroutine does not return
    memmove(plVar2,plVar3,(longlong)plVar5 - (longlong)plVar3);
  }
  *plVar2 = unaff_RBX;
  if (*(longlong *)(lVar6 + 0x29b0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(lVar6 + 0x29b0) = plVar2;
  *(longlong **)(lVar6 + 0x29b8) = plVar2 + 1;
  *(longlong **)(lVar6 + 0x29c0) = plVar2 + lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fdc4f(void)
void FUN_1802fdc4f(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  undefined8 in_R9;
  undefined8 in_stack_00000048;
  
  if (((*(short *)(unaff_RBX + 0x40) == 0) || (*(longlong *)(unaff_RBX + 0x10) == 0)) ||
     (lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x10) + 0x20), lVar1 == 0)) {
    return;
  }
  plVar5 = *(longlong **)(lVar1 + 0x29b8);
  if (plVar5 < *(longlong **)(lVar1 + 0x29c0)) {
    *(longlong **)(lVar1 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar4 = *(longlong **)(lVar1 + 0x29b0);
  lVar2 = (longlong)plVar5 - (longlong)plVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar3 = (longlong *)
           FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(lVar1 + 0x29c8),in_R9,
                         in_stack_00000048);
  plVar4 = *(longlong **)(lVar1 + 0x29b0);
  plVar5 = *(longlong **)(lVar1 + 0x29b8);
LAB_1801b6a74:
  if (plVar4 != plVar5) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar4,(longlong)plVar5 - (longlong)plVar4);
  }
  *plVar3 = unaff_RBX;
  if (*(longlong *)(lVar1 + 0x29b0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(lVar1 + 0x29b0) = plVar3;
  *(longlong **)(lVar1 + 0x29b8) = plVar3 + 1;
  *(longlong **)(lVar1 + 0x29c0) = plVar3 + lVar2;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fdc65(void)
void FUN_1802fdc65(void)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong unaff_RBX;
  longlong *plVar5;
  
  if ((*(longlong *)(unaff_RBX + 0x10) == 0) ||
     (lVar1 = *(longlong *)(*(longlong *)(unaff_RBX + 0x10) + 0x20), lVar1 == 0)) {
    return;
  }
  plVar5 = *(longlong **)(lVar1 + 0x29b8);
  if (plVar5 < *(longlong **)(lVar1 + 0x29c0)) {
    *(longlong **)(lVar1 + 0x29b8) = plVar5 + 1;
    *plVar5 = unaff_RBX;
    return;
  }
  plVar4 = *(longlong **)(lVar1 + 0x29b0);
  lVar2 = (longlong)plVar5 - (longlong)plVar4 >> 3;
  if (lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar2 * 2;
    if (lVar2 == 0) {
      plVar3 = (longlong *)0x0;
      goto LAB_1801b6a74;
    }
  }
  plVar3 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar2 * 8,*(undefined1 *)(lVar1 + 0x29c8));
  plVar4 = *(longlong **)(lVar1 + 0x29b0);
  plVar5 = *(longlong **)(lVar1 + 0x29b8);
LAB_1801b6a74:
  if (plVar4 != plVar5) {
                    // WARNING: Subroutine does not return
    memmove(plVar3,plVar4,(longlong)plVar5 - (longlong)plVar4);
  }
  *plVar3 = unaff_RBX;
  if (*(longlong *)(lVar1 + 0x29b0) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(longlong **)(lVar1 + 0x29b0) = plVar3;
  *(longlong **)(lVar1 + 0x29b8) = plVar3 + 1;
  *(longlong **)(lVar1 + 0x29c0) = plVar3 + lVar2;
  return;
}






// 函数: void FUN_1802fdc90(longlong param_1,undefined8 param_2,undefined4 param_3)
void FUN_1802fdc90(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  
  iVar4 = 0;
  if (*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3 != 0) {
    lVar6 = 0;
    do {
      plVar1 = *(longlong **)(lVar6 + *(longlong *)(param_1 + 0x1a8));
      (**(code **)(*plVar1 + 0x170))(plVar1,param_2,param_3);
      lVar6 = lVar6 + 8;
      iVar4 = iVar4 + 1;
    } while ((ulonglong)(longlong)iVar4 <
             (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
  }
  iVar4 = 0;
  if ('\0' < *(char *)(param_1 + 0x20)) {
    lVar6 = *(longlong *)(param_1 + 0x18);
    lVar5 = 0;
    do {
      lVar2 = *(longlong *)(lVar5 + 0xb0 + lVar6);
      iVar3 = 0;
      if (*(longlong *)(lVar5 + 0xb8 + lVar6) - lVar2 >> 3 != 0) {
        lVar7 = 0;
        do {
          (**(code **)(**(longlong **)(lVar7 + lVar2) + 0x170))
                    (*(longlong **)(lVar7 + lVar2),param_2,param_3);
          lVar6 = *(longlong *)(param_1 + 0x18);
          lVar7 = lVar7 + 8;
          iVar3 = iVar3 + 1;
          lVar2 = *(longlong *)(lVar5 + 0xb0 + lVar6);
        } while ((ulonglong)(longlong)iVar3 <
                 (ulonglong)(*(longlong *)(lVar5 + 0xb8 + lVar6) - lVar2 >> 3));
      }
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 0x100;
    } while (iVar4 < *(char *)(param_1 + 0x20));
  }
  return;
}






// 函数: void FUN_1802fdd1d(undefined8 param_1,undefined8 param_2,longlong param_3)
void FUN_1802fdd1d(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  longlong unaff_RBX;
  int iVar2;
  longlong unaff_RSI;
  longlong lVar3;
  int unaff_R14D;
  
  do {
    lVar1 = *(longlong *)(unaff_RSI + 0xb0 + param_3);
    iVar2 = 0;
    if (*(longlong *)(unaff_RSI + 0xb8 + param_3) - lVar1 >> 3 != 0) {
      lVar3 = 0;
      do {
        (**(code **)(**(longlong **)(lVar3 + lVar1) + 0x170))();
        param_3 = *(longlong *)(unaff_RBX + 0x18);
        lVar3 = lVar3 + 8;
        iVar2 = iVar2 + 1;
        lVar1 = *(longlong *)(unaff_RSI + 0xb0 + param_3);
      } while ((ulonglong)(longlong)iVar2 <
               (ulonglong)(*(longlong *)(unaff_RSI + 0xb8 + param_3) - lVar1 >> 3));
    }
    unaff_R14D = unaff_R14D + 1;
    unaff_RSI = unaff_RSI + 0x100;
  } while (unaff_R14D < *(char *)(unaff_RBX + 0x20));
  return;
}






// 函数: void FUN_1802fdd96(void)
void FUN_1802fdd96(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




