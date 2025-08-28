#include "TaleWorlds.Native.Split.h"

// 99_part_05_part021.c - 9 个函数

// 函数: void FUN_1802e5f00(uint64_t param_1,longlong *param_2)
void FUN_1802e5f00(uint64_t param_1,longlong *param_2)

{
  int32_t *puVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  void *puVar5;
  uint64_t uVar6;
  int32_t uVar7;
  int32_t uVar8;
  int32_t uVar9;
  int32_t uVar10;
  int32_t uVar11;
  int32_t uVar12;
  longlong *plVar13;
  uint uVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int16_t uVar18;
  ulonglong uVar19;
  longlong lVar20;
  int iVar21;
  int32_t *puVar22;
  longlong lVar23;
  short sVar24;
  int iVar25;
  int32_t uVar26;
  int8_t auStack_3e8 [32];
  code *pcStack_3c8;
  int8_t *puStack_3c0;
  int8_t auStack_3b8 [8];
  void **ppuStack_3b0;
  int32_t uStack_3a8;
  longlong *plStack_3a0;
  uint64_t uStack_398;
  longlong lStack_388;
  int16_t uStack_380;
  int32_t uStack_37e;
  int32_t uStack_37a;
  int16_t uStack_376;
  int32_t uStack_374;
  int32_t uStack_370;
  uint64_t uStack_36c;
  uint64_t uStack_364;
  uint64_t uStack_35c;
  int32_t uStack_354;
  int32_t uStack_350;
  int32_t uStack_34c;
  int32_t uStack_348;
  uint uStack_344;
  int32_t uStack_340;
  uint uStack_33c;
  int32_t uStack_338;
  uint uStack_334;
  void *puStack_328;
  uint64_t uStack_320;
  uint64_t uStack_318;
  int32_t uStack_310;
  longlong *plStack_308;
  void *puStack_300;
  longlong lStack_2f8;
  int32_t uStack_2f0;
  ulonglong uStack_2e8;
  int32_t uStack_2e0;
  int32_t uStack_2dc;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  longlong *plStack_2d0;
  int32_t uStack_2bc;
  int32_t uStack_2b0;
  uint64_t uStack_2a8;
  uint64_t uStack_2a0;
  uint uStack_298;
  int16_t uStack_294;
  int16_t uStack_292;
  void *puStack_288;
  uint *puStack_280;
  uint uStack_278;
  int32_t uStack_274;
  uint auStack_270 [2];
  uint64_t uStack_268;
  int8_t auStack_260 [32];
  int32_t uStack_240;
  int32_t uStack_23c;
  int32_t uStack_238;
  int32_t uStack_234;
  longlong *plStack_230;
  ulonglong auStack_228 [16];
  int8_t auStack_1a8 [336];
  ulonglong uStack_58;
  
  uStack_2a8 = 0xfffffffffffffffe;
  uStack_58 = _DAT_180bf00a8 ^ (ulonglong)auStack_3e8;
  iVar25 = 0;
  iVar21 = 0;
  if ((int)param_2[4] != 0) {
    uStack_298 = 0;
    uStack_294 = 0;
    uStack_2a0 = 0x10000010001;
    pcStack_3c8 = FUN_180045af0;
    FUN_1808fc838(auStack_228,8,0x10,&SUB_18005d5f0);
    plStack_3a0 = (longlong *)0x0;
    puStack_3c0 = auStack_1a8;
    FUN_180206da0(puStack_3c0,*(uint64_t *)(*param_2 + 0x18),&uStack_2a0);
    pcStack_3c8 = (code *)&uStack_2a0;
    FUN_1802072b0(pcStack_3c8,*(uint64_t *)(param_2[1] + 0x18),&plStack_3a0);
    plVar13 = plStack_3a0;
    lVar16 = *(longlong *)(auStack_228[*(int *)(_DAT_180c86938 + 0x8c)] + 0x10);
    lVar3 = *(longlong *)(auStack_228[*(int *)(_DAT_180c86938 + 0x80)] + 0x10);
    uVar19 = auStack_228[*(int *)(_DAT_180c86938 + 0x78)];
    ppuStack_3b0 = *(void ***)(uVar19 + 0x10);
    lVar4 = plStack_3a0[2];
    iVar2 = (int)param_2[4];
    lVar15 = (longlong)iVar2;
    if (0 < iVar2) {
      lVar23 = 0;
      uStack_348 = 0;
      uStack_340 = 0x3f800000;
      uStack_338 = 0;
      uStack_398 = (void **)0x3f800000;
      puVar22 = (int32_t *)(*(longlong *)(param_2[3] + 0x10) + 0x20);
      iVar21 = iVar2 * 6;
      do {
        uVar26 = puVar22[-7];
        uStack_3a8 = puVar22[-6];
        uVar7 = puVar22[-4];
        uVar8 = puVar22[-3];
        uStack_2bc = puVar22[-2];
        uVar9 = *puVar22;
        uVar10 = puVar22[1];
        uStack_2b0 = puVar22[2];
        uVar11 = puVar22[4];
        uVar12 = puVar22[5];
        uStack_298 = puVar22[6];
        uStack_344 = puVar22[8];
        uStack_334 = puVar22[9];
        uStack_398 = (void **)CONCAT44(uStack_334,(int32_t)uStack_398);
        lVar20 = (longlong)iVar25;
        puVar1 = (int32_t *)(lVar16 + lVar20 * 0xc);
        *puVar1 = puVar22[-8];
        puVar1[1] = uVar26;
        *(int32_t *)(lVar16 + 8 + lVar20 * 0xc) = uStack_3a8;
        *(uint *)((longlong)ppuStack_3b0 + lVar20 * 4) =
             (int)((float)puVar22[10] * 255.0) << 0x18 | 0xffffff;
        *(ulonglong *)(lVar3 + lVar20 * 8) = (ulonglong)uStack_344 << 0x20;
        puVar1 = (int32_t *)(lVar16 + 0xc + lVar20 * 0xc);
        *puVar1 = uVar7;
        puVar1[1] = uVar8;
        *(int32_t *)(lVar16 + 0x14 + lVar20 * 0xc) = uStack_2bc;
        *(uint *)((longlong)ppuStack_3b0 + lVar20 * 4 + 4) =
             (int)((float)puVar22[10] * 255.0) << 0x18 | 0xffffff;
        *(ulonglong *)(lVar3 + 8 + lVar20 * 8) = CONCAT44(uStack_344,0x3f800000);
        puVar1 = (int32_t *)(lVar16 + 0x18 + lVar20 * 0xc);
        *puVar1 = uVar9;
        puVar1[1] = uVar10;
        *(int32_t *)(lVar16 + 0x20 + lVar20 * 0xc) = uStack_2b0;
        *(uint *)((longlong)ppuStack_3b0 + lVar20 * 4 + 8) =
             (int)((float)puVar22[0xb] * 255.0) << 0x18 | 0xffffff;
        *(ulonglong *)(lVar3 + 0x10 + lVar20 * 8) = (ulonglong)uStack_334 << 0x20;
        puVar1 = (int32_t *)(lVar16 + 0x24 + lVar20 * 0xc);
        *puVar1 = uVar11;
        puVar1[1] = uVar12;
        *(uint *)(lVar16 + 0x2c + lVar20 * 0xc) = uStack_298;
        *(uint *)((longlong)ppuStack_3b0 + lVar20 * 4 + 0xc) =
             (int)((float)puVar22[0xb] * 255.0) << 0x18 | 0xffffff;
        *(void ***)(lVar3 + 0x18 + lVar20 * 8) = uStack_398;
        sVar24 = (short)iVar25;
        *(short *)(lVar4 + lVar23 * 2) = sVar24;
        uVar19 = (ulonglong)(iVar25 + 2U);
        uVar18 = (int16_t)(iVar25 + 2U);
        *(int16_t *)(lVar4 + 2 + lVar23 * 2) = uVar18;
        *(short *)(lVar4 + 4 + lVar23 * 2) = sVar24 + 1;
        *(short *)(lVar4 + 6 + lVar23 * 2) = sVar24 + 1;
        *(int16_t *)(lVar4 + 8 + lVar23 * 2) = uVar18;
        *(short *)(lVar4 + 10 + lVar23 * 2) = sVar24 + 3;
        iVar25 = iVar25 + 4;
        puVar22 = puVar22 + 0x14;
        lVar23 = lVar23 + 6;
        lVar15 = lVar15 + -1;
        uStack_33c = uStack_344;
      } while (lVar15 != 0);
    }
    uVar26 = FUN_180207110(uVar19,*(uint64_t *)(*param_2 + 0x18),auStack_228);
    FUN_180207400(uVar26,*(uint64_t *)(param_2[1] + 0x18),&plStack_3a0);
    if (0 < iVar21) {
      uStack_37e = 0x106;
      uStack_37a = 0xffff00;
      uStack_36c = 0;
      uStack_364 = 0;
      uStack_35c = 0;
      uStack_354 = 0;
      uStack_350 = 1;
      uStack_374 = 0x4000301;
      uStack_376 = 0;
      uStack_380 = 0x100;
      uStack_34c = 1;
      lVar16 = FUN_180244ff0(param_1);
      uStack_36c = CONCAT44(uStack_36c._4_4_,*(int32_t *)(lVar16 + 0x324));
      lVar16 = FUN_180245280(param_1);
      uStack_370 = *(int32_t *)(lVar16 + 0x324);
      auStack_3b8[0] = 0;
      puStack_288 = &unknown_var_672_ptr;
      puStack_280 = auStack_270;
      auStack_270[0] = auStack_270[0] & 0xffffff00;
      uStack_278 = 0xe;
      strcpy_s(auStack_270,0x20,&unknown_var_232_ptr);
      plVar17 = (longlong *)FUN_1800b31f0(_DAT_180c86930,&ppuStack_3b0,&puStack_288,1);
      puVar5 = (void *)*plVar17;
      if (ppuStack_3b0 != (void **)0x0) {
        (**(code **)(*ppuStack_3b0 + 0x38))();
      }
      puStack_288 = &unknown_var_720_ptr;
      uVar14 = func_0x00018024c420(param_1);
      uStack_298 = uVar14 & *(uint *)(puVar5 + 0x1610) & 0xdf7fffff;
      uStack_2a0 = 0;
      uStack_294 = 0;
      plStack_308 = (longlong *)0x0;
      uStack_398 = &puStack_300;
      puStack_300 = &unknown_var_3456_ptr;
      uStack_2e8 = 0;
      lStack_2f8 = 0;
      uStack_2f0 = 0;
      plStack_2d0 = (longlong *)0x0;
      uStack_320 = 0;
      uStack_310 = 0;
      uStack_2e0 = 0;
      uStack_2dc = 0;
      uStack_2d8 = 0;
      uStack_2d4 = 0;
      uVar6 = *(uint64_t *)(puVar5 + 0x15b8);
      ppuStack_3b0 = &puStack_288;
      uStack_318._4_4_ = (int32_t)(CONCAT26(uStack_292,(uint6)uStack_298) >> 0x20);
      puStack_280 = (uint *)0x0;
      uStack_274 = uStack_318._4_4_;
      auStack_270[0] = 0;
      uStack_268 = 0;
      puStack_328 = puVar5;
      uStack_318 = CONCAT26(uStack_292,(uint6)uStack_298);
      puStack_288 = puVar5;
      uStack_278 = uStack_298;
      FUN_180627ae0(auStack_260,&puStack_300);
      uStack_240 = uStack_2e0;
      uStack_23c = uStack_2dc;
      uStack_238 = uStack_2d8;
      uStack_234 = uStack_2d4;
      plStack_230 = plStack_2d0;
      if (plStack_2d0 != (longlong *)0x0) {
        (**(code **)(*plStack_2d0 + 0x28))();
      }
      lStack_388 = FUN_180299eb0(uVar6,0,&puStack_288,auStack_3b8);
      if (lStack_388 != 0) {
        FUN_18029cdd0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),&lStack_388);
        pcStack_3c8 = (code *)CONCAT44(pcStack_3c8._4_4_,0xffffffff);
        FUN_18029d150(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),0,param_2[2],0x10);
        lVar16 = *(longlong *)(_DAT_180c86938 + 0x1cd8);
        lVar3 = *(longlong *)(*param_2 + 0x18);
        if (*(longlong *)(lVar16 + 0x8240) != lVar3) {
          *(longlong *)(lVar16 + 0x8240) = lVar3;
          puStack_3c0 = (int8_t *)(lVar3 + 0x220);
          pcStack_3c8 = (code *)(lVar3 + 0x260);
          (**(code **)(**(longlong **)(lVar16 + 0x8400) + 0x90))
                    (*(longlong **)(lVar16 + 0x8400),0,*(int32_t *)(lVar3 + 0x188),lVar3 + 0x1a0)
          ;
        }
        func_0x00018029dab0(*(uint64_t *)(_DAT_180c86938 + 0x1cd8),
                            *(uint64_t *)(param_2[1] + 0x18));
        if (system_data_2846 == '\0') {
          plVar17 = *(longlong **)(*(longlong *)(_DAT_180c86938 + 0x1cd8) + 0x8400);
          (**(code **)(*plVar17 + 0x60))
                    (plVar17,(iVar21 / 3 + (iVar21 >> 0x1f) +
                             (int)(((longlong)iVar21 / 3 + ((longlong)iVar21 >> 0x3f) & 0xffffffffU)
                                  >> 0x1f)) * 3,0,0);
        }
      }
      if (plStack_2d0 != (longlong *)0x0) {
        (**(code **)(*plStack_2d0 + 0x38))();
      }
      ppuStack_3b0 = &puStack_300;
      puStack_300 = &unknown_var_3456_ptr;
      if (lStack_2f8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lStack_2f8 = 0;
      uStack_2e8 = uStack_2e8 & 0xffffffff00000000;
      puStack_300 = &unknown_var_720_ptr;
      if (plStack_308 != (longlong *)0x0) {
        (**(code **)(*plStack_308 + 0x38))();
      }
    }
    (**(code **)(*plVar13 + 0x38))(plVar13);
    FUN_1808fc8a8(auStack_228,8,0x10,FUN_180045af0);
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_3e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e65f0(uint64_t param_1,longlong *param_2)
void FUN_1802e65f0(uint64_t param_1,longlong *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  int8_t auStack_b8 [32];
  int32_t uStack_98;
  uint64_t uStack_90;
  longlong *plStack_88;
  void *puStack_78;
  int8_t *puStack_70;
  int32_t uStack_68;
  int8_t auStack_60 [72];
  ulonglong uStack_18;
  
  uVar1 = _DAT_180c8a998;
  uStack_90 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_b8;
  uStack_98 = 0;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  auStack_60[0] = 0;
  uStack_68 = 0x1c;
  plStack_88 = param_2;
  strcpy_s(auStack_60,0x40,&system_data_fc60);
  FUN_1802037e0();
  puStack_78 = &unknown_var_720_ptr;
  uVar2 = FUN_18062b1e0(_DAT_180c8ed18,0xa0000,0x10,0x18);
  FUN_1802e68a0(uVar1,param_2);
  *(uint64_t *)(*param_2 + 0x10) = uVar2;
  *(int32_t *)(*param_2 + 0x18) = 0xa0000;
  *(int32_t *)(*param_2 + 0x1c) = 0xa0000;
  *(int8_t *)(*param_2 + 0x20) = 0;
  uStack_98 = 1;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e6720(longlong *param_1,ulonglong param_2)
void FUN_1802e6720(longlong *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  lVar4 = param_1[1];
  if (param_2 <= (ulonglong)((param_1[2] - lVar4) / 0xc)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(lVar4,0,param_2 * 0xc);
    }
    param_1[1] = lVar4;
    return;
  }
  lVar3 = *param_1;
  lVar1 = (lVar4 - lVar3) / 0xc;
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < lVar1 + param_2) {
    uVar2 = lVar1 + param_2;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0xc,(char)param_1[3]);
    lVar3 = *param_1;
    lVar4 = param_1[1];
  }
  if (lVar3 != lVar4) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,lVar3,lVar4 - lVar3);
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,param_2 * 0xc);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = lVar1;
  param_1[2] = lVar1 + uVar2 * 0xc;
  param_1[1] = lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802e676a(void)
