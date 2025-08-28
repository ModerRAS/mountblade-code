#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part090.c - 12 个函数

// 函数: void FUN_18024d052(void)
void FUN_18024d052(void)

{
  int64_t unaff_RBP;
  uint unaff_EDI;
  
                    // WARNING: Subroutine does not return
  memset(*(int64_t *)(unaff_RBP + 8 + (uint64_t)(unaff_EDI >> 10) * 8) +
         (int64_t)(int)(unaff_EDI + (unaff_EDI >> 10) * -0x400) * 0xc0,0,0xc0);
}






// 函数: void FUN_18024d10b(void)
void FUN_18024d10b(void)

{
  return;
}



int32_t *
FUN_18024d120(int32_t *param_1,int32_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = *param_2;
  CoreEngineDataTransformer(param_1 + 2,param_2 + 2,param_3,param_4,0xfffffffffffffffe);
  CoreEngineDataTransformer(param_1 + 10,param_2 + 10);
  CoreEngineDataTransformer(param_1 + 0x12,param_2 + 0x12);
  CoreEngineDataTransformer(param_1 + 0x1a,param_2 + 0x1a);
  param_1[0x22] = param_2[0x22];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = param_2[0x24];
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18024d1b0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint uVar2;
  int32_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int32_t *puVar6;
  int64_t lVar7;
  uint64_t uVar8;
  
  uVar8 = 0xfffffffffffffffe;
  CoreEngineDataTransformer();
  lVar5 = *(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20);
  lVar5 = lVar5 / 0x26 + (lVar5 >> 0x3f);
  lVar5 = (lVar5 >> 2) - (lVar5 >> 0x3f);
  uVar2 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar2;
  if (lVar5 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x98,uVar2 & 0xff,param_4,uVar8);
  }
  *(int64_t *)(param_1 + 0x20) = lVar4;
  *(int64_t *)(param_1 + 0x28) = lVar4;
  *(int64_t *)(param_1 + 0x30) = lVar5 * 0x98 + lVar4;
  puVar3 = *(int32_t **)(param_1 + 0x20);
  lVar5 = *(int64_t *)(param_2 + 0x28);
  lVar4 = *(int64_t *)(param_2 + 0x20);
  puVar6 = puVar3;
  if (lVar4 != lVar5) {
    lVar7 = lVar4 + 0x28;
    do {
      *puVar6 = *(int32_t *)(lVar7 + -0x28);
      CoreEngineDataTransformer((int64_t)puVar3 + lVar7 + (-0x20 - lVar4),lVar7 + -0x20);
      CoreEngineDataTransformer((int64_t)puVar3 + (lVar7 - lVar4),lVar7);
      CoreEngineDataTransformer((int64_t)puVar3 + lVar7 + (0x20 - lVar4),lVar7 + 0x20);
      CoreEngineDataTransformer((int64_t)puVar3 + lVar7 + (0x40 - lVar4),lVar7 + 0x40);
      *(int32_t *)((int64_t)puVar3 + lVar7 + (0x60 - lVar4)) = *(int32_t *)(lVar7 + 0x60);
      *(int32_t *)((int64_t)puVar3 + lVar7 + (100 - lVar4)) = *(int32_t *)(lVar7 + 100);
      *(int32_t *)((int64_t)puVar3 + lVar7 + (0x68 - lVar4)) = *(int32_t *)(lVar7 + 0x68);
      puVar6 = puVar6 + 0x26;
      lVar1 = lVar7 + 0x70;
      lVar7 = lVar7 + 0x98;
    } while (lVar1 != lVar5);
  }
  *(int32_t **)(param_1 + 0x28) = puVar6;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_18024d300(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uStackX_10;
  int64_t *plStackX_18;
  
  CoreEngineDataTransformer();
  plVar1 = (int64_t *)(param_1 + 0x20);
  lVar4 = *(int64_t *)(param_2 + 0x28) - *(int64_t *)(param_2 + 0x20) >> 6;
  uVar2 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_1 + 0x38) = uVar2;
  plStackX_18 = plVar1;
  if (lVar4 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 << 6,uVar2 & 0xff);
  }
  *plVar1 = lVar3;
  *(int64_t *)(param_1 + 0x28) = lVar3;
  *(int64_t *)(param_1 + 0x30) = lVar4 * 0x40 + lVar3;
  FUN_18024da80(&uStackX_10,*(uint64_t *)(param_2 + 0x20),*(uint64_t *)(param_2 + 0x28),*plVar1)
  ;
  *(uint64_t *)(param_1 + 0x28) = uStackX_10;
  return param_1;
}






