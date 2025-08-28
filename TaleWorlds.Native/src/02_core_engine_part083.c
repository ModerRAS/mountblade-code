#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part083.c - 5 个函数

// 函数: void FUN_180110540(int param_1)
void FUN_180110540(int param_1)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  char cVar12;
  longlong lVar13;
  uint uVar14;
  ulonglong uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  char acStackX_8 [8];
  char acStackX_10 [8];
  float fStackX_18;
  float fStackX_20;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  float fStack_dc;
  
  lVar6 = _DAT_180c8a9b0;
  puVar11 = &UNK_180a06310;
  lVar4 = *(longlong *)(_DAT_180c8a9b0 + 0x1af8);
  if (param_1 == 0) {
    puVar11 = &UNK_180a06320;
  }
  iVar8 = FUN_180121250(puVar11,0,
                        *(undefined4 *)
                         (*(longlong *)(lVar4 + 0x220) + -4 + (longlong)*(int *)(lVar4 + 0x218) * 4)
                       );
  if (*(int *)(lVar6 + 0x1b2c) == iVar8) {
    *(int *)(lVar6 + 0x1b34) = iVar8;
  }
  if (*(int *)(lVar6 + 0x1b30) == iVar8) {
    *(undefined1 *)(lVar6 + 0x1b3f) = 1;
  }
  if (param_1 == 0) {
    cVar12 = *(char *)(lVar4 + 0xad);
  }
  else {
    cVar12 = *(char *)(lVar4 + 0xac);
  }
  if (cVar12 == '\0') {
    fVar21 = 0.0;
  }
  else {
    fVar21 = *(float *)(lVar6 + 0x168c);
  }
  fVar18 = *(float *)(lVar4 + 0x7c);
  fStackX_18 = *(float *)(lVar4 + 0x40) + *(float *)(lVar4 + 0x48);
  fStackX_20 = *(float *)(lVar4 + 0x44) + *(float *)(lVar4 + 0x4c);
  if (param_1 == 0) {
    fStack_f8 = *(float *)(lVar4 + 0x40) + fVar18;
    fVar16 = fStackX_20 - *(float *)(lVar6 + 0x168c);
    fStack_ec = fStackX_20 - fVar18;
    fStack_f0 = (fStackX_18 - fVar21) - fVar18;
  }
  else {
    uVar15 = (ulonglong)*(uint *)(lVar4 + 0xc);
    fVar16 = *(float *)(lVar4 + 0x44) + fVar18;
    fStack_f8 = fStackX_18 - *(float *)(lVar6 + 0x168c);
    fStack_f0 = fStackX_18 - fVar18;
    fStack_ec = (fStackX_20 - fVar21) - fVar18;
    if ((*(uint *)(lVar4 + 0xc) >> 10 & 1) == 0) {
      fVar18 = 0.0;
    }
    else {
      fStack_f4 = fVar16;
      fVar18 = (float)func_0x00018010e7a0(lVar4);
    }
    if ((uVar15 & 1) == 0) {
      fVar23 = *(float *)(lVar6 + 0x19fc) * *(float *)(lVar4 + 0x2d8) * *(float *)(lVar4 + 0x2dc) +
               *(float *)(lVar6 + 0x1660) + *(float *)(lVar6 + 0x1660);
    }
    else {
      fVar23 = 0.0;
    }
    fVar16 = fVar23 + fVar18 + fVar16;
  }
  fVar20 = fStack_ec;
  fVar23 = fStack_f0;
  fVar18 = fStack_f8;
  fVar17 = fStack_f0 - fStack_f8;
  if ((0.0 < fVar17) && (fVar19 = fStack_ec - fVar16, 0.0 < fVar19)) {
    if (param_1 == 0) {
      uVar14 = 0xc;
      if (cVar12 != '\0') {
        uVar14 = 4;
      }
    }
    else {
      uVar14 = 2;
      if ((*(uint *)(lVar4 + 0xc) & 0x401) != 1) {
        uVar14 = 0;
      }
      uVar9 = 8;
      if (cVar12 != '\0') {
        uVar9 = 0;
      }
      uVar14 = uVar14 | uVar9;
    }
    uStack_e8 = *(undefined4 *)(lVar6 + 0x17a8);
    uStack_e4 = *(undefined4 *)(lVar6 + 0x17ac);
    uStack_e0 = *(undefined4 *)(lVar6 + 0x17b0);
    fStack_dc = *(float *)(lVar6 + 0x17b4) * *(float *)(lVar6 + 0x1628);
    fStack_f4 = fVar16;
    uVar10 = func_0x000180121e20(&uStack_e8);
    FUN_180293f50(*(undefined8 *)(lVar4 + 0x2e8),&fStack_f8,&fStack_f0,uVar10,
                  *(undefined4 *)(lVar4 + 0x78),uVar14);
    fVar19 = (float)(int)((fVar19 - 2.0) * 0.5);
    if (0.0 <= fVar19) {
      if (3.0 <= fVar19) {
        fVar19 = 3.0;
      }
    }
    else {
      fVar19 = 0.0;
    }
    fVar17 = (float)(int)((fVar17 - 2.0) * 0.5);
    if (0.0 <= fVar17) {
      if (3.0 <= fVar17) {
        fVar17 = 3.0;
      }
    }
    else {
      fVar17 = 0.0;
    }
    fStack_f4 = fVar16 - -fVar19;
    fStack_f8 = fVar18 - -fVar17;
    fStack_f0 = -fVar17 + fVar23;
    fStack_ec = fVar20 + -fVar19;
    if (param_1 == 0) {
      fVar18 = *(float *)(lVar4 + 0x8c);
      fVar20 = fStack_f0 - fStack_f8;
      fVar16 = *(float *)(lVar4 + 0x50);
      fVar23 = *(float *)(lVar4 + 0x60);
    }
    else {
      fVar18 = *(float *)(lVar4 + 0x90);
      fVar16 = *(float *)(lVar4 + 0x54);
      fVar20 = fStack_ec - fStack_f4;
      fVar23 = *(float *)(lVar4 + 100);
    }
    fVar16 = fVar16 - fVar21;
    fVar21 = fVar23;
    if (fVar23 <= fVar16) {
      fVar21 = fVar16;
    }
    if (fVar21 <= 1.0) {
      fVar21 = 1.0;
    }
    fVar17 = (fVar16 / fVar21) * fVar20;
    fVar21 = *(float *)(lVar6 + 0x1694);
    if ((*(float *)(lVar6 + 0x1694) <= fVar17) && (fVar21 = fVar17, fVar20 <= fVar17)) {
      fVar21 = fVar20;
    }
    iVar3 = *(int *)(lVar6 + 0x1b2c);
    acStackX_8[0] = '\0';
    fVar24 = 1.0 / fVar20;
    acStackX_10[0] = '\0';
    fVar22 = fVar21 * fVar24;
    FUN_18010f170(&fStack_f8,iVar8,acStackX_10,acStackX_8,0x2000);
    fVar19 = fStack_f4;
    fVar17 = fStack_f8;
    lVar7 = _DAT_180c8a9b0;
    fVar23 = fVar23 - fVar16;
    if (fVar23 <= 1.0) {
      fVar23 = 1.0;
    }
    fVar18 = (1.0 / fVar23) * fVar18;
    if (0.0 <= fVar18) {
      if (1.0 <= fVar18) {
        fVar18 = 1.0;
      }
    }
    else {
      fVar18 = 0.0;
    }
    fVar18 = fVar18 * (fVar20 - fVar21) * fVar24;
    if (acStackX_8[0] == '\0') {
      lVar13 = (ulonglong)(acStackX_10[0] != '\0') + 0xf;
    }
    else {
      if (fVar22 < 1.0) {
        if (param_1 == 0) {
          fVar16 = *(float *)(lVar6 + 0x118);
          lVar13 = 0x2dc4;
          fVar2 = fStack_f8;
        }
        else {
          fVar16 = *(float *)(lVar6 + 0x11c);
          lVar13 = 0x2dc8;
          fVar2 = fStack_f4;
        }
        fVar16 = (fVar16 - fVar2) * fVar24;
        if (0.0 <= fVar16) {
          if (1.0 <= fVar16) {
            fVar16 = 1.0;
          }
        }
        else {
          fVar16 = 0.0;
        }
        *(int *)(_DAT_180c8a9b0 + 0x1b18) = iVar8;
        *(undefined1 *)(lVar7 + 0x1b1c) = 0;
        if ((iVar8 != 0) && (*(int *)(lVar7 + 0x1b20) != iVar8)) {
          *(undefined8 *)(lVar7 + 0x1b24) = 0;
        }
        bVar5 = false;
        if (iVar3 != iVar8) {
          if ((fVar16 < fVar18) || (fVar18 + fVar22 < fVar16)) {
            bVar5 = true;
            *(undefined4 *)(lVar6 + lVar13) = 0;
          }
          else {
            *(float *)(lVar6 + lVar13) = (fVar16 - fVar18) - fVar22 * 0.5;
            bVar5 = false;
          }
        }
        fVar18 = ((fVar16 - *(float *)(lVar6 + lVar13)) - fVar22 * 0.5) / (1.0 - fVar22);
        if (0.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
        }
        else {
          fVar18 = 0.0;
        }
        fVar18 = (float)(int)(fVar18 * fVar23 + 0.5);
        if (param_1 == 0) {
          *(float *)(lVar4 + 0x8c) = fVar18;
        }
        else {
          *(float *)(lVar4 + 0x90) = fVar18;
        }
        fVar18 = (1.0 / fVar23) * fVar18;
        if (0.0 <= fVar18) {
          if (1.0 <= fVar18) {
            fVar18 = 1.0;
          }
        }
        else {
          fVar18 = 0.0;
        }
        fVar18 = fVar18 * (fVar20 - fVar21) * fVar24;
        if (bVar5) {
          *(float *)(lVar6 + lVar13) = (fVar16 - fVar18) - fVar22 * 0.5;
        }
      }
      lVar13 = 0x11;
    }
    puVar1 = (undefined4 *)(lVar7 + 0x1628 + (lVar13 + 10) * 0x10);
    uStack_e8 = *puVar1;
    uStack_e4 = puVar1[1];
    uStack_e0 = puVar1[2];
    fStack_dc = (float)puVar1[3] * *(float *)(lVar7 + 0x1628);
    uVar10 = func_0x000180121e20(&uStack_e8);
    if (param_1 == 0) {
      fStack_f8 = (fStack_f0 - fVar17) * fVar18 + fVar17;
      fStack_f0 = fVar21 + fStack_f8;
      fStack_f4 = fVar19;
      if (fStackX_18 <= fStack_f0) {
        fStack_f0 = fStackX_18;
      }
    }
    else {
      fStack_f4 = (fStack_ec - fVar19) * fVar18 + fVar19;
      fStack_ec = fVar21 + fStack_f4;
      fStack_f8 = fVar17;
      if (fStackX_20 <= fStack_ec) {
        fStack_ec = fStackX_20;
      }
    }
    FUN_180293f50(*(undefined8 *)(lVar4 + 0x2e8),&fStack_f8,&fStack_f0,uVar10,
                  *(undefined4 *)(lVar6 + 0x1690),0xf);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180110753(void)
void FUN_180110753(void)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R14D;
  int unaff_R15D;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float fVar11;
  float fVar12;
  float unaff_XMM9_Da;
  float fVar13;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar14;
  float unaff_XMM13_Da;
  float fVar15;
  float fVar16;
  float in_stack_00000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  
  if (unaff_XMM10_Da < fStack000000000000003c - unaff_XMM7_Da) {
    uStack0000000000000040 = *(undefined4 *)(unaff_RDI + 0x17a8);
    uStack0000000000000044 = *(undefined4 *)(unaff_RDI + 0x17ac);
    uStack0000000000000048 = *(undefined4 *)(unaff_RDI + 0x17b0);
    fStack000000000000004c = *(float *)(unaff_RDI + 0x17b4);
    *(float *)(unaff_RBP + -0x7d) = fStack000000000000004c * *(float *)(unaff_RDI + 0x1628);
    uVar7 = func_0x000180121e20(&stack0x00000040);
    FUN_180293f50(*(undefined8 *)(unaff_RBX + 0x2e8),&stack0x00000030,&stack0x00000038,uVar7,
                  *(undefined4 *)(unaff_RBX + 0x78));
    fVar9 = (float)(int)(((fStack000000000000003c - unaff_XMM7_Da) - 2.0) * 0.5);
    if (unaff_XMM10_Da <= fVar9) {
      if (3.0 <= fVar9) {
        fVar9 = 3.0;
      }
    }
    else {
      fVar9 = 0.0;
    }
    fVar11 = (float)(int)((unaff_XMM6_Da - 2.0) * 0.5);
    if (unaff_XMM10_Da <= fVar11) {
      if (3.0 <= fVar11) {
        fVar11 = 3.0;
      }
    }
    else {
      fVar11 = 0.0;
    }
    fStack0000000000000034 = unaff_XMM7_Da - -fVar9;
    in_stack_00000030 = unaff_XMM11_Da - -fVar11;
    fStack0000000000000038 = -fVar11 + unaff_XMM13_Da;
    fStack000000000000003c = fStack000000000000003c + -fVar9;
    if (unaff_R15D == 0) {
      fVar9 = *(float *)(unaff_RBX + 0x8c);
      fVar12 = fStack0000000000000038 - in_stack_00000030;
      fVar11 = *(float *)(unaff_RBX + 0x50);
      fVar15 = *(float *)(unaff_RBX + 0x60);
    }
    else {
      fVar9 = *(float *)(unaff_RBX + 0x90);
      fVar11 = *(float *)(unaff_RBX + 0x54);
      fVar12 = fStack000000000000003c - fStack0000000000000034;
      fVar15 = *(float *)(unaff_RBX + 100);
    }
    fVar11 = fVar11 - unaff_XMM9_Da;
    fVar13 = fVar15;
    if (fVar15 <= fVar11) {
      fVar13 = fVar11;
    }
    if (fVar13 <= 1.0) {
      fVar13 = 1.0;
    }
    fVar10 = (fVar11 / fVar13) * fVar12;
    fVar13 = *(float *)(unaff_RDI + 0x1694);
    if ((*(float *)(unaff_RDI + 0x1694) <= fVar10) && (fVar13 = fVar10, fVar12 <= fVar10)) {
      fVar13 = fVar12;
    }
    iVar3 = *(int *)(unaff_RDI + 0x1b2c);
    *(undefined1 *)(unaff_RBP + 0x67) = 0;
    fVar16 = 1.0 / fVar12;
    *(undefined1 *)(unaff_RBP + 0x6f) = 0;
    fVar14 = fVar13 * fVar16;
    FUN_18010f170(&stack0x00000030,unaff_R14D,unaff_RBP + 0x6f,unaff_RBP + 0x67,0x2000);
    fVar6 = fStack0000000000000034;
    fVar10 = in_stack_00000030;
    lVar5 = _DAT_180c8a9b0;
    fVar15 = fVar15 - fVar11;
    if (fVar15 <= 1.0) {
      fVar15 = 1.0;
    }
    fVar9 = (1.0 / fVar15) * fVar9;
    if (unaff_XMM10_Da <= fVar9) {
      if (1.0 <= fVar9) {
        fVar9 = 1.0;
      }
    }
    else {
      fVar9 = 0.0;
    }
    fVar9 = fVar9 * (fVar12 - fVar13) * fVar16;
    if (*(char *)(unaff_RBP + 0x67) == '\0') {
      lVar8 = (ulonglong)(*(char *)(unaff_RBP + 0x6f) != '\0') + 0xf;
    }
    else {
      if (fVar14 < 1.0) {
        if (unaff_R15D == 0) {
          fVar11 = *(float *)(unaff_RDI + 0x118);
          lVar8 = 0x2dc4;
          fVar2 = in_stack_00000030;
        }
        else {
          fVar11 = *(float *)(unaff_RDI + 0x11c);
          lVar8 = 0x2dc8;
          fVar2 = fStack0000000000000034;
        }
        fVar11 = (fVar11 - fVar2) * fVar16;
        if (unaff_XMM10_Da <= fVar11) {
          if (1.0 <= fVar11) {
            fVar11 = 1.0;
          }
        }
        else {
          fVar11 = 0.0;
        }
        *(int *)(_DAT_180c8a9b0 + 0x1b18) = unaff_R14D;
        *(undefined1 *)(lVar5 + 0x1b1c) = 0;
        if ((unaff_R14D != 0) && (*(int *)(lVar5 + 0x1b20) != unaff_R14D)) {
          *(undefined8 *)(lVar5 + 0x1b24) = 0;
        }
        bVar4 = false;
        if (iVar3 != unaff_R14D) {
          if ((fVar11 < fVar9) || (fVar9 + fVar14 < fVar11)) {
            bVar4 = true;
            *(undefined4 *)(unaff_RDI + lVar8) = 0;
          }
          else {
            *(float *)(unaff_RDI + lVar8) = (fVar11 - fVar9) - fVar14 * 0.5;
            bVar4 = false;
          }
        }
        fVar9 = ((fVar11 - *(float *)(unaff_RDI + lVar8)) - fVar14 * 0.5) / (1.0 - fVar14);
        if (unaff_XMM10_Da <= fVar9) {
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        fVar9 = (float)(int)(fVar9 * fVar15 + 0.5);
        if (unaff_R15D == 0) {
          *(float *)(unaff_RBX + 0x8c) = fVar9;
        }
        else {
          *(float *)(unaff_RBX + 0x90) = fVar9;
        }
        fVar9 = (1.0 / fVar15) * fVar9;
        if (unaff_XMM10_Da <= fVar9) {
          if (1.0 <= fVar9) {
            fVar9 = 1.0;
          }
        }
        else {
          fVar9 = 0.0;
        }
        fVar9 = fVar9 * (fVar12 - fVar13) * fVar16;
        if (bVar4) {
          *(float *)(unaff_RDI + lVar8) = (fVar11 - fVar9) - fVar14 * 0.5;
        }
      }
      lVar8 = 0x11;
    }
    puVar1 = (undefined4 *)(lVar5 + 0x1628 + (lVar8 + 10) * 0x10);
    uStack0000000000000040 = *puVar1;
    uStack0000000000000044 = puVar1[1];
    uStack0000000000000048 = puVar1[2];
    fStack000000000000004c = (float)puVar1[3];
    *(float *)(unaff_RBP + -0x7d) = fStack000000000000004c * *(float *)(lVar5 + 0x1628);
    uVar7 = func_0x000180121e20(&stack0x00000040);
    if (unaff_R15D == 0) {
      in_stack_00000030 = (fStack0000000000000038 - fVar10) * fVar9 + fVar10;
      fStack0000000000000034 = fVar6;
      fStack0000000000000038 = fVar13 + in_stack_00000030;
      if (*(float *)(unaff_RBP + 0x77) <= fVar13 + in_stack_00000030) {
        fStack0000000000000038 = *(float *)(unaff_RBP + 0x77);
      }
    }
    else {
      fStack0000000000000034 = (fStack000000000000003c - fVar6) * fVar9 + fVar6;
      in_stack_00000030 = fVar10;
      fStack000000000000003c = fVar13 + fStack0000000000000034;
      if (*(float *)(unaff_RBP + 0x7f) <= fVar13 + fStack0000000000000034) {
        fStack000000000000003c = *(float *)(unaff_RBP + 0x7f);
      }
    }
    FUN_180293f50(*(undefined8 *)(unaff_RBX + 0x2e8),&stack0x00000030,&stack0x00000038,uVar7,
                  *(undefined4 *)(unaff_RDI + 0x1690));
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18011077f(void)
void FUN_18011077f(void)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  longlong lVar5;
  float fVar6;
  undefined4 uVar7;
  longlong lVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  int unaff_R14D;
  int unaff_R15D;
  float fVar9;
  float fVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar11;
  float fVar12;
  float unaff_XMM9_Da;
  float fVar13;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float fVar14;
  float unaff_XMM13_Da;
  float fVar15;
  float fVar16;
  float in_stack_00000030;
  float fStack0000000000000034;
  float in_stack_00000038;
  float fStack000000000000003c;
  undefined4 uStack0000000000000040;
  undefined4 uStack0000000000000044;
  undefined4 uStack0000000000000048;
  float fStack000000000000004c;
  
  uStack0000000000000040 = *(undefined4 *)(unaff_RDI + 0x17a8);
  uStack0000000000000044 = *(undefined4 *)(unaff_RDI + 0x17ac);
  uStack0000000000000048 = *(undefined4 *)(unaff_RDI + 0x17b0);
  fStack000000000000004c = *(float *)(unaff_RDI + 0x17b4);
  *(float *)(unaff_RBP + -0x7d) = fStack000000000000004c * *(float *)(unaff_RDI + 0x1628);
  uVar7 = func_0x000180121e20(&stack0x00000040);
  FUN_180293f50(*(undefined8 *)(unaff_RBX + 0x2e8),&stack0x00000030,&stack0x00000038,uVar7,
                *(undefined4 *)(unaff_RBX + 0x78));
  fVar9 = (float)(int)((unaff_XMM8_Da - 2.0) * 0.5);
  if (unaff_XMM10_Da <= fVar9) {
    if (3.0 <= fVar9) {
      fVar9 = 3.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fVar11 = (float)(int)((unaff_XMM6_Da - 2.0) * 0.5);
  if (unaff_XMM10_Da <= fVar11) {
    if (3.0 <= fVar11) {
      fVar11 = 3.0;
    }
  }
  else {
    fVar11 = 0.0;
  }
  fStack0000000000000034 = unaff_XMM7_Da - -fVar9;
  in_stack_00000030 = unaff_XMM11_Da - -fVar11;
  in_stack_00000038 = -fVar11 + unaff_XMM13_Da;
  fStack000000000000003c = unaff_XMM12_Da + -fVar9;
  if (unaff_R15D == 0) {
    fVar9 = *(float *)(unaff_RBX + 0x8c);
    fVar12 = in_stack_00000038 - in_stack_00000030;
    fVar11 = *(float *)(unaff_RBX + 0x50);
    fVar15 = *(float *)(unaff_RBX + 0x60);
  }
  else {
    fVar9 = *(float *)(unaff_RBX + 0x90);
    fVar11 = *(float *)(unaff_RBX + 0x54);
    fVar12 = fStack000000000000003c - fStack0000000000000034;
    fVar15 = *(float *)(unaff_RBX + 100);
  }
  fVar11 = fVar11 - unaff_XMM9_Da;
  fVar13 = fVar15;
  if (fVar15 <= fVar11) {
    fVar13 = fVar11;
  }
  if (fVar13 <= 1.0) {
    fVar13 = 1.0;
  }
  fVar10 = (fVar11 / fVar13) * fVar12;
  fVar13 = *(float *)(unaff_RDI + 0x1694);
  if ((*(float *)(unaff_RDI + 0x1694) <= fVar10) && (fVar13 = fVar10, fVar12 <= fVar10)) {
    fVar13 = fVar12;
  }
  iVar3 = *(int *)(unaff_RDI + 0x1b2c);
  *(undefined1 *)(unaff_RBP + 0x67) = 0;
  fVar16 = 1.0 / fVar12;
  *(undefined1 *)(unaff_RBP + 0x6f) = 0;
  fVar14 = fVar13 * fVar16;
  FUN_18010f170(&stack0x00000030,unaff_R14D,unaff_RBP + 0x6f,unaff_RBP + 0x67,0x2000);
  fVar6 = fStack0000000000000034;
  fVar10 = in_stack_00000030;
  lVar5 = _DAT_180c8a9b0;
  fVar15 = fVar15 - fVar11;
  if (fVar15 <= 1.0) {
    fVar15 = 1.0;
  }
  fVar9 = (1.0 / fVar15) * fVar9;
  if (unaff_XMM10_Da <= fVar9) {
    if (1.0 <= fVar9) {
      fVar9 = 1.0;
    }
  }
  else {
    fVar9 = 0.0;
  }
  fVar9 = fVar9 * (fVar12 - fVar13) * fVar16;
  if (*(char *)(unaff_RBP + 0x67) == '\0') {
    lVar8 = (ulonglong)(*(char *)(unaff_RBP + 0x6f) != '\0') + 0xf;
  }
  else {
    if (fVar14 < 1.0) {
      if (unaff_R15D == 0) {
        fVar11 = *(float *)(unaff_RDI + 0x118);
        lVar8 = 0x2dc4;
        fVar2 = in_stack_00000030;
      }
      else {
        fVar11 = *(float *)(unaff_RDI + 0x11c);
        lVar8 = 0x2dc8;
        fVar2 = fStack0000000000000034;
      }
      fVar11 = (fVar11 - fVar2) * fVar16;
      if (unaff_XMM10_Da <= fVar11) {
        if (1.0 <= fVar11) {
          fVar11 = 1.0;
        }
      }
      else {
        fVar11 = 0.0;
      }
      *(int *)(_DAT_180c8a9b0 + 0x1b18) = unaff_R14D;
      *(undefined1 *)(lVar5 + 0x1b1c) = 0;
      if ((unaff_R14D != 0) && (*(int *)(lVar5 + 0x1b20) != unaff_R14D)) {
        *(undefined8 *)(lVar5 + 0x1b24) = 0;
      }
      bVar4 = false;
      if (iVar3 != unaff_R14D) {
        if ((fVar11 < fVar9) || (fVar9 + fVar14 < fVar11)) {
          bVar4 = true;
          *(undefined4 *)(unaff_RDI + lVar8) = 0;
        }
        else {
          *(float *)(unaff_RDI + lVar8) = (fVar11 - fVar9) - fVar14 * 0.5;
          bVar4 = false;
        }
      }
      fVar9 = ((fVar11 - *(float *)(unaff_RDI + lVar8)) - fVar14 * 0.5) / (1.0 - fVar14);
      if (unaff_XMM10_Da <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = (float)(int)(fVar9 * fVar15 + 0.5);
      if (unaff_R15D == 0) {
        *(float *)(unaff_RBX + 0x8c) = fVar9;
      }
      else {
        *(float *)(unaff_RBX + 0x90) = fVar9;
      }
      fVar9 = (1.0 / fVar15) * fVar9;
      if (unaff_XMM10_Da <= fVar9) {
        if (1.0 <= fVar9) {
          fVar9 = 1.0;
        }
      }
      else {
        fVar9 = 0.0;
      }
      fVar9 = fVar9 * (fVar12 - fVar13) * fVar16;
      if (bVar4) {
        *(float *)(unaff_RDI + lVar8) = (fVar11 - fVar9) - fVar14 * 0.5;
      }
    }
    lVar8 = 0x11;
  }
  puVar1 = (undefined4 *)(lVar5 + 0x1628 + (lVar8 + 10) * 0x10);
  uStack0000000000000040 = *puVar1;
  uStack0000000000000044 = puVar1[1];
  uStack0000000000000048 = puVar1[2];
  fStack000000000000004c = (float)puVar1[3];
  *(float *)(unaff_RBP + -0x7d) = fStack000000000000004c * *(float *)(lVar5 + 0x1628);
  uVar7 = func_0x000180121e20(&stack0x00000040);
  if (unaff_R15D == 0) {
    in_stack_00000030 = (in_stack_00000038 - fVar10) * fVar9 + fVar10;
    fStack0000000000000034 = fVar6;
    in_stack_00000038 = fVar13 + in_stack_00000030;
    if (*(float *)(unaff_RBP + 0x77) <= fVar13 + in_stack_00000030) {
      in_stack_00000038 = *(float *)(unaff_RBP + 0x77);
    }
  }
  else {
    fStack0000000000000034 = (fStack000000000000003c - fVar6) * fVar9 + fVar6;
    in_stack_00000030 = fVar10;
    fStack000000000000003c = fVar13 + fStack0000000000000034;
    if (*(float *)(unaff_RBP + 0x7f) <= fVar13 + fStack0000000000000034) {
      fStack000000000000003c = *(float *)(unaff_RBP + 0x7f);
    }
  }
  FUN_180293f50(*(undefined8 *)(unaff_RBX + 0x2e8),&stack0x00000030,&stack0x00000038,uVar7,
                *(undefined4 *)(unaff_RDI + 0x1690));
  return;
}





// 函数: void FUN_180110b7d(void)
void FUN_180110b7d(void)

{
  undefined4 in_EAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM9_Da;
  undefined4 uStack0000000000000028;
  float fStack0000000000000030;
  float in_stack_00000038;
  
  fStack0000000000000030 = (in_stack_00000038 - unaff_XMM6_Da) * unaff_XMM7_Da + unaff_XMM6_Da;
  in_stack_00000038 = unaff_XMM9_Da + fStack0000000000000030;
  if (*(float *)(unaff_RBP + 0x77) <= unaff_XMM9_Da + fStack0000000000000030) {
    in_stack_00000038 = *(float *)(unaff_RBP + 0x77);
  }
  uStack0000000000000028 = 0xf;
  FUN_180293f50(*(undefined8 *)(unaff_RBX + 0x2e8),&stack0x00000030,&stack0x00000038,in_EAX,
                *(undefined4 *)(unaff_RDI + 0x1690));
  return;
}





// 函数: void FUN_180110c4b(void)
void FUN_180110c4b(void)

{
  return;
}





