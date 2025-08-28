/* 此文件包含部分未处理的原始函数，这些函数将在后续处理中完成语义化替换 */
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part614.c - 15 个函数
// 函数: void UtilitiesSystem_05bc0(int64_t param_1)
void UtilitiesSystem_05bc0(int64_t param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    lVar2 = *(int64_t *)(param_1 + 0x8a8);
    if ((*(int64_t *)(lVar2 + 0x260) != 0) &&
       (lVar1 = *(int64_t *)(*(int64_t *)(lVar2 + 0x260) + 0x210), lVar1 != 0)) {
      *(uint64_t *)(lVar1 + 0x48) = 0;
      *(uint64_t *)(lVar1 + 0x50) = 0;
      lVar2 = *(int64_t *)(param_1 + 0x8a8);
    }
    DataStructure_eeb00(lVar2);
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    if ((lVar2 != 0) && (lVar2 = *(int64_t *)(lVar2 + 0x210), lVar2 != 0)) {
      *(int64_t *)(lVar2 + 0x48) = param_1;
      *(code **)(lVar2 + 0x50) = NetworkSystem_41110;
    }
    NetworkSystem_444c0(param_1);
    NetworkSystem_44ac0(param_1);
  }
  return;
}
// 函数: void UtilitiesSystem_05c80(int64_t param_1,int8_t param_2)
void UtilitiesSystem_05c80(int64_t param_1,int8_t param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lStack_30;
  int32_t local_var_28;
  int8_t stack_array_20 [24];
  NetworkSystem_40840(param_1,0);
  if (*(int64_t *)(param_1 + 0x8a8) != 0) {
    DataStructure_e9fa0(*(int64_t *)(param_1 + 0x8a8),param_2,1);
  }
  NetworkSystem_40130(param_1);
  if (*(int64_t *)(param_1 + 0x830) != 0) {
    NetworkSystem_4a450();
  }
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  local_var_28 = *(int32_t *)(param_1 + 0x938);
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_05ce0(int64_t param_1,int64_t *param_2)
void UtilitiesSystem_05ce0(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  int64_t **pplStackX_20;
  int64_t lStack_30;
  uint64_t local_var_28;
  int8_t stack_array_20 [8];
  local_var_28 = 0xfffffffffffffffe;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != (int64_t *)0x0)) {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,3);
    plVar5 = (int64_t *)RenderingSystem_ShaderManager(uVar4);
    plStackX_10 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_18 = &plStackX_8;
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    DataStructure_75cf0(plVar5,0,&plStackX_8,1);
    uVar4 = *(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    pplStackX_20 = &plStackX_8;
    DataStructure_fc0f0(uVar4,plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x38))(plVar5);
    }
  }
  lVar2 = *(int64_t *)(param_1 + 0x930);
  lVar1 = lVar2 + 0x2be8;
  iVar3 = _Mtx_lock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  local_var_28 = CONCAT44(local_var_28._4_4_,*(int32_t *)(param_1 + 0x938));
  lStack_30 = param_1;
  UISystem_dd4d0(lVar2 + 0x2b88,stack_array_20,&lStack_30);
  iVar3 = _Mtx_unlock(lVar1);
  if (iVar3 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar3);
  }
  return;
}
// 函数: void UtilitiesSystem_05df0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_05df0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  char cVar4;
  int8_t uVar5;
  int iVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uint64_t uVar8;
  int64_t lVar9;
  int64_t lStack_30;
  if (((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) && (param_2 != 0)) {
    lVar2 = *(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260);
    for (plVar7 = *(int64_t **)(lVar2 + 0x1a8); plVar7 < *(int64_t **)(lVar2 + 0x1b0);
        plVar7 = plVar7 + 1) {
      iVar6 = (**(code **)(*(int64_t *)*plVar7 + 0x98))();
      if (iVar6 == 0) {
        plVar3 = (int64_t *)*plVar7;
        plStackX_10 = plVar3;
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        cVar4 = DataStructure_828a0(plVar3,param_2);
        if ((cVar4 != '\0') && ((plVar3[8] - plVar3[7] & 0xfffffffffffffff0U) == 0)) {
          plStackX_8 = plVar3;
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          pplStackX_18 = &plStackX_8;
          uVar5 = DataStructure_fc790(lVar2,plStackX_8);
          DataStructure_fca80(lVar2,plStackX_8,uVar5);
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          if (plVar3 != (int64_t *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3);
          }
          break;
        }
        if (plVar3 != (int64_t *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3);
        }
      }
    }
  }
  uVar8 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x930);
  lVar2 = lVar1 + 0x2be8;
  lVar9 = lVar2;
  iVar6 = _Mtx_lock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  lStack_30 = param_1;
  UISystem_dd4d0(lVar1 + 0x2b88,&local_buffer_ffffffffffffffe0,&lStack_30,param_4,uVar8,lVar9,1);
  iVar6 = _Mtx_unlock(lVar2);
  if (iVar6 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar6);
  }
  return;
}
uint64_t * UtilitiesSystem_05fa0(uint64_t *param_1,int64_t param_2)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  int8_t stack_array_18 [16];
  puVar2 = (uint64_t *)
           UISystem_bc610(param_1,stack_array_18,*(uint64_t *)(*(int64_t *)(param_2 + 0x830) + 0x188))
  ;
  uVar1 = puVar2[1];
  *param_1 = *puVar2;
  param_1[1] = uVar1;
  return param_1;
}
// WARNING: Removing unreachable block (ram,0x0001802e8b83)
// WARNING: Removing unreachable block (ram,0x0001802e8ba5)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_05ff0(int64_t param_1,int64_t param_2,int64_t param_3)
void UtilitiesSystem_05ff0(int64_t param_1,int64_t param_2,int64_t param_3)
{
  int *piVar1;
  byte bVar2;
  int8_t uVar3;
  int8_t uVar4;
  int32_t uVar5;
  int64_t *plVar6;
  int iVar7;
  int64_t lVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint64_t uVar13;
  int8_t uVar14;
  int64_t *unaff_RBX;
  uint64_t uVar15;
  int64_t *plVar16;
  uint uVar17;
  uint64_t uVar18;
  int32_t uVar19;
  int64_t lVar20;
  uint64_t uVar21;
  int64_t *plStackX_8;
  uint64_t local_var_f78;
  uint64_t local_var_f80;
  int8_t uVar22;
  int64_t *plStack_50;
  int64_t *plStack_48;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uVar18 = 0;
  if (*(int *)(param_3 + 0x58) < 2) {
    *(int32_t *)(param_3 + 0x58) = 2;
  }
  else {
    plStack_50 = (int64_t *)0x0;
    plStack_48 = (int64_t *)0x0;
    local_var_40 = 0;
    local_var_38._0_4_ = 0x16;
    plVar11 = *(int64_t **)(param_3 + 0x38);
    iVar7 = (int)(*(int64_t *)(param_3 + 0x40) - (int64_t)plVar11 >> 4);
    lVar20 = (int64_t)iVar7;
    uVar13 = uVar18;
    uVar15 = uVar18;
    uVar21 = uVar18;
    uVar19 = 0x16;
    if (0 < iVar7) {
      do {
        plVar11 = *(int64_t **)(param_3 + 0x38);
        if ((*(byte *)(uVar15 + 8 + (int64_t)plVar11) & 1) != 0) {
          local_var_f80 = 0x18060607f;
          lVar12 = UtilitiesSystem_07910(&plStack_50,plVar11 + (int64_t)(int)uVar21 * 2);
          *(int32_t *)(lVar12 + 8) = 1;
          plVar11 = *(int64_t **)(param_3 + 0x38);
        }
        lVar20 = lVar20 + -1;
        uVar13 = local_var_40;
        uVar15 = uVar15 + 0x10;
        uVar21 = (uint64_t)((int)uVar21 + 1);
        uVar19 = (int32_t)local_var_38;
      } while (lVar20 != 0);
    }
    *(int64_t **)(param_3 + 0x38) = plStack_50;
    plVar6 = *(int64_t **)(param_3 + 0x40);
    *(int64_t **)(param_3 + 0x40) = plStack_48;
    local_var_40 = *(uint64_t *)(param_3 + 0x48);
    *(uint64_t *)(param_3 + 0x48) = uVar13;
    uVar5 = *(int32_t *)(param_3 + 0x50);
    *(int32_t *)(param_3 + 0x50) = uVar19;
    local_var_38 = CONCAT44(local_var_38._4_4_,uVar5);
    plStack_48 = plVar6;
    plVar16 = plVar11;
    plStack_50 = plVar11;
    while (plVar16 != plVar6) {
      if ((int64_t *)*plVar16 != (int64_t *)0x0) {
        local_var_f80 = 0x1806060fe;
        plStackX_8 = plVar16;
        (**(code **)(*(int64_t *)*plVar16 + 0x38))();
      }
      plVar16 = plVar16 + 2;
      plStackX_8 = plVar16;
    }
    if (plVar11 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar11);
    }
  }
  if (*(int *)(param_2 + 0x58) < 2) {
    iVar7 = (int)(*(int64_t *)(param_2 + 0x40) - *(int64_t *)(param_2 + 0x38) >> 4);
    lVar20 = (int64_t)iVar7;
    if (0 < iVar7) {
      do {
        piVar1 = (int *)(uVar18 + 8 + *(int64_t *)(param_2 + 0x38));
        *piVar1 = *piVar1 << 1;
        uVar18 = uVar18 + 0x10;
        lVar20 = lVar20 + -1;
      } while (lVar20 != 0);
    }
    *(int32_t *)(param_2 + 0x58) = 2;
  }
  else {
    local_var_f80 = 0x180606137;
    DataStructure_77a20(param_2,0);
  }
  plStack_50 = (int64_t *)0xfffffffffffffffe;
  lVar20 = *(int64_t *)(*(int64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260) + 0x210);
  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x220,0x10,3);
  uVar14 = *(int8_t *)(lVar20 + 0x2589);
  bVar2 = *(byte *)(lVar20 + 0x2588);
  uVar22 = *(int8_t *)(lVar20 + 0x2587);
  uVar3 = *(int8_t *)(lVar20 + 0x2586);
  uVar4 = *(int8_t *)(lVar20 + 0x2585);
  uVar10 = NetworkSystem_44d70(lVar20,&plStackX_8);
  uVar17 = (uint)bVar2;
  uVar13 = CONCAT71((int7)((uint64_t)local_var_f80 >> 8),uVar3);
  uVar18 = CONCAT71((int7)((uint64_t)local_var_f78 >> 8),uVar4);
  NetworkSystem_ef6e0(uVar9,*(uint64_t *)(*(int64_t *)(param_1 + 0x8a8) + 0x260),
                *(uint64_t *)(lVar20 + 0x2548),uVar10,uVar18,uVar13,uVar22,uVar17,uVar14);
  uVar9 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2f0,0x10,3);
  plVar11 = (int64_t *)DataStructure_e6b00(uVar9,4);
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x28))(plVar11);
  }
  plVar6 = *(int64_t **)(param_1 + 0x10);
  *(int64_t **)(param_1 + 0x10) = plVar11;
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x38))();
  }
  GenericFunction_180170ac0(*(uint64_t *)(param_1 + 0x10),&processed_var_9752_ptr);
  DataStructure_ec3d0(*(uint64_t *)(param_1 + 0x10),*(uint64_t *)(lVar20 + 0x2548));
  DataStructure_fc0f0(*(uint64_t *)(*(int64_t *)(param_1 + 0x10) + 0x260),param_3);
  lVar20 = *(int64_t *)(param_1 + 0x10);
  *(uint *)(lVar20 + 0x2ac) = *(uint *)(lVar20 + 0x2ac) | 0x10000000;
  lVar12 = *(int64_t *)(lVar20 + 0x20);
  if (lVar12 != 0) {
    iVar7 = *(int *)(lVar20 + 0x2b8);
    if (((iVar7 != -1) && ((uint64_t)(int64_t)iVar7 < *(uint64_t *)(lVar12 + 0x60838))) &&
       ((*(uint64_t *)(*(int64_t *)(lVar12 + 0x60830) + (int64_t)iVar7 * 0x10) &
        0xffffffff00000000) != 0)) {
      RenderingSystem_98450(lVar12 + 0x607e0);
    }
  }
  plVar11 = *(int64_t **)(param_1 + 0x10);
  lVar12 = *(int64_t *)(param_1 + 0x8a8);
  lVar20 = plVar11[4];
  plStackX_8 = unaff_RBX;
  if ((lVar20 == 0) || (lVar20 == *(int64_t *)(lVar12 + 0x20))) {
    uVar14 = 0;
    if (plVar11[0x2d] == 0) {
      if (lVar20 != 0) {
        RenderingSystem_98550(*(int64_t *)(lVar12 + 0x20) + 0x607e0);
      }
    }
    else {
      uVar13 = CONCAT44((int)(uVar13 >> 0x20),0x14);
      DataStructure_eb9a0(plVar11[0x2d],plVar11,1,0,uVar18 & 0xffffffffffffff00,uVar13,uVar22,uVar17,
                    0xfffffffffffffffe);
    }
  }
  else {
    uVar14 = 1;
    CoreEngine_198980(lVar20);
  }
  if ((*(uint *)((int64_t)plVar11 + 0x2ac) & 0x20000) == 0) {
    PhysicsSystem_CharacterController(lVar12,1);
  }
  plVar11[0x2d] = lVar12;
  lVar20 = lVar12;
  do {
    lVar8 = lVar20;
    lVar20 = *(int64_t *)(lVar8 + 0x168);
  } while (lVar20 != 0);
  DataStructure_f2700(lVar8,1);
  DataStructure_eaec0(plVar11,*(uint64_t *)(lVar12 + 0x20),uVar14,1,0,uVar13 & 0xffffffffffffff00,1,
                0xffffffff);
  (**(code **)(*plVar11 + 0x28))(plVar11);
  GenericFunction_1800b87c0(lVar12 + 0x1c0,&local_buffer_00000010);
  if (plVar11 != (int64_t *)0x0) {
    (**(code **)(*plVar11 + 0x38))();
  }
  RenderingSystem_CameraController(plVar11);
  UtilitiesSystem_StringProcessor(plVar11);
  *(short *)(plVar11 + 0x56) = (short)plVar11[0x56] + 1;
  if (plVar11[0x2d] != 0) {
    Function_bcb0dca9();
  }
  *(short *)(lVar12 + 0x2b0) = *(short *)(lVar12 + 0x2b0) + 1;
  if (*(int64_t *)(lVar12 + 0x168) != 0) {
    Function_bcb0dca9();
    for (lVar20 = *(int64_t *)(lVar12 + 0x168); lVar20 != 0; lVar20 = *(int64_t *)(lVar20 + 0x168)
        ) {
      lVar12 = lVar20;
    }
  }
  bVar2 = *(byte *)(lVar12 + 0x2e8);
  *(byte *)(lVar12 + 0x2e8) = bVar2 & 0xf7 | 8;
  lVar20 = *(int64_t *)(lVar12 + 0x20);
  uVar18 = 0;
  if (lVar20 != 0) {
    lVar8 = *(int64_t *)(lVar12 + 0x28);
    if ((bVar2 & 3 | 8) == 0xb) {
      if ((*(int64_t *)(lVar8 + 0x170) == 0) &&
         (plVar11 = *(int64_t **)(lVar12 + 0x10), plVar11 != (int64_t *)0x0)) {
        plStack_50 = (int64_t *)0x1802f2797;
        plStackX_8 = plVar11;
        (**(code **)(*plVar11 + 0x28))();
        plStack_50 = (int64_t *)0x1802f27a5;
        uVar9 = RenderingSystem_89a90(lVar20 + 0x29a0,&plStackX_8);
        *(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170) = uVar9;
        lVar20 = *(int64_t *)(lVar12 + 0x20);
        plVar11 = *(int64_t **)(lVar20 + 0x29a8);
        if (plVar11 != (int64_t *)0x0) {
          plStack_50 = (int64_t *)0x1802f27d8;
          (**(code **)(*plVar11 + 0x18))
                    (plVar11,*(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170),lVar12 + 0x70);
          lVar20 = *(int64_t *)(lVar12 + 0x20);
        }
        plVar11 = *(int64_t **)(lVar20 + 0x29a8);
        if (plVar11 != (int64_t *)0x0) {
          plStack_50 = (int64_t *)0x1802f27fd;
          (**(code **)(*plVar11 + 0x20))
                    (plVar11,*(uint64_t *)(*(int64_t *)(lVar12 + 0x28) + 0x170),
                     *(int32_t *)(lVar12 + 0x18));
        }
      }
    }
    else if (*(int64_t *)(lVar8 + 0x170) != 0) {
      plVar11 = *(int64_t **)(lVar20 + 0x29a8);
      if (plVar11 != (int64_t *)0x0) {
        plStack_50 = (int64_t *)0x1802f2820;
        (**(code **)(*plVar11 + 0x10))(plVar11,*(int64_t *)(lVar8 + 0x170));
        lVar8 = *(int64_t *)(lVar12 + 0x28);
      }
      *(uint64_t *)(lVar8 + 0x170) = 0;
    }
  }
  uVar13 = uVar18;
  if (*(int64_t *)(lVar12 + 0x1c8) - *(int64_t *)(lVar12 + 0x1c0) >> 3 != 0) {
    do {
      plStack_50 = (int64_t *)0x1802f2864;
      DataStructure_f2700(*(uint64_t *)(uVar13 + *(int64_t *)(lVar12 + 0x1c0)),(bVar2 & 1) != 0);
      uVar17 = (int)uVar18 + 1;
      uVar18 = (uint64_t)uVar17;
      uVar13 = uVar13 + 8;
    } while ((uint64_t)(int64_t)(int)uVar17 <
             (uint64_t)(*(int64_t *)(lVar12 + 0x1c8) - *(int64_t *)(lVar12 + 0x1c0) >> 3));
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_061a0(int64_t param_1,int32_t *param_2,int32_t param_3,byte param_4,
void UtilitiesSystem_061a0(int64_t param_1,int32_t *param_2,int32_t param_3,byte param_4,
                  int64_t param_5,int32_t *param_6)
{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int64_t lVar10;
  int64_t lVar11;
  lVar11 = *(int64_t *)(param_1 + 0x8a8);
  if (lVar11 != 0) {
    lVar11 = *(int64_t *)(lVar11 + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(lVar11 + 0x208) + 0x148);
  uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)UISystem_35440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (param_4 != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + param_5);
      if (cVar3 < cVar2) {
        uVar4 = param_6[1];
        uVar5 = param_6[2];
        uVar6 = param_6[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *param_6;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        SystemCore_Allocator(&processed_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      param_6 = param_6 + 4;
    } while (lVar10 < (int64_t)(uint64_t)param_4);
  }
  lVar10 = *(int64_t *)(lVar11 + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(lVar11 + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar10);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_061b3(uint64_t param_1,int32_t *param_2,int32_t param_3)
void UtilitiesSystem_061b3(uint64_t param_1,int32_t *param_2,int32_t param_3)
{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  byte unaff_BL;
  int64_t lVar10;
  int64_t unaff_RSI;
  int64_t local_buffer_70;
  int32_t *local_buffer_78;
  if (unaff_RSI != 0) {
    unaff_RSI = *(int64_t *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)UISystem_35440(uVar8,cVar2);
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[2];
  uVar7 = param_2[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + local_buffer_70);
      if (cVar3 < cVar2) {
        uVar4 = local_buffer_78[1];
        uVar5 = local_buffer_78[2];
        uVar6 = local_buffer_78[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *local_buffer_78;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        SystemCore_Allocator(&processed_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      local_buffer_78 = local_buffer_78 + 4;
    } while (lVar10 < (int64_t)(uint64_t)unaff_BL);
  }
  lVar10 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar10);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_061c5(uint64_t param_1,uint64_t param_2,int32_t param_3)
void UtilitiesSystem_061c5(uint64_t param_1,uint64_t param_2,int32_t param_3)
{
  int32_t *puVar1;
  char cVar2;
  char cVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int32_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  byte unaff_BL;
  int64_t lVar10;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  int64_t local_buffer_70;
  int32_t *local_buffer_78;
  if (unaff_RSI != 0) {
    unaff_RSI = *(int64_t *)(unaff_RSI + 0x260);
  }
  cVar2 = *(char *)(*(int64_t *)(unaff_RSI + 0x208) + 0x148);
  uVar8 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3);
  puVar9 = (int32_t *)UISystem_35440(uVar8,cVar2);
  uVar4 = *unaff_RDI;
  uVar5 = unaff_RDI[1];
  uVar6 = unaff_RDI[2];
  uVar7 = unaff_RDI[3];
  puVar9[4] = param_3;
  *puVar9 = uVar4;
  puVar9[1] = uVar5;
  puVar9[2] = uVar6;
  puVar9[3] = uVar7;
  if (unaff_BL != 0) {
    lVar10 = 0;
    do {
      cVar3 = *(char *)(lVar10 + local_buffer_70);
      if (cVar3 < cVar2) {
        uVar4 = local_buffer_78[1];
        uVar5 = local_buffer_78[2];
        uVar6 = local_buffer_78[3];
        puVar1 = (int32_t *)(*(int64_t *)(puVar9 + 6) + (int64_t)cVar3 * 0x10);
        *puVar1 = *local_buffer_78;
        puVar1[1] = uVar4;
        puVar1[2] = uVar5;
        puVar1[3] = uVar6;
      }
      else {
        SystemCore_Allocator(&processed_var_7992_ptr,(int)cVar3);
      }
      lVar10 = lVar10 + 1;
      local_buffer_78 = local_buffer_78 + 4;
    } while (lVar10 < (int64_t)(uint64_t)unaff_BL);
  }
  lVar10 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar10 == 0) {
    *(int32_t **)(unaff_RSI + 0xd8) = puVar9;
    return;
  }
  if (*(int64_t *)(lVar10 + 0x18) == 0) {
    *(uint64_t *)(lVar10 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar10);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void UtilitiesSystem_06227(void)
void UtilitiesSystem_06227(void)
{
  int32_t *puVar1;
  char cVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int64_t lVar6;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  char unaff_R12B;
  int64_t unaff_R15;
  int64_t local_buffer_70;
  int32_t *local_buffer_78;
  lVar6 = 0;
  do {
    cVar2 = *(char *)(lVar6 + local_buffer_70);
    if (cVar2 < unaff_R12B) {
      uVar3 = local_buffer_78[1];
      uVar4 = local_buffer_78[2];
      uVar5 = local_buffer_78[3];
      puVar1 = (int32_t *)(*(int64_t *)(unaff_RBP + 0x18) + (int64_t)cVar2 * 0x10);
      *puVar1 = *local_buffer_78;
      puVar1[1] = uVar3;
      puVar1[2] = uVar4;
      puVar1[3] = uVar5;
    }
    else {
      SystemCore_Allocator(&processed_var_7992_ptr,(int)cVar2);
    }
    lVar6 = lVar6 + 1;
    local_buffer_78 = local_buffer_78 + 4;
  } while (lVar6 < unaff_R15);
  lVar6 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar6 != 0) {
    if (*(int64_t *)(lVar6 + 0x18) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar6 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar6);
  }
  *(int64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}
// 函数: void UtilitiesSystem_0622e(void)
void UtilitiesSystem_0622e(void)
{
  int32_t *puVar1;
  char cVar2;
  int64_t lVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  int64_t unaff_RSI;
  int32_t *unaff_RDI;
  char unaff_R12B;
  int64_t unaff_R15;
  int64_t local_buffer_70;
  do {
    cVar2 = *(char *)(unaff_RBX + local_buffer_70);
    if (cVar2 < unaff_R12B) {
      uVar4 = unaff_RDI[1];
      uVar5 = unaff_RDI[2];
      uVar6 = unaff_RDI[3];
      puVar1 = (int32_t *)(*(int64_t *)(unaff_RBP + 0x18) + (int64_t)cVar2 * 0x10);
      *puVar1 = *unaff_RDI;
      puVar1[1] = uVar4;
      puVar1[2] = uVar5;
      puVar1[3] = uVar6;
    }
    else {
      SystemCore_Allocator(&processed_var_7992_ptr,(int)cVar2);
    }
    unaff_RBX = unaff_RBX + 1;
    unaff_RDI = unaff_RDI + 4;
  } while (unaff_RBX < unaff_R15);
  lVar3 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar3 != 0) {
    if (*(int64_t *)(lVar3 + 0x18) != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    *(uint64_t *)(lVar3 + 0x18) = 0;
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(lVar3);
  }
  *(int64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
  return;
}
// 函数: void UtilitiesSystem_0627e(void)
void UtilitiesSystem_0627e(void)
{
  int64_t lVar1;
  uint64_t unaff_RBP;
  int64_t unaff_RSI;
  lVar1 = *(int64_t *)(unaff_RSI + 0xd8);
  if (lVar1 == 0) {
    *(uint64_t *)(unaff_RSI + 0xd8) = unaff_RBP;
    return;
  }
  if (*(int64_t *)(lVar1 + 0x18) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(lVar1 + 0x18) = 0;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar1);
}
// 函数: void UtilitiesSystem_06299(void)
void UtilitiesSystem_06299(void)
{
  int64_t unaff_RBX;
  if (*(int64_t *)(unaff_RBX + 0x18) != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *(uint64_t *)(unaff_RBX + 0x18) = 0;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void UtilitiesSystem_062d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_062d0(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int8_t uVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t stack_special_x_8;
  if (param_1 != 0) {
    iVar3 = (int)param_3;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      if (iVar3 != -1) {
        param_2 = *(int64_t *)(param_1 + 0x18 + (int64_t)iVar3 * 8);
      }
      lVar2 = *(int64_t *)(param_1 + 0x8a8);
      if (lVar2 != 0) {
        lVar2 = *(int64_t *)(lVar2 + 0x260);
      }
      if ((param_2 != 0) && (lVar2 != 0)) {
        uVar1 = DataStructure_fc790(lVar2,param_2,param_3,param_4,0xfffffffffffffffe);
        DataStructure_fca80(lVar2,param_2,uVar1);
        if (iVar3 != -1) {
          stack_special_x_8 = 0;
          NetworkSystem_44860(param_1,param_3 & 0xffffffff,&stack_special_x_8);
        }
      }
      NetworkSystem_44ac0(param_1);
    }
  }
  return;
}
// 函数: void UtilitiesSystem_06380(int64_t param_1)
void UtilitiesSystem_06380(int64_t param_1)
{
  uint64_t astack_special_x_8 [2];
  uint64_t *pstack_special_x_18;
  uint64_t local_var_160;
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  uint64_t local_var_140;
  uint64_t local_var_138;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  uint64_t local_var_110;
  int32_t local_var_108;
  uint64_t local_var_104;
  uint64_t local_var_fc;
  uint64_t local_var_f4;
  uint64_t local_var_ec;
  int32_t local_var_e4;
  int32_t local_var_e0;
  uint64_t local_var_dc;
  uint64_t local_var_d4;
  uint64_t local_var_cc;
  int32_t local_var_c4;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  uint64_t local_var_a8;
  uint64_t local_var_a0;
  uint64_t local_var_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  int32_t local_var_68;
  uint64_t local_var_64;
  uint64_t local_var_5c;
  uint64_t local_var_54;
  uint64_t local_var_4c;
  int32_t local_var_44;
  int32_t local_var_40;
  uint64_t local_var_3c;
  uint64_t local_var_34;
  uint64_t local_var_2c;
  int32_t local_var_24;
  if ((param_1 != 0) && (*(char *)(param_1 + 0x8be) != '\0')) {
    pstack_special_x_18 = astack_special_x_8;
    astack_special_x_8[0] = 0;
    local_var_160 = 0x3f800000;
    local_var_158 = 0;
    local_var_150 = 0x3f80000000000000;
    local_var_148 = 0;
    local_var_140 = 0;
    local_var_138 = 0x3f800000;
    local_var_130 = 0;
    local_var_12c = 0;
    local_var_128 = 0;
    local_var_124 = 0x3f800000;
    local_var_120 = 0;
    local_var_11c = 0;
    local_var_118 = 0;
    local_var_114 = 0;
    local_var_110 = 0;
    local_var_108 = 0;
    local_var_104 = 0;
    local_var_fc = 0x64ffffffff;
    local_var_f4 = 100;
    local_var_ec = 0;
    local_var_e4 = 0;
    local_var_e0 = 100;
    local_var_dc = 0;
    local_var_d4 = 0;
    local_var_cc = 0;
    local_var_c4 = 0;
    local_var_c0 = 0x3f800000;
    local_var_b8 = 0;
    local_var_b0 = 0x3f80000000000000;
    local_var_a8 = 0;
    local_var_a0 = 0;
    local_var_98 = 0x3f800000;
    local_var_90 = 0;
    local_var_8c = 0;
    local_var_88 = 0;
    local_var_84 = 0x3f800000;
    local_var_80 = 0;
    local_var_7c = 0;
    local_var_78 = 0;
    local_var_74 = 0;
    local_var_70 = 0;
    local_var_68 = 0;
    local_var_64 = 0;
    local_var_5c = 0x64ffffffff;
    local_var_54 = 100;
    local_var_4c = 0;
    local_var_44 = 0;
    local_var_40 = 100;
    local_var_3c = 0;
    local_var_34 = 0;
    local_var_2c = 0;
    local_var_24 = 0;
    NetworkSystem_40960(param_1,100,0,0,&local_var_c0,&local_var_160,astack_special_x_8,1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_06500(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
void UtilitiesSystem_06500(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4,
                  int32_t param_5,uint64_t param_6,uint64_t param_7,int32_t param_8,
                  int64_t *param_9)
{
  int8_t stack_array_2b8 [32];
  uint64_t local_var_298;
  uint64_t local_var_290;
  int32_t local_var_288;
  int64_t **pplStack_280;
  int64_t lStack_278;
  int32_t local_var_270;
  int8_t local_var_268;
  int64_t *plStack_258;
  uint64_t local_var_250;
  int64_t **pplStack_248;
  int8_t stack_array_238 [512];
  uint64_t local_var_38;
  if (param_1 != 0) {
    local_var_250 = 0xfffffffffffffffe;
    local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
    if (*(char *)(param_1 + 0x8be) != '\0') {
      NetworkSystem_8f390(stack_array_238);
      pplStack_248 = &plStack_258;
      plStack_258 = param_9;
      if (param_9 != (int64_t *)0x0) {
        (**(code **)(*param_9 + 0x28))();
      }
      local_var_268 = 1;
      pplStack_280 = &plStack_258;
      local_var_288 = param_8;
      local_var_290 = param_7;
      local_var_298 = param_6;
      lStack_278 = param_1;
      local_var_270 = param_2;
      NetworkSystem_8e430(stack_array_238,param_3,param_4,param_5);
      NetworkSystem_8f420(stack_array_238);
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2b8);
  }
  return;
}