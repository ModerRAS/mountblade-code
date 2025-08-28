#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 04_ui_system_part222.c - 3 个函数

// 函数: void FUN_180796d59(void)
void FUN_180796d59(void)

{
  return;
}



uint64_t FUN_1807970e0(longlong *param_1,int param_2,int32_t *param_3,int param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  longlong lVar3;
  uint64_t uVar4;
  float fVar5;
  int32_t auStackX_8 [2];
  int32_t auStackX_10 [6];
  float fStack_58;
  int32_t uStack_54;
  float fStack_50;
  float afStack_48 [2];
  float fStack_40;
  
  lVar3 = *param_1;
  if (param_2 == 0) {
    if (param_4 != 0x1d4) {
      return 0x1f;
    }
    uVar4 = FUN_180797280(lVar3,param_3,&fStack_58,afStack_48,auStackX_10,auStackX_8);
    if ((int)uVar4 != 0) {
      return uVar4;
    }
    *(int32_t *)(lVar3 + 0x290) = auStackX_10[0];
    *(int32_t *)(lVar3 + 0x294) = auStackX_8[0];
    if ((fStack_58 != 0.0) || (fStack_50 != 0.0)) {
      fVar5 = (float)atan2f(fStack_58,fStack_50);
      *(float *)(lVar3 + 0x28c) = fVar5 * 57.295776;
    }
    if ((afStack_48[0] != 0.0) || (fStack_40 != 0.0)) {
      fVar5 = (float)atan2f();
      *(float *)(lVar3 + 0x298) = fVar5 * 57.295776;
    }
    *(int *)(lVar3 + 0x27c) = *(int *)(lVar3 + 0x27c) + 1;
    *(float *)(lVar3 + 0x2b4) = fStack_58;
    *(float *)(lVar3 + 700) = fStack_50;
    *(int32_t *)(lVar3 + 0x2b8) = uStack_54;
  }
  else if (param_2 != 7) {
    if (param_2 != 9) {
      return 0x1f;
    }
    if (param_4 != 8) {
      return 0x1f;
    }
    uVar1 = *param_3;
    *(int32_t *)(lVar3 + 0x228) = uVar1;
    uVar2 = param_3[1];
    *(int32_t *)(lVar3 + 0x22c) = uVar2;
    if (*(char *)(lVar3 + 0x289) == '\0') {
      *(int *)(lVar3 + 0x27c) = *(int *)(lVar3 + 0x27c) + 1;
      *(int32_t *)(lVar3 + 0x2a0) = uVar1;
      *(int32_t *)(lVar3 + 0x2a4) = uVar2;
      return 0;
    }
  }
  return 0;
}



uint64_t FUN_1807971b0(int32_t param_1,int32_t param_2)

{
  longlong unaff_RBX;
  float fVar1;
  float fStack0000000000000030;
  int32_t uStack0000000000000034;
  float in_stack_00000038;
  float in_stack_00000040;
  float in_stack_00000048;
  
  *(int32_t *)(unaff_RBX + 0x290) = param_1;
  *(int32_t *)(unaff_RBX + 0x294) = param_2;
  if ((fStack0000000000000030 != 0.0) || (in_stack_00000038 != 0.0)) {
    fVar1 = (float)atan2f(fStack0000000000000030,in_stack_00000038);
    *(float *)(unaff_RBX + 0x28c) = fVar1 * 57.295776;
  }
  if ((in_stack_00000040 != 0.0) || (in_stack_00000048 != 0.0)) {
    fVar1 = (float)atan2f();
    *(float *)(unaff_RBX + 0x298) = fVar1 * 57.295776;
  }
  *(int *)(unaff_RBX + 0x27c) = *(int *)(unaff_RBX + 0x27c) + 1;
  *(float *)(unaff_RBX + 0x2b4) = fStack0000000000000030;
  *(float *)(unaff_RBX + 700) = in_stack_00000038;
  *(int32_t *)(unaff_RBX + 0x2b8) = uStack0000000000000034;
  return 0;
}



uint64_t FUN_180797267(void)

