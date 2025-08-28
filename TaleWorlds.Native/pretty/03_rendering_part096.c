#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part096.c - 3 个函数
// 函数: void RenderingSystem_23b30(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystem_23b30(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  byte bVar2;
  void *puVar3;
  bool bVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t lVar13;
  void *plocal_var_70;
  byte *pbStack_68;
  int iStack_60;
  int32_t local_var_58;
  void *plocal_var_50;
  int64_t lStack_48;
  int32_t local_var_38;
  int64_t *plStack_30;
  puVar3 = *(void **)(*param_2 + 0x18);
  puVar10 = &system_buffer_ptr;
  if (puVar3 != (void *)0x0) {
    puVar10 = puVar3;
  }
  puVar1 = (uint64_t *)(param_1 + 0xbf8);
  CoreMemoryPoolValidator(&plocal_var_70,puVar10,puVar3,param_4,0xfffffffffffffffe);
  puVar11 = *(uint64_t **)(param_1 + 0xc08);
  puVar8 = puVar1;
  if (puVar11 != (uint64_t *)0x0) {
    do {
      if (iStack_60 == 0) {
        bVar4 = false;
        puVar12 = (uint64_t *)puVar11[1];
      }
      else {
        if (*(int *)(puVar11 + 6) == 0) {
          bVar4 = true;
        }
        else {
          pbVar5 = pbStack_68;
          do {
            uVar6 = (uint)pbVar5[puVar11[5] - (int64_t)pbStack_68];
            iVar7 = *pbVar5 - uVar6;
            if (*pbVar5 != uVar6) break;
            pbVar5 = pbVar5 + 1;
          } while (uVar6 != 0);
          bVar4 = 0 < iVar7;
          if (iVar7 < 1) {
            puVar12 = (uint64_t *)puVar11[1];
            goto LAB_180323be7;
          }
        }
        puVar12 = (uint64_t *)*puVar11;
      }
LAB_180323be7:
      puVar9 = puVar11;
      if (bVar4) {
        puVar9 = puVar8;
      }
      puVar8 = puVar9;
      puVar11 = puVar12;
    } while (puVar12 != (uint64_t *)0x0);
    if (puVar9 != puVar1) {
      if (*(int *)(puVar9 + 6) == 0) goto LAB_180323c2a;
      if (iStack_60 != 0) {
        pbVar5 = (byte *)puVar9[5];
        lVar13 = (int64_t)pbStack_68 - (int64_t)pbVar5;
        do {
          bVar2 = *pbVar5;
          uVar6 = (uint)pbVar5[lVar13];
          if (bVar2 != uVar6) break;
          pbVar5 = pbVar5 + 1;
        } while (uVar6 != 0);
        if ((int)(bVar2 - uVar6) < 1) goto LAB_180323c2a;
      }
    }
  }
  puVar9 = puVar1;
