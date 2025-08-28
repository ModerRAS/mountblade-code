#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part255.c - 16 个函数

// 函数: void FUN_18040ebd0(uint64_t param_1,float *param_2,float *param_3,float *param_4,float param_5)
void FUN_18040ebd0(uint64_t param_1,float *param_2,float *param_3,float *param_4,float param_5)

{
  int8_t auVar1 [16];
  uint uVar2;
  ulonglong uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar13;
  int8_t auVar11 [16];
  int8_t auVar12 [16];
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int8_t auStack_b8 [32];
  float afStack_98 [8];
  ulonglong uStack_78;
  
  uStack_78 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8;
  if (0.001 <= param_5) {
    fVar9 = *param_4;
    fVar10 = param_4[1];
    fVar7 = param_4[2];
    fVar8 = param_4[3];
    if (param_5 <= 0.999) {
      fVar13 = *param_3;
      fVar14 = param_3[1];
      fVar15 = param_3[2];
      fVar16 = param_3[3];
      fVar7 = fVar7 * fVar15;
      fVar8 = fVar8 * fVar16;
      afStack_98[4] = -1.0;
      afStack_98[5] = -1.0;
      afStack_98[6] = -1.0;
      afStack_98[7] = -1.0;
      auVar12._0_4_ = fVar7 + fVar9 * fVar13;
      auVar12._4_4_ = fVar8 + fVar10 * fVar14;
      auVar12._8_4_ = fVar7 + fVar7;
      auVar12._12_4_ = fVar8 + fVar8;
      auVar11._4_12_ = auVar12._4_12_;
      auVar11._0_4_ = auVar12._0_4_ + auVar12._4_4_;
      afStack_98[0] = 1.0;
      afStack_98[1] = 1.0;
      afStack_98[2] = 1.0;
      afStack_98[3] = 1.0;
      uVar2 = movmskps((int)(GET_SECURITY_COOKIE() ^ (ulonglong)auStack_b8),auVar11);
      uVar3 = (ulonglong)(uVar2 & 1);
      fVar9 = afStack_98[uVar3 * 4];
      fVar10 = afStack_98[uVar3 * 4 + 1];
      fVar7 = afStack_98[uVar3 * 4 + 2];
      fVar8 = afStack_98[uVar3 * 4 + 3];
      fVar17 = *param_4;
      fVar18 = param_4[1];
      fVar19 = param_4[2];
      fVar20 = param_4[3];
      if (0.9995 < ABS(auVar11._0_4_)) {
        fVar4 = 1.0 - param_5;
        fVar17 = fVar4 * fVar13 + param_5 * fVar9 * fVar17;
        fVar18 = fVar4 * fVar14 + param_5 * fVar10 * fVar18;
        fVar19 = fVar4 * fVar15 + param_5 * fVar7 * fVar19;
        fVar20 = fVar4 * fVar16 + param_5 * fVar8 * fVar20;
        fVar9 = fVar20 * fVar20 + fVar17 * fVar17;
        fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
        fVar15 = fVar9 + fVar18 * fVar18 + fVar19 * fVar19;
        fVar16 = fVar10 + fVar17 * fVar17 + fVar20 * fVar20;
        auVar1._4_4_ = fVar9 + fVar10 + 1.1754944e-38;
        auVar1._0_4_ = fVar10 + fVar9 + 1.1754944e-38;
        auVar1._8_4_ = fVar15 + 1.1754944e-38;
        auVar1._12_4_ = fVar16 + 1.1754944e-38;
        auVar12 = rsqrtps(auVar11,auVar1);
        fVar7 = auVar12._0_4_;
        fVar8 = auVar12._4_4_;
        fVar13 = auVar12._8_4_;
        fVar14 = auVar12._12_4_;
        *param_2 = (3.0 - fVar7 * fVar7 * (fVar10 + fVar9)) * fVar7 * 0.5 * fVar17;
        param_2[1] = (3.0 - fVar8 * fVar8 * (fVar9 + fVar10)) * fVar8 * 0.5 * fVar18;
        param_2[2] = (3.0 - fVar13 * fVar13 * fVar15) * fVar13 * 0.5 * fVar19;
        param_2[3] = (3.0 - fVar14 * fVar14 * fVar16) * fVar14 * 0.5 * fVar20;
      }
      else {
        fVar4 = (float)acosf();
        fVar5 = (float)sinf();
        fVar6 = (float)sinf(fVar4 - fVar4 * param_5);
        fVar6 = fVar6 * (1.0 / fVar5);
        fVar4 = (float)sinf(fVar4 * param_5);
        fVar4 = fVar4 * (1.0 / fVar5);
        *param_2 = fVar6 * fVar13 + fVar4 * fVar9 * fVar17;
        param_2[1] = fVar6 * fVar14 + fVar4 * fVar10 * fVar18;
        param_2[2] = fVar6 * fVar15 + fVar4 * fVar7 * fVar19;
        param_2[3] = fVar6 * fVar16 + fVar4 * fVar8 * fVar20;
      }
      goto FUN_18040ed98;
    }
  }
  else {
    fVar9 = *param_3;
    fVar10 = param_3[1];
    fVar7 = param_3[2];
    fVar8 = param_3[3];
  }
  *param_2 = fVar9;
  param_2[1] = fVar10;
  param_2[2] = fVar7;
  param_2[3] = fVar8;
FUN_18040ed98:
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_78 ^ (ulonglong)auStack_b8);
}





