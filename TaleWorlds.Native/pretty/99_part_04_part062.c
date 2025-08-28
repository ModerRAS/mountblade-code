#define SystemInitializer FUN_1808fcb90  // 系统初始化器

#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part062.c - 10 个函数

// 函数: void FUN_1802be0d0(int64_t *param_1,uint64_t param_2)
void FUN_1802be0d0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t *puVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  
  lVar7 = param_1[1];
  if ((uint64_t)((param_1[2] - lVar7) / 0x90) < param_2) {
    lVar4 = *param_1;
    lVar1 = (lVar7 - lVar4) / 0x90;
    uVar8 = lVar1 * 2;
    if (lVar1 == 0) {
      uVar8 = 1;
    }
    if (uVar8 < lVar1 + param_2) {
      uVar8 = lVar1 + param_2;
    }
    lVar1 = 0;
    if (uVar8 != 0) {
      lVar1 = FUN_18062b420(system_memory_pool_ptr,uVar8 * 0x90,(char)param_1[3]);
      lVar7 = param_1[1];
      lVar4 = *param_1;
    }
    FUN_1802bf000(&lStackX_8,lVar4,lVar7,lVar1);
    if (param_2 != 0) {
      puVar2 = (int32_t *)(lStackX_8 + 0x80);
      uVar6 = param_2;
      do {
        *(uint64_t *)(puVar2 + -0x1a) = 0;
        *(uint64_t *)(puVar2 + -0x14) = 0;
        *(uint64_t *)(puVar2 + -0x12) = 0;
        *(uint64_t *)(puVar2 + -0x10) = 0;
        puVar2[-0xe] = 3;
        *(uint64_t *)(puVar2 + -10) = 0;
        puVar2[-8] = 0x41c64e6d;
        plStackX_10 = (int64_t *)(puVar2 + -6);
        *plStackX_10 = 0;
        *(uint64_t *)(puVar2 + -4) = 0;
        *(uint64_t *)(puVar2 + -2) = 0;
        *puVar2 = 0x1a;
        puVar2 = puVar2 + 0x24;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    lVar5 = param_2 * 0x90 + lStackX_8;
    lVar7 = param_1[1];
    lVar4 = *param_1;
    lVar3 = lVar4;
    lStackX_8 = lVar4;
    if (lVar4 != lVar7) {
      do {
        lStackX_8 = lVar3;
        FUN_1802b13d0(lVar3);
        plStackX_10 = (int64_t *)(lVar3 + 0x68);
        if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        if (*(int64_t **)(lVar3 + 0x58) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar3 + 0x58) + 0x38))();
        }
        lStackX_18 = lVar3 + 0x30;
        FUN_1802bfac0();
        if (*(int64_t **)(lVar3 + 0x18) != (int64_t *)0x0) {
          (**(code **)(**(int64_t **)(lVar3 + 0x18) + 0x38))();
        }
        lVar3 = lVar3 + 0x90;
      } while (lVar3 != lVar7);
      lVar4 = *param_1;
      lStackX_8 = lVar3;
    }
    if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(lVar4);
    }
    *param_1 = lVar1;
    param_1[1] = lVar5;
    param_1[2] = uVar8 * 0x90 + lVar1;
  }
  else {
    if (param_2 != 0) {
      puVar2 = (int32_t *)(lVar7 + 0x80);
      uVar8 = param_2;
      do {
        *(uint64_t *)(puVar2 + -0x1a) = 0;
        *(uint64_t *)(puVar2 + -0x14) = 0;
        *(uint64_t *)(puVar2 + -0x12) = 0;
        *(uint64_t *)(puVar2 + -0x10) = 0;
        puVar2[-0xe] = 3;
        *(uint64_t *)(puVar2 + -10) = 0;
        puVar2[-8] = 0x41c64e6d;
        *(uint64_t *)(puVar2 + -6) = 0;
        *(uint64_t *)(puVar2 + -4) = 0;
        *(uint64_t *)(puVar2 + -2) = 0;
        *puVar2 = 0x1a;
        puVar2 = puVar2 + 0x24;
        uVar8 = uVar8 - 1;
      } while (uVar8 != 0);
      lVar7 = param_1[1];
    }
    param_1[1] = param_2 * 0x90 + lVar7;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802be360(int64_t *param_1,int64_t param_2)
void FUN_1802be360(int64_t *param_1,int64_t param_2)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t lStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  
  lVar4 = 0;
  if (param_2 != 0) {
    lVar4 = FUN_18062b420(system_memory_pool_ptr,param_2 * 0x88,(char)param_1[3]);
  }
  FUN_1802bf160(&lStackX_10,*param_1,param_1[1],lVar4);
  plVar2 = (int64_t *)param_1[1];
  plVar5 = (int64_t *)*param_1;
  if (plVar5 != plVar2) {
    do {
      lVar3 = *plVar5;
      if (lVar3 != 0) {
        piVar1 = (int *)(lVar3 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(uint64_t *)(lVar3 + 0xf0) = 0;
        }
      }
      plStackX_18 = plVar5 + 0xd;
      if (*plStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plStackX_20 = plVar5 + 9;
      if (*plStackX_20 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      FUN_1802c00d0();
      if (plVar5[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plVar5 = plVar5 + 0x11;
    } while (plVar5 != plVar2);
    plVar5 = (int64_t *)*param_1;
  }
  if (plVar5 == (int64_t *)0x0) {
    *param_1 = lVar4;
    param_1[1] = lStackX_10;
    param_1[2] = param_2 * 0x88 + lVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802be4a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802be4a0(uint64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  int32_t *puVar9;
  
  puVar4 = (int32_t *)0x0;
  if (param_2 != 0) {
    puVar4 = (int32_t *)
             FUN_18062b420(system_memory_pool_ptr,param_2 * 0x28,*(int8_t *)(param_1 + 3),param_4,
                           0xfffffffffffffffe);
  }
  puVar6 = (int32_t *)param_1[1];
  puVar7 = (int32_t *)*param_1;
  puVar5 = puVar4;
  if (puVar7 != puVar6) {
    puVar8 = (uint64_t *)(puVar4 + 4);
    puVar9 = puVar7 + 8;
    do {
      *puVar5 = *puVar7;
      puVar1 = puVar8 + -1;
      *puVar1 = 0;
      *puVar8 = 0;
      puVar8[1] = 0;
      *(int32_t *)(puVar8 + 2) = *puVar9;
      uVar3 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar9 + -6);
      *(uint64_t *)(puVar9 + -6) = uVar3;
      uVar3 = *puVar8;
      *puVar8 = *(uint64_t *)(puVar9 + -4);
      *(uint64_t *)(puVar9 + -4) = uVar3;
      uVar3 = puVar8[1];
      puVar8[1] = *(uint64_t *)(puVar9 + -2);
      *(uint64_t *)(puVar9 + -2) = uVar3;
      uVar2 = *(int32_t *)(puVar8 + 2);
      *(int32_t *)(puVar8 + 2) = *puVar9;
      *puVar9 = uVar2;
      puVar7 = puVar7 + 10;
      puVar9 = puVar9 + 10;
      puVar5 = puVar5 + 10;
      puVar8 = puVar8 + 5;
    } while (puVar7 != puVar6);
    puVar6 = (int32_t *)param_1[1];
    puVar7 = (int32_t *)*param_1;
  }
  if (puVar7 != puVar6) {
    do {
      FUN_1802c00d0();
      puVar7 = puVar7 + 10;
    } while (puVar7 != puVar6);
    puVar7 = (int32_t *)*param_1;
  }
  if (puVar7 == (int32_t *)0x0) {
    *param_1 = puVar4;
    param_1[1] = puVar5;
    param_1[2] = puVar4 + param_2 * 10;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(puVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802be600(int64_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802be600(int64_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  int32_t *puVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int32_t *puVar10;
  int64_t lVar11;
  
  puVar6 = (int32_t *)param_1[1];
  puVar10 = (int32_t *)*param_1;
  lVar8 = ((int64_t)puVar6 - (int64_t)puVar10) / 0x28;
  puVar4 = (int32_t *)0x0;
  if (lVar8 == 0) {
    lVar8 = 1;
  }
  else {
    lVar8 = lVar8 * 2;
    if (lVar8 == 0) goto LAB_1802be682;
  }
  puVar4 = (int32_t *)
           FUN_18062b420(system_memory_pool_ptr,lVar8 * 0x28,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar6 = (int32_t *)param_1[1];
  puVar10 = (int32_t *)*param_1;
LAB_1802be682:
  puVar5 = puVar4;
  if (puVar10 != puVar6) {
    lVar11 = (int64_t)puVar4 - (int64_t)puVar10;
    puVar10 = puVar10 + 8;
    do {
      *puVar5 = puVar10[-8];
      puVar9 = (uint64_t *)((int64_t)puVar10 + lVar11 + -0x18);
      *puVar9 = 0;
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar10) = 0;
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar10) = 0;
      *(int32_t *)(lVar11 + (int64_t)puVar10) = *puVar10;
      uVar3 = *puVar9;
      *puVar9 = *(uint64_t *)(puVar10 + -6);
      *(uint64_t *)(puVar10 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar10);
      *(uint64_t *)(lVar11 + -0x10 + (int64_t)puVar10) = *(uint64_t *)(puVar10 + -4);
      *(uint64_t *)(puVar10 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar11 + -8 + (int64_t)puVar10);
      *(uint64_t *)(lVar11 + -8 + (int64_t)puVar10) = *(uint64_t *)(puVar10 + -2);
      *(uint64_t *)(puVar10 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar11 + (int64_t)puVar10);
      *(int32_t *)(lVar11 + (int64_t)puVar10) = *puVar10;
      *puVar10 = uVar2;
      puVar5 = puVar5 + 10;
      puVar1 = puVar10 + 2;
      puVar10 = puVar10 + 10;
    } while (puVar1 != puVar6);
  }
  *puVar5 = *param_2;
  puVar9 = (uint64_t *)(puVar5 + 2);
  *puVar9 = 0;
  *(uint64_t *)(puVar5 + 4) = 0;
  *(uint64_t *)(puVar5 + 6) = 0;
  puVar5[8] = param_2[8];
  uVar3 = *puVar9;
  *puVar9 = *(uint64_t *)(param_2 + 2);
  *(uint64_t *)(param_2 + 2) = uVar3;
  uVar3 = *(uint64_t *)(puVar5 + 4);
  *(uint64_t *)(puVar5 + 4) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_2 + 4) = uVar3;
  uVar3 = *(uint64_t *)(puVar5 + 6);
  *(uint64_t *)(puVar5 + 6) = *(uint64_t *)(param_2 + 6);
  *(uint64_t *)(param_2 + 6) = uVar3;
  uVar2 = puVar5[8];
  puVar5[8] = param_2[8];
  param_2[8] = uVar2;
  lVar11 = param_1[1];
  lVar7 = *param_1;
  if (lVar7 != lVar11) {
    do {
      FUN_1802c00d0();
      lVar7 = lVar7 + 0x28;
    } while (lVar7 != lVar11);
    lVar7 = *param_1;
  }
  if (lVar7 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar5 + 10);
    param_1[2] = (int64_t)(puVar4 + lVar8 * 10);
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(lVar7);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802be7f0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)
void FUN_1802be7f0(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lStackX_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  
  lVar6 = param_1[1];
  lVar2 = *param_1;
  lVar5 = (lVar6 - lVar2) / 0x90;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) {
      lVar1 = 0;
      goto LAB_1802be879;
    }
  }
  lVar1 = FUN_18062b420(system_memory_pool_ptr,lVar5 * 0x90,(char)param_1[3]);
  lVar6 = param_1[1];
  lVar2 = *param_1;
LAB_1802be879:
  FUN_1802bf000(&lStackX_8,lVar2,lVar6,lVar1);
  FUN_1802b11f0(lStackX_8,*param_2,*param_3,*param_4);
  lVar6 = lStackX_8 + 0x90;
  lVar2 = param_1[1];
  lVar4 = *param_1;
  lVar3 = lVar4;
  lStackX_8 = lVar4;
  if (lVar4 != lVar2) {
    do {
      lStackX_8 = lVar3;
      FUN_1802b13d0(lVar3);
      plStackX_10 = (int64_t *)(lVar3 + 0x68);
      if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      if (*(int64_t **)(lVar3 + 0x58) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x58) + 0x38))();
      }
      lStackX_18 = lVar3 + 0x30;
      FUN_1802bfac0();
      if (*(int64_t **)(lVar3 + 0x18) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar3 + 0x18) + 0x38))();
      }
      lVar3 = lVar3 + 0x90;
    } while (lVar3 != lVar2);
    lVar4 = *param_1;
    lStackX_8 = lVar3;
  }
  if (lVar4 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900(lVar4);
  }
  *param_1 = lVar1;
  param_1[1] = lVar6;
  param_1[2] = lVar5 * 0x90 + lVar1;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802be960(int64_t *param_1,uint64_t *param_2,uint64_t *param_3)
