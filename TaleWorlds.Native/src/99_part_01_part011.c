#include "TaleWorlds.Native.Split.h"

// 99_part_01_part011.c - 4 个函数

// 函数: void FUN_1800aa220(longlong param_1,ulonglong param_2,int *param_3)
void FUN_1800aa220(longlong param_1,ulonglong param_2,int *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  int *piVar7;
  longlong *plVar8;
  longlong lVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar13;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined4 *puVar14;
  ulonglong uVar15;
  int *piVar16;
  longlong *plVar17;
  longlong *plVar18;
  ulonglong uVar19;
  char cVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  ulonglong uVar24;
  undefined1 auStack_218 [32];
  undefined4 uStack_1f8;
  undefined4 uStack_1f0;
  undefined8 uStack_1e8;
  uint uStack_1e0;
  undefined8 uStack_1d8;
  char cStack_1c8;
  uint uStack_1c4;
  uint uStack_1c0;
  uint uStack_1bc;
  int *piStack_1b8;
  longlong *plStack_1b0;
  ulonglong uStack_1a8;
  longlong lStack_1a0;
  ulonglong uStack_198;
  ulonglong uStack_190;
  ulonglong uStack_188;
  ulonglong uStack_180;
  longlong *plStack_178;
  longlong *plStack_170;
  longlong lStack_168;
  longlong *plStack_160;
  undefined4 uStack_158;
  undefined8 uStack_154;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  int iStack_144;
  longlong *plStack_140;
  longlong *plStack_138;
  longlong *plStack_130;
  undefined4 uStack_128;
  longlong lStack_120;
  ulonglong uStack_118;
  undefined8 uStack_110;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  uint uStack_54;
  uint uStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  ulonglong uStack_40;
  longlong *plVar12;
  
  uStack_110 = 0xfffffffffffffffe;
  uStack_40 = _DAT_180bf00a8 ^ (ulonglong)auStack_218;
  plVar21 = (longlong *)(param_3 + 2);
  piVar7 = (int *)*plVar21;
  uVar15 = *(longlong *)(param_3 + 4) - (longlong)piVar7 >> 5;
  bVar1 = *(byte *)(param_2 + 0x335);
  uVar5 = (uint)bVar1;
  uStack_1c4 = (uint)bVar1;
  uVar11 = *(uint *)(param_2 + 0x328) >> 0xd & 0xffffff01;
  cVar20 = '\0';
  cStack_1c8 = '\0';
  uVar19 = param_2 & 0xffffffffffffff00;
  uStack_1c0 = (uint)uVar19;
  plVar18 = (longlong *)0x0;
  uVar4 = 0;
  plVar12 = plVar18;
  if (uVar15 != 0) {
    do {
      cVar3 = '\x01';
      if ((*piVar7 != 2) && (uVar19 = uVar19 & 0xff, cVar3 = cVar20, *piVar7 == 3)) {
        uVar19 = 1;
      }
      cVar20 = cVar3;
      uVar10 = (int)plVar12 + 1;
      plVar12 = (longlong *)(ulonglong)uVar10;
      piVar7 = piVar7 + 8;
    } while ((ulonglong)(longlong)(int)uVar10 < uVar15);
    uStack_1c0 = (uint)uVar19;
    cStack_1c8 = cVar20;
  }
  cVar20 = cStack_1c8;
  uStack_70 = (uint)*(ushort *)(param_2 + 0x32c);
  uStack_6c = (uint)*(ushort *)(param_2 + 0x32e);
  uStack_1bc = uVar11;
  piStack_1b8 = param_3;
  lStack_1a0 = param_1;
  uStack_190 = uVar15;
  uStack_188 = param_2;
  plStack_170 = plVar21;
  plStack_160 = (longlong *)param_3;
  uStack_68 = uStack_1c4;
  uStack_60 = func_0x0001800ab000(*(undefined4 *)(param_2 + 0x324));
  uStack_4c = 0;
  uStack_48 = 0;
  iVar22 = *param_3;
  uStack_54 = uStack_48;
  if ((iVar22 != 0) && (uStack_54 = 1, iVar22 != 1)) {
    if (iVar22 == 2) {
      uStack_54 = 3;
    }
    else {
      uStack_54 = uStack_48;
      if (iVar22 == 3) {
        uStack_54 = 2;
      }
    }
  }
  uStack_5c = 1;
  iVar22 = (int)uVar15;
  uVar10 = param_3[1];
  if ((uVar10 & 1) != 0) {
    uVar4 = 8;
  }
  if ((uVar10 & 4) != 0) {
    uVar4 = uVar4 | 0x80;
  }
  uStack_50 = uVar4;
  if ((uVar10 & 2) != 0) {
    uStack_50 = uVar4 | 0x20;
  }
  if ((char)uVar11 != '\0') {
    uStack_48 = 4;
  }
  uVar4 = (uint)bVar1;
  if (uVar4 == 0) {
    uStack_48 = uStack_48 | 1;
  }
  plStack_1b0 = (longlong *)0x0;
  plStack_178 = (longlong *)0x0;
  iStack_64 = iVar22;
  if (uVar4 * iVar22 == 0) {
    uStack_180 = 0;
  }
  else {
    uStack_180 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)(uVar4 * iVar22) << 4);
    plVar21 = plStack_170;
    param_2 = uStack_188;
  }
  uVar19 = uStack_180;
  plStack_140 = (longlong *)0x0;
  plStack_138 = (longlong *)0x0;
  plStack_130 = (longlong *)0x0;
  uStack_128 = 3;
  uVar15 = (ulonglong)iVar22;
  plVar17 = plStack_140;
  plVar12 = plStack_138;
  uStack_1a8 = uVar15;
  if (cVar20 != '\0') {
    if (uVar4 < 2) {
      if (0 < (longlong)uVar15) {
        lStack_120 = 0;
        puVar14 = (undefined4 *)(uStack_180 + 0xc);
        lVar6 = 0x180000000;
        plVar12 = (longlong *)0x0;
        plVar17 = (longlong *)0x0;
        do {
          lVar9 = lStack_120;
          lVar13 = *plVar21;
          plVar8 = plVar17;
          uStack_118 = uVar15;
          if (*(int *)(lVar13 + lStack_120) == 2) {
            uVar4 = (uint)*(ushort *)(param_2 + 0x32c);
            uVar5 = *(int *)(param_2 + 0x324) - 0xe;
            if (uVar5 < 9) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((ulonglong)*(uint *)(lVar6 + 0xaac7c + (ulonglong)uVar5 * 4) + lVar6);
                    // WARNING: Could not recover jumptable at 0x0001800aa72e. Too many branches
                    // WARNING: Treating indirect jump as call
              (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return;
            }
            iVar22 = func_0x0001802a0ec0(*(int *)(param_2 + 0x324));
            *(undefined8 *)(puVar14 + -3) = **(undefined8 **)(lVar13 + 0x10 + lVar9);
            puVar14[-1] = iVar22 * uVar4 + 7 >> 3;
            uStack_118 = uVar15;
            lStack_120 = lVar9;
LAB_1800aa8e4:
            *puVar14 = 0;
            plVar17 = plVar8;
            plVar21 = plStack_170;
            uVar15 = uStack_118;
          }
          else if (*(int *)(lVar13 + lStack_120) == 0) {
            uVar19 = (ulonglong)*(ushort *)(param_2 + 0x32e);
            uVar5 = (uint)*(ushort *)(param_2 + 0x32c);
            iVar22 = *(int *)(param_2 + 0x324);
            if (iVar22 - 0xeU < 9) {
              UNRECOVERED_JUMPTABLE_00 =
                   (code *)((ulonglong)*(uint *)(lVar6 + 0xaaca0 + (ulonglong)(iVar22 - 0xeU) * 4) +
                           lVar6);
                    // WARNING: Could not recover jumptable at 0x0001800aa7b3. Too many branches
                    // WARNING: Treating indirect jump as call
              (*UNRECOVERED_JUMPTABLE_00)(UNRECOVERED_JUMPTABLE_00);
              return;
            }
            iVar22 = func_0x0001802a0ec0(iVar22,iVar22,*(ushort *)(param_2 + 0x32c),uVar19);
            uStack_198 = (ulonglong)(iVar22 * uVar5 + 7 >> 3);
            lStack_168 = FUN_18062b420(_DAT_180c8ed18,uVar19 * uStack_198,3);
            *(longlong *)(puVar14 + -3) = lStack_168;
            if (plVar12 < plVar18) {
              *plVar12 = lStack_168;
              uStack_118 = uVar15;
              lStack_120 = lVar9;
            }
            else {
              lVar6 = (longlong)plVar12 - (longlong)plVar17 >> 3;
              if (lVar6 == 0) {
                lVar6 = 1;
LAB_1800aa86c:
                plVar8 = (longlong *)FUN_18062b420(_DAT_180c8ed18,lVar6 * 8,3);
              }
              else {
                lVar6 = lVar6 * 2;
                if (lVar6 != 0) goto LAB_1800aa86c;
                plVar8 = (longlong *)0x0;
              }
              if (plVar17 != plVar12) {
                    // WARNING: Subroutine does not return
                memmove(plVar8,plVar17,(longlong)plVar12 - (longlong)plVar17);
              }
              *plVar8 = lStack_168;
              if (plVar17 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
                FUN_18064e900(plVar17);
              }
              plVar18 = plVar8 + lVar6;
              plStack_140 = plVar8;
              plStack_130 = plVar18;
              plVar12 = plVar8;
            }
            plVar12 = plVar12 + 1;
            puVar14[-1] = (int)uStack_198;
            lVar6 = 0x180000000;
            plStack_138 = plVar12;
            goto LAB_1800aa8e4;
          }
          lStack_120 = lStack_120 + 0x20;
          puVar14 = puVar14 + 4;
          uVar15 = uVar15 - 1;
          param_2 = uStack_188;
        } while (uVar15 != 0);
        uStack_118 = 0;
        uVar5 = uStack_1c4;
      }
    }
    else {
      plVar12 = plVar18;
      if (0 < (longlong)uVar15) {
        plVar17 = plVar18;
        uVar24 = uVar15;
        do {
          if ((*(int *)((longlong)plVar17 + *plVar21) == 2) &&
             (bVar2 = *(byte *)(*(longlong *)((longlong)plVar17 + *plVar21 + 0x10) + 0x65),
             (uint)plVar12 < (uint)bVar2)) {
            plVar12 = (longlong *)(ulonglong)bVar2;
          }
          plVar17 = plVar17 + 4;
          uVar24 = uVar24 - 1;
        } while (uVar24 != 0);
      }
      lVar6 = FUN_1800ad760((int)plVar12);
      piVar7 = piStack_1b8;
      plVar21 = plVar18;
      if (0 < (longlong)uVar15) {
        do {
          piVar16 = (int *)(*(longlong *)(piVar7 + 2) + (longlong)plVar18);
          if (*piVar16 == 2) {
            FUN_1800adfe0(*(undefined8 *)(piVar16 + 4),lVar6);
            iVar22 = 0;
            piVar7 = piStack_1b8;
            if (*(char *)(*(longlong *)(piVar16 + 4) + 0x65) != '\0') {
              puVar14 = (undefined4 *)(lVar6 + 0x14);
              do {
                lVar13 = (longlong)((int)plVar21 + iVar22);
                *(undefined8 *)(uVar19 + lVar13 * 0x10) = *(undefined8 *)(puVar14 + -5);
                *(undefined4 *)(uVar19 + 8 + lVar13 * 0x10) = puVar14[-1];
                *(undefined4 *)(uVar19 + 0xc + lVar13 * 0x10) = *puVar14;
                iVar22 = iVar22 + 1;
                puVar14 = puVar14 + 6;
              } while (iVar22 < (int)(uint)*(byte *)(*(longlong *)(piVar16 + 4) + 0x65));
            }
          }
          plVar18 = plVar18 + 4;
          uVar15 = uVar15 - 1;
          plVar21 = (longlong *)(ulonglong)((int)plVar21 + (uint)bVar1);
        } while (uVar15 != 0);
      }
      plVar17 = plStack_140;
      plVar12 = plStack_138;
      if (lVar6 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(lVar6);
      }
    }
  }
  uVar19 = uStack_180;
  lVar6 = lStack_1a0;
  uVar24 = 0;
  uVar15 = uVar24;
  if (cStack_1c8 != '\0') {
    uVar15 = uStack_180;
  }
  iVar22 = (**(code **)(**(longlong **)(lStack_1a0 + 0x1d78) + 0x28))
                     (*(longlong **)(lStack_1a0 + 0x1d78),&uStack_70,uVar15,&plStack_1b0);
  uStack_198 = CONCAT44(uStack_198._4_4_,iVar22);
  if (uVar19 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(uVar19);
  }
  if (iVar22 < 0) {
    FUN_180220810(iVar22);
  }
  uVar19 = (longlong)plVar12 - (longlong)plVar17 >> 3;
  if (uVar19 != 0) {
    do {
      if (*plVar17 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      *plVar17 = 0;
      uVar4 = (int)uVar24 + 1;
      uVar24 = (ulonglong)uVar4;
      plVar17 = plVar17 + 1;
    } while ((ulonglong)(longlong)(int)uVar4 < uVar19);
  }
  piVar7 = piStack_1b8;
  if (iVar22 < 0) {
LAB_1800aaac8:
    if (plStack_1b0 != (longlong *)0x0) {
      (**(code **)(*plStack_1b0 + 0x10))();
      plStack_1b0 = (longlong *)0x0;
    }
    if (plStack_178 != (longlong *)0x0) {
      (**(code **)(*plStack_178 + 0x10))();
      plStack_178 = (longlong *)0x0;
    }
  }
  else {
    cVar20 = (char)uStack_1bc;
    if ((char)uStack_1c0 == '\0') {
LAB_1800aa9f6:
      cVar20 = (char)uStack_1bc;
      uVar19 = (ulonglong)uStack_1c4;
      iVar23 = (int)uStack_190;
    }
    else {
      if (cVar20 == '\0') {
        if (0 < (longlong)uStack_1a8) {
          iVar22 = 0;
          uStack_180 = 0;
          do {
            lVar6 = lStack_1a0;
            if (*(int *)(uStack_180 + *(longlong *)(piStack_1b8 + 2)) == 3) {
              lVar13 = *(longlong *)(uStack_180 + 8 + *(longlong *)(piStack_1b8 + 2));
              uVar4 = 0;
              if (uVar5 != 0) {
                do {
                  uVar11 = (uint)*(byte *)(lVar13 + 0x335);
                  if ((int)*(uint *)(lVar13 + 0x35c) < (int)(uint)*(byte *)(lVar13 + 0x335)) {
                    uVar11 = *(uint *)(lVar13 + 0x35c);
                  }
                  if ((int)uVar4 < (int)uVar11) {
                    plVar21 = *(longlong **)(*(longlong *)(lVar6 + 0x1cd8) + 0x8400);
                    UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar21 + 0x170);
                    lVar9 = FUN_18023a940(lVar13);
                    uStack_1e8 = *(undefined8 *)(lVar9 + 8);
                    uStack_1d8 = 0;
                    uStack_1f0 = 0;
                    uStack_1f8 = 0;
                    uStack_1e0 = uVar4;
                    (*UNRECOVERED_JUMPTABLE_00)(plVar21,plStack_1b0,iVar22 + uVar4,0);
                  }
                  uVar4 = uVar4 + 1;
                } while (uVar4 < uVar5);
              }
            }
            iVar22 = iVar22 + uVar5;
            uStack_180 = uStack_180 + 0x20;
            uStack_1a8 = uStack_1a8 - 1;
          } while (uStack_1a8 != 0);
          uStack_1a8 = 0;
          lVar6 = lStack_1a0;
          iVar22 = (int)uStack_198;
        }
        goto LAB_1800aa9f6;
      }
      uStack_1c0 = 0;
      uVar19 = (ulonglong)uStack_1c4;
      iVar23 = (int)uStack_190;
      lVar6 = lStack_1a0;
      if (0 < iVar23) {
        iVar22 = 0;
        uStack_1a8 = uStack_1a8 & 0xffffffff00000000;
        uVar15 = uStack_190;
        do {
          lVar6 = lStack_1a0;
          uVar24 = (ulonglong)uStack_1c0;
          if ((*(int *)((uVar24 / 6) * 0x20 + *(longlong *)(piStack_1b8 + 2)) == 3) &&
             (iVar23 = (int)uVar19, iVar23 != 0)) {
            do {
              plVar21 = *(longlong **)(*(longlong *)(lVar6 + 0x1cd8) + 0x8400);
              UNRECOVERED_JUMPTABLE_00 = *(code **)(*plVar21 + 0x170);
              lVar13 = FUN_18023a940();
              uStack_1e8 = *(undefined8 *)(lVar13 + 8);
              uStack_1e0 = (int)(uVar24 / 6) * -6 * iVar23 + iVar22;
              uStack_1d8 = 0;
              uStack_1f0 = 0;
              uStack_1f8 = 0;
              (*UNRECOVERED_JUMPTABLE_00)(plVar21,plStack_1b0,iVar22,0);
              iVar22 = iVar22 + 1;
              uVar19 = uVar19 - 1;
            } while (uVar19 != 0);
            uVar19 = (ulonglong)uStack_1c4;
            uVar15 = uStack_190;
            iVar22 = (int)uStack_1a8;
          }
          uStack_1c0 = uStack_1c0 + 1;
          iVar22 = iVar22 + (int)uVar19;
          uStack_1a8 = CONCAT44(uStack_1a8._4_4_,iVar22);
          iVar23 = (int)uVar15;
        } while ((int)uStack_1c0 < iVar23);
        cVar20 = (char)uStack_1bc;
        lVar6 = lStack_1a0;
        iVar22 = (int)uStack_198;
      }
    }
    uVar15 = uStack_188;
    piVar7 = piStack_1b8;
    if ((*(byte *)(piStack_1b8 + 1) & 1) == 0) {
LAB_1800aaa97:
      if (iVar22 < 0) goto LAB_1800aaac8;
    }
    else {
      uStack_14c = (int)uVar19;
      uStack_158 = func_0x0001800ab000(*(undefined4 *)(uStack_188 + 0x324));
      uStack_148 = 0;
      if (cVar20 == '\0') {
        uStack_154 = 5;
        uStack_14c = 0xffffffff;
        iStack_144 = iVar23;
      }
      else {
        uStack_154 = 10;
        iStack_144 = iVar23 / 6 + (iVar23 >> 0x1f) +
                     (int)(((longlong)iVar23 / 6 + ((longlong)iVar23 >> 0x3f) & 0xffffffffU) >> 0x1f
                          );
      }
      iVar22 = (**(code **)(**(longlong **)(lVar6 + 0x1d78) + 0x38))
                         (*(longlong **)(lVar6 + 0x1d78),plStack_1b0,&uStack_158,&plStack_178);
      if (iVar22 < 0) {
        FUN_180220810(iVar22);
        goto LAB_1800aaa97;
      }
    }
    *(longlong **)(uVar15 + 0x170) = plStack_1b0;
    *(longlong **)(uVar15 + 0x178) = plStack_178;
    FUN_18023ce10(uVar15);
  }
  piVar16 = (int *)*plStack_170;
  if (piVar16 != *(int **)(piVar7 + 4)) {
    do {
      if (((*piVar16 - 1U < 2) &&
          (plVar21 = *(longlong **)(piVar16 + 4), plVar21 != (longlong *)0x0)) &&
         ((*(longlong *)(piVar7 + 0xe) == 0 ||
          ((*(int *)((longlong)plVar21 + 0x54) != 0xb && (*(int *)((longlong)plVar21 + 0x54) != 6)))
          ))) {
        if (*(char *)((longlong)plVar21 + 0x11) == '\0') {
          if (((char)plVar21[2] == '\0') && (*plVar21 != 0)) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *plVar21 = 0;
          plVar21[1] = 0;
          *(undefined1 *)(plVar21 + 2) = 0;
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar21);
      }
      piVar16 = piVar16 + 8;
    } while (piVar16 != *(int **)(piVar7 + 4));
  }
  plStack_160 = plStack_170;
  if (*plStack_170 == 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(piVar7);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x0001800a39a6)