// 函数: void FUN_18040ec27(uint64_t param_1,int32_t param_2,float *param_3,float *param_4)
void FUN_18040ec27(uint64_t param_1,int32_t param_2,float *param_3,float *param_4)

{
  longlong lVar1;
  int8_t auVar2 [16];
  int32_t in_EAX;
  uint uVar3;
  float *in_RDX;
  float *unaff_RBX;
  float fVar4;
  float fVar5;
  float fVar6;
  float in_XMM0_Dc;
  float fVar7;
  float in_XMM0_Dd;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar14;
  int8_t auVar12 [16];
  int8_t auVar13 [16];
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Dc;
  float unaff_XMM9_Da;
  uint64_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  ulonglong in_stack_00000040;
  int32_t in_stack_00000080;
  int32_t in_stack_00000088;
  int32_t in_stack_00000090;
  int32_t in_stack_00000098;
  int32_t in_stack_000000a0;
  int32_t in_stack_000000a8;
  
  fVar9 = *param_3;
  fVar10 = param_3[1];
  fVar11 = param_3[2];
  fVar14 = param_3[3];
  fVar7 = in_XMM0_Dc * fVar11;
  fVar8 = in_XMM0_Dd * fVar14;
  uStack0000000000000030 = param_2;
  auVar13._0_4_ = fVar7 + (float)param_1 * fVar9;
  auVar13._4_4_ = fVar8 + (float)((ulonglong)param_1 >> 0x20) * fVar10;
  auVar13._8_4_ = fVar7 + fVar7;
  auVar13._12_4_ = fVar8 + fVar8;
  auVar12._4_12_ = auVar13._4_12_;
  auVar12._0_4_ = auVar13._0_4_ + auVar13._4_4_;
  uStack0000000000000028 = 0x3f8000003f800000;
  uVar3 = movmskps(in_EAX,auVar12);
  lVar1 = (ulonglong)(uVar3 & 1) * 0x10;
  fVar7 = *(float *)(&stack0x00000020 + lVar1);
  fVar8 = *(float *)(&stack0x00000024 + lVar1);
  fVar15 = *(float *)((longlong)&stack0x00000028 + lVar1);
  fVar16 = *(float *)((int8_t *)((longlong)register0x00000020 + 0x2c) + lVar1);
  fVar17 = *param_4;
  fVar18 = param_4[1];
  fVar19 = param_4[2];
  fVar20 = param_4[3];
  if (0.9995 < ABS(auVar12._0_4_)) {
    fVar4 = 1.0 - unaff_XMM9_Da;
    fVar17 = fVar4 * fVar9 + unaff_XMM9_Da * fVar7 * fVar17;
    fVar18 = fVar4 * fVar10 + unaff_XMM9_Da * fVar8 * fVar18;
    fVar19 = fVar4 * fVar11 + unaff_XMM9_Da * fVar15 * fVar19;
    fVar20 = fVar4 * fVar14 + unaff_XMM9_Da * fVar16 * fVar20;
    fVar9 = fVar20 * fVar20 + fVar17 * fVar17;
    fVar10 = fVar19 * fVar19 + fVar18 * fVar18;
    fVar15 = fVar9 + fVar18 * fVar18 + fVar19 * fVar19;
    fVar16 = fVar10 + fVar17 * fVar17 + fVar20 * fVar20;
    auVar2._4_4_ = fVar9 + fVar10 + 1.1754944e-38;
    auVar2._0_4_ = fVar10 + fVar9 + 1.1754944e-38;
    auVar2._8_4_ = fVar15 + 1.1754944e-38;
    auVar2._12_4_ = fVar16 + 1.1754944e-38;
    auVar13 = rsqrtps(auVar12,auVar2);
    fVar11 = auVar13._0_4_;
    fVar14 = auVar13._4_4_;
    fVar7 = auVar13._8_4_;
    fVar8 = auVar13._12_4_;
    *in_RDX = (3.0 - fVar11 * fVar11 * (fVar10 + fVar9)) * fVar11 * 0.5 * fVar17;
    in_RDX[1] = (3.0 - fVar14 * fVar14 * (fVar9 + fVar10)) * fVar14 * 0.5 * fVar18;
    in_RDX[2] = (3.0 - fVar7 * fVar7 * fVar15) * fVar7 * 0.5 * fVar19;
    in_RDX[3] = (3.0 - fVar8 * fVar8 * fVar16) * fVar8 * 0.5 * fVar20;
  }
  else {
    in_stack_00000080 = unaff_XMM8_Da;
    in_stack_00000088 = unaff_XMM8_Dc;
    in_stack_00000090 = unaff_XMM7_Da;
    in_stack_00000098 = unaff_XMM7_Dc;
    in_stack_000000a0 = unaff_XMM6_Da;
    in_stack_000000a8 = unaff_XMM6_Dc;
    fVar4 = (float)acosf(ABS(auVar12._0_4_),in_RDX,auVar12._0_8_,param_4,0x3f8000003f800000);
    fVar5 = (float)sinf();
    fVar6 = (float)sinf(fVar4 - fVar4 * unaff_XMM9_Da);
    fVar6 = fVar6 * (1.0 / fVar5);
    fVar4 = (float)sinf(fVar4 * unaff_XMM9_Da);
    fVar4 = fVar4 * (1.0 / fVar5);
    *unaff_RBX = fVar6 * fVar9 + fVar4 * fVar7 * fVar17;
    unaff_RBX[1] = fVar6 * fVar10 + fVar4 * fVar8 * fVar18;
    unaff_RBX[2] = fVar6 * fVar11 + fVar4 * fVar15 * fVar19;
    unaff_RBX[3] = fVar6 * fVar14 + fVar4 * fVar16 * fVar20;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18040ec8a(void)
void FUN_18040ec8a(void)

{
  float *unaff_RBX;
  float fVar1;
  float fVar2;
  float fVar3;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  ulonglong in_stack_00000040;
  
  fVar1 = (float)acosf();
  fVar2 = (float)sinf();
  fVar3 = (float)sinf(fVar1 - fVar1 * unaff_XMM9_Da);
  fVar3 = fVar3 * (1.0 / fVar2);
  fVar1 = (float)sinf(fVar1 * unaff_XMM9_Da);
  fVar1 = fVar1 * (1.0 / fVar2);
  *unaff_RBX = fVar3 * unaff_XMM11_Da + fVar1 * unaff_XMM10_Da;
  unaff_RBX[1] = fVar3 * unaff_XMM11_Db + fVar1 * unaff_XMM10_Db;
  unaff_RBX[2] = fVar3 * unaff_XMM11_Dc + fVar1 * unaff_XMM10_Dc;
  unaff_RBX[3] = fVar3 * unaff_XMM11_Dd + fVar1 * unaff_XMM10_Dd;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18040ed1b(uint64_t param_1,float *param_2)
void FUN_18040ed1b(uint64_t param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar4;
  float fVar5;
  int8_t in_XMM2 [16];
  int8_t auVar3 [16];
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM10_Db;
  float unaff_XMM10_Dc;
  float unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM11_Db;
  float unaff_XMM11_Dc;
  float unaff_XMM11_Dd;
  ulonglong in_stack_00000040;
  
  fVar9 = 1.0 - unaff_XMM9_Da;
  fVar10 = fVar9 * unaff_XMM11_Da + unaff_XMM9_Da * unaff_XMM10_Da;
  fVar11 = fVar9 * unaff_XMM11_Db + unaff_XMM9_Da * unaff_XMM10_Db;
  fVar12 = fVar9 * unaff_XMM11_Dc + unaff_XMM9_Da * unaff_XMM10_Dc;
  fVar13 = fVar9 * unaff_XMM11_Dd + unaff_XMM9_Da * unaff_XMM10_Dd;
  fVar9 = fVar13 * fVar13 + fVar10 * fVar10;
  fVar1 = fVar12 * fVar12 + fVar11 * fVar11;
  fVar7 = fVar9 + fVar11 * fVar11 + fVar12 * fVar12;
  fVar8 = fVar1 + fVar10 * fVar10 + fVar13 * fVar13;
  auVar3._4_4_ = fVar9 + fVar1 + 1.1754944e-38;
  auVar3._0_4_ = fVar1 + fVar9 + 1.1754944e-38;
  auVar3._8_4_ = fVar7 + 1.1754944e-38;
  auVar3._12_4_ = fVar8 + 1.1754944e-38;
  auVar3 = rsqrtps(in_XMM2,auVar3);
  fVar2 = auVar3._0_4_;
  fVar4 = auVar3._4_4_;
  fVar5 = auVar3._8_4_;
  fVar6 = auVar3._12_4_;
  *param_2 = (3.0 - fVar2 * fVar2 * (fVar1 + fVar9)) * fVar2 * 0.5 * fVar10;
  param_2[1] = (3.0 - fVar4 * fVar4 * (fVar9 + fVar1)) * fVar4 * 0.5 * fVar11;
  param_2[2] = (3.0 - fVar5 * fVar5 * fVar7) * fVar5 * 0.5 * fVar12;
  param_2[3] = (3.0 - fVar6 * fVar6 * fVar8) * fVar6 * 0.5 * fVar13;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}





// 函数: void FUN_18040ed98(void)
void FUN_18040ed98(void)

{
  ulonglong in_stack_00000040;
  
                    // WARNING: Subroutine does not return
  FUN_1808fc050(in_stack_00000040 ^ (ulonglong)&stack0x00000000);
}



uint64_t * FUN_18040edc0(longlong *param_1,uint64_t *param_2,float param_3)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  float fVar9;
  uint64_t uVar10;
  float fVar11;
  int aiStackX_18 [2];
  uint64_t uStack_88;
  uint64_t uStack_80;
  int8_t auStack_78 [16];
  float fStack_68;
  uint64_t uStack_58;
  uint64_t uStack_50;
  float fStack_48;
  
  aiStackX_18[0] =
       ((*(byte *)((longlong)param_1 + 0x12) + 1) * 3 + (uint)*(byte *)((longlong)param_1 + 0x13)) *
       (*(ushort *)(param_1 + 2) - 1);
  FUN_18040f060(param_1,*param_1,aiStackX_18,&uStack_58,*(byte *)((longlong)param_1 + 0x12));
  uVar4 = aiStackX_18[0] >> 0x1f & 0xf;
  aiStackX_18[0] = aiStackX_18[0] + uVar4;
  fVar11 = (float)(ushort)((ushort)(*(uint *)(*param_1 + (longlong)(aiStackX_18[0] >> 4) * 2) >>
                                   (((byte)aiStackX_18[0] & 0xf) - (char)uVar4 & 0x1f)) &
                          (1 << (*(byte *)((longlong)param_1 + 0x13) & 0x1f)) - 1U);
  if (param_3 < fVar11) {
    iVar6 = 0;
    aiStackX_18[0] = 0;
    FUN_18040f060(param_1,*param_1,aiStackX_18,&uStack_58,*(int8_t *)((longlong)param_1 + 0x12))
    ;
    lVar8 = *param_1;
    bVar1 = *(byte *)((longlong)param_1 + 0x13);
    uVar4 = aiStackX_18[0] >> 0x1f & 0xf;
    iVar2 = aiStackX_18[0] + uVar4;
    fVar9 = (float)(ushort)((ushort)(*(uint *)(lVar8 + (longlong)(iVar2 >> 4) * 2) >>
                                    (((byte)iVar2 & 0xf) - (char)uVar4 & 0x1f)) &
                           (1 << (bVar1 & 0x1f)) - 1U);
    if (fVar9 <= param_3) {
      if (((int)fVar9 == 0) && ((int)fVar11 == *(ushort *)(param_1 + 2) - 1)) {
        uVar10 = FUN_18040eab0(param_1,(int)param_3,auStack_78,&uStack_58);
        FUN_18040ebd0(uVar10,&uStack_88,auStack_78,&uStack_58,param_3 - fStack_68);
        uStack_58 = uStack_88;
        uStack_50 = uStack_80;
      }
      else {
        iVar2 = *(ushort *)(param_1 + 2) - 1;
        if (0 < (int)(*(ushort *)(param_1 + 2) - 2)) {
          do {
            iVar5 = iVar2 + iVar6 >> 1;
            aiStackX_18[0] = ((uint)bVar1 + (*(byte *)((longlong)param_1 + 0x12) + 1) * 3) * iVar5;
            FUN_18040f060(param_1,lVar8,aiStackX_18,&uStack_58,*(byte *)((longlong)param_1 + 0x12));
            bVar3 = (byte)aiStackX_18[0] & 0xf;
            iVar7 = aiStackX_18[0];
            if (aiStackX_18[0] < 0) {
              iVar7 = aiStackX_18[0] + 0xf;
              bVar3 = bVar3 - 0x10;
            }
            lVar8 = *param_1;
            bVar1 = *(byte *)((longlong)param_1 + 0x13);
            if ((float)(ushort)((ushort)(*(uint *)(lVar8 + (longlong)(iVar7 >> 4) * 2) >>
                                        (bVar3 & 0x1f)) & (1 << (bVar1 & 0x1f)) - 1U) <= param_3) {
              iVar6 = iVar5;
              iVar5 = iVar2;
            }
            iVar2 = iVar5;
          } while (iVar6 < iVar2 + -1);
        }
        uVar10 = FUN_18040eab0(param_1,iVar6,&uStack_58,auStack_78);
        FUN_18040ebd0(uVar10,&uStack_88,&uStack_58,auStack_78,
                      (param_3 - fStack_48) / (fStack_68 - fStack_48));
        uStack_58 = uStack_88;
        uStack_50 = uStack_80;
      }
    }
  }
  *param_2 = uStack_58;
  param_2[1] = uStack_50;
  return param_2;
}





// 函数: void FUN_18040ee6d(void)
void FUN_18040ee6d(void)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar5;
  int iVar6;
  int iVar7;
  uint64_t *unaff_R15;
  float fVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  iVar6 = 0;
  *(int32_t *)(unaff_RBP + 0x77) = 0;
  FUN_18040f060();
  bVar1 = *(byte *)((longlong)unaff_RBX + 0x13);
  uVar4 = *(int *)(unaff_RBP + 0x77) >> 0x1f & 0xf;
  iVar2 = *(int *)(unaff_RBP + 0x77) + uVar4;
  fVar8 = (float)(ushort)((ushort)(*(uint *)(*unaff_RBX + (longlong)(iVar2 >> 4) * 2) >>
                                  (((byte)iVar2 & 0xf) - (char)uVar4 & 0x1f)) &
                         (1 << (bVar1 & 0x1f)) - 1U);
  if (fVar8 <= unaff_XMM6_Da) {
    if (((int)fVar8 == 0) && ((int)unaff_XMM7_Da == *(ushort *)(unaff_RBX + 2) - 1)) {
      uVar9 = FUN_18040eab0();
      FUN_18040ebd0(uVar9,unaff_RBP + -0x29,unaff_RBP + -0x19,unaff_RBP + 7,
                    unaff_XMM6_Da - *(float *)(unaff_RBP + -9));
    }
    else {
      iVar2 = *(ushort *)(unaff_RBX + 2) - 1;
      if (0 < (int)(*(ushort *)(unaff_RBX + 2) - 2)) {
        do {
          iVar5 = iVar2 + iVar6 >> 1;
          *(uint *)(unaff_RBP + 0x77) =
               ((uint)bVar1 + (*(byte *)((longlong)unaff_RBX + 0x12) + 1) * 3) * iVar5;
          FUN_18040f060();
          iVar7 = *(int *)(unaff_RBP + 0x77);
          bVar3 = (byte)iVar7 & 0xf;
          if (iVar7 < 0) {
            iVar7 = iVar7 + 0xf;
            bVar3 = bVar3 - 0x10;
          }
          bVar1 = *(byte *)((longlong)unaff_RBX + 0x13);
          if ((float)(ushort)((ushort)(*(uint *)(*unaff_RBX + (longlong)(iVar7 >> 4) * 2) >>
                                      (bVar3 & 0x1f)) & (1 << (bVar1 & 0x1f)) - 1U) <= unaff_XMM6_Da
             ) {
            iVar6 = iVar5;
            iVar5 = iVar2;
          }
          iVar2 = iVar5;
        } while (iVar6 < iVar2 + -1);
      }
      uVar9 = FUN_18040eab0();
      FUN_18040ebd0(uVar9,unaff_RBP + -0x29,unaff_RBP + 7,unaff_RBP + -0x19,
                    (unaff_XMM6_Da - *(float *)(unaff_RBP + 0x17)) /
                    (*(float *)(unaff_RBP + -9) - *(float *)(unaff_RBP + 0x17)));
    }
    uVar9 = *(uint64_t *)(unaff_RBP + -0x29);
    uVar10 = *(uint64_t *)(unaff_RBP + -0x21);
  }
  else {
    uVar9 = *(uint64_t *)(unaff_RBP + 7);
    uVar10 = *(uint64_t *)(unaff_RBP + 0xf);
  }
  *unaff_R15 = uVar9;
  unaff_R15[1] = uVar10;
  return;
}





// 函数: void FUN_18040ef27(void)
void FUN_18040ef27(void)

{
  byte bVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  uint in_R11D;
  int iVar4;
  uint64_t *unaff_R15;
  uint64_t uVar5;
  float unaff_XMM6_Da;
  
  iVar4 = *(ushort *)(unaff_RBX + 2) - 1;
  if (0 < (int)(*(ushort *)(unaff_RBX + 2) - 2)) {
    do {
      iVar2 = iVar4 + unaff_EDI >> 1;
      *(uint *)(unaff_RBP + 0x77) =
           (in_R11D + (*(byte *)((longlong)unaff_RBX + 0x12) + 1) * 3) * iVar2;
      FUN_18040f060();
      iVar3 = *(int *)(unaff_RBP + 0x77);
      bVar1 = (byte)iVar3 & 0xf;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 0xf;
        bVar1 = bVar1 - 0x10;
      }
      in_R11D = (uint)*(byte *)((longlong)unaff_RBX + 0x13);
      if ((float)(ushort)((ushort)(*(uint *)(*unaff_RBX + (longlong)(iVar3 >> 4) * 2) >>
                                  (bVar1 & 0x1f)) &
                         (1 << (*(byte *)((longlong)unaff_RBX + 0x13) & 0x1f)) - 1U) <=
          unaff_XMM6_Da) {
        unaff_EDI = iVar2;
        iVar2 = iVar4;
      }
      iVar4 = iVar2;
    } while (unaff_EDI < iVar4 + -1);
  }
  uVar5 = FUN_18040eab0();
  FUN_18040ebd0(uVar5,unaff_RBP + -0x29,unaff_RBP + 7,unaff_RBP + -0x19,
                (unaff_XMM6_Da - *(float *)(unaff_RBP + 0x17)) /
                (*(float *)(unaff_RBP + -9) - *(float *)(unaff_RBP + 0x17)));
  uVar5 = *(uint64_t *)(unaff_RBP + -0x21);
  *unaff_R15 = *(uint64_t *)(unaff_RBP + -0x29);
  unaff_R15[1] = uVar5;
  return;
}





