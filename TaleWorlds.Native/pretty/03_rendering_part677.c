#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part677.c - 6 个函数
// 函数: void function_656610(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_656610(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  uint local_var_20;
  int32_t local_var_14;
  uVar2 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&plocal_var_30);
  uVar1 = (uint64_t)local_var_20;
  if (lStack_28 != 0) {
    SystemManager_ConfigManager0(param_1 + 0x10,uVar1);
  }
  if (local_var_20 != 0) {
// WARNING: Subroutine does not return
    memcpy(*(uint64_t *)(param_1 + 0x18),lStack_28,uVar1,param_4,uVar2);
  }
  *(int32_t *)(param_1 + 0x20) = 0;
  if (*(int64_t *)(param_1 + 0x18) != 0) {
    *(int8_t *)(uVar1 + *(int64_t *)(param_1 + 0x18)) = 0;
  }
  *(int32_t *)(param_1 + 0x2c) = local_var_14;
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(lStack_28,lStack_28);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_6566c0(int64_t param_1)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  puVar1 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x20,8,3);
  *puVar1 = &system_state_ptr;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar1[3] = 0;
  puVar1[1] = 0;
  *(int32_t *)(puVar1 + 2) = 0;
  if (param_1 != 0) {
    uVar2 = 0xffffffffffffffff;
    do {
      uVar3 = uVar2;
      uVar2 = uVar3 + 1;
    } while (*(char *)(param_1 + uVar2) != '\0');
    SystemManager_ConfigManager0(puVar1,uVar2 & 0xffffffff);
    if ((int)uVar2 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar1[1],param_1,(int)uVar3 + 2);
    }
    *(int32_t *)(puVar1 + 2) = 0;
    if ((int8_t *)puVar1[1] != (int8_t *)0x0) {
      *(int8_t *)puVar1[1] = 0;
    }
  }
  return puVar1;
}
uint64_t *
function_656730(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x17;
  strcpy_s(param_2[1],0x80,&ui_system_data_1640_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
uint64_t *
function_6567c0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x11;
  strcpy_s(param_2[1],0x80,&ui_system_data_1664_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_656840(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_656840(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_657620(param_1,render_system_memory,param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_656870(int64_t *param_1)
void function_656870(int64_t *param_1)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  char cVar5;
  int64_t lVar6;
  int64_t *plVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint64_t *puVar10;
  byte *pbVar11;
  int iVar12;
  uint64_t uVar13;
  int iVar14;
  int64_t *plVar15;
  int64_t lVar16;
  uint64_t uVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint64_t uVar20;
  int64_t *plVar21;
  uint uVar22;
  int64_t lVar23;
  int64_t *plStackX_8;
  void *plocal_var_b8;
  byte *pbStack_b0;
  uint local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int8_t *plocal_var_90;
  uint local_var_88;
  uint64_t local_var_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  int32_t local_var_60;
  uint64_t *plocal_var_58;
  uint64_t *plocal_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  render_system_memory = param_1;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 8))();
  }
  plStack_78 = (int64_t *)0x0;
  plStack_70 = (int64_t *)0x0;
  uVar20 = 0;
  plStack_68 = (int64_t *)0x0;
  local_var_60 = 3;
  function_657040(&plStack_78);
  plVar21 = plStack_70;
  if (render_system_memory != (int64_t *)0x0) {
    plocal_var_58 = (uint64_t *)0x0;
    plocal_var_50 = (uint64_t *)0x0;
    local_var_48 = 0;
    local_var_40 = 3;
    (**(code **)(*render_system_memory + 0x18))(render_system_memory,&plocal_var_58);
    puVar10 = plocal_var_58;
    puVar3 = plocal_var_50;
    plVar21 = plStack_70;
    if ((int64_t)plocal_var_50 - (int64_t)plocal_var_58 >> 5 != 0) {
      plStackX_8 = plStack_70;
      plVar15 = plStack_68;
      uVar13 = uVar20;
      plVar7 = plStack_70;
      do {
        puVar10 = plocal_var_58;
        plocal_var_b8 = &system_data_buffer_ptr;
        local_var_a0 = 0;
        pbStack_b0 = (int8_t *)0x0;
        local_var_a8 = 0;
        SystemManager_ConfigManager0(&plocal_var_b8,*(int32_t *)(uVar20 + 0x10 + (int64_t)plocal_var_58));
        iVar14 = *(int *)(uVar20 + 0x10 + (int64_t)puVar10);
        if (iVar14 != 0) {
// WARNING: Subroutine does not return
          memcpy(pbStack_b0,*(uint64_t *)(uVar20 + 8 + (int64_t)puVar10),iVar14 + 1);
        }
        if (*(int64_t *)(uVar20 + 8 + (int64_t)puVar10) != 0) {
          local_var_a8 = 0;
          if (pbStack_b0 != (int8_t *)0x0) {
            *pbStack_b0 = 0;
          }
          local_var_a0 = local_var_a0 & 0xffffffff;
        }
        plocal_var_98 = &system_data_buffer_ptr;
        local_var_80 = 0;
        plocal_var_90 = (int8_t *)0x0;
        local_var_88 = 0;
        SystemManager_ConfigManager0(&plocal_var_98,local_var_a8);
        if (local_var_a8 != 0) {
// WARNING: Subroutine does not return
          memcpy(plocal_var_90,pbStack_b0,local_var_a8 + 1);
        }
        if (pbStack_b0 != (int8_t *)0x0) {
          local_var_88 = 0;
          if (plocal_var_90 != (int8_t *)0x0) {
            *plocal_var_90 = 0;
          }
          local_var_80 = local_var_80 & 0xffffffff;
        }
        iVar14 = local_var_88 + 0xe;
        SystemManager_ConfigManager0(&plocal_var_98,iVar14);
        puVar10 = (uint64_t *)(plocal_var_90 + local_var_88);
        *puVar10 = 0x75646f4d6275532f;
        *(int32_t *)(puVar10 + 1) = 0x782e656c;
        *(int16_t *)((int64_t)puVar10 + 0xc) = 0x6c6d;
        *(int8_t *)((int64_t)puVar10 + 0xe) = 0;
        local_var_88 = iVar14;
        cVar5 = RenderingSystem_RenderQueue(&plocal_var_98);
        plVar21 = plVar7;
        if (cVar5 != '\0') {
          lVar6 = function_657fa0(&plocal_var_98);
          if (plVar7 < plVar15) {
            plVar21 = plVar7 + 1;
            *plVar7 = lVar6;
            plStackX_8 = plVar21;
            plStack_70 = plVar21;
          }
          else {
            lVar23 = (int64_t)plVar7 - (int64_t)plStack_78;
            lVar16 = lVar23 >> 3;
            if (lVar16 == 0) {
              lVar16 = 1;
LAB_180656abd:
              plVar7 = (int64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar16 * 8,(int8_t)local_var_60);
            }
            else {
              lVar16 = lVar16 * 2;
              if (lVar16 != 0) goto LAB_180656abd;
              plVar7 = (int64_t *)0x0;
            }
            if (plStack_78 != plStackX_8) {
// WARNING: Subroutine does not return
              memmove(plVar7,plStack_78,lVar23);
            }
            *plVar7 = lVar6;
            plVar21 = plVar7 + 1;
            plStackX_8 = plVar21;
            if (plStack_78 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngine_MemoryPoolManager();
            }
            plVar15 = plVar7 + lVar16;
            plStack_78 = plVar7;
            plStack_70 = plVar21;
            plStack_68 = plVar15;
          }
        }
        plocal_var_98 = &system_data_buffer_ptr;
        if (plocal_var_90 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plocal_var_90 = (int8_t *)0x0;
        local_var_80 = local_var_80 & 0xffffffff00000000;
        plocal_var_98 = &system_state_ptr;
        plocal_var_b8 = &system_data_buffer_ptr;
        if (pbStack_b0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        pbStack_b0 = (byte *)0x0;
        local_var_a0 = local_var_a0 & 0xffffffff00000000;
        plocal_var_b8 = &system_state_ptr;
        uVar22 = (int)uVar13 + 1;
        uVar13 = (uint64_t)uVar22;
        uVar20 = uVar20 + 0x20;
        plVar7 = plVar21;
        puVar10 = plocal_var_58;
        puVar3 = plocal_var_50;
      } while ((uint64_t)(int64_t)(int)uVar22 <
               (uint64_t)((int64_t)plocal_var_50 - (int64_t)plocal_var_58 >> 5));
    }
    for (; puVar4 = plocal_var_50, puVar10 != plocal_var_50; puVar10 = puVar10 + 4) {
      plocal_var_50 = puVar3;
      (**(code **)*puVar10)(puVar10,0);
      puVar3 = plocal_var_50;
      plocal_var_50 = puVar4;
    }
    if (plocal_var_58 != (uint64_t *)0x0) {
      plocal_var_50 = puVar3;
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    plocal_var_58 = (uint64_t *)0x0;
    plocal_var_50 = puVar3;
  }
  iVar14 = 0;
  uVar20 = (int64_t)plVar21 - (int64_t)plStack_78 >> 3;
  plVar21 = plStack_78;
  if (uVar20 != 0) {
    do {
      uVar13 = 0;
      pbVar8 = &system_data_67e0;
      lVar6 = *plVar21;
      plocal_var_b8 = &system_data_buffer_ptr;
      local_var_a0 = 0;
      pbStack_b0 = (byte *)0x0;
      local_var_a8 = 0;
      SystemManager_ConfigManager0(&plocal_var_b8,*(int32_t *)(lVar6 + 0x10));
      if (*(int *)(lVar6 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(pbStack_b0,*(uint64_t *)(lVar6 + 8),*(int *)(lVar6 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar6 + 8) != 0) {
        local_var_a8 = 0;
        if (pbStack_b0 != (byte *)0x0) {
          *pbStack_b0 = 0;
        }
        local_var_a0 = local_var_a0 & 0xffffffff;
      }
      uVar17 = uVar13;
      if (local_var_a8 != 0) {
        do {
          if ((byte)(pbStack_b0[uVar17] + 0xbf) < 0x1a) {
            pbStack_b0[uVar17] = pbStack_b0[uVar17] + 0x20;
          }
          uVar22 = (int)uVar13 + 1;
          uVar13 = (uint64_t)uVar22;
          uVar17 = uVar17 + 1;
        } while (uVar22 < local_var_a8);
      }
      pbVar18 = render_system_memory;
      if (render_system_memory == (byte *)0x0) {
LAB_180656d5b:
        pbVar11 = &system_data_67e0;
        pbVar8 = render_system_memory;
        while (pbVar9 = pbVar11, pbVar8 != (byte *)0x0) {
          if (local_var_a8 == 0) {
            bVar2 = false;
            pbVar19 = *(byte **)(pbVar8 + 8);
          }
          else {
            if (*(int *)(pbVar8 + 0x30) == 0) {
              bVar2 = true;
            }
            else {
              pbVar11 = pbStack_b0;
              do {
                pbVar19 = pbVar11 + (*(int64_t *)(pbVar8 + 0x28) - (int64_t)pbStack_b0);
                uVar22 = (uint)*pbVar11 - (uint)*pbVar19;
                pbVar18 = (byte *)(uint64_t)uVar22;
                if (uVar22 != 0) break;
                pbVar11 = pbVar11 + 1;
              } while (*pbVar19 != 0);
              bVar2 = 0 < (int)uVar22;
              if ((int)uVar22 < 1) {
                pbVar19 = *(byte **)(pbVar8 + 8);
                goto LAB_180656dbb;
              }
            }
            pbVar19 = *(byte **)pbVar8;
          }
LAB_180656dbb:
          pbVar11 = pbVar8;
          pbVar8 = pbVar19;
          if (bVar2) {
            pbVar11 = pbVar9;
          }
        }
        if (pbVar9 == &system_data_67e0) {
LAB_180656df9:
          puVar10 = (uint64_t *)function_6576d0(&plocal_var_b8,&plStackX_8,pbVar18,pbVar9,&plocal_var_b8);
          pbVar9 = (byte *)*puVar10;
        }
        else if (*(int *)(pbVar9 + 0x30) != 0) {
          if (local_var_a8 != 0) {
            pbVar8 = *(byte **)(pbVar9 + 0x28);
            lVar16 = (int64_t)pbStack_b0 - (int64_t)pbVar8;
            do {
              pbVar11 = pbVar8 + lVar16;
              uVar22 = (uint)*pbVar8 - (uint)*pbVar11;
              pbVar18 = (byte *)(uint64_t)uVar22;
              if (uVar22 != 0) break;
              pbVar8 = pbVar8 + 1;
            } while (*pbVar11 != 0);
            if ((int)uVar22 < 1) goto LAB_180656e11;
          }
          goto LAB_180656df9;
        }
LAB_180656e11:
        *(int64_t *)(pbVar9 + 0x40) = lVar6;
      }
      else {
        do {
          if (local_var_a8 == 0) {
            bVar2 = false;
            pbVar11 = *(byte **)(pbVar18 + 8);
          }
          else {
            if (*(int *)(pbVar18 + 0x30) == 0) {
              bVar2 = true;
            }
            else {
              pbVar11 = pbStack_b0;
              do {
                uVar22 = (uint)pbVar11[*(int64_t *)(pbVar18 + 0x28) - (int64_t)pbStack_b0];
                iVar12 = *pbVar11 - uVar22;
                if (*pbVar11 != uVar22) break;
                pbVar11 = pbVar11 + 1;
              } while (uVar22 != 0);
              bVar2 = 0 < iVar12;
              if (iVar12 < 1) {
                pbVar11 = *(byte **)(pbVar18 + 8);
                goto LAB_180656d07;
              }
            }
            pbVar11 = *(byte **)pbVar18;
          }
LAB_180656d07:
          if (bVar2) {
            pbVar18 = pbVar8;
          }
          pbVar8 = pbVar18;
          pbVar18 = pbVar11;
        } while (pbVar11 != (byte *)0x0);
        pbVar18 = (byte *)0x0;
        if (pbVar8 == &system_data_67e0) goto LAB_180656d5b;
        if (*(int *)(pbVar8 + 0x30) != 0) {
          if (local_var_a8 != 0) {
            pbVar8 = *(byte **)(pbVar8 + 0x28);
            pbVar18 = pbStack_b0 + -(int64_t)pbVar8;
            do {
              bVar1 = *pbVar8;
              uVar22 = (uint)pbVar8[(int64_t)pbVar18];
              if (bVar1 != uVar22) break;
              pbVar8 = pbVar8 + 1;
            } while (uVar22 != 0);
            if ((int)(bVar1 - uVar22) < 1) goto LAB_180656e1e;
          }
          goto LAB_180656d5b;
        }
      }
LAB_180656e1e:
      plocal_var_b8 = &system_data_buffer_ptr;
      if (pbStack_b0 != (byte *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      pbStack_b0 = (byte *)0x0;
      local_var_a0 = local_var_a0 & 0xffffffff00000000;
      plocal_var_b8 = &system_state_ptr;
      iVar14 = iVar14 + 1;
      plVar21 = plVar21 + 1;
    } while ((uint64_t)(int64_t)iVar14 < uVar20);
  }
  if (plStack_78 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(plStack_78);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_657040(uint64_t *param_1)
void function_657040(uint64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  char cVar3;
  uint64_t uVar4;
  int64_t lVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint64_t uVar12;
  int8_t stack_array_f8 [32];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  uint local_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  void *plocal_var_b0;
  int64_t lStack_a8;
  uint local_var_a0;
  int32_t local_var_98;
  uint64_t local_var_90;
  uint64_t *plocal_var_88;
  uint64_t *plocal_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  uint64_t local_var_68;
  void *plocal_var_60;
  uint64_t *plocal_var_58;
  int iStack_50;
  uint64_t stack_array_48 [2];
  uint64_t local_var_38;
  local_var_68 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_f8;
  iVar11 = 0;
  local_var_b8 = 0;
  plocal_var_60 = &system_config_ptr;
  plocal_var_58 = stack_array_48;
  stack_array_48[0] = stack_array_48[0] & 0xffffffffffffff00;
  iStack_50 = 6;
  strcpy_s(stack_array_48,0x10,&rendering_buffer_2588_ptr);
  local_var_b8 = 1;
  SystemCore_EncryptionEngine0(&plocal_var_b0,&plocal_var_60);
  local_var_b8 = 0;
  plocal_var_60 = &system_state_ptr;
  iVar9 = local_var_a0 + 8;
  SystemManager_ConfigManager0(&plocal_var_b0,iVar9);
  *(uint64_t *)((uint64_t)local_var_a0 + lStack_a8) = 0x2f73656c75646f4d;
  *(int8_t *)((uint64_t *)((uint64_t)local_var_a0 + lStack_a8) + 1) = 0;
  plocal_var_88 = (uint64_t *)0x0;
  plocal_var_80 = (uint64_t *)0x0;
  local_var_78 = 0;
  local_var_70 = 3;
  local_var_a0 = iVar9;
  function_62c5f0(&plocal_var_b0,&plocal_var_88);
  uVar12 = (int64_t)plocal_var_80 - (int64_t)plocal_var_88 >> 5;
  local_var_90 = uVar12;
  puVar7 = plocal_var_88;
  puVar8 = plocal_var_88;
  puVar6 = plocal_var_80;
  if (uVar12 != 0) {
    piVar10 = (int *)(plocal_var_88 + 2);
    do {
      plocal_var_60 = &system_data_buffer_ptr;
      stack_array_48[0] = 0;
      plocal_var_58 = (uint64_t *)0x0;
      iStack_50 = 0;
      SystemManager_ConfigManager0(&plocal_var_60,*piVar10);
      if (*piVar10 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_58,*(uint64_t *)(piVar10 + -2),*piVar10 + 1);
      }
      if (*(int64_t *)(piVar10 + -2) != 0) {
        iStack_50 = 0;
        if (plocal_var_58 != (uint64_t *)0x0) {
          *(int8_t *)plocal_var_58 = 0;
        }
        stack_array_48[0] = stack_array_48[0] & 0xffffffff;
      }
      plocal_var_d8 = &system_data_buffer_ptr;
      local_var_c0 = 0;
      plocal_var_d0 = (int8_t *)0x0;
      local_var_c8 = 0;
      SystemManager_ConfigManager0(&plocal_var_d8,iStack_50);
      if (iStack_50 != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_d0,plocal_var_58,iStack_50 + 1);
      }
      if (plocal_var_58 != (uint64_t *)0x0) {
        local_var_c8 = 0;
        if (plocal_var_d0 != (int8_t *)0x0) {
          *plocal_var_d0 = 0;
        }
        local_var_c0 = local_var_c0 & 0xffffffff;
      }
      iVar9 = local_var_c8 + 0xe;
      SystemManager_ConfigManager0(&plocal_var_d8,iVar9);
      puVar7 = (uint64_t *)(plocal_var_d0 + local_var_c8);
      *puVar7 = 0x75646f4d6275532f;
      *(int32_t *)(puVar7 + 1) = 0x782e656c;
      *(int16_t *)((int64_t)puVar7 + 0xc) = 0x6c6d;
      *(int8_t *)((int64_t)puVar7 + 0xe) = 0;
      local_var_c8 = iVar9;
      cVar3 = RenderingSystem_RenderQueue(&plocal_var_d8);
      if (cVar3 != '\0') {
        uVar4 = function_657fa0(&plocal_var_d8);
        puVar7 = (uint64_t *)param_1[1];
        if (puVar7 < (uint64_t *)param_1[2]) {
          param_1[1] = (uint64_t)(puVar7 + 1);
          *puVar7 = uVar4;
        }
        else {
          puVar8 = (uint64_t *)*param_1;
          lVar5 = (int64_t)puVar7 - (int64_t)puVar8 >> 3;
          if (lVar5 == 0) {
            lVar5 = 1;
LAB_1806572f9:
            puVar6 = (uint64_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,lVar5 * 8,(char)param_1[3]);
            puVar7 = (uint64_t *)param_1[1];
            puVar8 = (uint64_t *)*param_1;
          }
          else {
            lVar5 = lVar5 * 2;
            if (lVar5 != 0) goto LAB_1806572f9;
            puVar6 = (uint64_t *)0x0;
          }
          if (puVar8 != puVar7) {
// WARNING: Subroutine does not return
            memmove(puVar6,puVar8,(int64_t)puVar7 - (int64_t)puVar8);
          }
          *puVar6 = uVar4;
          if (*param_1 != 0) {
// WARNING: Subroutine does not return
            CoreEngine_MemoryPoolManager();
          }
          *param_1 = (uint64_t)puVar6;
          param_1[1] = (uint64_t)(puVar6 + 1);
          param_1[2] = (uint64_t)(puVar6 + lVar5);
          uVar12 = local_var_90;
        }
      }
      plocal_var_d8 = &system_data_buffer_ptr;
      if (plocal_var_d0 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      plocal_var_d0 = (int8_t *)0x0;
      local_var_c0 = local_var_c0 & 0xffffffff00000000;
      plocal_var_d8 = &system_state_ptr;
      plocal_var_60 = &system_data_buffer_ptr;
      if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      plocal_var_58 = (uint64_t *)0x0;
      stack_array_48[0] = stack_array_48[0] & 0xffffffff00000000;
      plocal_var_60 = &system_state_ptr;
      iVar11 = iVar11 + 1;
      piVar10 = piVar10 + 8;
      puVar7 = plocal_var_88;
      puVar8 = plocal_var_88;
      puVar6 = plocal_var_80;
    } while ((uint64_t)(int64_t)iVar11 < uVar12);
  }
  for (; puVar2 = plocal_var_80, puVar1 = plocal_var_88, puVar7 != plocal_var_80; puVar7 = puVar7 + 4) {
    plocal_var_88 = puVar8;
    plocal_var_80 = puVar6;
    (**(code **)*puVar7)(puVar7,0);
    puVar8 = plocal_var_88;
    puVar6 = plocal_var_80;
    plocal_var_80 = puVar2;
    plocal_var_88 = puVar1;
  }
  if (plocal_var_88 != (uint64_t *)0x0) {
    plocal_var_88 = puVar8;
    plocal_var_80 = puVar6;
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar1);
  }
  plocal_var_b0 = &system_data_buffer_ptr;
  if (lStack_a8 != 0) {
    plocal_var_88 = puVar8;
    plocal_var_80 = puVar6;
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_a8 = 0;
  local_var_98 = 0;
  plocal_var_b0 = &system_state_ptr;
  plocal_var_88 = puVar8;
  plocal_var_80 = puVar6;
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_38 ^ (uint64_t)stack_array_f8);
}
uint64_t
function_657450(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  uint64_t uVar2;
  int64_t lVar3;
  void *apstack_special_x_10 [3];
  void *plocal_var_30;
  int64_t lStack_28;
  uint local_var_20;
  SystemCore_NetworkHandler0(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  uVar1 = 0;
  if (local_var_20 != 0) {
    lVar3 = 0;
    do {
      if ((byte)(*(char *)(lStack_28 + lVar3) + 0xbfU) < 0x1a) {
        *(char *)(lStack_28 + lVar3) = *(char *)(lStack_28 + lVar3) + ' ';
      }
      uVar1 = uVar1 + 1;
      lVar3 = lVar3 + 1;
    } while (uVar1 < local_var_20);
  }
  function_657530(uVar1,apstack_special_x_10,&plocal_var_30);
  if (apstack_special_x_10[0] == &system_data_67e0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint64_t *)(apstack_special_x_10[0] + 0x40);
  }
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return uVar2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_657510(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_657510(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_657620(param_1,render_system_memory,param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_657530(uint64_t param_1,uint64_t *param_2,int64_t param_3)
{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int64_t lVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  if (render_system_memory != (uint64_t *)0x0) {
    puVar7 = render_system_memory;
    puVar10 = (uint64_t *)&system_data_67e0;
    do {
      if (*(int *)(param_3 + 0x10) == 0) {
        puVar8 = (uint64_t *)puVar7[1];
        bVar2 = false;
      }
      else {
        if (*(int *)(puVar7 + 6) == 0) {
          bVar2 = true;
        }
        else {
          pbVar3 = *(byte **)(param_3 + 8);
          lVar6 = puVar7[5] - (int64_t)pbVar3;
          do {
            uVar4 = (uint)pbVar3[lVar6];
            iVar5 = *pbVar3 - uVar4;
            if (*pbVar3 != uVar4) break;
            pbVar3 = pbVar3 + 1;
          } while (uVar4 != 0);
          bVar2 = 0 < iVar5;
          if (iVar5 < 1) {
            puVar8 = (uint64_t *)puVar7[1];
            goto LAB_1806575b7;
          }
        }
        puVar8 = (uint64_t *)*puVar7;
      }
LAB_1806575b7:
      puVar9 = puVar7;
      if (bVar2) {
        puVar9 = puVar10;
      }
      puVar7 = puVar8;
      puVar10 = puVar9;
    } while (puVar8 != (uint64_t *)0x0);
    if (puVar9 != (uint64_t *)&system_data_67e0) {
      if (*(int *)(puVar9 + 6) == 0) {
LAB_1806575f7:
        *param_2 = puVar9;
        return param_2;
      }
      if (*(int *)(param_3 + 0x10) != 0) {
        pbVar3 = (byte *)puVar9[5];
        lVar6 = *(int64_t *)(param_3 + 8) - (int64_t)pbVar3;
        do {
          bVar1 = *pbVar3;
          uVar4 = (uint)pbVar3[lVar6];
          if (bVar1 != uVar4) break;
          pbVar3 = pbVar3 + 1;
        } while (uVar4 != 0);
        if ((int)(bVar1 - uVar4) < 1) goto LAB_1806575f7;
      }
    }
  }
  *param_2 = &system_data_67e0;
  return param_2;
}
// 函数: void function_657620(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_657620(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  function_657620(&system_data_67e0,*param_2,param_3,param_4,0xfffffffffffffffe);
  param_2[4] = &system_data_buffer_ptr;
  if (param_2[5] != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  param_2[5] = 0;
  *(int32_t *)(param_2 + 7) = 0;
  param_2[4] = &system_state_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(param_2);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_6576d0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,int64_t *param_4,
             int64_t param_5)
{
  byte bVar1;
  bool bVar2;
  uint64_t *puVar3;
  int64_t *plVar4;
  byte *pbVar5;
  uint64_t *puVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t lVar9;
  int64_t *plVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  if ((param_4 == render_system_memory) || (param_4 == (int64_t *)&system_data_67e0)) {
    if ((render_system_memory != 0) && (*(int *)(param_5 + 0x10) != 0)) {
      plVar8 = render_system_memory;
      plVar10 = param_4;
      if ((int)render_system_memory[6] != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        plVar10 = (int64_t *)(render_system_memory[5] - (int64_t)pbVar5);
        do {
          bVar1 = *pbVar5;
          param_1 = (uint64_t)pbVar5[(int64_t)plVar10];
          uVar7 = (uint)pbVar5[(int64_t)plVar10];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_1806577f1;
      }
LAB_1806577d7:
      uVar11 = (uint64_t)plVar10 & 0xffffffffffffff00;
LAB_1806577da:
      if (plVar8 != (int64_t *)0x0) {
        function_657970(param_1,param_2,plVar8,uVar11,param_5);
        return param_2;
      }
    }
  }
  else {
    plVar4 = (int64_t *)Function_7bfb2422(param_4);
    if (*(int *)(param_5 + 0x10) != 0) {
      if ((int)param_4[6] != 0) {
        pbVar5 = *(byte **)(param_5 + 8);
        lVar9 = param_4[5] - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar7 = (uint)pbVar5[lVar9];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        if ((int)(bVar1 - uVar7) < 1) goto LAB_1806577f1;
      }
      if ((int)plVar4[6] != 0) {
        pbVar5 = (byte *)plVar4[5];
        plVar10 = (int64_t *)(*(int64_t *)(param_5 + 8) - (int64_t)pbVar5);
        do {
          bVar1 = *pbVar5;
          param_1 = (uint64_t)pbVar5[(int64_t)plVar10];
          uVar7 = (uint)pbVar5[(int64_t)plVar10];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        if (0 < (int)(bVar1 - uVar7)) {
          plVar8 = param_4;
          if (*param_4 == 0) goto LAB_1806577d7;
          uVar11 = CONCAT71((int7)((uint64_t)plVar10 >> 8),1);
          plVar8 = plVar4;
          goto LAB_1806577da;
        }
      }
    }
  }
LAB_1806577f1:
  bVar2 = true;
  puVar3 = (uint64_t *)&system_data_67e0;
  puVar6 = render_system_memory;
  while (puVar6 != (uint64_t *)0x0) {
    puVar3 = puVar6;
    if (*(int *)(puVar6 + 6) == 0) {
      bVar2 = false;
LAB_180657812:
      puVar6 = (uint64_t *)*puVar6;
    }
    else {
      if (*(int *)(param_5 + 0x10) == 0) {
        bVar2 = true;
      }
      else {
        pbVar5 = (byte *)puVar6[5];
        lVar9 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar5;
        do {
          bVar1 = *pbVar5;
          uVar7 = (uint)pbVar5[lVar9];
          if (bVar1 != uVar7) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar7 != 0);
        bVar2 = 0 < (int)(bVar1 - uVar7);
      }
      if (!bVar2) goto LAB_180657812;
      puVar6 = (uint64_t *)puVar6[1];
    }
  }
  puVar6 = puVar3;
  if (bVar2) {
    if (puVar3 != render_system_memory) {
      puVar6 = (uint64_t *)Function_e2d50782(puVar3);
      goto LAB_180657835;
    }
  }
  else {
LAB_180657835:
    if (*(int *)(param_5 + 0x10) == 0) {
LAB_180657941:
      *param_2 = puVar6;
      return param_2;
    }
    if (*(int *)(puVar6 + 6) != 0) {
      pbVar5 = *(byte **)(param_5 + 8);
      lVar9 = puVar6[5] - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar7 = (uint)pbVar5[lVar9];
        if (bVar1 != uVar7) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar7 != 0);
      if ((int)(bVar1 - uVar7) < 1) goto LAB_180657941;
    }
  }
  if (puVar3 != (uint64_t *)&system_data_67e0) {
    if (*(int *)(puVar3 + 6) == 0) {
LAB_1806578a7:
      uVar12 = 1;
      goto LAB_1806578f0;
    }
    if (*(int *)(param_5 + 0x10) != 0) {
      pbVar5 = (byte *)puVar3[5];
      lVar9 = *(int64_t *)(param_5 + 8) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar7 = (uint)pbVar5[lVar9];
        if (bVar1 != uVar7) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar7 != 0);
      if ((int)(bVar1 - uVar7) < 1) goto LAB_1806578a7;
    }
  }
  uVar12 = 0;
LAB_1806578f0:
  lVar9 = CoreEngine_MemoryAllocator(system_memory_pool_ptr,0x48,system_data_6808);
  SystemCore_NetworkHandler0(lVar9 + 0x20,param_5);
  *(uint64_t *)(lVar9 + 0x40) = 0;
// WARNING: Subroutine does not return
  SystemStateController(lVar9,puVar3,&system_data_67e0,uVar12);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address