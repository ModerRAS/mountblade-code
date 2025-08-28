#include "TaleWorlds.Native.Split.h"

// 99_part_09_part060.c - 8 个函数

// 函数: void FUN_1805ddf61(undefined8 param_1,longlong param_2,longlong param_3)
void FUN_1805ddf61(undefined8 param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  char cVar8;
  undefined8 *puVar9;
  float *pfVar10;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong lVar11;
  undefined8 *unaff_RDI;
  byte bVar12;
  uint uVar13;
  longlong lVar14;
  longlong lVar15;
  longlong unaff_R12;
  longlong lVar16;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000d0;
  undefined4 in_stack_000000d8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_00000100;
  undefined4 in_stack_00000108;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  
  iVar1 = *(int *)(param_3 + 0x14a8);
  lVar11 = unaff_RSI + 0x30a0 + unaff_R12;
  if (iVar1 == 2) {
    cVar8 = FUN_180488880(unaff_R15 + 0x1168);
    if (cVar8 == '\0') {
      puVar9 = (undefined8 *)FUN_180516f50(lVar11,&stack0x00000058);
      *unaff_RDI = *puVar9;
      uVar17 = puVar9[4];
      unaff_RDI[3] = puVar9[3];
      unaff_RDI[4] = uVar17;
      uVar17 = puVar9[6];
      unaff_RDI[5] = puVar9[5];
      unaff_RDI[6] = uVar17;
      unaff_RDI[1] = puVar9[1];
      unaff_RDI[2] = puVar9[2];
      unaff_RDI[7] = puVar9[7];
      *(undefined4 *)(unaff_RDI + 8) = *(undefined4 *)(puVar9 + 8);
      return;
    }
    puVar9 = (undefined8 *)FUN_180516f50(extraout_XMM0_Qa,&stack0x00000058);
    *unaff_RDI = *puVar9;
    uVar17 = puVar9[4];
    unaff_RDI[3] = puVar9[3];
    unaff_RDI[4] = uVar17;
    uVar17 = puVar9[6];
    unaff_RDI[5] = puVar9[5];
    unaff_RDI[6] = uVar17;
    unaff_RDI[1] = puVar9[1];
    unaff_RDI[2] = puVar9[2];
    unaff_RDI[7] = puVar9[7];
    iVar1 = *(int *)(puVar9 + 8);
    *(int *)(unaff_RDI + 8) = iVar1;
    if ((*(float *)(unaff_R15 + 0x1168) == *(float *)(unaff_RDI + 3)) &&
       (*(float *)(unaff_R15 + 0x116c) == *(float *)((longlong)unaff_RDI + 0x1c))) {
      return;
    }
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_RDI + 8) = 0;
    }
    unaff_RDI[3] = *(undefined8 *)(unaff_R15 + 0x1168);
    return;
  }
  if (iVar1 == 9) {
FUN_1805df09a:
    lVar14 = *(longlong *)(lVar11 + 0x9d8);
    lVar15 = *(longlong *)(lVar11 + 0x20);
    if ((lVar14 == 0) ||
       (cVar8 = FUN_18038d0a0(lVar14,lVar15 + 0xc), lVar16 = lVar14, cVar8 == '\0')) {
      lVar16 = 0;
    }
    lVar11 = *(longlong *)(lVar11 + 0x8d8);
    *(undefined8 *)(unaff_RBP + -0x70) = 0;
    uVar17 = *(undefined8 *)(lVar15 + 0xc);
    uVar5 = *(undefined8 *)(lVar15 + 0x14);
    uVar6 = *(undefined8 *)(lVar15 + 0xb0);
    uVar7 = *(undefined8 *)(lVar15 + 0xb8);
    *unaff_RDI = *(undefined8 *)(lVar11 + 0x18);
    unaff_RDI[3] = uVar17;
    unaff_RDI[4] = uVar5;
    unaff_RDI[1] = lVar16;
    unaff_RDI[5] = uVar6;
    unaff_RDI[6] = uVar7;
    unaff_RDI[2] = lVar14;
    unaff_RDI[7] = uVar17;
    *(undefined4 *)(unaff_RDI + 8) = 3;
    return;
  }
  lVar14 = *(longlong *)(lVar11 + 0x20);
  fVar23 = *(float *)(lVar14 + 0xc);
  fVar22 = *(float *)(lVar14 + 0x10);
  if (*(float *)(param_2 + 0x8c) * *(float *)(param_2 + 0x8c) * 100.0 <
      (fVar22 - unaff_RBX[1]) * (fVar22 - unaff_RBX[1]) +
      (fVar23 - *unaff_RBX) * (fVar23 - *unaff_RBX)) goto FUN_1805df09a;
  fVar18 = *(float *)(param_2 + 0x24);
  fVar19 = *(float *)(param_2 + 0x28);
  fVar27 = *(float *)(param_2 + 0x2c);
  uVar2 = *(undefined4 *)(unaff_R13 + 0x564);
  uVar13 = *(uint *)(lVar11 + 0x564);
  *(float *)(unaff_RBP + 0x90) = fVar18;
  *(float *)(unaff_RBP + 0x94) = fVar19;
  fVar21 = *(float *)(unaff_RBP + 0x90);
  in_stack_00000040 = *(float *)(unaff_RBP + 0x94);
  fVar3 = *(float *)(lVar14 + 0x24);
  fVar4 = *(float *)(lVar14 + 0x28);
  fVar26 = *(float *)(lVar14 + 0x2c);
  bVar12 = (byte)((uint)uVar2 >> 0x1f) ^ 1;
  fVar24 = *(float *)(param_2 + 0x84);
  fVar25 = *(float *)(lVar14 + 0x84);
  uVar13 = uVar13 >> 0x1f ^ 1;
  *(uint *)(unaff_RBP + 0xa8) = uVar13;
  fVar26 = fVar3 * fVar3 + fVar4 * fVar4 + fVar26 * fVar26;
  fVar27 = fVar18 * fVar18 + fVar19 * fVar19 + fVar27 * fVar27;
  fVar18 = in_stack_00000040 * in_stack_00000040 + fVar21 * fVar21;
  fVar18 = (float)(fVar18 <= 1.1754944e-38) * 1.1754944e-38 + fVar18;
  auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar19 = auVar20._0_4_;
  fVar18 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
  in_stack_00000040 = fVar18 * in_stack_00000040;
  fStack0000000000000044 = 0.5;
  in_stack_00000048 = 0x3f000000;
  uStack000000000000004c = 0x3f000000;
  *(float *)(unaff_RBP + 0x90) = fVar18 * fVar21;
  fVar21 = fVar26;
  if (fVar26 <= 1.1754944e-38) {
    fVar21 = 1.1754944e-38;
  }
  auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar18 = auVar20._0_4_;
  fVar21 = fVar18 * 0.5 * (3.0 - fVar21 * fVar18 * fVar18);
  if ((char)uVar13 != '\0') {
    if (bVar12 == 0) goto FUN_1805de4c2;
    fVar25 = fVar25 * fVar25;
    if ((((fVar25 * 0.010000001 < fVar26) && (fVar26 < fVar25 * 0.25)) &&
        (fVar24 = fVar24 * fVar24, fVar24 * 0.010000001 < fVar27)) &&
       ((fVar27 < fVar24 * 0.25 &&
        (fVar21 * fVar3 * *(float *)(unaff_RBP + 0x90) + fVar21 * fVar4 * in_stack_00000040 < 0.0)))
       ) {
      fVar21 = *(float *)(param_2 + 0xc);
      fVar24 = *(float *)(param_2 + 0x10);
      if (((fVar4 * *(float *)(param_3 + 0x1450) + fVar22) - fVar24) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x258c) +
          ((fVar3 * *(float *)(param_3 + 0x1450) + fVar23) - fVar21) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x2588) < 0.0) {
        *(float *)(unaff_RBP + 0x90) = (fVar21 + fVar21) - fVar23;
        *(float *)(unaff_RBP + 0x94) = (fVar24 + fVar24) - fVar22;
        uVar17 = FUN_18052fef0();
        goto LAB_1805de3df;
      }
    }
  }
  if (((bVar12 != 0) && (iVar1 != 1)) && (*(int *)(param_3 + 0x1420) == 0)) {
    FUN_1805dc090();
    uVar17 = FUN_18052fef0(lVar11,unaff_RBP + 0x90,*(int *)(lVar11 + 0x570) == 1,0);
LAB_1805de3df:
    puVar9 = (undefined8 *)FUN_180516f50(uVar17,&stack0x00000058);
    *unaff_RDI = *puVar9;
    uVar17 = puVar9[4];
    unaff_RDI[3] = puVar9[3];
    unaff_RDI[4] = uVar17;
    uVar17 = puVar9[6];
    unaff_RDI[5] = puVar9[5];
    unaff_RDI[6] = uVar17;
    fVar23 = *(float *)(unaff_RBP + 0x90);
    unaff_RDI[1] = puVar9[1];
    unaff_RDI[2] = puVar9[2];
    unaff_RDI[7] = puVar9[7];
    iVar1 = *(int *)(puVar9 + 8);
    *(int *)(unaff_RDI + 8) = iVar1;
    if ((fVar23 == *(float *)(unaff_RDI + 3)) &&
       (*(float *)(unaff_RBP + 0x94) == *(float *)((longlong)unaff_RDI + 0x1c))) {
      return;
    }
    if (iVar1 != 0) {
      *(undefined4 *)(unaff_RDI + 8) = 0;
    }
    unaff_RDI[3] = *(undefined8 *)(unaff_RBP + 0x90);
    return;
  }