// 函数: void FUN_18040ef43(void)
void FUN_18040ef43(void)

{
  byte bVar1;
  longlong *unaff_RBX;
  longlong unaff_RBP;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  uint in_R11D;
  int unaff_R14D;
  uint64_t *unaff_R15;
  uint64_t uVar4;
  float unaff_XMM6_Da;
  
  do {
    iVar2 = unaff_R14D + unaff_EDI >> 1;
    *(uint *)(unaff_RBP + 0x77) =
         (in_R11D + (*(byte *)((longlong)unaff_RBX + 0x12) + 1) * 3) * iVar2;
    FUN_18040f060();
    iVar3 = *(int *)(unaff_RBP + 0x77);
    bVar1 = (byte)iVar3 & 0xf;
    if (iVar3 < 0) {
      iVar3 = iVar3 + 0xf;
      bVar1 = bVar1 - 0x10;
    }
    in_R11D = (uint)*(byte *)((longlong)unaff_RBX + 0x13);
    if ((float)(ushort)((ushort)(*(uint *)(*unaff_RBX + (longlong)(iVar3 >> 4) * 2) >>
                                (bVar1 & 0x1f)) &
                       (1 << (*(byte *)((longlong)unaff_RBX + 0x13) & 0x1f)) - 1U) <= unaff_XMM6_Da)
    {
      unaff_EDI = iVar2;
      iVar2 = unaff_R14D;
    }
    unaff_R14D = iVar2;
  } while (unaff_EDI < unaff_R14D + -1);
  uVar4 = FUN_18040eab0();
  FUN_18040ebd0(uVar4,unaff_RBP + -0x29,unaff_RBP + 7,unaff_RBP + -0x19,
                (unaff_XMM6_Da - *(float *)(unaff_RBP + 0x17)) /
                (*(float *)(unaff_RBP + -9) - *(float *)(unaff_RBP + 0x17)));
  uVar4 = *(uint64_t *)(unaff_RBP + -0x21);
  *unaff_R15 = *(uint64_t *)(unaff_RBP + -0x29);
  unaff_R15[1] = uVar4;
  return;
}





