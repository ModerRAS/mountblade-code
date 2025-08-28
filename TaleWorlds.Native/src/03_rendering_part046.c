#include "TaleWorlds.Native.Split.h"

// 03_rendering_part046.c - 1 个函数

// 函数: void FUN_1802908c4(void)
void FUN_1802908c4(void)

{
  return;
}



undefined4
FUN_1802908d0(longlong param_1,longlong param_2,float *param_3,undefined8 param_4,longlong param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  longlong lVar14;
  ushort *puVar15;
  longlong lVar16;
  short sVar17;
  uint uVar18;
  undefined4 uVar19;
  longlong lVar20;
  longlong lVar21;
  ushort uVar22;
  uint uVar23;
  ushort uVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  ushort uStackX_8;
  undefined4 uStack_114;
  int iStack_110;
  longlong lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 uStack_b0;
  
  fVar28 = 0.0;
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  fVar27 = *param_3;
  uVar6 = *(undefined4 *)(param_1 + 0x24);
  uStack_114 = 1;
  if (fVar27 <= 0.0) {
    fVar27 = -(fVar27 / (float)((uint)*(byte *)((longlong)*(int *)(param_2 + 0x1c) + 0x12 +
                                               *(longlong *)(param_2 + 8)) * 0x100 +
                               (uint)*(byte *)((longlong)*(int *)(param_2 + 0x1c) + 0x13 +
                                              *(longlong *)(param_2 + 8))));
  }
  else {
    lVar20 = (longlong)*(int *)(param_2 + 0x24);
    lVar16 = *(longlong *)(param_2 + 8);
    fVar27 = fVar27 / (float)((int)(short)((ushort)*(byte *)(lVar20 + 4 + lVar16) * 0x100 +
                                          (ushort)*(byte *)(lVar20 + 5 + lVar16)) -
                             (int)(short)((ushort)*(byte *)(lVar20 + 7 + lVar16) +
                                         (ushort)*(byte *)(lVar20 + 6 + lVar16) * 0x100));
  }
  bVar1 = *(byte *)(param_3 + 8);
  *(uint *)(param_1 + 0x20) = (uint)bVar1;
  bVar2 = *(byte *)((longlong)param_3 + 0x21);
  *(uint *)(param_1 + 0x24) = (uint)bVar2;
  if (bVar1 == 0) {
    fVar29 = 0.0;
  }
  else {
    fVar29 = (0.5 / (float)bVar1) * (float)(int)(1 - (uint)bVar1);
  }
  if (bVar2 != 0) {
    fVar28 = (0.5 / (float)bVar2) * (float)(int)(1 - (uint)bVar2);
  }
  iStack_110 = 0;
  uVar19 = 1;
  if (0 < (int)param_3[4]) {
    lVar16 = 0;
    puVar15 = (ushort *)(param_5 + 8);
    lStack_e8 = 0;
    do {
      if (*(int *)(puVar15 + 2) == 0) {
        uStack_114 = 0;
      }
      else {
        lVar20 = *(longlong *)(param_3 + 6);
        if (*(longlong *)(param_3 + 2) == 0) {
          iVar13 = (int)param_3[1] + iStack_110;
        }
        else {
          iVar13 = *(int *)(lStack_e8 + *(longlong *)(param_3 + 2));
        }
        iVar13 = FUN_18028be60(param_2,iVar13);
        sVar17 = *(short *)(param_1 + 0x1c);
        uStackX_8 = *puVar15 + sVar17;
        uVar24 = puVar15[-1] - sVar17;
        *puVar15 = uStackX_8;
        uVar22 = puVar15[-2] - sVar17;
        puVar15[-1] = uVar24;
        puVar15[-2] = uVar22;
        uVar11 = sVar17 + puVar15[1];
        puVar15[1] = uVar11;
        lVar21 = *(longlong *)(param_2 + 8);
        bVar3 = *(byte *)((longlong)*(int *)(param_2 + 0x24) + 0x22 + lVar21);
        bVar4 = *(byte *)((longlong)*(int *)(param_2 + 0x24) + 0x23 + lVar21);
        if (iVar13 < (int)((uint)bVar3 * 0x100 + (uint)bVar4)) {
          lVar14 = (longlong)(iVar13 * 4) + (longlong)*(int *)(param_2 + 0x28);
          sVar17 = (ushort)*(byte *)(lVar14 + lVar21) * 0x100 +
                   (ushort)*(byte *)(lVar14 + 1 + lVar21);
        }
        else {
          lVar14 = (longlong)*(int *)(param_2 + 0x28) + (ulonglong)CONCAT11(bVar3,bVar4) * 4;
          sVar17 = (ushort)*(byte *)(lVar14 + -3 + lVar21) +
                   (ushort)*(byte *)(lVar14 + -4 + lVar21) * 0x100;
        }
        uVar23 = *(uint *)(param_1 + 0x24);
        uVar18 = *(uint *)(param_1 + 0x20);
        uVar7 = (ulonglong)uVar23;
        uVar8 = (ulonglong)uVar18;
        if (*(int *)(param_2 + 0x4c) == 0) {
          iVar13 = func_0x00018028c210(param_2,iVar13);
          if (-1 < iVar13) {
            lVar14 = (longlong)iVar13;
            bVar3 = *(byte *)(lVar14 + 9 + lVar21);
            uVar10 = (uint)bVar3;
            iVar13 = (int)(short)((ushort)*(byte *)(lVar14 + 8 + lVar21) * 0x100 + (ushort)bVar3);
            iVar12 = (int)(short)((ushort)*(byte *)(lVar14 + 3 + lVar21) +
                                 (ushort)*(byte *)(lVar14 + 2 + lVar21) * 0x100);
            goto LAB_180290cc2;
          }
          iVar13 = 0;
          iVar12 = 0;
        }
        else {
          uStack_e0 = 1;
          uStack_b8 = 0;
          uStack_b0 = 0;
          uStack_d8 = 0;
          uStack_d0 = 0;
          uStack_c8 = 0;
          uStack_c0 = 0;
          iVar9 = FUN_18028d680(param_2,iVar13,&uStack_e0);
          uVar23 = *(uint *)(param_1 + 0x24);
          uVar11 = puVar15[1];
          iVar13 = 0;
          if (iVar9 != 0) {
            iVar13 = uStack_c0._4_4_;
          }
          iVar12 = 0;
          if (iVar9 != 0) {
            iVar12 = (int)uStack_c8;
          }
          uVar18 = *(uint *)(param_1 + 0x20);
          uVar24 = puVar15[-1];
          uVar22 = puVar15[-2];
          uStackX_8 = *puVar15;
          uVar10 = (uint)uStackX_8;
LAB_180290cc2:
          auVar25._0_4_ = (float)-iVar13 * (float)uVar7 * fVar27;
          iVar13 = (int)auVar25._0_4_;
          if ((iVar13 != -0x80000000) && ((float)iVar13 != auVar25._0_4_)) {
            auVar25._4_4_ = auVar25._0_4_;
            auVar25._8_8_ = 0;
            uVar10 = movmskps(uVar10,auVar25);
            uVar10 = uVar10 & 1;
            auVar25._0_4_ = (float)(int)(iVar13 - uVar10);
          }
          iVar13 = (int)auVar25._0_4_;
          auVar26._0_4_ = (float)iVar12 * (float)uVar8 * fVar27;
          iVar12 = (int)auVar26._0_4_;
          if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar26._0_4_)) {
            auVar26._4_4_ = auVar26._0_4_;
            auVar26._8_8_ = 0;
            uVar10 = movmskps(uVar10,auVar26);
            auVar26._0_4_ = (float)(int)(iVar12 - (uVar10 & 1));
          }
          iVar12 = (int)auVar26._0_4_;
        }
        FUN_180290070(param_2,(longlong)(int)((uint)uVar11 * *(int *)(param_1 + 0x18)) +
                              (ulonglong)uStackX_8 + *(longlong *)(param_1 + 0x28),
                      (uVar22 - uVar18) + 1,(uVar24 - uVar23) + 1,*(int *)(param_1 + 0x18),
                      (float)uVar18 * fVar27,(float)uVar23 * fVar27);
        if (1 < *(uint *)(param_1 + 0x20)) {
          FUN_180290380((longlong)(int)((uint)puVar15[1] * *(int *)(param_1 + 0x18)) +
                        (ulonglong)*puVar15 + *(longlong *)(param_1 + 0x28),puVar15[-2],puVar15[-1],
                        *(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x20));
        }
        if (1 < *(uint *)(param_1 + 0x24)) {
          FUN_180290630((longlong)(int)((uint)puVar15[1] * *(int *)(param_1 + 0x18)) +
                        (ulonglong)*puVar15 + *(longlong *)(param_1 + 0x28),puVar15[-2],puVar15[-1],
                        *(int *)(param_1 + 0x18),*(uint *)(param_1 + 0x24));
        }
        *(ushort *)(lVar16 + lVar20) = *puVar15;
        *(ushort *)(lVar16 + 2 + lVar20) = puVar15[1];
        *(ushort *)(lVar16 + 4 + lVar20) = *puVar15 + puVar15[-2];
        uVar11 = puVar15[-1];
        uVar24 = puVar15[1];
        *(float *)(lVar16 + 0x10 + lVar20) = (float)(int)sVar17 * fVar27;
        *(ushort *)(lVar16 + 6 + lVar20) = uVar11 + uVar24;
        *(float *)(lVar16 + 0xc + lVar20) = (float)iVar13 * (1.0 / (float)bVar2) + fVar28;
        *(float *)(lVar16 + 8 + lVar20) = (float)iVar12 * (1.0 / (float)bVar1) + fVar29;
        *(float *)(lVar16 + 0x14 + lVar20) =
             (float)(int)((uint)puVar15[-2] + iVar12) * (1.0 / (float)bVar1) + fVar29;
        *(float *)(lVar16 + 0x18 + lVar20) =
             (float)(int)((uint)puVar15[-1] + iVar13) * (1.0 / (float)bVar2) + fVar28;
      }
      iStack_110 = iStack_110 + 1;
      lStack_e8 = lStack_e8 + 4;
      puVar15 = puVar15 + 8;
      lVar16 = lVar16 + 0x1c;
      uVar19 = uStack_114;
    } while (iStack_110 < (int)param_3[4]);
  }
  *(undefined4 *)(param_1 + 0x20) = uVar5;
  *(undefined4 *)(param_1 + 0x24) = uVar6;
  return uVar19;
}