// WARNING: Removing unreachable block (ram,0x0001800a3baa)
// WARNING: Removing unreachable block (ram,0x0001800a39bb)
// WARNING: Removing unreachable block (ram,0x0001800a39eb)
// WARNING: Removing unreachable block (ram,0x0001800a3a00)
// WARNING: Removing unreachable block (ram,0x0001800a3a09)
// WARNING: Removing unreachable block (ram,0x0001800a3a17)
// WARNING: Removing unreachable block (ram,0x0001800a3a3b)
// WARNING: Removing unreachable block (ram,0x0001800a3a48)
// WARNING: Removing unreachable block (ram,0x0001800a3a51)
// WARNING: Removing unreachable block (ram,0x0001800a3ab8)
// WARNING: Removing unreachable block (ram,0x0001800a3a9b)
// WARNING: Removing unreachable block (ram,0x0001800a3b23)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800aace0(longlong param_1)
void FUN_1800aace0(longlong param_1)

{
  undefined4 uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  int iVar11;
  undefined1 auStack_258 [32];
  undefined4 uStack_238;
  undefined4 uStack_230;
  longlong *aplStack_228 [2];
  undefined8 uStack_218;
  longlong *plStack_210;
  longlong *plStack_208;
  undefined **ppuStack_1f0;
  undefined **ppuStack_1e8;
  longlong alStack_1e0 [2];
  undefined *puStack_1d0;
  code *pcStack_1c8;
  undefined8 uStack_1c0;
  undefined *puStack_1b8;
  undefined1 *puStack_1b0;
  undefined4 uStack_1a8;
  undefined1 auStack_1a0 [128];
  undefined *puStack_120;
  undefined1 *puStack_118;
  undefined4 uStack_110;
  undefined1 auStack_108 [192];
  ulonglong uStack_48;
  
  FUN_1800ad2a0();
  FUN_1800acb60(param_1);
  FUN_1800ac700(param_1);
  FUN_1800ac530(param_1);
  FUN_1801c93c0();
  FUN_1800ab6f0(param_1);
  uVar5 = *(undefined4 *)(_DAT_180c86920 + 0x1dc0);
  uVar1 = *(undefined4 *)(_DAT_180c86920 + 0x1d50);
  uStack_1c0 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_258;
  iVar4 = *(int *)(*(longlong *)(*(longlong *)(_DAT_180c82868 + 8) + 8) + 0x48);
  iVar3 = _Thrd_id();
  iVar11 = 0;
  if (iVar3 == iVar4) {
    if (*(longlong *)(param_1 + 0x121e0) != 0) {
      FUN_18023b050();
      plStack_208 = *(longlong **)(param_1 + 0x121e0);
      *(undefined8 *)(param_1 + 0x121e0) = 0;
      if (plStack_208 != (longlong *)0x0) {
        (**(code **)(*plStack_208 + 0x38))();
      }
    }
    FUN_18029c9d0(*(undefined8 *)(param_1 + 0x1cd8));
  }
  else {
    FUN_18005e630(_DAT_180c82868);
    plStack_210 = alStack_1e0;
    puStack_1d0 = &UNK_1800adcc0;
    pcStack_1c8 = FUN_1800adc50;
    alStack_1e0[0] = param_1;
    FUN_18005c650(alStack_1e0);
  }
  (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x48))
            (*(longlong **)(param_1 + 0x1d70),0,&UNK_180a026e0,aplStack_228);
  if (aplStack_228[0] != (longlong *)0x0) {
    (**(code **)(*aplStack_228[0] + 0x10))();
    aplStack_228[0] = (longlong *)0x0;
  }
  if (*(char *)(param_1 + 0x121b8) == '\0') {
    uStack_230 = 2;
  }
  else {
    uStack_230 = 0x802;
  }
  uStack_238 = 0;
  iVar4 = (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x68))
                    (*(longlong **)(param_1 + 0x1d70),0,uVar1,uVar5);
  if (iVar4 < 0) {
    if ((iVar4 + 0x7785fffbU & 0xfffffffd) == 0) {
      uVar5 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x138))();
      FUN_180220810(uVar5,&UNK_180a025d0);
    }
  }
  else {
    (**(code **)(**(longlong **)(param_1 + 0x1d70) + 0x48))
              (*(longlong **)(param_1 + 0x1d70),0,&UNK_180a026e0,aplStack_228);
    uStack_218 = 0;
    (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0x48))
              (*(longlong **)(param_1 + 0x1d78),aplStack_228[0],0,&uStack_218);
    uVar6 = FUN_18062b1e0(_DAT_180c8ed18,0x3b0,0x10,3);
    plVar7 = (longlong *)FUN_18023a2e0(uVar6,4);
    if (plVar7 != (longlong *)0x0) {
      plStack_210 = plVar7;
      (**(code **)(*plVar7 + 0x28))(plVar7);
    }
    plStack_210 = *(longlong **)(param_1 + 0x121e0);
    *(longlong **)(param_1 + 0x121e0) = plVar7;
    if (plStack_210 != (longlong *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    plVar7 = (longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x10);
    (**(code **)(*plVar7 + 0x10))(plVar7,&UNK_180a01928);
    *(longlong **)(*(longlong *)(param_1 + 0x121e0) + 0x170) = aplStack_228[0];
    ppuStack_1f0 = &puStack_120;
    puStack_120 = &UNK_1809fcc28;
    puStack_118 = auStack_108;
    auStack_108[0] = 0;
    uStack_110 = 0x15;
    strcpy_s(auStack_108,0x80,&UNK_180a01928);
    ppuStack_1e8 = &puStack_120;
    *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x168) = *(longlong *)(param_1 + 0x121e0);
    puVar8 = (undefined8 *)FUN_18062b420(_DAT_180c8ed18,0x10,3);
    puVar9 = puVar8;
    do {
      *puVar9 = 0;
      puVar9[1] = 0;
      iVar11 = iVar11 + 1;
      puVar9 = puVar9 + 2;
    } while (iVar11 == 0);
    *(undefined8 **)(*(longlong *)(param_1 + 0x121e0) + 0x1d8) = puVar8;
    *(undefined2 *)(*(longlong *)(param_1 + 0x121e0) + 0x332) = 1;
    lVar10 = *(longlong *)(param_1 + 0x121e0);
    *(undefined1 *)(lVar10 + 0x335) = 1;
    *(undefined4 *)(lVar10 + 0x35c) = 1;
    lVar2 = _DAT_180c86870;
    lVar10 = *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x1d8);
    if (lVar10 == 0) {
      lVar10 = 0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    *(undefined8 *)(lVar10 + 8) = uStack_218;
    lVar10 = *(longlong *)(param_1 + 0x121e0);
    *(longlong *)(lVar10 + 0x340) = (longlong)*(int *)(lVar2 + 0x224);
    LOCK();
    *(undefined4 *)(lVar10 + 0x380) = 2;
    UNLOCK();
    LOCK();
    *(undefined1 *)(lVar10 + 900) = 1;
    UNLOCK();
    FUN_18023ce10(*(undefined8 *)(param_1 + 0x121e0));
    if ((*(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x1d8) != 0) && (_DAT_180c86870 != 0)) {
      *(longlong *)(*(longlong *)(param_1 + 0x121e0) + 0x340) =
           (longlong)*(int *)(_DAT_180c86870 + 0x224);
    }
    ppuStack_1e8 = &puStack_1b8;
    puStack_1b8 = &UNK_1809fcc28;
    puStack_1b0 = auStack_1a0;
    auStack_1a0[0] = 0;
    uStack_1a8 = 0x15;
    strcpy_s(auStack_1a0,0x80,&UNK_180a01928);
    ppuStack_1f0 = &puStack_1b8;
    puStack_1b8 = &UNK_18098bcb0;
    lVar10 = *(longlong *)(param_1 + 0x121e0);
    plVar7 = *(longlong **)(lVar10 + 0x1d8);
    if (plVar7 == (longlong *)0x0) {
      plVar7 = (longlong *)0x0;
    }
    else if (_DAT_180c86870 != 0) {
      *(longlong *)(lVar10 + 0x340) = (longlong)*(int *)(_DAT_180c86870 + 0x224);
      lVar10 = *(longlong *)(param_1 + 0x121e0);
    }
    *plVar7 = lVar10;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_258);
}






