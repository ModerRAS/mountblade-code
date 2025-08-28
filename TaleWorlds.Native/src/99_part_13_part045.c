#include "TaleWorlds.Native.Split.h"

// 99_part_13_part045.c - 3 个函数

// 函数: void FUN_1808c3807(void)
void FUN_1808c3807(void)

{
                    // WARNING: Subroutine does not return
  FUN_180768400();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c3980(longlong *param_1,undefined8 *param_2)
void FUN_1808c3980(longlong *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 *puVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *plVar11;
  undefined4 *puVar12;
  undefined1 auStack_c8 [32];
  undefined1 uStack_a8;
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong *aplStack_88 [2];
  longlong *plStack_78;
  undefined8 uStack_70;
  longlong *plStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [40];
  ulonglong uStack_30;
  
  uStack_30 = _DAT_180bf00a8 ^ (ulonglong)auStack_c8;
  if (param_1[0xb] != 0) {
    lVar5 = param_1[0xb] + 0x10;
    lVar3 = (**(code **)(*(longlong *)*param_2 + 0x2f8))((longlong *)*param_2,lVar5,1);
    if (lVar3 == 0) {
                    // WARNING: Subroutine does not return
      FUN_18084b240(lVar5,auStack_58);
    }
    param_1[0xb] = lVar3;
  }
  iVar2 = FUN_1808b2950(param_1,param_2);
  uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
  if (iVar2 == 0) {
    lVar5 = param_1[0xb];
    if (lVar5 != 0) {
      plVar11 = param_2 + 0x4c;
      if (param_2 == (undefined8 *)0xffffffffffffff08) {
        plVar11 = (longlong *)0x0;
      }
      if (plVar11 != (longlong *)0x0) {
        if (((*(int *)((longlong)plVar11 + 0x24) != 0) && ((int)plVar11[1] != 0)) &&
           (iVar2 = *(int *)(*plVar11 +
                            (longlong)
                            (int)((*(uint *)(lVar5 + 0x1c) ^ *(uint *)(lVar5 + 0x18) ^
                                   *(uint *)(lVar5 + 0x14) ^ *(uint *)(lVar5 + 0x10)) &
                                 (int)plVar11[1] - 1U) * 4), iVar2 != -1)) {
          lVar3 = plVar11[2];
          do {
            lVar4 = (longlong)iVar2;
            if ((*(longlong *)(lVar3 + lVar4 * 0x18) == *(longlong *)(lVar5 + 0x10)) &&
               (*(longlong *)(lVar3 + 8 + lVar4 * 0x18) == *(longlong *)(lVar5 + 0x18)))
            goto LAB_1808c3a9b;
            iVar2 = *(int *)(lVar3 + 0x10 + lVar4 * 0x18);
          } while (iVar2 != -1);
        }
        iVar2 = -1;
LAB_1808c3a9b:
        if (iVar2 != -1) {
          iVar2 = FUN_1808b2f30(param_1,0);
          uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
          if (iVar2 != 0) goto FUN_1808c3dad;
          plVar10 = (longlong *)param_1[9];
          plVar11 = param_1 + 9;
          while (plVar10 != plVar11) {
            puVar1 = (undefined8 *)plVar10[2];
            plVar10 = (longlong *)*plVar10;
            lVar5 = (**(code **)*puVar1)(puVar1);
            iVar2 = *(int *)(param_1[0xb] + 0x40);
            if (iVar2 < 1) {
LAB_1808c3b26:
              plVar10 = (longlong *)puVar1[7];
              plStack_68 = puVar1 + 7;
              uStack_60._0_4_ = SUB84(plVar10,0);
              uStack_60._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
              uStack_90 = (undefined4)uStack_60;
              uStack_8c = uStack_60._4_4_;
              uStack_60 = plVar10;
              if (plVar10 == plStack_68) goto LAB_1808c3b65;
              goto LAB_1808c3b50;
            }
            lVar3 = *(longlong *)(param_1[0xb] + 0x38);
            plVar9 = (longlong *)0x0;
            while( true ) {
              iVar8 = (int)plVar9;
              if ((*(longlong *)(lVar3 + (longlong)iVar8 * 0x10) == *(longlong *)(lVar5 + 0x10)) &&
                 (*(longlong *)(lVar3 + 8 + (longlong)iVar8 * 0x10) == *(longlong *)(lVar5 + 0x18)))
              break;
              plVar9 = (longlong *)(ulonglong)(iVar8 + 1U);
              if (iVar2 <= (int)(iVar8 + 1U)) goto LAB_1808c3b26;
            }
          }
          lVar5 = param_1[0xb];
          for (puVar12 = *(undefined4 **)(lVar5 + 0x38);
              (*(undefined4 **)(lVar5 + 0x38) <= puVar12 &&
              (puVar12 < *(undefined4 **)(lVar5 + 0x38) + (longlong)*(int *)(lVar5 + 0x40) * 4));
              puVar12 = puVar12 + 4) {
            uStack_98._0_4_ = *puVar12;
            uStack_98._4_4_ = puVar12[1];
            uStack_90 = puVar12[2];
            uStack_8c = puVar12[3];
            plVar10 = (longlong *)*plVar11;
            if (plVar10 == plVar11) {
LAB_1808c3d08:
              lVar3 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
              lVar4 = CONCAT44(uStack_8c,uStack_90);
            }
            else {
              do {
                lVar6 = (*(code *)**(undefined8 **)plVar10[2])();
                lVar3 = CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
                lVar4 = CONCAT44(uStack_8c,uStack_90);
                if ((lVar3 == *(longlong *)(lVar6 + 0x10)) && (lVar4 == *(longlong *)(lVar6 + 0x18))
                   ) {
                  puVar7 = (undefined4 *)FUN_180847820();
                  uStack_98._0_4_ = *puVar7;
                  uStack_98._4_4_ = puVar7[1];
                  uStack_90 = puVar7[2];
                  uStack_8c = puVar7[3];
                  goto LAB_1808c3d08;
                }
              } while ((plVar10 != plVar11) && (plVar10 = (longlong *)*plVar10, plVar10 != plVar11))
              ;
            }
            if (((int)lVar3 != 0) ||
               ((((int)((ulonglong)lVar3 >> 0x20) != 0 || ((int)lVar4 != 0)) ||
                ((int)((ulonglong)lVar4 >> 0x20) != 0)))) {
              aplStack_88[0] = (longlong *)0x0;
              iVar2 = FUN_1808bc240(param_1[4],&uStack_98,0xffffffff,aplStack_88);
              plVar10 = aplStack_88[0];
              uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
              if (iVar2 != 0) goto FUN_1808c3dad;
              if (aplStack_88[0] != (longlong *)0x0) {
                plStack_68 = param_1;
                uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
                if (param_1 == (longlong *)0x0) goto FUN_1808c3dad;
                plStack_78 = aplStack_88[0];
                iVar2 = FUN_1808c4160(param_1 + 9,&plStack_78);
                uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
                if (iVar2 != 0) goto FUN_1808c3dad;
                iVar2 = FUN_1808c4570(param_1);
                uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
                if (iVar2 != 0) goto FUN_1808c3dad;
                iVar2 = FUN_1808c4160(plVar10 + 7,&plStack_68);
                uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
                if (iVar2 != 0) goto FUN_1808c3dad;
              }
            }
          }
        }
      }
    }
    uStack_98 = (longlong *)CONCAT44(uStack_98._4_4_,(undefined4)uStack_98);
  }
  goto FUN_1808c3dad;
LAB_1808c3b65:
  if (plVar10 != plStack_68) {
    uStack_a8 = 1;
    *(longlong *)plVar10[1] = *plVar10;
    *(longlong *)(*plVar10 + 8) = plVar10[1];
    plVar10[1] = (longlong)plVar10;
    *plVar10 = (longlong)plVar10;
    *(longlong **)plVar10[1] = plVar10;
    *(longlong *)(*plVar10 + 8) = plVar10[1];
    plVar10[1] = (longlong)plVar10;
    *plVar10 = (longlong)plVar10;
    uStack_98 = plStack_68;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar10,&UNK_180984b50,0xe1);
  }
  goto LAB_1808c3bc4;
  while ((plVar10 != plStack_68 && (plVar10 = (longlong *)*plVar10, plVar10 != plStack_68))) {
LAB_1808c3b50:
    if ((longlong *)plVar10[2] == param_1) goto LAB_1808c3b65;
  }
LAB_1808c3bc4:
  plVar10 = (longlong *)*plVar11;
  uStack_70._0_4_ = SUB84(plVar10,0);
  uStack_70._4_4_ = (undefined4)((ulonglong)plVar10 >> 0x20);
  uStack_90 = (undefined4)uStack_70;
  uStack_8c = uStack_70._4_4_;
  plStack_78 = plVar11;
  uStack_70 = plVar10;
  uStack_98 = plVar11;
  if (plVar10 == plVar11) {
LAB_1808c3c05:
    if (plVar10 != plVar11) {
      uStack_a8 = 1;
      *(longlong *)plVar10[1] = *plVar10;
      *(longlong *)(*plVar10 + 8) = plVar10[1];
      plVar10[1] = (longlong)plVar10;
      *plVar10 = (longlong)plVar10;
      *(longlong **)plVar10[1] = plVar10;
      *(longlong *)(*plVar10 + 8) = plVar10[1];
      plVar10[1] = (longlong)plVar10;
      *plVar10 = (longlong)plVar10;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar10,&UNK_180984b50,0xe1);
    }
  }
  else {
    do {
      if ((undefined8 *)plVar10[2] == puVar1) goto LAB_1808c3c05;
    } while ((plVar10 != plVar11) && (plVar10 = (longlong *)*plVar10, plVar10 != plVar11));
  }
