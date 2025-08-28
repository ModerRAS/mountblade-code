#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part026.c - 9 个函数
// 函数: void DataStructure_e86c2(void)
void DataStructure_e86c2(void)
{
  int64_t lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBX;
  char unaff_BPL;
  int64_t *plVar13;
  uint64_t *puVar14;
  int64_t *local_var_30;
  uint64_t local_var_38;
  int64_t *local_var_40;
  int8_t stack_array_28 [24];
  plVar13 = (int64_t *)unaff_RBX[0x4e];
  if (unaff_BPL == '\0') {
    if (plVar13 == (int64_t *)0x0) {
      return;
    }
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) | 1;
// WARNING: Could not recover jumptable at 0x0001802e8722. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,0);
    return;
  }
  if (plVar13 != (int64_t *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
// WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*plVar13 + 0x88))(plVar13,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((int64_t)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(int64_t *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar13 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(plVar13,stack_array_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((int64_t)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0xd0))
            (*(int64_t **)(lVar1 + 0x318),&local_buffer_00000030,0x358637bd,unaff_RBX + 0x4e,plVar13);
  plVar6 = local_var_30;
  plVar13 = (int64_t *)(lVar1 + 0x60cb8);
  local_var_40 = plVar13;
  iVar8 = _Mtx_lock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar14 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar14 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar14 + 1;
    *puVar14 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (int64_t)puVar14 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar14 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar14) {
// WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar14 - (int64_t)puVar12);
  }
  *puVar11 = plVar6;
  if (*(int64_t *)(lVar1 + 0x70) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar13 = local_var_30;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (local_var_30 != (int64_t *)0x0) {
    local_var_30[2] = (int64_t)unaff_RBX;
    local_var_40 = local_var_30;
    if (local_var_30 != (int64_t *)0x0) {
      (**(code **)(*local_var_30 + 0x28))(local_var_30);
    }
    local_var_40 = (int64_t *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (int64_t)plVar13;
    if (local_var_40 != (int64_t *)0x0) {
      (**(code **)(*local_var_40 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*local_var_30 + 0x90))();
    }
    cVar7 = (**(code **)(*local_var_30 + 0x70))();
    if (cVar7 != '\0') {
      local_var_40 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar1 + 0x8118,&local_buffer_00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (local_var_30 != (int64_t *)0x0) {
    (**(code **)(*local_var_30 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_e86d8(int32_t param_1)
void DataStructure_e86d8(int32_t param_1)
{
  int64_t lVar1;
  float fVar2;
  int32_t uVar3;
  int32_t uVar4;
  bool bVar5;
  int64_t *plVar6;
  char cVar7;
  int iVar8;
  int64_t *in_RAX;
  int32_t *puVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  int64_t *unaff_RBX;
  int64_t *plVar13;
  uint64_t *puVar14;
  int64_t *local_var_30;
  uint64_t local_var_38;
  int64_t *local_var_40;
  int8_t stack_array_28 [24];
  if (in_RAX != (int64_t *)0x0) {
    *(uint *)(unaff_RBX + 0x29) = *(uint *)(unaff_RBX + 0x29) & 0xfffffffe;
// WARNING: Could not recover jumptable at 0x0001802e86f1. Too many branches
// WARNING: Treating indirect jump as call
    (**(code **)(*in_RAX + 0x88))(param_1,1);
    return;
  }
  lVar1 = unaff_RBX[4];
  if ((*(uint *)((int64_t)unaff_RBX + 0x2ac) & 0x8000) != 0) {
    return;
  }
  if (unaff_RBX[0x22] == 0) {
    return;
  }
  if (*(int64_t *)(lVar1 + 0x318) == 0) {
    return;
  }
  if ((*(uint *)(unaff_RBX + 0x29) & 0x20000) != 0) {
    return;
  }
  plVar13 = unaff_RBX + 0xe;
  puVar9 = (int32_t *)RenderingSystem_LightSystem(plVar13,stack_array_28);
  fVar2 = (float)puVar9[1];
  uVar3 = puVar9[2];
  uVar4 = puVar9[3];
  *(int32_t *)(unaff_RBX + 0x27) = *puVar9;
  *(float *)((int64_t)unaff_RBX + 0x13c) = fVar2;
  *(int32_t *)(unaff_RBX + 0x28) = uVar3;
  *(int32_t *)((int64_t)unaff_RBX + 0x144) = uVar4;
  if ((fVar2 <= -1e-06) || (1e-06 <= fVar2)) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((-1e-06 < *(float *)(unaff_RBX + 0x28)) && (*(float *)(unaff_RBX + 0x28) < 1e-06)) {
    return;
  }
  if (bVar5) {
    return;
  }
  (**(code **)(**(int64_t **)(lVar1 + 0x318) + 0xd0))
            (*(int64_t **)(lVar1 + 0x318),&local_buffer_00000030,0x358637bd,unaff_RBX + 0x4e,plVar13);
  plVar6 = local_var_30;
  plVar13 = (int64_t *)(lVar1 + 0x60cb8);
  local_var_40 = plVar13;
  iVar8 = _Mtx_lock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  puVar14 = *(uint64_t **)(lVar1 + 0x78);
  if (puVar14 < *(uint64_t **)(lVar1 + 0x80)) {
    *(uint64_t **)(lVar1 + 0x78) = puVar14 + 1;
    *puVar14 = plVar6;
    goto LAB_1802f2aba;
  }
  puVar12 = *(uint64_t **)(lVar1 + 0x70);
  lVar10 = (int64_t)puVar14 - (int64_t)puVar12 >> 3;
  if (lVar10 == 0) {
    lVar10 = 1;
LAB_1802f2a4b:
    puVar11 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar10 * 8,*(int8_t *)(lVar1 + 0x88));
    puVar14 = *(uint64_t **)(lVar1 + 0x78);
    puVar12 = *(uint64_t **)(lVar1 + 0x70);
  }
  else {
    lVar10 = lVar10 * 2;
    if (lVar10 != 0) goto LAB_1802f2a4b;
    puVar11 = (uint64_t *)0x0;
  }
  if (puVar12 != puVar14) {
// WARNING: Subroutine does not return
    memmove(puVar11,puVar12,(int64_t)puVar14 - (int64_t)puVar12);
  }
  *puVar11 = plVar6;
  if (*(int64_t *)(lVar1 + 0x70) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t **)(lVar1 + 0x70) = puVar11;
  *(uint64_t **)(lVar1 + 0x78) = puVar11 + 1;
  *(uint64_t **)(lVar1 + 0x80) = puVar11 + lVar10;
LAB_1802f2aba:
  iVar8 = _Mtx_unlock(plVar13);
  if (iVar8 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar8);
  }
  plVar13 = local_var_30;
  *(uint64_t *)(lVar1 + 0x98) = 0;
  if (local_var_30 != (int64_t *)0x0) {
    local_var_30[2] = (int64_t)unaff_RBX;
    local_var_40 = local_var_30;
    if (local_var_30 != (int64_t *)0x0) {
      (**(code **)(*local_var_30 + 0x28))(local_var_30);
    }
    local_var_40 = (int64_t *)unaff_RBX[0x4e];
    unaff_RBX[0x4e] = (int64_t)plVar13;
    if (local_var_40 != (int64_t *)0x0) {
      (**(code **)(*local_var_40 + 0x38))();
    }
    if ((*(byte *)(unaff_RBX + 0x29) & 1) != 0) {
      (**(code **)(*local_var_30 + 0x90))();
    }
    cVar7 = (**(code **)(*local_var_30 + 0x70))();
    if (cVar7 != '\0') {
      local_var_40 = unaff_RBX;
      iVar8 = _Mtx_lock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
      SystemInitializer(lVar1 + 0x8118,&local_buffer_00000040);
      iVar8 = _Mtx_unlock(lVar1 + 0x80c8);
      if (iVar8 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar8);
      }
    }
  }
  if (local_var_30 != (int64_t *)0x0) {
    (**(code **)(*local_var_30 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
bool DataStructure_e8730(int64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
{
  byte bVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  int iVar4;
  uint64_t *******pppppppuVar5;
  uint64_t local_var_60;
  uint64_t local_var_58;
  code *pcStack_50;
  code *pcStack_48;
  uint64_t ******pppppplocal_var_40;
  uint64_t ******pppppplocal_var_38;
  uint64_t *plocal_var_30;
  uint64_t local_var_28;
  uint64_t local_var_20;
  int32_t local_var_18;
  lVar2 = system_system_data_config;
  bVar1 = (byte)param_2;
  if (*(int64_t *)(param_1 + 0x110) != 0) {
    if (param_2 == 0) {
      return true;
    }
    if (0 < *(int *)(param_1 + 0x128)) {
      iVar4 = RenderingSystem_PostProcessor(system_system_data_config,param_1 + 0x118);
      if (iVar4 != -1) {
        return (*(byte *)((int64_t)iVar4 * 0x68 + *(int64_t *)(lVar2 + 0x38) + 0x48) & bVar1) == 0
        ;
      }
      return (bRam0000000000000048 & bVar1) == 0;
    }
    local_var_18 = 3;
    pppppplocal_var_40 = &pppppplocal_var_40;
    pppppplocal_var_38 = &pppppplocal_var_40;
    plocal_var_30 = (uint64_t *)0x0;
    local_var_28 = 0;
    local_var_20 = 0;
    if (*(int64_t *)(*(int64_t *)(param_1 + 0x110) + 0xb8) == 0) {
      local_var_60 = 0;
      local_var_58 = 0;
      pcStack_50 = (code *)0x0;
      pcStack_48 = _guard_check_icall;
      GenericFunction_18014a370(*(uint64_t *)(param_1 + 0x110),1,&local_var_60,param_4,0xfffffffffffffffe);
      if (pcStack_50 != (code *)0x0) {
        (*pcStack_50)(&local_var_60,0,0);
      }
    }
    GenericFunction_18014b470(*(uint64_t *)(*(int64_t *)(param_1 + 0x110) + 0xb8),&pppppplocal_var_40);
    pppppppuVar5 = (uint64_t *******)pppppplocal_var_38;
    if ((uint64_t *******)pppppplocal_var_38 != &pppppplocal_var_40) {
      do {
        puVar3 = plocal_var_30;
        if ((*(byte *)(pppppppuVar5[4] + 9) & bVar1) == 0) {
          if (plocal_var_30 == (uint64_t *)0x0) {
            return true;
          }
          SystemCache_Manager(&pppppplocal_var_40,*plocal_var_30);
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puVar3);
        }
        pppppppuVar5 = (uint64_t *******)SystemFunction_00018066bd70(pppppppuVar5);
      } while (pppppppuVar5 != &pppppplocal_var_40);
    }
    puVar3 = plocal_var_30;
    if (plocal_var_30 != (uint64_t *)0x0) {
      SystemCache_Manager(&pppppplocal_var_40,*plocal_var_30);
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar3);
    }
  }
  return false;
}
// 函数: void DataStructure_e8910(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_e8910(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t *plVar4;
  int iVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uVar7 = 0xfffffffffffffffe;
  lVar2 = *(int64_t *)(param_1 + 0x270);
  if (lVar2 != 0) {
    lVar3 = *(int64_t *)(param_1 + 0x20);
    if (*(int64_t *)(lVar3 + 0x318) != 0) {
      iVar5 = _Mtx_lock(lVar3 + 0x60cb8);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      plVar4 = *(int64_t **)(lVar3 + 0x78);
      plVar6 = *(int64_t **)(lVar3 + 0x70);
      if (plVar6 != plVar4) {
        do {
          if (*plVar6 == lVar2) break;
          plVar6 = plVar6 + 1;
        } while (plVar6 != plVar4);
        if (plVar6 != plVar4) {
          plVar1 = plVar6 + 1;
          if (plVar1 < plVar4) {
// WARNING: Subroutine does not return
            memmove(plVar6,plVar1,(int64_t)plVar4 - (int64_t)plVar1,param_4,uVar7);
          }
          *(int64_t **)(lVar3 + 0x78) = plVar4 + -1;
        }
      }
      iVar5 = _Mtx_unlock(lVar3 + 0x60cb8);
      if (iVar5 != 0) {
        __Throw_C_error_std__YAXH_Z(iVar5);
      }
      (**(code **)(**(int64_t **)(lVar3 + 0x318) + 0x90))
                (*(int64_t **)(lVar3 + 0x318),*(uint64_t *)(param_1 + 0x270));
    }
    plVar4 = *(int64_t **)(param_1 + 0x270);
    *(uint64_t *)(param_1 + 0x270) = 0;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    GenericFunction_1801b05a0(lVar3,param_1);
  }
  lVar2 = *(int64_t *)(param_1 + 0x280);
  if (lVar2 != 0) {
    UISystem_315b0(lVar2);
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar2);
  }
  *(uint64_t *)(param_1 + 0x280) = 0;
  return;
}
// 函数: void DataStructure_e8a50(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_e8a50(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  byte bVar1;
  int32_t uVar2;
  int32_t uVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  int64_t *plStackX_10;
  uint64_t local_var_f78;
  uint local_var_f80;
  uint64_t uVar12;
  int8_t stack_array_60 [16];
  uint64_t local_var_50;
  uint64_t local_var_28;
  uVar12 = 0xfffffffffffffffe;
  lVar7 = param_2[4];
  if ((lVar7 == 0) || (lVar7 == *(int64_t *)(param_1 + 0x20))) {
    uVar8 = 0;
    if (param_2[0x2d] == 0) {
      if (lVar7 != 0) {
        RenderingSystem_98550(*(int64_t *)(param_1 + 0x20) + 0x607e0);
      }
    }
    else {
      local_var_f80 = 0;
      DataStructure_eb9a0(param_2[0x2d],param_2,1,0,local_var_f78 & 0xffffffffffffff00,0x14);
    }
  }
  else {
    uVar8 = 1;
    CoreEngine_198980(lVar7,param_2,param_3,param_4,0x1a);
  }
  if ((*(uint *)((int64_t)param_2 + 0x2ac) & 0x20000) == 0) {
    PhysicsSystem_CharacterController(param_1,1);
  }
  param_2[0x2d] = param_1;
  lVar7 = param_1;
  do {
    lVar6 = lVar7;
    lVar7 = *(int64_t *)(lVar6 + 0x168);
  } while (lVar7 != 0);
  DataStructure_f2700(lVar6,1);
  DataStructure_eaec0(param_2,*(uint64_t *)(param_1 + 0x20),uVar8,1,0,
                local_var_f80 & 0xffffff00,(char)param_4,0xffffffff,uVar12);
  plStackX_10 = param_2;
  (**(code **)(*param_2 + 0x28))(param_2);
  GenericFunction_1800b87c0(param_1 + 0x1c0,&plStackX_10);
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  if ((char)param_3 == '\0') {
    RenderingSystem_CameraController(param_2);
  }
  else {
    plVar5 = (int64_t *)DataStructure_f5d10(param_1 + 0x70,stack_array_60,param_2 + 6);
    cVar4 = SystemFunction_000180285980(param_2 + 6);
    if (cVar4 != '\0') {
      lVar7 = plVar5[1];
      param_2[6] = *plVar5;
      param_2[7] = lVar7;
      lVar7 = plVar5[3];
      param_2[8] = plVar5[2];
      param_2[9] = lVar7;
      uVar2 = *(int32_t *)((int64_t)plVar5 + 0x24);
      lVar7 = plVar5[5];
      uVar3 = *(int32_t *)((int64_t)plVar5 + 0x2c);
      *(int *)(param_2 + 10) = (int)plVar5[4];
      *(int32_t *)((int64_t)param_2 + 0x54) = uVar2;
      *(int *)(param_2 + 0xb) = (int)lVar7;
      *(int32_t *)((int64_t)param_2 + 0x5c) = uVar3;
      uVar2 = *(int32_t *)((int64_t)plVar5 + 0x34);
      lVar7 = plVar5[7];
      uVar3 = *(int32_t *)((int64_t)plVar5 + 0x3c);
      *(int *)(param_2 + 0xc) = (int)plVar5[6];
      *(int32_t *)((int64_t)param_2 + 100) = uVar2;
      *(int *)(param_2 + 0xd) = (int)lVar7;
      *(int32_t *)((int64_t)param_2 + 0x6c) = uVar3;
      RenderingSystem_CameraController(param_2);
      UtilitiesSystem_StringProcessor();
    }
  }
  UtilitiesSystem_StringProcessor(param_2);
  *(short *)(param_2 + 0x56) = (short)param_2[0x56] + 1;
  if (param_2[0x2d] != 0) {
    SystemFunction_0001802eeba0();
  }
  *(short *)(param_1 + 0x2b0) = *(short *)(param_1 + 0x2b0) + 1;
  if (*(int64_t *)(param_1 + 0x168) != 0) {
    SystemFunction_0001802eeba0();
    lVar7 = *(int64_t *)(param_1 + 0x168);
    while (lVar6 = lVar7, lVar6 != 0) {
      param_1 = lVar6;
      lVar7 = *(int64_t *)(lVar6 + 0x168);
    }
  }
  local_var_28 = 0xfffffffffffffffe;
  bVar1 = *(byte *)(param_1 + 0x2e8);
  *(byte *)(param_1 + 0x2e8) = bVar1 & 0xf7 | 8;
  lVar7 = *(int64_t *)(param_1 + 0x20);
  uVar10 = 0;
  if (lVar7 != 0) {
    lVar6 = *(int64_t *)(param_1 + 0x28);
    if ((bVar1 & 3 | 8) == 0xb) {
      if ((*(int64_t *)(lVar6 + 0x170) == 0) && (*(int64_t **)(param_1 + 0x10) != (int64_t *)0x0)
         ) {
        local_var_50 = 0x1802f2797;
        (**(code **)(**(int64_t **)(param_1 + 0x10) + 0x28))();
        local_var_50 = 0x1802f27a5;
        uVar12 = RenderingSystem_89a90(lVar7 + 0x29a0,&local_buffer_00000008);
        *(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170) = uVar12;
        lVar7 = *(int64_t *)(param_1 + 0x20);
        plVar5 = *(int64_t **)(lVar7 + 0x29a8);
        if (plVar5 != (int64_t *)0x0) {
          local_var_50 = 0x1802f27d8;
          (**(code **)(*plVar5 + 0x18))
                    (plVar5,*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170),param_1 + 0x70);
          lVar7 = *(int64_t *)(param_1 + 0x20);
        }
        plVar5 = *(int64_t **)(lVar7 + 0x29a8);
        if (plVar5 != (int64_t *)0x0) {
          local_var_50 = 0x1802f27fd;
          (**(code **)(*plVar5 + 0x20))
                    (plVar5,*(uint64_t *)(*(int64_t *)(param_1 + 0x28) + 0x170),
                     *(int32_t *)(param_1 + 0x18));
        }
      }
    }
    else if (*(int64_t *)(lVar6 + 0x170) != 0) {
      plVar5 = *(int64_t **)(lVar7 + 0x29a8);
      if (plVar5 != (int64_t *)0x0) {
        local_var_50 = 0x1802f2820;
        (**(code **)(*plVar5 + 0x10))(plVar5,*(int64_t *)(lVar6 + 0x170));
        lVar6 = *(int64_t *)(param_1 + 0x28);
      }
      *(uint64_t *)(lVar6 + 0x170) = 0;
    }
  }
  uVar11 = uVar10;
  if (*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3 != 0) {
    do {
      local_var_50 = 0x1802f2864;
      DataStructure_f2700(*(uint64_t *)(uVar11 + *(int64_t *)(param_1 + 0x1c0)),(bVar1 & 1) != 0);
      uVar9 = (int)uVar10 + 1;
      uVar10 = (uint64_t)uVar9;
      uVar11 = uVar11 + 8;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - *(int64_t *)(param_1 + 0x1c0) >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void NetworkSystem_SecurityManager(int64_t param_1,uint64_t *param_2)
void NetworkSystem_SecurityManager(int64_t param_1,uint64_t *param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  uint64_t uVar6;
  lVar2 = *(int64_t *)(param_1 + 0x1c0);
  uVar6 = 0;
  if (*(int64_t *)(param_1 + 0x1c8) - lVar2 >> 3 != 0) {
    do {
      puVar5 = (uint64_t *)param_2[1];
      uVar1 = *(uint64_t *)(lVar2 + uVar6 * 8);
      if (puVar5 < (uint64_t *)param_2[2]) {
        param_2[1] = (uint64_t)(puVar5 + 1);
        *puVar5 = uVar1;
      }
      else {
        puVar4 = (uint64_t *)*param_2;
        lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
        if (lVar2 == 0) {
          lVar2 = 1;
LAB_1802e8cf2:
          puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)param_2[3]);
          puVar4 = (uint64_t *)*param_2;
          puVar5 = (uint64_t *)param_2[1];
        }
        else {
          lVar2 = lVar2 * 2;
          if (lVar2 != 0) goto LAB_1802e8cf2;
          puVar3 = (uint64_t *)0x0;
        }
        if (puVar4 != puVar5) {
// WARNING: Subroutine does not return
          memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
        }
        *puVar3 = uVar1;
        if (*param_2 != 0) {
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        *param_2 = (uint64_t)puVar3;
        param_2[2] = (uint64_t)(puVar3 + lVar2);
        param_2[1] = (uint64_t)(puVar3 + 1);
      }
      NetworkSystem_SecurityManager(*(uint64_t *)(*(int64_t *)(param_1 + 0x1c0) + uVar6 * 8),param_2,0);
      lVar2 = *(int64_t *)(param_1 + 0x1c0);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - lVar2 >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_e8c91(uint64_t param_1,int64_t param_2)
void DataStructure_e8c91(uint64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  int64_t lVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *unaff_RBX;
  uint64_t *puVar5;
  int64_t unaff_R13;
  uint64_t unaff_R14;
  do {
    puVar5 = (uint64_t *)unaff_RBX[1];
    uVar1 = *(uint64_t *)(param_2 + unaff_R14 * 8);
    if (puVar5 < (uint64_t *)unaff_RBX[2]) {
      unaff_RBX[1] = (uint64_t)(puVar5 + 1);
      *puVar5 = uVar1;
    }
    else {
      puVar4 = (uint64_t *)*unaff_RBX;
      lVar2 = (int64_t)puVar5 - (int64_t)puVar4 >> 3;
      if (lVar2 == 0) {
        lVar2 = 1;
LAB_1802e8cf2:
        puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,(char)unaff_RBX[3]);
        puVar4 = (uint64_t *)*unaff_RBX;
        puVar5 = (uint64_t *)unaff_RBX[1];
      }
      else {
        lVar2 = lVar2 * 2;
        if (lVar2 != 0) goto LAB_1802e8cf2;
        puVar3 = (uint64_t *)0x0;
      }
      if (puVar4 != puVar5) {
// WARNING: Subroutine does not return
        memmove(puVar3,puVar4,(int64_t)puVar5 - (int64_t)puVar4);
      }
      *puVar3 = uVar1;
      if (*unaff_RBX != 0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      *unaff_RBX = (uint64_t)puVar3;
      unaff_RBX[2] = (uint64_t)(puVar3 + lVar2);
      unaff_RBX[1] = (uint64_t)(puVar3 + 1);
    }
    NetworkSystem_SecurityManager(*(uint64_t *)(*(int64_t *)(unaff_R13 + 0x1c0) + unaff_R14 * 8));
    param_2 = *(int64_t *)(unaff_R13 + 0x1c0);
    unaff_R14 = unaff_R14 + 1;
    if ((uint64_t)(*(int64_t *)(unaff_R13 + 0x1c8) - param_2 >> 3) <= unaff_R14) {
      return;
    }
  } while( true );
}
// 函数: void DataStructure_e8da3(void)
void DataStructure_e8da3(void)
{
  return;
}
// 函数: void DataStructure_e8db0(int64_t param_1)
void DataStructure_e8db0(int64_t param_1)
{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint uVar7;
  uint64_t uVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  uint64_t uVar12;
  uVar12 = 0xfffffffffffffffe;
  uVar6 = 0;
  plVar1 = (int64_t *)(param_1 + 0x1c0);
  plVar11 = (int64_t *)*plVar1;
  uVar5 = *(int64_t *)(param_1 + 0x1c8) - (int64_t)plVar11 >> 3;
  plVar4 = plVar11;
  uVar8 = uVar6;
  uVar10 = uVar6;
  if (uVar5 != 0) {
    do {
      uVar7 = (uint)uVar8 + 1;
      if ((*(uint *)(*plVar4 + 0x2ac) & 0x20000) != 0) {
        uVar7 = (uint)uVar8;
      }
      uVar9 = (int)uVar10 + 1;
      plVar4 = plVar4 + 1;
      uVar8 = (uint64_t)uVar7;
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 < uVar5);
    uVar8 = uVar6;
    uVar10 = uVar6;
    if (uVar7 != 0) {
      do {
        lVar2 = *(int64_t *)(uVar10 + (int64_t)plVar11);
        *(uint64_t *)(lVar2 + 0x168) = 0;
        DataStructure_f2700(lVar2,1);
        DataStructure_eaec0(*(uint64_t *)(uVar10 + *plVar1),0,1,1,0,0,1,0xf,uVar12);
        uVar7 = (int)uVar8 + 1;
        plVar11 = (int64_t *)*plVar1;
        uVar8 = (uint64_t)uVar7;
        uVar10 = uVar10 + 8;
      } while ((uint64_t)(int64_t)(int)uVar7 <
               (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - (int64_t)plVar11 >> 3));
      SystemCore_Controller(plVar1);
      lVar2 = *(int64_t *)(param_1 + 0x168);
      if ((lVar2 != 0) && (*(int64_t *)(lVar2 + 0x268) != 0)) {
        PhysicsSystem_CharacterController(lVar2,1);
        return;
      }
      if (*(int64_t *)(param_1 + 0x268) != 0) {
        plVar11 = *(int64_t **)(param_1 + 0x268);
        *(uint64_t *)(param_1 + 0x268) = 0;
        if (plVar11 != (int64_t *)0x0) {
          (**(code **)(*plVar11 + 0x38))();
        }
      }
      iVar3 = (int)(*(int64_t *)(param_1 + 0x1c8) - *plVar1 >> 3);
      if (iVar3 < 1) {
        return;
      }
      do {
        PhysicsSystem_CharacterController(*(uint64_t *)(*plVar1 + uVar6 * 8),1);
        uVar6 = uVar6 + 1;
      } while ((int64_t)uVar6 < (int64_t)iVar3);
      return;
    }
  }
  uVar8 = uVar6;
  if (uVar5 != 0) {
    do {
      lVar2 = *(int64_t *)(uVar8 + (int64_t)plVar11);
      *(uint64_t *)(lVar2 + 0x168) = 0;
      DataStructure_f2700(lVar2,1);
      DataStructure_eaec0(*(uint64_t *)(uVar8 + *plVar1),0,1,1,0,0,1,0xe);
      uVar7 = (int)uVar6 + 1;
      uVar6 = (uint64_t)uVar7;
      plVar11 = (int64_t *)*plVar1;
      uVar8 = uVar8 + 8;
    } while ((uint64_t)(int64_t)(int)uVar7 <
             (uint64_t)(*(int64_t *)(param_1 + 0x1c8) - (int64_t)plVar11 >> 3));
  }
  SystemCore_Controller(plVar1);
  return;
}
int64_t * DataStructure_e8fb0(int64_t param_1)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int iVar6;
  int64_t lVar7;
  int64_t lVar8;
  lVar3 = *(int64_t *)(param_1 + 0xf0);
  iVar6 = 0;
  if (*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3 != 0) {
    lVar4 = 0;
    do {
      if ((*(int64_t **)(lVar4 + lVar3) != (int64_t *)0x0) &&
         (iVar1 = (**(code **)(**(int64_t **)(lVar4 + lVar3) + 0x98))(), iVar1 == 1)) {
        return *(int64_t **)(*(int64_t *)(param_1 + 0xf0) + (int64_t)iVar6 * 8);
      }
      lVar3 = *(int64_t *)(param_1 + 0xf0);
      iVar6 = iVar6 + 1;
      lVar4 = lVar4 + 8;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(param_1 + 0xf8) - lVar3 >> 3));
  }
  lVar3 = *(int64_t *)(param_1 + 0x260);
  if (lVar3 != 0) {
    lVar4 = *(int64_t *)(lVar3 + 0x1a8);
    iVar6 = 0;
    if (*(int64_t *)(lVar3 + 0x1b0) - lVar4 >> 3 != 0) {
      lVar7 = 0;
      do {
        plVar5 = *(int64_t **)(lVar7 + lVar4);
        if ((plVar5 != (int64_t *)0x0) &&
           (iVar1 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar1 == 1)) {
DataStructure_e916e:
          if (plVar5 == (int64_t *)0x0) {
            return (int64_t *)0x0;
          }
          return plVar5;
        }
        lVar4 = *(int64_t *)(lVar3 + 0x1a8);
        iVar6 = iVar6 + 1;
        lVar7 = lVar7 + 8;
      } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(*(int64_t *)(lVar3 + 0x1b0) - lVar4 >> 3));
    }
    iVar6 = 0;
    if ('\0' < *(char *)(lVar3 + 0x20)) {
      lVar4 = 0;
      do {
        lVar7 = *(int64_t *)(lVar3 + 0x18);
        iVar1 = 0;
        if (*(int64_t *)(lVar4 + 0xb8 + lVar7) - *(int64_t *)(lVar4 + 0xb0 + lVar7) >> 3 != 0) {
          lVar8 = 0;
          do {
            plVar5 = *(int64_t **)(lVar8 + *(int64_t *)(lVar4 + 0xb0 + lVar7));
            if ((plVar5 != (int64_t *)0x0) &&
               (iVar2 = (**(code **)(*plVar5 + 0x98))(plVar5), iVar2 == 1)) goto DataStructure_e916e;
            lVar7 = *(int64_t *)(lVar3 + 0x18);
            iVar1 = iVar1 + 1;
            lVar8 = lVar8 + 8;
          } while ((uint64_t)(int64_t)iVar1 <
                   (uint64_t)
                   (*(int64_t *)(lVar4 + 0xb8 + lVar7) - *(int64_t *)(lVar4 + 0xb0 + lVar7) >> 3))
          ;
        }
        iVar6 = iVar6 + 1;
        lVar4 = lVar4 + 0x100;
      } while (iVar6 < *(char *)(lVar3 + 0x20));
    }
  }
  return (int64_t *)0x0;
}
int64_t * DataStructure_e9025(void)
{
  int iVar1;
  int iVar2;
  int64_t *plVar3;
  int iVar4;
  int64_t unaff_RSI;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  if (unaff_RSI != 0) {
    lVar7 = *(int64_t *)(unaff_RSI + 0x1a8);
    iVar4 = 0;
    if (*(int64_t *)(unaff_RSI + 0x1b0) - lVar7 >> 3 != 0) {
      lVar5 = 0;
      do {
        plVar3 = *(int64_t **)(lVar5 + lVar7);
        if ((plVar3 != (int64_t *)0x0) &&
           (iVar1 = (**(code **)(*plVar3 + 0x98))(plVar3), iVar1 == 1)) {
DataStructure_e916e:
          if (plVar3 == (int64_t *)0x0) {
            return (int64_t *)0x0;
          }
          return plVar3;
        }
        lVar7 = *(int64_t *)(unaff_RSI + 0x1a8);
        iVar4 = iVar4 + 1;
        lVar5 = lVar5 + 8;
      } while ((uint64_t)(int64_t)iVar4 <
               (uint64_t)(*(int64_t *)(unaff_RSI + 0x1b0) - lVar7 >> 3));
    }
    iVar4 = 0;
    if ('\0' < *(char *)(unaff_RSI + 0x20)) {
      lVar7 = 0;
      do {
        lVar5 = *(int64_t *)(unaff_RSI + 0x18);
        iVar1 = 0;
        if (*(int64_t *)(lVar7 + 0xb8 + lVar5) - *(int64_t *)(lVar7 + 0xb0 + lVar5) >> 3 != 0) {
          lVar6 = 0;
          do {
            plVar3 = *(int64_t **)(lVar6 + *(int64_t *)(lVar7 + 0xb0 + lVar5));
            if ((plVar3 != (int64_t *)0x0) &&
               (iVar2 = (**(code **)(*plVar3 + 0x98))(plVar3), iVar2 == 1)) goto DataStructure_e916e;
            lVar5 = *(int64_t *)(unaff_RSI + 0x18);
            iVar1 = iVar1 + 1;
            lVar6 = lVar6 + 8;
          } while ((uint64_t)(int64_t)iVar1 <
                   (uint64_t)
                   (*(int64_t *)(lVar7 + 0xb8 + lVar5) - *(int64_t *)(lVar7 + 0xb0 + lVar5) >> 3))
          ;
        }
        iVar4 = iVar4 + 1;
        lVar7 = lVar7 + 0x100;
      } while (iVar4 < *(char *)(unaff_RSI + 0x20));
    }
  }
  return (int64_t *)0x0;
}
uint64_t DataStructure_e9158(void)
{
  int64_t unaff_RSI;
  int unaff_EDI;
  return *(uint64_t *)(*(int64_t *)(unaff_RSI + 0xf0) + (int64_t)unaff_EDI * 8);
}
// 函数: void DataStructure_e916e(void)
void DataStructure_e916e(void)
{
  return;
}