// 函数: void FUN_1800aad40(longlong param_1)
void FUN_1800aad40(longlong param_1)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_1 + 0x121e0);
  *(undefined8 *)(param_1 + 0x121e0) = 0;
  if (plVar1 != (longlong *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001800aad76. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar1 + 0x38))();
    return;
  }
  return;
}



bool FUN_1800aad80(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = func_0x0001800ab000(param_2);
  return iVar1 != 0;
}



// WARNING: Removing unreachable block (ram,0x0001800ab5f9)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800ab420(longlong param_1,undefined1 *param_2)
void FUN_1800ab420(longlong param_1,undefined1 *param_2)

{
  char cVar1;
  double dVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined8 uStack_34;
  undefined8 uStack_2c;
  undefined4 uStack_24;
  undefined4 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_78;
  uStack_44 = 1;
  uStack_50 = 0;
  switch(*param_2) {
  case 1:
    uStack_50 = 1;
    break;
  case 2:
    uStack_50 = 4;
    break;
  case 3:
    uStack_50 = 5;
    break;
  case 4:
    uStack_50 = 0x10;
    break;
  case 5:
    uStack_50 = 0x11;
    break;
  case 6:
    uStack_50 = 0x14;
    break;
  case 7:
    uStack_50 = 0x15;
    break;
  case 8:
    uStack_50 = 0x55;
    break;
  case 9:
    uStack_50 = 0x80;
    break;
  case 10:
    uStack_50 = 0x95;
  }
  cVar1 = param_2[1];
  uStack_4c = 1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uStack_4c = 2;
    }
    else if (cVar1 == '\x02') {
      uStack_4c = 3;
    }
    else {
      uStack_4c = 1;
      if (cVar1 == '\x03') {
        uStack_4c = 4;
      }
    }
  }
  uStack_48 = uStack_44;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uStack_48 = 2;
    }
    else if (cVar1 == '\x02') {
      uStack_48 = 3;
    }
    else if (cVar1 == '\x03') {
      uStack_48 = 4;
    }
  }
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      uStack_44 = 2;
    }
    else if (cVar1 == '\x02') {
      uStack_44 = 3;
    }
    else if (cVar1 == '\x03') {
      uStack_44 = 4;
    }
  }
  uStack_38 = func_0x0001800ab240(param_2[3]);
  uStack_3c = *(undefined4 *)(param_2 + 4);
  uStack_34 = 0x3f8000003f800000;
  uStack_2c = 0x3f8000003f800000;
  iVar3 = *(int *)(_DAT_180c86920 + 0x540);
  fStack_40 = 0.0;
  if (iVar3 == 0) {
    if ((*(int *)(_DAT_180c86920 + 0x2140) != 0) || (100.0 <= *(float *)(_DAT_180c86920 + 0x20d0)))
    {
      cVar1 = param_2[2];
      if (cVar1 != '\0') {
        if (cVar1 == '\x01') {
          fStack_40 = -0.25;
        }
        else if (cVar1 == '\x02') {
          fStack_40 = -0.5;
        }
        else if (cVar1 == '\x03') {
          fStack_40 = -0.75;
        }
        else if (cVar1 == '\x04') {
          fStack_40 = -1.0;
        }
      }
    }
    else {
      fStack_40 = (float)log2f(100.0 / *(float *)(_DAT_180c86920 + 0x20d0));
      fStack_40 = -fStack_40;
    }
  }
  else {
    uVar4 = 0;
    if ((*(char *)(*(longlong *)(_DAT_180c86890 + 0x7ab8) + 0xd9) != '\0') && (iVar3 - 1U < 4)) {
      uVar4 = (undefined4)
              *(undefined8 *)(*(longlong *)(_DAT_180c86890 + 0x7ab8) + -8 + (longlong)iVar3 * 0x10);
    }
    dVar2 = (double)log(uVar4);
    fStack_40 = -(float)(dVar2 * 1.4426950408889634);
  }
  uStack_20 = 0x7f7fffff;
  uStack_24 = 0;
  iVar3 = (**(code **)(**(longlong **)(param_1 + 0x1d78) + 0xb8))
                    (*(longlong **)(param_1 + 0x1d78),&uStack_50,auStack_58);
  if (iVar3 < 0) {
    FUN_180220810(iVar3,&UNK_180a02440);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_78);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




