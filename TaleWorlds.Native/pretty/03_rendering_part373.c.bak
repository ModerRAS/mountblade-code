#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part373.c - 8 个函数

// 函数: void FUN_18046f0d0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18046f0d0(uint64_t *param_1,ulonglong param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  longlong lVar8;
  longlong *plVar9;
  longlong lVar10;
  longlong *plVar11;
  longlong *plVar12;
  longlong *plVar13;
  
  plVar13 = (longlong *)*param_1;
  if ((ulonglong)((param_1[2] - (longlong)plVar13) / 0x48) < param_2) {
    plVar9 = (longlong *)0x0;
    if (param_2 != 0) {
      plVar9 = (longlong *)
               FUN_18062b420(system_memory_pool_ptr,param_2 * 0x48,*(int8_t *)(param_1 + 3),param_4,
                             0xfffffffffffffffe);
      plVar13 = (longlong *)*param_1;
    }
    plVar12 = (longlong *)param_1[1];
    plVar11 = plVar9;
    if (plVar13 != plVar12) {
      lVar10 = (longlong)plVar13 - (longlong)plVar9;
      lVar8 = 8 - (longlong)plVar13;
      do {
        *plVar11 = *plVar13;
        *plVar13 = 0;
        puVar1 = (uint64_t *)((longlong)plVar9 + lVar8 + (longlong)plVar13);
        uVar7 = ((uint64_t *)((longlong)puVar1 + lVar10))[1];
        *puVar1 = *(uint64_t *)((longlong)puVar1 + lVar10);
        puVar1[1] = uVar7;
        puVar2 = (uint64_t *)((longlong)puVar1 + lVar10 + 0x10);
        uVar7 = puVar2[1];
        puVar1[2] = *puVar2;
        puVar1[3] = uVar7;
        puVar3 = (int32_t *)((longlong)puVar1 + lVar10 + 0x20);
        uVar4 = puVar3[1];
        uVar5 = puVar3[2];
        uVar6 = puVar3[3];
        *(int32_t *)(puVar1 + 4) = *puVar3;
        *(int32_t *)((longlong)puVar1 + 0x24) = uVar4;
        *(int32_t *)(puVar1 + 5) = uVar5;
        *(int32_t *)((longlong)puVar1 + 0x2c) = uVar6;
        puVar2 = (uint64_t *)((longlong)puVar1 + lVar10 + 0x30);
        uVar7 = puVar2[1];
        puVar1[6] = *puVar2;
        puVar1[7] = uVar7;
        plVar13 = plVar13 + 9;
        plVar11 = plVar11 + 9;
      } while (plVar13 != plVar12);
      plVar12 = (longlong *)param_1[1];
      plVar13 = (longlong *)*param_1;
    }
    if (plVar13 != plVar12) {
      do {
        if ((longlong *)*plVar13 != (longlong *)0x0) {
          (**(code **)(*(longlong *)*plVar13 + 0x38))();
        }
        plVar13 = plVar13 + 9;
      } while (plVar13 != plVar12);
      plVar13 = (longlong *)*param_1;
    }
    if (plVar13 != (longlong *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar13);
    }
    *param_1 = plVar9;
    param_1[1] = plVar11;
    param_1[2] = plVar9 + param_2 * 9;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046f220(longlong *param_1,longlong *param_2,uint64_t param_3)
void FUN_18046f220(longlong *param_1,longlong *param_2,uint64_t param_3)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t *puVar3;
  longlong *plVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  longlong lVar9;
  uint64_t *puVar10;
  longlong lVar11;
  uint64_t *puVar12;
  longlong *plVar13;
  longlong *plVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  longlong lVar17;
  longlong *plStackX_8;
  longlong **pplStackX_10;
  
  puVar16 = (uint64_t *)param_1[1];
  puVar15 = (uint64_t *)*param_1;
  lVar17 = ((longlong)puVar16 - (longlong)puVar15) / 0x48;
  puVar10 = (uint64_t *)0x0;
  if (lVar17 == 0) {
    lVar17 = 1;
  }
  else {
    lVar17 = lVar17 * 2;
    if (lVar17 == 0) goto LAB_18046f2ad;
  }
  puVar10 = (uint64_t *)
            FUN_18062b420(system_memory_pool_ptr,lVar17 * 0x48,(char)param_1[3],puVar15,0xfffffffffffffffe);
  puVar16 = (uint64_t *)param_1[1];
  puVar15 = (uint64_t *)*param_1;
LAB_18046f2ad:
  puVar12 = puVar10;
  if (puVar15 != puVar16) {
    lVar11 = (longlong)puVar15 - (longlong)puVar10;
    lVar9 = 8 - (longlong)puVar15;
    do {
      *puVar12 = *puVar15;
      *puVar15 = 0;
      puVar1 = (uint64_t *)((longlong)puVar10 + lVar9 + (longlong)puVar15);
      uVar8 = ((uint64_t *)((longlong)puVar1 + lVar11))[1];
      *puVar1 = *(uint64_t *)((longlong)puVar1 + lVar11);
      puVar1[1] = uVar8;
      puVar2 = (uint64_t *)((longlong)puVar1 + lVar11 + 0x10);
      uVar8 = puVar2[1];
      puVar1[2] = *puVar2;
      puVar1[3] = uVar8;
      puVar3 = (int32_t *)((longlong)puVar1 + lVar11 + 0x20);
      uVar5 = puVar3[1];
      uVar6 = puVar3[2];
      uVar7 = puVar3[3];
      *(int32_t *)(puVar1 + 4) = *puVar3;
      *(int32_t *)((longlong)puVar1 + 0x24) = uVar5;
      *(int32_t *)(puVar1 + 5) = uVar6;
      *(int32_t *)((longlong)puVar1 + 0x2c) = uVar7;
      puVar2 = (uint64_t *)((longlong)puVar1 + lVar11 + 0x30);
      uVar8 = puVar2[1];
      puVar1[6] = *puVar2;
      puVar1[7] = uVar8;
      puVar15 = puVar15 + 9;
      puVar12 = puVar12 + 9;
    } while (puVar15 != puVar16);
  }
  pplStackX_10 = &plStackX_8;
  plStackX_8 = (longlong *)*param_2;
  if (plStackX_8 != (longlong *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_18046dc20(puVar12,&plStackX_8,param_3);
  plVar4 = (longlong *)param_1[1];
  plVar14 = (longlong *)*param_1;
  plVar13 = plVar14;
  plStackX_8 = plVar14;
  if (plVar14 != plVar4) {
    do {
      if ((longlong *)*plVar13 != (longlong *)0x0) {
        plStackX_8 = plVar13;
        (**(code **)(*(longlong *)*plVar13 + 0x38))();
      }
      plVar13 = plVar13 + 9;
    } while (plVar13 != plVar4);
    plVar14 = (longlong *)*param_1;
    plStackX_8 = plVar13;
  }
  if (plVar14 == (longlong *)0x0) {
    *param_1 = (longlong)puVar10;
    param_1[1] = (longlong)(puVar12 + 9);
    param_1[2] = (longlong)(puVar10 + lVar17 * 9);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar14);
}





// 函数: void FUN_18046f3b0(int param_1,int param_2,uint64_t *param_3)
void FUN_18046f3b0(int param_1,int param_2,uint64_t *param_3)

{
  if (param_1 < param_2) {
    do {
      FUN_18046e780(*param_3,param_1,*(int32_t *)param_3[1]);
      param_1 = param_1 + 1;
    } while (param_1 < param_2);
  }
  return;
}





// 函数: void FUN_18046f440(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_18046f440(longlong *param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  ulonglong uVar2;
  int32_t uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  longlong *plStackX_8;
  uint64_t uVar7;
  
  uVar7 = 0xfffffffffffffffe;
  if (*(code **)(*param_1 + 0x90) == (code *)&unknown_var_1408_ptr) {
    uVar3 = (int32_t)param_1[0x11];
  }
  else {
    uVar3 = (**(code **)(*param_1 + 0x90))();
  }
  FUN_18046f0d0(param_2,uVar3);
  iVar5 = 0;
  lVar4 = param_1[0xd];
  if (param_1[0xe] - lVar4 >> 3 != 0) {
    lVar6 = 0;
    do {
      lVar1 = (longlong)*(longlong **)(lVar6 + lVar4) + 0xc;
      plStackX_8 = (longlong *)**(longlong **)(lVar6 + lVar4);
      uVar2 = *(ulonglong *)(param_2 + 8);
      if (uVar2 < *(ulonglong *)(param_2 + 0x10)) {
        if (plStackX_8 != (longlong *)0x0) {
          (**(code **)(*plStackX_8 + 0x28))();
        }
        FUN_18046dc20(uVar2,&plStackX_8,lVar1);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + 0x48;
      }
      else {
        FUN_18046f220(param_2,&plStackX_8,lVar1,param_4,uVar7);
      }
      iVar5 = iVar5 + 1;
      lVar6 = lVar6 + 8;
      lVar4 = param_1[0xd];
    } while ((ulonglong)(longlong)iVar5 < (ulonglong)(param_1[0xe] - lVar4 >> 3));
  }
  return;
}



uint64_t * FUN_18046f7d0(uint64_t *param_1,ulonglong param_2)

{
  *param_1 = &unknown_var_2672_ptr;
  if (param_1[0x43] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x43] = 0;
  if (param_1[0x44] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x44] = 0;
  FUN_180490f80(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x2c8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18046f860(longlong param_1,longlong param_2,uint param_3)
void FUN_18046f860(longlong param_1,longlong param_2,uint param_3)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  int8_t auStack_148 [32];
  uint64_t uStack_128;
  longlong *plStack_120;
  uint64_t uStack_118;
  uint uStack_110;
  uint auStack_108 [2];
  longlong lStack_100;
  uint *puStack_f8;
  longlong lStack_e8;
  uint *puStack_e0;
  void *puStack_d8;
  code *pcStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  uint64_t uStack_a8;
  longlong *plStack_a0;
  int8_t auStack_98 [64];
  longlong lStack_58;
  float fStack_50;
  ulonglong uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_148;
  auStack_108[0] = param_3;
  if (*(char *)(param_1 + 0x60) != '\0') {
    FUN_180492fe0();
  }
  *(longlong *)(param_1 + 0x1c0 + (ulonglong)auStack_108[0] * 8) = param_2;
  fVar12 = *(float *)(param_1 + 600);
  lStack_e8 = render_system_control_config;
  puStack_e0 = (uint *)uRam0000000180bfbb98;
  puStack_d8 = (void *)render_system_control_config;
  pcStack_d0 = (code *)uRam0000000180bfbba8;
  uStack_c8 = render_system_control_config;
  uStack_c4 = uRam0000000180bfbbb4;
  uStack_c0 = uRam0000000180bfbbb8;
  uStack_bc = uRam0000000180bfbbbc;
  uStack_b8 = render_system_control_config;
  uStack_b4 = uRam0000000180bfbbc4;
  uStack_b0 = uRam0000000180bfbbc8;
  uStack_ac = uRam0000000180bfbbcc;
  func_0x000180490630(*(uint64_t *)(param_1 + 0x1d0 + (ulonglong)auStack_108[0] * 8),
                      *(uint64_t *)(param_1 + 0x1e0 + (ulonglong)auStack_108[0] * 8),auStack_98);
  func_0x000180490630(auStack_98,&lStack_e8,auStack_98);
  lStack_58 = param_2;
  fVar11 = (float)tanf(*(float *)(param_2 + 0x11c) * 0.5);
  atanf(fVar11 / *(float *)(param_2 + 0x120));
  fVar11 = (float)tanf();
  fVar11 = fVar12 * fVar12 * fVar11;
  uVar7 = 0;
  fStack_50 = fVar11;
  if (*(char *)(param_1 + 0x270) == '\0') {
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        iVar8 = (int)uVar6;
        lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar6 * 8);
        uVar6 = (ulonglong)auStack_108[0];
        if (*(char *)(uVar6 + 0x90 + lVar9) != '\0') {
          func_0x000180490630(*(uint64_t *)(lVar9 + 0x50),auStack_98,
                              *(uint64_t *)(lVar9 + 0x58 + uVar6 * 8));
          lVar2 = *(longlong *)(lVar9 + 0x58 + uVar6 * 8);
          fVar12 = *(float *)(lVar2 + 0x1c) * *(float *)(lVar9 + 0x9c) +
                   *(float *)(lVar2 + 0xc) * *(float *)(lVar9 + 0x98) +
                   *(float *)(lVar2 + 0x2c) * *(float *)(lVar9 + 0xa0) + *(float *)(lVar2 + 0x3c);
          *(float *)(lVar9 + 200) = fVar12;
          if (fVar12 <= 1.0) {
            *(int8_t *)(uVar6 + 0x92 + lVar9) = 0;
          }
          else {
            *(bool *)(uVar6 + 0x92 + lVar9) =
                 *(float *)(lVar9 + 0xa8) <= fVar12 * fVar11 &&
                 fVar12 * fVar11 != *(float *)(lVar9 + 0xa8);
          }
        }
        uVar6 = (ulonglong)(iVar8 + 1U);
      } while (iVar8 + 1U < *(uint *)(param_1 + 0x88));
    }
  }
  else {
    uVar6 = uVar7;
    if (*(int *)(param_1 + 0x88) != 0) {
      do {
        FUN_180490b00(*(uint64_t *)(*(longlong *)(param_1 + 0x68) + uVar6 * 8),auStack_98,
                      auStack_108[0]);
        uVar5 = (int)uVar6 + 1;
        uVar6 = (ulonglong)uVar5;
      } while (uVar5 < *(uint *)(param_1 + 0x88));
    }
  }
  uVar10 = (ulonglong)auStack_108[0];
  *(int32_t *)(param_1 + 0x250 + uVar10 * 4) = 0;
  *(int32_t *)(param_1 + 0x248 + uVar10 * 4) = 0;
  *(int32_t *)(param_1 + 0x240 + uVar10 * 4) = 0;
  uVar6 = uVar7;
  if (*(int *)(param_1 + 0x88) != 0) {
    do {
      iVar8 = (int)uVar6;
      lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x68) + uVar6 * 8);
      if ((*(char *)(uVar10 + 0x90 + lVar9) != '\0') && (*(char *)(uVar10 + 0x92 + lVar9) == '\0'))
      {
        uVar5 = *(uint *)(param_1 + 0x240 + uVar10 * 4);
        *(uint *)(param_1 + 0x240 + uVar10 * 4) = uVar5 + 1;
        *(int *)(*(longlong *)(param_1 + 0x230 + uVar10 * 8) + (ulonglong)uVar5 * 4) = iVar8;
        piVar1 = (int *)(param_1 + 0x248 + uVar10 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(longlong *)(param_1 + 0x98) + (ulonglong)(iVar8 + 1U) * 4) -
                            *(int *)(*(longlong *)(param_1 + 0x98) + uVar6 * 4));
        piVar1 = (int *)(param_1 + 0x250 + uVar10 * 4);
        *piVar1 = *piVar1 + (*(int *)(*(longlong *)(param_1 + 0xa0) + (ulonglong)(iVar8 + 1U) * 4) -
                            *(int *)(*(longlong *)(param_1 + 0xa0) + uVar6 * 4));
      }
      uVar6 = (ulonglong)(iVar8 + 1U);
    } while (iVar8 + 1U < *(uint *)(param_1 + 0x88));
  }
  FUN_18046fca0(param_1,auStack_108[0]);
  uVar5 = auStack_108[0];
  uVar10 = (ulonglong)auStack_108[0];
  uVar6 = uVar7;
  do {
    uVar4 = (int)uVar6 * 8;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)uVar4 * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 1) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 2) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 3) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 4) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 5) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 6) * 4) = 0;
    *(int32_t *)(*(longlong *)(param_1 + 0x220 + uVar10 * 8) + (ulonglong)(uVar4 + 7) * 4) = 0;
    uVar4 = (int)uVar6 + 1;
    uVar6 = (ulonglong)uVar4;
  } while (uVar4 < 4);
  if (*(int *)(param_1 + 0x240 + uVar10 * 4) != 0) {
    do {
      uStack_118 = *(uint64_t *)(param_1 + 0x220 + uVar10 * 8);
      plStack_120 = *(longlong **)(param_1 + 0x218 + uVar10 * 8);
      uStack_110 = uVar5;
      uStack_128 = CONCAT44(uStack_128._4_4_,
                            *(int *)(*(longlong *)
                                      (*(longlong *)(param_1 + 0x68) +
                                      (ulonglong)
                                      *(uint *)(*(longlong *)(param_1 + 0x230 + uVar10 * 8) +
                                               uVar7 * 4) * 8) + 0x6c) + -1);
      FUN_180490bd0();
      uVar4 = (int)uVar7 + 1;
      uVar7 = (ulonglong)uVar4;
    } while (uVar4 < *(uint *)(param_1 + 0x240 + uVar10 * 4));
  }
  plStack_a0 = &lStack_e8;
  puStack_f8 = auStack_108;
  puStack_d8 = &unknown_var_5600_ptr;
  pcStack_d0 = FUN_1804705f0;
  lStack_100._0_4_ = (int32_t)param_1;
  plStack_120 = &lStack_e8;
  uStack_128 = 0xffffffffffffffff;
  uVar3 = (int32_t)lStack_100;
  lStack_100 = param_1;
  lStack_e8 = param_1;
  puStack_e0 = puStack_f8;
  FUN_18015b810(uVar3,0,0x20,1);
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_148);
}





