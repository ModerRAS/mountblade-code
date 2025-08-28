#include "TaleWorlds.Native.Split.h"

// 03_rendering_part241.c - 5 个函数

// 函数: void FUN_180403be0(float *param_1,char param_2,float *param_3,float param_4)
void FUN_180403be0(float *param_1,char param_2,float *param_3,float param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined4 uVar4;
  uint uVar5;
  ulonglong uVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_b8 [32];
  float afStack_98 [8];
  ulonglong uStack_78;
  
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uVar4 = (undefined4)(_DAT_180bf00a8 ^ (ulonglong)auStack_b8);
  if (param_2 == *(char *)(param_1 + 0x10)) {
    if (((*(char *)(param_1 + 0x12) == '\0') && (0.0 < param_4)) || (1.0 <= param_4)) {
      fVar12 = param_3[1];
      fVar13 = param_3[2];
      fVar23 = param_3[3];
      *param_1 = *param_3;
      param_1[1] = fVar12;
      param_1[2] = fVar13;
      param_1[3] = fVar23;
      fVar12 = param_3[5];
      fVar13 = param_3[6];
      fVar23 = param_3[7];
      param_1[4] = param_3[4];
      param_1[5] = fVar12;
      param_1[6] = fVar13;
      param_1[7] = fVar23;
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    else if (0.0 < param_4) {
      afStack_98[0] = (param_3[4] - param_1[4]) * param_4 + param_1[4];
      afStack_98[1] = (param_3[5] - param_1[5]) * param_4 + param_1[5];
      afStack_98[2] = (param_3[6] - param_1[6]) * param_4 + param_1[6];
      param_1[4] = afStack_98[0];
      param_1[5] = afStack_98[1];
      param_1[6] = afStack_98[2];
      param_1[7] = afStack_98[3];
      if (0.001 <= param_4) {
        if (param_4 <= 0.999) {
          fVar12 = *param_1;
          fVar13 = param_1[1];
          fVar23 = param_1[2];
          fVar25 = param_1[3];
          fVar10 = param_3[2] * fVar23;
          fVar11 = param_3[3] * fVar25;
          afStack_98[4] = -1.0;
          afStack_98[5] = -1.0;
          afStack_98[6] = -1.0;
          afStack_98[7] = -1.0;
          auVar14._0_4_ = fVar10 + *param_3 * fVar12;
          auVar14._4_4_ = fVar11 + param_3[1] * fVar13;
          auVar14._8_4_ = fVar10 + fVar10;
          auVar14._12_4_ = fVar11 + fVar11;
          auVar15._4_12_ = auVar14._4_12_;
          auVar15._0_4_ = auVar14._0_4_ + auVar14._4_4_;
          afStack_98[0] = 1.0;
          afStack_98[1] = 1.0;
          afStack_98[2] = 1.0;
          afStack_98[3] = 1.0;
          uVar5 = movmskps(uVar4,auVar15);
          uVar6 = (ulonglong)(uVar5 & 1);
          fVar10 = afStack_98[uVar6 * 4];
          fVar11 = afStack_98[uVar6 * 4 + 1];
          fVar18 = afStack_98[uVar6 * 4 + 2];
          fVar19 = afStack_98[uVar6 * 4 + 3];
          fVar20 = *param_3;
          fVar21 = param_3[1];
          fVar22 = param_3[2];
          fVar24 = param_3[3];
          if (0.9995 < ABS(auVar15._0_4_)) {
            fVar7 = 1.0 - param_4;
            fVar20 = fVar7 * fVar12 + param_4 * fVar10 * fVar20;
            fVar21 = fVar7 * fVar13 + param_4 * fVar11 * fVar21;
            fVar22 = fVar7 * fVar23 + param_4 * fVar18 * fVar22;
            fVar24 = fVar7 * fVar25 + param_4 * fVar19 * fVar24;
            fVar12 = fVar24 * fVar24 + fVar20 * fVar20;
            fVar13 = fVar22 * fVar22 + fVar21 * fVar21;
            fVar18 = fVar12 + fVar21 * fVar21 + fVar22 * fVar22;
            fVar19 = fVar13 + fVar20 * fVar20 + fVar24 * fVar24;
            auVar1._4_4_ = fVar12 + fVar13 + 1.1754944e-38;
            auVar1._0_4_ = fVar13 + fVar12 + 1.1754944e-38;
            auVar1._8_4_ = fVar18 + 1.1754944e-38;
            auVar1._12_4_ = fVar19 + 1.1754944e-38;
            auVar16 = rsqrtps(auVar15,auVar1);
            fVar23 = auVar16._0_4_;
            fVar25 = auVar16._4_4_;
            fVar10 = auVar16._8_4_;
            fVar11 = auVar16._12_4_;
            *param_1 = fVar20 * (3.0 - fVar23 * fVar23 * (fVar13 + fVar12)) * fVar23 * 0.5;
            param_1[1] = fVar21 * (3.0 - fVar25 * fVar25 * (fVar12 + fVar13)) * fVar25 * 0.5;
            param_1[2] = fVar22 * (3.0 - fVar10 * fVar10 * fVar18) * fVar10 * 0.5;
            param_1[3] = fVar24 * (3.0 - fVar11 * fVar11 * fVar19) * fVar11 * 0.5;
          }
          else {
            fVar7 = (float)acosf();
            fVar8 = (float)sinf();
            fVar9 = (float)sinf(fVar7 - fVar7 * param_4);
            fVar9 = fVar9 * (1.0 / fVar8);
            fVar7 = (float)sinf(fVar7 * param_4);
            fVar7 = fVar7 * (1.0 / fVar8);
            *param_1 = fVar9 * fVar12 + fVar7 * fVar10 * fVar20;
            param_1[1] = fVar9 * fVar13 + fVar7 * fVar11 * fVar21;
            param_1[2] = fVar9 * fVar23 + fVar7 * fVar18 * fVar22;
            param_1[3] = fVar9 * fVar25 + fVar7 * fVar19 * fVar24;
          }
        }
        else {
          uVar3 = *(undefined8 *)(param_3 + 2);
          *(undefined8 *)param_1 = *(undefined8 *)param_3;
          *(undefined8 *)(param_1 + 2) = uVar3;
        }
      }
      else {
        *(undefined8 *)param_1 = *(undefined8 *)param_1;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_1 + 2);
      }
    }
  }
  else if (((*(char *)((longlong)param_1 + 0x49) == '\0') && (0.0 < param_4)) || (1.0 <= param_4)) {
    fVar12 = param_3[1];
    fVar13 = param_3[2];
    fVar23 = param_3[3];
    param_1[8] = *param_3;
    param_1[9] = fVar12;
    param_1[10] = fVar13;
    param_1[0xb] = fVar23;
    fVar12 = param_3[5];
    fVar13 = param_3[6];
    fVar23 = param_3[7];
    param_1[0xc] = param_3[4];
    param_1[0xd] = fVar12;
    param_1[0xe] = fVar13;
    param_1[0xf] = fVar23;
    *(undefined1 *)((longlong)param_1 + 0x49) = 1;
  }
  else if (0.0 < param_4) {
    afStack_98[0] = (param_3[4] - param_1[0xc]) * param_4 + param_1[0xc];
    afStack_98[1] = (param_3[5] - param_1[0xd]) * param_4 + param_1[0xd];
    afStack_98[2] = (param_3[6] - param_1[0xe]) * param_4 + param_1[0xe];
    param_1[0xc] = afStack_98[0];
    param_1[0xd] = afStack_98[1];
    param_1[0xe] = afStack_98[2];
    param_1[0xf] = afStack_98[3];
    if (0.001 <= param_4) {
      if (param_4 <= 0.999) {
        fVar12 = param_1[8];
        fVar13 = param_1[9];
        fVar23 = param_1[10];
        fVar25 = param_1[0xb];
        fVar10 = fVar23 * param_3[2];
        fVar11 = fVar25 * param_3[3];
        afStack_98[4] = -1.0;
        afStack_98[5] = -1.0;
        afStack_98[6] = -1.0;
        afStack_98[7] = -1.0;
        auVar16._0_4_ = fVar10 + fVar12 * *param_3;
        auVar16._4_4_ = fVar11 + fVar13 * param_3[1];
        auVar16._8_4_ = fVar10 + fVar10;
        auVar16._12_4_ = fVar11 + fVar11;
        auVar17._4_12_ = auVar16._4_12_;
        auVar17._0_4_ = auVar16._0_4_ + auVar16._4_4_;
        afStack_98[0] = 1.0;
        afStack_98[1] = 1.0;
        afStack_98[2] = 1.0;
        afStack_98[3] = 1.0;
        uVar5 = movmskps(uVar4,auVar17);
        uVar6 = (ulonglong)(uVar5 & 1);
        fVar10 = afStack_98[uVar6 * 4];
        fVar11 = afStack_98[uVar6 * 4 + 1];
        fVar18 = afStack_98[uVar6 * 4 + 2];
        fVar19 = afStack_98[uVar6 * 4 + 3];
        fVar20 = *param_3;
        fVar21 = param_3[1];
        fVar22 = param_3[2];
        fVar24 = param_3[3];
        if (0.9995 < ABS(auVar17._0_4_)) {
          fVar7 = 1.0 - param_4;
          fVar12 = fVar7 * fVar12 + param_4 * fVar10 * fVar20;
          fVar13 = fVar7 * fVar13 + param_4 * fVar11 * fVar21;
          fVar23 = fVar7 * fVar23 + param_4 * fVar18 * fVar22;
          fVar25 = fVar7 * fVar25 + param_4 * fVar19 * fVar24;
          fVar10 = fVar25 * fVar25 + fVar12 * fVar12;
          fVar11 = fVar23 * fVar23 + fVar13 * fVar13;
          fVar22 = fVar10 + fVar13 * fVar13 + fVar23 * fVar23;
          fVar24 = fVar11 + fVar12 * fVar12 + fVar25 * fVar25;
          auVar2._4_4_ = fVar10 + fVar11 + 1.1754944e-38;
          auVar2._0_4_ = fVar11 + fVar10 + 1.1754944e-38;
          auVar2._8_4_ = fVar22 + 1.1754944e-38;
          auVar2._12_4_ = fVar24 + 1.1754944e-38;
          auVar16 = rsqrtps(auVar17,auVar2);
          fVar18 = auVar16._0_4_;
          fVar19 = auVar16._4_4_;
          fVar20 = auVar16._8_4_;
          fVar21 = auVar16._12_4_;
          fVar12 = fVar12 * (3.0 - fVar18 * fVar18 * (fVar11 + fVar10)) * fVar18 * 0.5;
          fVar13 = fVar13 * (3.0 - fVar19 * fVar19 * (fVar10 + fVar11)) * fVar19 * 0.5;
          fVar23 = fVar23 * (3.0 - fVar20 * fVar20 * fVar22) * fVar20 * 0.5;
          fVar25 = fVar25 * (3.0 - fVar21 * fVar21 * fVar24) * fVar21 * 0.5;
        }
        else {
          fVar7 = (float)acosf();
          fVar8 = (float)sinf();
          fVar9 = (float)sinf(fVar7 - fVar7 * param_4);
          fVar9 = fVar9 * (1.0 / fVar8);
          fVar7 = (float)sinf(fVar7 * param_4);
          fVar7 = fVar7 * (1.0 / fVar8);
          fVar12 = fVar9 * fVar12 + fVar7 * fVar10 * fVar20;
          fVar13 = fVar9 * fVar13 + fVar7 * fVar11 * fVar21;
          fVar23 = fVar9 * fVar23 + fVar7 * fVar18 * fVar22;
          fVar25 = fVar9 * fVar25 + fVar7 * fVar19 * fVar24;
        }
      }
      else {
        fVar12 = *param_3;
        fVar13 = param_3[1];
        fVar23 = param_3[2];
        fVar25 = param_3[3];
      }
    }
    else {
      fVar12 = param_1[8];
      fVar13 = param_1[9];
      fVar23 = param_1[10];
      fVar25 = param_1[0xb];
    }
    param_1[8] = fVar12;
    param_1[9] = fVar13;
    param_1[10] = fVar23;
    param_1[0xb] = fVar25;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180404050(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
void FUN_180404050(longlong param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
                  float param_5)

{
  longlong *plVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auVar5 [16];
  undefined4 auStack_a8 [2];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined2 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  *(undefined4 *)(param_1 + 0x18c) = param_3;
  *(undefined4 *)(param_1 + 400) = param_4;
  *(float *)(param_1 + 0x188) = param_5;
  *(undefined1 *)(param_1 + 0x194) = 0;
  plVar1 = *(longlong **)(param_1 + 0xd0);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x20))(plVar1,plVar1 != (longlong *)(param_1 + 0x98));
    *(undefined8 *)(param_1 + 0xd0) = 0;
    if (*(char *)(param_1 + 0x194) != '\0') {
      if (*(char *)(param_1 + 0x194) != '\x01') {
        return;
      }
      iVar2 = *(int *)(param_1 + 400) - *(int *)(param_1 + 0x18c);
      auVar5._0_4_ = ((float)iVar2 / param_5) * 3.0 + (float)*(int *)(param_1 + 0x18c);
      iVar4 = (int)auVar5._0_4_;
      if ((iVar4 != -0x80000000) && ((float)iVar4 != auVar5._0_4_)) {
        auVar5._4_4_ = auVar5._0_4_;
        auVar5._8_8_ = 0;
        uVar3 = movmskps(iVar2,auVar5);
        auVar5._0_4_ = (float)(int)(iVar4 + (uVar3 & 1 ^ 1));
      }
      puStack_38 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,0x10,4);
      *puStack_38 = 0;
      puStack_38[1] = 0;
      puStack_38[2] = 0;
      *(undefined4 *)(puStack_38 + 3) = 4;
      puStack_38[4] = 0;
      puStack_38[5] = 0;
      *(undefined4 *)(puStack_38 + 6) = 0;
      puStack_38[8] = 0;
      puStack_38[7] = 0;
      *(undefined4 *)(puStack_38 + 9) = 0;
      *(undefined8 *)((longlong)puStack_38 + 0x4c) = 0xffffffffffffffff;
      *(undefined4 *)((longlong)puStack_38 + 0x54) = 0;
      *(undefined8 **)(param_1 + 0x90) = puStack_38;
      uStack_a0 = 0;
      uStack_98 = 0;
      uStack_90 = 0;
      uStack_88 = 4;
      uStack_70 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      puStack_68 = &UNK_180a3c3e0;
      uStack_50 = 0;
      uStack_60 = 0;
      uStack_58 = 0;
      auStack_a8[0] = 0;
      uStack_48 = 0xffffffffffffffff;
      FUN_1804836c0(auStack_a8,*(undefined8 *)(param_1 + 0x90),param_2,
                    *(undefined4 *)(param_1 + 0x18c),(int)auVar5._0_4_,0x40400000);
      goto LAB_180404327;
    }
  }
  puStack_38 = (undefined8 *)FUN_18062b1e0(_DAT_180c8ed18,0x60,0x10,3);
  *puStack_38 = 0;
  puStack_38[1] = 0;
  puStack_38[2] = 0;
  *(undefined4 *)(puStack_38 + 3) = 4;
  puStack_38[4] = 0;
  puStack_38[5] = 0;
  *(undefined4 *)(puStack_38 + 6) = 0;
  puStack_38[8] = 0;
  puStack_38[7] = 0;
  *(undefined4 *)(puStack_38 + 9) = 0;
  *(undefined8 *)((longlong)puStack_38 + 0x4c) = 0xffffffffffffffff;
  *(undefined4 *)((longlong)puStack_38 + 0x54) = 0;
  *(undefined8 **)(param_1 + 0x88) = puStack_38;
  uStack_a0 = 0;
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_88 = 4;
  uStack_70 = 0;
  uStack_80 = 0;
  uStack_78 = 0;
  puStack_68 = &UNK_180a3c3e0;
  uStack_50 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  auStack_a8[0] = 0;
  uStack_48 = 0xffffffffffffffff;
  FUN_1804836c0(auStack_a8,*(undefined8 *)(param_1 + 0x88),param_2,*(undefined4 *)(param_1 + 0x18c),
                *(undefined4 *)(param_1 + 400),param_5);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(*(longlong *)(param_1 + 0x88) + 0x54);
