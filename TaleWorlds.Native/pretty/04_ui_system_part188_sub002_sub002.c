#include "TaleWorlds.Native.Split.h"

// 04_ui_system_part188_sub002_sub002.c - 1 个函数

// 函数: void FUN_180779050(void)
void FUN_180779050(void)

{
                    // WARNING: Subroutine does not return
  memset(0x180c0d7f4,0,0x5c);
}



uint64_t
FUN_180779270(longlong param_1,longlong param_2,uint param_3,uint param_4,float *param_5,int param_6
             ,int param_7,int param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar22;
  float fVar23;
  int8_t auVar21 [16];
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
  float fVar39;
  int iStackX_8;
  int iStack_b8;
  
  iVar16 = 0;
  iStack_b8 = 0;
  iVar9 = param_6;
  if (1 < param_6) {
    do {
      iVar9 = iVar9 >> 1;
      iVar16 = iVar16 + 1;
      iStack_b8 = iVar16;
    } while (1 < iVar9);
  }
  pfVar12 = *(float **)(param_1 + 0x218);
  fVar26 = 0.0;
  iStackX_8 = param_6;
  fVar30 = 0.0;
  if (param_6 != 0) {
    do {
      iVar9 = param_4 - param_3;
      if (iStackX_8 + param_3 <= param_4) {
        iVar9 = iStackX_8;
      }
      iVar16 = 0;
      if (0 < iVar9) {
        do {
          fVar18 = (float)(**(code **)((longlong)param_7 * 8 + 0x180be1f78))(param_1,fVar30);
          uVar14 = iVar16 + param_3;
          iVar16 = iVar16 + 1;
          fVar30 = fVar30 + 1.0 / (float)param_6;
          fVar31 = *(float *)(param_2 + (ulonglong)uVar14 * 4);
          pfVar12[1] = 1e-08;
          *pfVar12 = fVar18 * fVar31 * (1.0 / (float)param_6);
          pfVar12 = pfVar12 + 2;
        } while (iVar16 < iVar9);
      }
      uVar14 = iVar9 + param_3;
      iStackX_8 = iStackX_8 - iVar9;
      param_3 = 0;
      if (uVar14 < param_4) {
        param_3 = uVar14;
      }
    } while (iStackX_8 != 0);
  }
  FUN_1807797e0(param_1,iStack_b8);
  uVar15 = 0;
  param_6 = param_6 / 2;
  uVar14 = param_6 - 1;
  pfVar12 = param_5;
  if (0 < (int)uVar14) {
    do {
      uVar11 = 0;
      uVar13 = uVar15;
      for (iVar9 = iStack_b8; iVar9 != 0; iVar9 = iVar9 + -1) {
        uVar10 = uVar13 & 1;
        uVar13 = uVar13 >> 1;
        uVar11 = uVar11 * 2 | uVar10;
      }
      uVar15 = uVar15 + 1;
      fVar30 = *(float *)(*(longlong *)(param_1 + 0x218) + 4 + (longlong)(int)uVar11 * 8);
      fVar31 = *(float *)(*(longlong *)(param_1 + 0x218) + (longlong)(int)uVar11 * 8);
      fVar30 = SQRT(fVar31 * fVar31 + fVar30 * fVar30) * 2.5;
      if (1.0 <= fVar30) {
        fVar30 = 1.0;
      }
      *pfVar12 = fVar30;
      pfVar12 = pfVar12 + 1;
    } while ((int)uVar15 < (int)uVar14);
  }
  if (param_9 != (float *)0x0) {
    iVar9 = 0;
    fVar30 = 0.0;
    if (0 < (int)uVar14) {
      if (7 < uVar14) {
        uVar15 = uVar14 & 0x80000007;
        if ((int)uVar15 < 0) {
          uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
        }
        auVar21._0_4_ = param_6 + -1;
        auVar21._4_4_ = param_6 + -1;
        auVar21._8_4_ = param_6 + -1;
        auVar21._12_4_ = param_6 + -1;
        auVar19._0_4_ = (float)auVar21._0_4_;
        auVar19._4_4_ = (float)auVar21._4_4_;
        auVar19._8_4_ = (float)auVar21._8_4_;
        auVar19._12_4_ = (float)auVar21._12_4_;
        auVar21 = rcpps(auVar21,auVar19);
        fVar26 = 0.0;
        fVar31 = 0.0;
        fVar18 = 0.0;
        fVar20 = 0.0;
        fVar30 = auVar21._0_4_;
        fVar22 = auVar21._4_4_;
        fVar23 = auVar21._8_4_;
        fVar24 = auVar21._12_4_;
        fVar32 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar25 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = (fVar30 + fVar30) - fVar30 * fVar30 * auVar19._0_4_;
        fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar19._4_4_;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar19._8_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar19._12_4_;
        pfVar12 = param_5;
        iVar16 = iVar9;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[1];
          fVar3 = pfVar12[2];
          fVar4 = pfVar12[3];
          uVar13 = -(uint)(0.0001 < fVar1);
          uVar11 = -(uint)(0.0001 < fVar2);
          uVar10 = -(uint)(0.0001 < fVar3);
          uVar17 = -(uint)(0.0001 < fVar4);
          iVar9 = iVar16 + 8;
          fVar5 = pfVar12[4];
          fVar6 = pfVar12[5];
          fVar7 = pfVar12[6];
          fVar8 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          fVar26 = (float)((uint)((float)iVar16 * (float)param_8 * 0.5 * fVar30 * fVar1 + fVar26) &
                           uVar13 | ~uVar13 & (uint)fVar26);
          fVar31 = (float)((uint)((float)(iVar16 + 1) * (float)param_8 * 0.5 * fVar22 * fVar2 +
                                 fVar31) & uVar11 | ~uVar11 & (uint)fVar31);
          fVar18 = (float)((uint)((float)(iVar16 + 2) * (float)param_8 * 0.5 * fVar23 * fVar3 +
                                 fVar18) & uVar10 | ~uVar10 & (uint)fVar18);
          fVar20 = (float)((uint)((float)(iVar16 + 3) * (float)param_8 * 0.5 * fVar24 * fVar4 +
                                 fVar20) & uVar17 | ~uVar17 & (uint)fVar20);
          fVar25 = (float)((uint)(fVar1 + fVar25) & uVar13 | ~uVar13 & (uint)fVar25);
          fVar27 = (float)((uint)(fVar2 + fVar27) & uVar11 | ~uVar11 & (uint)fVar27);
          fVar28 = (float)((uint)(fVar3 + fVar28) & uVar10 | ~uVar10 & (uint)fVar28);
          fVar29 = (float)((uint)(fVar4 + fVar29) & uVar17 | ~uVar17 & (uint)fVar29);
          uVar13 = -(uint)(0.0001 < fVar5);
          uVar11 = -(uint)(0.0001 < fVar6);
          uVar10 = -(uint)(0.0001 < fVar7);
          uVar17 = -(uint)(0.0001 < fVar8);
          fVar32 = (float)((uint)((float)(iVar16 + 4) * (float)param_8 * 0.5 * fVar30 * fVar5 +
                                 fVar32) & uVar13 | ~uVar13 & (uint)fVar32);
          fVar33 = (float)((uint)((float)(iVar16 + 5) * (float)param_8 * 0.5 * fVar22 * fVar6 +
                                 fVar33) & uVar11 | ~uVar11 & (uint)fVar33);
          fVar34 = (float)((uint)((float)(iVar16 + 6) * (float)param_8 * 0.5 * fVar23 * fVar7 +
                                 fVar34) & uVar10 | ~uVar10 & (uint)fVar34);
          fVar35 = (float)((uint)((float)(iVar16 + 7) * (float)param_8 * 0.5 * fVar24 * fVar8 +
                                 fVar35) & uVar17 | ~uVar17 & (uint)fVar35);
          fVar36 = (float)((uint)(fVar5 + fVar36) & uVar13 | ~uVar13 & (uint)fVar36);
          fVar37 = (float)((uint)(fVar6 + fVar37) & uVar11 | ~uVar11 & (uint)fVar37);
          fVar38 = (float)((uint)(fVar7 + fVar38) & uVar10 | ~uVar10 & (uint)fVar38);
          fVar39 = (float)((uint)(fVar8 + fVar39) & uVar17 | ~uVar17 & (uint)fVar39);
          iVar16 = iVar9;
        } while (iVar9 < (int)(uVar14 - uVar15));
        fVar30 = fVar28 + fVar38 + fVar25 + fVar36 + fVar29 + fVar39 + fVar27 + fVar37;
        fVar26 = fVar18 + fVar34 + fVar26 + fVar32 + fVar20 + fVar35 + fVar31 + fVar33;
      }
      if (iVar9 < (int)uVar14) {
        if (3 < (int)(uVar14 - iVar9)) {
          iVar16 = iVar9 + 2;
          fVar31 = (float)param_8;
          pfVar12 = param_5 + (longlong)iVar9 + 2;
          fVar18 = (float)(int)uVar14;
          do {
            fVar20 = pfVar12[-2];
            if (0.0001 < fVar20) {
              fVar30 = fVar30 + fVar20;
              fVar26 = fVar26 + ((fVar31 * 0.5 * (float)iVar9) / fVar18) * fVar20;
            }
            fVar20 = pfVar12[-1];
            if (0.0001 < fVar20) {
              fVar30 = fVar30 + fVar20;
              fVar26 = fVar26 + (((float)(iVar16 + -1) * fVar31 * 0.5) / fVar18) * fVar20;
            }
            fVar20 = *pfVar12;
            if (0.0001 < fVar20) {
              fVar30 = fVar30 + fVar20;
              fVar26 = fVar26 + (((float)iVar16 * fVar31 * 0.5) / fVar18) * fVar20;
            }
            fVar20 = pfVar12[1];
            if (0.0001 < fVar20) {
              fVar30 = fVar30 + fVar20;
              fVar26 = fVar26 + (((float)(iVar16 + 1) * fVar31 * 0.5) / fVar18) * fVar20;
            }
            pfVar12 = pfVar12 + 4;
            iVar9 = iVar9 + 4;
            iVar16 = iVar16 + 4;
          } while (iVar9 < param_6 + -4);
        }
        if (iVar9 < (int)uVar14) {
          param_5 = param_5 + iVar9;
          do {
            fVar31 = *param_5;
            if (0.0001 < fVar31) {
              fVar30 = fVar30 + fVar31;
              fVar26 = fVar26 + (((float)param_8 * 0.5 * (float)iVar9) / (float)(int)uVar14) *
                                fVar31;
            }
            param_5 = param_5 + 1;
            iVar9 = iVar9 + 1;
          } while (iVar9 < (int)uVar14);
        }
      }
      if (0.001 < fVar30) {
        *param_9 = fVar26 / fVar30;
        return 0;
      }
    }
    *param_9 = 0.0;
  }
  return 0;
}



