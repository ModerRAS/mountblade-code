#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part195.c - 14 个函数
// 函数: void function_37fb10(uint64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
void function_37fb10(uint64_t *param_1,int64_t *param_2,int64_t *param_3,int64_t *param_4)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  if (param_3 != param_4) {
    uVar8 = (int64_t)param_4 - (int64_t)param_3 >> 3;
    plVar4 = (int64_t *)param_1[1];
    if ((uint64_t)(param_1[2] - (int64_t)plVar4 >> 3) < uVar8) {
      plVar3 = (int64_t *)*param_1;
      lVar7 = (int64_t)plVar4 - (int64_t)plVar3 >> 3;
      uVar6 = lVar7 * 2;
      if (lVar7 == 0) {
        uVar6 = 1;
      }
      if (uVar6 <= lVar7 + uVar8) {
        uVar6 = lVar7 + uVar8;
      }
      plVar4 = (int64_t *)0x0;
      plVar2 = plVar4;
      if (uVar6 != 0) {
        plVar4 = (int64_t *)
                 CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 8,*(int8_t *)(param_1 + 3),param_4,
                               0xfffffffffffffffe);
        plVar3 = (int64_t *)*param_1;
        plVar2 = plVar4;
      }
      for (; plVar3 != param_2; plVar3 = plVar3 + 1) {
        *plVar4 = *plVar3;
        *plVar3 = 0;
        plVar4 = plVar4 + 1;
      }
      do {
        plVar3 = (int64_t *)*param_3;
        *plVar4 = (int64_t)plVar3;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))();
        }
        param_3 = param_3 + 1;
        plVar4 = plVar4 + 1;
      } while (param_3 != param_4);
      plVar3 = (int64_t *)param_1[1];
      if (param_2 != plVar3) {
        do {
          *plVar4 = *param_2;
          *param_2 = 0;
          param_2 = param_2 + 1;
          plVar4 = plVar4 + 1;
        } while (param_2 != plVar3);
        plVar3 = (int64_t *)param_1[1];
      }
      plVar5 = (int64_t *)*param_1;
      if (plVar5 != plVar3) {
        do {
          if ((int64_t *)*plVar5 != (int64_t *)0x0) {
            (**(code **)(*(int64_t *)*plVar5 + 0x38))();
          }
          plVar5 = plVar5 + 1;
        } while (plVar5 != plVar3);
        plVar5 = (int64_t *)*param_1;
      }
      if (plVar5 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(plVar5);
      }
      *param_1 = plVar2;
      param_1[1] = plVar4;
      param_1[2] = plVar2 + uVar6;
    }
    else {
      uVar6 = (int64_t)plVar4 - (int64_t)param_2 >> 3;
      if (uVar8 < uVar6) {
        plVar2 = plVar4 + -uVar8;
        plVar3 = plVar4;
        if (plVar2 != plVar4) {
          do {
            *plVar3 = *plVar2;
            *plVar2 = 0;
            plVar2 = plVar2 + 1;
            plVar3 = plVar3 + 1;
          } while (plVar2 != plVar4);
          plVar4 = (int64_t *)param_1[1];
        }
        for (lVar7 = (int64_t)((int64_t)plVar4 + (uVar8 * -8 - (int64_t)param_2)) >> 3; 0 < lVar7
            ; lVar7 = lVar7 + -1) {
          plVar4 = plVar4 + -1;
          lVar1 = plVar4[-uVar8];
          plVar4[-uVar8] = 0;
          plVar3 = (int64_t *)*plVar4;
          *plVar4 = lVar1;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))();
          }
        }
        if (0 < (int64_t)uVar8) {
          lVar7 = (int64_t)param_3 - (int64_t)param_2;
          uVar6 = uVar8;
          do {
            plVar4 = *(int64_t **)(lVar7 + (int64_t)param_2);
            if (plVar4 != (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plVar3 = (int64_t *)*param_2;
            *param_2 = (int64_t)plVar4;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            uVar6 = uVar6 - 1;
            param_2 = param_2 + 1;
          } while (0 < (int64_t)uVar6);
          param_1[1] = param_1[1] + uVar8 * 8;
          return;
        }
      }
      else {
        function_17b680(param_3 + uVar6,param_4,plVar4);
        plVar4 = (int64_t *)param_1[1];
        if (param_2 != plVar4) {
          plVar3 = param_2;
          do {
            *(int64_t *)
             ((int64_t)plVar4 + ((uVar8 - uVar6) * 8 - (int64_t)param_2) + (int64_t)plVar3) =
                 *plVar3;
            *plVar3 = 0;
            plVar3 = plVar3 + 1;
          } while (plVar3 != plVar4);
        }
        param_2 = param_2 + uVar6;
        if (0 < (int64_t)uVar6) {
          lVar7 = (int64_t)(param_3 + uVar6) - (int64_t)param_2;
          do {
            param_2 = param_2 + -1;
            plVar4 = *(int64_t **)(lVar7 + (int64_t)param_2);
            if (plVar4 != (int64_t *)0x0) {
              (**(code **)(*plVar4 + 0x28))(plVar4);
            }
            plVar3 = (int64_t *)*param_2;
            *param_2 = (int64_t)plVar4;
            if (plVar3 != (int64_t *)0x0) {
              (**(code **)(*plVar3 + 0x38))();
            }
            uVar6 = uVar6 - 1;
          } while (0 < (int64_t)uVar6);
        }
      }
      param_1[1] = param_1[1] + uVar8 * 8;
    }
  }
  return;
}
// 函数: void function_37fe30(int64_t param_1,int64_t param_2,code *param_3)
void function_37fe30(int64_t param_1,int64_t param_2,code *param_3)
{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  void *plocal_var_60;
  int64_t lStack_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  if (param_1 != param_2) {
    for (lVar4 = param_1 + 0x28; lVar4 != param_2; lVar4 = lVar4 + 0x28) {
      plocal_var_60 = &system_data_buffer_ptr;
      local_var_50 = *(int32_t *)(lVar4 + 0x10);
      lStack_58 = *(int64_t *)(lVar4 + 8);
      local_var_48 = *(uint64_t *)(lVar4 + 0x18);
      *(int32_t *)(lVar4 + 0x10) = 0;
      *(uint64_t *)(lVar4 + 8) = 0;
      *(uint64_t *)(lVar4 + 0x18) = 0;
      local_var_40 = *(int32_t *)(lVar4 + 0x20);
      lVar5 = lVar4;
      lVar1 = lVar4;
      while (lVar1 != param_1) {
        lVar3 = lVar1 + -0x28;
        cVar2 = (*param_3)(&plocal_var_60,lVar3);
        if (cVar2 == '\0') break;
        SystemScheduler(lVar5,lVar3);
        *(int32_t *)(lVar5 + 0x20) = *(int32_t *)(lVar1 + -8);
        lVar5 = lVar5 + -0x28;
        lVar1 = lVar3;
      }
      SystemScheduler(lVar5,&plocal_var_60);
      *(int32_t *)(lVar5 + 0x20) = local_var_40;
      plocal_var_60 = &system_data_buffer_ptr;
      if (lStack_58 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3800d0(int param_1,int param_2,int64_t *param_3)
void function_3800d0(int param_1,int param_2,int64_t *param_3)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  int *piVar10;
  int32_t uVar11;
  int32_t extraout_XMM0_Da;
  int64_t alStack_50 [3];
  int32_t local_var_38;
  puVar2 = (uint64_t *)*param_3;
  lVar9 = (int64_t)param_1;
  while( true ) {
    if (param_2 <= lVar9) {
      return;
    }
    uVar3 = *puVar2;
    uVar1 = *(int32_t *)puVar2[2];
    uVar4 = *(uint64_t *)puVar2[1];
    alStack_50[0] = 0;
    alStack_50[1] = 0;
    alStack_50[2] = 0;
    local_var_38 = 3;
    uVar11 = function_378550(uVar3,alStack_50,uVar1,*(int32_t *)puVar2[3]);
    lVar6 = alStack_50[0];
    plVar5 = *(int64_t **)(alStack_50[0] + lVar9 * 8);
    piVar10 = (int *)plVar5[1];
    if ((piVar10 == (int *)0x0) || (*piVar10 == -1)) {
      *(uint64_t *)(*plVar5 + 0x88) = *(uint64_t *)(*plVar5 + 0x80);
    }
    else {
      lVar8 = *plVar5;
      if (lVar8 == 0) {
        uVar7 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x150,8,3);
        lVar8 = function_372600(uVar7,uVar3);
        *plVar5 = lVar8;
        piVar10 = (int *)plVar5[1];
        uVar11 = extraout_XMM0_Da;
      }
      function_376ab0(uVar11,lVar8,piVar10,uVar4,uVar1);
    }
    function_374e60(uVar3);
    if (lVar6 != 0) break;
    lVar9 = lVar9 + 1;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_380200(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c06060;
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
// 函数: void function_3802e0(int param_1,int param_2,int64_t *param_3)
void function_3802e0(int param_1,int param_2,int64_t *param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t lVar9;
  param_3 = (int64_t *)*param_3;
  for (lVar9 = (int64_t)param_1; lVar9 < param_2; lVar9 = lVar9 + 1) {
    lVar2 = *param_3;
    lVar3 = **(int64_t **)
              (*(int64_t *)(((int64_t)*(int *)param_3[1] + 0x10b) * 0x20 + lVar2) + lVar9 * 8);
    if (*(int *)(lVar3 + 0x54) == 0) {
      uVar6 = *(uint64_t *)(lVar2 + 0x2154);
      iVar1 = *(int *)(*(int64_t *)(lVar2 + 0x2148) + 0x3054);
      *(uint64_t *)(lVar3 + 0x54) = uVar6;
      iVar5 = (int)((uint64_t)uVar6 >> 0x20);
      iVar8 = (int)(((int)uVar6 >> 0x1f & 3U) + (int)uVar6) >> 2;
      *(int *)(lVar3 + 0x5c) = iVar8;
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      *(int *)(lVar3 + 0x60) = iVar5;
      uVar6 = function_37f230((int64_t)(iVar5 * iVar8));
      iVar5 = *(int *)(lVar3 + 0x50);
      *(uint64_t *)(lVar3 + 0x138) = uVar6;
      if (-1 < iVar5) {
        lVar4 = *(int64_t *)(render_system_data_config + 200);
        lVar7 = *(int64_t *)(render_system_data_config + 0xd0) - lVar4 >> 3;
        iVar8 = (int)lVar7 + -1;
        if (iVar5 != lVar7) {
          iVar8 = iVar5;
        }
        if (*(int64_t *)(lVar4 + (int64_t)iVar8 * 8) != *(int64_t *)(render_system_data_config + 0xe8)) {
          lVar7 = *(int64_t *)(render_system_data_config + 0xd0) - lVar4 >> 3;
          if (iVar5 == lVar7) {
            iVar5 = (int)lVar7 + -1;
          }
          function_372ae0(lVar3,lVar2,
                        *(uint64_t *)
                         (*(int64_t *)(lVar4 + (int64_t)iVar5 * 8) + 0x68 + (int64_t)iVar1 * 8));
          function_3748a0(lVar2,lVar3);
        }
      }
      *(int *)param_3[2] = *(int *)param_3[2] + 1;
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3802fb(void)
void function_3802fb(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int iVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int iVar8;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t *unaff_R14;
  do {
    lVar2 = *unaff_R14;
    lVar3 = **(int64_t **)
              (*(int64_t *)(((int64_t)*(int *)unaff_R14[1] + 0x10b) * 0x20 + lVar2) +
              unaff_RBX * 8);
    if (*(int *)(lVar3 + 0x54) == 0) {
      uVar6 = *(uint64_t *)(lVar2 + 0x2154);
      iVar1 = *(int *)(*(int64_t *)(lVar2 + 0x2148) + 0x3054);
      *(uint64_t *)(lVar3 + 0x54) = uVar6;
      iVar5 = (int)((uint64_t)uVar6 >> 0x20);
      iVar8 = (int)(((int)uVar6 >> 0x1f & 3U) + (int)uVar6) >> 2;
      *(int *)(lVar3 + 0x5c) = iVar8;
      iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 3U)) >> 2;
      *(int *)(lVar3 + 0x60) = iVar5;
      uVar6 = function_37f230((int64_t)(iVar5 * iVar8));
      iVar5 = *(int *)(lVar3 + 0x50);
      *(uint64_t *)(lVar3 + 0x138) = uVar6;
      if (-1 < iVar5) {
        lVar4 = *(int64_t *)(render_system_data_config + 200);
        lVar7 = *(int64_t *)(render_system_data_config + 0xd0) - lVar4 >> 3;
        iVar8 = (int)lVar7 + -1;
        if (iVar5 != lVar7) {
          iVar8 = iVar5;
        }
        if (*(int64_t *)(lVar4 + (int64_t)iVar8 * 8) != *(int64_t *)(render_system_data_config + 0xe8)) {
          lVar7 = *(int64_t *)(render_system_data_config + 0xd0) - lVar4 >> 3;
          if (iVar5 == lVar7) {
            iVar5 = (int)lVar7 + -1;
          }
          function_372ae0(lVar3,lVar2,
                        *(uint64_t *)
                         (*(int64_t *)(lVar4 + (int64_t)iVar5 * 8) + 0x68 + (int64_t)iVar1 * 8));
          function_3748a0(lVar2,lVar3);
        }
      }
      *(int *)unaff_R14[2] = *(int *)unaff_R14[2] + 1;
    }
    unaff_RBX = unaff_RBX + 1;
  } while (unaff_RBX < unaff_RBP);
  return;
}
// 函数: void function_38041e(void)
void function_38041e(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_380430(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c05f60;
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
      puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x18,8,system_allocation_flags,0xfffffffffffffffe);
      puVar1 = (uint64_t *)*param_2;
      uVar2 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar2;
      puVar3[2] = puVar1[2];
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
// 函数: void function_380510(int param_1,int param_2,int64_t *param_3)
void function_380510(int param_1,int param_2,int64_t *param_3)
{
  int iVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  puVar2 = (uint64_t *)*param_3;
  for (lVar4 = (int64_t)param_1; lVar4 < param_2; lVar4 = lVar4 + 1) {
    puVar3 = *(uint64_t **)(*(int64_t *)*puVar2 + lVar4 * 8);
    iVar1 = *(int *)(puVar3 + 6);
    if ((iVar1 == -1) ||
       (*(char *)(*(int64_t *)
                   (*(int64_t *)(*(int64_t *)(puVar2[1] + 0x2148) + 0x60b80) + 0x80 +
                   (int64_t)iVar1 * 8) + 0x152) != '\0')) {
      function_375760(puVar2[1],*(uint64_t *)puVar2[2],*puVar3,
                    *(uint64_t *)(*(int64_t *)puVar2[3] + lVar4 * 8));
    }
    LOCK();
    *(int8_t *)(*(int64_t *)(*(int64_t *)puVar2[3] + lVar4 * 8) + 8) = 1;
    UNLOCK();
    function_375260(puVar2[1],*(uint64_t *)puVar2[2],
                  *(uint64_t *)(*(int64_t *)puVar2[3] + lVar4 * 8));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t function_3805e0(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c05fa0;
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
// 函数: void function_3806c0(int64_t param_1,int64_t param_2,uint64_t param_3)
void function_3806c0(int64_t param_1,int64_t param_2,uint64_t param_3)
{
  if (param_1 != param_2) {
// WARNING: Subroutine does not return
    memmove(param_3,param_1,param_2 - param_1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_380710(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void function_380710(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  uint64_t uVar5;
  if (param_3 == param_4) {
    return;
  }
  lVar1 = param_1[1];
  uVar2 = (param_4 - param_3) / 0x28;
  if (uVar2 <= (uint64_t)((param_1[2] - lVar1) / 0x28)) {
    uVar5 = (lVar1 - param_2) / 0x28;
    if (uVar2 < uVar5) {
      function_3806c0(lVar1 + uVar2 * -0x28,lVar1,lVar1);
// WARNING: Subroutine does not return
      memmove(param_1[1] + ((int64_t)((param_1[1] + uVar2 * -0x28) - param_2) / 0x28) * -0x28,
              param_2);
    }
    lVar4 = uVar5 * 0x28 + param_3;
    function_3806c0(lVar4,param_4,lVar1);
    function_3806c0(param_2,param_1[1],param_1[1] + (uVar2 - uVar5) * 0x28);
    lVar4 = lVar4 - param_3;
// WARNING: Subroutine does not return
    memmove(param_2 + (uVar5 - lVar4 / 0x28) * 0x28,param_3,lVar4);
  }
  lVar4 = *param_1;
  lVar1 = (lVar1 - lVar4) / 0x28;
  uVar5 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar5 = 1;
  }
  if (uVar5 <= lVar1 + uVar2) {
    uVar5 = lVar1 + uVar2;
  }
  if (uVar5 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar5 * 0x28,(char)param_1[3]);
    lVar4 = *param_1;
  }
  if (lVar4 == param_2) {
// WARNING: Subroutine does not return
    memmove(uVar3,param_3,param_4 - param_3);
  }
// WARNING: Subroutine does not return
  memmove(uVar3,lVar4,param_2 - lVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_380722(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void function_380722(int64_t *param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lStack0000000000000058;
  lVar5 = param_4 - param_3;
  lVar1 = param_1[1];
  uVar2 = lVar5 / 0x28;
  lStack0000000000000058 = lVar5;
  if (uVar2 <= (uint64_t)((param_1[2] - lVar1) / 0x28)) {
    uVar6 = (lVar1 - param_2) / 0x28;
    if (uVar2 < uVar6) {
      function_3806c0(lVar1 + uVar2 * -0x28,lVar1,lVar1);
// WARNING: Subroutine does not return
      memmove(param_1[1] + ((int64_t)((param_1[1] + uVar2 * -0x28) - param_2) / 0x28) * -0x28,
              param_2);
    }
    lVar5 = uVar6 * 0x28 + param_3;
    function_3806c0(lVar5,param_4,lVar1);
    function_3806c0(param_2,param_1[1],param_1[1] + (uVar2 - uVar6) * 0x28);
    lVar5 = lVar5 - param_3;
// WARNING: Subroutine does not return
    memmove(param_2 + (uVar6 - lVar5 / 0x28) * 0x28,param_3,lVar5);
  }
  lVar4 = *param_1;
  lVar1 = (lVar1 - lVar4) / 0x28;
  uVar6 = lVar1 * 2;
  if (lVar1 == 0) {
    uVar6 = 1;
  }
  if (uVar6 <= lVar1 + uVar2) {
    uVar6 = lVar1 + uVar2;
  }
  if (uVar6 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar6 * 0x28,(char)param_1[3]);
    lVar4 = *param_1;
  }
  if (lVar4 == param_2) {
// WARNING: Subroutine does not return
    memmove(uVar3,param_3,lVar5);
  }
// WARNING: Subroutine does not return
  memmove(uVar3,lVar4,param_2 - lVar4);
}
// 函数: void function_3809bc(void)
void function_3809bc(void)
{
  return;
}
// 函数: void function_3809c0(uint64_t param_1,uint64_t param_2,int64_t param_3,code *param_4)
void function_3809c0(uint64_t param_1,uint64_t param_2,int64_t param_3,code *param_4)
{
  char cVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  void *plocal_var_90;
  int64_t lStack_88;
  int32_t local_var_80;
  uint64_t local_var_78;
  int32_t local_var_70;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_50;
  int32_t local_var_48;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = param_2 - param_1;
  do {
    if ((lVar2 < 0x488) || (param_3 < 1)) {
      if (param_3 == 0) {
        function_380c60(param_1,param_2,param_2,param_4,uVar6);
      }
      return;
    }
    uVar4 = param_2 - 0x28;
    uVar5 = param_1 + ((int64_t)(param_2 - param_1) / 0x50) * 0x28;
    cVar1 = (*param_4)(param_1,uVar5);
    if (cVar1 == '\0') {
      cVar1 = (*param_4)(param_1,uVar4);
      uVar3 = param_1;
      if (cVar1 == '\0') {
        cVar1 = (*param_4)(uVar5,uVar4);
        goto LAB_180380a8a;
      }
    }
    else {
      cVar1 = (*param_4)(uVar5);
      uVar3 = uVar5;
      if (cVar1 == '\0') {
        cVar1 = (*param_4)(param_1,uVar4);
        uVar5 = param_1;
LAB_180380a8a:
        uVar3 = uVar5;
        if (cVar1 != '\0') {
          uVar3 = uVar4;
        }
      }
    }
    CoreEngineDataTransformer(&plocal_var_68,uVar3);
    local_var_48 = *(int32_t *)(uVar3 + 0x20);
    uVar4 = param_2;
    uVar5 = param_1;
    while( true ) {
      while (cVar1 = (*param_4)(uVar5,&plocal_var_68), cVar1 != '\0') {
        uVar5 = uVar5 + 0x28;
      }
      uVar4 = uVar4 - 0x28;
      cVar1 = (*param_4)(&plocal_var_68,uVar4);
      while (cVar1 != '\0') {
        uVar4 = uVar4 - 0x28;
        cVar1 = (*param_4)(&plocal_var_68,uVar4);
      }
      if (uVar4 <= uVar5) break;
      plocal_var_90 = &system_data_buffer_ptr;
      local_var_80 = *(int32_t *)(uVar5 + 0x10);
      lStack_88 = *(int64_t *)(uVar5 + 8);
      local_var_78._4_4_ = *(uint *)(uVar5 + 0x1c);
      local_var_78._0_4_ = *(int32_t *)(uVar5 + 0x18);
      *(int32_t *)(uVar5 + 0x10) = 0;
      *(uint64_t *)(uVar5 + 8) = 0;
      *(uint64_t *)(uVar5 + 0x18) = 0;
      local_var_70 = *(int32_t *)(uVar5 + 0x20);
      SystemScheduler(uVar5,uVar4);
      *(int32_t *)(uVar5 + 0x20) = *(int32_t *)(uVar4 + 0x20);
      SystemScheduler(uVar4,&plocal_var_90);
      *(int32_t *)(uVar4 + 0x20) = local_var_70;
      plocal_var_90 = &system_data_buffer_ptr;
      if (lStack_88 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_88 = 0;
      local_var_78 = (uint64_t)local_var_78._4_4_ << 0x20;
      plocal_var_90 = &system_state_ptr;
      uVar5 = uVar5 + 0x28;
    }
    plocal_var_68 = &system_data_buffer_ptr;
    if (lStack_60 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_60 = 0;
    local_var_50 = 0;
    plocal_var_68 = &system_state_ptr;
    param_3 = param_3 + -1;
    function_3809c0(uVar5,param_2,param_3,param_4);
    lVar2 = uVar5 - param_1;
    param_2 = uVar5;
  } while( true );
}
// 函数: void function_380c60(int64_t param_1,int64_t *param_2,int64_t *param_3,code *param_4)
void function_380c60(int64_t param_1,int64_t *param_2,int64_t *param_3,code *param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  int64_t *plVar4;
  int64_t lVar5;
  uint64_t uVar6;
  void *plocal_var_68;
  int64_t lStack_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uVar6 = 0xfffffffffffffffe;
  lVar2 = ((int64_t)param_2 - param_1) / 0x28;
  if (1 < lVar2) {
    lVar5 = (lVar2 + -2 >> 1) + 1;
    plVar4 = (int64_t *)(param_1 + (lVar5 * 5 + 1) * 8);
    do {
      lVar5 = lVar5 + -1;
      plVar1 = plVar4 + -5;
      plocal_var_68 = &system_data_buffer_ptr;
      local_var_58 = (int32_t)plVar4[-4];
      lStack_60 = *plVar1;
      local_var_50._4_4_ = *(uint *)((int64_t)plVar4 + -0x14);
      local_var_50._0_4_ = (int32_t)plVar4[-3];
      *(int32_t *)(plVar4 + -4) = 0;
      *plVar1 = 0;
      plVar4[-3] = 0;
      local_var_48 = (int32_t)plVar4[-2];
      function_380ff0(param_1,lVar5,lVar2,lVar5,&plocal_var_68,param_4,uVar6);
      plocal_var_68 = &system_data_buffer_ptr;
      if (lStack_60 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_60 = 0;
      local_var_50 = (uint64_t)local_var_50._4_4_ << 0x20;
      plocal_var_68 = &system_state_ptr;
      plVar4 = plVar1;
    } while (lVar5 != 0);
  }
  if (param_2 < param_3) {
    plVar4 = param_2 + 1;
    do {
      cVar3 = (*param_4)(plVar4 + -1,param_1);
      if (cVar3 != '\0') {
        plocal_var_68 = &system_data_buffer_ptr;
        local_var_58 = (int32_t)plVar4[1];
        lStack_60 = *plVar4;
        local_var_50._4_4_ = *(uint *)((int64_t)plVar4 + 0x14);
        local_var_50._0_4_ = (int32_t)plVar4[2];
        *(int32_t *)(plVar4 + 1) = 0;
        *plVar4 = 0;
        plVar4[2] = 0;
        local_var_48 = (int32_t)plVar4[3];
        SystemScheduler(plVar4 + -1,param_1);
        *(int32_t *)(plVar4 + 3) = *(int32_t *)(param_1 + 0x20);
        function_380ff0(param_1,0,lVar2,0,&plocal_var_68,param_4);
        plocal_var_68 = &system_data_buffer_ptr;
        if (lStack_60 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_60 = 0;
        local_var_50 = (uint64_t)local_var_50._4_4_ << 0x20;
        plocal_var_68 = &system_state_ptr;
      }
      plVar1 = plVar4 + 4;
      plVar4 = plVar4 + 5;
    } while (plVar1 < param_3);
  }
  if (1 < lVar2) {
    param_2 = param_2 + -3;
    do {
      plocal_var_68 = &system_data_buffer_ptr;
      local_var_58 = (int32_t)*param_2;
      lStack_60 = param_2[-1];
      local_var_50 = param_2[1];
      *(int32_t *)param_2 = 0;
      param_2[-1] = 0;
      param_2[1] = 0;
      local_var_48 = (int32_t)param_2[2];
      SystemScheduler(param_2 + -2,param_1);
      *(int32_t *)(param_2 + 2) = *(int32_t *)(param_1 + 0x20);
      function_380ff0(param_1,0,((0x18 - param_1) + (int64_t)param_2) / 0x28 + -1,0,&plocal_var_68,
                    param_4,uVar6);
      plocal_var_68 = &system_data_buffer_ptr;
      if (lStack_60 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      param_2 = param_2 + -5;
    } while (0x4f < (0x18 - param_1) + (int64_t)param_2);
  }
  return;
}
uint64_t * function_380fc0(uint64_t *param_1)
{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int32_t *)(param_1 + 3) = 0xe;
  return param_1;
}
// 函数: void function_380ff0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void function_380ff0(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  int64_t param_5,code *param_6)
{
  int64_t lVar1;
  int64_t lVar2;
  char cVar3;
  int64_t lVar4;
  lVar2 = param_4 * 2;
  while (lVar4 = lVar2 + 2, lVar4 < param_3) {
    lVar1 = param_1 + lVar4 * 0x28;
    cVar3 = (*param_6)(lVar1,lVar1 + -0x28);
    if (cVar3 != '\0') {
      lVar4 = lVar2 + 1;
    }
    lVar2 = param_1 + lVar4 * 0x28;
    lVar1 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar1,lVar2);
    *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar2 + 0x20);
    param_4 = lVar4;
    lVar2 = lVar4 * 2;
  }
  if (lVar4 == param_3) {
    lVar4 = param_1 + lVar4 * 0x28;
    lVar1 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar1,lVar4 + -0x28);
    *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar4 + -8);
    param_4 = lVar2 + 1;
  }
  while (param_2 < param_4) {
    lVar4 = param_4 + -1 >> 1;
    lVar2 = param_1 + lVar4 * 0x28;
    cVar3 = (*param_6)(lVar2,param_5);
    if (cVar3 == '\0') break;
    lVar1 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar1,lVar2);
    *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(lVar2 + 0x20);
    param_4 = lVar4;
  }
  param_1 = param_1 + param_4 * 0x28;
  SystemScheduler(param_1,param_5);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(param_5 + 0x20);
  return;
}
uint64_t function_381130(int64_t param_1,uint64_t *param_2,uint64_t *param_3,uint64_t *param_4,
                       uint64_t param_5,uint64_t param_6,uint64_t *param_7)
{
  uint *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int iVar5;
  uint64_t *plocal_var_18;
  lVar2 = *(int64_t *)(param_1 + 8);
  for (plocal_var_18 = *(uint64_t **)
                     (lVar2 + ((param_2[1] ^ *param_2) % (uint64_t)*(uint *)(param_1 + 0x10)) * 8);
      plocal_var_18 != (uint64_t *)0x0; plocal_var_18 = (uint64_t *)plocal_var_18[3]) {
    if ((*param_2 == *plocal_var_18) && (param_2[1] == plocal_var_18[1])) goto LAB_180381183;
  }
  plocal_var_18 = (uint64_t *)0x0;
LAB_180381183:
  if (plocal_var_18 == (uint64_t *)0x0) {
    plocal_var_18 = *(uint64_t **)(lVar2 + *(int64_t *)(param_1 + 0x10) * 8);
  }
  if (plocal_var_18 != *(uint64_t **)(lVar2 + *(int64_t *)(param_1 + 0x10) * 8)) {
    iVar4 = (int)plocal_var_18[2];
    puVar1 = (uint *)((int64_t)plocal_var_18 + 0x14);
    plocal_var_18 = (uint64_t *)(uint64_t)*puVar1;
    iVar5 = iVar4 + *puVar1;
    if (iVar4 < iVar5) {
      do {
        plocal_var_18 = (uint64_t *)((int64_t)iVar4 * 0x90 + *(int64_t *)(param_1 + 0x30));
        if ((((plocal_var_18[4] == *param_3) && (plocal_var_18[5] == param_3[1])) &&
            (*plocal_var_18 == *param_4)) && (plocal_var_18[1] == param_4[1])) {
          if (param_7 != (uint64_t *)0x0) {
            uVar3 = plocal_var_18[1];
            *param_7 = *plocal_var_18;
            param_7[1] = uVar3;
            uVar3 = plocal_var_18[3];
            param_7[2] = plocal_var_18[2];
            param_7[3] = uVar3;
            uVar3 = plocal_var_18[5];
            param_7[4] = plocal_var_18[4];
            param_7[5] = uVar3;
            uVar3 = plocal_var_18[7];
            param_7[6] = plocal_var_18[6];
            param_7[7] = uVar3;
            uVar3 = plocal_var_18[9];
            param_7[8] = plocal_var_18[8];
            param_7[9] = uVar3;
            uVar3 = plocal_var_18[0xb];
            param_7[10] = plocal_var_18[10];
            param_7[0xb] = uVar3;
            uVar3 = plocal_var_18[0xd];
            param_7[0xc] = plocal_var_18[0xc];
            param_7[0xd] = uVar3;
            uVar3 = plocal_var_18[0xf];
            param_7[0xe] = plocal_var_18[0xe];
            param_7[0xf] = uVar3;
            uVar3 = plocal_var_18[0x11];
            param_7[0x10] = plocal_var_18[0x10];
            param_7[0x11] = uVar3;
          }
          return CONCAT71((int7)((uint64_t)plocal_var_18 >> 8),1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar5);
    }
  }
  return (uint64_t)plocal_var_18 & 0xffffffffffffff00;
}