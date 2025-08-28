#include "TaleWorlds.Native.Split.h"

// 99_part_14_part023.c - 8 个函数

// 函数: void FUN_1808fd494(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)
void FUN_1808fd494(longlong param_1,undefined8 param_2,undefined8 param_3,longlong param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_4 + 0x38);
  FUN_1808fd18c(param_2,param_4);
  if ((*(uint *)(lVar1 + 4) & ((*(uint *)(param_1 + 4) & 0x66) != 0) + 1) != 0) {
                    // WARNING: Subroutine does not return
    __CxxFrameHandler3(param_1,param_2,param_3,param_4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1808fd514(void)
void FUN_1808fd514(void)

{
  uint uVar1;
  ulonglong uStackX_8;
  ulonglong uStackX_10;
  uint uStackX_18;
  undefined4 uStackX_1c;
  
  if (_DAT_180bf00a8 == 0x2b992ddfa232) {
    uStackX_10 = 0;
    GetSystemTimeAsFileTime(&uStackX_10);
    uStackX_8 = uStackX_10;
    uVar1 = GetCurrentThreadId();
    uStackX_8 = uStackX_8 ^ uVar1;
    uVar1 = GetCurrentProcessId();
    uStackX_8 = uStackX_8 ^ uVar1;
    QueryPerformanceCounter(&uStackX_18);
    _DAT_180bf00a8 =
         ((ulonglong)uStackX_18 << 0x20 ^ CONCAT44(uStackX_1c,uStackX_18) ^ uStackX_8 ^
         (ulonglong)&uStackX_8) & 0xffffffffffff;
    if (_DAT_180bf00a8 == 0x2b992ddfa232) {
      _DAT_180bf00a8 = 0x2b992ddfa233;
    }
  }
  _DAT_180bf00a0 = ~_DAT_180bf00a8;
  return;
}



undefined8 FUN_1808fd5c0(undefined8 param_1,int param_2)

{
  if (param_2 == 1) {
    DisableThreadLibraryCalls();
  }
  return 1;
}






// 函数: void FUN_1808fd5e4(void)
void FUN_1808fd5e4(void)

{
  ulonglong *puVar1;
  
  puVar1 = (ulonglong *)func_0x00018004b9a0();
  *puVar1 = *puVar1 | 4;
  puVar1 = (ulonglong *)func_0x00018010cbb0();
  *puVar1 = *puVar1 | 2;
  return;
}






// 函数: void FUN_1808fd610(undefined4 param_1)
void FUN_1808fd610(undefined4 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 auStack_5c8 [8];
  undefined1 auStack_5c0 [232];
  undefined1 auStack_4d8 [1232];
  
  puVar3 = auStack_5c8;
  iVar2 = IsProcessorFeaturePresent(0x17);
  if (iVar2 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(param_1);
    puVar3 = auStack_5c0;
  }
  *(undefined8 *)(puVar3 + -8) = 0x1808fd643;
  func_0x0001808fd608(3);
                    // WARNING: Subroutine does not return
  *(undefined8 *)(puVar3 + -8) = 0x1808fd654;
  memset(auStack_4d8,0,0x4d0);
}






// 函数: void FUN_1808fd75c(void)
void FUN_1808fd75c(void)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)&UNK_180a908f8; plVar1 < &UNK_180a908f8; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      _guard_dispatch_icall();
    }
  }
  return;
}






// 函数: void FUN_1808fd798(void)
void FUN_1808fd798(void)

{
  longlong *plVar1;
  
  for (plVar1 = (longlong *)&UNK_180a90908; plVar1 < &UNK_180a90908; plVar1 = plVar1 + 1) {
    if (*plVar1 != 0) {
      _guard_dispatch_icall();
    }
  }
  return;
}



void free(void)

{
                    // WARNING: Could not recover jumptable at 0x0001808ffc83. Too many branches
                    // WARNING: Treating indirect jump as call
  free();
  return;
}



undefined8 * FUN_1808fd7dc(undefined8 *param_1,longlong param_2)

{
  *param_1 = &UNK_18098b928;
  param_1[1] = 0;
  param_1[2] = 0;
  __std_exception_copy(param_2 + 8);
  *param_1 = &UNK_18098b958;
  return param_1;
}



undefined8 * FUN_1808fd850(undefined8 *param_1,ulonglong param_2)

