#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part164.c - 8 个函数

// 函数: void FUN_18014cb90(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4)
void FUN_18014cb90(uint64_t param_1,uint64_t param_2,uint64_t *param_3,int8_t param_4)

{
  float fVar1;
  ulonglong uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  longlong lVar11;
  uint64_t uVar12;
  bool bVar13;
  bool bVar14;
  uint64_t uStackX_8;
  int32_t uStack_58;
  int32_t uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  int32_t uStack_20;
  
  lVar9 = _DAT_180c8a9b8;
  uVar12 = *param_3;
  uVar7 = param_3[1];
  uStack_20 = CONCAT31(uStack_20._1_3_,param_4);
  uStack_38._0_4_ = (int32_t)param_2;
  uStack_38._4_4_ = (int32_t)((ulonglong)param_2 >> 0x20);
  uStack_30._0_4_ = (float)uVar12;
  uStack_30._4_4_ = (float)((ulonglong)uVar12 >> 0x20);
  uStack_28._0_4_ = (float)uVar7;
  uStack_28._4_4_ = (int32_t)((ulonglong)uVar7 >> 0x20);
  uStack_58 = (int32_t)uStack_38;
  uStack_54 = uStack_38._4_4_;
  fStack_50 = (float)uStack_30;
  fStack_4c = uStack_30._4_4_;
  fStack_48 = (float)uStack_28;
  uStack_44 = uStack_28._4_4_;
  uStack_40 = uStack_20;
  uStackX_8 = param_1;
  uStack_38 = param_2;
  uStack_30 = uVar12;
  uStack_28 = uVar7;
  lVar10 = FUN_18014f980(_DAT_180c8a9b8,&uStackX_8,&uStack_58);
  if ((char)uStackX_8 == '\0') {
    return;
  }
  lVar11 = FUN_18062b420(_DAT_180c8ed18,0x40,*(int8_t *)(lVar9 + 0x28));
  uVar3 = *(int32_t *)param_3;
  uVar4 = *(int32_t *)((longlong)param_3 + 4);
  uVar5 = *(int32_t *)(param_3 + 1);
  uVar6 = *(int32_t *)((longlong)param_3 + 0xc);
  *(uint64_t *)(lVar11 + 0x20) = param_2;
  *(int32_t *)(lVar11 + 0x28) = uVar3;
  *(int32_t *)(lVar11 + 0x2c) = uVar4;
  *(int32_t *)(lVar11 + 0x30) = uVar5;
  *(int32_t *)(lVar11 + 0x34) = uVar6;
  *(int8_t *)(lVar11 + 0x38) = param_4;
  if (lVar10 != lVar9) {
    uVar2 = *(ulonglong *)(lVar10 + 0x20);
    uVar8 = CONCAT44(uStack_54,uStack_58);
    if (uVar2 <= uVar8) {
      if (uVar8 <= uVar2) {
        fVar1 = *(float *)(lVar10 + 0x28);
        if (fStack_50 == fVar1) {
          fVar1 = *(float *)(lVar10 + 0x2c);
          if (fStack_4c != fVar1) {
            bVar14 = fVar1 == fStack_4c;
            bVar13 = fVar1 < fStack_4c;
            goto LAB_18014cc76;
          }
          bVar14 = fStack_48 < *(float *)(lVar10 + 0x30);
        }
        else {
          bVar14 = fVar1 == fStack_50;
          bVar13 = fVar1 < fStack_50;
LAB_18014cc76:
          bVar14 = !bVar13 && !bVar14;
        }
        if (bVar14) goto LAB_18014ccbd;
      }
      if (uVar8 <= uVar2) {
        fVar1 = *(float *)(lVar10 + 0x28);
        if (fVar1 == fStack_50) {
          fVar1 = *(float *)(lVar10 + 0x2c);
          if (fVar1 == fStack_4c) {
            bVar14 = fStack_48 == *(float *)(lVar10 + 0x30);
            bVar13 = fStack_48 < *(float *)(lVar10 + 0x30);
          }
          else {
            bVar14 = fStack_4c == fVar1;
            bVar13 = fStack_4c < fVar1;
          }
        }
        else {
          bVar14 = fStack_50 == fVar1;
          bVar13 = fStack_50 < fVar1;
        }
        if ((bVar13 || bVar14) && ((byte)uStack_40 < *(byte *)(lVar10 + 0x38))) goto LAB_18014ccbd;
      }
      uVar12 = 1;
      goto LAB_18014ccc0;
    }
  }
LAB_18014ccbd:
  uVar12 = 0;
LAB_18014ccc0:
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar11,lVar10,lVar9,uVar12);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ccf0(void)
void FUN_18014ccf0(void)

