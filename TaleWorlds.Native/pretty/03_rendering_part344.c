n//  的语义化别名
#define SystemCore_DecryptionManager
// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
// 03_rendering_part344.c - 13 个函数
// 函数: void function_4508a0(int64_t param_1)
void function_4508a0(int64_t param_1)
{
  int iVar1;
  uint64_t local_var_b8;
  int32_t local_var_b0;
  int32_t local_var_ac;
  int16_t local_var_a8;
  int8_t local_var_a6;
  int32_t local_var_a4;
  int8_t local_var_a0;
  uint64_t local_var_98;
  int64_t lStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  uint64_t local_var_68;
  int32_t local_var_60;
  int32_t local_var_5c;
  int16_t local_var_58;
  int8_t local_var_56;
  int32_t local_var_54;
  int8_t local_var_50;
  uint64_t local_var_48;
  int64_t lStack_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  if (param_1 != 0) {
    local_var_18 = 0xfffffffffffffffe;
    function_3986d0(param_1 + 0x607e0);
    local_var_68 = 0;
    local_var_60 = 0;
    local_var_5c = 0xffffffff;
    local_var_58 = 1;
    local_var_56 = 0;
    local_var_54 = 0xffffffff;
    local_var_50 = 1;
    local_var_48 = 0;
    lStack_40 = 0;
    local_var_38 = 0;
    local_var_30 = 0;
    local_var_28 = 3;
    local_var_20 = 0;
    function_1a3620(param_1,&local_var_68);
    function_0b6620();
    local_var_b8 = 0;
    local_var_b0 = 0;
    local_var_ac = 0xffffffff;
    local_var_a6 = 0;
    local_var_a4 = 0xffffffff;
    local_var_a0 = 1;
    local_var_98 = 0;
    lStack_90 = 0;
    local_var_88 = 0;
    local_var_80 = 0;
    local_var_78 = 3;
    local_var_70 = 0;
    local_var_a8 = 1;
    do {
      iVar1 = function_1a3620(param_1,&local_var_b8);
    } while (iVar1 != 0);
    if (lStack_90 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    if (lStack_40 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// 函数: void function_4509e0(uint64_t param_1,uint64_t param_2)
void function_4509e0(uint64_t param_1,uint64_t param_2)
{
  uint64_t astack_special_x_8 [4];
  astack_special_x_8[0] = param_2;
  function_1a9fd0(param_1,astack_special_x_8);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_450a20(int64_t param_1,int64_t param_2)
void function_450a20(int64_t param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uVar8 = 0xfffffffffffffffe;
  plVar6 = *(int64_t **)(param_1 + 0x60858);
  if (plVar6 != *(int64_t **)(param_1 + 0x60860)) {
    do {
      plVar1 = (int64_t *)*plVar6;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (int64_t *)0x0;
      plVar5 = *(int64_t **)(param_2 + 0x18);
      if (plVar5 < *(int64_t **)(param_2 + 0x20)) {
        *(int64_t **)(param_2 + 0x18) = plVar5 + 1;
        *plVar5 = (int64_t)plVar1;
      }
      else {
        plVar3 = *(int64_t **)(param_2 + 0x10);
        lVar4 = (int64_t)plVar5 - (int64_t)plVar3 >> 3;
        if (lVar4 == 0) {
          lVar4 = 1;
LAB_180450ac1:
          plVar2 = (int64_t *)
                   CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar4 * 8,*(int8_t *)(param_2 + 0x28),0,uVar8);
          plVar5 = *(int64_t **)(param_2 + 0x18);
          plVar3 = *(int64_t **)(param_2 + 0x10);
          plVar7 = plVar2;
        }
        else {
          lVar4 = lVar4 * 2;
          plVar7 = plVar2;
          if (lVar4 != 0) goto LAB_180450ac1;
        }
        for (; plVar3 != plVar5; plVar3 = plVar3 + 1) {
          *plVar2 = *plVar3;
          *plVar3 = 0;
          plVar2 = plVar2 + 1;
        }
        *plVar2 = (int64_t)plVar1;
        plVar1 = *(int64_t **)(param_2 + 0x18);
        plVar5 = *(int64_t **)(param_2 + 0x10);
        if (plVar5 != plVar1) {
          do {
            if ((int64_t *)*plVar5 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar1);
          plVar5 = *(int64_t **)(param_2 + 0x10);
        }
        if (plVar5 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plVar5);
        }
        *(int64_t **)(param_2 + 0x10) = plVar7;
        *(int64_t **)(param_2 + 0x18) = plVar2 + 1;
        *(int64_t **)(param_2 + 0x20) = plVar7 + lVar4;
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(int64_t **)(param_1 + 0x60860));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_450ba0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_450ba0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t *plVar11;
  int64_t *plStack_60;
  uint64_t local_var_58;
  int64_t *plStack_48;
  function_1c2360(param_1 + 0x60830,&plStack_60,param_3,param_4,0xfffffffffffffffe);
  uVar8 = local_var_58;
  plVar11 = plStack_48;
  do {
    if (uVar8 == *(uint64_t *)(param_1 + 0x60838)) {
      return;
    }
    if (plVar11 != (int64_t *)0x0) {
      (**(code **)(*plVar11 + 0x28))(plVar11);
    }
    puVar2 = (uint64_t *)0x0;
    puVar9 = *(uint64_t **)(param_2 + 0x18);
    if (puVar9 < *(uint64_t **)(param_2 + 0x20)) {
      *(uint64_t **)(param_2 + 0x18) = puVar9 + 1;
      *puVar9 = plVar11;
    }
    else {
      puVar3 = *(uint64_t **)(param_2 + 0x10);
      lVar6 = (int64_t)puVar9 - (int64_t)puVar3 >> 3;
      if (lVar6 == 0) {
        lVar6 = 1;
LAB_180450c6c:
        puVar2 = (uint64_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,*(int8_t *)(param_2 + 0x28));
        puVar9 = *(uint64_t **)(param_2 + 0x18);
        puVar3 = *(uint64_t **)(param_2 + 0x10);
        puVar10 = puVar2;
      }
      else {
        lVar6 = lVar6 * 2;
        puVar10 = puVar2;
        if (lVar6 != 0) goto LAB_180450c6c;
      }
      for (; puVar3 != puVar9; puVar3 = puVar3 + 1) {
        *puVar2 = *puVar3;
        *puVar3 = 0;
        puVar2 = puVar2 + 1;
      }
      *puVar2 = plVar11;
      plVar1 = *(int64_t **)(param_2 + 0x18);
      plVar7 = *(int64_t **)(param_2 + 0x10);
      if (plVar7 != plVar1) {
        do {
          if ((int64_t *)*plVar7 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar7 + 0x38))();
          }
          plVar7 = plVar7 + 1;
        } while (plVar7 != plVar1);
        plVar7 = *(int64_t **)(param_2 + 0x10);
      }
      if (plVar7 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar7);
      }
      *(uint64_t **)(param_2 + 0x10) = puVar10;
      *(uint64_t **)(param_2 + 0x18) = puVar2 + 1;
      *(uint64_t **)(param_2 + 0x20) = puVar10 + lVar6;
    }
    lVar6 = *plStack_60;
    do {
      uVar8 = uVar8 + 1;
      lVar4 = (uVar8 & 0xffffffff) * 0x10;
      lVar5 = lVar4 + 8 + lVar6;
      if ((*(uint64_t *)(lVar4 + lVar6) & 0xffffffff00000000) == 0) {
        lVar5 = 0;
      }
      if (lVar5 != 0) {
        plVar11 = *(int64_t **)(lVar6 + 8 + (uVar8 & 0xffffffff) * 0x10);
        break;
      }
    } while (uVar8 != plStack_60[1]);
  } while( true );
}
// 函数: void function_450d90(void)
void function_450d90(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
uint64_t function_450f10(int64_t param_1,int64_t param_2)
{
  byte *pbVar1;
  int iVar2;
  int64_t lVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  byte *pbVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  if ((*(int *)(param_1 + 0x3c) < *(int *)(param_1 + 0x38)) &&
     (lVar3 = *(int64_t *)(param_2 + 0x10), lVar3 != 0)) {
    if (((*(uint *)(param_1 + 0xc) & *(uint *)(param_2 + 0x18)) == 0) &&
       ((*(char *)(param_1 + 0x10) == '\0' || (*(uint *)(param_2 + 0x18) != 0)))) {
      bVar5 = false;
    }
    else {
      bVar5 = true;
    }
    if ((!bVar5) && ((*(byte *)(lVar3 + 0x2e8) & 0xb) == 0xb)) {
      lVar11 = *(int64_t *)(lVar3 + 0x200);
      iVar9 = 0;
      if (*(int64_t *)(lVar3 + 0x208) - lVar11 >> 3 != 0) {
        lVar10 = 0;
        do {
          pcVar4 = *(char **)(*(int64_t *)(lVar10 + lVar11) + 0x10);
          if (*pcVar4 != '\0') {
            iVar2 = *(int *)(pcVar4 + 0x18);
            iVar8 = *(int *)(param_1 + 0x28);
            if (iVar2 == iVar8) {
              if (iVar2 != 0) {
                pbVar7 = *(byte **)(pcVar4 + 0x10);
                lVar11 = *(int64_t *)(param_1 + 0x20) - (int64_t)pbVar7;
                do {
                  pbVar1 = pbVar7 + lVar11;
                  iVar8 = (uint)*pbVar7 - (uint)*pbVar1;
                  if (iVar8 != 0) break;
                  pbVar7 = pbVar7 + 1;
                } while (*pbVar1 != 0);
              }
LAB_180450fed:
              if (iVar8 == 0) goto LAB_18045103e;
            }
            else if (iVar2 == 0) goto LAB_180450fed;
            cVar6 = function_063510(pcVar4 + 0x28,param_1 + 0x18);
            if (cVar6 != '\0') {
LAB_18045103e:
              *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
              return 1;
            }
          }
          lVar11 = *(int64_t *)(lVar3 + 0x200);
          iVar9 = iVar9 + 1;
          lVar10 = lVar10 + 8;
        } while ((uint64_t)(int64_t)iVar9 <
                 (uint64_t)(*(int64_t *)(lVar3 + 0x208) - lVar11 >> 3));
      }
    }
  }
  return 0;
}
// 函数: void function_451050(int64_t param_1)
void function_451050(int64_t param_1)
{
  *(uint64_t *)(param_1 + 0x18) = &system_data_buffer_ptr;
  if (*(int64_t *)(param_1 + 0x20) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(param_1 + 0x20) = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  *(uint64_t *)(param_1 + 0x18) = &system_state_ptr;
  return;
}
// 函数: void function_4510a0(void)
void function_4510a0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// 函数: void function_4511e0(void)
void function_4511e0(void)
{
// WARNING: Subroutine does not return
  SystemCore_MemoryManager0();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4512f0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void function_4512f0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int32_t uVar6;
  int64_t lVar7;
  int8_t *puVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  int64_t lVar12;
  uint64_t *puVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int8_t stack_array_1e8 [32];
  int iStack_1c8;
  void *plocal_var_1b8;
  int8_t *plocal_var_1b0;
  uint local_var_1a8;
  uint64_t local_var_1a0;
  int32_t local_var_198;
  void *plocal_var_190;
  int8_t *plocal_var_188;
  uint local_var_180;
  uint64_t local_var_178;
  void *plocal_var_170;
  int64_t lStack_168;
  int iStack_160;
  int32_t local_var_158;
  int64_t lStack_150;
  uint64_t local_var_148;
  void *plocal_var_140;
  int64_t lStack_138;
  int iStack_130;
  int32_t local_var_128;
  void *plocal_var_120;
  int64_t lStack_118;
  int32_t local_var_108;
  uint64_t local_var_100;
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [136];
  uint64_t local_var_58;
  local_var_100 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1e8;
  puVar8 = (int8_t *)0x0;
  uVar11 = 0;
  local_var_198 = 0;
  plocal_var_f8 = &memory_allocator_3432_ptr;
  plocal_var_f0 = stack_array_e0;
  local_var_e8 = 0;
  stack_array_e0[0] = 0;
  lStack_150 = param_1;
  local_var_148 = param_3;
  if (param_2 != 0) {
    lVar7 = -1;
    do {
      lVar7 = lVar7 + 1;
    } while (*(char *)(param_2 + lVar7) != '\0');
    local_var_e8 = (int32_t)lVar7;
    strcpy_s(stack_array_e0,0x80,param_2);
  }
  function_19e140(&plocal_var_170,&plocal_var_f8);
  plocal_var_f8 = &system_state_ptr;
  plocal_var_190 = &system_data_buffer_ptr;
  local_var_178 = 0;
  plocal_var_188 = (int8_t *)0x0;
  local_var_180 = 0;
  CoreMemoryPoolValidator(&plocal_var_120,param_2);
  lVar7 = *system_main_module_state;
  iVar4 = function_1426a0(lVar7,&plocal_var_120);
  if (iVar4 < 0) {
LAB_180451418:
    lVar7 = MemoryDebugger0();
  }
  else {
    if ((uint64_t)(*(int64_t *)(lVar7 + 0x890) - *(int64_t *)(lVar7 + 0x888) >> 5) <=
        (uint64_t)(int64_t)iVar4) goto LAB_180451418;
    lVar7 = (int64_t)iVar4 * 0x20 + *(int64_t *)(lVar7 + 0x888);
  }
  plocal_var_1b8 = &system_data_buffer_ptr;
  local_var_1a0 = 0;
  plocal_var_1b0 = (int8_t *)0x0;
  local_var_1a8 = 0;
  local_var_198 = 1;
  uVar2 = *(uint *)(lVar7 + 0x10);
  uVar14 = (uint64_t)uVar2;
  uVar5 = 0;
  if (*(int64_t *)(lVar7 + 8) == 0) {
LAB_180451498:
    uVar11 = uVar5;
    if (uVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar8,*(uint64_t *)(lVar7 + 8),uVar14);
    }
  }
  else if (uVar2 != 0) {
    iVar4 = uVar2 + 1;
    if ((int)(uVar2 + 1) < 0x10) {
      iVar4 = 0x10;
    }
    puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
    *puVar8 = 0;
    plocal_var_1b0 = puVar8;
    uVar5 = CoreEngineSystemCleanup(puVar8);
    local_var_1a0 = CONCAT44(local_var_1a0._4_4_,uVar5);
    goto LAB_180451498;
  }
  if (puVar8 != (int8_t *)0x0) {
    puVar8[uVar14] = 0;
  }
  local_var_1a0 = CONCAT44(*(uint *)(lVar7 + 0x1c),(int32_t)local_var_1a0);
  if (iStack_160 < 1) {
    uVar14 = 0;
    local_var_1a8 = 0;
    local_var_198 = 0;
    plocal_var_1b0 = (int8_t *)0x0;
    local_var_1a0 = 0;
    plocal_var_1b8 = &system_state_ptr;
    plocal_var_188 = puVar8;
    local_var_180 = uVar2;
    local_var_178._0_4_ = uVar11;
    local_var_178._4_4_ = *(uint *)(lVar7 + 0x1c);
    CoreMemoryPoolValidator(&plocal_var_140,param_4);
    lVar7 = lStack_150;
    if (0 < iStack_130) {
      iVar4 = (int)((*(int64_t *)(render_system_data_memory + 0x3a8) - *(int64_t *)(render_system_data_memory + 0x3a0))
                   / 0x348);
      if (0 < iVar4) {
        puVar13 = (uint64_t *)(*(int64_t *)(render_system_data_memory + 0x3a0) + 0x10);
        uVar15 = uVar14;
        do {
          iVar3 = *(int *)(puVar13 + 1);
          iStack_1c8 = (int)uVar15;
          iVar10 = iStack_130;
          if (iVar3 == iStack_130) {
            if (iVar3 != 0) {
              pbVar9 = (byte *)*puVar13;
              lVar12 = lStack_138 - (int64_t)pbVar9;
              do {
                pbVar1 = pbVar9 + lVar12;
                iVar10 = (uint)*pbVar9 - (uint)*pbVar1;
                if (iVar10 != 0) break;
                pbVar9 = pbVar9 + 1;
              } while (*pbVar1 != 0);
            }
LAB_18045165d:
            if (iVar10 == 0) goto LAB_18045167c;
          }
          else if (iVar3 == 0) goto LAB_18045165d;
          uVar15 = (uint64_t)(iStack_1c8 + 1);
          uVar14 = uVar14 + 1;
          puVar13 = puVar13 + 0x69;
        } while ((int64_t)uVar14 < (int64_t)iVar4);
      }
    }
    iStack_1c8 = -1;
LAB_18045167c:
    *(int8_t *)(lStack_150 + 0x607d0) = 1;
    function_1a6440(lStack_150,render_system_data_memory,&plocal_var_190,local_var_148);
    *(int8_t *)(lVar7 + 0x607d0) = 0;
    function_19e260(lVar7);
    function_1b3e70(lVar7);
    plocal_var_140 = &system_data_buffer_ptr;
    if (lStack_138 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_138 = 0;
    local_var_128 = 0;
    plocal_var_140 = &system_state_ptr;
    plocal_var_120 = &system_data_buffer_ptr;
    if (lStack_118 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_118 = 0;
    local_var_108 = 0;
    plocal_var_120 = &system_state_ptr;
    plocal_var_190 = &system_data_buffer_ptr;
    if (plocal_var_188 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_188 = (int8_t *)0x0;
    local_var_178 = (uint64_t)local_var_178._4_4_ << 0x20;
    plocal_var_190 = &system_state_ptr;
    plocal_var_170 = &system_data_buffer_ptr;
    if (lStack_168 == 0) {
      lStack_168 = 0;
      local_var_158 = 0;
      plocal_var_170 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_58 ^ (uint64_t)stack_array_1e8);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  iVar4 = uVar2 + iStack_160;
  local_var_1a8 = uVar2;
  if (iVar4 != 0) {
    if (puVar8 == (int8_t *)0x0) {
      iVar4 = iVar4 + 1;
      if (iVar4 < 0x10) {
        iVar4 = 0x10;
      }
      puVar8 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
      *puVar8 = 0;
    }
    else {
      if (iVar4 + 1U <= uVar11) goto LAB_180451541;
      iStack_1c8 = CONCAT31(iStack_1c8._1_3_,0x13);
      puVar8 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar8,iVar4 + 1U,0x10);
    }
    plocal_var_1b0 = puVar8;
    uVar6 = CoreEngineSystemCleanup(puVar8);
    local_var_1a0 = CONCAT44(local_var_1a0._4_4_,uVar6);
  }
LAB_180451541:
// WARNING: Subroutine does not return
  memcpy(puVar8 + uVar14,lStack_168,(int64_t)(iStack_160 + 1));
}
// 函数: void function_451770(int32_t param_1,uint64_t *param_2)
void function_451770(int32_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_48 [64];
  puVar2 = (uint64_t *)function_1ac640(param_1,stack_array_48);
  uVar1 = puVar2[1];
  *param_2 = *puVar2;
  param_2[1] = uVar1;
  uVar1 = puVar2[3];
  param_2[2] = puVar2[2];
  param_2[3] = uVar1;
  uVar1 = puVar2[5];
  param_2[4] = puVar2[4];
  param_2[5] = uVar1;
  uVar1 = puVar2[7];
  param_2[6] = puVar2[6];
  param_2[7] = uVar1;
  return;
}
uint64_t function_4517c0(int64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t uVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  float fVar5;
  uint64_t stack_special_x_8;
  int iStackX_20;
  int iStackX_24;
  float fStack_18;
  float fStack_14;
  uint64_t local_var_10;
  uint64_t extraout_XMM0_Qb;
  lVar1 = *(int64_t *)(param_1 + 0x2908);
  if (lVar1 == 0) {
    return 0;
  }
  local_var_10 = param_2;
  if (*(char *)(lVar1 + 0x68) != '\0') {
    fVar5 = 1.0 / *(float *)(lVar1 + 0x58);
    fStack_14 = (float)((uint64_t)param_2 >> 0x20);
    fStack_18 = (float)param_2;
    auVar3._0_8_ = (**(code **)(**(int64_t **)(lVar1 + 0x50) + 8))
                             (*(int64_t **)(lVar1 + 0x50),
                              fVar5 * fStack_14 * (float)*(int *)(lVar1 + 0x60),
                              fVar5 * fStack_18 * (float)*(int *)(lVar1 + 0x60));
    auVar3._8_8_ = extraout_XMM0_Qb;
    auVar4._4_12_ = auVar3._4_12_;
    auVar4._0_4_ = (float)auVar3._0_8_ + *(float *)(lVar1 + 0x5c);
    return auVar4._0_8_;
  }
  stack_special_x_8 = 0;
  lVar1 = function_3a5130(lVar1,&local_var_10,&iStackX_20,&stack_special_x_8);
// WARNING: Could not recover jumptable at 0x000180451874. Too many branches
// WARNING: Treating indirect jump as call
  uVar2 = (**(code **)(**(int64_t **)(lVar1 + 0x60) + 8))
                    (*(int64_t **)(lVar1 + 0x60),(float)iStackX_24 + stack_special_x_8._4_4_,
                     (float)iStackX_20 + (float)stack_special_x_8);
  return uVar2;
}
uint64_t * function_451890(uint64_t *param_1,int64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t astack_special_x_8 [4];
  int8_t stack_array_18 [16];
  if (*(int64_t *)(param_2 + 0x2908) != 0) {
    astack_special_x_8[0] = param_3;
    puVar2 = (uint64_t *)function_3a5440(*(int64_t *)(param_2 + 0x2908),stack_array_18,astack_special_x_8,0);
    uVar1 = puVar2[1];
    *param_1 = *puVar2;
    param_1[1] = uVar1;
    return param_1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_4519d0(int64_t param_1,int64_t param_2,int64_t param_3,int32_t param_4)
void function_4519d0(int64_t param_1,int64_t param_2,int64_t param_3,int32_t param_4)
{
  uint *puVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  uint64_t in_R9;
  int8_t astack_special_x_8 [8];
  int64_t *plVar6;
  uint64_t uVar7;
  int64_t *plVar8;
  void *plocal_var_80;
  int64_t lStack_78;
  code *pcStack_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  int64_t lStack_58;
  if (param_1 != 0) {
    uVar7 = 0xfffffffffffffffe;
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_2 + lVar3) != '\0');
    if (lVar3 != 0) {
      uVar4 = CoreMemoryPoolValidator(&plocal_var_80,param_2,param_3,in_R9,astack_special_x_8,0xfffffffffffffffe);
      uVar4 = SystemCore_GarbageCollector(system_resource_state,astack_special_x_8,uVar4,1);
      function_3aef00(param_1 + 0x3018,uVar4);
      plocal_var_80 = &system_data_buffer_ptr;
      if (lStack_78 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_78 = 0;
      local_var_68 = (code *)((uint64_t)local_var_68._4_4_ << 0x20);
      plocal_var_80 = &system_state_ptr;
    }
    lVar3 = -1;
    do {
      lVar3 = lVar3 + 1;
    } while (*(char *)(param_3 + lVar3) != '\0');
    if (lVar3 != 0) {
      uVar4 = CoreMemoryPoolValidator(&plocal_var_60,param_3);
      plVar5 = (int64_t *)SystemCore_GarbageCollector(system_resource_state,astack_special_x_8,uVar4,1);
      plVar2 = (int64_t *)*plVar5;
      plVar8 = plVar5;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x28))(plVar2);
      }
      plVar6 = *(int64_t **)(param_1 + 0x3190);
      *(int64_t **)(param_1 + 0x3190) = plVar2;
      if (plVar6 != (int64_t *)0x0) {
        (**(code **)(*plVar6 + 0x38))();
      }
      if (*(int64_t *)(param_1 + 0x3190) != 0) {
        puVar1 = (uint *)(*(int64_t *)(param_1 + 0x3190) + 0x328);
        *puVar1 = *puVar1 | 0x20000000;
        plocal_var_80 = (void *)0x0;
        lStack_78 = 0;
        pcStack_70 = (code *)0x0;
        local_var_68 = _guard_check_icall;
        SystemCore_DecryptionManager(*(uint64_t *)(param_1 + 0x3190),0,0xffffffff,&plocal_var_80,plVar6,uVar7,plVar8
                     );
        if (pcStack_70 != (code *)0x0) {
          (*pcStack_70)(&plocal_var_80,0,0);
        }
      }
      *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
      if ((int64_t *)*plVar5 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar5 + 0x38))();
      }
      plocal_var_60 = &system_data_buffer_ptr;
      if (lStack_58 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
    *(int32_t *)(param_1 + 0x3198) = param_4;
    *(uint *)(param_1 + 0x3324) = *(uint *)(param_1 + 0x3324) & 0xfffffffb;
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
  }
  return;
}
// 函数: void function_451bd0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_451bd0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t local_var_58;
  int32_t local_var_50;
  int32_t local_var_4c;
  int16_t local_var_48;
  int8_t local_var_46;
  int32_t local_var_44;
  int8_t local_var_40;
  uint64_t local_var_38;
  int64_t lStack_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  uint64_t local_var_10;
  if (param_1 != 0) {
    local_var_58 = 0;
    local_var_50 = 0;
    local_var_4c = 0xffffffff;
    local_var_48 = 1;
    local_var_46 = 0;
    local_var_44 = 0xffffffff;
    local_var_40 = 1;
    local_var_38 = 0;
    lStack_30 = 0;
    local_var_28 = 0;
    local_var_20 = 0;
    local_var_18 = 3;
    local_var_10 = 0;
    function_1a3620(0,&local_var_58,param_3,param_4,0xfffffffffffffffe);
    if (lStack_30 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
int32_t function_451ca0(int64_t param_1,int32_t *param_2,int32_t param_3)
{
  int32_t uVar1;
  int32_t local_var_68;
  int32_t local_var_64;
  int32_t local_var_60;
  int32_t local_var_5c;
  int8_t stack_array_58 [16];
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  int32_t local_var_28;
  char cStack_24;
  if (param_1 != 0) {
    local_var_48 = 0;
    local_var_40 = 0x7f7fffff3f800000;
    local_var_38 = 0;
    local_var_30 = 0;
    cStack_24 = '\0';
    local_var_68 = *param_2;
    local_var_64 = param_2[1];
    local_var_60 = param_2[2];
    local_var_5c = param_2[3];
    local_var_28 = 0;
    PhysicsSystem_JointManager(local_var_68,&local_var_68,0,stack_array_58,param_3,1);
    uVar1 = 0;
    if (cStack_24 != '\0') {
      uVar1 = local_var_28;
    }
    return uVar1;
  }
  return 0;
}
int32_t function_451cc5(uint64_t param_1,int32_t *param_2,int32_t param_3)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int64_t in_RAX;
  int32_t in_XMM0_Dc;
  int32_t in_XMM0_Dd;
  int32_t unaff_XMM6_Da;
  int32_t uVar4;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t local_var_70;
  char cStack0000000000000074;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int *)(in_RAX + -0x38) = (int)param_1;
  *(int *)(in_RAX + -0x34) = (int)((uint64_t)param_1 >> 0x20);
  *(int32_t *)(in_RAX + -0x30) = in_XMM0_Dc;
  *(int32_t *)(in_RAX + -0x2c) = in_XMM0_Dd;
  *(int8_t *)(in_RAX + -0x24) = 0;
  uVar4 = *param_2;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(int32_t *)(in_RAX + -0x28) = 0;
  *(int32_t *)(in_RAX + -0x78) = param_3;
  *(int32_t *)(in_RAX + -0x68) = uVar4;
  *(int32_t *)(in_RAX + -100) = uVar1;
  *(int32_t *)(in_RAX + -0x60) = uVar2;
  *(int32_t *)(in_RAX + -0x5c) = uVar3;
  PhysicsSystem_JointManager(uVar4,in_RAX + -0x68,0);
  uVar4 = 0;
  if (cStack0000000000000074 != '\0') {
    uVar4 = local_var_70;
  }
  return uVar4;
}
uint64_t function_451d13(void)
{
  return 0;
}
int32_t
function_451d20(int64_t param_1,int32_t *param_2,uint64_t *param_3,int32_t param_4)
{
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int8_t stack_array_48 [16];
  uint64_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  int8_t local_var_14;
  if (param_1 != 0) {
    local_var_38 = 0;
    local_var_30 = 0x7f7fffff3f800000;
    local_var_28 = 0;
    local_var_20 = 0;
    local_var_14 = 0;
    local_var_58 = *param_2;
    local_var_54 = param_2[1];
    local_var_50 = param_2[2];
    local_var_4c = param_2[3];
    local_var_18 = 0;
    PhysicsSystem_JointManager(local_var_58,&local_var_58,0,stack_array_48,param_4,1);
    *param_3 = local_var_38;
    param_3[1] = local_var_30;
    return local_var_18;
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_451da0(int64_t param_1,int32_t *param_2,int32_t *param_3)
void function_451da0(int64_t param_1,int32_t *param_2,int32_t *param_3)
{
  int8_t stack_array_c8 [32];
  int8_t *plocal_var_a8;
  uint64_t local_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  int8_t stack_array_68 [64];
  int32_t local_var_28;
  uint64_t local_var_18;
  local_var_98 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  local_var_28 = 0;
  if (param_1 != 0) {
    local_var_90 = *param_3;
    local_var_8c = param_3[1];
    local_var_88 = param_3[2];
    local_var_84 = param_3[3];
    local_var_80 = *param_2;
    local_var_7c = param_2[1];
    local_var_78 = param_2[2];
    local_var_74 = param_2[3];
    plocal_var_a8 = stack_array_68;
    function_1ab110(local_var_90,&local_var_80,&local_var_90);
  }
  local_var_28 = 0;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address