// 函数: void FUN_18024d3b0(int64_t *param_1)
void FUN_18024d3b0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  
  FUN_1800b8500();
  lVar1 = *param_1;
  *param_1 = 0;
  lVar2 = param_1[1];
  param_1[1] = 0;
  lVar3 = param_1[2];
  param_1[2] = 0;
  lVar6 = param_1[3];
  *(int *)(param_1 + 3) = (int)param_1[3];
  plVar4 = (int64_t *)*param_1;
  *param_1 = lVar1;
  plVar5 = (int64_t *)param_1[1];
  param_1[1] = lVar2;
  param_1[2] = lVar3;
  *(int *)(param_1 + 3) = (int)lVar6;
  for (plVar7 = plVar4; plVar7 != plVar5; plVar7 = plVar7 + 1) {
    if ((int64_t *)*plVar7 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*plVar7 + 0x38))();
    }
  }
  if (plVar4 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar4);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024d490(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18024d490(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t *puVar11;
  
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar9 = (int64_t)puVar11 - (int64_t)puVar5 >> 6;
  puVar4 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_18024d500;
  }
  puVar4 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 << 6,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_18024d500:
  puVar7 = puVar4;
  if (puVar5 != puVar11) {
    lVar10 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 0xe;
    do {
      *puVar7 = &system_state_ptr;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *puVar7 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar10 + -0x20 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = puVar5[-10];
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -0xc);
      *(int32_t *)(lVar10 + -0x1c + (int64_t)puVar5) = puVar5[-7];
      *(int32_t *)(lVar10 + -0x20 + (int64_t)puVar5) = puVar5[-8];
      puVar5[-10] = 0;
      *(uint64_t *)(puVar5 + -0xc) = 0;
      *(uint64_t *)(puVar5 + -8) = 0;
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar10 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar10 + (int64_t)puVar5);
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 8;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 0x10;
    } while (puVar1 != puVar11);
  }
  FUN_18024d1b0(puVar7,param_2);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar10) {
    do {
      FUN_180152a20(lVar8);
      lVar8 = lVar8 + 0x40;
    } while (lVar8 != lVar10);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar7 + 8);
    param_1[2] = (int64_t)(puVar4 + lVar9 * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024d670(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18024d670(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  uint64_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int32_t *puVar11;
  
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
  lVar9 = (int64_t)puVar11 - (int64_t)puVar5 >> 6;
  puVar4 = (uint64_t *)0x0;
  if (lVar9 == 0) {
    lVar9 = 1;
  }
  else {
    lVar9 = lVar9 * 2;
    if (lVar9 == 0) goto LAB_18024d6e0;
  }
  puVar4 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 << 6,(char)param_1[3],param_4,0xfffffffffffffffe);
  puVar11 = (int32_t *)param_1[1];
  puVar5 = (int32_t *)*param_1;
LAB_18024d6e0:
  puVar7 = puVar4;
  if (puVar5 != puVar11) {
    lVar10 = (int64_t)puVar4 - (int64_t)puVar5;
    puVar5 = puVar5 + 0xe;
    do {
      *puVar7 = &system_state_ptr;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *puVar7 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar10 + -0x20 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + -0x28 + (int64_t)puVar5) = puVar5[-10];
      *(uint64_t *)(lVar10 + -0x30 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -0xc);
      *(int32_t *)(lVar10 + -0x1c + (int64_t)puVar5) = puVar5[-7];
      *(int32_t *)(lVar10 + -0x20 + (int64_t)puVar5) = puVar5[-8];
      puVar5[-10] = 0;
      *(uint64_t *)(puVar5 + -0xc) = 0;
      *(uint64_t *)(puVar5 + -8) = 0;
      puVar6 = (uint64_t *)((int64_t)puVar5 + lVar10 + -0x18);
      *puVar6 = 0;
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = 0;
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = 0;
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      uVar3 = *puVar6;
      *puVar6 = *(uint64_t *)(puVar5 + -6);
      *(uint64_t *)(puVar5 + -6) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -0x10 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -4);
      *(uint64_t *)(puVar5 + -4) = uVar3;
      uVar3 = *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5);
      *(uint64_t *)(lVar10 + -8 + (int64_t)puVar5) = *(uint64_t *)(puVar5 + -2);
      *(uint64_t *)(puVar5 + -2) = uVar3;
      uVar2 = *(int32_t *)(lVar10 + (int64_t)puVar5);
      *(int32_t *)(lVar10 + (int64_t)puVar5) = *puVar5;
      *puVar5 = uVar2;
      puVar7 = puVar7 + 8;
      puVar1 = puVar5 + 2;
      puVar5 = puVar5 + 0x10;
    } while (puVar1 != puVar11);
  }
  FUN_18024d300(puVar7,param_2);
  lVar10 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar10) {
    do {
      FUN_180152b00(lVar8);
      lVar8 = lVar8 + 0x40;
    } while (lVar8 != lVar10);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar4;
    param_1[1] = (int64_t)(puVar7 + 8);
    param_1[2] = (int64_t)(puVar4 + lVar9 * 8);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18024d850(uint64_t *param_1,int64_t param_2)
void FUN_18024d850(uint64_t *param_1,int64_t param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  lVar5 = ((int64_t)puVar7 - (int64_t)puVar4) / 0x30;
  puVar2 = (uint64_t *)0x0;
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    lVar5 = lVar5 * 2;
    if (lVar5 == 0) goto LAB_18024d8da;
  }
  puVar2 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x30,*(int8_t *)(param_1 + 3),puVar4,
                         0xfffffffffffffffe);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
