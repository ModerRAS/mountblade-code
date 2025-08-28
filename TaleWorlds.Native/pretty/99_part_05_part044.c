#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part044.c - 10 个函数

// 函数: void FUN_1802f56ba(uint64_t *param_1,int64_t *param_2,int64_t param_3,int64_t *param_4)
void FUN_1802f56ba(uint64_t *param_1,int64_t *param_2,int64_t param_3,int64_t *param_4)

{
  int64_t in_RAX;
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  int64_t *unaff_RSI;
  int64_t *plVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  
  puVar7 = (uint64_t *)param_1[1];
  uVar4 = (int64_t)param_4 - param_3 >> 3;
  if ((uint64_t)(in_RAX - (int64_t)puVar7 >> 3) < uVar4) {
    plVar3 = (int64_t *)*param_1;
    lVar8 = (int64_t)puVar7 - (int64_t)plVar3 >> 3;
    uVar5 = lVar8 * 2;
    if (lVar8 == 0) {
      uVar5 = 1;
    }
    if (uVar5 <= lVar8 + uVar4) {
      uVar5 = lVar8 + uVar4;
    }
    plVar9 = (int64_t *)0x0;
    plVar10 = plVar9;
    if (uVar5 != 0) {
      plVar9 = (int64_t *)((int64_t)param_1 + param_1[0x103] + 0x18);
      param_1[0x103] = param_1[0x103] + uVar5 * 8;
      plVar3 = (int64_t *)*param_1;
      plVar10 = plVar9;
    }
    for (; plVar3 != param_2; plVar3 = plVar3 + 1) {
      *plVar9 = *plVar3;
      plVar9 = plVar9 + 1;
      *plVar3 = 0;
    }
    do {
      plVar3 = (int64_t *)*unaff_RSI;
      *plVar9 = (int64_t)plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      unaff_RSI = unaff_RSI + 1;
      plVar9 = plVar9 + 1;
    } while (unaff_RSI != param_4);
    plVar3 = (int64_t *)param_1[1];
    if (param_2 != plVar3) {
      do {
        *plVar9 = *param_2;
        plVar9 = plVar9 + 1;
        *param_2 = 0;
        param_2 = param_2 + 1;
      } while (param_2 != plVar3);
      plVar3 = (int64_t *)param_1[1];
    }
    for (plVar6 = (int64_t *)*param_1; plVar6 != plVar3; plVar6 = plVar6 + 1) {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
    }
    *param_1 = plVar10;
    param_1[1] = plVar9;
    param_1[2] = plVar10 + uVar5;
  }
  else {
    uVar5 = (int64_t)puVar7 - (int64_t)param_2 >> 3;
    if (uVar4 < uVar5) {
      puVar1 = puVar7 + -uVar4;
      puVar2 = puVar7;
      if (uVar4 * -8 != 0) {
        do {
          *puVar2 = *puVar1;
          *puVar1 = 0;
          puVar1 = puVar1 + 1;
          puVar2 = puVar2 + 1;
        } while (puVar1 != puVar7);
        puVar7 = (uint64_t *)param_1[1];
      }
      FUN_1802f58f0(param_2,puVar7 + -uVar4);
      FUN_18017b5e0();
      param_1[1] = param_1[1] + uVar4 * 8;
    }
    else {
      FUN_18017b680(unaff_RSI + uVar5,param_4);
      plVar9 = (int64_t *)param_1[1];
      plVar3 = plVar9 + (uVar4 - uVar5);
      if (param_2 != plVar9) {
        do {
          *plVar3 = *param_2;
          plVar3 = plVar3 + 1;
          *param_2 = 0;
          param_2 = param_2 + 1;
        } while (param_2 != plVar9);
      }
      FUN_1802f5980();
      param_1[1] = param_1[1] + uVar4 * 8;
    }
  }
  return;
}






// 函数: void FUN_1802f58ed(void)
void FUN_1802f58ed(void)

{
  return;
}



int64_t * FUN_1802f58f0(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (0 < lVar3) {
    param_2 = param_2 - (int64_t)param_3;
    do {
      param_3 = param_3 + -1;
      lVar1 = *(int64_t *)(param_2 + (int64_t)param_3);
      *(uint64_t *)(param_2 + (int64_t)param_3) = 0;
      plVar2 = (int64_t *)*param_3;
      *param_3 = lVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = lVar3 + -1;
    } while (0 < lVar3);
  }
  return param_3;
}