FUN_1805de4c2:
  pfVar10 = (float *)FUN_1805b6cc0();
  bVar12 = *(byte *)(unaff_R14 + 8);
  *(float **)(unaff_RBP + 0x90) = pfVar10;
  if ((bVar12 & 1) == 0) {
    FUN_1805d3210();
    pfVar10 = *(float **)(unaff_RBP + 0x90);
  }
  fVar23 = *(float *)(*(longlong *)(unaff_R15 + 0x20) + 0x1450);
  fStack000000000000003c = fVar23 * pfVar10[1] + *(float *)(unaff_R14 + 0x4c);
  fVar21 = fStack000000000000003c - unaff_RBX[1];
  fVar22 = (fVar23 * *pfVar10 + *(float *)(unaff_R14 + 0x48)) - *unaff_RBX;
  fVar24 = fVar21 * fVar21 + fVar22 * fVar22;
  fVar24 = fVar24 + (float)(fVar24 <= 1.1754944e-38) * 1.1754944e-38;
  auVar20 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar23 = auVar20._0_4_;
  fVar23 = fVar23 * 0.5 * (3.0 - fVar24 * fVar23 * fVar23);
  fVar22 = fVar23 * fVar22;
  fVar21 = fVar23 * fVar21;
  *(float *)(unaff_RBP + 0xa0) = fVar22;
  *(float *)(unaff_RBP + 0x90) = fVar21;
  func_0x0001805b7050();
  lVar11 = *(longlong *)(unaff_R15 + 0x20) + 0x135c;
  cVar8 = func_0x000180522f60();
  if (((cVar8 == '\0') && ((*(uint *)(unaff_R13 + 0x56c) & 0x800) != 0)) && (0.0 < fVar23 * fVar24))
  {
    fStack0000000000000044 = -fVar22;
    in_stack_00000048 = 0;
    uStack000000000000004c = 0x7f7fffff;
    in_stack_00000040 = fVar21;
    FUN_180534b00(lVar11,unaff_RBP + -0x60,&stack0x00000040,0x3fc90fdb);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}






