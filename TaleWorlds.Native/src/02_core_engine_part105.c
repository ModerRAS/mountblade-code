#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part105.c - 7 个函数

// 函数: void FUN_1801224c0(longlong param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
void FUN_1801224c0(longlong param_1,float *param_2,float *param_3,longlong param_4,longlong param_5,
                  longlong *param_6,float *param_7,float *param_8)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  bool bVar5;
  byte bVar6;
  longlong lVar7;
  uint uVar8;
  float *pfVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uStackX_10;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  lVar7 = _DAT_180c8a9b0;
  uStackX_10 = *(undefined8 *)param_2;
  fVar11 = (float)uStackX_10;
  fVar13 = (float)((ulonglong)uStackX_10 >> 0x20);
  if (param_6 == (longlong *)0x0) {
    fVar2 = *(float *)(_DAT_180c8a9b0 + 0x19f8);
    pfVar9 = *(float **)(_DAT_180c8a9b0 + 0x19f0);
    if (param_4 == param_5) {
      param_6 = (longlong *)((ulonglong)(uint)fVar2 << 0x20);
    }
    else {
      FUN_180297340(pfVar9,&uStack_98,fVar2,0x7f7fffff,0,param_4,param_5,0);
      fVar12 = (float)uStack_98;
      if (0.0 < (float)uStack_98) {
        fVar12 = (float)uStack_98 - fVar2 / *pfVar9;
      }
      param_6 = (longlong *)
                CONCAT44((int)((ulonglong)uStack_98 >> 0x20),(float)(int)(fVar12 + 0.95));
    }
  }
  else {
    param_6 = (longlong *)*param_6;
  }
  pfVar9 = param_8;
  if (param_8 == (float *)0x0) {
    pfVar9 = param_2;
  }
  pfVar10 = param_8 + 2;
  if (param_8 == (float *)0x0) {
    pfVar10 = param_3;
  }
  fVar2 = *pfVar10;
  if ((fVar2 <= param_6._0_4_ + fVar11) || (pfVar10[1] <= param_6._4_4_ + fVar13)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  if (param_8 != (float *)0x0) {
    if ((fVar11 < *pfVar9) || (fVar13 < pfVar9[1])) {
      bVar6 = 1;
    }
    else {
      bVar6 = 0;
    }
    bVar5 = (bool)(bVar5 | bVar6);
  }
  if ((0.0 < *param_7) &&
     (fVar12 = ((*param_3 - fVar11) - param_6._0_4_) * *param_7 + fVar11, fVar11 < fVar12)) {
    uStackX_10 = CONCAT44(fVar13,fVar12);
    fVar11 = fVar12;
  }
  if ((0.0 < param_7[1]) &&
     (fVar12 = ((param_3[1] - fVar13) - param_6._4_4_) * param_7[1] + fVar13, fVar13 < fVar12)) {
    fVar11 = (float)uStackX_10;
    fVar13 = fVar12;
  }
  uStack_98 = *(undefined8 *)(lVar7 + 0x16c8);
  uStack_90 = CONCAT44(*(float *)(lVar7 + 0x16d4) * *(float *)(lVar7 + 0x1628),
                       *(undefined4 *)(lVar7 + 0x16d0));
  if (bVar5) {
    fVar12 = pfVar9[1];
    fVar3 = pfVar10[1];
    fVar4 = *pfVar9;
    uVar8 = func_0x000180121e20(&uStack_98);
    if ((uVar8 & 0xff000000) != 0) {
      if (param_5 == 0) {
        param_5 = -1;
        do {
          param_5 = param_5 + 1;
        } while (*(char *)(param_4 + param_5) != '\0');
        param_5 = param_5 + param_4;
      }
      if (param_4 != param_5) {
        pfVar9 = (float *)(*(longlong *)(param_1 + 0x68) + -0x10 +
                          (longlong)*(int *)(param_1 + 0x60) * 0x10);
        uStack_98._0_4_ = *pfVar9;
        if (*pfVar9 < fVar4) {
          uStack_98._0_4_ = fVar4;
        }
        uStack_98._4_4_ = pfVar9[1];
        if (pfVar9[1] < fVar12) {
          uStack_98._4_4_ = fVar12;
        }
        uStack_90._0_4_ = pfVar9[2];
        if (fVar2 <= pfVar9[2]) {
          uStack_90._0_4_ = fVar2;
        }
        uStack_90._4_4_ = pfVar9[3];
        if (fVar3 <= pfVar9[3]) {
          uStack_90._4_4_ = fVar3;
        }
        FUN_180297590(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),param_1,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x10),CONCAT44(fVar13,fVar11),
                      uVar8,&uStack_98,param_4,param_5,0,1);
      }
    }
  }
  else {
    uVar8 = func_0x000180121e20(&uStack_98);
    if ((uVar8 & 0xff000000) != 0) {
      if (param_5 == 0) {
        param_5 = -1;
        do {
          param_5 = param_5 + 1;
        } while (*(char *)(param_4 + param_5) != '\0');
        param_5 = param_5 + param_4;
      }
      if (param_4 != param_5) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(param_1 + 0x68) + -0x10 + (longlong)*(int *)(param_1 + 0x60) * 0x10)
        ;
        uStack_98 = *puVar1;
        uStack_90 = puVar1[1];
        FUN_180297590(*(undefined8 *)(*(longlong *)(param_1 + 0x38) + 8),param_1,
                      *(undefined4 *)(*(longlong *)(param_1 + 0x38) + 0x10),CONCAT44(fVar13,fVar11),
                      uVar8,&uStack_98,param_4,param_5,0,0);
      }
    }
  }
  return;
}