int64_t * FUN_1802f5980(int64_t param_1,int64_t param_2,int64_t *param_3)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  
  lVar3 = param_2 - param_1 >> 3;
  if (0 < lVar3) {
    param_2 = param_2 - (int64_t)param_3;
    do {
      param_3 = param_3 + -1;
      plVar1 = *(int64_t **)(param_2 + (int64_t)param_3);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (int64_t *)*param_3;
      *param_3 = (int64_t)plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      lVar3 = lVar3 + -1;
    } while (0 < lVar3);
  }
  return param_3;
}






// 函数: void FUN_1802f5a20(int64_t param_1,uint64_t param_2)
void FUN_1802f5a20(int64_t param_1,uint64_t param_2)

{
  uint64_t uVar1;
  int64_t lVar2;
  int *piVar3;
  uint64_t uVar4;
  
  lVar2 = FUN_1802f5aa0();
  uVar4 = 0;
  if (*(int64_t *)(param_1 + 0x10) != 0) {
    do {
      piVar3 = *(int **)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
      if (piVar3 != (int *)0x0) {
        do {
          uVar1 = (uint64_t)(int64_t)*piVar3 % (param_2 & 0xffffffff);
          *(uint64_t *)(*(int64_t *)(param_1 + 8) + uVar4 * 8) = *(uint64_t *)(piVar3 + 4);
          *(uint64_t *)(piVar3 + 4) = *(uint64_t *)(lVar2 + uVar1 * 8);
          *(int **)(lVar2 + uVar1 * 8) = piVar3;
          piVar3 = *(int **)(*(int64_t *)(param_1 + 8) + uVar4 * 8);
        } while (piVar3 != (int *)0x0);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint64_t *)(param_1 + 0x10));
  }
  *(int64_t *)(param_1 + 8) = lVar2;
  *(uint64_t *)(param_1 + 0x10) = param_2;
  return;
}






// 函数: void FUN_1802f5aa0(int64_t param_1,int64_t param_2)
void FUN_1802f5aa0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  
  param_2 = param_2 * 8;
  plVar2 = *(int64_t **)(param_1 + 0x30);
  LOCK();
  plVar1 = plVar2 + 1;
  lVar4 = *plVar1;
  *plVar1 = *plVar1 + param_2 + 0x10;
  UNLOCK();
  uVar3 = lVar4 + 7U & 0xfffffffffffffff8;
  if (param_2 + 8 + uVar3 < 0x2000000) {
    lVar4 = *plVar2 + uVar3;
  }
  else {
    lVar4 = 0;
  }
                    // WARNING: Subroutine does not return
  memset(lVar4,0,param_2);
}






// 函数: void FUN_1802f5b10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f5b10(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  FUN_1802f5b10(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[8] = &system_state_ptr;
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_18064e900(param_2);
}






// 函数: void FUN_1802f5bc0(float *param_1)
void FUN_1802f5bc0(float *param_1)

{
  func_0x00018023a1e0(param_1 + 4);
  *param_1 = param_1[10] * param_1[5] - param_1[9] * param_1[6];
  param_1[1] = param_1[6] * param_1[8] - param_1[10] * param_1[4];
  param_1[2] = param_1[9] * param_1[4] - param_1[5] * param_1[8];
  func_0x00018023a1e0(param_1);
  param_1[8] = param_1[6] * param_1[1] - param_1[2] * param_1[5];
  param_1[9] = param_1[4] * param_1[2] - param_1[6] * *param_1;
  param_1[10] = *param_1 * param_1[5] - param_1[4] * param_1[1];
  return;
}