void FUN_1802be960(int64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  int *piVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  
  lVar8 = param_1[1];
  lVar5 = *param_1;
  lVar7 = (lVar8 - lVar5) / 0x88;
  lVar4 = 0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_1802be9e3;
  }
  lVar4 = FUN_18062b420(system_memory_pool_ptr,lVar7 * 0x88,(char)param_1[3]);
  lVar8 = param_1[1];
  lVar5 = *param_1;
LAB_1802be9e3:
  FUN_1802bf160(&plStackX_8,lVar5,lVar8,lVar4);
  FUN_1802b68c0(plStackX_8,*param_2,*param_3);
  plVar2 = plStackX_8 + 0x11;
  plVar3 = (int64_t *)param_1[1];
  plVar6 = (int64_t *)*param_1;
  plStackX_8 = plVar6;
  if (plVar6 != plVar3) {
    do {
      lVar8 = *plVar6;
      if (lVar8 != 0) {
        piVar1 = (int *)(lVar8 + 8);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          *(uint64_t *)(lVar8 + 0xf0) = 0;
        }
      }
      plStackX_10 = plVar6 + 0xd;
      plStackX_8 = plVar6;
      if (*plStackX_10 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plStackX_18 = plVar6 + 9;
      if (*plStackX_18 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plStackX_20 = plVar6 + 5;
      FUN_1802c00d0();
      if (plVar6[1] != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      plStackX_8 = plVar6 + 0x11;
      plVar6 = plStackX_8;
    } while (plStackX_8 != plVar3);
    plVar6 = (int64_t *)*param_1;
  }
  if (plVar6 == (int64_t *)0x0) {
    *param_1 = lVar4;
    param_1[1] = (int64_t)plVar2;
    param_1[2] = lVar7 * 0x88 + lVar4;
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900(plVar6);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802beaf0(int64_t *param_1,uint64_t param_2)
void FUN_1802beaf0(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  
  puVar8 = (uint64_t *)param_1[1];
  if (param_2 <= (uint64_t)((param_1[2] - (int64_t)puVar8) / 0x70)) {
    if (param_2 != 0) {
                    // WARNING: Subroutine does not return
      memset(puVar8,0,0x70);
    }
    param_1[1] = (int64_t)puVar8;
    return;
  }
  puVar7 = (uint64_t *)*param_1;
  lVar1 = ((int64_t)puVar8 - (int64_t)puVar7) / 0x70;
  uVar10 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar10 = 1;
  }
  if (uVar10 < lVar1 + param_2) {
    uVar10 = lVar1 + param_2;
  }
  if (uVar10 == 0) {
    puVar6 = (uint64_t *)0x0;
    puVar9 = puVar6;
  }
  else {
    puVar6 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar10 * 0x70,(char)param_1[3]);
    puVar7 = (uint64_t *)*param_1;
    puVar8 = (uint64_t *)param_1[1];
    puVar9 = puVar6;
  }
  for (; puVar7 != puVar8; puVar7 = puVar7 + 0xe) {
    uVar5 = puVar7[1];
    *puVar6 = *puVar7;
    puVar6[1] = uVar5;
    uVar5 = puVar7[3];
    puVar6[2] = puVar7[2];
    puVar6[3] = uVar5;
    uVar5 = puVar7[5];
    puVar6[4] = puVar7[4];
    puVar6[5] = uVar5;
    uVar5 = puVar7[7];
    puVar6[6] = puVar7[6];
    puVar6[7] = uVar5;
    uVar5 = puVar7[9];
    puVar6[8] = puVar7[8];
    puVar6[9] = uVar5;
    uVar5 = puVar7[0xb];
    puVar6[10] = puVar7[10];
    puVar6[0xb] = uVar5;
    uVar2 = *(int32_t *)((int64_t)puVar7 + 100);
    uVar3 = *(int32_t *)(puVar7 + 0xd);
    uVar4 = *(int32_t *)((int64_t)puVar7 + 0x6c);
    *(int32_t *)(puVar6 + 0xc) = *(int32_t *)(puVar7 + 0xc);
    *(int32_t *)((int64_t)puVar6 + 100) = uVar2;
    *(int32_t *)(puVar6 + 0xd) = uVar3;
    *(int32_t *)((int64_t)puVar6 + 0x6c) = uVar4;
    puVar6 = puVar6 + 0xe;
  }
  if (param_2 != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar6,0,0x70);
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *param_1 = (int64_t)puVar9;
  param_1[2] = (int64_t)(puVar9 + uVar10 * 0xe);
  param_1[1] = (int64_t)puVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802beb3e(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4)
void FUN_1802beb3e(uint64_t *param_1,int64_t param_2,uint64_t param_3,int64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t *puVar7;
  int64_t *unaff_R14;
  uint64_t uVar8;
  
  lVar6 = SUB168(SEXT816(param_4) * SEXT816(param_2),8);
  lVar6 = (lVar6 >> 5) - (lVar6 >> 0x3f);
  uVar8 = lVar6 * 2;
  if (lVar6 == 0) {
    uVar8 = 1;
  }
  if (uVar8 < (uint64_t)(lVar6 + unaff_RBP)) {
    uVar8 = lVar6 + unaff_RBP;
  }
  if (uVar8 == 0) {
    puVar5 = (uint64_t *)0x0;
    puVar7 = puVar5;
  }
  else {
    puVar5 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,uVar8 * 0x70,(char)unaff_R14[3]);
    param_1 = (uint64_t *)*unaff_R14;
    unaff_RDI = (uint64_t *)unaff_R14[1];
    puVar7 = puVar5;
  }
  for (; param_1 != unaff_RDI; param_1 = param_1 + 0xe) {
    uVar4 = param_1[1];
    *puVar5 = *param_1;
    puVar5[1] = uVar4;
    uVar4 = param_1[3];
    puVar5[2] = param_1[2];
    puVar5[3] = uVar4;
    uVar4 = param_1[5];
    puVar5[4] = param_1[4];
    puVar5[5] = uVar4;
    uVar4 = param_1[7];
    puVar5[6] = param_1[6];
    puVar5[7] = uVar4;
    uVar4 = param_1[9];
    puVar5[8] = param_1[8];
    puVar5[9] = uVar4;
    uVar4 = param_1[0xb];
    puVar5[10] = param_1[10];
    puVar5[0xb] = uVar4;
    uVar1 = *(int32_t *)((int64_t)param_1 + 100);
    uVar2 = *(int32_t *)(param_1 + 0xd);
    uVar3 = *(int32_t *)((int64_t)param_1 + 0x6c);
    *(int32_t *)(puVar5 + 0xc) = *(int32_t *)(param_1 + 0xc);
    *(int32_t *)((int64_t)puVar5 + 100) = uVar1;
    *(int32_t *)(puVar5 + 0xd) = uVar2;
    *(int32_t *)((int64_t)puVar5 + 0x6c) = uVar3;
    puVar5 = puVar5 + 0xe;
  }
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    memset(puVar5,0,0x70);
  }
  if (*unaff_R14 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *unaff_R14 = (int64_t)puVar7;
  unaff_R14[2] = (int64_t)(puVar7 + uVar8 * 0xe);
  unaff_R14[1] = (int64_t)puVar5;
  return;
}



void thunk_FUN_18064e900(void)

{
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}






// 函数: void FUN_1802bec62(void)
void FUN_1802bec62(void)

{
  int64_t unaff_RBP;
  uint64_t unaff_RDI;
  int64_t unaff_R14;
  
  if (unaff_RBP != 0) {
                    // WARNING: Subroutine does not return
    memset();
  }
  *(uint64_t *)(unaff_R14 + 8) = unaff_RDI;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802bed10(uint64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
void FUN_1802bed10(uint64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  
  if (param_3 != param_4) {
    uVar8 = (int64_t)param_4 - (int64_t)param_3 >> 3;
    plVar4 = (int64_t *)param_1[1];
    if ((uint64_t)(param_1[2] - (int64_t)plVar4 >> 3) < uVar8) {
      plVar3 = (int64_t *)*param_1;
      lVar6 = (int64_t)plVar4 - (int64_t)plVar3 >> 3;
      uVar5 = lVar6 * 2;
      if (lVar6 == 0) {
        uVar5 = 1;
      }
      if (uVar5 <= lVar6 + uVar8) {
        uVar5 = lVar6 + uVar8;
      }
      plVar4 = (int64_t *)0x0;
      plVar2 = plVar4;
      if (uVar5 != 0) {
        plVar4 = (int64_t *)
                 FUN_18062b420(system_memory_pool_ptr,uVar5 * 8,*(int8_t *)(param_1 + 3),param_4,
                               0xfffffffffffffffe);
        plVar3 = (int64_t *)*param_1;
        plVar2 = plVar4;
      }
      for (; plVar3 != param_2; plVar3 = plVar3 + 1) {
        *plVar4 = *plVar3;
        *plVar3 = 0;
        plVar4 = plVar4 + 1;
      }
      do {
        plVar3 = (int64_t *)*param_3;
        *plVar4 = (int64_t)plVar3;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))();
        }
        param_3 = param_3 + 1;
        plVar4 = plVar4 + 1;
      } while (param_3 != param_4);
      plVar3 = (int64_t *)param_1[1];
      if (param_2 != plVar3) {
        do {
          *plVar4 = *param_2;
          *param_2 = 0;
          param_2 = param_2 + 1;
          plVar4 = plVar4 + 1;
        } while (param_2 != plVar3);
        plVar3 = (int64_t *)param_1[1];
      }
      plVar7 = (int64_t *)*param_1;
      if (plVar7 != plVar3) {
        do {
          if ((int64_t *)*plVar7 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar3);
        plVar7 = (int64_t *)*param_1;
      }
      if (plVar7 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900(plVar7);
      }
      *param_1 = plVar2;
      param_1[1] = plVar4;
      param_1[2] = plVar2 + uVar5;
    }
    else {
      uVar5 = (int64_t)plVar4 - (int64_t)param_2 >> 3;
      if (uVar8 < uVar5) {
        plVar2 = plVar4 + -uVar8;
        plVar3 = plVar4;
        if (plVar2 != plVar4) {
          do {
            *plVar3 = *plVar2;
            *plVar2 = 0;
            plVar2 = plVar2 + 1;
            plVar3 = plVar3 + 1;
          } while (plVar2 != plVar4);
          plVar4 = (int64_t *)param_1[1];
        }
        for (lVar6 = (int64_t)((int64_t)plVar4 + (uVar8 * -8 - (int64_t)param_2)) >> 3; 0 < lVar6
            ; lVar6 = lVar6 + -1) {
          plVar4 = plVar4 + -1;
          lVar1 = plVar4[-uVar8];
          plVar4[-uVar8] = 0;
          plVar3 = (int64_t *)*plVar4;
          *plVar4 = lVar1;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        FUN_18017b5e0(param_3,param_4,param_2);
        param_1[1] = param_1[1] + uVar8 * 8;
      }
      else {
        FUN_18017b680(param_3 + uVar5,param_4,plVar4);
        plVar4 = (int64_t *)param_1[1];
        if (param_2 != plVar4) {
          plVar3 = param_2;
          do {
            *(int64_t *)
             ((int64_t)plVar4 + ((uVar8 - uVar5) * 8 - (int64_t)param_2) + (int64_t)plVar3) =
                 *plVar3;
            *plVar3 = 0;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar4);
        }
        param_2 = param_2 + uVar5;
        if (0 < (int64_t)uVar5) {
          lVar6 = (int64_t)(param_3 + uVar5) - (int64_t)param_2;
          do {
            param_2 = param_2 + -1;
            plVar4 = *(int64_t **)(lVar6 + (int64_t)param_2);
            if (plVar4 != (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plVar3 = (int64_t *)*param_2;
            *param_2 = (int64_t)plVar4;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            uVar5 = uVar5 - 1;
          } while (0 < (int64_t)uVar5);
        }
        param_1[1] = param_1[1] + uVar8 * 8;
      }
    }
  }
  return;
}



int64_t * FUN_1802bf000(int64_t *param_1,int32_t *param_2,int32_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int8_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x12;
    do {
      puVar4 = (int8_t *)*param_1;
      *(uint64_t *)(puVar4 + 0x18) = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = 0;
      puVar1 = (uint64_t *)(puVar4 + 0x30);
      *puVar1 = 0;
      *(uint64_t *)(puVar4 + 0x38) = 0;
      *(uint64_t *)(puVar4 + 0x40) = 0;
      *(int32_t *)(puVar4 + 0x48) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = *(uint64_t *)(puVar4 + 0x38);
      *(uint64_t *)(puVar4 + 0x38) = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = *(uint64_t *)(puVar4 + 0x40);
      *(uint64_t *)(puVar4 + 0x40) = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0x48);
      *(int32_t *)(puVar4 + 0x48) = *puVar6;
      *puVar6 = uVar3;
      *(uint64_t *)(puVar4 + 0x58) = *(uint64_t *)(puVar6 + 4);
      *(uint64_t *)(puVar6 + 4) = 0;
      *(int32_t *)(puVar4 + 0x60) = 0x41c64e6d;
      *(uint64_t *)(puVar4 + 0x68) = 0;
      *(uint64_t *)(puVar4 + 0x70) = 0;
      *(uint64_t *)(puVar4 + 0x78) = 0;
      *(int32_t *)(puVar4 + 0x80) = 0x1a;
      *(int32_t *)(puVar4 + 100) = puVar6[7];
      *puVar4 = *(int8_t *)(puVar6 + -0x12);
      puVar4[1] = *(int8_t *)((int64_t)puVar6 + -0x47);
      *(int32_t *)(puVar4 + 4) = puVar6[-0x11];
      *(int32_t *)(puVar4 + 8) = puVar6[-0x10];
      *(int32_t *)(puVar4 + 0xc) = puVar6[-0xf];
      *(int32_t *)(puVar4 + 0x10) = puVar6[-0xe];
      *(int32_t *)(puVar4 + 0x14) = puVar6[-0xd];
      *(uint64_t *)(puVar4 + 0x20) = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = 0;
      *(uint64_t *)(puVar4 + 0x28) = *(uint64_t *)(puVar6 + -8);
      *(uint64_t *)(puVar6 + -8) = 0;
      *(uint64_t *)(puVar4 + 0x50) = *(uint64_t *)(puVar6 + 2);
      *(uint64_t *)(puVar6 + 2) = 0;
      *(int32_t *)(puVar4 + 0x88) = puVar6[0x10];
      FUN_18005c830();
      *param_1 = *param_1 + 0x90;
      puVar2 = puVar6 + 0x12;
      puVar6 = puVar6 + 0x24;
    } while (puVar2 != param_3);
  }
  return param_1;
}



int64_t * FUN_1802bf160(int64_t *param_1,int32_t *param_2,int32_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int32_t *puVar6;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar6 = param_2 + 0x18;
    do {
      puVar4 = (uint64_t *)*param_1;
      puVar4[1] = 0;
      puVar4[2] = 0;
      puVar4[3] = 0;
      *(int32_t *)(puVar4 + 4) = 3;
      puVar1 = puVar4 + 5;
      *puVar1 = 0;
      puVar4[6] = 0;
      puVar4[7] = 0;
      *(int32_t *)(puVar4 + 8) = puVar6[-8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -0xe);
      *(uint64_t *)(puVar6 + -0xe) = uVar5;
      uVar5 = puVar4[6];
      puVar4[6] = *(uint64_t *)(puVar6 + -0xc);
      *(uint64_t *)(puVar6 + -0xc) = uVar5;
      uVar5 = puVar4[7];
      puVar4[7] = *(uint64_t *)(puVar6 + -10);
      *(uint64_t *)(puVar6 + -10) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 8);
      *(int32_t *)(puVar4 + 8) = puVar6[-8];
      puVar6[-8] = uVar3;
      puVar1 = puVar4 + 9;
      *puVar1 = 0;
      puVar4[10] = 0;
      puVar4[0xb] = 0;
      *(int32_t *)(puVar4 + 0xc) = *puVar6;
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + -6);
      *(uint64_t *)(puVar6 + -6) = uVar5;
      uVar5 = puVar4[10];
      puVar4[10] = *(uint64_t *)(puVar6 + -4);
      *(uint64_t *)(puVar6 + -4) = uVar5;
      uVar5 = puVar4[0xb];
      puVar4[0xb] = *(uint64_t *)(puVar6 + -2);
      *(uint64_t *)(puVar6 + -2) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0xc);
      *(int32_t *)(puVar4 + 0xc) = *puVar6;
      *puVar6 = uVar3;
      puVar1 = puVar4 + 0xd;
      *puVar1 = 0;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0;
      *(int32_t *)(puVar4 + 0x10) = puVar6[8];
      uVar5 = *puVar1;
      *puVar1 = *(uint64_t *)(puVar6 + 2);
      *(uint64_t *)(puVar6 + 2) = uVar5;
      uVar5 = puVar4[0xe];
      puVar4[0xe] = *(uint64_t *)(puVar6 + 4);
      *(uint64_t *)(puVar6 + 4) = uVar5;
      uVar5 = puVar4[0xf];
      puVar4[0xf] = *(uint64_t *)(puVar6 + 6);
      *(uint64_t *)(puVar6 + 6) = uVar5;
      uVar3 = *(int32_t *)(puVar4 + 0x10);
      *(int32_t *)(puVar4 + 0x10) = puVar6[8];
      puVar6[8] = uVar3;
      *puVar4 = *(uint64_t *)(puVar6 + -0x18);
      *(uint64_t *)(puVar6 + -0x18) = 0;
      *param_1 = (int64_t)(puVar4 + 0x11);
      puVar2 = puVar6 + 10;
      puVar6 = puVar6 + 0x22;
    } while (puVar2 != param_3);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1802bf350(uint64_t param_1,uint64_t param_2)