{
  uint64_t uVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong *plVar6;
  uint64_t in_R9;
  int aiStackX_10 [2];
  int **ppiStackX_18;
  uint64_t uVar7;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int *apiStack_98 [2];
  code *pcStack_88;
  void *puStack_80;
  int *apiStack_78 [2];
  void *puStack_68;
  void *puStack_60;
  int *apiStack_58 [2];
  void *puStack_48;
  void *puStack_40;
  
  lVar3 = _DAT_180c8a9b8;
  uVar7 = 0xfffffffffffffffe;
  aiStackX_10[0] = 0;
  lVar5 = *(longlong *)(_DAT_180c8a9b8 + 8);
  iVar2 = 0;
  while (lVar5 != lVar3) {
    iVar4 = iVar2 + 1;
    uVar1 = *(uint64_t *)(lVar5 + 0x20);
    pcStack_88 = (code *)&UNK_18014f1e0;
    puStack_80 = &UNK_18014f1d0;
    apiStack_98[0] = aiStackX_10;
    FUN_18014a370(uVar1,0,apiStack_98,in_R9,uVar7);
    if (pcStack_88 != (code *)0x0) {
      (*pcStack_88)(apiStack_98,0,0);
    }
    if (*(char *)(lVar5 + 0x38) == '\x01') {
      iVar4 = iVar2 + 3;
      uStack_a8 = *(int32_t *)(lVar5 + 0x28);
      uStack_a4 = *(int32_t *)(lVar5 + 0x2c);
      uStack_a0 = *(int32_t *)(lVar5 + 0x30);
      uStack_9c = *(int32_t *)(lVar5 + 0x34);
      ppiStackX_18 = apiStack_78;
      puStack_68 = &UNK_18014f190;
      puStack_60 = &UNK_18014f180;
      apiStack_78[0] = aiStackX_10;
      FUN_180149ed0(uVar1,apiStack_78,&uStack_a8);
      ppiStackX_18 = apiStack_58;
      puStack_48 = &UNK_18014f190;
      puStack_40 = &UNK_18014f180;
      apiStack_58[0] = aiStackX_10;
      FUN_180149bd0(uVar1);
    }
    lVar5 = func_0x00018066bd70(lVar5);
    iVar2 = iVar4;
  }
  while (uVar7 = _DAT_180c82868, iVar2 != aiStackX_10[0]) {
    lVar5 = FUN_18005e890(_DAT_180c82868);
    if (lVar5 != 0) {
      plVar6 = (longlong *)FUN_18005e890(uVar7);
      (**(code **)(*plVar6 + 0x20))(plVar6,0);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014ce90(longlong *param_1,longlong param_2)
void FUN_18014ce90(longlong *param_1,longlong param_2)

{
  longlong *plVar1;
  uint *puVar2;
  int32_t *puVar3;
  uint64_t *puVar4;
  int32_t uVar5;
  uint uVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint64_t uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong uVar13;
  int8_t auStack_308 [32];
  int8_t uStack_2e8;
  int32_t uStack_2d8;
  int32_t uStack_2d4;
  int32_t uStack_2d0;
  int32_t uStack_2cc;
  int32_t uStack_2c8;
  int32_t uStack_2c4;
  uint64_t uStack_2c0;
  uint64_t uStack_2b8;
  void *puStack_2b0;
  ulonglong uStack_2a8;
  int32_t uStack_2a0;
  ulonglong uStack_298;
  void **ppuStack_288;
  longlong *plStack_280;
  longlong lStack_278;
  uint64_t uStack_270;
  ulonglong uStack_48;
  
  uStack_270 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_308;
  uVar13 = (ulonglong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  plVar1 = param_1 + 4;
  uVar8 = param_1[5] - *plVar1 >> 5;
  plStack_280 = param_1;
  if (uVar8 < uVar13) {
    FUN_18014eb80(plVar1,uVar13 - uVar8);
  }
  else {
    param_1[5] = uVar13 * 0x20 + *plVar1;
  }
  lVar11 = 0;
  if (0 < (longlong)uVar13) {
    do {
      ppuStack_288 = (void **)&uStack_2c0;
      uStack_2c0 = &UNK_180a3c3e0;
      uStack_2a8 = 0;
      uStack_2b8 = 0;
      puStack_2b0 = (void *)((ulonglong)puStack_2b0 & 0xffffffff00000000);
      lVar12 = *(longlong *)(param_2 + 8);
      uStack_2d8 = *(int32_t *)(lVar12 + 4);
      uStack_2d4 = *(int32_t *)(lVar12 + 8);
      uStack_2d0 = *(int32_t *)(lVar12 + 0xc);
      uStack_2cc = *(int32_t *)(lVar12 + 0x10);
      uStack_2c8 = *(int32_t *)(lVar12 + 0x14);
      *(longlong *)(param_2 + 8) = lVar12 + 0x18;
      FUN_180260830(uStack_2c8,param_2,&uStack_2c4);
      uVar6 = **(uint **)(param_2 + 8);
      puVar2 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar2;
      if (uVar6 != 0) {
        (**(code **)(uStack_2c0 + 0x18))(&uStack_2c0,puVar2,uVar6);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar6;
      }
      lVar12 = *plVar1;
      *(int32_t *)(lVar11 + 0x14 + lVar12) = uStack_2c4;
      puVar3 = (int32_t *)(lVar11 + 4 + lVar12);
      *puVar3 = uStack_2d4;
      puVar3[1] = uStack_2d0;
      puVar3[2] = uStack_2cc;
      puVar3[3] = uStack_2c8;
      *(int32_t *)(lVar11 + lVar12) = uStack_2d8;
      lVar9 = _DAT_180c8aa00;
      iVar7 = FUN_180191c00(_DAT_180c8aa00,&uStack_2c0);
      if (iVar7 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar7 * 0x68 + *(longlong *)(lVar9 + 0x38);
      }
      *(longlong *)(lVar11 + 0x18 + lVar12) = lVar9;
      ppuStack_288 = (void **)&uStack_2c0;
      uStack_2c0 = &UNK_180a3c3e0;
      if (uStack_2b8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_2b8 = 0;
      uStack_2a8 = uStack_2a8 & 0xffffffff00000000;
      uStack_2c0 = &UNK_18098bcb0;
      lVar11 = lVar11 + 0x20;
      uVar13 = uVar13 - 1;
      param_1 = plStack_280;
    } while (uVar13 != 0);
  }
  lVar12 = 0;
  uVar13 = (ulonglong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  lVar11 = param_1[1] - *param_1;
  lVar11 = lVar11 / 6 + (lVar11 >> 0x3f);
  uVar8 = (lVar11 >> 3) - (lVar11 >> 0x3f);
  if (uVar8 < uVar13) {
    FUN_18014e9d0(param_1,uVar13 - uVar8);
  }
  else {
    param_1[1] = uVar13 * 0x30 + *param_1;
  }
  if (0 < (longlong)uVar13) {
    do {
      ppuStack_288 = &puStack_2b0;
      puStack_2b0 = &UNK_180a3c3e0;
      uStack_298 = 0;
      uStack_2a8 = 0;
      uStack_2a0 = 0;
      lVar11 = *(longlong *)(param_2 + 8);
      uStack_2d8 = *(int32_t *)(lVar11 + 4);
      uStack_2d4 = *(int32_t *)(lVar11 + 8);
      uStack_2d0 = *(int32_t *)(lVar11 + 0xc);
      uStack_2cc = *(int32_t *)(lVar11 + 0x10);
      uStack_2c8 = *(int32_t *)(lVar11 + 0x14);
      uStack_2c4 = *(int32_t *)(lVar11 + 0x18);
      uStack_2c0 = *(void **)(lVar11 + 0x1c);
      uVar5 = *(int32_t *)(lVar11 + 0x24);
      uStack_2b8 = CONCAT44(uStack_2b8._4_4_,uVar5);
      *(longlong *)(param_2 + 8) = lVar11 + 0x28;
      FUN_180260830(uVar5,param_2,(longlong)&uStack_2b8 + 4);
      uVar6 = **(uint **)(param_2 + 8);
      puVar2 = *(uint **)(param_2 + 8) + 1;
      *(uint **)(param_2 + 8) = puVar2;
      if (uVar6 != 0) {
        (**(code **)(puStack_2b0 + 0x18))(&puStack_2b0,puVar2,uVar6);
        *(longlong *)(param_2 + 8) = *(longlong *)(param_2 + 8) + (ulonglong)uVar6;
      }
      lVar11 = *param_1;
      puVar4 = (uint64_t *)(lVar12 + 4 + lVar11);
      *puVar4 = CONCAT44(uStack_2d0,uStack_2d4);
      puVar4[1] = CONCAT44(uStack_2c8,uStack_2cc);
      puVar3 = (int32_t *)(lVar12 + 0x14 + lVar11);
      *puVar3 = uStack_2c4;
      puVar3[1] = (int32_t)uStack_2c0;
      puVar3[2] = uStack_2c0._4_4_;
      puVar3[3] = (int32_t)uStack_2b8;
      *(int32_t *)(lVar12 + lVar11) = uStack_2d8;
      *(int32_t *)(lVar12 + 0x24 + lVar11) = uStack_2b8._4_4_;
      lVar9 = _DAT_180c8aa00;
      iVar7 = FUN_180191c00(_DAT_180c8aa00,&puStack_2b0);
      if (iVar7 == -1) {
        lVar9 = 0;
      }
      else {
        lVar9 = (longlong)iVar7 * 0x68 + *(longlong *)(lVar9 + 0x38);
      }
      *(longlong *)(lVar12 + 0x28 + lVar11) = lVar9;
      ppuStack_288 = &puStack_2b0;
      puStack_2b0 = &UNK_180a3c3e0;
      if (uStack_2a8 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      uStack_2a8 = 0;
      uStack_298 = uStack_298 & 0xffffffff00000000;
      puStack_2b0 = &UNK_18098bcb0;
      lVar12 = lVar12 + 0x30;
      uVar13 = uVar13 - 1;
    } while (uVar13 != 0);
  }
  uStack_2e8 = 1;
  lVar11 = (longlong)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  param_1 = param_1 + 8;
  ppuStack_288 = (void **)param_1;
  lStack_278 = lVar11;
  FUN_18014e330(param_1,lVar11);
  if (lVar11 < 1) {
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_308);
  }
  puVar4 = (uint64_t *)*param_1;
  uVar6 = **(uint **)(param_2 + 8);
  *(uint **)(param_2 + 8) = *(uint **)(param_2 + 8) + 1;
  puVar4[1] = (ulonglong)uVar6;
  uVar10 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar6,6);
  *puVar4 = uVar10;
                    // WARNING: Subroutine does not return
  memcpy(uVar10,*(uint64_t *)(param_2 + 8),(longlong)(int)uVar6);
}





// 函数: void FUN_18014d6a0(longlong param_1)
void FUN_18014d6a0(longlong param_1)

{
  *(uint64_t *)(param_1 + 0x28) = &UNK_180a3c3e0;
  if (*(longlong *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  *(uint64_t *)(param_1 + 0x28) = &UNK_18098bcb0;
  return;
}



longlong FUN_18014d6f0(longlong param_1,ulonglong param_2)

{
  if ((param_2 & 2) != 0) {
    FUN_1808fc8a8(param_1,0x20,*(uint64_t *)(param_1 + -8),FUN_1806d84a0,0xfffffffffffffffe);
    if ((param_2 & 1) != 0) {
      free(param_1 + -8,*(longlong *)(param_1 + -8) * 0x20 + 8);
    }
    return param_1 + -8;
  }
  FUN_1806d84a0();
  if ((param_2 & 1) != 0) {
    free(param_1,0x20);
  }
  return param_1;
}





// 函数: void FUN_18014d790(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18014d790(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  
  if (param_1[8] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[4] == 0) {
    uVar3 = 0xfffffffffffffffe;
    puVar1 = (uint64_t *)param_1[1];
    for (puVar2 = (uint64_t *)*param_1; puVar2 != puVar1; puVar2 = puVar2 + 4) {
      (**(code **)*puVar2)(puVar2,0,param_3,param_4,uVar3);
    }
    if (*param_1 == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Removing unreachable block (ram,0x00018014de5c)
// WARNING: Removing unreachable block (ram,0x00018014dd9b)
// WARNING: Removing unreachable block (ram,0x00018014ddca)
// WARNING: Removing unreachable block (ram,0x00018014de09)
// WARNING: Removing unreachable block (ram,0x00018014de17)
// WARNING: Removing unreachable block (ram,0x00018014de1c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014d7f0(longlong *param_1,float *param_2,longlong *param_3)
void FUN_18014d7f0(longlong *param_1,float *param_2,longlong *param_3)

{
  longlong *plVar1;
  uint *puVar2;
  int32_t uVar3;
  char cVar4;
  char *pcVar5;
  int32_t *puVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint64_t uVar12;
  longlong lVar13;
  longlong lVar14;
  uint64_t *puVar15;
  void **ppuVar16;
  longlong lVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  int8_t auStack_318 [32];
  longlong *plStack_2f8;
  void **ppuStack_2f0;
  uint64_t uStack_2e8;
  longlong *plStack_2e0;
  uint64_t *puStack_2d8;
  float *pfStack_2d0;
  uint64_t uStack_2c8;
  void *puStack_2b8;
  int8_t *puStack_2b0;
  int32_t uStack_2a8;
  int8_t auStack_2a0 [520];
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  uint64_t uStack_80;
  uint64_t uStack_78;
  void *puStack_70;
  ulonglong uStack_68;
  int32_t uStack_60;
  int32_t uStack_5c;
  ulonglong uStack_58;
  ulonglong uStack_48;
  
  uStack_2c8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_318;
  pcVar5 = (char *)param_3[1];
  cVar4 = *pcVar5;
  param_3[1] = (longlong)(pcVar5 + 1);
  plStack_2f8 = param_1;
  pfStack_2d0 = param_2;
  if (cVar4 != '\0') {
    uVar20 = (ulonglong)*(int *)(pcVar5 + 1);
    param_3[1] = (longlong)(pcVar5 + 5);
    plVar1 = param_1 + 4;
    uVar10 = param_1[5] - *plVar1 >> 5;
    if (uVar10 < uVar20) {
      FUN_18014eb80(plVar1,uVar20 - uVar10);
    }
    else {
      param_1[5] = uVar20 * 0x20 + *plVar1;
    }
    lVar17 = 0;
    lVar13 = lVar17;
    if (0 < (longlong)uVar20) {
      do {
        ppuStack_2f0 = (void **)&uStack_80;
        uStack_80 = &UNK_180a3c3e0;
        uStack_68 = 0;
        uStack_78 = 0;
        puStack_70 = (void *)((ulonglong)puStack_70 & 0xffffffff00000000);
        param_3[1] = param_3[1] + 4;
        puVar6 = (int32_t *)param_3[1];
        uStack_98._0_4_ = *puVar6;
        param_3[1] = (longlong)(puVar6 + 1);
        uStack_98._4_4_ = puVar6[1];
        param_3[1] = (longlong)(puVar6 + 2);
        uStack_90 = puVar6[2];
        param_3[1] = (longlong)(puVar6 + 3);
        uStack_8c = puVar6[3];
        param_3[1] = (longlong)(puVar6 + 4);
        uStack_88 = puVar6[4];
        param_3[1] = (longlong)(puVar6 + 5);
        FUN_180260830(uStack_88,param_3,&uStack_84);
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (longlong)puVar2;
        if (uVar19 != 0) {
          (**(code **)(uStack_80 + 0x18))(&uStack_80,puVar2,(ulonglong)uVar19);
          param_3[1] = param_3[1] + (ulonglong)uVar19;
        }
        lVar14 = *plVar1;
        *(int32_t *)(lVar13 + 0x14 + lVar14) = uStack_84;
        puVar6 = (int32_t *)(lVar13 + 4 + lVar14);
        *puVar6 = uStack_98._4_4_;
        puVar6[1] = uStack_90;
        puVar6[2] = uStack_8c;
        puVar6[3] = uStack_88;
        *(int32_t *)(lVar13 + lVar14) = (int32_t)uStack_98;
        lVar7 = _DAT_180c8aa00;
        iVar8 = FUN_180191c00(_DAT_180c8aa00,&uStack_80);
        lVar11 = lVar17;
        if (iVar8 != -1) {
          lVar11 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar7 + 0x38);
        }
        *(longlong *)(lVar13 + 0x18 + lVar14) = lVar11;
        ppuStack_2f0 = (void **)&uStack_80;
        uStack_80 = &UNK_180a3c3e0;
        if (uStack_78 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uStack_78 = 0;
        uStack_68 = uStack_68 & 0xffffffff00000000;
        uStack_80 = &UNK_18098bcb0;
        uVar20 = uVar20 - 1;
        lVar13 = lVar13 + 0x20;
        param_1 = plStack_2f8;
      } while (uVar20 != 0);
    }
    uVar20 = (ulonglong)*(int *)param_3[1];
    param_3[1] = (longlong)((int *)param_3[1] + 1);
    lVar13 = param_1[1] - *param_1;
    lVar13 = lVar13 / 6 + (lVar13 >> 0x3f);
    uVar10 = (lVar13 >> 3) - (lVar13 >> 0x3f);
    if (uVar10 < uVar20) {
      FUN_18014e9d0(param_1,uVar20 - uVar10);
    }
    else {
      param_1[1] = uVar20 * 0x30 + *param_1;
    }
    lVar13 = lVar17;
    if (0 < (longlong)uVar20) {
      do {
        ppuStack_2f0 = &puStack_70;
        puStack_70 = &UNK_180a3c3e0;
        uStack_58 = 0;
        uStack_68 = 0;
        uStack_60 = 0;
        param_3[1] = param_3[1] + 4;
        puVar6 = (int32_t *)param_3[1];
        uStack_98._0_4_ = *puVar6;
        param_3[1] = (longlong)(puVar6 + 1);
        uStack_98._4_4_ = puVar6[1];
        param_3[1] = (longlong)(puVar6 + 2);
        uStack_90 = puVar6[2];
        param_3[1] = (longlong)(puVar6 + 3);
        uStack_8c = puVar6[3];
        param_3[1] = (longlong)(puVar6 + 4);
        uStack_88 = puVar6[4];
        param_3[1] = (longlong)(puVar6 + 5);
        uStack_84 = puVar6[5];
        param_3[1] = (longlong)(puVar6 + 6);
        uVar3 = puVar6[6];
        param_3[1] = (longlong)(puVar6 + 7);
        uStack_80 = (void *)CONCAT44(puVar6[7],uVar3);
        param_3[1] = (longlong)(puVar6 + 8);
        uVar3 = puVar6[8];
        uStack_78 = CONCAT44(uStack_78._4_4_,uVar3);
        param_3[1] = (longlong)(puVar6 + 9);
        FUN_180260830(uVar3,param_3,(longlong)&uStack_78 + 4);
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (longlong)puVar2;
        if (uVar19 != 0) {
          (**(code **)(puStack_70 + 0x18))(&puStack_70,puVar2,(ulonglong)uVar19);
          param_3[1] = param_3[1] + (ulonglong)uVar19;
        }
        lVar14 = *param_1;
        puVar15 = (uint64_t *)(lVar13 + 4 + lVar14);
        *puVar15 = CONCAT44(uStack_90,uStack_98._4_4_);
        puVar15[1] = CONCAT44(uStack_88,uStack_8c);
        puVar6 = (int32_t *)(lVar13 + 0x14 + lVar14);
        *puVar6 = uStack_84;
        puVar6[1] = (int32_t)uStack_80;
        puVar6[2] = uStack_80._4_4_;
        puVar6[3] = (int32_t)uStack_78;
        *(int32_t *)(lVar13 + lVar14) = (int32_t)uStack_98;
        *(int32_t *)(lVar13 + 0x24 + lVar14) = uStack_78._4_4_;
        lVar7 = _DAT_180c8aa00;
        iVar8 = FUN_180191c00(_DAT_180c8aa00,&puStack_70);
        lVar11 = lVar17;
        if (iVar8 != -1) {
          lVar11 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar7 + 0x38);
        }
        *(longlong *)(lVar13 + 0x28 + lVar14) = lVar11;
        ppuStack_2f0 = &puStack_70;
        puStack_70 = &UNK_180a3c3e0;
        if (uStack_68 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        uStack_68 = 0;
        uStack_58 = uStack_58 & 0xffffffff00000000;
        puStack_70 = &UNK_18098bcb0;
        uVar20 = uVar20 - 1;
        lVar13 = lVar13 + 0x30;
        param_1 = plStack_2f8;
      } while (uVar20 != 0);
    }
    iVar8 = *(int *)param_3[1];
    ppuVar16 = (void **)(longlong)iVar8;
    param_3[1] = (longlong)((int *)param_3[1] + 1);
    param_1 = param_1 + 8;
    ppuStack_2f0 = ppuVar16;
    plStack_2e0 = param_1;
    FUN_18014e330(param_1,ppuVar16);
    puStack_2b8 = &UNK_180a009c8;
    puStack_2b0 = auStack_2a0;
    uStack_2a8 = 0;
    auStack_2a0[0] = 0;
    if (0 < iVar8) {
      do {
        uVar19 = *(uint *)param_3[1];
        puVar2 = (uint *)param_3[1] + 1;
        param_3[1] = (longlong)puVar2;
        puStack_2d8 = ppuVar16;
        if (uVar19 != 0) {
          (**(code **)(puStack_2b8 + 0x18))(&puStack_2b8,puVar2,(ulonglong)uVar19);
          param_3[1] = param_3[1] + (ulonglong)uVar19;
        }
        lVar13 = *param_1;
        lVar14 = *(longlong *)(lVar17 + 0x20 + lVar13);
        lVar7 = *(longlong *)(lVar17 + 0x18 + lVar13);
        if (lVar14 - lVar7 >> 3 == 0) {
          if (*(longlong *)(lVar17 + 0x28 + lVar13) - lVar14 >> 3 != 0) {
                    // WARNING: Subroutine does not return
            memset(lVar14,0,8);
          }
          uStack_2e8 = FUN_18062b420(_DAT_180c8ed18,8,*(int8_t *)(lVar17 + 0x30 + lVar13));
          lVar14 = *(longlong *)(lVar17 + 0x20 + lVar13);
          lVar13 = *(longlong *)(lVar17 + 0x18 + lVar13);
          if (lVar13 != lVar14) {
                    // WARNING: Subroutine does not return
            memmove(uStack_2e8,lVar13,lVar14 - lVar13);
          }
                    // WARNING: Subroutine does not return
          memset(uStack_2e8,0,8);
        }
        *(longlong *)(lVar17 + 0x20 + lVar13) = lVar7 + 8;
        lVar13 = _DAT_180c8aa00;
        iVar8 = FUN_180191c00(_DAT_180c8aa00,&puStack_2b8);
        if ((iVar8 == -1) ||
           (lVar14 = (longlong)iVar8 * 0x68 + *(longlong *)(lVar13 + 0x38), lVar14 == 0)) {
          lVar14 = *(longlong *)(lVar13 + 0x28);
        }
        **(longlong **)(lVar17 + 0x18 + *param_1) = lVar14;
        *(int32_t *)(lVar17 + 0x10 + *param_1) = 0;
        lVar17 = lVar17 + 0x38;
        ppuVar16 = (void **)((longlong)ppuVar16 + -1);
      } while (ppuVar16 != (void **)0x0);
      iVar8 = (int)ppuStack_2f0;
      puStack_2d8 = (uint64_t *)0x0;
      ppuVar16 = ppuStack_2f0;
    }
    iVar9 = 2;
    if (pfStack_2d0[1] <= 0.0 && pfStack_2d0[1] != 0.0) {
      iVar9 = 0;
    }
    iVar18 = 4;
    if (*pfStack_2d0 <= 0.0 && *pfStack_2d0 != 0.0) {
      iVar18 = 0;
    }
    uVar19 = iVar18 + iVar9 + (uint)(0.0 < pfStack_2d0[2] || pfStack_2d0[2] == 0.0);
    puVar15 = (uint64_t *)param_3[1];
    uStack_98._0_4_ = (int32_t)*puVar15;
    uStack_98._4_4_ = (int32_t)((ulonglong)*puVar15 >> 0x20);
    uStack_90 = (int32_t)puVar15[1];
    uStack_8c = (int32_t)((ulonglong)puVar15[1] >> 0x20);
    uStack_88 = (int32_t)puVar15[2];
    uStack_84 = (int32_t)((ulonglong)puVar15[2] >> 0x20);
    uStack_80 = (void *)puVar15[3];
    uStack_78 = puVar15[4];
    puStack_70 = (void *)puVar15[5];
    uStack_68 = puVar15[6];
    uStack_60 = *(int32_t *)(puVar15 + 7);
    uStack_5c = *(int32_t *)((longlong)puVar15 + 0x3c);
    puVar15 = puVar15 + 8;
    param_3[1] = (longlong)puVar15;
    if (0 < iVar8) {
      uVar10 = (&uStack_98)[uVar19] + (longlong)(int)(uVar19 * iVar8) * 4;
      if ((ulonglong)((param_3[2] - (longlong)puVar15) + *param_3) <= uVar10) {
        FUN_180639bf0(param_3,(longlong)puVar15 + (uVar10 - *param_3));
        puVar15 = (uint64_t *)param_3[1];
      }
      param_3[1] = (longlong)puVar15 + uVar10;
      if (0 < (longlong)ppuVar16) {
        uVar19 = *(uint *)param_3[1];
        param_3[1] = (longlong)((uint *)param_3[1] + 1);
        *(ulonglong *)(*param_1 + 8) = (ulonglong)uVar19;
        uVar12 = FUN_18062b420(_DAT_180c8ed18,(ulonglong)uVar19,3);
        *(uint64_t *)*param_1 = uVar12;
                    // WARNING: Subroutine does not return
        memcpy(*(uint64_t *)*param_1,param_3[1],(longlong)(int)uVar19);
      }
    }
    puStack_2b8 = &UNK_18098bcb0;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_318);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014e020(longlong *param_1,ulonglong param_2,int32_t *param_3)
void FUN_18014e020(longlong *param_1,ulonglong param_2,int32_t *param_3)

{
  int32_t uVar1;
  int32_t *puVar2;
  ulonglong uVar3;
  int32_t *puVar4;
  ulonglong uVar5;
  int32_t *puVar6;
  
  puVar6 = (int32_t *)param_1[1];
  puVar4 = (int32_t *)*param_1;
  uVar3 = (longlong)puVar6 - (longlong)puVar4 >> 2;
  if (param_2 <= uVar3) {
    param_1[1] = (longlong)(puVar4 + param_2);
    return;
  }
  param_2 = param_2 - uVar3;
  if (param_2 <= (ulonglong)(param_1[2] - (longlong)puVar6 >> 2)) {
    if (param_2 != 0) {
      uVar1 = *param_3;
      for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar6 = uVar1;
        puVar6 = puVar6 + 1;
      }
      puVar6 = (int32_t *)param_1[1];
    }
    param_1[1] = (longlong)(puVar6 + param_2);
    return;
  }
  uVar5 = uVar3 * 2;
  if (uVar3 == 0) {
    uVar5 = 1;
  }
  if (uVar5 < uVar3 + param_2) {
    uVar5 = uVar3 + param_2;
  }
  if (uVar5 == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,uVar5 * 4,(char)param_1[3]);
    puVar4 = (int32_t *)*param_1;
    puVar6 = (int32_t *)param_1[1];
  }
  if (puVar4 != puVar6) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,puVar4,(longlong)puVar6 - (longlong)puVar4);
  }
  if (param_2 != 0) {
    uVar1 = *param_3;
    puVar4 = puVar2;
    for (uVar3 = param_2; uVar3 != 0; uVar3 = uVar3 - 1) {
      *puVar4 = uVar1;
      puVar4 = puVar4 + 1;
    }
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (longlong)puVar2;
  param_1[2] = (longlong)(puVar2 + uVar5);
  param_1[1] = (longlong)(puVar2 + param_2);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18014e067(longlong param_1,longlong param_2)
void FUN_18014e067(longlong param_1,longlong param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  longlong lVar3;
  longlong unaff_RBX;
  ulonglong uVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  int32_t *puVar5;
  int32_t *unaff_R15;
  
  uVar4 = param_1 * 2;
  if (param_1 == 0) {
    uVar4 = 1;
  }
  if (uVar4 < (ulonglong)(param_1 + unaff_RBX)) {
    uVar4 = param_1 + unaff_RBX;
  }
  if (uVar4 == 0) {
    puVar2 = (int32_t *)0x0;
  }
  else {
    puVar2 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,uVar4 * 4,(char)unaff_RSI[3]);
    param_2 = *unaff_RSI;
    unaff_RDI = unaff_RSI[1];
  }
  if (param_2 != unaff_RDI) {
                    // WARNING: Subroutine does not return
    memmove(puVar2,param_2,unaff_RDI - param_2);
  }
  if (unaff_RBX != 0) {
    uVar1 = *unaff_R15;
    puVar5 = puVar2;
    for (lVar3 = unaff_RBX; lVar3 != 0; lVar3 = lVar3 + -1) {
      *puVar5 = uVar1;
      puVar5 = puVar5 + 1;
    }
  }
  if (*unaff_RSI != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_RSI = (longlong)puVar2;
  unaff_RSI[2] = (longlong)(puVar2 + uVar4);
  unaff_RSI[1] = (longlong)(puVar2 + unaff_RBX);
  return;
}





