#include "TaleWorlds.Native.Split.h"

// 99_part_09_part066.c - 1 个函数

// 函数: void FUN_1805e52a2(longlong param_1)
void FUN_1805e52a2(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong in_RAX;
  undefined8 unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_R12;
  undefined4 uVar3;
  undefined8 unaff_XMM13_Qa;
  undefined8 unaff_XMM13_Qb;
  undefined4 unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  longlong lStack0000000000000060;
  
  *(undefined8 *)(in_RAX + -200) = unaff_XMM13_Qa;
  *(undefined8 *)(in_RAX + -0xc0) = unaff_XMM13_Qb;
  *(undefined1 *)(param_1 + 0x1146) = 0;
  *(undefined4 *)(in_RAX + -0xd8) = unaff_XMM14_Da;
  *(undefined4 *)(in_RAX + -0xd4) = unaff_XMM14_Db;
  *(undefined4 *)(in_RAX + -0xd0) = unaff_XMM14_Dc;
  *(undefined4 *)(in_RAX + -0xcc) = unaff_XMM14_Dd;
  plVar1 = *(longlong **)(param_1 + 0x20);
  *(undefined8 *)(unaff_RBP + -0x38) = unaff_RBX;
  lVar2 = *plVar1;
  lStack0000000000000060 = lVar2;
  FUN_180507e30();
  *(longlong *)(unaff_RBP + 0x18) = unaff_R12 + 0x2c;
  uVar3 = FUN_1805d8ed0();
  lVar2 = *(longlong *)(lVar2 + 0x20);
  *(undefined4 *)(unaff_RBP + 8) = uVar3;
                    // WARNING: Subroutine does not return
  FUN_1808fd400(*(undefined4 *)(lVar2 + 0x34));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

undefined8 FUN_1805e5516(void)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  float *pfVar8;
  longlong lVar9;
  int *piVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong unaff_RBX;
  float *unaff_RBP;
  float fVar13;
  uint uVar14;
  uint uVar15;
  longlong lVar16;
  longlong unaff_R12;
  longlong unaff_R13;
  int iVar17;
  longlong lVar18;
  undefined4 uVar19;
  longlong *unaff_R15;
  float fVar20;
  float extraout_XMM0_Da;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  undefined1 auVar24 [16];
  float fVar25;
  float fVar26;
  float fVar27;
  float unaff_XMM6_Da;
  float fVar28;
  float fVar29;
  float fVar30;
  uint unaff_XMM13_Da;
  float unaff_XMM14_Da;
  undefined4 unaff_XMM14_Db;
  undefined4 unaff_XMM14_Dc;
  undefined4 unaff_XMM14_Dd;
  longlong in_stack_00000060;
  undefined8 in_stack_00000068;
  float fStack0000000000000078;
  float fStack000000000000007c;
  
  fVar21 = SUB84(unaff_R15,0);
  unaff_RBP[-10] = fVar21;
  unaff_RBP[-0xb] = fVar21;
  if (*(float *)(unaff_R12 + 0x98) == fVar21) {
    fVar30 = 1.0;
    fVar20 = 0.5;
  }
  else {
    fVar30 = 1.44;
    unaff_RBP[-4] = 6.0;
    fVar20 = 0.41666666;
  }
  unaff_RBP[-0xc] = fVar20;
  lVar18 = unaff_R12 + 0x28;
  *(longlong *)(unaff_RBP + 4) = lVar18;
  unaff_RBP[0x68] = unaff_XMM14_Da * unaff_XMM14_Da;
  fVar25 = unaff_XMM14_Da * unaff_XMM14_Da * 16.0;
  unaff_RBP[-3] = fVar25;
  fVar20 = (float)func_0x000180507ac0(lVar18);
  *(ulonglong *)(unaff_RBP + -0x1c) = (ulonglong)unaff_R15 & 0xffffffff;
  pfVar8 = unaff_RBP + -6;
  if (fVar25 <= fVar20) {
    pfVar8 = unaff_RBP + -8;
  }
  *(float **)(unaff_RBP + 0xe) = pfVar8;
  FUN_1804ff330(unaff_R13 + 0x98d230);
  if (unaff_R15 != (longlong *)0x0) {
    fVar21 = unaff_RBP[-0x1a];
    fVar20 = unaff_RBP[-0x1d];
    fVar25 = unaff_RBP[-0x1e];
    fVar27 = unaff_RBP[-0x20];
    fVar13 = fStack000000000000007c;
LAB_1805e5620:
    fVar29 = 1.1754944e-38;
    lVar18 = *unaff_R15;
    lVar16 = *(longlong *)(lVar18 + 0x20);
    iVar17 = *(int *)(lVar18 + 0x10);
    if (((((iVar17 == *(int *)(in_stack_00000060 + 0x10)) || (*(int *)(lVar18 + 0x568) != 1)) ||
         (-1 < *(int *)(lVar18 + 0x560))) ||
        ((iVar17 == *(int *)(in_stack_00000060 + 0x564) ||
         (iVar17 == *(int *)(in_stack_00000060 + 0x560))))) ||
       (*(int *)(lVar18 + 0x564) == *(int *)(in_stack_00000060 + 0x10))) goto LAB_1805e5de8;
    lVar4 = *(longlong *)(*(longlong *)(unaff_RBP + 100) + 0x20);
    *(longlong *)(unaff_RBP + -2) = lVar4;
    if (*(char *)(lVar4 + 0x21c0) == '\0') {
      iVar7 = *(int *)(lVar4 + 0x14b4);
    }
    else {
      iVar7 = *(int *)(lVar4 + 0x21c4);
    }
    if (iVar17 == iVar7) goto LAB_1805e5de8;
    cVar6 = func_0x000180508270(lVar18,in_stack_00000060);
    if ((cVar6 == '\0') && (extraout_XMM0_Da <= unaff_XMM6_Da)) {
      fVar20 = *(float *)(lVar16 + 0xc);
      fVar25 = *(float *)(lVar16 + 0x10);
      fVar28 = fVar20 - **(float **)(unaff_RBP + 6);
      fVar27 = fVar25 - (*(float **)(unaff_RBP + 6))[1];
      in_stack_00000068 = CONCAT44(fVar27,fVar28);
      if ((fVar28 != 0.0) || (fVar27 != 0.0)) {
        lVar11 = 0;
        fVar26 = fVar28 * fVar28 + fVar27 * fVar27;
        fVar26 = fVar26 + (float)(fVar26 <= fVar29) * fVar29;
        auVar24 = rsqrtss(ZEXT416((uint)fVar26),ZEXT416((uint)fVar26));
        fVar29 = auVar24._0_4_;
        fVar29 = fVar29 * 0.5 * ((float)DAT_180a401f0 - fVar26 * fVar29 * fVar29);
        fVar28 = fVar28 * fVar29;
        fVar27 = fVar29 * fVar27;
        fVar29 = fVar29 * fVar26;
        in_stack_00000068 = CONCAT44(fVar27,fVar28);
        lVar9 = func_0x000180524cb0(lVar18);
        lVar4 = *(longlong *)(unaff_RBP + -2);
        uVar15 = *(uint *)(lVar9 + 0x56c) >> 0xb;
        if ((((uVar15 & 1) == 0) || ((*(uint *)(lVar4 + 0x1484) >> 1 & 1) == 0)) ||
           (*(int *)(lVar18 + 0x5f8) != (int)lVar11)) {
          fVar20 = *(float *)(*(longlong *)(lVar9 + 0x20) + 0x1d0);
          fVar25 = fVar20 + unaff_XMM14_Da;
          if (fVar29 <= fVar25) {
            fVar29 = 0.01;
          }
          else {
            fVar29 = fVar29 - fVar25;
            if (fVar29 <= 0.001) goto LAB_1805e5dd1;
          }
          if (fVar29 < unaff_RBP[2] || fVar29 == unaff_RBP[2]) {
            fVar25 = unaff_RBP[-8];
            fVar29 = unaff_RBP[-7];
            if (((*(uint *)(lVar4 + 0x1484) >> 1 & 1) != 0) ||
               (fVar28 * fVar25 + fVar27 * fVar29 <= 0.95)) {
              lVar16 = *(longlong *)(unaff_RBP + 100);
            }
            else {
              lVar16 = *(longlong *)(unaff_RBP + 100);
              piVar1 = (int *)(lVar16 + 0x1150);
              piVar10 = piVar1;
              do {
                if (*piVar10 < 0) {
                  *piVar10 = iVar17;
                  goto LAB_1805e5bb2;
                }
                if (*piVar10 == iVar17) goto LAB_1805e5bb2;
                lVar11 = lVar11 + 1;
                piVar10 = piVar10 + 1;
              } while (lVar11 < 4);
              *(undefined4 *)(lVar16 + 0x115c) = *(undefined4 *)(lVar16 + 0x1158);
              *(undefined4 *)(lVar16 + 0x1158) = *(undefined4 *)(lVar16 + 0x1154);
              *(int *)(lVar16 + 0x1154) = *piVar1;
              *piVar1 = iVar17;
            }
LAB_1805e5bb2:
            cVar6 = '\x01';
            if (*(int *)(lVar9 + 0x5f8) == 0) {
              if (((((uVar15 & 1) == 0) && ((*(int *)(lVar18 + 0x510) - 1U & 0xfffffffd) != 0)) &&
                  (lVar4 = *(longlong *)(lVar9 + 0x20),
                  *(float *)(lVar4 + 0x24) * *(float *)(lVar4 + 0x24) +
                  *(float *)(lVar4 + 0x28) * *(float *)(lVar4 + 0x28) +
                  *(float *)(lVar4 + 0x2c) * *(float *)(lVar4 + 0x2c) <=
                  *(float *)(lVar4 + 0x84) * *(float *)(lVar4 + 0x84) * 0.010000001)) ||
                 (cVar6 = '\0', (uVar15 & 1) == 0)) {
                if (((*(uint *)(lVar16 + 0x18) & 2) != 0) &&
                   (fVar25 = fVar29 * fVar27 + fVar25 * fVar28, 0.34202015 < fVar25)) {
                  *(uint *)(lVar16 + 0x18) = *(uint *)(lVar16 + 0x18) & 0xfffffffd;
                  fVar25 = fVar25 * 1.3 - 1.5;
                  fVar25 = fVar25 * fVar25 + 0.3;
                  if (*(float *)(lVar16 + 0x1c) <= fVar25) {
                    fVar25 = *(float *)(lVar16 + 0x1c);
                  }
                  *(float *)(lVar16 + 0x1c) = fVar25;
                }
                if (cVar6 != '\0') goto LAB_1805e5c7d;
              }
            }
            else {
LAB_1805e5c7d:
              lVar4 = *(longlong *)(lVar9 + 0x20);
              fVar25 = *(float *)(lVar4 + 0x1b0);
              fVar29 = *(float *)(lVar4 + 0x1c0);
              if ((fVar25 == fVar29) && (*(float *)(lVar4 + 0x1c4) == *(float *)(lVar4 + 0x1b4))) {
                FUN_1805e7660(cVar6,*(undefined8 *)(unaff_RBP + 0x66),unaff_RBP + -6,
                              &stack0x00000068,fVar20);
              }
              else {
                fVar20 = *(float *)(lVar4 + 0x1b4);
                unaff_RBP[10] = fVar27;
                fVar26 = *(float *)(lVar16 + 0x30);
                unaff_RBP[0xb] = (float)((uint)fVar28 ^ unaff_XMM13_Da);
                bVar5 = 0.0 <= (fVar25 - *(float *)(lVar16 + 0x2c)) * fVar27 +
                               (fVar20 - fVar26) * (float)((uint)fVar28 ^ unaff_XMM13_Da);
                if (bVar5) {
                  fVar26 = (float)((uint)fVar27 ^ unaff_XMM13_Da);
                  fVar23 = fVar28;
                }
                else {
                  *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(unaff_RBP + 10);
                  fVar26 = unaff_RBP[-0x10];
                  fVar23 = unaff_RBP[-0xf];
                }
                fVar2 = *(float *)(*(longlong *)(lVar18 + 0x20) + 0x1d0);
                fVar3 = *(float *)(lVar4 + 0x1c4);
                unaff_RBP[0xc] = fVar26 * fVar2 + fVar29;
                unaff_RBP[0xd] = fVar23 * fVar2 + fVar3;
                if (bVar5) {
                  *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(unaff_RBP + 10);
                  fVar27 = unaff_RBP[-0x10];
                  fVar28 = unaff_RBP[-0xf];
                }
                else {
                  fVar27 = (float)((uint)fVar27 ^ unaff_XMM13_Da);
                }
                *unaff_RBP = fVar27 * fVar2 + fVar25;
                unaff_RBP[1] = fVar28 * fVar2 + fVar20;
                FUN_1805e7760(lVar16,*(undefined8 *)(unaff_RBP + 0x66),unaff_RBP + -6,fVar25,
                              unaff_RBP + 0xc);
              }
            }
          }
        }
        else {
          fVar26 = *(float *)(lVar16 + 0x1d0);
          if ((((*(int *)(lVar18 + 0x510) - 1U & 0xfffffffb) == 0) ||
              (*(int *)(lVar18 + 0x514) - 6U < 3)) || (*(int *)(lVar18 + 0x514) == 10)) {
            iVar17 = *(int *)(lVar18 + 0x50c);
            if (((iVar17 < 0) || (*(int *)(unaff_R13 + 0x52ed94) <= iVar17)) ||
               ((*(short *)(unaff_R13 + 0x52dda0 + (longlong)iVar17 * 2) < (short)lVar11 ||
                (lVar9 = *(longlong *)((longlong)iVar17 * 0xa60 + 0x30c0 + unaff_R13),
                fVar20 = fVar20 - *(float *)(lVar9 + 0xc),
                fVar25 = fVar25 - *(float *)(lVar9 + 0x10),
                fVar26 * fVar26 * 225.0 <= fVar20 * fVar20 + fVar25 * fVar25)))) goto LAB_1805e5876;
            bVar5 = true;
          }
          else {
LAB_1805e5876:
            bVar5 = false;
          }
          fVar20 = *(float *)(lVar18 + 0x4fc);
          if (fVar20 < fVar26 * fVar26 * 16.0) {
                    // WARNING: Subroutine does not return
            FUN_1808fd400();
          }
          *(undefined8 *)(unaff_RBP + -0x10) = *(undefined8 *)(lVar18 + 0x4e8);
          if ((((*(byte *)(lVar18 + 0x51c) & 0x20) != 0) || (*(int *)(lVar18 + 0x518) != 0)) ||
             (bVar5)) {
            fVar25 = unaff_RBP[0x68];
LAB_1805e592b:
            if ((*(float *)(lVar16 + 0x224) * *(float *)(lVar16 + 0x224) +
                 *(float *)(lVar16 + 0x228) * *(float *)(lVar16 + 0x228) +
                 *(float *)(lVar16 + 0x22c) * *(float *)(lVar16 + 0x22c) <
                 *(float *)(lVar16 + 0x84) * *(float *)(lVar16 + 0x84) * 0.122499995 * fVar30) &&
               (fVar29 < unaff_RBP[-4] * unaff_XMM14_Da)) {
              fVar23 = unaff_RBP[-0xc];
              if (*(char *)(*(longlong *)(unaff_RBP + 100) + 0x1147) != '\0') {
                fVar23 = 0.9063078;
              }
              fVar2 = **(float **)(unaff_RBP + 0xe);
              fVar3 = (*(float **)(unaff_RBP + 0xe))[1];
              if ((fVar23 < fVar2 * fVar28 + fVar27 * fVar3) &&
                 ((fVar20 < fVar25 * 36.0 * fVar30 ||
                  (unaff_RBP[-0xc] < fVar2 * unaff_RBP[-0x10] + unaff_RBP[-0xf] * fVar3)))) {
                if ((*(int *)(lVar18 + 0x570) == 1) &&
                   (cVar6 = FUN_1805d1d60(lVar4,lVar18), cVar6 != '\0')) {
                  if ((!bVar5) && (*(int *)(lVar18 + 0x518) != 2)) {
                    if ((-1 < *(int *)(*(longlong *)(unaff_RBP + -2) + 0x1540)) &&
                       (-1 < *(int *)(*(longlong *)(unaff_RBP + -2) + 0x1544))) {
                      fVar20 = fVar30 * unaff_RBP[-3];
                      fVar25 = (float)func_0x000180507ac0(*(undefined8 *)(unaff_RBP + 4));
                      if (fVar20 <= fVar25) goto LAB_1805e5a70;
                    }
LAB_1805e5a7e:
                    if (*(int *)(lVar18 + 0x518) != 2) {
                      unaff_RBP[-10] = (float)((int)unaff_RBP[-10] + 1);
                      goto LAB_1805e5a90;
                    }
                  }
                  unaff_RBP[-0xb] = (float)((int)unaff_RBP[-0xb] + 1);
                }
                else if (!bVar5) {
                  fVar20 = fVar30 * unaff_RBP[-3];
LAB_1805e5a70:
                  fVar25 = (float)func_0x000180507ac0(*(undefined8 *)(unaff_RBP + 4));
                  if (fVar25 < fVar20) goto LAB_1805e5a7e;
                }
              }
            }
          }
          else if (((*(byte *)(lVar18 + 0x51c) & 0x10) == 0) &&
                  (fVar25 = unaff_RBP[0x68], fVar20 < fVar25 * 36.0 * fVar30)) goto LAB_1805e592b;
LAB_1805e5a90:
          auVar24._4_4_ = unaff_XMM14_Db;
          auVar24._0_4_ = unaff_XMM14_Da;
          auVar24._8_4_ = unaff_XMM14_Dc;
          auVar24._12_4_ = unaff_XMM14_Dd;
          auVar22._4_12_ = auVar24._4_12_;
          auVar22._0_4_ = unaff_XMM14_Da * 12.0;
          if (fVar29 < auVar22._0_4_) {
            FUN_1805e7660(auVar22._0_8_,unaff_RBP + -0xe,unaff_RBP + -6,&stack0x00000068,
                          fVar26 * 2.5);
          }
        }
      }
LAB_1805e5dd1:
      unaff_XMM6_Da = 1.5;
    }
    fVar27 = unaff_RBP[-0x20];
    fVar20 = unaff_RBP[-0x1d];
    fVar25 = unaff_RBP[-0x1e];
LAB_1805e5de8:
    unaff_R15 = (longlong *)unaff_R15[3];
    while (unaff_R15 == (longlong *)0x0) {
      if (fStack0000000000000078 == fVar25) {
        if (fVar13 == fVar20) break;
        fVar13 = (float)((int)fVar13 + 1);
        fStack0000000000000078 = fVar27;
        fStack000000000000007c = fVar13;
      }
      else {
        fStack0000000000000078 = (float)((int)fStack0000000000000078 + 1);
      }
      fVar20 = unaff_RBP[-0x1d];
      unaff_R15 = *(longlong **)
                   ((longlong)
                    ((int)fStack000000000000007c * *(int *)(unaff_R13 + 0x98d238) +
                    (int)fStack0000000000000078) * 9 + *(longlong *)(unaff_R13 + 0x98d248));
    }
    do {
      if ((unaff_R15 == (longlong *)0x0) ||
         (fVar29 = unaff_RBP[-0x1b] - *(float *)((longlong)unaff_R15 + 0xc),
         (unaff_RBP[-0x1c] - *(float *)(unaff_R15 + 1)) *
         (unaff_RBP[-0x1c] - *(float *)(unaff_R15 + 1)) + fVar29 * fVar29 <= fVar21))
      goto LAB_1805e5edc;
      unaff_R15 = (longlong *)unaff_R15[3];
      while (unaff_R15 == (longlong *)0x0) {
        if (fStack0000000000000078 == fVar25) {
          if (fVar13 == fVar20) break;
          fVar13 = (float)((int)fVar13 + 1);
          fStack0000000000000078 = fVar27;
          fStack000000000000007c = fVar13;
        }
        else {
          fStack0000000000000078 = (float)((int)fStack0000000000000078 + 1);
        }
        fVar20 = unaff_RBP[-0x1d];
        unaff_R15 = *(longlong **)
                     ((longlong)
                      ((int)fStack000000000000007c * *(int *)(unaff_R13 + 0x98d238) +
                      (int)fStack0000000000000078) * 9 + *(longlong *)(unaff_R13 + 0x98d248));
      }
    } while( true );
  }
LAB_1805e5f08:
  uVar19 = SUB84(unaff_R15,0);
  if (2 < (int)unaff_RBP[-10] + (int)fVar21) {
    if (((int)fVar21 < 1) ||
       (fVar21 = (float)func_0x000180507ac0(lVar18),
       fVar21 <= *(float *)(unaff_R12 + 0x90) * *(float *)(unaff_R12 + 0x90) * 1.4689441)) {
      uVar19 = 1;
    }
    else {
      uVar15 = 8;
      do {
        uVar14 = uVar15 + 1;
        iVar17 = ((uVar15 & 1) * 2 + -1) * ((int)uVar14 >> 1);
        if (iVar17 < 1) {
          uVar12 = 1UL >> (-(char)iVar17 & 0x3fU) | 1L << ((longlong)(iVar17 + 0x40) & 0x3fU);
        }
        else {
          uVar12 = 1UL >> (-(char)iVar17 + 0x40U & 0x3f) | 1L << ((longlong)iVar17 & 0x3fU);
        }
        if ((uVar12 & unaff_RBX) == uVar12) {
          if (iVar17 != 0x40) {
            if (iVar17 != 0) {
              FUN_1805d8ed0(unaff_R12);
              in_stack_00000068 = *(undefined8 *)(unaff_RBP + -6);
                    // WARNING: Subroutine does not return
              FUN_1808fd400();
            }
            **(ulonglong **)(unaff_RBP + 0x66) = **(ulonglong **)(unaff_RBP + 0x66) & unaff_RBX;
            goto LAB_1805e6473;
          }
          break;
        }
        uVar15 = uVar14;
      } while ((int)uVar14 < 0x19);
      uVar19 = 2;
    }
  }
LAB_1805e6473:
  **(undefined4 **)(unaff_RBP + 0x6a) = uVar19;
  if ((*(char *)(unaff_R12 + 0x1146) != '\0') && (*(char *)(unaff_R12 + 0x1147) == '\0')) {
    FUN_180507be0(unaff_R12,unaff_RBP + 100);
    fVar21 = (float)atan2f();
    uVar15 = 0x40U - (int)(fVar21 * 10.185916) & 0x8000003f;
    if ((int)uVar15 < 0) {
      uVar15 = (uVar15 - 1 | 0xffffffc0) + 1;
    }
    iVar17 = -0x10;
    if ((int)(uVar15 + 0x30) < 0x40) {
      iVar17 = 0x30;
    }
    iVar7 = -0x30;
    if ((int)(uVar15 + 0x10) < 0x40) {
      iVar7 = 0x10;
    }
    FUN_1805e7b40(*(undefined8 *)(unaff_RBP + 0x66),iVar7 + uVar15,iVar17 + uVar15,1);
  }
  return *(undefined8 *)(unaff_RBP + 0x66);
LAB_1805e5edc:
  if (unaff_R15 == (longlong *)0x0) goto code_r0x0001805e5eed;
  goto LAB_1805e5620;
code_r0x0001805e5eed:
  unaff_RBX = *(ulonglong *)(unaff_RBP + -0xe);
  unaff_R15 = (longlong *)0x0;
  unaff_R12 = *(longlong *)(unaff_RBP + 100);
  fVar21 = unaff_RBP[-0xb];
  lVar18 = *(longlong *)(unaff_RBP + 4);
  goto LAB_1805e5f08;
}