// 函数: void FUN_1805de067(int param_1,longlong param_2,longlong param_3)
void FUN_1805de067(int param_1,longlong param_2,longlong param_3)

{
  undefined4 uVar1;
  int iVar2;
  longlong lVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  undefined8 *puVar10;
  float *pfVar11;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  byte bVar12;
  longlong lVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float unaff_XMM11_Da;
  float fVar26;
  float fVar27;
  float fStack000000000000003c;
  float in_stack_00000040;
  float fStack0000000000000044;
  undefined4 in_stack_00000048;
  undefined4 uStack000000000000004c;
  undefined8 in_stack_00000058;
  undefined8 in_stack_00000070;
  undefined8 in_stack_00000078;
  undefined4 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  undefined4 in_stack_000000c0;
  undefined4 in_stack_000000c8;
  undefined4 in_stack_000000e0;
  undefined4 in_stack_000000e8;
  undefined4 in_stack_00000110;
  undefined4 in_stack_00000118;
  undefined4 in_stack_00000120;
  undefined4 in_stack_00000128;
  undefined4 in_stack_00000130;
  undefined4 in_stack_00000138;
  
  if (param_1 == 9) {
FUN_1805df09a:
    lVar13 = *(longlong *)(unaff_RSI + 0x9d8);
    lVar15 = *(longlong *)(unaff_RSI + 0x20);
    if ((lVar13 == 0) ||
       (cVar9 = FUN_18038d0a0(lVar13,lVar15 + 0xc), lVar16 = lVar13, cVar9 == '\0')) {
      lVar16 = 0;
    }
    lVar3 = *(longlong *)(unaff_RSI + 0x8d8);
    *(undefined8 *)(unaff_RBP + -0x70) = 0;
    uVar17 = *(undefined8 *)(lVar15 + 0xc);
    uVar6 = *(undefined8 *)(lVar15 + 0x14);
    uVar7 = *(undefined8 *)(lVar15 + 0xb0);
    uVar8 = *(undefined8 *)(lVar15 + 0xb8);
    *unaff_RDI = *(undefined8 *)(lVar3 + 0x18);
    unaff_RDI[3] = uVar17;
    unaff_RDI[4] = uVar6;
    unaff_RDI[1] = lVar16;
    unaff_RDI[5] = uVar7;
    unaff_RDI[6] = uVar8;
    unaff_RDI[2] = lVar13;
    unaff_RDI[7] = uVar17;
    *(undefined4 *)(unaff_RDI + 8) = 3;
    return;
  }
  lVar13 = *(longlong *)(unaff_RSI + 0x20);
  fVar23 = *(float *)(lVar13 + 0xc);
  fVar22 = *(float *)(lVar13 + 0x10);
  if (unaff_XMM11_Da * 100.0 <
      (fVar22 - unaff_RBX[1]) * (fVar22 - unaff_RBX[1]) +
      (fVar23 - *unaff_RBX) * (fVar23 - *unaff_RBX)) goto FUN_1805df09a;
  fVar18 = *(float *)(param_2 + 0x24);
  fVar19 = *(float *)(param_2 + 0x28);
  fVar27 = *(float *)(param_2 + 0x2c);
  uVar1 = *(undefined4 *)(unaff_R13 + 0x564);
  uVar14 = *(uint *)(unaff_RSI + 0x564);
  *(float *)(unaff_RBP + 0x90) = fVar18;
  *(float *)(unaff_RBP + 0x94) = fVar19;
  fVar21 = *(float *)(unaff_RBP + 0x90);
  in_stack_00000040 = *(float *)(unaff_RBP + 0x94);
  fVar4 = *(float *)(lVar13 + 0x24);
  fVar5 = *(float *)(lVar13 + 0x28);
  fVar26 = *(float *)(lVar13 + 0x2c);
  bVar12 = (byte)((uint)uVar1 >> 0x1f) ^ 1;
  fVar24 = *(float *)(param_2 + 0x84);
  fVar25 = *(float *)(lVar13 + 0x84);
  uVar14 = uVar14 >> 0x1f ^ 1;
  *(uint *)(unaff_RBP + 0xa8) = uVar14;
  fVar26 = fVar4 * fVar4 + fVar5 * fVar5 + fVar26 * fVar26;
  fVar27 = fVar18 * fVar18 + fVar19 * fVar19 + fVar27 * fVar27;
  fVar18 = in_stack_00000040 * in_stack_00000040 + fVar21 * fVar21;
  fVar18 = (float)(fVar18 <= 1.1754944e-38) * 1.1754944e-38 + fVar18;
  auVar20 = rsqrtss(ZEXT416((uint)fVar18),ZEXT416((uint)fVar18));
  fVar19 = auVar20._0_4_;
  fVar18 = fVar19 * 0.5 * (3.0 - fVar18 * fVar19 * fVar19);
  in_stack_00000040 = fVar18 * in_stack_00000040;
  fStack0000000000000044 = 0.5;
  in_stack_00000048 = 0x3f000000;
  uStack000000000000004c = 0x3f000000;
  *(float *)(unaff_RBP + 0x90) = fVar18 * fVar21;
  fVar21 = fVar26;
  if (fVar26 <= 1.1754944e-38) {
    fVar21 = 1.1754944e-38;
  }
  auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar18 = auVar20._0_4_;
  fVar21 = fVar18 * 0.5 * (3.0 - fVar21 * fVar18 * fVar18);
  if ((char)uVar14 != '\0') {
    if (bVar12 == 0) goto FUN_1805de4c2;
    fVar25 = fVar25 * fVar25;
    if ((((fVar25 * 0.010000001 < fVar26) && (fVar26 < fVar25 * 0.25)) &&
        (fVar24 = fVar24 * fVar24, fVar24 * 0.010000001 < fVar27)) &&
       ((fVar27 < fVar24 * 0.25 &&
        (fVar21 * fVar4 * *(float *)(unaff_RBP + 0x90) + fVar21 * fVar5 * in_stack_00000040 < 0.0)))
       ) {
      fVar21 = *(float *)(param_2 + 0xc);
      fVar24 = *(float *)(param_2 + 0x10);
      if (((fVar5 * *(float *)(param_3 + 0x1450) + fVar22) - fVar24) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x258c) +
          ((fVar4 * *(float *)(param_3 + 0x1450) + fVar23) - fVar21) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x2588) < 0.0) {
        *(float *)(unaff_RBP + 0x90) = (fVar21 + fVar21) - fVar23;
        *(float *)(unaff_RBP + 0x94) = (fVar24 + fVar24) - fVar22;
        uVar17 = FUN_18052fef0();
        goto LAB_1805de3df;
      }
    }
  }
  if (((bVar12 != 0) && (param_1 != 1)) && (*(int *)(param_3 + 0x1420) == 0)) {
    uVar17 = FUN_1805dc090();
    uVar17 = FUN_18052fef0(uVar17,unaff_RBP + 0x90,*(int *)(unaff_RSI + 0x570) == 1,0);
LAB_1805de3df:
    puVar10 = (undefined8 *)FUN_180516f50(uVar17,&stack0x00000058);
    *unaff_RDI = *puVar10;
    uVar17 = puVar10[4];
    unaff_RDI[3] = puVar10[3];
    unaff_RDI[4] = uVar17;
    uVar17 = puVar10[6];
    unaff_RDI[5] = puVar10[5];
    unaff_RDI[6] = uVar17;
    fVar23 = *(float *)(unaff_RBP + 0x90);
    unaff_RDI[1] = puVar10[1];
    unaff_RDI[2] = puVar10[2];
    unaff_RDI[7] = puVar10[7];
    iVar2 = *(int *)(puVar10 + 8);
    *(int *)(unaff_RDI + 8) = iVar2;
    if ((fVar23 == *(float *)(unaff_RDI + 3)) &&
       (*(float *)(unaff_RBP + 0x94) == *(float *)((longlong)unaff_RDI + 0x1c))) {
      return;
    }
    if (iVar2 != 0) {
      *(undefined4 *)(unaff_RDI + 8) = 0;
    }
    unaff_RDI[3] = *(undefined8 *)(unaff_RBP + 0x90);
    return;
  }