LAB_18024d8da:
  puVar3 = puVar2;
  if (puVar4 != puVar7) {
    lVar6 = (int64_t)puVar2 - (int64_t)puVar4;
    puVar4 = puVar4 + 1;
    do {
      *puVar3 = &system_state_ptr;
      *(uint64_t *)(lVar6 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (int64_t)puVar4) = 0;
      *puVar3 = &system_data_buffer_ptr;
      *(uint64_t *)(lVar6 + 0x10 + (int64_t)puVar4) = 0;
      *(uint64_t *)(lVar6 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (int64_t)puVar4) = 0;
      *(int32_t *)(lVar6 + 8 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 1);
      *(uint64_t *)(lVar6 + (int64_t)puVar4) = *puVar4;
      *(int32_t *)(lVar6 + 0x14 + (int64_t)puVar4) = *(int32_t *)((int64_t)puVar4 + 0x14);
      *(int32_t *)(lVar6 + 0x10 + (int64_t)puVar4) = *(int32_t *)(puVar4 + 2);
      *(int32_t *)(puVar4 + 1) = 0;
      *puVar4 = 0;
      puVar4[2] = 0;
      *(int8_t *)(lVar6 + 0x18 + (int64_t)puVar4) = *(int8_t *)(puVar4 + 3);
      *(int8_t *)(lVar6 + 0x19 + (int64_t)puVar4) = *(int8_t *)((int64_t)puVar4 + 0x19);
      *(uint64_t *)(lVar6 + 0x20 + (int64_t)puVar4) = puVar4[4];
      puVar3 = puVar3 + 6;
      puVar1 = puVar4 + 5;
      puVar4 = puVar4 + 6;
    } while (puVar1 != puVar7);
  }
  *puVar3 = &system_state_ptr;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *puVar3 = &system_data_buffer_ptr;
  puVar3[3] = 0;
  puVar3[1] = 0;
  *(int32_t *)(puVar3 + 2) = 0;
  *(int32_t *)(puVar3 + 2) = *(int32_t *)(param_2 + 0x10);
  puVar3[1] = *(uint64_t *)(param_2 + 8);
  *(int32_t *)((int64_t)puVar3 + 0x1c) = *(int32_t *)(param_2 + 0x1c);
  *(int32_t *)(puVar3 + 3) = *(int32_t *)(param_2 + 0x18);
  *(int32_t *)(param_2 + 0x10) = 0;
  *(uint64_t *)(param_2 + 8) = 0;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int8_t *)(puVar3 + 4) = *(int8_t *)(param_2 + 0x20);
  *(int8_t *)((int64_t)puVar3 + 0x21) = *(int8_t *)(param_2 + 0x21);
  puVar3[5] = *(uint64_t *)(param_2 + 0x28);
  puVar7 = (uint64_t *)param_1[1];
  puVar4 = (uint64_t *)*param_1;
  if (puVar4 != puVar7) {
    do {
      *puVar4 = &system_data_buffer_ptr;
      if (puVar4[1] != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puVar4[1] = 0;
      *(int32_t *)(puVar4 + 3) = 0;
      *puVar4 = &system_state_ptr;
      puVar4 = puVar4 + 6;
    } while (puVar4 != puVar7);
    puVar4 = (uint64_t *)*param_1;
  }
  if (puVar4 == (uint64_t *)0x0) {
    *param_1 = puVar2;
    param_1[1] = puVar3 + 6;
    param_1[2] = puVar2 + lVar5 * 6;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t * FUN_18024da80(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint uVar3;
  int32_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int32_t *puVar7;
  int64_t lVar8;
  int64_t *plVar9;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    plVar9 = param_2 + 5;
    do {
      CoreEngineDataTransformer(param_4,plVar9 + -5);
      lVar6 = (*plVar9 - plVar9[-1]) / 0x26 + (*plVar9 - plVar9[-1] >> 0x3f);
      lVar6 = (lVar6 >> 2) - (lVar6 >> 0x3f);
      uVar3 = *(uint *)(plVar9 + 2);
      *(uint *)(param_4 + 0x38) = uVar3;
      if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 0x98,uVar3 & 0xff);
      }
      *(int64_t *)(param_4 + 0x20) = lVar5;
      *(int64_t *)(param_4 + 0x28) = lVar5;
      *(int64_t *)(param_4 + 0x30) = lVar6 * 0x98 + lVar5;
      puVar4 = *(int32_t **)(param_4 + 0x20);
      lVar6 = *plVar9;
      lVar5 = plVar9[-1];
      puVar7 = puVar4;
      if (lVar5 != lVar6) {
        lVar8 = lVar5 + 0x28;
        do {
          *puVar7 = *(int32_t *)(lVar8 + -0x28);
          CoreEngineDataTransformer((int64_t)puVar4 + ((lVar8 + -0x20) - lVar5),lVar8 + -0x20);
          CoreEngineDataTransformer((int64_t)puVar4 + (lVar8 - lVar5),lVar8);
          CoreEngineDataTransformer((int64_t)puVar4 + ((lVar8 + 0x20) - lVar5),lVar8 + 0x20);
          CoreEngineDataTransformer((int64_t)puVar4 + ((lVar8 + 0x40) - lVar5),lVar8 + 0x40);
          *(int32_t *)((int64_t)puVar4 + lVar8 + (0x60 - lVar5)) = *(int32_t *)(lVar8 + 0x60)
          ;
          *(int32_t *)((int64_t)puVar4 + lVar8 + (100 - lVar5)) = *(int32_t *)(lVar8 + 100);
          *(int32_t *)((int64_t)puVar4 + lVar8 + (0x68 - lVar5)) = *(int32_t *)(lVar8 + 0x68)
          ;
          puVar7 = puVar7 + 0x26;
          lVar1 = lVar8 + 0x70;
          lVar8 = lVar8 + 0x98;
        } while (lVar1 != lVar6);
      }
      *(int32_t **)(param_4 + 0x28) = puVar7;
      *param_1 = *param_1 + 0x40;
      param_4 = *param_1;
      plVar2 = plVar9 + 3;
      plVar9 = plVar9 + 8;
    } while (plVar2 != param_3);
  }
  return param_1;
}