uint64_t * FUN_1802f5d10(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_a8;
  int32_t uStack_a4;
  int32_t uStack_a0;
  int32_t uStack_9c;
  int32_t uStack_98;
  int32_t uStack_94;
  int32_t uStack_90;
  int32_t uStack_8c;
  int8_t auStack_88 [64];
  int8_t auStack_48 [64];
  
  uStack_c8 = *param_1;
  uStack_b8 = param_1[2];
  uStack_a8 = *(int32_t *)(param_1 + 4);
  uStack_a4 = *(int32_t *)((int64_t)param_1 + 0x24);
  uStack_a0 = *(int32_t *)(param_1 + 5);
  uStack_98 = *(int32_t *)(param_1 + 6);
  uStack_94 = *(int32_t *)((int64_t)param_1 + 0x34);
  uStack_90 = *(int32_t *)(param_1 + 7);
  uStack_c0 = (uint64_t)*(uint *)(param_1 + 1);
  uStack_b0 = (uint64_t)*(uint *)(param_1 + 3);
  uStack_9c = 0;
  uStack_8c = 0x3f800000;
  FUN_180084760(&uStack_c8,auStack_88);
  uStack_c8 = *param_3;
  uStack_b8 = param_3[2];
  uStack_a8 = *(int32_t *)(param_3 + 4);
  uStack_a4 = *(int32_t *)((int64_t)param_3 + 0x24);
  uStack_a0 = *(int32_t *)(param_3 + 5);
  uStack_c0 = param_3[1] & 0xffffffff;
  uStack_98 = *(int32_t *)(param_3 + 6);
  uStack_94 = *(int32_t *)((int64_t)param_3 + 0x34);
  uStack_90 = *(int32_t *)(param_3 + 7);
  uStack_b0 = param_3[3] & 0xffffffff;
  uStack_9c = 0;
  uStack_8c = 0x3f800000;
  puVar5 = (uint64_t *)FUN_1800946d0(&uStack_c8,auStack_48,auStack_88);
  uVar1 = puVar5[1];
  uVar2 = puVar5[2];
  uVar3 = puVar5[3];
  *param_2 = *puVar5;
  param_2[1] = uVar1;
  uVar1 = puVar5[4];
  uVar4 = puVar5[5];
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  uVar2 = puVar5[6];
  uVar3 = puVar5[7];
  param_2[4] = uVar1;
  param_2[5] = uVar4;
  param_2[6] = uVar2;
  param_2[7] = uVar3;
  return param_2;
}



int64_t * FUN_1802f5e40(int64_t *param_1)

{
  int64_t *plVar1;
  
  *param_1 = 0;
  param_1[1] = (int64_t)&system_state_ptr;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  param_1[1] = (int64_t)&system_data_buffer_ptr;
  param_1[4] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  plVar1 = (int64_t *)*param_1;
  *param_1 = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[5] = 0x3f8000003f800000;
  param_1[6] = 0x7f7fffff3f800000;
  *(int32_t *)(param_1 + 7) = 0;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0x3f800000;
  param_1[8] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0xffffffff;
  return param_1;
}



uint64_t *
FUN_1802f5ef0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 8;
  strcpy_s(param_2[1],0x80,&unknown_var_520_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



uint64_t * FUN_1802f5f70(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &unknown_var_768_ptr;
  *(int32_t *)(param_1 + 2) = 4;
  param_1[3] = 0;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 1) = 0;
  param_1[5] = 0;
  *param_1 = &unknown_var_1008_ptr;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x27] = &system_state_ptr;
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x29) = 0;
  param_1[0x27] = &system_data_buffer_ptr;
  param_1[0x2a] = 0;
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x29) = 0;
  param_1[0x2b] = 0;
  FUN_1802f6100(param_1);
  *(int32_t *)(param_1 + 1) = 0;
  return param_1;
}



