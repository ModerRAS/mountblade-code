#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_07_part010.c - 1 个函数
// 函数: void function_4a3460(void)
void function_4a3460(void)
{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  int64_t *plStack_a0;
  int64_t *plStack_98;
  int64_t **pplStack_90;
  uint64_t local_var_88;
  int64_t **pplStack_80;
  void *plocal_var_78;
  int8_t *plocal_var_70;
  int32_t local_var_68;
  int8_t stack_array_60 [72];
  uint64_t local_var_18;
  uVar2 = system_resource_state;
  local_var_88 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_a8 = 0;
  plocal_var_78 = &memory_allocator_3480_ptr;
  plocal_var_70 = stack_array_60;
  stack_array_60[0] = 0;
  local_var_68 = 0x12;
  strcpy_s(stack_array_60,0x40,&ui_system_data_1880_ptr);
  SystemCore_GarbageCollector(uVar2,&plStack_98,&plocal_var_78,1);
  local_var_a8 = 1;
  plocal_var_78 = &system_state_ptr;
  pplStack_90 = &plStack_a0;
  plStack_a0 = plStack_98;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x28))();
  }
  plVar3 = plStack_a0;
  lVar1 = system_system_data_memory;
  pplStack_80 = &plStack_a0;
  pplStack_90 = (int64_t **)plStack_a0;
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x28))(plStack_a0);
  }
  pplStack_90 = *(int64_t ***)(lVar1 + 200);
  *(int64_t **)(lVar1 + 200) = plVar3;
  if (pplStack_90 != (int64_t **)0x0) {
    (**(code **)((int64_t)*pplStack_90 + 0x38))();
  }
  if (plStack_a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_a0 + 0x38))();
  }
  local_var_a8 = 0;
  if (plStack_98 != (int64_t *)0x0) {
    (**(code **)(*plStack_98 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// WARNING: Removing unreachable block (ram,0x0001804a391a)
// WARNING: Removing unreachable block (ram,0x0001804a3b60)
// WARNING: Removing unreachable block (ram,0x0001804a3943)
// WARNING: Removing unreachable block (ram,0x0001804a3951)
// WARNING: Removing unreachable block (ram,0x0001804a395c)
// WARNING: Removing unreachable block (ram,0x0001804a39a0)
// WARNING: Removing unreachable block (ram,0x0001804a3a4f)
// WARNING: Removing unreachable block (ram,0x0001804a3a7a)
// WARNING: Removing unreachable block (ram,0x0001804a3a55)
// WARNING: Removing unreachable block (ram,0x0001804a3a60)
// WARNING: Removing unreachable block (ram,0x0001804a3a6c)
// WARNING: Removing unreachable block (ram,0x0001804a3a73)
// WARNING: Removing unreachable block (ram,0x0001804a3a7c)
// WARNING: Removing unreachable block (ram,0x0001804a3a84)
// WARNING: Removing unreachable block (ram,0x0001804a39ae)
// WARNING: Removing unreachable block (ram,0x0001804a39b0)
// WARNING: Removing unreachable block (ram,0x0001804a39b3)
// WARNING: Removing unreachable block (ram,0x0001804a39b8)
// WARNING: Removing unreachable block (ram,0x0001804a39bf)
// WARNING: Removing unreachable block (ram,0x0001804a39c6)
// WARNING: Removing unreachable block (ram,0x0001804a39d1)
// WARNING: Removing unreachable block (ram,0x0001804a39db)
// WARNING: Removing unreachable block (ram,0x0001804a39e2)
// WARNING: Removing unreachable block (ram,0x0001804a39f0)
// WARNING: Removing unreachable block (ram,0x0001804a39fc)
// WARNING: Removing unreachable block (ram,0x0001804a3a03)
// WARNING: Removing unreachable block (ram,0x0001804a3aa7)
// WARNING: Removing unreachable block (ram,0x0001804a3abf)
// WARNING: Removing unreachable block (ram,0x0001804a3aba)
// WARNING: Removing unreachable block (ram,0x0001804a3a0b)
// WARNING: Removing unreachable block (ram,0x0001804a3a15)
// WARNING: Removing unreachable block (ram,0x0001804a3a1b)
// WARNING: Removing unreachable block (ram,0x0001804a3a21)
// WARNING: Removing unreachable block (ram,0x0001804a3a30)
// WARNING: Removing unreachable block (ram,0x0001804a3a3c)
// WARNING: Removing unreachable block (ram,0x0001804a3a43)
// WARNING: Removing unreachable block (ram,0x0001804a3a47)
// WARNING: Removing unreachable block (ram,0x0001804a3a8d)
// WARNING: Removing unreachable block (ram,0x0001804a3a90)
// WARNING: Removing unreachable block (ram,0x0001804a3ad3)
// WARNING: Removing unreachable block (ram,0x0001804a3ae0)
// WARNING: Removing unreachable block (ram,0x0001804a3b78)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_4a35c0(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int iVar2;
  int32_t uVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int8_t *puVar6;
  uint64_t ****ppppuVar7;
  uint64_t *puVar8;
  uint64_t ***pppuVar9;
  int iVar10;
  int64_t lVar11;
  void *puVar12;
  int64_t lVar13;
  int iVar14;
  uint uVar15;
  void *plocal_var_158;
  int8_t *plocal_var_150;
  int32_t local_var_148;
  uint64_t local_var_140;
  uint64_t ***ppplocal_var_138;
  uint64_t ***ppplocal_var_130;
  uint64_t *plocal_var_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int32_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  int32_t local_var_f8;
  uint64_t local_var_f0;
  uint64_t local_var_e8;
  uint64_t local_var_e0;
  int32_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  int8_t stack_array_78 [16];
  int8_t stack_array_68 [16];
  int8_t stack_array_58 [16];
  int8_t stack_array_48 [16];
  local_var_80 = 0xfffffffffffffffe;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(int64_t *)param_2 = param_2;
  *(int64_t *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  iVar2 = system_system_memory;
  local_var_108 = 1;
  uVar15 = 0;
  if (0 < system_system_memory) {
    do {
      puVar4 = (uint64_t *)0x180c95e98;
      puVar8 = system_system_memory;
      if (system_system_memory == (uint64_t *)0x0) {
LAB_1804a3679:
        puVar4 = (uint64_t *)0x180c95e98;
      }
      else {
        do {
          if (*(uint *)(puVar8 + 4) < uVar15) {
            puVar8 = (uint64_t *)*puVar8;
          }
          else {
            puVar4 = puVar8;
            puVar8 = (uint64_t *)puVar8[1];
          }
        } while (puVar8 != (uint64_t *)0x0);
        if ((puVar4 == (uint64_t *)0x180c95e98) || (uVar15 < *(uint *)(puVar4 + 4)))
        goto LAB_1804a3679;
      }
      lVar5 = puVar4[5];
      uVar1 = *(uint64_t *)(lVar5 + 0xa78);
      iVar14 = 0;
      iVar10 = *(int *)(lVar5 + 0x3b0);
      if (0 < iVar10) {
        do {
          lVar13 = (int64_t)iVar10;
          if (0 < iVar10) {
            lVar11 = 0;
            do {
              local_var_d0 = *(uint64_t *)(*(int64_t *)(lVar5 + 0x3a8) + 0x40 + lVar11);
              local_var_c8 = 3;
              function_4a5c60(param_2,stack_array_68,&local_var_d0);
              lVar11 = lVar11 + 0x48;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
            iVar10 = *(int *)(lVar5 + 0x3b0);
          }
          iVar14 = iVar14 + 1;
        } while (iVar14 < iVar10);
      }
      lVar13 = *(int64_t *)(lVar5 + 0xa20);
      if (lVar13 != *(int64_t *)(lVar5 + 0xa28)) {
        do {
          local_var_c0 = *(uint64_t *)(lVar13 + 0x28);
          local_var_b8 = 3;
          function_4a5c60(param_2,stack_array_58,&local_var_c0);
          local_var_b0 = *(uint64_t *)(lVar13 + 0x20);
          local_var_a8 = 3;
          function_4a5c60(param_2,stack_array_48,&local_var_b0);
          lVar13 = lVar13 + 0x50;
        } while (lVar13 != *(int64_t *)(lVar5 + 0xa28));
      }
      lVar13 = *(int64_t *)(lVar5 + 0xa40);
      if (lVar13 != *(int64_t *)(lVar5 + 0xa48)) {
        do {
          local_var_a0 = *(uint64_t *)(lVar13 + 0x28);
          local_var_98 = 3;
          function_4a5c60(param_2,&local_var_f0,&local_var_a0);
          local_var_90 = *(uint64_t *)(lVar13 + 0x20);
          local_var_88 = 3;
          function_4a5c60(param_2,&plocal_var_158,&local_var_90);
          lVar13 = lVar13 + 0x50;
        } while (lVar13 != *(int64_t *)(lVar5 + 0xa48));
      }
      local_var_f8 = 5;
      local_var_100 = uVar1;
      function_4a5c60(param_2,stack_array_78,&local_var_100);
      uVar15 = uVar15 + 1;
    } while ((int)uVar15 < iVar2);
  }
  local_var_110 = 3;
  ppplocal_var_138 = &ppplocal_var_138;
  ppplocal_var_130 = &ppplocal_var_138;
  plocal_var_128 = (uint64_t *)0x0;
  local_var_120 = 0;
  local_var_118 = 0;
  lVar5 = (**(code **)(system_system_data_memory + 0x2c0))(*(int32_t *)(system_system_data_memory + 0x10));
  puVar12 = &system_buffer_ptr;
  if (*(void **)(lVar5 + 8) != (void *)0x0) {
    puVar12 = *(void **)(lVar5 + 8);
  }
  plocal_var_158 = &system_data_buffer_ptr;
  local_var_140 = 0;
  plocal_var_150 = (int8_t *)0x0;
  local_var_148 = 0;
  if (puVar12 != (void *)0x0) {
    lVar5 = -1;
    do {
      lVar13 = lVar5;
      lVar5 = lVar13 + 1;
    } while (puVar12[lVar5] != '\0');
    if ((int)lVar5 != 0) {
      iVar10 = (int)lVar13 + 2;
      iVar2 = iVar10;
      if (iVar10 < 0x10) {
        iVar2 = 0x10;
      }
      puVar6 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar2,0x13);
      *puVar6 = 0;
      plocal_var_150 = puVar6;
      uVar3 = CoreEngineSystemCleanup(puVar6);
      local_var_140 = CONCAT44(local_var_140._4_4_,uVar3);
// WARNING: Subroutine does not return
      memcpy(puVar6,puVar12,iVar10);
    }
  }
  local_var_148 = 0;
  local_var_f0 = 0;
  local_var_e8 = 0;
  local_var_e0 = 0;
  local_var_d8 = 3;
  ppppuVar7 = (uint64_t ****)ppplocal_var_130;
  if ((uint64_t ****)ppplocal_var_130 != &ppplocal_var_138) {
    do {
      pppuVar9 = (uint64_t ***)&system_buffer_ptr;
      if (ppppuVar7[5] != (uint64_t ***)0x0) {
        pppuVar9 = ppppuVar7[5];
      }
      local_var_100 = function_2abc50(system_resource_state + 0x1d0,pppuVar9);
      local_var_f8 = 3;
      function_4a5c60(param_2,stack_array_78,&local_var_100);
      ppppuVar7 = (uint64_t ****)SystemFunction_00018066bd70(ppppuVar7);
    } while (ppppuVar7 != &ppplocal_var_138);
  }
  puVar8 = plocal_var_128;
  plocal_var_158 = &system_data_buffer_ptr;
  if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_150 = (int8_t *)0x0;
  local_var_140 = local_var_140 & 0xffffffff00000000;
  plocal_var_158 = &system_state_ptr;
  if (plocal_var_128 == (uint64_t *)0x0) {
    return param_2;
  }
  function_05d260(&ppplocal_var_138,*plocal_var_128);
  puVar8[4] = &system_data_buffer_ptr;
  if (puVar8[5] == 0) {
    puVar8[5] = 0;
    *(int32_t *)(puVar8 + 7) = 0;
    puVar8[4] = &system_state_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_4a3c40(uint64_t param_1,int64_t param_2)
{
  byte bVar1;
  uint64_t *puVar2;
  uint uVar3;
  int64_t lVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  byte *pbVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t uVar12;
  int64_t *plVar13;
  int64_t *plVar14;
  uint64_t *puVar15;
  int iVar16;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int32_t extraout_XMM0_Da_03;
  int32_t extraout_XMM0_Da_04;
  int32_t extraout_XMM0_Da_05;
  int32_t extraout_XMM0_Da_06;
  int32_t extraout_XMM0_Da_07;
  char acStackX_18 [8];
  char acStackX_20 [8];
  char cStack_b8;
  char cStack_b7;
  char cStack_b6;
  char cStack_b5;
  char cStack_b4;
  char cStack_b3;
  char acStack_b2 [2];
  int iStack_b0;
  uint local_var_ac;
  int32_t local_var_a8;
  int iStack_a4;
  int64_t lStack_a0;
  int64_t lStack_98;
  uint64_t *plocal_var_90;
  uint64_t *plocal_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  void *plocal_var_70;
  int64_t lStack_68;
  int64_t alStack_50 [2];
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  local_var_a8 = 0;
  lVar4 = (**(code **)(system_system_data_memory + 0x2d0))(*(int32_t *)(system_system_data_memory + 0x10));
  puVar10 = &system_buffer_ptr;
  if (*(void **)(lVar4 + 8) != (void *)0x0) {
    puVar10 = *(void **)(lVar4 + 8);
  }
  CoreMemoryPoolValidator(&plocal_var_70,puVar10);
  plocal_var_90 = (uint64_t *)0x0;
  plocal_var_88 = (uint64_t *)0x0;
  local_var_80 = 0;
  local_var_78 = 3;
  *(uint64_t *)(param_2 + 0x18) = 0;
  *(int32_t *)(param_2 + 0x28) = 3;
  *(int64_t *)param_2 = param_2;
  *(int64_t *)(param_2 + 8) = param_2;
  *(uint64_t *)(param_2 + 0x10) = 0;
  *(int8_t *)(param_2 + 0x18) = 0;
  *(uint64_t *)(param_2 + 0x20) = 0;
  local_var_a8 = 1;
  puVar8 = plocal_var_90;
  puVar5 = plocal_var_90;
  puVar2 = plocal_var_88;
  if (lStack_68 != 0) {
    CoreSystem_DataCollector(&plocal_var_70,&plocal_var_90,&system_data_d36c);
    puVar8 = plocal_var_90;
    puVar5 = plocal_var_90;
    puVar2 = plocal_var_88;
  }
  for (; puVar11 = plocal_var_88, puVar15 = plocal_var_90, puVar8 != plocal_var_88; puVar8 = puVar8 + 4) {
    plocal_var_90 = puVar5;
    plocal_var_88 = puVar2;
    if (*(int *)(puVar8 + 2) != 0) {
      function_057b00(param_2,alStack_50,puVar8);
    }
    puVar5 = plocal_var_90;
    puVar2 = plocal_var_88;
    plocal_var_88 = puVar11;
    plocal_var_90 = puVar15;
  }
  local_var_ac = 0;
  iStack_a4 = system_system_memory;
  puVar8 = plocal_var_90;
  if (0 < system_system_memory) {
    do {
      plocal_var_88 = puVar2;
      plocal_var_90 = puVar5;
      puVar5 = (uint64_t *)0x180c95e98;
      puVar8 = system_system_memory;
      if (system_system_memory == (uint64_t *)0x0) {
LAB_1804a3d89:
        puVar5 = (uint64_t *)0x180c95e98;
      }
      else {
        do {
          if (*(uint *)(puVar8 + 4) < local_var_ac) {
            puVar8 = (uint64_t *)*puVar8;
          }
          else {
            puVar5 = puVar8;
            puVar8 = (uint64_t *)puVar8[1];
          }
        } while (puVar8 != (uint64_t *)0x0);
        if ((puVar5 == (uint64_t *)0x180c95e98) || (local_var_ac < *(uint *)(puVar5 + 4)))
        goto LAB_1804a3d89;
      }
      lStack_a0 = puVar5[5];
      lStack_98 = *(int64_t *)(lStack_a0 + 0x388);
      alStack_50[0] = *(int64_t *)(lStack_a0 + 0x398);
      iStack_b0 = 0;
      if (0 < *(int *)(lStack_a0 + 0x380)) {
        plVar14 = (int64_t *)(*(int64_t *)(lStack_a0 + 0x378) + 0x40);
        do {
          lVar4 = 6;
          plVar13 = plVar14;
          do {
            lVar7 = *plVar13;
            if (lVar7 != 0) {
              lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
              CoreEngineDataTransformer(lVar6 + 0x20,lVar7 + 0x1f0);
              lVar7 = SystemCore_SecurityValidator(param_2,acStackX_18,lVar6 + 0x20);
              if (acStackX_18[0] != '\0') {
                if (lVar7 == param_2) goto LAB_1804a3e6f;
                if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a3e67;
                if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a3e6f;
                pbVar9 = *(byte **)(lVar7 + 0x28);
                lVar4 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
                goto LAB_1804a3e50;
              }
              function_05d1f0(extraout_XMM0_Da,lVar6);
            }
            plVar13 = plVar13 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          iStack_b0 = iStack_b0 + 1;
          plVar14 = plVar14 + 0x32;
        } while (iStack_b0 < *(int *)(lStack_a0 + 0x380));
      }
      iStack_b0 = 0;
      if (0 < *(int *)(lStack_a0 + 0x390)) {
        plVar14 = (int64_t *)(lStack_98 + 0x40);
        do {
          lVar4 = 6;
          plVar13 = plVar14;
          do {
            lVar7 = *plVar13;
            if (lVar7 != 0) {
              lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
              CoreEngineDataTransformer(lVar6 + 0x20,lVar7 + 0x1f0);
              lVar7 = SystemCore_SecurityValidator(param_2,acStackX_20,lVar6 + 0x20);
              if (acStackX_20[0] != '\0') {
                if (lVar7 == param_2) goto LAB_1804a3f7f;
                if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a3f77;
                if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a3f7f;
                pbVar9 = *(byte **)(lVar7 + 0x28);
                lVar4 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
                goto LAB_1804a3f60;
              }
              function_05d1f0(extraout_XMM0_Da_00,lVar6);
            }
            plVar13 = plVar13 + 1;
            lVar4 = lVar4 + -1;
          } while (lVar4 != 0);
          iStack_b0 = iStack_b0 + 1;
          plVar14 = plVar14 + 0x32;
        } while (iStack_b0 < *(int *)(lStack_a0 + 0x390));
      }
      lVar4 = lStack_a0;
      iVar16 = 0;
      if (0 < *(int *)(lStack_a0 + 0x3a0)) {
        plVar14 = (int64_t *)(alStack_50[0] + 0x20);
        do {
          lVar7 = *plVar14;
          if (lVar7 != 0) {
            lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
            CoreEngineDataTransformer(lVar6 + 0x20,lVar7 + 0x1f0);
            lVar7 = SystemCore_SecurityValidator(param_2,&cStack_b8,lVar6 + 0x20);
            if (cStack_b8 != '\0') {
              if (lVar7 == param_2) goto LAB_1804a407f;
              if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a4077;
              if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a407f;
              pbVar9 = *(byte **)(lVar7 + 0x28);
              lVar4 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
              goto LAB_1804a4060;
            }
            function_05d1f0(extraout_XMM0_Da_01,lVar6);
          }
          iVar16 = iVar16 + 1;
          plVar14 = plVar14 + 0xb;
        } while (iVar16 < *(int *)(lVar4 + 0x3a0));
      }
      plVar14 = (int64_t *)(lVar4 + 0x2a0);
      lVar4 = 3;
      do {
        lVar7 = *plVar14;
        if ((lVar7 != 0) && (*(int *)(lVar7 + 0x200) != 0)) {
          lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
          CoreEngineDataTransformer(lVar6 + 0x20,lVar7 + 0x1f0);
          lVar7 = SystemCore_SecurityValidator(param_2,&cStack_b7,lVar6 + 0x20);
          if (cStack_b7 != '\0') {
            if (lVar7 == param_2) goto LAB_1804a415f;
            if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a4157;
            if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a415f;
            pbVar9 = *(byte **)(lVar7 + 0x28);
            lVar4 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
            goto LAB_1804a4140;
          }
          function_05d1f0(extraout_XMM0_Da_02,lVar6);
        }
        lVar7 = lStack_a0;
        plVar14 = plVar14 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
      lVar4 = *(int64_t *)(lStack_a0 + 0x2b8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
        CoreEngineDataTransformer(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = SystemCore_SecurityValidator(param_2,&cStack_b6,lVar6 + 0x20);
        if (cStack_b6 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a422f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4227;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a422f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
          goto LAB_1804a4210;
        }
        function_05d1f0(extraout_XMM0_Da_03,lVar6);
      }
      lVar4 = *(int64_t *)(lVar7 + 0x2c0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
        CoreEngineDataTransformer(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = SystemCore_SecurityValidator(param_2,&cStack_b5,lVar6 + 0x20);
        if (cStack_b5 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a42ef;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a42e7;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a42ef;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
          goto LAB_1804a42d0;
        }
        function_05d1f0(extraout_XMM0_Da_04,lVar6);
      }
      lVar4 = *(int64_t *)(lVar7 + 0x2c8);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
        CoreEngineDataTransformer(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = SystemCore_SecurityValidator(param_2,&cStack_b4,lVar6 + 0x20);
        if (cStack_b4 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a43af;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a43a7;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a43af;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
          goto LAB_1804a4390;
        }
        function_05d1f0(extraout_XMM0_Da_05,lVar6);
      }
      lVar4 = *(int64_t *)(lVar7 + 0x2d0);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar6 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
        CoreEngineDataTransformer(lVar6 + 0x20,lVar4 + 0x1f0);
        lVar4 = SystemCore_SecurityValidator(param_2,&cStack_b3,lVar6 + 0x20);
        if (cStack_b3 != '\0') {
          if (lVar4 == param_2) goto LAB_1804a446f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4467;
          if (*(int *)(lVar6 + 0x30) == 0) goto LAB_1804a446f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar7 = *(int64_t *)(lVar6 + 0x28) - (int64_t)pbVar9;
          goto LAB_1804a4450;
        }
        function_05d1f0(extraout_XMM0_Da_06,lVar6);
      }
      lVar4 = *(int64_t *)(lVar7 + 0x370);
      if ((lVar4 != 0) && (*(int *)(lVar4 + 0x200) != 0)) {
        lVar7 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_2 + 0x28));
        CoreEngineDataTransformer(lVar7 + 0x20,lVar4 + 0x1f0);
        lVar4 = SystemCore_SecurityValidator(param_2,acStack_b2,lVar7 + 0x20);
        if (acStack_b2[0] != '\0') {
          if (lVar4 == param_2) goto LAB_1804a452f;
          if (*(int *)(lVar4 + 0x30) == 0) goto LAB_1804a4527;
          if (*(int *)(lVar7 + 0x30) == 0) goto LAB_1804a452f;
          pbVar9 = *(byte **)(lVar4 + 0x28);
          lVar6 = *(int64_t *)(lVar7 + 0x28) - (int64_t)pbVar9;
          goto LAB_1804a4510;
        }
        function_05d1f0(extraout_XMM0_Da_07,lVar7);
      }
      local_var_ac = local_var_ac + 1;
      puVar5 = plocal_var_90;
      puVar2 = plocal_var_88;
      puVar8 = plocal_var_90;
      puVar15 = plocal_var_90;
      puVar11 = plocal_var_88;
    } while ((int)local_var_ac < iStack_a4);
  }
  for (; plocal_var_88 = puVar2, plocal_var_90 = puVar5, puVar8 != puVar11; puVar8 = puVar8 + 4) {
    (**(code **)*puVar8)(puVar8,0);
    puVar5 = plocal_var_90;
    puVar2 = plocal_var_88;
  }
  if (puVar15 == (uint64_t *)0x0) {
    plocal_var_70 = &system_data_buffer_ptr;
    if (lStack_68 == 0) {
      return param_2;
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar15);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a3e50:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a3e67:
    uVar12 = 1;
  }
  else {
LAB_1804a3e6f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a3f60:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a3f77:
    uVar12 = 1;
  }
  else {
LAB_1804a3f7f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4060:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4077:
    uVar12 = 1;
  }
  else {
LAB_1804a407f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4140:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar4];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4157:
    uVar12 = 1;
  }
  else {
LAB_1804a415f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar7,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4210:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4227:
    uVar12 = 1;
  }
  else {
LAB_1804a422f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a42d0:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a42e7:
    uVar12 = 1;
  }
  else {
LAB_1804a42ef:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4390:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a43a7:
    uVar12 = 1;
  }
  else {
LAB_1804a43af:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4450:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar7];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4467:
    uVar12 = 1;
  }
  else {
LAB_1804a446f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar6,lVar4,param_2,uVar12);
  while (pbVar9 = pbVar9 + 1, uVar3 != 0) {
LAB_1804a4510:
    bVar1 = *pbVar9;
    uVar3 = (uint)pbVar9[lVar6];
    if (bVar1 != uVar3) break;
  }
  if ((int)(bVar1 - uVar3) < 1) {
LAB_1804a4527:
    uVar12 = 1;
  }
  else {
LAB_1804a452f:
    uVar12 = 0;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar7,lVar4,param_2,uVar12);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address