undefined8 FUN_1805e5f28(float param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong unaff_RBX;
  longlong unaff_RBP;
  int unaff_ESI;
  uint uVar5;
  longlong unaff_R12;
  int iVar6;
  undefined4 unaff_R15D;
  float fVar7;
  undefined1 auVar8 [16];
  float unaff_XMM15_Da;
  
  if ((unaff_ESI < 1) ||
     (param_1 = (float)func_0x000180507ac0(),
     param_1 <= *(float *)(unaff_R12 + 0x90) * *(float *)(unaff_R12 + 0x90) * 1.4689441)) {
    unaff_R15D = 1;
  }
  else {
    uVar2 = 8;
    do {
      uVar5 = uVar2 + 1;
      iVar6 = ((uVar2 & 1) * 2 + -1) * ((int)uVar5 >> 1);
      if (iVar6 < 1) {
        uVar4 = 1UL >> (-(char)iVar6 & 0x3fU) | 1L << ((longlong)(iVar6 + 0x40) & 0x3fU);
      }
      else {
        uVar4 = 1UL >> (-(char)iVar6 + 0x40U & 0x3f) | 1L << ((longlong)iVar6 & 0x3fU);
      }
      if ((uVar4 & unaff_RBX) == uVar4) {
        if (iVar6 != 0x40) {
          if (iVar6 != 0) {
            FUN_1805d8ed0();
                    // WARNING: Subroutine does not return
            FUN_1808fd400((float)-iVar6 * 0.09817477);
          }
          **(ulonglong **)(unaff_RBP + 0x198) = **(ulonglong **)(unaff_RBP + 0x198) & unaff_RBX;
          goto LAB_1805e6473;
        }
        break;
      }
      uVar2 = uVar5;
    } while ((int)uVar5 < 0x19);
    unaff_R15D = 2;
  }
LAB_1805e6473:
  **(undefined4 **)(unaff_RBP + 0x1a8) = unaff_R15D;
  if ((*(char *)(unaff_R12 + 0x1146) != '\0') && (*(char *)(unaff_R12 + 0x1147) == '\0')) {
    pfVar1 = (float *)FUN_180507be0(param_1,unaff_RBP + 400);
    fVar7 = SUB164(*(undefined1 (*) [16])(unaff_RBP + 0x40),0);
    auVar8._4_12_ = SUB1612(*(undefined1 (*) [16])(unaff_RBP + 0x40),4);
    auVar8._0_4_ = fVar7 * pfVar1[1] + unaff_XMM15_Da * *pfVar1;
    fVar7 = (float)atan2f(unaff_XMM15_Da * pfVar1[1] - fVar7 * *pfVar1,auVar8._0_8_);
    uVar2 = 0x40U - (int)(fVar7 * 10.185916) & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    iVar6 = -0x10;
    if ((int)(uVar2 + 0x30) < 0x40) {
      iVar6 = 0x30;
    }
    iVar3 = -0x30;
    if ((int)(uVar2 + 0x10) < 0x40) {
      iVar3 = 0x10;
    }
    FUN_1805e7b40(*(undefined8 *)(unaff_RBP + 0x198),iVar3 + uVar2,iVar6 + uVar2,1);
  }
  return *(undefined8 *)(unaff_RBP + 0x198);
}



