#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 02_core_engine_part058.c - 14 个函数

// 函数: void FUN_180093af0(int64_t param_1)
void FUN_180093af0(int64_t param_1)

{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint uVar11;
  
  lVar3 = *(int64_t *)(system_main_module_state + 8);
  uVar10 = (uint64_t)(*(uint *)(lVar3 + 0x13c) & 1);
  iVar1 = *(int *)(lVar3 + 0xc4 + uVar10 * 0x48);
  lVar4 = *(int64_t *)(system_main_module_state + 8);
  uVar8 = (uint64_t)(*(uint *)(lVar4 + 0x13c) & 1);
  iVar2 = *(int *)(lVar4 + 0xf0 + uVar8 * 0x48);
  lVar5 = *(int64_t *)(system_main_module_state + 8);
  uVar9 = (uint64_t)(*(uint *)(lVar5 + 0x13c) & 1);
  uVar7 = *(int *)(lVar5 + 0xb4 + uVar9 * 0x48) - *(int *)(lVar5 + 0xac + uVar9 * 0x48);
  uVar11 = *(int *)(lVar5 + 0xb8 + uVar9 * 0x48) - *(int *)(lVar5 + 0xb0 + uVar9 * 0x48);
  uVar6 = 1;
  if (1 < uVar7) {
    uVar6 = uVar7;
  }
  uVar7 = 1;
  if (1 < uVar11) {
    uVar7 = uVar11;
  }
  *(float *)(param_1 + 0x17e0) =
       (float)(*(int *)(lVar3 + 0xc0 + uVar10 * 0x48) - *(int *)(lVar4 + 0xec + uVar8 * 0x48)) /
       (float)uVar6;
  *(float *)(param_1 + 0x17e4) = (float)(iVar1 - iVar2) / (float)uVar7;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093bf0(int64_t *param_1,uint64_t *param_2)
void FUN_180093bf0(int64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  
  puVar11 = (uint64_t *)param_1[1];
  if (puVar11 < (uint64_t *)param_1[2]) {
    param_1[1] = (int64_t)(puVar11 + 6);
    puVar11[4] = 0xffffffffffffffff;
    uVar6 = param_2[1];
    *puVar11 = *param_2;
    puVar11[1] = uVar6;
    uVar6 = param_2[3];
    puVar11[2] = param_2[2];
    puVar11[3] = uVar6;
    *(int32_t *)(puVar11 + 4) = *(int32_t *)(param_2 + 4);
    *(int32_t *)((int64_t)puVar11 + 0x24) = *(int32_t *)((int64_t)param_2 + 0x24);
    *(int32_t *)((int64_t)puVar11 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x2c);
    *(int32_t *)(puVar11 + 5) = *(int32_t *)(param_2 + 5);
    return;
  }
  puVar9 = (uint64_t *)*param_1;
  lVar10 = ((int64_t)puVar11 - (int64_t)puVar9) / 0x30;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) {
      puVar7 = (uint64_t *)0x0;
      goto LAB_180093cb6;
    }
  }
  puVar7 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x30,(char)param_1[3]);
  puVar11 = (uint64_t *)param_1[1];
  puVar9 = (uint64_t *)*param_1;
