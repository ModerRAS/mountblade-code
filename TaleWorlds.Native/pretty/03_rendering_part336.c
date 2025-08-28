#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part336.c - 12 个函数

// 函数: void FUN_180447030(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)
void FUN_180447030(int64_t param_1,uint64_t param_2,int8_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  uVar1 = CoreMemoryPoolValidator(&puStack_30);
  uVar2 = FUN_180240430(*(uint64_t *)(param_1 + 0x1e0),uVar1,param_3,param_4,uVar3);
  *(uint64_t *)(param_1 + 0x140) = *(uint64_t *)(param_1 + 0x140) | uVar2;
  FUN_18022dd60(param_1);
  *(int16_t *)(param_1 + 0x3c0) = 0xffff;
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_1804470d0(int64_t param_1,char param_2)
void FUN_1804470d0(int64_t param_1,char param_2)

{
  uint uVar1;
  int8_t uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x388) | 0x2000000;
  if (param_2 == '\0') {
    uVar1 = *(uint *)(param_1 + 0x388) & 0xfdffffff;
  }
  *(uint *)(param_1 + 0x388) = uVar1;
  uVar2 = func_0x00018022d300();
  *(int8_t *)(param_1 + 0x38c) = uVar2;
  return;
}



int64_t * FUN_180447120(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(param_2 + 0x1b8);
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(uStack_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



int64_t * FUN_1804471a0(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(param_2 + 0x1c0);
  if (plVar1 != (int64_t *)0x0) {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
    *param_1 = (int64_t)plVar1;
    param_1[1] = CONCAT44(uStack_c,uVar2);
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = CONCAT44(uStack_c,0xffffffff);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180447220(int64_t param_1)
void FUN_180447220(int64_t param_1)

{
  int64_t *aplStackX_8 [4];
  void *puStack_28;
  int64_t lStack_20;
  
  if (param_1 != 0) {
    CoreMemoryPoolValidator(&puStack_28);
    FUN_1800b30d0(system_resource_state,aplStackX_8,&puStack_28,1);
    FUN_180076910(param_1,aplStackX_8);
    if (aplStackX_8[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_8[0] + 0x38))();
    }
    puStack_28 = &system_data_buffer_ptr;
    if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}





// 函数: void FUN_1804472c0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804472c0(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plStackX_8;
  uint64_t uVar1;
  
  if (param_1 != 0) {
    uVar1 = 0xfffffffffffffffe;
    plStackX_8 = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    FUN_180076910(param_1,&plStackX_8,param_3,param_4,uVar1);
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x38))(param_2);
    }
  }
  return;
}





// 函数: void FUN_180447320(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_180447320(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  if (param_1 != 0) {
    *(int32_t *)(param_1 + 0x2a8) = param_2;
    *(int32_t *)(param_1 + 0x2ac) = param_3;
    *(int32_t *)(param_1 + 0x2b0) = param_4;
    *(int32_t *)(param_1 + 0x2b4) = param_5;
  }
  return;
}





// 函数: void FUN_180447360(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
void FUN_180447360(int64_t param_1,int32_t param_2,int32_t param_3,int32_t param_4,
                  int32_t param_5)

{
  if (param_1 != 0) {
    *(int32_t *)(param_1 + 0x2b8) = param_2;
    *(int32_t *)(param_1 + 700) = param_3;
    *(int32_t *)(param_1 + 0x2c0) = param_4;
    *(int32_t *)(param_1 + 0x2c4) = param_5;
  }
  return;
}