void FUN_1802e676a(void)

{
  longlong in_RAX;
  longlong lVar1;
  longlong unaff_RBX;
  ulonglong uVar2;
  longlong *unaff_RDI;
  longlong in_R9;
  longlong unaff_R14;
  
  lVar1 = SUB168(SEXT816(in_RAX) * SEXT816(unaff_R14 - in_R9),8);
  lVar1 = (lVar1 >> 1) - (lVar1 >> 0x3f);
  uVar2 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar2 = 1;
  }
  if (uVar2 < (ulonglong)(lVar1 + unaff_RBX)) {
    uVar2 = lVar1 + unaff_RBX;
  }
  if (uVar2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = FUN_18062b420(_DAT_180c8ed18,uVar2 * 0xc,(char)unaff_RDI[3]);
    in_R9 = *unaff_RDI;
    unaff_R14 = unaff_RDI[1];
  }
  if (in_R9 != unaff_R14) {
                    // WARNING: Subroutine does not return
    memmove(lVar1,in_R9,unaff_R14 - in_R9);
  }
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset(lVar1,0,unaff_RBX * 0xc);
  }
  if (*unaff_RDI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RDI = lVar1;
  unaff_RDI[2] = lVar1 + uVar2 * 0xc;
  unaff_RDI[1] = lVar1;
  return;
}