int64_t * FUN_18024dc20(int64_t *param_1,uint64_t *param_2,uint64_t *param_3,int64_t param_4)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  
  *param_1 = param_4;
  if (param_2 != param_3) {
    puVar3 = param_2 + 2;
    do {
      puVar2 = (int32_t *)*param_1;
      *puVar2 = *(int32_t *)(puVar3 + -2);
      *(void **)(puVar2 + 2) = &system_state_ptr;
      *(uint64_t *)(puVar2 + 4) = 0;
      puVar2[6] = 0;
      *(void **)(puVar2 + 2) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar2 + 8) = 0;
      *(uint64_t *)(puVar2 + 4) = 0;
      puVar2[6] = 0;
      puVar2[6] = *(int32_t *)(puVar3 + 1);
      *(uint64_t *)(puVar2 + 4) = *puVar3;
      puVar2[9] = *(int32_t *)((int64_t)puVar3 + 0x14);
      puVar2[8] = *(int32_t *)(puVar3 + 2);
      *(int32_t *)(puVar3 + 1) = 0;
      *puVar3 = 0;
      puVar3[2] = 0;
      *(void **)(puVar2 + 10) = &system_state_ptr;
      *(uint64_t *)(puVar2 + 0xc) = 0;
      puVar2[0xe] = 0;
      *(void **)(puVar2 + 10) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar2 + 0x10) = 0;
      *(uint64_t *)(puVar2 + 0xc) = 0;
      puVar2[0xe] = 0;
      puVar2[0xe] = *(int32_t *)(puVar3 + 5);
      *(uint64_t *)(puVar2 + 0xc) = puVar3[4];
      puVar2[0x11] = *(int32_t *)((int64_t)puVar3 + 0x34);
      puVar2[0x10] = *(int32_t *)(puVar3 + 6);
      *(int32_t *)(puVar3 + 5) = 0;
      puVar3[4] = 0;
      puVar3[6] = 0;
      *(void **)(puVar2 + 0x12) = &system_state_ptr;
      *(uint64_t *)(puVar2 + 0x14) = 0;
      puVar2[0x16] = 0;
      *(void **)(puVar2 + 0x12) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar2 + 0x18) = 0;
      *(uint64_t *)(puVar2 + 0x14) = 0;
      puVar2[0x16] = 0;
      puVar2[0x16] = *(int32_t *)(puVar3 + 9);
      *(uint64_t *)(puVar2 + 0x14) = puVar3[8];
      puVar2[0x19] = *(int32_t *)((int64_t)puVar3 + 0x54);
      puVar2[0x18] = *(int32_t *)(puVar3 + 10);
      *(int32_t *)(puVar3 + 9) = 0;
      puVar3[8] = 0;
      puVar3[10] = 0;
      *(void **)(puVar2 + 0x1a) = &system_state_ptr;
      *(uint64_t *)(puVar2 + 0x1c) = 0;
      puVar2[0x1e] = 0;
      *(void **)(puVar2 + 0x1a) = &system_data_buffer_ptr;
      *(uint64_t *)(puVar2 + 0x20) = 0;
      *(uint64_t *)(puVar2 + 0x1c) = 0;
      puVar2[0x1e] = 0;
      puVar2[0x1e] = *(int32_t *)(puVar3 + 0xd);
      *(uint64_t *)(puVar2 + 0x1c) = puVar3[0xc];
      puVar2[0x21] = *(int32_t *)((int64_t)puVar3 + 0x74);
      puVar2[0x20] = *(int32_t *)(puVar3 + 0xe);
      *(int32_t *)(puVar3 + 0xd) = 0;
      puVar3[0xc] = 0;
      puVar3[0xe] = 0;
      puVar2[0x22] = *(int32_t *)(puVar3 + 0xf);
      puVar2[0x23] = *(int32_t *)((int64_t)puVar3 + 0x7c);
      puVar2[0x24] = *(int32_t *)(puVar3 + 0x10);
      *param_1 = (int64_t)(puVar2 + 0x26);
      puVar1 = puVar3 + 0x11;
      puVar3 = puVar3 + 0x13;
    } while (puVar1 != param_3);
  }
  return param_1;
}



