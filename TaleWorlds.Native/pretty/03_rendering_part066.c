#include "SystemDataAdvancedOptimizer_definition.h"
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part066.c - 21 个函数
// 函数: void function_303880(int64_t param_1)
void function_303880(int64_t param_1)
{
  int64_t lVar1;
  int8_t *puVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  if (*(int64_t *)(param_1 + 0x6d0) != 0) {
    function_1aa3d0();
    if (((*(int *)(SYSTEM_STATE_MANAGER + 0xcb4) != *(int *)(SYSTEM_STATE_MANAGER + 0xcb0)) ||
        (*(int *)(SYSTEM_STATE_MANAGER + 0xd24) != *(int *)(SYSTEM_STATE_MANAGER + 0xd20))) ||
       (*(int *)(SYSTEM_STATE_MANAGER + 0xc44) != *(int *)(SYSTEM_STATE_MANAGER + 0xc40))) {
      function_383450(*(int64_t *)(param_1 + 0x6d0) + 0x120,param_1,*(uint64_t *)(param_1 + 0x660))
      ;
      function_2e4490(param_1 + 0x560);
      if (*(int64_t *)(param_1 + 0x660) != 0) {
        function_383450(*(int64_t *)(param_1 + 0x6d0) + 0x120,param_1);
      }
      lVar1 = *(int64_t *)(*(int64_t *)(param_1 + 0x6d0) + 0x448);
      if (lVar1 != 0) {
        iVar3 = 10;
        puVar2 = (int8_t *)(lVar1 + 9);
        fVar4 = (float)((int)(*(int *)(SYSTEM_STATE_MANAGER + 0xe0) +
                             (*(int *)(SYSTEM_STATE_MANAGER + 0xe0) >> 0x1f & 3U)) >> 2);
        fVar7 = fVar4 * 112.0 + 208.0;
        fVar6 = fVar4 * 56.0 + 104.0;
        do {
          fVar5 = (float)(iVar3 + -10);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[-1] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[-1] = 2;
                    }
                  }
                  else {
                    puVar2[-1] = 3;
                  }
                }
                else {
                  puVar2[-1] = 4;
                }
              }
              else {
                puVar2[-1] = 5;
              }
            }
            else {
              puVar2[-1] = 6;
            }
          }
          else {
            puVar2[-1] = 7;
          }
          fVar5 = (float)(iVar3 + -5);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      *puVar2 = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      *puVar2 = 2;
                    }
                  }
                  else {
                    *puVar2 = 3;
                  }
                }
                else {
                  *puVar2 = 4;
                }
              }
              else {
                *puVar2 = 5;
              }
            }
            else {
              *puVar2 = 6;
            }
          }
          else {
            *puVar2 = 7;
          }
          fVar5 = (float)iVar3;
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[1] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[1] = 2;
                    }
                  }
                  else {
                    puVar2[1] = 3;
                  }
                }
                else {
                  puVar2[1] = 4;
                }
              }
              else {
                puVar2[1] = 5;
              }
            }
            else {
              puVar2[1] = 6;
            }
          }
          else {
            puVar2[1] = 7;
          }
          fVar5 = (float)(iVar3 + 5);
          if (fVar5 <= fVar7) {
            if (fVar5 <= fVar6) {
              if (fVar5 <= fVar4 * 35.0 + 65.0) {
                if (fVar5 <= fVar4 * 12.25 + 22.75) {
                  if (fVar5 <= fVar4 * 7.0 + 13.0) {
                    if (fVar5 <= fVar4 * 5.25 + 9.75) {
                      puVar2[2] = fVar4 * 1.75 + 3.25 < fVar5;
                    }
                    else {
                      puVar2[2] = 2;
                    }
                  }
                  else {
                    puVar2[2] = 3;
                  }
                }
                else {
                  puVar2[2] = 4;
                }
              }
              else {
                puVar2[2] = 5;
              }
            }
            else {
              puVar2[2] = 6;
            }
          }
          else {
            puVar2[2] = 7;
          }
          iVar3 = iVar3 + 0x14;
          puVar2 = puVar2 + 4;
        } while (iVar3 < 0x28a);
        return;
      }
    }
  }
  return;
}
// 函数: void function_303940(int64_t param_1)
void function_303940(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t *plStack_38;
  uint64_t local_var_30;
  int64_t lStack_20;
  lVar1 = *(int64_t *)(param_1 + 0x6d0);
  if (lVar1 != 0) {
    if (*(int64_t **)(lVar1 + 0x318) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0x28))();
    }
    function_1c2360(lVar1 + 0x60830,&plStack_38);
    uVar5 = local_var_30;
    lVar6 = lStack_20;
