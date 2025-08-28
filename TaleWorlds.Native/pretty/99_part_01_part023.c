#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_01_part023.c - 6 个函数
// 函数: void function_0b6d80(uint64_t *param_1)
void function_0b6d80(uint64_t *param_1)
{
  if ((int64_t *)param_1[4] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[4] + 0x38))();
  }
  *param_1 = &system_data_buffer_ptr;
  if (param_1[1] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[1] = 0;
  *(int32_t *)(param_1 + 3) = 0;
  *param_1 = &system_state_ptr;
  return;
}
uint64_t RenderingSystem_VertexProcessor(int64_t param_1,int64_t param_2,char param_3)
{
  uint64_t *puVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  void *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  void *plocal_var_40;
  byte *pbStack_38;
  int iStack_30;
  int32_t local_var_28;
  iVar4 = _Mtx_lock(param_1 + 0x8b0);
  if (iVar4 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar4);
  }
  puVar1 = (uint64_t *)(param_1 + 0xa90);
  SystemCore_EncryptionEngine0(&plocal_var_40,param_2);
  puVar11 = *(uint64_t **)(param_1 + 0xaa0);
  puVar8 = puVar1;
  if (puVar11 != (uint64_t *)0x0) {
    do {
      if (iStack_30 == 0) {
        bVar3 = false;
        puVar12 = (uint64_t *)puVar11[1];
      }
      else {
        if (*(int *)(puVar11 + 6) == 0) {
          bVar3 = true;
        }
        else {
          pbVar5 = pbStack_38;
          do {
            uVar6 = (uint)pbVar5[puVar11[5] - (int64_t)pbStack_38];
            iVar4 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar3 = 0 < iVar4;
          if (iVar4 < 1) {
            puVar12 = (uint64_t *)puVar11[1];
            goto LAB_1800b6ea7;
          }
        }
        puVar12 = (uint64_t *)*puVar11;
      }
LAB_1800b6ea7:
      puVar9 = puVar11;
      if (bVar3) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != (uint64_t *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_1800b6eea;
      if (iStack_30 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar13 = (int64_t)pbStack_38 - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar13];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_1800b6eea;
      }
    }
  }
  puVar9 = puVar1;
LAB_1800b6eea:
  plocal_var_40 = &system_data_buffer_ptr;
  if (pbStack_38 == (byte *)0x0) {
    uVar10 = 0;
    pbStack_38 = (byte *)0x0;
    local_var_28 = 0;
    plocal_var_40 = &system_state_ptr;
    if (puVar9 == puVar1) {
      if ((param_3 != '\0') && (*(int *)(param_2 + 0x10) != 0)) {
        puVar7 = &system_buffer_ptr;
        if (*(void **)(param_2 + 8) != (void *)0x0) {
          puVar7 = *(void **)(param_2 + 8);
        }
        SystemCore_Allocator(&processed_var_7984_ptr,puVar7);
      }
    }
    else {
      uVar10 = puVar9[8];
    }
    iVar4 = _Mtx_unlock(param_1 + 0x8b0);
    if (iVar4 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar4);
    }
    return uVar10;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Removing unreachable block (ram,0x00018023c81b)
// WARNING: Removing unreachable block (ram,0x00018023c820)
// WARNING: Removing unreachable block (ram,0x00018023c82a)
// WARNING: Removing unreachable block (ram,0x00018023c83e)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
code * function_0b6f90(uint64_t param_1,uint64_t *param_2,int8_t *param_3)
{
  uint uVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int64_t lVar7;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t *plocal_var_1d0;
  int8_t stack_array_1c8 [16];
  code *pcStack_1b8;
  code *pcStack_1b0;
  int32_t local_var_1a8;
  uint64_t *plocal_var_1a0;
  int8_t local_var_198;
  int8_t stack_array_190 [16];
  code *pcStack_180;
  code *pcStack_178;
  int32_t local_var_170;
  uint64_t stack_array_168 [2];
  code *pcStack_158;
  void *plocal_var_150;
  uint64_t local_var_148;
  int8_t stack_array_140 [16];
  code *pcStack_130;
  int8_t stack_array_120 [16];
  code *pcStack_110;
  int8_t stack_array_100 [48];
  int8_t stack_array_d0 [48];
  int8_t stack_array_a0 [56];
  int8_t stack_array_68 [40];
  uint64_t local_var_40;
  if ((void *)*param_2 != &processed_var_7792_ptr) {
    local_var_40 = 0x1800b7073;
    iVar5 = (**(code **)((void *)*param_2 + 0x60))(param_2);
    if (iVar5 == 1) {
      local_var_148 = 0xfffffffffffffffe;
      pcStack_1b8 = (code *)register0x00000020;
      if ((param_2[0x2c] & 0xfffffffd) == 0) {
        pcStack_1b8 = (code *)0x0;
        LOCK();
        uVar1 = (uint)param_2[0x70];
        if (uVar1 == 0) {
          *(uint *)(param_2 + 0x70) = 1;
        }
        else {
          pcStack_1b8 = (code *)(uint64_t)uVar1;
        }
        UNLOCK();
        if (uVar1 == 0) {
          if (param_2[0x15] == 0) {
            function_23ab60();
            param_2[0x68] = (int64_t)*(int *)(system_main_module_state + 0x224);
            LOCK();
            uVar3 = param_2[0x70];
            *(uint *)(param_2 + 0x70) = 2;
            pcStack_1b8 = (code *)(uint64_t)(uint)uVar3;
            UNLOCK();
            LOCK();
            *(int8_t *)((int64_t)param_2 + 900) = 1;
            UNLOCK();
          }
          else {
            pcStack_1b8 = (code *)0x0;
            pcStack_1b0 = _guard_check_icall;
            plocal_var_1d0 = param_2;
            if (stack_array_1c8 != param_3) {
              pcVar6 = *(code **)(param_3 + 0x10);
              if (pcVar6 != (code *)0x0) {
                (*pcVar6)(stack_array_1c8,param_3,1);
                pcVar6 = *(code **)(param_3 + 0x10);
              }
              pcStack_1b0 = *(code **)(param_3 + 0x18);
              pcStack_1b8 = pcVar6;
            }
            local_var_1a8 = 0xffffffff;
            local_var_198 = 0;
            pcStack_180 = (code *)0x0;
            pcStack_178 = _guard_check_icall;
            plocal_var_1a0 = param_2;
            if (stack_array_190 != param_3) {
              pcVar6 = *(code **)(param_3 + 0x10);
              if (pcVar6 != (code *)0x0) {
                (*pcVar6)(stack_array_190,param_3,1);
                pcVar6 = *(code **)(param_3 + 0x10);
              }
              pcStack_178 = *(code **)(param_3 + 0x18);
              pcStack_180 = pcVar6;
            }
            local_var_170 = 0xffffffff;
            if ((void *)*param_2 == &processed_var_8720_ptr) {
              LOCK();
              *(int *)(param_2 + 1) = (int)param_2[1] + 1;
              UNLOCK();
            }
            else {
              (**(code **)((void *)*param_2 + 0x28))(param_2);
            }
            if ((param_2[0x65] & 0x80) == 0) {
              plVar2 = *(int64_t **)(param_2[0x15] + 0x88);
              pcVar6 = *(code **)(*plVar2 + 0x70);
              lVar7 = function_23cb40(stack_array_a0,&plocal_var_1a0);
              lVar8 = function_23cb40(stack_array_68,lVar7);
              pcStack_158 = function_23e120;
              plocal_var_150 = &rendering_buffer_2320_ptr;
              uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
              function_23cb40(uVar9,lVar8);
              lVar10 = lVar8 + 0x10;
              stack_array_168[0] = uVar9;
              if (*(code **)(lVar8 + 0x20) != (code *)0x0) {
                (**(code **)(lVar8 + 0x20))(lVar10,0,0);
              }
              if (*(code **)(lVar7 + 0x20) != (code *)0x0) {
                (**(code **)(lVar7 + 0x20))(lVar7 + 0x10,0,0);
              }
              uVar9 = function_23c3b0(stack_array_100,&plocal_var_1d0);
              function_23dc00(stack_array_140,uVar9);
              (*pcVar6)(plVar2,&system_data_1050,param_2[0x15] + 0xc,0,stack_array_140,stack_array_168,lVar10);
              if (pcStack_130 != (code *)0x0) {
                (*pcStack_130)(stack_array_140,0,0);
              }
              if (pcStack_158 != (code *)0x0) {
                (*pcStack_158)(stack_array_168,0,0);
              }
            }
            else {
              plVar2 = *(int64_t **)(param_2[0x15] + 0x88);
              pcVar6 = *(code **)(*plVar2 + 0x60);
              uVar9 = function_23c3b0(stack_array_d0,&plocal_var_1d0);
              function_23dc00(stack_array_120,uVar9);
              cVar4 = (*pcVar6)(plVar2,&system_data_1050,param_2[0x15] + 0xc,0,stack_array_120);
              if (pcStack_110 != (code *)0x0) {
                (*pcStack_110)(stack_array_120,0,0);
              }
              if (cVar4 == '\0') {
                function_23c860(&plocal_var_1a0);
              }
            }
            if (pcStack_180 != (code *)0x0) {
              (*pcStack_180)(stack_array_190,0,0);
            }
            if (pcStack_1b8 != (code *)0x0) {
              pcStack_1b8 = (code *)(*pcStack_1b8)(stack_array_1c8,0,0);
            }
          }
        }
      }
      return pcStack_1b8;
    }
  }
  if ((void *)*param_2 != &processed_var_7792_ptr) {
    local_var_40 = 0x1800b70a2;
    iVar5 = (**(code **)((void *)*param_2 + 0x60))(param_2);
    if (iVar5 == 4) {
      lVar10 = system_system_data_memory + 0x38;
      local_var_40 = 0x1800b70c4;
      iVar5 = _Mtx_lock(lVar10);
      if (iVar5 != 0) {
        local_var_40 = 0x1800b70d4;
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      if ((param_2[0x15] == 0) || (param_2[0x17] != 0)) {
        if (*(int64_t *)(param_3 + 0x10) != 0) {
          local_var_40 = 0x1800b7022;
          (**(code **)(param_3 + 0x18))(1,param_2,param_3);
        }
      }
      else {
        local_var_40 = 0x1800b700b;
        function_14a370(param_2,0,param_3);
      }
      local_var_40 = 0x1800b702c;
      pcVar6 = (code *)_Mtx_unlock(lVar10);
      if ((int)pcVar6 == 0) {
        return pcVar6;
      }
// WARNING: Could not recover jumptable at 0x0001800b7041. Too many branches
// WARNING: Treating indirect jump as call
      pcVar6 = (code *)__Throw_C_error_std__YAXH_Z((uint64_t)pcVar6 & 0xffffffff);
      return pcVar6;
    }
  }
  pcVar6 = (code *)*param_2;
  if (pcVar6 != (code *)&processed_var_7792_ptr) {
    local_var_40 = 0x1800b704e;
    pcVar6 = (code *)(**(code **)(pcVar6 + 0x60))(param_2);
    if ((int)pcVar6 == 8) {
      local_var_40 = 0x1800b705d;
      pcVar6 = (code *)function_07c860(param_2,0);
      return pcVar6;
    }
  }
  return pcVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b70e0(uint64_t param_1,uint64_t param_2)
void function_0b70e0(uint64_t param_1,uint64_t param_2)
{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  uint64_t uVar4;
  int iVar5;
  float *pfVar6;
  int64_t lVar7;
  int64_t *plVar8;
  float *pfVar9;
  void *puVar10;
  int32_t uVar11;
  int64_t *plVar12;
  int64_t *plVar13;
  float fVar14;
  float extraout_XMM0_Da;
  uint64_t stack_special_x_8;
  uint64_t stack_special_x_10;
  float afStackX_18 [2];
  int64_t lStackX_20;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  int64_t *plStack_e8;
  int32_t local_var_d8;
  int32_t local_var_d4;
  int32_t local_var_cc;
  uint64_t *plocal_var_c8;
  float *pfStack_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int64_t lStack_a8;
  int64_t lStack_a0;
  int64_t lStack_98;
  int64_t lStack_90;
  lVar1 = system_resource_state;
  local_var_b0 = 0xfffffffffffffffe;
  stack_special_x_8 = param_1;
  stack_special_x_10 = param_2;
  System_DataHandler(param_2,&processed_var_8088_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  afStackX_18[0] = 0.0;
  plocal_var_c8 = &stack_special_x_8;
  pfStack_c0 = afStackX_18;
  plStack_f8 = (int64_t *)0x0;
  plStack_f0 = (int64_t *)0x0;
  plStack_e8 = (int64_t *)0x0;
  plVar13 = *(int64_t **)(lVar1 + 0xa0);
  local_var_b8 = param_2;
  if (plVar13 != *(int64_t **)(lVar1 + 0xa8)) {
    do {
      lVar3 = *plVar13;
      lStackX_20 = lVar3;
      if (*(int *)(lVar3 + 0x380) == 2) {
        if (*(int *)(lVar3 + 0x360) == 2) {
          fVar14 = 0.0625;
        }
        else {
          fVar14 = (float)powf(0x40800000);
        }
        fVar14 = (float)*(int *)(lVar3 + 0x364) * fVar14 * 9.536743e-07;
        stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,(int)stack_special_x_8 + 1);
        afStackX_18[0] = afStackX_18[0] + fVar14;
        local_var_d8 = (int32_t)lVar3;
        local_var_d4 = (int32_t)((uint64_t)lVar3 >> 0x20);
        if (plStack_f0 < plStack_e8) {
          *(int32_t *)plStack_f0 = local_var_d8;
          *(int32_t *)((int64_t)plStack_f0 + 4) = local_var_d4;
          *(float *)(plStack_f0 + 1) = fVar14;
          *(int32_t *)((int64_t)plStack_f0 + 0xc) = local_var_cc;
          plStack_f0 = plStack_f0 + 2;
        }
        else {
          lVar3 = (int64_t)plStack_f0 - (int64_t)plStack_f8 >> 4;
          plVar12 = plStack_f8;
          if (lVar3 == 0) {
            lVar3 = 1;
LAB_1800b7264:
            plVar2 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar3 << 4,3);
            plVar8 = plVar2;
          }
          else {
            lVar3 = lVar3 * 2;
            if (lVar3 != 0) goto LAB_1800b7264;
            plVar2 = (int64_t *)0x0;
            plVar8 = plVar2;
          }
          for (; plVar12 != plStack_f0; plVar12 = plVar12 + 2) {
            lVar7 = plVar12[1];
            *plVar2 = *plVar12;
            plVar2[1] = lVar7;
            plVar2 = plVar2 + 2;
          }
          *(int32_t *)plVar2 = local_var_d8;
          *(int32_t *)((int64_t)plVar2 + 4) = local_var_d4;
          *(float *)(plVar2 + 1) = fVar14;
          *(int32_t *)((int64_t)plVar2 + 0xc) = local_var_cc;
          if (plStack_f8 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(plStack_f8);
          }
          plStack_e8 = plVar8 + lVar3 * 2;
          plStack_f8 = plVar8;
          plStack_f0 = plVar2 + 2;
        }
      }
      plVar13 = plVar13 + 1;
      param_2 = stack_special_x_10;
    } while (plVar13 != *(int64_t **)(lVar1 + 0xa8));
  }
  iVar5 = 0;
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  if (plStack_f8 != plStack_f0) {
    lVar7 = (int64_t)plStack_f0 - (int64_t)plStack_f8 >> 4;
    for (lVar3 = lVar7; lVar3 != 0; lVar3 = lVar3 >> 1) {
      iVar5 = iVar5 + 1;
    }
    function_0b9720(plStack_f8,plStack_f0,(int64_t)(iVar5 + -1) * 2,0);
    plVar13 = plStack_f8;
    if (lVar7 < 0x1d) {
      function_0b9470(plStack_f8,plStack_f0);
    }
    else {
      plVar12 = plStack_f8 + 0x38;
      function_0b9470(plStack_f8,plVar12);
      if (plVar12 != plStack_f0) {
        pfVar9 = (float *)(plVar12 + -1);
        do {
          lVar3 = *plVar12;
          fVar14 = *(float *)(plVar12 + 1);
          pfVar6 = pfVar9;
          plVar2 = plVar12;
          if (*pfVar9 <= fVar14 && fVar14 != *pfVar9) {
            do {
              *plVar2 = *(int64_t *)(pfVar6 + -2);
              pfVar6[4] = *pfVar6;
              plVar2 = plVar2 + -2;
              pfVar6 = pfVar6 + -4;
            } while (*pfVar6 <= fVar14 && fVar14 != *pfVar6);
          }
          *plVar2 = lVar3;
          *(float *)(plVar2 + 1) = fVar14;
          plVar12 = plVar12 + 2;
          pfVar9 = pfVar9 + 4;
        } while (plVar12 != plStack_f0);
      }
    }
    for (; plVar13 != plStack_f0; plVar13 = plVar13 + 2) {
      lVar3 = *plVar13;
      stack_special_x_8._4_4_ = (int32_t)(stack_special_x_8 >> 0x20);
      stack_special_x_8 = CONCAT44(stack_special_x_8._4_4_,(int)stack_special_x_8 + 1);
      uVar11 = *(int32_t *)(lVar3 + 8);
      uVar4 = SystemFunction_000180220c90(*(int32_t *)(lVar3 + 0x324));
      puVar10 = &system_buffer_ptr;
      if (*(void **)(lVar3 + 0x18) != (void *)0x0) {
        puVar10 = *(void **)(lVar3 + 0x18);
      }
      System_DataHandler(param_2,&processed_var_8064_ptr,stack_special_x_8 & 0xffffffff,puVar10,uVar4,
                    (double)extraout_XMM0_Da,uVar11);
    }
  }
  System_DataHandler(param_2,&processed_var_8160_ptr,stack_special_x_8 & 0xffffffff,(double)afStackX_18[0]);
  lVar3 = lVar1 + 0x770;
  lStack_a8 = lVar3;
  iVar5 = _Mtx_lock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  System_DataHandler(param_2,&processed_var_8120_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  afStackX_18[0] = 0.0;
  function_0b76b0(&plocal_var_c8,lVar1 + 0x6c0);
  System_DataHandler(param_2,&processed_var_8232_ptr,stack_special_x_8 & 0xffffffff,(double)afStackX_18[0]);
  iVar5 = _Mtx_unlock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar3 = lVar1 + 0x7c0;
  lStack_a0 = lVar3;
  iVar5 = _Mtx_lock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  System_DataHandler(param_2,&processed_var_8192_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  afStackX_18[0] = 0.0;
  function_0b76b0(&plocal_var_c8,lVar1 + 0x6e0);
  System_DataHandler(param_2,&processed_var_8304_ptr,stack_special_x_8 & 0xffffffff,(double)afStackX_18[0]);
  iVar5 = _Mtx_unlock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar3 = lVar1 + 0x950;
  lStack_98 = lVar3;
  iVar5 = _Mtx_lock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  System_DataHandler(param_2,&processed_var_8264_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  afStackX_18[0] = 0.0;
  function_0b76b0(&plocal_var_c8,lVar1 + 0x700);
  System_DataHandler(param_2,&processed_var_8304_ptr,stack_special_x_8 & 0xffffffff,(double)afStackX_18[0]);
  iVar5 = _Mtx_unlock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  lVar3 = lVar1 + 0x9f0;
  lStack_90 = lVar3;
  iVar5 = _Mtx_lock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  System_DataHandler(param_2,&processed_var_8368_ptr);
  stack_special_x_8 = stack_special_x_8 & 0xffffffff00000000;
  afStackX_18[0] = 0.0;
  function_0b76b0(&plocal_var_c8,lVar1 + 0x720);
  System_DataHandler(param_2,&processed_var_8304_ptr,stack_special_x_8 & 0xffffffff,(double)afStackX_18[0]);
  iVar5 = _Mtx_unlock(lVar3);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  if (plStack_f8 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(plStack_f8);
  }
  return;
}
// 函数: void function_0b76b0(uint64_t *param_1,int64_t *param_2)
void function_0b76b0(uint64_t *param_1,int64_t *param_2)
{
  int16_t uVar1;
  uint64_t uVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  void *puVar7;
  int32_t uVar8;
  uint uVar9;
  float fVar10;
  plVar5 = (int64_t *)*param_2;
  if (plVar5 != (int64_t *)param_2[1]) {
    do {
      lVar6 = *plVar5;
      if (*(int *)(lVar6 + 0x380) == 2) {
        iVar3 = SystemFunction_000180225d90(*(int32_t *)(lVar6 + 0x324));
        fVar10 = (float)(int)(iVar3 * (uint)*(ushort *)(lVar6 + 0x332) *
                              (uint)*(ushort *)(lVar6 + 0x32e) * (uint)*(ushort *)(lVar6 + 0x32c)) *
                 9.536743e-07;
        if (1 < *(byte *)(lVar6 + 0x335)) {
          fVar10 = fVar10 * 1.33;
        }
        *(int *)*param_1 = *(int *)*param_1 + 1;
        uVar2 = param_1[2];
        *(float *)param_1[1] = fVar10 + *(float *)param_1[1];
        uVar8 = *(int32_t *)(lVar6 + 8);
        uVar9 = (uint)*(ushort *)(lVar6 + 0x32e);
        uVar1 = *(int16_t *)(lVar6 + 0x32c);
        uVar4 = SystemFunction_000180220c90(*(int32_t *)(lVar6 + 0x324));
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar6 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(lVar6 + 0x18);
        }
        System_DataHandler(uVar2,&processed_var_8032_ptr,*(int32_t *)*param_1,puVar7,uVar4,uVar1,uVar9,
                      (double)fVar10,uVar8);
      }
      else {
        *(int *)*param_1 = *(int *)*param_1 + 1;
        puVar7 = &system_buffer_ptr;
        if (*(void **)(lVar6 + 0x18) != (void *)0x0) {
          puVar7 = *(void **)(lVar6 + 0x18);
        }
        System_DataHandler(param_1[2],&processed_var_8024_ptr,*(int32_t *)*param_1,puVar7);
      }
      plVar5 = plVar5 + 1;
    } while (plVar5 != (int64_t *)param_2[1]);
  }
  return;
}
// 函数: void function_0b76d4(void)
void function_0b76d4(void)
{
  uint64_t uVar1;
  int iVar2;
  int64_t in_RAX;
  uint64_t uVar3;
  uint64_t unaff_RBX;
  int64_t *unaff_RSI;
  uint64_t unaff_RDI;
  int64_t lVar4;
  void *puVar5;
  uint64_t *unaff_R14;
  int64_t unaff_R15;
  float fVar6;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  *(int32_t *)(in_RAX + -0x18) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x14) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x10) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0xc) = unaff_XMM6_Dd;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM7_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM7_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM7_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM7_Dd;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  do {
    lVar4 = *unaff_RSI;
    if (*(int *)(lVar4 + 0x380) == 2) {
      iVar2 = SystemFunction_000180225d90(*(int32_t *)(lVar4 + 0x324));
      fVar6 = (float)(int)(iVar2 * (uint)*(ushort *)(lVar4 + 0x332) *
                           (uint)*(ushort *)(lVar4 + 0x32e) * (uint)*(ushort *)(lVar4 + 0x32c)) *
              9.536743e-07;
      if (1 < *(byte *)(lVar4 + 0x335)) {
        fVar6 = fVar6 * 1.33;
      }
      *(int *)*unaff_R14 = *(int *)*unaff_R14 + 1;
      uVar1 = unaff_R14[2];
      *(float *)unaff_R14[1] = fVar6 + *(float *)unaff_R14[1];
      uVar3 = SystemFunction_000180220c90(*(int32_t *)(lVar4 + 0x324));
      puVar5 = &system_buffer_ptr;
      if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
        puVar5 = *(void **)(lVar4 + 0x18);
      }
      System_DataHandler(uVar1,&processed_var_8032_ptr,*(int32_t *)*unaff_R14,puVar5,uVar3);
    }
    else {
      *(int *)*unaff_R14 = *(int *)*unaff_R14 + 1;
      puVar5 = &system_buffer_ptr;
      if (*(void **)(lVar4 + 0x18) != (void *)0x0) {
        puVar5 = *(void **)(lVar4 + 0x18);
      }
      System_DataHandler(unaff_R14[2],&processed_var_8024_ptr,*(int32_t *)*unaff_R14,puVar5);
    }
    unaff_RSI = unaff_RSI + 1;
  } while (unaff_RSI != *(int64_t **)(unaff_R15 + 8));
  return;
}
// 函数: void function_0b782b(void)
void function_0b782b(void)
{
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0b7840(uint64_t *param_1,int64_t *param_2)
void function_0b7840(uint64_t *param_1,int64_t *param_2)
{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int64_t *plVar4;
  int64_t lVar5;
  int64_t lVar6;
  byte *pbVar7;
  void *puVar8;
  int64_t lVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t *pstack_special_x_8;
  int64_t *plStackX_10;
  int64_t lStackX_18;
  uint64_t *pstack_special_x_20;
  int8_t stack_array_70 [8];
  uint64_t local_var_68;
  int32_t local_var_60;
  uint64_t local_var_58;
  int64_t *plStack_50;
  lVar6 = system_resource_state;
  lVar5 = system_resource_state + 0x8b0;
  pstack_special_x_8 = param_1;
  plStackX_10 = param_2;
  lStackX_18 = lVar5;
  iVar2 = _Mtx_lock(lVar5);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  lVar9 = lVar6 + 0xa90;
  lVar10 = *param_2;
  plVar4 = (int64_t *)HighFreq_AnimationSystem1(lVar9,&pstack_special_x_8,lVar10 + 0x1f0);
  if (*plVar4 != lVar9) {
    puVar8 = &system_buffer_ptr;
    if (*(void **)(lVar10 + 0x1f8) != (void *)0x0) {
      puVar8 = *(void **)(lVar10 + 0x1f8);
    }
    SystemCore_Allocator(&processed_var_8336_ptr,puVar8);
    iVar2 = _Mtx_unlock(lVar5);
    if (iVar2 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar2);
    }
    if ((int64_t *)*param_2 != (int64_t *)0x0) {
      (**(code **)(*(int64_t *)*param_2 + 0x38))();
    }
    return;
  }
  CoreEngineDataTransformer(stack_array_70,lVar10 + 0x1f0);
  plStack_50 = (int64_t *)*param_2;
  if (plStack_50 != (int64_t *)0x0) {
    (**(code **)(*plStack_50 + 0x28))();
  }
  lVar5 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x48,*(int8_t *)(lVar6 + 0xab8));
  pstack_special_x_8 = (uint64_t *)(lVar5 + 0x20);
  *pstack_special_x_8 = &system_state_ptr;
  uVar11 = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *pstack_special_x_8 = &system_data_buffer_ptr;
  *(uint64_t *)(lVar5 + 0x38) = 0;
  *(uint64_t *)(lVar5 + 0x28) = 0;
  *(int32_t *)(lVar5 + 0x30) = 0;
  *(int32_t *)(lVar5 + 0x30) = local_var_60;
  *(uint64_t *)(lVar5 + 0x28) = local_var_68;
  *(int32_t *)(lVar5 + 0x3c) = local_var_58._4_4_;
  *(int32_t *)(lVar5 + 0x38) = (int32_t)local_var_58;
  local_var_60 = 0;
  local_var_68 = 0;
  local_var_58 = 0;
  *(int64_t **)(lVar5 + 0x40) = plStack_50;
  plStack_50 = (int64_t *)0x0;
  pstack_special_x_20 = pstack_special_x_8;
  lVar6 = SystemCore_SecurityValidator(lVar9,&pstack_special_x_8,pstack_special_x_8);
  if ((char)pstack_special_x_8 == '\0') {
    function_0b94f0(lVar5);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar5);
  }
  if (lVar6 == lVar9) goto LAB_1800b79d4;
  if (*(int *)(lVar6 + 0x30) != 0) {
    if (*(int *)(lVar5 + 0x30) == 0) goto LAB_1800b79d4;
    pbVar7 = *(byte **)(lVar6 + 0x28);
    lVar10 = *(int64_t *)(lVar5 + 0x28) - (int64_t)pbVar7;
    do {
      bVar1 = *pbVar7;
      uVar3 = (uint)pbVar7[lVar10];
      if (bVar1 != uVar3) break;
      pbVar7 = pbVar7 + 1;
    } while (uVar3 != 0);
    if (0 < (int)(bVar1 - uVar3)) goto LAB_1800b79d4;
  }
  uVar11 = 1;
LAB_1800b79d4:
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar5,lVar6,lVar9,uVar11);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address