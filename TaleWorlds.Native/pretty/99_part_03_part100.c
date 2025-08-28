/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger


#include "SystemDataAdvancedValidator_definition.h"
#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part100.c - 20 个函数

// 函数: void FUN_1802561d0(int64_t *param_1)
void FUN_1802561d0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  void *puVar5;
  uint64_t uVar6;
  int64_t lStack_30;
  int64_t lStack_28;
  uint64_t uStack_20;
  int32_t uStack_18;
  
  uVar6 = 0xfffffffffffffffe;
  uVar3 = (param_1[0x13] - param_1[0x12]) / 0x30;
  lVar2 = 0;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    lVar4 = lVar2;
    do {
      lVar1 = FUN_180087100(system_system_data_config,param_1[0x12] + lVar4);
      if (lVar1 == 0) {
        puVar5 = &system_buffer_ptr;
        if ((void *)param_1[0xe] != (void *)0x0) {
          puVar5 = (void *)param_1[0xe];
        }
                    // WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&ui_system_data_1392_ptr,puVar5);
      }
      FUN_180256390(lVar1,param_1,param_1[0x12] + 0x10 + lVar4,param_1[0x12] + 0x20 + lVar4);
      lVar4 = lVar4 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  lStack_30 = 0;
  lStack_28 = 0;
  uStack_20 = 0;
  uStack_18 = 0x1a;
  (**(code **)(*param_1 + 0x88))(param_1,&lStack_30);
  uVar3 = (lStack_28 - lStack_30) / 0x30;
  if (0 < (int)uVar3) {
    uVar3 = uVar3 & 0xffffffff;
    do {
      lVar4 = FUN_180087100(system_system_data_config,lVar2 + lStack_30);
      if (lVar4 == 0) {
        puVar5 = &system_buffer_ptr;
        if ((void *)param_1[0xe] != (void *)0x0) {
          puVar5 = (void *)param_1[0xe];
        }
                    // WARNING: Subroutine does not return
        SystemParameterHandler(system_message_context,&ui_system_data_1392_ptr,puVar5);
      }
      FUN_180256390(lVar4,param_1,lStack_30 + 0x10 + lVar2,lStack_30 + 0x20 + lVar2,uVar6);
      lVar2 = lVar2 + 0x30;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  if (lStack_30 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256390(int64_t param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
void FUN_180256390(int64_t param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t *puVar10;
  uint64_t *puVar11;
  int32_t *puVar12;
  uint64_t *puVar13;
  int64_t *plVar14;
  uint uVar15;
  int32_t *puVar17;
  int64_t lVar18;
  int32_t *puVar19;
  int8_t auStackX_8 [8];
  uint64_t uStackX_10;
  int32_t *puVar16;
  
  puVar13 = (uint64_t *)(param_1 + 0x38);
  puVar10 = *(uint64_t **)(param_1 + 0x48);
  puVar11 = puVar13;
  while (puVar5 = puVar10, puVar5 != (uint64_t *)0x0) {
    if ((uint64_t)puVar5[4] < param_2) {
      puVar10 = (uint64_t *)*puVar5;
    }
    else {
      puVar10 = (uint64_t *)puVar5[1];
      puVar11 = puVar5;
    }
  }
  uStackX_10 = param_2;
  if ((puVar11 == puVar13) || (param_2 < (uint64_t)puVar11[4])) {
    puVar11 = (uint64_t *)FUN_180179770(puVar13,auStackX_8,param_3,puVar11,&uStackX_10);
    puVar11 = (uint64_t *)*puVar11;
  }
  puVar17 = (int32_t *)puVar11[6];
  puVar12 = (int32_t *)0x0;
  puVar19 = (int32_t *)puVar11[5];
  lVar18 = (int64_t)puVar17 - (int64_t)puVar19 >> 5;
  puVar16 = puVar12;
  if (0 < (int)lVar18) {
    do {
      plVar14 = (int64_t *)(puVar19 + (int64_t)(int)puVar16 * 8);
      if ((((*plVar14 == *param_4) && (plVar14[1] == param_4[1])) && (plVar14[2] == *param_3)) &&
         (plVar14[3] == param_3[1])) {
        return;
      }
      uVar15 = (int)puVar16 + 1;
      puVar16 = (int32_t *)(uint64_t)uVar15;
    } while ((int)uVar15 < (int)lVar18);
  }
  lVar6 = *param_4;
  uVar1 = *(int32_t *)((int64_t)param_4 + 4);
  lVar7 = param_4[1];
  uVar2 = *(int32_t *)((int64_t)param_4 + 0xc);
  lVar8 = *param_3;
  uVar3 = *(int32_t *)((int64_t)param_3 + 4);
  lVar9 = param_3[1];
  uVar4 = *(int32_t *)((int64_t)param_3 + 0xc);
  if (puVar17 < (int32_t *)puVar11[7]) {
    puVar11[6] = puVar17 + 8;
    *puVar17 = (int)lVar6;
    puVar17[1] = uVar1;
    puVar17[2] = (int)lVar7;
    puVar17[3] = uVar2;
    puVar17[4] = (int)lVar8;
    puVar17[5] = uVar3;
    puVar17[6] = (int)lVar9;
    puVar17[7] = uVar4;
    return;
  }
  if (lVar18 == 0) {
    lVar18 = 1;
  }
  else {
    lVar18 = lVar18 * 2;
    if (lVar18 == 0) goto LAB_1802564ba;
  }
  puVar12 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 << 5,*(int8_t *)(puVar11 + 8));
  puVar19 = (int32_t *)puVar11[5];
  puVar17 = (int32_t *)puVar11[6];
LAB_1802564ba:
  if (puVar19 != puVar17) {
                    // WARNING: Subroutine does not return
    memmove(puVar12,puVar19,(int64_t)puVar17 - (int64_t)puVar19);
  }
  *puVar12 = (int)lVar6;
  puVar12[1] = uVar1;
  puVar12[2] = (int)lVar7;
  puVar12[3] = uVar2;
  puVar12[4] = (int)lVar8;
  puVar12[5] = uVar3;
  puVar12[6] = (int)lVar9;
  puVar12[7] = uVar4;
  if (puVar11[5] == 0) {
    puVar11[5] = puVar12;
    puVar11[7] = puVar12 + lVar18 * 8;
    puVar11[6] = puVar12 + 8;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}






// 函数: void FUN_180256530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180256530(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  puVar1 = *(uint64_t **)(param_1 + 0x20);
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  *(uint64_t *)(param_1 + 0x30) = param_4;
  *(uint64_t *)(param_1 + 0x20) = param_2;
  *(uint64_t *)(param_1 + 0x28) = param_3;
  return;
}






// 函数: void FUN_18025655b(void)
void FUN_18025655b(void)

{
  int64_t lVar1;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RDI)();
  if (lVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_R15;
  *(uint64_t *)(unaff_RBX + 0x28) = unaff_R14;
  return;
}






// 函数: void FUN_180256585(void)
void FUN_180256585(void)

{
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t unaff_R14;
  uint64_t unaff_R15;
  
  *(uint64_t *)(unaff_RBX + 0x30) = unaff_RBP;
  *(uint64_t *)(unaff_RBX + 0x20) = unaff_R15;
  *(uint64_t *)(unaff_RBX + 0x28) = unaff_R14;
  return;
}



uint64_t * FUN_1802565b0(uint64_t *param_1,uint64_t *param_2,int32_t param_3)

{
  uint64_t *puVar1;
  uint64_t uVar2;
  
  *param_1 = &ui_system_data_1792_ptr;
  *param_1 = &ui_system_data_1624_ptr;
  *(int32_t *)(param_1 + 1) = param_3;
  uVar2 = param_2[1];
  *(uint64_t *)((int64_t)param_1 + 0xc) = *param_2;
  *(uint64_t *)((int64_t)param_1 + 0x14) = uVar2;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xffffffffffffffff;
  puVar1 = param_1 + 7;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0x1a;
  *puVar1 = puVar1;
  param_1[8] = puVar1;
  param_1[9] = 0;
  *(int8_t *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xd] = &system_state_ptr;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  param_1[0xd] = &system_data_buffer_ptr;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(int32_t *)(param_1 + 0x15) = 0x1a;
  return param_1;
}



uint64_t FUN_180256680(uint64_t param_1,uint64_t param_2)

{
  FUN_1802566c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb0);
  }
  return param_1;
}






// 函数: void FUN_1802566c0(uint64_t *param_1)
void FUN_1802566c0(uint64_t *param_1)

{
  uint64_t *puVar1;
  int64_t lVar2;
  
  *param_1 = &ui_system_data_1624_ptr;
  puVar1 = (uint64_t *)param_1[0x11];
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  param_1[0x11] = 0;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xd] = &system_data_buffer_ptr;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x10) = 0;
  param_1[0xd] = &system_state_ptr;
  FUN_180179f00(param_1 + 7,param_1[9]);
  *param_1 = &ui_system_data_1792_ptr;
  return;
}



