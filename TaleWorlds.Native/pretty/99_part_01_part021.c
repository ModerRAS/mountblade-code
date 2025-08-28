#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
//==============================================================================
// 99_part_01_part021.c - 系统资源管理和参数处理模块
//==============================================================================
// 本模块实现系统资源管理和参数处理功能，包括：
// - 系统资源初始化和清理
// - 字符串匹配和资源查找
// - 参数处理和资源分配
// - 浮点参数处理和初始化
// - 多参数资源管理
// - 资源状态管理
// - 资源队列处理
// - 系统数据内存管理
// 主要功能：
// 1. 资源管理：管理系统资源的分配和释放
// 2. 参数处理：处理各种类型的参数
// 3. 状态管理：管理系统状态
// 4. 内存管理：管理系统内存分配
//==============================================================================
// 函数: void function_0b4ec0(uint64_t param_1,char param_2,char param_3)
// 系统资源管理函数 - 管理系统资源的初始化和清理
void SystemResource_Manager_Init_Cleanup(uint64_t param_1,char param_2,char param_3)
{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int iVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plVar12;
  int64_t lVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t uVar16;
  int8_t stack_array_c8 [32];
  char cStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  int64_t lStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  int64_t lStack_60;
  int64_t lStack_58;
  uint64_t local_var_50;
  int64_t alStack_48 [4];
  lVar4 = system_resource_state;
  local_var_50 = 0xfffffffffffffffe;
  alStack_48[3] = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  lStack_a0 = system_resource_state;
  lStack_58 = system_resource_state + 0x770;
  cStack_a8 = param_2;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_60 = lVar4 + 0x7c0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_68 = lVar4 + 0x810;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_70 = lVar4 + 0x860;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_78 = lVar4 + 0x8b0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_80 = lVar4 + 0x900;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_88 = lVar4 + 0x950;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_90 = lVar4 + 0x9a0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lStack_98 = lVar4 + 0x9f0;
  iVar5 = _Mtx_lock();
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (param_3 != '\0') {
    plVar8 = *(int64_t **)(lVar4 + 0xa8);
    for (plVar7 = *(int64_t **)(lVar4 + 0xa0); plVar7 != plVar8; plVar7 = plVar7 + 1) {
      lVar15 = *plVar7;
      if ((*(int *)(lVar15 + 0x380) == 2) && ((*(uint *)(lVar15 + 0x328) & 0x20000000) == 0)) {
        SystemCore_NetworkHandler(lVar15,0);
      }
    }
  }
  alStack_48[0] = lVar4 + 0x6c0;
  alStack_48[1] = lVar4 + 0x6e0;
  alStack_48[2] = lVar4 + 0x700;
  lVar15 = 0;
  do {
    plVar6 = (int64_t *)0x0;
    plVar8 = (int64_t *)alStack_48[lVar15];
    plVar7 = (int64_t *)plVar8[1];
    plVar9 = (int64_t *)*plVar8;
    uVar14 = (int64_t)plVar7 - (int64_t)plVar9 >> 3;
    iVar5 = (int)uVar14;
    lVar13 = (int64_t)iVar5;
    plVar12 = plVar6;
    if (0 < iVar5) {
      do {
        lVar2 = *(int64_t *)(*plVar8 + (int64_t)plVar12 * 8);
        if ((((*(int *)(lVar2 + 8) == 1) && (*(int *)(lVar2 + 0x380) == 2)) &&
            ((*(uint *)(lVar2 + 0x328) & 0x20000000) == 0)) &&
           ((*(int64_t *)(lVar2 + 0x340) + 5U <
             (uint64_t)(int64_t)*(int *)(system_main_module_state + 0x224) || (param_2 == '\0')))) {
          puVar1 = (uint64_t *)(*plVar8 + (int64_t)plVar12 * 8);
          lVar2 = *plVar8 + lVar13 * 8;
          uVar3 = *puVar1;
          *puVar1 = *(uint64_t *)(lVar2 + -8);
          *(uint64_t *)(lVar2 + -8) = uVar3;
          uVar14 = (uint64_t)((int)uVar14 - 1);
          lVar13 = lVar13 + -1;
        }
        else {
          plVar12 = (int64_t *)((int64_t)plVar12 + 1);
        }
        iVar5 = (int)uVar14;
      } while ((int64_t)plVar12 < lVar13);
      plVar7 = (int64_t *)plVar8[1];
      plVar9 = (int64_t *)*plVar8;
    }
    uVar11 = (uint64_t)iVar5;
    uVar14 = (int64_t)plVar7 - (int64_t)plVar9 >> 3;
    if (uVar14 < uVar11) {
      uVar10 = uVar11 - uVar14;
      if (uVar10 <= (uint64_t)(plVar8[2] - (int64_t)plVar7 >> 3)) {
        uVar14 = uVar10;
        if (uVar10 != 0) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            *plVar7 = 0;
            plVar7 = plVar7 + 1;
          }
          plVar7 = (int64_t *)plVar8[1];
        }
        plVar7 = plVar7 + uVar10;
        param_2 = cStack_a8;
        goto LAB_1800b5291;
      }
      uVar16 = uVar14 * 2;
      if (uVar14 == 0) {
        uVar16 = 1;
      }
      if (uVar16 < uVar11) {
        uVar16 = uVar11;
      }
      plVar12 = plVar6;
      if (uVar16 != 0) {
        plVar6 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar16 * 8,(char)plVar8[3]);
        plVar7 = (int64_t *)plVar8[1];
        plVar9 = (int64_t *)*plVar8;
        plVar12 = plVar6;
      }
      for (; plVar9 != plVar7; plVar9 = plVar9 + 1) {
        *plVar6 = *plVar9;
        *plVar9 = 0;
        plVar6 = plVar6 + 1;
      }
      uVar14 = uVar10;
      plVar7 = plVar6;
      if (uVar10 != 0) {
        for (; uVar14 != 0; uVar14 = uVar14 - 1) {
          *plVar7 = 0;
          plVar7 = plVar7 + 1;
        }
      }
      plVar7 = (int64_t *)plVar8[1];
      plVar9 = (int64_t *)*plVar8;
      if (plVar9 != plVar7) {
        do {
          if ((int64_t *)*plVar9 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar9 + 0x38))();
          }
          plVar9 = plVar9 + 1;
        } while (plVar9 != plVar7);
        plVar9 = (int64_t *)*plVar8;
      }
      if (plVar9 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(plVar9);
      }
      *plVar8 = (int64_t)plVar12;
      plVar8[1] = (int64_t)(plVar6 + uVar10);
      plVar8[2] = (int64_t)(plVar12 + uVar16);
      param_2 = cStack_a8;
    }
    else {
      plVar6 = plVar9 + uVar11;
      if (plVar6 != plVar7) {
        do {
          if ((int64_t *)*plVar6 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar6 + 0x38))();
          }
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar7);
        plVar9 = (int64_t *)*plVar8;
      }
      plVar7 = plVar9 + uVar11;
    LAB_1800b5291:
      plVar8[1] = (int64_t)plVar7;
    }
    lVar15 = lVar15 + 1;
  } while (lVar15 < 3);
  lVar15 = *(int64_t *)(lVar4 + 0x748);
  if (lVar15 != lVar4 + 0x740) {
    plVar7 = (int64_t *)0x0;
    do {
      plVar8 = *(int64_t **)(lVar15 + 0x30);
      plVar9 = *(int64_t **)(lVar15 + 0x28);
      uVar14 = (int64_t)plVar8 - (int64_t)plVar9 >> 3;
      iVar5 = (int)uVar14;
      lVar13 = (int64_t)iVar5;
      plVar6 = plVar7;
      if (0 < iVar5) {
        do {
          lVar2 = *(int64_t *)(*(int64_t *)(lVar15 + 0x28) + (int64_t)plVar6 * 8);
          if ((*(int *)(lVar2 + 8) == 1) &&
             ((*(int *)(lVar2 + 0x16c) + 5 < *(int *)(system_main_module_state + 0x224) || (param_2 == '\0')))
             ) {
            puVar1 = (uint64_t *)(*(int64_t *)(lVar15 + 0x28) + (int64_t)plVar6 * 8);
            lVar2 = *(int64_t *)(lVar15 + 0x28) + lVar13 * 8;
            uVar3 = *puVar1;
            *puVar1 = *(uint64_t *)(lVar2 + -8);
            *(uint64_t *)(lVar2 + -8) = uVar3;
            uVar14 = (uint64_t)((int)uVar14 - 1);
            lVar13 = lVar13 + -1;
          }
          else {
            plVar6 = (int64_t *)((int64_t)plVar6 + 1);
          }
          iVar5 = (int)uVar14;
        } while ((int64_t)plVar6 < lVar13);
        plVar8 = *(int64_t **)(lVar15 + 0x30);
        plVar9 = *(int64_t **)(lVar15 + 0x28);
      }
      uVar11 = (uint64_t)iVar5;
      uVar14 = (int64_t)plVar8 - (int64_t)plVar9 >> 3;
      if (uVar14 < uVar11) {
        uVar10 = uVar11 - uVar14;
        if (uVar10 <= (uint64_t)(*(int64_t *)(lVar15 + 0x38) - (int64_t)plVar8 >> 3)) {
          uVar14 = uVar10;
          if (uVar10 != 0) {
            for (; uVar14 != 0; uVar14 = uVar14 - 1) {
              *plVar8 = 0;
              plVar8 = plVar8 + 1;
            }
            plVar8 = *(int64_t **)(lVar15 + 0x30);
          }
          plVar8 = plVar8 + uVar10;
          goto LAB_1800b547f;
        }
        uVar16 = uVar14 * 2;
        if (uVar14 == 0) {
          uVar16 = 1;
        }
        if (uVar16 < uVar11) {
          uVar16 = uVar11;
        }
        plVar6 = plVar7;
        plVar12 = plVar7;
        if (uVar16 != 0) {
          plVar6 = (int64_t *)
                   CoreMemoryPoolAllocator(system_memory_pool_ptr,uVar16 * 8,*(int8_t *)(lVar15 + 0x40));
          plVar8 = *(int64_t **)(lVar15 + 0x30);
          plVar9 = *(int64_t **)(lVar15 + 0x28);
          plVar12 = plVar6;
        }
        for (; plVar9 != plVar8; plVar9 = plVar9 + 1) {
          *plVar6 = *plVar9;
          *plVar9 = 0;
          plVar6 = plVar6 + 1;
        }
        uVar14 = uVar10;
        plVar8 = plVar6;
        if (uVar10 != 0) {
          for (; uVar14 != 0; uVar14 = uVar14 - 1) {
            *plVar8 = 0;
            plVar8 = plVar8 + 1;
          }
        }
        plVar8 = *(int64_t **)(lVar15 + 0x30);
        plVar9 = *(int64_t **)(lVar15 + 0x28);
        if (plVar9 != plVar8) {
          do {
            if ((int64_t *)*plVar9 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar9 + 0x38))();
            }
            plVar9 = plVar9 + 1;
          } while (plVar9 != plVar8);
          plVar9 = *(int64_t **)(lVar15 + 0x28);
        }
        if (plVar9 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(plVar9);
        }
        *(int64_t **)(lVar15 + 0x28) = plVar12;
        *(int64_t **)(lVar15 + 0x30) = plVar6 + uVar10;
        *(int64_t **)(lVar15 + 0x38) = plVar12 + uVar16;
      }
      else {
        plVar6 = plVar9 + uVar11;
        if (plVar6 != plVar8) {
          do {
            if ((int64_t *)*plVar6 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar6 + 0x38))();
            }
            plVar6 = plVar6 + 1;
          } while (plVar6 != plVar8);
          plVar9 = *(int64_t **)(lVar15 + 0x28);
        }
        plVar8 = plVar9 + uVar11;
      LAB_1800b547f:
        *(int64_t **)(lVar15 + 0x30) = plVar8;
      }
      lVar15 = Function_7bfb2422(lVar15);
      param_2 = cStack_a8;
    } while (lVar15 != lVar4 + 0x740);
  }
  function_05cf50(lStack_a0);
  iVar5 = _Mtx_unlock(lStack_98);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_90);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_88);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_80);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_78);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_70);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_68);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_60);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  iVar5 = _Mtx_unlock(lStack_58);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(alStack_48[3] ^ (uint64_t)stack_array_c8);
}
//==============================================================================
// 函数别名定义
//==============================================================================
// 原始函数别名（保持向后兼容性）
#define function_0b4ec0                     SystemResource_Manager_Init_Cleanup
// 函数: char function_0b55b0(uint64_t param_1,int64_t *param_2)
// 字符串匹配和资源查找函数 - 匹配字符串并查找相应资源
char StringMatch_Resource_Find(uint64_t param_1,int64_t *param_2)
{
  char cVar1;
  char cVar2;
  int64_t lVar3;
  int iVar4;
  char *pcVar5;
  char cVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  char *pcVar13;
  uint64_t uVar14;
  lVar3 = system_resource_state;
  uVar14 = 0xfffffffffffffffe;
  iVar4 = (**(code **)(*(int64_t *)*param_2 + 0x60))();
  puVar8 = (uint64_t *)(lVar3 + 8 + (int64_t)iVar4 * 0x98);
  pcVar13 = "";
  if (*(char **)(*param_2 + 0x18) != (char *)0x0) {
    pcVar13 = *(char **)(*param_2 + 0x18);
  }
  iVar4 = _Mtx_lock(puVar8 + 8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  cVar6 = '\0';
  if ((char)puVar8[0x12] == '\0') {
    iVar4 = function_2abf70(puVar8,pcVar13);
    uVar10 = (uint64_t)*(int *)(puVar8[4] + 4 + (int64_t)iVar4 * 8);
    uVar12 = *puVar8;
    if (uVar10 < (uint64_t)((int64_t)(puVar8[1] - uVar12) >> 3)) {
      plVar11 = (int64_t *)(uVar12 + uVar10 * 8);
      do {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(*plVar11 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(*plVar11 + 0x18);
        }
        pcVar5 = pcVar13;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[(int64_t)puVar7 - (int64_t)pcVar13];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          function_0ba050(puVar8,uVar12 + (int64_t)(int)uVar10 * 8,
                        (int64_t)puVar7 - (int64_t)pcVar13,uVar10,uVar14);
          cVar6 = '\x01';
          goto LAB_1800b56df;
        }
        uVar9 = (int)uVar10 + 1;
        uVar10 = (uint64_t)uVar9;
        plVar11 = plVar11 + 1;
        uVar12 = *puVar8;
      } while ((uint64_t)(int64_t)(int)uVar9 < (uint64_t)((int64_t)(puVar8[1] - uVar12) >> 3));
      *(int8_t *)(puVar8 + 0x12) = 1;
    }
    else {
    LAB_1800b56df:
      *(int8_t *)(puVar8 + 0x12) = 1;
    }
  }
  else {
    plVar11 = (int64_t *)*puVar8;
    if (plVar11 < (int64_t *)puVar8[1]) {
      do {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(*plVar11 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(*plVar11 + 0x18);
        }
        pcVar5 = pcVar13;
        do {
          cVar1 = *pcVar5;
          cVar2 = pcVar5[(int64_t)puVar7 - (int64_t)pcVar13];
          if (cVar1 != cVar2) break;
          pcVar5 = pcVar5 + 1;
        } while (cVar2 != '\0');
        if (cVar1 == cVar2) {
          function_0ba050(puVar8,plVar11,(int64_t)puVar7 - (int64_t)pcVar13,plVar11,uVar14);
          cVar6 = '\x01';
          break;
        }
        plVar11 = plVar11 + 1;
      } while (plVar11 < (int64_t *)puVar8[1]);
    }
  }
  iVar4 = _Mtx_unlock(puVar8 + 8);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  if (cVar6 == '\0') {
    puVar7 = &system_buffer_ptr;
    if (*(void **)(*param_2 + 0x18) != (void *)0x0) {
      puVar7 = *(void **)(*param_2 + 0x18);
    }
    SystemCore_ResourceManager0(&processed_var_7912_ptr,puVar7);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return cVar6;
}
// 原始函数别名（保持向后兼容性）
#define function_0b55b0                     StringMatch_Resource_Find
// 函数: void function_0b57a0(uint64_t param_1,int64_t *param_2)
// 参数处理和资源分配函数 - 处理参数并分配资源
void ParameterProcess_Resource_Allocate(uint64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  void *puVar6;
  int64_t *plVar7;
  int64_t lVar8;
  int64_t lVar9;
  int64_t lVar10;
  int8_t stack_array_d8 [32];
  uint64_t *plocal_var_b8;
  int64_t *plStack_b0;
  int64_t lStack_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  void *plocal_var_90;
  int32_t local_var_88;
  uint8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_a0 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  lStack_a8 = system_resource_state;
  plVar7 = *(int64_t **)(system_resource_state + 0x1d0);
  lVar8 = system_resource_state;
  plStack_b0 = param_2;
  if (plVar7 != *(int64_t **)(system_resource_state + 0x1d8)) {
    do {
      plocal_var_98 = &memory_allocator_3480_ptr;
      plocal_var_90 = stack_array_80;
      stack_array_80[0] = 0;
      local_var_88 = *(int32_t *)(*plVar7 + 0x20);
      puVar6 = *(void **)(*plVar7 + 0x18);
      puVar5 = &system_buffer_ptr;
      if (puVar6 != (void *)0x0) {
        puVar5 = puVar6;
      }
      strcpy_s(stack_array_80,0x40,puVar5);
      puVar4 = (uint64_t *)param_2[1];
      if (puVar4 < (uint64_t *)param_2[2]) {
        param_2[1] = (int64_t)(puVar4 + 0xb);
        *puVar4 = &system_state_ptr;
        puVar4[1] = 0;
        *(int32_t *)(puVar4 + 2) = 0;
        *puVar4 = &memory_allocator_3480_ptr;
        puVar4[1] = puVar4 + 3;
        *(int32_t *)(puVar4 + 2) = 0;
        *(int8_t *)(puVar4 + 3) = 0;
        *(int32_t *)(puVar4 + 2) = local_var_88;
        puVar6 = &system_buffer_ptr;
        if (plocal_var_90 != (void *)0x0) {
          puVar6 = plocal_var_90;
        }
        plocal_var_b8 = puVar4;
        strcpy_s(puVar4[1],0x40,puVar6);
      }
      else {
        puVar3 = (uint64_t *)*param_2;
        lVar10 = ((int64_t)puVar4 - (int64_t)puVar3) / 0x58;
        if (lVar10 == 0) {
          lVar10 = 1;
        LAB_1800b5909:
          puVar1 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 0x58,(char)param_2[3]);
          puVar4 = (uint64_t *)param_2[1];
          puVar3 = (uint64_t *)*param_2;
        }
        else {
          lVar10 = lVar10 * 2;
          if (lVar10 != 0) goto LAB_1800b5909;
          puVar1 = (uint64_t *)0x0;
        }
        puVar2 = puVar1;
        if (puVar3 != puVar4) {
          lVar9 = (int64_t)puVar3 - (int64_t)puVar1;
          do {
            *puVar2 = &system_state_ptr;
            puVar2[1] = 0;
            *(int32_t *)(puVar2 + 2) = 0;
            *puVar2 = &memory_allocator_3480_ptr;
            puVar2[1] = puVar2 + 3;
            *(int32_t *)(puVar2 + 2) = 0;
            *(int8_t *)(puVar2 + 3) = 0;
            *(int32_t *)(puVar2 + 2) = *(int32_t *)(lVar9 + 0x10 + (int64_t)puVar2);
            puVar6 = *(void **)(lVar9 + 8 + (int64_t)puVar2);
            puVar5 = &system_buffer_ptr;
            if (puVar6 != (void *)0x0) {
              puVar5 = puVar6;
            }
            plocal_var_b8 = puVar2;
            strcpy_s(puVar2[1],0x40,puVar5);
            puVar2 = puVar2 + 0xb;
            param_2 = plStack_b0;
            lVar8 = lStack_a8;
          } while ((uint64_t *)(lVar9 + (int64_t)puVar2) != puVar4);
        }
        *puVar2 = &system_state_ptr;
        puVar2[1] = 0;
        *(int32_t *)(puVar2 + 2) = 0;
        *puVar2 = &memory_allocator_3480_ptr;
        puVar2[1] = puVar2 + 3;
        *(int32_t *)(puVar2 + 2) = 0;
        *(int8_t *)(puVar2 + 3) = 0;
        *(int32_t *)(puVar2 + 2) = local_var_88;
        puVar6 = &system_buffer_ptr;
        if (plocal_var_90 != (void *)0x0) {
          puVar6 = plocal_var_90;
        }
        plocal_var_b8 = puVar2;
        strcpy_s(puVar2[1],0x40,puVar6);
        puVar4 = (uint64_t *)param_2[1];
        puVar3 = (uint64_t *)*param_2;
        if (puVar3 != puVar4) {
          do {
            (**(code **)*puVar3)(puVar3,0);
            puVar3 = puVar3 + 0xb;
          } while (puVar3 != puVar4);
          puVar3 = (uint64_t *)*param_2;
        }
        if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar3);
        }
        *param_2 = (int64_t)puVar1;
        param_2[1] = (int64_t)(puVar2 + 0xb);
        param_2[2] = (int64_t)(puVar1 + lVar10 * 0xb);
      }
      plocal_var_98 = &system_state_ptr;
      plVar7 = plVar7 + 1;
    } while (plVar7 != *(int64_t **)(lVar8 + 0x1d8));
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_d8);
}
// 原始函数别名（保持向后兼容性）
#define function_0b57a0                     ParameterProcess_Resource_Allocate
// 函数: void function_0b5ac0(uint64_t param_1,int64_t *param_2,float param_3)
// 浮点参数处理和初始化函数 - 处理浮点参数并执行初始化
void FloatParameter_Process_Init(uint64_t param_1,int64_t *param_2,float param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t lVar5;
  int64_t *plVar6;
  int iVar7;
  int8_t stack_array_b8 [32];
  int32_t local_var_98;
  void *plocal_var_90;
  int64_t lStack_88;
  uint local_var_80;
  uint64_t local_var_78;
  int64_t *plStack_70;
  int64_t *plStack_68;
  uint64_t local_var_60;
  int64_t *plStack_58;
  char acStack_50 [16];
  uint64_t local_var_40;
  lVar1 = system_resource_state;
  local_var_60 = 0xfffffffffffffffe;
  local_var_40 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  iVar7 = 0;
  local_var_98 = 0;
  plVar6 = (int64_t *)(system_resource_state + 0xc60);
  plStack_58 = param_2;
  if (*plVar6 == 0) {
    plocal_var_90 = &system_data_buffer_ptr;
    local_var_78 = 0;
    lStack_88 = 0;
    local_var_80 = 0;
    do {
      (**(code **)(plocal_var_90 + 0x10))(&plocal_var_90,&processed_var_7896_ptr);
      RenderingEngine_BufferManager(acStack_50,&processed_var_4576_ptr,iVar7);
      lVar2 = -1;
      do {
        lVar5 = lVar2;
        lVar2 = lVar5 + 1;
      } while (acStack_50[lVar5 + 1] != '\0');
      iVar4 = (int)(lVar5 + 1);
      if (0 < iVar4) {
        CoreMemoryPoolProcessor(&plocal_var_90,local_var_80 + iVar4);
// WARNING: Subroutine does not return
        memcpy((uint64_t)local_var_80 + lStack_88,acStack_50,(int64_t)((int)lVar5 + 2));
      }
      plVar3 = (int64_t *)SystemCore_GarbageCollector(lVar1,&plStack_68,&plocal_var_90,1);
      local_var_98 = 2;
      plVar3 = (int64_t *)*plVar3;
      if (plVar3 != (int64_t *)0x0) {
        plStack_70 = plVar3;
        (**(code **)(*plVar3 + 0x28))(plVar3);
      }
      plStack_70 = (int64_t *)*plVar6;
      *plVar6 = (int64_t)plVar3;
      if (plStack_70 != (int64_t *)0x0) {
        (**(code **)(*plStack_70 + 0x38))();
      }
      local_var_98 = 0;
      if (plStack_68 != (int64_t *)0x0) {
        (**(code **)(*plStack_68 + 0x38))();
      }
      iVar7 = iVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (iVar7 < 0x14);
    plocal_var_90 = &system_data_buffer_ptr;
    if (lStack_88 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_88 = 0;
    local_var_78 = local_var_78 & 0xffffffff00000000;
    plocal_var_90 = &system_state_ptr;
  }
  plVar6 = *(int64_t **)(lVar1 + 0xc60 + (int64_t)((int)param_3 % 0x14) * 8);
  *param_2 = (int64_t)plVar6;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))();
  }
  local_var_98 = 1;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_40 ^ (uint64_t)stack_array_b8);
}
// 原始函数别名（保持向后兼容性）
#define function_0b5ac0                     FloatParameter_Process_Init
// 函数: void function_0b5cc0(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
// 多参数资源管理函数 - 管理多参数的资源操作
void MultiParameter_Resource_Manager(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t *plVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  lVar6 = system_resource_state;
  iVar2 = (**(code **)(*param_2 + 0x60))(param_2);
  *(int8_t *)((int64_t)param_2 + 0xb2) = 1;
  plVar5 = (int64_t *)((int64_t)iVar2 * 0x98 + lVar6 + 8);
  uVar10 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(plVar5 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar8 = (uint64_t *)plVar5[1];
  puVar3 = (uint64_t *)0x0;
  if (puVar8 < (uint64_t *)plVar5[2]) {
    plVar5[1] = (int64_t)(puVar8 + 1);
    *puVar8 = param_2;
    goto LAB_1802abf36;
  }
  puVar4 = (uint64_t *)*plVar5;
  lVar6 = (int64_t)puVar8 - (int64_t)puVar4 >> 3;
  if (lVar6 == 0) {
    lVar6 = 1;
  LAB_1802abea0:
    puVar3 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar6 * 8,(char)plVar5[3],param_4,uVar10);
    puVar8 = (uint64_t *)plVar5[1];
    puVar4 = (uint64_t *)*plVar5;
    puVar9 = puVar3;
  }
  else {
    lVar6 = lVar6 * 2;
    puVar9 = puVar3;
    if (lVar6 != 0) goto LAB_1802abea0;
  }
  for (; puVar4 != puVar8; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = (int64_t *)plVar5[1];
  plVar7 = (int64_t *)*plVar5;
  if (plVar7 != plVar1) {
    do {
      if ((int64_t *)*plVar7 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar7 + 0x38))();
      }
      plVar7 = plVar7 + 1;
    } while (plVar7 != plVar1);
    plVar7 = (int64_t *)*plVar5;
  }
  if (plVar7 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(plVar7);
  }
  *plVar5 = (int64_t)puVar9;
  plVar5[1] = (int64_t)(puVar3 + 1);
  plVar5[2] = (int64_t)(puVar9 + lVar6);
