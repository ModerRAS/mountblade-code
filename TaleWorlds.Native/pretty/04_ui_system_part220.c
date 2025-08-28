#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part220.c - 1 个函数

// 函数: void FUN_180794e70(void)
void FUN_180794e70(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c10cb4,0,0x5c);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_180794f40(longlong param_1,float *param_2,longlong param_3,uint param_4,uint param_5)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
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
  float fStackX_10;
  float fStackX_18;
  float fStack_c8;
  
  uVar6 = (ulonglong)param_4;
  if (param_2 != (float *)0x0) {
    if (*(float *)(param_1 + 800) != *(float *)(param_1 + 0x218)) {
      *(float *)(param_1 + 0x218) = *(float *)(param_1 + 800);
      func_0x000180795990();
    }
    if (*(float *)(param_1 + 0x31c) == 1.0) {
                    // WARNING: Subroutine does not return
      memcpy(param_3,param_2,uVar6 * (longlong)(int)param_5 * 4);
    }
    if (*(float *)(param_1 + 0x31c) == 0.0) {
                    // WARNING: Subroutine does not return
      memset(param_3,0,uVar6 * (longlong)(int)param_5 * 4);
    }
    if (param_5 == 1) {
      fVar11 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x220);
      if (param_4 != 0) {
        param_3 = param_3 - (longlong)param_2;
        fVar10 = _DAT_180be2ee8;
        do {
          fVar11 = fVar11 + *(float *)(param_1 + 0x31c) * ((fVar10 + *param_2) - fVar11);
          fVar12 = fVar12 + (fVar11 - fVar12) * *(float *)(param_1 + 0x31c);
          fVar10 = -_DAT_180be2ee8;
          _DAT_180be2ee8 = fVar10;
          *(float *)((longlong)param_2 + param_3) = fVar12;
          param_2 = param_2 + 1;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x220) = fVar12;
    }
    else if (param_5 == 2) {
      fVar11 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x220);
      fVar10 = *(float *)(param_1 + 0x224);
      fVar13 = *(float *)(param_1 + 0x228);
      if (param_4 != 0) {
        pfVar2 = param_2 + 1;
        fVar8 = _DAT_180be2ee8;
        do {
          fVar14 = *(float *)(param_1 + 0x31c);
          fVar11 = fVar11 + ((fVar8 + pfVar2[-1]) - fVar11) * *(float *)(param_1 + 0x31c);
          fVar10 = fVar10 + fVar14 * ((_DAT_180be2ee8 + *pfVar2) - fVar10);
          fVar12 = fVar12 + (fVar11 - fVar12) * fVar14;
          fVar13 = fVar13 + (fVar10 - fVar13) * fVar14;
          *(float *)((longlong)pfVar2 + (param_3 - (longlong)param_2) + -4) = fVar12;
          fVar8 = -_DAT_180be2ee8;
          _DAT_180be2ee8 = fVar8;
          *(float *)((longlong)pfVar2 + (param_3 - (longlong)param_2)) = fVar13;
          pfVar2 = pfVar2 + 2;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar10;
      *(float *)(param_1 + 0x228) = fVar13;
    }
    else if (param_5 == 6) {
      fVar11 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x220);
      fVar10 = *(float *)(param_1 + 0x224);
      fVar13 = *(float *)(param_1 + 0x228);
      fVar8 = *(float *)(param_1 + 0x22c);
      fVar14 = *(float *)(param_1 + 0x230);
      fVar15 = *(float *)(param_1 + 0x234);
      fVar16 = *(float *)(param_1 + 0x238);
      fVar17 = *(float *)(param_1 + 0x23c);
      fVar18 = *(float *)(param_1 + 0x240);
      fVar19 = *(float *)(param_1 + 0x244);
      fVar20 = *(float *)(param_1 + 0x248);
      if (param_4 != 0) {
        pfVar2 = (float *)(param_3 + 8);
        param_3 = (longlong)param_2 - param_3;
        fVar9 = _DAT_180be2ee8;
        do {
          fVar11 = fVar11 + ((fVar9 + *(float *)(param_3 + -8 + (longlong)pfVar2)) - fVar11) *
                            *(float *)(param_1 + 0x31c);
          fVar10 = fVar10 + ((_DAT_180be2ee8 + *(float *)(param_3 + -4 + (longlong)pfVar2)) - fVar10
                            ) * *(float *)(param_1 + 0x31c);
          fVar8 = fVar8 + ((_DAT_180be2ee8 + *(float *)(param_3 + (longlong)pfVar2)) - fVar8) *
                          *(float *)(param_1 + 0x31c);
          fVar1 = *(float *)(param_1 + 0x31c);
          fVar15 = fVar15 + ((_DAT_180be2ee8 + *(float *)(param_3 + 4 + (longlong)pfVar2)) - fVar15)
                            * *(float *)(param_1 + 0x31c);
          fVar17 = fVar17 + ((_DAT_180be2ee8 + *(float *)(param_3 + 8 + (longlong)pfVar2)) - fVar17)
                            * *(float *)(param_1 + 0x31c);
          fVar19 = fVar19 + fVar1 * ((_DAT_180be2ee8 + *(float *)(param_3 + 0xc + (longlong)pfVar2))
                                    - fVar19);
          fVar12 = fVar12 + (fVar11 - fVar12) * fVar1;
          fVar13 = fVar13 + (fVar10 - fVar13) * fVar1;
          pfVar2[-2] = fVar12;
          pfVar2[-1] = fVar13;
          fVar14 = fVar14 + (fVar8 - fVar14) * fVar1;
          fVar16 = fVar16 + (fVar15 - fVar16) * fVar1;
          *pfVar2 = fVar14;
          pfVar2[1] = fVar16;
          fVar20 = fVar20 + (fVar19 - fVar20) * fVar1;
          fVar9 = -_DAT_180be2ee8;
          fVar18 = fVar18 + (fVar17 - fVar18) * fVar1;
          _DAT_180be2ee8 = fVar9;
          pfVar2[2] = fVar18;
          pfVar2[3] = fVar20;
          pfVar2 = pfVar2 + 6;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar10;
      *(float *)(param_1 + 0x228) = fVar13;
      *(float *)(param_1 + 0x22c) = fVar8;
      *(float *)(param_1 + 0x230) = fVar14;
      *(float *)(param_1 + 0x234) = fVar15;
      *(float *)(param_1 + 0x238) = fVar16;
      *(float *)(param_1 + 0x23c) = fVar17;
      *(float *)(param_1 + 0x240) = fVar18;
      *(float *)(param_1 + 0x244) = fVar19;
      *(float *)(param_1 + 0x248) = fVar20;
    }
    else if (param_5 == 8) {
      fStack_c8 = *(float *)(param_1 + 0x250);
      fStackX_10 = *(float *)(param_1 + 0x254);
      fStackX_18 = *(float *)(param_1 + 600);
      fVar11 = *(float *)(param_1 + 0x21c);
      fVar12 = *(float *)(param_1 + 0x220);
      fVar10 = *(float *)(param_1 + 0x224);
      fVar13 = *(float *)(param_1 + 0x228);
      fVar8 = *(float *)(param_1 + 0x22c);
      fVar14 = *(float *)(param_1 + 0x230);
      fVar15 = *(float *)(param_1 + 0x234);
      fVar16 = *(float *)(param_1 + 0x238);
      fVar17 = *(float *)(param_1 + 0x23c);
      fVar18 = *(float *)(param_1 + 0x240);
      fVar19 = *(float *)(param_1 + 0x244);
      fVar20 = *(float *)(param_1 + 0x248);
      fVar9 = *(float *)(param_1 + 0x24c);
      if (param_4 != 0) {
        pfVar2 = (float *)(param_3 + 8);
        param_3 = (longlong)param_2 - param_3;
        do {
          fVar11 = fVar11 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + -8)) - fVar11
                            ) * *(float *)(param_1 + 0x31c);
          fVar10 = fVar10 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + -4)) - fVar10
                            ) * *(float *)(param_1 + 0x31c);
          fVar8 = fVar8 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3)) - fVar8) *
                          *(float *)(param_1 + 0x31c);
          fVar15 = fVar15 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + 4)) - fVar15)
                            * *(float *)(param_1 + 0x31c);
          fVar17 = fVar17 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + 8)) - fVar17)
                            * *(float *)(param_1 + 0x31c);
          fVar19 = fVar19 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + 0xc)) -
                            fVar19) * *(float *)(param_1 + 0x31c);
          fVar9 = fVar9 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + 0x10)) - fVar9)
                          * *(float *)(param_1 + 0x31c);
          fVar1 = *(float *)(param_1 + 0x31c);
          fStackX_10 = fStackX_10 +
                       fVar1 * ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + param_3 + 0x14)) -
                               fStackX_10);
          fVar13 = fVar13 + (fVar10 - fVar13) * fVar1;
          fVar12 = fVar12 + (fVar11 - fVar12) * fVar1;
          fVar16 = fVar16 + (fVar15 - fVar16) * fVar1;
          fVar14 = fVar14 + (fVar8 - fVar14) * fVar1;
          fVar20 = fVar20 + (fVar19 - fVar20) * fVar1;
          fVar18 = fVar18 + (fVar17 - fVar18) * fVar1;
          fStack_c8 = fStack_c8 + (fVar9 - fStack_c8) * fVar1;
          fStackX_18 = fStackX_18 + (fStackX_10 - fStackX_18) * fVar1;
          _DAT_180be2ee8 = -_DAT_180be2ee8;
          pfVar2[-2] = fVar12;
          pfVar2[-1] = fVar13;
          *pfVar2 = fVar14;
          pfVar2[1] = fVar16;
          pfVar2[2] = fVar18;
          pfVar2[3] = fVar20;
          pfVar2[4] = fStack_c8;
          pfVar2[5] = fStackX_18;
          pfVar2 = pfVar2 + 8;
          uVar5 = (int)uVar6 - 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 != 0);
      }
      *(float *)(param_1 + 0x21c) = fVar11;
      *(float *)(param_1 + 0x220) = fVar12;
      *(float *)(param_1 + 0x224) = fVar10;
      *(float *)(param_1 + 0x228) = fVar13;
      *(float *)(param_1 + 0x22c) = fVar8;
      *(float *)(param_1 + 0x230) = fVar14;
      *(float *)(param_1 + 0x234) = fVar15;
      *(float *)(param_1 + 0x238) = fVar16;
      *(float *)(param_1 + 0x23c) = fVar17;
      *(float *)(param_1 + 0x240) = fVar18;
      *(float *)(param_1 + 0x244) = fVar19;
      *(float *)(param_1 + 0x248) = fVar20;
      *(float *)(param_1 + 0x24c) = fVar9;
      *(float *)(param_1 + 0x250) = fStack_c8;
      *(float *)(param_1 + 0x254) = fStackX_10;
      *(float *)(param_1 + 600) = fStackX_18;
    }
    else if (0 < (int)param_5) {
      pfVar2 = (float *)(param_1 + 0x220);
      param_3 = param_3 - (longlong)param_2;
      uVar7 = (ulonglong)param_5;
      fVar11 = _DAT_180be2ee8;
      do {
        fVar12 = pfVar2[-1];
        fVar10 = *pfVar2;
        pfVar3 = param_2;
        uVar4 = uVar6;
        if (param_4 != 0) {
          do {
            fVar13 = fVar11 + *pfVar3;
            fVar11 = -fVar11;
            fVar12 = fVar12 + (fVar13 - fVar12) * *(float *)(param_1 + 0x31c);
            fVar10 = fVar10 + (fVar12 - fVar10) * *(float *)(param_1 + 0x31c);
            *(float *)((longlong)pfVar3 + param_3) = fVar10;
            uVar5 = (int)uVar4 - 1;
            pfVar3 = pfVar3 + (int)param_5;
            uVar4 = (ulonglong)uVar5;
            _DAT_180be2ee8 = fVar11;
          } while (uVar5 != 0);
        }
        pfVar2[-1] = fVar12;
        param_2 = param_2 + 1;
        *pfVar2 = fVar10;
        pfVar2 = pfVar2 + 2;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1807950d0(void)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  int iVar4;
  longlong unaff_RBX;
  longlong unaff_RBP;
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
  float fStackX_20;
  float fStack00000000000000f8;
  float fStack0000000000000100;
  
  iVar4 = (int)in_R9;
  if (iVar4 == 2) {
    fVar9 = *(float *)(unaff_RBX + 0x21c);
    fVar10 = *(float *)(unaff_RBX + 0x220);
    fVar11 = *(float *)(unaff_RBX + 0x224);
    fVar12 = *(float *)(unaff_RBX + 0x228);
    if (unaff_ESI != 0) {
      pfVar2 = unaff_RDI + 1;
      fVar7 = _DAT_180be2ee8;
      do {
        fVar13 = *(float *)(unaff_RBX + 0x31c);
        fVar9 = fVar9 + ((fVar7 + pfVar2[-1]) - fVar9) * *(float *)(unaff_RBX + 0x31c);
        fVar11 = fVar11 + fVar13 * ((_DAT_180be2ee8 + *pfVar2) - fVar11);
        fVar10 = fVar10 + (fVar9 - fVar10) * fVar13;
        fVar12 = fVar12 + (fVar11 - fVar12) * fVar13;
        *(float *)((longlong)pfVar2 + (unaff_RBP - (longlong)unaff_RDI) + -4) = fVar10;
        fVar7 = -_DAT_180be2ee8;
        _DAT_180be2ee8 = fVar7;
        *(float *)((longlong)pfVar2 + (unaff_RBP - (longlong)unaff_RDI)) = fVar12;
        pfVar2 = pfVar2 + 2;
        unaff_ESI = unaff_ESI + -1;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x224) = fVar11;
    *(float *)(unaff_RBX + 0x228) = fVar12;
  }
  else if (iVar4 == 6) {
    fVar9 = *(float *)(unaff_RBX + 0x21c);
    fVar10 = *(float *)(unaff_RBX + 0x220);
    fVar11 = *(float *)(unaff_RBX + 0x224);
    fVar12 = *(float *)(unaff_RBX + 0x228);
    fVar7 = *(float *)(unaff_RBX + 0x22c);
    fVar13 = *(float *)(unaff_RBX + 0x230);
    fVar14 = *(float *)(unaff_RBX + 0x234);
    fVar15 = *(float *)(unaff_RBX + 0x238);
    fVar16 = *(float *)(unaff_RBX + 0x23c);
    fVar17 = *(float *)(unaff_RBX + 0x240);
    fVar18 = *(float *)(unaff_RBX + 0x244);
    fVar19 = *(float *)(unaff_RBX + 0x248);
    if (unaff_ESI != 0) {
      pfVar2 = (float *)(unaff_RBP + 8);
      lVar5 = (longlong)unaff_RDI - unaff_RBP;
      fVar8 = _DAT_180be2ee8;
      do {
        fVar9 = fVar9 + ((fVar8 + *(float *)(lVar5 + -8 + (longlong)pfVar2)) - fVar9) *
                        *(float *)(unaff_RBX + 0x31c);
        fVar11 = fVar11 + ((_DAT_180be2ee8 + *(float *)(lVar5 + -4 + (longlong)pfVar2)) - fVar11) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar7 = fVar7 + ((_DAT_180be2ee8 + *(float *)(lVar5 + (longlong)pfVar2)) - fVar7) *
                        *(float *)(unaff_RBX + 0x31c);
        fVar1 = *(float *)(unaff_RBX + 0x31c);
        fVar14 = fVar14 + ((_DAT_180be2ee8 + *(float *)(lVar5 + 4 + (longlong)pfVar2)) - fVar14) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar16 = fVar16 + ((_DAT_180be2ee8 + *(float *)(lVar5 + 8 + (longlong)pfVar2)) - fVar16) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar18 = fVar18 + fVar1 * ((_DAT_180be2ee8 + *(float *)(lVar5 + 0xc + (longlong)pfVar2)) -
                                  fVar18);
        fVar10 = fVar10 + (fVar9 - fVar10) * fVar1;
        fVar12 = fVar12 + (fVar11 - fVar12) * fVar1;
        pfVar2[-2] = fVar10;
        pfVar2[-1] = fVar12;
        fVar13 = fVar13 + (fVar7 - fVar13) * fVar1;
        fVar15 = fVar15 + (fVar14 - fVar15) * fVar1;
        *pfVar2 = fVar13;
        pfVar2[1] = fVar15;
        fVar19 = fVar19 + (fVar18 - fVar19) * fVar1;
        fVar8 = -_DAT_180be2ee8;
        fVar17 = fVar17 + (fVar16 - fVar17) * fVar1;
        _DAT_180be2ee8 = fVar8;
        pfVar2[2] = fVar17;
        pfVar2[3] = fVar19;
        pfVar2 = pfVar2 + 6;
        unaff_ESI = unaff_ESI + -1;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x224) = fVar11;
    *(float *)(unaff_RBX + 0x228) = fVar12;
    *(float *)(unaff_RBX + 0x22c) = fVar7;
    *(float *)(unaff_RBX + 0x230) = fVar13;
    *(float *)(unaff_RBX + 0x234) = fVar14;
    *(float *)(unaff_RBX + 0x238) = fVar15;
    *(float *)(unaff_RBX + 0x23c) = fVar16;
    *(float *)(unaff_RBX + 0x240) = fVar17;
    *(float *)(unaff_RBX + 0x244) = fVar18;
    *(float *)(unaff_RBX + 0x248) = fVar19;
  }
  else if (iVar4 == 8) {
    fStackX_20 = *(float *)(unaff_RBX + 0x250);
    fStack00000000000000f8 = *(float *)(unaff_RBX + 0x254);
    fStack0000000000000100 = *(float *)(unaff_RBX + 600);
    fVar9 = *(float *)(unaff_RBX + 0x21c);
    fVar10 = *(float *)(unaff_RBX + 0x220);
    fVar11 = *(float *)(unaff_RBX + 0x224);
    fVar12 = *(float *)(unaff_RBX + 0x228);
    fVar7 = *(float *)(unaff_RBX + 0x22c);
    fVar13 = *(float *)(unaff_RBX + 0x230);
    fVar14 = *(float *)(unaff_RBX + 0x234);
    fVar15 = *(float *)(unaff_RBX + 0x238);
    fVar16 = *(float *)(unaff_RBX + 0x23c);
    fVar17 = *(float *)(unaff_RBX + 0x240);
    fVar18 = *(float *)(unaff_RBX + 0x244);
    fVar19 = *(float *)(unaff_RBX + 0x248);
    fVar8 = *(float *)(unaff_RBX + 0x24c);
    if (unaff_ESI != 0) {
      pfVar2 = (float *)(unaff_RBP + 8);
      lVar5 = (longlong)unaff_RDI - unaff_RBP;
      do {
        fVar9 = fVar9 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + -8)) - fVar9) *
                        *(float *)(unaff_RBX + 0x31c);
        fVar11 = fVar11 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + -4)) - fVar11) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar7 = fVar7 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5)) - fVar7) *
                        *(float *)(unaff_RBX + 0x31c);
        fVar14 = fVar14 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + 4)) - fVar14) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar16 = fVar16 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + 8)) - fVar16) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar18 = fVar18 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + 0xc)) - fVar18) *
                          *(float *)(unaff_RBX + 0x31c);
        fVar8 = fVar8 + ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + 0x10)) - fVar8) *
                        *(float *)(unaff_RBX + 0x31c);
        fVar1 = *(float *)(unaff_RBX + 0x31c);
        fStack00000000000000f8 =
             fStack00000000000000f8 +
             fVar1 * ((_DAT_180be2ee8 + *(float *)((longlong)pfVar2 + lVar5 + 0x14)) -
                     fStack00000000000000f8);
        fVar12 = fVar12 + (fVar11 - fVar12) * fVar1;
        fVar10 = fVar10 + (fVar9 - fVar10) * fVar1;
        fVar15 = fVar15 + (fVar14 - fVar15) * fVar1;
        fVar13 = fVar13 + (fVar7 - fVar13) * fVar1;
        fVar19 = fVar19 + (fVar18 - fVar19) * fVar1;
        fVar17 = fVar17 + (fVar16 - fVar17) * fVar1;
        fStackX_20 = fStackX_20 + (fVar8 - fStackX_20) * fVar1;
        fStack0000000000000100 =
             fStack0000000000000100 + (fStack00000000000000f8 - fStack0000000000000100) * fVar1;
        _DAT_180be2ee8 = -_DAT_180be2ee8;
        pfVar2[-2] = fVar10;
        pfVar2[-1] = fVar12;
        *pfVar2 = fVar13;
        pfVar2[1] = fVar15;
        pfVar2[2] = fVar17;
        pfVar2[3] = fVar19;
        pfVar2[4] = fStackX_20;
        pfVar2[5] = fStack0000000000000100;
        pfVar2 = pfVar2 + 8;
        unaff_ESI = unaff_ESI + -1;
      } while (unaff_ESI != 0);
    }
    *(float *)(unaff_RBX + 0x21c) = fVar9;
    *(float *)(unaff_RBX + 0x220) = fVar10;
    *(float *)(unaff_RBX + 0x224) = fVar11;
    *(float *)(unaff_RBX + 0x228) = fVar12;
    *(float *)(unaff_RBX + 0x22c) = fVar7;
    *(float *)(unaff_RBX + 0x230) = fVar13;
    *(float *)(unaff_RBX + 0x234) = fVar14;
    *(float *)(unaff_RBX + 0x238) = fVar15;
    *(float *)(unaff_RBX + 0x23c) = fVar16;
    *(float *)(unaff_RBX + 0x240) = fVar17;
    *(float *)(unaff_RBX + 0x244) = fVar18;
    *(float *)(unaff_RBX + 0x248) = fVar19;
    *(float *)(unaff_RBX + 0x24c) = fVar8;
    *(float *)(unaff_RBX + 0x250) = fStackX_20;
    *(float *)(unaff_RBX + 0x254) = fStack00000000000000f8;
    *(float *)(unaff_RBX + 600) = fStack0000000000000100;
  }
  else if (0 < iVar4) {
    pfVar2 = (float *)(unaff_RBX + 0x220);
    lVar5 = unaff_RBP - (longlong)unaff_RDI;
    uVar6 = in_R9 & 0xffffffff;
    fVar9 = _DAT_180be2ee8;
    do {
      fVar10 = pfVar2[-1];
      fVar11 = *pfVar2;
      pfVar3 = unaff_RDI;
      iVar4 = unaff_ESI;
      if (unaff_ESI != 0) {
        do {
          fVar12 = fVar9 + *pfVar3;
          fVar9 = -fVar9;
          fVar10 = fVar10 + (fVar12 - fVar10) * *(float *)(unaff_RBX + 0x31c);
          fVar11 = fVar11 + (fVar10 - fVar11) * *(float *)(unaff_RBX + 0x31c);
          *(float *)((longlong)pfVar3 + lVar5) = fVar11;
          iVar4 = iVar4 + -1;
          pfVar3 = pfVar3 + in_R9;
          _DAT_180be2ee8 = fVar9;
        } while (iVar4 != 0);
      }
      pfVar2[-1] = fVar10;
      unaff_RDI = unaff_RDI + 1;
      *pfVar2 = fVar11;
      pfVar2 = pfVar2 + 2;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return 0;
}



uint64_t FUN_180795853(void)

{
  return 0;
}



uint64_t FUN_180795a30(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint64_t uVar3;
  int iVar4;
  longlong lVar5;
  
  lVar1 = *param_1;
  *(int32_t *)(lVar1 + 0x21c) = 0x3f800000;
  *(int32_t *)(lVar1 + 0x218) = 0x3f800000;
  if ((int32_t *)(lVar1 + 0x220) != (int32_t *)0x0) {
    *(int32_t *)(lVar1 + 0x220) = *(int32_t *)(*(longlong *)(lVar1 + 0xa8) + 0x6d0);
  }
  lVar2 = *(longlong *)(lVar1 + 0xe8);
  iVar4 = 0;
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
  return 0;
}



uint64_t FUN_180795b70(longlong *param_1,int param_2,int32_t *param_3,longlong param_4)

{
  longlong lVar1;
  float fVar2;
  
  lVar1 = *param_1;
  if (param_2 == 0) {
    *param_3 = *(int32_t *)(lVar1 + 0x224);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x224);
  }
  else if (param_2 == 1) {
    *param_3 = *(int32_t *)(lVar1 + 0x228);
    if (param_4 == 0) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x228);
  }
  else {
    if ((param_2 != 2) || (*param_3 = *(int32_t *)(lVar1 + 0x22c), param_4 == 0)) {
      return 0;
    }
    fVar2 = *(float *)(lVar1 + 0x22c);
  }
                    // WARNING: Subroutine does not return
  FUN_18076b390(param_4,0x20,&unknown_var_2048_ptr,(double)fVar2);
}