LAB_1803039b0:
    if (uVar5 != *(uint64_t *)(lVar1 + 0x60838)) {
      lVar4 = *(int64_t *)(lVar6 + 0x20);
      if (lVar4 != 0) {
        if (*(int64_t *)(lVar6 + 0x270) != 0) {
          function_2e8910(lVar6);
          lVar4 = *(int64_t *)(lVar6 + 0x20);
          *(int8_t *)(lVar6 + 0x278) = 0;
        }
        function_2f28f0(lVar6,lVar4);
      }
      lVar4 = *plStack_38;
      do {
        uVar5 = uVar5 + 1;
        lVar2 = (uVar5 & 0xffffffff) * 0x10;
        lVar3 = lVar2 + 8 + lVar4;
        if ((*(uint64_t *)(lVar2 + lVar4) & 0xffffffff00000000) == 0) {
          lVar3 = 0;
        }
        if (lVar3 != 0) {
          lVar6 = *(int64_t *)(lVar4 + 8 + (uVar5 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar5 != plStack_38[1]);
      goto LAB_1803039b0;
    }
  }
  return;
}
// 函数: void function_30395d(int64_t *param_1)
void function_30395d(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t *plStackX_20;
  uint64_t local_var_28;
  int64_t local_var_38;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  function_1c2360(unaff_RBP + 0x60830,&plStackX_20);
  do {
    if (local_var_28 == *(uint64_t *)(unaff_RBP + 0x60838)) {
      return;
    }
    lVar3 = *(int64_t *)(local_var_38 + 0x20);
    if (lVar3 != 0) {
      if (*(int64_t *)(local_var_38 + 0x270) != 0) {
        function_2e8910(local_var_38);
        lVar3 = *(int64_t *)(local_var_38 + 0x20);
        *(int8_t *)(local_var_38 + 0x278) = 0;
      }
      function_2f28f0(local_var_38,lVar3);
    }
    lVar3 = *plStackX_20;
    do {
      local_var_28 = local_var_28 + 1;
      lVar1 = (local_var_28 & 0xffffffff) * 0x10;
      lVar2 = lVar1 + 8 + lVar3;
      if ((*(uint64_t *)(lVar1 + lVar3) & 0xffffffff00000000) == 0) {
        lVar2 = 0;
      }
      if (lVar2 != 0) {
        local_var_38 = *(int64_t *)(lVar3 + 8 + (local_var_28 & 0xffffffff) * 0x10);
        break;
      }
    } while (local_var_28 != plStackX_20[1]);
  } while( true );
}
// 函数: void function_303a34(void)
void function_303a34(void)
{
  return;
}
// 函数: void function_303a40(int64_t param_1)
void function_303a40(int64_t param_1)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  lVar1 = *(int64_t *)(param_1 + 0x6d0);
  if ((lVar1 != 0) &&
     (uVar2 = 0, uVar4 = uVar2, *(int64_t *)(lVar1 + 0xe8) - *(int64_t *)(lVar1 + 0xe0) >> 3 != 0)
     ) {
    do {
      (**(code **)(**(int64_t **)(uVar2 + *(int64_t *)(lVar1 + 0xe0)) + 0x58))();
      uVar2 = uVar2 + 8;
      uVar3 = (int)uVar4 + 1;
      uVar4 = (uint64_t)uVar3;
    } while ((uint64_t)(int64_t)(int)uVar3 <
             (uint64_t)(*(int64_t *)(lVar1 + 0xe8) - *(int64_t *)(lVar1 + 0xe0) >> 3));
  }
  return;
}
// 函数: void function_303a60(void)
void function_303a60(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint uVar2;
  uint64_t uVar3;
  uVar1 = 0;
  uVar3 = uVar1;
  if (in_RAX >> 3 != 0) {
    do {
      (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0xe0)) + 0x58))();
      uVar1 = uVar1 + 8;
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
    } while ((uint64_t)(int64_t)(int)uVar2 <
             (uint64_t)(*(int64_t *)(unaff_RBX + 0xe8) - *(int64_t *)(unaff_RBX + 0xe0) >> 3));
  }
  return;
}
// 函数: void function_303a70(void)
void function_303a70(void)
{
  int64_t unaff_RBX;
  uint64_t uVar1;
  uint unaff_EDI;
  uVar1 = (uint64_t)unaff_EDI;
  do {
    (**(code **)(**(int64_t **)(uVar1 + *(int64_t *)(unaff_RBX + 0xe0)) + 0x58))();
    uVar1 = uVar1 + 8;
    unaff_EDI = unaff_EDI + 1;
  } while ((uint64_t)(int64_t)(int)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RBX + 0xe8) - *(int64_t *)(unaff_RBX + 0xe0) >> 3));
  return;
}
// 函数: void function_303ab6(void)
void function_303ab6(void)
{
  return;
}
// 函数: void function_303abb(void)
void function_303abb(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_303b70(int64_t param_1,uint param_2)
void function_303b70(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  int32_t uVar2;
  uint64_t uVar3;
  int32_t *puVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint uVar7;
  void *plocal_var_d8;
  int32_t *plocal_var_d0;
  int32_t local_var_c8;
  uint64_t local_var_c0;
  void *plocal_var_b8;
  uint64_t *plocal_var_b0;
  int32_t local_var_a8;
  uint64_t local_var_a0;
  void *plocal_var_98;
  int32_t *plocal_var_90;
  int32_t local_var_88;
  uint64_t local_var_80;
  void *plocal_var_78;
  int32_t *plocal_var_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  void *plocal_var_58;
  int32_t *plocal_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  local_var_38 = 0xfffffffffffffffe;
  uVar7 = param_2 & 0xfffff7ff;
  if (*(char *)(param_1 + 0x825) != '\0') {
    uVar7 = param_2;
  }
  if (*(char *)(param_1 + 0x823) != '\0') {
    if (*(int64_t *)(param_1 + 0x530) == 0) {
      uVar3 = Network_DataSerializer(0,param_1 + 0x858,uVar7);
      SystemCore_PointerManager(param_1 + 0x530,uVar3);
    }
    if (*(int64_t *)(param_1 + 0x538) == 0) {
      plocal_var_d8 = &system_data_buffer_ptr;
      local_var_c0 = 0;
      plocal_var_d0 = (int32_t *)0x0;
      local_var_c8 = 0;
      puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
      *(int8_t *)puVar4 = 0;
      plocal_var_d0 = puVar4;
      uVar2 = CoreEngineSystemCleanup(puVar4);
      local_var_c0 = CONCAT44(local_var_c0._4_4_,uVar2);
      *puVar4 = 0x69626d61;
      puVar4[1] = 0x5f746e65;
      puVar4[2] = 0x6c63636f;
      puVar4[3] = 0x6f697375;
      *(uint64_t *)(puVar4 + 4) = 0x68706172675f6e;
      local_var_c8 = 0x17;
      uVar3 = Network_DataSerializer(0x69626d61,&plocal_var_d8,uVar7);
      SystemCore_PointerManager(param_1 + 0x538,uVar3);
      plocal_var_d8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar4);
    }
    if (*(int64_t *)(param_1 + 0x540) == 0) {
      plocal_var_b8 = &system_data_buffer_ptr;
      local_var_a0 = 0;
      plocal_var_b0 = (uint64_t *)0x0;
      local_var_a8 = 0;
      puVar5 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar5 = 0;
      plocal_var_b0 = puVar5;
      uVar2 = CoreEngineSystemCleanup(puVar5);
      local_var_a0 = CONCAT44(local_var_a0._4_4_,uVar2);
      *puVar5 = 0x706172675f727373;
      *(int16_t *)(puVar5 + 1) = 0x68;
      local_var_a8 = 9;
      uVar3 = Network_DataSerializer(0x68,&plocal_var_b8,uVar7);
      SystemCore_PointerManager(param_1 + 0x540,uVar3);
      plocal_var_b8 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    if (*(int64_t *)(param_1 + 0x550) == 0) {
      plocal_var_98 = &system_data_buffer_ptr;
      local_var_80 = 0;
      plocal_var_90 = (int32_t *)0x0;
      local_var_88 = 0;
      puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
      *(int8_t *)puVar4 = 0;
      plocal_var_90 = puVar4;
      uVar2 = CoreEngineSystemCleanup(puVar4);
      local_var_80 = CONCAT44(local_var_80._4_4_,uVar2);
      *puVar4 = 0x6f666562;
      puVar4[1] = 0x745f6572;
      puVar4[2] = 0x736e6172;
      puVar4[3] = 0x65726170;
      *(uint64_t *)(puVar4 + 4) = 0x706172675f73746e;
      *(int16_t *)(puVar4 + 6) = 0x68;
      local_var_88 = 0x19;
      uVar3 = Network_DataSerializer(0x68,&plocal_var_98,uVar7);
      SystemCore_PointerManager(param_1 + 0x550,uVar3);
      plocal_var_98 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar4);
    }
    *(uint *)(*(int64_t *)(param_1 + 0x530) + 0x94) = uVar7;
    *(uint *)(*(int64_t *)(param_1 + 0x538) + 0x94) = uVar7;
    *(uint *)(*(int64_t *)(param_1 + 0x540) + 0x94) = uVar7;
    *(uint *)(*(int64_t *)(param_1 + 0x550) + 0x94) = uVar7;
  }
  if ((*(char *)(param_1 + 0x82b) == '\0') && (*(int64_t *)(param_1 + 0x558) == 0)) {
    plocal_var_78 = &system_data_buffer_ptr;
    local_var_60 = 0;
    plocal_var_70 = (int32_t *)0x0;
    local_var_68 = 0;
    puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x11,0x13);
    *(int8_t *)puVar4 = 0;
    plocal_var_70 = puVar4;
    uVar2 = CoreEngineSystemCleanup(puVar4);
    local_var_60 = CONCAT44(local_var_60._4_4_,uVar2);
    *puVar4 = 0x725f7476;
    puVar4[1] = 0x6c6f7365;
    puVar4[2] = 0x675f6576;
    puVar4[3] = 0x68706172;
    *(int8_t *)(puVar4 + 4) = 0;
    local_var_68 = 0x10;
    uVar3 = Network_DataSerializer(0x725f7476,&plocal_var_78,uVar7);
    SystemCore_PointerManager(param_1 + 0x558,uVar3);
    plocal_var_78 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
  if (*(int64_t *)(param_1 + 0x548) != 0) {
    return;
  }
  plocal_var_58 = &system_data_buffer_ptr;
  local_var_40 = 0;
  plocal_var_50 = (int32_t *)0x0;
  local_var_48 = 0;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_50 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  local_var_40 = CONCAT44(local_var_40._4_4_,uVar2);
  *puVar4 = 0x64616873;
  puVar4[1] = 0x616d776f;
  puVar4[2] = 0x72675f70;
  puVar4[3] = 0x687061;
  local_var_48 = 0xf;
  plVar6 = (int64_t *)Network_DataSerializer(0x64616873,&plocal_var_58,uVar7);
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  plVar1 = *(int64_t **)(param_1 + 0x548);
  *(int64_t **)(param_1 + 0x548) = plVar6;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plocal_var_58 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar4);
}
// 函数: void function_304010(int64_t *param_1,int64_t param_2)
void function_304010(int64_t *param_1,int64_t param_2)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  if (param_1 != (int64_t *)0x0) {
    (**(code **)(*param_1 + 0x28))();
  }
  plVar1 = *(int64_t **)(param_2 + 0x3580);
  *(int64_t **)(param_2 + 0x3580) = param_1;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[(uint64_t)*(uint *)(param_1 + 0x22) + 0x23] = param_2;
  *(int *)(param_2 + 0x9a00) = (int)param_1[0x22];
  lVar2 = param_1[0xda];
  if ((*(char *)(lVar2 + 0x563) == '\0') ||
     (lVar5 = *(int64_t *)(lVar2 + 0x5b0) - *(int64_t *)(lVar2 + 0x5a8),
     iVar4 = (int)(lVar5 >> 0x3f), iVar3 = (int)(lVar5 / 0xc) + iVar4,
     iVar3 == iVar4 || iVar3 - iVar4 < 0)) {
    *(uint64_t *)(param_2 + 0x9a20) = 0;
  }
  else {
    iVar3 = *(int *)(lVar2 + 0x2668);
    *(int *)(lVar2 + 0x2668) = iVar3 + 1;
    *(int *)(param_2 + 0x9a28) = iVar3;
    *(int64_t *)(param_2 + 0x9a20) = lVar2 + 0x570;
  }
  *(int *)(param_1 + 0x22) = (int)param_1[0x22] + 1;
  *(int64_t *)(param_2 + 0x28) = param_1[0x23];
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_304100(int64_t *param_1,char param_2,uint64_t param_3,int8_t param_4)
void function_304100(int64_t *param_1,char param_2,uint64_t param_3,int8_t param_4)
{
  void *puVar1;
  int64_t lVar2;
  int64_t lVar3;
  void *puVar4;
  int64_t *plStackX_8;
  uint64_t uVar5;
  int64_t alStack_40 [2];
  void *plocal_var_30;
  code *pcStack_28;
  uVar5 = 0xfffffffffffffffe;
  if (param_1[0xda] == 0) {
    if ((char)param_1[0xd8] == '\0') {
      if ((char)param_3 != '\0') {
        (**(code **)(*param_1 + 0x68))(param_1,0,param_3,param_4,0xfffffffffffffffe);
        plStackX_8 = (int64_t *)param_1[7];
        param_1[7] = 0;
        if (plStackX_8 != (int64_t *)0x0) {
          (**(code **)(*plStackX_8 + 0x38))();
        }
        if (param_1[0xda] != 0) {
          function_3837e0(param_1[0xda] + 0x120);
          lVar3 = param_1[0xda];
          if (*(int64_t *)(lVar3 + 0x328) != 0) {
            function_1be4d0();
            lVar3 = param_1[0xda];
          }
          if (*(int64_t *)(lVar3 + 0x260) != 0) {
            function_2d33c0();
            lVar3 = param_1[0xda];
          }
          *(int8_t *)(lVar3 + 0xa8) = 1;
        }
      }
      plStackX_8 = (int64_t *)param_1[0xc6];
      param_1[0xc6] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[199];
      param_1[199] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[200];
      param_1[200] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (param_1[0xda] != 0) {
        function_1a29f0(param_1[0xda],param_4,param_2);
      }
      plStackX_8 = (int64_t *)param_1[0xa6];
      param_1[0xa6] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xa7];
      param_1[0xa7] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xab];
      param_1[0xab] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xa8];
      param_1[0xa8] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xa9];
      param_1[0xa9] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xaa];
      param_1[0xaa] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      function_095420(param_1 + 0xac);
      plStackX_8 = (int64_t *)param_1[0xc9];
      param_1[0xc9] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (param_1[0xda] != 0) {
        if (param_2 == '\0') {
          function_383630(param_1[0xda] + 0x120,param_1);
        }
        else {
          function_1a2ea0();
          function_3048f0(param_1[0xda],param_1);
          plStackX_8 = (int64_t *)param_1[0xda];
          param_1[0xda] = 0;
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
        }
      }
      plStackX_8 = (int64_t *)param_1[0xcc];
      param_1[0xcc] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      plStackX_8 = (int64_t *)param_1[0xcd];
      param_1[0xcd] = 0;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      if (system_context_ptr != 0) {
        SystemCore_FileSystem(system_context_ptr);
      }
      if (system_resource_state != 0) {
        function_0b4ec0();
      }
      if (system_context_ptr != 0) {
        SystemCore_FileSystem(system_context_ptr);
      }
    }
    lVar2 = system_context_ptr;
    *(int16_t *)(param_1 + 0x104) = 0;
    *(int32_t *)(param_1 + 0x1f) = *(int32_t *)((int64_t)param_1 + 0xfc);
    lVar3 = param_1[0xd9];
    if (lVar3 != 0) {
      uVar5 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xe0,8,3,uVar5,&plStackX_8);
      plocal_var_30 = &processed_var_5280_ptr;
      pcStack_28 = function_304860;
      alStack_40[0] = lVar3;
      plStackX_8 = (int64_t *)SystemCore_ErrorHandler(uVar5,alStack_40);
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x28))(plStackX_8);
      }
      function_05e300(lVar2,&plStackX_8);
    }
    param_1[0xd9] = 0;
    return;
  }
  puVar1 = *(void **)(param_1[0xda] + 0x4e0);
  puVar4 = &system_buffer_ptr;
  if (puVar1 != (void *)0x0) {
    puVar4 = puVar1;
  }