LAB_180093cb6:
  puVar8 = puVar7;
  if (puVar9 != puVar11) {
    lVar12 = (int64_t)puVar7 - (int64_t)puVar9;
    puVar9 = puVar9 + 4;
    do {
      *(uint64_t *)(lVar12 + (int64_t)puVar9) = 0xffffffffffffffff;
      uVar6 = puVar9[-3];
      puVar1 = puVar9 + 6;
      *puVar8 = puVar9[-4];
      puVar8[1] = uVar6;
      puVar8 = puVar8 + 6;
      uVar6 = puVar9[-1];
      puVar2 = (uint64_t *)(lVar12 + -0x40 + (int64_t)puVar1);
      *puVar2 = puVar9[-2];
      puVar2[1] = uVar6;
      *(int32_t *)(lVar12 + -0x30 + (int64_t)puVar1) = *(int32_t *)puVar9;
      *(int32_t *)(lVar12 + -0x2c + (int64_t)puVar1) = *(int32_t *)((int64_t)puVar9 + 4);
      *(int32_t *)(lVar12 + -0x24 + (int64_t)puVar1) = *(int32_t *)((int64_t)puVar9 + 0xc);
      *(int32_t *)((int64_t)puVar9 + lVar12 + 8) = *(int32_t *)(puVar9 + 1);
      puVar2 = puVar9 + 2;
      puVar9 = puVar1;
    } while (puVar2 != puVar11);
  }
  puVar8[4] = 0xffffffffffffffff;
  uVar6 = param_2[1];
  *puVar8 = *param_2;
  puVar8[1] = uVar6;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x14);
  uVar4 = *(int32_t *)(param_2 + 3);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x1c);
  *(int32_t *)(puVar8 + 2) = *(int32_t *)(param_2 + 2);
  *(int32_t *)((int64_t)puVar8 + 0x14) = uVar3;
  *(int32_t *)(puVar8 + 3) = uVar4;
  *(int32_t *)((int64_t)puVar8 + 0x1c) = uVar5;
  *(int32_t *)(puVar8 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)puVar8 + 0x24) = *(int32_t *)((int64_t)param_2 + 0x24);
  *(int32_t *)((int64_t)puVar8 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(puVar8 + 5) = *(int32_t *)(param_2 + 5);
  if (*param_1 != 0) {
                    // WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
  *param_1 = (int64_t)puVar7;
  param_1[1] = (int64_t)(puVar8 + 6);
  param_1[2] = (int64_t)(puVar7 + lVar10 * 6);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180093d90(int64_t *param_1,uint64_t param_2)
void FUN_180093d90(int64_t *param_1,uint64_t param_2)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int8_t *puVar5;
  uint64_t *puVar6;
  int8_t *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  
  lVar9 = param_1[1];
  lVar8 = *param_1;
  lVar10 = (lVar9 - lVar8) / 0x50;
  puVar5 = (int8_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_180093e1b;
  }
  puVar5 = (int8_t *)
           CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x50,(char)param_1[3],lVar8,0xfffffffffffffffe);
  lVar9 = param_1[1];
  lVar8 = *param_1;
LAB_180093e1b:
  puVar7 = puVar5;
  if (lVar8 != lVar9) {
    puVar6 = (uint64_t *)(puVar5 + 0x20);
    lVar8 = lVar8 - (int64_t)puVar5;
    do {
      *puVar7 = *(int8_t *)((int64_t)puVar6 + lVar8 + -0x20);
      puVar1 = (int32_t *)(lVar8 + -0x1c + (int64_t)puVar6);
      uVar2 = puVar1[1];
      uVar3 = puVar1[2];
      uVar4 = puVar1[3];
      *(int32_t *)((int64_t)puVar6 + -0x1c) = *puVar1;
      *(int32_t *)(puVar6 + -3) = uVar2;
      *(int32_t *)((int64_t)puVar6 + -0x14) = uVar3;
      *(int32_t *)(puVar6 + -2) = uVar4;
      puVar6[-1] = &system_state_ptr;
      *puVar6 = 0;
      *(int32_t *)(puVar6 + 1) = 0;
      puVar6[-1] = &system_data_buffer_ptr;
      puVar6[2] = 0;
      *puVar6 = 0;
      *(int32_t *)(puVar6 + 1) = 0;
      *(int32_t *)(puVar6 + 1) = *(int32_t *)(lVar8 + 8 + (int64_t)puVar6);
      *puVar6 = *(uint64_t *)(lVar8 + (int64_t)puVar6);
      *(int32_t *)((int64_t)puVar6 + 0x14) = *(int32_t *)(lVar8 + 0x14 + (int64_t)puVar6);
      *(int32_t *)(puVar6 + 2) = *(int32_t *)(lVar8 + 0x10 + (int64_t)puVar6);
      *(int32_t *)(lVar8 + 8 + (int64_t)puVar6) = 0;
      *(uint64_t *)(lVar8 + (int64_t)puVar6) = 0;
      *(uint64_t *)(lVar8 + 0x10 + (int64_t)puVar6) = 0;
      *(int32_t *)(puVar6 + 3) = *(int32_t *)(lVar8 + 0x18 + (int64_t)puVar6);
      *(uint64_t *)((int64_t)puVar6 + 0x1c) = *(uint64_t *)(lVar8 + 0x1c + (int64_t)puVar6);
      *(int32_t *)((int64_t)puVar6 + 0x24) = *(int32_t *)((int64_t)puVar6 + lVar8 + 0x24);
      *(int32_t *)(puVar6 + 5) = *(int32_t *)((int64_t)puVar6 + lVar8 + 0x28);
      puVar7 = puVar7 + 0x50;
      puVar6 = puVar6 + 10;
    } while (lVar8 + -0x20 + (int64_t)puVar6 != lVar9);
  }
  FUN_1800940b0(puVar7,param_2);
  lVar9 = param_1[1];
  lVar8 = *param_1;
  if (lVar8 != lVar9) {
    do {
      *(uint64_t *)(lVar8 + 0x18) = &system_data_buffer_ptr;
      if (*(int64_t *)(lVar8 + 0x20) != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      *(uint64_t *)(lVar8 + 0x20) = 0;
      *(int32_t *)(lVar8 + 0x30) = 0;
      *(uint64_t *)(lVar8 + 0x18) = &system_state_ptr;
      lVar8 = lVar8 + 0x50;
    } while (lVar8 != lVar9);
    lVar8 = *param_1;
  }
  if (lVar8 == 0) {
    *param_1 = (int64_t)puVar5;
    param_1[1] = (int64_t)(puVar7 + 0x50);
    param_1[2] = (int64_t)(puVar5 + lVar10 * 0x50);
    return;
  }
                    // WARNING: Subroutine does not return
  CoreMemoryPoolInitializer(lVar8);
}



int8_t * FUN_180094010(int8_t *param_1,int8_t *param_2)

{
  uint64_t uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(uint64_t *)(param_2 + 0xc);
  *(uint64_t *)(param_1 + 4) = *(uint64_t *)(param_2 + 4);
  *(uint64_t *)(param_1 + 0xc) = uVar1;
  *(void **)(param_1 + 0x18) = &system_state_ptr;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(void **)(param_1 + 0x18) = &system_data_buffer_ptr;
  *(uint64_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x28) = 0;
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_2 + 0x28);
  *(uint64_t *)(param_1 + 0x20) = *(uint64_t *)(param_2 + 0x20);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(param_2 + 0x34);
  *(int32_t *)(param_1 + 0x30) = *(int32_t *)(param_2 + 0x30);
  *(int32_t *)(param_2 + 0x28) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  *(uint64_t *)(param_2 + 0x30) = 0;
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x3c) = *(uint64_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_2 + 0x48);
  return param_1;
}



