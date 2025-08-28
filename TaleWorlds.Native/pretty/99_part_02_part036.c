#include "TaleWorlds.Native.Split.h"

// 99_part_02_part036.c - 10 个函数

// 函数: void FUN_1801a91f0(longlong *param_1)
void FUN_1801a91f0(longlong *param_1)

{
  char cVar1;
  int iVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint64_t *puVar7;
  longlong *plVar8;
  uint64_t uVar9;
  longlong *plVar10;
  longlong lVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  longlong lVar15;
  longlong lVar16;
  longlong *plVar17;
  int8_t auVar18 [16];
  int8_t auVar19 [16];
  int8_t auVar20 [16];
  float fVar21;
  uint64_t uStackX_10;
  uint64_t in_stack_fffffffffffffec8;
  int32_t uVar22;
  longlong lStack_128;
  longlong lStack_120;
  longlong lStack_118;
  uint64_t uStack_110;
  void *puStack_100;
  code *pcStack_f8;
  longlong *plStack_f0;
  longlong *plStack_e8;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int32_t uStack_cc;
  int16_t uStack_c8;
  int8_t uStack_c6;
  int32_t uStack_c4;
  int8_t uStack_c0;
  uint64_t uStack_b8;
  longlong lStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int8_t auStack_80 [64];
  
  uStack_88 = 0xfffffffffffffffe;
  if (*(char *)(*param_1 + 0x48) == '\0') {
    lVar16 = param_1[1];
    lVar3 = *(longlong *)(lVar16 + 0x60b80);
    if (lVar3 == 0) {
      puVar7 = (uint64_t *)FUN_1801a4e70(lVar16,auStack_80);
      uVar9 = puVar7[1];
      *(uint64_t *)(lVar16 + 0x454) = *puVar7;
      *(uint64_t *)(lVar16 + 0x45c) = uVar9;
      uVar9 = puVar7[3];
      *(uint64_t *)(lVar16 + 0x464) = puVar7[2];
      *(uint64_t *)(lVar16 + 0x46c) = uVar9;
      uVar9 = puVar7[5];
      *(uint64_t *)(lVar16 + 0x474) = puVar7[4];
      *(uint64_t *)(lVar16 + 0x47c) = uVar9;
      *(int32_t *)(lVar16 + 0x484) = *(int32_t *)(puVar7 + 6);
      lVar16 = param_1[1];
      uStack_110 = (longlong *)
                   CONCAT44(*(float *)(lVar16 + 0x468) - *(float *)(lVar16 + 0x458),
                            *(float *)(lVar16 + 0x464) - *(float *)(lVar16 + 0x454));
      plVar8 = uStack_110;
    }
    else {
      uStackX_10 = (longlong *)
                   CONCAT44((float)*(int *)(lVar3 + 0x18) * *(float *)(lVar3 + 0x1c),
                            (float)*(int *)(lVar3 + 0x14) * *(float *)(lVar3 + 0x1c));
      plVar8 = uStackX_10;
    }
    if (*(longlong *)(lVar16 + 0x448) == 0) {
      uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8);
      uVar9 = FUN_180373a60(uVar9,lVar16);
      *(uint64_t *)(lVar16 + 0x448) = uVar9;
      lVar16 = param_1[1];
    }
    lVar3 = *(longlong *)(lVar16 + 0x448);
    cVar1 = *(char *)(lVar16 + 0x2964);
    FUN_180374e60(lVar3);
    uStackX_10._4_4_ = (float)((ulonglong)plVar8 >> 0x20);
    uStackX_10._0_4_ = SUB84(plVar8,0);
    if (((float)uStackX_10 != 0.0) || (uStackX_10._4_4_ != 0.0)) {
      fVar21 = uStackX_10._4_4_;
      if (uStackX_10._4_4_ <= (float)uStackX_10) {
        fVar21 = (float)uStackX_10;
      }
      auVar20._0_4_ = (*(float *)(_DAT_180c86870 + 0x388) + 1.0) * 10.0;
      if (cVar1 == '\0') {
        auVar20._0_4_ = auVar20._0_4_ * 0.1;
      }
      auVar20._0_4_ = fVar21 / auVar20._0_4_;
      iVar12 = (int)auVar20._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar20._0_4_)) {
        auVar20._4_4_ = auVar20._0_4_;
        auVar20._8_8_ = 0;
        uVar5 = movmskps((int)_DAT_180c86870,auVar20);
        auVar20._0_4_ = (float)(int)(iVar12 - (uVar5 & 1));
      }
      uVar5 = (int)auVar20._0_4_;
      if (0x40 < (int)auVar20._0_4_) {
        uVar5 = 0x40;
      }
      auVar20._0_4_ = (float)(int)uVar5;
      auVar18._0_4_ = 1.0 / (fVar21 / auVar20._0_4_);
      auVar19._0_4_ = (float)uStackX_10 * auVar18._0_4_;
      iVar12 = (int)auVar19._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar19._0_4_)) {
        auVar19._4_4_ = auVar19._0_4_;
        auVar19._8_8_ = 0;
        uVar5 = movmskps(uVar5,auVar19);
        uVar5 = uVar5 & 1;
        auVar19._0_4_ = (float)(int)(iVar12 - uVar5);
      }
      auVar18._0_4_ = uStackX_10._4_4_ * auVar18._0_4_;
      iVar12 = (int)auVar18._0_4_;
      if ((iVar12 != -0x80000000) && ((float)iVar12 != auVar18._0_4_)) {
        auVar18._4_4_ = auVar18._0_4_;
        auVar18._8_8_ = 0;
        uVar5 = movmskps(uVar5,auVar18);
        auVar18._0_4_ = (float)(int)(iVar12 - (uVar5 & 1));
      }
      uVar5 = 0x40;
      if ((int)auVar19._0_4_ < 0x40) {
        uVar5 = (int)auVar19._0_4_;
      }
      *(uint *)(lVar3 + 0x2154) = uVar5;
      uVar13 = 0x40;
      if ((int)auVar18._0_4_ < 0x40) {
        uVar13 = (int)auVar18._0_4_;
      }
      *(uint *)(lVar3 + 0x2158) = uVar13;
      if (uVar5 == 0) {
        *(int32_t *)(lVar3 + 0x2154) = 4;
        uVar5 = 4;
      }
      if (uVar13 == 0) {
        *(int32_t *)(lVar3 + 0x2158) = 4;
        uVar13 = 4;
      }
      uVar6 = uVar5 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      if (uVar6 != 0) {
        *(uint *)(lVar3 + 0x2154) = (uVar5 - uVar6) + 4;
      }
      uVar5 = uVar13 & 0x80000003;
      if ((int)uVar5 < 0) {
        uVar5 = (uVar5 - 1 | 0xfffffffc) + 1;
      }
      if (uVar5 != 0) {
        *(uint *)(lVar3 + 0x2158) = (uVar13 - uVar5) + 4;
      }
      *(float *)(lVar3 + 0x215c) = fVar21 / auVar20._0_4_;
    }
    plVar8 = (longlong *)param_1[1];
    if (*(char *)((longlong)plVar8 + 0x2964) == '\0') {
      FUN_1801af730(plVar8);
      plVar8 = (longlong *)param_1[1];
    }
    uVar22 = (int32_t)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
    iVar12 = 0;
    if (plVar8[0xc165] - plVar8[0xc164] >> 3 != 0) {
      lStack_118 = 0;
      do {
        plVar10 = *(longlong **)(lStack_118 + plVar8[0xc164]);
        lVar3 = plVar8[0x89];
        lStack_128 = 0;
        iVar2 = *(int *)(*(longlong *)(lVar3 + 0x2148) + 0x3054);
        lVar16 = 0;
        plVar8 = (longlong *)(lVar3 + 0x2160);
        lStack_120 = 4;
        uStack_110 = plVar10;
        plVar17 = plVar10;
        do {
          plVar17 = plVar17 + 1;
          if (iVar2 == lStack_128) {
            lVar15 = 0;
            iVar14 = (int)(*(longlong *)(*plVar17 + 0x368) - *(longlong *)(*plVar17 + 0x360) >> 3);
            if (0 < iVar14) {
              plStack_e8 = plVar10 + 5;
              do {
                plVar10 = plStack_e8;
                uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x38,8,3);
                plVar10 = (longlong *)FUN_1803739d0(uVar9,iVar12,plVar10);
                piVar4 = *(int **)(*(longlong *)(*plVar17 + 0x360) + lVar15 * 8);
                if ((-1 < *piVar4) &&
                   (*piVar4 < (int)(*(longlong *)(_DAT_180c86978 + 0xd0) -
                                    *(longlong *)(_DAT_180c86978 + 200) >> 3))) {
                  plVar10[1] = (longlong)piVar4;
                  uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x150,8,3);
                  lVar11 = FUN_180372600(uVar9,lVar3);
                  *plVar10 = lVar11;
                  *(int *)(lVar11 + 0x50) = *piVar4;
                }
                plStack_f0 = plVar10;
                if ((ulonglong)(plVar8[1] - *plVar8 >> 3) < 0x100) {
                  FUN_18005ea90(lVar3 + 0x2160 + lVar16,&plStack_f0);
                }
                lVar15 = lVar15 + 1;
                plVar10 = uStack_110;
              } while (lVar15 < iVar14);
            }
          }
          uVar22 = (int32_t)((ulonglong)in_stack_fffffffffffffec8 >> 0x20);
          lVar16 = lVar16 + 0x20;
          lStack_128 = lStack_128 + 1;
          plVar8 = plVar8 + 4;
          lStack_120 = lStack_120 + -1;
        } while (lStack_120 != 0);
        plVar8 = (longlong *)param_1[1];
        iVar12 = iVar12 + 1;
        lStack_118 = lStack_118 + 8;
      } while ((ulonglong)(longlong)iVar12 < (ulonglong)(plVar8[0xc165] - plVar8[0xc164] >> 3));
    }
    lVar3 = plVar8[0xc165];
    lVar16 = plVar8[0xc164];
    if (plVar8[0xc170] != 0) {
      FUN_18039cb40(*(longlong *)param_1[2],plVar8,plVar8 + 0x103a,plVar8 + 0x1036,
                    CONCAT44(uVar22,*(int32_t *)(*(longlong *)param_1[2] + 0x3c)));
      lVar15 = param_1[1];
      lVar11 = *(longlong *)(lVar15 + 0x448);
      FUN_18037fb10(lVar11 + 0x21e0,*(uint64_t *)(lVar11 + 0x21e8),
                    *(uint64_t *)(lVar15 + 0x81b0),*(uint64_t *)(lVar15 + 0x81b8));
      *(int *)(lVar11 + 0x2368) =
           *(int *)(lVar11 + 0x2368) +
           (int)(*(longlong *)(lVar15 + 0x81b8) - *(longlong *)(lVar15 + 0x81b0) >> 3);
      plVar8 = (longlong *)param_1[1];
    }
    if ((*(char *)((longlong)plVar8 + 0x2964) != '\0') || ((int)plVar8[0xc142] == 0)) {
      puStack_100 = &UNK_1801bc290;
      pcStack_f8 = FUN_1801bbc00;
      puVar7 = &uStack_110;
      uVar9 = 0xffffffffffffffff;
      uStack_110 = plVar8;
      FUN_18015b810();
      lVar15 = param_1[1];
      lVar11 = *(longlong *)(lVar15 + 0x448);
      if (lVar11 == 0) {
        uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3,uVar9,puVar7);
        lVar11 = FUN_180373a60(uVar9,lVar15);
        lVar15 = param_1[1];
      }
      FUN_1803786b0(lVar11,*(uint64_t *)(lVar15 + 0x60b80),lVar3 - lVar16 >> 3 & 0xffffffff);
      plVar8 = (longlong *)param_1[1];
    }
    lVar3 = plVar8[0x89];
    if (lVar3 != 0) {
      *(int32_t *)(lVar3 + 0x2150) = *(int32_t *)(*(longlong *)(lVar3 + 0x2148) + 0x3054);
      FUN_180379810(lVar3);
      FUN_1803769d0(lVar3);
      FUN_1800b8500(plVar8[0x89] + 0x21e0);
      FUN_1800b8500(plVar8 + 0x1036);
    }
    uStack_d8 = 0;
    uStack_d0 = 0;
    uStack_cc = 0xffffffff;
    uStack_c8 = 1;
    uStack_c6 = 0;
    uStack_c4 = 0xffffffff;
    uStack_c0 = 1;
    uStack_b8 = 0;
    lStack_b0 = 0;
    uStack_a8 = 0;
    uStack_a0 = 0;
    uStack_98 = 3;
    uStack_90 = 0;
    lVar3 = param_1[1];
    lVar16 = *(longlong *)(lVar3 + 0x448);
    if (lVar16 == 0) {
      uVar9 = FUN_18062b1e0(_DAT_180c8ed18,0x2370,8,3);
      lVar16 = FUN_180373a60(uVar9,lVar3);
    }
    FUN_1803796b0(lVar16,&uStack_d8);
    *(int *)(param_1[1] + 0x28b4) = *(int *)(param_1[1] + 0x28b4) + 1;
    if (lStack_b0 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  if ((*(char *)(*param_1 + 0x46) == '\0') &&
     (*(longlong **)(_DAT_180c86950 + 0x1860) != (longlong *)0x0)) {
    (**(code **)(**(longlong **)(_DAT_180c86950 + 0x1860) + 0x28))();
  }
  return;
}