LAB_180323c2a:
  plocal_var_70 = &system_data_buffer_ptr;
  if (pbStack_68 != (byte *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pbStack_68 = (byte *)0x0;
  local_var_58 = 0;
  plocal_var_70 = &system_state_ptr;
  if (puVar9 == puVar1) {
    CoreMemoryPoolValidator(&plocal_var_50,puVar10);
    plStack_30 = (int64_t *)*param_2;
    if (plStack_30 != (int64_t *)0x0) {
      (**(code **)(*plStack_30 + 0x28))();
    }
    RenderingSystem_3c660(puVar1,&plocal_var_70);
    if (plStack_30 != (int64_t *)0x0) {
      (**(code **)(*plStack_30 + 0x38))();
    }
    plocal_var_50 = &system_data_buffer_ptr;
    if (lStack_48 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_48 = 0;
    local_var_38 = 0;
    plocal_var_50 = &system_state_ptr;
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180323e94)
// WARNING: Removing unreachable block (ram,0x000180323ea0)
// WARNING: Removing unreachable block (ram,0x000180323ebd)
// WARNING: Removing unreachable block (ram,0x000180323f06)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t RenderingSystem_23d00(int64_t param_1,int32_t param_2,int32_t param_3)
{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t *puVar3;
  int32_t *puVar4;
  int iVar5;
  int iVar6;
  uint64_t *puVar7;
  int64_t lVar8;
  uint *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  int64_t lVar12;
  int64_t lVar13;
  int32_t **ppstack_special_x_8;
  int32_t astack_special_x_10 [2];
  int32_t astack_special_x_18 [2];
  int aiStackX_20 [2];
  int iStack_148;
  int iStack_144;
  uint64_t local_var_140;
  uint64_t local_var_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int64_t lStack_120;
  uint64_t local_var_108;
  uint64_t local_var_100;
  uint64_t local_var_f8;
  uint64_t local_var_f0;
  int64_t lStack_e8;
  int64_t lStack_e0;
  uint64_t local_var_d8;
  int32_t local_var_d0;
  int64_t lStack_c8;
  int64_t lStack_c0;
  int64_t lStack_b8;
  uint local_var_b0;
  int32_t *aplocal_var_a8 [2];
  code *pcStack_98;
  void *plocal_var_90;
  int32_t *aplocal_var_88 [2];
  code *pcStack_78;
  void *plocal_var_70;
  uint64_t local_var_68;
  int8_t stack_array_60 [8];
  int8_t stack_array_58 [8];
  int8_t stack_array_50 [8];
  int8_t stack_array_48 [8];
  int64_t lStack_40;
  local_var_68 = 0xfffffffffffffffe;
  astack_special_x_10[0] = param_2;
  astack_special_x_18[0] = param_3;
  RenderingSystem_35000();
  lVar10 = param_1 + 0x908;
  lStack_120 = lVar10;
  iVar5 = _Mtx_lock(lVar10);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  puVar1 = (uint64_t *)(param_1 + 0x8d8);
  iVar5 = *(int *)(param_1 + 0x150);
  puVar3 = *(uint64_t **)(param_1 + 0x8e8);
  puVar7 = puVar3;
  puVar11 = puVar1;
  if (puVar3 != (uint64_t *)0x0) {
    do {
      if (*(int *)(puVar7 + 4) < iVar5) {
        puVar7 = (uint64_t *)*puVar7;
      }
      else {
        puVar11 = puVar7;
        puVar7 = (uint64_t *)puVar7[1];
      }
    } while (puVar7 != (uint64_t *)0x0);
    if ((puVar11 != puVar1) && (*(int *)(puVar11 + 4) <= iVar5)) {
      ppstack_special_x_8 = (int32_t **)CONCAT44(ppstack_special_x_8._4_4_,iVar5);
      puVar7 = puVar1;
      while (puVar3 != (uint64_t *)0x0) {
        if (*(int *)(puVar3 + 4) < iVar5) {
          puVar3 = (uint64_t *)*puVar3;
        }
        else {
          puVar7 = puVar3;
          puVar3 = (uint64_t *)puVar3[1];
        }
      }
      if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
        puVar7 = (uint64_t *)DataStructure_0d730(puVar1,stack_array_60,puVar11,puVar7,&ppstack_special_x_8);
        puVar7 = (uint64_t *)*puVar7;
      }
      lVar12 = (int64_t)(puVar7[6] - puVar7[5]) >> 4;
      local_var_b0 = *(uint *)(puVar7 + 8);
      if (lVar12 == 0) {
        lStack_c8 = 0;
      }
      else {
        lStack_c8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar12 << 4,local_var_b0 & 0xff);
      }
      lStack_b8 = lVar12 * 0x10 + lStack_c8;
      lVar12 = puVar7[5];
      lStack_c0 = lStack_c8;
      if (lVar12 != puVar7[6]) {
// WARNING: Subroutine does not return
        memmove(lStack_c8,lVar12,puVar7[6] - lVar12);
      }
      lVar12 = *(int64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x3a8);
      if (lVar12 != 0) {
        LOCK();
        *(int32_t *)(lVar12 + 0x1060) = 0;
        UNLOCK();
        lVar10 = lStack_120;
      }
      if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(lStack_c8);
      }
    }
  }
  iVar5 = _Mtx_unlock(lVar10);
  if (iVar5 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar5);
  }
  local_var_140 = (int64_t *)0x0;
  local_var_138 = 0;
  local_var_130 = (int32_t *)0x0;
  local_var_128 = (int32_t *)CONCAT44(local_var_128._4_4_,3);
  RenderingSystem_2b1c0(param_1,&local_var_140,*(int32_t *)(param_1 + 0x150),0);
  lVar10 = local_var_138 - (int64_t)local_var_140;
  ppstack_special_x_8 = aplocal_var_a8;
  local_var_108 = &local_var_140;
  local_var_f8 = astack_special_x_10;
  local_var_f0 = astack_special_x_18;
  pcStack_98 = RenderingSystem_3d170;
  plocal_var_90 = &processed_var_6880_ptr;
  local_var_100 = param_1;
  aplocal_var_a8[0] = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
  *aplocal_var_a8[0] = (int32_t)local_var_108;
  aplocal_var_a8[0][1] = local_var_108._4_4_;
  aplocal_var_a8[0][2] = (int32_t)local_var_100;
  aplocal_var_a8[0][3] = local_var_100._4_4_;
  aplocal_var_a8[0][4] = (int32_t)local_var_f8;
  aplocal_var_a8[0][5] = local_var_f8._4_4_;
  aplocal_var_a8[0][6] = (int32_t)local_var_f0;
  aplocal_var_a8[0][7] = local_var_f0._4_4_;
  SystemCore_DataTransformer((int32_t)local_var_108,0,lVar10 >> 2 & 0xffffffff,0x20,0xffffffffffffffff,
                aplocal_var_a8);
  if (local_var_140 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  lStack_e8 = 0;
  lStack_e0 = 0;
  local_var_d8 = 0;
  local_var_d0 = 3;
  RenderingSystem_2afa0(param_1,&lStack_e8,*(int32_t *)(param_1 + 0x150));
  lVar10 = lStack_e0 - lStack_e8;
  ppstack_special_x_8 = aplocal_var_88;
  local_var_140 = &lStack_e8;
  local_var_130 = astack_special_x_10;
  local_var_128 = astack_special_x_18;
  pcStack_78 = RenderingSystem_3d080;
  plocal_var_70 = &processed_var_6640_ptr;
  local_var_138 = param_1;
  aplocal_var_88[0] = (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
  *aplocal_var_88[0] = (int32_t)local_var_140;
  aplocal_var_88[0][1] = local_var_140._4_4_;
  aplocal_var_88[0][2] = (int32_t)local_var_138;
  aplocal_var_88[0][3] = local_var_138._4_4_;
  aplocal_var_88[0][4] = (int32_t)local_var_130;
  aplocal_var_88[0][5] = local_var_130._4_4_;
  aplocal_var_88[0][6] = (int32_t)local_var_128;
  aplocal_var_88[0][7] = local_var_128._4_4_;
  SystemCore_DataTransformer((int32_t)local_var_140,0,lVar10 >> 2 & 0xffffffff,0x20,0xffffffffffffffff,
                aplocal_var_88);
  if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((*(int64_t *)(system_main_module_state + 0x3d8) != 0) &&
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x848);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x858);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        aiStackX_20[0] = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)DataStructure_0d730(puVar1,stack_array_58,puVar11,puVar7,aiStackX_20);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            DataStructure_d2c20(*(uint64_t *)(*(int64_t *)(param_1 + 0x2d8) + 0x260),
                          **(int32_t **)(lVar10 + lVar12),*(int32_t **)(lVar10 + lVar12) + 1);
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  if ((*(int64_t *)(system_main_module_state + 0x3d8) != 0) &&
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x878);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x888);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        iStack_148 = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)DataStructure_0d730(puVar1,stack_array_50,puVar11,puVar7,&iStack_148);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            RenderingSystem_a8870(*(uint64_t *)(param_1 + 0x528),*(int32_t **)(lVar10 + lVar12) + 1,
                          &system_data_02f0,**(int32_t **)(lVar10 + lVar12));
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  if ((*(int64_t *)(system_main_module_state + 0x3d8) != 0) &&
     (*(int *)(*(int64_t *)(system_main_module_state + 0x3d8) + 0x110) == 3)) {
    puVar1 = (uint64_t *)(param_1 + 0x8a8);
    iVar5 = *(int *)(param_1 + 0x150);
    puVar3 = *(uint64_t **)(param_1 + 0x8b8);
    puVar7 = puVar3;
    puVar11 = puVar1;
    if (puVar3 != (uint64_t *)0x0) {
      do {
        if (*(int *)(puVar7 + 4) < iVar5) {
          puVar7 = (uint64_t *)*puVar7;
        }
        else {
          puVar11 = puVar7;
          puVar7 = (uint64_t *)puVar7[1];
        }
      } while (puVar7 != (uint64_t *)0x0);
      if ((puVar11 != puVar1) && (puVar7 = puVar1, *(int *)(puVar11 + 4) <= iVar5)) {
        while (puVar3 != (uint64_t *)0x0) {
          if (*(int *)(puVar3 + 4) < iVar5) {
            puVar3 = (uint64_t *)*puVar3;
          }
          else {
            puVar7 = puVar3;
            puVar3 = (uint64_t *)puVar3[1];
          }
        }
        iStack_144 = iVar5;
        if ((puVar7 == puVar1) || (iVar5 < *(int *)(puVar7 + 4))) {
          puVar7 = (uint64_t *)DataStructure_0d730(puVar1,stack_array_48,puVar11,puVar7,&iStack_144);
          puVar7 = (uint64_t *)*puVar7;
        }
        iVar5 = 0;
        lVar10 = puVar7[5];
        if (puVar7[6] - lVar10 >> 3 != 0) {
          lVar12 = 0;
          do {
            puVar4 = *(int32_t **)(lVar12 + lVar10);
            RenderingSystem_a8720(*(uint64_t *)(param_1 + 0x528),puVar4 + 1,puVar4 + 5,*puVar4);
            iVar5 = iVar5 + 1;
            lVar12 = lVar12 + 8;
            lVar10 = puVar7[5];
          } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(puVar7[6] - lVar10 >> 3));
        }
      }
    }
  }
  for (puVar9 = *(uint **)(*(int64_t *)(param_1 + 0x990) +
                          ((uint64_t)*(uint *)(param_1 + 0x150) %
                          (uint64_t)*(uint *)(param_1 + 0x998)) * 8); puVar9 != (uint *)0x0;
      puVar9 = *(uint **)(puVar9 + 2)) {
    if (*(uint *)(param_1 + 0x150) == *puVar9) goto LAB_180324489;
  }
  puVar9 = *(uint **)(*(int64_t *)(param_1 + 0x990) + *(int64_t *)(param_1 + 0x998) * 8);
