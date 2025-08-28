#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part022.c - 22 个函数

// 函数: void FUN_1800fb8e0(int64_t param_1,int32_t *param_2)
void FUN_1800fb8e0(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int8_t auStack_18 [16];
  
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x100))(plVar1,auStack_18);
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_20 = param_2[2];
  (**(code **)(*plVar1 + 0xf8))(plVar1,&uStack_28);
  return;
}



int32_t * FUN_1800fb970(int64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int8_t auStack_18 [16];
  
  plVar3 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar3 = *(int64_t **)(param_1 + 0x28);
  }
  puVar2 = (int32_t *)(**(code **)(*plVar3 + 0x130))(plVar3,auStack_18);
  param_2[3] = 0x7f7fffff;
  *param_2 = *puVar2;
  uVar1 = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[1] = uVar1;
  return param_2;
}






// 函数: void FUN_1800fb9c0(int64_t param_1,int32_t *param_2)
void FUN_1800fb9c0(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_10 = param_2[2];
  (**(code **)(*plVar1 + 0x138))(uStack_10,&uStack_18,1);
  return;
}



int32_t * FUN_1800fba10(int64_t param_1,int32_t *param_2)

{
  int32_t uVar1;
  int32_t *puVar2;
  int64_t *plVar3;
  int8_t auStack_18 [16];
  
  plVar3 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar3 = *(int64_t **)(param_1 + 0x28);
  }
  puVar2 = (int32_t *)(**(code **)(*plVar3 + 0x140))(plVar3,auStack_18);
  param_2[3] = 0x7f7fffff;
  *param_2 = *puVar2;
  uVar1 = puVar2[1];
  param_2[2] = puVar2[2];
  param_2[1] = uVar1;
  return param_2;
}






// 函数: void FUN_1800fba60(int64_t param_1,int32_t *param_2)
void FUN_1800fba60(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_10 = param_2[2];
  (**(code **)(*plVar1 + 0x148))(uStack_10,&uStack_18,1);
  return;
}






// 函数: void FUN_1800fbab0(int64_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1800fbab0(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  int64_t lVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  lVar1 = 0;
  if (*(short *)(*(int64_t *)(param_1 + 0x28) + 8) == 5) {
    lVar1 = *(int64_t *)(param_1 + 0x28);
  }
  FUN_1806b7650(lVar1,&uStack_1c,&uStack_28,0,1);
  return;
}






// 函数: void FUN_1800fbb30(int64_t param_1,int32_t *param_2)
void FUN_1800fbb30(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_10 = param_2[2];
  (**(code **)(*plVar1 + 0x178))(uStack_10,&uStack_18,0,1);
  return;
}






// 函数: void FUN_1800fbb80(int64_t param_1,int32_t *param_2,int32_t *param_3)
void FUN_1800fbb80(int64_t param_1,int32_t *param_2,int32_t *param_3)

{
  int64_t lVar1;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = *param_3;
  uStack_18 = param_3[1];
  uStack_14 = param_3[2];
  lVar1 = 0;
  if (*(short *)(*(int64_t *)(param_1 + 0x28) + 8) == 5) {
    lVar1 = *(int64_t *)(param_1 + 0x28);
  }
  FUN_1806b7650(lVar1,&uStack_1c,&uStack_28,1,1);
  return;
}






// 函数: void FUN_1800fbc00(int64_t param_1,int32_t *param_2)
void FUN_1800fbc00(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_10 = param_2[2];
  (**(code **)(*plVar1 + 0x170))(uStack_10,&uStack_18,0,1);
  return;
}






// 函数: void FUN_1800fbc50(int64_t param_1,int32_t *param_2)
void FUN_1800fbc50(int64_t param_1,int32_t *param_2)

{
  int64_t *plVar1;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  
  uStack_18 = *param_2;
  uStack_14 = param_2[1];
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  uStack_10 = param_2[2];
  (**(code **)(*plVar1 + 0x170))(uStack_10,&uStack_18,3,1);
  return;
}