{
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180797280(longlong param_1,uint *param_2,float *param_3,float *param_4,float *param_5,
void FUN_180797280(longlong param_1,uint *param_2,float *param_3,float *param_4,float *param_5,
                  float *param_6)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  int8_t auVar4 [16];
  uint uVar5;
  float *pfVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
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
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float afStack_d8 [8];
  float afStack_b8 [8];
  ulonglong uStack_98;
  ulonglong uVar9;
  
  uStack_98 = GET_SECURITY_COOKIE() ^ (ulonglong)afStack_d8;
  uVar3 = *param_2;
  lVar12 = (longlong)(int)uVar3;
  if (uVar3 == 1) {
    *param_3 = (float)param_2[1];
    param_3[1] = (float)param_2[2];
    param_3[2] = (float)param_2[3];
    *param_4 = (float)param_2[7];
    param_4[1] = (float)param_2[8];
    param_4[2] = (float)param_2[9];
    fVar19 = (float)param_2[1] * (float)param_2[1];
    fVar24 = (float)param_2[3] * (float)param_2[3];
    fVar25 = fVar24 + fVar19;
    *param_5 = SQRT((float)param_2[2] * (float)param_2[2] + fVar19 + fVar24);
  }
  else {
    fVar25 = 3.4028235e+38;
    auVar30 = ZEXT816(0);
    uVar11 = 0;
    uVar8 = uVar11;
    if (3 < lVar12) {
      pfVar6 = (float *)(param_2 + 1);
      do {
        fVar19 = pfVar6[0xd];
        fVar24 = pfVar6[0xe];
        fVar29 = SQRT(pfVar6[1] * pfVar6[1] + *pfVar6 * *pfVar6 + pfVar6[2] * pfVar6[2]);
        fVar17 = pfVar6[0xc];
        afStack_b8[uVar8] = fVar29;
        if (fVar25 <= fVar29) {
          fVar29 = fVar25;
        }
        fVar25 = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar24 * fVar24);
        afStack_b8[uVar8 + 1] = fVar25;
        if (fVar25 <= fVar29) {
          fVar29 = fVar25;
        }
        fVar19 = pfVar6[0x25];
        fVar24 = pfVar6[0x26];
        fVar25 = SQRT(pfVar6[0x18] * pfVar6[0x18] + pfVar6[0x19] * pfVar6[0x19] +
                      pfVar6[0x1a] * pfVar6[0x1a]);
        fVar17 = pfVar6[0x24];
        afStack_b8[uVar8 + 2] = fVar25;
        if (fVar29 <= fVar25) {
          fVar25 = fVar29;
        }
        fVar19 = SQRT(fVar17 * fVar17 + fVar19 * fVar19 + fVar24 * fVar24);
        afStack_b8[uVar8 + 3] = fVar19;
        if (fVar19 <= fVar25) {
          fVar25 = fVar19;
        }
        uVar8 = uVar8 + 4;
        pfVar6 = pfVar6 + 0x30;
      } while ((longlong)uVar8 < lVar12 + -3);
    }
    if ((longlong)uVar8 < lVar12) {
      pfVar6 = (float *)(param_2 + uVar8 * 0xc + 1);
      fVar19 = fVar25;
      do {
        fVar25 = *pfVar6;
        pfVar1 = pfVar6 + 1;
        pfVar2 = pfVar6 + 2;
        pfVar6 = pfVar6 + 0xc;
        fVar25 = SQRT(*pfVar1 * *pfVar1 + fVar25 * fVar25 + *pfVar2 * *pfVar2);
        afStack_b8[uVar8] = fVar25;
        if (fVar19 <= fVar25) {
          fVar25 = fVar19;
        }
        uVar8 = uVar8 + 1;
        fVar19 = fVar25;
      } while ((longlong)uVar8 < lVar12);
    }
    fVar19 = *(float *)(param_1 + 0x2a4);
    fVar24 = fVar19 * 0.5 + fVar25;
    if (fVar24 <= fVar19) {
      fVar24 = fVar19;
    }
    uVar7 = 0;
    if ((0 < (int)uVar3) && (uVar7 = 0, 3 < uVar3)) {
      uVar5 = uVar3 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      fVar32 = 0.0;
      fVar33 = 0.0;
      fVar34 = 0.0;
      fVar35 = 0.0;
      auVar4._4_4_ = fVar24 - fVar25;
      auVar4._0_4_ = fVar24 - fVar25;
      auVar4._8_4_ = fVar24 - fVar25;
      auVar4._12_4_ = fVar24 - fVar25;
      auVar30 = rcpps(auVar30,auVar4);
      fVar19 = auVar30._0_4_;
      fVar17 = auVar30._4_4_;
      fVar29 = auVar30._8_4_;
      fVar18 = auVar30._12_4_;
      uVar8 = uVar11;
      uVar9 = uVar11;
      do {
        fVar20 = *(float *)((longlong)afStack_b8 + uVar8 + 4);
        fVar21 = *(float *)((longlong)afStack_b8 + uVar8 + 8);
        fVar22 = *(float *)((longlong)afStack_b8 + uVar8 + 0xc);
        uVar7 = (int)uVar9 + 4;
        uVar9 = (ulonglong)uVar7;
        uVar13 = -(uint)(*(float *)((longlong)afStack_b8 + uVar8) < fVar24);
        uVar14 = -(uint)(fVar20 < fVar24);
        uVar15 = -(uint)(fVar21 < fVar24);
        uVar16 = -(uint)(fVar22 < fVar24);
        fVar23 = (float)((uint)(1.0 - (*(float *)((longlong)afStack_b8 + uVar8) - fVar25) *
                                      ((fVar19 + fVar19) - fVar19 * fVar19 * (fVar24 - fVar25))) &
                         uVar13 | ~uVar13 & *(uint *)((longlong)afStack_d8 + uVar8));
        fVar26 = (float)((uint)(1.0 - (fVar20 - fVar25) *
                                      ((fVar17 + fVar17) - fVar17 * fVar17 * (fVar24 - fVar25))) &
                         uVar14 | ~uVar14 & *(uint *)((longlong)afStack_d8 + uVar8 + 4));
        fVar27 = (float)((uint)(1.0 - (fVar21 - fVar25) *
                                      ((fVar29 + fVar29) - fVar29 * fVar29 * (fVar24 - fVar25))) &
                         uVar15 | ~uVar15 & *(uint *)((longlong)afStack_d8 + uVar8 + 8));
        fVar28 = (float)((uint)(1.0 - (fVar22 - fVar25) *
                                      ((fVar18 + fVar18) - fVar18 * fVar18 * (fVar24 - fVar25))) &
                         uVar16 | ~uVar16 & *(uint *)((longlong)afStack_d8 + uVar8 + 0xc));
        fVar20 = (float)(((uint)(fVar23 * fVar23) & uVar13 | ~uVar13 & (uint)fVar23) & uVar13);
        fVar21 = (float)(((uint)(fVar26 * fVar26) & uVar14 | ~uVar14 & (uint)fVar26) & uVar14);
        fVar22 = (float)(((uint)(fVar27 * fVar27) & uVar15 | ~uVar15 & (uint)fVar27) & uVar15);
        fVar23 = (float)(((uint)(fVar28 * fVar28) & uVar16 | ~uVar16 & (uint)fVar28) & uVar16);
        *(float *)((longlong)afStack_d8 + uVar8) = fVar20;
        *(float *)((longlong)afStack_d8 + uVar8 + 4) = fVar21;
        *(float *)((longlong)afStack_d8 + uVar8 + 8) = fVar22;
        *(float *)((longlong)afStack_d8 + uVar8 + 0xc) = fVar23;
        uVar8 = uVar8 + 0x10;
        fVar32 = fVar32 + fVar20;
        fVar33 = fVar33 + fVar21;
        fVar34 = fVar34 + fVar22;
        fVar35 = fVar35 + fVar23;
      } while ((int)uVar7 < (int)(uVar3 - uVar5));
      auVar31._0_4_ = fVar34 + fVar32;
      auVar31._4_4_ = fVar35 + fVar33;
      auVar31._8_4_ = fVar34 + fVar34;
      auVar31._12_4_ = fVar35 + fVar35;
      auVar30._4_12_ = auVar31._4_12_;
      auVar30._0_4_ = auVar31._0_4_ + auVar31._4_4_;
    }
    lVar10 = (longlong)(int)uVar7;
    if (lVar10 < lVar12) {
      if (3 < lVar12 - lVar10) {
        fVar19 = fVar24 - fVar25;
        do {
          if (fVar24 <= afStack_b8[lVar10]) {
            fVar17 = 0.0;
          }
          else {
            fVar17 = 1.0 - (afStack_b8[lVar10] - fVar25) / fVar19;
            fVar17 = fVar17 * fVar17;
          }
          afStack_d8[lVar10] = fVar17;
          if (fVar24 <= afStack_b8[lVar10 + 1]) {
            fVar29 = 0.0;
          }
          else {
            fVar29 = 1.0 - (afStack_b8[lVar10 + 1] - fVar25) / fVar19;
            fVar29 = fVar29 * fVar29;
          }
          afStack_d8[lVar10 + 1] = fVar29;
          if (fVar24 <= afStack_b8[lVar10 + 2]) {
            fVar18 = 0.0;
          }
          else {
            fVar18 = 1.0 - (afStack_b8[lVar10 + 2] - fVar25) / fVar19;
            fVar18 = fVar18 * fVar18;
          }
          afStack_d8[lVar10 + 2] = fVar18;
          if (fVar24 <= afStack_b8[lVar10 + 3]) {
            fVar32 = 0.0;
          }
          else {
            fVar32 = 1.0 - (afStack_b8[lVar10 + 3] - fVar25) / fVar19;
            fVar32 = fVar32 * fVar32;
          }
          afStack_d8[lVar10 + 3] = fVar32;
          auVar30._0_4_ = auVar30._0_4_ + fVar17 + fVar29 + fVar18 + fVar32;
          lVar10 = lVar10 + 4;
        } while (lVar10 < lVar12 + -3);
      }
      for (; lVar10 < lVar12; lVar10 = lVar10 + 1) {
        if (fVar24 <= afStack_b8[lVar10]) {
          fVar19 = 0.0;
        }
        else {
          fVar19 = 1.0 - (afStack_b8[lVar10] - fVar25) / (fVar24 - fVar25);
          fVar19 = fVar19 * fVar19;
        }
        afStack_d8[lVar10] = fVar19;
        auVar30._0_4_ = auVar30._0_4_ + fVar19;
      }
    }
    param_3[0] = 0.0;
    param_3[1] = 0.0;
    param_3[2] = 0.0;
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 0.0;
    if (auVar30._0_4_ != 0.0) {
      if (3 < lVar12) {
        pfVar6 = (float *)(param_2 + 2);
        do {
          fVar19 = afStack_d8[uVar11];
          fVar24 = afStack_d8[uVar11 + 1];
          *param_3 = fVar19 * pfVar6[-1] + *param_3;
          param_3[1] = fVar19 * *pfVar6 + param_3[1];
          param_3[2] = fVar19 * pfVar6[1] + param_3[2];
          *param_4 = fVar19 * pfVar6[5] + *param_4;
          param_4[1] = fVar19 * pfVar6[6] + param_4[1];
          param_4[2] = fVar19 * pfVar6[7] + param_4[2];
          fVar19 = afStack_d8[uVar11 + 2];
          *param_3 = fVar24 * pfVar6[0xb] + *param_3;
          param_3[1] = fVar24 * pfVar6[0xc] + param_3[1];
          param_3[2] = fVar24 * pfVar6[0xd] + param_3[2];
          *param_4 = fVar24 * pfVar6[0x11] + *param_4;
          param_4[1] = fVar24 * pfVar6[0x12] + param_4[1];
          param_4[2] = fVar24 * pfVar6[0x13] + param_4[2];
          fVar24 = afStack_d8[uVar11 + 3];
          *param_3 = fVar19 * pfVar6[0x17] + *param_3;
          param_3[1] = fVar19 * pfVar6[0x18] + param_3[1];
          param_3[2] = fVar19 * pfVar6[0x19] + param_3[2];
          *param_4 = fVar19 * pfVar6[0x1d] + *param_4;
          param_4[1] = fVar19 * pfVar6[0x1e] + param_4[1];
          param_4[2] = fVar19 * pfVar6[0x1f] + param_4[2];
          *param_3 = fVar24 * pfVar6[0x23] + *param_3;
          param_3[1] = fVar24 * pfVar6[0x24] + param_3[1];
          uVar11 = uVar11 + 4;
          param_3[2] = fVar24 * pfVar6[0x25] + param_3[2];
          *param_4 = fVar24 * pfVar6[0x29] + *param_4;
          param_4[1] = fVar24 * pfVar6[0x2a] + param_4[1];
          pfVar1 = pfVar6 + 0x2b;
          pfVar6 = pfVar6 + 0x30;
          param_4[2] = fVar24 * *pfVar1 + param_4[2];
        } while ((longlong)uVar11 < lVar12 + -3);
      }
      if ((longlong)uVar11 < lVar12) {
        pfVar6 = (float *)(param_2 + uVar11 * 0xc + 2);
        do {
          fVar19 = afStack_d8[uVar11];
          uVar11 = uVar11 + 1;
          *param_3 = fVar19 * pfVar6[-1] + *param_3;
          param_3[1] = fVar19 * *pfVar6 + param_3[1];
          param_3[2] = fVar19 * pfVar6[1] + param_3[2];
          *param_4 = fVar19 * pfVar6[5] + *param_4;
          param_4[1] = fVar19 * pfVar6[6] + param_4[1];
          pfVar1 = pfVar6 + 7;
          pfVar6 = pfVar6 + 0xc;
          param_4[2] = fVar19 * *pfVar1 + param_4[2];
        } while ((longlong)uVar11 < lVar12);
      }
      fVar19 = 1.0 / auVar30._0_4_;
      *param_3 = fVar19 * *param_3;
      param_3[2] = fVar19 * param_3[2];
      param_3[1] = fVar19 * param_3[1];
      fVar19 = param_4[1];
      fVar24 = *param_4;
      fVar17 = param_4[2];
      fVar29 = SQRT(fVar19 * fVar19 + fVar24 * fVar24 + fVar17 * fVar17);
      if (0.0 < fVar29) {
        fVar29 = 1.0 / fVar29;
        *param_4 = fVar29 * fVar24;
        param_4[1] = fVar29 * fVar19;
        param_4[2] = fVar29 * fVar17;
      }
      else {
        param_4[0] = 0.0;
        param_4[1] = 0.0;
        param_4[2] = 0.0;
      }
    }
    *param_5 = fVar25;
    fVar25 = param_3[2] * param_3[2] + *param_3 * *param_3;
  }
  *param_6 = SQRT(fVar25);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_98 ^ (ulonglong)afStack_d8);
}