LAB_180324489:
  *(uint *)(*(int64_t *)(param_1 + 0x2d8) + 0x5b9c) = puVar9[1];
  iVar5 = 0;
  lVar10 = *(int64_t *)(param_1 + 0xac0);
  if (*(int64_t *)(param_1 + 0xac8) - lVar10 >> 2 != 0) {
    lVar12 = param_1 + 0x3d8;
    lVar13 = 0;
    do {
      uVar2 = *(uint *)(lVar13 + lVar10);
      lStack_40 = lVar12;
      iVar6 = _Mtx_lock(lVar12);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      lVar10 = *(int64_t *)(param_1 + 0x3b0);
      for (puVar9 = *(uint **)(lVar10 + ((uint64_t)uVar2 % (uint64_t)*(uint *)(param_1 + 0x3b8)) *
                                        8); puVar9 != (uint *)0x0; puVar9 = *(uint **)(puVar9 + 4))
      {
        if (uVar2 == *puVar9) {
          lVar8 = *(int64_t *)(param_1 + 0x3b8);
          goto LAB_180324528;
        }
      }
      lVar8 = *(int64_t *)(param_1 + 0x3b8);
      puVar9 = *(uint **)(lVar10 + lVar8 * 8);
LAB_180324528:
      if (puVar9 == *(uint **)(lVar10 + lVar8 * 8)) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(int64_t *)(puVar9 + 2);
      }
      iVar6 = _Mtx_unlock(lVar12);
      if (iVar6 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar6);
      }
      if (lVar10 != 0) {
        RenderingSystem_UpdateCamera(lVar10,0);
      }
      iVar5 = iVar5 + 1;
      lVar13 = lVar13 + 4;
      lVar10 = *(int64_t *)(param_1 + 0xac0);
    } while ((uint64_t)(int64_t)iVar5 < (uint64_t)(*(int64_t *)(param_1 + 0xac8) - lVar10 >> 2))
    ;
  }
  *(uint64_t *)(param_1 + 0x158) = *(uint64_t *)(param_1 + 0x150);
  return 0;
}
// 函数: void RenderingSystem_245b0(uint64_t *param_1,int param_2,int param_3)
void RenderingSystem_245b0(uint64_t *param_1,int param_2,int param_3)
{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  uint *puVar7;
  int64_t lVar8;
  int64_t lVar9;
  uint64_t stack_special_x_20;
  int64_t local_var_ffffffffffffffb8;
  int32_t uVar10;
  uint64_t uVar11;
  int64_t lVar12;
  uVar11 = 0xfffffffffffffffe;
  lVar9 = (int64_t)param_2;
  if (lVar9 < param_3) {
    do {
      uVar3 = (int32_t)((uint64_t)local_var_ffffffffffffffb8 >> 0x20);
      uVar10 = *(int32_t *)(*(int64_t *)*param_1 + lVar9 * 4);
      lVar5 = RenderingSystem_2ba60(param_1[1],uVar10,*(int32_t *)(param_1[1] + 0x150));
      uVar6 = RenderingSystem_2ba60(param_1[1],uVar10,*(int *)(param_1[1] + 0x150) + 1);
      stack_special_x_20 = 0;
      uVar10 = *(int32_t *)param_1[3];
      uVar3 = RenderingSystem_248c0(param_1[1],&stack_special_x_20,lVar5,uVar6,
                            CONCAT44(uVar3,*(int32_t *)param_1[2]),uVar10,uVar11);
      lVar8 = param_1[1];
      uVar1 = *(uint *)(lVar5 + 0x48);
      lVar5 = lVar8 + 0x3d8;
      lVar12 = lVar5;
      iVar4 = _Mtx_lock(lVar5);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      lVar2 = *(int64_t *)(lVar8 + 0x3b0);
      for (puVar7 = *(uint **)(lVar2 + ((uint64_t)uVar1 % (uint64_t)*(uint *)(lVar8 + 0x3b8)) * 8)
          ; puVar7 != (uint *)0x0; puVar7 = *(uint **)(puVar7 + 4)) {
        if (uVar1 == *puVar7) {
          lVar8 = *(int64_t *)(lVar8 + 0x3b8);
          goto LAB_1803246bb;
        }
      }
      lVar8 = *(int64_t *)(lVar8 + 0x3b8);
      puVar7 = *(uint **)(lVar2 + lVar8 * 8);
LAB_1803246bb:
      uVar6 = 0;
      if (puVar7 != *(uint **)(lVar2 + lVar8 * 8)) {
        uVar6 = *(uint64_t *)(puVar7 + 2);
      }
      iVar4 = _Mtx_unlock(lVar5);
      if (iVar4 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar4);
      }
      local_var_ffffffffffffffb8 = param_1[1];
      RenderingSystem_20fd0(*(uint64_t *)(local_var_ffffffffffffffb8 + 0x2d8),uVar6,stack_special_x_20,uVar3,
                    local_var_ffffffffffffffb8,uVar10,uVar11,lVar12);
      lVar9 = lVar9 + 1;
    } while (lVar9 < param_3);
  }
  return;
}
// 函数: void RenderingSystem_24740(uint64_t *param_1,int param_2,int param_3)
void RenderingSystem_24740(uint64_t *param_1,int param_2,int param_3)
{
  uint64_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t lVar8;
  int64_t *plStackX_20;
  int64_t *plStack_38;
  uint64_t local_var_30;
  local_var_30 = 0xfffffffffffffffe;
  for (lVar8 = (int64_t)param_2; lVar8 < param_3; lVar8 = lVar8 + 1) {
    lVar6 = RenderingSystem_2b880(param_1[1],*(int32_t *)(*(int64_t *)*param_1 + lVar8 * 4),
                          *(int32_t *)(param_1[1] + 0x150));
    uVar1 = param_1[1];
    uVar7 = (*(uint *)(lVar6 + 8) | *(uint *)param_1[2]) & ~*(uint *)param_1[3];
    plStack_38 = (int64_t *)0x0;
    if (((*(uint *)(lVar6 + 8) & 1) != 0) &&
       (RenderingSystem_29fa0(uVar1,&plStack_38,lVar6,uVar7), plVar5 = plStack_38,
       plStack_38 != (int64_t *)0x0)) {
      if ((uVar7 >> 2 & 1) == 0) {
        if ((uVar7 & 10) != 0) {
          (**(code **)(*plStack_38 + 0x148))(plStack_38,lVar6 + 0xc);
          (**(code **)(*plVar5 + 0x128))(plVar5,lVar6 + 4);
          (**(code **)(*plVar5 + 0x108))(plVar5,lVar6 + 0xa8);
          (**(code **)(*plVar5 + 400))(plVar5,lVar6 + 200);
          uVar2 = *(int32_t *)(lVar6 + 0xdc);
          uVar3 = *(int32_t *)(lVar6 + 0xe0);
          uVar4 = *(int32_t *)(lVar6 + 0xe4);
          *(int32_t *)(plVar5 + 0xc) = *(int32_t *)(lVar6 + 0xd8);
          *(int32_t *)((int64_t)plVar5 + 100) = uVar2;
          *(int32_t *)(plVar5 + 0xd) = uVar3;
          *(int32_t *)((int64_t)plVar5 + 0x6c) = uVar4;
        }
        if ((uVar7 >> 4 & 1) != 0) {
          plStackX_20 = (int64_t *)0x0;
          RenderingSystem_276a0(uVar1,&plStackX_20,lVar6 + 0x50);
          (**(code **)(*plVar5 + 0x118))(plVar5,&plStackX_20);
          if (plStackX_20 != (int64_t *)0x0) {
            (**(code **)(*plStackX_20 + 0x38))();
          }
        }
      }
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address