#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part219_sub002_sub002.c - 1 个函数

// 函数: void FUN_180793ff0(void)
void FUN_180793ff0(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c10bb4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180794140(longlong param_1,float *param_2,float *param_3,uint param_4,uint param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fStackX_10;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  
  uVar7 = (ulonglong)param_4;
  if (param_2 != (float *)0x0) {
    if ((*(float *)(param_1 + 0x32c) != *(float *)(param_1 + 0x218)) ||
       (*(float *)(param_1 + 0x330) != *(float *)(param_1 + 0x21c))) {
      *(int32_t *)(param_1 + 0x21c) = *(int32_t *)(param_1 + 0x330);
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 0x32c);
      FUN_180794cc0();
    }
    if (((*(float *)(param_1 + 800) == 0.0) && (*(float *)(param_1 + 0x324) == 2.0)) &&
       (*(float *)(param_1 + 0x328) == -1.0)) {
                    // WARNING: Subroutine does not return
      memset(param_3,0,uVar7 * (longlong)(int)param_5 * 4);
    }
    if (param_5 == 1) {
      fVar12 = *(float *)(param_1 + 0x220);
      fVar25 = *(float *)(param_1 + 0x224);
      if (param_4 != 0) {
        lVar5 = (longlong)param_2 - (longlong)param_3;
        fVar10 = fVar25;
        do {
          fVar25 = fVar12;
          fVar12 = _DAT_180be2df8 + *(float *)((longlong)param_3 + lVar5);
          _DAT_180be2df8 = -_DAT_180be2df8;
          fVar12 = fVar12 * *(float *)(param_1 + 800) + fVar25 * *(float *)(param_1 + 0x324) +
                   fVar10 * *(float *)(param_1 + 0x328);
          *param_3 = fVar12;
          param_3 = param_3 + 1;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          fVar10 = fVar25;
        } while (uVar6 != 0);
      }
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar25;
    }
    else if (param_5 == 2) {
      fVar12 = *(float *)(param_1 + 0x220);
      fVar25 = *(float *)(param_1 + 0x224);
      fVar10 = *(float *)(param_1 + 0x228);
      fVar18 = *(float *)(param_1 + 0x22c);
      fVar24 = fVar25;
      fVar16 = fVar18;
      if (param_4 != 0) {
        do {
          fVar16 = fVar10;
          fVar24 = fVar12;
          fVar10 = *(float *)(param_1 + 0x324);
          fVar23 = *(float *)(param_1 + 800);
          fVar20 = *(float *)(param_1 + 0x328);
          fVar9 = _DAT_180be2df8 + param_2[1];
          fVar12 = (_DAT_180be2df8 + *param_2) * fVar23 + fVar10 * fVar24 + fVar20 * fVar25;
          param_2 = param_2 + 2;
          _DAT_180be2df8 = -_DAT_180be2df8;
          *param_3 = fVar12;
          fVar10 = fVar9 * fVar23 + fVar10 * fVar16 + fVar20 * fVar18;
          param_3[1] = fVar10;
          param_3 = param_3 + 2;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          fVar25 = fVar24;
          fVar18 = fVar16;
        } while (uVar6 != 0);
      }
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar24;
      *(float *)(param_1 + 0x228) = fVar10;
      *(float *)(param_1 + 0x22c) = fVar16;
    }
    else if (param_5 == 6) {
      fVar12 = *(float *)(param_1 + 0x234);
      fVar25 = *(float *)(param_1 + 0x23c);
      fVar10 = *(float *)(param_1 + 0x244);
      fVar18 = *(float *)(param_1 + 0x248);
      fStack_d0 = *(float *)(param_1 + 0x24c);
      fVar24 = *(float *)(param_1 + 0x220);
      fVar16 = *(float *)(param_1 + 0x224);
      fVar23 = *(float *)(param_1 + 0x228);
      fVar20 = *(float *)(param_1 + 0x22c);
      fVar9 = *(float *)(param_1 + 0x230);
      fVar19 = *(float *)(param_1 + 0x238);
      fVar15 = *(float *)(param_1 + 0x240);
      if (param_4 != 0) {
        pfVar3 = param_3 + 2;
        pfVar2 = param_2 + 2;
        fVar11 = fVar16;
        fVar17 = fVar20;
        fStackX_10 = fStack_d0;
        fStack_cc = fVar10;
        fStack_c8 = fVar25;
        fStack_c4 = fVar12;
        do {
          fStack_d0 = fVar18;
          fVar10 = fVar15;
          fVar25 = fVar19;
          fVar12 = fVar9;
          fVar20 = fVar23;
          fVar16 = fVar24;
          fVar13 = *(float *)(param_1 + 0x324);
          fVar1 = *(float *)(param_1 + 800);
          fVar15 = *(float *)(param_1 + 0x328);
          fVar14 = _DAT_180be2df8 + pfVar2[2];
          fVar24 = (_DAT_180be2df8 + pfVar2[-2]) * fVar1 + fVar13 * fVar16 + fVar15 * fVar11;
          fVar18 = _DAT_180be2df8 + pfVar2[1];
          fVar23 = (_DAT_180be2df8 + pfVar2[-1]) * fVar1 + fVar13 * fVar20 + fVar15 * fVar17;
          fVar9 = (_DAT_180be2df8 + *pfVar2) * fVar1 + fVar13 * fVar12 + fVar15 * fStack_c4;
          fVar11 = _DAT_180be2df8 + pfVar2[3];
          _DAT_180be2df8 = -_DAT_180be2df8;
          fVar19 = fVar18 * fVar1 + fVar13 * fVar25 + fVar15 * fStack_c8;
          pfVar3[-1] = fVar23;
          fVar18 = fVar15 * fStackX_10;
          fVar15 = fVar14 * fVar1 + fVar13 * fVar10 + fVar15 * fStack_cc;
          fStackX_10 = fStack_d0;
          *pfVar3 = fVar9;
          pfVar3[1] = fVar19;
          pfVar3[2] = fVar15;
          *(float *)((longlong)param_3 + (-8 - (longlong)param_2) + (longlong)pfVar2) = fVar24;
          fVar18 = fVar11 * fVar1 + fVar13 * fStack_d0 + fVar18;
          pfVar3[3] = fVar18;
          pfVar3 = pfVar3 + 6;
          pfVar2 = pfVar2 + 6;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          fVar11 = fVar16;
          fVar17 = fVar20;
          fStack_cc = fVar10;
          fStack_c8 = fVar25;
          fStack_c4 = fVar12;
        } while (uVar6 != 0);
      }
      *(float *)(param_1 + 0x220) = fVar24;
      *(float *)(param_1 + 0x224) = fVar16;
      *(float *)(param_1 + 0x228) = fVar23;
      *(float *)(param_1 + 0x22c) = fVar20;
      *(float *)(param_1 + 0x230) = fVar9;
      *(float *)(param_1 + 0x234) = fVar12;
      *(float *)(param_1 + 0x238) = fVar19;
      *(float *)(param_1 + 0x23c) = fVar25;
      *(float *)(param_1 + 0x240) = fVar15;
      *(float *)(param_1 + 0x244) = fVar10;
      *(float *)(param_1 + 0x248) = fVar18;
      *(float *)(param_1 + 0x24c) = fStack_d0;
    }
    else if (param_5 == 8) {
      fVar12 = *(float *)(param_1 + 0x220);
      fVar25 = *(float *)(param_1 + 0x228);
      fVar10 = *(float *)(param_1 + 0x230);
      fVar18 = *(float *)(param_1 + 0x238);
      fVar24 = *(float *)(param_1 + 0x250);
      fStack_d4 = *(float *)(param_1 + 0x254);
      fVar16 = *(float *)(param_1 + 0x224);
      fVar23 = *(float *)(param_1 + 0x22c);
      fVar20 = *(float *)(param_1 + 0x234);
      fStack_c4 = *(float *)(param_1 + 0x23c);
      fStack_bc = *(float *)(param_1 + 0x24c);
      fStack_b4 = *(float *)(param_1 + 0x25c);
      fVar9 = *(float *)(param_1 + 0x244);
      fStack_d0 = *(float *)(param_1 + 0x240);
      fStack_cc = *(float *)(param_1 + 0x248);
      fStack_c8 = *(float *)(param_1 + 600);
      if (param_4 != 0) {
        pfVar3 = param_3 + 2;
        pfVar2 = param_2 + 2;
        fVar19 = fStack_c4;
        fVar15 = fVar16;
        fVar11 = fVar23;
        fVar17 = fVar20;
        fStack_b8 = fStack_d4;
        do {
          fStack_c4 = fVar18;
          fStack_d4 = fVar24;
          fVar20 = fVar10;
          fVar23 = fVar25;
          fVar16 = fVar12;
          fVar13 = *(float *)(param_1 + 800);
          fVar1 = *(float *)(param_1 + 0x324);
          fVar14 = *(float *)(param_1 + 0x328);
          fVar12 = (_DAT_180be2df8 + pfVar2[-2]) * fVar13 + fVar16 * fVar1 + fVar15 * fVar14;
          fVar25 = (_DAT_180be2df8 + pfVar2[-1]) * fVar13 + fVar23 * fVar1 + fVar11 * fVar14;
          fVar10 = (_DAT_180be2df8 + *pfVar2) * fVar13 + fVar20 * fVar1 + fVar17 * fVar14;
          fVar18 = (_DAT_180be2df8 + pfVar2[1]) * fVar13 + fStack_c4 * fVar1 + fVar19 * fVar14;
          fVar22 = (_DAT_180be2df8 + pfVar2[2]) * fVar13 + fStack_d0 * fVar1 + fVar9 * fVar14;
          fVar21 = (_DAT_180be2df8 + pfVar2[3]) * fVar13 + fStack_cc * fVar1 + fStack_bc * fVar14;
          fVar24 = (_DAT_180be2df8 + pfVar2[4]) * fVar13 + fStack_d4 * fVar1 + fStack_b8 * fVar14;
          fVar13 = (_DAT_180be2df8 + pfVar2[5]) * fVar13 + fStack_c8 * fVar1 + fStack_b4 * fVar14;
          _DAT_180be2df8 = -_DAT_180be2df8;
          pfVar3[1] = fVar18;
          pfVar3[2] = fVar22;
          pfVar3[3] = fVar21;
          pfVar3[4] = fVar24;
          pfVar3[5] = fVar13;
          *(float *)((longlong)param_3 + (-8 - (longlong)param_2) + (longlong)pfVar2) = fVar12;
          pfVar2 = pfVar2 + 8;
          pfVar3[-1] = fVar25;
          *pfVar3 = fVar10;
          pfVar3 = pfVar3 + 8;
          fStack_bc = fStack_cc;
          fStack_b8 = fStack_d4;
          fStack_b4 = fStack_c8;
          uVar6 = (int)uVar7 - 1;
          uVar7 = (ulonglong)uVar6;
          fVar19 = fStack_c4;
          fVar9 = fStack_d0;
          fVar15 = fVar16;
          fVar11 = fVar23;
          fVar17 = fVar20;
          fStack_d0 = fVar22;
          fStack_cc = fVar21;
          fStack_c8 = fVar13;
        } while (uVar6 != 0);
      }
      *(float *)(param_1 + 0x23c) = fStack_c4;
      *(float *)(param_1 + 0x240) = fStack_d0;
      *(float *)(param_1 + 0x24c) = fStack_bc;
      *(float *)(param_1 + 0x248) = fStack_cc;
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar16;
      *(float *)(param_1 + 0x228) = fVar25;
      *(float *)(param_1 + 0x22c) = fVar23;
      *(float *)(param_1 + 0x230) = fVar10;
      *(float *)(param_1 + 0x234) = fVar20;
      *(float *)(param_1 + 0x238) = fVar18;
      *(float *)(param_1 + 0x244) = fVar9;
      *(float *)(param_1 + 0x250) = fVar24;
      *(float *)(param_1 + 0x254) = fStack_d4;
      *(float *)(param_1 + 600) = fStack_c8;
      *(float *)(param_1 + 0x25c) = fStack_b4;
    }
    else if (0 < (int)param_5) {
      pfVar3 = (float *)(param_1 + 0x224);
      lVar5 = (longlong)param_3 - (longlong)param_2;
      uVar8 = (ulonglong)param_5;
      fVar12 = _DAT_180be2df8;
      do {
        fVar25 = pfVar3[-1];
        fVar10 = *pfVar3;
        pfVar2 = param_2;
        uVar4 = uVar7;
        fVar18 = fVar10;
        if (param_4 != 0) {
          do {
            fVar18 = fVar25;
            fVar25 = fVar12 + *pfVar2;
            fVar12 = -fVar12;
            fVar25 = fVar25 * *(float *)(param_1 + 800) + fVar18 * *(float *)(param_1 + 0x324) +
                     fVar10 * *(float *)(param_1 + 0x328);
            *(float *)(lVar5 + (longlong)pfVar2) = fVar25;
            uVar6 = (int)uVar4 - 1;
            pfVar2 = pfVar2 + (int)param_5;
            uVar4 = (ulonglong)uVar6;
            fVar10 = fVar18;
            _DAT_180be2df8 = fVar12;
          } while (uVar6 != 0);
        }
        pfVar3[-1] = fVar25;
        param_2 = param_2 + 1;
        *pfVar3 = fVar18;
        pfVar3 = pfVar3 + 2;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807942ce(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  longlong unaff_RBX;
  float *unaff_RBP;
  int unaff_ESI;
  float *unaff_RDI;
  longlong lVar5;
  ulonglong in_R9;
  ulonglong uVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000108;
  
  iVar4 = (int)in_R9;
  if (iVar4 == 2) {
    fVar20 = *(float *)(unaff_RBX + 0x220);
    fVar23 = *(float *)(unaff_RBX + 0x224);
    fVar8 = *(float *)(unaff_RBX + 0x228);
    fVar15 = *(float *)(unaff_RBX + 0x22c);
    fVar22 = fVar23;
    fVar13 = fVar15;
    if (unaff_ESI != 0) {
      do {
        fVar13 = fVar8;
        fVar22 = fVar20;
        fVar8 = *(float *)(unaff_RBX + 0x324);
        fVar21 = *(float *)(unaff_RBX + 800);
        fVar17 = *(float *)(unaff_RBX + 0x328);
        fVar7 = _DAT_180be2df8 + unaff_RBP[1];
        fVar20 = (_DAT_180be2df8 + *unaff_RBP) * fVar21 + fVar8 * fVar22 + fVar17 * fVar23;
        unaff_RBP = unaff_RBP + 2;
        _DAT_180be2df8 = -_DAT_180be2df8;
        *unaff_RDI = fVar20;
        fVar8 = fVar7 * fVar21 + fVar8 * fVar13 + fVar17 * fVar15;
        unaff_RDI[1] = fVar8;
        unaff_RDI = unaff_RDI + 2;
        unaff_ESI = unaff_ESI + -1;
        fVar23 = fVar22;
        fVar15 = fVar13;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x220) = fVar20;
    *(float *)(unaff_RBX + 0x224) = fVar22;
    *(float *)(unaff_RBX + 0x228) = fVar8;
    *(float *)(unaff_RBX + 0x22c) = fVar13;
  }
  else if (iVar4 == 6) {
    fVar20 = *(float *)(unaff_RBX + 0x234);
    fVar23 = *(float *)(unaff_RBX + 0x23c);
    fVar8 = *(float *)(unaff_RBX + 0x244);
    fVar15 = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x24c);
    fVar22 = *(float *)(unaff_RBX + 0x220);
    fVar13 = *(float *)(unaff_RBX + 0x224);
    fVar21 = *(float *)(unaff_RBX + 0x228);
    fVar17 = *(float *)(unaff_RBX + 0x22c);
    fVar7 = *(float *)(unaff_RBX + 0x230);
    fVar16 = *(float *)(unaff_RBX + 0x238);
    fVar12 = *(float *)(unaff_RBX + 0x240);
    if (unaff_ESI != 0) {
      pfVar3 = unaff_RDI + 2;
      pfVar2 = unaff_RBP + 2;
      fVar9 = fVar13;
      fVar14 = fVar17;
      fStack000000000000002c = fVar8;
      fStack0000000000000030 = fVar23;
      fStack0000000000000034 = fVar20;
      fStack0000000000000108 = fStack0000000000000028;
      do {
        fStack0000000000000028 = fVar15;
        fVar8 = fVar12;
        fVar23 = fVar16;
        fVar20 = fVar7;
        fVar17 = fVar21;
        fVar13 = fVar22;
        fVar10 = *(float *)(unaff_RBX + 0x324);
        fVar1 = *(float *)(unaff_RBX + 800);
        fVar12 = *(float *)(unaff_RBX + 0x328);
        fVar11 = _DAT_180be2df8 + pfVar2[2];
        fVar22 = (_DAT_180be2df8 + pfVar2[-2]) * fVar1 + fVar10 * fVar13 + fVar12 * fVar9;
        fVar15 = _DAT_180be2df8 + pfVar2[1];
        fVar21 = (_DAT_180be2df8 + pfVar2[-1]) * fVar1 + fVar10 * fVar17 + fVar12 * fVar14;
        fVar7 = (_DAT_180be2df8 + *pfVar2) * fVar1 + fVar10 * fVar20 +
                fVar12 * fStack0000000000000034;
        fVar9 = _DAT_180be2df8 + pfVar2[3];
        _DAT_180be2df8 = -_DAT_180be2df8;
        fVar16 = fVar15 * fVar1 + fVar10 * fVar23 + fVar12 * fStack0000000000000030;
        pfVar3[-1] = fVar21;
        fVar15 = fVar12 * fStack0000000000000108;
        fVar12 = fVar11 * fVar1 + fVar10 * fVar8 + fVar12 * fStack000000000000002c;
        fStack0000000000000108 = fStack0000000000000028;
        *pfVar3 = fVar7;
        pfVar3[1] = fVar16;
        pfVar3[2] = fVar12;
        *(float *)((longlong)unaff_RDI + (-8 - (longlong)unaff_RBP) + (longlong)pfVar2) = fVar22;
        fVar15 = fVar9 * fVar1 + fVar10 * fStack0000000000000028 + fVar15;
        pfVar3[3] = fVar15;
        pfVar3 = pfVar3 + 6;
        pfVar2 = pfVar2 + 6;
        unaff_ESI = unaff_ESI + -1;
        fVar9 = fVar13;
        fVar14 = fVar17;
        fStack000000000000002c = fVar8;
        fStack0000000000000030 = fVar23;
        fStack0000000000000034 = fVar20;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x220) = fVar22;
    *(float *)(unaff_RBX + 0x224) = fVar13;
    *(float *)(unaff_RBX + 0x228) = fVar21;
    *(float *)(unaff_RBX + 0x22c) = fVar17;
    *(float *)(unaff_RBX + 0x230) = fVar7;
    *(float *)(unaff_RBX + 0x234) = fVar20;
    *(float *)(unaff_RBX + 0x238) = fVar16;
    *(float *)(unaff_RBX + 0x23c) = fVar23;
    *(float *)(unaff_RBX + 0x240) = fVar12;
    *(float *)(unaff_RBX + 0x244) = fVar8;
    *(float *)(unaff_RBX + 0x248) = fVar15;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000028;
  }
  else if (iVar4 == 8) {
    fVar20 = *(float *)(unaff_RBX + 0x220);
    fVar23 = *(float *)(unaff_RBX + 0x228);
    fVar8 = *(float *)(unaff_RBX + 0x230);
    fVar15 = *(float *)(unaff_RBX + 0x238);
    fVar22 = *(float *)(unaff_RBX + 0x250);
    fStackX_24 = *(float *)(unaff_RBX + 0x254);
    fVar13 = *(float *)(unaff_RBX + 0x224);
    fVar21 = *(float *)(unaff_RBX + 0x22c);
    fVar17 = *(float *)(unaff_RBX + 0x234);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x23c);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x24c);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x25c);
    fVar7 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x240);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000030 = *(float *)(unaff_RBX + 600);
    if (unaff_ESI != 0) {
      pfVar3 = unaff_RDI + 2;
      pfVar2 = unaff_RBP + 2;
      fVar16 = fStack0000000000000034;
      fVar12 = fVar13;
      fVar9 = fVar21;
      fVar14 = fVar17;
      fStack0000000000000040 = fStackX_24;
      do {
        fStack0000000000000034 = fVar15;
        fStackX_24 = fVar22;
        fVar17 = fVar8;
        fVar21 = fVar23;
        fVar13 = fVar20;
        fVar10 = *(float *)(unaff_RBX + 800);
        fVar1 = *(float *)(unaff_RBX + 0x324);
        fVar11 = *(float *)(unaff_RBX + 0x328);
        fVar20 = (_DAT_180be2df8 + pfVar2[-2]) * fVar10 + fVar13 * fVar1 + fVar12 * fVar11;
        fVar23 = (_DAT_180be2df8 + pfVar2[-1]) * fVar10 + fVar21 * fVar1 + fVar9 * fVar11;
        fVar8 = (_DAT_180be2df8 + *pfVar2) * fVar10 + fVar17 * fVar1 + fVar14 * fVar11;
        fVar15 = (_DAT_180be2df8 + pfVar2[1]) * fVar10 + fStack0000000000000034 * fVar1 +
                 fVar16 * fVar11;
        fVar19 = (_DAT_180be2df8 + pfVar2[2]) * fVar10 + fStack0000000000000028 * fVar1 +
                 fVar7 * fVar11;
        fVar18 = (_DAT_180be2df8 + pfVar2[3]) * fVar10 + fStack000000000000002c * fVar1 +
                 fStack000000000000003c * fVar11;
        fVar22 = (_DAT_180be2df8 + pfVar2[4]) * fVar10 + fStackX_24 * fVar1 +
                 fStack0000000000000040 * fVar11;
        fVar10 = (_DAT_180be2df8 + pfVar2[5]) * fVar10 + fStack0000000000000030 * fVar1 +
                 fStack0000000000000044 * fVar11;
        _DAT_180be2df8 = -_DAT_180be2df8;
        pfVar3[1] = fVar15;
        pfVar3[2] = fVar19;
        pfVar3[3] = fVar18;
        pfVar3[4] = fVar22;
        pfVar3[5] = fVar10;
        *(float *)((longlong)unaff_RDI + (-8 - (longlong)unaff_RBP) + (longlong)pfVar2) = fVar20;
        pfVar2 = pfVar2 + 8;
        pfVar3[-1] = fVar23;
        *pfVar3 = fVar8;
        pfVar3 = pfVar3 + 8;
        fStack000000000000003c = fStack000000000000002c;
        fStack0000000000000040 = fStackX_24;
        fStack0000000000000044 = fStack0000000000000030;
        unaff_ESI = unaff_ESI + -1;
        fVar16 = fStack0000000000000034;
        fVar7 = fStack0000000000000028;
        fVar12 = fVar13;
        fVar9 = fVar21;
        fVar14 = fVar17;
        fStack0000000000000028 = fVar19;
        fStack000000000000002c = fVar18;
        fStack0000000000000030 = fVar10;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x23c) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x24c) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x248) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x220) = fVar20;
    *(float *)(unaff_RBX + 0x224) = fVar13;
    *(float *)(unaff_RBX + 0x228) = fVar23;
    *(float *)(unaff_RBX + 0x22c) = fVar21;
    *(float *)(unaff_RBX + 0x230) = fVar8;
    *(float *)(unaff_RBX + 0x234) = fVar17;
    *(float *)(unaff_RBX + 0x238) = fVar15;
    *(float *)(unaff_RBX + 0x244) = fVar7;
    *(float *)(unaff_RBX + 0x250) = fVar22;
    *(float *)(unaff_RBX + 0x254) = fStackX_24;
    *(float *)(unaff_RBX + 600) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x25c) = fStack0000000000000044;
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RBX + 0x224);
    lVar5 = (longlong)unaff_RDI - (longlong)unaff_RBP;
    uVar6 = in_R9 & 0xffffffff;
    fVar20 = _DAT_180be2df8;
    do {
      fVar23 = pfVar3[-1];
      fVar8 = *pfVar3;
      pfVar2 = unaff_RBP;
      fVar15 = fVar8;
      iVar4 = unaff_ESI;
      if (unaff_ESI != 0) {
        do {
          fVar15 = fVar23;
          fVar23 = fVar20 + *pfVar2;
          fVar20 = -fVar20;
          fVar23 = fVar23 * *(float *)(unaff_RBX + 800) + fVar15 * *(float *)(unaff_RBX + 0x324) +
                   fVar8 * *(float *)(unaff_RBX + 0x328);
          *(float *)(lVar5 + (longlong)pfVar2) = fVar23;
          iVar4 = iVar4 + -1;
          pfVar2 = pfVar2 + in_R9;
          fVar8 = fVar15;
          _DAT_180be2df8 = fVar20;
        } while (iVar4 != 0);
      }
      pfVar3[-1] = fVar23;
      unaff_RBP = unaff_RBP + 1;
      *pfVar3 = fVar15;
      pfVar3 = pfVar3 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807943f6(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  longlong unaff_RBX;
  float *unaff_RBP;
  int unaff_ESI;
  longlong unaff_RDI;
  longlong lVar5;
  ulonglong in_R9;
  ulonglong uVar6;
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
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fStackX_24;
  float fStack0000000000000028;
  float fStack000000000000002c;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack000000000000003c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  float fStack0000000000000108;
  
  iVar4 = (int)in_R9;
  if (iVar4 == 6) {
    fVar23 = *(float *)(unaff_RBX + 0x234);
    fVar22 = *(float *)(unaff_RBX + 0x23c);
    fVar19 = *(float *)(unaff_RBX + 0x244);
    fVar13 = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x24c);
    fVar21 = *(float *)(unaff_RBX + 0x220);
    fVar11 = *(float *)(unaff_RBX + 0x224);
    fVar20 = *(float *)(unaff_RBX + 0x228);
    fVar15 = *(float *)(unaff_RBX + 0x22c);
    fVar17 = *(float *)(unaff_RBX + 0x230);
    fVar14 = *(float *)(unaff_RBX + 0x238);
    fVar10 = *(float *)(unaff_RBX + 0x240);
    if (unaff_ESI != 0) {
      pfVar3 = (float *)(unaff_RDI + 8);
      pfVar2 = unaff_RBP + 2;
      fVar7 = fVar11;
      fVar12 = fVar15;
      fStack000000000000002c = fVar19;
      fStack0000000000000030 = fVar22;
      fStack0000000000000034 = fVar23;
      fStack0000000000000108 = fStack0000000000000028;
      do {
        fStack0000000000000028 = fVar13;
        fVar19 = fVar10;
        fVar22 = fVar14;
        fVar23 = fVar17;
        fVar15 = fVar20;
        fVar11 = fVar21;
        fVar8 = *(float *)(unaff_RBX + 0x324);
        fVar1 = *(float *)(unaff_RBX + 800);
        fVar10 = *(float *)(unaff_RBX + 0x328);
        fVar9 = _DAT_180be2df8 + pfVar2[2];
        fVar21 = (_DAT_180be2df8 + pfVar2[-2]) * fVar1 + fVar8 * fVar11 + fVar10 * fVar7;
        fVar13 = _DAT_180be2df8 + pfVar2[1];
        fVar20 = (_DAT_180be2df8 + pfVar2[-1]) * fVar1 + fVar8 * fVar15 + fVar10 * fVar12;
        fVar17 = (_DAT_180be2df8 + *pfVar2) * fVar1 + fVar8 * fVar23 +
                 fVar10 * fStack0000000000000034;
        fVar7 = _DAT_180be2df8 + pfVar2[3];
        _DAT_180be2df8 = -_DAT_180be2df8;
        fVar14 = fVar13 * fVar1 + fVar8 * fVar22 + fVar10 * fStack0000000000000030;
        pfVar3[-1] = fVar20;
        fVar13 = fVar10 * fStack0000000000000108;
        fVar10 = fVar9 * fVar1 + fVar8 * fVar19 + fVar10 * fStack000000000000002c;
        fStack0000000000000108 = fStack0000000000000028;
        *pfVar3 = fVar17;
        pfVar3[1] = fVar14;
        pfVar3[2] = fVar10;
        *(float *)((unaff_RDI - (longlong)unaff_RBP) + -8 + (longlong)pfVar2) = fVar21;
        fVar13 = fVar7 * fVar1 + fVar8 * fStack0000000000000028 + fVar13;
        pfVar3[3] = fVar13;
        pfVar3 = pfVar3 + 6;
        pfVar2 = pfVar2 + 6;
        unaff_ESI = unaff_ESI + -1;
        fVar7 = fVar11;
        fVar12 = fVar15;
        fStack000000000000002c = fVar19;
        fStack0000000000000030 = fVar22;
        fStack0000000000000034 = fVar23;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x220) = fVar21;
    *(float *)(unaff_RBX + 0x224) = fVar11;
    *(float *)(unaff_RBX + 0x228) = fVar20;
    *(float *)(unaff_RBX + 0x22c) = fVar15;
    *(float *)(unaff_RBX + 0x230) = fVar17;
    *(float *)(unaff_RBX + 0x234) = fVar23;
    *(float *)(unaff_RBX + 0x238) = fVar14;
    *(float *)(unaff_RBX + 0x23c) = fVar22;
    *(float *)(unaff_RBX + 0x240) = fVar10;
    *(float *)(unaff_RBX + 0x244) = fVar19;
    *(float *)(unaff_RBX + 0x248) = fVar13;
    *(float *)(unaff_RBX + 0x24c) = fStack0000000000000028;
  }
  else if (iVar4 == 8) {
    fVar23 = *(float *)(unaff_RBX + 0x220);
    fVar22 = *(float *)(unaff_RBX + 0x228);
    fVar19 = *(float *)(unaff_RBX + 0x230);
    fVar13 = *(float *)(unaff_RBX + 0x238);
    fVar21 = *(float *)(unaff_RBX + 0x250);
    fStackX_24 = *(float *)(unaff_RBX + 0x254);
    fVar11 = *(float *)(unaff_RBX + 0x224);
    fVar20 = *(float *)(unaff_RBX + 0x22c);
    fVar15 = *(float *)(unaff_RBX + 0x234);
    fStack0000000000000034 = *(float *)(unaff_RBX + 0x23c);
    fStack000000000000003c = *(float *)(unaff_RBX + 0x24c);
    fStack0000000000000044 = *(float *)(unaff_RBX + 0x25c);
    fVar17 = *(float *)(unaff_RBX + 0x244);
    fStack0000000000000028 = *(float *)(unaff_RBX + 0x240);
    fStack000000000000002c = *(float *)(unaff_RBX + 0x248);
    fStack0000000000000030 = *(float *)(unaff_RBX + 600);
    if (unaff_ESI != 0) {
      pfVar3 = (float *)(unaff_RDI + 8);
      pfVar2 = unaff_RBP + 2;
      fVar14 = fStack0000000000000034;
      fVar10 = fVar11;
      fVar7 = fVar20;
      fVar12 = fVar15;
      fStack0000000000000040 = fStackX_24;
      do {
        fStack0000000000000034 = fVar13;
        fStackX_24 = fVar21;
        fVar15 = fVar19;
        fVar20 = fVar22;
        fVar11 = fVar23;
        fVar8 = *(float *)(unaff_RBX + 800);
        fVar1 = *(float *)(unaff_RBX + 0x324);
        fVar9 = *(float *)(unaff_RBX + 0x328);
        fVar23 = (_DAT_180be2df8 + pfVar2[-2]) * fVar8 + fVar11 * fVar1 + fVar10 * fVar9;
        fVar22 = (_DAT_180be2df8 + pfVar2[-1]) * fVar8 + fVar20 * fVar1 + fVar7 * fVar9;
        fVar19 = (_DAT_180be2df8 + *pfVar2) * fVar8 + fVar15 * fVar1 + fVar12 * fVar9;
        fVar13 = (_DAT_180be2df8 + pfVar2[1]) * fVar8 + fStack0000000000000034 * fVar1 +
                 fVar14 * fVar9;
        fVar18 = (_DAT_180be2df8 + pfVar2[2]) * fVar8 + fStack0000000000000028 * fVar1 +
                 fVar17 * fVar9;
        fVar16 = (_DAT_180be2df8 + pfVar2[3]) * fVar8 + fStack000000000000002c * fVar1 +
                 fStack000000000000003c * fVar9;
        fVar21 = (_DAT_180be2df8 + pfVar2[4]) * fVar8 + fStackX_24 * fVar1 +
                 fStack0000000000000040 * fVar9;
        fVar8 = (_DAT_180be2df8 + pfVar2[5]) * fVar8 + fStack0000000000000030 * fVar1 +
                fStack0000000000000044 * fVar9;
        _DAT_180be2df8 = -_DAT_180be2df8;
        pfVar3[1] = fVar13;
        pfVar3[2] = fVar18;
        pfVar3[3] = fVar16;
        pfVar3[4] = fVar21;
        pfVar3[5] = fVar8;
        *(float *)((unaff_RDI - (longlong)unaff_RBP) + -8 + (longlong)pfVar2) = fVar23;
        pfVar2 = pfVar2 + 8;
        pfVar3[-1] = fVar22;
        *pfVar3 = fVar19;
        pfVar3 = pfVar3 + 8;
        fStack000000000000003c = fStack000000000000002c;
        fStack0000000000000040 = fStackX_24;
        fStack0000000000000044 = fStack0000000000000030;
        unaff_ESI = unaff_ESI + -1;
        fVar14 = fStack0000000000000034;
        fVar17 = fStack0000000000000028;
        fVar10 = fVar11;
        fVar7 = fVar20;
        fVar12 = fVar15;
        fStack0000000000000028 = fVar18;
        fStack000000000000002c = fVar16;
        fStack0000000000000030 = fVar8;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x23c) = fStack0000000000000034;
    *(float *)(unaff_RBX + 0x240) = fStack0000000000000028;
    *(float *)(unaff_RBX + 0x24c) = fStack000000000000003c;
    *(float *)(unaff_RBX + 0x248) = fStack000000000000002c;
    *(float *)(unaff_RBX + 0x220) = fVar23;
    *(float *)(unaff_RBX + 0x224) = fVar11;
    *(float *)(unaff_RBX + 0x228) = fVar22;
    *(float *)(unaff_RBX + 0x22c) = fVar20;
    *(float *)(unaff_RBX + 0x230) = fVar19;
    *(float *)(unaff_RBX + 0x234) = fVar15;
    *(float *)(unaff_RBX + 0x238) = fVar13;
    *(float *)(unaff_RBX + 0x244) = fVar17;
    *(float *)(unaff_RBX + 0x250) = fVar21;
    *(float *)(unaff_RBX + 0x254) = fStackX_24;
    *(float *)(unaff_RBX + 600) = fStack0000000000000030;
    *(float *)(unaff_RBX + 0x25c) = fStack0000000000000044;
  }
  else if (0 < iVar4) {
    pfVar3 = (float *)(unaff_RBX + 0x224);
    lVar5 = unaff_RDI - (longlong)unaff_RBP;
    uVar6 = in_R9 & 0xffffffff;
    fVar23 = _DAT_180be2df8;
    do {
      fVar22 = pfVar3[-1];
      fVar19 = *pfVar3;
      pfVar2 = unaff_RBP;
      fVar13 = fVar19;
      iVar4 = unaff_ESI;
      if (unaff_ESI != 0) {
        do {
          fVar13 = fVar22;
          fVar22 = fVar23 + *pfVar2;
          fVar23 = -fVar23;
          fVar22 = fVar22 * *(float *)(unaff_RBX + 800) + fVar13 * *(float *)(unaff_RBX + 0x324) +
                   fVar19 * *(float *)(unaff_RBX + 0x328);
          *(float *)(lVar5 + (longlong)pfVar2) = fVar22;
          iVar4 = iVar4 + -1;
          pfVar2 = pfVar2 + in_R9;
          fVar19 = fVar13;
          _DAT_180be2df8 = fVar23;
        } while (iVar4 != 0);
      }
      pfVar3[-1] = fVar22;
      unaff_RBP = unaff_RBP + 1;
      *pfVar3 = fVar13;
      pfVar3 = pfVar3 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}



uint64_t FUN_180794b6e(void)

{
  return 0;
}



uint64_t FUN_180794b9a(void)

{
  return 0;
}



uint64_t FUN_180794cc0(longlong param_1,float param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  param_3 = (6.2831855 / (float)*(int *)(*(longlong *)(param_1 + 0xa8) + 0x6d0)) * param_3;
  fVar1 = (float)powf(0x41200000,param_2 * -0.009375);
  fVar3 = 1.0 / param_3;
  param_3 = (1.0 - (fVar1 + fVar1)) * param_3;
  if (2.0 <= param_3) {
    param_3 = 2.0;
  }
  fVar1 = ((fVar1 + fVar1) - param_3) * fVar3;
  fVar3 = fVar3 * fVar3;
  fVar4 = 1.0 / (fVar1 + 1.0 + fVar3);
  fVar2 = -(fVar4 * fVar3);
  fVar1 = (fVar3 + fVar1 + fVar3) * fVar4;
  if (fVar4 < 1e-05) {
    fVar4 = 0.0;
  }
  if ((1.999 < fVar1) && (fVar2 < -0.999)) {
    fVar2 = -1.0;
    fVar1 = 2.0;
  }
  *(float *)(param_1 + 800) = fVar4;
  *(float *)(param_1 + 0x324) = fVar1;
  *(float *)(param_1 + 0x328) = fVar2;
  return 0;
}



uint64_t FUN_180794dc0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  iVar4 = 0;
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar5 = 0;
    do {
      uVar3 = func_0x000180762a70(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(longlong *)(*(longlong *)(lVar2 + 0x68) + lVar5) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(longlong *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar5 = lVar5 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  func_0x0001807958a0(lVar1);
  *(int32_t *)(lVar1 + 0x218) = *(int32_t *)(lVar1 + 800);
  func_0x000180795990(lVar1);
  return 0;
}







