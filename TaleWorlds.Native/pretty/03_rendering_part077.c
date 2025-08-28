#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part077.c - 7 个函数

// 函数: void FUN_18030cab0(int64_t *param_1,uint64_t param_2)
void FUN_18030cab0(int64_t *param_1,uint64_t param_2)

{
  uint64_t *puVar1;
  int32_t *puVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  int64_t lStackX_18;
  int64_t lStackX_20;
  uint64_t uVar12;
  
  uVar12 = 0xfffffffffffffffe;
  lVar10 = param_1[1];
  lVar11 = *param_1;
  lStackX_20 = (lVar10 - lVar11) / 0x128;
  if (lStackX_20 == 0) {
    lStackX_20 = 1;
  }
  else {
    lStackX_20 = lStackX_20 * 2;
    if (lStackX_20 == 0) {
      lStackX_18 = 0;
      goto LAB_18030cb58;
    }
  }
  lStackX_18 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lStackX_20 * 0x128,(char)param_1[3]);
  lVar10 = param_1[1];
  lVar11 = *param_1;
LAB_18030cb58:
  lVar8 = lStackX_18;
  if (lVar11 != lVar10) {
    lVar11 = lVar11 - lStackX_18;
    puVar9 = (uint64_t *)(lStackX_18 + 0x110);
    do {
      FUN_1808fcf5c(lVar8,(int64_t)puVar9 + lVar11 + -0x110,0x58,2,FUN_18030ccf0,FUN_1800f88f0,
                    uVar12,lVar8);
      *(int32_t *)(puVar9 + -0xc) = *(int32_t *)(lVar11 + -0x60 + (int64_t)puVar9);
      puVar1 = (uint64_t *)(lVar11 + -0x5c + (int64_t)puVar9);
      uVar6 = puVar1[1];
      *(uint64_t *)((int64_t)puVar9 + -0x5c) = *puVar1;
      *(uint64_t *)((int64_t)puVar9 + -0x54) = uVar6;
      puVar1 = (uint64_t *)(lVar11 + -0x4c + (int64_t)puVar9);
      uVar6 = puVar1[1];
      *(uint64_t *)((int64_t)puVar9 + -0x4c) = *puVar1;
      *(uint64_t *)((int64_t)puVar9 + -0x44) = uVar6;
      puVar1 = (uint64_t *)(lVar11 + -0x3c + (int64_t)puVar9);
      uVar6 = puVar1[1];
      *(uint64_t *)((int64_t)puVar9 + -0x3c) = *puVar1;
      *(uint64_t *)((int64_t)puVar9 + -0x34) = uVar6;
      puVar2 = (int32_t *)(lVar11 + -0x2c + (int64_t)puVar9);
      uVar3 = puVar2[1];
      uVar4 = puVar2[2];
      uVar5 = puVar2[3];
      *(int32_t *)((int64_t)puVar9 + -0x2c) = *puVar2;
      *(int32_t *)(puVar9 + -5) = uVar3;
      *(int32_t *)((int64_t)puVar9 + -0x24) = uVar4;
      *(int32_t *)(puVar9 + -4) = uVar5;
      puVar1 = (uint64_t *)(lVar11 + -0x1c + (int64_t)puVar9);
      uVar6 = puVar1[1];
      *(uint64_t *)((int64_t)puVar9 + -0x1c) = *puVar1;
      *(uint64_t *)((int64_t)puVar9 + -0x14) = uVar6;
      puVar9[-1] = &system_state_ptr;
      *puVar9 = 0;
      *(int32_t *)(puVar9 + 1) = 0;
      puVar9[-1] = &system_data_buffer_ptr;
      puVar9[2] = 0;
      *puVar9 = 0;
      *(int32_t *)(puVar9 + 1) = 0;
      *(int32_t *)(puVar9 + 1) = *(int32_t *)(lVar11 + 8 + (int64_t)puVar9);
      *puVar9 = *(uint64_t *)(lVar11 + (int64_t)puVar9);
      *(int32_t *)((int64_t)puVar9 + 0x14) = *(int32_t *)(lVar11 + 0x14 + (int64_t)puVar9);
      *(int32_t *)(puVar9 + 2) = *(int32_t *)(lVar11 + 0x10 + (int64_t)puVar9);
      *(int32_t *)(lVar11 + 8 + (int64_t)puVar9) = 0;
      *(uint64_t *)(lVar11 + (int64_t)puVar9) = 0;
      *(uint64_t *)(lVar11 + 0x10 + (int64_t)puVar9) = 0;
      lVar8 = lVar8 + 0x128;
      lVar7 = (int64_t)puVar9 + lVar11 + 0x18;
      puVar9 = puVar9 + 0x25;
    } while (lVar7 != lVar10);
  }
  FUN_1800f8570(lVar8,param_2);
  lVar10 = param_1[1];
  lVar11 = *param_1;
  if (lVar11 != lVar10) {
    do {
      FUN_1800f8930(lVar11);
      lVar11 = lVar11 + 0x128;
    } while (lVar11 != lVar10);
    lVar11 = *param_1;
  }
  if (lVar11 == 0) {
    *param_1 = lStackX_18;
    param_1[1] = lVar8 + 0x128;
    param_1[2] = lStackX_20 * 0x128 + lStackX_18;
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar11);
}