int8_t *
FUN_1800940b0(int8_t *param_1,int8_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(int32_t *)(param_2 + 8);
  uVar2 = *(int32_t *)(param_2 + 0xc);
  uVar3 = *(int32_t *)(param_2 + 0x10);
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_1 + 8) = uVar1;
  *(int32_t *)(param_1 + 0xc) = uVar2;
  *(int32_t *)(param_1 + 0x10) = uVar3;
  SystemCore_NetworkHandler0(param_1 + 0x18,param_2 + 0x18,param_3,param_4,0xfffffffffffffffe);
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x38);
  *(uint64_t *)(param_1 + 0x3c) = *(uint64_t *)(param_2 + 0x3c);
  *(int32_t *)(param_1 + 0x44) = *(int32_t *)(param_2 + 0x44);
  *(int32_t *)(param_1 + 0x48) = *(int32_t *)(param_2 + 0x48);
  return param_1;
}





// 函数: void FUN_180094120(float *param_1,float *param_2)
void FUN_180094120(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  float fVar25;
  
  fVar6 = param_1[0xf];
  fVar7 = param_1[0xb];
  fVar9 = param_1[7];
  fVar10 = param_1[0xd];
  fVar11 = param_1[2];
  fVar12 = param_1[0xe];
  fVar13 = param_1[6];
  fVar16 = param_1[10];
  fVar4 = fVar16 * fVar6 - fVar7 * fVar12;
  fVar1 = param_1[5];
  fVar5 = fVar13 * fVar6 - fVar9 * fVar12;
  fVar17 = param_1[3];
  fVar14 = fVar13 * fVar7 - fVar9 * fVar16;
  fVar15 = fVar11 * fVar6 - fVar17 * fVar12;
  fVar25 = fVar11 * fVar7 - fVar17 * fVar16;
  fVar2 = param_1[9];
  fVar23 = fVar11 * fVar9 - fVar17 * fVar13;
  fVar18 = fVar2 * fVar6 - fVar10 * fVar7;
  fVar19 = fVar1 * fVar6 - fVar10 * fVar9;
  fVar3 = param_1[1];
  fVar20 = fVar1 * fVar7 - fVar2 * fVar9;
  fVar21 = fVar3 * fVar6 - fVar10 * fVar17;
  fVar8 = fVar3 * fVar7 - fVar2 * fVar17;
  fVar22 = fVar3 * fVar9 - fVar1 * fVar17;
  fVar6 = fVar2 * fVar12 - fVar10 * fVar16;
  fVar7 = fVar1 * fVar12 - fVar10 * fVar13;
  fVar9 = fVar1 * fVar16 - fVar2 * fVar13;
  fVar24 = fVar3 * fVar12 - fVar10 * fVar11;
  fVar17 = fVar3 * fVar16 - fVar2 * fVar11;
  fVar12 = fVar3 * fVar13 - fVar1 * fVar11;
  fVar11 = (fVar1 * fVar4 - fVar2 * fVar5) + fVar10 * fVar14;
  *param_2 = fVar11;
  fVar10 = (fVar15 * param_1[9] - fVar4 * param_1[1]) - fVar25 * param_1[0xd];
  param_2[1] = fVar10;
  fVar16 = (fVar5 * param_1[1] - fVar15 * param_1[5]) + fVar23 * param_1[0xd];
  param_2[2] = fVar16;
  fVar13 = (fVar25 * param_1[5] - fVar14 * param_1[1]) - fVar23 * param_1[9];
  param_2[3] = fVar13;
  param_2[4] = (fVar5 * param_1[8] - fVar4 * param_1[4]) - fVar14 * param_1[0xc];
  param_2[5] = (fVar4 * *param_1 - fVar15 * param_1[8]) + fVar25 * param_1[0xc];
  param_2[6] = (fVar15 * param_1[4] - fVar5 * *param_1) - fVar23 * param_1[0xc];
  param_2[7] = (fVar14 * *param_1 - fVar25 * param_1[4]) + fVar23 * param_1[8];
  param_2[8] = (fVar18 * param_1[4] - fVar19 * param_1[8]) + fVar20 * param_1[0xc];
  param_2[9] = (fVar21 * param_1[8] - fVar18 * *param_1) - fVar8 * param_1[0xc];
  param_2[10] = (fVar19 * *param_1 - fVar21 * param_1[4]) + fVar22 * param_1[0xc];
  param_2[0xb] = (fVar8 * param_1[4] - fVar20 * *param_1) - fVar22 * param_1[8];
  param_2[0xc] = (fVar7 * param_1[8] - fVar6 * param_1[4]) - fVar9 * param_1[0xc];
  param_2[0xd] = (fVar6 * *param_1 - fVar24 * param_1[8]) + fVar17 * param_1[0xc];
  param_2[0xe] = (fVar24 * param_1[4] - fVar7 * *param_1) - fVar12 * param_1[0xc];
  param_2[0xf] = (fVar9 * *param_1 - fVar17 * param_1[4]) + fVar12 * param_1[8];
  fVar6 = fVar10 * param_1[4] + fVar11 * *param_1 + param_1[8] * fVar16 + fVar13 * param_1[0xc];
  if (fVar6 != 1.0) {
    fVar6 = 1.0 / fVar6;
    *param_2 = *param_2 * fVar6;
    param_2[1] = param_2[1] * fVar6;
    param_2[2] = param_2[2] * fVar6;
    param_2[3] = param_2[3] * fVar6;
    param_2[4] = param_2[4] * fVar6;
    param_2[5] = param_2[5] * fVar6;
    param_2[6] = param_2[6] * fVar6;
    param_2[7] = param_2[7] * fVar6;
    param_2[8] = param_2[8] * fVar6;
    param_2[9] = param_2[9] * fVar6;
    param_2[10] = param_2[10] * fVar6;
    param_2[0xb] = param_2[0xb] * fVar6;
    param_2[0xc] = param_2[0xc] * fVar6;
    param_2[0xd] = param_2[0xd] * fVar6;
    param_2[0xe] = param_2[0xe] * fVar6;
    param_2[0xf] = param_2[0xf] * fVar6;
  }
  return;
}