// 函数: void FUN_18040efea(int32_t param_1)
void FUN_18040efea(int32_t param_1)

{
  uint64_t uVar1;
  longlong unaff_RBP;
  int32_t unaff_EDI;
  uint64_t *unaff_R15;
  int32_t uVar2;
  float unaff_XMM6_Da;
  
  uVar2 = FUN_18040eab0(param_1,unaff_EDI,unaff_RBP + 7,unaff_RBP + -0x19);
  FUN_18040ebd0(uVar2,unaff_RBP + -0x29,unaff_RBP + 7,unaff_RBP + -0x19,
                (unaff_XMM6_Da - *(float *)(unaff_RBP + 0x17)) /
                (*(float *)(unaff_RBP + -9) - *(float *)(unaff_RBP + 0x17)));
  uVar1 = *(uint64_t *)(unaff_RBP + -0x21);
  *unaff_R15 = *(uint64_t *)(unaff_RBP + -0x29);
  unaff_R15[1] = uVar1;
  return;
}





// 函数: void FUN_18040f02e(void)
void FUN_18040f02e(void)

{
  uint64_t uVar1;
  longlong unaff_RBP;
  uint64_t *unaff_R15;
  
  uVar1 = *(uint64_t *)(unaff_RBP + -0x21);
  *unaff_R15 = *(uint64_t *)(unaff_RBP + -0x29);
  unaff_R15[1] = uVar1;
  return;
}