uint64_t * FUN_18030ccf0(uint64_t *param_1,uint64_t *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(int32_t *)(param_1 + 2) = *(int32_t *)(param_2 + 2);
  FUN_1808fcf5c(param_1 + 3,param_2 + 3,0x20,2,FUN_180627a70,FUN_180627b90);
  return param_1;
}



uint64_t FUN_18030cd70(int64_t param_1)

{
  int64_t *plVar1;
  char cVar2;
  
  plVar1 = *(int64_t **)(param_1 + 0x48);
  if (*(code **)(*plVar1 + 0xc0) == (code *)&unknown_var_9120_ptr) {
    cVar2 = (plVar1[8] - plVar1[7] & 0xfffffffffffffff0U) == 0;
  }
  else {
    cVar2 = (**(code **)(*plVar1 + 0xc0))(plVar1);
  }
  if (cVar2 == '\0') {
    return *(uint64_t *)plVar1[7];
  }
  return 0;
}



uint64_t * FUN_18030cdf0(uint64_t *param_1)

{
  DataStructureManager(param_1 + 3,0x20,2,FUN_180627850,FUN_180627b90);
  *param_1 = 0xffffffffffffffff;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  return param_1;
}



uint64_t *
FUN_18030ce70(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &unknown_var_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x15;
  strcpy_s(param_2[1],0x80,&unknown_var_4936_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18030cef0(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  uint64_t *puVar6;
  
  FUN_180244190();
  *param_1 = &unknown_var_5008_ptr;
  param_1[0x1e] = &system_state_ptr;
  puVar5 = (uint64_t *)0x0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  param_1[0x1e] = &system_data_buffer_ptr;
  param_1[0x21] = 0;
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x20) = 0;
  DataStructureManager(param_1 + 0x26,0x20,2,FUN_180056e10,FUN_18004c030);
  DataStructureManager(param_1 + 0x2e,0x20,2,FUN_180056e10,FUN_18004c030);
  param_1[0x36] = 0;
  puVar3 = param_1 + 0x37;
  param_1[0x3a] = 0;
  *(int32_t *)(param_1 + 0x3c) = 3;
  *puVar3 = puVar3;
  param_1[0x38] = puVar3;
  param_1[0x39] = 0;
  *(int8_t *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
  *puVar3 = 0;
  puVar3[1] = 0;
  puVar3[2] = 0;
  *(int32_t *)(puVar3 + 3) = 3;
  param_1[0x22] = puVar3;
  param_1[0x23] = 0;
  *(uint64_t *)((int64_t)param_1 + 0x124) = 0;
  *(int8_t *)(param_1 + 0x24) = 0;
  plVar1 = (int64_t *)param_1[0x36];
  param_1[0x36] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)((int64_t)param_1 + 0xcc) = 0;
  lVar2 = render_system_data_config;
  if (render_system_data_config == 0) {
    return param_1;
  }
  puVar3 = *(uint64_t **)(render_system_data_config + 0x20);
  if (puVar3 < *(uint64_t **)(render_system_data_config + 0x28)) {
    *(uint64_t **)(render_system_data_config + 0x20) = puVar3 + 1;
    *puVar3 = param_1;
    return param_1;
  }
  puVar6 = *(uint64_t **)(render_system_data_config + 0x18);
  lVar4 = (int64_t)puVar3 - (int64_t)puVar6 >> 3;
  if (lVar4 == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = lVar4 * 2;
    if (lVar4 == 0) goto LAB_18030d0ba;
  }
  puVar5 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(render_system_data_config + 0x30));
  puVar3 = *(uint64_t **)(lVar2 + 0x20);
  puVar6 = *(uint64_t **)(lVar2 + 0x18);
LAB_18030d0ba:
  if (puVar6 != puVar3) {
                    // WARNING: Subroutine does not return
    memmove(puVar5,puVar6,(int64_t)puVar3 - (int64_t)puVar6);
  }
  *puVar5 = param_1;
  if (*(int64_t *)(lVar2 + 0x18) == 0) {
    *(uint64_t **)(lVar2 + 0x18) = puVar5;
    *(uint64_t **)(lVar2 + 0x20) = puVar5 + 1;
    *(uint64_t **)(lVar2 + 0x28) = puVar5 + lVar4;
    return param_1;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



uint64_t FUN_18030d110(uint64_t param_1,uint64_t param_2)

{
  FUN_18030d150();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1e8);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d150(uint64_t *param_1)
void FUN_18030d150(uint64_t *param_1)

{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t uVar9;
  
  *param_1 = &unknown_var_5008_ptr;
  uVar8 = 0;
  if (render_system_data_config != 0) {
    puVar1 = *(uint64_t **)(render_system_data_config + 0x20);
    puVar2 = *(uint64_t **)(render_system_data_config + 0x18);
    uVar9 = (int64_t)puVar1 - (int64_t)puVar2 >> 3;
    uVar4 = uVar8;
    puVar5 = puVar2;
    if (uVar9 != 0) {
      do {
        if ((uint64_t *)*puVar5 == param_1) {
          puVar5 = puVar2 + (int)uVar4 + 1;
          if (puVar5 < puVar1) {
                    // WARNING: Subroutine does not return
            memmove(puVar2 + (int)uVar4,puVar5,(int64_t)puVar1 - (int64_t)puVar5,
                    (int64_t)puVar1 - (int64_t)puVar5,0xfffffffffffffffe);
          }
          *(uint64_t **)(render_system_data_config + 0x20) = puVar1 + -1;
          break;
        }
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        puVar5 = puVar5 + 1;
      } while ((uint64_t)(int64_t)(int)uVar3 < uVar9);
    }
  }
  FUN_1800b8500(param_1 + 0x26);
  FUN_1800b8500(param_1 + 0x2a);
  puVar1 = param_1 + 0x37;
  for (puVar2 = (uint64_t *)param_1[0x38]; puVar2 != puVar1;
      puVar2 = (uint64_t *)func_0x00018066bd70(puVar2)) {
    lVar6 = puVar2[6];
    if (lVar6 != 0) {
      FUN_180057830(lVar6);
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar6);
    }
  }
  puVar2 = (uint64_t *)param_1[0x39];
  if (puVar2 != (uint64_t *)0x0) {
    FUN_18004b790(puVar1,*puVar2);
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar2);
  }
  *puVar1 = puVar1;
  param_1[0x38] = puVar1;
  param_1[0x39] = 0;
  *(int8_t *)(param_1 + 0x3a) = 0;
  param_1[0x3b] = 0;
  plVar7 = (int64_t *)param_1[0x22];
  lVar6 = *plVar7;
  uVar4 = uVar8;
  if (plVar7[1] - lVar6 >> 3 != 0) {
    do {
      lVar6 = *(int64_t *)(lVar6 + uVar4);
      if (lVar6 != 0) {
        *(int64_t *)(lVar6 + 0x10) = *(int64_t *)(lVar6 + 8);
        if (*(int64_t *)(lVar6 + 8) != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lVar6);
      }
      uVar3 = (int)uVar8 + 1;
      uVar8 = (uint64_t)uVar3;
      plVar7 = (int64_t *)param_1[0x22];
      lVar6 = *plVar7;
      uVar4 = uVar4 + 8;
    } while ((uint64_t)(int64_t)(int)uVar3 < (uint64_t)(plVar7[1] - lVar6 >> 3));
  }
  if (plVar7 != (int64_t *)0x0) {
    if (*plVar7 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plVar7);
  }
  param_1[0x22] = 0;
  FUN_18004b730(puVar1);
  if ((int64_t *)param_1[0x36] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x36] + 0x38))();
  }
  SystemDataValidator(param_1 + 0x2e,0x20,2,FUN_18004c030);
  SystemDataValidator(param_1 + 0x26,0x20,2,FUN_18004c030);
  param_1[0x1e] = &system_data_buffer_ptr;
  if (param_1[0x1f] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x1f] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1e] = &system_state_ptr;
  *param_1 = &unknown_var_9896_ptr;
  param_1[0x15] = &system_data_buffer_ptr;
  if (param_1[0x16] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x18) = 0;
  param_1[0x15] = &system_state_ptr;
  param_1[0x11] = &system_data_buffer_ptr;
  if (param_1[0x12] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x14) = 0;
  param_1[0x11] = &system_state_ptr;
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_18030d400(int64_t param_1)