uint64_t FUN_1807792a3(longlong param_1,uint64_t param_2,uint param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  uint uVar10;
  longlong in_RAX;
  uint uVar11;
  float *pfVar12;
  int unaff_EBX;
  uint64_t unaff_RBP;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  uint uVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar23;
  float fVar24;
  int8_t auVar22 [16];
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
  float fVar39;
  float fVar40;
  int iStackX_20;
  int iStack00000000000000e0;
  longlong in_stack_000000e8;
  uint in_stack_000000f8;
  float *in_stack_00000100;
  int in_stack_00000108;
  int in_stack_00000110;
  int in_stack_00000118;
  float *in_stack_00000120;
  
  *(uint64_t *)(in_RAX + 0x18) = unaff_RBP;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R13;
  iVar17 = 0;
  *(uint64_t *)(in_RAX + -0x30) = unaff_R14;
  *(uint64_t *)(in_RAX + -0x38) = unaff_R15;
  iStackX_20 = 0;
  iVar9 = in_stack_00000108;
  if (1 < in_stack_00000108) {
    do {
      iVar9 = iVar9 >> 1;
      iVar17 = iVar17 + 1;
      iStackX_20 = iVar17;
    } while (1 < iVar9);
  }
  pfVar12 = *(float **)(param_1 + 0x218);
  fVar27 = 0.0;
  iStack00000000000000e0 = in_stack_00000108;
  fVar31 = 0.0;
  iVar9 = unaff_EBX;
  if (in_stack_00000108 != 0) {
    do {
      iVar9 = param_4 - param_3;
      if (iStack00000000000000e0 + param_3 <= param_4) {
        iVar9 = iStack00000000000000e0;
      }
      iVar17 = 0;
      if (0 < iVar9) {
        do {
          fVar19 = (float)(**(code **)((longlong)in_stack_00000110 * 8 + 0x180be1f78))
                                    (param_1,fVar31);
          uVar15 = iVar17 + param_3;
          iVar17 = iVar17 + 1;
          fVar31 = fVar31 + 1.0 / (float)in_stack_00000108;
          fVar32 = *(float *)(in_stack_000000e8 + (ulonglong)uVar15 * 4);
          pfVar12[1] = 1e-08;
          *pfVar12 = fVar19 * fVar32 * (1.0 / (float)in_stack_00000108);
          pfVar12 = pfVar12 + 2;
          param_4 = in_stack_000000f8;
        } while (iVar17 < iVar9);
      }
      uVar15 = iVar9 + param_3;
      iStack00000000000000e0 = iStack00000000000000e0 - iVar9;
      param_3 = 0;
      if (uVar15 < param_4) {
        param_3 = uVar15;
      }
    } while (iStack00000000000000e0 != 0);
    iStack00000000000000e0 = 0;
    iVar9 = in_stack_00000118;
  }
  FUN_1807797e0(param_1,iStackX_20);
  uVar16 = 0;
  in_stack_00000108 = in_stack_00000108 / 2;
  uVar15 = in_stack_00000108 - 1;
  pfVar12 = in_stack_00000100;
  if (0 < (int)uVar15) {
    do {
      uVar11 = 0;
      uVar13 = uVar16;
      for (iVar17 = iStackX_20; iVar17 != 0; iVar17 = iVar17 + -1) {
        uVar10 = uVar13 & 1;
        uVar13 = uVar13 >> 1;
        uVar11 = uVar11 * 2 | uVar10;
      }
      uVar16 = uVar16 + 1;
      fVar31 = *(float *)(*(longlong *)(param_1 + 0x218) + 4 + (longlong)(int)uVar11 * 8);
      fVar32 = *(float *)(*(longlong *)(param_1 + 0x218) + (longlong)(int)uVar11 * 8);
      fVar31 = SQRT(fVar32 * fVar32 + fVar31 * fVar31) * 2.5;
      if (1.0 <= fVar31) {
        fVar31 = 1.0;
      }
      *pfVar12 = fVar31;
      pfVar12 = pfVar12 + 1;
    } while ((int)uVar16 < (int)uVar15);
  }
  if (in_stack_00000120 != (float *)0x0) {
    iVar17 = 0;
    fVar31 = 0.0;
    if (0 < (int)uVar15) {
      if (7 < uVar15) {
        uVar16 = uVar15 & 0x80000007;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
        }
        auVar22._0_4_ = in_stack_00000108 + -1;
        auVar22._4_4_ = in_stack_00000108 + -1;
        auVar22._8_4_ = in_stack_00000108 + -1;
        auVar22._12_4_ = in_stack_00000108 + -1;
        auVar20._0_4_ = (float)auVar22._0_4_;
        auVar20._4_4_ = (float)auVar22._4_4_;
        auVar20._8_4_ = (float)auVar22._8_4_;
        auVar20._12_4_ = (float)auVar22._12_4_;
        auVar22 = rcpps(auVar22,auVar20);
        fVar27 = 0.0;
        fVar32 = 0.0;
        fVar19 = 0.0;
        fVar21 = 0.0;
        fVar31 = auVar22._0_4_;
        fVar23 = auVar22._4_4_;
        fVar24 = auVar22._8_4_;
        fVar25 = auVar22._12_4_;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar40 = 0.0;
        fVar26 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar31 = (fVar31 + fVar31) - fVar31 * fVar31 * auVar20._0_4_;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar20._4_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar20._8_4_;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar20._12_4_;
        pfVar12 = in_stack_00000100;
        iVar14 = iVar17;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[1];
          fVar3 = pfVar12[2];
          fVar4 = pfVar12[3];
          uVar13 = -(uint)(0.0001 < fVar1);
          uVar11 = -(uint)(0.0001 < fVar2);
          uVar10 = -(uint)(0.0001 < fVar3);
          uVar18 = -(uint)(0.0001 < fVar4);
          iVar17 = iVar14 + 8;
          fVar5 = pfVar12[4];
          fVar6 = pfVar12[5];
          fVar7 = pfVar12[6];
          fVar8 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          fVar27 = (float)((uint)((float)iVar14 * (float)unaff_EBX * 0.5 * fVar31 * fVar1 + fVar27)
                           & uVar13 | ~uVar13 & (uint)fVar27);
          fVar32 = (float)((uint)((float)(iVar14 + 1) * (float)unaff_EBX * 0.5 * fVar23 * fVar2 +
                                 fVar32) & uVar11 | ~uVar11 & (uint)fVar32);
          fVar19 = (float)((uint)((float)(iVar14 + 2) * (float)unaff_EBX * 0.5 * fVar24 * fVar3 +
                                 fVar19) & uVar10 | ~uVar10 & (uint)fVar19);
          fVar21 = (float)((uint)((float)(iVar14 + 3) * (float)unaff_EBX * 0.5 * fVar25 * fVar4 +
                                 fVar21) & uVar18 | ~uVar18 & (uint)fVar21);
          fVar26 = (float)((uint)(fVar1 + fVar26) & uVar13 | ~uVar13 & (uint)fVar26);
          fVar28 = (float)((uint)(fVar2 + fVar28) & uVar11 | ~uVar11 & (uint)fVar28);
          fVar29 = (float)((uint)(fVar3 + fVar29) & uVar10 | ~uVar10 & (uint)fVar29);
          fVar30 = (float)((uint)(fVar4 + fVar30) & uVar18 | ~uVar18 & (uint)fVar30);
          uVar13 = -(uint)(0.0001 < fVar5);
          uVar11 = -(uint)(0.0001 < fVar6);
          uVar10 = -(uint)(0.0001 < fVar7);
          uVar18 = -(uint)(0.0001 < fVar8);
          fVar33 = (float)((uint)((float)(iVar14 + 4) * (float)unaff_EBX * 0.5 * fVar31 * fVar5 +
                                 fVar33) & uVar13 | ~uVar13 & (uint)fVar33);
          fVar34 = (float)((uint)((float)(iVar14 + 5) * (float)unaff_EBX * 0.5 * fVar23 * fVar6 +
                                 fVar34) & uVar11 | ~uVar11 & (uint)fVar34);
          fVar35 = (float)((uint)((float)(iVar14 + 6) * (float)unaff_EBX * 0.5 * fVar24 * fVar7 +
                                 fVar35) & uVar10 | ~uVar10 & (uint)fVar35);
          fVar36 = (float)((uint)((float)(iVar14 + 7) * (float)unaff_EBX * 0.5 * fVar25 * fVar8 +
                                 fVar36) & uVar18 | ~uVar18 & (uint)fVar36);
          fVar37 = (float)((uint)(fVar5 + fVar37) & uVar13 | ~uVar13 & (uint)fVar37);
          fVar38 = (float)((uint)(fVar6 + fVar38) & uVar11 | ~uVar11 & (uint)fVar38);
          fVar39 = (float)((uint)(fVar7 + fVar39) & uVar10 | ~uVar10 & (uint)fVar39);
          fVar40 = (float)((uint)(fVar8 + fVar40) & uVar18 | ~uVar18 & (uint)fVar40);
          iVar14 = iVar17;
        } while (iVar17 < (int)(uVar15 - uVar16));
        fVar31 = fVar29 + fVar39 + fVar26 + fVar37 + fVar30 + fVar40 + fVar28 + fVar38;
        fVar27 = fVar19 + fVar35 + fVar27 + fVar33 + fVar21 + fVar36 + fVar32 + fVar34;
      }
      if (iVar17 < (int)uVar15) {
        if (3 < (int)(uVar15 - iVar17)) {
          iVar14 = iVar17 + 2;
          fVar32 = (float)iVar9;
          pfVar12 = in_stack_00000100 + (longlong)iVar17 + 2;
          fVar19 = (float)(int)uVar15;
          do {
            fVar21 = pfVar12[-2];
            if (0.0001 < fVar21) {
              fVar31 = fVar31 + fVar21;
              fVar27 = fVar27 + ((fVar32 * 0.5 * (float)iVar17) / fVar19) * fVar21;
            }
            fVar21 = pfVar12[-1];
            if (0.0001 < fVar21) {
              fVar31 = fVar31 + fVar21;
              fVar27 = fVar27 + (((float)(iVar14 + -1) * fVar32 * 0.5) / fVar19) * fVar21;
            }
            fVar21 = *pfVar12;
            if (0.0001 < fVar21) {
              fVar31 = fVar31 + fVar21;
              fVar27 = fVar27 + (((float)iVar14 * fVar32 * 0.5) / fVar19) * fVar21;
            }
            fVar21 = pfVar12[1];
            if (0.0001 < fVar21) {
              fVar31 = fVar31 + fVar21;
              fVar27 = fVar27 + (((float)(iVar14 + 1) * fVar32 * 0.5) / fVar19) * fVar21;
            }
            pfVar12 = pfVar12 + 4;
            iVar17 = iVar17 + 4;
            iVar14 = iVar14 + 4;
          } while (iVar17 < in_stack_00000108 + -4);
        }
        if (iVar17 < (int)uVar15) {
          in_stack_00000100 = in_stack_00000100 + iVar17;
          do {
            fVar32 = *in_stack_00000100;
            if (0.0001 < fVar32) {
              fVar31 = fVar31 + fVar32;
              fVar27 = fVar27 + (((float)iVar9 * 0.5 * (float)iVar17) / (float)(int)uVar15) * fVar32
              ;
            }
            in_stack_00000100 = in_stack_00000100 + 1;
            iVar17 = iVar17 + 1;
          } while (iVar17 < (int)uVar15);
        }
      }
      if (0.001 < fVar31) {
        *in_stack_00000120 = fVar27 / fVar31;
        return 0;
      }
    }
    *in_stack_00000120 = 0.0;
  }
  return 0;
}