// 函数: void FUN_18040f03a(uint64_t param_1)
void FUN_18040f03a(uint64_t param_1)

{
  uint64_t *unaff_R15;
  uint64_t in_XMM0_Qb;
  
  *unaff_R15 = param_1;
  unaff_R15[1] = in_XMM0_Qb;
  return;
}





// 函数: void FUN_18040f060(longlong param_1,longlong param_2,int *param_3,float *param_4,int param_5)
void FUN_18040f060(longlong param_1,longlong param_2,int *param_3,float *param_4,int param_5)

{
  float fVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  iVar4 = *param_3;
  uVar5 = iVar4 >> 0x1f & 7;
  iVar3 = iVar4 + uVar5;
  fVar1 = *(float *)(param_1 + 8);
  fVar12 = *(float *)(param_1 + 0xc);
  iVar10 = iVar4 + 3;
  *param_3 = iVar10;
  uVar2 = *(ushort *)((iVar3 >> 3) + param_2);
  uVar6 = iVar4 + 1 >> 0x1f & 0xf;
  iVar4 = iVar4 + 1 + uVar6;
  uVar8 = (ulonglong)
          (*(uint *)(param_2 + (longlong)(iVar4 >> 4) * 2) >>
          (((byte)iVar4 & 0xf) - (char)uVar6 & 0x1f)) & 3;
  fVar15 = (fVar1 - fVar12) / (float)((1 << ((byte)param_5 & 0x1f)) - 1);
  fVar11 = 0.0;
  iVar7 = (int)uVar8;
  iVar4 = (int)(1L << ((byte)param_5 & 0x3f));
  if (iVar7 != 0) {
    iVar9 = iVar10 + param_5;
    *param_3 = iVar9;
    uVar6 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar6;
    fVar11 = (float)(iVar4 - 1U &
                    (uint)(*(ulonglong *)(param_2 + (longlong)(iVar10 >> 5) * 4) >>
                          (((byte)iVar10 & 0x1f) - (char)uVar6 & 0x3f))) * fVar15 + fVar12;
    iVar10 = iVar9;
    if (fVar12 <= fVar11) {
      if (fVar1 <= fVar11) {
        fVar11 = fVar1;
      }
      *param_4 = fVar11;
      fVar11 = fVar11 * fVar11;
    }
    else {
      *param_4 = fVar12;
      fVar11 = fVar12 * fVar12;
    }
  }
  iVar9 = iVar10;
  if (iVar7 != 1) {
    iVar9 = iVar10 + param_5;
    *param_3 = iVar9;
    uVar6 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar6;
    fVar13 = (float)(iVar4 - 1U &
                    (uint)(*(ulonglong *)(param_2 + (longlong)(iVar10 >> 5) * 4) >>
                          (((byte)iVar10 & 0x1f) - (char)uVar6 & 0x3f))) * fVar15 + fVar12;
    fVar14 = fVar12;
    if ((fVar12 <= fVar13) && (fVar14 = fVar13, fVar1 <= fVar13)) {
      fVar14 = fVar1;
    }
    param_4[1] = fVar14;
    fVar11 = fVar11 + fVar14 * fVar14;
  }
  iVar10 = iVar9;
  if (iVar7 != 2) {
    iVar10 = iVar9 + param_5;
    *param_3 = iVar10;
    uVar6 = iVar9 >> 0x1f & 0x1f;
    iVar9 = iVar9 + uVar6;
    fVar13 = (float)((uint)(*(ulonglong *)(param_2 + (longlong)(iVar9 >> 5) * 4) >>
                           (((byte)iVar9 & 0x1f) - (char)uVar6 & 0x3f)) & iVar4 - 1U) * fVar15 +
             fVar12;
    fVar14 = fVar12;
    if ((fVar12 <= fVar13) && (fVar14 = fVar13, fVar1 <= fVar13)) {
      fVar14 = fVar1;
    }
    param_4[2] = fVar14;
    fVar11 = fVar11 + fVar14 * fVar14;
  }
  if (iVar7 != 3) {
    *param_3 = iVar10 + param_5;
    uVar6 = iVar10 >> 0x1f & 0x1f;
    iVar10 = iVar10 + uVar6;
    fVar15 = (float)((uint)(*(ulonglong *)(param_2 + (longlong)(iVar10 >> 5) * 4) >>
                           (((byte)iVar10 & 0x1f) - (char)uVar6 & 0x3f)) & iVar4 - 1U) * fVar15 +
             fVar12;
    if ((fVar12 <= fVar15) && (fVar12 = fVar15, fVar1 <= fVar15)) {
      fVar12 = fVar1;
    }
    param_4[3] = fVar12;
    fVar11 = fVar11 + fVar12 * fVar12;
  }
  if (0.0 < 1.0 - fVar11) {
    param_4[uVar8] = SQRT(1.0 - fVar11);
  }
  else {
    param_4[uVar8] = 0.0;
    FUN_180084000(param_4);
  }
  if ((uVar2 >> (((byte)iVar3 & 7) - (char)uVar5 & 0x1f) & 1) != 0) {
    *param_4 = -*param_4;
    param_4[1] = -param_4[1];
    param_4[2] = -param_4[2];
    param_4[3] = -param_4[3];
  }
  return;
}



