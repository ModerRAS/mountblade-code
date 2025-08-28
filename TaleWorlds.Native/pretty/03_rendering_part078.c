#include "TaleWorlds.Native.Split.h"

// 03_rendering_part078.c - 5 个函数

// 函数: void FUN_18030dcc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
void FUN_18030dcc0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,undefined8 param_7,undefined4 *param_8)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  bool bVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  longlong *plVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  longlong lVar21;
  undefined8 uVar22;
  int iVar23;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong *plStack_e8;
  longlong *plStack_e0;
  longlong *plStack_d8;
  longlong *plStack_d0;
  undefined1 auStack_c8 [8];
  undefined8 uStack_c0;
  longlong *plStack_b0;
  char cStack_a8;
  char cStack_a7;
  char cStack_a6;
  undefined4 auStack_a0 [2];
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  longlong *plStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar22 = 0;
  plStack_e8 = (longlong *)0x0;
  lStack_90 = 0;
  uVar7 = *(ulonglong *)(param_8 + 0x1c);
  if ((uVar7 != 0) && (uVar8 = *(ulonglong *)(param_8 + 0x1e), uVar8 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x1b8);
    puVar16 = *(undefined8 **)(param_1 + 0x1c8);
    puVar17 = puVar1;
    if (puVar16 == (undefined8 *)0x0) {
LAB_18030dd85:
      puVar13 = puVar1;
    }
    else {
      do {
        if (((ulonglong)puVar16[4] < uVar7) ||
           (((ulonglong)puVar16[4] <= uVar7 && ((ulonglong)puVar16[5] < uVar8)))) {
          bVar11 = true;
          puVar18 = (undefined8 *)*puVar16;
        }
        else {
          bVar11 = false;
          puVar18 = (undefined8 *)puVar16[1];
        }
        puVar13 = puVar16;
        if (bVar11) {
          puVar13 = puVar17;
        }
        puVar17 = puVar13;
        puVar16 = puVar18;
      } while (puVar18 != (undefined8 *)0x0);
      if (((puVar13 == puVar1) || (uVar7 < (ulonglong)puVar13[4])) ||
         ((uVar7 <= (ulonglong)puVar13[4] && (uVar8 < (ulonglong)puVar13[5])))) goto LAB_18030dd85;
    }
    if (puVar13 != puVar1) {
      lStack_90 = puVar13[6];
    }
  }
  uVar14 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar15 = (longlong *)FUN_180075030(uVar14,1);
  plStack_88 = plVar15;
  if (plVar15 != (longlong *)0x0) {
    plStack_e0 = plVar15;
    (**(code **)(*plVar15 + 0x28))(plVar15);
  }
  plStack_e0 = (longlong *)0x0;
  plStack_e8 = plVar15;
  (**(code **)(plVar15[2] + 0x10))(plVar15 + 2,&UNK_180a1a6b0);
  FUN_18007ea10(plVar15,1);
  FUN_18007e930(plVar15);
  plStack_d8 = (longlong *)0x0;
  plStack_d0 = (longlong *)0x0;
  plStack_e0 = (longlong *)auStack_c8;
  plStack_b0 = (longlong *)0x0;
  uStack_c0 = 0;
  auStack_c8[0] = 0;
  FUN_18022f2e0(&plStack_d8,plVar15,0);
  plStack_e0 = (longlong *)(longlong)param_5;
  if (0 < (longlong)plStack_e0) {
    uStack_78 = 0x41200000;
    uStack_74 = 0x7f7fffff;
    uStack_68 = 0;
    uStack_60 = 0x7f7fffffbf800000;
    auStack_a0[0] = 0xffffffff;
    puVar20 = (undefined4 *)(param_3 + 4);
    do {
      plVar15 = plStack_d0;
      uVar3 = *(undefined4 *)((param_2 - param_3) + (longlong)puVar20);
      uVar4 = *(undefined4 *)((param_2 - param_3) + -4 + (longlong)puVar20);
      uStack_94 = *puVar20;
      uStack_98 = puVar20[-1];
      iVar19 = (int)plStack_d0[2];
      iVar23 = iVar19 + 1;
      iVar5 = *(int *)((longlong)plStack_d0 + 0x14);
      if (iVar5 < iVar23) {
        if (iVar5 < 2) {
          *(undefined4 *)((longlong)plStack_d0 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)plStack_d0 + 0x14) = (iVar5 >> 1) + iVar5;
        }
        FUN_1800846d0(plStack_d0 + 2);
      }
      plVar12 = plStack_d0;
      *(int *)(plVar15 + 2) = iVar23;
      puVar2 = (undefined4 *)(plStack_d0[3] + (longlong)iVar19 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar3;
      puVar2[2] = uStack_78;
      puVar2[3] = uStack_74;
      uStack_80 = uVar4;
      uStack_7c = uVar3;
      if ((int)plStack_d0[7] != 0) {
        iVar5 = *(int *)((longlong)plStack_d0 + 0x3c);
        if (iVar5 < iVar23) {
          if (iVar5 < 2) {
            *(undefined4 *)((longlong)plStack_d0 + 0x3c) = 8;
          }
          else {
            *(int *)((longlong)plStack_d0 + 0x3c) = (iVar5 >> 1) + iVar5;
          }
          FUN_1800846d0(plStack_d0 + 7);
        }
        *(int *)(plVar12 + 7) = iVar23;
        puVar2 = (undefined4 *)(plStack_d0[8] + (longlong)iVar19 * 0x10);
        *puVar2 = uVar4;
        puVar2[1] = uVar3;
        puVar2[2] = 0x41200000;
        puVar2[3] = 0x7f7fffff;
      }
      cStack_a8 = '\x01';
      cStack_a6 = '\x01';
      FUN_1802350e0(&plStack_d8,iVar19,&uStack_98,auStack_a0,&uStack_68);
      puVar20 = puVar20 + 2;
      plStack_e0 = (longlong *)((longlong)plStack_e0 + -1);
    } while (plStack_e0 != (longlong *)0x0);
    plStack_e0 = (longlong *)0x0;
    plVar15 = plStack_88;
  }
  iVar19 = param_6 / 3 + (param_6 >> 0x1f) +
           (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar21 = (longlong)iVar19;
  if (0 < iVar19) {
    puVar20 = (undefined4 *)(param_4 + 4);
    do {
      FUN_180235410(&plStack_d8,puVar20[-1],*puVar20,puVar20[1]);
      puVar20 = puVar20 + 3;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
  }
  if ((plStack_d8 != (longlong *)0x0) && (plStack_d0 != (longlong *)0x0)) {
    if (cStack_a6 != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_c8);
    if (cStack_a8 != '\0') {
      FUN_180079520(plStack_d8);
    }
    if (cStack_a7 != '\0') {
      FUN_180079520(plStack_d8);
    }
    plVar12 = plStack_d0;
    plStack_d0 = (longlong *)0x0;
    if (plVar12 != (longlong *)0x0) {
      (**(code **)(*plVar12 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_c8);
  if (plStack_b0 != (longlong *)0x0) {
    (**(code **)(*plStack_b0 + 0x38))();
  }
  if (plStack_d0 != (longlong *)0x0) {
    (**(code **)(*plStack_d0 + 0x38))();
  }
  if (plStack_d8 != (longlong *)0x0) {
    (**(code **)(*plStack_d8 + 0x38))();
  }
  lVar21 = lStack_90;
  if (lStack_90 != 0) {
    FUN_1800b88d0(lStack_90,&plStack_e8);
    *(int *)(lVar21 + 0x20) = *(int *)(lVar21 + 0x20) + 1;
    plVar15 = plStack_e8;
LAB_18030e1fe:
    FUN_180076910(plVar15,param_7);
    uVar6 = param_8[4];
    *(float *)(plVar15 + 0x47) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
    *(float *)((longlong)plVar15 + 0x23c) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    *(float *)(plVar15 + 0x48) = (float)(uVar6 & 0xff) * 0.003921569;
    *(float *)((longlong)plVar15 + 0x244) = (float)(uVar6 >> 0x18) * 0.003921569;
    uVar3 = param_8[6];
    uVar4 = param_8[5];
    lVar21 = plVar15[0x59];
    *(undefined4 *)(lVar21 + 0xa0) = param_8[0x15];
    *(undefined4 *)(lVar21 + 0xa4) = 0;
    *(undefined4 *)(lVar21 + 0xa8) = uVar4;
    *(undefined4 *)(lVar21 + 0xac) = uVar3;
    uVar22 = *(undefined8 *)(param_8 + 0xe);
    lVar21 = plVar15[0x59];
    *(undefined8 *)(lVar21 + 0x10) = *(undefined8 *)(param_8 + 0xc);
    *(undefined8 *)(lVar21 + 0x18) = uVar22;
    uVar6 = param_8[0x10];
    lVar21 = plVar15[0x59];
    *(float *)(lVar21 + 0x70) = (float)(uVar6 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x74) = (float)(uVar6 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x78) = (float)(uVar6 & 0xff) * 0.003921569;
    *(float *)(lVar21 + 0x7c) = (float)(uVar6 >> 0x18) * 0.003921569;
    uVar22 = *(undefined8 *)(param_8 + 0x13);
    lVar21 = plVar15[0x59];
    *(undefined8 *)(lVar21 + 0x80) = *(undefined8 *)(param_8 + 0x11);
    *(undefined8 *)(lVar21 + 0x88) = uVar22;
    uVar22 = *(undefined8 *)(param_8 + 0x18);
    lVar21 = plVar15[0x59];
    *(undefined8 *)(lVar21 + 0x90) = *(undefined8 *)(param_8 + 0x16);
    *(undefined8 *)(lVar21 + 0x98) = uVar22;
    uVar3 = param_8[8];
    lVar21 = plVar15[0x59];
    *(undefined4 *)(lVar21 + 0x60) = param_8[7];
    *(undefined4 *)(lVar21 + 100) = uVar3;
    *(undefined4 *)(lVar21 + 0x68) = 0;
    *(undefined4 *)(lVar21 + 0x6c) = 0;
    uVar3 = param_8[1];
    uVar4 = *param_8;
    uVar10 = param_8[3];
    lVar21 = plVar15[0x59];
    *(undefined4 *)(lVar21 + 0x50) = param_8[2];
    *(undefined4 *)(lVar21 + 0x54) = uVar10;
    *(undefined4 *)(lVar21 + 0x58) = uVar4;
    *(undefined4 *)(lVar21 + 0x5c) = uVar3;
    uVar3 = param_8[10];
    uVar4 = param_8[0xb];
    lVar21 = plVar15[0x59];
    *(undefined4 *)(lVar21 + 0x20) = param_8[9];
    *(undefined4 *)(lVar21 + 0x24) = uVar3;
    *(undefined4 *)(lVar21 + 0x28) = uVar4;
    *(undefined4 *)(lVar21 + 0x2c) = 0;
    FUN_18030d6e0(param_1,plVar15,param_8[0x1a]);
                    // WARNING: Could not recover jumptable at 0x00018030e481. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*plVar15 + 0x38))(plVar15);
    return;
  }
  if ((*(longlong *)(param_8 + 0x1c) == 0) || (*(longlong *)(param_8 + 0x1e) == 0))
  goto LAB_18030e1fe;
  puVar16 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,3);
  *puVar16 = 0;
  puVar16[1] = 0;
  puVar16[2] = 0;
  *(undefined4 *)(puVar16 + 3) = 3;
  puVar16[4] = 0;
  puVar1 = (undefined8 *)(param_1 + 0x1b8);
  uVar14 = *(undefined8 *)(param_8 + 0x1c);
  uVar9 = *(undefined8 *)(param_8 + 0x1e);
  plStack_88 = puVar16;
  lVar21 = FUN_18062b420(_DAT_180c8ed18,0x38,*(undefined1 *)(param_1 + 0x1e0));
  uStack_f8 = (undefined4)uVar14;
  uStack_f4 = (undefined4)((ulonglong)uVar14 >> 0x20);
  uStack_f0 = (undefined4)uVar9;
  uStack_ec = (undefined4)((ulonglong)uVar9 >> 0x20);
  *(undefined4 *)(lVar21 + 0x20) = uStack_f8;
  *(undefined4 *)(lVar21 + 0x24) = uStack_f4;
  *(undefined4 *)(lVar21 + 0x28) = uStack_f0;
  *(undefined4 *)(lVar21 + 0x2c) = uStack_ec;
  *(undefined8 **)(lVar21 + 0x30) = puVar16;
  bVar11 = true;
  puVar16 = puVar1;
  if (*(undefined8 **)(param_1 + 0x1c8) != (undefined8 *)0x0) {
    puVar17 = *(undefined8 **)(param_1 + 0x1c8);
    do {
      puVar16 = puVar17;
      if ((*(ulonglong *)(lVar21 + 0x20) < (ulonglong)puVar16[4]) ||
         ((*(ulonglong *)(lVar21 + 0x20) <= (ulonglong)puVar16[4] &&
          (*(ulonglong *)(lVar21 + 0x28) < (ulonglong)puVar16[5])))) {
        bVar11 = true;
        puVar17 = (undefined8 *)puVar16[1];
      }
      else {
        bVar11 = false;
        puVar17 = (undefined8 *)*puVar16;
      }
    } while (puVar17 != (undefined8 *)0x0);
  }
  puVar17 = puVar16;
  if (bVar11) {
    if (puVar16 == *(undefined8 **)(param_1 + 0x1c0)) goto LAB_18030e1b3;
    puVar17 = (undefined8 *)func_0x00018066b9a0(puVar16);
  }
  if ((*(ulonglong *)(lVar21 + 0x20) <= (ulonglong)puVar17[4]) &&
     ((*(ulonglong *)(lVar21 + 0x20) < (ulonglong)puVar17[4] ||
      (*(ulonglong *)(lVar21 + 0x28) <= (ulonglong)puVar17[5])))) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar21);
  }
LAB_18030e1b3:
  if (puVar16 != puVar1) {
    if (((ulonglong)puVar16[4] <= *(ulonglong *)(lVar21 + 0x20)) &&
       (((ulonglong)puVar16[4] < *(ulonglong *)(lVar21 + 0x20) ||
        ((ulonglong)puVar16[5] <= *(ulonglong *)(lVar21 + 0x28))))) {
      uVar22 = 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar21,puVar16,puVar1,uVar22);
}



undefined8 FUN_18030e490(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  ulonglong uVar15;
  longlong *plVar16;
  longlong *plVar17;
  uint7 uVar19;
  undefined4 *puVar18;
  undefined8 uVar20;
  
  uVar20 = 0xfffffffffffffffe;
  plVar16 = (longlong *)0x0;
  uVar5 = *(ulonglong *)(param_3 + 0x1c);
  plVar17 = plVar16;
  if ((uVar5 != 0) && (uVar15 = *(ulonglong *)(param_3 + 0x1e), uVar15 != 0)) {
    puVar1 = (undefined8 *)(param_1 + 0x1b8);
    puVar13 = *(undefined8 **)(param_1 + 0x1c8);
    puVar11 = puVar1;
    puVar18 = param_3;
    if (puVar13 == (undefined8 *)0x0) {
LAB_18030e535:
      puVar12 = puVar1;
    }
    else {
      do {
        uVar6 = puVar13[4];
        uVar19 = (uint7)(uVar6 >> 8);
        if ((uVar6 < uVar5) || ((uVar6 <= uVar5 && ((ulonglong)puVar13[5] < uVar15)))) {
          puVar18 = (undefined4 *)CONCAT71(uVar19,1);
          puVar14 = (undefined8 *)*puVar13;
        }
        else {
          puVar18 = (undefined4 *)((ulonglong)uVar19 << 8);
          puVar14 = (undefined8 *)puVar13[1];
        }
        puVar12 = puVar13;
        if ((char)puVar18 != '\0') {
          puVar12 = puVar11;
        }
        puVar11 = puVar12;
        puVar13 = puVar14;
      } while (puVar14 != (undefined8 *)0x0);
      if (((puVar12 == puVar1) || (uVar5 < (ulonglong)puVar12[4])) ||
         ((uVar5 <= (ulonglong)puVar12[4] && (uVar15 < (ulonglong)puVar12[5])))) goto LAB_18030e535;
    }
    if ((puVar12 != puVar1) &&
       (plVar7 = (longlong *)puVar12[6], plVar17 = (longlong *)0x0, plVar7 != (longlong *)0x0)) {
      uVar15 = (ulonglong)(int)plVar7[4];
      if (uVar15 < (ulonglong)(plVar7[1] - *plVar7 >> 3)) {
        plVar16 = *(longlong **)(*plVar7 + uVar15 * 8);
        if (plVar16 != (longlong *)0x0) {
          (**(code **)(*plVar16 + 0x28))(plVar16,uVar15,puVar18,uVar5,0xfffffffffffffffe);
        }
        *(int *)(plVar7 + 4) = (int)plVar7[4] + 1;
      }
      *(undefined4 *)((longlong)plVar7 + 0x24) = 0;
      plVar17 = plVar16;
      if (plVar16 != (longlong *)0x0) {
        FUN_180076910(plVar16,param_2);
        uVar4 = param_3[4];
        *(float *)(plVar16 + 0x47) = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
        *(float *)((longlong)plVar16 + 0x23c) = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
        *(float *)(plVar16 + 0x48) = (float)(uVar4 & 0xff) * 0.003921569;
        *(float *)((longlong)plVar16 + 0x244) = (float)(uVar4 >> 0x18) * 0.003921569;
        uVar2 = param_3[6];
        uVar3 = param_3[5];
        lVar8 = plVar16[0x59];
        *(undefined4 *)(lVar8 + 0xa0) = param_3[0x15];
        *(undefined4 *)(lVar8 + 0xa4) = 0;
        *(undefined4 *)(lVar8 + 0xa8) = uVar3;
        *(undefined4 *)(lVar8 + 0xac) = uVar2;
        uVar10 = *(undefined8 *)(param_3 + 0xe);
        lVar8 = plVar16[0x59];
        *(undefined8 *)(lVar8 + 0x10) = *(undefined8 *)(param_3 + 0xc);
        *(undefined8 *)(lVar8 + 0x18) = uVar10;
        uVar4 = param_3[0x10];
        lVar8 = plVar16[0x59];
        *(float *)(lVar8 + 0x70) = (float)(uVar4 >> 0x10 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x74) = (float)(uVar4 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x78) = (float)(uVar4 & 0xff) * 0.003921569;
        *(float *)(lVar8 + 0x7c) = (float)(uVar4 >> 0x18) * 0.003921569;
        uVar10 = *(undefined8 *)(param_3 + 0x13);
        lVar8 = plVar16[0x59];
        *(undefined8 *)(lVar8 + 0x80) = *(undefined8 *)(param_3 + 0x11);
        *(undefined8 *)(lVar8 + 0x88) = uVar10;
        uVar10 = *(undefined8 *)(param_3 + 0x18);
        lVar8 = plVar16[0x59];
        *(undefined8 *)(lVar8 + 0x90) = *(undefined8 *)(param_3 + 0x16);
        *(undefined8 *)(lVar8 + 0x98) = uVar10;
        uVar2 = param_3[8];
        lVar8 = plVar16[0x59];
        *(undefined4 *)(lVar8 + 0x60) = param_3[7];
        *(undefined4 *)(lVar8 + 100) = uVar2;
        *(undefined4 *)(lVar8 + 0x68) = 0;
        *(undefined4 *)(lVar8 + 0x6c) = 0;
        uVar2 = param_3[1];
        uVar3 = *param_3;
        uVar9 = param_3[3];
        uVar10 = *(undefined8 *)(param_3 + 2);
        lVar8 = plVar16[0x59];
        *(undefined4 *)(lVar8 + 0x50) = param_3[2];
        *(undefined4 *)(lVar8 + 0x54) = uVar9;
        *(undefined4 *)(lVar8 + 0x58) = uVar3;
        *(undefined4 *)(lVar8 + 0x5c) = uVar2;
        uVar2 = param_3[0xb];
        uVar3 = param_3[10];
        uVar9 = param_3[0xb];
        lVar8 = plVar16[0x59];
        *(undefined4 *)(lVar8 + 0x20) = param_3[9];
        *(undefined4 *)(lVar8 + 0x24) = uVar3;
        *(undefined4 *)(lVar8 + 0x28) = uVar9;
        *(undefined4 *)(lVar8 + 0x2c) = 0;
        FUN_18030d6e0(param_1,plVar16,param_3[0x1a],uVar2,uVar20,uVar10);
        uVar20 = 1;
        goto LAB_18030e7dc;
      }
    }
  }
  uVar20 = 0;
LAB_18030e7dc:
  if (plVar17 != (longlong *)0x0) {
    (**(code **)(*plVar17 + 0x38))(plVar17);
  }
  return uVar20;
}





// 函数: void FUN_18030e800(longlong param_1)
void FUN_18030e800(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  lVar1 = *(longlong *)(param_1 + 0x130);
  uVar8 = 0;
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (*(longlong *)(param_1 + 0x138) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar1);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(undefined1 *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(longlong *)(param_1 + 0x130);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x138) - lVar1 >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x150);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (*(longlong *)(param_1 + 0x158) - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar1);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(undefined1 *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(longlong *)(param_1 + 0x150);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x158) - lVar1 >> 3));
  }
  lVar1 = *(longlong *)(param_1 + 0x178);
  lVar2 = *(longlong *)(param_1 + 0x170);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar2);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(undefined1 *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar1 = *(longlong *)(param_1 + 0x178);
      uVar3 = (int)uVar4 + 1;
      lVar2 = *(longlong *)(param_1 + 0x170);
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 < (ulonglong)(lVar1 - lVar2 >> 3));
  }
  uVar4 = uVar8;
  uVar6 = uVar8;
  if (lVar1 - lVar2 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(uVar6 + lVar2);
      if (*(char *)(lVar1 + 0xf9) != '\0') {
        if (*(longlong *)(lVar1 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        *(undefined8 *)(lVar1 + 0x1d8) = 0;
        LOCK();
        *(undefined1 *)(lVar1 + 0xf9) = 0;
        UNLOCK();
      }
      lVar2 = *(longlong *)(param_1 + 0x170);
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)(*(longlong *)(param_1 + 0x178) - lVar2 >> 3));
  }
  lVar1 = **(longlong **)(param_1 + 0x110);
  uVar4 = uVar8;
  uVar6 = uVar8;
  if ((*(longlong **)(param_1 + 0x110))[1] - lVar1 >> 3 != 0) {
    do {
      lVar1 = *(longlong *)(lVar1 + uVar6);
      lVar2 = *(longlong *)(lVar1 + 8);
      uVar5 = uVar8;
      uVar7 = uVar8;
      if (*(longlong *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
        do {
          lVar2 = *(longlong *)(uVar7 + lVar2);
          if (*(char *)(lVar2 + 0xf9) != '\0') {
            if (*(longlong *)(lVar2 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900();
            }
            *(undefined8 *)(lVar2 + 0x1d8) = 0;
            LOCK();
            *(undefined1 *)(lVar2 + 0xf9) = 0;
            UNLOCK();
          }
          lVar2 = *(longlong *)(lVar1 + 8);
          uVar3 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar3;
          uVar7 = uVar7 + 8;
        } while ((ulonglong)(longlong)(int)uVar3 <
                 (ulonglong)(*(longlong *)(lVar1 + 0x10) - lVar2 >> 3));
      }
      uVar3 = (int)uVar4 + 1;
      lVar1 = **(longlong **)(param_1 + 0x110);
      uVar4 = (ulonglong)uVar3;
      uVar6 = uVar6 + 8;
    } while ((ulonglong)(longlong)(int)uVar3 <
             (ulonglong)((*(longlong **)(param_1 + 0x110))[1] - lVar1 >> 3));
  }
  return;
}





// 函数: void FUN_18030ea24(undefined8 param_1,longlong param_2)
void FUN_18030ea24(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  int unaff_R12D;
  ulonglong unaff_R13;
  longlong unaff_R14;
  ulonglong uVar6;
  
  uVar6 = unaff_R13;
  do {
    lVar1 = *(longlong *)(param_2 + uVar6);
    uVar4 = unaff_R13 & 0xffffffff;
    lVar2 = *(longlong *)(lVar1 + 8);
    uVar5 = unaff_R13;
    if (*(longlong *)(lVar1 + 0x10) - lVar2 >> 3 != 0) {
      do {
        lVar2 = *(longlong *)(uVar5 + lVar2);
        if (*(char *)(lVar2 + 0xf9) != '\0') {
          if (*(longlong *)(lVar2 + 0x1d8) != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          *(ulonglong *)(lVar2 + 0x1d8) = unaff_R13;
          LOCK();
          *(char *)(lVar2 + 0xf9) = (char)unaff_R13;
          UNLOCK();
        }
        lVar2 = *(longlong *)(lVar1 + 8);
        uVar3 = (int)uVar4 + 1;
        uVar4 = (ulonglong)uVar3;
        uVar5 = uVar5 + 8;
      } while ((ulonglong)(longlong)(int)uVar3 <
               (ulonglong)(*(longlong *)(lVar1 + 0x10) - lVar2 >> 3));
    }
    unaff_R12D = unaff_R12D + 1;
    uVar6 = uVar6 + 8;
    param_2 = **(longlong **)(unaff_R14 + 0x110);
  } while ((ulonglong)(longlong)unaff_R12D <
           (ulonglong)((*(longlong **)(unaff_R14 + 0x110))[1] - param_2 >> 3));
  return;
}





// 函数: void FUN_18030eacf(void)
void FUN_18030eacf(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030eaf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
void FUN_18030eaf0(longlong param_1,longlong param_2,longlong param_3,longlong param_4,int param_5,
                  int param_6,undefined8 param_7,longlong param_8)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 *puVar10;
  longlong lVar11;
  int iVar12;
  longlong *plStack_c8;
  longlong *plStack_c0;
  undefined1 auStack_b8 [8];
  undefined8 uStack_b0;
  longlong *plStack_a0;
  char cStack_98;
  char cStack_97;
  char cStack_96;
  longlong *plStack_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uStack_70 = 0xfffffffffffffffe;
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0x300,0x10,3);
  plVar8 = (longlong *)FUN_180075030(uVar7,1);
  plStack_90 = plVar8;
  if (plVar8 != (longlong *)0x0) {
    (**(code **)(*plVar8 + 0x28))(plVar8);
  }
  (**(code **)(plVar8[2] + 0x10))(plVar8 + 2,&UNK_180a1a6f0);
  if (*(char *)((longlong)plVar8 + 0xfb) != '\x01') {
    *(undefined1 *)((longlong)plVar8 + 0xfb) = 1;
    FUN_180079520(plVar8);
  }
  if (*(char *)((longlong)plVar8 + 0xfa) != '\x01') {
    *(undefined1 *)((longlong)plVar8 + 0xfa) = 1;
    FUN_180079520(plVar8);
  }
  plStack_c8 = (longlong *)0x0;
  plStack_c0 = (longlong *)0x0;
  uStack_88 = auStack_b8;
  plStack_a0 = (longlong *)0x0;
  uStack_b0 = 0;
  auStack_b8[0] = 0;
  FUN_18022f2e0(&plStack_c8,plVar8,0);
  lVar11 = (longlong)param_5;
  if (0 < lVar11) {
    uStack_78 = 0x41200000;
    uStack_74 = 0x7f7fffff;
    uStack_68 = 0;
    uStack_60 = 0x7f7fffffbf800000;
    param_5 = -1;
    puVar10 = (undefined4 *)(param_3 + 4);
    do {
      plVar8 = plStack_c0;
      uVar2 = *(undefined4 *)((param_2 - param_3) + (longlong)puVar10);
      uVar3 = *(undefined4 *)((param_2 - param_3) + -4 + (longlong)puVar10);
      uStack_88 = (undefined1 *)CONCAT44(*puVar10,puVar10[-1]);
      iVar9 = (int)plStack_c0[2];
      iVar12 = iVar9 + 1;
      iVar4 = *(int *)((longlong)plStack_c0 + 0x14);
      if (iVar4 < iVar12) {
        if (iVar4 < 2) {
          *(undefined4 *)((longlong)plStack_c0 + 0x14) = 8;
        }
        else {
          *(int *)((longlong)plStack_c0 + 0x14) = (iVar4 >> 1) + iVar4;
        }
        FUN_1800846d0(plStack_c0 + 2);
      }
      plVar6 = plStack_c0;
      *(int *)(plVar8 + 2) = iVar12;
      puVar1 = (undefined4 *)(plStack_c0[3] + (longlong)iVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar2;
      puVar1[2] = uStack_78;
      puVar1[3] = uStack_74;
      uStack_80 = uVar3;
      uStack_7c = uVar2;
      if ((int)plStack_c0[7] != 0) {
        iVar4 = *(int *)((longlong)plStack_c0 + 0x3c);
        if (iVar4 < iVar12) {
          if (iVar4 < 2) {
            *(undefined4 *)((longlong)plStack_c0 + 0x3c) = 8;
          }
          else {
            *(int *)((longlong)plStack_c0 + 0x3c) = (iVar4 >> 1) + iVar4;
          }
          FUN_1800846d0(plStack_c0 + 7);
        }
        *(int *)(plVar6 + 7) = iVar12;
        puVar1 = (undefined4 *)(plStack_c0[8] + (longlong)iVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar2;
        puVar1[2] = 0x41200000;
        puVar1[3] = 0x7f7fffff;
      }
      cStack_98 = '\x01';
      cStack_96 = '\x01';
      FUN_1802350e0(&plStack_c8,iVar9,&uStack_88,&param_5,&uStack_68);
      puVar10 = puVar10 + 2;
      lVar11 = lVar11 + -1;
      plVar8 = plStack_90;
    } while (lVar11 != 0);
  }
  iVar9 = param_6 / 3 + (param_6 >> 0x1f) +
          (int)(((longlong)param_6 / 3 + ((longlong)param_6 >> 0x3f) & 0xffffffffU) >> 0x1f);
  lVar11 = (longlong)iVar9;
  if (0 < iVar9) {
    puVar10 = (undefined4 *)(param_4 + 4);
    do {
      FUN_180235410(&plStack_c8,puVar10[-1],*puVar10,puVar10[1]);
      puVar10 = puVar10 + 3;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  if ((plStack_c8 != (longlong *)0x0) && (plStack_c0 != (longlong *)0x0)) {
    if (cStack_96 != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_b8);
    if (cStack_98 != '\0') {
      FUN_180079520(plStack_c8);
    }
    if (cStack_97 != '\0') {
      FUN_180079520(plStack_c8);
    }
    plVar6 = plStack_c0;
    plStack_c0 = (longlong *)0x0;
    if (plVar6 != (longlong *)0x0) {
      (**(code **)(*plVar6 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_b8);
  if (plStack_a0 != (longlong *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  if (plStack_c0 != (longlong *)0x0) {
    (**(code **)(*plStack_c0 + 0x38))();
  }
  if (plStack_c8 != (longlong *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  FUN_180076910(plVar8,param_7);
  lVar11 = param_8;
  uVar5 = *(uint *)(param_8 + 0x20);
  *(float *)(plVar8 + 0x47) = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
  *(float *)((longlong)plVar8 + 0x23c) = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
  *(float *)(plVar8 + 0x48) = (float)(uVar5 & 0xff) * 0.003921569;
  *(float *)((longlong)plVar8 + 0x244) = (float)(uVar5 >> 0x18) * 0.003921569;
  if (plVar8[0x59] != 0) {
    FUN_18030ef70(uVar5,plVar8,param_8);
    FUN_1800b88d0((longlong)*(int *)(param_1 + 0x124) * 0x20 + 0x170 + param_1,&plStack_90);
    plVar8 = plStack_90;
    FUN_18030d6e0(param_1,plStack_90,*(undefined4 *)(lVar11 + 0x60));
    if (plVar8 != (longlong *)0x0) {
      (**(code **)(*plVar8 + 0x38))(plVar8);
    }
    return;
  }
  *(uint *)(plVar8 + 0x20) = *(uint *)(plVar8 + 0x20) | 8;
  uVar7 = FUN_18062b1e0(_DAT_180c8ed18,0xd0,4,9);
                    // WARNING: Subroutine does not return
  memset(uVar7,0,0xd0);
}