FUN_1808c3dad:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_c8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808c39f5(undefined4 param_1,undefined8 param_2,longlong param_3)
void FUN_1808c39f5(undefined4 param_1,undefined8 param_2,longlong param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  longlong lVar8;
  longlong lVar9;
  longlong lVar10;
  undefined4 *puVar11;
  longlong lVar12;
  int iVar13;
  longlong *plVar14;
  longlong *plVar15;
  longlong unaff_RBX;
  undefined8 *puVar16;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined4 *puVar17;
  
  if (param_3 != 0) {
    plVar14 = (longlong *)(unaff_RBX + 0x260);
    if (unaff_RBX == -0xf8) {
      plVar14 = (longlong *)0x0;
    }
    if (plVar14 != (longlong *)0x0) {
      if (((*(int *)((longlong)plVar14 + 0x24) != 0) && ((int)plVar14[1] != 0)) &&
         (iVar7 = *(int *)(*plVar14 +
                          (longlong)
                          (int)((*(uint *)(param_3 + 0x1c) ^ *(uint *)(param_3 + 0x18) ^
                                 *(uint *)(param_3 + 0x14) ^ *(uint *)(param_3 + 0x10)) &
                               (int)plVar14[1] - 1U) * 4), iVar7 != -1)) {
        lVar9 = plVar14[2];
        do {
          lVar8 = (longlong)iVar7;
          if ((*(longlong *)(lVar9 + lVar8 * 0x18) == *(longlong *)(param_3 + 0x10)) &&
             (*(longlong *)(lVar9 + 8 + lVar8 * 0x18) == *(longlong *)(param_3 + 0x18)))
          goto LAB_1808c3a9b;
          iVar7 = *(int *)(lVar9 + 0x10 + lVar8 * 0x18);
        } while (iVar7 != -1);
      }
      iVar7 = -1;
LAB_1808c3a9b:
      if ((iVar7 != -1) && (iVar7 = FUN_1808b2f30(param_1,0), iVar7 == 0)) {
        puVar16 = *(undefined8 **)(unaff_RSI + 0x48);
        puVar1 = (undefined8 *)(unaff_RSI + 0x48);
        while (puVar16 != puVar1) {
          puVar2 = (undefined8 *)puVar16[2];
          puVar16 = (undefined8 *)*puVar16;
          lVar9 = (**(code **)*puVar2)(puVar2);
          iVar7 = *(int *)(*(longlong *)(unaff_RSI + 0x58) + 0x40);
          if (iVar7 < 1) {
LAB_1808c3b26:
            puVar16 = (undefined8 *)puVar2[7];
            *(undefined8 **)(unaff_RBP + -1) = puVar16;
            *(undefined8 **)(unaff_RBP + -9) = puVar2 + 7;
            *(undefined4 *)(unaff_RBP + -0x39) = *(undefined4 *)(unaff_RBP + -9);
            *(undefined4 *)(unaff_RBP + -0x35) = *(undefined4 *)(unaff_RBP + -5);
            *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(unaff_RBP + -1);
            *(undefined4 *)(unaff_RBP + -0x2d) = *(undefined4 *)(unaff_RBP + 3);
            plVar14 = *(longlong **)(unaff_RBP + -0x39);
            plVar15 = *(longlong **)(unaff_RBP + -0x31);
            if (puVar16 == puVar2 + 7) goto LAB_1808c3b65;
            goto LAB_1808c3b50;
          }
          lVar8 = *(longlong *)(*(longlong *)(unaff_RSI + 0x58) + 0x38);
          plVar14 = (longlong *)0x0;
          while( true ) {
            iVar13 = (int)plVar14;
            if ((*(longlong *)(lVar8 + (longlong)iVar13 * 0x10) == *(longlong *)(lVar9 + 0x10)) &&
               (*(longlong *)(lVar8 + 8 + (longlong)iVar13 * 0x10) == *(longlong *)(lVar9 + 0x18)))
            break;
            plVar14 = (longlong *)(ulonglong)(iVar13 + 1U);
            if (iVar7 <= (int)(iVar13 + 1U)) goto LAB_1808c3b26;
          }
        }
        lVar9 = *(longlong *)(unaff_RSI + 0x58);
        for (puVar17 = *(undefined4 **)(lVar9 + 0x38);
            (*(undefined4 **)(lVar9 + 0x38) <= puVar17 &&
            (puVar17 < *(undefined4 **)(lVar9 + 0x38) + (longlong)*(int *)(lVar9 + 0x40) * 4));
            puVar17 = puVar17 + 4) {
          uVar4 = puVar17[1];
          uVar5 = puVar17[2];
          uVar6 = puVar17[3];
          puVar16 = (undefined8 *)*puVar1;
          *(undefined4 *)(unaff_RBP + -0x39) = *puVar17;
          *(undefined4 *)(unaff_RBP + -0x35) = uVar4;
          *(undefined4 *)(unaff_RBP + -0x31) = uVar5;
          *(undefined4 *)(unaff_RBP + -0x2d) = uVar6;
          if (puVar16 == puVar1) {
LAB_1808c3d08:
            lVar8 = *(longlong *)(unaff_RBP + -0x39);
            lVar12 = *(longlong *)(unaff_RBP + -0x31);
          }
          else {
            do {
              lVar10 = (*(code *)**(undefined8 **)puVar16[2])();
              lVar8 = *(longlong *)(unaff_RBP + -0x39);
              lVar12 = *(longlong *)(unaff_RBP + -0x31);
              if ((lVar8 == *(longlong *)(lVar10 + 0x10)) &&
                 (lVar12 == *(longlong *)(lVar10 + 0x18))) {
                puVar11 = (undefined4 *)FUN_180847820();
                uVar4 = puVar11[1];
                uVar5 = puVar11[2];
                uVar6 = puVar11[3];
                *(undefined4 *)(unaff_RBP + -0x39) = *puVar11;
                *(undefined4 *)(unaff_RBP + -0x35) = uVar4;
                *(undefined4 *)(unaff_RBP + -0x31) = uVar5;
                *(undefined4 *)(unaff_RBP + -0x2d) = uVar6;
                goto LAB_1808c3d08;
              }
            } while ((puVar16 != puVar1) && (puVar16 = (undefined8 *)*puVar16, puVar16 != puVar1));
          }
          if (((int)lVar8 != 0) ||
             ((((int)((ulonglong)lVar8 >> 0x20) != 0 || ((int)lVar12 != 0)) ||
              ((int)((ulonglong)lVar12 >> 0x20) != 0)))) {
            uVar3 = *(undefined8 *)(unaff_RSI + 0x20);
            *(undefined8 *)(unaff_RBP + -0x29) = 0;
            iVar7 = FUN_1808bc240(uVar3,unaff_RBP + -0x39,0xffffffff,unaff_RBP + -0x29);
            if (iVar7 != 0) break;
            lVar8 = *(longlong *)(unaff_RBP + -0x29);
            if (lVar8 != 0) {
              *(longlong *)(unaff_RBP + -9) = unaff_RSI;
              if (unaff_RSI == 0) break;
              *(longlong *)(unaff_RBP + -0x19) = lVar8;
              iVar7 = FUN_1808c4160(unaff_RSI + 0x48,unaff_RBP + -0x19);
              if (((iVar7 != 0) || (iVar7 = FUN_1808c4570(), iVar7 != 0)) ||
                 (iVar7 = FUN_1808c4160(lVar8 + 0x38,unaff_RBP + -9), iVar7 != 0)) break;
            }
          }
        }
      }
    }
  }
  goto LAB_1808c3d9d;
LAB_1808c3b65:
  if (plVar15 != plVar14) {
    *(longlong *)plVar15[1] = *plVar15;
    *(longlong *)(*plVar15 + 8) = plVar15[1];
    plVar15[1] = (longlong)plVar15;
    *plVar15 = (longlong)plVar15;
    *(longlong **)plVar15[1] = plVar15;
    *(longlong *)(*plVar15 + 8) = plVar15[1];
    plVar15[1] = (longlong)plVar15;
    *plVar15 = (longlong)plVar15;
                    // WARNING: Subroutine does not return
    FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar15,&UNK_180984b50,0xe1,1);
  }
  goto LAB_1808c3bc4;
  while ((plVar15 != plVar14 && (plVar15 = (longlong *)*plVar15, plVar15 != plVar14))) {
LAB_1808c3b50:
    if (plVar15[2] == unaff_RSI) goto LAB_1808c3b65;
  }
