#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part284.c - 1 个函数

// 函数: void FUN_18082b380(longlong param_1,float *param_2,float *param_3,float *param_4,int param_5,
void FUN_18082b380(longlong param_1,float *param_2,float *param_3,float *param_4,int param_5,
                  int param_6,ulonglong param_7,uint param_8,uint param_9,uint param_10,
                  uint param_11)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
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
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  int iVar39;
  float *pfVar40;
  float *pfVar41;
  float *pfVar42;
  int iVar43;
  uint uVar44;
  ulonglong uVar45;
  float *pfVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  uint uVar50;
  int iVar51;
  int iVar52;
  int iVar53;
  longlong lVar54;
  longlong lVar55;
  ulonglong uVar56;
  ulonglong uVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  uVar56 = (ulonglong)(int)(uint)param_7;
  pfVar42 = (float *)(*(longlong *)(param_1 + 0x10) + (longlong)param_5 * 4);
  pfVar46 = (float *)(*(longlong *)(param_1 + 8) + (longlong)param_6 * 4);
  if ((uint)param_7 == 1) {
    func_0x00018082bef0(param_2,param_3,param_4,pfVar42,pfVar46,param_8,param_9,param_10,param_11);
    return;
  }
  iVar39 = (int)param_8 >> 2;
  iVar51 = (int)param_9 >> 2;
  iVar52 = (int)param_10 >> 2;
  iVar53 = (int)param_11 >> 2;
  if ((uint)param_7 != 2) {
    iVar12 = (uint)param_7 * 2;
    iVar11 = (uint)param_7 * 3;
    uVar57 = uVar56;
    if (iVar39 != 0) {
      do {
        pfVar42 = pfVar42 + -4;
        iVar43 = 0;
        if ((int)(uint)param_7 >> 2 != 0) {
          iVar47 = 0x400;
          iVar49 = (int)(uint)param_7 >> 2;
          iVar48 = iVar43;
          do {
            pfVar41 = pfVar42 + (iVar47 + -0x400);
            fVar9 = *pfVar41;
            fVar10 = pfVar41[1];
            fVar7 = pfVar41[2];
            pfVar40 = pfVar42 + (iVar47 + -0x200);
            fVar8 = *pfVar40;
            fVar13 = pfVar40[1];
            fVar14 = pfVar40[2];
            fVar15 = pfVar40[3];
            auVar58 = *(undefined1 (*) [16])(pfVar42 + iVar47);
            iVar43 = iVar47 + 0x200;
            iVar47 = iVar47 + 0x800;
            pfVar40 = pfVar42 + iVar43;
            fVar16 = *pfVar40;
            fVar17 = pfVar40[1];
            fVar18 = pfVar40[2];
            fVar19 = pfVar40[3];
            iVar43 = iVar48 + 4;
            pfVar40 = param_2 + iVar48;
            *pfVar40 = pfVar41[3];
            pfVar40[1] = fVar15;
            pfVar40[2] = auVar58._12_4_;
            pfVar40[3] = fVar19;
            pfVar41 = param_2 + (longlong)iVar48 + uVar56;
            *pfVar41 = fVar7;
            pfVar41[1] = fVar14;
            pfVar41[2] = auVar58._8_4_;
            pfVar41[3] = fVar18;
            pfVar41 = param_2 + (longlong)iVar12 + (longlong)iVar48;
            *pfVar41 = fVar10;
            pfVar41[1] = fVar13;
            pfVar41[2] = auVar58._4_4_;
            pfVar41[3] = fVar17;
            pfVar41 = param_2 + (longlong)iVar48 + (longlong)iVar11;
            *pfVar41 = fVar9;
            pfVar41[1] = fVar8;
            pfVar41[2] = auVar58._0_4_;
            pfVar41[3] = fVar16;
            iVar49 = iVar49 + -1;
            iVar48 = iVar43;
          } while (iVar49 != 0);
        }
        if ((param_7 & 3) != 0) {
          iVar49 = iVar43 << 9;
          uVar50 = (uint)param_7 & 3;
          do {
            lVar54 = (longlong)iVar49;
            iVar49 = iVar49 + 0x200;
            pfVar41 = pfVar42 + lVar54;
            fVar9 = *pfVar41;
            fVar10 = pfVar41[1];
            fVar7 = pfVar41[2];
            param_2[iVar43] = pfVar41[3];
            param_2[(longlong)iVar43 + uVar56] = fVar7;
            param_2[(longlong)iVar43 + (longlong)iVar12] = fVar10;
            param_2[(longlong)iVar11 + (longlong)iVar43] = fVar9;
            uVar50 = uVar50 - 1;
            iVar43 = iVar43 + 1;
          } while (uVar50 != 0);
        }
        param_2 = param_2 + (int)((uint)param_7 * 4);
        iVar39 = iVar39 + -1;
      } while (iVar39 != 0);
      uVar57 = param_7 & 0xffffffff;
    }
    uVar50 = (uint)uVar57;
    for (param_8 = param_8 & 3; param_8 != 0; param_8 = param_8 - 1) {
      pfVar42 = pfVar42 + -1;
      uVar45 = uVar57 & 0xffffffff;
      pfVar41 = pfVar42;
      uVar44 = uVar50;
      while (uVar44 != 0) {
        fVar9 = *pfVar41;
        pfVar41 = pfVar41 + 0x200;
        *param_2 = fVar9;
        param_2 = param_2 + 1;
        uVar44 = (int)uVar45 - 1;
        uVar45 = (ulonglong)uVar44;
      }
    }
    if (iVar51 != 0) {
      do {
        fVar9 = param_3[-4];
        fVar10 = param_3[-3];
        fVar7 = param_3[-2];
        fVar8 = param_3[-1];
        param_3 = param_3 + -4;
        pfVar42 = pfVar42 + -4;
        fVar13 = *param_4;
        fVar14 = param_4[1];
        fVar15 = param_4[2];
        fVar16 = param_4[3];
        iVar39 = 0;
        if ((int)uVar50 >> 2 != 0) {
          iVar48 = 0x800;
          iVar47 = 0x400;
          iVar43 = (int)uVar50 >> 2;
          iVar49 = iVar39;
          do {
            pfVar41 = pfVar42 + (iVar47 + -0x400);
            fVar17 = *pfVar41;
            fVar18 = pfVar41[1];
            pfVar40 = pfVar42 + (iVar47 + -0x200);
            fVar19 = *pfVar40;
            fVar20 = pfVar40[1];
            fVar21 = pfVar40[3];
            pfVar1 = pfVar42 + iVar47;
            fVar22 = *pfVar1;
            fVar23 = pfVar1[1];
            fVar24 = pfVar1[3];
            iVar39 = iVar47 + 0x200;
            iVar47 = iVar47 + 0x800;
            pfVar2 = pfVar42 + iVar39;
            fVar25 = *pfVar2;
            fVar26 = pfVar2[1];
            fVar27 = pfVar2[3];
            pfVar3 = pfVar46 + (iVar48 + -0x800);
            fVar28 = pfVar3[2];
            fVar29 = pfVar3[3];
            pfVar4 = pfVar46 + (iVar48 + -0x400);
            fVar30 = *pfVar4;
            fVar31 = pfVar4[2];
            fVar32 = pfVar4[3];
            pfVar5 = pfVar46 + iVar48;
            fVar33 = *pfVar5;
            fVar34 = pfVar5[2];
            fVar35 = pfVar5[3];
            iVar39 = iVar48 + 0x400;
            iVar48 = iVar48 + 0x1000;
            pfVar6 = pfVar46 + iVar39;
            fVar36 = *pfVar6;
            fVar37 = pfVar6[2];
            fVar38 = pfVar6[3];
            iVar39 = iVar49 + 4;
            auVar58._4_4_ = pfVar40[2] * fVar7 + pfVar4[1] * fVar14;
            auVar58._0_4_ = pfVar41[2] * fVar7 + pfVar3[1] * fVar14;
            auVar58._8_4_ = pfVar1[2] * fVar7 + pfVar5[1] * fVar14;
            auVar58._12_4_ = pfVar2[2] * fVar7 + pfVar6[1] * fVar14;
            pfVar40 = param_2 + iVar49;
            *pfVar40 = pfVar41[3] * fVar8 + *pfVar3 * fVar13;
            pfVar40[1] = fVar21 * fVar8 + fVar30 * fVar13;
            pfVar40[2] = fVar24 * fVar8 + fVar33 * fVar13;
            pfVar40[3] = fVar27 * fVar8 + fVar36 * fVar13;
            *(undefined1 (*) [16])(param_2 + (longlong)iVar49 + uVar56) = auVar58;
            pfVar41 = param_2 + (longlong)iVar12 + (longlong)iVar49;
            *pfVar41 = fVar18 * fVar10 + fVar28 * fVar15;
            pfVar41[1] = fVar20 * fVar10 + fVar31 * fVar15;
            pfVar41[2] = fVar23 * fVar10 + fVar34 * fVar15;
            pfVar41[3] = fVar26 * fVar10 + fVar37 * fVar15;
            pfVar41 = param_2 + (longlong)iVar49 + (longlong)iVar11;
            *pfVar41 = fVar17 * fVar9 + fVar29 * fVar16;
            pfVar41[1] = fVar19 * fVar9 + fVar32 * fVar16;
            pfVar41[2] = fVar22 * fVar9 + fVar35 * fVar16;
            pfVar41[3] = fVar25 * fVar9 + fVar38 * fVar16;
            iVar43 = iVar43 + -1;
            iVar49 = iVar39;
          } while (iVar43 != 0);
        }
        if ((uVar57 & 3) != 0) {
          iVar43 = iVar39 << 10;
          iVar49 = iVar39 << 9;
          uVar44 = uVar50 & 3;
          do {
            lVar54 = (longlong)iVar49;
            iVar49 = iVar49 + 0x200;
            pfVar41 = pfVar42 + lVar54;
            fVar17 = *pfVar41;
            fVar18 = pfVar41[1];
            fVar19 = pfVar41[2];
            lVar54 = (longlong)iVar43;
            iVar43 = iVar43 + 0x400;
            pfVar40 = pfVar46 + lVar54;
            fVar20 = pfVar40[1];
            fVar21 = pfVar40[2];
            fVar22 = pfVar40[3];
            param_2[iVar39] = pfVar41[3] * fVar8 + *pfVar40 * fVar13;
            param_2[(longlong)iVar39 + uVar56] = fVar19 * fVar7 + fVar20 * fVar14;
            param_2[(longlong)iVar39 + (longlong)iVar12] = fVar18 * fVar10 + fVar21 * fVar15;
            param_2[(longlong)iVar39 + (longlong)iVar11] = fVar17 * fVar9 + fVar22 * fVar16;
            uVar44 = uVar44 - 1;
            iVar39 = iVar39 + 1;
          } while (uVar44 != 0);
        }
        param_2 = param_2 + (int)(uVar50 * 4);
        pfVar46 = pfVar46 + 4;
        param_4 = param_4 + 4;
        iVar51 = iVar51 + -1;
      } while (iVar51 != 0);
      uVar57 = param_7 & 0xffffffff;
    }
    uVar50 = (uint)uVar57;
    for (param_9 = param_9 & 3; param_9 != 0; param_9 = param_9 - 1) {
      fVar9 = param_3[-1];
      param_3 = param_3 + -1;
      fVar10 = *param_4;
      pfVar42 = pfVar42 + -1;
      uVar45 = uVar57 & 0xffffffff;
      pfVar41 = pfVar42;
      pfVar40 = pfVar46;
      uVar44 = uVar50;
      while (uVar44 != 0) {
        fVar7 = *pfVar41;
        pfVar41 = pfVar41 + 0x200;
        fVar8 = *pfVar40;
        pfVar40 = pfVar40 + 0x400;
        *param_2 = fVar9 * fVar7 + fVar10 * fVar8;
        param_2 = param_2 + 1;
        uVar44 = (int)uVar45 - 1;
        uVar45 = (ulonglong)uVar44;
      }
      pfVar46 = pfVar46 + 1;
      param_4 = param_4 + 1;
    }
    if (iVar52 != 0) {
      do {
        fVar9 = param_3[-4];
        fVar10 = param_3[-3];
        fVar7 = param_3[-2];
        fVar8 = param_3[-1];
        param_3 = param_3 + -4;
        pfVar46 = pfVar46 + -4;
        fVar13 = *param_4;
        fVar14 = param_4[1];
        fVar15 = param_4[2];
        fVar16 = param_4[3];
        iVar39 = 0;
        if ((int)uVar50 >> 2 != 0) {
          iVar48 = 0x800;
          iVar49 = 0x400;
          iVar51 = (int)uVar50 >> 2;
          iVar43 = iVar39;
          do {
            pfVar41 = pfVar42 + (iVar49 + -0x400);
            fVar17 = pfVar41[2];
            fVar18 = pfVar41[3];
            pfVar40 = pfVar42 + (iVar49 + -0x200);
            fVar19 = *pfVar40;
            fVar20 = pfVar40[2];
            fVar21 = pfVar40[3];
            pfVar1 = pfVar42 + iVar49;
            fVar22 = *pfVar1;
            fVar23 = pfVar1[2];
            fVar24 = pfVar1[3];
            iVar39 = iVar49 + 0x200;
            iVar49 = iVar49 + 0x800;
            pfVar2 = pfVar42 + iVar39;
            fVar25 = *pfVar2;
            fVar26 = pfVar2[2];
            fVar27 = pfVar2[3];
            iVar39 = iVar48 + -0x400;
            pfVar3 = pfVar46 + (iVar48 + -0x800);
            fVar28 = *pfVar3;
            fVar29 = pfVar3[1];
            pfVar4 = pfVar46 + iVar48;
            fVar30 = *pfVar4;
            fVar31 = pfVar4[1];
            fVar32 = pfVar4[3];
            iVar47 = iVar48 + 0x400;
            iVar48 = iVar48 + 0x1000;
            pfVar5 = pfVar46 + iVar39;
            fVar33 = *pfVar5;
            fVar34 = pfVar5[1];
            fVar35 = pfVar5[3];
            pfVar6 = pfVar46 + iVar47;
            fVar36 = *pfVar6;
            fVar37 = pfVar6[1];
            fVar38 = pfVar6[3];
            iVar39 = iVar43 + 4;
            auVar59._4_4_ = pfVar40[1] * fVar7 - pfVar5[2] * fVar14;
            auVar59._0_4_ = pfVar41[1] * fVar7 - pfVar3[2] * fVar14;
            auVar59._8_4_ = pfVar1[1] * fVar7 - pfVar4[2] * fVar14;
            auVar59._12_4_ = pfVar2[1] * fVar7 - pfVar6[2] * fVar14;
            pfVar40 = param_2 + iVar43;
            *pfVar40 = *pfVar41 * fVar8 - pfVar3[3] * fVar13;
            pfVar40[1] = fVar19 * fVar8 - fVar35 * fVar13;
            pfVar40[2] = fVar22 * fVar8 - fVar32 * fVar13;
            pfVar40[3] = fVar25 * fVar8 - fVar38 * fVar13;
            *(undefined1 (*) [16])(param_2 + (longlong)iVar43 + uVar56) = auVar59;
            pfVar41 = param_2 + (longlong)iVar43 + (longlong)iVar12;
            *pfVar41 = fVar17 * fVar10 - fVar29 * fVar15;
            pfVar41[1] = fVar20 * fVar10 - fVar34 * fVar15;
            pfVar41[2] = fVar23 * fVar10 - fVar31 * fVar15;
            pfVar41[3] = fVar26 * fVar10 - fVar37 * fVar15;
            pfVar41 = param_2 + (longlong)iVar43 + (longlong)iVar11;
            *pfVar41 = fVar18 * fVar9 - fVar28 * fVar16;
            pfVar41[1] = fVar21 * fVar9 - fVar33 * fVar16;
            pfVar41[2] = fVar24 * fVar9 - fVar30 * fVar16;
            pfVar41[3] = fVar27 * fVar9 - fVar36 * fVar16;
            iVar51 = iVar51 + -1;
            iVar43 = iVar39;
          } while (iVar51 != 0);
        }
        if ((uVar57 & 3) != 0) {
          iVar51 = iVar39 << 9;
          iVar43 = iVar39 << 10;
          uVar44 = uVar50 & 3;
          do {
            lVar54 = (longlong)iVar43;
            iVar43 = iVar43 + 0x400;
            pfVar41 = pfVar46 + lVar54;
            fVar17 = *pfVar41;
            fVar18 = pfVar41[1];
            fVar19 = pfVar41[2];
            lVar54 = (longlong)iVar51;
            iVar51 = iVar51 + 0x200;
            pfVar40 = pfVar42 + lVar54;
            fVar20 = pfVar40[1];
            fVar21 = pfVar40[2];
            fVar22 = pfVar40[3];
            param_2[iVar39] = *pfVar40 * fVar8 - pfVar41[3] * fVar13;
            param_2[(longlong)iVar39 + uVar56] = fVar20 * fVar7 - fVar19 * fVar14;
            param_2[(longlong)iVar39 + (longlong)iVar12] = fVar21 * fVar10 - fVar18 * fVar15;
            param_2[(longlong)iVar39 + (longlong)iVar11] = fVar22 * fVar9 - fVar17 * fVar16;
            uVar44 = uVar44 - 1;
            iVar39 = iVar39 + 1;
          } while (uVar44 != 0);
        }
        param_2 = param_2 + (int)(uVar50 * 4);
        pfVar42 = pfVar42 + 4;
        param_4 = param_4 + 4;
        iVar52 = iVar52 + -1;
      } while (iVar52 != 0);
      uVar57 = param_7 & 0xffffffff;
    }
    param_10 = param_10 & 3;
    uVar50 = (uint)uVar57;
    pfVar41 = pfVar46;
    if (param_10 != 0) {
      lVar54 = (longlong)pfVar42 - (longlong)param_4;
      pfVar42 = pfVar46;
      do {
        fVar9 = *param_4;
        pfVar41 = pfVar42 + -1;
        uVar45 = uVar57 & 0xffffffff;
        fVar10 = *(float *)((longlong)pfVar42 + (longlong)param_3 + (-4 - (longlong)pfVar46));
        if (uVar50 != 0) {
          pfVar42 = (float *)(lVar54 + (longlong)param_4);
          pfVar40 = pfVar41;
          do {
            fVar7 = *pfVar42;
            pfVar42 = pfVar42 + 0x200;
            fVar8 = *pfVar40;
            pfVar40 = pfVar40 + 0x400;
            *param_2 = fVar10 * fVar7 - fVar9 * fVar8;
            param_2 = param_2 + 1;
            uVar44 = (int)uVar45 - 1;
            uVar45 = (ulonglong)uVar44;
          } while (uVar44 != 0);
        }
        param_4 = param_4 + 1;
        param_10 = param_10 - 1;
        pfVar42 = pfVar41;
      } while (param_10 != 0);
    }
    if (iVar53 != 0) {
      do {
        pfVar41 = pfVar41 + -4;
        iVar39 = 0;
        if ((int)uVar50 >> 2 != 0) {
          iVar43 = 0x800;
          iVar51 = (int)uVar50 >> 2;
          iVar52 = iVar39;
          do {
            pfVar42 = pfVar41 + (iVar43 + -0x800);
            fVar9 = *pfVar42;
            fVar10 = pfVar42[2];
            pfVar46 = pfVar41 + (iVar43 + -0x400);
            fVar7 = *pfVar46;
            fVar8 = pfVar46[2];
            fVar13 = pfVar46[3];
            pfVar40 = pfVar41 + iVar43;
            fVar14 = *pfVar40;
            fVar15 = pfVar40[2];
            fVar16 = pfVar40[3];
            iVar39 = iVar43 + 0x400;
            iVar43 = iVar43 + 0x1000;
            pfVar1 = pfVar41 + iVar39;
            fVar17 = *pfVar1;
            fVar18 = pfVar1[2];
            fVar19 = pfVar1[3];
            iVar39 = iVar52 + 4;
            auVar60._4_4_ = pfVar46[1] * -1.0;
            auVar60._0_4_ = pfVar42[1] * -1.0;
            auVar60._8_4_ = pfVar40[1] * -1.0;
            auVar60._12_4_ = pfVar1[1] * -1.0;
            pfVar46 = param_2 + iVar52;
            *pfVar46 = pfVar42[3] * -1.0;
            pfVar46[1] = fVar13 * -1.0;
            pfVar46[2] = fVar16 * -1.0;
            pfVar46[3] = fVar19 * -1.0;
            pfVar42 = param_2 + (longlong)iVar52 + uVar56;
            *pfVar42 = fVar10 * -1.0;
            pfVar42[1] = fVar8 * -1.0;
            pfVar42[2] = fVar15 * -1.0;
            pfVar42[3] = fVar18 * -1.0;
            *(undefined1 (*) [16])(param_2 + (longlong)iVar12 + (longlong)iVar52) = auVar60;
            pfVar42 = param_2 + (longlong)iVar11 + (longlong)iVar52;
            *pfVar42 = fVar9 * -1.0;
            pfVar42[1] = fVar7 * -1.0;
            pfVar42[2] = fVar14 * -1.0;
            pfVar42[3] = fVar17 * -1.0;
            iVar51 = iVar51 + -1;
            iVar52 = iVar39;
          } while (iVar51 != 0);
        }
        if ((uVar57 & 3) != 0) {
          iVar51 = iVar39 << 10;
          uVar44 = uVar50 & 3;
          do {
            lVar54 = (longlong)iVar51;
            iVar51 = iVar51 + 0x400;
            pfVar42 = pfVar41 + lVar54;
            fVar9 = *pfVar42;
            fVar10 = pfVar42[1];
            fVar7 = pfVar42[2];
            param_2[iVar39] = pfVar42[3] * -1.0;
            param_2[(longlong)iVar39 + uVar56] = fVar7 * -1.0;
            param_2[(longlong)iVar12 + (longlong)iVar39] = fVar10 * -1.0;
            param_2[(longlong)iVar11 + (longlong)iVar39] = fVar9 * -1.0;
            uVar44 = uVar44 - 1;
            iVar39 = iVar39 + 1;
          } while (uVar44 != 0);
        }
        param_2 = param_2 + (int)(uVar50 * 4);
        iVar53 = iVar53 + -1;
      } while (iVar53 != 0);
      uVar57 = param_7 & 0xffffffff;
    }
    for (param_11 = param_11 & 3; param_11 != 0; param_11 = param_11 - 1) {
      pfVar41 = pfVar41 + -1;
      uVar50 = (uint)uVar57;
      uVar56 = uVar57 & 0xffffffff;
      pfVar42 = pfVar41;
      while (uVar50 != 0) {
        fVar9 = *pfVar42;
        pfVar42 = pfVar42 + 0x400;
        *param_2 = -fVar9;
        param_2 = param_2 + 1;
        uVar50 = (int)uVar56 - 1;
        uVar56 = (ulonglong)uVar50;
      }
    }
    return;
  }
  pfVar41 = pfVar46 + 0x400;
  pfVar40 = pfVar42 + 0x200;
  for (; iVar39 != 0; iVar39 = iVar39 + -1) {
    fVar9 = pfVar42[-4];
    fVar10 = pfVar42[-3];
    fVar7 = pfVar42[-2];
    pfVar1 = pfVar42 + -1;
    pfVar42 = pfVar42 + -4;
    fVar8 = pfVar40[-4];
    fVar13 = pfVar40[-3];
    fVar14 = pfVar40[-2];
    *(ulonglong *)param_2 = CONCAT44(pfVar40[-1],*pfVar1);
    param_2[4] = fVar7;
    param_2[5] = fVar14;
    param_2[4] = fVar10;
    param_2[5] = fVar13;
    param_2[6] = fVar9;
    param_2[7] = fVar8;
    param_2 = param_2 + 8;
    pfVar40 = pfVar40 + -4;
  }
  for (param_8 = param_8 & 3; param_8 != 0; param_8 = param_8 - 1) {
    pfVar1 = pfVar42 + -1;
    pfVar42 = pfVar42 + -1;
    pfVar40 = pfVar40 + -1;
    *param_2 = *pfVar1;
    param_2[1] = *pfVar40;
    param_2 = param_2 + 2;
  }
  for (; iVar51 != 0; iVar51 = iVar51 + -1) {
    fVar9 = *param_4;
    fVar10 = param_4[1];
    fVar7 = param_4[2];
    fVar8 = param_4[3];
    fVar13 = *pfVar46;
    fVar14 = pfVar46[1];
    fVar15 = pfVar46[2];
    fVar16 = pfVar46[3];
    param_4 = param_4 + 4;
    pfVar46 = pfVar46 + 4;
    fVar17 = pfVar42[-4];
    fVar18 = pfVar42[-3];
    fVar19 = pfVar42[-2];
    fVar20 = param_3[-4];
    fVar21 = param_3[-3];
    fVar22 = param_3[-2];
    fVar23 = pfVar40[-4];
    fVar24 = pfVar40[-3];
    fVar25 = pfVar40[-2];
    fVar26 = *pfVar41;
    fVar27 = pfVar41[1];
    fVar28 = pfVar41[2];
    fVar29 = pfVar41[3];
    pfVar41 = pfVar41 + 4;
    *(ulonglong *)param_2 =
         CONCAT44(pfVar40[-1] * param_3[-1] + fVar26 * fVar9,
                  pfVar42[-1] * param_3[-1] + fVar13 * fVar9);
    param_2[4] = fVar19 * fVar22 + fVar14 * fVar10;
    param_2[5] = fVar25 * fVar22 + fVar27 * fVar10;
    param_2[4] = fVar18 * fVar21 + fVar15 * fVar7;
    param_2[5] = fVar24 * fVar21 + fVar28 * fVar7;
    param_2[6] = fVar17 * fVar20 + fVar16 * fVar8;
    param_2[7] = fVar23 * fVar20 + fVar29 * fVar8;
    param_2 = param_2 + 8;
    pfVar42 = pfVar42 + -4;
    pfVar40 = pfVar40 + -4;
    param_3 = param_3 + -4;
  }
  for (param_9 = param_9 & 3; param_9 != 0; param_9 = param_9 - 1) {
    fVar9 = *pfVar46;
    param_3 = param_3 + -1;
    pfVar42 = pfVar42 + -1;
    pfVar40 = pfVar40 + -1;
    pfVar46 = pfVar46 + 1;
    *param_2 = *param_3 * *pfVar42 + fVar9 * *param_4;
    fVar9 = *pfVar41;
    pfVar41 = pfVar41 + 1;
    fVar10 = *param_4;
    param_4 = param_4 + 1;
    param_2[1] = fVar9 * fVar10 + *pfVar40 * *param_3;
    param_2 = param_2 + 2;
  }
  for (; iVar52 != 0; iVar52 = iVar52 + -1) {
    fVar9 = *param_4;
    fVar10 = param_4[1];
    fVar7 = param_4[2];
    fVar8 = param_4[3];
    fVar13 = *pfVar42;
    fVar14 = pfVar42[1];
    fVar15 = pfVar42[2];
    fVar16 = pfVar42[3];
    param_4 = param_4 + 4;
    pfVar42 = pfVar42 + 4;
    fVar17 = pfVar46[-4];
    fVar18 = pfVar46[-3];
    fVar19 = pfVar46[-2];
    fVar20 = pfVar41[-4];
    fVar21 = pfVar41[-3];
    fVar22 = pfVar41[-2];
    fVar23 = param_3[-4];
    fVar24 = param_3[-3];
    fVar25 = param_3[-2];
    fVar26 = *pfVar40;
    fVar27 = pfVar40[1];
    fVar28 = pfVar40[2];
    fVar29 = pfVar40[3];
    pfVar40 = pfVar40 + 4;
    *(ulonglong *)param_2 =
         CONCAT44(fVar26 * param_3[-1] - pfVar41[-1] * fVar9,
                  fVar13 * param_3[-1] - pfVar46[-1] * fVar9);
    param_2[4] = fVar14 * fVar25 - fVar19 * fVar10;
    param_2[5] = fVar27 * fVar25 - fVar22 * fVar10;
    param_2[4] = fVar15 * fVar24 - fVar18 * fVar7;
    param_2[5] = fVar28 * fVar24 - fVar21 * fVar7;
    param_2[6] = fVar16 * fVar23 - fVar17 * fVar8;
    param_2[7] = fVar29 * fVar23 - fVar20 * fVar8;
    param_2 = param_2 + 8;
    pfVar41 = pfVar41 + -4;
    pfVar46 = pfVar46 + -4;
    param_3 = param_3 + -4;
  }
  param_10 = param_10 & 3;
  if (param_10 != 0) {
    lVar54 = (longlong)pfVar42 - (longlong)param_4;
    lVar55 = (longlong)pfVar40 - (longlong)param_4;
    do {
      pfVar42 = pfVar46 + -1;
      param_3 = param_3 + -1;
      pfVar46 = pfVar46 + -1;
      pfVar41 = pfVar41 + -1;
      *param_2 = *(float *)(lVar54 + (longlong)param_4) * *param_3 - *pfVar42 * *param_4;
      pfVar42 = (float *)(lVar55 + (longlong)param_4);
      fVar9 = *param_4;
      param_4 = param_4 + 1;
      param_2[1] = *pfVar42 * *param_3 - *pfVar41 * fVar9;
      param_2 = param_2 + 2;
      param_10 = param_10 - 1;
    } while (param_10 != 0);
  }
  for (; iVar53 != 0; iVar53 = iVar53 + -1) {
    fVar9 = pfVar46[-4];
    fVar10 = pfVar46[-3];
    fVar7 = pfVar46[-2];
    fVar8 = pfVar41[-4];
    fVar13 = pfVar41[-3];
    fVar14 = pfVar41[-2];
    fVar15 = pfVar41[-1];
    *param_2 = -pfVar46[-1];
    param_2[1] = -fVar15;
    param_2[2] = -fVar7;
    param_2[3] = -fVar14;
    param_2[4] = -fVar10;
    param_2[5] = -fVar13;
    param_2[6] = -fVar9;
    param_2[7] = -fVar8;
    param_2 = param_2 + 8;
    pfVar41 = pfVar41 + -4;
    pfVar46 = pfVar46 + -4;
  }
  param_11 = param_11 & 3;
  if (param_11 != 0) {
    pfVar42 = pfVar41;
    do {
      pfVar40 = (float *)((longlong)pfVar46 + (-4 - (longlong)pfVar41) + (longlong)pfVar42);
      pfVar42 = pfVar42 + -1;
      *param_2 = -*pfVar40;
      param_2[1] = -*pfVar42;
      param_11 = param_11 - 1;
      param_2 = param_2 + 2;
    } while (param_11 != 0);
  }
  return;
}