double * FUN_18024dde0(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  
  dVar1 = param_1[1];
  dVar2 = param_1[2];
  dVar3 = *param_1;
  dVar4 = param_1[3];
  dVar5 = param_1[4];
  dVar6 = param_3[3];
  dVar7 = param_3[7];
  dVar8 = param_3[9];
  dVar9 = param_3[1];
  dVar10 = param_3[6];
  dVar11 = param_3[2];
  dVar12 = param_3[5];
  dVar13 = param_3[10];
  dVar14 = param_3[0xb];
  dVar15 = param_3[0xf];
  *param_2 = dVar3 * *param_3 + dVar1 * param_3[4] + dVar2 * param_3[8] + dVar4 * param_3[0xc];
  param_2[1] = dVar9 * dVar3 + dVar12 * dVar1 + dVar8 * dVar2 + param_3[0xd] * dVar4;
  dVar8 = param_1[6];
  dVar12 = param_1[5];
  param_2[2] = dVar11 * dVar3 + dVar10 * dVar1 + dVar13 * dVar2 + param_3[0xe] * dVar4;
  dVar16 = param_1[7];
  dVar17 = param_3[8];
  dVar18 = param_3[4];
  param_2[3] = dVar6 * dVar3 + dVar7 * dVar1 + dVar14 * dVar2 + dVar15 * dVar4;
  dVar1 = param_3[9];
  dVar2 = param_3[5];
  param_2[4] = dVar5 * *param_3 + dVar12 * dVar18 + dVar8 * dVar17 + dVar16 * param_3[0xc];
  param_2[5] = dVar5 * dVar9 + dVar12 * dVar2 + dVar8 * dVar1 + dVar16 * param_3[0xd];
  dVar1 = param_1[9];
  dVar2 = param_1[10];
  dVar3 = param_3[8];
  dVar4 = param_3[4];
  dVar17 = param_1[0xb];
  param_2[6] = dVar5 * dVar11 + dVar12 * dVar10 + dVar8 * dVar13 + dVar16 * param_3[0xe];
  param_2[7] = dVar5 * dVar6 + dVar12 * dVar7 + dVar8 * dVar14 + dVar16 * dVar15;
  dVar5 = param_1[8];
  dVar8 = param_3[9];
  dVar12 = param_3[5];
  param_2[8] = dVar5 * *param_3 + dVar1 * dVar4 + dVar2 * dVar3 + dVar17 * param_3[0xc];
  param_2[9] = dVar5 * dVar9 + dVar1 * dVar12 + dVar2 * dVar8 + dVar17 * param_3[0xd];
  param_2[10] = dVar5 * dVar11 + dVar1 * dVar10 + dVar2 * dVar13 + dVar17 * param_3[0xe];
  dVar3 = param_1[0xd];
  dVar4 = param_1[0xe];
  dVar8 = param_3[4];
  dVar12 = param_3[8];
  dVar16 = param_1[0xf];
  param_2[0xb] = dVar5 * dVar6 + dVar1 * dVar7 + dVar2 * dVar14 + dVar17 * dVar15;
  dVar1 = param_1[0xc];
  dVar2 = param_3[9];
  dVar5 = param_3[5];
  param_2[0xc] = dVar1 * *param_3 + dVar3 * dVar8 + dVar4 * dVar12 + dVar16 * param_3[0xc];
  param_2[0xd] = dVar1 * dVar9 + dVar3 * dVar5 + dVar4 * dVar2 + dVar16 * param_3[0xd];
  param_2[0xe] = dVar1 * dVar11 + dVar3 * dVar10 + dVar4 * dVar13 + dVar16 * param_3[0xe];
  param_2[0xf] = dVar1 * dVar6 + dVar3 * dVar7 + dVar4 * dVar14 + dVar16 * dVar15;
  return param_2;
}