// 函数: void FUN_1800fbce0(int64_t param_1,uint64_t param_2,int32_t param_3)
void FUN_1800fbce0(int64_t param_1,uint64_t param_2,int32_t param_3)

{
  int64_t *plVar1;
  
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
  (**(code **)(*plVar1 + 0x110))();
  plVar1 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar1 = *(int64_t **)(param_1 + 0x28);
  }
                    // WARNING: Could not recover jumptable at 0x0001800fbd34. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(*plVar1 + 0x120))(plVar1,param_3);
  return;
}



uint64_t FUN_1800fbd40(int64_t param_1)

{
  char cVar1;
  int64_t *plVar2;
  
  plVar2 = (int64_t *)0x0;
  if ((short)(*(int64_t **)(param_1 + 0x28))[1] == 5) {
    plVar2 = *(int64_t **)(param_1 + 0x28);
  }
  if (plVar2 != (int64_t *)0x0) {
    cVar1 = (**(code **)(*plVar2 + 0x1f8))();
    if (cVar1 == '\0') {
      return 1;
    }
  }
  return 0;
}



uint64_t *
FUN_1800fbe20(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_1 = 0;
  param_1[1] = &system_handler1_ptr;
  param_1[1] = &unknown_var_7264_ptr;
  param_1[2] = &unknown_var_3616_ptr;
  param_1[2] = &unknown_var_3584_ptr;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(int32_t *)(param_1 + 7) = 0x3f800000;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = 0x41200000;
  param_1[9] = &unknown_var_3672_ptr;
  param_1[9] = &unknown_var_3648_ptr;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(int32_t *)(param_1 + 0xd) = 3;
  _Mtx_init_in_situ(param_1 + 0xe,2,param_3,param_4,0xfffffffffffffffe);
  param_1[0x18] = &unknown_var_3528_ptr;
  param_1[0x18] = &unknown_var_7240_ptr;
  puVar1 = param_1 + 0x1b;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x20) = 3;
  *puVar1 = puVar1;
  param_1[0x1c] = puVar1;
  param_1[0x1d] = 0;
  *(int8_t *)(param_1 + 0x1e) = 0;
  param_1[0x1f] = 0;
  return param_1;
}