// 函数: void FUN_180122503(undefined8 param_1,float *param_2,float *param_3)
void FUN_180122503(undefined8 param_1,float *param_2,float *param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  longlong in_RAX;
  float *pfVar16;
  longlong unaff_RBX;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float *pfVar18;
  undefined8 unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  float fVar19;
  float fVar20;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  
  *(undefined8 *)(in_RAX + 0x18) = unaff_R12;
  *(undefined8 *)(in_RAX + 0x20) = unaff_R14;
  *(ulonglong *)(unaff_RBP + 0x4f) = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  if (*(undefined8 **)(unaff_RBP + 0x6f) == (undefined8 *)0x0) {
    fVar2 = *(float *)(unaff_R15 + 0x19f8);
    pfVar4 = *(float **)(unaff_R15 + 0x19f0);
    if (unaff_RDI == unaff_RBX) {
      *(float *)(unaff_RBP + 0x73) = fVar2;
      *(undefined4 *)(unaff_RBP + 0x6f) = 0;
    }
    else {
      FUN_180297340(pfVar4,unaff_RBP + -0x59,fVar2,0x7f7fffff);
      fVar19 = *(float *)(unaff_RBP + -0x59);
      if (unaff_XMM10_Da < fVar19) {
        fVar19 = fVar19 - fVar2 / *pfVar4;
      }
      *(undefined4 *)(unaff_RBP + 0x73) = *(undefined4 *)(unaff_RBP + -0x55);
      *(float *)(unaff_RBP + 0x6f) = (float)(int)(fVar19 + 0.95);
    }
  }
  else {
    *(undefined8 *)(unaff_RBP + 0x6f) = **(undefined8 **)(unaff_RBP + 0x6f);
  }
  pfVar4 = *(float **)(unaff_RBP + 0x7f);
  pfVar16 = pfVar4;
  if (pfVar4 == (float *)0x0) {
    pfVar16 = param_2;
  }
  pfVar18 = pfVar4 + 2;
  if (pfVar4 == (float *)0x0) {
    pfVar18 = param_3;
  }
  fVar2 = *(float *)(unaff_RBP + 0x4f);
  fVar19 = *pfVar18;
  if ((fVar19 <= *(float *)(unaff_RBP + 0x6f) + fVar2) ||
     (pfVar18[1] <= *(float *)(unaff_RBP + 0x73) + *(float *)(unaff_RBP + 0x53))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (pfVar4 != (float *)0x0) {
    if ((fVar2 < *pfVar16) || (*(float *)(unaff_RBP + 0x53) < pfVar16[1])) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    bVar13 = (bool)(bVar13 | bVar14);
  }
  if ((unaff_XMM10_Da < **(float **)(unaff_RBP + 0x77)) &&
     (fVar20 = ((*param_3 - fVar2) - *(float *)(unaff_RBP + 0x6f)) * **(float **)(unaff_RBP + 0x77)
               + fVar2, fVar2 < fVar20)) {
    *(ulonglong *)(unaff_RBP + 0x4f) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(unaff_RBP + 0x4f) >> 0x20),fVar20);
  }
  uVar6 = *(undefined4 *)(unaff_R15 + 0x16cc);
  uVar7 = *(undefined4 *)(unaff_R15 + 0x16d0);
  fVar2 = *(float *)(unaff_R15 + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(unaff_R15 + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
  *(float *)(unaff_RBP + -0x4d) = fVar2;
  *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(unaff_R15 + 0x1628);
  if (bVar13) {
    fVar2 = pfVar16[1];
    fVar20 = pfVar18[1];
    fVar3 = *pfVar16;
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        lVar17 = *(longlong *)(unaff_R13 + 0x38);
        pfVar4 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                          (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        *(float *)(unaff_RBP + -0x59) = fVar8;
        *(float *)(unaff_RBP + -0x55) = fVar9;
        *(float *)(unaff_RBP + -0x51) = fVar10;
        *(float *)(unaff_RBP + -0x4d) = fVar11;
        if (fVar8 < fVar3) {
          *(float *)(unaff_RBP + -0x59) = fVar3;
        }
        if (*(float *)(unaff_RBP + -0x55) < fVar2) {
          *(float *)(unaff_RBP + -0x55) = fVar2;
        }
        if (fVar19 <= *(float *)(unaff_RBP + -0x51)) {
          *(float *)(unaff_RBP + -0x51) = fVar19;
        }
        if (fVar20 <= *(float *)(unaff_RBP + -0x4d)) {
          *(float *)(unaff_RBP + -0x4d) = fVar20;
        }
        FUN_180297590(*(undefined8 *)(lVar17 + 8));
      }
    }
  }
  else {
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                 (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        uVar12 = puVar1[1];
        uVar5 = *(undefined8 *)(*(longlong *)(unaff_R13 + 0x38) + 8);
        *(undefined8 *)(unaff_RBP + -0x59) = *puVar1;
        *(undefined8 *)(unaff_RBP + -0x51) = uVar12;
        FUN_180297590(uVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_18012250a(undefined8 param_1,float *param_2)
void FUN_18012250a(undefined8 param_1,float *param_2)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  longlong in_RAX;
  float *pfVar16;
  longlong unaff_RBX;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float *pfVar18;
  float *unaff_R12;
  longlong unaff_R13;
  undefined8 unaff_R14;
  longlong unaff_R15;
  float fVar19;
  float fVar20;
  float unaff_XMM10_Da;
  undefined4 unaff_XMM11_Da;
  undefined4 unaff_XMM11_Db;
  
  *(undefined8 *)(in_RAX + 0x20) = unaff_R14;
  *(ulonglong *)(unaff_RBP + 0x4f) = CONCAT44(unaff_XMM11_Db,unaff_XMM11_Da);
  if (*(undefined8 **)(unaff_RBP + 0x6f) == (undefined8 *)0x0) {
    fVar2 = *(float *)(unaff_R15 + 0x19f8);
    pfVar4 = *(float **)(unaff_R15 + 0x19f0);
    if (unaff_RDI == unaff_RBX) {
      *(float *)(unaff_RBP + 0x73) = fVar2;
      *(undefined4 *)(unaff_RBP + 0x6f) = 0;
    }
    else {
      FUN_180297340(pfVar4,unaff_RBP + -0x59,fVar2,0x7f7fffff);
      fVar19 = *(float *)(unaff_RBP + -0x59);
      if (unaff_XMM10_Da < fVar19) {
        fVar19 = fVar19 - fVar2 / *pfVar4;
      }
      *(undefined4 *)(unaff_RBP + 0x73) = *(undefined4 *)(unaff_RBP + -0x55);
      *(float *)(unaff_RBP + 0x6f) = (float)(int)(fVar19 + 0.95);
    }
  }
  else {
    *(undefined8 *)(unaff_RBP + 0x6f) = **(undefined8 **)(unaff_RBP + 0x6f);
  }
  pfVar4 = *(float **)(unaff_RBP + 0x7f);
  pfVar16 = pfVar4;
  if (pfVar4 == (float *)0x0) {
    pfVar16 = param_2;
  }
  pfVar18 = pfVar4 + 2;
  if (pfVar4 == (float *)0x0) {
    pfVar18 = unaff_R12;
  }
  fVar2 = *(float *)(unaff_RBP + 0x4f);
  fVar19 = *pfVar18;
  if ((fVar19 <= *(float *)(unaff_RBP + 0x6f) + fVar2) ||
     (pfVar18[1] <= *(float *)(unaff_RBP + 0x73) + *(float *)(unaff_RBP + 0x53))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (pfVar4 != (float *)0x0) {
    if ((fVar2 < *pfVar16) || (*(float *)(unaff_RBP + 0x53) < pfVar16[1])) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    bVar13 = (bool)(bVar13 | bVar14);
  }
  if ((unaff_XMM10_Da < **(float **)(unaff_RBP + 0x77)) &&
     (fVar20 = ((*unaff_R12 - fVar2) - *(float *)(unaff_RBP + 0x6f)) *
               **(float **)(unaff_RBP + 0x77) + fVar2, fVar2 < fVar20)) {
    *(ulonglong *)(unaff_RBP + 0x4f) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(unaff_RBP + 0x4f) >> 0x20),fVar20);
  }
  uVar6 = *(undefined4 *)(unaff_R15 + 0x16cc);
  uVar7 = *(undefined4 *)(unaff_R15 + 0x16d0);
  fVar2 = *(float *)(unaff_R15 + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(unaff_R15 + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
  *(float *)(unaff_RBP + -0x4d) = fVar2;
  *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(unaff_R15 + 0x1628);
  if (bVar13) {
    fVar2 = pfVar16[1];
    fVar20 = pfVar18[1];
    fVar3 = *pfVar16;
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        lVar17 = *(longlong *)(unaff_R13 + 0x38);
        pfVar4 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                          (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        *(float *)(unaff_RBP + -0x59) = fVar8;
        *(float *)(unaff_RBP + -0x55) = fVar9;
        *(float *)(unaff_RBP + -0x51) = fVar10;
        *(float *)(unaff_RBP + -0x4d) = fVar11;
        if (fVar8 < fVar3) {
          *(float *)(unaff_RBP + -0x59) = fVar3;
        }
        if (*(float *)(unaff_RBP + -0x55) < fVar2) {
          *(float *)(unaff_RBP + -0x55) = fVar2;
        }
        if (fVar19 <= *(float *)(unaff_RBP + -0x51)) {
          *(float *)(unaff_RBP + -0x51) = fVar19;
        }
        if (fVar20 <= *(float *)(unaff_RBP + -0x4d)) {
          *(float *)(unaff_RBP + -0x4d) = fVar20;
        }
        FUN_180297590(*(undefined8 *)(lVar17 + 8));
      }
    }
  }
  else {
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                 (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        uVar12 = puVar1[1];
        uVar5 = *(undefined8 *)(*(longlong *)(unaff_R13 + 0x38) + 8);
        *(undefined8 *)(unaff_RBP + -0x59) = *puVar1;
        *(undefined8 *)(unaff_RBP + -0x51) = uVar12;
        FUN_180297590(uVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_180122537(undefined8 param_1,undefined8 param_2,undefined8 param_3)
void FUN_180122537(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  bool bVar13;
  byte bVar14;
  uint uVar15;
  float *pfVar16;
  longlong unaff_RBX;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float *pfVar18;
  float *unaff_R12;
  longlong unaff_R13;
  float *unaff_R14;
  longlong unaff_R15;
  float fVar19;
  float fVar20;
  float unaff_XMM6_Da;
  float unaff_XMM10_Da;
  
  pfVar4 = *(float **)(unaff_R15 + 0x19f0);
  if (unaff_RDI == unaff_RBX) {
    *(float *)(unaff_RBP + 0x73) = unaff_XMM6_Da;
    *(undefined4 *)(unaff_RBP + 0x6f) = 0;
  }
  else {
    FUN_180297340(pfVar4,unaff_RBP + -0x59,param_3,0x7f7fffff);
    fVar19 = *(float *)(unaff_RBP + -0x59);
    if (unaff_XMM10_Da < fVar19) {
      fVar19 = fVar19 - unaff_XMM6_Da / *pfVar4;
    }
    *(undefined4 *)(unaff_RBP + 0x73) = *(undefined4 *)(unaff_RBP + -0x55);
    *(float *)(unaff_RBP + 0x6f) = (float)(int)(fVar19 + 0.95);
  }
  pfVar4 = *(float **)(unaff_RBP + 0x7f);
  pfVar16 = pfVar4;
  if (pfVar4 == (float *)0x0) {
    pfVar16 = unaff_R14;
  }
  pfVar18 = pfVar4 + 2;
  if (pfVar4 == (float *)0x0) {
    pfVar18 = unaff_R12;
  }
  fVar19 = *(float *)(unaff_RBP + 0x4f);
  fVar2 = *pfVar18;
  if ((fVar2 <= *(float *)(unaff_RBP + 0x6f) + fVar19) ||
     (pfVar18[1] <= *(float *)(unaff_RBP + 0x73) + *(float *)(unaff_RBP + 0x53))) {
    bVar13 = true;
  }
  else {
    bVar13 = false;
  }
  if (pfVar4 != (float *)0x0) {
    if ((fVar19 < *pfVar16) || (*(float *)(unaff_RBP + 0x53) < pfVar16[1])) {
      bVar14 = 1;
    }
    else {
      bVar14 = 0;
    }
    bVar13 = (bool)(bVar13 | bVar14);
  }
  if ((unaff_XMM10_Da < **(float **)(unaff_RBP + 0x77)) &&
     (fVar20 = ((*unaff_R12 - fVar19) - *(float *)(unaff_RBP + 0x6f)) *
               **(float **)(unaff_RBP + 0x77) + fVar19, fVar19 < fVar20)) {
    *(ulonglong *)(unaff_RBP + 0x4f) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(unaff_RBP + 0x4f) >> 0x20),fVar20);
  }
  uVar6 = *(undefined4 *)(unaff_R15 + 0x16cc);
  uVar7 = *(undefined4 *)(unaff_R15 + 0x16d0);
  fVar19 = *(float *)(unaff_R15 + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(unaff_R15 + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar6;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar7;
  *(float *)(unaff_RBP + -0x4d) = fVar19;
  *(float *)(unaff_RBP + -0x4d) = fVar19 * *(float *)(unaff_R15 + 0x1628);
  if (bVar13) {
    fVar19 = pfVar16[1];
    fVar20 = pfVar18[1];
    fVar3 = *pfVar16;
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        lVar17 = *(longlong *)(unaff_R13 + 0x38);
        pfVar4 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                          (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        fVar8 = *pfVar4;
        fVar9 = pfVar4[1];
        fVar10 = pfVar4[2];
        fVar11 = pfVar4[3];
        *(float *)(unaff_RBP + -0x59) = fVar8;
        *(float *)(unaff_RBP + -0x55) = fVar9;
        *(float *)(unaff_RBP + -0x51) = fVar10;
        *(float *)(unaff_RBP + -0x4d) = fVar11;
        if (fVar8 < fVar3) {
          *(float *)(unaff_RBP + -0x59) = fVar3;
        }
        if (*(float *)(unaff_RBP + -0x55) < fVar19) {
          *(float *)(unaff_RBP + -0x55) = fVar19;
        }
        if (fVar2 <= *(float *)(unaff_RBP + -0x51)) {
          *(float *)(unaff_RBP + -0x51) = fVar2;
        }
        if (fVar20 <= *(float *)(unaff_RBP + -0x4d)) {
          *(float *)(unaff_RBP + -0x4d) = fVar20;
        }
        FUN_180297590(*(undefined8 *)(lVar17 + 8));
      }
    }
  }
  else {
    uVar15 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar15 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        puVar1 = (undefined8 *)
                 (*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                 (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        uVar12 = puVar1[1];
        uVar5 = *(undefined8 *)(*(longlong *)(unaff_R13 + 0x38) + 8);
        *(undefined8 *)(unaff_RBP + -0x59) = *puVar1;
        *(undefined8 *)(unaff_RBP + -0x51) = uVar12;
        FUN_180297590(uVar5);
      }
    }
  }
  return;
}





// 函数: void FUN_1801225c7(void)
void FUN_1801225c7(void)

{
  undefined4 *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  float *pfVar17;
  longlong unaff_RBX;
  longlong lVar18;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float *pfVar19;
  float *unaff_R12;
  longlong unaff_R13;
  float *unaff_R14;
  longlong unaff_R15;
  float fVar20;
  float unaff_XMM10_Da;
  
  pfVar5 = *(float **)(unaff_RBP + 0x7f);
  pfVar17 = pfVar5;
  if (pfVar5 == (float *)0x0) {
    pfVar17 = unaff_R14;
  }
  pfVar19 = pfVar5 + 2;
  if (pfVar5 == (float *)0x0) {
    pfVar19 = unaff_R12;
  }
  fVar2 = *(float *)(unaff_RBP + 0x4f);
  fVar3 = *pfVar19;
  if ((fVar3 <= *(float *)(unaff_RBP + 0x6f) + fVar2) ||
     (pfVar19[1] <= *(float *)(unaff_RBP + 0x73) + *(float *)(unaff_RBP + 0x53))) {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if (pfVar5 != (float *)0x0) {
    if ((fVar2 < *pfVar17) || (*(float *)(unaff_RBP + 0x53) < pfVar17[1])) {
      bVar15 = 1;
    }
    else {
      bVar15 = 0;
    }
    bVar14 = (bool)(bVar14 | bVar15);
  }
  if ((unaff_XMM10_Da < **(float **)(unaff_RBP + 0x77)) &&
     (fVar20 = ((*unaff_R12 - fVar2) - *(float *)(unaff_RBP + 0x6f)) *
               **(float **)(unaff_RBP + 0x77) + fVar2, fVar2 < fVar20)) {
    *(ulonglong *)(unaff_RBP + 0x4f) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(unaff_RBP + 0x4f) >> 0x20),fVar20);
  }
  uVar7 = *(undefined4 *)(unaff_R15 + 0x16cc);
  uVar8 = *(undefined4 *)(unaff_R15 + 0x16d0);
  fVar2 = *(float *)(unaff_R15 + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(unaff_R15 + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar7;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar8;
  *(float *)(unaff_RBP + -0x4d) = fVar2;
  *(float *)(unaff_RBP + -0x4d) = fVar2 * *(float *)(unaff_R15 + 0x1628);
  if (bVar14) {
    fVar2 = pfVar17[1];
    fVar20 = pfVar19[1];
    fVar4 = *pfVar17;
    uVar16 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar16 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (*(char *)(unaff_RDI + lVar18) != '\0');
        unaff_RBX = lVar18 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        lVar18 = *(longlong *)(unaff_R13 + 0x38);
        pfVar5 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                          (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        fVar9 = *pfVar5;
        fVar10 = pfVar5[1];
        fVar11 = pfVar5[2];
        fVar12 = pfVar5[3];
        *(float *)(unaff_RBP + -0x59) = fVar9;
        *(float *)(unaff_RBP + -0x55) = fVar10;
        *(float *)(unaff_RBP + -0x51) = fVar11;
        *(float *)(unaff_RBP + -0x4d) = fVar12;
        if (fVar9 < fVar4) {
          *(float *)(unaff_RBP + -0x59) = fVar4;
        }
        if (*(float *)(unaff_RBP + -0x55) < fVar2) {
          *(float *)(unaff_RBP + -0x55) = fVar2;
        }
        if (fVar3 <= *(float *)(unaff_RBP + -0x51)) {
          *(float *)(unaff_RBP + -0x51) = fVar3;
        }
        if (fVar20 <= *(float *)(unaff_RBP + -0x4d)) {
          *(float *)(unaff_RBP + -0x4d) = fVar20;
        }
        FUN_180297590(*(undefined8 *)(lVar18 + 8));
      }
    }
  }
  else {
    uVar16 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar16 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar18 = -1;
        do {
          lVar18 = lVar18 + 1;
        } while (*(char *)(unaff_RDI + lVar18) != '\0');
        unaff_RBX = lVar18 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        puVar1 = (undefined4 *)
                 (*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                 (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        uVar7 = puVar1[1];
        uVar8 = puVar1[2];
        uVar13 = puVar1[3];
        uVar6 = *(undefined8 *)(*(longlong *)(unaff_R13 + 0x38) + 8);
        *(undefined4 *)(unaff_RBP + -0x59) = *puVar1;
        *(undefined4 *)(unaff_RBP + -0x55) = uVar7;
        *(undefined4 *)(unaff_RBP + -0x51) = uVar8;
        *(undefined4 *)(unaff_RBP + -0x4d) = uVar13;
        FUN_180297590(uVar6);
      }
    }
  }
  return;
}





// 函数: void FUN_1801225f0(undefined8 param_1,float *param_2)
void FUN_1801225f0(undefined8 param_1,float *param_2)

{
  float *pfVar1;
  undefined4 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  bool bVar14;
  byte bVar15;
  uint uVar16;
  longlong in_RAX;
  longlong unaff_RBX;
  longlong lVar17;
  longlong unaff_RBP;
  longlong unaff_RDI;
  float *unaff_R12;
  longlong unaff_R13;
  longlong unaff_R15;
  float fVar18;
  float in_XMM4_Da;
  float in_XMM5_Da;
  float unaff_XMM10_Da;
  
  fVar3 = *(float *)(unaff_RBP + 0x4f);
  fVar4 = *unaff_R12;
  if ((fVar4 <= in_XMM4_Da + fVar3) || (unaff_R12[1] <= in_XMM5_Da + *(float *)(unaff_RBP + 0x53)))
  {
    bVar14 = true;
  }
  else {
    bVar14 = false;
  }
  if (in_RAX != 0) {
    if ((fVar3 < *param_2) || (*(float *)(unaff_RBP + 0x53) < param_2[1])) {
      bVar15 = 1;
    }
    else {
      bVar15 = 0;
    }
    bVar14 = (bool)(bVar14 | bVar15);
  }
  if ((unaff_XMM10_Da < **(float **)(unaff_RBP + 0x77)) &&
     (fVar18 = ((*unaff_R12 - fVar3) - in_XMM4_Da) * **(float **)(unaff_RBP + 0x77) + fVar3,
     fVar3 < fVar18)) {
    *(ulonglong *)(unaff_RBP + 0x4f) =
         CONCAT44((int)((ulonglong)*(undefined8 *)(unaff_RBP + 0x4f) >> 0x20),fVar18);
  }
  uVar7 = *(undefined4 *)(unaff_R15 + 0x16cc);
  uVar8 = *(undefined4 *)(unaff_R15 + 0x16d0);
  fVar3 = *(float *)(unaff_R15 + 0x16d4);
  *(undefined4 *)(unaff_RBP + -0x59) = *(undefined4 *)(unaff_R15 + 0x16c8);
  *(undefined4 *)(unaff_RBP + -0x55) = uVar7;
  *(undefined4 *)(unaff_RBP + -0x51) = uVar8;
  *(float *)(unaff_RBP + -0x4d) = fVar3;
  *(float *)(unaff_RBP + -0x4d) = fVar3 * *(float *)(unaff_R15 + 0x1628);
  if (bVar14) {
    fVar3 = param_2[1];
    fVar18 = unaff_R12[1];
    fVar5 = *param_2;
    uVar16 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar16 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        lVar17 = *(longlong *)(unaff_R13 + 0x38);
        pfVar1 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                          (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        fVar9 = *pfVar1;
        fVar10 = pfVar1[1];
        fVar11 = pfVar1[2];
        fVar12 = pfVar1[3];
        *(float *)(unaff_RBP + -0x59) = fVar9;
        *(float *)(unaff_RBP + -0x55) = fVar10;
        *(float *)(unaff_RBP + -0x51) = fVar11;
        *(float *)(unaff_RBP + -0x4d) = fVar12;
        if (fVar9 < fVar5) {
          *(float *)(unaff_RBP + -0x59) = fVar5;
        }
        if (*(float *)(unaff_RBP + -0x55) < fVar3) {
          *(float *)(unaff_RBP + -0x55) = fVar3;
        }
        if (fVar4 <= *(float *)(unaff_RBP + -0x51)) {
          *(float *)(unaff_RBP + -0x51) = fVar4;
        }
        if (fVar18 <= *(float *)(unaff_RBP + -0x4d)) {
          *(float *)(unaff_RBP + -0x4d) = fVar18;
        }
        FUN_180297590(*(undefined8 *)(lVar17 + 8));
      }
    }
  }
  else {
    uVar16 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar16 & 0xff000000) != 0) {
      if (unaff_RBX == 0) {
        lVar17 = -1;
        do {
          lVar17 = lVar17 + 1;
        } while (*(char *)(unaff_RDI + lVar17) != '\0');
        unaff_RBX = lVar17 + unaff_RDI;
      }
      if (unaff_RDI != unaff_RBX) {
        puVar2 = (undefined4 *)
                 (*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                 (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
        uVar7 = puVar2[1];
        uVar8 = puVar2[2];
        uVar13 = puVar2[3];
        uVar6 = *(undefined8 *)(*(longlong *)(unaff_R13 + 0x38) + 8);
        *(undefined4 *)(unaff_RBP + -0x59) = *puVar2;
        *(undefined4 *)(unaff_RBP + -0x55) = uVar7;
        *(undefined4 *)(unaff_RBP + -0x51) = uVar8;
        *(undefined4 *)(unaff_RBP + -0x4d) = uVar13;
        FUN_180297590(uVar6);
      }
    }
  }
  return;
}





// 函数: void FUN_1801226e4(undefined8 param_1,float *param_2,longlong param_3)
void FUN_1801226e4(undefined8 param_1,float *param_2,longlong param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  longlong unaff_RBX;
  longlong lVar10;
  longlong unaff_RBP;
  longlong unaff_RDI;
  longlong unaff_R13;
  float unaff_XMM9_Da;
  
  fVar2 = param_2[1];
  fVar3 = *(float *)(param_3 + 4);
  fVar4 = *param_2;
  uVar9 = func_0x000180121e20();
  if ((uVar9 & 0xff000000) != 0) {
    if (unaff_RBX == 0) {
      lVar10 = -1;
      do {
        lVar10 = lVar10 + 1;
      } while (*(char *)(unaff_RDI + lVar10) != '\0');
      unaff_RBX = lVar10 + unaff_RDI;
    }
    if (unaff_RDI != unaff_RBX) {
      lVar10 = *(longlong *)(unaff_R13 + 0x38);
      pfVar1 = (float *)(*(longlong *)(unaff_R13 + 0x68) + -0x10 +
                        (longlong)*(int *)(unaff_R13 + 0x60) * 0x10);
      fVar5 = *pfVar1;
      fVar6 = pfVar1[1];
      fVar7 = pfVar1[2];
      fVar8 = pfVar1[3];
      *(float *)(unaff_RBP + -0x59) = fVar5;
      *(float *)(unaff_RBP + -0x55) = fVar6;
      *(float *)(unaff_RBP + -0x51) = fVar7;
      *(float *)(unaff_RBP + -0x4d) = fVar8;
      if (fVar5 < fVar4) {
        *(float *)(unaff_RBP + -0x59) = fVar4;
      }
      if (*(float *)(unaff_RBP + -0x55) < fVar2) {
        *(float *)(unaff_RBP + -0x55) = fVar2;
      }
      if (unaff_XMM9_Da <= *(float *)(unaff_RBP + -0x51)) {
        *(float *)(unaff_RBP + -0x51) = unaff_XMM9_Da;
      }
      if (fVar3 <= *(float *)(unaff_RBP + -0x4d)) {
        *(float *)(unaff_RBP + -0x4d) = fVar3;
      }
      FUN_180297590(*(undefined8 *)(lVar10 + 8));
    }
  }
  return;
}