undefined8 FUN_1805e64f1(undefined4 param_1)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  longlong unaff_RBP;
  int iVar4;
  longlong unaff_R12;
  float fVar5;
  float unaff_XMM15_Da;
  
  if (*(char *)(unaff_R12 + 0x1147) == '\0') {
    pfVar1 = (float *)FUN_180507be0(param_1,unaff_RBP + 400);
    fVar5 = (float)atan2f(unaff_XMM15_Da * pfVar1[1] - *(float *)(unaff_RBP + 0x40) * *pfVar1,
                          *(float *)(unaff_RBP + 0x40) * pfVar1[1] + unaff_XMM15_Da * *pfVar1);
    uVar2 = 0x40U - (int)(fVar5 * 10.185916) & 0x8000003f;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
    }
    iVar4 = -0x10;
    if ((int)(uVar2 + 0x30) < 0x40) {
      iVar4 = 0x30;
    }
    iVar3 = -0x30;
    if ((int)(uVar2 + 0x10) < 0x40) {
      iVar3 = 0x10;
    }
    FUN_1805e7b40(*(undefined8 *)(unaff_RBP + 0x198),iVar3 + uVar2,iVar4 + uVar2,1);
  }
  return *(undefined8 *)(unaff_RBP + 0x198);
}



bool FUN_1805e65c0(longlong param_1,float *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char cVar6;
  longlong lVar7;
  undefined8 *puVar8;
  longlong lVar9;
  undefined8 uVar10;
  longlong lVar11;
  float *pfVar12;
  float fVar13;
  undefined1 auVar14 [16];
  float fVar15;
  undefined8 uStackX_8;
  float fStackX_10;
  float fStackX_14;
  longlong lStackX_18;
  undefined1 auStack_c8 [16];
  undefined8 uStack_b8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_80;
  
  lVar2 = **(longlong **)(param_1 + 0x20);
  lVar7 = *(longlong *)(lVar2 + 0x9d8);
  lVar11 = *(longlong *)(lVar2 + 0x20);
  if ((lVar7 == 0) || (cVar6 = FUN_18038d0a0(lVar7,lVar11 + 0xc), lVar9 = lVar7, cVar6 == '\0')) {
    lVar9 = 0;
  }
  uStack_80 = 0;
  uStack_b8 = *(undefined8 *)(*(longlong *)(lVar2 + 0x8d8) + 0x18);
  uStack_a0 = *(undefined8 *)(lVar11 + 0xc);
  uStack_98 = *(undefined8 *)(lVar11 + 0x14);
  uVar1 = *(undefined4 *)(lVar11 + 0xb0);
  uVar3 = *(undefined4 *)(lVar11 + 0xb4);
  uVar4 = *(undefined4 *)(lVar11 + 0xb8);
  uVar5 = *(undefined4 *)(lVar11 + 0xbc);
  *param_3 = uStack_b8;
  param_3[3] = uStack_a0;
  param_3[4] = uStack_98;
  param_3[1] = lVar9;
  *(undefined4 *)(param_3 + 5) = uVar1;
  *(undefined4 *)((longlong)param_3 + 0x2c) = uVar3;
  *(undefined4 *)(param_3 + 6) = uVar4;
  *(undefined4 *)((longlong)param_3 + 0x34) = uVar5;
  param_3[2] = lVar7;
  param_3[7] = uStack_a0;
  *(undefined4 *)(param_3 + 8) = 3;
  fStackX_10 = *param_2;
  if ((fStackX_10 == 0.0) && (param_2[1] == 0.0)) {
    lVar7 = param_1 + 0x28;
    fVar13 = (float)func_0x000180507a40();
    if (fVar13 < *(float *)(lVar7 + 0x68) || fVar13 == *(float *)(lVar7 + 0x68)) {
      if (*(char *)(param_1 + 0x1144) == '\0') {
        puVar8 = (undefined8 *)(param_1 + 0x60);
      }
      else {
        lVar7 = param_1 + 0x118;
        if (*(char *)(param_1 + 0x113c) == '\0') {
          lVar7 = *(longlong *)(param_1 + 0x1118);
        }
        puVar8 = (undefined8 *)(lVar7 + (longlong)*(int *)(param_1 + 0x1140) * 0x20);
      }
    }
    else {
      puVar8 = (undefined8 *)(param_1 + 0x3c);
    }
    uVar10 = *puVar8;
    uStackX_8._0_4_ = (float)uVar10;
    if (((float)uStackX_8 != *(float *)(param_3 + 3)) ||
       (uStackX_8._4_4_ = (float)((ulonglong)uVar10 >> 0x20),
       uStackX_8._4_4_ != *(float *)((longlong)param_3 + 0x1c))) {
      if (*(int *)(param_3 + 8) != 0) {
        *(undefined4 *)(param_3 + 8) = 0;
      }
      param_3[3] = uVar10;
    }
    uStackX_8 = uVar10;
    puVar8 = (undefined8 *)FUN_180507e30(param_1,&uStackX_8);
    uStackX_8 = *puVar8;
    fVar13 = (float)FUN_1805d8ed0(param_1);
    fStackX_14 = uStackX_8._4_4_;
    fStackX_10 = (float)uStackX_8;
  }
  else {
    if ((fStackX_10 != *(float *)(param_3 + 3)) ||
       (param_2[1] != *(float *)((longlong)param_3 + 0x1c))) {
      *(undefined4 *)(param_3 + 8) = 0;
      param_3[3] = *(undefined8 *)param_2;
      fStackX_10 = *param_2;
    }
    fStackX_10 = fStackX_10 - *(float *)(param_1 + 0x2c);
    fStackX_14 = param_2[1] - *(float *)(param_1 + 0x30);
    fVar15 = fStackX_14 * fStackX_14 + fStackX_10 * fStackX_10;
    auVar14 = rsqrtss(ZEXT416((uint)fVar15),ZEXT416((uint)fVar15));
    fVar13 = auVar14._0_4_;
    fVar13 = fVar13 * 0.5 * (3.0 - fVar15 * fVar13 * fVar13);
    fStackX_10 = fStackX_10 * fVar13;
    fStackX_14 = fStackX_14 * fVar13;
    fVar13 = fVar13 * fVar15;
    uStackX_8 = CONCAT44(fStackX_14,fStackX_10);
  }
  pfVar12 = (float *)(param_1 + 0x2c);
  lStackX_18 = 0;
  lVar7 = *(longlong *)(*(longlong *)(lVar2 + 0x8d8) + 0x18);
  if (*(longlong *)(lVar7 + 0x2ee8) - *(longlong *)(lVar7 + 12000) >> 3 != 0) {
    fStackX_14 = fStackX_14 * fVar13;
    fStackX_10 = fStackX_10 * fVar13;
    uVar1 = *(undefined4 *)(*(longlong *)(lVar2 + 0x20) + 0x1d0);
    FUN_180487c70(param_3,2);
    if (*(int *)(param_3 + 8) < 2) {
      uVar10 = 0;
    }
    else {
      uVar10 = param_3[1];
    }
    cVar6 = FUN_1803944c0(lVar7 + 0x2a68,*(undefined8 *)(**(longlong **)(param_1 + 0x20) + 0x9d8),
                          uVar10,pfVar12,&fStackX_10,0,uVar1,0,0,0,&lStackX_18);
    if (cVar6 == '\0') {
      if (lStackX_18 != 0) {
        puVar8 = (undefined8 *)FUN_18038bc40(lStackX_18,auStack_c8,pfVar12,&uStackX_8);
        *(undefined8 *)param_2 = *puVar8;
        fVar13 = param_2[1] - *(float *)(param_1 + 0x30);
        return *(float *)(param_1 + 0x90) * *(float *)(param_1 + 0x90) * 1.4689441 <
               (*param_2 - *pfVar12) * (*param_2 - *pfVar12) + fVar13 * fVar13;
      }
      return false;
    }
  }
  return true;
}