FUN_1805de4c2:
  pfVar11 = (float *)FUN_1805b6cc0();
  bVar12 = *(byte *)(unaff_R14 + 8);
  *(float **)(unaff_RBP + 0x90) = pfVar11;
  if ((bVar12 & 1) == 0) {
    FUN_1805d3210();
    pfVar11 = *(float **)(unaff_RBP + 0x90);
  }
  fVar23 = *(float *)(*(longlong *)(unaff_R15 + 0x20) + 0x1450);
  fStack000000000000003c = fVar23 * pfVar11[1] + *(float *)(unaff_R14 + 0x4c);
  fVar21 = fStack000000000000003c - unaff_RBX[1];
  fVar22 = (fVar23 * *pfVar11 + *(float *)(unaff_R14 + 0x48)) - *unaff_RBX;
  fVar24 = fVar21 * fVar21 + fVar22 * fVar22;
  fVar24 = fVar24 + (float)(fVar24 <= 1.1754944e-38) * 1.1754944e-38;
  auVar20 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar23 = auVar20._0_4_;
  fVar23 = fVar23 * 0.5 * (3.0 - fVar24 * fVar23 * fVar23);
  fVar22 = fVar23 * fVar22;
  fVar21 = fVar23 * fVar21;
  *(float *)(unaff_RBP + 0xa0) = fVar22;
  *(float *)(unaff_RBP + 0x90) = fVar21;
  func_0x0001805b7050();
  lVar13 = *(longlong *)(unaff_R15 + 0x20) + 0x135c;
  cVar9 = func_0x000180522f60();
  if (((cVar9 == '\0') && ((*(uint *)(unaff_R13 + 0x56c) & 0x800) != 0)) && (0.0 < fVar23 * fVar24))
  {
    fStack0000000000000044 = -fVar22;
    in_stack_00000048 = 0;
    uStack000000000000004c = 0x7f7fffff;
    in_stack_00000040 = fVar21;
    FUN_180534b00(lVar13,unaff_RBP + -0x60,&stack0x00000040,0x3fc90fdb);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}