{
  uint64_t uVar1;
  int64_t *plVar2;
  int64_t *plStackX_8;
  
  plVar2 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,200,8,3,0xfffffffffffffffe);
  FUN_180049830(plVar2);
  *plVar2 = (int64_t)&unknown_var_5304_ptr;
  plVar2[0x18] = param_1;
  plStackX_8 = plVar2;
  (**(code **)(*plVar2 + 0x28))(plVar2);
  plStackX_8 = *(int64_t **)(param_1 + 0x1b0);
  *(int64_t **)(param_1 + 0x1b0) = plVar2;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  uVar1 = system_context_ptr;
  plStackX_8 = *(int64_t **)(param_1 + 0x1b0);
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x28))();
  }
  FUN_18005e110(uVar1,&plStackX_8);
  return 0;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d4d0(int64_t param_1)
void FUN_18030d4d0(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  uint uVar3;
  uint64_t uVar5;
  int64_t lVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t uStack_d8;
  int32_t uStack_d0;
  int16_t uStack_cc;
  uint64_t uStack_c8;
  uint64_t uStack_c0;
  int32_t uStack_b8;
  int8_t uStack_b4;
  int32_t uStack_b0;
  uint64_t uStack_ac;
  int16_t uStack_a4;
  uint64_t uStack_a0;
  int32_t uStack_98;
  uint64_t uStack_90;
  int32_t uStack_88;
  int8_t uStack_84;
  uint64_t uStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  int32_t uStack_48;
  int32_t uStack_44;
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  int32_t uStack_30;
  int32_t uStack_2c;
  uint64_t uVar4;
  
  uVar7 = 0;
  lVar6 = *(int64_t *)(param_1 + 0xc0);
  uVar1 = *(uint64_t *)(render_system_data_config + 0x38);
  uVar8 = uVar7;
  if ((*(int64_t **)(lVar6 + 0x110))[1] - **(int64_t **)(lVar6 + 0x110) >> 3 != 0) {
    do {
      uVar4 = 0;
      lVar6 = *(int64_t *)(uVar7 + **(int64_t **)(lVar6 + 0x110));
      lVar2 = *(int64_t *)(lVar6 + 8);
      uVar5 = uVar4;
      if (*(int64_t *)(lVar6 + 0x10) - lVar2 >> 3 != 0) {
        do {
          uStack_68 = 0x3f800000;
          uStack_60 = 0;
          uStack_58 = 0x3f80000000000000;
          uStack_50 = 0;
          uStack_c8 = 0;
          uStack_a0 = 0;
          uStack_98 = 0;
          uStack_90 = 0;
          uStack_70 = 0;
          uStack_48 = 0;
          uStack_44 = 0;
          uStack_40 = 0x3f800000;
          uStack_3c = 0;
          uStack_38 = 0;
          uStack_34 = 0;
          uStack_30 = 0;
          uStack_2c = 0x3f800000;
          uStack_d8 = 0;
          uStack_d0 = 0xffffffff;
          uStack_cc = 0xff00;
          uStack_c0 = 0xffffffffffffffff;
          uStack_b8 = 0xffffffff;
          uStack_b4 = 0xff;
          uStack_b0 = 0xffffffff;
          uStack_ac = 0;
          uStack_a4 = 0x400;
          uStack_88 = 0;
          uStack_84 = 0;
          FUN_180077750(*(uint64_t *)(*(int64_t *)(lVar6 + 8) + uVar5),uVar1,&uStack_68,0,
                        &uStack_d8);
          lVar2 = *(int64_t *)(lVar6 + 8);
          uVar3 = (int)uVar4 + 1;
          uVar4 = (uint64_t)uVar3;
          uVar5 = uVar5 + 8;
        } while ((uint64_t)(int64_t)(int)uVar3 <
                 (uint64_t)(*(int64_t *)(lVar6 + 0x10) - lVar2 >> 3));
      }
      *(int64_t *)(lVar6 + 0x10) = lVar2;
      uVar3 = (int)uVar8 + 1;
      lVar6 = *(int64_t *)(param_1 + 0xc0);
      uVar7 = uVar7 + 8;
      uVar8 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)((*(int64_t **)(lVar6 + 0x110))[1] - **(int64_t **)(lVar6 + 0x110) >> 3));
  }
  return;
}





