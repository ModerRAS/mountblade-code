#include "TaleWorlds.Native.Split.h"

// 99_part_12_part032.c - 2 个函数

// 函数: void FUN_1807dff00(float *param_1,float *param_2,int param_3,float *param_4,undefined4 param_5,
void FUN_1807dff00(float *param_1,float *param_2,int param_3,float *param_4,undefined4 param_5,
                  uint param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  bool bVar16;
  uint uVar17;
  float *pfVar18;
  float *pfVar19;
  undefined1 *puVar20;
  ulonglong uVar21;
  float *pfVar22;
  float *pfVar23;
  float *pfVar24;
  int iVar25;
  longlong lVar26;
  undefined1 auStack_108 [72];
  float afStack_c0 [18];
  undefined1 auStack_78 [32];
  undefined4 uStack_58;
  uint uStack_50;
  int iStack_48;
  ulonglong auStack_38 [2];
  
  auStack_38[0] = _DAT_180bf00a8 ^ (ulonglong)auStack_38;
  lVar26 = (longlong)(int)param_6;
  bVar16 = true;
  if (param_6 == 2) {
    iStack_48 = param_7;
    uStack_50 = param_6;
    uStack_58 = param_5;
    afStack_c0[0x10] = -1.1571044e-38;
    afStack_c0[0x11] = 1.4013e-45;
    func_0x0001807e16c0();
    puVar20 = auStack_78;
  }
  else if (param_6 == 6) {
    iStack_48 = param_7;
    uStack_50 = param_6;
    uStack_58 = param_5;
    afStack_c0[0x10] = -1.157109e-38;
    afStack_c0[0x11] = 1.4013e-45;
    FUN_1807dfbe0();
    puVar20 = auStack_78;
  }
  else if (param_6 == 8) {
    fVar1 = param_4[99];
    fVar2 = param_4[0x42];
    fVar3 = param_4[0x21];
    fVar4 = *param_4;
    fVar5 = param_4[0x84];
    fVar6 = param_4[0xe7];
    fVar7 = param_4[0xc6];
    fVar8 = param_4[0xa5];
    puVar20 = auStack_78;
    if (param_3 != 0) {
      lVar26 = (longlong)param_1 - (longlong)param_2;
      param_2 = param_2 + 4;
      if (param_7 == 0) {
        do {
          pfVar18 = (float *)((longlong)param_2 + lVar26 + -0x10);
          fVar9 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[3];
          pfVar19 = (float *)((longlong)param_2 + lVar26);
          fVar12 = *pfVar19;
          fVar13 = pfVar19[1];
          fVar14 = pfVar19[2];
          fVar15 = pfVar19[3];
          param_2[-4] = *pfVar18 * fVar4 + param_2[-4];
          param_2[-3] = fVar9 * fVar3 + param_2[-3];
          param_2[-2] = fVar10 * fVar2 + param_2[-2];
          param_2[-1] = fVar11 * fVar1 + param_2[-1];
          *param_2 = fVar12 * fVar5 + *param_2;
          param_2[1] = fVar13 * fVar8 + param_2[1];
          param_2[2] = fVar14 * fVar7 + param_2[2];
          param_2[3] = fVar15 * fVar6 + param_2[3];
          param_2 = param_2 + 8;
          param_3 = param_3 + -1;
          puVar20 = auStack_78;
        } while (param_3 != 0);
      }
      else {
        do {
          pfVar18 = (float *)(lVar26 + -0x10 + (longlong)param_2);
          fVar9 = pfVar18[1];
          fVar10 = pfVar18[2];
          fVar11 = pfVar18[3];
          pfVar19 = (float *)((longlong)param_2 + lVar26);
          fVar12 = *pfVar19;
          fVar13 = pfVar19[1];
          fVar14 = pfVar19[2];
          fVar15 = pfVar19[3];
          param_2[-4] = *pfVar18 * fVar4;
          param_2[-3] = fVar9 * fVar3;
          param_2[-2] = fVar10 * fVar2;
          param_2[-1] = fVar11 * fVar1;
          *param_2 = fVar12 * fVar5;
          param_2[1] = fVar13 * fVar8;
          param_2[2] = fVar14 * fVar7;
          param_2[3] = fVar15 * fVar6;
          param_3 = param_3 + -1;
          param_2 = param_2 + 8;
          puVar20 = auStack_78;
        } while (param_3 != 0);
      }
    }
  }
  else {
    iVar25 = 0;
    if (3 < (int)param_6) {
      pfVar18 = afStack_c0 + 2;
      uVar17 = (param_6 - 4 >> 2) + 1;
      pfVar19 = param_4 + 0x42;
      uVar21 = (ulonglong)uVar17;
      iVar25 = uVar17 * 4;
      do {
        fVar1 = pfVar19[-0x42];
        pfVar18[-2] = fVar1;
        if (fVar1 != 1.0) {
          bVar16 = false;
        }
        fVar1 = pfVar19[-0x21];
        pfVar18[-1] = fVar1;
        if (fVar1 != 1.0) {
          bVar16 = false;
        }
        fVar1 = *pfVar19;
        *pfVar18 = fVar1;
        if (fVar1 != 1.0) {
          bVar16 = false;
        }
        fVar1 = pfVar19[0x21];
        pfVar18[1] = fVar1;
        if (fVar1 != 1.0) {
          bVar16 = false;
        }
        pfVar19 = pfVar19 + 0x84;
        pfVar18 = pfVar18 + 4;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (iVar25 < (int)param_6) {
      pfVar19 = afStack_c0 + iVar25;
      param_4 = param_4 + (longlong)iVar25 * 0x21;
      uVar21 = (ulonglong)(param_6 - iVar25);
      do {
        fVar1 = *param_4;
        *pfVar19 = fVar1;
        if (fVar1 != 1.0) {
          bVar16 = false;
        }
        param_4 = param_4 + 0x21;
        pfVar19 = pfVar19 + 1;
        uVar21 = uVar21 - 1;
      } while (uVar21 != 0);
    }
    if (param_7 != 0) {
      if (bVar16) {
                    // WARNING: Subroutine does not return
        memcpy(param_2,param_1);
      }
                    // WARNING: Subroutine does not return
      memset(param_2,0,(ulonglong)(param_3 * param_6) << 2);
    }
    uVar17 = param_6 & 3;
    iVar25 = (int)param_6 >> 2;
    if (bVar16) {
      if (uVar17 == 0) {
        puVar20 = auStack_108;
        if (param_3 != 0) {
          do {
            pfVar19 = param_2;
            pfVar18 = param_1;
            switch(iVar25) {
            case 8:
              fVar1 = param_1[1];
              fVar2 = param_1[2];
              fVar3 = param_1[3];
              pfVar19 = param_2 + 4;
              pfVar18 = param_1 + 4;
              *param_2 = *param_1 + *param_2;
              param_2[1] = fVar1 + param_2[1];
              param_2[2] = fVar2 + param_2[2];
              param_2[3] = fVar3 + param_2[3];
            case 7:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 6:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 5:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 4:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 3:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 2:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 1:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
            }
            param_1 = param_1 + lVar26;
            param_2 = param_2 + lVar26;
            param_3 = param_3 + -1;
            puVar20 = auStack_108;
          } while (param_3 != 0);
        }
      }
      else {
        puVar20 = auStack_108;
        if (param_3 != 0) {
          do {
            pfVar19 = param_2;
            pfVar18 = param_1;
            switch(iVar25) {
            case 8:
              fVar1 = param_1[1];
              fVar2 = param_1[2];
              fVar3 = param_1[3];
              pfVar19 = param_2 + 4;
              pfVar18 = param_1 + 4;
              *param_2 = *param_1 + *param_2;
              param_2[1] = fVar1 + param_2[1];
              param_2[2] = fVar2 + param_2[2];
              param_2[3] = fVar3 + param_2[3];
            case 7:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 6:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 5:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 4:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 3:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 2:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            case 1:
              fVar1 = pfVar18[1];
              fVar2 = pfVar18[2];
              fVar3 = pfVar18[3];
              *pfVar19 = *pfVar18 + *pfVar19;
              pfVar19[1] = fVar1 + pfVar19[1];
              pfVar19[2] = fVar2 + pfVar19[2];
              pfVar19[3] = fVar3 + pfVar19[3];
              pfVar19 = pfVar19 + 4;
              pfVar18 = pfVar18 + 4;
            }
            if (uVar17 == 1) {
LAB_1807e02c3:
              *pfVar19 = *pfVar18 + *pfVar19;
            }
            else {
              if (uVar17 == 2) {
LAB_1807e02ae:
                fVar1 = *pfVar18;
                pfVar18 = pfVar18 + 1;
                *pfVar19 = fVar1 + *pfVar19;
                pfVar19 = pfVar19 + 1;
                goto LAB_1807e02c3;
              }
              if (uVar17 == 3) {
                fVar1 = *pfVar18;
                pfVar18 = pfVar18 + 1;
                *pfVar19 = fVar1 + *pfVar19;
                pfVar19 = pfVar19 + 1;
                goto LAB_1807e02ae;
              }
            }
            param_1 = param_1 + lVar26;
            param_2 = param_2 + lVar26;
            param_3 = param_3 + -1;
            puVar20 = auStack_108;
          } while (param_3 != 0);
        }
      }
    }
    else if (uVar17 == 0) {
      puVar20 = auStack_108;
      if (param_3 != 0) {
        do {
          pfVar19 = param_2;
          pfVar18 = param_1;
          pfVar23 = param_1;
          pfVar24 = afStack_c0;
          switch(iVar25) {
          case 8:
            pfVar19 = param_2 + 4;
            fVar1 = param_1[1];
            fVar2 = param_1[2];
            fVar3 = param_1[3];
            pfVar18 = param_1 + 4;
            pfVar24 = afStack_c0 + 4;
            *param_2 = afStack_c0[0] * *param_1 + *param_2;
            param_2[1] = afStack_c0[1] * fVar1 + param_2[1];
            param_2[2] = afStack_c0[2] * fVar2 + param_2[2];
            param_2[3] = afStack_c0[3] * fVar3 + param_2[3];
          case 7:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar18[1];
            fVar5 = pfVar18[2];
            fVar6 = pfVar18[3];
            pfVar23 = pfVar18 + 4;
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 6:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar23[1];
            fVar5 = pfVar23[2];
            fVar6 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 5:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar18[1];
            fVar5 = pfVar18[2];
            fVar6 = pfVar18[3];
            pfVar23 = pfVar18 + 4;
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 4:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar23[1];
            fVar5 = pfVar23[2];
            fVar6 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 3:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar18[1];
            fVar5 = pfVar18[2];
            fVar6 = pfVar18[3];
            pfVar23 = pfVar18 + 4;
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 2:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar23[1];
            fVar5 = pfVar23[2];
            fVar6 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 1:
            fVar1 = pfVar24[1];
            fVar2 = pfVar24[2];
            fVar3 = pfVar24[3];
            fVar4 = pfVar18[1];
            fVar5 = pfVar18[2];
            fVar6 = pfVar18[3];
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar1 * fVar4 + pfVar19[1];
            pfVar19[2] = fVar2 * fVar5 + pfVar19[2];
            pfVar19[3] = fVar3 * fVar6 + pfVar19[3];
          }
          param_1 = param_1 + lVar26;
          param_2 = param_2 + lVar26;
          param_3 = param_3 + -1;
          puVar20 = auStack_108;
        } while (param_3 != 0);
      }
    }
    else {
      puVar20 = auStack_108;
      if (param_3 != 0) {
        do {
          pfVar19 = param_2;
          pfVar18 = param_1;
          pfVar23 = param_1;
          pfVar22 = param_1;
          pfVar24 = afStack_c0;
          switch(iVar25) {
          case 8:
            fVar1 = param_1[1];
            fVar2 = param_1[2];
            fVar3 = param_1[3];
            pfVar19 = param_2 + 4;
            pfVar18 = param_1 + 4;
            pfVar24 = afStack_c0 + 4;
            *param_2 = afStack_c0[0] * *param_1 + *param_2;
            param_2[1] = afStack_c0[1] * fVar1 + param_2[1];
            param_2[2] = afStack_c0[2] * fVar2 + param_2[2];
            param_2[3] = afStack_c0[3] * fVar3 + param_2[3];
          case 7:
            fVar1 = pfVar18[1];
            fVar2 = pfVar18[2];
            fVar3 = pfVar18[3];
            pfVar22 = pfVar18 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 6:
            fVar1 = pfVar22[1];
            fVar2 = pfVar22[2];
            fVar3 = pfVar22[3];
            pfVar23 = pfVar22 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar22 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 5:
            fVar1 = pfVar23[1];
            fVar2 = pfVar23[2];
            fVar3 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 4:
            fVar1 = pfVar18[1];
            fVar2 = pfVar18[2];
            fVar3 = pfVar18[3];
            pfVar23 = pfVar18 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 3:
            fVar1 = pfVar23[1];
            fVar2 = pfVar23[2];
            fVar3 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 2:
            fVar1 = pfVar18[1];
            fVar2 = pfVar18[2];
            fVar3 = pfVar18[3];
            pfVar23 = pfVar18 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          case 1:
            fVar1 = pfVar23[1];
            fVar2 = pfVar23[2];
            fVar3 = pfVar23[3];
            pfVar18 = pfVar23 + 4;
            fVar4 = pfVar24[1];
            fVar5 = pfVar24[2];
            fVar6 = pfVar24[3];
            *pfVar19 = *pfVar24 * *pfVar23 + *pfVar19;
            pfVar19[1] = fVar4 * fVar1 + pfVar19[1];
            pfVar19[2] = fVar5 * fVar2 + pfVar19[2];
            pfVar19[3] = fVar6 * fVar3 + pfVar19[3];
            pfVar19 = pfVar19 + 4;
            pfVar24 = pfVar24 + 4;
          }
          if (uVar17 == 1) {
LAB_1807e0572:
            *pfVar19 = *pfVar24 * *pfVar18 + *pfVar19;
          }
          else {
            if (uVar17 == 2) {
LAB_1807e0554:
              fVar1 = *pfVar24;
              pfVar24 = pfVar24 + 1;
              fVar2 = *pfVar18;
              pfVar18 = pfVar18 + 1;
              *pfVar19 = fVar1 * fVar2 + *pfVar19;
              pfVar19 = pfVar19 + 1;
              goto LAB_1807e0572;
            }
            if (uVar17 == 3) {
              fVar1 = *pfVar24;
              pfVar24 = pfVar24 + 1;
              fVar2 = *pfVar18;
              pfVar18 = pfVar18 + 1;
              *pfVar19 = fVar1 * fVar2 + *pfVar19;
              pfVar19 = pfVar19 + 1;
              goto LAB_1807e0554;
            }
          }
          param_1 = param_1 + lVar26;
          param_2 = param_2 + lVar26;
          param_3 = param_3 + -1;
          puVar20 = auStack_108;
        } while (param_3 != 0);
      }
    }
  }
                    // WARNING: Subroutine does not return
  *(undefined8 *)(puVar20 + -8) = 0x1807e06c3;
  FUN_1808fc050(auStack_38[0] ^ (ulonglong)auStack_38);
}






// 函数: void FUN_1807e0760(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
void FUN_1807e0760(float *param_1,float *param_2,uint param_3,float *param_4,undefined8 param_5,
                  undefined8 param_6,int param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  uint uVar20;
  float *pfVar21;
  
  fVar1 = *param_4;
  fVar2 = param_4[0x20];
  fVar3 = param_4[0x60];
  fVar4 = param_4[0x40];
  fVar5 = param_4[0xa0];
  fVar6 = param_4[0x80];
  fVar7 = param_4[0x40];
  fVar8 = param_4[0x80];
  fVar9 = param_4[0x60];
  uVar20 = param_3 >> 1;
  if (param_7 == 0) {
    if (param_3 >> 1 != 0) {
      pfVar21 = param_2 + 8;
      do {
        fVar10 = *param_1;
        fVar11 = param_1[1];
        param_1 = param_1 + 2;
        fVar12 = pfVar21[-4];
        fVar13 = pfVar21[-3];
        fVar14 = pfVar21[-2];
        fVar15 = pfVar21[-1];
        fVar16 = *pfVar21;
        fVar17 = pfVar21[1];
        fVar18 = pfVar21[2];
        fVar19 = pfVar21[3];
        *param_2 = fVar10 * fVar1 + *param_2;
        param_2[1] = fVar10 * fVar2 + param_2[1];
        param_2[2] = fVar10 * fVar4 + param_2[2];
        param_2[3] = fVar10 * fVar3 + param_2[3];
        param_2 = param_2 + 0xc;
        pfVar21[-4] = fVar10 * fVar6 + fVar12;
        pfVar21[-3] = fVar10 * fVar5 + fVar13;
        pfVar21[-2] = fVar11 * fVar1 + fVar14;
        pfVar21[-1] = fVar11 * fVar2 + fVar15;
        *pfVar21 = fVar11 * fVar7 + fVar16;
        pfVar21[1] = fVar11 * fVar9 + fVar17;
        pfVar21[2] = fVar11 * fVar8 + fVar18;
        pfVar21[3] = fVar11 * fVar5 + fVar19;
        pfVar21 = pfVar21 + 0xc;
        uVar20 = uVar20 - 1;
      } while (uVar20 != 0);
    }
    for (param_3 = param_3 & 1; param_3 != 0; param_3 = param_3 - 1) {
      fVar7 = *param_1;
      param_1 = param_1 + 1;
      *param_2 = fVar7 * fVar1 + *param_2;
      param_2[1] = fVar7 * fVar2 + param_2[1];
      param_2[2] = fVar7 * fVar4 + param_2[2];
      param_2[3] = fVar7 * fVar3 + param_2[3];
      *(ulonglong *)(param_2 + 4) = CONCAT44(fVar7 * fVar5 + param_2[5],fVar7 * fVar6 + param_2[4]);
      param_2 = param_2 + 6;
    }
  }
  else {
    for (uVar20 = param_3 >> 1; uVar20 != 0; uVar20 = uVar20 - 1) {
      fVar10 = *param_1;
      fVar11 = param_1[1];
      param_1 = param_1 + 2;
      *param_2 = fVar10 * fVar1;
      param_2[1] = fVar10 * fVar2;
      param_2[2] = fVar10 * fVar4;
      param_2[3] = fVar10 * fVar3;
      param_2[4] = fVar10 * fVar6;
      param_2[5] = fVar10 * fVar5;
      param_2[6] = fVar11 * fVar1;
      param_2[7] = fVar11 * fVar2;
      param_2[8] = fVar11 * fVar7;
      param_2[9] = fVar11 * fVar9;
      param_2[10] = fVar11 * fVar8;
      param_2[0xb] = fVar11 * fVar5;
      param_2 = param_2 + 0xc;
    }
    param_3 = param_3 & 1;
    if (param_3 != 0) {
      do {
        fVar7 = *param_1;
        param_1 = param_1 + 1;
        *param_2 = fVar7 * fVar1;
        param_2[1] = fVar7 * fVar2;
        param_2[2] = fVar7 * fVar4;
        param_2[3] = fVar7 * fVar3;
        *(ulonglong *)(param_2 + 4) = CONCAT44(fVar7 * fVar5,fVar7 * fVar6);
        param_3 = param_3 - 1;
        param_2 = param_2 + 6;
      } while (param_3 != 0);
      return;
    }
  }
  return;
}