longlong FUN_18040f300(longlong *param_1,longlong param_2,int param_3)

{
  uint uVar1;
  int aiStackX_18 [4];
  
  aiStackX_18[0] =
       ((*(byte *)((longlong)param_1 + 0x12) + 1) * 3 + (uint)*(byte *)((longlong)param_1 + 0x13)) *
       param_3;
  FUN_18040f060(param_1,*param_1,aiStackX_18,param_2,*(byte *)((longlong)param_1 + 0x12));
  uVar1 = aiStackX_18[0] >> 0x1f & 0xf;
  aiStackX_18[0] = aiStackX_18[0] + uVar1;
  *(float *)(param_2 + 0x10) =
       (float)(ushort)((ushort)(*(uint *)(*param_1 + (longlong)(aiStackX_18[0] >> 4) * 2) >>
                               (((byte)aiStackX_18[0] & 0xf) - (char)uVar1 & 0x1f)) &
                      (1 << (*(byte *)((longlong)param_1 + 0x13) & 0x1f)) - 1U);
  return param_2;
}





// 函数: void FUN_18040f3a0(uint64_t *param_1)
void FUN_18040f3a0(uint64_t *param_1)

{
  int32_t auStackX_8 [8];
  int8_t auStack_28 [32];
  
  auStackX_8[0] = 0;
  FUN_18040f060(param_1,*param_1,auStackX_8,auStack_28,*(int8_t *)((longlong)param_1 + 0x12));
  return;
}





// 函数: void FUN_18040f420(uint64_t param_1,float param_2)
void FUN_18040f420(uint64_t param_1,float param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2 * 0.5);
}





// 函数: void FUN_18040f4d0(uint64_t param_1,float param_2)
void FUN_18040f4d0(uint64_t param_1,float param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2 * 0.5);
}





// 函数: void FUN_18040f590(uint64_t param_1,float param_2)
void FUN_18040f590(uint64_t param_1,float param_2)

{
                    // WARNING: Subroutine does not return
  FUN_1808fd400(param_2 * 0.5);
}