uint64_t FUN_1804473b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  byte bVar1;
  uint64_t in_RAX;
  uint64_t uVar2;
  uint64_t uVar3;
  void *puStack_30;
  int64_t lStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  if (param_1 == 0) {
    return in_RAX & 0xffffffffffffff00;
  }
  uVar2 = CoreMemoryPoolValidator(&puStack_30);
  bVar1 = FUN_1800755c0(param_1,uVar2,param_3,param_4,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return (uint64_t)bVar1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t *
FUN_180447430(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  int64_t *plStackX_20;
  int32_t uVar4;
  uint64_t uVar5;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_4c;
  void *puStack_48;
  int64_t lStack_40;
  int iStack_38;
  
  uVar5 = 0xfffffffffffffffe;
  uVar4 = 0;
  CoreMemoryPoolValidator(&puStack_48);
  if (iStack_38 < 1) {
    puVar2 = (uint64_t *)FUN_1800befa0(render_system_data_config,&plStackX_20);
    plVar3 = (int64_t *)*puVar2;
    *puVar2 = 0;
LAB_18044751c:
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    if (plVar3 == (int64_t *)0x0) {
      uVar4 = 0xffffffff;
      goto LAB_180447540;
    }
  }
  else {
    plVar1 = (int64_t *)FUN_1800b33d0(system_resource_state,&plStackX_20,&puStack_48,param_4,uVar4,uVar5);
    plVar3 = (int64_t *)*plVar1;
    *plVar1 = 0;
    if (plStackX_20 != (int64_t *)0x0) {
      (**(code **)(*plStackX_20 + 0x38))();
    }
    if (plVar3 == (int64_t *)0x0) {
      FUN_180627020(&unknown_var_9992_ptr,param_2);
      puVar2 = (uint64_t *)FUN_1800befa0(render_system_data_config,&plStackX_20);
      plVar3 = (int64_t *)*puVar2;
      *puVar2 = 0;
      goto LAB_18044751c;
    }
  }
  uVar4 = (**(code **)(*plVar3 + 8))(plVar3);
LAB_180447540:
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  uStack_58 = SUB84(plVar3,0);
  uStack_54 = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_58;
  param_1[1] = uStack_54;
  param_1[2] = uVar4;
  param_1[3] = uStack_4c;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x38))(plVar3);
  }
  puStack_48 = &system_data_buffer_ptr;
  if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return param_1;
}



int32_t *
FUN_1804475e0(int32_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_1800763c0(param_2,&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180447660(int32_t *param_1,int8_t param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180075030(uVar2,param_2,1);
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,&unknown_var_16_ptr);
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int32_t * FUN_180447710(int32_t *param_1,int64_t *param_2)

{
  int32_t uVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x300,0x10,3,0xfffffffffffffffe);
  plVar3 = (int64_t *)FUN_180075030(uVar2,1);
  plStackX_10 = plVar3;
  if (plVar3 != (int64_t *)0x0) {
    (**(code **)(*plVar3 + 0x28))(plVar3);
  }
  (**(code **)(plVar3[2] + 0x10))(plVar3 + 2,&unknown_var_16_ptr);
  plStackX_8 = param_2;
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  FUN_180076910(plVar3,&plStackX_8);
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x38))(param_2);
  }
  uVar1 = (**(code **)(*plVar3 + 8))(plVar3);
  (**(code **)(*plVar3 + 0x28))(plVar3);
  uStack_20 = SUB84(plVar3,0);
  uStack_1c = (int32_t)((uint64_t)plVar3 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar1;
  param_1[3] = uStack_14;
  (**(code **)(*plVar3 + 0x38))(plVar3);
  return param_1;
}



int64_t * FUN_1804477f0(int64_t *param_1,int64_t param_2)

{
  int64_t *plVar1;
  int32_t uVar2;
  int32_t uStack_c;
  
  plVar1 = *(int64_t **)(param_2 + 0x1b0);
  if (plVar1 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plVar1 + 8))(plVar1);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  *param_1 = (int64_t)plVar1;
  param_1[1] = CONCAT44(uStack_c,uVar2);
  return param_1;
}