undefined4 FUN_1802909e0(longlong param_1,longlong param_2,undefined8 param_3,undefined4 param_4)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  longlong lVar10;
  ushort *puVar11;
  longlong lVar12;
  longlong unaff_RDI;
  short sVar13;
  uint uVar14;
  longlong lVar15;
  ushort uVar16;
  uint uVar17;
  longlong unaff_R13;
  longlong unaff_R14;
  ushort uVar18;
  float in_XMM1_Da;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float fVar21;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined8 in_stack_00000050;
  int iStack0000000000000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  longlong lStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  int iStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ushort uStack0000000000000170;
  longlong in_stack_00000178;
  ushort uStack0000000000000188;
  longlong in_stack_00000190;
  
  iVar9 = (int)param_1;
  *(int *)(unaff_RDI + 0x24) = iVar9;
  iVar8 = (int)param_2;
  if (iVar8 == 0) {
    fVar21 = 0.0;
  }
  else {
    fVar21 = (in_XMM1_Da / (float)iVar8) * (float)(1 - iVar8);
  }
  if (iVar9 != 0) {
    unaff_XMM9_Da = (in_XMM1_Da / (float)iVar9) * (float)(1 - iVar9);
  }
  iStack0000000000000058 = 0;
  if (0 < *(int *)(unaff_R14 + 0x10)) {
    lVar12 = 0;
    puVar11 = (ushort *)(in_stack_00000190 + 8);
    lStack0000000000000080 = 0;
    do {
      if (*(int *)(puVar11 + 2) == 0) {
        in_stack_00000050._4_4_ = 0;
      }
      else {
        lVar3 = *(longlong *)(unaff_R14 + 0x18);
        if (*(longlong *)(unaff_R14 + 8) == 0) {
          iVar9 = *(int *)(unaff_R14 + 4) + iStack0000000000000058;
        }
        else {
          iVar9 = *(int *)(lStack0000000000000080 + *(longlong *)(unaff_R14 + 8));
        }
        iVar9 = FUN_18028be60(unaff_R13,iVar9);
        sVar13 = *(short *)(unaff_RDI + 0x1c);
        uStack0000000000000170 = *puVar11 + sVar13;
        uVar18 = puVar11[-1] - sVar13;
        *puVar11 = uStack0000000000000170;
        uVar16 = puVar11[-2] - sVar13;
        puVar11[-1] = uVar18;
        puVar11[-2] = uVar16;
        uStack0000000000000188 = sVar13 + puVar11[1];
        puVar11[1] = uStack0000000000000188;
        lVar15 = *(longlong *)(unaff_R13 + 8);
        bVar1 = *(byte *)((longlong)*(int *)(unaff_R13 + 0x24) + 0x22 + lVar15);
        bVar2 = *(byte *)((longlong)*(int *)(unaff_R13 + 0x24) + 0x23 + lVar15);
        if (iVar9 < (int)((uint)bVar1 * 0x100 + (uint)bVar2)) {
          lVar10 = (longlong)(iVar9 * 4) + (longlong)*(int *)(unaff_R13 + 0x28);
          sVar13 = (ushort)*(byte *)(lVar10 + lVar15) * 0x100 +
                   (ushort)*(byte *)(lVar10 + 1 + lVar15);
        }
        else {
          lVar10 = (longlong)*(int *)(unaff_R13 + 0x28) + (ulonglong)CONCAT11(bVar1,bVar2) * 4;
          sVar13 = (ushort)*(byte *)(lVar10 + -3 + lVar15) +
                   (ushort)*(byte *)(lVar10 + -4 + lVar15) * 0x100;
        }
        uVar17 = *(uint *)(unaff_RDI + 0x24);
        uVar14 = *(uint *)(unaff_RDI + 0x20);
        uVar4 = (ulonglong)uVar17;
        uVar5 = (ulonglong)uVar14;
        if (*(int *)(in_stack_00000178 + 0x4c) == 0) {
          iVar9 = func_0x00018028c210(in_stack_00000178,iVar9);
          if (-1 < iVar9) {
            lVar10 = (longlong)iVar9;
            bVar1 = *(byte *)(lVar10 + 9 + lVar15);
            uVar7 = (uint)bVar1;
            iVar9 = (int)(short)((ushort)*(byte *)(lVar10 + 8 + lVar15) * 0x100 + (ushort)bVar1);
            iVar8 = (int)(short)((ushort)*(byte *)(lVar10 + 3 + lVar15) +
                                (ushort)*(byte *)(lVar10 + 2 + lVar15) * 0x100);
            goto LAB_180290cc2;
          }
          iVar9 = 0;
          iVar8 = 0;
        }
        else {
          in_stack_00000088 = 1;
          in_stack_000000b0 = 0;
          in_stack_000000b8 = 0;
          in_stack_00000090 = 0;
          in_stack_00000098 = 0;
          _iStack00000000000000a0 = 0;
          in_stack_000000a8 = 0;
          iVar6 = FUN_18028d680(in_stack_00000178,iVar9,&stack0x00000088);
          uVar17 = *(uint *)(unaff_RDI + 0x24);
          uStack0000000000000188 = puVar11[1];
          iVar9 = 0;
          if (iVar6 != 0) {
            iVar9 = in_stack_000000a8._4_4_;
          }
          iVar8 = 0;
          if (iVar6 != 0) {
            iVar8 = iStack00000000000000a0;
          }
          uVar14 = *(uint *)(unaff_RDI + 0x20);
          uVar18 = puVar11[-1];
          uVar16 = puVar11[-2];
          uStack0000000000000170 = *puVar11;
          uVar7 = (uint)uStack0000000000000170;
LAB_180290cc2:
          auVar19._0_4_ = (float)-iVar9 * (float)uVar4 * unaff_XMM7_Da;
          iVar9 = (int)auVar19._0_4_;
          if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar19._0_4_)) {
            auVar19._4_4_ = auVar19._0_4_;
            auVar19._8_8_ = 0;
            uVar7 = movmskps(uVar7,auVar19);
            uVar7 = uVar7 & 1;
            auVar19._0_4_ = (float)(int)(iVar9 - uVar7);
          }
          iVar9 = (int)auVar19._0_4_;
          auVar20._0_4_ = (float)iVar8 * (float)uVar5 * unaff_XMM7_Da;
          iVar8 = (int)auVar20._0_4_;
          if ((iVar8 != -0x80000000) && ((float)iVar8 != auVar20._0_4_)) {
            auVar20._4_4_ = auVar20._0_4_;
            auVar20._8_8_ = 0;
            uVar7 = movmskps(uVar7,auVar20);
            auVar20._0_4_ = (float)(int)(iVar8 - (uVar7 & 1));
          }
          iVar8 = (int)auVar20._0_4_;
        }
        FUN_180290070(in_stack_00000178,
                      (longlong)(int)((uint)uStack0000000000000188 * *(int *)(unaff_RDI + 0x18)) +
                      (ulonglong)uStack0000000000000170 + *(longlong *)(unaff_RDI + 0x28),
                      (uVar16 - uVar14) + 1,(uVar18 - uVar17) + 1,*(int *)(unaff_RDI + 0x18));
        if (1 < *(uint *)(unaff_RDI + 0x20)) {
          FUN_180290380((longlong)(int)((uint)puVar11[1] * *(int *)(unaff_RDI + 0x18)) +
                        (ulonglong)*puVar11 + *(longlong *)(unaff_RDI + 0x28),puVar11[-2],
                        puVar11[-1],*(int *)(unaff_RDI + 0x18),*(uint *)(unaff_RDI + 0x20));
        }
        if (1 < *(uint *)(unaff_RDI + 0x24)) {
          FUN_180290630((longlong)(int)((uint)puVar11[1] * *(int *)(unaff_RDI + 0x18)) +
                        (ulonglong)*puVar11 + *(longlong *)(unaff_RDI + 0x28),puVar11[-2],
                        puVar11[-1],*(int *)(unaff_RDI + 0x18),*(uint *)(unaff_RDI + 0x24));
        }
        *(ushort *)(lVar12 + lVar3) = *puVar11;
        *(ushort *)(lVar12 + 2 + lVar3) = puVar11[1];
        *(ushort *)(lVar12 + 4 + lVar3) = *puVar11 + puVar11[-2];
        uVar18 = puVar11[-1];
        uVar16 = puVar11[1];
        *(float *)(lVar12 + 0x10 + lVar3) = (float)(int)sVar13 * unaff_XMM7_Da;
        *(ushort *)(lVar12 + 6 + lVar3) = uVar18 + uVar16;
        *(float *)(lVar12 + 0xc + lVar3) =
             (float)iVar9 * (unaff_XMM11_Da / (float)param_1) + unaff_XMM9_Da;
        *(float *)(lVar12 + 8 + lVar3) = (float)iVar8 * (unaff_XMM12_Da / (float)param_2) + fVar21;
        *(float *)(lVar12 + 0x14 + lVar3) =
             (float)(int)((uint)puVar11[-2] + iVar8) * (unaff_XMM12_Da / (float)param_2) + fVar21;
        *(float *)(lVar12 + 0x18 + lVar3) =
             (float)(int)((uint)puVar11[-1] + iVar9) * (unaff_XMM11_Da / (float)param_1) +
             unaff_XMM9_Da;
        unaff_R13 = in_stack_00000178;
      }
      iStack0000000000000058 = iStack0000000000000058 + 1;
      lStack0000000000000080 = lStack0000000000000080 + 4;
      puVar11 = puVar11 + 8;
      lVar12 = lVar12 + 0x1c;
      param_4 = in_stack_00000050._4_4_;
    } while (iStack0000000000000058 < *(int *)(unaff_R14 + 0x10));
  }
  *(undefined4 *)(unaff_RDI + 0x20) = in_stack_00000060._4_4_;
  *(undefined4 *)(unaff_RDI + 0x24) = in_stack_00000068;
  return param_4;
}