// 函数: void FUN_1802e685d(void)
void FUN_1802e685d(void)

{
  longlong unaff_RBX;
  longlong unaff_RDI;
  uint64_t unaff_R14;
  
  if (unaff_RBX != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_RDI + 8) = unaff_R14;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1802e68a0(longlong param_1,uint64_t *param_2)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  int32_t uVar4;
  uint64_t uVar5;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  iVar2 = _Mtx_lock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar1 = *(longlong *)(param_1 + 200);
  if (*(longlong *)(param_1 + 0xc0) == lVar1) {
    plVar3 = (longlong *)FUN_18062b1e0(_DAT_180c8ed18,0x28,8,0x20,uVar4,uVar5);
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_272_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  else {
    plVar3 = *(longlong **)(lVar1 + -8);
    *(longlong *)(param_1 + 200) = lVar1 + -8;
    plVar3[1] = -0x5a5a5a5a5a5a5a5b;
    plVar3[2] = -0x5a5a5a5a5a5a5a5b;
    plVar3[3] = -0x5a5a5a5a5a5a5a5b;
    plVar3[4] = -0x5a5a5a5a5a5a5a5b;
    *plVar3 = (longlong)&unknown_var_3552_ptr;
    *plVar3 = (longlong)&unknown_var_3696_ptr;
    *(int32_t *)(plVar3 + 1) = 0;
    *plVar3 = (longlong)&unknown_var_6544_ptr;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(int8_t *)(plVar3 + 4) = 0;
    *plVar3 = (longlong)&unknown_var_272_ptr;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    *param_2 = plVar3;
  }
  iVar2 = _Mtx_unlock(param_1 + 0x50);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return param_2;
}



uint64_t *
FUN_1802e6a20(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_272_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1802e6a80(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &unknown_var_720_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 9;
  strcpy_s(param_2[1],0x80,&unknown_var_368_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_1802e6b00(uint64_t *param_1,int8_t param_2)

{
  uint64_t *puVar1;
  longlong *plVar2;
  longlong *plVar3;
  
  *param_1 = &unknown_var_3552_ptr;
  *param_1 = &unknown_var_3696_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_424_ptr;
  plVar3 = param_1 + 2;
  *plVar3 = 0;
  *(int32_t *)(param_1 + 3) = 0;
  plVar2 = (longlong *)*plVar3;
  *plVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  *(int32_t *)(param_1 + 0x19) = 3;
  param_1[0x1a] = &unknown_var_720_ptr;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1a] = &unknown_var_3456_ptr;
  param_1[0x1d] = 0;
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1c) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 3;
  FUN_1802f5e40();
  param_1[0x2e] = 0;
  puVar1 = param_1 + 0x32;
  param_1[0x35] = 0;
  *(int32_t *)(param_1 + 0x37) = 0xd;
  *puVar1 = puVar1;
  param_1[0x33] = puVar1;
  param_1[0x34] = 0;
  *(int8_t *)(param_1 + 0x35) = 0;
  param_1[0x36] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3b) = 3;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(int32_t *)(param_1 + 0x3f) = 3;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  *(int32_t *)(param_1 + 0x43) = 3;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  *(int32_t *)(param_1 + 0x47) = 3;
  param_1[0x48] = &unknown_var_720_ptr;
  param_1[0x49] = 0;
  *(int32_t *)(param_1 + 0x4a) = 0;
  param_1[0x48] = &unknown_var_3456_ptr;
  param_1[0x4b] = 0;
  param_1[0x49] = 0;
  *(int32_t *)(param_1 + 0x4a) = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  plVar3 = param_1 + 0x4e;
  *plVar3 = 0;
  *(int8_t *)(param_1 + 0x4f) = 0;
  plVar2 = (longlong *)*plVar3;
  *plVar3 = 0;
  if (plVar2 != (longlong *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  param_1[0x51] = &unknown_var_720_ptr;
  param_1[0x52] = 0;
  *(int32_t *)(param_1 + 0x53) = 0;
  param_1[0x51] = &unknown_var_3456_ptr;
  param_1[0x54] = 0;
  param_1[0x52] = 0;
  *(int32_t *)(param_1 + 0x53) = 0;
  *(int8_t *)((longlong)param_1 + 0x2e5) = param_2;
  param_1[5] = 0;
  *(int32_t *)((longlong)param_1 + 0x2ac) = 0;
  *(int32_t *)((longlong)param_1 + 0x2c4) = 0;
  *(int32_t *)(param_1 + 0x59) = 0xffffffff;
  *(int16_t *)((longlong)param_1 + 0x2e6) = 0xffff;
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xfb | 0xb;
  param_1[4] = 0;
  param_1[0x2f] = param_1;
  *(int32_t *)(param_1 + 0x57) = 0xffffffff;
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0xcf;
  param_1[0x5a] = 0;
  *(uint64_t *)((longlong)param_1 + 700) = 0;
  *(int32_t *)(param_1 + 0x5c) = 0x1010101;
  *(int32_t *)((longlong)param_1 + 0x2cc) = 0xbf800000;
  param_1[0x2d] = 0;
  FUN_1802f2700(param_1,1);
  param_1[6] = 0x3f800000;
  param_1[7] = 0;
  param_1[8] = 0x3f80000000000000;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x3f800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x3f80000000000000;
  param_1[0xe] = 0x3f800000;
  param_1[0xf] = 0;
  param_1[0x10] = 0x3f80000000000000;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  *(int32_t *)((longlong)param_1 + 0x94) = 0;
  *(int32_t *)(param_1 + 0x13) = 0x3f800000;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  *(int32_t *)((longlong)param_1 + 0xa4) = 0;
  *(int32_t *)(param_1 + 0x15) = 0;
  *(int32_t *)((longlong)param_1 + 0xac) = 0x3f800000;
  plVar3 = (longlong *)param_1[0x4c];
  param_1[0x4c] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  param_1[0x50] = 0;
  *(byte *)((longlong)param_1 + 0x2e9) = *(byte *)((longlong)param_1 + 0x2e9) | 2;
  *(int32_t *)(param_1 + 0x55) = 0xffffffff;
  plVar3 = (longlong *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (plVar3 != (longlong *)0x0) {
    (**(code **)(*plVar3 + 0x38))();
  }
  *(int8_t *)(param_1 + 0x5b) = 0;
  *(int32_t *)(param_1 + 0x56) = 0;
  *(int32_t *)((longlong)param_1 + 0x2b4) = 0xffffffff;
  *(byte *)((longlong)param_1 + 0x2e9) = *(byte *)((longlong)param_1 + 0x2e9) & 0xfe;
  *(int8_t *)((longlong)param_1 + 0x2e4) = 0;
  param_1[0x30] = 0x3f8000003f800000;
  param_1[0x31] = 0x3f8000003f800000;
  *(byte *)(param_1 + 0x5d) = *(byte *)(param_1 + 0x5d) & 0x3f;
  return param_1;
}



uint64_t FUN_1802e6ee0(uint64_t param_1,ulonglong param_2)

{
  FUN_1802e6ff0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x2f0);
  }
  return param_1;
}






// 函数: void FUN_1802e6f20(longlong *param_1)
void FUN_1802e6f20(longlong *param_1)

{
  param_1[1] = (longlong)&unknown_var_3456_ptr;
  if (param_1[2] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[2] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[1] = (longlong)&unknown_var_720_ptr;
  if ((longlong *)*param_1 != (longlong *)0x0) {
    (**(code **)(*(longlong *)*param_1 + 0x38))();
  }
  return;
}






// 函数: void FUN_1802e6f90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e6f90(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f4b20(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1802e6fc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802e6fc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_1802f4b20(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}






// 函数: void FUN_1802e6ff0(uint64_t *param_1)
void FUN_1802e6ff0(uint64_t *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  *param_1 = &unknown_var_424_ptr;
  if (param_1[0x2d] != 0) {
    FUN_1802eb9a0(param_1[0x2d],param_1,0,0,0,0x14,0xfffffffffffffffe);
  }
  if (param_1[4] != 0) {
    func_0x0001801aa710(param_1[4],param_1);
  }
  plVar1 = (longlong *)param_1[0x4d];
  param_1[0x4d] = 0;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  FUN_1802e8db0(param_1);
  if ((param_1[4] != 0) && (param_1[0x4e] != 0)) {
    FUN_1802e8910(param_1);
    *(int8_t *)(param_1 + 0x4f) = 0;
  }
  FUN_1802e9fa0(param_1,1,1);
  FUN_1802f0510(param_1,1);
  lVar2 = param_1[0x50];
  if (lVar2 != 0) {
    FUN_1804315b0(lVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar2);
  }
  param_1[0x50] = 0;
  plVar1 = (longlong *)param_1[0x5a];
  if (plVar1 != (longlong *)0x0) {
    plVar1[0xc] = 0;
    if (plVar1[0xd] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (plVar1[8] != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    FUN_1803dc030();
    if (*plVar1 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(plVar1);
  }
  param_1[0x5a] = 0;
  param_1[0x51] = &unknown_var_3456_ptr;
  if (param_1[0x52] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x52] = 0;
  *(int32_t *)(param_1 + 0x54) = 0;
  param_1[0x51] = &unknown_var_720_ptr;
  if ((longlong *)param_1[0x4e] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4e] + 0x38))();
  }
  if ((longlong *)param_1[0x4d] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4d] + 0x38))();
  }
  if ((longlong *)param_1[0x4c] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[0x4c] + 0x38))();
  }
  param_1[0x48] = &unknown_var_3456_ptr;
  if (param_1[0x49] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x49] = 0;
  *(int32_t *)(param_1 + 0x4b) = 0;
  param_1[0x48] = &unknown_var_720_ptr;
  if (param_1[0x44] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  FUN_180057830();
  FUN_180057830();
  FUN_180057830();
  FUN_1802f4b20(param_1 + 0x32,param_1[0x34]);
  FUN_180226750(param_1 + 0x2e);
  FUN_1802e6f20(param_1 + 0x22);
  FUN_180057830();
  param_1[0x1a] = &unknown_var_3456_ptr;
  if (param_1[0x1b] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x1b] = 0;
  *(int32_t *)(param_1 + 0x1d) = 0;
  param_1[0x1a] = &unknown_var_720_ptr;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if ((longlong *)param_1[2] != (longlong *)0x0) {
    (**(code **)(*(longlong *)param_1[2] + 0x38))();
  }
  *param_1 = &unknown_var_3696_ptr;
  *param_1 = &unknown_var_3552_ptr;
  return;
}