LAB_180404327:
  FUN_180406500(auStack_a8);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180404350(longlong param_1)
void FUN_180404350(longlong param_1)

{
  longlong lVar1;
  longlong alStackX_8 [4];
  
  lVar1 = _DAT_180c8ed58;
  if (_DAT_180c8ed58 == 0) {
    QueryPerformanceCounter(alStackX_8);
    lVar1 = alStackX_8[0];
  }
  *(int *)(param_1 + 0x84) = (int)((double)(lVar1 - _DAT_180c8ed48) * _DAT_180c8ed50 * 100.0);
  return;
}





// 函数: void FUN_1804043b0(longlong param_1)
void FUN_1804043b0(longlong param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x194) != '\0') {
    FUN_180404350();
    LOCK();
    bVar3 = *(int *)(param_1 + 0xe0) == 0;
    if (bVar3) {
      *(int *)(param_1 + 0xe0) = 1;
    }
    UNLOCK();
    if (bVar3) {
      puVar1 = *(undefined8 **)(param_1 + 0xd0);
      if (puVar1 == (undefined8 *)0x0) {
        __Xbad_function_call_std__YAXXZ();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if ((undefined *)*puVar1 == &UNK_180a33f80) {
                    // WARNING: Could not recover jumptable at 0x000180404403. Too many branches
                    // WARNING: Treating indirect jump as call
        (*(code *)puVar1[1])(puVar1[2]);
        return;
      }
      (**(code **)((undefined *)*puVar1 + 0x10))(puVar1);
    }
  }
  return;
}



