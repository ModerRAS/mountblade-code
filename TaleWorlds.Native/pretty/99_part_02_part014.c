#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_02_part014.c - 4 个函数
// 函数: void GenericFunction_1800f2940(int64_t param_1)
void GenericFunction_1800f2940(int64_t param_1)
{
  int *piVar1;
  uint uVar2;
  void *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  void **ppuVar8;
  int8_t stack_array_298 [32];
  int32_t local_var_278;
  int32_t local_var_270;
  int32_t local_var_268;
  int32_t local_var_260;
  uint local_var_258;
  uint64_t local_var_250;
  int8_t local_var_248;
  int32_t local_var_240;
  void **pplocal_var_238;
  int64_t *plStack_230;
  int64_t *plStack_228;
  void ***ppplocal_var_220;
  int64_t *plStack_218;
  int64_t *plStack_210;
  int64_t *plStack_208;
  int64_t *plStack_200;
  int64_t *plStack_1f8;
  int64_t *plStack_1f0;
  void **pplocal_var_1e8;
  int64_t lStack_1e0;
  int8_t local_var_1d8;
  uint64_t local_var_1d0;
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  void *plocal_var_1b8;
  int8_t *plocal_var_1b0;
  int32_t local_var_1a8;
  int8_t stack_array_1a0 [128];
  int32_t local_var_120;
  uint64_t local_var_118;
  uint64_t *plocal_var_110;
  uint64_t local_var_108;
  int iStack_100;
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [32];
  void *plocal_var_a0;
  int8_t *plocal_var_98;
  int32_t local_var_90;
  int8_t stack_array_88 [32];
  void *plocal_var_68;
  int8_t *plocal_var_60;
  int32_t local_var_58;
  int8_t stack_array_50 [32];
  uint64_t local_var_30;
  local_var_1d0 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_298;
  lStack_1e0 = param_1 + 0x2b8;
  local_var_1d8 = 0;
  AcquireSRWLockExclusive();
  local_var_1d8 = 1;
  uVar2 = *(uint *)(param_1 + 0x58);
  if (((*(int64_t *)(param_1 + 0x420) == 0) ||
      (*(uint *)(*(int64_t *)(param_1 + 0x420) + 0x3c) < uVar2)) ||
     (*(char *)(param_1 + 0x3a0) != '\0')) {
    plocal_var_d8 = &processed_var_672_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = 0x16;
    strcpy_s(stack_array_c0,0x20,&processed_var_5984_ptr);
    local_var_240 = 1;
    local_var_248 = 1;
    local_var_250 = 0;
    local_var_260 = 4;
    local_var_268 = 5;
    local_var_270 = 0;
    local_var_278 = 5;
    local_var_258 = uVar2 * 2;
    puVar4 = (uint64_t *)SystemCore_ConfigManager();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_218 = *(int64_t **)(param_1 + 0x388);
    *(uint64_t *)(param_1 + 0x388) = uVar5;
    if (plStack_218 != (int64_t *)0x0) {
      (**(code **)(*plStack_218 + 0x38))();
    }
    if (plStack_210 != (int64_t *)0x0) {
      (**(code **)(*plStack_210 + 0x38))();
    }
    plocal_var_d8 = &system_state_ptr;
    plocal_var_a0 = &processed_var_672_ptr;
    plocal_var_98 = stack_array_88;
    stack_array_88[0] = 0;
    local_var_90 = 0x16;
    strcpy_s(stack_array_88,0x20,&processed_var_5984_ptr);
    local_var_240 = 1;
    local_var_248 = 1;
    local_var_250 = 0;
    local_var_260 = 4;
    local_var_268 = 5;
    local_var_270 = 0;
    local_var_278 = 5;
    local_var_258 = uVar2 * 2;
    puVar4 = (uint64_t *)SystemCore_ConfigManager();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_208 = *(int64_t **)(param_1 + 0x390);
    *(uint64_t *)(param_1 + 0x390) = uVar5;
    if (plStack_208 != (int64_t *)0x0) {
      (**(code **)(*plStack_208 + 0x38))();
    }
    if (plStack_200 != (int64_t *)0x0) {
      (**(code **)(*plStack_200 + 0x38))();
    }
    plocal_var_a0 = &system_state_ptr;
    plocal_var_68 = &processed_var_672_ptr;
    plocal_var_60 = stack_array_50;
    stack_array_50[0] = 0;
    local_var_58 = 0x14;
    strcpy_s(stack_array_50,0x20,&processed_var_5960_ptr);
    local_var_240 = 1;
    local_var_248 = 1;
    local_var_250 = 0;
    local_var_260 = 4;
    local_var_268 = 5;
    local_var_270 = 0;
    local_var_278 = 5;
    local_var_258 = uVar2;
    puVar4 = (uint64_t *)SystemCore_ConfigManager();
    uVar5 = *puVar4;
    *puVar4 = 0;
    plStack_1f8 = *(int64_t **)(param_1 + 0x398);
    *(uint64_t *)(param_1 + 0x398) = uVar5;
    if (plStack_1f8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f8 + 0x38))();
    }
    if (plStack_1f0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1f0 + 0x38))();
    }
    plocal_var_68 = &system_state_ptr;
    if (*(int64_t *)(param_1 + 0x420) != 0) {
      pplocal_var_238 = &plocal_var_1b8;
      plocal_var_1b8 = &memory_allocator_3432_ptr;
      plocal_var_1b0 = stack_array_1a0;
      local_var_1a8 = 0;
      stack_array_1a0[0] = 0;
      local_var_120 = 7;
      local_var_118 = *(uint64_t *)(param_1 + 0x398);
      plocal_var_110 = *(uint64_t **)(param_1 + 0x420);
      local_var_108 = 0;
      iStack_100 = *(int *)(plocal_var_110 + 8) * *(int *)((int64_t)plocal_var_110 + 0x3c);
      if ((void *)*plocal_var_110 == &rendering_buffer_2696_ptr) {
        LOCK();
        *(int *)(plocal_var_110 + 1) = *(int *)(plocal_var_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((void *)*plocal_var_110 + 0x28))();
      }
      puVar3 = (void *)**(uint64_t **)(param_1 + 0x398);
      if (puVar3 == &rendering_buffer_2696_ptr) {
        LOCK();
        piVar1 = (int *)(*(uint64_t **)(param_1 + 0x398) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x100,8,3);
      plVar6 = (int64_t *)SystemCore_StreamController(uVar5,&plocal_var_1b8);
      plStack_1c8 = plVar6;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      uVar5 = system_context_ptr;
      ppplocal_var_220 = (void ***)&plStack_230;
      plStack_230 = plVar6;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x28))(plVar6);
      }
      SystemPerformance_Monitor(uVar5,&plStack_230);
      local_var_118 = *(uint64_t *)(param_1 + 0x388);
      plocal_var_110 = *(uint64_t **)(param_1 + 0x410);
      local_var_108 = 0;
      iStack_100 = *(int *)(plocal_var_110 + 8) * *(int *)((int64_t)plocal_var_110 + 0x3c);
      if ((void *)*plocal_var_110 == &rendering_buffer_2696_ptr) {
        LOCK();
        *(int *)(plocal_var_110 + 1) = *(int *)(plocal_var_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((void *)*plocal_var_110 + 0x28))();
      }
      puVar3 = (void *)**(uint64_t **)(param_1 + 0x388);
      if (puVar3 == &rendering_buffer_2696_ptr) {
        LOCK();
        piVar1 = (int *)(*(uint64_t **)(param_1 + 0x388) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x100,8,3);
      plVar7 = (int64_t *)SystemCore_StreamController(uVar5,&plocal_var_1b8);
      plStack_1c0 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      uVar5 = system_context_ptr;
      ppplocal_var_220 = (void ***)&plStack_228;
      plStack_228 = plVar7;
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x28))(plVar7);
      }
      SystemPerformance_Monitor(uVar5,&plStack_228);
      local_var_118 = *(uint64_t *)(param_1 + 0x390);
      plocal_var_110 = *(uint64_t **)(param_1 + 0x418);
      local_var_108 = 0;
      iStack_100 = *(int *)(plocal_var_110 + 8) * *(int *)((int64_t)plocal_var_110 + 0x3c);
      if ((void *)*plocal_var_110 == &rendering_buffer_2696_ptr) {
        LOCK();
        *(int *)(plocal_var_110 + 1) = *(int *)(plocal_var_110 + 1) + 1;
        UNLOCK();
      }
      else {
        (**(code **)((void *)*plocal_var_110 + 0x28))();
      }
      puVar3 = (void *)**(uint64_t **)(param_1 + 0x390);
      if (puVar3 == &rendering_buffer_2696_ptr) {
        LOCK();
        piVar1 = (int *)(*(uint64_t **)(param_1 + 0x390) + 1);
        *piVar1 = *piVar1 + 1;
        UNLOCK();
      }
      else {
        (**(code **)(puVar3 + 0x28))();
      }
      uVar5 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x100,8,3);
      ppuVar8 = (void **)SystemCore_StreamController(uVar5,&plocal_var_1b8);
      pplocal_var_1e8 = ppuVar8;
      if (ppuVar8 != (void **)0x0) {
        (**(code **)(*ppuVar8 + 0x28))(ppuVar8);
      }
      uVar5 = system_context_ptr;
      ppplocal_var_220 = &pplocal_var_238;
      pplocal_var_238 = ppuVar8;
      if (ppuVar8 != (void **)0x0) {
        (**(code **)(*ppuVar8 + 0x28))(ppuVar8);
      }
      SystemPerformance_Monitor(uVar5,&pplocal_var_238);
      *(int8_t *)(param_1 + 0x3a0) = 0;
      if (ppuVar8 != (void **)0x0) {
        (**(code **)(*ppuVar8 + 0x38))(ppuVar8);
      }
      if (plVar7 != (int64_t *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7);
      }
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6);
      }
      pplocal_var_1e8 = &plocal_var_1b8;
      plocal_var_1b8 = &system_state_ptr;
    }
  }
  ReleaseSRWLockExclusive(lStack_1e0);
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_30 ^ (uint64_t)stack_array_298);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800f2fd0(void)
void GenericFunction_1800f2fd0(void)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int64_t *plVar7;
  int64_t lVar8;
  lVar4 = system_system_data_memory;
  lVar6 = system_system_data_memory + 0x2b8;
  AcquireSRWLockExclusive(lVar6);
  iVar5 = (int)(*(int64_t *)(lVar4 + 0x148) - *(int64_t *)(lVar4 + 0x140) >> 3);
  if (0 < iVar5) {
    lVar8 = 0;
    do {
      lVar1 = *(int64_t *)(*(int64_t *)(lVar4 + 0x140) + lVar8 * 8);
      *(uint64_t *)(lVar1 + 0x118) = *(uint64_t *)(lVar1 + 0xb0);
      *(uint64_t *)(lVar1 + 0x120) = *(uint64_t *)(lVar1 + 0xb8);
      *(uint64_t *)(lVar1 + 0x128) = *(uint64_t *)(lVar1 + 0xc0);
      *(uint64_t *)(lVar1 + 0x130) = *(uint64_t *)(lVar1 + 200);
      *(uint64_t *)(lVar1 + 0x138) = *(uint64_t *)(lVar1 + 0xd0);
      *(uint64_t *)(lVar1 + 0x140) = *(uint64_t *)(lVar1 + 0xd8);
      *(uint64_t *)(lVar1 + 0x148) = *(uint64_t *)(lVar1 + 0xe0);
      *(uint64_t *)(lVar1 + 0x150) = *(uint64_t *)(lVar1 + 0xe8);
      *(uint64_t *)(lVar1 + 0x158) = *(uint64_t *)(lVar1 + 0xf0);
      *(uint64_t *)(lVar1 + 0x160) = *(uint64_t *)(lVar1 + 0xf8);
      *(uint64_t *)(lVar1 + 0x168) = *(uint64_t *)(lVar1 + 0x100);
      *(uint64_t *)(lVar1 + 0x170) = *(uint64_t *)(lVar1 + 0x108);
      *(uint64_t *)(lVar1 + 0x178) = *(uint64_t *)(lVar1 + 0x110);
      lVar8 = lVar8 + 1;
    } while (lVar8 < iVar5);
  }
  ReleaseSRWLockExclusive(lVar6);
  plVar7 = *(int64_t **)(lVar4 + 0x370);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x468);
  *(int64_t **)(lVar4 + 0x468) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(int64_t **)(lVar4 + 0x378);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x458);
  *(int64_t **)(lVar4 + 0x458) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(int64_t **)(lVar4 + 0x380);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x460);
  *(int64_t **)(lVar4 + 0x460) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(int64_t **)(lVar4 + 0x388);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x410);
  *(int64_t **)(lVar4 + 0x410) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(int64_t **)(lVar4 + 0x390);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x418);
  *(int64_t **)(lVar4 + 0x418) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = *(int64_t **)(lVar4 + 0x398);
  if (plVar7 != (int64_t *)0x0) {
    (**(code **)(*plVar7 + 0x28))(plVar7);
  }
  plVar2 = *(int64_t **)(lVar4 + 0x420);
  *(int64_t **)(lVar4 + 0x420) = plVar7;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  plVar7 = (int64_t *)(lVar4 + 0x3a8);
  lVar6 = 0xd;
  do {
    plVar2 = (int64_t *)plVar7[-0x14];
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plVar3 = (int64_t *)*plVar7;
    *plVar7 = (int64_t)plVar2;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    plVar7 = plVar7 + 1;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void GenericFunction_1800f3260(int64_t param_1,int64_t param_2)
void GenericFunction_1800f3260(int64_t param_1,int64_t param_2)
{
  int8_t uVar1;
  int8_t uVar2;
  bool bVar3;
  int32_t uVar4;
  uint uVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t **pplVar8;
  int64_t *plVar9;
  int8_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  int iVar14;
  void *puVar15;
  uint64_t uVar16;
  uint64_t *puVar17;
  int64_t lVar18;
  bool bVar19;
  bool bVar20;
  byte bVar21;
  uint64_t uVar22;
  uint64_t *puVar23;
  int32_t stack_special_x_18;
  int64_t *plStackX_20;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t lStack_f0;
  int64_t **pplStack_e8;
  int64_t **pplStack_e0;
  int64_t lStack_d8;
  uint64_t local_var_d0;
  int64_t *plStack_c8;
  int64_t *plStack_c0;
  int64_t **pplStack_b8;
  int64_t *plStack_b0;
  int64_t *plStack_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t *plStack_90;
  int64_t lStack_88;
  int8_t local_var_80;
  int64_t lStack_78;
  int8_t local_var_70;
  int64_t lStack_68;
  int8_t local_var_60;
  uint64_t local_var_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int64_t *plStack_40;
  local_var_58 = 0xfffffffffffffffe;
  plVar11 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x3c8) + 0x20);
  plStack_50 = plVar11;
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
    (**(code **)(*plVar11 + 0x38))(plVar11);
    if (plVar11[8] - plVar11[7] >> 4 != 1) {
      puVar15 = &system_buffer_ptr;
      if ((void *)plVar11[0x3f] != (void *)0x0) {
        puVar15 = (void *)plVar11[0x3f];
      }
      SystemCore_Allocator(&processed_var_6048_ptr,puVar15);
    }
  }
  stack_special_x_18 = 0xffffffff;
  plVar6 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x3c8) + 0x18);
  plStack_48 = plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
    (**(code **)(*plVar6 + 0x38))(plVar6);
    plVar6 = *(int64_t **)(*(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x3c8) + 0x18);
    plStack_40 = plVar6;
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x28))(plVar6);
    }
    stack_special_x_18 = (int32_t)plVar6[2];
    if (plVar6 != (int64_t *)0x0) {
      (**(code **)(*plVar6 + 0x38))(plVar6);
    }
  }
  bVar20 = false;
  bVar3 = false;
  plStack_f8 = (int64_t *)0x0;
  if (plVar11 != (int64_t *)0x0) {
    plVar6 = (int64_t *)SystemCore_BufferManager(*(uint64_t *)plVar11[7],&plStack_c8);
    plVar11 = (int64_t *)*plVar6;
    *plVar6 = 0;
    local_var_d0 = 0;
    plStack_f8 = plVar11;
    if (plStack_c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_c8 + 0x38))();
    }
    plVar6 = plVar11;
    if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
      plVar6 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
    }
    lVar12 = param_1 + 0x2b8;
    local_var_80 = 0;
    lStack_88 = lVar12;
    AcquireSRWLockExclusive(lVar12);
    local_var_80 = 1;
    lVar18 = *(int64_t *)(param_1 + 0x128);
    if (*(int64_t *)(param_1 + 0x120) == lVar18) {
      lVar18 = *(int64_t *)(param_1 + 0x1a0);
      uVar22 = *(int64_t *)(param_1 + 0x1a8) - lVar18 >> 4;
      uVar16 = (uint64_t)((int)uVar22 + 1);
      if (uVar22 < uVar16) {
        GenericFunction_1800f7100((int64_t *)(param_1 + 0x1a0),uVar16 - uVar22);
      }
      else {
        *(uint64_t *)(param_1 + 0x1a8) = uVar16 * 0x10 + lVar18;
      }
    }
    else {
      uVar22 = (uint64_t)*(int *)(lVar18 + -4);
      *(int64_t *)(param_1 + 0x128) = lVar18 + -4;
      puVar10 = (int8_t *)(uVar22 * 0x10 + *(int64_t *)(param_1 + 0x1a0));
      *puVar10 = 0;
      *(uint64_t *)(puVar10 + 4) = 0xffffffffffffffff;
      *(int32_t *)(puVar10 + 0xc) = 0;
    }
    ReleaseSRWLockExclusive(lVar12);
    plVar9 = plVar11;
    if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
      plVar9 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
    }
    GenericFunction_1800f4a20(param_1,uVar22 & 0xffffffff,(int)plVar9[0x3f]);
    if ((char)plVar6[0x5d] == '\0') {
      GenericFunction_1800f45c0(param_1,*(int32_t *)((int64_t)plVar6 + 0x2ec),plVar6[0x5c],plVar6);
      *(int8_t *)(plVar6 + 0x5d) = 1;
    }
    lVar12 = plVar11[0x4d];
    uVar7 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x140,8,3);
    pplVar8 = (int64_t **)
              RenderingSystem_09740(uVar7,*(int32_t *)((int64_t)plVar6 + 0x2ec),0xffffffff,stack_special_x_18,
                            (int)uVar22);
    pplStack_e8 = pplVar8;
    if (pplVar8 != (int64_t **)0x0) {
      (*(code *)(*pplVar8)[5])(pplVar8);
    }
    *(int8_t *)((int64_t)pplVar8 + 0x13c) = *(int8_t *)(param_2 + 0x43);
    *(int32_t *)(pplVar8 + 0x11) = *(int32_t *)(lVar12 + 0x60);
    *(int32_t *)((int64_t)pplVar8 + 0x8c) = *(int32_t *)(lVar12 + 100);
    *(int32_t *)((int64_t)pplVar8 + 0x14) = 0;
    uVar1 = *(int8_t *)(lVar12 + 0x19);
    uVar2 = *(int8_t *)(lVar12 + 0x18);
    if ((*(char *)(param_2 + 0x43) == '\0') || (*(char *)((int64_t)plVar11 + 0xf6) < '\x01')) {
      uVar7 = 0;
    }
    else {
      uVar7 = 1;
    }
    plVar6 = plVar11;
    if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
      plVar6 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
    }
    uVar4 = GenericFunction_1800f8ea0((int)plVar6[0x3f],uVar7,uVar2,uVar1);
    *(int32_t *)(pplVar8 + 0x27) = uVar4;
    *(int32_t *)((int64_t)pplVar8 + 0x11c) = *(int32_t *)(plVar11[0x4d] + 0x14);
    pplStack_e0 = pplVar8;
    (*(code *)(*pplVar8)[5])(pplVar8);
    GenericFunction_1800f8e20(plVar11,&pplStack_e0);
    plStack_c0 = plVar11;
    (**(code **)(*plVar11 + 0x28))(plVar11);
    plStack_c0 = *(int64_t **)(param_2 + 0x38);
    *(int64_t **)(param_2 + 0x38) = plVar11;
    if (plStack_c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_c0 + 0x38))();
    }
    pplStack_b8 = pplVar8;
    SystemSecurity_Manager(param_2 + 0x50,&pplStack_b8);
    bVar3 = true;
    (*(code *)(*pplVar8)[7])(pplVar8);
  }
  bVar19 = false;
  iVar14 = (int)(*(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x40) -
                 *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x38) >> 4);
  lStack_d8 = (int64_t)iVar14;
  plVar11 = plStack_f8;
  if (0 < iVar14) {
    lStack_f0 = 0;
    do {
      lVar12 = *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x38);
      plVar6 = *(int64_t **)(lStack_f0 + lVar12);
      plStack_108 = plVar6;
      if (plVar11 == (int64_t *)0x0) {
        lVar18 = 0;
      }
      else {
        plVar9 = (int64_t *)GenericFunction_1800f8dd0(plVar11,&plStack_b0);
        bVar20 = true;
        bVar19 = true;
        lVar18 = *plVar9;
      }
      if (bVar19) {
        bVar20 = false;
        bVar19 = false;
        if (plStack_b0 != (int64_t *)0x0) {
          (**(code **)(*plStack_b0 + 0x38))();
        }
      }
      if (((*(byte *)(lStack_f0 + 8 + lVar12) & 1) == 0) ||
         (iVar14 = *(int *)(SYSTEM_STATE_MANAGER + 0x620), iVar14 == -1)) {
LAB_1800f3c54:
        plStack_110 = (int64_t *)0x0;
        pplStack_e8 = &plStack_110;
        CoreEngine_080810(plVar6 + 0x23,&plStack_110);
        if (plStack_110 != (int64_t *)0x0) {
          (**(code **)(*plStack_110 + 0x38))();
        }
      }
      else {
        if (iVar14 == 0) {
          uVar5 = *(uint *)(plVar6 + 0x20) >> 4;
        }
        else {
          if (iVar14 != 1) goto LAB_1800f3c54;
          uVar5 = *(uint *)(plVar6 + 0x20) >> 0x16;
        }
        if ((uVar5 & 1) == 0) goto LAB_1800f3c54;
        plVar11 = plVar6;
        if ((*(byte *)((int64_t)plVar6 + 0xfd) & 0x20) == 0) {
          plVar11 = (int64_t *)Function_4c4a6726(plVar6[0x36]);
        }
        plStack_100 = (int64_t *)0x0;
        if (bVar3) {
          uVar7 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x140,8,3);
          plVar9 = (int64_t *)
                   RenderingSystem_09740(uVar7,*(int32_t *)(lVar18 + 0x18),
                                 *(int32_t *)((int64_t)plVar11 + 0x2fc),stack_special_x_18,
                                 *(int32_t *)(lVar18 + 0x24));
          if (plVar9 != (int64_t *)0x0) {
            plStack_a8 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          plStack_a8 = (int64_t *)0x0;
          *(int32_t *)((int64_t)plVar9 + 0x8c) = *(int32_t *)(plVar11[0x4d] + 100);
          *(int32_t *)(plVar9 + 0x11) = *(int32_t *)(plVar11[0x4d] + 0x60);
          *(int8_t *)((int64_t)plVar9 + 0x13c) = *(int8_t *)(lVar18 + 0x13c);
          *(int32_t *)((int64_t)plVar9 + 0x14) = 1;
          *(int32_t *)(plVar9 + 0x27) = 0;
          *(int32_t *)((int64_t)plVar9 + 0x11c) = *(int32_t *)(lVar18 + 0x11c);
          plStack_100 = plVar9;
          if ((char)plVar11[0x5f] == '\0') {
            plStack_108 = (int64_t *)plVar11[0x5e];
            lVar18 = (int64_t)*(int *)((int64_t)plVar11 + 0x2fc);
            lStack_78 = param_1 + 0x2b8;
            local_var_70 = 0;
            AcquireSRWLockExclusive(lStack_78);
            local_var_70 = 1;
            *(int8_t *)(param_1 + 2) = 1;
            *(int64_t **)(*(int64_t *)(*(int64_t *)(param_1 + 0x160) + lVar18 * 8) + 0x20) =
                 plVar11;
            lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x160) + lVar18 * 8);
            plVar9 = (int64_t *)*plStack_108;
            if (plVar9 != (int64_t *)0x0) {
              plStack_a0 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
            }
            plStack_a0 = *(int64_t **)(lVar12 + 8);
            *(int64_t **)(lVar12 + 8) = plVar9;
            if (plStack_a0 != (int64_t *)0x0) {
              (**(code **)(*plStack_a0 + 0x38))();
            }
            lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x160) + lVar18 * 8);
            plVar9 = (int64_t *)plStack_108[1];
            if (plVar9 != (int64_t *)0x0) {
              plStack_98 = plVar9;
              (**(code **)(*plVar9 + 0x28))(plVar9);
            }
            plStack_98 = *(int64_t **)(lVar12 + 0x10);
            *(int64_t **)(lVar12 + 0x10) = plVar9;
            if (plStack_98 != (int64_t *)0x0) {
              (**(code **)(*plStack_98 + 0x38))();
            }
            **(int8_t **)(*(int64_t *)(param_1 + 0x160) + lVar18 * 8) = 1;
            ReleaseSRWLockExclusive(param_1 + 0x2b8);
            *(int8_t *)(plVar11 + 0x5f) = 1;
            plVar9 = plStack_100;
          }
        }
        else {
          lVar12 = param_1 + 0x2b8;
          local_var_60 = 0;
          lStack_68 = lVar12;
          AcquireSRWLockExclusive(lVar12);
          local_var_60 = 1;
          lVar18 = *(int64_t *)(param_1 + 0x128);
          if (*(int64_t *)(param_1 + 0x120) == lVar18) {
            lVar18 = *(int64_t *)(param_1 + 0x1a0);
            uVar22 = *(int64_t *)(param_1 + 0x1a8) - lVar18 >> 4;
            uVar16 = (uint64_t)((int)uVar22 + 1);
            if (uVar22 < uVar16) {
              GenericFunction_1800f7100((int64_t *)(param_1 + 0x1a0),uVar16 - uVar22);
            }
            else {
              *(uint64_t *)(param_1 + 0x1a8) = uVar16 * 0x10 + lVar18;
            }
          }
          else {
            uVar22 = (uint64_t)*(int *)(lVar18 + -4);
            *(int64_t *)(param_1 + 0x128) = lVar18 + -4;
            puVar10 = (int8_t *)(uVar22 * 0x10 + *(int64_t *)(param_1 + 0x1a0));
            *puVar10 = 0;
            *(uint64_t *)(puVar10 + 4) = 0xffffffffffffffff;
            *(int32_t *)(puVar10 + 0xc) = 0;
          }
          ReleaseSRWLockExclusive(lVar12);
          plVar9 = plVar11;
          if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
            plVar9 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
          }
          GenericFunction_1800f4a20(param_1,uVar22 & 0xffffffff,(int)plVar9[0x3f]);
          bVar21 = *(byte *)((int64_t)plVar11 + 0xfd) & 0x20;
          plVar9 = plVar11;
          if (bVar21 == 0) {
            plVar9 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
          }
          if ((char)plVar9[0x5d] == '\0') {
            plVar9 = plVar11;
            plVar6 = plVar11;
            if (bVar21 == 0) {
              plVar6 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
              plVar9 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
            }
            lVar12 = plVar9[0x5c];
            plVar9 = plVar11;
            if (bVar21 == 0) {
              plVar9 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
            }
            GenericFunction_1800f45c0(param_1,*(int32_t *)((int64_t)plVar9 + 0x2ec),lVar12,plVar6);
            plVar6 = plVar11;
            if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
              plVar6 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
            }
            *(int8_t *)(plVar6 + 0x5d) = 1;
            plVar6 = plStack_108;
          }
          uVar7 = CoreSystem_LoggingManager0(system_memory_pool_ptr,0x140,8,3);
          plVar9 = (int64_t *)
                   RenderingSystem_09740(uVar7,*(int32_t *)((int64_t)plVar11 + 0x2ec),0xffffffff,
                                 stack_special_x_18,(int)uVar22);
          if (plVar9 != (int64_t *)0x0) {
            plStack_90 = plVar9;
            (**(code **)(*plVar9 + 0x28))(plVar9);
          }
          plStack_90 = (int64_t *)0x0;
          *(int32_t *)((int64_t)plVar9 + 0x8c) = *(int32_t *)(plVar6[0x4d] + 100);
          *(int32_t *)(plVar9 + 0x11) = *(int32_t *)(plVar6[0x4d] + 0x60);
          *(int32_t *)((int64_t)plVar9 + 0x11c) = *(int32_t *)(plVar6[0x4d] + 0x14);
          *(int8_t *)((int64_t)plVar9 + 0x13c) = *(int8_t *)(param_2 + 0x43);
          *(int32_t *)((int64_t)plVar9 + 0x14) = 0;
          uVar1 = *(int8_t *)(plVar6[0x4d] + 0x19);
          bVar21 = *(byte *)(plVar6[0x4d] + 0x18);
          plStackX_20 = (int64_t *)CONCAT44(plStackX_20._4_4_,(uint)bVar21);
          if ((*(char *)(param_2 + 0x43) == '\0') ||
             (uVar7 = 1, *(char *)((int64_t)plVar11 + 0xf6) < '\x01')) {
            uVar7 = 0;
          }
          uVar5 = (uint)bVar21;
          plStack_100 = plVar9;
          if ((*(byte *)((int64_t)plVar11 + 0xfd) & 0x20) == 0) {
            plVar11 = (int64_t *)Function_4c4a6726(plVar11[0x36]);
            uVar5 = (uint)plStackX_20;
          }
          uVar4 = GenericFunction_1800f8ea0((int)plVar11[0x3f],uVar7,uVar5,uVar1);
          *(int32_t *)(plVar9 + 0x27) = uVar4;
        }
        puVar23 = *(uint64_t **)(param_2 + 0x58);
        if (puVar23 < *(uint64_t **)(param_2 + 0x60)) {
          *(uint64_t **)(param_2 + 0x58) = puVar23 + 1;
          *puVar23 = plVar9;
        }
        else {
          puVar17 = *(uint64_t **)(param_2 + 0x50);
          lVar12 = (int64_t)puVar23 - (int64_t)puVar17 >> 3;
          if (lVar12 == 0) {
            lVar12 = 1;
LAB_1800f3b9f:
            puVar13 = (uint64_t *)
                      CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar12 * 8,*(int8_t *)(param_2 + 0x68));
            puVar23 = *(uint64_t **)(param_2 + 0x58);
            puVar17 = *(uint64_t **)(param_2 + 0x50);
          }
          else {
            lVar12 = lVar12 * 2;
            if (lVar12 != 0) goto LAB_1800f3b9f;
            puVar13 = (uint64_t *)0x0;
          }
          if (puVar17 != puVar23) {
// WARNING: Subroutine does not return
            memmove(puVar13,puVar17,(int64_t)puVar23 - (int64_t)puVar17);
          }
          *puVar13 = plVar9;
          if (*(int64_t *)(param_2 + 0x50) != 0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          *(uint64_t **)(param_2 + 0x50) = puVar13;
          *(uint64_t **)(param_2 + 0x58) = puVar13 + 1;
          *(uint64_t **)(param_2 + 0x60) = puVar13 + lVar12;
        }
        plStackX_20 = plVar9;
        (**(code **)(*plVar9 + 0x28))(plVar9);
        pplStack_e8 = &plStackX_20;
        CoreEngine_080810(plVar6 + 0x23,&plStackX_20);
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        (**(code **)(*plVar9 + 0x38))(plVar9);
        plVar11 = plStack_f8;
        bVar19 = bVar20;
      }
      lStack_f0 = lStack_f0 + 0x10;
      lStack_d8 = lStack_d8 + -1;
    } while (lStack_d8 != 0);
  }
  *(int8_t *)(param_2 + 0x44) = 1;
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))(plVar11);
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x0001800f3d8d)
// 函数: void GenericFunction_1800f3ce0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void GenericFunction_1800f3ce0(uint64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  int64_t **pplStackX_18;
  int64_t **pplStackX_20;
  *(uint64_t *)(param_2 + 0x58) = *(uint64_t *)(param_2 + 0x50);
  lVar4 = 0;
  if (*(int64_t *)(param_2 + 0x38) != 0) {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = (int64_t *)0x0;
    GenericFunction_1800f8e20(*(int64_t *)(param_2 + 0x38),&plStackX_8,param_3,param_4,0xfffffffffffffffe);
  }
  iVar2 = (int)(*(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x40) -
                *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x38) >> 4);
  lVar3 = (int64_t)iVar2;
  if (0 < iVar2) {
    pplStackX_18 = &plStackX_8;
    do {
      lVar1 = *(int64_t *)(lVar4 + *(int64_t *)(*(int64_t *)(param_2 + 0x48) + 0x38));
      pplStackX_20 = &plStackX_8;
      plStackX_8 = (int64_t *)0x0;
      pplStackX_10 = *(int64_t ***)(lVar1 + 0x118);
      *(uint64_t *)(lVar1 + 0x118) = 0;
      if (pplStackX_10 != (int64_t **)0x0) {
        (**(code **)((int64_t)*pplStackX_10 + 0x38))();
      }
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      lVar4 = lVar4 + 0x10;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address