LAB_1808c3bc4:
  puVar16 = (undefined8 *)*puVar1;
  *(undefined8 **)(unaff_RBP + -0x11) = puVar16;
  *(undefined8 **)(unaff_RBP + -0x19) = puVar1;
  *(undefined4 *)(unaff_RBP + -0x39) = *(undefined4 *)(unaff_RBP + -0x19);
  *(undefined4 *)(unaff_RBP + -0x35) = *(undefined4 *)(unaff_RBP + -0x15);
  *(undefined4 *)(unaff_RBP + -0x31) = *(undefined4 *)(unaff_RBP + -0x11);
  *(undefined4 *)(unaff_RBP + -0x2d) = *(undefined4 *)(unaff_RBP + -0xd);
  plVar14 = *(longlong **)(unaff_RBP + -0x39);
  plVar15 = *(longlong **)(unaff_RBP + -0x31);
  if (puVar16 == puVar1) {
LAB_1808c3c05:
    if (plVar15 != plVar14) {
      *(longlong *)plVar15[1] = *plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
      *(longlong **)plVar15[1] = plVar15;
      *(longlong *)(*plVar15 + 8) = plVar15[1];
      plVar15[1] = (longlong)plVar15;
      *plVar15 = (longlong)plVar15;
                    // WARNING: Subroutine does not return
      FUN_180742250(*(undefined8 *)(_DAT_180be12f0 + 0x1a0),plVar15,&UNK_180984b50,0xe1,1);
    }
  }
  else {
    do {
      if ((undefined8 *)plVar15[2] == puVar2) goto LAB_1808c3c05;
    } while ((plVar15 != plVar14) && (plVar15 = (longlong *)*plVar15, plVar15 != plVar14));
  }
LAB_1808c3d9d:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(*(ulonglong *)(unaff_RBP + 0x2f) ^ (ulonglong)&stack0x00000000);
}