uint64_t *
FUN_1802f6040(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &unknown_var_1008_ptr;
  if ((int64_t *)param_1[0x2b] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x2b] + 0x38))();
  }
  param_1[0x27] = &system_data_buffer_ptr;
  if (param_1[0x28] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  param_1[0x28] = 0;
  *(int32_t *)(param_1 + 0x2a) = 0;
  param_1[0x27] = &system_state_ptr;
  *param_1 = &unknown_var_768_ptr;
  param_1[5] = 0;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x298,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f6100(int64_t param_1)
void FUN_1802f6100(int64_t param_1)

{
  uint64_t uVar1;
  void *puVar2;
  int8_t auStack_78 [32];
  int64_t *plStack_58;
  uint64_t uStack_50;
  void *puStack_48;
  void *puStack_40;
  int32_t uStack_38;
  uint8_t auStack_30 [32];
  uint64_t uStack_10;
  
  uStack_50 = 0xfffffffffffffffe;
  uStack_10 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  puStack_48 = &unknown_var_672_ptr;
  puStack_40 = auStack_30;
  auStack_30[0] = 0;
  uStack_38 = 0xf;
  strcpy_s(auStack_30,0x20,&system_data_9e20);
  puVar2 = &system_buffer_ptr;
  if (puStack_40 != (void *)0x0) {
    puVar2 = puStack_40;
  }
  (**(code **)(*(int64_t *)(param_1 + 0x138) + 0x10))((int64_t *)(param_1 + 0x138),puVar2);
  puStack_48 = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x180) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(uint64_t *)(param_1 + 400) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x198) = 0;
  *(uint64_t *)(param_1 + 0x1a0) = 0;
  *(uint64_t *)(param_1 + 0x1a8) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x1b0) = 0;
  *(uint64_t *)(param_1 + 0x1b8) = 0x3f80000000000000;
  *(int32_t *)(param_1 + 0x17c) = 0;
  *(uint64_t *)(param_1 + 0x50) = 0;
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(uint64_t *)(param_1 + 0x284) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x28c) = 0x3f8000003f800000;
  *(int8_t *)(param_1 + 0x178) = 0;
  *(int8_t *)(param_1 + 0x74) = 0;
  *(int32_t *)(param_1 + 0x78) = 0;
  *(int32_t *)(param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x80) = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(int8_t *)(param_1 + 0x1c0) = 0;
  *(int16_t *)(param_1 + 0x38) = 0;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(int8_t *)(param_1 + 0x48) = 0;
  *(int8_t *)(param_1 + 0x3a) = 0;
  *(int8_t *)(param_1 + 0x160) = 1;
  plStack_58 = *(int64_t **)(param_1 + 0x158);
  *(uint64_t *)(param_1 + 0x158) = 0;
  if (plStack_58 != (int64_t *)0x0) {
    (**(code **)(*plStack_58 + 0x38))();
  }
  *(uint64_t *)(param_1 + 0x40) = 0;
  *(int32_t *)(param_1 + 0x164) = 0xffffffff;
  *(int32_t *)(param_1 + 0x170) = 0xffffffff;
  *(int32_t *)(param_1 + 0x174) = 1;
  uVar1 = *(uint64_t *)(param_1 + 0x158);
  if (uVar1 != 0) {
    uVar1 = (uint64_t)(byte)(*(char *)(uVar1 + 0x2c8) + 8);
  }
  *(uint *)(param_1 + 0x4c) =
       ((int)*(float *)(param_1 + 0x30) & 0xfff0U | ((uint)uVar1 & 0xff) << 0x14) << 8 |
       (int)param_1 >> 4 & 0xfffU;
  *(uint64_t *)(param_1 + 0x1c4) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x1cc) = 0;
  *(uint64_t *)(param_1 + 0x1d4) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0x1dc) = 0;
  *(uint64_t *)(param_1 + 0x1e4) = 0;
  *(uint64_t *)(param_1 + 0x1ec) = 0x3f800000;
  *(int32_t *)(param_1 + 500) = 0;
  *(int32_t *)(param_1 + 0x1f8) = 0;
  *(int32_t *)(param_1 + 0x1fc) = 0;
  *(int32_t *)(param_1 + 0x200) = 0x3f800000;
  *(int32_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xac) = 0;
  *(int32_t *)(param_1 + 0xb0) = 0;
  *(int32_t *)(param_1 + 0xb4) = 0;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_10 ^ (uint64_t)auStack_78);
}