int FUN_1802e73b0(longlong param_1,uint64_t param_2,longlong param_3)

{
  longlong lVar1;
  uint uVar2;
  float fVar3;
  
  if ((*(longlong *)(param_1 + 0xf8) - *(longlong *)(param_1 + 0xf0) >> 3 == 0) &&
     ((lVar1 = *(longlong *)(param_1 + 0x260), lVar1 == 0 ||
      ((*(longlong *)(lVar1 + 0x148) - *(longlong *)(lVar1 + 0x140) >> 3 == 0 &&
       (*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3 == 0)))))) {
    return (int)*(float *)(param_1 + 0x2c0);
  }
  if ((param_3 == 0) || ((*(uint *)(param_3 + 4) & 0x200000) == 0)) {
    uVar2 = *(uint *)(param_1 + 0x2ac) >> 4 & 0xf;
    if (uVar2 == 0) {
      FUN_1801c0d90(param_1);
      FUN_1801c0d90(param_1);
      if (2.0 < *(float *)(*(longlong *)(param_1 + 0x28) + 0xb0)) {
        FUN_1801c0d90(param_1);
      }
      fVar3 = (float)func_0x0001802e7320();
      fVar3 = fVar3 + *(float *)(param_1 + 700);
    }
    else {
      fVar3 = (float)(int)(uVar2 - 1);
    }
  }
  else {
    fVar3 = (float)*(int *)(param_3 + 0x124e0);
  }
  *(float *)(param_1 + 0x2c0) = fVar3;
  uVar2 = (uint)*(byte *)(param_1 + 0x2e6);
  if ((int)fVar3 < (int)(uint)*(byte *)(param_1 + 0x2e6)) {
    uVar2 = (int)fVar3;
  }
  *(float *)(param_1 + 0x2c0) = (float)(int)uVar2;
  return (int)(float)(int)uVar2;
}