uint64_t FUN_18077932f(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  uint unaff_EBP;
  float *unaff_RDI;
  uint uVar14;
  uint in_R9D;
  uint uVar15;
  uint uVar16;
  longlong unaff_R13;
  longlong unaff_R14;
  int unaff_R15D;
  uint uVar17;
  float fVar18;
  float fVar19;
  int8_t auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar24;
  float fVar25;
  int8_t auVar23 [16];
  float fVar26;
  float unaff_XMM6_Da;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float unaff_XMM8_Da;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float unaff_XMM9_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  int iStackX_20;
  int in_stack_000000e0;
  uint in_stack_000000f8;
  float *in_stack_00000100;
  int in_stack_00000108;
  int in_stack_00000110;
  int in_stack_00000118;
  float *in_stack_00000120;
  
  do {
    iVar11 = in_R9D - unaff_EBP;
    if (unaff_R15D + unaff_EBP <= in_R9D) {
      iVar11 = unaff_R15D;
    }
    iVar13 = 0;
    if (0 < iVar11) {
      do {
        fVar18 = (float)(**(code **)((longlong)in_stack_00000110 * 8 + 0x180be1f78))();
        uVar15 = iVar13 + unaff_EBP;
        iVar13 = iVar13 + 1;
        fVar19 = *(float *)(unaff_R13 + (ulonglong)uVar15 * 4);
        unaff_RDI[1] = 1e-08;
        *unaff_RDI = fVar18 * fVar19 * unaff_XMM8_Da;
        unaff_RDI = unaff_RDI + 2;
        unaff_R15D = in_stack_000000e0;
        in_R9D = in_stack_000000f8;
      } while (iVar13 < iVar11);
    }
    uVar15 = iVar11 + unaff_EBP;
    unaff_R15D = unaff_R15D - iVar11;
    unaff_EBP = 0;
    if (uVar15 < in_R9D) {
      unaff_EBP = uVar15;
    }
    in_stack_000000e0 = unaff_R15D;
  } while (unaff_R15D != 0);
  FUN_1807797e0();
  uVar16 = 0;
  in_stack_00000108 = in_stack_00000108 / 2;
  uVar15 = in_stack_00000108 - 1;
  pfVar12 = in_stack_00000100;
  if (0 < (int)uVar15) {
    do {
      uVar10 = 0;
      iVar11 = iStackX_20;
      uVar14 = uVar16;
      if (iStackX_20 != 0) {
        do {
          uVar9 = uVar14 & 1;
          uVar14 = uVar14 >> 1;
          uVar10 = uVar10 * 2 | uVar9;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      uVar16 = uVar16 + 1;
      fVar19 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + 4 + (longlong)(int)uVar10 * 8);
      fVar18 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + (longlong)(int)uVar10 * 8);
      fVar19 = SQRT(fVar18 * fVar18 + fVar19 * fVar19) * 2.5;
      if (unaff_XMM9_Da <= fVar19) {
        fVar19 = unaff_XMM9_Da;
      }
      *pfVar12 = fVar19;
      pfVar12 = pfVar12 + 1;
    } while ((int)uVar16 < (int)uVar15);
  }
  if (in_stack_00000120 != (float *)0x0) {
    iVar11 = 0;
    if (0 < (int)uVar15) {
      fVar19 = unaff_XMM6_Da;
      if (7 < uVar15) {
        uVar16 = uVar15 & 0x80000007;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
        }
        auVar23._0_4_ = in_stack_00000108 + -1;
        auVar23._4_4_ = in_stack_00000108 + -1;
        auVar23._8_4_ = in_stack_00000108 + -1;
        auVar23._12_4_ = in_stack_00000108 + -1;
        auVar20._0_4_ = (float)auVar23._0_4_;
        auVar20._4_4_ = (float)auVar23._4_4_;
        auVar20._8_4_ = (float)auVar23._8_4_;
        auVar20._12_4_ = (float)auVar23._12_4_;
        auVar23 = rcpps(auVar23,auVar20);
        fVar19 = 0.0;
        fVar18 = 0.0;
        fVar32 = 0.0;
        fVar21 = 0.0;
        fVar22 = auVar23._0_4_;
        fVar24 = auVar23._4_4_;
        fVar25 = auVar23._8_4_;
        fVar26 = auVar23._12_4_;
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar30 = 0.0;
        fVar22 = (fVar22 + fVar22) - fVar22 * fVar22 * auVar20._0_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar20._4_4_;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar20._8_4_;
        fVar26 = (fVar26 + fVar26) - fVar26 * fVar26 * auVar20._12_4_;
        pfVar12 = in_stack_00000100;
        iVar13 = iVar11;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[1];
          fVar3 = pfVar12[2];
          fVar4 = pfVar12[3];
          uVar14 = -(uint)(0.0001 < fVar1);
          uVar10 = -(uint)(0.0001 < fVar2);
          uVar9 = -(uint)(0.0001 < fVar3);
          uVar17 = -(uint)(0.0001 < fVar4);
          iVar11 = iVar13 + 8;
          fVar5 = pfVar12[4];
          fVar6 = pfVar12[5];
          fVar7 = pfVar12[6];
          fVar8 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          fVar19 = (float)((uint)((float)iVar13 * (float)unaff_XMM12_Da * 0.5 * fVar22 * fVar1 +
                                 fVar19) & uVar14 | ~uVar14 & (uint)fVar19);
          fVar18 = (float)((uint)((float)(iVar13 + 1) * (float)unaff_XMM12_Db * 0.5 * fVar24 * fVar2
                                 + fVar18) & uVar10 | ~uVar10 & (uint)fVar18);
          fVar32 = (float)((uint)((float)(iVar13 + 2) * (float)unaff_XMM12_Dc * 0.5 * fVar25 * fVar3
                                 + fVar32) & uVar9 | ~uVar9 & (uint)fVar32);
          fVar21 = (float)((uint)((float)(iVar13 + 3) * (float)unaff_XMM12_Dd * 0.5 * fVar26 * fVar4
                                 + fVar21) & uVar17 | ~uVar17 & (uint)fVar21);
          fVar27 = (float)((uint)(fVar1 + fVar27) & uVar14 | ~uVar14 & (uint)fVar27);
          fVar28 = (float)((uint)(fVar2 + fVar28) & uVar10 | ~uVar10 & (uint)fVar28);
          fVar29 = (float)((uint)(fVar3 + fVar29) & uVar9 | ~uVar9 & (uint)fVar29);
          fVar30 = (float)((uint)(fVar4 + fVar30) & uVar17 | ~uVar17 & (uint)fVar30);
          uVar14 = -(uint)(0.0001 < fVar5);
          uVar10 = -(uint)(0.0001 < fVar6);
          uVar9 = -(uint)(0.0001 < fVar7);
          uVar17 = -(uint)(0.0001 < fVar8);
          fVar31 = (float)((uint)((float)(iVar13 + 4) * (float)unaff_XMM12_Da * 0.5 * fVar22 * fVar5
                                 + fVar31) & uVar14 | ~uVar14 & (uint)fVar31);
          fVar33 = (float)((uint)((float)(iVar13 + 5) * (float)unaff_XMM12_Db * 0.5 * fVar24 * fVar6
                                 + fVar33) & uVar10 | ~uVar10 & (uint)fVar33);
          fVar34 = (float)((uint)((float)(iVar13 + 6) * (float)unaff_XMM12_Dc * 0.5 * fVar25 * fVar7
                                 + fVar34) & uVar9 | ~uVar9 & (uint)fVar34);
          fVar35 = (float)((uint)((float)(iVar13 + 7) * (float)unaff_XMM12_Dd * 0.5 * fVar26 * fVar8
                                 + fVar35) & uVar17 | ~uVar17 & (uint)fVar35);
          fVar36 = (float)((uint)(fVar5 + fVar36) & uVar14 | ~uVar14 & (uint)fVar36);
          fVar37 = (float)((uint)(fVar6 + fVar37) & uVar10 | ~uVar10 & (uint)fVar37);
          fVar38 = (float)((uint)(fVar7 + fVar38) & uVar9 | ~uVar9 & (uint)fVar38);
          fVar39 = (float)((uint)(fVar8 + fVar39) & uVar17 | ~uVar17 & (uint)fVar39);
          iVar13 = iVar11;
        } while (iVar11 < (int)(uVar15 - uVar16));
        unaff_XMM6_Da = fVar29 + fVar38 + fVar27 + fVar36 + fVar30 + fVar39 + fVar28 + fVar37;
        fVar19 = fVar32 + fVar34 + fVar19 + fVar31 + fVar21 + fVar35 + fVar18 + fVar33;
      }
      if (iVar11 < (int)uVar15) {
        if (3 < (int)(uVar15 - iVar11)) {
          iVar13 = iVar11 + 2;
          fVar18 = (float)in_stack_00000118;
          pfVar12 = in_stack_00000100 + (longlong)iVar11 + 2;
          fVar32 = (float)(int)uVar15;
          do {
            fVar21 = pfVar12[-2];
            if (0.0001 < fVar21) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar21;
              fVar19 = fVar19 + ((fVar18 * 0.5 * (float)iVar11) / fVar32) * fVar21;
            }
            fVar21 = pfVar12[-1];
            if (0.0001 < fVar21) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar21;
              fVar19 = fVar19 + (((float)(iVar13 + -1) * fVar18 * 0.5) / fVar32) * fVar21;
            }
            fVar21 = *pfVar12;
            if (0.0001 < fVar21) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar21;
              fVar19 = fVar19 + (((float)iVar13 * fVar18 * 0.5) / fVar32) * fVar21;
            }
            fVar21 = pfVar12[1];
            if (0.0001 < fVar21) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar21;
              fVar19 = fVar19 + (((float)(iVar13 + 1) * fVar18 * 0.5) / fVar32) * fVar21;
            }
            pfVar12 = pfVar12 + 4;
            iVar11 = iVar11 + 4;
            iVar13 = iVar13 + 4;
          } while (iVar11 < in_stack_00000108 + -4);
        }
        if (iVar11 < (int)uVar15) {
          in_stack_00000100 = in_stack_00000100 + iVar11;
          do {
            fVar18 = *in_stack_00000100;
            if (0.0001 < fVar18) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar18;
              fVar19 = fVar19 + (((float)in_stack_00000118 * 0.5 * (float)iVar11) /
                                (float)(int)uVar15) * fVar18;
            }
            in_stack_00000100 = in_stack_00000100 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar15);
        }
      }
      if (0.001 < unaff_XMM6_Da) {
        *in_stack_00000120 = fVar19 / unaff_XMM6_Da;
        return 0;
      }
    }
    *in_stack_00000120 = 0.0;
  }
  return 0;
}