float * FUN_1800946d0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
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
  
  fVar1 = param_1[1];
  fVar2 = param_1[2];
  fVar3 = *param_1;
  fVar4 = param_1[3];
  fVar5 = param_1[4];
  fVar6 = param_3[3];
  fVar7 = param_3[7];
  fVar8 = param_3[9];
  fVar9 = param_3[1];
  fVar10 = param_3[6];
  fVar11 = param_3[2];
  fVar12 = param_3[5];
  fVar13 = param_3[10];
  fVar14 = param_3[0xb];
  fVar15 = param_3[0xf];
  *param_2 = fVar3 * *param_3 + fVar1 * param_3[4] + fVar2 * param_3[8] + fVar4 * param_3[0xc];
  param_2[1] = fVar9 * fVar3 + fVar12 * fVar1 + fVar8 * fVar2 + param_3[0xd] * fVar4;
  fVar8 = param_1[6];
  fVar12 = param_1[5];
  param_2[2] = fVar11 * fVar3 + fVar10 * fVar1 + fVar13 * fVar2 + param_3[0xe] * fVar4;
  fVar16 = param_1[7];
  fVar17 = param_3[8];
  fVar18 = param_3[4];
  param_2[3] = fVar6 * fVar3 + fVar7 * fVar1 + fVar14 * fVar2 + fVar15 * fVar4;
  fVar1 = param_3[9];
  fVar2 = param_3[5];
  param_2[4] = fVar5 * *param_3 + fVar12 * fVar18 + fVar8 * fVar17 + fVar16 * param_3[0xc];
  param_2[5] = fVar5 * fVar9 + fVar12 * fVar2 + fVar8 * fVar1 + fVar16 * param_3[0xd];
  fVar1 = param_1[9];
  fVar2 = param_1[10];
  fVar3 = param_3[8];
  fVar4 = param_3[4];
  fVar17 = param_1[0xb];
  param_2[6] = fVar5 * fVar11 + fVar12 * fVar10 + fVar8 * fVar13 + fVar16 * param_3[0xe];
  param_2[7] = fVar5 * fVar6 + fVar12 * fVar7 + fVar8 * fVar14 + fVar16 * fVar15;
  fVar5 = param_1[8];
  fVar8 = param_3[9];
  fVar12 = param_3[5];
  param_2[8] = fVar5 * *param_3 + fVar1 * fVar4 + fVar2 * fVar3 + fVar17 * param_3[0xc];
  param_2[9] = fVar5 * fVar9 + fVar1 * fVar12 + fVar2 * fVar8 + fVar17 * param_3[0xd];
  param_2[10] = fVar5 * fVar11 + fVar1 * fVar10 + fVar2 * fVar13 + fVar17 * param_3[0xe];
  fVar3 = param_1[0xd];
  fVar4 = param_1[0xe];
  fVar8 = param_3[4];
  fVar12 = param_3[8];
  fVar16 = param_1[0xf];
  param_2[0xb] = fVar5 * fVar6 + fVar1 * fVar7 + fVar2 * fVar14 + fVar17 * fVar15;
  fVar1 = param_1[0xc];
  fVar2 = param_3[9];
  fVar5 = param_3[5];
  param_2[0xc] = fVar1 * *param_3 + fVar3 * fVar8 + fVar4 * fVar12 + fVar16 * param_3[0xc];
  param_2[0xd] = fVar1 * fVar9 + fVar3 * fVar5 + fVar4 * fVar2 + fVar16 * param_3[0xd];
  param_2[0xe] = fVar1 * fVar11 + fVar3 * fVar10 + fVar4 * fVar13 + fVar16 * param_3[0xe];
  param_2[0xf] = fVar1 * fVar6 + fVar3 * fVar7 + fVar4 * fVar14 + fVar16 * fVar15;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180094b30(int64_t param_1,int64_t param_2)
