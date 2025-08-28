#include "TaleWorlds.Native.Split.h"

// 99_part_09_part082.c - 5 个函数

// 函数: void FUN_1805f35f3(longlong param_1)
void FUN_1805f35f3(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  bool bVar7;
  bool bVar8;
  char cVar9;
  longlong in_RAX;
  int *piVar10;
  longlong *plVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong unaff_RBX;
  int *piVar15;
  uint64_t *puVar16;
  longlong lVar17;
  longlong lVar18;
  uint64_t *puVar19;
  uint64_t unaff_R12;
  uint64_t unaff_R13;
  ulonglong unaff_R14;
  uint64_t *puVar20;
  uint uVar21;
  uint64_t unaff_R15;
  int *piVar22;
  float fVar23;
  float fVar24;
  float fStackX_20;
  float fStackX_24;
  uint uStack00000000000000d0;
  longlong lStack00000000000000e0;
  
  *(uint64_t *)(in_RAX + 0x20) = unaff_R12;
  lVar18 = param_1 + 0x360;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R13;
  uVar14 = unaff_R14 & 0xffffffff;
  *(int32_t *)(param_1 + 4) = 0x40000000;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  lVar12 = lVar18;
  do {
    func_0x0001805f3b80(lVar12);
    lVar12 = lVar12 + 0xcc8;
    uVar14 = uVar14 - 1;
  } while (uVar14 != 0);
  cVar9 = FUN_1805f5130(unaff_RBX + 0x60,&fStackX_20);
  while (cVar9 != '\0') {
    FUN_1805f5ac0(unaff_RBX + 8,&fStackX_20);
    cVar9 = FUN_1805f5130(unaff_RBX + 0x60,&fStackX_20);
  }
  lVar12 = *(longlong *)(unaff_RBX + 0x18);
  piVar22 = (int *)0x0;
  lVar17 = *(longlong *)(unaff_RBX + 0x30);
  lVar13 = *(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x40);
  bVar7 = false;
  bVar8 = false;
  uStack00000000000000d0 = 0;
  lVar2 = lVar13 >> 0x3f;
  if (lVar13 / 0x1c + lVar2 +
      (*(longlong *)(unaff_RBX + 0x28) - lVar12) / 0x1c +
      ((*(longlong *)(unaff_RBX + 0x50) - lVar17 >> 3) + -1) * 8 != lVar2) {
    lStack00000000000000e0 = 0;
    piVar10 = piVar22;
    do {
      lVar12 = (lVar12 - *(longlong *)(unaff_RBX + 0x20)) / 0x1c + lStack00000000000000e0;
      lVar18 = lVar12 + 0x1000000;
      lVar18 = ((longlong)(lVar18 + (ulonglong)((uint)(lVar18 >> 0x3f) & 7)) >> 3) * 8 + -0x1000000;
      piVar15 = (int *)((lVar12 - lVar18) * 0x1c + *(longlong *)(lVar18 + lVar17));
      puVar20 = (uint64_t *)(unaff_RBX + 0x360 + (longlong)*piVar15 * 0xcc8);
      fVar23 = (float)atan2f(((float *)*puVar20)[1] - (float)piVar15[2],
                             *(float *)*puVar20 - (float)piVar15[1]);
      fVar24 = fVar23 - 0.1308997;
      if (fVar23 < 0.1308997) {
        fVar24 = fVar23 + 6.1522856;
      }
      lVar18 = (longlong)(int)(fVar24 * 3.8197186 - 0.0001);
      puVar16 = (uint64_t *)puVar20[lVar18 * 4 + 0x1a];
      if (puVar16 < (uint64_t *)puVar20[lVar18 * 4 + 0x1b]) {
        puVar20[lVar18 * 4 + 0x1a] = (longlong)puVar16 + 0x1c;
        uVar6 = *(uint64_t *)(piVar15 + 2);
        *puVar16 = *(uint64_t *)piVar15;
        puVar16[1] = uVar6;
        puVar16[2] = *(uint64_t *)(piVar15 + 4);
        *(int *)(puVar16 + 3) = piVar15[6];
        uStack00000000000000d0 = (uint)piVar10;
      }
      else {
        puVar19 = (uint64_t *)puVar20[lVar18 * 4 + 0x19];
        lVar12 = ((longlong)puVar16 - (longlong)puVar19) / 0x1c;
        if (lVar12 == 0) {
          lVar12 = 1;
LAB_1805f3837:
          piVar10 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar12 * 0x1c,
                                         *(int8_t *)(puVar20 + lVar18 * 4 + 0x1c));
          puVar19 = (uint64_t *)puVar20[lVar18 * 4 + 0x19];
          puVar16 = (uint64_t *)puVar20[lVar18 * 4 + 0x1a];
        }
        else {
          lVar12 = lVar12 * 2;
          piVar10 = piVar22;
          if (lVar12 != 0) goto LAB_1805f3837;
        }
        if (puVar19 != puVar16) {
                    // WARNING: Subroutine does not return
          memmove(piVar10,puVar19,(longlong)puVar16 - (longlong)puVar19);
        }
        iVar3 = piVar15[1];
        iVar4 = piVar15[2];
        iVar5 = piVar15[3];
        *piVar10 = *piVar15;
        piVar10[1] = iVar3;
        piVar10[2] = iVar4;
        piVar10[3] = iVar5;
        *(uint64_t *)(piVar10 + 4) = *(uint64_t *)(piVar15 + 4);
        piVar10[6] = piVar15[6];
        if (puVar20[lVar18 * 4 + 0x19] != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        puVar20[lVar18 * 4 + 0x19] = piVar10;
        puVar20[lVar18 * 4 + 0x1b] = piVar10 + lVar12 * 7;
        puVar20[lVar18 * 4 + 0x1a] = piVar10 + 7;
        bVar7 = bVar8;
      }
      fVar23 = (float)_DAT_180c8ed30 * 1e-05 - (float)piVar15[6];
      if (fVar23 < (float)piVar15[5] || fVar23 == (float)piVar15[5]) {
        bVar7 = true;
        bVar8 = true;
      }
      else if (!bVar7) {
        lVar18 = *(longlong *)(unaff_RBX + 0x18) + 0x1c;
        if (lVar18 == *(longlong *)(unaff_RBX + 0x28)) {
          if (*(longlong *)(unaff_RBX + 0x20) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plVar11 = (longlong *)(*(longlong *)(unaff_RBX + 0x30) + 8);
          *(longlong **)(unaff_RBX + 0x30) = plVar11;
          lVar18 = *plVar11;
          *(longlong *)(unaff_RBX + 0x20) = lVar18;
          *(longlong *)(unaff_RBX + 0x28) = lVar18 + 0xe0;
          *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RBX + 0x20);
        }
        else {
          *(longlong *)(unaff_RBX + 0x18) = lVar18;
        }
      }
      lVar12 = *(longlong *)(unaff_RBX + 0x18);
      uStack00000000000000d0 = uStack00000000000000d0 + 1;
      piVar10 = (int *)(ulonglong)uStack00000000000000d0;
      lVar17 = *(longlong *)(unaff_RBX + 0x30);
      lStack00000000000000e0 = lStack00000000000000e0 + 1;
    } while ((ulonglong)(longlong)(int)uStack00000000000000d0 <
             (ulonglong)
             ((*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x40)) / 0x1c +
             (*(longlong *)(unaff_RBX + 0x28) - lVar12) / 0x1c +
             ((*(longlong *)(unaff_RBX + 0x50) - lVar17 >> 3) + -1) * 8));
    lVar18 = unaff_RBX + 0x360;
    unaff_R14 = 8;
  }
  do {
    FUN_1805f3ce0(lVar18,piVar22);
    uVar21 = (int)piVar22 + 1;
    piVar22 = (int *)(ulonglong)uVar21;
    lVar18 = lVar18 + 0xcc8;
  } while ((int)uVar21 < 8);
  lVar18 = unaff_RBX + 0xb18;
  do {
    plVar11 = (longlong *)(lVar18 + -0x7b0);
    lVar17 = 0x18;
    lVar12 = lVar18;
    do {
      if (((longlong *)*plVar11 != (longlong *)0x0) &&
         (cVar9 = (**(code **)(*(longlong *)*plVar11 + 0xd8))(), cVar9 != '\0')) {
        plVar1 = (longlong *)*plVar11;
        lVar2 = *plVar1;
        if (*(float *)(lVar12 + -0x10) < 1.0) {
          fVar23 = *(float *)(lVar12 + -0x10) + 0.1;
          *(float *)(lVar12 + -0x10) = fVar23;
          fVar23 = (3.0 - (fVar23 + fVar23)) * fVar23 * fVar23;
          fStackX_20 = fVar23 * *(float *)(lVar12 + -8) * *(float *)(lVar12 + -0xc) +
                       *(float *)(lVar12 + -0x30);
          fStackX_24 = fVar23 * *(float *)(lVar12 + -4) * *(float *)(lVar12 + -0xc) +
                       *(float *)(lVar12 + -0x2c);
        }
        else {
          fStackX_20 = *(float *)(lVar12 + -0x20);
          fStackX_24 = *(float *)(lVar12 + -0x1c);
        }
        (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
      }
      plVar11 = plVar11 + 1;
      lVar12 = lVar12 + 0x38;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
    lVar18 = lVar18 + 0xcc8;
    unaff_R14 = unaff_R14 - 1;
  } while (unaff_R14 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1805f36f9(void)
void FUN_1805f36f9(void)

{
  longlong *plVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint64_t uVar6;
  char cVar7;
  int *piVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong lVar11;
  longlong unaff_RBX;
  longlong lVar12;
  int *piVar13;
  longlong unaff_RSI;
  uint64_t *puVar14;
  longlong lVar15;
  longlong in_R9;
  uint64_t *puVar16;
  longlong in_R10;
  int *in_R11;
  char unaff_R12B;
  int unaff_R13D;
  uint64_t *puVar17;
  uint uVar18;
  int *unaff_R15;
  float fVar19;
  float fVar20;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fStackX_20;
  float fStackX_24;
  int in_stack_000000d0;
  char in_stack_000000d8;
  int *piVar21;
  
  piVar21 = unaff_R15;
  do {
    lVar11 = SUB168(SEXT816(unaff_RSI) * SEXT816(in_R9 - *(longlong *)(unaff_RBX + 0x20)),8);
    lVar10 = (lVar11 >> 3) - (lVar11 >> 0x3f);
    lVar11 = (longlong)in_R11 + lVar10 + 0x1000000;
    lVar11 = ((longlong)(lVar11 + (ulonglong)((uint)(lVar11 >> 0x3f) & 7)) >> 3) * 8 + -0x1000000;
    piVar13 = (int *)(((longlong)in_R11 + (lVar10 - lVar11)) * 0x1c + *(longlong *)(lVar11 + in_R10)
                     );
    puVar17 = (uint64_t *)(unaff_RBX + 0x360 + (longlong)*piVar13 * 0xcc8);
    fVar19 = (float)atan2f(((float *)*puVar17)[1] - (float)piVar13[2],
                           *(float *)*puVar17 - (float)piVar13[1]);
    fVar20 = fVar19 - 0.1308997;
    if (fVar19 < 0.1308997) {
      fVar20 = fVar19 + unaff_XMM7_Da;
    }
    lVar11 = (longlong)(int)(fVar20 * unaff_XMM8_Da - 0.0001);
    puVar14 = (uint64_t *)puVar17[lVar11 * 4 + 0x1a];
    if (puVar14 < (uint64_t *)puVar17[lVar11 * 4 + 0x1b]) {
      puVar17[lVar11 * 4 + 0x1a] = (longlong)puVar14 + 0x1c;
      uVar6 = *(uint64_t *)(piVar13 + 2);
      *puVar14 = *(uint64_t *)piVar13;
      puVar14[1] = uVar6;
      puVar14[2] = *(uint64_t *)(piVar13 + 4);
      *(int *)(puVar14 + 3) = piVar13[6];
      in_stack_000000d0 = unaff_R13D;
    }
    else {
      puVar16 = (uint64_t *)puVar17[lVar11 * 4 + 0x19];
      lVar10 = ((longlong)puVar14 - (longlong)puVar16) / 0x1c;
      if (lVar10 == 0) {
        lVar10 = 1;
LAB_1805f3837:
        piVar8 = (int *)FUN_18062b420(_DAT_180c8ed18,lVar10 * 0x1c,
                                      *(int8_t *)(puVar17 + lVar11 * 4 + 0x1c));
        puVar16 = (uint64_t *)puVar17[lVar11 * 4 + 0x19];
        puVar14 = (uint64_t *)puVar17[lVar11 * 4 + 0x1a];
      }
      else {
        lVar10 = lVar10 * 2;
        piVar8 = unaff_R15;
        if (lVar10 != 0) goto LAB_1805f3837;
      }
      if (puVar16 != puVar14) {
                    // WARNING: Subroutine does not return
        memmove(piVar8,puVar16,(longlong)puVar14 - (longlong)puVar16);
      }
      iVar3 = piVar13[1];
      iVar4 = piVar13[2];
      iVar5 = piVar13[3];
      *piVar8 = *piVar13;
      piVar8[1] = iVar3;
      piVar8[2] = iVar4;
      piVar8[3] = iVar5;
      *(uint64_t *)(piVar8 + 4) = *(uint64_t *)(piVar13 + 4);
      piVar8[6] = piVar13[6];
      if (puVar17[lVar11 * 4 + 0x19] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      puVar17[lVar11 * 4 + 0x19] = piVar8;
      puVar17[lVar11 * 4 + 0x1b] = piVar8 + lVar10 * 7;
      puVar17[lVar11 * 4 + 0x1a] = piVar8 + 7;
      unaff_R12B = in_stack_000000d8;
    }
    fVar19 = (float)_DAT_180c8ed30 * unaff_XMM6_Da - (float)piVar13[6];
    if (fVar19 < (float)piVar13[5] || fVar19 == (float)piVar13[5]) {
      unaff_R12B = '\x01';
      in_stack_000000d8 = '\x01';
    }
    else if (unaff_R12B == '\0') {
      lVar11 = *(longlong *)(unaff_RBX + 0x18) + 0x1c;
      if (lVar11 == *(longlong *)(unaff_RBX + 0x28)) {
        if (*(longlong *)(unaff_RBX + 0x20) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        plVar9 = (longlong *)(*(longlong *)(unaff_RBX + 0x30) + 8);
        *(longlong **)(unaff_RBX + 0x30) = plVar9;
        lVar11 = *plVar9;
        *(longlong *)(unaff_RBX + 0x20) = lVar11;
        *(longlong *)(unaff_RBX + 0x28) = lVar11 + 0xe0;
        *(uint64_t *)(unaff_RBX + 0x18) = *(uint64_t *)(unaff_RBX + 0x20);
      }
      else {
        *(longlong *)(unaff_RBX + 0x18) = lVar11;
      }
    }
    in_R9 = *(longlong *)(unaff_RBX + 0x18);
    unaff_RSI = 0x4924924924924925;
    unaff_R13D = in_stack_000000d0 + 1;
    in_R10 = *(longlong *)(unaff_RBX + 0x30);
    in_R11 = (int *)((longlong)piVar21 + 1);
    in_stack_000000d0 = unaff_R13D;
    piVar21 = in_R11;
    if ((ulonglong)
        ((*(longlong *)(unaff_RBX + 0x38) - *(longlong *)(unaff_RBX + 0x40)) / 0x1c +
        (*(longlong *)(unaff_RBX + 0x28) - in_R9) / 0x1c +
        ((*(longlong *)(unaff_RBX + 0x50) - in_R10 >> 3) + -1) * 8) <=
        (ulonglong)(longlong)unaff_R13D) {
      lVar11 = unaff_RBX + 0x360;
      lVar10 = 8;
      do {
        FUN_1805f3ce0(lVar11,(ulonglong)unaff_R15 & 0xffffffff);
        uVar18 = (int)unaff_R15 + 1;
        unaff_R15 = (int *)(ulonglong)uVar18;
        lVar11 = lVar11 + 0xcc8;
      } while ((int)uVar18 < 8);
      lVar11 = unaff_RBX + 0xb18;
      do {
        plVar9 = (longlong *)(lVar11 + -0x7b0);
        lVar15 = 0x18;
        lVar12 = lVar11;
        do {
          if (((longlong *)*plVar9 != (longlong *)0x0) &&
             (cVar7 = (**(code **)(*(longlong *)*plVar9 + 0xd8))(), cVar7 != '\0')) {
            plVar1 = (longlong *)*plVar9;
            lVar2 = *plVar1;
            if (*(float *)(lVar12 + -0x10) < 1.0) {
              fVar19 = *(float *)(lVar12 + -0x10) + 0.1;
              *(float *)(lVar12 + -0x10) = fVar19;
              fVar19 = (3.0 - (fVar19 + fVar19)) * fVar19 * fVar19;
              fStackX_20 = fVar19 * *(float *)(lVar12 + -8) * *(float *)(lVar12 + -0xc) +
                           *(float *)(lVar12 + -0x30);
              fStackX_24 = fVar19 * *(float *)(lVar12 + -4) * *(float *)(lVar12 + -0xc) +
                           *(float *)(lVar12 + -0x2c);
            }
            else {
              fStackX_20 = *(float *)(lVar12 + -0x20);
              fStackX_24 = *(float *)(lVar12 + -0x1c);
            }
            (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
          }
          plVar9 = plVar9 + 1;
          lVar12 = lVar12 + 0x38;
          lVar15 = lVar15 + -1;
        } while (lVar15 != 0);
        lVar11 = lVar11 + 0xcc8;
        lVar10 = lVar10 + -1;
      } while (lVar10 != 0);
      return;
    }
  } while( true );
}






// 函数: void FUN_1805f3a10(void)
void FUN_1805f3a10(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  
  do {
    FUN_1805f3ce0(unaff_RDI,unaff_R15D);
    unaff_R15D = unaff_R15D + 1;
    unaff_RDI = unaff_RDI + 0xcc8;
  } while (unaff_R15D < 8);
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (longlong *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        cVar3 = (**(code **)(*(longlong *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (longlong *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}






// 函数: void FUN_1805f3a20(void)
void FUN_1805f3a20(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong unaff_RDI;
  longlong *plVar7;
  longlong unaff_R14;
  int unaff_R15D;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  
  do {
    FUN_1805f3ce0(unaff_RDI,unaff_R15D);
    unaff_R15D = unaff_R15D + 1;
    unaff_RDI = unaff_RDI + 0xcc8;
  } while (unaff_R15D < 8);
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (longlong *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        cVar3 = (**(code **)(*(longlong *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (longlong *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}






// 函数: void FUN_1805f3a43(void)
void FUN_1805f3a43(void)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  longlong unaff_RBX;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  longlong *plVar7;
  longlong unaff_R14;
  float fVar8;
  float fStackX_20;
  float fStackX_24;
  
  lVar5 = unaff_RBX + 0xb18;
  do {
    plVar7 = (longlong *)(lVar5 + -0x7b0);
    lVar6 = 0x18;
    lVar4 = lVar5;
    do {
      if ((longlong *)*plVar7 != (longlong *)0x0) {
        cVar3 = (**(code **)(*(longlong *)*plVar7 + 0xd8))();
        if (cVar3 != '\0') {
          plVar1 = (longlong *)*plVar7;
          lVar2 = *plVar1;
          if (*(float *)(lVar4 + -0x10) < 1.0) {
            fVar8 = *(float *)(lVar4 + -0x10) + 0.1;
            *(float *)(lVar4 + -0x10) = fVar8;
            fVar8 = (3.0 - (fVar8 + fVar8)) * fVar8 * fVar8;
            fStackX_20 = fVar8 * *(float *)(lVar4 + -8) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x30);
            fStackX_24 = fVar8 * *(float *)(lVar4 + -4) * *(float *)(lVar4 + -0xc) +
                         *(float *)(lVar4 + -0x2c);
          }
          else {
            fStackX_20 = *(float *)(lVar4 + -0x20);
            fStackX_24 = *(float *)(lVar4 + -0x1c);
          }
          (**(code **)(lVar2 + 0xa8))(plVar1,&fStackX_20);
        }
      }
      plVar7 = plVar7 + 1;
      lVar4 = lVar4 + 0x38;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar5 = lVar5 + 0xcc8;
    unaff_R14 = unaff_R14 + -1;
  } while (unaff_R14 != 0);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