ulonglong FUN_180404420(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plStack_20;
  longlong lStack_18;
  char cStack_10;
  
  FUN_180405240(&plStack_20,param_1,0,*(char *)(param_1 + 0x194) != '\x02',0xfffffffffffffffe);
  lVar1 = plStack_20[1];
  lVar2 = *plStack_20;
  if ((cStack_10 == '\0') && (*(char *)(lStack_18 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_18 + 0xd8) = *(int *)(lStack_18 + 0xd8) + -1;
    UNLOCK();
  }
  return (lVar1 - lVar2) / 0x4a & 0xff;
}



byte FUN_1804044a0(longlong param_1)

{
  byte bVar1;
  longlong lStack_20;
  longlong lStack_18;
  char cStack_10;
  
  FUN_180405240(&lStack_20,param_1,0,*(char *)(param_1 + 0x194) != '\x02',0xfffffffffffffffe);
  bVar1 = *(byte *)(lStack_20 + 0x48);
  if ((cStack_10 == '\0') && (*(char *)(lStack_18 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_18 + 0xd8) = *(int *)(lStack_18 + 0xd8) + -1;
    UNLOCK();
  }
  return bVar1 & 1;
}



undefined4 * FUN_180404500(undefined8 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  longlong lStack_30;
  longlong lStack_28;
  char cStack_20;
  
  FUN_180405240(&lStack_30,param_1,param_3,0,0xfffffffffffffffe);
  FUN_180405670(lStack_30 + 0x20,&uStack_40,param_3);
  *param_2 = uStack_40;
  param_2[1] = uStack_3c;
  param_2[2] = uStack_38;
  param_2[3] = 0x7f7fffff;
  if ((cStack_20 == '\0') && (*(char *)(lStack_28 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_28 + 0xd8) = *(int *)(lStack_28 + 0xd8) + -1;
    UNLOCK();
  }
  return param_2;
}



float * FUN_1804045a0(undefined8 param_1,float *param_2,undefined8 param_3,char param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  ushort uVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  longlong lVar10;
  float in_XMM2_Da;
  float fVar11;
  float fVar12;
  float fVar13;
  longlong *plStack_30;
  longlong lStack_28;
  char cStack_20;
  
  FUN_180405240(&plStack_30,param_1,param_3,0,0xfffffffffffffffe);
  lVar10 = (longlong)param_4 * 0x4a;
  lVar5 = *plStack_30;
  uVar4 = *(ushort *)(lVar10 + 0x24 + lVar5);
  if (uVar4 == 0) {
    param_2[0] = 0.0;
    param_2[1] = 0.0;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
  }
  else {
    if (uVar4 < 2) {
      iVar9 = uVar4 - 1;
      fVar11 = 0.0;
      iVar7 = iVar9;
    }
    else {
      iVar9 = 0;
      iVar7 = uVar4 - 1;
      if (0 < (int)(uVar4 - 2)) {
        do {
          iVar6 = iVar7 + iVar9 >> 1;
          if (*(float *)(*(longlong *)(lVar10 + 0x1c + lVar5) + (longlong)iVar6 * 4) <= in_XMM2_Da)
          {
            iVar9 = iVar6;
            iVar6 = iVar7;
          }
          iVar7 = iVar6;
        } while (iVar9 < iVar7 + -1);
      }
      lVar8 = *(longlong *)(lVar10 + 0x1c + lVar5);
      fVar11 = *(float *)(lVar8 + (longlong)iVar9 * 4);
      fVar13 = (in_XMM2_Da - fVar11) / (*(float *)(lVar8 + (longlong)iVar7 * 4) - fVar11);
      fVar11 = 0.0;
      if ((0.0 <= fVar13) && (fVar11 = fVar13, 1.0 <= fVar13)) {
        fVar11 = 1.0;
      }
    }
    lVar5 = *(longlong *)(lVar10 + 0x14 + lVar5);
    lVar8 = (longlong)iVar7;
    fVar13 = *(float *)(lVar5 + 8 + lVar8 * 0x10);
    fVar1 = *(float *)(lVar5 + 4 + lVar8 * 0x10);
    lVar10 = (longlong)iVar9;
    fVar12 = 1.0 - fVar11;
    fVar2 = *(float *)(lVar5 + 8 + lVar10 * 0x10);
    fVar3 = *(float *)(lVar5 + 4 + lVar10 * 0x10);
    *param_2 = fVar11 * *(float *)(lVar5 + lVar8 * 0x10) +
               fVar12 * *(float *)(lVar5 + lVar10 * 0x10);
    param_2[1] = fVar12 * fVar3 + fVar11 * fVar1;
    param_2[2] = fVar12 * fVar2 + fVar11 * fVar13;
    param_2[3] = 3.4028235e+38;
  }
  if ((cStack_20 == '\0') && (*(char *)(lStack_28 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_28 + 0xd8) = *(int *)(lStack_28 + 0xd8) + -1;
    UNLOCK();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180404730(undefined8 param_1,float *param_2,float param_3,char param_4)
void FUN_180404730(undefined8 param_1,float *param_2,float param_3,char param_4)

{
  undefined8 *puVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  undefined8 in_R8;
  longlong lVar7;
  float fVar8;
  float fVar10;
  float fVar11;
  undefined1 auVar9 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auStack_158 [32];
  undefined8 uStack_138;
  undefined8 uStack_130;
  float fStack_128;
  longlong lStack_118;
  longlong lStack_110;
  char cStack_108;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_d8;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  ulonglong uStack_78;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_78 = _DAT_180bf00a8 ^ (ulonglong)auStack_158;
  FUN_180405240(&lStack_118,param_1,in_R8,0);
  puVar1 = *(undefined8 **)(lStack_118 + 0x38);
  iVar5 = *(int *)((longlong)puVar1 + 0xc) + -1;
  if ((int)(param_3 - (float)*(int *)(puVar1 + 1)) < iVar5) {
    iVar5 = (int)(param_3 - (float)*(int *)(puVar1 + 1));
  }
  lVar7 = (longlong)param_4 * 0x4a + *(longlong *)*puVar1;
  iVar5 = (*(char *)(puVar1 + 2) * iVar5 + (int)param_4) * (int)(char)*(byte *)(puVar1 + 4);
  uVar6 = iVar5 >> 0x1f & 0xf;
  iVar5 = iVar5 + uVar6;
  uVar4 = (ushort)(*(uint *)(puVar1[3] + (longlong)(iVar5 >> 4) * 2) >>
                  (((byte)iVar5 & 0xf) - (char)uVar6 & 0x1f)) &
          (1 << (*(byte *)(puVar1 + 4) & 0x1f)) - 1U;
  if ((int)(*(ushort *)(lVar7 + 0x10) - 2) < (int)(uint)uVar4) {
    FUN_18040f300(lVar7,&uStack_f8,uVar4);
    uStack_a8 = uStack_f8;
    uStack_a0 = uStack_f0;
LAB_1804049ac:
    fStack_c8 = (float)uStack_a8;
    fStack_c4 = uStack_a8._4_4_;
    fStack_c0 = (float)uStack_a0;
    fStack_bc = uStack_a0._4_4_;
  }
  else {
    uVar2 = FUN_18040eab0(lVar7,uVar4,&uStack_138,&fStack_c8);
    uStack_a8 = uStack_138;
    uStack_a0 = uStack_130;
    fVar20 = (param_3 - fStack_128) / (fStack_b8 - fStack_128);
    if (fVar20 < 0.001) goto LAB_1804049ac;
    if (fVar20 <= 0.999) {
      uStack_a8._0_4_ = (float)uStack_138;
      fVar14 = (float)uStack_a8;
      uStack_a8._4_4_ = (float)((ulonglong)uStack_138 >> 0x20);
      fVar17 = uStack_a8._4_4_;
      uStack_a0._0_4_ = (float)uStack_130;
      fVar18 = (float)uStack_a0;
      uStack_a0._4_4_ = (float)((ulonglong)uStack_130 >> 0x20);
      fVar19 = uStack_a0._4_4_;
      fVar10 = fStack_c0 * (float)uStack_a0;
      fVar11 = fStack_bc * uStack_a0._4_4_;
      fVar16 = fVar11 + fStack_c4 * uStack_a8._4_4_;
      fVar15 = fVar10 + fStack_c8 * (float)uStack_a8 + fVar16;
      uStack_a8 = 0x3f8000003f800000;
      uStack_a0 = 0x3f8000003f800000;
      uStack_98 = 0xbf800000bf800000;
      uStack_90 = 0xbf800000bf800000;
      auVar13._4_4_ = fVar16;
      auVar13._0_4_ = fVar15;
      auVar13._8_4_ = fVar10 + fVar10;
      auVar13._12_4_ = fVar11 + fVar11;
      uVar6 = movmskps(uVar2,auVar13);
      uVar3 = (ulonglong)(uVar6 & 1);
      fVar10 = *(float *)(&uStack_a8 + uVar3 * 2);
      fVar11 = *(float *)(&uStack_a0 + uVar3 * 2);
      fVar16 = *(float *)((longlong)&uStack_a8 + uVar3 * 0x10 + 4) * fStack_c4;
      fVar21 = *(float *)((longlong)&uStack_a0 + uVar3 * 0x10 + 4) * fStack_bc;
      if (0.9995 < ABS(fVar15)) {
        fVar15 = 1.0 - fVar20;
        fVar8 = fVar20 * fVar10 * fStack_c8 + fVar14 * fVar15;
        fVar17 = fVar20 * fVar16 + fVar17 * fVar15;
        fVar18 = fVar20 * fVar11 * fStack_c0 + fVar18 * fVar15;
        fVar19 = fVar20 * fVar21 + fVar19 * fVar15;
        auVar12._0_4_ = fVar19 * fVar19 + fVar8 * fVar8;
        auVar12._4_4_ = fVar18 * fVar18 + fVar17 * fVar17;
        auVar12._8_4_ = fVar17 * fVar17 + fVar18 * fVar18;
        auVar12._12_4_ = fVar8 * fVar8 + fVar19 * fVar19;
        auVar9._0_4_ = auVar12._4_4_ + auVar12._0_4_ + 1.1754944e-38;
        auVar9._4_4_ = auVar12._0_4_ + auVar12._4_4_ + 1.1754944e-38;
        auVar9._8_4_ = auVar12._0_4_ + auVar12._8_4_ + 1.1754944e-38;
        auVar9._12_4_ = auVar12._4_4_ + auVar12._12_4_ + 1.1754944e-38;
        auVar13 = rsqrtps(auVar12,auVar9);
        fVar20 = auVar13._0_4_;
        fVar10 = auVar13._4_4_;
        fVar11 = auVar13._8_4_;
        fVar14 = auVar13._12_4_;
        *param_2 = fVar8 * (3.0 - fVar20 * fVar20 * (auVar12._4_4_ + auVar12._0_4_)) * fVar20 * 0.5;
        param_2[1] = fVar17 * (3.0 - fVar10 * fVar10 * (auVar12._0_4_ + auVar12._4_4_)) *
                              fVar10 * 0.5;
        param_2[2] = fVar18 * (3.0 - fVar11 * fVar11 * (auVar12._0_4_ + auVar12._8_4_)) *
                              fVar11 * 0.5;
        param_2[3] = fVar19 * (3.0 - fVar14 * fVar14 * (auVar12._4_4_ + auVar12._12_4_)) *
                              fVar14 * 0.5;
      }
      else {
        acosf();
        fVar20 = (float)sinf();
        fVar15 = (float)sinf();
        fVar15 = fVar15 * (1.0 / fVar20);
        fVar8 = (float)sinf();
        fVar8 = fVar8 * (1.0 / fVar20);
        *param_2 = fVar8 * fVar10 * fStack_c8 + fVar14 * fVar15;
        param_2[1] = fVar8 * fVar16 + fVar17 * fVar15;
        param_2[2] = fVar8 * fVar11 * fStack_c0 + fVar18 * fVar15;
        param_2[3] = fVar8 * fVar21 + fVar19 * fVar15;
      }
      goto LAB_1804049b4;
    }
  }
  *param_2 = fStack_c8;
  param_2[1] = fStack_c4;
  param_2[2] = fStack_c0;
  param_2[3] = fStack_bc;
LAB_1804049b4:
  if ((cStack_108 == '\0') && (*(char *)(lStack_110 + 0x194) != '\0')) {
    LOCK();
    *(int *)(lStack_110 + 0xd8) = *(int *)(lStack_110 + 0xd8) + -1;
    UNLOCK();
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_158);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