void FUN_180094b30(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  void *puVar2;
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  void *puStack_78;
  void *puStack_70;
  int32_t uStack_68;
  uint8_t auStack_60 [72];
  uint64_t uStack_18;
  
  uStack_88 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  puStack_78 = &unknown_var_3480_ptr;
  puStack_70 = auStack_60;
  uStack_68 = 0;
  auStack_60[0] = 0;
  if (param_2 != 0) {
    lVar1 = -1;
    do {
      lVar1 = lVar1 + 1;
    } while (*(char *)(param_2 + lVar1) != '\0');
    uStack_68 = (int32_t)lVar1;
    strcpy_s(auStack_60,0x40,param_2);
  }
  *(int32_t *)(param_1 + 0x3530) = uStack_68;
  puVar2 = &system_buffer_ptr;
  if (puStack_70 != (void *)0x0) {
    puVar2 = puStack_70;
  }
  strcpy_s(*(uint64_t *)(param_1 + 0x3528),0x40,puVar2);
  puStack_78 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_a8);
}



int64_t FUN_180094c20(int64_t param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar2 = 6;
  lVar1 = param_1;
  do {
    func_0x000180074f10(lVar1);
    lVar1 = lVar1 + 0x20;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  *(uint64_t *)(param_1 + 0xc0) = 0x3f800000;
  *(uint64_t *)(param_1 + 200) = 0;
  *(uint64_t *)(param_1 + 0xd0) = 0x3f80000000000000;
  *(uint64_t *)(param_1 + 0xd8) = 0;
  *(int32_t *)(param_1 + 0xe0) = 0;
  *(int32_t *)(param_1 + 0xe4) = 0;
  *(int32_t *)(param_1 + 0xe8) = 0x3f800000;
  *(int32_t *)(param_1 + 0xec) = 0;
  *(int32_t *)(param_1 + 0xf0) = 0;
  *(int32_t *)(param_1 + 0xf4) = 0;
  *(int32_t *)(param_1 + 0xf8) = 0;
  *(int32_t *)(param_1 + 0xfc) = 0x3f800000;
  *(int8_t *)(param_1 + 0x100) = 1;
  *(int32_t *)(param_1 + 0x104) = 0xbf800000;
  *(int32_t *)(param_1 + 0x108) = 0x3f800000;
  *(int32_t *)(param_1 + 0x110) = 0xbf800000;
  *(int32_t *)(param_1 + 0x10c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x114) = 0x3f800000;
  *(uint64_t *)(param_1 + 0x118) = 0x447a0000;
  *(int32_t *)(param_1 + 0x120) = 0x3f800000;
  FUN_1802864f0(param_1);
  *(uint64_t *)(param_1 + 0x128) = 0;
  *(uint64_t *)(param_1 + 0x130) = 0x7f7fffff00000000;
  *(int8_t *)(param_1 + 0x124) = 0;
  return param_1;
}





// 函数: void FUN_180094d40(int64_t *param_1,uint64_t param_2)
void FUN_180094d40(int64_t *param_1,uint64_t param_2)

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
  FUN_18022f2e0(&plStack_40,param_1,0);
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x38))(param_1);
  }
  FUN_180237030(&plStack_40,param_2,0,0x3f800000,uVar2);
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



