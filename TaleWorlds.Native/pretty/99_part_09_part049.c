#include "TaleWorlds.Native.Split.h"

// 99_part_09_part049.c - 3 个函数

// 函数: void FUN_1805d3770(longlong *param_1)
void FUN_1805d3770(longlong *param_1)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  longlong lVar13;
  int iVar14;
  float *pfVar15;
  int iVar16;
  longlong *plVar17;
  longlong lVar18;
  char cVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [16];
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 uStackX_10;
  float fStackX_18;
  float fStackX_1c;
  
  *(undefined4 *)((longlong)param_1 + 0x9c) = 0x461c4000;
  plVar17 = (longlong *)*param_1;
  lVar13 = *plVar17;
  lVar3 = *(longlong *)(lVar13 + 0x20);
  pfVar15 = (float *)(lVar3 + 0x24);
  if ((plVar17[0x41e] != 0) &&
     (((int)plVar17[0x295] - 5U < 2 ||
      (((*(byte *)((longlong)plVar17 + 0x209c) & 1) != 0 && ((*(byte *)(plVar17 + 0x413) & 1) != 0))
      )))) {
    uVar12 = *(uint *)(param_1 + 1);
    if ((uVar12 & 1) == 0) {
      FUN_1805d3210(param_1);
      uVar12 = *(uint *)(param_1 + 1);
      lVar13 = *(longlong *)*param_1;
    }
    fVar30 = *(float *)(param_1 + 9) - *(float *)(*(longlong *)(lVar13 + 0x6d8) + 0x8c4);
    fVar29 = *(float *)((longlong)param_1 + 0x4c) -
             *(float *)(*(longlong *)(lVar13 + 0x6d8) + 0x8c8);
    fVar27 = fVar29 * fVar29 + fVar30 * fVar30;
    fVar27 = fVar27 + (float)(fVar27 <= 1.1754944e-38) * 1.1754944e-38;
    auVar23 = rsqrtss(ZEXT416((uint)fVar27),ZEXT416((uint)fVar27));
    fVar24 = auVar23._0_4_;
    fVar24 = fVar24 * 0.5 * (3.0 - fVar27 * fVar24 * fVar24);
    if ((uVar12 >> 0x19 & 1) == 0) {
      fVar21 = *(float *)(lVar13 + 0x7dc);
      *(float *)((longlong)param_1 + 0xac) = fVar21;
      *(uint *)(param_1 + 1) = uVar12 | 0x2000000;
    }
    else {
      fVar21 = *(float *)((longlong)param_1 + 0xac);
    }
    if (fVar21 <= fVar24 * fVar27) {
      fVar29 = fVar29 * fVar24 * *(float *)(lVar3 + 0x28) + fVar30 * fVar24 * *pfVar15;
      if (0.001 < fVar29) {
        *(float *)((longlong)param_1 + 0x9c) = (fVar24 * fVar27) / fVar29;
      }
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3dcccccd;
    }
    goto FUN_1805d3fdb;
  }
  uVar12 = *(uint *)(param_1 + 1);
  if ((uVar12 >> 9 & 1) == 0) {
    func_0x0001805d4cd0(param_1);
    uVar12 = *(uint *)(param_1 + 1);
  }
  if (param_1[0x1c] == 0) goto FUN_1805d3fdb;
  if ((uVar12 & 0x20) == 0) {
    uVar12 = uVar12 | 0x20;
    lVar13 = *(longlong *)(*(longlong *)(*(longlong *)*param_1 + 0x8f8) + 0x9e8);
    param_1[0x14] = lVar13;
    *(uint *)(param_1 + 1) = uVar12;
  }
  else {
    lVar13 = param_1[0x14];
  }
  if ((((lVar13 != 0) && (0 < *(int *)(lVar13 + 0x30))) &&
      ((uVar4 = *(ulonglong *)
                 ((longlong)*(int *)(lVar13 + 0xf0) * 0xa0 + 0x50 + *(longlong *)(lVar13 + 0xd0)),
       (uVar4 >> 9 & 1) == 0 || (0 < *(short *)(lVar13 + 8))))) && ((uVar4 >> 1 & 1) != 0))
  goto FUN_1805d3fdb;
  if ((uVar12 & 1) == 0) {
    FUN_1805d3210(param_1);
  }
  pfVar9 = (float *)FUN_1805b6cc0(param_1);
  uVar12 = *(uint *)(param_1 + 1);
  if ((uVar12 & 2) == 0) {
    FUN_1805d3550(param_1);
    uVar12 = *(uint *)(param_1 + 1);
  }
  if ((uVar12 >> 0x19 & 1) == 0) {
    fVar24 = *(float *)(*(longlong *)*param_1 + 0x7dc);
    *(float *)((longlong)param_1 + 0xac) = fVar24;
    *(uint *)(param_1 + 1) = uVar12 | 0x2000000;
  }
  else {
    fVar24 = *(float *)((longlong)param_1 + 0xac);
  }
  fVar29 = *(float *)((longlong)param_1 + 100) - fVar24;
  fVar27 = 0.0;
  fVar30 = (*(float *)(param_1 + 0xb) * *pfVar15 +
           *(float *)((longlong)param_1 + 0x5c) * *(float *)(lVar3 + 0x28)) -
           (*(float *)(param_1 + 0xb) * *pfVar9 + *(float *)((longlong)param_1 + 0x5c) * pfVar9[1]);
  if (fVar29 < 0.0) {
    if (0.0 <= fVar30) {
      *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3a83126f;
    }
    else {
      *(undefined4 *)((longlong)param_1 + 0x9c) = 0x3dcccccd;
    }
    goto FUN_1805d3fdb;
  }
  if (fVar30 <= 0.0) goto FUN_1805d3fdb;
  lVar10 = FUN_1805b74c0(param_1);
  plVar17 = (longlong *)*param_1;
  lVar13 = *(longlong *)(*plVar17 + 0x20);
  lVar18 = *(longlong *)(lVar10 + 0x20);
  uVar5 = *(undefined8 *)pfVar9;
  uStackX_10._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
  uStackX_10._0_4_ = (float)uVar5;
  fVar25 = uStackX_10._4_4_ * uStackX_10._4_4_ + (float)uStackX_10 * (float)uStackX_10;
  fVar25 = fVar25 + (float)(fVar25 <= 1.1754944e-38) * 1.1754944e-38;
  auVar23 = rsqrtss(ZEXT416((uint)fVar25),ZEXT416((uint)fVar25));
  fVar21 = auVar23._0_4_;
  fVar25 = fVar21 * 0.5 * (3.0 - fVar25 * fVar21 * fVar21) * fVar25;
  cVar19 = *(float *)(lVar18 + 0x84) * 0.5 < fVar25;
  if (((bool)cVar19) || (*(float *)(lVar18 + 0x84) * 0.2 < fVar25)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  fVar21 = *(float *)(lVar3 + 0x28);
  fVar25 = *pfVar15;
  fVar1 = *(float *)(lVar13 + 0x84);
  fVar33 = fVar25 - *pfVar9;
  fVar32 = *(float *)(lVar18 + 0xc);
  fVar31 = fVar21 - pfVar9[1];
  fVar2 = *(float *)(lVar18 + 0x10);
  fVar20 = *(float *)(lVar13 + 0x10) - fVar2;
  fVar22 = fVar31 * fVar31 + fVar33 * fVar33;
  uStackX_10 = uVar5;
  if (0.01 < fVar22) {
    fVar20 = (fVar33 * (*(float *)(lVar13 + 0xc) - fVar32) * -2.0 - (fVar20 + fVar20) * fVar31) *
             (0.5 / fVar22);
    if (fVar20 <= 0.0) {
      fVar20 = 0.0;
    }
    if (0.0 < fVar20) {
      fVar22 = *(float *)((longlong)plVar17 + 0x1dc);
      fVar31 = *(float *)(plVar17 + 0x3b);
      fVar34 = fVar21 * fVar20 + *(float *)(lVar13 + 0x10);
      fVar28 = fVar25 * fVar20 + *(float *)(lVar13 + 0xc);
      fVar33 = *pfVar9 * fVar20 + fVar32;
      fVar26 = pfVar9[1] * fVar20 + fVar2;
      uStackX_10 = CONCAT44(fVar26,fVar33);
      if (0.0 <= (fVar22 - fVar34) * (fVar22 - *(float *)(lVar13 + 0x10)) +
                 (fVar31 - fVar28) * (fVar31 - *(float *)(lVar13 + 0xc))) {
        fVar33 = fVar33 - fVar28;
        fVar26 = fVar26 - fVar34;
        fVar32 = fVar33 * fVar33 + fVar26 * fVar26;
      }
      else {
        if (bVar6) {
          FUN_18038a230(&fStackX_18,(float *)(lVar18 + 0xc),&uStackX_10);
          fVar32 = fStackX_18;
          fVar2 = fStackX_1c;
        }
        fVar32 = (fVar31 - fVar32) * (fVar31 - fVar32) + (fVar22 - fVar2) * (fVar22 - fVar2);
      }
      if (fVar32 < fVar24 * fVar24) {
        *(float *)((longlong)param_1 + 0x9c) = fVar20;
      }
    }
  }
  if (3.0 < *(float *)((longlong)param_1 + 0x9c) || *(float *)((longlong)param_1 + 0x9c) == 3.0)
  goto FUN_1805d3fdb;
  if ((((*(uint *)((longlong)plVar17 + 0x1484) >> 3 & 1) == 0) &&
      (*(char *)((longlong)plVar17 + 0x12bc) != '\0')) &&
     (cVar7 = func_0x0001805b68f0(plVar17 + 0x2f), cVar7 != '\0')) {
    pfVar15 = (float *)FUN_1805b7480(param_1);
    lVar13 = *param_1;
    fVar24 = *pfVar15;
    if (fVar24 <= 3.0) {
      fVar24 = 3.0;
    }
    fVar24 = fVar24 * fVar30;
    if (*(char *)(lVar13 + 0x12bc) == '\0') goto LAB_1805d3fa3;
    cVar19 = *(char *)(lVar13 + 0x12b4);
    lVar3 = lVar13 + 0x290;
    if (cVar19 == '\0') {
      iVar14 = (int)(*(longlong *)(lVar13 + 0x1298) - *(longlong *)(lVar13 + 0x1290) >> 5);
    }
    else {
      iVar14 = *(int *)(lVar13 + 0x12b0);
    }
    if (iVar14 < 1) goto LAB_1805d3fa3;
    iVar14 = *(int *)(lVar13 + 0x12b8);
    lVar18 = *(longlong *)(**(longlong **)(lVar13 + 0x198) + 0x20);
    lVar10 = lVar3;
    if (cVar19 == '\0') {
      lVar10 = *(longlong *)(lVar13 + 0x1290);
    }
    fVar27 = *(float *)(lVar18 + 0x10) - *(float *)((longlong)iVar14 * 0x20 + 4 + lVar10);
    fVar21 = *(float *)(lVar18 + 0xc) - *(float *)((longlong)iVar14 * 0x20 + lVar10);
    fVar27 = SQRT(fVar27 * fVar27 + fVar21 * fVar21);
    iVar16 = iVar14;
    if (fVar27 <= fVar24) {
      while( true ) {
        iVar16 = iVar16 + 1;
        if (cVar19 == '\0') {
          iVar8 = (int)(*(longlong *)(lVar13 + 0x1298) - *(longlong *)(lVar13 + 0x1290) >> 5);
        }
        else {
          iVar8 = *(int *)(lVar13 + 0x12b0);
        }
        if (iVar8 <= iVar16) goto LAB_1805d3fa3;
        lVar18 = lVar3;
        if (cVar19 == '\0') {
          lVar18 = *(longlong *)(lVar13 + 0x1290);
        }
        lVar10 = lVar3;
        if (cVar19 == '\0') {
          lVar10 = *(longlong *)(lVar13 + 0x1290);
        }
        fVar21 = *(float *)(lVar18 + 4 + (longlong)iVar14 * 0x20) -
                 *(float *)((longlong)iVar16 * 0x20 + 4 + lVar10);
        fVar25 = *(float *)(lVar18 + (longlong)iVar14 * 0x20) -
                 *(float *)((longlong)iVar16 * 0x20 + lVar10);
        fVar27 = fVar27 + SQRT(fVar21 * fVar21 + fVar25 * fVar25);
        if (fVar24 < fVar27) break;
        iVar14 = iVar14 + 1;
      }
    }
  }
  else {
    if ((*(uint *)((longlong)plVar17 + 0x209c) >> 0xb & 1) != 0) goto FUN_1805d3fdb;
    iVar14 = (int)plVar17[0x297];
    if ((((iVar14 == -1) || (*(int *)((longlong)plVar17 + 0x1b6c) <= iVar14)) ||
        ((*(int *)(((longlong)iVar14 + 0x65) * 0x3c + (longlong)plVar17) != *(int *)(lVar10 + 0x10)
         || (*(int *)((longlong)iVar14 * 0x3c + 0x17e4 + (longlong)plVar17) == 0)))) ||
       (((cVar19 != '\0' && (pcVar11 = (char *)FUN_1805b7540(param_1), *pcVar11 != '\0')) ||
        ((fVar1 * fVar1 * 0.25 < fVar25 * fVar25 + fVar21 * fVar21 &&
         (-1 < *(int *)(*(longlong *)*param_1 + 0x564))))))) goto FUN_1805d3fdb;
    fVar24 = 0.0;
    fVar27 = *(float *)((longlong)*(int *)(*param_1 + 0x14b8) * 0x3c + 0x17e0 + *param_1);
LAB_1805d3fa3:
    bVar6 = fVar27 < fVar24;
    fVar24 = fVar27;
    if ((bVar6) && (fVar27 <= fVar29)) goto FUN_1805d3fdb;
  }
  *(float *)((longlong)param_1 + 0x9c) = fVar24 / fVar30;
FUN_1805d3fdb:
  *(uint *)(param_1 + 1) = *(uint *)(param_1 + 1) | 0x10;
  return;
}