undefined4 FUN_180290a71(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  longlong unaff_RBX;
  ushort *puVar11;
  longlong lVar12;
  longlong unaff_RDI;
  short sVar13;
  uint uVar14;
  longlong lVar15;
  ushort uVar16;
  uint uVar17;
  longlong unaff_R13;
  longlong unaff_R14;
  ushort uVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  undefined8 in_stack_00000050;
  int in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  longlong lStack0000000000000080;
  undefined8 in_stack_00000088;
  undefined8 in_stack_00000090;
  undefined8 in_stack_00000098;
  int iStack00000000000000a0;
  undefined8 in_stack_000000a8;
  undefined8 in_stack_000000b0;
  undefined4 in_stack_000000b8;
  ushort uStack0000000000000170;
  longlong in_stack_00000178;
  ushort uStack0000000000000188;
  
  lVar12 = 0;
  puVar11 = (ushort *)(unaff_RBX + 8);
  lStack0000000000000080 = param_2;
  do {
    if (*(int *)(puVar11 + 2) == 0) {
      in_stack_00000050._4_4_ = 0;
      in_stack_00000058 = param_1;
    }
    else {
      lVar3 = *(longlong *)(unaff_R14 + 0x18);
      if (*(longlong *)(unaff_R14 + 8) == 0) {
        param_1 = *(int *)(unaff_R14 + 4) + param_1;
      }
      else {
        param_1 = *(int *)(lStack0000000000000080 + *(longlong *)(unaff_R14 + 8));
      }
      iVar6 = FUN_18028be60(unaff_R13,param_1);
      sVar13 = *(short *)(unaff_RDI + 0x1c);
      uStack0000000000000170 = *puVar11 + sVar13;
      uVar18 = puVar11[-1] - sVar13;
      *puVar11 = uStack0000000000000170;
      uVar16 = puVar11[-2] - sVar13;
      puVar11[-1] = uVar18;
      puVar11[-2] = uVar16;
      uStack0000000000000188 = sVar13 + puVar11[1];
      puVar11[1] = uStack0000000000000188;
      lVar15 = *(longlong *)(unaff_R13 + 8);
      bVar1 = *(byte *)((longlong)*(int *)(unaff_R13 + 0x24) + 0x22 + lVar15);
      bVar2 = *(byte *)((longlong)*(int *)(unaff_R13 + 0x24) + 0x23 + lVar15);
      if (iVar6 < (int)((uint)bVar1 * 0x100 + (uint)bVar2)) {
        lVar10 = (longlong)(iVar6 * 4) + (longlong)*(int *)(unaff_R13 + 0x28);
        sVar13 = (ushort)*(byte *)(lVar10 + lVar15) * 0x100 + (ushort)*(byte *)(lVar10 + 1 + lVar15)
        ;
      }
      else {
        lVar10 = (longlong)*(int *)(unaff_R13 + 0x28) + (ulonglong)CONCAT11(bVar1,bVar2) * 4;
        sVar13 = (ushort)*(byte *)(lVar10 + -3 + lVar15) +
                 (ushort)*(byte *)(lVar10 + -4 + lVar15) * 0x100;
      }
      uVar17 = *(uint *)(unaff_RDI + 0x24);
      uVar14 = *(uint *)(unaff_RDI + 0x20);
      uVar4 = (ulonglong)uVar17;
      uVar5 = (ulonglong)uVar14;
      if (*(int *)(in_stack_00000178 + 0x4c) == 0) {
        iVar6 = func_0x00018028c210(in_stack_00000178,iVar6);
        if (-1 < iVar6) {
          lVar10 = (longlong)iVar6;
          bVar1 = *(byte *)(lVar10 + 9 + lVar15);
          uVar8 = (uint)bVar1;
          iVar6 = (int)(short)((ushort)*(byte *)(lVar10 + 8 + lVar15) * 0x100 + (ushort)bVar1);
          iVar9 = (int)(short)((ushort)*(byte *)(lVar10 + 3 + lVar15) +
                              (ushort)*(byte *)(lVar10 + 2 + lVar15) * 0x100);
          goto LAB_180290cc2;
        }
        iVar6 = 0;
        iVar9 = 0;
      }
      else {
        in_stack_00000088 = 1;
        in_stack_000000b0 = 0;
        in_stack_000000b8 = 0;
        in_stack_00000090 = 0;
        in_stack_00000098 = 0;
        _iStack00000000000000a0 = 0;
        in_stack_000000a8 = 0;
        iVar7 = FUN_18028d680(in_stack_00000178,iVar6,&stack0x00000088);
        uVar17 = *(uint *)(unaff_RDI + 0x24);
        uStack0000000000000188 = puVar11[1];
        iVar6 = 0;
        if (iVar7 != 0) {
          iVar6 = in_stack_000000a8._4_4_;
        }
        iVar9 = 0;
        if (iVar7 != 0) {
          iVar9 = iStack00000000000000a0;
        }
        uVar14 = *(uint *)(unaff_RDI + 0x20);
        uVar18 = puVar11[-1];
        uVar16 = puVar11[-2];
        uStack0000000000000170 = *puVar11;
        uVar8 = (uint)uStack0000000000000170;
LAB_180290cc2:
        auVar19._0_4_ = (float)-iVar6 * (float)uVar4 * unaff_XMM7_Da;
        iVar6 = (int)auVar19._0_4_;
        if ((iVar6 != -0x80000000) && ((float)iVar6 != auVar19._0_4_)) {
          auVar19._4_4_ = auVar19._0_4_;
          auVar19._8_8_ = 0;
          uVar8 = movmskps(uVar8,auVar19);
          uVar8 = uVar8 & 1;
          auVar19._0_4_ = (float)(int)(iVar6 - uVar8);
        }
        iVar6 = (int)auVar19._0_4_;
        auVar20._0_4_ = (float)iVar9 * (float)uVar5 * unaff_XMM7_Da;
        iVar9 = (int)auVar20._0_4_;
        if ((iVar9 != -0x80000000) && ((float)iVar9 != auVar20._0_4_)) {
          auVar20._4_4_ = auVar20._0_4_;
          auVar20._8_8_ = 0;
          uVar8 = movmskps(uVar8,auVar20);
          auVar20._0_4_ = (float)(int)(iVar9 - (uVar8 & 1));
        }
        iVar9 = (int)auVar20._0_4_;
      }
      FUN_180290070(in_stack_00000178,
                    (longlong)(int)((uint)uStack0000000000000188 * *(int *)(unaff_RDI + 0x18)) +
                    (ulonglong)uStack0000000000000170 + *(longlong *)(unaff_RDI + 0x28),
                    (uVar16 - uVar14) + 1,(uVar18 - uVar17) + 1,*(int *)(unaff_RDI + 0x18));
      if (1 < *(uint *)(unaff_RDI + 0x20)) {
        FUN_180290380((longlong)(int)((uint)puVar11[1] * *(int *)(unaff_RDI + 0x18)) +
                      (ulonglong)*puVar11 + *(longlong *)(unaff_RDI + 0x28),puVar11[-2],puVar11[-1],
                      *(int *)(unaff_RDI + 0x18),*(uint *)(unaff_RDI + 0x20));
      }
      if (1 < *(uint *)(unaff_RDI + 0x24)) {
        FUN_180290630((longlong)(int)((uint)puVar11[1] * *(int *)(unaff_RDI + 0x18)) +
                      (ulonglong)*puVar11 + *(longlong *)(unaff_RDI + 0x28),puVar11[-2],puVar11[-1],
                      *(int *)(unaff_RDI + 0x18),*(uint *)(unaff_RDI + 0x24));
      }
      *(ushort *)(lVar12 + lVar3) = *puVar11;
      *(ushort *)(lVar12 + 2 + lVar3) = puVar11[1];
      *(ushort *)(lVar12 + 4 + lVar3) = *puVar11 + puVar11[-2];
      uVar18 = puVar11[-1];
      uVar16 = puVar11[1];
      *(float *)(lVar12 + 0x10 + lVar3) = (float)(int)sVar13 * unaff_XMM7_Da;
      *(ushort *)(lVar12 + 6 + lVar3) = uVar18 + uVar16;
      *(float *)(lVar12 + 0xc + lVar3) = (float)iVar6 * unaff_XMM11_Da + unaff_XMM9_Da;
      *(float *)(lVar12 + 8 + lVar3) = (float)iVar9 * unaff_XMM12_Da + unaff_XMM10_Da;
      *(float *)(lVar12 + 0x14 + lVar3) =
           (float)(int)((uint)puVar11[-2] + iVar9) * unaff_XMM12_Da + unaff_XMM10_Da;
      *(float *)(lVar12 + 0x18 + lVar3) =
           (float)(int)((uint)puVar11[-1] + iVar6) * unaff_XMM11_Da + unaff_XMM9_Da;
      unaff_R13 = in_stack_00000178;
    }
    param_1 = in_stack_00000058 + 1;
    lStack0000000000000080 = lStack0000000000000080 + 4;
    puVar11 = puVar11 + 8;
    lVar12 = lVar12 + 0x1c;
    in_stack_00000058 = param_1;
    if (*(int *)(unaff_R14 + 0x10) <= param_1) {
      *(undefined4 *)(unaff_RDI + 0x20) = in_stack_00000060._4_4_;
      *(undefined4 *)(unaff_RDI + 0x24) = in_stack_00000068;
      return in_stack_00000050._4_4_;
    }
  } while( true );
}



undefined4 FUN_180290f82(void)

{
  longlong unaff_RDI;
  undefined4 in_R9D;
  undefined8 in_stack_00000060;
  undefined4 in_stack_00000068;
  
  *(undefined4 *)(unaff_RDI + 0x20) = in_stack_00000060._4_4_;
  *(undefined4 *)(unaff_RDI + 0x24) = in_stack_00000068;
  return in_R9D;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