int32_t
FUN_1802567b0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  int8_t auStackX_8 [8];
  
  puVar1 = (uint64_t *)param_1[2];
  puVar4 = puVar1;
  puVar6 = param_1;
  puVar3 = param_1;
  if (puVar1 != (uint64_t *)0x0) {
    do {
      iVar2 = memcmp(puVar4 + 4,param_2,0x10);
      if (iVar2 < 0) {
        puVar5 = (uint64_t *)*puVar4;
      }
      else {
        puVar5 = (uint64_t *)puVar4[1];
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
    } while (puVar5 != (uint64_t *)0x0);
    if ((puVar6 != param_1) && (iVar2 = memcmp(param_2,puVar6 + 4,0x10), -1 < iVar2)) {
      SystemDataInitializer(&ui_system_data_1480_ptr);
      return 0;
    }
  }
  while (puVar4 = puVar1, puVar4 != (uint64_t *)0x0) {
    iVar2 = memcmp(puVar4 + 4,param_2,0x10);
    if (iVar2 < 0) {
      puVar1 = (uint64_t *)*puVar4;
    }
    else {
      puVar1 = (uint64_t *)puVar4[1];
      puVar3 = puVar4;
    }
  }
  if ((puVar3 == param_1) || (iVar2 = memcmp(param_2,puVar3 + 4,0x10), iVar2 < 0)) {
    puVar3 = (uint64_t *)FUN_1801798f0(param_1,auStackX_8);
    puVar3 = (uint64_t *)*puVar3;
  }
  puVar3[6] = param_4;
  puVar3[7] = param_3;
  return 1;
}