// 函数: void FUN_1805de0f1(int param_1,longlong param_2,longlong param_3,uint param_4)
void FUN_1805de0f1(int param_1,longlong param_2,longlong param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  undefined7 uVar3;
  char cVar4;
  longlong in_RAX;
  undefined8 *puVar5;
  float *pfVar6;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  uint in_R10D;
  uint uVar8;
  int iVar9;
  undefined8 unaff_R12;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  undefined8 in_XMM2_Qa;
  float in_XMM2_Dc;
  undefined1 auVar13 [16];
  float in_XMM4_Da;
  float in_XMM5_Da;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float unaff_XMM10_Da;
  float unaff_XMM13_Da;
  float fVar18;
  float fVar19;
  uint uStack0000000000000038;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  int iStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  fVar12 = (float)((ulonglong)in_XMM2_Qa >> 0x20);
  fVar14 = *(float *)(in_RAX + 0x24);
  fVar16 = *(float *)(in_RAX + 0x28);
  fVar11 = *(float *)(in_RAX + 0x2c);
  uStack0000000000000038 = param_4 >> 0x1f ^ 1;
  fVar15 = *(float *)(param_2 + 0x84);
  fVar17 = *(float *)(in_RAX + 0x84);
  iVar9 = (int)unaff_R12;
  uVar3 = (undefined7)((ulonglong)unaff_R12 >> 8);
  uVar8 = in_R10D >> 0x1f ^ 1;
  *(uint *)(unaff_RBP + 0xa8) = uVar8;
  fVar18 = fVar14 * fVar14 + fVar16 * fVar16 + fVar11 * fVar11;
  fVar19 = (float)in_XMM2_Qa * (float)in_XMM2_Qa + fVar12 * fVar12 + in_XMM2_Dc * in_XMM2_Dc;
  fVar11 = in_XMM5_Da * in_XMM5_Da + in_XMM4_Da * in_XMM4_Da;
  fVar11 = (float)(int)CONCAT71(uVar3,fVar11 <= 1.1754944e-38) * 1.1754944e-38 + fVar11;
  auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar12 = auVar13._0_4_;
  fVar11 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
  fStack0000000000000040 = fVar11 * in_XMM5_Da;
  fStack0000000000000044 = 0.5;
  iStack0000000000000048 = 0x3f000000;
  uStack000000000000004c = 0x3f000000;
  *(float *)(unaff_RBP + 0x90) = fVar11 * in_XMM4_Da;
  fVar11 = fVar18;
  if (fVar18 <= 1.1754944e-38) {
    fVar11 = 1.1754944e-38;
  }
  auVar13 = rsqrtss(ZEXT416((uint)fVar11),ZEXT416((uint)fVar11));
  fVar12 = auVar13._0_4_;
  fVar11 = fVar12 * 0.5 * (3.0 - fVar11 * fVar12 * fVar12);
  if ((char)uVar8 != '\0') {
    if ((char)uStack0000000000000038 == '\0') goto FUN_1805de4c2;
    fVar17 = fVar17 * fVar17;
    if ((((fVar17 * 0.010000001 < fVar18) && (fVar18 < fVar17 * 0.25)) &&
        (fVar15 = fVar15 * fVar15, fVar15 * 0.010000001 < fVar19)) &&
       ((fVar19 < fVar15 * 0.25 &&
        (fVar11 * fVar14 * *(float *)(unaff_RBP + 0x90) + fVar11 * fVar16 * fStack0000000000000040 <
         0.0)))) {
      fVar15 = *(float *)(param_2 + 0xc);
      fVar17 = *(float *)(param_2 + 0x10);
      if (((fVar16 * *(float *)(param_3 + 0x1450) + unaff_XMM13_Da) - fVar17) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x258c) +
          ((fVar14 * *(float *)(param_3 + 0x1450) + unaff_XMM10_Da) - fVar15) *
          *(float *)(*(longlong *)(unaff_R13 + 0x590) + 0x2588) < 0.0) {
        *(float *)(unaff_RBP + 0x90) = (fVar15 + fVar15) - unaff_XMM10_Da;
        *(float *)(unaff_RBP + 0x94) = (fVar17 + fVar17) - unaff_XMM13_Da;
        uVar10 = FUN_18052fef0();
        goto LAB_1805de3df;
      }
    }
  }
  if ((((char)uStack0000000000000038 != '\0') && (param_1 != 1)) &&
     (*(int *)(param_3 + 0x1420) == iVar9)) {
    uVar10 = FUN_1805dc090();
    uVar10 = FUN_18052fef0(uVar10,unaff_RBP + 0x90,*(int *)(unaff_RSI + 0x570) == 1,0);
LAB_1805de3df:
    puVar5 = (undefined8 *)FUN_180516f50(uVar10,&stack0x00000058);
    *unaff_RDI = *puVar5;
    uVar10 = puVar5[4];
    unaff_RDI[3] = puVar5[3];
    unaff_RDI[4] = uVar10;
    uVar10 = puVar5[6];
    unaff_RDI[5] = puVar5[5];
    unaff_RDI[6] = uVar10;
    fVar15 = *(float *)(unaff_RBP + 0x90);
    unaff_RDI[1] = puVar5[1];
    unaff_RDI[2] = puVar5[2];
    unaff_RDI[7] = puVar5[7];
    iVar2 = *(int *)(puVar5 + 8);
    *(int *)(unaff_RDI + 8) = iVar2;
    if ((fVar15 != *(float *)(unaff_RDI + 3)) ||
       (*(float *)(unaff_RBP + 0x94) != *(float *)((longlong)unaff_RDI + 0x1c))) {
      if (iVar2 != 0) {
        *(int *)(unaff_RDI + 8) = iVar9;
      }
      unaff_RDI[3] = *(undefined8 *)(unaff_RBP + 0x90);
    }
    return;
  }