// 函数: void FUN_1805d3985(undefined8 param_1,ulonglong param_2)
void FUN_1805d3985(undefined8 param_1,ulonglong param_2)

{
  float fVar1;
  float fVar2;
  longlong lVar3;
  longlong lVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  float *pfVar9;
  longlong lVar10;
  char *pcVar11;
  uint uVar12;
  longlong *unaff_RBX;
  int iVar13;
  float *unaff_RDI;
  int iVar14;
  longlong lVar15;
  longlong *plVar16;
  char cVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  undefined1 auVar22 [16];
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  
  if ((param_2 & 1) == 0) {
    FUN_1805d3210();
  }
  pfVar9 = (float *)FUN_1805b6cc0();
  uVar12 = *(uint *)(unaff_RBX + 1);
  if ((uVar12 & 2) == 0) {
    FUN_1805d3550();
    uVar12 = *(uint *)(unaff_RBX + 1);
  }
  if ((uVar12 >> 0x19 & 1) == 0) {
    fVar21 = *(float *)(*(longlong *)*unaff_RBX + 0x7dc);
    *(float *)((longlong)unaff_RBX + 0xac) = fVar21;
    *(uint *)(unaff_RBX + 1) = uVar12 | 0x2000000;
  }
  else {
    fVar21 = *(float *)((longlong)unaff_RBX + 0xac);
  }
  fVar23 = *(float *)((longlong)unaff_RBX + 100) - fVar21;
  fVar27 = 0.0;
  fVar31 = (*(float *)(unaff_RBX + 0xb) * *unaff_RDI +
           *(float *)((longlong)unaff_RBX + 0x5c) * unaff_RDI[1]) -
           (*(float *)(unaff_RBX + 0xb) * *pfVar9 +
           *(float *)((longlong)unaff_RBX + 0x5c) * pfVar9[1]);
  if (fVar23 < 0.0) {
    if (0.0 <= fVar31) {
      *(undefined4 *)((longlong)unaff_RBX + 0x9c) = 0x3a83126f;
    }
    else {
      *(undefined4 *)((longlong)unaff_RBX + 0x9c) = 0x3dcccccd;
    }
    goto FUN_1805d3fc7;
  }
  if (fVar31 <= 0.0) goto FUN_1805d3fc7;
  lVar10 = FUN_1805b74c0();
  plVar16 = (longlong *)*unaff_RBX;
  lVar3 = *(longlong *)(*plVar16 + 0x20);
  lVar4 = *(longlong *)(lVar10 + 0x20);
  uVar5 = *(undefined8 *)pfVar9;
  fStack00000000000000ec = (float)((ulonglong)uVar5 >> 0x20);
  fStack00000000000000e8 = (float)uVar5;
  fVar24 = fStack00000000000000ec * fStack00000000000000ec +
           fStack00000000000000e8 * fStack00000000000000e8;
  fVar24 = fVar24 + (float)(fVar24 <= 1.1754944e-38) * 1.1754944e-38;
  auVar22 = rsqrtss(ZEXT416((uint)fVar24),ZEXT416((uint)fVar24));
  fVar19 = auVar22._0_4_;
  fVar24 = fVar19 * 0.5 * (3.0 - fVar24 * fVar19 * fVar19) * fVar24;
  cVar17 = *(float *)(lVar4 + 0x84) * 0.5 < fVar24;
  if (((bool)cVar17) || (*(float *)(lVar4 + 0x84) * 0.2 < fVar24)) {
    bVar6 = true;
  }
  else {
    bVar6 = false;
  }
  fVar19 = unaff_RDI[1];
  fVar24 = *unaff_RDI;
  fVar1 = *(float *)(lVar3 + 0x84);
  fVar30 = fVar24 - *pfVar9;
  fVar29 = *(float *)(lVar4 + 0xc);
  fVar28 = fVar19 - pfVar9[1];
  fVar2 = *(float *)(lVar4 + 0x10);
  fVar18 = *(float *)(lVar3 + 0x10) - fVar2;
  fVar20 = fVar28 * fVar28 + fVar30 * fVar30;
  _fStack00000000000000e8 = uVar5;
  if (0.01 < fVar20) {
    fVar18 = (fVar30 * (*(float *)(lVar3 + 0xc) - fVar29) * -2.0 - (fVar18 + fVar18) * fVar28) *
             (0.5 / fVar20);
    if (fVar18 <= 0.0) {
      fVar18 = 0.0;
    }
    if (0.0 < fVar18) {
      fVar20 = *(float *)((longlong)plVar16 + 0x1dc);
      fVar28 = *(float *)(plVar16 + 0x3b);
      fVar32 = fVar19 * fVar18 + *(float *)(lVar3 + 0x10);
      fVar26 = fVar24 * fVar18 + *(float *)(lVar3 + 0xc);
      fVar30 = *pfVar9 * fVar18 + fVar29;
      fVar25 = pfVar9[1] * fVar18 + fVar2;
      _fStack00000000000000e8 = CONCAT44(fVar25,fVar30);
      if (0.0 <= (fVar20 - fVar32) * (fVar20 - *(float *)(lVar3 + 0x10)) +
                 (fVar28 - fVar26) * (fVar28 - *(float *)(lVar3 + 0xc))) {
        fVar30 = fVar30 - fVar26;
        fVar25 = fVar25 - fVar32;
        fVar29 = fVar30 * fVar30 + fVar25 * fVar25;
      }
      else {
        if (bVar6) {
          FUN_18038a230(&stack0x000000f0,(float *)(lVar4 + 0xc),&stack0x000000e8);
          fVar29 = fStack00000000000000f0;
          fVar2 = fStack00000000000000f4;
        }
        fVar29 = (fVar28 - fVar29) * (fVar28 - fVar29) + (fVar20 - fVar2) * (fVar20 - fVar2);
      }
      if (fVar29 < fVar21 * fVar21) {
        *(float *)((longlong)unaff_RBX + 0x9c) = fVar18;
      }
    }
  }
  if (3.0 < *(float *)((longlong)unaff_RBX + 0x9c) || *(float *)((longlong)unaff_RBX + 0x9c) == 3.0)
  goto FUN_1805d3fc7;
  if ((((*(uint *)((longlong)plVar16 + 0x1484) >> 3 & 1) == 0) &&
      (*(char *)((longlong)plVar16 + 0x12bc) != '\0')) &&
     (cVar7 = func_0x0001805b68f0(plVar16 + 0x2f), cVar7 != '\0')) {
    pfVar9 = (float *)FUN_1805b7480();
    lVar3 = *unaff_RBX;
    fVar21 = *pfVar9;
    if (fVar21 <= 3.0) {
      fVar21 = 3.0;
    }
    fVar21 = fVar21 * fVar31;
    if (*(char *)(lVar3 + 0x12bc) == '\0') goto LAB_1805d3fa3;
    cVar17 = *(char *)(lVar3 + 0x12b4);
    lVar4 = lVar3 + 0x290;
    if (cVar17 == '\0') {
      iVar13 = (int)(*(longlong *)(lVar3 + 0x1298) - *(longlong *)(lVar3 + 0x1290) >> 5);
    }
    else {
      iVar13 = *(int *)(lVar3 + 0x12b0);
    }
    if (iVar13 < 1) goto LAB_1805d3fa3;
    iVar13 = *(int *)(lVar3 + 0x12b8);
    lVar10 = *(longlong *)(**(longlong **)(lVar3 + 0x198) + 0x20);
    lVar15 = lVar4;
    if (cVar17 == '\0') {
      lVar15 = *(longlong *)(lVar3 + 0x1290);
    }
    fVar27 = *(float *)(lVar10 + 0x10) - *(float *)((longlong)iVar13 * 0x20 + 4 + lVar15);
    fVar19 = *(float *)(lVar10 + 0xc) - *(float *)((longlong)iVar13 * 0x20 + lVar15);
    fVar27 = SQRT(fVar27 * fVar27 + fVar19 * fVar19);
    iVar14 = iVar13;
    if (fVar27 <= fVar21) {
      while( true ) {
        iVar14 = iVar14 + 1;
        if (cVar17 == '\0') {
          iVar8 = (int)(*(longlong *)(lVar3 + 0x1298) - *(longlong *)(lVar3 + 0x1290) >> 5);
        }
        else {
          iVar8 = *(int *)(lVar3 + 0x12b0);
        }
        if (iVar8 <= iVar14) goto LAB_1805d3fa3;
        lVar10 = lVar4;
        if (cVar17 == '\0') {
          lVar10 = *(longlong *)(lVar3 + 0x1290);
        }
        lVar15 = lVar4;
        if (cVar17 == '\0') {
          lVar15 = *(longlong *)(lVar3 + 0x1290);
        }
        fVar19 = *(float *)(lVar10 + 4 + (longlong)iVar13 * 0x20) -
                 *(float *)((longlong)iVar14 * 0x20 + 4 + lVar15);
        fVar24 = *(float *)(lVar10 + (longlong)iVar13 * 0x20) -
                 *(float *)((longlong)iVar14 * 0x20 + lVar15);
        fVar27 = fVar27 + SQRT(fVar19 * fVar19 + fVar24 * fVar24);
        if (fVar21 < fVar27) break;
        iVar13 = iVar13 + 1;
      }
    }
  }
  else {
    if ((*(uint *)((longlong)plVar16 + 0x209c) >> 0xb & 1) != 0) goto FUN_1805d3fc7;
    iVar13 = (int)plVar16[0x297];
    if (((((iVar13 == -1) || (*(int *)((longlong)plVar16 + 0x1b6c) <= iVar13)) ||
         ((*(int *)(((longlong)iVar13 + 0x65) * 0x3c + (longlong)plVar16) != *(int *)(lVar10 + 0x10)
          || (*(int *)((longlong)iVar13 * 0x3c + 0x17e4 + (longlong)plVar16) == 0)))) ||
        ((cVar17 != '\0' && (pcVar11 = (char *)FUN_1805b7540(), *pcVar11 != '\0')))) ||
       ((fVar1 * fVar1 * 0.25 < fVar24 * fVar24 + fVar19 * fVar19 &&
        (-1 < *(int *)(*(longlong *)*unaff_RBX + 0x564))))) goto FUN_1805d3fc7;
    fVar21 = 0.0;
    fVar27 = *(float *)((longlong)*(int *)(*unaff_RBX + 0x14b8) * 0x3c + 0x17e0 + *unaff_RBX);
LAB_1805d3fa3:
    bVar6 = fVar27 < fVar21;
    fVar21 = fVar27;
    if ((bVar6) && (fVar27 <= fVar23)) goto FUN_1805d3fc7;
  }
  *(float *)((longlong)unaff_RBX + 0x9c) = fVar21 / fVar31;
FUN_1805d3fc7:
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x10;
  return;
}