// 函数: void FUN_1802568d0(int64_t param_1)
void FUN_1802568d0(int64_t param_1)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  *(void **)(param_1 + 0x60) = &system_state_ptr;
  if (*(int64_t *)(param_1 + 0x30) != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_1800ba100(param_1);
  if ((1 < *(uint64_t *)(param_1 + 0x10)) &&
     (puVar2 = *(uint64_t **)(param_1 + 8), puVar2 != (uint64_t *)0x0)) {
    uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
    if (uVar4 != 0) {
      lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
      lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
      if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
        *puVar2 = *(uint64_t *)(lVar3 + 0x20);
        *(uint64_t **)(lVar3 + 0x20) = puVar2;
        piVar1 = (int *)(lVar3 + 0x18);
        *piVar1 = *piVar1 + -1;
        if (*piVar1 == 0) {
          SystemDataCleaner();
          return;
        }
      }
      else {
        func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256940(int64_t param_1)
void FUN_180256940(int64_t param_1)

{
  int iVar1;
  int64_t lVar2;
  void *puVar3;
  int8_t auStack_e8 [32];
  uint64_t uStack_c8;
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [136];
  uint64_t uStack_18;
  
  uStack_c8 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  if (*(char *)(param_1 + 0x178) == '\0') {
    puStack_b8 = &memory_allocator_3432_ptr;
    puStack_b0 = auStack_a0;
    uStack_a8 = 0;
    auStack_a0[0] = 0;
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 != -1) {
      if ((iVar1 < 0) ||
         (lVar2 = *(int64_t *)(*system_main_module_state + 0x8a8),
         (uint64_t)(*(int64_t *)(*system_main_module_state + 0x8b0) - lVar2 >> 5) <
         (uint64_t)(int64_t)iVar1)) {
        lVar2 = MemoryDebugger0();
      }
      else {
        lVar2 = (int64_t)iVar1 * 0x20 + lVar2;
      }
      puVar3 = &system_buffer_ptr;
      if (*(void **)(lVar2 + 8) != (void *)0x0) {
        puVar3 = *(void **)(lVar2 + 8);
      }
      (**(code **)(puStack_b8 + 0x10))(&puStack_b8,puVar3);
      FUN_1804146b0();
    }
    puStack_b8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256a60(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)
void FUN_180256a60(int64_t param_1,uint64_t param_2,uint64_t param_3,int param_4)

{
  int iVar1;
  uint64_t uVar2;
  int64_t lVar3;
  
  iVar1 = *(int *)(param_1 + 0x20);
  *(uint64_t *)(param_1 + 8) = param_2;
  if (param_4 == iVar1) {
    if (iVar1 < 1) {
      return;
    }
    uVar2 = *(uint64_t *)(param_1 + 0x18);
    lVar3 = (int64_t)iVar1 * 0x45;
  }
  else {
    if (*(int64_t *)(param_1 + 0x18) != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    uVar2 = 0;
    *(int *)(param_1 + 0x20) = param_4;
    *(uint64_t *)(param_1 + 0x18) = 0;
    if (param_4 < 1) {
      return;
    }
    lVar3 = (int64_t)param_4 * 0x45;
    if ((int64_t)param_4 != 0) {
      uVar2 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3,0x1a);
    }
    *(uint64_t *)(param_1 + 0x18) = uVar2;
  }
                    // WARNING: Subroutine does not return
  memcpy(uVar2,param_3,lVar3);
}






// 函数: void FUN_180256af0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
void FUN_180256af0(int64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  
  lVar3 = *param_1;
  if (*(code **)(lVar3 + 0x28) == (code *)&processed_var_7808_ptr) {
    lVar2 = param_1[3];
  }
  else {
    lVar2 = (**(code **)(lVar3 + 0x28))(param_1);
    lVar3 = *param_1;
  }
  if (*(code **)(lVar3 + 0x30) == (code *)&processed_var_7824_ptr) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(lVar3 + 0x30))(param_1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (int64_t)iVar4 * 0x45 + lVar2;
      if ((((*(int64_t *)(lVar3 + 0x28) == *param_2) && (*(int64_t *)(lVar3 + 0x30) == param_2[1])
           ) && (*(int64_t *)(lVar3 + 0x18) == *param_3)) &&
         (*(int64_t *)(lVar3 + 0x20) == param_3[1])) {
        *param_4 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_4 = 0;
  return;
}






// 函数: void FUN_180256b0b(int64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)
void FUN_180256b0b(int64_t *param_1,uint64_t param_2,int64_t *param_3,int64_t *param_4)

{
  int iVar1;
  int64_t in_RAX;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *unaff_RSI;
  int iVar4;
  
  if (*(code **)(in_RAX + 0x28) == (code *)&processed_var_7808_ptr) {
    lVar2 = param_1[3];
  }
  else {
    lVar2 = (**(code **)(in_RAX + 0x28))(param_1);
    in_RAX = *param_1;
  }
  if (*(code **)(in_RAX + 0x30) == (code *)&processed_var_7824_ptr) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(in_RAX + 0x30))(param_1);
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (int64_t)iVar4 * 0x45 + lVar2;
      if ((((*(int64_t *)(lVar3 + 0x28) == *unaff_RSI) &&
           (*(int64_t *)(lVar3 + 0x30) == unaff_RSI[1])) &&
          (*(int64_t *)(lVar3 + 0x18) == *param_3)) && (*(int64_t *)(lVar3 + 0x20) == param_3[1]))
      {
        *param_4 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *param_4 = 0;
  return;
}






// 函数: void FUN_180256b52(uint64_t param_1,uint64_t param_2,int param_3,int param_4)
void FUN_180256b52(uint64_t param_1,uint64_t param_2,int param_3,int param_4)

{
  int64_t lVar1;
  int64_t unaff_RBP;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int64_t *unaff_R14;
  
  while ((((lVar1 = (int64_t)param_3 * 0x45 + unaff_RBP, *(int64_t *)(lVar1 + 0x28) != *unaff_RSI
           || (*(int64_t *)(lVar1 + 0x30) != unaff_RSI[1])) ||
          (*(int64_t *)(lVar1 + 0x18) != *unaff_RDI)) ||
         (*(int64_t *)(lVar1 + 0x20) != unaff_RDI[1]))) {
    param_3 = param_3 + 1;
    if (param_4 <= param_3) {
      *unaff_R14 = 0;
      return;
    }
  }
  *unaff_R14 = lVar1;
  return;
}






// 函数: void FUN_180256bac(uint64_t param_1,code *param_2)
void FUN_180256bac(uint64_t param_1,code *param_2)

{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *unaff_RBX;
  int64_t *unaff_RSI;
  int64_t *unaff_RDI;
  int iVar4;
  int64_t *unaff_R14;
  
  lVar2 = (*param_2)();
  if (*(code **)(*unaff_RBX + 0x30) == (code *)&processed_var_7824_ptr) {
    iVar1 = (int)unaff_RBX[4];
  }
  else {
    iVar1 = (**(code **)(*unaff_RBX + 0x30))();
  }
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      lVar3 = (int64_t)iVar4 * 0x45 + lVar2;
      if ((((*(int64_t *)(lVar3 + 0x28) == *unaff_RSI) &&
           (*(int64_t *)(lVar3 + 0x30) == unaff_RSI[1])) &&
          (*(int64_t *)(lVar3 + 0x18) == *unaff_RDI)) &&
         (*(int64_t *)(lVar3 + 0x20) == unaff_RDI[1])) {
        *unaff_R14 = lVar3;
        return;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  *unaff_R14 = 0;
  return;
}






// 函数: void FUN_180256bd0(int64_t *param_1,int param_2,int64_t *param_3)
void FUN_180256bd0(int64_t *param_1,int param_2,int64_t *param_3)

{
  int iVar1;
  int64_t lVar2;
  
  if (*(code **)(*param_1 + 0x30) == (code *)&processed_var_7824_ptr) {
    iVar1 = (int)param_1[4];
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x30))();
  }
  if ((param_2 < iVar1) && (-1 < param_2)) {
    if (*(code **)(*param_1 + 0x28) == (code *)&processed_var_7808_ptr) {
      *param_3 = (int64_t)param_2 * 0x45 + param_1[3];
      return;
    }
    lVar2 = (**(code **)(*param_1 + 0x28))(param_1);
    *param_3 = (int64_t)param_2 * 0x45 + lVar2;
    return;
  }
  *param_3 = 0;
  return;
}



uint64_t FUN_180256c80(int64_t *param_1,uint64_t param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar1 = *param_1;
  if (*(code **)(lVar1 + 0x28) == (code *)&processed_var_7808_ptr) {
    uVar3 = param_1[3];
  }
  else {
    uVar3 = (**(code **)(lVar1 + 0x28))(param_1);
    lVar1 = *param_1;
  }
  if (*(code **)(lVar1 + 0x30) == (code *)&processed_var_7824_ptr) {
    uVar4 = (uint64_t)*(uint *)(param_1 + 4);
  }
  else {
    uVar4 = (**(code **)(lVar1 + 0x30))(param_1);
  }
  uVar2 = uVar4;
  if ((uVar3 <= param_2) && (uVar2 = (uint64_t)(int)uVar4, param_2 < uVar2 * 0x45 + uVar3)) {
    return CONCAT71((int7)(int3)(uVar4 >> 8),1);
  }
  return uVar2 & 0xffffffffffffff00;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180256d10(int64_t *param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
             uint64_t param_5)

{
  char cVar1;
  void *puVar2;
  int64_t lStackX_8;
  
  (**(code **)(*param_1 + 0x18))();
  if (lStackX_8 == 0) {
    return 0;
  }
  cVar1 = (**(code **)(*param_1 + 0x58))(param_1,lStackX_8,param_4,param_5);
  if (cVar1 != '\0') {
    return 1;
  }
  puVar2 = &system_buffer_ptr;
  if (*(void **)(param_1[2] + 0x70) != (void *)0x0) {
    puVar2 = *(void **)(param_1[2] + 0x70);
  }
                    // WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&ui_system_data_1520_ptr,puVar2,*(uint64_t *)(param_2 + 0x10));
}



int8_t FUN_180256db0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int8_t uVar1;
  uint64_t auStack_30 [2];
  code *pcStack_20;
  void *puStack_18;
  
  pcStack_20 = (code *)&processed_var_7168_ptr;
  puStack_18 = &processed_var_6848_ptr;
  auStack_30[0] = param_4;
  uVar1 = FUN_18008bf40(param_1,*(uint64_t *)(param_1 + 8),param_2,param_3,auStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(auStack_30,0,0);
  }
  return uVar1;
}






// 函数: void FUN_180256e30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180256e30(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  uint64_t param_5,int64_t param_6)

{
  uint64_t uStackX_8;
  
  (**(code **)(*param_1 + 0x18))();
  if (uStackX_8 != 0) {
    (**(code **)(*param_1 + 0x68))(param_1,uStackX_8,param_4,param_5,param_6);
    return;
  }
  if (*(int64_t *)(param_6 + 0x10) != 0) {
    (**(code **)(param_6 + 0x18))(param_6);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180256ea0(void)
void FUN_180256ea0(void)

{
  int64_t lVar1;
  uint64_t uVar2;
  code *pcVar3;
  int8_t *in_R9;
  int8_t auStack_90 [16];
  code *pcStack_80;
  code *pcStack_78;
  uint64_t auStack_70 [2];
  code *pcStack_60;
  void *puStack_58;
  int8_t auStack_50 [40];
  
  pcStack_80 = (code *)0x0;
  pcStack_78 = _guard_check_icall;
  if (auStack_90 != in_R9) {
    pcVar3 = *(code **)(in_R9 + 0x10);
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(auStack_90,in_R9,1);
      pcVar3 = *(code **)(in_R9 + 0x10);
    }
    pcStack_78 = *(code **)(in_R9 + 0x18);
    pcStack_80 = pcVar3;
  }
  lVar1 = FUN_1802576f0(auStack_50,auStack_90);
  pcStack_60 = FUN_180257970;
  puStack_58 = &processed_var_6848_ptr;
  uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
  FUN_1802576f0(uVar2,lVar1);
  auStack_70[0] = uVar2;
  if (*(code **)(lVar1 + 0x10) != (code *)0x0) {
    (**(code **)(lVar1 + 0x10))(lVar1,0,0);
  }
  if (pcStack_80 != (code *)0x0) {
    (*pcStack_80)(auStack_90,0,0);
  }
  FUN_18008bb30();
  if (pcStack_60 != (code *)0x0) {
    (*pcStack_60)(auStack_70,0,0);
  }
  return;
}



// WARNING: Removing unreachable block (ram,0x0001802571bb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t
FUN_180257020(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4,
             int8_t *param_5)

{
  void *puVar1;
  char cVar2;
  void *puVar3;
  uint64_t uVar4;
  code *pcVar5;
  int8_t *puVar6;
  int8_t auStack_a8 [16];
  code *pcStack_98;
  code *pcStack_90;
  int8_t *puStack_88;
  uint64_t uStack_80;
  int8_t *puStack_78;
  int8_t auStack_70 [56];
  uint64_t uStack_38;
  
  uStack_80 = 0xfffffffffffffffe;
  cVar2 = FUN_180256d10();
  if (cVar2 == '\0') {
    puStack_78 = auStack_70;
    puStack_88 = auStack_a8;
    pcStack_98 = (code *)0x0;
    pcStack_90 = _guard_check_icall;
    if (auStack_a8 != param_5) {
      pcVar5 = *(code **)(param_5 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(auStack_a8,param_5,1);
        pcVar5 = *(code **)(param_5 + 0x10);
      }
      pcStack_90 = *(code **)(param_5 + 0x18);
      pcStack_98 = pcVar5;
    }
    puStack_88 = auStack_a8;
    uStack_38 = 0;
    uStack_38 = FUN_180257ae0(auStack_a8);
    if (pcStack_98 != (code *)0x0) {
      (*pcStack_98)(auStack_a8,0,0);
    }
    puVar6 = auStack_70;
    cVar2 = FUN_180414a60();
    if (cVar2 == '\0') {
      puVar1 = *(void **)(*(int64_t *)(param_1 + 0x10) + 0x70);
      puVar3 = &system_buffer_ptr;
      if (puVar1 != (void *)0x0) {
        puVar3 = puVar1;
      }
      SystemConfigurationManager(system_message_context,0,0x80000000000,9,&ui_system_data_1448_ptr,puVar3,
                    *(uint64_t *)(param_2 + 0x10),puVar6);
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}






// 函数: void FUN_180257200(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180257200(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
      (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
    }
    if (lVar1 != param_1) {
      free(lVar1,0x28);
    }
    *(uint64_t *)(param_1 + 0x38) = 0;
  }
  return;
}






// 函数: void FUN_180257280(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
void FUN_180257280(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4,
                  int8_t *param_5,int8_t *param_6)

{
  code *pcVar1;
  int64_t lStackX_8;
  int8_t auStack_60 [16];
  code *pcStack_50;
  code *pcStack_48;
  int8_t auStack_40 [16];
  code *pcStack_30;
  code *pcStack_28;
  
  (**(code **)(*param_1 + 0x18))();
  if (lStackX_8 == 0) {
    pcStack_50 = (code *)0x0;
    pcStack_48 = _guard_check_icall;
    if (auStack_60 != param_6) {
      pcVar1 = *(code **)(param_6 + 0x10);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(auStack_60,param_6,1);
        pcVar1 = *(code **)(param_6 + 0x10);
      }
      pcStack_48 = *(code **)(param_6 + 0x18);
      pcStack_50 = pcVar1;
    }
    pcStack_30 = (code *)0x0;
    pcStack_28 = _guard_check_icall;
    if (auStack_40 != param_5) {
      pcVar1 = *(code **)(param_5 + 0x10);
      if (pcVar1 != (code *)0x0) {
        (*pcVar1)(auStack_40,param_5,1);
        pcVar1 = *(code **)(param_5 + 0x10);
      }
      pcStack_28 = *(code **)(param_5 + 0x18);
      pcStack_30 = pcVar1;
    }
    FUN_180415120();
  }
  else {
    FUN_180256ea0(param_1,lStackX_8,param_4,param_5,param_6);
  }
  return;
}






// 函数: void FUN_180257410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180257410(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  
  lVar1 = *(int64_t *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (*(code **)(lVar1 + 0x18) != (code *)0x0) {
      (**(code **)(lVar1 + 0x18))(lVar1 + 8,0,0,param_4,0xfffffffffffffffe);
    }
    if (lVar1 != param_1) {
      free(lVar1,0x28);
    }
    *(uint64_t *)(param_1 + 0x38) = 0;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_180257480(uint64_t param_1,int64_t param_2,int32_t *param_3)
void FUN_180257480(uint64_t param_1,int64_t param_2,int32_t *param_3)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  int64_t lVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  int64_t *plVar8;
  int8_t auStack_478 [32];
  uint64_t uStack_458;
  void *puStack_448;
  byte *pbStack_440;
  int iStack_438;
  byte abStack_430 [1032];
  uint64_t uStack_28;
  
  uStack_458 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_478;
  iVar7 = 0;
  puStack_448 = &memory_allocator_336_ptr;
  pbStack_440 = abStack_430;
  iStack_438 = 0;
  abStack_430[0] = 0;
  uVar3 = **(uint **)(param_2 + 8);
  puVar1 = *(uint **)(param_2 + 8) + 1;
  *(uint **)(param_2 + 8) = puVar1;
  if (uVar3 != 0) {
    SystemManager_Executor(&puStack_448,puVar1,uVar3);
    *(int64_t *)(param_2 + 8) = *(int64_t *)(param_2 + 8) + (uint64_t)uVar3;
  }
  plVar8 = (int64_t *)0x180bf8a40;
  do {
    lVar4 = -1;
    do {
      lVar4 = lVar4 + 1;
    } while (*(char *)(*plVar8 + lVar4) != '\0');
    iVar6 = (int)lVar4;
    if (iStack_438 == iVar6) {
      if (iStack_438 != 0) {
        pbVar5 = pbStack_440;
        do {
          pbVar2 = pbVar5 + (*plVar8 - (int64_t)pbStack_440);
          iVar6 = (uint)*pbVar5 - (uint)*pbVar2;
          if (iVar6 != 0) break;
          pbVar5 = pbVar5 + 1;
        } while (*pbVar2 != 0);
      }
LAB_18025757e:
      if (iVar6 == 0) {
        *param_3 = *(int32_t *)((int64_t)iVar7 * 0x10 + 0x180bf8a48);
        goto LAB_18025759a;
      }
    }
    else if (iStack_438 == 0) goto LAB_18025757e;
    iVar7 = iVar7 + 1;
    plVar8 = plVar8 + 2;
    if (0x180bf8daf < (int64_t)plVar8) {
LAB_18025759a:
      puStack_448 = &system_state_ptr;
                    // WARNING: Subroutine does not return
      SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_478);
    }
  } while( true );
}