// 函数: void FUN_18030d51b(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void FUN_18030d51b(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t unaff_RBX;
  int64_t unaff_RBP;
  uint uVar4;
  uint64_t unaff_RSI;
  uint64_t uVar5;
  uint64_t unaff_RDI;
  uint64_t uVar6;
  int64_t in_R11;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  uint64_t uVar7;
  int unaff_R15D;
  
  *(uint64_t *)(in_R11 + 8) = unaff_RBX;
  *(uint64_t *)(in_R11 + 0x10) = unaff_RSI;
  *(uint64_t *)(in_R11 + 0x18) = unaff_RDI;
  *(uint64_t *)(in_R11 + -0x28) = unaff_R14;
  uVar7 = param_4 & 0xffffffff;
  do {
    uVar5 = param_4 & 0xffffffff;
    lVar1 = *(int64_t *)(uVar7 + **(int64_t **)(param_3 + 0x110));
    lVar3 = *(int64_t *)(lVar1 + 8);
    uVar6 = param_4;
    if (*(int64_t *)(lVar1 + 0x10) - lVar3 >> 3 != 0) {
      do {
        lVar3 = *(int64_t *)(lVar1 + 8);
        *(uint64_t *)(unaff_RBP + -9) = 0x3f800000;
        *(uint64_t *)(unaff_RBP + -1) = 0;
        *(uint64_t *)(unaff_RBP + 7) = 0x3f80000000000000;
        *(uint64_t *)(unaff_RBP + 0xf) = 0;
        uVar2 = *(uint64_t *)(lVar3 + param_4);
        *(uint64_t *)(unaff_RBP + -0x69) = uVar6;
        *(uint64_t *)(unaff_RBP + -0x41) = uVar6;
        *(int *)(unaff_RBP + -0x39) = (int)uVar6;
        *(uint64_t *)(unaff_RBP + -0x31) = uVar6;
        *(uint64_t *)(unaff_RBP + -0x11) = uVar6;
        *(int32_t *)(unaff_RBP + 0x17) = 0;
        *(int32_t *)(unaff_RBP + 0x1b) = 0;
        *(int32_t *)(unaff_RBP + 0x1f) = 0x3f800000;
        *(int32_t *)(unaff_RBP + 0x23) = 0;
        *(int32_t *)(unaff_RBP + 0x27) = 0;
        *(int32_t *)(unaff_RBP + 0x2b) = 0;
        *(int32_t *)(unaff_RBP + 0x2f) = 0;
        *(int32_t *)(unaff_RBP + 0x33) = 0x3f800000;
        *(uint64_t *)(unaff_RBP + -0x79) = 0;
        *(int32_t *)(unaff_RBP + -0x71) = 0xffffffff;
        *(int16_t *)(unaff_RBP + -0x6d) = 0xff00;
        *(uint64_t *)(unaff_RBP + -0x61) = 0xffffffffffffffff;
        *(int32_t *)(unaff_RBP + -0x59) = 0xffffffff;
        *(int8_t *)(unaff_RBP + -0x55) = 0xff;
        *(int32_t *)(unaff_RBP + -0x51) = 0xffffffff;
        *(uint64_t *)(unaff_RBP + -0x4d) = 0;
        *(int16_t *)(unaff_RBP + -0x45) = 0x400;
        *(int32_t *)(unaff_RBP + -0x29) = 0;
        *(int8_t *)(unaff_RBP + -0x25) = 0;
        FUN_180077750(uVar2,0,unaff_RBP + -9,0,unaff_RBP + -0x79);
        lVar3 = *(int64_t *)(lVar1 + 8);
        param_4 = param_4 + 8;
        uVar4 = (int)uVar5 + 1;
        uVar5 = (uint64_t)uVar4;
        uVar6 = 0;
      } while ((uint64_t)(int64_t)(int)uVar4 <
               (uint64_t)(*(int64_t *)(lVar1 + 0x10) - lVar3 >> 3));
    }
    *(int64_t *)(lVar1 + 0x10) = lVar3;
    unaff_R15D = unaff_R15D + 1;
    param_3 = *(int64_t *)(unaff_R13 + 0xc0);
    uVar7 = uVar7 + 8;
    param_4 = uVar6;
  } while ((uint64_t)(int64_t)unaff_R15D <
           (uint64_t)((*(int64_t **)(param_3 + 0x110))[1] - **(int64_t **)(param_3 + 0x110) >> 3)
          );
  return;
}