FUN_1805de4c2:
  pfVar6 = (float *)FUN_1805b6cc0();
  bVar1 = *(byte *)(unaff_R14 + 8);
  *(float **)(unaff_RBP + 0x90) = pfVar6;
  if ((bVar1 & 1) == 0) {
    FUN_1805d3210();
    pfVar6 = *(float **)(unaff_RBP + 0x90);
  }
  fVar15 = *(float *)(*(longlong *)(unaff_R15 + 0x20) + 0x1450);
  fStack000000000000003c = fVar15 * pfVar6[1] + *(float *)(unaff_R14 + 0x4c);
  fVar14 = fStack000000000000003c - unaff_RBX[1];
  fVar17 = (fVar15 * *pfVar6 + *(float *)(unaff_R14 + 0x48)) - *unaff_RBX;
  fVar16 = fVar14 * fVar14 + fVar17 * fVar17;
  fVar16 = fVar16 + (float)(int)CONCAT71(uVar3,fVar16 <= 1.1754944e-38) * 1.1754944e-38;
  auVar13 = rsqrtss(ZEXT416((uint)fVar16),ZEXT416((uint)fVar16));
  fVar15 = auVar13._0_4_;
  fVar15 = fVar15 * 0.5 * (3.0 - fVar16 * fVar15 * fVar15);
  fVar17 = fVar15 * fVar17;
  fVar14 = fVar15 * fVar14;
  *(float *)(unaff_RBP + 0xa0) = fVar17;
  *(float *)(unaff_RBP + 0x90) = fVar14;
  func_0x0001805b7050();
  lVar7 = *(longlong *)(unaff_R15 + 0x20) + 0x135c;
  cVar4 = func_0x000180522f60();
  if (((cVar4 == '\0') && ((*(uint *)(unaff_R13 + 0x56c) & 0x800) != 0)) && (0.0 < fVar15 * fVar16))
  {
    fStack0000000000000044 = -fVar17;
    uStack000000000000004c = 0x7f7fffff;
    fStack0000000000000040 = fVar14;
    iStack0000000000000048 = iVar9;
    FUN_180534b00(lVar7,unaff_RBP + -0x60,&stack0x00000040,0x3fc90fdb);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}