int FUN_1802e7460(void)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBX;
  float fVar3;
  
  FUN_1801c0d90();
  FUN_1801c0d90();
  if (2.0 < *(float *)(*(longlong *)(unaff_RBX + 0x28) + 0xb0)) {
    FUN_1801c0d90();
  }
  fVar3 = (float)func_0x0001802e7320();
  fVar3 = fVar3 + *(float *)(unaff_RBX + 700);
  uVar1 = (uint)fVar3;
  *(float *)(unaff_RBX + 0x2c0) = fVar3;
  uVar2 = (uint)*(byte *)(unaff_RBX + 0x2e6);
  if ((int)uVar1 < (int)(uint)*(byte *)(unaff_RBX + 0x2e6)) {
    uVar2 = uVar1;
  }
  *(float *)(unaff_RBX + 0x2c0) = (float)(int)uVar2;
  return (int)(float)(int)uVar2;
}



int FUN_1802e7468(void)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBX;
  float fVar3;
  
  FUN_1801c0d90();
  FUN_1801c0d90();
  if (2.0 < *(float *)(*(longlong *)(unaff_RBX + 0x28) + 0xb0)) {
    FUN_1801c0d90();
  }
  fVar3 = (float)func_0x0001802e7320();
  fVar3 = fVar3 + *(float *)(unaff_RBX + 700);
  uVar1 = (uint)fVar3;
  *(float *)(unaff_RBX + 0x2c0) = fVar3;
  uVar2 = (uint)*(byte *)(unaff_RBX + 0x2e6);
  if ((int)uVar1 < (int)(uint)*(byte *)(unaff_RBX + 0x2e6)) {
    uVar2 = uVar1;
  }
  *(float *)(unaff_RBX + 0x2c0) = (float)(int)uVar2;
  return (int)(float)(int)uVar2;
}