int32_t *
FUN_180447850(int32_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
             uint64_t *param_5,uint64_t *param_6)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *aplStackX_8 [2];
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  uint64_t uVar3;
  int32_t uStack_50;
  int32_t uStack_4c;
  int32_t uStack_44;
  void *puStack_40;
  int64_t lStack_38;
  
  uVar3 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&puStack_40);
  param_6 = (uint64_t *)*param_6;
  param_5 = (uint64_t *)*param_5;
  uStackX_18 = *param_4;
  uStackX_20 = *param_3;
  FUN_180485a80(aplStackX_8,&puStack_40,&uStackX_20,&uStackX_18,&param_5,&param_6,uVar3);
  plVar1 = aplStackX_8[0];
  if (aplStackX_8[0] == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*aplStackX_8[0] + 8))(aplStackX_8[0]);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_50 = SUB84(plVar1,0);
  uStack_4c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_50;
  param_1[1] = uStack_4c;
  param_1[2] = uVar2;
  param_1[3] = uStack_44;
  if (aplStackX_8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_8[0] + 0x38))();
  }
  puStack_40 = &system_data_buffer_ptr;
  if (lStack_38 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int32_t *
FUN_180447990(int32_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
             int64_t *param_5)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  uint64_t uStackX_18;
  uint64_t uStackX_20;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_74;
  void *puStack_70;
  int64_t lStack_68;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int8_t auStack_40 [8];
  uint64_t uStack_38;
  int64_t *plStack_28;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  
  CoreMemoryPoolValidator(&puStack_70);
  param_5 = (int64_t *)*param_5;
  uStackX_18 = *param_4;
  uStackX_20 = *param_3;
  FUN_1804871c0(&plStackX_8,&puStack_70,&uStackX_20,&uStackX_18,&param_5);
  plStack_50 = (int64_t *)0x0;
  plStack_48 = (int64_t *)0x0;
  param_5 = (int64_t *)auStack_40;
  plStack_28 = (int64_t *)0x0;
  uStack_38 = 0;
  auStack_40[0] = 0;
  FUN_18022f2e0(&plStack_50,plStackX_8,0);
  param_5 = (int64_t *)0x3f8000003f800000;
  uStackX_18 = 0;
  FUN_180230c90(&plStack_50,&uStackX_18,&param_5);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_80 = SUB84(plVar1,0);
  uStack_7c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_80;
  param_1[1] = uStack_7c;
  param_1[2] = uVar2;
  param_1[3] = uStack_74;
  if ((plStack_50 != (int64_t *)0x0) && (plStack_48 != (int64_t *)0x0)) {
    if (cStack_1e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_40);
    if (cStack_20 != '\0') {
      FUN_180079520(plStack_50);
    }
    if (cStack_1f != '\0') {
      FUN_180079520(plStack_50);
    }
    plVar1 = plStack_48;
    param_5 = plStack_48;
    plStack_48 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  param_5 = (int64_t *)auStack_40;
  FUN_18007f6a0(auStack_40);
  if (plStack_28 != (int64_t *)0x0) {
    (**(code **)(*plStack_28 + 0x38))();
  }
  if (plStack_48 != (int64_t *)0x0) {
    (**(code **)(*plStack_48 + 0x38))();
  }
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x38))();
  }
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  puStack_70 = &system_data_buffer_ptr;
  if (lStack_68 == 0) {
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



int32_t *
FUN_180447b80(int32_t *param_1,int8_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int32_t uVar2;
  int64_t *plStackX_8;
  int32_t uStack_20;
  int32_t uStack_1c;
  int32_t uStack_14;
  
  FUN_1800b7b50(param_1,&plStackX_8,param_2,param_4,0xfffffffffffffffe);
  plVar1 = plStackX_8;
  if (plStackX_8 == (int64_t *)0x0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (**(code **)(*plStackX_8 + 8))(plStackX_8);
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  uStack_20 = SUB84(plVar1,0);
  uStack_1c = (int32_t)((uint64_t)plVar1 >> 0x20);
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  param_1[2] = uVar2;
  param_1[3] = uStack_14;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return param_1;
}





// 函数: void FUN_180447c00(uint64_t param_1,int32_t *param_2,int32_t *param_3,uint64_t param_4,
void FUN_180447c00(uint64_t param_1,int32_t *param_2,int32_t *param_3,uint64_t param_4,
                  int32_t param_5)

{
  int32_t uVar1;
  uint64_t uStackX_8;
  int32_t uStack_28;
  int32_t uStack_24;
  int32_t uStack_20;
  int32_t uStack_1c;
  
  uStack_28 = *param_2;
  uStack_24 = param_2[1];
  uStack_20 = param_2[2];
  uStack_1c = param_2[3];
  uVar1 = FUN_1800c11a0(uStack_28,&uStack_28);
  uStack_28 = *param_3;
  uStack_24 = param_3[1];
  uStack_20 = param_3[2];
  uStack_1c = param_3[3];
  uStackX_8 = param_4;
  FUN_1800c1040(param_1,uVar1,&uStackX_8,&param_5,&uStack_28);
  return;
}





// 函数: void FUN_180447ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180447ca0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  code *pcVar1;
  void *puVar2;
  uint64_t uVar3;
  void *puStack_30;
  void *puStack_28;
  
  uVar3 = 0xfffffffffffffffe;
  CoreMemoryPoolValidator(&puStack_30);
  pcVar1 = *(code **)(*(int64_t *)(param_1 + 0x10) + 0x10);
  puVar2 = &system_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
    puVar2 = puStack_28;
  }
  (*pcVar1)((int64_t *)(param_1 + 0x10),puVar2,pcVar1,param_4,uVar3);
  puStack_30 = &system_data_buffer_ptr;
  if (puStack_28 != (void *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}





// 函数: void FUN_180447d40(int64_t param_1,uint param_2)
void FUN_180447d40(int64_t param_1,uint param_2)

{
  *(float *)(param_1 + 0x248) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x24c) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x250) = (float)(param_2 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x254) = (float)(param_2 >> 0x18) * 0.003921569;
  return;
}



