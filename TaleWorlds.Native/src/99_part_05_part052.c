#include "TaleWorlds.Native.Split.h"

// 99_part_05_part052.c - 10 个函数

// 函数: void FUN_1802fa68a(void)
void FUN_1802fa68a(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  float *pfVar4;
  longlong unaff_RBP;
  float *unaff_RDI;
  longlong unaff_R13;
  longlong unaff_R14;
  longlong unaff_R15;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_XMM10_Da;
  
  fVar5 = *unaff_RDI * *unaff_RDI + unaff_RDI[1] * unaff_RDI[1] + unaff_RDI[2] * unaff_RDI[2];
  fVar7 = unaff_RDI[4] * unaff_RDI[4] + unaff_RDI[5] * unaff_RDI[5] + unaff_RDI[6] * unaff_RDI[6];
  fVar8 = unaff_RDI[8] * unaff_RDI[8] + unaff_RDI[9] * unaff_RDI[9] + unaff_RDI[10] * unaff_RDI[10];
  if (fVar5 <= fVar7) {
    if (fVar8 <= fVar7) {
      fVar8 = fVar7;
    }
  }
  else if (fVar8 <= fVar5) {
    fVar8 = fVar5;
  }
  uVar1 = *(undefined4 *)(unaff_R13 + 0x44);
  *(undefined4 *)(unaff_RBP + -0x54) = *(undefined4 *)(unaff_R13 + 0x48);
  *(undefined1 *)(unaff_RBP + -0x4c) = *(undefined1 *)(unaff_R13 + 0x20);
  uVar2 = *(undefined4 *)(unaff_R13 + 0x168);
  *(undefined1 *)(unaff_RBP + -100) = 1;
  *(undefined4 *)(unaff_RBP + -0x58) = uVar1;
  *(undefined4 *)(unaff_RBP + -0x50) = uVar1;
  *(undefined4 *)(unaff_RBP + -0x44) = uVar2;
  *(undefined4 *)(unaff_RBP + -0x48) = *(undefined4 *)(unaff_R13 + 0x170);
  iVar3 = (int)(*(longlong *)(unaff_R13 + 0x1b0) - *(longlong *)(unaff_R13 + 0x1a8) >> 3);
  if (0 < iVar3) {
    do {
      if (*(float *)(unaff_R14 + 0x174) <= unaff_XMM10_Da) {
LAB_1802fa7a8:
        (**(code **)(**(longlong **)(*(longlong *)(unaff_R13 + 0x1a8) + unaff_R15 * 8) + 0x1c8))();
      }
      else {
        pfVar4 = (float *)(**(code **)(**(longlong **)
                                         (*(longlong *)(unaff_R13 + 0x1a8) + unaff_R15 * 8) + 0x198)
                          )();
        fVar7 = pfVar4[4] - *pfVar4;
        fVar6 = pfVar4[5] - pfVar4[1];
        fVar5 = pfVar4[6] - pfVar4[2];
        if (fVar6 <= fVar7) {
          if (fVar6 <= fVar5) {
            fVar5 = fVar6;
          }
        }
        else if (fVar7 <= fVar5) {
          fVar5 = fVar7;
        }
        if (*(float *)(unaff_R14 + 0x174) <= fVar5 * fVar8) goto LAB_1802fa7a8;
      }
      unaff_R15 = unaff_R15 + 1;
    } while (unaff_R15 < iVar3);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
}






// 函数: void FUN_1802fa7fb(void)
void FUN_1802fa7fb(void)

{
  longlong unaff_RBP;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x80) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa820(longlong param_1,float param_2,undefined8 param_3)
void FUN_1802fa820(longlong param_1,float param_2,undefined8 param_3)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  uint uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  float fVar15;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_2c;
  
  puVar13 = (undefined8 *)0x0;
  if ((*(byte *)(param_1 + 0xa8) >> 3 & 1) == 0) {
    fVar15 = param_2 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x30) = param_2 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar15;
    if (2 < (ushort)(*(short *)(param_1 + 0x40) - 2U)) {
      (**(code **)**(undefined8 **)(param_1 + 0x210))
                (*(undefined8 **)(param_1 + 0x210),param_2,param_1);
      fVar15 = *(float *)(param_1 + 0x34);
    }
    if (0.0 < fVar15) {
      *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfffe;
      lVar7 = *(longlong *)(param_1 + 0x1c8);
      puVar11 = puVar13;
      puVar14 = puVar13;
      if (*(longlong *)(param_1 + 0x1d0) - lVar7 >> 3 != 0) {
        do {
          plVar1 = *(longlong **)((longlong)puVar14 + lVar7);
          (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2,param_3);
          cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1);
          if (cVar3 != '\0') {
            FUN_1801985e0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),plVar1,2,param_1,0);
          }
          lVar7 = *(longlong *)(param_1 + 0x1c8);
          uVar9 = (int)puVar11 + 1;
          puVar11 = (undefined8 *)(ulonglong)uVar9;
          puVar14 = puVar14 + 1;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1d0) - lVar7 >> 3));
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0);
  puVar11 = puVar13;
  if (0 < iVar4) {
    do {
      FUN_1802f9480((longlong)*(char *)((longlong)puVar11 + *(longlong *)(param_1 + 0xb0)) * 0x100 +
                    *(longlong *)(param_1 + 0x18),param_2,param_1,param_3);
      puVar11 = (undefined8 *)((longlong)puVar11 + 1);
    } while ((longlong)puVar11 < (longlong)iVar4);
  }
  if ((*(byte *)(param_1 + 0xa8) >> 5 & 1) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3;
    if (*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 4 == lVar7) {
      puVar11 = puVar13;
      puVar14 = puVar13;
      if (lVar7 != 0) {
        do {
          lVar7 = *(longlong *)(param_1 + 0x188);
          puVar8 = puVar13;
          puVar12 = puVar13;
          if (*(longlong *)(param_1 + 400) - lVar7 >> 4 != 0) {
            do {
              plVar1 = *(longlong **)((longlong)puVar11 + *(longlong *)(param_1 + 0x1a8));
              if ((*(longlong **)((longlong)puVar12 + lVar7) == plVar1) &&
                 (iVar4 = (**(code **)(*plVar1 + 0x130))(),
                 *(int *)((longlong)puVar12 + lVar7 + 8) != iVar4)) {
                uVar5 = (**(code **)(**(longlong **)
                                       ((longlong)puVar11 + *(longlong *)(param_1 + 0x1a8)) + 0x130)
                        )();
                *(undefined4 *)((longlong)puVar12 + *(longlong *)(param_1 + 0x188) + 8) = uVar5;
                *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 0x40;
              }
              lVar7 = *(longlong *)(param_1 + 0x188);
              uVar9 = (int)puVar8 + 1;
              puVar8 = (undefined8 *)(ulonglong)uVar9;
              puVar12 = puVar12 + 2;
            } while ((ulonglong)(longlong)(int)uVar9 <
                     (ulonglong)(*(longlong *)(param_1 + 400) - lVar7 >> 4));
          }
          uVar9 = (int)puVar14 + 1;
          puVar11 = puVar11 + 1;
          puVar14 = (undefined8 *)(ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
      }
    }
    else {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 0x188);
      lVar7 = *(longlong *)(param_1 + 0x1a8);
      puVar11 = puVar13;
      puVar14 = puVar13;
      if (*(longlong *)(param_1 + 0x1b0) - lVar7 >> 3 != 0) {
        do {
          uVar5 = (**(code **)(**(longlong **)((longlong)puVar11 + lVar7) + 0x130))();
          uVar2 = *(undefined8 *)((longlong)puVar11 + *(longlong *)(param_1 + 0x1a8));
          puVar8 = *(undefined8 **)(param_1 + 400);
          uStack_38 = (undefined4)uVar2;
          uStack_34 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if (puVar8 < *(undefined8 **)(param_1 + 0x198)) {
            *(undefined8 **)(param_1 + 400) = puVar8 + 2;
            *(undefined4 *)puVar8 = uStack_38;
            *(undefined4 *)((longlong)puVar8 + 4) = uStack_34;
            *(undefined4 *)(puVar8 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar8 + 0xc) = uStack_2c;
          }
          else {
            puVar12 = *(undefined8 **)(param_1 + 0x188);
            lVar7 = (longlong)puVar8 - (longlong)puVar12 >> 4;
            if (lVar7 == 0) {
              lVar7 = 1;
LAB_1802faa63:
              puVar6 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,*(undefined1 *)(param_1 + 0x1a0));
              puVar8 = *(undefined8 **)(param_1 + 400);
              puVar12 = *(undefined8 **)(param_1 + 0x188);
              puVar10 = puVar6;
            }
            else {
              lVar7 = lVar7 * 2;
              puVar6 = puVar13;
              puVar10 = puVar13;
              if (lVar7 != 0) goto LAB_1802faa63;
            }
            for (; puVar12 != puVar8; puVar12 = puVar12 + 2) {
              uVar2 = puVar12[1];
              *puVar6 = *puVar12;
              puVar6[1] = uVar2;
              puVar6 = puVar6 + 2;
            }
            *(undefined4 *)puVar6 = uStack_38;
            *(undefined4 *)((longlong)puVar6 + 4) = uStack_34;
            *(undefined4 *)(puVar6 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar6 + 0xc) = uStack_2c;
            if (*(longlong *)(param_1 + 0x188) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(param_1 + 0x188) = puVar10;
            *(undefined8 **)(param_1 + 0x198) = puVar10 + lVar7 * 2;
            *(undefined8 **)(param_1 + 400) = puVar6 + 2;
          }
          lVar7 = *(longlong *)(param_1 + 0x1a8);
          uVar9 = (int)puVar14 + 1;
          puVar11 = puVar11 + 1;
          puVar14 = (undefined8 *)(ulonglong)uVar9;
        } while ((ulonglong)(longlong)(int)uVar9 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1b0) - lVar7 >> 3));
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa848(longlong param_1,float param_2)
void FUN_1802fa848(longlong param_1,float param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  ulonglong in_RAX;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *unaff_R12;
  float fVar15;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  if ((in_RAX & 1) == 0) {
    fVar15 = param_2 + *(float *)(param_1 + 0x34);
    *(float *)(param_1 + 0x30) = param_2 + *(float *)(param_1 + 0x30);
    *(float *)(param_1 + 0x34) = fVar15;
    if (2 < (ushort)(*(short *)(param_1 + 0x40) - 2U)) {
      (**(code **)**(undefined8 **)(param_1 + 0x210))
                (*(undefined8 **)(param_1 + 0x210),param_2,param_1);
      fVar15 = *(float *)(param_1 + 0x34);
    }
    if (0.0 < fVar15) {
      uVar11 = (ulonglong)unaff_R12 & 0xffffffff;
      *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) & 0xfffe;
      lVar8 = *(longlong *)(param_1 + 0x1c8);
      puVar13 = unaff_R12;
      if (*(longlong *)(param_1 + 0x1d0) - lVar8 >> 3 != 0) {
        do {
          plVar1 = *(longlong **)((longlong)puVar13 + lVar8);
          (**(code **)(*plVar1 + 0x1b8))(plVar1,param_2);
          cVar3 = (**(code **)(*plVar1 + 0x138))(plVar1);
          if (cVar3 != '\0') {
            FUN_1801985e0(*(undefined8 *)(*(longlong *)(param_1 + 0x10) + 0x20),plVar1,2,param_1);
          }
          lVar8 = *(longlong *)(param_1 + 0x1c8);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          puVar13 = puVar13 + 1;
        } while ((ulonglong)(longlong)(int)uVar10 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1d0) - lVar8 >> 3));
      }
    }
  }
  iVar4 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb0);
  puVar13 = unaff_R12;
  if (0 < iVar4) {
    do {
      FUN_1802f9480((longlong)*(char *)((longlong)puVar13 + *(longlong *)(param_1 + 0xb0)) * 0x100 +
                    *(longlong *)(param_1 + 0x18),param_2,param_1);
      puVar13 = (undefined8 *)((longlong)puVar13 + 1);
    } while ((longlong)puVar13 < (longlong)iVar4);
  }
  if ((*(byte *)(param_1 + 0xa8) >> 5 & 1) != 0) {
    lVar8 = *(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3;
    uVar11 = (ulonglong)unaff_R12 & 0xffffffff;
    if (*(longlong *)(param_1 + 400) - *(longlong *)(param_1 + 0x188) >> 4 == lVar8) {
      puVar13 = unaff_R12;
      if (lVar8 != 0) {
        do {
          lVar8 = *(longlong *)(param_1 + 0x188);
          uVar9 = (ulonglong)unaff_R12 & 0xffffffff;
          puVar14 = unaff_R12;
          if (*(longlong *)(param_1 + 400) - lVar8 >> 4 != 0) {
            do {
              plVar1 = *(longlong **)((longlong)puVar13 + *(longlong *)(param_1 + 0x1a8));
              if ((*(longlong **)((longlong)puVar14 + lVar8) == plVar1) &&
                 (iVar4 = (**(code **)(*plVar1 + 0x130))(),
                 *(int *)((longlong)puVar14 + lVar8 + 8) != iVar4)) {
                uVar5 = (**(code **)(**(longlong **)
                                       ((longlong)puVar13 + *(longlong *)(param_1 + 0x1a8)) + 0x130)
                        )();
                *(undefined4 *)((longlong)puVar14 + *(longlong *)(param_1 + 0x188) + 8) = uVar5;
                *(ushort *)(param_1 + 0xa8) = *(ushort *)(param_1 + 0xa8) | 0x40;
              }
              lVar8 = *(longlong *)(param_1 + 0x188);
              uVar10 = (int)uVar9 + 1;
              uVar9 = (ulonglong)uVar10;
              puVar14 = puVar14 + 2;
            } while ((ulonglong)(longlong)(int)uVar10 <
                     (ulonglong)(*(longlong *)(param_1 + 400) - lVar8 >> 4));
          }
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          puVar13 = puVar13 + 1;
        } while ((ulonglong)(longlong)(int)uVar10 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1b0) - *(longlong *)(param_1 + 0x1a8) >> 3));
      }
    }
    else {
      *(longlong *)(param_1 + 400) = *(longlong *)(param_1 + 0x188);
      lVar8 = *(longlong *)(param_1 + 0x1a8);
      puVar13 = unaff_R12;
      if (*(longlong *)(param_1 + 0x1b0) - lVar8 >> 3 != 0) {
        do {
          uVar5 = (**(code **)(**(longlong **)((longlong)puVar13 + lVar8) + 0x130))();
          uVar2 = *(undefined8 *)((longlong)puVar13 + *(longlong *)(param_1 + 0x1a8));
          puVar14 = *(undefined8 **)(param_1 + 400);
          uStack0000000000000030 = (undefined4)uVar2;
          uStack0000000000000034 = (undefined4)((ulonglong)uVar2 >> 0x20);
          if (puVar14 < *(undefined8 **)(param_1 + 0x198)) {
            *(undefined8 **)(param_1 + 400) = puVar14 + 2;
            *(undefined4 *)puVar14 = uStack0000000000000030;
            *(undefined4 *)((longlong)puVar14 + 4) = uStack0000000000000034;
            *(undefined4 *)(puVar14 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar14 + 0xc) = in_stack_00000038._4_4_;
          }
          else {
            puVar7 = *(undefined8 **)(param_1 + 0x188);
            lVar8 = (longlong)puVar14 - (longlong)puVar7 >> 4;
            if (lVar8 == 0) {
              lVar8 = 1;
LAB_1802faa63:
              puVar6 = (undefined8 *)
                       FUN_18062b420(_DAT_180c8ed18,lVar8 << 4,*(undefined1 *)(param_1 + 0x1a0));
              puVar14 = *(undefined8 **)(param_1 + 400);
              puVar7 = *(undefined8 **)(param_1 + 0x188);
              puVar12 = puVar6;
            }
            else {
              lVar8 = lVar8 * 2;
              puVar6 = unaff_R12;
              puVar12 = unaff_R12;
              if (lVar8 != 0) goto LAB_1802faa63;
            }
            for (; puVar7 != puVar14; puVar7 = puVar7 + 2) {
              uVar2 = puVar7[1];
              *puVar6 = *puVar7;
              puVar6[1] = uVar2;
              puVar6 = puVar6 + 2;
            }
            *(undefined4 *)puVar6 = uStack0000000000000030;
            *(undefined4 *)((longlong)puVar6 + 4) = uStack0000000000000034;
            *(undefined4 *)(puVar6 + 1) = uVar5;
            *(undefined4 *)((longlong)puVar6 + 0xc) = in_stack_00000038._4_4_;
            if (*(longlong *)(param_1 + 0x188) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 **)(param_1 + 0x188) = puVar12;
            *(undefined8 **)(param_1 + 0x198) = puVar12 + lVar8 * 2;
            *(undefined8 **)(param_1 + 400) = puVar6 + 2;
          }
          lVar8 = *(longlong *)(param_1 + 0x1a8);
          uVar10 = (int)uVar11 + 1;
          uVar11 = (ulonglong)uVar10;
          puVar13 = puVar13 + 1;
        } while ((ulonglong)(longlong)(int)uVar10 <
                 (ulonglong)(*(longlong *)(param_1 + 0x1b0) - lVar8 >> 3));
      }
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa991(void)
void FUN_1802fa991(void)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RBX;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_R12;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  lVar7 = *(longlong *)(unaff_RBX + 0x1b0) - *(longlong *)(unaff_RBX + 0x1a8) >> 3;
  uVar13 = (ulonglong)unaff_R12 & 0xffffffff;
  if (*(longlong *)(unaff_RBX + 400) - *(longlong *)(unaff_RBX + 0x188) >> 4 == lVar7) {
    puVar11 = unaff_R12;
    if (lVar7 != 0) {
      do {
        lVar7 = *(longlong *)(unaff_RBX + 0x188);
        uVar8 = (ulonglong)unaff_R12 & 0xffffffff;
        puVar10 = unaff_R12;
        if (*(longlong *)(unaff_RBX + 400) - lVar7 >> 4 != 0) {
          do {
            plVar2 = *(longlong **)((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8));
            if ((*(longlong **)((longlong)puVar10 + lVar7) == plVar2) &&
               (iVar4 = (**(code **)(*plVar2 + 0x130))(),
               *(int *)((longlong)puVar10 + lVar7 + 8) != iVar4)) {
              uVar3 = (**(code **)(**(longlong **)
                                     ((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8)) + 0x130)
                      )();
              *(undefined4 *)((longlong)puVar10 + *(longlong *)(unaff_RBX + 0x188) + 8) = uVar3;
              *(ushort *)(unaff_RBX + 0xa8) = *(ushort *)(unaff_RBX + 0xa8) | 0x40;
            }
            lVar7 = *(longlong *)(unaff_RBX + 0x188);
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar12;
            puVar10 = puVar10 + 2;
          } while ((ulonglong)(longlong)(int)uVar12 <
                   (ulonglong)(*(longlong *)(unaff_RBX + 400) - lVar7 >> 4));
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        puVar11 = puVar11 + 1;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - *(longlong *)(unaff_RBX + 0x1a8) >> 3)
              );
    }
  }
  else {
    *(longlong *)(unaff_RBX + 400) = *(longlong *)(unaff_RBX + 0x188);
    lVar7 = *(longlong *)(unaff_RBX + 0x1a8);
    puVar11 = unaff_R12;
    if (*(longlong *)(unaff_RBX + 0x1b0) - lVar7 >> 3 != 0) {
      do {
        uVar3 = (**(code **)(**(longlong **)((longlong)puVar11 + lVar7) + 0x130))();
        uVar1 = *(undefined8 *)((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8));
        puVar10 = *(undefined8 **)(unaff_RBX + 400);
        uStack0000000000000030 = (undefined4)uVar1;
        uStack0000000000000034 = (undefined4)((ulonglong)uVar1 >> 0x20);
        if (puVar10 < *(undefined8 **)(unaff_RBX + 0x198)) {
          *(undefined8 **)(unaff_RBX + 400) = puVar10 + 2;
          *(undefined4 *)puVar10 = uStack0000000000000030;
          *(undefined4 *)((longlong)puVar10 + 4) = uStack0000000000000034;
          *(undefined4 *)(puVar10 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar10 + 0xc) = in_stack_00000038._4_4_;
        }
        else {
          puVar6 = *(undefined8 **)(unaff_RBX + 0x188);
          lVar7 = (longlong)puVar10 - (longlong)puVar6 >> 4;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802faa63:
            puVar5 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,*(undefined1 *)(unaff_RBX + 0x1a0));
            puVar10 = *(undefined8 **)(unaff_RBX + 400);
            puVar6 = *(undefined8 **)(unaff_RBX + 0x188);
            puVar9 = puVar5;
          }
          else {
            lVar7 = lVar7 * 2;
            puVar5 = unaff_R12;
            puVar9 = unaff_R12;
            if (lVar7 != 0) goto LAB_1802faa63;
          }
          for (; puVar6 != puVar10; puVar6 = puVar6 + 2) {
            uVar1 = puVar6[1];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
          }
          *(undefined4 *)puVar5 = uStack0000000000000030;
          *(undefined4 *)((longlong)puVar5 + 4) = uStack0000000000000034;
          *(undefined4 *)(puVar5 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar5 + 0xc) = in_stack_00000038._4_4_;
          if (*(longlong *)(unaff_RBX + 0x188) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 **)(unaff_RBX + 0x188) = puVar9;
          *(undefined8 **)(unaff_RBX + 0x198) = puVar9 + lVar7 * 2;
          *(undefined8 **)(unaff_RBX + 400) = puVar5 + 2;
        }
        lVar7 = *(longlong *)(unaff_RBX + 0x1a8);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        puVar11 = puVar11 + 1;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - lVar7 >> 3));
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fa9b8(longlong param_1,undefined8 param_2)
void FUN_1802fa9b8(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  longlong *plVar2;
  undefined4 uVar3;
  int iVar4;
  longlong in_RAX;
  undefined8 *puVar5;
  undefined8 *puVar6;
  longlong lVar7;
  longlong unaff_RBX;
  ulonglong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *unaff_R12;
  undefined8 *puVar11;
  uint uVar12;
  ulonglong uVar13;
  undefined4 uStack0000000000000030;
  undefined4 uStack0000000000000034;
  undefined8 in_stack_00000038;
  
  uVar13 = (ulonglong)unaff_R12 & 0xffffffff;
  if (in_RAX == param_1) {
    puVar11 = unaff_R12;
    if (param_1 != 0) {
      do {
        lVar7 = *(longlong *)(unaff_RBX + 0x188);
        uVar8 = (ulonglong)unaff_R12 & 0xffffffff;
        puVar10 = unaff_R12;
        if (*(longlong *)(unaff_RBX + 400) - lVar7 >> 4 != 0) {
          do {
            plVar2 = *(longlong **)((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8));
            if ((*(longlong **)((longlong)puVar10 + lVar7) == plVar2) &&
               (iVar4 = (**(code **)(*plVar2 + 0x130))(),
               *(int *)((longlong)puVar10 + lVar7 + 8) != iVar4)) {
              uVar3 = (**(code **)(**(longlong **)
                                     ((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8)) + 0x130)
                      )();
              *(undefined4 *)((longlong)puVar10 + *(longlong *)(unaff_RBX + 0x188) + 8) = uVar3;
              *(ushort *)(unaff_RBX + 0xa8) = *(ushort *)(unaff_RBX + 0xa8) | 0x40;
            }
            lVar7 = *(longlong *)(unaff_RBX + 0x188);
            uVar12 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar12;
            puVar10 = puVar10 + 2;
          } while ((ulonglong)(longlong)(int)uVar12 <
                   (ulonglong)(*(longlong *)(unaff_RBX + 400) - lVar7 >> 4));
        }
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        puVar11 = puVar11 + 1;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - *(longlong *)(unaff_RBX + 0x1a8) >> 3)
              );
    }
  }
  else {
    *(undefined8 *)(unaff_RBX + 400) = param_2;
    lVar7 = *(longlong *)(unaff_RBX + 0x1a8);
    puVar11 = unaff_R12;
    if (*(longlong *)(unaff_RBX + 0x1b0) - lVar7 >> 3 != 0) {
      do {
        uVar3 = (**(code **)(**(longlong **)((longlong)puVar11 + lVar7) + 0x130))();
        uVar1 = *(undefined8 *)((longlong)puVar11 + *(longlong *)(unaff_RBX + 0x1a8));
        puVar10 = *(undefined8 **)(unaff_RBX + 400);
        uStack0000000000000030 = (undefined4)uVar1;
        uStack0000000000000034 = (undefined4)((ulonglong)uVar1 >> 0x20);
        if (puVar10 < *(undefined8 **)(unaff_RBX + 0x198)) {
          *(undefined8 **)(unaff_RBX + 400) = puVar10 + 2;
          *(undefined4 *)puVar10 = uStack0000000000000030;
          *(undefined4 *)((longlong)puVar10 + 4) = uStack0000000000000034;
          *(undefined4 *)(puVar10 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar10 + 0xc) = in_stack_00000038._4_4_;
        }
        else {
          puVar6 = *(undefined8 **)(unaff_RBX + 0x188);
          lVar7 = (longlong)puVar10 - (longlong)puVar6 >> 4;
          if (lVar7 == 0) {
            lVar7 = 1;
LAB_1802faa63:
            puVar5 = (undefined8 *)
                     FUN_18062b420(_DAT_180c8ed18,lVar7 << 4,*(undefined1 *)(unaff_RBX + 0x1a0));
            puVar10 = *(undefined8 **)(unaff_RBX + 400);
            puVar6 = *(undefined8 **)(unaff_RBX + 0x188);
            puVar9 = puVar5;
          }
          else {
            lVar7 = lVar7 * 2;
            puVar5 = unaff_R12;
            puVar9 = unaff_R12;
            if (lVar7 != 0) goto LAB_1802faa63;
          }
          for (; puVar6 != puVar10; puVar6 = puVar6 + 2) {
            uVar1 = puVar6[1];
            *puVar5 = *puVar6;
            puVar5[1] = uVar1;
            puVar5 = puVar5 + 2;
          }
          *(undefined4 *)puVar5 = uStack0000000000000030;
          *(undefined4 *)((longlong)puVar5 + 4) = uStack0000000000000034;
          *(undefined4 *)(puVar5 + 1) = uVar3;
          *(undefined4 *)((longlong)puVar5 + 0xc) = in_stack_00000038._4_4_;
          if (*(longlong *)(unaff_RBX + 0x188) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(undefined8 **)(unaff_RBX + 0x188) = puVar9;
          *(undefined8 **)(unaff_RBX + 0x198) = puVar9 + lVar7 * 2;
          *(undefined8 **)(unaff_RBX + 400) = puVar5 + 2;
        }
        lVar7 = *(longlong *)(unaff_RBX + 0x1a8);
        uVar12 = (int)uVar13 + 1;
        uVar13 = (ulonglong)uVar12;
        puVar11 = puVar11 + 1;
      } while ((ulonglong)(longlong)(int)uVar12 <
               (ulonglong)(*(longlong *)(unaff_RBX + 0x1b0) - lVar7 >> 3));
    }
  }
  return;
}