// 函数: void FUN_18024e1f0(int64_t *param_1)
void FUN_18024e1f0(int64_t *param_1)

{
  if ((int64_t *)param_1[0xe] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xe] + 0x38))();
  }
  if ((int64_t *)param_1[0xd] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xd] + 0x38))();
  }
  if ((int64_t *)param_1[0xc] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xc] + 0x38))();
  }
  if ((int64_t *)param_1[0xb] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xb] + 0x38))();
  }
  if ((int64_t *)param_1[10] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[10] + 0x38))();
  }
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 5,8,2,FUN_180045af0);
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if ((int64_t *)param_1[1] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[1] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}






// 函数: void FUN_18024e300(uint64_t *param_1)
void FUN_18024e300(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  FUN_1808fc838(param_1 + 5,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
                    // WARNING: Subroutine does not return
  memset(param_1 + 0x10,0,0x260);
}






// 函数: void FUN_18024e3d0(int64_t param_1)
void FUN_18024e3d0(int64_t param_1)

{
  func_0x00018005c480();
  FUN_18024e500();
  if (*(int64_t *)(param_1 + 0x158) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x138) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x118) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xf8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xd8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0xb8) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x98) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x78) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (*(int64_t *)(param_1 + 0x58) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ(param_1);
  return;
}






// 函数: void FUN_18024e500(int64_t *param_1)
void FUN_18024e500(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    *(uint64_t *)(lVar2 + 0x18) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(int32_t *)(lVar2 + 0x30) = 0;
    *(uint64_t *)(lVar2 + 0x18) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}