bool FUN_1805e6825(void)

{
  char cVar1;
  bool bVar2;
  undefined8 *puVar3;
  longlong unaff_RBX;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  undefined8 uVar4;
  float *unaff_R14;
  float *unaff_R15;
  undefined4 uVar5;
  undefined4 in_XMM5_Da;
  undefined4 unaff_XMM6_Da;
  
  *(undefined4 *)(unaff_RBP + 0x6f) = unaff_XMM6_Da;
  *(undefined4 *)(unaff_RBP + 0x73) = in_XMM5_Da;
  uVar5 = FUN_180487c70();
  if (*(int *)(unaff_RBX + 0x40) < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_RBX + 8);
  }
  cVar1 = FUN_1803944c0(uVar5,*(undefined8 *)(**(longlong **)(unaff_RDI + 0x20) + 0x9d8),uVar4);
  if (cVar1 == '\0') {
    if (*(longlong *)(unaff_RBP + 0x77) == 0) {
      bVar2 = false;
    }
    else {
      puVar3 = (undefined8 *)FUN_18038bc40(*(longlong *)(unaff_RBP + 0x77),unaff_RBP + -0x69);
      *(undefined8 *)unaff_R14 = *puVar3;
      bVar2 = *(float *)(unaff_RDI + 0x90) * *(float *)(unaff_RDI + 0x90) * 1.4689441 <
              (*unaff_R14 - *unaff_R15) * (*unaff_R14 - *unaff_R15) +
              (*unaff_RSI - unaff_R15[1]) * (*unaff_RSI - unaff_R15[1]);
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



bool FUN_1805e68b0(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  bool bVar2;
  longlong unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  float *unaff_R14;
  float *unaff_R15;
  
  if (*(longlong *)(unaff_RBP + 0x77) == 0) {
    bVar2 = false;
  }
  else {
    puVar1 = (undefined8 *)
             FUN_18038bc40(*(longlong *)(unaff_RBP + 0x77),unaff_RBP + -0x69,param_3,
                           unaff_RBP + 0x67);
    *(undefined8 *)unaff_R14 = *puVar1;
    bVar2 = *(float *)(unaff_RDI + 0x90) * *(float *)(unaff_RDI + 0x90) * 1.4689441 <
            (*unaff_R14 - *unaff_R15) * (*unaff_R14 - *unaff_R15) +
            (*unaff_RSI - unaff_R15[1]) * (*unaff_RSI - unaff_R15[1]);
  }
  return bVar2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