// WARNING: Subroutine does not return
  SystemParameterHandler(system_message_context,&rendering_buffer_2824_ptr,puVar4);
}
// 函数: void function_304500(int64_t param_1,int64_t param_2)
void function_304500(int64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int iVar5;
  int64_t lVar6;
  int iVar7;
  void *puVar8;
  void *puVar9;
  int64_t lVar10;
  float fVar11;
  float fVar12;
  if ((*(int64_t *)(param_1 + 0x530) != 0) && (*(int64_t *)(param_1 + 0x6d0) != 0)) {
    iVar5 = *(int *)(param_2 + 0x10) + 0x2a;
    CoreEngineDataBufferProcessor(param_2,iVar5);
    puVar3 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
    *puVar3 = 0x2f2f2f2f2f2f2f2f;
    puVar3[1] = 0x2f2f2f2f2f2f2f2f;
    *(int32_t *)(puVar3 + 2) = 0x2f2f2f2f;
    *(int32_t *)((int64_t)puVar3 + 0x14) = 0x2f2f2f2f;
    *(int32_t *)(puVar3 + 3) = 0x2f2f2f2f;
    *(int32_t *)((int64_t)puVar3 + 0x1c) = 0x2f2f2f2f;
    puVar3[4] = 0x2f2f2f2f2f2f2f2f;
    *(int16_t *)(puVar3 + 5) = 0xa2f;
    *(int8_t *)((int64_t)puVar3 + 0x2a) = 0;
    *(int *)(param_2 + 0x10) = iVar5;
    puVar9 = *(void **)(*(int64_t *)(param_1 + 0x6d0) + 0x4e0);
    puVar8 = &system_buffer_ptr;
    if (puVar9 != (void *)0x0) {
      puVar8 = puVar9;
    }
    System_DataHandler(param_2,&rendering_buffer_2760_ptr,puVar8);
    lVar1 = *(int64_t *)(param_1 + 0x530);
    System_DataHandler(param_2,&processed_var_8544_ptr);
    lVar4 = *(int64_t *)(lVar1 + 0x70);
    iVar5 = 0;
    fVar12 = 0.0;
    iVar7 = 0;
    if (*(int64_t *)(lVar1 + 0x78) - lVar4 >> 3 != 0) {
      lVar6 = 0;
      do {
        lVar4 = *(int64_t *)(lVar6 + lVar4);
        if ((lVar4 != 0) && (lVar10 = *(int64_t *)(lVar4 + 0x428), lVar10 != 0)) {
          iVar2 = SystemFunction_000180225d90(*(int32_t *)(lVar10 + 0x324));
          iVar5 = iVar5 + 1;
          puVar9 = &system_buffer_ptr;
          if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
            puVar9 = *(void **)(lVar4 + 0x18);
          }
          fVar11 = (float)(int)(iVar2 * (uint)*(ushort *)(lVar10 + 0x32e) *
                               (uint)*(ushort *)(lVar10 + 0x32c)) * 9.536743e-07;
          fVar12 = fVar12 + fVar11;
          System_DataHandler(param_2,&processed_var_8536_ptr,puVar9,(double)fVar11);
        }
        lVar4 = *(int64_t *)(lVar1 + 0x70);
        iVar7 = iVar7 + 1;
        lVar6 = lVar6 + 8;
      } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(*(int64_t *)(lVar1 + 0x78) - lVar4 >> 3));
    }
    System_DataHandler(param_2,&processed_var_8160_ptr,iVar5,(double)fVar12);
  }
  return;
}
// 函数: void function_30452d(uint64_t param_1,int64_t param_2)
void function_30452d(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int iVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t unaff_RSI;
  int iVar7;
  void *puVar8;
  void *puVar9;
  int64_t lVar10;
  int64_t unaff_R14;
  float fVar11;
  uint64_t uVar12;
  float fVar13;
  iVar6 = *(int *)(param_2 + 0x10);
  CoreEngineDataBufferProcessor();
  puVar3 = (uint64_t *)((uint64_t)*(uint *)(unaff_R14 + 0x10) + *(int64_t *)(unaff_R14 + 8));
  *puVar3 = 0x2f2f2f2f2f2f2f2f;
  puVar3[1] = 0x2f2f2f2f2f2f2f2f;
  *(int32_t *)(puVar3 + 2) = 0x2f2f2f2f;
  *(int32_t *)((int64_t)puVar3 + 0x14) = 0x2f2f2f2f;
  *(int32_t *)(puVar3 + 3) = 0x2f2f2f2f;
  *(int32_t *)((int64_t)puVar3 + 0x1c) = 0x2f2f2f2f;
  puVar3[4] = 0x2f2f2f2f2f2f2f2f;
  *(int16_t *)(puVar3 + 5) = 0xa2f;
  *(int8_t *)((int64_t)puVar3 + 0x2a) = 0;
  *(int *)(unaff_R14 + 0x10) = iVar6 + 0x2a;
  puVar9 = *(void **)(*(int64_t *)(unaff_RSI + 0x6d0) + 0x4e0);
  puVar8 = &system_buffer_ptr;
  if (puVar9 != (void *)0x0) {
    puVar8 = puVar9;
  }
  uVar12 = System_DataHandler(0x2f2f2f2f2f2f2f2f,&rendering_buffer_2760_ptr,puVar8);
  lVar1 = *(int64_t *)(unaff_RSI + 0x530);
  uVar12 = System_DataHandler(uVar12,&processed_var_8544_ptr);
  lVar4 = *(int64_t *)(lVar1 + 0x70);
  iVar6 = 0;
  fVar13 = 0.0;
  iVar7 = 0;
  if (*(int64_t *)(lVar1 + 0x78) - lVar4 >> 3 != 0) {
    lVar5 = 0;
    do {
      lVar4 = *(int64_t *)(lVar5 + lVar4);
      if ((lVar4 != 0) && (lVar10 = *(int64_t *)(lVar4 + 0x428), lVar10 != 0)) {
        iVar2 = SystemFunction_000180225d90(*(int32_t *)(lVar10 + 0x324));
        iVar6 = iVar6 + 1;
        puVar9 = &system_buffer_ptr;
        if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
          puVar9 = *(void **)(lVar4 + 0x18);
        }
        fVar11 = (float)(int)(iVar2 * (uint)*(ushort *)(lVar10 + 0x32e) *
                             (uint)*(ushort *)(lVar10 + 0x32c)) * 9.536743e-07;
        fVar13 = fVar13 + fVar11;
        uVar12 = System_DataHandler(fVar11,&processed_var_8536_ptr,puVar9,(double)fVar11);
      }
      lVar4 = *(int64_t *)(lVar1 + 0x70);
      iVar7 = iVar7 + 1;
      lVar5 = lVar5 + 8;
    } while ((uint64_t)(int64_t)iVar7 < (uint64_t)(*(int64_t *)(lVar1 + 0x78) - lVar4 >> 3));
  }
  System_DataHandler(uVar12,&processed_var_8160_ptr,iVar6,(double)fVar13);
  return;
}
// 函数: void function_3045f4(uint64_t param_1,int64_t param_2)
void function_3045f4(uint64_t param_1,int64_t param_2)
{
  int iVar1;
  uint64_t uVar2;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  int unaff_EDI;
  int64_t lVar3;
  void *puVar4;
  int64_t lVar5;
  float fVar6;
  uVar2 = unaff_RBP & 0xffffffff;
  do {
    lVar3 = *(int64_t *)(uVar2 + param_2);
    if ((lVar3 != 0) && (lVar5 = *(int64_t *)(lVar3 + 0x428), lVar5 != 0)) {
      iVar1 = SystemFunction_000180225d90(*(int32_t *)(lVar5 + 0x324));
      puVar4 = &system_buffer_ptr;
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        puVar4 = *(void **)(lVar3 + 0x18);
      }
      fVar6 = (float)(int)(iVar1 * (uint)*(ushort *)(lVar5 + 0x32e) *
                          (uint)*(ushort *)(lVar5 + 0x32c)) * 9.536743e-07;
      System_DataHandler(fVar6,&processed_var_8536_ptr,puVar4,(double)fVar6);
    }
    param_2 = *(int64_t *)(unaff_RSI + 0x70);
    unaff_EDI = unaff_EDI + 1;
    uVar2 = uVar2 + 8;
  } while ((uint64_t)(int64_t)unaff_EDI <
           (uint64_t)(*(int64_t *)(unaff_RSI + 0x78) - param_2 >> 3));
  System_DataHandler();
  return;
}
// 函数: void function_30469a(void)
void function_30469a(void)
{
  System_DataHandler();
  return;
}
// 函数: void function_3046cc(void)
void function_3046cc(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3046e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_3046e0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  code *pcVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  (**(code **)(**(int64_t **)(param_1 + 200) + 0x68))
            (*(int64_t **)(param_1 + 200),0,param_3,param_4,0xfffffffffffffffe);
  if (*(char *)(param_1 + 0xc0) == '\0') {
    function_304100(*(uint64_t *)(param_1 + 200),1,1);
  }
  else {
    SystemCore_FileSystem(system_context_ptr);
    pcVar1 = *(code **)(**(int64_t **)(param_1 + 200) + 0xb8);
    if (pcVar1 == (code *)&rendering_adapter_ptr) {
      plVar3 = (int64_t *)(*(int64_t **)(param_1 + 200))[0xda];
    }
    else {
      plVar3 = (int64_t *)(*pcVar1)();
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    function_301f30(*(uint64_t *)(param_1 + 200),0);
    function_304100(*(uint64_t *)(param_1 + 200),0,1,0);
    function_095420(*(int64_t *)(param_1 + 200) + 0x560);
    function_301f30(*(uint64_t *)(param_1 + 200),plVar3);
    if (plVar3 != (int64_t *)0x0) {
      plVar2 = (int64_t *)plVar3[0x712];
      plVar3[0x712] = 0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      plVar2 = (int64_t *)plVar3[0x7c9];
      plVar3[0x7c9] = 0;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      function_143430(plVar3 + 0x603);
    }
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3);
    }
  }
  plVar3 = *(int64_t **)(param_1 + 200);
  *(int8_t *)((int64_t)plVar3 + 0xdd) = 0;
// WARNING: Could not recover jumptable at 0x000180304845. Too many branches
// WARNING: Treating indirect jump as call
  (**(code **)(*plVar3 + 0xc0))();
  return;
}
// 函数: void function_304860(int64_t *param_1)
void function_304860(int64_t *param_1)
{
  uint64_t *puVar1;
  int64_t lVar2;
  puVar1 = (uint64_t *)*param_1;
  if (puVar1 != (uint64_t *)0x0) {
    lVar2 = __RTCastToVoid(puVar1);
    (**(code **)*puVar1)(puVar1,0);
    if (lVar2 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar2);
    }
  }
  return;
}
// 函数: void function_304871(void)
void function_304871(void)
{
  int64_t lVar1;
  uint64_t *unaff_RBX;
  lVar1 = __RTCastToVoid();
  (**(code **)*unaff_RBX)();
  if (lVar1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar1);
  }
  return;
}
// 函数: void function_30489b(void)
void function_30489b(void)
{
  return;
}