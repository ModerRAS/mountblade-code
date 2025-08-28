#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part071.c - 5 个函数
// 函数: void function_23ce10(int64_t param_1)
void function_23ce10(int64_t param_1)
{
  int64_t *plVar1;
  int32_t uVar2;
  int8_t stack_array_68 [32];
  int16_t stack_array_48 [2];
  int16_t local_var_44;
  int8_t local_var_40;
  int16_t local_var_3c;
  int32_t local_var_38;
  uint local_var_20;
  uint64_t local_var_18;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_68;
  plVar1 = *(int64_t **)(param_1 + 0x170);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x50))(plVar1,stack_array_48);
    *(int16_t *)(param_1 + 0x332) = local_var_3c;
    *(int16_t *)(param_1 + 0x330) = 1;
    if ((local_var_20 & 4) != 0) {
      *(uint *)(param_1 + 0x328) = *(uint *)(param_1 + 0x328) | 0x2000;
    }
    *(byte *)(param_1 + 0x355) = (byte)local_var_20 & 1;
    uVar2 = SystemFunction_0001800aada0(local_var_38);
    *(int32_t *)(param_1 + 0x324) = uVar2;
    *(int16_t *)(param_1 + 0x32e) = local_var_44;
    *(int8_t *)(param_1 + 0x335) = local_var_40;
    *(int16_t *)(param_1 + 0x32c) = stack_array_48[0];
    *(int8_t *)(param_1 + 0x334) = 2;
  }
  *(uint *)(param_1 + 0x35c) = (uint)*(byte *)(param_1 + 0x335);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_68);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int * function_23ced0(int64_t *param_1)
{
  int *piVar1;
  int iVar2;
  int64_t *plStack_18;
  int32_t local_var_10;
  piVar1 = (int *)((int64_t)param_1 + 0x3ac);
  if (*piVar1 == 0) {
    local_var_10 = (**(code **)(*param_1 + 8))();
    plStack_18 = param_1;
    iVar2 = (**(code **)(system_system_data_config + 0x158))(&plStack_18);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    if ((*piVar1 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))();
    }
    *piVar1 = iVar2;
  }
  return piVar1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t function_23cf80(int64_t param_1)
{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t alStackX_10 [3];
  uVar1 = function_6237a0();
  if ((int)uVar1 == 1) {
    lVar2 = system_system_data_config;
    if (system_system_data_config == 0) {
      QueryPerformanceCounter(alStackX_10);
      lVar2 = alStackX_10[0];
    }
    *(double *)(param_1 + 0x270) = (double)(lVar2 - system_system_data_config) * system_system_data_config;
    uVar1 = uVar1 & 0xffffffff;
  }
  return uVar1;
}
uint64_t * function_23cff0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_8576_ptr;
  if (param_1[0x1a] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((int64_t *)param_1[0x18] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x18] + 0x38))();
  }
  SystemCore_SecurityManager(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x108);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int32_t * function_23d080(int32_t *param_1,int32_t *param_2)
{
  int64_t *plVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  uint64_t uVar13;
  int64_t lVar14;
  uint64_t *puVar15;
  int64_t lVar16;
  plVar1 = (int64_t *)(param_1 + 2);
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  if (plVar1 != (int64_t *)(param_2 + 2)) {
    lVar14 = *(int64_t *)(param_2 + 4);
    puVar12 = *(uint64_t **)(param_2 + 2);
    puVar11 = (uint64_t *)*plVar1;
    uVar13 = lVar14 - (int64_t)puVar12 >> 5;
    if ((uint64_t)(*(int64_t *)(param_1 + 6) - (int64_t)puVar11 >> 5) < uVar13) {
      if (uVar13 == 0) {
        puVar7 = (int32_t *)0x0;
      }
      else {
        puVar7 = (int32_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar13 << 5,*(int8_t *)(param_1 + 8));
      }
      if (0 < (int64_t)uVar13) {
        puVar8 = puVar7;
        uVar10 = uVar13;
        do {
          puVar2 = (int32_t *)(((int64_t)puVar12 - (int64_t)puVar7) + (int64_t)puVar8);
          uVar3 = puVar2[1];
          uVar4 = puVar2[2];
          uVar5 = puVar2[3];
          uVar10 = uVar10 - 1;
          *puVar8 = *puVar2;
          puVar8[1] = uVar3;
          puVar8[2] = uVar4;
          puVar8[3] = uVar5;
          puVar11 = (uint64_t *)
                    (((int64_t)puVar12 - (int64_t)puVar7) + -0x10 + (int64_t)(puVar8 + 8));
          uVar6 = puVar11[1];
          *(uint64_t *)(puVar8 + 4) = *puVar11;
          *(uint64_t *)(puVar8 + 6) = uVar6;
          puVar8 = puVar8 + 8;
        } while (0 < (int64_t)uVar10);
      }
      if (*plVar1 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *plVar1 = (int64_t)puVar7;
      puVar9 = (uint64_t *)(puVar7 + uVar13 * 8);
      *(uint64_t **)(param_1 + 6) = puVar9;
    }
    else {
      puVar9 = *(uint64_t **)(param_1 + 4);
      uVar10 = (int64_t)puVar9 - (int64_t)puVar11 >> 5;
      if (uVar13 <= uVar10) {
        for (; 0 < (int64_t)uVar13; uVar13 = uVar13 - 1) {
          uVar6 = puVar12[1];
          *puVar11 = *puVar12;
          puVar11[1] = uVar6;
          uVar6 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar12 = puVar12 + 4;
        }
        *(uint64_t **)(param_1 + 4) = puVar11;
        goto label_23d209;
      }
      puVar15 = puVar12 + uVar10 * 4;
      if (0 < (int64_t)uVar10) {
        do {
          uVar6 = puVar12[1];
          uVar10 = uVar10 - 1;
          *puVar11 = *puVar12;
          puVar11[1] = uVar6;
          uVar6 = puVar12[3];
          puVar11[2] = puVar12[2];
          puVar11[3] = uVar6;
          puVar11 = puVar11 + 4;
          puVar12 = puVar12 + 4;
        } while (0 < (int64_t)uVar10);
        puVar9 = *(uint64_t **)(param_1 + 4);
      }
      lVar14 = lVar14 - (int64_t)puVar15 >> 5;
      if (0 < lVar14) {
        lVar16 = (int64_t)puVar15 - (int64_t)puVar9;
        do {
          puVar12 = (uint64_t *)((int64_t)puVar9 + lVar16);
          uVar6 = puVar12[1];
          lVar14 = lVar14 + -1;
          *puVar9 = *puVar12;
          puVar9[1] = uVar6;
          puVar12 = (uint64_t *)((int64_t)puVar9 + lVar16 + 0x10);
          uVar6 = puVar12[1];
          puVar9[2] = *puVar12;
          puVar9[3] = uVar6;
          puVar9 = puVar9 + 4;
        } while (0 < lVar14);
      }
    }
    *(uint64_t **)(param_1 + 4) = puVar9;
  }
label_23d209:
  param_1[10] = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = param_2[0xc];
  *(uint64_t *)(param_1 + 0xe) = *(uint64_t *)(param_2 + 0xe);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_23d0bd(uint64_t *param_1,uint64_t param_2,int64_t param_3)
void function_23d0bd(uint64_t *param_1,uint64_t param_2,int64_t param_3)
{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  int64_t in_RAX;
  int32_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t *unaff_RBX;
  int64_t *unaff_RSI;
  uint64_t uVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  int64_t unaff_R14;
  int64_t unaff_R15;
  uVar10 = param_3 - (int64_t)unaff_RBX >> 5;
  if ((uint64_t)(in_RAX - (int64_t)param_1 >> 5) < uVar10) {
    if (uVar10 == 0) {
      puVar6 = (int32_t *)0x0;
    }
    else {
      puVar6 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar10 << 5,(char)unaff_RSI[3]);
    }
    if (0 < (int64_t)uVar10) {
      puVar7 = puVar6;
      uVar9 = uVar10;
      do {
        puVar1 = (int32_t *)(((int64_t)unaff_RBX - (int64_t)puVar6) + (int64_t)puVar7);
        uVar2 = puVar1[1];
        uVar3 = puVar1[2];
        uVar4 = puVar1[3];
        uVar9 = uVar9 - 1;
        *puVar7 = *puVar1;
        puVar7[1] = uVar2;
        puVar7[2] = uVar3;
        puVar7[3] = uVar4;
        puVar8 = (uint64_t *)
                 (((int64_t)unaff_RBX - (int64_t)puVar6) + -0x10 + (int64_t)(puVar7 + 8));
        uVar5 = puVar8[1];
        *(uint64_t *)(puVar7 + 4) = *puVar8;
        *(uint64_t *)(puVar7 + 6) = uVar5;
        puVar7 = puVar7 + 8;
      } while (0 < (int64_t)uVar9);
    }
    if (*unaff_RSI != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *unaff_RSI = (int64_t)puVar6;
    puVar8 = (uint64_t *)(puVar6 + uVar10 * 8);
    unaff_RSI[2] = (int64_t)puVar8;
  }
  else {
    puVar8 = (uint64_t *)unaff_RSI[1];
    uVar9 = (int64_t)puVar8 - (int64_t)param_1 >> 5;
    if (uVar10 <= uVar9) {
      for (; 0 < (int64_t)uVar10; uVar10 = uVar10 - 1) {
        uVar5 = unaff_RBX[1];
        *param_1 = *unaff_RBX;
        param_1[1] = uVar5;
        uVar5 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar5;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      }
      unaff_RSI[1] = (int64_t)param_1;
      goto LAB_18023d204;
    }
    puVar12 = unaff_RBX + uVar9 * 4;
    if (0 < (int64_t)uVar9) {
      do {
        uVar5 = unaff_RBX[1];
        uVar9 = uVar9 - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar5;
        uVar5 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar5;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (int64_t)uVar9);
      puVar8 = (uint64_t *)unaff_RSI[1];
    }
    lVar11 = param_3 - (int64_t)puVar12 >> 5;
    if (0 < lVar11) {
      lVar13 = (int64_t)puVar12 - (int64_t)puVar8;
      do {
        puVar12 = (uint64_t *)((int64_t)puVar8 + lVar13);
        uVar5 = puVar12[1];
        lVar11 = lVar11 + -1;
        *puVar8 = *puVar12;
        puVar8[1] = uVar5;
        puVar12 = (uint64_t *)((int64_t)puVar8 + lVar13 + 0x10);
        uVar5 = puVar12[1];
        puVar8[2] = *puVar12;
        puVar8[3] = uVar5;
        puVar8 = puVar8 + 4;
      } while (0 < lVar11);
    }
  }
  unaff_RSI[1] = (int64_t)puVar8;
LAB_18023d204:
  *(int32_t *)(unaff_R14 + 0x28) = *(int32_t *)(unaff_R15 + 0x28);
  *(int32_t *)(unaff_R14 + 0x2c) = *(int32_t *)(unaff_R15 + 0x2c);
  *(int32_t *)(unaff_R14 + 0x30) = *(int32_t *)(unaff_R15 + 0x30);
  *(uint64_t *)(unaff_R14 + 0x38) = *(uint64_t *)(unaff_R15 + 0x38);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_23d0d8(void)
void function_23d0d8(void)
{
  int32_t *puVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int32_t *puVar7;
  int32_t *puVar8;
  int64_t lVar9;
  int64_t unaff_RBX;
  int64_t *unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int64_t unaff_R15;
  if (unaff_RDI == 0) {
    puVar7 = (int32_t *)0x0;
  }
  else {
    puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,unaff_RDI << 5,(char)unaff_RSI[3]);
  }
  if (0 < unaff_RDI) {
    puVar8 = puVar7;
    lVar9 = unaff_RDI;
    do {
      puVar1 = (int32_t *)((unaff_RBX - (int64_t)puVar7) + (int64_t)puVar8);
      uVar3 = puVar1[1];
      uVar4 = puVar1[2];
      uVar5 = puVar1[3];
      lVar9 = lVar9 + -1;
      *puVar8 = *puVar1;
      puVar8[1] = uVar3;
      puVar8[2] = uVar4;
      puVar8[3] = uVar5;
      puVar2 = (uint64_t *)((unaff_RBX - (int64_t)puVar7) + -0x10 + (int64_t)(puVar8 + 8));
      uVar6 = puVar2[1];
      *(uint64_t *)(puVar8 + 4) = *puVar2;
      *(uint64_t *)(puVar8 + 6) = uVar6;
      puVar8 = puVar8 + 8;
    } while (0 < lVar9);
  }
  if (*unaff_RSI != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *unaff_RSI = (int64_t)puVar7;
  unaff_RSI[2] = (int64_t)(puVar7 + unaff_RDI * 8);
  unaff_RSI[1] = (int64_t)(puVar7 + unaff_RDI * 8);
  *(int32_t *)(unaff_R14 + 0x28) = *(int32_t *)(unaff_R15 + 0x28);
  *(int32_t *)(unaff_R14 + 0x2c) = *(int32_t *)(unaff_R15 + 0x2c);
  *(int32_t *)(unaff_R14 + 0x30) = *(int32_t *)(unaff_R15 + 0x30);
  *(uint64_t *)(unaff_R14 + 0x38) = *(uint64_t *)(unaff_R15 + 0x38);
  return;
}
// 函数: void function_23d153(uint64_t *param_1,uint64_t param_2,int64_t param_3)
void function_23d153(uint64_t *param_1,uint64_t param_2,int64_t param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t *unaff_RBX;
  int64_t unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t unaff_R14;
  int64_t unaff_R15;
  puVar2 = *(uint64_t **)(unaff_RSI + 8);
  uVar3 = (int64_t)puVar2 - (int64_t)param_1 >> 5;
  if (uVar3 < unaff_RDI) {
    puVar5 = unaff_RBX + uVar3 * 4;
    if (0 < (int64_t)uVar3) {
      do {
        uVar1 = unaff_RBX[1];
        uVar3 = uVar3 - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar1;
        uVar1 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar1;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (int64_t)uVar3);
      puVar2 = *(uint64_t **)(unaff_RSI + 8);
    }
    lVar4 = param_3 - (int64_t)puVar5 >> 5;
    if (0 < lVar4) {
      lVar6 = (int64_t)puVar5 - (int64_t)puVar2;
      do {
        puVar5 = (uint64_t *)((int64_t)puVar2 + lVar6);
        uVar1 = puVar5[1];
        lVar4 = lVar4 + -1;
        *puVar2 = *puVar5;
        puVar2[1] = uVar1;
        puVar5 = (uint64_t *)((int64_t)puVar2 + lVar6 + 0x10);
        uVar1 = puVar5[1];
        puVar2[2] = *puVar5;
        puVar2[3] = uVar1;
        puVar2 = puVar2 + 4;
      } while (0 < lVar4);
    }
    *(uint64_t **)(unaff_RSI + 8) = puVar2;
  }
  else {
    if (0 < (int64_t)unaff_RDI) {
      do {
        uVar1 = unaff_RBX[1];
        unaff_RDI = unaff_RDI - 1;
        *param_1 = *unaff_RBX;
        param_1[1] = uVar1;
        uVar1 = unaff_RBX[3];
        param_1[2] = unaff_RBX[2];
        param_1[3] = uVar1;
        param_1 = param_1 + 4;
        unaff_RBX = unaff_RBX + 4;
      } while (0 < (int64_t)unaff_RDI);
    }
    *(uint64_t **)(unaff_RSI + 8) = param_1;
  }
  *(int32_t *)(unaff_R14 + 0x28) = *(int32_t *)(unaff_R15 + 0x28);
  *(int32_t *)(unaff_R14 + 0x2c) = *(int32_t *)(unaff_R15 + 0x2c);
  *(int32_t *)(unaff_R14 + 0x30) = *(int32_t *)(unaff_R15 + 0x30);
  *(uint64_t *)(unaff_R14 + 0x38) = *(uint64_t *)(unaff_R15 + 0x38);
  return;
}
// 函数: void function_23d209(void)
void function_23d209(void)
{
  int64_t unaff_R14;
  int64_t unaff_R15;
  *(int32_t *)(unaff_R14 + 0x28) = *(int32_t *)(unaff_R15 + 0x28);
  *(int32_t *)(unaff_R14 + 0x2c) = *(int32_t *)(unaff_R15 + 0x2c);
  *(int32_t *)(unaff_R14 + 0x30) = *(int32_t *)(unaff_R15 + 0x30);
  *(uint64_t *)(unaff_R14 + 0x38) = *(uint64_t *)(unaff_R15 + 0x38);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address