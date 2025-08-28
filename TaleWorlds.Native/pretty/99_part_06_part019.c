#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_06_part019.c - 10 个函数

// 函数: void FUN_1803b6b70(longlong *param_1,int param_2,int param_3)
void FUN_1803b6b70(longlong *param_1,int param_2,int param_3)

{
  uint64_t *puVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  int *piVar8;
  int **ppiVar9;
  longlong lVar10;
  int iVar11;
  longlong *plVar12;
  uint64_t uVar13;
  int *piStack_88;
  uint64_t *puStack_80;
  int *piStack_78;
  uint64_t *puStack_70;
  longlong lStack_68;
  longlong lStack_60;
  longlong lStack_58;
  char cStack_50;
  int8_t uStack_4f;
  int8_t uStack_4e;
  
  if (param_2 < param_3) {
    uVar13 = 0xfffffffffffffffe;
    do {
      plVar12 = (longlong *)0x0;
      lVar10 = *param_1;
      uVar6 = (longlong)param_2 / (longlong)*(int *)(lVar10 + 0x18);
      iVar11 = param_2 % *(int *)(lVar10 + 0x18);
      iVar7 = (int)uVar6;
      lVar2 = *(longlong *)(lVar10 + 0x40);
      puVar1 = (uint64_t *)
               (lVar2 + ((ulonglong)(longlong)(iVar7 * 1000 + iVar11) %
                        (ulonglong)*(uint *)(lVar10 + 0x48)) * 8);
      for (piVar8 = (int *)*puVar1; piVar8 != (int *)0x0; piVar8 = *(int **)(piVar8 + 4)) {
        if ((iVar7 == *piVar8) && (iVar11 == piVar8[1])) {
          piStack_88 = piVar8;
          puStack_80 = puVar1;
          ppiVar9 = &piStack_88;
          lVar10 = *(longlong *)(lVar10 + 0x48);
          goto LAB_1803b6c22;
        }
      }
      lVar10 = *(longlong *)(lVar10 + 0x48);
      puStack_70 = (uint64_t *)(lVar2 + lVar10 * 8);
      piStack_78 = (int *)*puStack_70;
      ppiVar9 = &piStack_78;
LAB_1803b6c22:
      if (*ppiVar9 != *(int **)(lVar2 + lVar10 * 8)) {
        plVar12 = *(longlong **)(*ppiVar9 + 2);
      }
      if (plVar12 != (longlong *)0x0) {
        uStack_4e = 3;
        plVar3 = (longlong *)param_1[1];
        lStack_68 = *plVar3;
        lStack_60 = plVar3[1];
        lStack_58 = plVar3[2];
        _cStack_50 = CONCAT11(*(int8_t *)((longlong)plVar3 + 0x19),1);
        lVar10 = (longlong)iVar7 * 0x10 + (longlong)iVar11;
        uVar4 = *(ulonglong *)(param_1[2] + lVar10 * 8);
        if ((ulonglong)((lStack_58 - lStack_60) + lStack_68) <= uVar4) {
          FUN_180639bf0(&lStack_68,(lStack_60 - lStack_68) + uVar4);
        }
        lStack_60 = lStack_60 + uVar4;
        lVar2 = *param_1 + 0x80;
        lVar5 = *(longlong *)(*(longlong *)(*param_1 + 0x68) + 0x60b40);
        if (lVar5 == 0) {
          uVar13 = FUN_18062b1e0(_DAT_180c8ed18,0x6c00,4,3);
                    // WARNING: Subroutine does not return
          memset(uVar13,0,0x6c00);
        }
        (**(code **)(*plVar12 + 0x18))
                  (plVar12,param_1[3],lVar10 * 0x6c + lVar5,uVar6 & 0xffffffff,iVar11,lVar2,
                   &lStack_68,*(int32_t *)param_1[4],lVar2,lVar10,*(code **)(*plVar12 + 0x18),
                   uVar13);
        if (*(char *)(*(longlong *)(*param_1 + 0x68) + 0x2963) == '\0') {
          if (plVar12[0x10f] != 0) {
                    // WARNING: Subroutine does not return
            FUN_18064e900();
          }
          plVar12[0x10f] = 0;
        }
        if ((cStack_50 == '\0') && (lStack_68 != 0)) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
      }
      param_2 = param_2 + 1;
    } while (param_2 < param_3);
  }
  return;
}