// 函数: void FUN_1802fabe4(void)
void FUN_1802fabe4(void)

{
  return;
}






// 函数: void FUN_1802fac00(void)
void FUN_1802fac00(void)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd200();
}






// 函数: void FUN_1802faca2(void)
void FUN_1802faca2(void)

{
  longlong unaff_RDI;
  
  FUN_180300d00(&stack0x00000030);
  (**(code **)(**(longlong **)(unaff_RDI + 0x210) + 0x38))(*(longlong **)(unaff_RDI + 0x210));
                    // WARNING: Subroutine does not return
  memset(&stack0x00000030,0,0x1050);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802fad4b(void)
void FUN_1802fad4b(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  ulonglong uVar12;
  char unaff_BL;
  longlong unaff_RBP;
  longlong lVar13;
  longlong unaff_RDI;
  longlong *unaff_R13;
  longlong lVar14;
  longlong unaff_R15;
  float fVar15;
  float unaff_XMM6_Da;
  
  do {
    uVar12 = (ulonglong)unaff_BL;
    lVar14 = uVar12 * 0x1b0;
    lVar13 = uVar12 * 0x100 + *(longlong *)(unaff_RDI + 0x18);
    uVar8 = *(undefined4 *)(lVar13 + 0x34);
    uVar9 = *(undefined4 *)(lVar13 + 0x38);
    uVar10 = *(undefined4 *)(lVar13 + 0x3c);
    puVar1 = (undefined4 *)(unaff_RBP + 0x750 + uVar12 * 0x10);
    *puVar1 = *(undefined4 *)(lVar13 + 0x30);
    puVar1[1] = uVar8;
    puVar1[2] = uVar9;
    puVar1[3] = uVar10;
    *(ulonglong *)(unaff_RBP + 0x730) =
         *(ulonglong *)(unaff_RBP + 0x730) |
         *(ulonglong *)(lVar14 + 0xe8 + *(longlong *)(unaff_R15 + 0x140));
    *(ulonglong *)(unaff_RBP + 0x738) = *(ulonglong *)(unaff_RBP + 0x738) | 1L << (uVar12 & 0x3f);
    cVar11 = (**(code **)(*unaff_R13 + 0x38))();
    if (cVar11 == '\0') {
      uVar12 = *(ulonglong *)(unaff_RBP + 0x730);
    }
    else {
      puVar1 = (undefined4 *)(lVar14 + 0x80 + *(longlong *)(unaff_R15 + 0x140));
      uVar8 = puVar1[1];
      uVar9 = puVar1[2];
      uVar10 = puVar1[3];
      puVar2 = (undefined4 *)(unaff_RBP + 0xb50 + uVar12 * 0x10);
      *puVar2 = *puVar1;
      puVar2[1] = uVar8;
      puVar2[2] = uVar9;
      puVar2[3] = uVar10;
      uVar12 = *(ulonglong *)(unaff_RBP + 0x730) |
               *(ulonglong *)(lVar14 + 0xe8 + *(longlong *)(unaff_R15 + 0x140));
      *(ulonglong *)(unaff_RBP + 0x730) = uVar12;
    }
    if (unaff_BL == '\0') {
      lVar14 = *(longlong *)(unaff_R15 + 0x140);
      fVar15 = *(float *)(lVar13 + 0x40);
      fVar3 = *(float *)(lVar13 + 0x44);
      fVar4 = *(float *)(lVar13 + 0x48);
      fVar5 = *(float *)(lVar14 + 0x80);
      fVar6 = *(float *)(lVar14 + 0x84);
      fVar7 = *(float *)(lVar14 + 0x88);
      *(ulonglong *)(unaff_RBP + 0x730) = uVar12 | *(ulonglong *)(unaff_RBP + 0x740);
      *(float *)(unaff_RBP + 0xf60) = (*(float *)(unaff_RBP + 0xf50) - fVar15) + fVar5;
      *(float *)(unaff_RBP + 0xf64) = (*(float *)(unaff_RBP + 0xf54) - fVar3) + fVar6;
      *(float *)(unaff_RBP + 0xf68) = (*(float *)(unaff_RBP + 0xf58) - fVar4) + fVar7;
      *(undefined4 *)(unaff_RBP + 0xf6c) = 0x7f7fffff;
    }
    unaff_BL = unaff_BL + '\x01';
  } while (unaff_BL < *(char *)(unaff_RDI + 0x20));
  (**(code **)(*(longlong *)(unaff_RDI + 0x210) + 0x50))
            (*(undefined8 *)(*(longlong *)(unaff_RDI + 0x210) + 0x48),&stack0x00000030);
  if (0.0 <= unaff_XMM6_Da) {
    fVar15 = *(float *)(unaff_RDI + 0x34) - unaff_XMM6_Da;
    *(float *)(unaff_RDI + 0x34) = fVar15;
    if (unaff_XMM6_Da < fVar15) {
      *(float *)(unaff_RDI + 0x34) = unaff_XMM6_Da;
    }
  }
  else {
    *(undefined4 *)(unaff_RDI + 0x34) = 0;
  }
  *(undefined4 *)(unaff_RDI + 0x50) = *(undefined4 *)(_DAT_180c86870 + 0x224);
  *(ushort *)(unaff_RDI + 0xa8) = *(ushort *)(unaff_RDI + 0xa8) | 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0xf80) ^ (ulonglong)&stack0x00000000);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