// 函数: void FUN_180094e80(uint64_t param_1,uint64_t param_2,int64_t param_3)
void FUN_180094e80(uint64_t param_1,uint64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t auStack_d8 [32];
  uint64_t uStack_b8;
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = system_resource_state;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  uStack_a8 = 0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  uStack_98 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_78 = (int32_t)lVar2;
    strcpy_s(auStack_70,0x40);
  }
  uStack_b8 = 0;
  FUN_1800b32c0(uVar1,param_2,&puStack_88,0);
  uStack_a8 = 1;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_d8);
}





// 函数: void FUN_180094f80(int64_t param_1,uint param_2)
void FUN_180094f80(int64_t param_1,uint param_2)

{
  *(float *)(param_1 + 0x238) = (float)(param_2 >> 0x10 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x23c) = (float)(param_2 >> 8 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x240) = (float)(param_2 & 0xff) * 0.003921569;
  *(float *)(param_1 + 0x244) = (float)(param_2 >> 0x18) * 0.003921569;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180095000(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)
void FUN_180095000(uint64_t param_1,uint64_t param_2,int64_t param_3,int8_t param_4)

{
  uint64_t uVar1;
  int64_t lVar2;
  int8_t auStack_c8 [32];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = system_resource_state;
  uStack_a0 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_c8;
  uStack_a8 = 0;
  puStack_88 = &unknown_var_3480_ptr;
  puStack_80 = auStack_70;
  uStack_78 = 0;
  auStack_70[0] = 0;
  uStack_98 = param_2;
  if (param_3 != 0) {
    lVar2 = -1;
    do {
      lVar2 = lVar2 + 1;
    } while (*(char *)(param_3 + lVar2) != '\0');
    uStack_78 = (int32_t)lVar2;
    strcpy_s(auStack_70,0x40);
  }
  FUN_1800b30d0(uVar1,param_2,&puStack_88,param_4);
  uStack_a8 = 1;
  puStack_88 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_c8);
}