uint64_t FUN_1807793f0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  int unaff_EBX;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int unaff_R13D;
  longlong unaff_R14;
  uint uVar17;
  float fVar18;
  int8_t auVar19 [16];
  float fVar20;
  float fVar21;
  float fVar23;
  float fVar24;
  int8_t auVar22 [16];
  float fVar25;
  float unaff_XMM6_Da;
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
  float unaff_XMM9_Da;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  int unaff_XMM12_Da;
  int unaff_XMM12_Db;
  int unaff_XMM12_Dc;
  int unaff_XMM12_Dd;
  float *in_stack_00000100;
  int in_stack_00000108;
  float *in_stack_00000120;
  
  FUN_1807797e0();
  uVar16 = 0;
  in_stack_00000108 = in_stack_00000108 / 2;
  uVar15 = in_stack_00000108 - 1;
  pfVar12 = in_stack_00000100;
  if (0 < (int)uVar15) {
    do {
      uVar10 = 0;
      uVar13 = uVar16;
      iVar11 = unaff_R13D;
      if (unaff_R13D != 0) {
        do {
          uVar9 = uVar13 & 1;
          uVar13 = uVar13 >> 1;
          uVar10 = uVar10 * 2 | uVar9;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      uVar16 = uVar16 + 1;
      fVar18 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + 4 + (longlong)(int)uVar10 * 8);
      fVar30 = *(float *)(*(longlong *)(unaff_R14 + 0x218) + (longlong)(int)uVar10 * 8);
      fVar18 = SQRT(fVar30 * fVar30 + fVar18 * fVar18) * 2.5;
      if (unaff_XMM9_Da <= fVar18) {
        fVar18 = unaff_XMM9_Da;
      }
      *pfVar12 = fVar18;
      pfVar12 = pfVar12 + 1;
    } while ((int)uVar16 < (int)uVar15);
  }
  if (in_stack_00000120 != (float *)0x0) {
    iVar11 = 0;
    if (0 < (int)uVar15) {
      fVar18 = unaff_XMM6_Da;
      if (7 < uVar15) {
        uVar16 = uVar15 & 0x80000007;
        if ((int)uVar16 < 0) {
          uVar16 = (uVar16 - 1 | 0xfffffff8) + 1;
        }
        auVar22._0_4_ = in_stack_00000108 + -1;
        auVar22._4_4_ = in_stack_00000108 + -1;
        auVar22._8_4_ = in_stack_00000108 + -1;
        auVar22._12_4_ = in_stack_00000108 + -1;
        auVar19._0_4_ = (float)auVar22._0_4_;
        auVar19._4_4_ = (float)auVar22._4_4_;
        auVar19._8_4_ = (float)auVar22._8_4_;
        auVar19._12_4_ = (float)auVar22._12_4_;
        auVar22 = rcpps(auVar22,auVar19);
        fVar18 = 0.0;
        fVar30 = 0.0;
        fVar32 = 0.0;
        fVar20 = 0.0;
        fVar21 = auVar22._0_4_;
        fVar23 = auVar22._4_4_;
        fVar24 = auVar22._8_4_;
        fVar25 = auVar22._12_4_;
        fVar31 = 0.0;
        fVar33 = 0.0;
        fVar34 = 0.0;
        fVar35 = 0.0;
        fVar36 = 0.0;
        fVar37 = 0.0;
        fVar38 = 0.0;
        fVar39 = 0.0;
        fVar26 = 0.0;
        fVar27 = 0.0;
        fVar28 = 0.0;
        fVar29 = 0.0;
        fVar21 = (fVar21 + fVar21) - fVar21 * fVar21 * auVar19._0_4_;
        fVar23 = (fVar23 + fVar23) - fVar23 * fVar23 * auVar19._4_4_;
        fVar24 = (fVar24 + fVar24) - fVar24 * fVar24 * auVar19._8_4_;
        fVar25 = (fVar25 + fVar25) - fVar25 * fVar25 * auVar19._12_4_;
        pfVar12 = in_stack_00000100;
        iVar14 = iVar11;
        do {
          fVar1 = *pfVar12;
          fVar2 = pfVar12[1];
          fVar3 = pfVar12[2];
          fVar4 = pfVar12[3];
          uVar13 = -(uint)(0.0001 < fVar1);
          uVar10 = -(uint)(0.0001 < fVar2);
          uVar9 = -(uint)(0.0001 < fVar3);
          uVar17 = -(uint)(0.0001 < fVar4);
          iVar11 = iVar14 + 8;
          fVar5 = pfVar12[4];
          fVar6 = pfVar12[5];
          fVar7 = pfVar12[6];
          fVar8 = pfVar12[7];
          pfVar12 = pfVar12 + 8;
          fVar18 = (float)((uint)((float)iVar14 * (float)unaff_XMM12_Da * 0.5 * fVar21 * fVar1 +
                                 fVar18) & uVar13 | ~uVar13 & (uint)fVar18);
          fVar30 = (float)((uint)((float)(iVar14 + 1) * (float)unaff_XMM12_Db * 0.5 * fVar23 * fVar2
                                 + fVar30) & uVar10 | ~uVar10 & (uint)fVar30);
          fVar32 = (float)((uint)((float)(iVar14 + 2) * (float)unaff_XMM12_Dc * 0.5 * fVar24 * fVar3
                                 + fVar32) & uVar9 | ~uVar9 & (uint)fVar32);
          fVar20 = (float)((uint)((float)(iVar14 + 3) * (float)unaff_XMM12_Dd * 0.5 * fVar25 * fVar4
                                 + fVar20) & uVar17 | ~uVar17 & (uint)fVar20);
          fVar26 = (float)((uint)(fVar1 + fVar26) & uVar13 | ~uVar13 & (uint)fVar26);
          fVar27 = (float)((uint)(fVar2 + fVar27) & uVar10 | ~uVar10 & (uint)fVar27);
          fVar28 = (float)((uint)(fVar3 + fVar28) & uVar9 | ~uVar9 & (uint)fVar28);
          fVar29 = (float)((uint)(fVar4 + fVar29) & uVar17 | ~uVar17 & (uint)fVar29);
          uVar13 = -(uint)(0.0001 < fVar5);
          uVar10 = -(uint)(0.0001 < fVar6);
          uVar9 = -(uint)(0.0001 < fVar7);
          uVar17 = -(uint)(0.0001 < fVar8);
          fVar31 = (float)((uint)((float)(iVar14 + 4) * (float)unaff_XMM12_Da * 0.5 * fVar21 * fVar5
                                 + fVar31) & uVar13 | ~uVar13 & (uint)fVar31);
          fVar33 = (float)((uint)((float)(iVar14 + 5) * (float)unaff_XMM12_Db * 0.5 * fVar23 * fVar6
                                 + fVar33) & uVar10 | ~uVar10 & (uint)fVar33);
          fVar34 = (float)((uint)((float)(iVar14 + 6) * (float)unaff_XMM12_Dc * 0.5 * fVar24 * fVar7
                                 + fVar34) & uVar9 | ~uVar9 & (uint)fVar34);
          fVar35 = (float)((uint)((float)(iVar14 + 7) * (float)unaff_XMM12_Dd * 0.5 * fVar25 * fVar8
                                 + fVar35) & uVar17 | ~uVar17 & (uint)fVar35);
          fVar36 = (float)((uint)(fVar5 + fVar36) & uVar13 | ~uVar13 & (uint)fVar36);
          fVar37 = (float)((uint)(fVar6 + fVar37) & uVar10 | ~uVar10 & (uint)fVar37);
          fVar38 = (float)((uint)(fVar7 + fVar38) & uVar9 | ~uVar9 & (uint)fVar38);
          fVar39 = (float)((uint)(fVar8 + fVar39) & uVar17 | ~uVar17 & (uint)fVar39);
          iVar14 = iVar11;
        } while (iVar11 < (int)(uVar15 - uVar16));
        unaff_XMM6_Da = fVar28 + fVar38 + fVar26 + fVar36 + fVar29 + fVar39 + fVar27 + fVar37;
        fVar18 = fVar32 + fVar34 + fVar18 + fVar31 + fVar20 + fVar35 + fVar30 + fVar33;
      }
      if (iVar11 < (int)uVar15) {
        if (3 < (int)(uVar15 - iVar11)) {
          iVar14 = iVar11 + 2;
          fVar30 = (float)unaff_EBX;
          pfVar12 = in_stack_00000100 + (longlong)iVar11 + 2;
          fVar32 = (float)(int)uVar15;
          do {
            fVar20 = pfVar12[-2];
            if (0.0001 < fVar20) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar20;
              fVar18 = fVar18 + ((fVar30 * 0.5 * (float)iVar11) / fVar32) * fVar20;
            }
            fVar20 = pfVar12[-1];
            if (0.0001 < fVar20) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar20;
              fVar18 = fVar18 + (((float)(iVar14 + -1) * fVar30 * 0.5) / fVar32) * fVar20;
            }
            fVar20 = *pfVar12;
            if (0.0001 < fVar20) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar20;
              fVar18 = fVar18 + (((float)iVar14 * fVar30 * 0.5) / fVar32) * fVar20;
            }
            fVar20 = pfVar12[1];
            if (0.0001 < fVar20) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar20;
              fVar18 = fVar18 + (((float)(iVar14 + 1) * fVar30 * 0.5) / fVar32) * fVar20;
            }
            pfVar12 = pfVar12 + 4;
            iVar11 = iVar11 + 4;
            iVar14 = iVar14 + 4;
          } while (iVar11 < in_stack_00000108 + -4);
        }
        if (iVar11 < (int)uVar15) {
          in_stack_00000100 = in_stack_00000100 + iVar11;
          do {
            fVar30 = *in_stack_00000100;
            if (0.0001 < fVar30) {
              unaff_XMM6_Da = unaff_XMM6_Da + fVar30;
              fVar18 = fVar18 + (((float)unaff_EBX * 0.5 * (float)iVar11) / (float)(int)uVar15) *
                                fVar30;
            }
            in_stack_00000100 = in_stack_00000100 + 1;
            iVar11 = iVar11 + 1;
          } while (iVar11 < (int)uVar15);
        }
      }
      if (0.001 < unaff_XMM6_Da) {
        *in_stack_00000120 = fVar18 / unaff_XMM6_Da;
        return 0;
      }
    }
    *in_stack_00000120 = 0.0;
  }
  return 0;
}


uint8_t UNK_180959e90;
uint8_t DAT_180be2198;
uint8_t DAT_180be2288;
uint8_t UNK_18095a310;
uint8_t UNK_18095a384;
uint8_t UNK_18095a598;
uint8_t UNK_18095a5a0;
uint8_t UNK_18095a618;
uint8_t UNK_18095a628;
uint8_t UNK_18095a638;
uint8_t UNK_18095a648;
uint8_t UNK_18095a650;
uint8_t UNK_18095a658;
uint8_t UNK_18095a668;
uint8_t UNK_180a215c0;