// 函数: void FUN_1801a9950(longlong *param_1)
void FUN_1801a9950(longlong *param_1)

{
  longlong lVar1;
  
  FUN_1801c0510();
  if (param_1[4] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lVar1 = *param_1;
  while( true ) {
    if (lVar1 == param_1[1]) {
      if (*param_1 == 0) {
        return;
      }
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong *)(lVar1 + 0x48) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    if (*(longlong *)(lVar1 + 0x28) != 0) break;
    if (*(longlong *)(lVar1 + 8) != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lVar1 = lVar1 + 0x78;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1801a99b0(longlong *param_1)
void FUN_1801a99b0(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x18) {
    if (*(longlong **)(lVar2 + 8) != (longlong *)0x0) {
      (**(code **)(**(longlong **)(lVar2 + 8) + 0x38))();
    }
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a99d0(longlong param_1)
void FUN_1801a99d0(longlong param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  ulonglong uVar4;
  uint64_t *puVar5;
  uint64_t *puStack_d8;
  uint64_t *puStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  int32_t auStack_b8 [2];
  uint64_t uStack_b0;
  longlong lStack_a8;
  uint64_t uStack_a0;
  int32_t uStack_98;
  void *puStack_88;
  ulonglong uStack_80;
  uint64_t uStack_78;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  longlong *plStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  longlong *plStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  uint64_t uStack_28;
  longlong *plStack_20;
  uint64_t uStack_18;
  
  uStack_18 = 0xfffffffffffffffe;
  if (((*(char *)(param_1 + 0x4c8) != '\0') && (0 < *(int *)(_DAT_180c86920 + 0xbd0))) &&
     (*(char *)(param_1 + 0x2968) == '\0')) {
    puStack_d8 = (uint64_t *)0x0;
    puStack_d0 = (uint64_t *)0x0;
    uVar4 = 0;
    uStack_c8 = 0;
    uStack_c0 = 3;
    FUN_1801b84e0(param_1 + 0x60300,&puStack_d8);
    uVar1 = *(uint64_t *)(param_1 + 800);
    lStack_a8 = 0;
    lStack_a8 = FUN_18062b420(_DAT_180c8ed18,0x800000,0x21);
    LOCK();
    uStack_a0 = 0;
    UNLOCK();
    uStack_98 = 0;
    uStack_70 = 0x3f800000;
    uStack_6c = 0x40000000;
    plStack_60 = &lStack_a8;
    uStack_80 = 1;
    puStack_88 = &system_data_0000;
    uStack_78 = 0;
    uStack_68 = 0;
    uStack_58 = 0;
    uStack_50 = 0;
    uStack_48 = 0;
    plStack_40 = &lStack_a8;
    uStack_38 = 0;
    uStack_30 = 0;
    uStack_28 = 0;
    plStack_20 = &lStack_a8;
    auStack_b8[0] = 0;
    uStack_b0 = uVar1;
    FUN_1803c2600(auStack_b8,param_1 + 0x60b48,&puStack_d8);
    puVar3 = puStack_d0;
    puVar2 = puStack_d8;
    if (uStack_80 != 0) {
      do {
        *(uint64_t *)(puStack_88 + uVar4 * 8) = 0;
        uVar4 = uVar4 + 1;
      } while (uVar4 < uStack_80);
    }
    uStack_78 = 0;
    if (lStack_a8 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    lStack_a8 = 0;
    for (puVar5 = puStack_d8; puVar5 != puVar3; puVar5 = puVar5 + 4) {
      (**(code **)*puVar5)(puVar5,0);
    }
    if (puVar2 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(puVar2);
    }
  }
  return;
}






// 函数: void FUN_1801a9ba0(longlong param_1)
void FUN_1801a9ba0(longlong param_1)

{
  ulonglong uVar1;
  longlong lVar2;
  ulonglong uVar3;
  
  uVar1 = *(ulonglong *)(param_1 + 0x38);
  lVar2 = *(longlong *)(param_1 + 0x30);
  uVar3 = 0;
  if (uVar1 != 0) {
    do {
      *(uint64_t *)(lVar2 + uVar3 * 8) = 0;
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  if (*(longlong *)(param_1 + 0x10) == 0) {
    *(uint64_t *)(param_1 + 0x10) = 0;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a9c10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801a9c10(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  void *puVar2;
  int32_t uVar3;
  uint64_t uVar4;
  void *puStack_58;
  uint64_t *puStack_50;
  int32_t uStack_48;
  uint64_t uStack_40;
  void *puStack_38;
  uint64_t *puStack_30;
  int32_t uStack_28;
  uint64_t uStack_20;
  
  uVar4 = 0xfffffffffffffffe;
  uVar3 = 0;
  if (*(longlong *)(_DAT_180c86938 + 8) != 0) {
    puStack_38 = &UNK_180a3c3e0;
    uStack_20 = 0;
    puStack_30 = (uint64_t *)0x0;
    uStack_28 = 0;
    puStack_30 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,0,0xfffffffffffffffe);
    *(int8_t *)puStack_30 = 0;
    uVar1 = FUN_18064e990(puStack_30);
    uStack_20 = CONCAT44(uStack_20._4_4_,uVar1);
    *puStack_30 = 0x3a3a656e656353;
    uStack_28 = 7;
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x4e0);
    }
    FUN_180628040(&puStack_38,&UNK_180a0b850,puVar2);
    *(int32_t *)(param_1 + 0xa0) = 0xffffffff;
    puStack_58 = &UNK_180a3c3e0;
    uStack_40 = 0;
    puStack_50 = (uint64_t *)0x0;
    uStack_48 = 0;
    puStack_50 = (uint64_t *)FUN_18062b420(_DAT_180c8ed18,0x10,0x13,param_4,uVar3,uVar4);
    *(int8_t *)puStack_50 = 0;
    uVar3 = FUN_18064e990(puStack_50);
    *puStack_50 = 0x3a3a656e656353;
    uStack_48 = 7;
    puVar2 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x4e0) != (void *)0x0) {
      puVar2 = *(void **)(param_1 + 0x4e0);
    }
    uStack_40._0_4_ = uVar3;
    FUN_180628040(&puStack_58,&UNK_180a0b880,puVar2);
    *(int32_t *)(param_1 + 0xa4) = 0xffffffff;
    puStack_58 = &UNK_180a3c3e0;
    if (puStack_50 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_50 = (uint64_t *)0x0;
    uStack_40 = (ulonglong)uStack_40._4_4_ << 0x20;
    puStack_58 = &UNK_18098bcb0;
    puStack_38 = &UNK_180a3c3e0;
    if (puStack_30 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
  }
  *(int32_t *)(*(longlong *)(param_1 + 0x260) + 0x300) = *(int32_t *)(param_1 + 0xa0);
  return;
}



longlong FUN_1801a9dd0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  longlong *plVar9;
  
  FUN_1803986d0(param_1 + 0x607e0);
  plVar9 = *(longlong **)(param_1 + 0x60858);
  iVar4 = (int)(*(longlong *)(param_1 + 0x60860) - (longlong)plVar9 >> 3);
  if (0 < iVar4) {
    iVar2 = *(int *)(param_2 + 0x10);
    lVar8 = 0;
    do {
      lVar3 = *plVar9;
      iVar6 = *(int *)(lVar3 + 0x298);
      if (iVar2 == iVar6) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(param_2 + 8);
          lVar7 = *(longlong *)(lVar3 + 0x290) - (longlong)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar7;
            iVar6 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar6 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_1801a9e5d:
        if (iVar6 == 0) {
          return lVar3;
        }
      }
      else if (iVar2 == 0) goto LAB_1801a9e5d;
      lVar8 = lVar8 + 1;
      plVar9 = plVar9 + 1;
    } while (lVar8 < iVar4);
  }
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a9e90(longlong param_1,int32_t *param_2,uint64_t param_3,int32_t *param_4,
void FUN_1801a9e90(longlong param_1,int32_t *param_2,uint64_t param_3,int32_t *param_4,
                  uint64_t *param_5)

{
  longlong *plVar1;
  int8_t auStack_108 [32];
  int32_t uStack_e8;
  int32_t uStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  int32_t uStack_c8;
  void *puStack_c0;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int8_t uStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  int32_t uStack_9c;
  float fStack_98;
  int32_t uStack_94;
  uint64_t uStack_90;
  uint64_t uStack_88;
  int32_t uStack_80;
  int8_t uStack_7c;
  void **ppuStack_78;
  int8_t auStack_68 [28];
  int32_t uStack_4c;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  uint64_t uStack_3c;
  uint64_t uStack_34;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_108;
  iStack_28 = 0;
  puStack_c0 = &UNK_180a0c240;
  uStack_b4 = 0x39b189;
  uStack_b8 = 2;
  uStack_b0 = 0;
  uStack_e8 = *param_2;
  uStack_e4 = param_2[1];
  fStack_e0 = (float)param_2[2];
  uStack_dc = param_2[3];
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318);
  if (plVar1 != (longlong *)0x0) {
    fStack_98 = fStack_e0 + 1.5;
    uStack_c8 = 0x461c4000;
    uStack_94 = 0x7f7fffff;
    uStack_90 = 0;
    uStack_88 = 0x7f7fffffbf800000;
    uStack_80 = 0x461c4000;
    uStack_7c = 0;
    ppuStack_78 = &puStack_c0;
    uStack_a0 = uStack_e8;
    uStack_9c = uStack_e4;
    (**(code **)(*plVar1 + 0x118))(plVar1,&uStack_a0,auStack_68);
  }
  if (0 < iStack_28) {
    *param_4 = uStack_4c;
    param_4[1] = uStack_48;
    param_4[2] = uStack_44;
    param_4[3] = uStack_40;
    *param_5 = uStack_3c;
    param_5[1] = uStack_34;
  }
  iStack_28 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801a9fd0(longlong param_1,int32_t *param_2,int32_t param_3,int32_t *param_4)
void FUN_1801a9fd0(longlong param_1,int32_t *param_2,int32_t param_3,int32_t *param_4)

{
  longlong *plVar1;
  int8_t auStack_118 [48];
  void *puStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int8_t uStack_d8;
  uint64_t uStack_d0;
  int32_t uStack_c8;
  int32_t uStack_c4;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int32_t uStack_b8;
  int32_t uStack_b4;
  int32_t uStack_b0;
  int32_t uStack_ac;
  int32_t uStack_a8;
  int8_t uStack_a4;
  void **ppuStack_a0;
  int32_t uStack_78;
  int8_t auStack_68 [36];
  int32_t uStack_44;
  int iStack_28;
  ulonglong uStack_18;
  
  uStack_d0 = 0xfffffffffffffffe;
  uStack_18 = _DAT_180bf00a8 ^ (ulonglong)auStack_118;
  iStack_28 = 0;
  puStack_e8 = &UNK_180a0c240;
  uStack_e0 = 2;
  uStack_d8 = 0;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318);
  uStack_dc = param_3;
  if (plVar1 != (longlong *)0x0) {
    uStack_78 = 0x461c4000;
    uStack_c0 = 0x459c4c00;
    uStack_bc = 0x7f7fffff;
    uStack_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0xbf800000;
    uStack_ac = 0x7f7fffff;
    uStack_a8 = 0x461c4000;
    uStack_a4 = 0;
    ppuStack_a0 = &puStack_e8;
    uStack_c8 = *param_2;
    uStack_c4 = param_2[1];
    (**(code **)(*plVar1 + 0x118))(plVar1,&uStack_c8,auStack_68);
  }
  if (0 < iStack_28) {
    *param_4 = uStack_44;
  }
  iStack_28 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_18 ^ (ulonglong)auStack_118);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801aa0f0(longlong param_1,longlong *param_2,float param_3,int32_t *param_4,
void FUN_1801aa0f0(longlong param_1,longlong *param_2,float param_3,int32_t *param_4,
                  int32_t param_5,int8_t param_6)

{
  longlong *plVar1;
  int32_t uVar2;
  int32_t uVar3;
  int8_t auStack_168 [32];
  void **ppuStack_148;
  float fStack_140;
  int32_t uStack_13c;
  int32_t uStack_138;
  int32_t uStack_134;
  float fStack_130;
  int32_t uStack_12c;
  uint64_t uStack_128;
  uint64_t uStack_120;
  uint64_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_104;
  int32_t uStack_f4;
  int32_t uStack_f0;
  int32_t uStack_ec;
  float fStack_e8;
  int32_t uStack_e4;
  int32_t uStack_d0;
  void *puStack_c8;
  int32_t uStack_c0;
  int32_t uStack_bc;
  int8_t uStack_b8;
  int8_t uStack_b0;
  uint64_t uStack_a8;
  uint64_t uStack_98;
  void **ppuStack_90;
  int iStack_84;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  int32_t uStack_70;
  int32_t uStack_6c;
  int32_t uStack_68;
  float fStack_64;
  int32_t uStack_60;
  int iStack_58;
  ulonglong uStack_48;
  
  uStack_a8 = 0xfffffffffffffffe;
  uStack_48 = _DAT_180bf00a8 ^ (ulonglong)auStack_168;
  iStack_58 = 0;
  uStack_b8 = 0;
  puStack_c8 = &UNK_180a0c228;
  uStack_b0 = param_6;
  uStack_bc = param_5;
  uStack_c0 = 2;
  uStack_f0 = (int32_t)*param_2;
  uStack_ec = *(int32_t *)((longlong)param_2 + 4);
  fStack_e8 = *(float *)(param_2 + 1);
  uStack_e4 = *(int32_t *)((longlong)param_2 + 0xc);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x28f8) + 0x318);
  if (plVar1 != (longlong *)0x0) {
    fStack_140 = fStack_e8 + 1.5;
    uStack_13c = 0x7f7fffff;
    uStack_d0 = 0x461c4000;
    uStack_12c = 0x7f7fffff;
    uStack_128 = 0;
    uStack_120 = 0x7f7fffffbf800000;
    uStack_110 = &puStack_c8;
    ppuStack_148 = (void **)*param_2;
    uStack_138 = uStack_f0;
    uStack_134 = uStack_ec;
    fStack_130 = fStack_140;
    if (param_3 <= 0.0001) {
      uStack_118 = CONCAT35(uStack_118._5_3_,0x461c4000);
      (**(code **)(*plVar1 + 0x118))(plVar1,&uStack_138,&uStack_98);
    }
    else {
      uStack_118 = CONCAT44(param_3,0x461c4000);
      (**(code **)(*plVar1 + 0x148))();
    }
  }
  if (iStack_58 < 1) {
    if ((*(longlong *)(param_1 + 0x2908) == 0) || (*(char *)(param_1 + 0x2960) == '\0'))
    goto LAB_1801aa310;
    uVar3 = FUN_1803a56a0(*(longlong *)(param_1 + 0x2908),param_2,0);
    ppuStack_148 = (void **)0x0;
    FUN_1803a5440(*(uint64_t *)(param_1 + 0x2908),&uStack_f0,param_2,&ppuStack_148);
    uVar2 = *(int32_t *)((longlong)param_2 + 4);
    uStack_f4 = 0x7f7fffff;
    uStack_118 = 0;
    uStack_104 = CONCAT31(uStack_104._1_3_,1);
    *param_4 = (int)*param_2;
    param_4[1] = uVar2;
    param_4[2] = uVar3;
    param_4[3] = 0x7f7fffff;
    ppuStack_90 = ppuStack_148;
    uStack_6c = uStack_f0;
    uStack_68 = uStack_ec;
    fStack_64 = fStack_e8;
    uStack_60 = uStack_e4;
  }
  else {
    uStack_118 = uStack_98;
    uStack_104 = CONCAT31(uStack_104._1_3_,(iStack_84 != 1) + '\x01');
    *param_4 = uStack_7c;
    param_4[1] = uStack_78;
    param_4[2] = uStack_74;
    param_4[3] = uStack_70;
    uVar3 = uStack_74;
  }
  param_4[4] = uStack_6c;
  param_4[5] = uStack_68;
  param_4[6] = fStack_64;
  param_4[7] = uStack_60;
  uStack_110._0_4_ = SUB84(ppuStack_90,0);
  uStack_110._4_4_ = (int32_t)((ulonglong)ppuStack_90 >> 0x20);
  param_4[8] = (int32_t)uStack_118;
  param_4[9] = uStack_118._4_4_;
  param_4[10] = (int32_t)uStack_110;
  param_4[0xb] = uStack_110._4_4_;
  *(ulonglong *)(param_4 + 0xc) = CONCAT44(uStack_104,uVar3);
  uStack_110 = ppuStack_90;
LAB_1801aa310:
  iStack_58 = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_48 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1801aa3d0(longlong param_1)
void FUN_1801aa3d0(longlong param_1)

{
  longlong lVar1;
  int iVar2;
  uint64_t uVar3;
  longlong lVar4;
  ulonglong uVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  int8_t auStackX_8 [8];
  int8_t *puStackX_10;
  longlong *plStack_60;
  ulonglong uStack_58;
  longlong lStack_48;
  
  if (*(int *)(_DAT_180c86920 + 0xe4) != *(int *)(_DAT_180c86920 + 0xe0)) {
    FUN_1801ac450();
  }
  if (*(longlong *)(param_1 + 0x380) != 0) {
    FUN_1802c2de0();
    puStackX_10 = auStackX_8;
    uVar3 = FUN_1800b30d0(_DAT_180c86930,auStackX_8,*(longlong *)(param_1 + 0x388) + 0x10,1);
    FUN_1801ae990(param_1,uVar3);
  }
  lVar6 = _DAT_180c86920;
  if (*(longlong *)(param_1 + 0x60b80) != 0) {
    func_0x0001803b0980();
  }
  if ((*(int *)(lVar6 + 0xb64) != *(int *)(lVar6 + 0xb60)) && (*(longlong *)(param_1 + 0x260) != 0))
  {
    FUN_1801be9f0(*(longlong *)(param_1 + 0x260) + 0x58);
    lVar6 = _DAT_180c86920;
  }
  if ((*(longlong *)(param_1 + 800) != 0) && (*(int *)(lVar6 + 0xbd4) != *(int *)(lVar6 + 0xbd0))) {
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
    if (*(int *)(lVar6 + 0xbd0) < 1) {
      FUN_18031dfa0(*(uint64_t *)(param_1 + 800));
      lVar6 = _DAT_180c86920;
    }
    else {
      func_0x00018031cb70();
      FUN_1801a99d0(param_1);
      FUN_18031e050(*(uint64_t *)(param_1 + 800));
      lVar6 = _DAT_180c86920;
    }
  }
  uVar9 = 0;
  uVar5 = uVar9;
  uVar8 = uVar9;
  if (*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3 != 0) {
    do {
      (**(code **)(**(longlong **)(uVar5 + *(longlong *)(param_1 + 0xe0)) + 0x40))();
      uVar7 = (int)uVar8 + 1;
      uVar5 = uVar5 + 8;
      uVar8 = (ulonglong)uVar7;
      lVar6 = _DAT_180c86920;
    } while ((ulonglong)(longlong)(int)uVar7 <
             (ulonglong)(*(longlong *)(param_1 + 0xe8) - *(longlong *)(param_1 + 0xe0) >> 3));
  }
  if ((*(int *)(lVar6 + 0x694) != *(int *)(lVar6 + 0x690)) &&
     (*(longlong *)(param_1 + 0x60b80) != 0)) {
    if ((*(char *)(param_1 + 0x2964) == '\0') || (*(int *)(lVar6 + 0x690) == 0)) {
      FUN_1801af730(param_1);
    }
    else {
      FUN_1801af6d0(param_1);
    }
  }
  lVar6 = *(longlong *)(param_1 + 0x358);
  if (lVar6 != 0) {
    *(int32_t *)(lVar6 + 0x78) = 0;
    *(int8_t *)(lVar6 + 0x7c) = 1;
    *(int32_t *)(lVar6 + 0x80) = 0;
    *(uint64_t *)(lVar6 + 0x98) = 0;
  }
  if (*(longlong *)(param_1 + 0x60830) != 0) {
    FUN_1801be910(param_1 + 0x607e0,&plStack_60);
    uVar5 = uStack_58;
    lVar6 = lStack_48;
LAB_1801aa610:
    if (uVar5 != *(ulonglong *)(param_1 + 0x60838)) {
      iVar2 = (int)(*(longlong *)(lVar6 + 0xf8) - *(longlong *)(lVar6 + 0xf0) >> 3);
      uVar8 = uVar9;
      if (0 < iVar2) {
        do {
          (**(code **)(**(longlong **)(*(longlong *)(lVar6 + 0xf0) + uVar8 * 8) + 0x188))();
          uVar8 = uVar8 + 1;
        } while ((longlong)uVar8 < (longlong)iVar2);
      }
      lVar1 = *(longlong *)(lVar6 + 0x260);
      if ((lVar1 != 0) &&
         (iVar2 = (int)(*(longlong *)(lVar1 + 0x1b0) - *(longlong *)(lVar1 + 0x1a8) >> 3),
         uVar8 = uVar9, 0 < iVar2)) {
        do {
          (**(code **)(**(longlong **)
                         (*(longlong *)(*(longlong *)(lVar6 + 0x260) + 0x1a8) + uVar8 * 8) + 0x188))
                    ();
          uVar8 = uVar8 + 1;
        } while ((longlong)uVar8 < (longlong)iVar2);
      }
      lVar1 = *plStack_60;
      do {
        uVar5 = uVar5 + 1;
        lVar4 = (uVar5 & 0xffffffff) * 0x10;
        uVar8 = lVar4 + 8 + lVar1;
        if ((*(ulonglong *)(lVar4 + lVar1) & 0xffffffff00000000) == 0) {
          uVar8 = uVar9;
        }
        if (uVar8 != 0) {
          lVar6 = *(longlong *)(lVar1 + 8 + (uVar5 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar5 != plStack_60[1]);
      goto LAB_1801aa610;
    }
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001801aa98d)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