// 函数: void FUN_180095100(int64_t *param_1,uint64_t param_2,uint64_t param_3)
void FUN_180095100(int64_t *param_1,uint64_t param_2,uint64_t param_3)

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
  return;
}



int64_t FUN_180095280(int64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t lVar3;
  uint64_t uVar2;
  
  uVar2 = *(uint64_t *)(param_1 + 8);
  if ((param_2 + 0x20U < uVar2) && (lVar3 = (int64_t)(uVar2 - (param_2 + 0x20U)) >> 5, 0 < lVar3))
  {
    puVar1 = (uint64_t *)(param_2 + 0x28);
    do {
      if (puVar1[-4] != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puVar1[-2] = 0;
      lVar3 = lVar3 + -1;
      puVar1[-4] = 0;
      *(int32_t *)(puVar1 + -3) = 0;
      *(int32_t *)(puVar1 + -3) = *(int32_t *)(puVar1 + 1);
      puVar1[-4] = *puVar1;
      *(int32_t *)((int64_t)puVar1 + -0xc) = *(int32_t *)((int64_t)puVar1 + 0x14);
      *(int32_t *)(puVar1 + -2) = *(int32_t *)(puVar1 + 2);
      *(int32_t *)(puVar1 + 1) = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
    } while (0 < lVar3);
    uVar2 = *(uint64_t *)(param_1 + 8);
  }
  puVar1 = (uint64_t *)(uVar2 - 0x20);
  *(uint64_t **)(param_1 + 8) = puVar1;
  (**(code **)*puVar1)(puVar1,0);
  return param_2;
}





// 函数: void FUN_1800952a1(int64_t param_1,int64_t param_2)
void FUN_1800952a1(int64_t param_1,int64_t param_2)

{
  int64_t in_RAX;
  uint64_t *puVar1;
  int64_t unaff_RSI;
  int64_t lVar2;
  
  lVar2 = param_1 - in_RAX >> 5;
  if (0 < lVar2) {
    puVar1 = (uint64_t *)(param_2 + 0x28);
    do {
      if (puVar1[-4] != 0) {
                    // WARNING: Subroutine does not return
        CoreMemoryPoolInitializer();
      }
      puVar1[-2] = 0;
      lVar2 = lVar2 + -1;
      puVar1[-4] = 0;
      *(int32_t *)(puVar1 + -3) = 0;
      *(int32_t *)(puVar1 + -3) = *(int32_t *)(puVar1 + 1);
      puVar1[-4] = *puVar1;
      *(int32_t *)((int64_t)puVar1 + -0xc) = *(int32_t *)((int64_t)puVar1 + 0x14);
      *(int32_t *)(puVar1 + -2) = *(int32_t *)(puVar1 + 2);
      *(int32_t *)(puVar1 + 1) = 0;
      *puVar1 = 0;
      puVar1[2] = 0;
      puVar1 = puVar1 + 4;
    } while (0 < lVar2);
    param_1 = *(int64_t *)(unaff_RSI + 8);
  }
  puVar1 = (uint64_t *)(param_1 + -0x20);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
  (**(code **)*puVar1)(puVar1,0);
  return;
}





// 函数: void FUN_1800952b5(uint64_t param_1,int64_t param_2)
void FUN_1800952b5(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  
  puVar1 = (uint64_t *)(param_2 + 0x28);
  do {
    if (puVar1[-4] != 0) {
                    // WARNING: Subroutine does not return
      CoreMemoryPoolInitializer();
    }
    puVar1[-2] = 0;
    unaff_RDI = unaff_RDI + -1;
    puVar1[-4] = 0;
    *(int32_t *)(puVar1 + -3) = 0;
    *(int32_t *)(puVar1 + -3) = *(int32_t *)(puVar1 + 1);
    puVar1[-4] = *puVar1;
    *(int32_t *)((int64_t)puVar1 + -0xc) = *(int32_t *)((int64_t)puVar1 + 0x14);
    *(int32_t *)(puVar1 + -2) = *(int32_t *)(puVar1 + 2);
    *(int32_t *)(puVar1 + 1) = 0;
    *puVar1 = 0;
    puVar1[2] = 0;
    puVar1 = puVar1 + 4;
  } while (0 < unaff_RDI);
  puVar1 = (uint64_t *)(*(int64_t *)(unaff_RSI + 8) + -0x20);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
  (**(code **)*puVar1)(puVar1,0);
  return;
}





// 函数: void FUN_18009531e(int64_t param_1)
void FUN_18009531e(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  
  puVar1 = (uint64_t *)(param_1 + -0x20);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
  (**(code **)*puVar1)(puVar1,0);
  return;
}





// 函数: void FUN_180095323(int64_t param_1)
void FUN_180095323(int64_t param_1)

{
  uint64_t *puVar1;
  int64_t unaff_RSI;
  
  puVar1 = (uint64_t *)(param_1 + -0x20);
  *(uint64_t **)(unaff_RSI + 8) = puVar1;
  (**(code **)*puVar1)(puVar1,0);
  return;
}



uint64_t * FUN_180095350(uint64_t *param_1,uint64_t param_2)

{
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  *(int32_t *)(param_1 + 0xe) = 0x1060101;
  *(int32_t *)((int64_t)param_1 + 0x74) = 0xff000000;
  *(int32_t *)(param_1 + 0xf) = 0x40300ff;
  *(uint64_t *)((int64_t)param_1 + 0x7c) = 0x30503;
  *(uint64_t *)((int64_t)param_1 + 0x84) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x8c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x94) = 0;
  *(int32_t *)((int64_t)param_1 + 0x9c) = 0;
  param_1[0x14] = 0x900;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0x1060101;
  *(int32_t *)((int64_t)param_1 + 0xb4) = 0xff000000;
  *(int32_t *)(param_1 + 0x17) = 0x40300ff;
  *(uint64_t *)((int64_t)param_1 + 0xbc) = 0x30503;
  *(uint64_t *)((int64_t)param_1 + 0xc4) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xcc) = 0;
  *(uint64_t *)((int64_t)param_1 + 0xd4) = 0;
  *(int32_t *)((int64_t)param_1 + 0xdc) = 0;
  param_1[0x1c] = 0x900;
  *param_1 = param_2;
  *(int8_t *)(param_1 + 1) = 0;
  return param_1;
}