int FUN_1802e74e2(void)

{
  uint uVar1;
  uint uVar2;
  longlong unaff_RBX;
  float fVar3;
  
  FUN_1801c0d90();
  fVar3 = (float)func_0x0001802e7320();
  fVar3 = fVar3 + *(float *)(unaff_RBX + 700);
  uVar1 = (uint)fVar3;
  *(float *)(unaff_RBX + 0x2c0) = fVar3;
  uVar2 = (uint)*(byte *)(unaff_RBX + 0x2e6);
  if ((int)uVar1 < (int)(uint)*(byte *)(unaff_RBX + 0x2e6)) {
    uVar2 = uVar1;
  }
  *(float *)(unaff_RBX + 0x2c0) = (float)(int)uVar2;
  return (int)(float)(int)uVar2;
}



int FUN_1802e7516(float param_1)

{
  uint uVar1;
  longlong unaff_RBX;
  
  *(float *)(unaff_RBX + 0x2c0) = param_1;
  uVar1 = (uint)*(byte *)(unaff_RBX + 0x2e6);
  if ((int)param_1 < (int)(uint)*(byte *)(unaff_RBX + 0x2e6)) {
    uVar1 = (int)param_1;
  }
  *(float *)(unaff_RBX + 0x2c0) = (float)(int)uVar1;
  return (int)(float)(int)uVar1;
}