// 函数: void FUN_1805de484(void)
void FUN_1805de484(void)

{
  return;
}






// 函数: void FUN_1805de496(void)
void FUN_1805de496(void)

{
  return;
}






// 函数: void FUN_1805de49f(void)
void FUN_1805de49f(void)

{
  return;
}






// 函数: void FUN_1805de4c2(void)
void FUN_1805de4c2(void)

{
  byte bVar1;
  char cVar2;
  float *pfVar3;
  float *unaff_RBX;
  longlong unaff_RBP;
  longlong lVar4;
  undefined4 unaff_R12D;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  undefined1 auVar5 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float unaff_XMM12_Da;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  undefined4 uStack0000000000000048;
  undefined4 uStack000000000000004c;
  
  pfVar3 = (float *)FUN_1805b6cc0();
  bVar1 = *(byte *)(unaff_R14 + 8);
  *(float **)(unaff_RBP + 0x90) = pfVar3;
  if ((bVar1 & 1) == 0) {
    FUN_1805d3210();
    pfVar3 = *(float **)(unaff_RBP + 0x90);
  }
  fVar8 = *(float *)(*(longlong *)(unaff_R15 + 0x20) + 0x1450);
  fStack000000000000003c = fVar8 * pfVar3[1] + *(float *)(unaff_R14 + 0x4c);
  fVar7 = fStack000000000000003c - unaff_RBX[1];
  fVar6 = (fVar8 * *pfVar3 + *(float *)(unaff_R14 + 0x48)) - *unaff_RBX;
  fVar9 = fVar7 * fVar7 + fVar6 * fVar6;
  fVar9 = fVar9 + (float)CONCAT31((int3)((uint)unaff_R12D >> 8),fVar9 <= 1.1754944e-38) *
                  1.1754944e-38;
  auVar5 = rsqrtss(ZEXT416((uint)fVar9),ZEXT416((uint)fVar9));
  fVar8 = auVar5._0_4_;
  fVar8 = fVar8 * 0.5 * (3.0 - fVar9 * fVar8 * fVar8);
  fVar6 = fVar8 * fVar6;
  fVar7 = fVar8 * fVar7;
  *(float *)(unaff_RBP + 0xa0) = fVar6;
  *(float *)(unaff_RBP + 0x90) = fVar7;
  func_0x0001805b7050();
  lVar4 = *(longlong *)(unaff_R15 + 0x20) + 0x135c;
  cVar2 = func_0x000180522f60();
  if (((cVar2 == '\0') && ((*(uint *)(unaff_R13 + 0x56c) & 0x800) != 0)) &&
     (unaff_XMM12_Da < fVar8 * fVar9)) {
    fStack0000000000000044 = -fVar6;
    uStack000000000000004c = 0x7f7fffff;
    fStack0000000000000040 = fVar7;
    uStack0000000000000048 = unaff_R12D;
    FUN_180534b00(lVar4,unaff_RBP + -0x60,&stack0x00000040,0x3fc90fdb);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fd400();
}






// 函数: void FUN_1805df09a(void)
void FUN_1805df09a(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined8 *unaff_RDI;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  
  lVar7 = *(longlong *)(unaff_RSI + 0x9d8);
  lVar8 = *(longlong *)(unaff_RSI + 0x20);
  if ((lVar7 == 0) || (cVar6 = FUN_18038d0a0(lVar7,lVar8 + 0xc), lVar9 = lVar7, cVar6 == '\0')) {
    lVar9 = 0;
  }
  lVar1 = *(longlong *)(unaff_RSI + 0x8d8);
  *(undefined8 *)(unaff_RBP + -0x70) = 0;
  uVar2 = *(undefined8 *)(lVar8 + 0xc);
  uVar3 = *(undefined8 *)(lVar8 + 0x14);
  uVar4 = *(undefined8 *)(lVar8 + 0xb0);
  uVar5 = *(undefined8 *)(lVar8 + 0xb8);
  *unaff_RDI = *(undefined8 *)(lVar1 + 0x18);
  unaff_RDI[3] = uVar2;
  unaff_RDI[4] = uVar3;
  unaff_RDI[1] = lVar9;
  unaff_RDI[5] = uVar4;
  unaff_RDI[6] = uVar5;
  unaff_RDI[2] = lVar7;
  unaff_RDI[7] = uVar2;
  *(undefined4 *)(unaff_RDI + 8) = 3;
  return;
}