// 函数: void FUN_1805d3a7b(void)
void FUN_1805d3a7b(void)

{
  float fVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  bool bVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  float *pfVar9;
  char *pcVar10;
  longlong *unaff_RBX;
  float *unaff_RSI;
  int iVar11;
  float *unaff_RDI;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  char cVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  float unaff_XMM6_Da;
  float fVar24;
  float fVar25;
  float fVar26;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float fVar27;
  float in_stack_000000e0;
  float fStack00000000000000e8;
  float fStack00000000000000ec;
  float fStack00000000000000f0;
  float fStack00000000000000f4;
  
  lVar8 = FUN_1805b74c0();
  plVar14 = (longlong *)*unaff_RBX;
  lVar2 = *(longlong *)(*plVar14 + 0x20);
  lVar3 = *(longlong *)(lVar8 + 0x20);
  uVar4 = *(undefined8 *)unaff_RSI;
  fStack00000000000000ec = (float)((ulonglong)uVar4 >> 0x20);
  fStack00000000000000e8 = (float)uVar4;
  fVar21 = fStack00000000000000ec * fStack00000000000000ec +
           fStack00000000000000e8 * fStack00000000000000e8;
  fVar21 = fVar21 + (float)(fVar21 <= 1.1754944e-38) * 1.1754944e-38;
  auVar20 = rsqrtss(ZEXT416((uint)fVar21),ZEXT416((uint)fVar21));
  fVar19 = auVar20._0_4_;
  fVar21 = fVar19 * 0.5 * (3.0 - fVar21 * fVar19 * fVar19) * fVar21;
  cVar15 = *(float *)(lVar3 + 0x84) * 0.5 < fVar21;
  if (((bool)cVar15) || (*(float *)(lVar3 + 0x84) * 0.2 < fVar21)) {
    bVar5 = true;
  }
  else {
    bVar5 = false;
  }
  fVar19 = unaff_RDI[1];
  fVar21 = *unaff_RDI;
  fVar17 = *(float *)(lVar2 + 0x84);
  fVar26 = fVar21 - *unaff_RSI;
  fVar25 = *(float *)(lVar3 + 0xc);
  fVar24 = fVar19 - unaff_RSI[1];
  fVar1 = *(float *)(lVar3 + 0x10);
  fVar16 = *(float *)(lVar2 + 0x10) - fVar1;
  fVar18 = fVar24 * fVar24 + fVar26 * fVar26;
  _fStack00000000000000e8 = uVar4;
  if (0.01 < fVar18) {
    fVar16 = (fVar26 * (*(float *)(lVar2 + 0xc) - fVar25) * -2.0 - (fVar16 + fVar16) * fVar24) *
             (0.5 / fVar18);
    if (fVar16 <= unaff_XMM6_Da) {
      fVar16 = unaff_XMM6_Da;
    }
    if (unaff_XMM6_Da < fVar16) {
      fVar18 = *(float *)((longlong)plVar14 + 0x1dc);
      fVar24 = *(float *)(plVar14 + 0x3b);
      fVar27 = fVar19 * fVar16 + *(float *)(lVar2 + 0x10);
      fVar23 = fVar21 * fVar16 + *(float *)(lVar2 + 0xc);
      fVar26 = *unaff_RSI * fVar16 + fVar25;
      fVar22 = unaff_RSI[1] * fVar16 + fVar1;
      _fStack00000000000000e8 = CONCAT44(fVar22,fVar26);
      if (unaff_XMM6_Da <=
          (fVar18 - fVar27) * (fVar18 - *(float *)(lVar2 + 0x10)) +
          (fVar24 - fVar23) * (fVar24 - *(float *)(lVar2 + 0xc))) {
        fVar26 = fVar26 - fVar23;
        fVar22 = fVar22 - fVar27;
        fVar25 = fVar26 * fVar26 + fVar22 * fVar22;
      }
      else {
        if (bVar5) {
          FUN_18038a230(&stack0x000000f0,(float *)(lVar3 + 0xc),&stack0x000000e8);
          fVar25 = fStack00000000000000f0;
          fVar1 = fStack00000000000000f4;
        }
        fVar25 = (fVar24 - fVar25) * (fVar24 - fVar25) + (fVar18 - fVar1) * (fVar18 - fVar1);
      }
      if (fVar25 < unaff_XMM10_Da * unaff_XMM10_Da) {
        *(float *)((longlong)unaff_RBX + 0x9c) = fVar16;
      }
    }
  }
  if (3.0 < *(float *)((longlong)unaff_RBX + 0x9c) || *(float *)((longlong)unaff_RBX + 0x9c) == 3.0)
  goto LAB_1805d3fbf;
  if ((((*(uint *)((longlong)plVar14 + 0x1484) >> 3 & 1) == 0) &&
      (*(char *)((longlong)plVar14 + 0x12bc) != '\0')) &&
     (cVar6 = func_0x0001805b68f0(plVar14 + 0x2f), cVar6 != '\0')) {
    pfVar9 = (float *)FUN_1805b7480();
    lVar2 = *unaff_RBX;
    fVar19 = *pfVar9;
    if (fVar19 <= 3.0) {
      fVar19 = 3.0;
    }
    fVar19 = fVar19 * unaff_XMM11_Da;
    if (*(char *)(lVar2 + 0x12bc) == '\0') goto LAB_1805d3fa3;
    cVar15 = *(char *)(lVar2 + 0x12b4);
    lVar3 = lVar2 + 0x290;
    if (cVar15 == '\0') {
      iVar11 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
    }
    else {
      iVar11 = *(int *)(lVar2 + 0x12b0);
    }
    if (iVar11 < 1) goto LAB_1805d3fa3;
    iVar11 = *(int *)(lVar2 + 0x12b8);
    lVar8 = *(longlong *)(**(longlong **)(lVar2 + 0x198) + 0x20);
    lVar13 = lVar3;
    if (cVar15 == '\0') {
      lVar13 = *(longlong *)(lVar2 + 0x1290);
    }
    fVar21 = *(float *)(lVar8 + 0x10) - *(float *)((longlong)iVar11 * 0x20 + 4 + lVar13);
    fVar17 = *(float *)(lVar8 + 0xc) - *(float *)((longlong)iVar11 * 0x20 + lVar13);
    unaff_XMM6_Da = SQRT(fVar21 * fVar21 + fVar17 * fVar17);
    iVar12 = iVar11;
    if (unaff_XMM6_Da <= fVar19) {
      while( true ) {
        iVar12 = iVar12 + 1;
        if (cVar15 == '\0') {
          iVar7 = (int)(*(longlong *)(lVar2 + 0x1298) - *(longlong *)(lVar2 + 0x1290) >> 5);
        }
        else {
          iVar7 = *(int *)(lVar2 + 0x12b0);
        }
        if (iVar7 <= iVar12) goto LAB_1805d3fa3;
        lVar8 = lVar3;
        if (cVar15 == '\0') {
          lVar8 = *(longlong *)(lVar2 + 0x1290);
        }
        lVar13 = lVar3;
        if (cVar15 == '\0') {
          lVar13 = *(longlong *)(lVar2 + 0x1290);
        }
        fVar21 = *(float *)(lVar8 + 4 + (longlong)iVar11 * 0x20) -
                 *(float *)((longlong)iVar12 * 0x20 + 4 + lVar13);
        fVar17 = *(float *)(lVar8 + (longlong)iVar11 * 0x20) -
                 *(float *)((longlong)iVar12 * 0x20 + lVar13);
        unaff_XMM6_Da = unaff_XMM6_Da + SQRT(fVar21 * fVar21 + fVar17 * fVar17);
        if (fVar19 < unaff_XMM6_Da) break;
        iVar11 = iVar11 + 1;
      }
    }
  }
  else {
    if ((*(uint *)((longlong)plVar14 + 0x209c) >> 0xb & 1) != 0) goto LAB_1805d3fbf;
    iVar11 = (int)plVar14[0x297];
    if (((((iVar11 == -1) || (*(int *)((longlong)plVar14 + 0x1b6c) <= iVar11)) ||
         ((*(int *)(((longlong)iVar11 + 0x65) * 0x3c + (longlong)plVar14) != *(int *)(lVar8 + 0x10)
          || (*(int *)((longlong)iVar11 * 0x3c + 0x17e4 + (longlong)plVar14) == 0)))) ||
        ((cVar15 != '\0' && (pcVar10 = (char *)FUN_1805b7540(), *pcVar10 != '\0')))) ||
       ((fVar17 * fVar17 * 0.25 < fVar21 * fVar21 + fVar19 * fVar19 &&
        (-1 < *(int *)(*(longlong *)*unaff_RBX + 0x564))))) goto LAB_1805d3fbf;
    fVar19 = 0.0;
    unaff_XMM6_Da = *(float *)((longlong)*(int *)(*unaff_RBX + 0x14b8) * 0x3c + 0x17e0 + *unaff_RBX)
    ;
LAB_1805d3fa3:
    bVar5 = unaff_XMM6_Da < fVar19;
    fVar19 = unaff_XMM6_Da;
    if ((bVar5) && (unaff_XMM6_Da <= in_stack_000000e0)) goto LAB_1805d3fbf;
  }
  *(float *)((longlong)unaff_RBX + 0x9c) = fVar19 / unaff_XMM11_Da;
LAB_1805d3fbf:
  *(uint *)(unaff_RBX + 1) = *(uint *)(unaff_RBX + 1) | 0x10;
  return;
}