// 函数: void FUN_18024e5a0(int64_t *param_1)
void FUN_18024e5a0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    *(uint64_t *)(lVar2 + 0x18) = &system_data_buffer_ptr;
    if (*(int64_t *)(lVar2 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar2 + 0x20) = 0;
    *(int32_t *)(lVar2 + 0x30) = 0;
    *(uint64_t *)(lVar2 + 0x18) = &system_state_ptr;
  }
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return;
}



int64_t FUN_18024e5c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  _Mtx_init_in_situ(param_1,0x102,param_3,param_4,0xfffffffffffffffe);
  *(uint64_t *)(param_1 + 0x58) = 0;
  *(uint64_t *)(param_1 + 0x60) = 0;
  *(uint64_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x70) = 3;
  *(uint64_t *)(param_1 + 0x78) = 0;
  *(uint64_t *)(param_1 + 0x80) = 0;
  *(uint64_t *)(param_1 + 0x88) = 0;
  *(int32_t *)(param_1 + 0x90) = 3;
  *(uint64_t *)(param_1 + 0x98) = 0;
  *(uint64_t *)(param_1 + 0xa0) = 0;
  *(uint64_t *)(param_1 + 0xa8) = 0;
  *(int32_t *)(param_1 + 0xb0) = 3;
  *(uint64_t *)(param_1 + 0xb8) = 0;
  *(uint64_t *)(param_1 + 0xc0) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(int32_t *)(param_1 + 0xd0) = 3;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(uint64_t *)(param_1 + 0xe0) = 0;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(int32_t *)(param_1 + 0xf0) = 3;
  *(uint64_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x100) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(int32_t *)(param_1 + 0x110) = 3;
  *(uint64_t *)(param_1 + 0x118) = 0;
  *(uint64_t *)(param_1 + 0x120) = 0;
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(int32_t *)(param_1 + 0x130) = 3;
  *(uint64_t *)(param_1 + 0x138) = 0;
  *(uint64_t *)(param_1 + 0x140) = 0;
  *(uint64_t *)(param_1 + 0x148) = 0;
  *(int32_t *)(param_1 + 0x150) = 3;
  *(uint64_t *)(param_1 + 0x158) = 0;
  *(uint64_t *)(param_1 + 0x160) = 0;
  *(uint64_t *)(param_1 + 0x168) = 0;
  *(int32_t *)(param_1 + 0x170) = 3;
  *(uint64_t *)(param_1 + 0x178) = 0;
  *(uint64_t *)(param_1 + 0x180) = 0;
  *(uint64_t *)(param_1 + 0x188) = 0;
  *(int32_t *)(param_1 + 400) = 3;
  *(int8_t *)(param_1 + 0x50) = 1;
  return param_1;
}






// 函数: void FUN_18024e720(int64_t param_1)
void FUN_18024e720(int64_t param_1)

{
  FUN_18024e7b0();
  if (*(int64_t **)(param_1 + 0x30) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x30) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x28) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x28) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x20) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x20) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x18) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x18) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x38))();
  }
  if (*(int64_t **)(param_1 + 8) != (int64_t *)0x0) {
    (**(code **)(**(int64_t **)(param_1 + 8) + 0x38))();
  }
  return;
}