// 函数: void FUN_18046fca0(longlong param_1,uint param_2)
void FUN_18046fca0(longlong param_1,uint param_2)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
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
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  uint uVar30;
  ulonglong uVar31;
  int8_t auVar32 [16];
  int8_t auVar33 [16];
  
  uVar28 = (ulonglong)param_2;
  uVar29 = 0;
  if (*(int *)(param_1 + 0x240 + uVar28 * 4) != 0) {
    do {
      lVar6 = *(longlong *)
               (*(longlong *)(param_1 + 0x68) +
               (ulonglong)*(uint *)(*(longlong *)(param_1 + 0x230 + uVar28 * 8) + uVar29 * 4) * 8);
      iVar5 = *(int *)(lVar6 + 0x68);
      if (((*(char *)(uVar28 + 0x90 + lVar6) != '\0') && (*(char *)(uVar28 + 0x92 + lVar6) == '\0'))
         && (uVar25 = 0, *(int *)(lVar6 + 8) != 0)) {
        do {
          pfVar7 = *(float **)(lVar6 + 0x58 + uVar28 * 8);
          lVar26 = (ulonglong)uVar25 * 0x38 + *(longlong *)(lVar6 + 0xb0);
          fVar9 = *pfVar7;
          fVar10 = pfVar7[1];
          fVar11 = pfVar7[2];
          fVar12 = pfVar7[3];
          fVar13 = pfVar7[4];
          fVar14 = pfVar7[5];
          fVar15 = pfVar7[6];
          fVar16 = pfVar7[7];
          fVar17 = pfVar7[8];
          fVar18 = pfVar7[9];
          fVar19 = pfVar7[10];
          fVar20 = pfVar7[0xb];
          fVar21 = pfVar7[0xc];
          fVar22 = pfVar7[0xd];
          fVar23 = pfVar7[0xe];
          fVar24 = pfVar7[0xf];
          lVar27 = 0;
          lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x28);
          uVar31 = 0;
          do {
            uVar30 = (int)uVar31 + 1;
            fVar2 = *(float *)(lVar8 + uVar31 * 0x10);
            fVar3 = *(float *)(lVar8 + 4 + uVar31 * 0x10);
            fVar4 = *(float *)(lVar8 + 8 + uVar31 * 0x10);
            auVar32._0_4_ = fVar2 * fVar9 + fVar21 + fVar3 * fVar13 + fVar4 * fVar17;
            auVar32._4_4_ = fVar2 * fVar10 + fVar22 + fVar3 * fVar14 + fVar4 * fVar18;
            auVar32._8_4_ = fVar2 * fVar11 + fVar23 + fVar3 * fVar15 + fVar4 * fVar19;
            auVar32._12_4_ = fVar2 * fVar12 + fVar24 + fVar3 * fVar16 + fVar4 * fVar20;
            auVar33._4_4_ = auVar32._12_4_;
            auVar33._0_4_ = auVar32._12_4_;
            auVar33._8_4_ = auVar32._12_4_;
            auVar33._12_4_ = auVar32._12_4_;
            auVar33 = divps(auVar32,auVar33);
            puVar1 = (uint *)(lVar27 + *(longlong *)(lVar26 + uVar28 * 8 + 0x28));
            *puVar1 = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._0_4_;
            puVar1[1] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._4_4_;
            puVar1[2] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._8_4_;
            puVar1[3] = -(uint)(auVar32._8_4_ <= auVar32._12_4_) & auVar33._12_4_;
            lVar27 = lVar27 + 0x10;
            uVar31 = (ulonglong)uVar30;
          } while (uVar30 <= iVar5 - 1U);
          uVar25 = uVar25 + 1;
        } while (uVar25 < *(uint *)(lVar6 + 8));
      }
      uVar25 = (int)uVar29 + 1;
      uVar29 = (ulonglong)uVar25;
    } while (uVar25 < *(uint *)(param_1 + 0x240 + uVar28 * 4));
  }
  return;
}