{
  int32_t *puVar1;
  
  if (*(int *)(*(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8) +
              0x48) < system_system_config_config) {
    SystemInitializer(&system_ptr_8db0);
    if (system_system_config_config == -1) {
      system_system_config_config = &system_data_buffer_ptr;
      system_system_config_config = 0;
      system_system_config_config = (int32_t *)0x0;
      system_system_config_config = 0;
      FUN_1806277c0(&system_ptr_8db8,0x23);
      puVar1 = system_system_config_config;
      *system_system_config_config = 0x74726170;
      puVar1[1] = 0x656c6369;
      puVar1[2] = 0x7379735f;
      puVar1[3] = 0x5f6d6574;
      puVar1[4] = 0x74736e69;
      puVar1[5] = 0x65636e61;
      puVar1[6] = 0x6f635f64;
      puVar1[7] = 0x6e6f706d;
      puVar1[8] = 0x746e65;
      system_system_config_config = 0x23;
      FUN_1808fc820(FUN_180941d50);
      FUN_1808fcb30(&system_ptr_8db0);
    }
  }
  FUN_180627ae0(param_2,&system_ptr_8db8);
  return param_2;
}



int64_t * FUN_1802bf4f0(int64_t param_1,int64_t *param_2,int param_3)

{
  int64_t *plVar1;
  
  plVar1 = *(int64_t **)(*(int64_t *)(param_1 + 0xf50) + (int64_t)param_3 * 8);
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  return param_2;
}