int32_t FUN_180447de0(int64_t param_1)

{
  int64_t lVar1;
  
  if ((*(byte *)(param_1 + 0xfd) & 0x20) != 0) {
    return *(int32_t *)(param_1 + 0x1fc);
  }
  lVar1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  return *(int32_t *)(lVar1 + 0x1fc);
}



int32_t FUN_180447e10(int64_t param_1)

{
  int64_t lVar1;
  
  if ((*(byte *)(param_1 + 0xfd) & 0x20) != 0) {
    return *(int32_t *)(param_1 + 0x200);
  }
  lVar1 = func_0x000180085de0(*(uint64_t *)(param_1 + 0x1b0));
  return *(int32_t *)(lVar1 + 0x200);
}





// 函数: void FUN_180447e40(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180447e40(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int64_t *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar2 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_18 = (int64_t *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  FUN_18022f2e0(&plStack_40,param_1,0,param_4,uVar2);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  FUN_180234a10(&plStack_40,0,1);
  if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
    if (cStack_e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_30);
    if (cStack_10 != '\0') {
      FUN_180079520(plStack_40);
    }
    if (cStack_f != '\0') {
      FUN_180079520(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_30);
  if (plStack_18 != (int64_t *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180447f70(int64_t *param_1)
void FUN_180447f70(int64_t *param_1)

{
  int64_t *plVar1;
  int iVar2;
  void *puVar3;
  uint64_t uVar4;
  int64_t *plStack_40;
  int64_t *plStack_38;
  int8_t auStack_30 [8];
  uint64_t uStack_28;
  int64_t *plStack_18;
  char cStack_10;
  char cStack_f;
  char cStack_e;
  
  uVar4 = 0xfffffffffffffffe;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plStack_40 = (int64_t *)0x0;
  plStack_38 = (int64_t *)0x0;
  plStack_18 = (int64_t *)0x0;
  uStack_28 = 0;
  auStack_30[0] = 0;
  FUN_18022f2e0(&plStack_40,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  iVar2 = FUN_1802349a0(plStack_38);
  if ((10 < iVar2) ||
     ((int)((int)plStack_38[0x11] + ((int)plStack_38[0x11] >> 0x1f & 3U)) >> 2 < iVar2)) {
    puVar3 = &system_buffer_ptr;
    if ((void *)plStack_40[3] != (void *)0x0) {
      puVar3 = (void *)plStack_40[3];
    }
    FUN_1800623b0(system_message_context,0,0x80000000000,3,&unknown_var_5472_ptr,iVar2,puVar3,(int)plStack_38[0xc],
                  uVar4);
  }
  cStack_10 = '\x01';
  if ((plStack_40 != (int64_t *)0x0) && (plStack_38 != (int64_t *)0x0)) {
    if (cStack_e != '\0') {
      FUN_180075b70();
    }
    FUN_18007f6a0(auStack_30);
    if (cStack_10 != '\0') {
      FUN_180079520(plStack_40);
    }
    if (cStack_f != '\0') {
      FUN_180079520(plStack_40);
    }
    plVar1 = plStack_38;
    plStack_38 = (int64_t *)0x0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  FUN_18007f6a0(auStack_30);
  if (plStack_18 != (int64_t *)0x0) {
    (**(code **)(*plStack_18 + 0x38))();
  }
  if (plStack_38 != (int64_t *)0x0) {
    (**(code **)(*plStack_38 + 0x38))();
  }
  if (plStack_40 != (int64_t *)0x0) {
    (**(code **)(*plStack_40 + 0x38))();
  }
  return;
}





// 函数: void FUN_180448110(int64_t *param_1,int64_t param_2,uint64_t param_3)
void FUN_180448110(int64_t *param_1,int64_t param_2,uint64_t param_3)

{
  int64_t *plVar1;
  int32_t uStack_68;
  int32_t uStack_64;
  int32_t uStack_60;
  int32_t uStack_5c;
  int64_t *plStack_58;
  int64_t *plStack_50;
  int8_t auStack_48 [8];
  uint64_t uStack_40;
  int64_t *plStack_30;
  char cStack_28;
  char cStack_27;
  char cStack_26;
  
  if (param_2 == 0) {
    SystemDataInitializer(&unknown_var_9928_ptr);
  }
  else {
    if (param_1 != (int64_t *)0x0) {
      (**(code **)(*param_1 + 0x28))();
    }
    plStack_58 = (int64_t *)0x0;
    plStack_50 = (int64_t *)0x0;
    plStack_30 = (int64_t *)0x0;
    uStack_40 = 0;
    auStack_48[0] = 0;
    FUN_18022f2e0(&plStack_58,param_1,0);
    if (param_1 != (int64_t *)0x0) {
      (**(code **)(*param_1 + 0x38))(param_1);
    }
    uStack_68 = 0x3f800000;
    uStack_64 = 0x3f800000;
    uStack_60 = 0x3f800000;
    uStack_5c = 0x3f800000;
    FUN_180235ca0(&plStack_58,param_2,param_3,0xff,&uStack_68,1,0,0,1);
    if ((plStack_58 != (int64_t *)0x0) && (plStack_50 != (int64_t *)0x0)) {
      if (cStack_26 != '\0') {
        FUN_180075b70();
      }
      FUN_18007f6a0(auStack_48);
      if (cStack_28 != '\0') {
        FUN_180079520(plStack_58);
      }
      if (cStack_27 != '\0') {
        FUN_180079520(plStack_58);
      }
      plVar1 = plStack_50;
      plStack_50 = (int64_t *)0x0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
    }
    FUN_18007f6a0(auStack_48);
    if (plStack_30 != (int64_t *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
    if (plStack_50 != (int64_t *)0x0) {
      (**(code **)(*plStack_50 + 0x38))();
    }
    if (plStack_58 != (int64_t *)0x0) {
      (**(code **)(*plStack_58 + 0x38))();
    }
  }
  return;
}



float FUN_180448420(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  fVar1 = *(float *)((int64_t)param_1 + 0x284);
  fVar2 = *(float *)((int64_t)param_1 + 0x274);
  (**(code **)(*param_1 + 0x38))(param_1);
  return fVar1 - fVar2;
}



float FUN_180448470(int64_t *param_1)

{
  float fVar1;
  float fVar2;
  
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  fVar1 = *(float *)(param_1 + 0x51);
  fVar2 = *(float *)(param_1 + 0x4f);
  (**(code **)(*param_1 + 0x38))(param_1);
  return fVar1 - fVar2;
}



uint64_t * FUN_1804484c0(uint64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (param_2 == (int64_t *)0x0) {
    *param_1 = 0;
    param_1[1] = 0x7f7fffff00000000;
    return param_1;
  }
  (**(code **)(*param_2 + 0x28))(param_2);
  uVar1 = *(uint64_t *)((int64_t)param_2 + 0x274);
  uVar2 = *(uint64_t *)((int64_t)param_2 + 0x27c);
  (**(code **)(*param_2 + 0x38))(param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



uint64_t * FUN_180448540(uint64_t *param_1,int64_t *param_2)

{
  uint64_t uVar1;
  uint64_t uVar2;
  
  if (param_2 == (int64_t *)0x0) {
    *param_1 = 0;
    param_1[1] = 0x7f7fffff00000000;
    return param_1;
  }
  (**(code **)(*param_2 + 0x28))(param_2);
  uVar1 = *(uint64_t *)((int64_t)param_2 + 0x284);
  uVar2 = *(uint64_t *)((int64_t)param_2 + 0x28c);
  (**(code **)(*param_2 + 0x38))(param_2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}