uint64_t *
FUN_1802f6320(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  FUN_1806277c0(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x6f635f6c61636564;
  puVar1[1] = 0x746e656e6f706d;
  *(int32_t *)(param_2 + 2) = 0xf;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_1802f63a0(int64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  
  plStackX_10 = param_2;
  uVar2 = FUN_18062b1e0(system_memory_pool_ptr,0x298,8,3,0,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_1802f5f70(uVar2);
  *param_2 = (int64_t)plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  plVar3 = (int64_t *)*param_2;
  FUN_180627be0(plVar3 + 0x27,param_1 + 0x138);
  *(int8_t *)((int64_t)plVar3 + 0x3a) = *(int8_t *)(param_1 + 0x3a);
  (**(code **)(*plVar3 + 0x148))(plVar3,param_1 + 0x180);
  *(int32_t *)((int64_t)plVar3 + 0x174) = *(int32_t *)(param_1 + 0x174);
  *(int8_t *)(plVar3 + 7) = *(int8_t *)(param_1 + 0x38);
  if (*(int64_t *)(param_1 + 0x158) != 0) {
    (**(code **)(*plVar3 + 0x118))(plVar3);
  }
  lVar1 = *(int64_t *)(param_1 + 0x40);
  if (lVar1 != 0) {
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar3;
    (**(code **)(*plVar3 + 0x28))(plVar3);
    FUN_1803a61d0(lVar1,&plStackX_8);
  }
  return param_2;
}






// 函数: void FUN_1802f64b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1802f64b0(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  int64_t *plStackX_8;
  uint64_t uVar3;
  
  uVar3 = 0xfffffffffffffffe;
  if ((((param_1[8] == 0) && ((char)param_1[0x38] != '\0')) && (param_1[5] != 0)) &&
     (lVar1 = *(int64_t *)(param_1[5] + 0x20), lVar1 != 0)) {
    plStackX_8 = param_1;
    (**(code **)(*param_1 + 0x28))();
    cVar2 = FUN_1801a35b0(lVar1,&plStackX_8,param_3,param_4,uVar3);
    *(bool *)(param_1 + 0x38) = cVar2 == '\0';
  }
  return;
}






// 函数: void FUN_1802f6530(int64_t *param_1,int64_t param_2)
void FUN_1802f6530(int64_t *param_1,int64_t param_2)

{
  int32_t auStackX_8 [8];
  
  param_1[5] = param_2;
  if (param_2 == 0) {
    auStackX_8[0] = 0;
    (**(code **)(*param_1 + 0x128))(param_1,auStackX_8);
    *(int16_t *)((int64_t)param_1 + 0x39) = 1;
    return;
  }
  *(int32_t *)((int64_t)param_1 + 0x164) = *(int32_t *)(param_2 + 0x2b8);
  *(int32_t *)(param_1 + 0x2e) = *(int32_t *)(param_2 + 0x2c8);
  *(int8_t *)((int64_t)param_1 + 0x3a) = 1;
                    // WARNING: Could not recover jumptable at 0x0001802f658e. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*param_1 + 0x1b8))(param_1,0,&system_data_0300);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802f65b0(int64_t param_1)
void FUN_1802f65b0(int64_t param_1)

{
  int64_t lVar1;
  bool bVar2;
  bool bVar3;
  uint64_t uVar4;
  int8_t auStack_98 [32];
  int32_t uStack_78;
  uint64_t uStack_70;
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  
  uStack_70 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_98;
  bVar2 = false;
  uStack_78 = 0;
  lVar1 = *(int64_t *)(param_1 + 0x158);
  *(uint64_t *)(param_1 + 0x168) = *(uint64_t *)(lVar1 + 0x140);
  *(int32_t *)(param_1 + 0x70) = 0;
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 10;
  strcpy_s(auStack_50,0x20,&unknown_var_592_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xd;
  strcpy_s(auStack_50,0x20,&unknown_var_1288_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 2;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xc;
  strcpy_s(auStack_50,0x20,&system_data_38d8);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 4;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x15;
  strcpy_s(auStack_50,0x20,&unknown_var_568_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 8;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xf;
  strcpy_s(auStack_50,0x20,&unknown_var_552_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((*(uint64_t *)(lVar1 + 0x140) & uVar4) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x10;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xd;
  strcpy_s(auStack_50,0x20,&unknown_var_536_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x20;
  }
  if (*(int *)(SYSTEM_STATE_MANAGER + 0x700) != 0) {
    lVar1 = *(int64_t *)(param_1 + 0x158);
    puStack_68 = &unknown_var_672_ptr;
    puStack_60 = auStack_50;
    auStack_50[0] = 0;
    uStack_58 = 0xc;
    strcpy_s(auStack_50,0x20,&unknown_var_8576_ptr);
    bVar2 = true;
    uStack_78 = 1;
    uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
    if ((*(uint64_t *)(lVar1 + 0x140) & uVar4) != 0) {
      bVar3 = true;
      goto LAB_1802f6915;
    }
  }
  bVar3 = false;
LAB_1802f6915:
  if (bVar2) {
    uStack_78 = 0;
  }
  if (bVar3) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x40;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x11;
  strcpy_s(auStack_50,0x20,&unknown_var_672_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x80;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x11;
  strcpy_s(auStack_50,0x20,&unknown_var_648_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x100;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xf;
  strcpy_s(auStack_50,0x20,&unknown_var_632_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x200;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x14;
  strcpy_s(auStack_50,0x20,&unknown_var_608_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((*(uint64_t *)(lVar1 + 0x140) & uVar4) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x400;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x1a;
  strcpy_s(auStack_50,0x20,&unknown_var_736_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((uVar4 & *(uint64_t *)(lVar1 + 0x140)) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x800;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 7;
  strcpy_s(auStack_50,0x20,&unknown_var_728_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  if ((*(uint64_t *)(lVar1 + 0x140) & uVar4) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x1000;
  }
  lVar1 = *(int64_t *)(param_1 + 0x158);
  puStack_68 = &unknown_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0xe;
  strcpy_s(auStack_50,0x20,&unknown_var_712_ptr);
  uVar4 = FUN_180240430(*(uint64_t *)(lVar1 + 0x1e0),&puStack_68,0);
  puStack_68 = &system_state_ptr;
  if ((*(uint64_t *)(lVar1 + 0x140) & uVar4) != 0) {
    *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 0x2000;
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_30 ^ (uint64_t)auStack_98);
}



int64_t * FUN_1802f6c60(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *aplStackX_18 [2];
  
  plVar1 = (int64_t *)FUN_1802f63a0(param_1,aplStackX_18,param_3,param_4,0,0xfffffffffffffffe);
  plVar1 = (int64_t *)*plVar1;
  *param_2 = (int64_t)plVar1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))();
  }
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