uint64_t *
FUN_1800fbf40(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t *
FUN_1800fbf80(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_3528_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fbfc0(uint64_t param_1,uint64_t *param_2)
void FUN_1800fbfc0(uint64_t param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uStackX_8;
  float afStack_50 [3];
  int16_t uStack_44;
  int8_t uStack_42;
  float fStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  uint64_t uStack_2c;
  int32_t uStack_24;
  
  puVar1 = system_system_data_config;
  if (param_2 == (uint64_t *)0x0) {
    param_2 = system_system_data_config + 1;
  }
  uStackX_8 = param_1;
  uVar2 = PxCreateFoundation(0x4010100,system_system_data_config + 2,param_2);
  *puVar1 = uVar2;
  plVar7 = (int64_t *)0x0;
  plVar3 = plVar7;
  if (*(int *)(system_module_state + 0x930) != 0) {
    plVar3 = (int64_t *)FUN_1806a07f0(*puVar1);
  }
  plVar4 = (int64_t *)PxCreateBasePhysics(0x4010100,*puVar1,puVar1 + 7,0,plVar3);
  if (plVar4 != (int64_t *)0x0) {
    PxRegisterArticulations(plVar4);
    PxRegisterArticulationsReducedCoordinate(plVar4);
    PxRegisterHeightFields(plVar4);
    plVar7 = plVar4;
  }
  puVar1[4] = plVar7;
  fStack_40 = *(float *)(puVar1 + 7);
  afStack_50[0] = fStack_40 * 0.06 * fStack_40;
  afStack_50[1] = 0.0007;
  afStack_50[2] = 0.0;
  uStack_44 = 0;
  uStack_42 = 0;
  uStack_3c = *(int32_t *)((int64_t)puVar1 + 0x3c);
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_2c = 0;
  uStack_30 = 0x3f0ccccd;
  uStack_24 = 0x20;
  uVar2 = PxCreateCooking(0x4010100,*puVar1,afStack_50);
  puVar1[5] = uVar2;
  FUN_1806bf100(puVar1[4],plVar3);
  puVar5 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,8,8,3);
  *puVar5 = &unknown_var_7288_ptr;
  *puVar5 = &unknown_var_7320_ptr;
  puVar1[6] = puVar5;
  uStackX_8._1_7_ = (uint8_t)((uint64_t)puVar5 >> 8);
  uStackX_8._0_1_ = 2;
  (**(code **)(*(int64_t *)puVar1[4] + 0x100))((int64_t *)puVar1[4],puVar1 + 0x18,&uStackX_8,0);
  if ((plVar3 != (int64_t *)0x0) &&
     (lVar6 = FUN_1806a0810(&unknown_var_4736_ptr,0x1531,1000000), lVar6 != 0)) {
    uStackX_8 = CONCAT71(uStackX_8._1_7_,7);
    (**(code **)(*plVar3 + 0x18))(plVar3,lVar6,&uStackX_8);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc1c0(void)
void FUN_1800fc1c0(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int iVar10;
  int8_t auStackX_10 [8];
  
  lVar8 = system_system_data_config;
  lVar3 = system_system_data_config;
  puVar1 = (uint64_t *)(system_system_data_config + 0xd8);
  puVar2 = *(uint64_t **)(system_system_data_config + 0xe8);
  if (puVar2 != (uint64_t *)0x0) {
    FUN_18004b790(puVar1,*puVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  iVar10 = 0;
  *puVar1 = puVar1;
  *(uint64_t **)(lVar3 + 0xe0) = puVar1;
  *(uint64_t *)(lVar3 + 0xe8) = 0;
  *(int8_t *)(lVar3 + 0xf0) = 0;
  *(uint64_t *)(lVar3 + 0xf8) = 0;
  if (0 < *(int *)(lVar8 + 0x40)) {
    do {
      uVar9 = (int64_t)iVar10 * 0x68 + *(int64_t *)(lVar8 + 0x38);
      plVar4 = (int64_t *)
               (**(code **)(**(int64_t **)(lVar3 + 0x20) + 0xe8))
                         (*(int64_t **)(lVar3 + 0x20),*(int32_t *)(uVar9 + 0x4c),
                          *(int32_t *)(uVar9 + 0x50),*(int32_t *)(uVar9 + 0x54));
      (**(code **)(*plVar4 + 0x90))(plVar4,1);
      puVar5 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3);
      *puVar5 = 0xebcdebcd;
      puVar5[1] = 1;
      *(uint64_t *)(puVar5 + 2) = uVar9;
      plVar4[2] = (int64_t)puVar5;
      puVar6 = puVar1;
      puVar2 = *(uint64_t **)(lVar3 + 0xe8);
      while (puVar2 != (uint64_t *)0x0) {
        if ((uint64_t)puVar2[4] < uVar9) {
          puVar2 = (uint64_t *)*puVar2;
        }
        else {
          puVar6 = puVar2;
          puVar2 = (uint64_t *)puVar2[1];
        }
      }
      if ((puVar6 == puVar1) || (uVar9 < (uint64_t)puVar6[4])) {
        puVar6 = (uint64_t *)FUN_1800fc780(puVar1,auStackX_10);
        puVar6 = (uint64_t *)*puVar6;
      }
      lVar8 = system_system_data_config;
      iVar10 = iVar10 + 1;
      puVar6[5] = plVar4;
    } while (iVar10 < *(int *)(lVar8 + 0x40));
  }
  puVar6 = puVar1;
  puVar2 = *(uint64_t **)(lVar3 + 0xe8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((uint64_t)puVar2[4] < *(uint64_t *)(lVar8 + 0x38)) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar6 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar6 == puVar1) || (*(uint64_t *)(lVar8 + 0x38) < (uint64_t)puVar6[4])) {
    puVar6 = (uint64_t *)FUN_1800fc780(puVar1,auStackX_10);
    puVar6 = (uint64_t *)*puVar6;
  }
  *(uint64_t *)(lVar3 + 200) = puVar6[5];
  uVar7 = (**(code **)(**(int64_t **)(lVar3 + 0x20) + 0xe8))
                    (*(int64_t **)(lVar3 + 0x20),0x3f000000,0x3f000000,0x3dcccccd);
  *(uint64_t *)(lVar3 + 0xd0) = uVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc1d2(void)
void FUN_1800fc1d2(void)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t unaff_RBP;
  int iVar9;
  
  lVar7 = system_system_data_config;
  puVar1 = (uint64_t *)(unaff_RBP + 0xd8);
  puVar2 = *(uint64_t **)(unaff_RBP + 0xe8);
  if (puVar2 != (uint64_t *)0x0) {
    FUN_18004b790(puVar1,*puVar2);
                    // WARNING: Subroutine does not return
    FUN_18064e900(puVar2);
  }
  iVar9 = 0;
  *puVar1 = puVar1;
  *(uint64_t **)(unaff_RBP + 0xe0) = puVar1;
  *(uint64_t *)(unaff_RBP + 0xe8) = 0;
  *(int8_t *)(unaff_RBP + 0xf0) = 0;
  *(uint64_t *)(unaff_RBP + 0xf8) = 0;
  if (0 < *(int *)(lVar7 + 0x40)) {
    do {
      uVar8 = (int64_t)iVar9 * 0x68 + *(int64_t *)(lVar7 + 0x38);
      plVar3 = (int64_t *)
               (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                         (*(int64_t **)(unaff_RBP + 0x20),*(int32_t *)(uVar8 + 0x4c),
                          *(int32_t *)(uVar8 + 0x50),*(int32_t *)(uVar8 + 0x54));
      (**(code **)(*plVar3 + 0x90))(plVar3,1);
      puVar4 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3);
      *puVar4 = 0xebcdebcd;
      puVar4[1] = 1;
      *(uint64_t *)(puVar4 + 2) = uVar8;
      plVar3[2] = (int64_t)puVar4;
      puVar5 = puVar1;
      puVar2 = *(uint64_t **)(unaff_RBP + 0xe8);
      while (puVar2 != (uint64_t *)0x0) {
        if ((uint64_t)puVar2[4] < uVar8) {
          puVar2 = (uint64_t *)*puVar2;
        }
        else {
          puVar5 = puVar2;
          puVar2 = (uint64_t *)puVar2[1];
        }
      }
      if ((puVar5 == puVar1) || (uVar8 < (uint64_t)puVar5[4])) {
        puVar5 = (uint64_t *)FUN_1800fc780(puVar1,&stack0x00000058);
        puVar5 = (uint64_t *)*puVar5;
      }
      lVar7 = system_system_data_config;
      iVar9 = iVar9 + 1;
      puVar5[5] = plVar3;
    } while (iVar9 < *(int *)(lVar7 + 0x40));
  }
  puVar5 = puVar1;
  puVar2 = *(uint64_t **)(unaff_RBP + 0xe8);
  while (puVar2 != (uint64_t *)0x0) {
    if ((uint64_t)puVar2[4] < *(uint64_t *)(lVar7 + 0x38)) {
      puVar2 = (uint64_t *)*puVar2;
    }
    else {
      puVar5 = puVar2;
      puVar2 = (uint64_t *)puVar2[1];
    }
  }
  if ((puVar5 == puVar1) || (*(uint64_t *)(lVar7 + 0x38) < (uint64_t)puVar5[4])) {
    puVar5 = (uint64_t *)FUN_1800fc780(puVar1,&stack0x00000058);
    puVar5 = (uint64_t *)*puVar5;
  }
  *(uint64_t *)(unaff_RBP + 200) = puVar5[5];
  uVar6 = (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                    (*(int64_t **)(unaff_RBP + 0x20),0x3f000000,0x3f000000,0x3dcccccd);
  *(uint64_t *)(unaff_RBP + 0xd0) = uVar6;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc234(int64_t param_1)
void FUN_1800fc234(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  int64_t unaff_RBP;
  int unaff_ESI;
  uint64_t *unaff_RDI;
  uint64_t uStack0000000000000050;
  
  do {
    uVar7 = (int64_t)unaff_ESI * 0x68 + *(int64_t *)(param_1 + 0x38);
    uStack0000000000000050 = uVar7;
    plVar3 = (int64_t *)
             (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                       (*(int64_t **)(unaff_RBP + 0x20),*(int32_t *)(uVar7 + 0x4c),
                        *(int32_t *)(uVar7 + 0x50),*(int32_t *)(uVar7 + 0x54));
    (**(code **)(*plVar3 + 0x90))(plVar3,1);
    puVar4 = (int32_t *)FUN_18062b1e0(system_memory_pool_ptr,0x10,8,3);
    *puVar4 = 0xebcdebcd;
    puVar4[1] = 1;
    *(uint64_t *)(puVar4 + 2) = uVar7;
    plVar3[2] = (int64_t)puVar4;
    puVar2 = (uint64_t *)unaff_RDI[2];
    puVar5 = unaff_RDI;
    while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
      if ((uint64_t)puVar1[4] < uVar7) {
        puVar2 = (uint64_t *)*puVar1;
      }
      else {
        puVar2 = (uint64_t *)puVar1[1];
        puVar5 = puVar1;
      }
    }
    if ((puVar5 == unaff_RDI) || (uVar7 < (uint64_t)puVar5[4])) {
      puVar5 = (uint64_t *)FUN_1800fc780();
      puVar5 = (uint64_t *)*puVar5;
    }
    param_1 = system_system_data_config;
    unaff_ESI = unaff_ESI + 1;
    puVar5[5] = plVar3;
  } while (unaff_ESI < *(int *)(param_1 + 0x40));
  uStack0000000000000050 = *(uint64_t *)(param_1 + 0x38);
  puVar2 = (uint64_t *)unaff_RDI[2];
  puVar5 = unaff_RDI;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if ((uint64_t)puVar1[4] < uStack0000000000000050) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar5 = puVar1;
    }
  }
  if ((puVar5 == unaff_RDI) || (uStack0000000000000050 < (uint64_t)puVar5[4])) {
    puVar5 = (uint64_t *)FUN_1800fc780();
    puVar5 = (uint64_t *)*puVar5;
  }
  *(uint64_t *)(unaff_RBP + 200) = puVar5[5];
  uVar6 = (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                    (*(int64_t **)(unaff_RBP + 0x20),0x3f000000,0x3f000000,0x3dcccccd);
  *(uint64_t *)(unaff_RBP + 0xd0) = uVar6;
  return;
}






// 函数: void FUN_1800fc31a(int64_t param_1)
void FUN_1800fc31a(int64_t param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t uStack0000000000000050;
  
  uStack0000000000000050 = *(uint64_t *)(param_1 + 0x38);
  puVar2 = (uint64_t *)unaff_RDI[2];
  puVar3 = unaff_RDI;
  while (puVar1 = puVar2, puVar1 != (uint64_t *)0x0) {
    if ((uint64_t)puVar1[4] < uStack0000000000000050) {
      puVar2 = (uint64_t *)*puVar1;
    }
    else {
      puVar2 = (uint64_t *)puVar1[1];
      puVar3 = puVar1;
    }
  }
  if ((puVar3 == unaff_RDI) || (uStack0000000000000050 < (uint64_t)puVar3[4])) {
    puVar3 = (uint64_t *)FUN_1800fc780();
    puVar3 = (uint64_t *)*puVar3;
  }
  *(uint64_t *)(unaff_RBP + 200) = puVar3[5];
  uVar4 = (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                    (*(int64_t **)(unaff_RBP + 0x20),0x3f000000,0x3f000000,0x3dcccccd);
  *(uint64_t *)(unaff_RBP + 0xd0) = uVar4;
  return;
}






// 函数: void FUN_1800fc340(uint64_t *param_1,uint64_t param_2)
void FUN_1800fc340(uint64_t *param_1,uint64_t param_2)

{
  uint64_t *in_RAX;
  uint64_t *puVar1;
  uint64_t uVar2;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  
  do {
    if ((uint64_t)param_1[4] < param_2) {
      puVar1 = (uint64_t *)*param_1;
    }
    else {
      puVar1 = (uint64_t *)param_1[1];
      in_RAX = param_1;
    }
    param_1 = puVar1;
  } while (puVar1 != (uint64_t *)0x0);
  if ((in_RAX == unaff_RDI) || (param_2 < (uint64_t)in_RAX[4])) {
    puVar1 = (uint64_t *)FUN_1800fc780();
    in_RAX = (uint64_t *)*puVar1;
  }
  *(uint64_t *)(unaff_RBP + 200) = in_RAX[5];
  uVar2 = (**(code **)(**(int64_t **)(unaff_RBP + 0x20) + 0xe8))
                    (*(int64_t **)(unaff_RBP + 0x20),0x3f000000,0x3f000000,0x3dcccccd);
  *(uint64_t *)(unaff_RBP + 0xd0) = uVar2;
  return;
}



int32_t FUN_1800fc3c0(int64_t param_1,uint64_t param_2,int64_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  code *pcVar2;
  char cVar3;
  int32_t uVar4;
  
  puVar1 = *(uint64_t **)(param_1 + 8);
  pcVar2 = *(code **)*puVar1;
  uVar4 = (**(code **)(*param_3 + 0x38))(param_3);
  cVar3 = (*pcVar2)(puVar1,*(uint64_t *)(*(int64_t *)(param_4 + 0x10) + 8),uVar4);
  if (cVar3 == '\0') {
    uVar4 = 0;
  }
  else {
    uVar4 = *(int32_t *)(param_1 + 0x10);
  }
  return uVar4;
}



int32_t FUN_1800fc420(int64_t param_1,uint64_t param_2,int64_t *param_3)

{
  float fVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int32_t uVar5;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_18;
  int32_t uStack_14;
  int32_t uStack_10;
  int32_t uStack_c;
  
  uStack_18 = *(int32_t *)((int64_t)param_3 + 0x1c);
  uStack_14 = (int32_t)param_3[4];
  plVar2 = *(int64_t **)(param_1 + 8);
  uStack_10 = *(int32_t *)((int64_t)param_3 + 0x24);
  uStack_24 = *(int32_t *)((int64_t)param_3 + 0x2c);
  uStack_28 = (int32_t)param_3[5];
  fVar1 = *(float *)((int64_t)param_3 + 0x34);
  uStack_c = 0x7f7fffff;
  uStack_1c = 0x7f7fffff;
  uStack_20 = (int32_t)param_3[6];
  pcVar3 = *(code **)(*plVar2 + 8);
  uVar5 = (**(code **)(*(int64_t *)param_3[1] + 0x38))();
  cVar4 = (*pcVar3)(plVar2,*(uint64_t *)(*(int64_t *)(*param_3 + 0x10) + 8),uVar5,&uStack_18,
                    &uStack_28,fVar1 <= 0.0);
  if (cVar4 == '\0') {
    uVar5 = 0;
  }
  else {
    uVar5 = *(int32_t *)(param_1 + 0x10);
  }
  return uVar5;
}






// 函数: void FUN_1800fc500(uint64_t param_1,uint64_t param_2,int *param_3,int param_4)
void FUN_1800fc500(uint64_t param_1,uint64_t param_2,int *param_3,int param_4)

{
  if (((param_3 != (int *)0x0) && (param_4 == 2)) && (*param_3 == -0x14321433)) {
    if (param_3[1] == 0) {
      if ((void *)**(uint64_t **)(param_3 + 2) == &unknown_var_3632_ptr) {
        FUN_1806237a0();
      }
      else {
        (**(code **)((void *)**(uint64_t **)(param_3 + 2) + 0x30))();
      }
      param_3[2] = -0x21524151;
      param_3[3] = -0x21524151;
    }
                    // WARNING: Subroutine does not return
    FUN_18064e900(param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc580(uint64_t param_1,int64_t *****param_2)
void FUN_1800fc580(uint64_t param_1,int64_t *****param_2)

{
  int64_t *****ppppplVar1;
  uint64_t uVar2;
  int64_t ******pppppplVar3;
  int64_t ******pppppplVar4;
  int64_t ****pppplVar5;
  int64_t *****ppppplStackX_10;
  int64_t *****ppppplStackX_18;
  int64_t *****ppppplStackX_20;
  
  pppppplVar3 = (int64_t ******)FUN_18062b1e0(system_memory_pool_ptr,0x28,8,3,0xfffffffffffffffe);
  *pppppplVar3 = (int64_t *****)&system_handler1_ptr;
  *pppppplVar3 = (int64_t *****)&system_handler2_ptr;
  *(int32_t *)(pppppplVar3 + 1) = 0;
  *pppppplVar3 = (int64_t *****)&unknown_var_1000_ptr;
  LOCK();
  *(int8_t *)(pppppplVar3 + 2) = 0;
  UNLOCK();
  pppppplVar3[3] = (int64_t *****)0xffffffffffffffff;
  *pppppplVar3 = (int64_t *****)&unknown_var_7352_ptr;
  pppppplVar3[4] = param_2;
  pppppplVar3[3] = (int64_t *****)0xfffffffffffffffc;
  ppppplStackX_18 = (int64_t *****)pppppplVar3;
  ppppplStackX_20 = (int64_t *****)pppppplVar3;
  (*(code *)(*pppppplVar3)[5])(pppppplVar3);
  uVar2 = system_context_ptr;
  if (*(int *)(system_system_data_config + 0xee0) == 0) {
    ppppplStackX_18 = (int64_t *****)&ppppplStackX_10;
    ppppplStackX_10 = (int64_t *****)pppppplVar3;
    (*(code *)(*pppppplVar3)[5])(pppppplVar3);
    FUN_18005e110(uVar2,&ppppplStackX_10);
  }
  else {
    pppplVar5 = (*pppppplVar3)[0xc];
    pppppplVar4 = pppppplVar3;
    if (*pppppplVar3 == (int64_t *****)&unknown_var_7352_ptr) {
      ppppplVar1 = pppppplVar3[4];
      if (*ppppplVar1 == (int64_t ****)&unknown_var_4488_ptr) {
        LOCK();
        *(int8_t *)((int64_t)ppppplVar1[5] + 0xd4) = 1;
        UNLOCK();
        if (*ppppplVar1 == (int64_t ****)&unknown_var_4488_ptr) {
          (*(code *)(*ppppplVar1[2])[0xe])();
        }
        else {
          (*(code *)(*ppppplVar1)[3])(ppppplVar1);
        }
      }
      else {
        (*(code *)(*ppppplVar1)[1])(ppppplVar1);
      }
      pppppplVar4 = (int64_t ******)pppppplVar3[4];
      pppplVar5 = (*pppppplVar4)[6];
      if (*pppppplVar4 == (int64_t *****)&unknown_var_4488_ptr) {
        ppppplVar1 = pppppplVar4[3];
        if (ppppplVar1 != (int64_t *****)0x0) {
          if ((*ppppplVar1)[4] == (int64_t ***)&unknown_var_7456_ptr) {
            (*(code *)(*ppppplVar1[2])[0x10])();
          }
          else {
            (*(code *)(*ppppplVar1)[4])(ppppplVar1);
          }
        }
        goto LAB_1800fc6d8;
      }
    }
    (*(code *)pppplVar5)(pppppplVar4);
  }
LAB_1800fc6d8:
                    // WARNING: Could not recover jumptable at 0x0001800fc6e5. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)(*pppppplVar3)[7])(pppppplVar3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc710(uint64_t param_1,uint param_2,uint64_t param_3)
void FUN_1800fc710(uint64_t param_1,uint param_2,uint64_t param_3)

{
  int iVar1;
  
  iVar1 = strncmp(param_3,&unknown_var_7176_ptr,0x10);
  if ((iVar1 != 0) && ((param_2 < 3 || (param_2 == 0x80)))) {
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,param_3);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t *
FUN_1800fc780(int64_t *param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             uint64_t *param_5)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  
  plVar1 = (int64_t *)*param_1;
  if ((param_4 == plVar1) || (param_4 == param_1)) {
    if ((param_1[4] != 0) && (param_4 = plVar1, (uint64_t)plVar1[4] < *param_5)) {
LAB_1800fc7e2:
      uVar5 = 0;
      goto LAB_1800fc7e5;
    }
  }
  else {
    plVar1 = (int64_t *)func_0x00018066bd70(param_4);
    if (((uint64_t)param_4[4] < *param_5) && (*param_5 < (uint64_t)plVar1[4])) {
      if (*param_4 == 0) goto LAB_1800fc7e2;
      uVar5 = 1;
      param_4 = plVar1;
LAB_1800fc7e5:
      if (param_4 != (int64_t *)0x0) {
        FUN_1800fc8e0(param_1,param_2,param_4,uVar5,param_5);
        return param_2;
      }
    }
  }
  bVar6 = true;
  plVar1 = param_1;
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    plVar2 = (int64_t *)param_1[2];
    do {
      plVar1 = plVar2;
      bVar6 = *param_5 < (uint64_t)plVar1[4];
      if (bVar6) {
        plVar2 = (int64_t *)plVar1[1];
      }
      else {
        plVar2 = (int64_t *)*plVar1;
      }
    } while (plVar2 != (int64_t *)0x0);
  }
  plVar2 = plVar1;
  if (bVar6) {
    if (plVar1 == (int64_t *)param_1[1]) {
      uVar3 = *param_5;
      goto FUN_1800fc85f;
    }
    plVar2 = (int64_t *)func_0x00018066b9a0(plVar1);
  }
  uVar3 = *param_5;
  if (uVar3 <= (uint64_t)plVar2[4]) {
    *param_2 = plVar2;
    return param_2;
  }
FUN_1800fc85f:
  if ((plVar1 == param_1) || (uVar3 < (uint64_t)plVar1[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  lVar4 = FUN_18062b420(system_memory_pool_ptr,0x30,(char)param_1[5]);
  *(uint64_t *)(lVar4 + 0x20) = *param_5;
  *(uint64_t *)(lVar4 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar4,plVar1,param_1,uVar5);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc85f(void)
void FUN_1800fc85f(void)

{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc877(void)
void FUN_1800fc877(void)

{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1800fc87c(void)
void FUN_1800fc87c(void)

{
  int64_t lVar1;
  uint64_t *unaff_RSI;
  int64_t unaff_RDI;
  
  lVar1 = FUN_18062b420(system_memory_pool_ptr,0x30,*(int8_t *)(unaff_RDI + 0x28));
  *(uint64_t *)(lVar1 + 0x20) = *unaff_RSI;
  *(uint64_t *)(lVar1 + 0x28) = 0;
                    // WARNING: Subroutine does not return
  FUN_18066bdc0(lVar1);
}






// 函数: void FUN_1800fc8c1(void)
void FUN_1800fc8c1(void)

{
  uint64_t unaff_RBX;
  uint64_t *unaff_R14;
  
  *unaff_R14 = unaff_RBX;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