// 函数: void FUN_18079732a(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)
void FUN_18079732a(uint64_t param_1,uint64_t param_2,float *param_3,float *param_4)

{
  float *pfVar1;
  float *pfVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar8;
  float *pfVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong unaff_RBX;
  float *unaff_RBP;
  float *unaff_RSI;
  longlong unaff_RDI;
  longlong in_R11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float in_XMM4_Da;
  int8_t in_XMM5 [16];
  int8_t auVar25 [16];
  int8_t auVar26 [16];
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  int32_t unaff_XMM11_Da;
  int32_t unaff_XMM11_Dc;
  int32_t unaff_XMM12_Da;
  int32_t unaff_XMM12_Dc;
  float afStackX_8 [6];
  float afStackX_20 [2];
  ulonglong in_stack_00000040;
  int32_t in_stack_00000050;
  int32_t in_stack_00000058;
  int32_t in_stack_00000060;
  int32_t in_stack_00000068;
  ulonglong uVar7;
  
  uVar10 = 0;
  uVar6 = uVar10;
  if (3 < unaff_RBX) {
    pfVar9 = (float *)(in_R11 + 4);
    do {
      fVar16 = pfVar9[0xd];
      fVar27 = pfVar9[0xe];
      fVar24 = SQRT(pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9 + pfVar9[2] * pfVar9[2]);
      fVar17 = pfVar9[0xc];
      afStackX_20[uVar6] = fVar24;
      if (in_XMM4_Da <= fVar24) {
        fVar24 = in_XMM4_Da;
      }
      fVar16 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar27 * fVar27);
      afStackX_20[uVar6 + 1] = fVar16;
      if (fVar16 <= fVar24) {
        fVar24 = fVar16;
      }
      fVar16 = pfVar9[0x25];
      fVar27 = pfVar9[0x26];
      in_XMM4_Da = SQRT(pfVar9[0x18] * pfVar9[0x18] + pfVar9[0x19] * pfVar9[0x19] +
                        pfVar9[0x1a] * pfVar9[0x1a]);
      fVar17 = pfVar9[0x24];
      *(float *)(&stack0x00000028 + uVar6 * 4) = in_XMM4_Da;
      if (fVar24 <= in_XMM4_Da) {
        in_XMM4_Da = fVar24;
      }
      fVar16 = SQRT(fVar17 * fVar17 + fVar16 * fVar16 + fVar27 * fVar27);
      *(float *)(&stack0x0000002c + uVar6 * 4) = fVar16;
      if (fVar16 <= in_XMM4_Da) {
        in_XMM4_Da = fVar16;
      }
      uVar6 = uVar6 + 4;
      pfVar9 = pfVar9 + 0x30;
    } while ((longlong)uVar6 < unaff_RBX + -3);
  }
  if ((longlong)uVar6 < unaff_RBX) {
    pfVar9 = (float *)(in_R11 + 4 + uVar6 * 0x30);
    fVar16 = in_XMM4_Da;
    do {
      fVar27 = *pfVar9;
      pfVar1 = pfVar9 + 1;
      pfVar2 = pfVar9 + 2;
      pfVar9 = pfVar9 + 0xc;
      in_XMM4_Da = SQRT(*pfVar1 * *pfVar1 + fVar27 * fVar27 + *pfVar2 * *pfVar2);
      afStackX_20[uVar6] = in_XMM4_Da;
      if (fVar16 <= in_XMM4_Da) {
        in_XMM4_Da = fVar16;
      }
      uVar6 = uVar6 + 1;
      fVar16 = in_XMM4_Da;
    } while ((longlong)uVar6 < unaff_RBX);
  }
  fVar16 = *(float *)(unaff_RDI + 0x2a4);
  fVar27 = fVar16 * 0.5 + in_XMM4_Da;
  if (fVar27 <= fVar16) {
    fVar27 = fVar16;
  }
  uVar11 = (uint)unaff_RBX;
  uVar5 = 0;
  if ((0 < (int)uVar11) && (uVar5 = 0, 3 < uVar11)) {
    uVar4 = uVar11 & 0x80000003;
    if ((int)uVar4 < 0) {
      uVar4 = (uVar4 - 1 | 0xfffffffc) + 1;
    }
    fVar28 = 0.0;
    fVar29 = 0.0;
    fVar30 = 0.0;
    fVar31 = 0.0;
    auVar25._4_4_ = fVar27 - in_XMM4_Da;
    auVar25._0_4_ = fVar27 - in_XMM4_Da;
    auVar25._8_4_ = fVar27 - in_XMM4_Da;
    auVar25._12_4_ = fVar27 - in_XMM4_Da;
    auVar25 = rcpps(in_XMM5,auVar25);
    fVar16 = auVar25._0_4_;
    fVar17 = auVar25._4_4_;
    fVar24 = auVar25._8_4_;
    fVar18 = auVar25._12_4_;
    uVar6 = uVar10;
    uVar7 = uVar10;
    in_stack_00000050 = unaff_XMM12_Da;
    in_stack_00000058 = unaff_XMM12_Dc;
    in_stack_00000060 = unaff_XMM11_Da;
    in_stack_00000068 = unaff_XMM11_Dc;
    do {
      fVar19 = *(float *)((longlong)afStackX_20 + uVar6 + 4);
      uVar5 = (int)uVar7 + 4;
      uVar7 = (ulonglong)uVar5;
      uVar12 = -(uint)(*(float *)((longlong)afStackX_20 + uVar6) < fVar27);
      uVar13 = -(uint)(fVar19 < fVar27);
      uVar14 = -(uint)(*(float *)(&stack0x00000028 + uVar6) < fVar27);
      uVar15 = -(uint)(*(float *)(&stack0x0000002c + uVar6) < fVar27);
      puVar3 = (uint *)(&stack0x00000000 + uVar6);
      fVar20 = (float)((uint)(1.0 - (*(float *)((longlong)afStackX_20 + uVar6) - in_XMM4_Da) *
                                    ((fVar16 + fVar16) - fVar16 * fVar16 * (fVar27 - in_XMM4_Da))) &
                       uVar12 | ~uVar12 & *puVar3);
      fVar21 = (float)((uint)(1.0 - (fVar19 - in_XMM4_Da) *
                                    ((fVar17 + fVar17) - fVar17 * fVar17 * (fVar27 - in_XMM4_Da))) &
                       uVar13 | ~uVar13 & puVar3[1]);
      fVar22 = (float)((uint)(1.0 - (*(float *)(&stack0x00000028 + uVar6) - in_XMM4_Da) *
                                    ((fVar24 + fVar24) - fVar24 * fVar24 * (fVar27 - in_XMM4_Da))) &
                       uVar14 | ~uVar14 & puVar3[2]);
      fVar23 = (float)((uint)(1.0 - (*(float *)(&stack0x0000002c + uVar6) - in_XMM4_Da) *
                                    ((fVar18 + fVar18) - fVar18 * fVar18 * (fVar27 - in_XMM4_Da))) &
                       uVar15 | ~uVar15 & puVar3[3]);
      fVar19 = (float)(((uint)(fVar20 * fVar20) & uVar12 | ~uVar12 & (uint)fVar20) & uVar12);
      fVar20 = (float)(((uint)(fVar21 * fVar21) & uVar13 | ~uVar13 & (uint)fVar21) & uVar13);
      fVar21 = (float)(((uint)(fVar22 * fVar22) & uVar14 | ~uVar14 & (uint)fVar22) & uVar14);
      fVar22 = (float)(((uint)(fVar23 * fVar23) & uVar15 | ~uVar15 & (uint)fVar23) & uVar15);
      pfVar9 = (float *)(&stack0x00000000 + uVar6);
      *pfVar9 = fVar19;
      pfVar9[1] = fVar20;
      pfVar9[2] = fVar21;
      pfVar9[3] = fVar22;
      uVar6 = uVar6 + 0x10;
      fVar28 = fVar28 + fVar19;
      fVar29 = fVar29 + fVar20;
      fVar30 = fVar30 + fVar21;
      fVar31 = fVar31 + fVar22;
    } while ((int)uVar5 < (int)(uVar11 - uVar4));
    auVar26._0_4_ = fVar30 + fVar28;
    auVar26._4_4_ = fVar31 + fVar29;
    auVar26._8_4_ = fVar30 + fVar30;
    auVar26._12_4_ = fVar31 + fVar31;
    in_XMM5._4_12_ = auVar26._4_12_;
    in_XMM5._0_4_ = auVar26._0_4_ + auVar26._4_4_;
  }
  lVar8 = (longlong)(int)uVar5;
  if (lVar8 < unaff_RBX) {
    if (3 < unaff_RBX - lVar8) {
      fVar16 = fVar27 - in_XMM4_Da;
      do {
        if (fVar27 <= afStackX_20[lVar8]) {
          fVar17 = 0.0;
        }
        else {
          fVar17 = 1.0 - (afStackX_20[lVar8] - in_XMM4_Da) / fVar16;
          fVar17 = fVar17 * fVar17;
        }
        *(float *)(&stack0x00000000 + lVar8 * 4) = fVar17;
        if (fVar27 <= afStackX_20[lVar8 + 1]) {
          fVar24 = 0.0;
        }
        else {
          fVar24 = 1.0 - (afStackX_20[lVar8 + 1] - in_XMM4_Da) / fVar16;
          fVar24 = fVar24 * fVar24;
        }
        *(float *)(&stack0x00000004 + lVar8 * 4) = fVar24;
        if (fVar27 <= *(float *)(&stack0x00000028 + lVar8 * 4)) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = 1.0 - (*(float *)(&stack0x00000028 + lVar8 * 4) - in_XMM4_Da) / fVar16;
          fVar18 = fVar18 * fVar18;
        }
        afStackX_8[lVar8] = fVar18;
        if (fVar27 <= *(float *)(&stack0x0000002c + lVar8 * 4)) {
          fVar28 = 0.0;
        }
        else {
          fVar28 = 1.0 - (*(float *)(&stack0x0000002c + lVar8 * 4) - in_XMM4_Da) / fVar16;
          fVar28 = fVar28 * fVar28;
        }
        afStackX_8[lVar8 + 1] = fVar28;
        in_XMM5._0_4_ = in_XMM5._0_4_ + fVar17 + fVar24 + fVar18 + fVar28;
        lVar8 = lVar8 + 4;
      } while (lVar8 < unaff_RBX + -3);
    }
    for (; lVar8 < unaff_RBX; lVar8 = lVar8 + 1) {
      if (fVar27 <= afStackX_20[lVar8]) {
        fVar16 = 0.0;
      }
      else {
        fVar16 = 1.0 - (afStackX_20[lVar8] - in_XMM4_Da) / (fVar27 - in_XMM4_Da);
        fVar16 = fVar16 * fVar16;
      }
      *(float *)(&stack0x00000000 + lVar8 * 4) = fVar16;
      in_XMM5._0_4_ = in_XMM5._0_4_ + fVar16;
    }
  }
  param_3[0] = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  param_4[0] = 0.0;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  if (in_XMM5._0_4_ != 0.0) {
    if (3 < unaff_RBX) {
      pfVar9 = (float *)(in_R11 + 8);
      do {
        fVar16 = *(float *)(&stack0x00000000 + uVar10 * 4);
        fVar27 = *(float *)(&stack0x00000004 + uVar10 * 4);
        *param_3 = fVar16 * pfVar9[-1] + *param_3;
        param_3[1] = fVar16 * *pfVar9 + param_3[1];
        param_3[2] = fVar16 * pfVar9[1] + param_3[2];
        *param_4 = fVar16 * pfVar9[5] + *param_4;
        param_4[1] = fVar16 * pfVar9[6] + param_4[1];
        param_4[2] = fVar16 * pfVar9[7] + param_4[2];
        fVar16 = afStackX_8[uVar10];
        *param_3 = fVar27 * pfVar9[0xb] + *param_3;
        param_3[1] = fVar27 * pfVar9[0xc] + param_3[1];
        param_3[2] = fVar27 * pfVar9[0xd] + param_3[2];
        *param_4 = fVar27 * pfVar9[0x11] + *param_4;
        param_4[1] = fVar27 * pfVar9[0x12] + param_4[1];
        param_4[2] = fVar27 * pfVar9[0x13] + param_4[2];
        fVar27 = afStackX_8[uVar10 + 1];
        *param_3 = fVar16 * pfVar9[0x17] + *param_3;
        param_3[1] = fVar16 * pfVar9[0x18] + param_3[1];
        param_3[2] = fVar16 * pfVar9[0x19] + param_3[2];
        *param_4 = fVar16 * pfVar9[0x1d] + *param_4;
        param_4[1] = fVar16 * pfVar9[0x1e] + param_4[1];
        param_4[2] = fVar16 * pfVar9[0x1f] + param_4[2];
        *param_3 = fVar27 * pfVar9[0x23] + *param_3;
        param_3[1] = fVar27 * pfVar9[0x24] + param_3[1];
        uVar10 = uVar10 + 4;
        param_3[2] = fVar27 * pfVar9[0x25] + param_3[2];
        *param_4 = fVar27 * pfVar9[0x29] + *param_4;
        param_4[1] = fVar27 * pfVar9[0x2a] + param_4[1];
        pfVar1 = pfVar9 + 0x2b;
        pfVar9 = pfVar9 + 0x30;
        param_4[2] = fVar27 * *pfVar1 + param_4[2];
      } while ((longlong)uVar10 < unaff_RBX + -3);
    }
    if ((longlong)uVar10 < unaff_RBX) {
      pfVar9 = (float *)(in_R11 + 8 + uVar10 * 0x30);
      do {
        fVar16 = *(float *)(&stack0x00000000 + uVar10 * 4);
        uVar10 = uVar10 + 1;
        *param_3 = fVar16 * pfVar9[-1] + *param_3;
        param_3[1] = fVar16 * *pfVar9 + param_3[1];
        param_3[2] = fVar16 * pfVar9[1] + param_3[2];
        *param_4 = fVar16 * pfVar9[5] + *param_4;
        param_4[1] = fVar16 * pfVar9[6] + param_4[1];
        pfVar1 = pfVar9 + 7;
        pfVar9 = pfVar9 + 0xc;
        param_4[2] = fVar16 * *pfVar1 + param_4[2];
      } while ((longlong)uVar10 < unaff_RBX);
    }
    fVar16 = 1.0 / in_XMM5._0_4_;
    *param_3 = fVar16 * *param_3;
    param_3[2] = fVar16 * param_3[2];
    param_3[1] = fVar16 * param_3[1];
    fVar16 = param_4[1];
    fVar27 = *param_4;
    fVar17 = param_4[2];
    fVar24 = SQRT(fVar16 * fVar16 + fVar27 * fVar27 + fVar17 * fVar17);
    if (0.0 < fVar24) {
      fVar24 = 1.0 / fVar24;
      *param_4 = fVar24 * fVar27;
      param_4[1] = fVar24 * fVar16;
      param_4[2] = fVar24 * fVar17;
    }
    else {
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      param_4[2] = 0.0;
    }
  }
  *unaff_RSI = in_XMM4_Da;
  *unaff_RBP = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