// 函数: void FUN_18030d67f(void)
void FUN_18030d67f(void)

{
  return;
}



uint64_t FUN_18030d690(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t uVar1;
  
  uVar1 = 0xfffffffffffffffe;
  FUN_180049470();
  if ((param_2 & 1) != 0) {
    free(param_1,200,param_3,param_4,uVar1);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d6e0(int64_t param_1,int64_t *param_2,int param_3)
void FUN_18030d6e0(int64_t param_1,int64_t *param_2,int param_3)

{
  uint64_t *puVar1;
  int iVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  char cStack_d6;
  int32_t uStack_d4;
  int8_t uStack_d0;
  uint64_t uStack_c8;
  int64_t alStack_c0 [3];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int16_t uStack_88;
  int8_t uStack_86;
  int32_t uStack_84;
  int8_t uStack_80;
  uint64_t uStack_78;
  int64_t alStack_70 [3];
  int32_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  
  uStack_48 = 0xfffffffffffffffe;
  plVar6 = *(int64_t **)(param_1 + 0x110);
  plVar4 = (int64_t *)0x0;
  if (*plVar6 != plVar6[1]) goto LAB_18030d811;
  plStackX_8 = (int64_t *)
               CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,CONCAT71((int7)((uint64_t)plVar6 >> 8),3));
  plStackX_10 = plStackX_8 + 1;
  *plStackX_10 = 0;
  plStackX_8[2] = 0;
  plStackX_8[3] = 0;
  *(int32_t *)(plStackX_8 + 4) = 3;
  puVar1 = *(uint64_t **)(param_1 + 0x110);
  plVar6 = (int64_t *)puVar1[1];
  if (plVar6 < (int64_t *)puVar1[2]) {
    puVar1[1] = (uint64_t)(plVar6 + 1);
    *plVar6 = (int64_t)plStackX_8;
    goto LAB_18030d811;
  }
  plVar5 = (int64_t *)*puVar1;
  lVar3 = (int64_t)plVar6 - (int64_t)plVar5 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
LAB_18030d7a4:
    plVar4 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8,(char)puVar1[3]);
    plVar6 = (int64_t *)puVar1[1];
    plVar5 = (int64_t *)*puVar1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 != 0) goto LAB_18030d7a4;
  }
  if (plVar5 != plVar6) {
                    // WARNING: Subroutine does not return
    memmove(plVar4,plVar5,(int64_t)plVar6 - (int64_t)plVar5);
  }
  *plVar4 = (int64_t)plStackX_8;
  if (*puVar1 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *puVar1 = (uint64_t)plVar4;
  puVar1[1] = (uint64_t)(plVar4 + 1);
  puVar1[2] = (uint64_t)(plVar4 + lVar3);
LAB_18030d811:
  lVar3 = *(int64_t *)**(uint64_t **)(param_1 + 0x110);
  uStack_98 = 0;
  uStack_90 = 0;
  uStack_8c = 0xffffffff;
  uStack_88 = 1;
  uStack_86 = 0;
  uStack_84 = 0xffffffff;
  uStack_80 = 1;
  uStack_78 = 0;
  alStack_70[0] = 0;
  alStack_70[1] = 0;
  alStack_70[2] = 0;
  uStack_58 = 3;
  uStack_50 = 0;
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  uStack_d8 = 1;
  cStack_d6 = '\0';
  uStack_d4 = 0xffffffff;
  uStack_d0 = 1;
  uStack_c8 = 0;
  plStackX_8 = alStack_c0;
  alStack_c0[0] = 0;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  uStack_a8 = 3;
  uStack_a0 = 0;
  FUN_18022d470(param_2[0x37],&uStack_98);
  if ((cStack_d6 != '\0') || (iVar2 = FUN_18022d470(param_2[0x37],&uStack_e8), iVar2 == 0)) {
    plStackX_8 = param_2;
    SystemInitializer(lVar3 + 8,&plStackX_8);
    if (*(int *)(param_1 + 0x11c) < param_3) {
      *(int *)(param_1 + 0x11c) = param_3;
    }
    *(int *)((int64_t)param_2 + 0x104) = *(int *)(param_1 + 0x118) + param_3;
  }
  plStackX_8 = alStack_c0;
  if (alStack_c0[0] == 0) {
    plStackX_8 = alStack_70;
    if (alStack_70[0] == 0) {
      return;
    }
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18030d960(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
void FUN_18030d960(uint64_t param_1,int64_t param_2,int64_t param_3,int8_t param_4,
                  int32_t param_5,int32_t param_6,int64_t *param_7,float *param_8)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint uVar6;
  float *pfVar7;
  int64_t lVar8;
  int32_t uVar9;
  int64_t lStack_b8;
  uint64_t uStack_98;
  int32_t uStack_90;
  int32_t uStack_8c;
  int16_t uStack_88;
  int8_t uStack_86;
  int32_t uStack_84;
  int8_t uStack_80;
  uint64_t uStack_78;
  int64_t lStack_70;
  uint64_t uStack_68;
  uint64_t uStack_60;
  int32_t uStack_58;
  uint64_t uStack_50;
  
  if (param_8[0x21] == 0.0) {
    FUN_18030eaf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  else if (param_8[0x21] == 2.8026e-45) {
    fVar1 = *param_8;
    param_3 = param_3 - param_2;
    pfVar3 = (float *)(param_2 + 0x24);
    lStack_b8 = 3;
    do {
      *param_8 = fVar1;
      lVar8 = 3;
      pfVar7 = pfVar3;
      do {
        lVar4 = FUN_18030f1e0(param_1);
        FUN_180076910(lVar4,param_7);
        fVar2 = param_8[8];
        uVar6 = (uint)fVar2 >> 0x10 & 0xff;
        *(float *)(lVar4 + 0x238) = (float)uVar6 * 0.003921569;
        *(float *)(lVar4 + 0x23c) = (float)((uint)fVar2 >> 8 & 0xff) * 0.003921569;
        *(float *)(lVar4 + 0x240) = (float)((uint)fVar2 & 0xff) * 0.003921569;
        *(float *)(lVar4 + 0x244) = (float)((uint)fVar2 >> 0x18) * 0.003921569;
        if (*(int64_t *)(lVar4 + 0x2c8) == 0) {
          *(uint *)(lVar4 + 0x100) = *(uint *)(lVar4 + 0x100) | 8;
          uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,4,9);
                    // WARNING: Subroutine does not return
          memset(uVar5,0,0xd0);
        }
        param_8[0x1b] = pfVar7[-7] - pfVar7[-9];
        param_8[0x1c] = *pfVar7 - pfVar7[-8];
        param_8[0x1d] = *(float *)(param_3 + -0x24 + (int64_t)pfVar7);
        param_8[0x1f] = *(float *)(param_3 + -0x1c + (int64_t)pfVar7);
        param_8[0x1e] = *(float *)(param_3 + -0x20 + (int64_t)pfVar7);
        param_8[0x20] = *(float *)(param_3 + (int64_t)pfVar7);
        FUN_18030ef70(uVar6,lVar4,param_8);
        *param_8 = param_8[0x1b] + *param_8;
        FUN_18030d6e0(param_1);
        pfVar7 = pfVar7 + 2;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
      param_8[1] = param_8[1] + param_8[0x1c];
      pfVar3 = pfVar3 + 8;
      lStack_b8 = lStack_b8 + -1;
    } while (lStack_b8 != 0);
  }
  else {
    lVar8 = FUN_18030f1e0();
    FUN_180076910(lVar8,param_7);
    fVar1 = param_8[8];
    *(float *)(lVar8 + 0x238) = (float)((uint)fVar1 >> 0x10 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x23c) = (float)((uint)fVar1 >> 8 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x240) = (float)((uint)fVar1 & 0xff) * 0.003921569;
    *(float *)(lVar8 + 0x244) = (float)((uint)fVar1 >> 0x18) * 0.003921569;
    uVar9 = FUN_18007e930(lVar8);
    FUN_18030ef70(uVar9,lVar8,param_8);
    FUN_18030d6e0(param_1);
  }
  if (*param_7 != 0) {
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_8c = 0xffffffff;
    uStack_88 = 1;
    uStack_86 = 0;
    uStack_84 = 0xffffffff;
    uStack_80 = 1;
    uStack_78 = 0;
    lStack_70 = 0;
    uStack_68 = 0;
    uStack_60 = 0;
    uStack_58 = 3;
    uStack_50 = 0;
    FUN_18022d470(*param_7,&uStack_98);
    if (lStack_70 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