// 函数: void FUN_18046fcc4(void)
void FUN_18046fcc4(void)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  float *pfVar7;
  longlong lVar8;
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
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  longlong unaff_RSI;
  ulonglong unaff_RDI;
  uint uVar28;
  ulonglong uVar29;
  longlong unaff_R14;
  int8_t auVar30 [16];
  int8_t auVar31 [16];
  
  do {
    lVar6 = *(longlong *)
             (*(longlong *)(unaff_R14 + 0x68) +
             (ulonglong)*(uint *)(*(longlong *)(unaff_R14 + 0x230 + unaff_RSI * 8) + unaff_RDI * 4)
             * 8);
    iVar5 = *(int *)(lVar6 + 0x68);
    if (((*(char *)(unaff_RSI + 0x90 + lVar6) != '\0') &&
        (*(char *)(unaff_RSI + 0x92 + lVar6) == '\0')) && (uVar25 = 0, *(int *)(lVar6 + 8) != 0)) {
      do {
        pfVar7 = *(float **)(lVar6 + 0x58 + unaff_RSI * 8);
        lVar26 = (ulonglong)uVar25 * 0x38 + *(longlong *)(lVar6 + 0xb0);
        fVar9 = *pfVar7;
        fVar10 = pfVar7[1];
        fVar11 = pfVar7[2];
        fVar12 = pfVar7[3];
        fVar13 = pfVar7[4];
        fVar14 = pfVar7[5];
        fVar15 = pfVar7[6];
        fVar16 = pfVar7[7];
        fVar17 = pfVar7[8];
        fVar18 = pfVar7[9];
        fVar19 = pfVar7[10];
        fVar20 = pfVar7[0xb];
        fVar21 = pfVar7[0xc];
        fVar22 = pfVar7[0xd];
        fVar23 = pfVar7[0xe];
        fVar24 = pfVar7[0xf];
        lVar27 = 0;
        lVar8 = *(longlong *)(*(longlong *)(lVar26 + 0x10) + 0x28);
        uVar29 = 0;
        do {
          uVar28 = (int)uVar29 + 1;
          fVar2 = *(float *)(lVar8 + uVar29 * 0x10);
          fVar3 = *(float *)(lVar8 + 4 + uVar29 * 0x10);
          fVar4 = *(float *)(lVar8 + 8 + uVar29 * 0x10);
          auVar30._0_4_ = fVar2 * fVar9 + fVar21 + fVar3 * fVar13 + fVar4 * fVar17;
          auVar30._4_4_ = fVar2 * fVar10 + fVar22 + fVar3 * fVar14 + fVar4 * fVar18;
          auVar30._8_4_ = fVar2 * fVar11 + fVar23 + fVar3 * fVar15 + fVar4 * fVar19;
          auVar30._12_4_ = fVar2 * fVar12 + fVar24 + fVar3 * fVar16 + fVar4 * fVar20;
          auVar31._4_4_ = auVar30._12_4_;
          auVar31._0_4_ = auVar30._12_4_;
          auVar31._8_4_ = auVar30._12_4_;
          auVar31._12_4_ = auVar30._12_4_;
          auVar31 = divps(auVar30,auVar31);
          puVar1 = (uint *)(lVar27 + *(longlong *)(lVar26 + unaff_RSI * 8 + 0x28));
          *puVar1 = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._0_4_;
          puVar1[1] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._4_4_;
          puVar1[2] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._8_4_;
          puVar1[3] = -(uint)(auVar30._8_4_ <= auVar30._12_4_) & auVar31._12_4_;
          lVar27 = lVar27 + 0x10;
          uVar29 = (ulonglong)uVar28;
        } while (uVar28 <= iVar5 - 1U);
        uVar25 = uVar25 + 1;
      } while (uVar25 < *(uint *)(lVar6 + 8));
    }
    uVar25 = (int)unaff_RDI + 1;
    unaff_RDI = (ulonglong)uVar25;
  } while (uVar25 < *(uint *)(unaff_R14 + 0x240 + unaff_RSI * 4));
  return;
}





// 函数: void FUN_18046fde9(void)
void FUN_18046fde9(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



