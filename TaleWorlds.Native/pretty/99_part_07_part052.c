#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_07_part052.c - 10 个函数
// 函数: void function_4ce730(int64_t *param_1,uint64_t *param_2)
void function_4ce730(int64_t *param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  puVar12 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
  lVar10 = ((int64_t)puVar12 - (int64_t)puVar8) / 0x60;
  puVar6 = (uint64_t *)0x0;
  if (lVar10 == 0) {
    lVar10 = 1;
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 == 0) goto LAB_1804ce7ba;
  }
  puVar6 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x60,(char)param_1[3],puVar8,0xfffffffffffffffe);
  puVar12 = (uint64_t *)param_1[1];
  puVar8 = (uint64_t *)*param_1;
LAB_1804ce7ba:
  puVar7 = puVar6;
  if (puVar8 != puVar12) {
    lVar11 = (int64_t)puVar6 - (int64_t)puVar8;
    puVar8 = puVar8 + 9;
    do {
      uVar5 = puVar8[-8];
      *puVar7 = puVar8[-9];
      puVar7[1] = uVar5;
      uVar5 = puVar8[-6];
      puVar7[2] = puVar8[-7];
      puVar7[3] = uVar5;
      uVar5 = puVar8[-4];
      puVar7[4] = puVar8[-5];
      puVar7[5] = uVar5;
      uVar5 = puVar8[-2];
      puVar7[6] = puVar8[-3];
      puVar7[7] = uVar5;
      *(uint64_t *)((int64_t)puVar8 + lVar11 + -8) = puVar8[-1];
      puVar8[-1] = 0;
      *(uint64_t *)((int64_t)puVar8 + lVar11) = *puVar8;
      *puVar8 = 0;
      *(int8_t *)((int64_t)puVar8 + lVar11 + 8) = *(int8_t *)(puVar8 + 1);
      *(int32_t *)((int64_t)puVar8 + lVar11 + 0xc) = *(int32_t *)((int64_t)puVar8 + 0xc);
      *(int32_t *)((int64_t)puVar8 + lVar11 + 0x10) = *(int32_t *)(puVar8 + 2);
      *(int32_t *)((int64_t)puVar8 + lVar11 + 0x14) = *(int32_t *)((int64_t)puVar8 + 0x14);
      puVar7 = puVar7 + 0xc;
      puVar1 = puVar8 + 3;
      puVar8 = puVar8 + 0xc;
    } while (puVar1 != puVar12);
  }
  uVar5 = param_2[1];
  *puVar7 = *param_2;
  puVar7[1] = uVar5;
  uVar5 = param_2[3];
  puVar7[2] = param_2[2];
  puVar7[3] = uVar5;
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 5);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(puVar7 + 4) = *(int32_t *)(param_2 + 4);
  *(int32_t *)((int64_t)puVar7 + 0x24) = uVar2;
  *(int32_t *)(puVar7 + 5) = uVar3;
  *(int32_t *)((int64_t)puVar7 + 0x2c) = uVar4;
  uVar5 = param_2[7];
  puVar7[6] = param_2[6];
  puVar7[7] = uVar5;
  puVar7[8] = param_2[8];
  param_2[8] = 0;
  puVar7[9] = param_2[9];
  param_2[9] = 0;
  *(int8_t *)(puVar7 + 10) = *(int8_t *)(param_2 + 10);
  *(int32_t *)((int64_t)puVar7 + 0x54) = *(int32_t *)((int64_t)param_2 + 0x54);
  *(int32_t *)(puVar7 + 0xb) = *(int32_t *)(param_2 + 0xb);
  *(int32_t *)((int64_t)puVar7 + 0x5c) = *(int32_t *)((int64_t)param_2 + 0x5c);
  lVar11 = param_1[1];
  lVar9 = *param_1;
  if (lVar9 != lVar11) {
    do {
      if (*(int64_t **)(lVar9 + 0x48) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar9 + 0x48) + 0x38))();
      }
      if (*(int64_t **)(lVar9 + 0x40) != (int64_t *)0x0) {
        (**(code **)(**(int64_t **)(lVar9 + 0x40) + 0x38))();
      }
      lVar9 = lVar9 + 0x60;
    } while (lVar9 != lVar11);
    lVar9 = *param_1;
  }
  if (lVar9 == 0) {
    *param_1 = (int64_t)puVar6;
    param_1[1] = (int64_t)(puVar7 + 0xc);
    param_1[2] = (int64_t)(puVar6 + lVar10 * 0xc);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar9);
}
// 函数: void function_4ce920(int param_1,int param_2,int64_t *param_3)
void function_4ce920(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int8_t uVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  for (lVar5 = (int64_t)param_1; lVar5 < param_2; lVar5 = lVar5 + 1) {
    lVar4 = *param_3;
    uVar3 = *(ushort *)(*(int64_t *)(lVar4 + 0x188) + lVar5 * 8);
    lVar1 = *(int64_t *)(lVar4 + 0x188) + lVar5 * 8;
    lVar6 = (uint64_t)uVar3 * 0x38 + *(int64_t *)(lVar4 + 0x68);
    if (*(int *)(lVar1 + 4) == *(int *)(lVar6 + 0x10)) {
      uVar2 = *(int8_t *)
               (*(int64_t *)(lVar4 + 0x130) + 8 + (uint64_t)*(ushort *)(lVar6 + 0x2a) * 0x10);
      function_4cdb90(lVar4,(uint64_t)uVar3,uVar2,*(int16_t *)(lVar1 + 2));
      function_4cd9a0(*param_3,uVar3,uVar2,*(int16_t *)(lVar1 + 2));
    }
  }
  return;
}
// 函数: void function_4ce93c(void)
void function_4ce93c(void)
{
  int64_t lVar1;
  int8_t uVar2;
  ushort uVar3;
  int64_t lVar4;
  int64_t unaff_RBX;
  int64_t lVar5;
  int64_t unaff_R14;
  int64_t *unaff_R15;
  do {
    lVar4 = *unaff_R15;
    uVar3 = *(ushort *)(*(int64_t *)(lVar4 + 0x188) + unaff_RBX * 8);
    lVar1 = *(int64_t *)(lVar4 + 0x188) + unaff_RBX * 8;
    lVar5 = (uint64_t)uVar3 * 0x38 + *(int64_t *)(lVar4 + 0x68);
    if (*(int *)(lVar1 + 4) == *(int *)(lVar5 + 0x10)) {
      uVar2 = *(int8_t *)
               (*(int64_t *)(lVar4 + 0x130) + 8 + (uint64_t)*(ushort *)(lVar5 + 0x2a) * 0x10);
      function_4cdb90(lVar4,(uint64_t)uVar3,uVar2,*(int16_t *)(lVar1 + 2));
      function_4cd9a0(*unaff_R15,uVar3,uVar2,*(int16_t *)(lVar1 + 2));
    }
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < unaff_R14);
  return;
}
// 函数: void function_4ce9c2(void)
void function_4ce9c2(void)
{
  return;
}
// 函数: void function_4cea10(int param_1,int param_2,int64_t *param_3)
void function_4cea10(int param_1,int param_2,int64_t *param_3)
{
  ushort uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  for (lVar5 = (int64_t)param_1; lVar5 < param_2; lVar5 = lVar5 + 1) {
    lVar2 = *param_3;
    lVar3 = *(int64_t *)(lVar2 + 0x68);
    lVar6 = (uint64_t)*(ushort *)(*(int64_t *)(lVar2 + 0x188) + lVar5 * 8) * 0x38;
    function_2fb280(*(uint64_t *)
                   (*(int64_t *)(lVar2 + 0xe0) + 0x28 +
                   (uint64_t)*(ushort *)(lVar6 + 0x28 + lVar3) * 0x50));
    uVar1 = *(ushort *)(lVar6 + 0x28 + lVar3);
    if (uVar1 != 0xffff) {
      lVar2 = *param_3;
      uVar4 = (uint64_t)uVar1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x28 + uVar4 * 0x50);
      *(int8_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x30 + uVar4 * 0x50) =
           *(int8_t *)(lVar3 + 0x20);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x34 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x44);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x38 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x48);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x3c + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x44);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x40 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x168);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x44 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x170);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x48 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x180);
      *(byte *)(*(int64_t *)(lVar2 + 0xe0) + 0x4c + uVar4 * 0x50) =
           *(byte *)(lVar3 + 0xa8) >> 3 & 1;
    }
  }
  return;
}
// 函数: void function_4cea2b(void)
void function_4cea2b(void)
{
  ushort uVar1;
  int64_t lVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t *unaff_R14;
  do {
    lVar2 = *unaff_R14;
    lVar3 = *(int64_t *)(lVar2 + 0x68);
    lVar5 = (uint64_t)*(ushort *)(*(int64_t *)(lVar2 + 0x188) + unaff_RSI * 8) * 0x38;
    function_2fb280(*(uint64_t *)
                   (*(int64_t *)(lVar2 + 0xe0) + 0x28 +
                   (uint64_t)*(ushort *)(lVar5 + 0x28 + lVar3) * 0x50));
    uVar1 = *(ushort *)(lVar5 + 0x28 + lVar3);
    if (uVar1 != 0xffff) {
      lVar2 = *unaff_R14;
      uVar4 = (uint64_t)uVar1;
      lVar3 = *(int64_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x28 + uVar4 * 0x50);
      *(int8_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x30 + uVar4 * 0x50) =
           *(int8_t *)(lVar3 + 0x20);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x34 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x44);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x38 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x48);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x3c + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x44);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x40 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x168);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x44 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x170);
      *(int32_t *)(*(int64_t *)(lVar2 + 0xe0) + 0x48 + uVar4 * 0x50) =
           *(int32_t *)(lVar3 + 0x180);
      *(byte *)(*(int64_t *)(lVar2 + 0xe0) + 0x4c + uVar4 * 0x50) =
           *(byte *)(lVar3 + 0xa8) >> 3 & 1;
    }
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI < unaff_RBP);
  return;
}
// 函数: void function_4ceb3b(void)
void function_4ceb3b(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4ceb90(int param_1,int param_2,int64_t *param_3)
void function_4ceb90(int param_1,int param_2,int64_t *param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float *pfVar4;
  byte bVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  byte bVar9;
  uint uVar10;
  int64_t lVar11;
  int64_t lVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  lVar7 = system_system_data_config;
  lVar6 = system_main_module_state;
  param_3 = (int64_t *)*param_3;
  for (lVar11 = (int64_t)param_1; lVar11 < param_2; lVar11 = lVar11 + 1) {
    lVar1 = *param_3;
    lVar2 = *(int64_t *)(lVar1 + 0x68);
    lVar12 = (uint64_t)*(ushort *)(*(int64_t *)(lVar1 + 0x188) + lVar11 * 8) * 0x38;
    lVar3 = *(int64_t *)(lVar1 + 0x90);
    uVar8 = (uint64_t)*(ushort *)(lVar12 + 0x24 + lVar2);
    pfVar4 = (float *)param_3[1];
    fVar15 = *(float *)(lVar3 + 0x3c + uVar8 * 0x48) - pfVar4[1];
    fVar13 = *(float *)(lVar3 + 0x40 + uVar8 * 0x48) - pfVar4[2];
    fVar14 = *(float *)(lVar3 + 0x38 + uVar8 * 0x48) - *pfVar4;
    fVar14 = fVar15 * fVar15 + fVar14 * fVar14 + fVar13 * fVar13;
    fVar13 = *(float *)param_3[2];
    if (fVar13 < 1.0) {
      fVar14 = fVar14 * fVar13 * fVar13 * 0.9;
    }
    uVar10 = *(uint *)param_3[3];
    if ((int)*(uint *)param_3[3] < 0) {
      lVar3 = *(int64_t *)(lVar6 + 0x3d8);
      if ((lVar3 == 0) ||
         ((*(int *)(lVar3 + 0x110) != 1 && ((lVar3 == 0 || (*(int *)(lVar3 + 0x110) != 3)))))) {
        bVar9 = 0;
        if ((*(int *)(lVar7 + 0x7e0) == 0) &&
           (*(float *)(lVar1 + 0x340) <= fVar14 && fVar14 != *(float *)(lVar1 + 0x340))) {
          do {
            bVar9 = bVar9 + 1;
            pfVar4 = (float *)(lVar1 + 0x340 + (uint64_t)bVar9 * 4);
          } while (*pfVar4 <= fVar14 && fVar14 != *pfVar4);
        }
      }
      else {
        bVar9 = 0;
      }
      bVar5 = bVar9 + 1;
      if (*(char *)(lVar12 + 0x32 + lVar2) != '\0') {
        bVar5 = bVar9;
      }
      uVar10 = 5;
      if (bVar5 < 5) {
        uVar10 = (uint)bVar5;
      }
    }
    *(char *)(*(int64_t *)(lVar1 + 0x130) + 8 +
             (uint64_t)*(ushort *)(lVar12 + 0x2a + lVar2) * 0x10) = (char)uVar10;
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4cebb8(void)
void function_4cebb8(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  float *pfVar4;
  byte bVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t uVar8;
  byte bVar9;
  uint uVar10;
  int64_t *unaff_RBX;
  int64_t unaff_RDI;
  int64_t in_R9;
  int64_t lVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float in_XMM3_Da;
  float in_XMM4_Da;
  lVar7 = system_system_data_config;
  lVar6 = system_main_module_state;
  do {
    lVar1 = *unaff_RBX;
    lVar2 = *(int64_t *)(lVar1 + 0x68);
    lVar11 = (uint64_t)*(ushort *)(*(int64_t *)(lVar1 + 0x188) + in_R9 * 8) * 0x38;
    lVar3 = *(int64_t *)(lVar1 + 0x90);
    uVar8 = (uint64_t)*(ushort *)(lVar11 + 0x24 + lVar2);
    pfVar4 = (float *)unaff_RBX[1];
    fVar14 = *(float *)(lVar3 + 0x3c + uVar8 * 0x48) - pfVar4[1];
    fVar12 = *(float *)(lVar3 + 0x40 + uVar8 * 0x48) - pfVar4[2];
    fVar13 = *(float *)(lVar3 + 0x38 + uVar8 * 0x48) - *pfVar4;
    fVar13 = fVar14 * fVar14 + fVar13 * fVar13 + fVar12 * fVar12;
    fVar12 = *(float *)unaff_RBX[2];
    if (fVar12 < in_XMM4_Da) {
      fVar13 = fVar13 * fVar12 * fVar12 * in_XMM3_Da;
    }
    uVar10 = *(uint *)unaff_RBX[3];
    if ((int)*(uint *)unaff_RBX[3] < 0) {
      lVar3 = *(int64_t *)(lVar6 + 0x3d8);
      if ((lVar3 == 0) ||
         ((*(int *)(lVar3 + 0x110) != 1 && ((lVar3 == 0 || (*(int *)(lVar3 + 0x110) != 3)))))) {
        bVar9 = 0;
        if ((*(int *)(lVar7 + 0x7e0) == 0) &&
           (*(float *)(lVar1 + 0x340) <= fVar13 && fVar13 != *(float *)(lVar1 + 0x340))) {
          do {
            bVar9 = bVar9 + 1;
            pfVar4 = (float *)(lVar1 + 0x340 + (uint64_t)bVar9 * 4);
          } while (*pfVar4 <= fVar13 && fVar13 != *pfVar4);
        }
      }
      else {
        bVar9 = 0;
      }
      bVar5 = bVar9 + 1;
      if (*(char *)(lVar11 + 0x32 + lVar2) != '\0') {
        bVar5 = bVar9;
      }
      uVar10 = 5;
      if (bVar5 < 5) {
        uVar10 = (uint)bVar5;
      }
    }
    in_R9 = in_R9 + 1;
    *(char *)(*(int64_t *)(lVar1 + 0x130) + 8 +
             (uint64_t)*(ushort *)(lVar11 + 0x2a + lVar2) * 0x10) = (char)uVar10;
  } while (in_R9 < unaff_RDI);
  return;
}
// 函数: void function_4cece9(void)
void function_4cece9(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_4cecf0(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c09810;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_4cede0(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c09790;
  }
  if (param_3 == 4) {
    return *param_1;
  }
  if (param_3 == 0) {
    if (*param_1 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  else {
    if (param_3 == 1) {
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      uVar2 = puVar1[3];
      puVar3[2] = puVar1[2];
      puVar3[3] = uVar2;
      uVar2 = puVar1[5];
      puVar3[4] = puVar1[4];
      puVar3[5] = uVar2;
      puVar3[6] = puVar1[6];
      *param_1 = (int64_t)puVar3;
      return 0;
    }
    if (param_3 == 2) {
      *param_1 = *param_2;
      *param_2 = 0;
      return 0;
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address