{
  *param_1 = &UNK_18098b928;
  __std_exception_destroy(param_1 + 1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}






// 函数: void FUN_1808fd894(void)
void FUN_1808fd894(void)

{
  undefined1 auStack_28 [40];
  
  FUN_180287f70(auStack_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(auStack_28,&UNK_180bd8a18);
}






// 函数: void FUN_1808fd8b4(void)
void FUN_1808fd8b4(void)

{
  undefined1 auStack_28 [40];
  
  func_0x0001808fd81c(auStack_28);
                    // WARNING: Subroutine does not return
  _CxxThrowException(auStack_28,&UNK_180bd88e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808fd8e0(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float fVar8;
  int iVar9;
  float fVar10;
  int iVar11;
  undefined1 in_XMM0 [16];
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined1 auVar19 [16];
  float fVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  uint uVar35;
  uint uVar39;
  double dVar36;
  undefined1 auVar37 [16];
  double dVar40;
  float afStack_f8 [8];
  ulonglong uStack_d8;
  uint uStack_b8;
  uint uStack_b4;
  undefined1 aauStack_38 [3] [16];
  undefined1 auVar38 [16];
  
  fVar13 = in_XMM0._0_4_;
  fVar14 = in_XMM0._4_4_;
  auVar37 = in_XMM0 & _DAT_180d9f600;
  fVar20 = (float)DAT_180d9f5d0;
  uVar35 = -(uint)(0x461c4000 < auVar37._0_4_);
  uVar39 = -(uint)(0x461c4000 < auVar37._4_4_);
  auVar38._0_8_ = CONCAT44(uVar39,uVar35);
  auVar38._8_4_ = -(uint)(0x461c4000 < auVar37._8_4_);
  auVar38._12_4_ = -(uint)(0x461c4000 < auVar37._12_4_);
  fVar29 = (float)DAT_180d9f5c0;
  uVar1 = movmskps(in_EAX,auVar38);
  fVar15 = DAT_180d9f5d0._4_4_;
  fVar16 = DAT_180d9f5c0._4_4_;
  if (uVar1 == 0) {
    iVar4 = (int)(fVar13 * 0.31830987);
    iVar7 = (int)(fVar14 * 0.31830987);
    fVar5 = (float)iVar4;
    fVar8 = (float)iVar7;
    fVar20 = ((fVar13 - fVar20 * fVar5) - fVar29 * fVar5) - fVar5 * 1.5099067e-07;
    fVar15 = ((fVar14 - fVar15 * fVar8) - fVar16 * fVar8) - fVar8 * 1.5099067e-07;
    fVar13 = fVar20 - fVar5 * 5.126688e-12;
    fVar14 = fVar15 - fVar8 * 5.126688e-12;
    fVar20 = fVar20 * fVar20;
    fVar15 = fVar15 * fVar15;
    return CONCAT44((((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar14 + fVar14,
                    (((fVar20 * 2.608e-06 + -0.000198107) * fVar20 + 0.008333075) * fVar20 +
                    -0.16666658) * fVar20 * fVar13 + fVar13) ^ CONCAT44(iVar7 << 0x1f,iVar4 << 0x1f)
    ;
  }
  uStack_d8 = (ulonglong)DAT_180d9f6d0 & in_XMM0._0_8_;
  iVar7 = (int)(fVar13 * 0.31830987);
  iVar9 = (int)(fVar14 * 0.31830987);
  iVar11 = (int)(in_XMM0._8_4_ * 0.31830987);
  iVar12 = (int)(in_XMM0._12_4_ * 0.31830987);
  auVar37 = in_XMM0 & _DAT_180d9f600;
  fVar5 = auVar37._0_4_;
  auVar34._0_4_ = -(uint)(0x4e800000 < (int)fVar5);
  fVar8 = auVar37._4_4_;
  auVar34._4_4_ = -(uint)(0x4e800000 < (int)fVar8);
  auVar34._8_4_ = -(uint)(0x4e800000 < auVar37._8_4_);
  auVar34._12_4_ = -(uint)(0x4e800000 < auVar37._12_4_);
  iVar4 = movmskps(param_2,auVar34);
  if (iVar4 == 0) {
    if (uVar1 == 0xf) {
      auVar32._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar32._12_4_ = 0;
      auVar32 = auVar32 & _DAT_180d9f680;
      dVar36 = SUB168(_DAT_180d9f670 | auVar32,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_180d9f670 | auVar32,8) - 6755399441055744.0;
      dVar21 = (double)fVar5 - dVar36 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar13 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar20 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar14 = fVar13 * fVar13;
      fVar15 = fVar20 * fVar20;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar20 + fVar20,
                    (((fVar14 * 2.608e-06 + -0.000198107) * fVar14 + 0.008333075) * fVar14 +
                    -0.16666658) * fVar14 * fVar13 + fVar13) ^
           CONCAT44(SUB164(_DAT_180d9f610 & auVar33,0xc),SUB164(_DAT_180d9f610 & auVar33,4)) ^
           uStack_d8;
    }
    else {
      fVar6 = (float)iVar7;
      fVar10 = (float)iVar9;
      fVar13 = ((fVar13 - fVar20 * fVar6) - fVar29 * fVar6) - fVar6 * 1.5099067e-07;
      fVar14 = ((fVar14 - fVar15 * fVar10) - fVar16 * fVar10) - fVar10 * 1.5099067e-07;
      auVar30._0_4_ = (int)((double)fVar5 * 0.6366197723675814) + 1;
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar8 * 0.6366197723675814) + 1;
      auVar30._12_4_ = 0;
      auVar30 = auVar30 & _DAT_180d9f680;
      dVar36 = SUB168(_DAT_180d9f670 | auVar30,0) - 6755399441055744.0;
      dVar40 = SUB168(_DAT_180d9f670 | auVar30,8) - 6755399441055744.0;
      uStack_b8 = SUB164(auVar38 ^ _DAT_180d9f6b0,0);
      uStack_b4 = SUB164(auVar38 ^ _DAT_180d9f6b0,4);
      dVar21 = (double)fVar5 - dVar36 * 1.5707950592041016;
      dVar24 = (double)fVar8 - dVar40 * 1.5707950592041016;
      dVar22 = dVar21 - dVar36 * 1.267590960196685e-06;
      dVar25 = dVar24 - dVar40 * 1.267590960196685e-06;
      dVar23 = dVar22 - dVar36 * -1.6513982022126061e-13;
      dVar26 = dVar25 - dVar40 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar21 = ((dVar21 - dVar22) - dVar36 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar36 * -1.6513982022126061e-13);
      dVar22 = ((dVar24 - dVar25) - dVar40 * 1.267590960196685e-06) +
               ((dVar25 - dVar26) - dVar40 * -1.6513982022126061e-13);
      dVar24 = dVar23 + dVar21;
      dVar27 = dVar26 + dVar22;
      dVar25 = dVar24 - dVar36 * -1.3350302175814904e-19;
      dVar28 = dVar27 - dVar40 * -1.3350302175814904e-19;
      fVar20 = (float)(((dVar21 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar36 * -1.3350302175814904e-19)) -
                       dVar36 * 1.6446256936324258e-26) + dVar25);
      fVar29 = (float)(((dVar22 + (dVar26 - dVar27) +
                        ((dVar27 - dVar28) - dVar40 * -1.3350302175814904e-19)) -
                       dVar40 * 1.6446256936324258e-26) + dVar28);
      fVar15 = (float)((uint)(fVar20 * fVar20) & uVar35 | (uint)(fVar13 * fVar13) & uStack_b8);
      fVar16 = (float)((uint)(fVar29 * fVar29) & uVar39 | (uint)(fVar14 * fVar14) & uStack_b4);
      fVar13 = (float)((uint)fVar20 & uVar35 | (uint)(fVar13 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar14 = (float)((uint)fVar29 & uVar39 | (uint)(fVar14 - fVar10 * 5.126688e-12) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + 0.008333075) * fVar16 +
                    -0.16666658) * fVar16 * fVar14 + fVar14,
                    (((fVar15 * 2.608e-06 + -0.000198107) * fVar15 + 0.008333075) * fVar15 +
                    -0.16666658) * fVar15 * fVar13 + fVar13) ^
           ((CONCAT44(SUB164(_DAT_180d9f610 & auVar31,0xc),SUB164(_DAT_180d9f610 & auVar31,4)) ^
            uStack_d8) & auVar38._0_8_ |
           CONCAT44(iVar9 << 0x1f & uStack_b4,iVar7 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      fVar5 = (float)iVar7;
      fVar8 = (float)iVar9;
      fVar6 = (float)iVar11;
      fVar10 = (float)iVar12;
      auVar19._0_4_ = iVar7 << 0x1f;
      auVar19._4_4_ = iVar9 << 0x1f;
      auVar19._8_4_ = iVar11 << 0x1f;
      auVar19._12_4_ = iVar12 << 0x1f;
      fVar29 = ((fVar13 - fVar20 * fVar5) - fVar29 * fVar5) - fVar5 * 1.5099067e-07;
      fVar16 = ((fVar14 - fVar15 * fVar8) - fVar16 * fVar8) - fVar8 * 1.5099067e-07;
      fVar17 = ((in_XMM0._8_4_ - DAT_180d9f5d0._8_4_ * fVar6) - DAT_180d9f5c0._8_4_ * fVar6) -
               fVar6 * 1.5099067e-07;
      fVar18 = ((in_XMM0._12_4_ - DAT_180d9f5d0._12_4_ * fVar10) - DAT_180d9f5c0._12_4_ * fVar10) -
               fVar10 * 1.5099067e-07;
      fVar13 = fVar29 - fVar5 * 5.126688e-12;
      fVar14 = fVar16 - fVar8 * 5.126688e-12;
      fVar20 = fVar17 - fVar6 * 5.126688e-12;
      fVar15 = fVar18 - fVar10 * 5.126688e-12;
      fVar29 = fVar29 * fVar29;
      fVar16 = fVar16 * fVar16;
      fVar17 = fVar17 * fVar17;
      fVar18 = fVar18 * fVar18;
      auVar37._0_4_ =
           (((fVar29 * 2.608e-06 + -0.000198107) * fVar29 + (float)DAT_180d9f580) * fVar29 +
           -0.16666658) * fVar29 * fVar13 + fVar13;
      auVar37._4_4_ =
           (((fVar16 * 2.608e-06 + -0.000198107) * fVar16 + DAT_180d9f580._4_4_) * fVar16 +
           -0.16666658) * fVar16 * fVar14 + fVar14;
      auVar37._8_4_ =
           (((fVar17 * 2.608e-06 + -0.000198107) * fVar17 + DAT_180d9f580._8_4_) * fVar17 +
           -0.16666658) * fVar17 * fVar20 + fVar20;
      auVar37._12_4_ =
           (((fVar18 * 2.608e-06 + -0.000198107) * fVar18 + DAT_180d9f580._12_4_) * fVar18 +
           -0.16666658) * fVar18 * fVar15 + fVar15;
      aauStack_38[0] = auVar37 ^ auVar19;
    }
    lVar3 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar13 = afStack_f8[lVar3];
        dVar21 = (double)fVar13;
        if (((uint)fVar13 & 0x7f800000) == 0x7f800000) {
          fVar13 = fVar13 - fVar13;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar13) >> 0x17) - 0x8e & 0xfff8);
          dVar22 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar21;
          dVar24 = (double)(*(ulonglong *)(&UNK_180d9f410 + uVar2 * 2) << 0x28) * dVar21;
          dVar23 = dVar22 + dVar24;
          iVar4 = SUB84(dVar23 + 6755399441055744.0,0);
          uVar35 = iVar4 * 2;
          uVar39 = (iVar4 << 0x19) >> 0x1f;
          dVar21 = dVar21 * *(double *)(&UNK_180d9f418 + uVar2 * 2) + dVar24 + (dVar22 - dVar23) +
                   (dVar23 - ((dVar23 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar35 + uVar39 ^ uVar39) & 0xfe);
          fVar13 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar21 * dVar21) *
                                    *(double *)(&UNK_180d9f008 + uVar2 * 8)) ^
                                   (ulonglong)((uVar35 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&DAT_180d9f000 + uVar2 * 8) * dVar21 *
                          (double)((ulonglong)(9960.277636776373 - dVar21 * dVar21) ^
                                  (ulonglong)(((uVar35 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar3 * 4) = fVar13;
      }
      lVar3 = lVar3 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar3 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

ulonglong FUN_1808fe1a0(undefined8 param_1,undefined4 param_2)

{
  undefined4 in_EAX;
  uint uVar1;
  ulonglong uVar2;
  int iVar3;
  longlong lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar10;
  float fVar13;
  undefined1 in_XMM0 [16];
  undefined1 auVar8 [16];
  float fVar11;
  float fVar12;
  int iVar14;
  float fVar15;
  undefined1 auVar9 [16];
  float fVar16;
  float fVar20;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  float fVar27;
  double dVar26;
  float fVar28;
  double dVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  float fVar35;
  float fVar36;
  undefined1 auVar37 [16];
  uint uVar38;
  uint uVar39;
  undefined1 aauStack_d8 [2] [16];
  uint uStack_b8;
  uint uStack_b4;
  undefined1 aauStack_38 [3] [16];
  
  auVar8 = in_XMM0 & _DAT_180d9fd20;
  fVar16 = auVar8._0_4_;
  fVar20 = auVar8._4_4_;
  fVar11 = auVar8._12_4_;
  fVar6 = auVar8._8_4_;
  fVar5 = (fVar16 + (float)DAT_180d9fd10) * 0.31830987;
  fVar10 = (fVar20 + DAT_180d9fd10._4_4_) * 0.31830987;
  fVar35 = (float)DAT_180d9fce0;
  uVar38 = -(uint)(0x461c4000 < (int)fVar16);
  uVar39 = -(uint)(0x461c4000 < (int)fVar20);
  auVar8._0_8_ = CONCAT44(uVar39,uVar38);
  auVar8._8_4_ = -(uint)(0x461c4000 < (int)fVar6);
  auVar8._12_4_ = -(uint)(0x461c4000 < (int)fVar11);
  fVar36 = (float)DAT_180d9fcd0;
  uVar1 = movmskps(in_EAX,auVar8);
  fVar27 = DAT_180d9fce0._4_4_;
  fVar28 = DAT_180d9fcd0._4_4_;
  if (uVar1 == 0) {
    fVar6 = (float)(int)fVar5 - 0.5;
    fVar11 = (float)(int)fVar10 - 0.5;
    fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
    fVar27 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
    fVar16 = fVar35 - fVar6 * 5.126688e-12;
    fVar20 = fVar27 - fVar11 * 5.126688e-12;
    fVar35 = fVar35 * fVar35;
    fVar27 = fVar27 * fVar27;
    return CONCAT44((((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + 0.008333075) * fVar27 +
                    -0.16666658) * fVar27 * fVar20 + fVar20,
                    (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + 0.008333075) * fVar35 +
                    -0.16666658) * fVar35 * fVar16 + fVar16) ^
           CONCAT44((int)fVar10 << 0x1f,(int)fVar5 << 0x1f);
  }
  aauStack_d8[0] = in_XMM0 & _DAT_180d9fd20;
  fVar7 = aauStack_d8[0]._0_4_;
  auVar37._0_4_ = -(uint)(0x4e800000 < (int)fVar7);
  fVar12 = aauStack_d8[0]._4_4_;
  auVar37._4_4_ = -(uint)(0x4e800000 < (int)fVar12);
  auVar37._8_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._8_4_);
  auVar37._12_4_ = -(uint)(0x4e800000 < aauStack_d8[0]._12_4_);
  iVar3 = movmskps(param_2,auVar37);
  if (iVar3 == 0) {
    if (uVar1 == 0xf) {
      auVar32._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar32._4_4_ = 0;
      auVar32._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar32._12_4_ = 0;
      auVar32 = auVar32 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar32,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar32,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar33._0_8_ = auVar32._0_8_ << 0x3e;
      auVar33._8_8_ = auVar32._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar8 = _DAT_180d9fd30 & auVar33 ^ _DAT_180d9fd30;
      fVar16 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar20 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar5 = fVar16 * fVar16;
      fVar10 = fVar20 * fVar20;
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar10 * 2.608e-06 + -0.000198107) * fVar10 + 0.008333075) * fVar10 +
                    -0.16666658) * fVar10 * fVar20 + fVar20,
                    (((fVar5 * 2.608e-06 + -0.000198107) * fVar5 + 0.008333075) * fVar5 +
                    -0.16666658) * fVar5 * fVar16 + fVar16) ^ CONCAT44(auVar8._12_4_,auVar8._4_4_);
    }
    else {
      fVar6 = (float)(int)fVar5 - 0.5;
      fVar11 = (float)(int)fVar10 - 0.5;
      fVar35 = ((fVar16 - fVar35 * fVar6) - fVar36 * fVar6) - fVar6 * 1.5099067e-07;
      fVar36 = ((fVar20 - fVar27 * fVar11) - fVar28 * fVar11) - fVar11 * 1.5099067e-07;
      uStack_b8 = SUB164(auVar8 ^ _DAT_180d9fdc0,0);
      uStack_b4 = SUB164(auVar8 ^ _DAT_180d9fdc0,4);
      auVar30._0_4_ = (uint)((double)fVar7 * 0.6366197723675814);
      auVar30._4_4_ = 0;
      auVar30._8_4_ = (int)((double)fVar12 * 0.6366197723675814);
      auVar30._12_4_ = 0;
      auVar30 = auVar30 | _DAT_180d9fda0;
      dVar26 = SUB168(_DAT_180d9fd90 | auVar30,0) - 6755399441055744.0;
      dVar29 = SUB168(_DAT_180d9fd90 | auVar30,8) - 6755399441055744.0;
      dVar17 = (double)fVar7 - dVar26 * 1.5707950592041016;
      dVar21 = (double)fVar12 - dVar29 * 1.5707950592041016;
      dVar18 = dVar17 - dVar26 * 1.267590960196685e-06;
      dVar22 = dVar21 - dVar29 * 1.267590960196685e-06;
      dVar19 = dVar18 - dVar26 * -1.6513982022126061e-13;
      dVar23 = dVar22 - dVar29 * -1.6513982022126061e-13;
      auVar31._0_8_ = auVar30._0_8_ << 0x3e;
      auVar31._8_8_ = auVar30._8_8_ << 0x3e;
      dVar17 = ((dVar17 - dVar18) - dVar26 * 1.267590960196685e-06) +
               ((dVar18 - dVar19) - dVar26 * -1.6513982022126061e-13);
      dVar18 = ((dVar21 - dVar22) - dVar29 * 1.267590960196685e-06) +
               ((dVar22 - dVar23) - dVar29 * -1.6513982022126061e-13);
      dVar21 = dVar19 + dVar17;
      dVar24 = dVar23 + dVar18;
      dVar22 = dVar21 - dVar26 * -1.3350302175814904e-19;
      dVar25 = dVar24 - dVar29 * -1.3350302175814904e-19;
      auVar37 = _DAT_180d9fd30 & auVar31 ^ _DAT_180d9fd30;
      fVar27 = (float)(((dVar17 + (dVar19 - dVar21) +
                        ((dVar21 - dVar22) - dVar26 * -1.3350302175814904e-19)) -
                       dVar26 * 1.6446256936324258e-26) + dVar22);
      fVar28 = (float)(((dVar18 + (dVar23 - dVar24) +
                        ((dVar24 - dVar25) - dVar29 * -1.3350302175814904e-19)) -
                       dVar29 * 1.6446256936324258e-26) + dVar25);
      fVar16 = (float)((uint)fVar27 & uVar38 | (uint)(fVar35 - fVar6 * 5.126688e-12) & uStack_b8);
      fVar20 = (float)((uint)fVar28 & uVar39 | (uint)(fVar36 - fVar11 * 5.126688e-12) & uStack_b4);
      fVar6 = (float)((uint)(fVar27 * fVar27) & uVar38 | (uint)(fVar35 * fVar35) & uStack_b8);
      fVar11 = (float)((uint)(fVar28 * fVar28) & uVar39 | (uint)(fVar36 * fVar36) & uStack_b4);
      aauStack_38[0]._0_8_ =
           CONCAT44((((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + 0.008333075) * fVar11 +
                    -0.16666658) * fVar11 * fVar20 + fVar20,
                    (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + 0.008333075) * fVar6 +
                    -0.16666658) * fVar6 * fVar16 + fVar16) ^
           (CONCAT44(auVar37._12_4_,auVar37._4_4_) & auVar8._0_8_ |
           CONCAT44((int)fVar10 << 0x1f & uStack_b4,(int)fVar5 << 0x1f & uStack_b8));
    }
  }
  else {
    if (uVar1 != 0xf) {
      iVar3 = (int)((fVar6 + DAT_180d9fd10._8_4_) * 0.31830987);
      iVar14 = (int)((fVar11 + DAT_180d9fd10._12_4_) * 0.31830987);
      fVar7 = (float)(int)fVar5 - 0.5;
      fVar12 = (float)(int)fVar10 - 0.5;
      fVar13 = (float)iVar3 - 0.5;
      fVar15 = (float)iVar14 - 0.5;
      auVar34._0_4_ = (int)fVar5 << 0x1f;
      auVar34._4_4_ = (int)fVar10 << 0x1f;
      auVar34._8_4_ = iVar3 << 0x1f;
      auVar34._12_4_ = iVar14 << 0x1f;
      fVar35 = ((fVar16 - fVar35 * fVar7) - fVar36 * fVar7) - fVar7 * 1.5099067e-07;
      fVar27 = ((fVar20 - fVar27 * fVar12) - fVar28 * fVar12) - fVar12 * 1.5099067e-07;
      fVar6 = ((fVar6 - DAT_180d9fce0._8_4_ * fVar13) - DAT_180d9fcd0._8_4_ * fVar13) -
              fVar13 * 1.5099067e-07;
      fVar11 = ((fVar11 - DAT_180d9fce0._12_4_ * fVar15) - DAT_180d9fcd0._12_4_ * fVar15) -
               fVar15 * 1.5099067e-07;
      fVar16 = fVar35 - fVar7 * 5.126688e-12;
      fVar5 = fVar27 - fVar12 * 5.126688e-12;
      fVar20 = fVar6 - fVar13 * 5.126688e-12;
      fVar10 = fVar11 - fVar15 * 5.126688e-12;
      fVar35 = fVar35 * fVar35;
      fVar27 = fVar27 * fVar27;
      fVar6 = fVar6 * fVar6;
      fVar11 = fVar11 * fVar11;
      auVar9._0_4_ = (((fVar35 * 2.608e-06 + -0.000198107) * fVar35 + (float)DAT_180d9fc80) * fVar35
                     + -0.16666658) * fVar35 * fVar16 + fVar16;
      auVar9._4_4_ = (((fVar27 * 2.608e-06 + -0.000198107) * fVar27 + DAT_180d9fc80._4_4_) * fVar27
                     + -0.16666658) * fVar27 * fVar5 + fVar5;
      auVar9._8_4_ = (((fVar6 * 2.608e-06 + -0.000198107) * fVar6 + DAT_180d9fc80._8_4_) * fVar6 +
                     -0.16666658) * fVar6 * fVar20 + fVar20;
      auVar9._12_4_ =
           (((fVar11 * 2.608e-06 + -0.000198107) * fVar11 + DAT_180d9fc80._12_4_) * fVar11 +
           -0.16666658) * fVar11 * fVar10 + fVar10;
      aauStack_38[0] = auVar9 ^ auVar34;
    }
    lVar4 = 0;
    do {
      if ((uVar1 & 1) != 0) {
        fVar16 = *(float *)(aauStack_d8[0] + lVar4 * 4);
        dVar17 = (double)fVar16;
        if (((uint)fVar16 & 0x7f800000) == 0x7f800000) {
          fVar16 = fVar16 - fVar16;
        }
        else {
          uVar2 = (ulonglong)(((uint)ABS(fVar16) >> 0x17) - 0x8e & 0xfff8);
          dVar18 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) & 0xffffffffff000000) *
                   dVar17;
          dVar21 = (double)(*(ulonglong *)(&UNK_180d9fb10 + uVar2 * 2) << 0x28) * dVar17;
          dVar19 = dVar18 + dVar21;
          iVar3 = SUB84(dVar19 + 6755399441055744.0,0);
          uVar38 = iVar3 * 2;
          uVar39 = (iVar3 << 0x19) >> 0x1f;
          dVar17 = dVar17 * *(double *)(&UNK_180d9fb18 + uVar2 * 2) + dVar21 + (dVar18 - dVar19) +
                   (dVar19 - ((dVar19 + 6755399441055744.0) - 6755399441055744.0));
          uVar2 = (ulonglong)((uVar38 + uVar39 ^ uVar39) & 0xfe);
          fVar16 = (float)((double)((ulonglong)
                                    ((3320.092545592124 - dVar17 * dVar17) *
                                    *(double *)(&UNK_180d9f708 + uVar2 * 8)) ^
                                   (ulonglong)(((uVar38 & 0x180) + 0x80 & 0x100) << 0x17) << 0x20) +
                          *(double *)(&UNK_180d9f700 + uVar2 * 8) * dVar17 *
                          (double)((ulonglong)(9960.277636776373 - dVar17 * dVar17) ^
                                  (ulonglong)((uVar38 & 0x100) << 0x17) << 0x20));
        }
        *(float *)(aauStack_38[0] + lVar4 * 4) = fVar16;
      }
      lVar4 = lVar4 + 1;
      uVar1 = (int)uVar1 >> 1;
    } while (lVar4 < 4);
  }
  return aauStack_38[0]._0_8_;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