LAB_1802abf36:
  *(int8_t *)(plVar5 + 0x12) = 1;
  iVar2 = _Mtx_unlock(plVar5 + 8);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
// 原始函数别名（保持向后兼容性）
#define function_0b5cc0                     MultiParameter_Resource_Manager
// 函数: void function_0b5d10(uint64_t param_1,int64_t *param_2)
// 资源状态管理函数 - 管理资源状态
void ResourceState_Manager(uint64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  lVar1 = system_resource_state;
  plVar6 = *(int64_t **)(system_resource_state + 0x300);
  if (plVar6 != *(int64_t **)(system_resource_state + 0x308)) {
    do {
      plVar2 = (int64_t *)0x0;
      plVar4 = (int64_t *)param_2[1];
      if (plVar4 < (int64_t *)param_2[2]) {
        param_2[1] = (int64_t)(plVar4 + 1);
        plVar2 = (int64_t *)*plVar6;
        *plVar4 = (int64_t)plVar2;
        if (plVar2 != (int64_t *)0x0) {
          (**(code **)(*plVar2 + 0x28))();
        }
      }
      else {
        plVar5 = (int64_t *)*param_2;
        lVar3 = (int64_t)plVar4 - (int64_t)plVar5 >> 3;
        if (lVar3 == 0) {
          lVar3 = 1;
        LAB_1800b5da5:
          plVar2 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar3 * 8);
          plVar4 = (int64_t *)param_2[1];
          plVar5 = (int64_t *)*param_2;
          plVar7 = plVar2;
        }
        else {
          lVar3 = lVar3 * 2;
          plVar7 = plVar2;
          if (lVar3 != 0) goto LAB_1800b5da5;
        }
        for (; plVar5 != plVar4; plVar5 = plVar5 + 1) {
          *plVar2 = *plVar5;
          plVar2 = plVar2 + 1;
          *plVar5 = 0;
        }
        plVar4 = (int64_t *)*plVar6;
        *plVar2 = (int64_t)plVar4;
        if (plVar4 != (int64_t *)0x0) {
          (**(code **)(*plVar4 + 0x28))();
        }
        plVar4 = (int64_t *)param_2[1];
        plVar5 = (int64_t *)*param_2;
        if (plVar5 != plVar4) {
          do {
            if ((int64_t *)*plVar5 != (int64_t *)0x0) {
              (**(code **)(*(int64_t *)*plVar5 + 0x38))();
            }
            plVar5 = plVar5 + 1;
          } while (plVar5 != plVar4);
          plVar5 = (int64_t *)*param_2;
        }
        if (plVar5 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(plVar5);
        }
        *param_2 = (int64_t)plVar7;
        param_2[2] = (int64_t)(plVar7 + lVar3);
        param_2[1] = (int64_t)(plVar2 + 1);
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != *(int64_t **)(lVar1 + 0x308));
  }
  return;
}
// 原始函数别名（保持向后兼容性）
#define function_0b5d10                     ResourceState_Manager
// 函数: void function_0b5d38(void)
// 资源队列处理函数 - 处理资源队列操作
void ResourceQueue_Process(void)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *unaff_RDI;
  int64_t unaff_R13;
  int64_t *unaff_R14;
  int64_t *plVar5;
  do {
    plVar1 = (int64_t *)0x0;
    plVar3 = (int64_t *)unaff_RDI[1];
    if (plVar3 < (int64_t *)unaff_RDI[2]) {
      unaff_RDI[1] = (int64_t)(plVar3 + 1);
      plVar1 = (int64_t *)*unaff_R14;
      *plVar3 = (int64_t)plVar1;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))();
      }
    }
    else {
      plVar4 = (int64_t *)*unaff_RDI;
      lVar2 = (int64_t)plVar3 - (int64_t)plVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
      LAB_1800b5da5:
        plVar1 = (int64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8);
        plVar3 = (int64_t *)unaff_RDI[1];
        plVar4 = (int64_t *)*unaff_RDI;
        plVar5 = plVar1;
      }
      else {
        lVar2 = lVar2 * 2;
        plVar5 = plVar1;
        if (lVar2 != 0) goto LAB_1800b5da5;
      }
      for (; plVar4 != plVar3; plVar4 = plVar4 + 1) {
        *plVar1 = *plVar4;
        plVar1 = plVar1 + 1;
        *plVar4 = 0;
      }
      plVar3 = (int64_t *)*unaff_R14;
      *plVar1 = (int64_t)plVar3;
      if (plVar3 != (int64_t *)0x0) {
        (**(code **)(*plVar3 + 0x28))();
      }
      plVar3 = (int64_t *)unaff_RDI[1];
      plVar4 = (int64_t *)*unaff_RDI;
      if (plVar4 != plVar3) {
        do {
          if ((int64_t *)*plVar4 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar4 + 0x38))();
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 != plVar3);
        plVar4 = (int64_t *)*unaff_RDI;
      }
      if (plVar4 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(plVar4);
      }
      *unaff_RDI = (int64_t)plVar5;
      unaff_RDI[2] = (int64_t)(plVar5 + lVar2);
      unaff_RDI[1] = (int64_t)(plVar1 + 1);
    }
    unaff_R14 = unaff_R14 + 1;
    if (unaff_R14 == *(int64_t **)(unaff_R13 + 0x308)) {
      return;
    }
  } while( true );
}
// 原始函数别名（保持向后兼容性）
#define function_0b5d38                     ResourceQueue_Process
// 函数: void function_0b5e73(void)
// 空函数 - 不执行任何操作
void Empty_Function(void)
{
  return;
}
// 原始函数别名（保持向后兼容性）
#define function_0b5e73                     Empty_Function
// 函数: uint64_t function_0b5e80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
// 系统数据内存管理函数 - 管理系统数据内存
uint64_t SystemData_Memory_Manager(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_0be9a0(system_system_data_memory,param_2,0,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// 原始函数别名（保持向后兼容性）
#define function_0b5e80                     SystemData_Memory_Manager
// 函数: uint64_t function_0b5ec0(uint64_t param_1,uint64_t param_2)
// 系统初始化函数 - 执行系统初始化操作
uint64_t System_Init_Function(uint64_t param_1,uint64_t param_2)
{
  function_0bed00();
  return param_2;
}
// 原始函数别名（保持向后兼容性）
#define function_0b5ec0                     System_Init_Function
// WARNING: Removing unreachable block (ram,0x0001800b6113)
// WARNING: Removing unreachable block (ram,0x0001800b611a)
// WARNING: Removing unreachable block (ram,0x0001800b614a)
// WARNING: Removing unreachable block (ram,0x0001800b6152)
// WARNING: Removing unreachable block (ram,0x0001800b6155)
// WARNING: Removing unreachable block (ram,0x0001800b6122)
// WARNING: Removing unreachable block (ram,0x0001800b6127)
// WARNING: Removing unreachable block (ram,0x0001800b616e)
// WARNING: Removing unreachable block (ram,0x0001800b617c)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
//==============================================================================
// 技术架构说明
//==============================================================================
/**
 * 系统资源管理架构
 * ===================
 *
 * 本模块实现了复杂的系统资源管理功能，包括：
 *
 * 1. 资源生命周期管理
 *    - 资源分配和释放
 *    - 资源状态跟踪
 *    - 资源清理和回收
 *
 * 2. 并发控制
 *    - 互斥锁保护
 *    - 线程安全操作
 *    - 原子操作
 *
 * 3. 内存管理
 *    - 动态内存分配
 *    - 内存池管理
 *    - 内存碎片整理
 *
 * 4. 参数处理
 *    - 类型转换
 *    - 参数验证
 *    - 默认值处理
 *
 * 关键数据结构：
 * - 系统资源状态表
 * - 互斥锁数组
 * - 内存池管理器
 * - 参数处理队列
 *
 * 设计模式：
 * - 资源管理模式
 * - 观察者模式
 * - 工厂模式
 * - 状态模式
 */
//==============================================================================