int32_t FUN_1803b6df0(longlong param_1)

{
  int32_t uVar1;
  
  FUN_1803e2360(param_1 + 0x1c60,param_1);
  if ((*(char *)(*(longlong *)(param_1 + 0x68) + 0x2965) != '\0') && (system_data_2847 == '\0')) {
    if (*(longlong *)(param_1 + 0x1c8) == 0) {
      FUN_1803e67b0(param_1 + 0x1c60);
    }
    else {
      FUN_1803e6590();
    }
  }
  *(int8_t *)(param_1 + 0x170) = 1;
  LOCK();
  uVar1 = *(int32_t *)(param_1 + 0x10);
  *(int32_t *)(param_1 + 0x10) = 0;
  UNLOCK();
  return uVar1;
}






// 函数: void FUN_1803b6f20(longlong param_1)
void FUN_1803b6f20(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  plVar1 = *(longlong **)(param_1 + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(longlong *)(param_1 + 0x48)];
  while (lVar4 != lVar2) {
    *(uint64_t *)(*(longlong *)(lVar4 + 8) + 0x658) = *(uint64_t *)(param_1 + 0x70);
    lVar4 = *(longlong *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  FUN_1803b7060(param_1);
  FUN_1801c4730();
  if (system_data_2847 == '\0') {
    plVar1 = *(longlong **)(param_1 + 0x40);
    lVar4 = *plVar1;
    plVar3 = plVar1;
    if (lVar4 == 0) {
      lVar4 = plVar1[1];
      while (plVar3 = plVar3 + 1, lVar4 == 0) {
        lVar4 = plVar3[1];
      }
    }
    lVar2 = plVar1[*(longlong *)(param_1 + 0x48)];
    while (lVar4 != lVar2) {
      FUN_1803d3f10(*(longlong *)(lVar4 + 8) + 0x80,*(uint64_t *)(param_1 + 0x70));
      lVar4 = *(longlong *)(lVar4 + 0x10);
      while (lVar4 == 0) {
        plVar1 = plVar3 + 1;
        plVar3 = plVar3 + 1;
        lVar4 = *plVar1;
      }
    }
  }
  return;
}






// 函数: void FUN_1803b6fc0(void)
void FUN_1803b6fc0(void)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong unaff_RBP;
  longlong lVar4;
  
  plVar1 = *(longlong **)(unaff_RBP + 0x40);
  lVar4 = *plVar1;
  plVar3 = plVar1;
  if (lVar4 == 0) {
    lVar4 = plVar1[1];
    while (plVar3 = plVar3 + 1, lVar4 == 0) {
      lVar4 = plVar3[1];
    }
  }
  lVar2 = plVar1[*(longlong *)(unaff_RBP + 0x48)];
  while (lVar4 != lVar2) {
    FUN_1803d3f10(*(longlong *)(lVar4 + 8) + 0x80,*(uint64_t *)(unaff_RBP + 0x70));
    lVar4 = *(longlong *)(lVar4 + 0x10);
    while (lVar4 == 0) {
      plVar1 = plVar3 + 1;
      plVar3 = plVar3 + 1;
      lVar4 = *plVar1;
    }
  }
  return;
}






// 函数: void FUN_1803b7051(void)
void FUN_1803b7051(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b7060(longlong param_1)
void FUN_1803b7060(longlong param_1)

{
  uint uVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  void *puVar8;
  ulonglong uVar9;
  int32_t extraout_XMM0_Da;
  int32_t uVar10;
  int8_t auStack_178 [32];
  void *puStack_158;
  void *puStack_150;
  uint uStack_148;
  uint64_t uStack_140;
  uint64_t uStack_138;
  uint64_t uStack_130;
  uint64_t uStack_128;
  int16_t uStack_120;
  int8_t uStack_11e;
  void *puStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  ulonglong uStack_100;
  void *puStack_f8;
  longlong lStack_f0;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_d0;
  int8_t *puStack_c8;
  int32_t uStack_c0;
  int8_t auStack_b8 [16];
  void *puStack_a8;
  int8_t *puStack_a0;
  int32_t uStack_98;
  int8_t auStack_90 [16];
  void *puStack_80;
  int8_t *puStack_78;
  int32_t uStack_70;
  int8_t auStack_68 [16];
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [16];
  ulonglong uStack_30;
  
  uStack_d8 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_178;
  FUN_180627ae0(&puStack_f8,*(longlong *)(param_1 + 0x70) + 0x2d0);
  cVar3 = FUN_180624a00(&puStack_f8);
  uVar10 = extraout_XMM0_Da;
  if (cVar3 == '\0') {
    uVar10 = FUN_180624910(&puStack_f8);
  }
  FUN_1801c2d00(uVar10,*(uint64_t *)(param_1 + 0x70));
  uVar7 = 0;
  puStack_158 = &unknown_var_3456_ptr;
  uStack_140 = 0;
  puStack_150 = (void *)0x0;
  uStack_148 = 0;
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar1 = *(uint *)(lVar2 + 0x2e0);
  uVar9 = (ulonglong)uVar1;
  if (*(longlong *)(lVar2 + 0x2d8) != 0) {
    FUN_1806277c0(&puStack_158,uVar9);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_150,*(uint64_t *)(lVar2 + 0x2d8),uVar9);
  }
  if (puStack_150 != (void *)0x0) {
    puStack_150[uVar9] = 0;
  }
  uStack_148 = uVar1;
  uStack_140._4_4_ = *(uint *)(lVar2 + 0x2ec);
  FUN_1806277c0(&puStack_158,0x1f);
  puVar5 = (int32_t *)(puStack_150 + uStack_148);
  *puVar5 = 0x72726574;
  puVar5[1] = 0x5f6e6961;
  puVar5[2] = 0x64616873;
  puVar5[3] = 0x5f737265;
  puVar5[4] = 0x64616568;
  puVar5[5] = 0x645f7265;
  puVar5[6] = 0x2e617461;
  puVar5[7] = 0x6e6962;
  puStack_118 = &unknown_var_3456_ptr;
  uStack_100 = 0;
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_148 = 0x1f;
  cVar3 = FUN_180624af0(&puStack_158);
  if (cVar3 != '\0') {
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_11e = 3;
    FUN_18039d7b0(*(longlong *)(param_1 + 0x68) + 0x608f0,&uStack_138,param_1 + 0x188);
    puVar6 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
    puVar8 = &system_buffer_ptr;
    if (puStack_150 != (void *)0x0) {
      puVar8 = puStack_150;
    }
    *puVar6 = 0;
    *(int8_t *)(puVar6 + 2) = 0;
    FUN_18062dee0(puVar6,puVar8,&unknown_var_4880_ptr);
    iVar4 = FUN_18062e090(puVar6);
    if (iVar4 != 0) {
      uVar7 = FUN_18062b420(_DAT_180c8ed18,(longlong)iVar4,3);
    }
    fread(uVar7,(longlong)iVar4,1,puVar6[1]);
    if (puVar6[1] != 0) {
      fclose();
      puVar6[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      if (puVar6[1] != 0) {
        fclose();
        puVar6[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar6);
  }
  FUN_1806272a0(&unknown_var_872_ptr);
  puStack_d0 = &unknown_var_7512_ptr;
  puStack_c8 = auStack_b8;
  auStack_b8[0] = 0;
  uStack_c0 = 5;
  strcpy_s(auStack_b8,0x10,&system_data_be28);
  FUN_18062bd50(&puStack_f8,&puStack_d0);
  puStack_d0 = &unknown_var_720_ptr;
  puStack_a8 = &unknown_var_7512_ptr;
  puStack_a0 = auStack_90;
  auStack_90[0] = 0;
  uStack_98 = 4;
  strcpy_s(auStack_90,0x10,&system_data_d8ac);
  FUN_18062bd50(&puStack_f8,&puStack_a8);
  puStack_a8 = &unknown_var_720_ptr;
  puStack_80 = &unknown_var_7512_ptr;
  puStack_78 = auStack_68;
  auStack_68[0] = 0;
  uStack_70 = 5;
  strcpy_s(auStack_68,0x10,&system_data_be54);
  FUN_18062bd50(&puStack_f8,&puStack_80);
  puStack_80 = &unknown_var_720_ptr;
  puStack_58 = &unknown_var_7512_ptr;
  puStack_50 = auStack_40;
  auStack_40[0] = 0;
  uStack_48 = 4;
  strcpy_s(auStack_40,0x10,&system_data_b88c);
  FUN_18062bd50(&puStack_f8,&puStack_58);
  puStack_58 = &unknown_var_720_ptr;
  uVar10 = FUN_1803b7530(param_1);
  FUN_1801c5450(uVar10,*(uint64_t *)(param_1 + 0x70));
  uStack_110 = 0;
  uStack_100 = uStack_100 & 0xffffffff00000000;
  puStack_118 = &unknown_var_720_ptr;
  puStack_158 = &unknown_var_3456_ptr;
  if (puStack_150 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puStack_150 = (void *)0x0;
  uStack_140 = (ulonglong)uStack_140._4_4_ << 0x20;
  puStack_158 = &unknown_var_720_ptr;
  puStack_f8 = &unknown_var_3456_ptr;
  if (lStack_f0 == 0) {
    lStack_f0 = 0;
    uStack_e0 = 0;
    puStack_f8 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
    FUN_1808fc050(uStack_30 ^ (ulonglong)auStack_178);
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b7530(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803b7530(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t *puVar2;
  void *puVar3;
  longlong lVar4;
  ulonglong uVar5;
  void *puStack_60;
  void *puStack_58;
  uint uStack_50;
  uint64_t uStack_48;
  longlong lStack_40;
  longlong lStack_38;
  uint64_t uStack_30;
  int16_t uStack_28;
  int8_t uStack_26;
  
  puStack_60 = &unknown_var_3456_ptr;
  uStack_48 = 0;
  puStack_58 = (void *)0x0;
  uStack_50 = 0;
  lVar4 = *(longlong *)(param_1 + 0x70);
  uVar1 = *(uint *)(lVar4 + 0x2e0);
  uVar5 = (ulonglong)uVar1;
  if (*(longlong *)(lVar4 + 0x2d8) != 0) {
    FUN_1806277c0(&puStack_60,uVar5,param_3,param_4,0xfffffffffffffffe);
  }
  if (uVar1 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(puStack_58,*(uint64_t *)(lVar4 + 0x2d8),uVar5);
  }
  if (puStack_58 != (void *)0x0) {
    puStack_58[uVar5] = 0;
  }
  uStack_48 = CONCAT44(*(int32_t *)(lVar4 + 0x2ec),(int32_t)uStack_48);
  uStack_50 = uVar1;
  FUN_1806277c0(&puStack_60,0x1f);
  puVar2 = (uint64_t *)(puStack_58 + uStack_50);
  *puVar2 = 0x5f6e696172726574;
  puVar2[1] = 0x5f73726564616873;
  *(int32_t *)(puVar2 + 2) = 0x64616568;
  *(int32_t *)((longlong)puVar2 + 0x14) = 0x645f7265;
  *(int32_t *)(puVar2 + 3) = 0x2e617461;
  *(int32_t *)((longlong)puVar2 + 0x1c) = 0x6e6962;
  lStack_40 = 0;
  lStack_38 = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  uStack_26 = 3;
  uStack_50 = 0x1f;
  FUN_18039d7b0(*(longlong *)(param_1 + 0x68) + 0x608f0,&lStack_40,param_1 + 0x188);
  puVar2 = (uint64_t *)FUN_18062b1e0(_DAT_180c8ed18,0x18,8,3);
  puVar3 = &system_buffer_ptr;
  if (puStack_58 != (void *)0x0) {
    puVar3 = puStack_58;
  }
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 2) = 0;
  FUN_18062dee0(puVar2,puVar3,&unknown_var_9772_ptr);
  if (puVar2[1] != 0) {
    lVar4 = lStack_38 - lStack_40;
    if (lStack_40 == 0) {
      lVar4 = 0;
    }
    fwrite(lStack_40,lVar4,1,puVar2[1]);
    if (puVar2[1] != 0) {
      fclose();
      puVar2[1] = 0;
      LOCK();
      SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
      UNLOCK();
      if (puVar2[1] != 0) {
        fclose();
        puVar2[1] = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
      }
    }
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar2);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b7760(longlong param_1,uint64_t param_2)
void FUN_1803b7760(longlong param_1,uint64_t param_2)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  uint64_t uVar4;
  longlong *plVar5;
  ulonglong uVar6;
  void *puStack_70;
  longlong lStack_68;
  uint uStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  longlong lStack_48;
  uint uStack_40;
  uint64_t uStack_38;
  
  uVar4 = FUN_18062b1e0(_DAT_180c8ed18,0x398,8,3,0xfffffffffffffffe);
  plVar5 = (longlong *)FUN_1801ecc70(uVar4);
  if (plVar5 != (longlong *)0x0) {
    (**(code **)(*plVar5 + 0x28))(plVar5);
  }
  plVar1 = *(longlong **)(param_1 + 0x70);
  *(longlong **)(param_1 + 0x70) = plVar5;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  puStack_70 = &unknown_var_3456_ptr;
  uStack_58 = 0;
  lStack_68 = 0;
  uStack_60 = 0;
  FUN_1803b7950(&puStack_70,param_2);
  uVar3 = uStack_60;
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar6 = (ulonglong)uStack_60;
  if (lStack_68 != 0) {
    FUN_1806277c0(lVar2 + 0x2d0,uVar6);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar2 + 0x2d8),lStack_68,uVar6);
  }
  *(int32_t *)(lVar2 + 0x2e0) = 0;
  if (*(longlong *)(lVar2 + 0x2d8) != 0) {
    *(int8_t *)(uVar6 + *(longlong *)(lVar2 + 0x2d8)) = 0;
  }
  *(int32_t *)(lVar2 + 0x2ec) = uStack_58._4_4_;
  FUN_18062c1e0(&puStack_70,1);
  puStack_50 = &unknown_var_3456_ptr;
  uStack_38 = 0;
  lStack_48 = 0;
  uStack_40 = 0;
  FUN_1803b7ae0(&puStack_50,param_2);
  uVar3 = uStack_40;
  lVar2 = *(longlong *)(param_1 + 0x70);
  uVar6 = (ulonglong)uStack_40;
  if (lStack_48 != 0) {
    FUN_1806277c0(lVar2 + 0x2b0,uVar6);
  }
  if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(lVar2 + 0x2b8),lStack_48,uVar6);
  }
  *(int32_t *)(lVar2 + 0x2c0) = 0;
  if (*(longlong *)(lVar2 + 0x2b8) != 0) {
    *(int8_t *)(uVar6 + *(longlong *)(lVar2 + 0x2b8)) = 0;
  }
  *(uint *)(lVar2 + 0x2cc) = uStack_38._4_4_;
  puStack_50 = &unknown_var_3456_ptr;
  if (lStack_48 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStack_48,lStack_48);
  }
  lStack_48 = 0;
  uStack_38 = (ulonglong)uStack_38._4_4_ << 0x20;
  puStack_50 = &unknown_var_720_ptr;
  puStack_70 = &unknown_var_3456_ptr;
  if (lStack_68 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lStack_68,0);
  }
  return;
}






// 函数: void FUN_1803b7950(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803b7950(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  int iVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  void *puStack_28;
  longlong lStack_20;
  int32_t uStack_10;
  
  uVar2 = FUN_180627ae0(&puStack_28,param_2 + 0x27c8,param_3,param_4,0,0xfffffffffffffffe);
  FUN_18005d190(param_1,uVar2);
  puStack_28 = &unknown_var_3456_ptr;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_20 = 0;
  uStack_10 = 0;
  puStack_28 = &unknown_var_720_ptr;
  iVar1 = *(int *)(param_1 + 0x10);
  iVar5 = iVar1 + 9;
  FUN_1806277c0(param_1,iVar5);
  puVar3 = (uint64_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *puVar3 = 0x6a624f656e656353;
  *(int16_t *)(puVar3 + 1) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar5;
  if (0 < *(int *)(param_2 + 0x4e8)) {
    FUN_1806277c0(param_1,iVar5 + *(int *)(param_2 + 0x4e8));
                    // WARNING: Subroutine does not return
    memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),
           *(uint64_t *)(param_2 + 0x4e0),(longlong)(*(int *)(param_2 + 0x4e8) + 1));
  }
  FUN_1806277c0(param_1,iVar1 + 10);
  *(int16_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8)) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar1 + 10;
  FUN_1806277c0(param_1,iVar1 + 0x16);
  puVar3 = (uint64_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *puVar3 = 0x6143726564616853;
  *(int32_t *)(puVar3 + 1) = 0x2f656863;
  *(int8_t *)((longlong)puVar3 + 0xc) = 0;
  *(int *)(param_1 + 0x10) = iVar1 + 0x16;
  FUN_1806277c0(param_1,iVar1 + 0x1c);
  puVar4 = (int32_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *puVar4 = 0x31443344;
  *(int16_t *)(puVar4 + 1) = 0x2f31;
  *(int8_t *)((longlong)puVar4 + 6) = 0;
  *(int *)(param_1 + 0x10) = iVar1 + 0x1c;
  return;
}



// WARNING: Removing unreachable block (ram,0x0001803b7e17)
// WARNING: Removing unreachable block (ram,0x0001803b7e25)
// WARNING: Removing unreachable block (ram,0x0001803b7e2d)
// WARNING: Removing unreachable block (ram,0x0001803b7e3b)
// WARNING: Removing unreachable block (ram,0x0001803b7e67)
// WARNING: Removing unreachable block (ram,0x0001803b7e9f)
// WARNING: Removing unreachable block (ram,0x0001803b7eb0)
// WARNING: Removing unreachable block (ram,0x0001803b7ec1)
// WARNING: Removing unreachable block (ram,0x0001803b7ecf)
// WARNING: Removing unreachable block (ram,0x0001803b7ed7)
// WARNING: Removing unreachable block (ram,0x0001803b7f50)
// WARNING: Removing unreachable block (ram,0x0001803b7f5b)
// WARNING: Removing unreachable block (ram,0x0001803b7f5f)
// WARNING: Removing unreachable block (ram,0x0001803b7f6f)
// WARNING: Removing unreachable block (ram,0x0001803b7f7b)
// WARNING: Removing unreachable block (ram,0x0001803b7f82)
// WARNING: Removing unreachable block (ram,0x0001803b7fca)
// WARNING: Removing unreachable block (ram,0x0001803b7fcf)
// WARNING: Removing unreachable block (ram,0x0001803b7fe8)
// WARNING: Removing unreachable block (ram,0x0001803b7fed)
// WARNING: Removing unreachable block (ram,0x0001803b800f)
// WARNING: Removing unreachable block (ram,0x0001803b8014)
// WARNING: Removing unreachable block (ram,0x0001803b8039)
// WARNING: Removing unreachable block (ram,0x0001803b803e)
// WARNING: Removing unreachable block (ram,0x0001803b8063)
// WARNING: Removing unreachable block (ram,0x0001803b8068)
// WARNING: Removing unreachable block (ram,0x0001803b8083)
// WARNING: Removing unreachable block (ram,0x0001803b8088)
// WARNING: Removing unreachable block (ram,0x0001803b80df)
// WARNING: Removing unreachable block (ram,0x0001803b80e4)
// WARNING: Removing unreachable block (ram,0x0001803b7eb4)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b7ae0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)
void FUN_1803b7ae0(longlong param_1,longlong param_2,uint64_t param_3,uint64_t param_4)

{
  uint uVar1;
  uint64_t uVar2;
  longlong lVar3;
  longlong lVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  int32_t uVar10;
  void *puStack_110;
  longlong lStack_108;
  uint64_t uStack_f8;
  void *puStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_d0;
  longlong lStack_c8;
  uint uStack_c0;
  uint64_t uStack_b8;
  int8_t auStack_90 [8];
  longlong lStack_88;
  int iStack_80;
  uint64_t uStack_78;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_30 = 0xfffffffffffffffe;
  uVar2 = FUN_180627ae0(&puStack_110,param_2 + 0x27c8,param_3,param_4,0);
  FUN_18005d190(param_1,uVar2);
  puStack_110 = &unknown_var_3456_ptr;
  if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_108 = 0;
  uStack_f8._0_4_ = 0;
  puStack_110 = &unknown_var_720_ptr;
  FUN_180141820(*_DAT_180c86870,param_1);
  FUN_180627ae0(auStack_90,param_2 + 0x27c8);
  uVar10 = 2;
  lVar3 = FUN_180629a40(auStack_90,&puStack_110,0,iStack_80 + -1,2);
  iVar7 = *(int *)(lVar3 + 0x10) + -1;
  if (-1 < iVar7) {
    lVar4 = (longlong)iVar7;
    do {
      if (*(char *)(lVar4 + *(longlong *)(lVar3 + 8)) == '/') goto LAB_1803b7bdb;
      iVar7 = iVar7 + -1;
      lVar4 = lVar4 + -1;
    } while (-1 < lVar4);
  }
  iVar7 = -1;
LAB_1803b7bdb:
  puStack_110 = &unknown_var_3456_ptr;
  if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_108 = 0;
  uStack_f8._0_4_ = 0;
  puStack_110 = &unknown_var_720_ptr;
  lVar3 = FUN_180629a40(auStack_90,&puStack_110,iVar7 + 1,iStack_80 + -1,uVar10);
  if (lStack_88 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  iStack_80 = *(int32_t *)(lVar3 + 0x10);
  lStack_88 = *(uint64_t *)(lVar3 + 8);
  uStack_78 = *(uint64_t *)(lVar3 + 0x18);
  *(int32_t *)(lVar3 + 0x10) = 0;
  *(uint64_t *)(lVar3 + 8) = 0;
  *(uint64_t *)(lVar3 + 0x18) = 0;
  puStack_110 = &unknown_var_3456_ptr;
  if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_108 = 0;
  uStack_f8 = (ulonglong)uStack_f8._4_4_ << 0x20;
  puStack_110 = &unknown_var_720_ptr;
  iVar7 = *(int *)(param_1 + 0x10);
  iVar8 = iVar7 + 9;
  FUN_1806277c0(param_1,iVar8);
  puVar6 = (uint64_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8));
  *puVar6 = 0x6a624f656e656353;
  *(int16_t *)(puVar6 + 1) = 0x2f;
  *(int *)(param_1 + 0x10) = iVar8;
  if (*(int *)(param_2 + 0x4e8) < 1) {
    iVar7 = iVar7 + 10;
    FUN_1806277c0(param_1,iVar7);
    *(int16_t *)((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8)) = 0x2f;
    *(int *)(param_1 + 0x10) = iVar7;
    lVar3 = FUN_1800baa80(auStack_50);
    puStack_d0 = &unknown_var_3456_ptr;
    uStack_b8 = 0;
    lStack_c8 = 0;
    uStack_c0 = 0;
    uVar1 = *(uint *)(lVar3 + 0x10);
    uVar9 = (ulonglong)uVar1;
    if (*(longlong *)(lVar3 + 8) != 0) {
      FUN_1806277c0(&puStack_d0,uVar9);
    }
    if (uVar1 == 0) {
      if (lStack_c8 != 0) {
        *(int8_t *)(uVar9 + lStack_c8) = 0;
      }
      uStack_b8 = CONCAT44(*(int32_t *)(lVar3 + 0x1c),(int32_t)uStack_b8);
      uStack_c0 = uVar1;
      FUN_1806277c0(&puStack_d0,0xf);
      puVar5 = (int32_t *)((ulonglong)uStack_c0 + lStack_c8);
      *puVar5 = 0x72726554;
      puVar5[1] = 0x536e6961;
      puVar5[2] = 0x65646168;
      puVar5[3] = 0x2f7372;
      puStack_f0 = &unknown_var_3456_ptr;
      uStack_d8 = 0;
      uStack_e8 = 0;
      uStack_e0 = 0;
      uStack_c0 = 0xf;
      if (lStack_c8 != 0) {
        FUN_1806277c0(&puStack_f0,0xf);
      }
                    // WARNING: Subroutine does not return
      memcpy(uStack_e8,lStack_c8,0xf);
    }
                    // WARNING: Subroutine does not return
    memcpy(lStack_c8,*(uint64_t *)(lVar3 + 8),uVar9);
  }
  FUN_1806277c0(param_1,iVar8 + *(int *)(param_2 + 0x4e8));
                    // WARNING: Subroutine does not return
  memcpy((ulonglong)*(uint *)(param_1 + 0x10) + *(longlong *)(param_1 + 8),
         *(uint64_t *)(param_2 + 0x4e0),(longlong)(*(int *)(param_2 + 0x4e8) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1803b8120(longlong param_1,int param_2)
void FUN_1803b8120(longlong param_1,int param_2)

{
  longlong lVar1;
  uint64_t uVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  longlong lVar5;
  int32_t *puVar6;
  int8_t auStack_168 [32];
  void *puStack_148;
  int32_t *puStack_140;
  int32_t uStack_138;
  ulonglong uStack_130;
  int32_t uStack_128;
  int32_t uStack_124;
  int32_t uStack_120;
  int32_t uStack_11c;
  int32_t uStack_118;
  int32_t uStack_114;
  int32_t uStack_110;
  int32_t uStack_10c;
  int32_t uStack_108;
  int8_t uStack_104;
  uint64_t uStack_103;
  int32_t uStack_f8;
  int8_t uStack_f4;
  longlong *plStack_f0;
  longlong *plStack_e8;
  uint64_t uStack_e0;
  void *puStack_d8;
  int8_t *puStack_d0;
  int32_t uStack_c8;
  int8_t auStack_c0 [136];
  ulonglong uStack_38;
  
  uStack_e0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_168;
  lVar5 = (longlong)param_2;
  uVar3 = 0x400;
  if (*(char *)(*(longlong *)(param_1 + 0x68) + 0x2964) != '\0') {
    uVar3 = 0x1000;
  }
  if (system_data_ec7a != '\0') {
    uVar3 = 0x2000;
  }
  if (((*(longlong *)(param_1 + 0x1a8) == 0) && (*(longlong *)(param_1 + 0x198) == 0)) &&
     ((*(longlong *)(param_1 + 0x138 + lVar5 * 8) == 0 ||
      ((lVar1 = *(longlong *)(param_1 + 0x120 + lVar5 * 8), lVar1 == 0 ||
       (*(int *)(lVar1 + 0x324) != 1)))))) {
    uStack_120 = 1;
    uStack_11c = 1;
    uStack_114 = 0;
    uStack_110 = 0;
    uStack_10c = 0;
    uStack_108 = 0x3f800000;
    uStack_103 = 1;
    uStack_104 = 0;
    uStack_f4 = 0;
    uStack_118 = 1;
    puStack_148 = &unknown_var_3456_ptr;
    uStack_130 = 0;
    puStack_140 = (int32_t *)0x0;
    uStack_138 = 0;
    uStack_128 = uVar3;
    uStack_124 = uVar3;
    puStack_140 = (int32_t *)FUN_18062b420(_DAT_180c8ed18,0x14,0x13);
    *(int8_t *)puStack_140 = 0;
    uVar3 = FUN_18064e990(puStack_140);
    uStack_130 = CONCAT44(uStack_130._4_4_,uVar3);
    *puStack_140 = 0x6f6c6f63;
    puStack_140[1] = 0x70616d72;
    puStack_140[2] = 0x626c615f;
    puStack_140[3] = 0x5f6f6465;
    puStack_140[4] = 0x5f7472;
    uStack_138 = 0x13;
    FUN_180628380(&puStack_148,param_2);
    uStack_f8 = *(int32_t *)(*(longlong *)(param_1 + 0x68) + 0xa4);
    puStack_d8 = &unknown_var_3432_ptr;
    puStack_d0 = auStack_c0;
    auStack_c0[0] = 0;
    uStack_c8 = uStack_138;
    puVar6 = (int32_t *)&system_buffer_ptr;
    if (puStack_140 != (int32_t *)0x0) {
      puVar6 = puStack_140;
    }
    strcpy_s(auStack_c0,0x80,puVar6);
    puVar4 = (uint64_t *)FUN_1800b1230(_DAT_180c86930,&plStack_e8,&puStack_d8,&uStack_128);
    uVar2 = *puVar4;
    *puVar4 = 0;
    plStack_f0 = *(longlong **)(param_1 + 0x138 + lVar5 * 8);
    *(uint64_t *)(param_1 + 0x138 + lVar5 * 8) = uVar2;
    if (plStack_f0 != (longlong *)0x0) {
      (**(code **)(*plStack_f0 + 0x38))();
    }
    if (plStack_e8 != (longlong *)0x0) {
      (**(code **)(*plStack_e8 + 0x38))();
    }
    puStack_d8 = &unknown_var_720_ptr;
    puStack_148 = &unknown_var_3456_ptr;
    if (puStack_140 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_140 = (int32_t *)0x0;
    uStack_130 = uStack_130 & 0xffffffff00000000;
    puStack_148 = &unknown_var_720_ptr;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (ulonglong)auStack_168);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




