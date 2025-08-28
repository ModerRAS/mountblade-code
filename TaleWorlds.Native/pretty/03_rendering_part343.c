#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 03_rendering_part343.c - 13 个函数
// 函数: void UISystem_4edc0(int64_t param_1,int param_2)
void UISystem_4edc0(int64_t param_1,int param_2)
{
  int32_t uVar1;
  int8_t stack_array_d8 [32];
  uint64_t local_var_b8;
  uint64_t *aplocal_var_a8 [2];
  int32_t local_var_98;
  uint64_t local_var_90;
  void *plocal_var_88;
  uint64_t *plocal_var_80;
  int32_t local_var_78;
  uint64_t local_var_70;
  void *plocal_var_68;
  uint64_t *plocal_var_60;
  int32_t local_var_58;
  uint64_t local_var_50;
  void *plocal_var_48;
  uint64_t *plocal_var_40;
  int32_t local_var_38;
  uint64_t local_var_30;
  uint64_t local_var_28;
  local_var_b8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d8;
  aplocal_var_a8[0] = (uint64_t *)&system_data_buffer_ptr;
  local_var_90 = 0;
  aplocal_var_a8[1] = (uint64_t *)0x0;
  local_var_98 = 0;
  aplocal_var_a8[1] = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)aplocal_var_a8[1] = 0;
  uVar1 = CoreEngineSystemCleanup(aplocal_var_a8[1]);
  local_var_90 = CONCAT44(local_var_90._4_4_,uVar1);
  *aplocal_var_a8[1] = 0x305f6c6576656c;
  local_var_98 = 7;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  plocal_var_80 = (uint64_t *)0x0;
  local_var_78 = 0;
  plocal_var_80 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_80 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_80);
  local_var_70 = CONCAT44(local_var_70._4_4_,uVar1);
  *plocal_var_80 = 0x315f6c6576656c;
  local_var_78 = 7;
  plocal_var_68 = &system_data_buffer_ptr;
  local_var_50 = 0;
  plocal_var_60 = (uint64_t *)0x0;
  local_var_58 = 0;
  plocal_var_60 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_60 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_60);
  local_var_50 = CONCAT44(local_var_50._4_4_,uVar1);
  *plocal_var_60 = 0x325f6c6576656c;
  local_var_58 = 7;
  plocal_var_48 = &system_data_buffer_ptr;
  local_var_30 = 0;
  plocal_var_40 = (uint64_t *)0x0;
  local_var_38 = 0;
  plocal_var_40 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)plocal_var_40 = 0;
  uVar1 = CoreEngineSystemCleanup(plocal_var_40);
  local_var_30 = CONCAT44(local_var_30._4_4_,uVar1);
  *plocal_var_40 = 0x335f6c6576656c;
  local_var_38 = 7;
  *(int32_t *)(param_1 + 0x60300) = 0;
  GenericFunction_1801b8450((int32_t *)(param_1 + 0x60300),aplocal_var_a8 + (int64_t)param_2 * 4);
  SystemDataValidator(aplocal_var_a8,0x20,4,SystemValidator);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_d8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
UISystem_4efd0(uint64_t *param_1,int64_t param_2,int64_t param_3,int param_4,int8_t param_5)
{
  int64_t *plVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int64_t *plVar10;
  int64_t *plStack_80;
  int64_t *plStack_78;
  int64_t *plStack_70;
  int32_t local_var_68;
  int32_t local_var_64;
  uint64_t local_var_60;
  int64_t *plStack_58;
  int64_t *plStack_50;
  int64_t *plStack_48;
  int32_t local_var_40;
  local_var_60 = 0xfffffffffffffffe;
  plVar8 = (int64_t *)0x0;
  if (param_2 == 0) {
    *param_1 = 0;
    param_1[1] = CONCAT44(local_var_64,0xffffffff);
  }
  else {
    plStack_58 = (int64_t *)0x0;
    plStack_50 = (int64_t *)0x0;
    plStack_48 = (int64_t *)0x0;
    local_var_40 = 3;
    plVar6 = (int64_t *)(int64_t)param_4;
    plStack_70 = plVar6;
    if (0 < param_4) {
      plVar3 = plVar8;
      plVar4 = (int64_t *)0x0;
      plVar7 = plVar8;
      plVar9 = (int64_t *)0x0;
      do {
        plVar1 = *(int64_t **)(param_3 + (int64_t)plVar7 * 8);
        plVar5 = plVar4;
        plVar10 = plVar9;
        if (plVar1 != (int64_t *)0x0) {
          (**(code **)(*plVar1 + 0x28))(plVar1);
          if (plVar4 < plVar3) {
            plVar5 = plVar4 + 1;
            *plVar4 = (int64_t)plVar1;
            plStack_50 = plVar5;
          }
          else {
            lVar2 = (int64_t)plVar4 - (int64_t)plVar9 >> 3;
            plVar6 = plVar9;
            if (lVar2 == 0) {
              lVar2 = 1;
LAB_18044f096:
              plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8,3);
              plVar10 = plVar3;
            }
            else {
              lVar2 = lVar2 * 2;
              plVar3 = plVar8;
              plVar10 = plVar8;
              if (lVar2 != 0) goto LAB_18044f096;
            }
            for (; plVar6 != plVar4; plVar6 = plVar6 + 1) {
              *plVar3 = *plVar6;
              *plVar6 = 0;
              plVar3 = plVar3 + 1;
            }
            *plVar3 = (int64_t)plVar1;
            plVar5 = plVar3 + 1;
            plVar6 = plStack_70;
            for (plVar3 = plVar9; plStack_78 = plVar5, plStack_70 = plVar6, plVar3 != plVar4;
                plVar3 = plVar3 + 1) {
              if ((int64_t *)*plVar3 != (int64_t *)0x0) {
                (**(code **)(*(int64_t *)*plVar3 + 0x38))();
              }
              plVar5 = plStack_78;
              plVar6 = plStack_70;
            }
            if (plVar9 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner(plVar9);
            }
            plVar3 = plVar10 + lVar2;
            plStack_58 = plVar10;
            plStack_50 = plVar5;
            plStack_48 = plVar3;
          }
        }
        plVar7 = (int64_t *)((int64_t)plVar7 + 1);
        plVar4 = plVar5;
        plVar9 = plVar10;
      } while ((int64_t)plVar7 < (int64_t)plVar6);
    }
    GenericFunction_1801993a0(param_2,&plStack_80,&plStack_58,param_5);
    plVar8 = plStack_80;
    if (plStack_80 == (int64_t *)0x0) {
      local_var_68 = 0xffffffff;
    }
    else {
      local_var_68 = (**(code **)(*plStack_80 + 8))(plStack_80);
    }
    plStack_70 = plVar8;
    if (plVar8 != (int64_t *)0x0) {
      (**(code **)(*plVar8 + 0x28))(plVar8);
    }
    plVar8 = plStack_58;
    plVar6 = plStack_58;
    plVar3 = plStack_50;
    if (plStack_80 != (int64_t *)0x0) {
      (**(code **)(*plStack_80 + 0x38))();
      plVar8 = plStack_58;
      plVar6 = plStack_58;
      plVar3 = plStack_50;
    }
    for (; plVar7 = plStack_50, plVar4 = plStack_58, plVar8 != plStack_50; plVar8 = plVar8 + 1) {
      plStack_58 = plVar6;
      plStack_50 = plVar3;
      if ((int64_t *)*plVar8 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar8 + 0x38))();
      }
      plVar6 = plStack_58;
      plVar3 = plStack_50;
      plStack_50 = plVar7;
      plStack_58 = plVar4;
    }
    if (plStack_58 != (int64_t *)0x0) {
      plStack_58 = plVar6;
      plStack_50 = plVar3;
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plVar4);
    }
    *param_1 = plStack_70;
    param_1[1] = CONCAT44(local_var_64,local_var_68);
  }
  return param_1;
}
BADSPACEBASE *
UISystem_4f210(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  void *puVar5;
  void *puVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  void *plocal_var_60;
  void *plocal_var_58;
  int64_t *plStack_40;
  uint64_t local_var_38;
  int64_t lStack_28;
  uVar9 = 0xfffffffffffffffe;
  if (param_1 != 0) {
    CoreMemoryPoolValidator(&plocal_var_60);
    GenericFunction_1801c2360(param_1 + 0x60830,&plStack_40,param_3,param_4,uVar9);
    uVar7 = local_var_38;
    lVar8 = lStack_28;
LAB_18044f280:
    if (uVar7 != *(uint64_t *)(param_1 + 0x60838)) {
      puVar6 = &system_buffer_ptr;
      if (plocal_var_58 != (void *)0x0) {
        puVar6 = plocal_var_58;
      }
      puVar5 = &system_buffer_ptr;
      if (*(void **)(lVar8 + 0x290) != (void *)0x0) {
        puVar5 = *(void **)(lVar8 + 0x290);
      }
      lVar2 = strstr(puVar5,puVar6);
      if ((lVar2 != 0) &&
         (((*(byte *)(lVar8 + 0x2e8) & 0x10) != 0 ||
          ((*(int64_t **)(lVar8 + 0x270) != (int64_t *)0x0 &&
           (cVar1 = (**(code **)(**(int64_t **)(lVar8 + 0x270) + 0x70))(), cVar1 != '\0')))))) {
        register0x00000020 = (BADSPACEBASE *)0x1;
        goto LAB_18044f31e;
      }
      lVar2 = *plStack_40;
      do {
        uVar7 = uVar7 + 1;
        lVar3 = (uVar7 & 0xffffffff) * 0x10;
        lVar4 = lVar3 + 8 + lVar2;
        if ((*(uint64_t *)(lVar3 + lVar2) & 0xffffffff00000000) == 0) {
          lVar4 = 0;
        }
        if (lVar4 != 0) {
          lVar8 = *(int64_t *)(lVar2 + 8 + (uVar7 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar7 != plStack_40[1]);
      goto LAB_18044f280;
    }
    register0x00000020 = (BADSPACEBASE *)0x0;
LAB_18044f31e:
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (void *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return register0x00000020;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_4f370(int32_t *param_1,uint64_t param_2,int64_t param_3)
void UISystem_4f370(int32_t *param_1,uint64_t param_2,int64_t param_3)
{
  uint uVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int8_t stack_array_118 [32];
  int64_t *aplStack_f8 [2];
  uint64_t local_var_e8;
  int32_t local_var_e0;
  int32_t local_var_dc;
  uint64_t local_var_d8;
  void *plocal_var_c8;
  int8_t *plocal_var_c0;
  int32_t local_var_b8;
  int8_t stack_array_b0 [136];
  uint64_t local_var_28;
  local_var_d8 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_118;
  plocal_var_c8 = &memory_allocator_3432_ptr;
  plocal_var_c0 = stack_array_b0;
  local_var_b8 = 0;
  stack_array_b0[0] = 0;
  uVar3 = 0xffffffffffffffff;
  uVar2 = uVar3;
  if (param_3 != 0) {
    do {
      uVar2 = uVar2 + 1;
    } while (*(char *)(param_3 + uVar2) != '\0');
    local_var_b8 = (int32_t)uVar2;
    strcpy_s(stack_array_b0,0x80);
  }
  GenericFunction_1801b46a0(param_2,aplStack_f8,&plocal_var_c8);
  local_var_e8 = aplStack_f8[0];
  plocal_var_c8 = &system_state_ptr;
  if (aplStack_f8[0] != (int64_t *)0x0) {
    uVar1 = (**(code **)(*aplStack_f8[0] + 8))(aplStack_f8[0]);
    uVar3 = (uint64_t)uVar1;
  }
  local_var_e0 = (int32_t)uVar3;
  if (local_var_e8 != (int64_t *)0x0) {
    (**(code **)(*local_var_e8 + 0x28))(local_var_e8);
  }
  *param_1 = (int32_t)local_var_e8;
  param_1[1] = local_var_e8._4_4_;
  param_1[2] = local_var_e0;
  param_1[3] = local_var_dc;
  if (aplStack_f8[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_f8[0] + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_118);
}
// 函数: void UISystem_4f780(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
void UISystem_4f780(int64_t param_1,uint64_t *param_2,uint64_t *param_3)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  if (param_1 != 0) {
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
    *(uint *)(param_1 + 0x3324) = *(uint *)(param_1 + 0x3324) & 0xfffffffb;
    uVar4 = param_2[1];
    *(uint64_t *)(param_1 + 0x30dc) = *param_2;
    *(uint64_t *)(param_1 + 0x30e4) = uVar4;
    *(int *)(param_1 + 0x3358) = *(int *)(param_1 + 0x3358) + 1;
    *(uint *)(param_1 + 0x3324) = *(uint *)(param_1 + 0x3324) & 0xfffffffb;
    uVar4 = *param_3;
    uVar5 = param_3[1];
    *(int32_t *)(param_1 + 0x30c8) = 0x3f800000;
    *(int32_t *)(param_1 + 0x3328) = 0x3f800000;
    *(uint64_t *)(param_1 + 0x3e0c) = uVar4;
    *(uint64_t *)(param_1 + 0x3e14) = uVar5;
    *(int8_t *)(param_1 + 0x3e05) = 1;
    fVar1 = *(float *)(param_1 + 0x3e0c);
    fVar2 = *(float *)(param_1 + 0x3e10);
    fVar3 = *(float *)(param_1 + 0x3e14);
    fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    *(float *)(param_1 + 0x3e10) = fVar2 * fVar6;
    *(float *)(param_1 + 0x3e14) = fVar3 * fVar6;
    *(float *)(param_1 + 0x3e0c) = fVar1 * fVar6;
  }
  return;
}
// 函数: void UISystem_4f7e6(int64_t param_1)
void UISystem_4f7e6(int64_t param_1)
{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  float in_XMM4_Da;
  float fVar6;
  float in_XMM5_Da;
  int32_t in_XMM5_Db;
  int32_t in_XMM5_Dc;
  int32_t in_XMM5_Dd;
  auVar3._4_4_ = in_XMM5_Db;
  auVar3._0_4_ = in_XMM5_Da;
  auVar3._8_4_ = in_XMM5_Dc;
  auVar3._12_4_ = in_XMM5_Dd;
  fVar1 = *(float *)(param_1 + 0x3e10);
  auVar4._4_12_ = auVar3._4_12_;
  fVar2 = *(float *)(param_1 + 0x3e14);
  auVar4._0_4_ = in_XMM5_Da * in_XMM5_Da + fVar1 * fVar1 + fVar2 * fVar2;
  auVar5._4_4_ = in_XMM5_Db;
  auVar5._0_4_ = auVar4._0_4_;
  auVar5._8_4_ = in_XMM5_Dc;
  auVar5._12_4_ = in_XMM5_Dd;
  auVar5 = rsqrtss(auVar4,auVar5);
  fVar6 = auVar5._0_4_;
  fVar6 = in_XMM4_Da * fVar6 * (3.0 - auVar4._0_4_ * fVar6 * fVar6);
  *(float *)(param_1 + 0x3e10) = fVar1 * fVar6;
  *(float *)(param_1 + 0x3e14) = fVar2 * fVar6;
  *(float *)(param_1 + 0x3e0c) = in_XMM5_Da * fVar6;
  return;
}
// 函数: void UISystem_4f86e(void)
void UISystem_4f86e(void)
{
  return;
}
// 函数: void UISystem_4f880(int64_t param_1,uint64_t *param_2)
void UISystem_4f880(int64_t param_1,uint64_t *param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  int8_t auVar8 [16];
  if (param_1 != 0) {
    uVar4 = *param_2;
    uVar5 = param_2[1];
    *(int8_t *)(param_1 + 0x3e05) = 1;
    *(uint64_t *)(param_1 + 0x3e0c) = uVar4;
    *(uint64_t *)(param_1 + 0x3e14) = uVar5;
    fVar1 = *(float *)(param_1 + 0x3e0c);
    fVar2 = *(float *)(param_1 + 0x3e10);
    fVar3 = *(float *)(param_1 + 0x3e14);
    fVar6 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
    auVar8 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
    fVar7 = auVar8._0_4_;
    fVar6 = fVar7 * 0.5 * (3.0 - fVar6 * fVar7 * fVar7);
    *(float *)(param_1 + 0x3e10) = fVar2 * fVar6;
    *(float *)(param_1 + 0x3e14) = fVar3 * fVar6;
    *(float *)(param_1 + 0x3e0c) = fVar1 * fVar6;
  }
  return;
}
// 函数: void UISystem_4f8ad(int64_t param_1)
void UISystem_4f8ad(int64_t param_1)
{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  int8_t auVar4 [16];
  int8_t auVar5 [16];
  float in_XMM4_Da;
  float fVar6;
  float in_XMM5_Da;
  int32_t in_XMM5_Db;
  int32_t in_XMM5_Dc;
  int32_t in_XMM5_Dd;
  auVar3._4_4_ = in_XMM5_Db;
  auVar3._0_4_ = in_XMM5_Da;
  auVar3._8_4_ = in_XMM5_Dc;
  auVar3._12_4_ = in_XMM5_Dd;
  fVar1 = *(float *)(param_1 + 0x3e10);
  auVar4._4_12_ = auVar3._4_12_;
  fVar2 = *(float *)(param_1 + 0x3e14);
  auVar4._0_4_ = in_XMM5_Da * in_XMM5_Da + fVar1 * fVar1 + fVar2 * fVar2;
  auVar5._4_4_ = in_XMM5_Db;
  auVar5._0_4_ = auVar4._0_4_;
  auVar5._8_4_ = in_XMM5_Dc;
  auVar5._12_4_ = in_XMM5_Dd;
  auVar5 = rsqrtss(auVar4,auVar5);
  fVar6 = auVar5._0_4_;
  fVar6 = in_XMM4_Da * fVar6 * (3.0 - auVar4._0_4_ * fVar6 * fVar6);
  *(float *)(param_1 + 0x3e10) = fVar1 * fVar6;
  *(float *)(param_1 + 0x3e14) = fVar2 * fVar6;
  *(float *)(param_1 + 0x3e0c) = in_XMM5_Da * fVar6;
  return;
}
// 函数: void UISystem_4f935(void)
void UISystem_4f935(void)
{
  return;
}
// 函数: void UISystem_4fa00(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_4fa00(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int64_t *plStackX_10;
  void *plocal_var_30;
  int64_t lStack_28;
  int32_t local_var_18;
  if ((param_1 != 0) && (param_2 != (int64_t *)0x0)) {
    uVar1 = CoreMemoryPoolValidator(&plocal_var_30,param_3,param_3,param_4,0xfffffffffffffffe);
    uVar1 = RenderingSystem_06ba0(*(uint64_t *)(param_1 + 0x328),uVar1);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_28 = 0;
    local_var_18 = 0;
    plocal_var_30 = &system_state_ptr;
    (**(code **)(*param_2 + 0x28))(param_2);
    plStackX_10 = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))();
    }
    RenderingSystem_a61d0(uVar1,&plStackX_10);
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x38))();
    }
  }
  return;
}
// 函数: void UISystem_4ffa0(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
void UISystem_4ffa0(int64_t param_1,int64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  int64_t *plStackX_20;
  uint64_t uVar7;
  int64_t **pplVar8;
  if (param_1 != 0) {
    uVar7 = 0xfffffffffffffffe;
    GenericFunction_180198890(param_1,&plStackX_8,0,param_4,0xfffffffffffffffe);
    plVar5 = plStackX_8;
    pplVar8 = &plStackX_20;
    plStackX_20 = param_2;
    if (param_2 != (int64_t *)0x0) {
      (**(code **)(*param_2 + 0x28))(param_2);
    }
    GenericFunction_1800ee700(plVar5,&plStackX_20,1,param_4,uVar7,pplVar8);
    plVar5 = plStackX_8 + 6;
    plVar6 = plStackX_8;
    cVar4 = SystemFunction_000180285980(plVar5,param_3);
    if (cVar4 != '\0') {
      lVar3 = param_3[1];
      *plVar5 = *param_3;
      plVar5[1] = lVar3;
      lVar3 = param_3[3];
      plVar5[2] = param_3[2];
      plVar5[3] = lVar3;
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x24);
      lVar3 = param_3[5];
      uVar2 = *(int32_t *)((int64_t)param_3 + 0x2c);
      *(int *)(plVar5 + 4) = (int)param_3[4];
      *(int32_t *)((int64_t)plVar5 + 0x24) = uVar1;
      *(int *)(plVar5 + 5) = (int)lVar3;
      *(int32_t *)((int64_t)plVar5 + 0x2c) = uVar2;
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x34);
      lVar3 = param_3[7];
      uVar2 = *(int32_t *)((int64_t)param_3 + 0x3c);
      *(int *)(plVar5 + 6) = (int)param_3[6];
      *(int32_t *)((int64_t)plVar5 + 0x34) = uVar1;
      *(int *)(plVar5 + 7) = (int)lVar3;
      *(int32_t *)((int64_t)plVar5 + 0x3c) = uVar2;
      RenderingSystem_CameraController(plVar6);
      UtilitiesSystem_StringProcessor();
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}
// 函数: void UISystem_50070(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
void UISystem_50070(int64_t param_1,uint64_t *param_2,int64_t *param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  char cVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plStackX_8;
  if (param_1 != 0) {
    GenericFunction_180198890(param_1,&plStackX_8,0,param_4,0xfffffffffffffffe);
    if ((void *)*param_2 == &processed_var_9304_ptr) {
      SystemCore_UpdateState(param_2,(int64_t)param_2 + 0x214,0);
    }
    else {
      (**(code **)((void *)*param_2 + 0x160))(param_2);
    }
    PhysicsSystem_TerrainCollider(plStackX_8,param_2,1);
    plVar5 = plStackX_8 + 6;
    plVar6 = plStackX_8;
    cVar4 = SystemFunction_000180285980(plVar5,param_3);
    if (cVar4 != '\0') {
      lVar3 = param_3[1];
      *plVar5 = *param_3;
      plVar5[1] = lVar3;
      lVar3 = param_3[3];
      plVar5[2] = param_3[2];
      plVar5[3] = lVar3;
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x24);
      lVar3 = param_3[5];
      uVar2 = *(int32_t *)((int64_t)param_3 + 0x2c);
      *(int *)(plVar5 + 4) = (int)param_3[4];
      *(int32_t *)((int64_t)plVar5 + 0x24) = uVar1;
      *(int *)(plVar5 + 5) = (int)lVar3;
      *(int32_t *)((int64_t)plVar5 + 0x2c) = uVar2;
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x34);
      lVar3 = param_3[7];
      uVar2 = *(int32_t *)((int64_t)param_3 + 0x3c);
      *(int *)(plVar5 + 6) = (int)param_3[6];
      *(int32_t *)((int64_t)plVar5 + 0x34) = uVar1;
      *(int *)(plVar5 + 7) = (int)lVar3;
      *(int32_t *)((int64_t)plVar5 + 0x3c) = uVar2;
      RenderingSystem_CameraController(plVar6);
      UtilitiesSystem_StringProcessor();
    }
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}
uint64_t UISystem_50140(int64_t param_1,int64_t *param_2,int8_t param_3)
{
  uint64_t in_RAX;
  uint64_t uVar1;
  int64_t *plStackX_8;
  if ((param_1 != 0) && (param_2 != (int64_t *)0x0)) {
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    uVar1 = GenericFunction_180198b90(param_1,&plStackX_8,1,1,0,1,param_3);
    return uVar1;
  }
  return in_RAX & 0xffffffffffffff00;
}
uint64_t * UISystem_501c0(uint64_t *param_1,int64_t param_2,int64_t *param_3,int64_t param_4)
{
  int32_t uVar1;
  int64_t lVar2;
  char cVar3;
  int32_t uVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plStackX_8;
  int32_t local_var_14;
  plVar6 = (int64_t *)0x0;
  if ((param_2 != 0) && (param_4 != 0)) {
    GenericFunction_180198890(param_2,&plStackX_8,0,param_4,0xfffffffffffffffe);
    plVar6 = plStackX_8;
    plVar5 = plStackX_8 + 6;
    plVar7 = plStackX_8;
    cVar3 = SystemFunction_000180285980(plVar5,param_3);
    if (cVar3 != '\0') {
      lVar2 = param_3[1];
      *plVar5 = *param_3;
      plVar5[1] = lVar2;
      lVar2 = param_3[3];
      plVar5[2] = param_3[2];
      plVar5[3] = lVar2;
      uVar4 = *(int32_t *)((int64_t)param_3 + 0x24);
      lVar2 = param_3[5];
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x2c);
      *(int *)(plVar5 + 4) = (int)param_3[4];
      *(int32_t *)((int64_t)plVar5 + 0x24) = uVar4;
      *(int *)(plVar5 + 5) = (int)lVar2;
      *(int32_t *)((int64_t)plVar5 + 0x2c) = uVar1;
      uVar4 = *(int32_t *)((int64_t)param_3 + 0x34);
      lVar2 = param_3[7];
      uVar1 = *(int32_t *)((int64_t)param_3 + 0x3c);
      *(int *)(plVar5 + 6) = (int)param_3[6];
      *(int32_t *)((int64_t)plVar5 + 0x34) = uVar4;
      *(int *)(plVar5 + 7) = (int)lVar2;
      *(int32_t *)((int64_t)plVar5 + 0x3c) = uVar1;
      RenderingSystem_CameraController(plVar6);
      UtilitiesSystem_StringProcessor();
      plVar7 = plStackX_8;
    }
    PhysicsSystem_TerrainCollider(plVar7,param_4,1);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
    if (plVar6 != (int64_t *)0x0) {
      uVar4 = (**(code **)(*plVar6 + 8))(plVar6);
      goto LAB_18045028b;
    }
  }
  uVar4 = 0xffffffff;
LAB_18045028b:
  if (plVar6 != (int64_t *)0x0) {
    (**(code **)(*plVar6 + 0x28))(plVar6);
  }
  *param_1 = plVar6;
  param_1[1] = CONCAT44(local_var_14,uVar4);
  return param_1;
}
// 函数: void UISystem_502d0(int64_t param_1,int64_t *param_2)
void UISystem_502d0(int64_t param_1,int64_t *param_2)
{
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  if ((param_1 != 0) && (param_2 != (int64_t *)0x0)) {
    plStackX_8 = param_2;
    (**(code **)(*param_2 + 0x28))(param_2);
    pplStackX_10 = &plStackX_8;
    CoreEngine_198980(param_1,plStackX_8);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_50360(int64_t param_1)
void UISystem_50360(int64_t param_1)
{
  byte *pbVar1;
  int32_t uVar2;
  int iVar3;
  int64_t lVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  int64_t lVar7;
  uint64_t uVar8;
  int64_t *plVar9;
  code *pcVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint uVar13;
  int64_t lStackX_10;
  uint64_t local_var_ffffffffffffff38;
  int32_t uVar14;
  int64_t *plStack_b0;
  uint64_t local_var_a8;
  void *plocal_var_a0;
  code *pcStack_98;
  uint64_t local_var_88;
  int32_t local_var_80;
  int32_t local_var_7c;
  int16_t local_var_78;
  int8_t local_var_76;
  int32_t local_var_74;
  int8_t local_var_70;
  uint64_t local_var_68;
  int64_t lStack_60;
  uint64_t local_var_58;
  uint64_t local_var_50;
  int32_t local_var_48;
  uint64_t local_var_40;
  if (param_1 != 0) {
    lStackX_10 = param_1;
    SystemCore_FileSystem(system_context_ptr);
    GenericFunction_1801be910(lStackX_10 + 0x607e0,&plStack_b0);
    plVar9 = plStack_b0;
    uVar12 = 0;
    uVar8 = local_var_a8;
    pcVar10 = pcStack_98;
LAB_1804503d0:
    uVar14 = (int32_t)((uint64_t)local_var_ffffffffffffff38 >> 0x20);
    if (uVar8 != *(uint64_t *)(lStackX_10 + 0x60838)) {
      plStack_b0 = (int64_t *)0x0;
      local_var_a8 = 0;
      plocal_var_a0 = (void *)0x0;
      pcStack_98 = (code *)CONCAT44(pcStack_98._4_4_,3);
      uVar5 = uVar12;
      uVar11 = uVar12;
      if (*(int64_t *)(pcVar10 + 0xf8) - *(int64_t *)(pcVar10 + 0xf0) >> 3 != 0) {
        do {
          (**(code **)(**(int64_t **)(uVar5 + *(int64_t *)(pcVar10 + 0xf0)) + 0x170))
                    (*(int64_t **)(uVar5 + *(int64_t *)(pcVar10 + 0xf0)),&plStack_b0,0xffffffff);
          uVar13 = (int)uVar11 + 1;
          uVar5 = uVar5 + 8;
          uVar11 = (uint64_t)uVar13;
        } while ((uint64_t)(int64_t)(int)uVar13 <
                 (uint64_t)(*(int64_t *)(pcVar10 + 0xf8) - *(int64_t *)(pcVar10 + 0xf0) >> 3));
      }
      if (*(int64_t *)(pcVar10 + 0x260) != 0) {
        DataStructure_fdc90(*(int64_t *)(pcVar10 + 0x260),&plStack_b0,0xffffffff);
      }
      uVar5 = uVar12;
      uVar11 = uVar12;
      if ((int64_t)(local_var_a8 - (int64_t)plStack_b0) >> 3 != 0) {
        do {
          pbVar1 = (byte *)(*(int64_t *)(uVar5 + (int64_t)plStack_b0) + 0xfe);
          *pbVar1 = *pbVar1 & 0xfb;
          uVar13 = (int)uVar11 + 1;
          uVar5 = uVar5 + 8;
          uVar11 = (uint64_t)uVar13;
        } while ((uint64_t)(int64_t)(int)uVar13 <
                 (uint64_t)((int64_t)(local_var_a8 - (int64_t)plStack_b0) >> 3));
      }
      if (plStack_b0 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lVar7 = *plVar9;
      do {
        uVar8 = uVar8 + 1;
        lVar4 = (uVar8 & 0xffffffff) * 0x10;
        uVar5 = lVar4 + 8 + lVar7;
        if ((*(uint64_t *)(lVar4 + lVar7) & 0xffffffff00000000) == 0) {
          uVar5 = uVar12;
        }
        if (uVar5 != 0) {
          pcVar10 = *(code **)(lVar7 + 8 + (uVar8 & 0xffffffff) * 0x10);
          break;
        }
      } while (uVar8 != plVar9[1]);
      goto LAB_1804503d0;
    }
    if (*(int64_t *)(lStackX_10 + 0x60b80) == 0) {
      GenericFunction_1801b0a40(lStackX_10,0);
    }
    local_var_88 = 0;
    local_var_80 = 0;
    local_var_7c = 0xffffffff;
    local_var_76 = 0;
    local_var_74 = 0xffffffff;
    local_var_70 = 1;
    local_var_68 = 0;
    lStack_60 = 0;
    local_var_58 = 0;
    local_var_50 = 0;
    local_var_48 = 3;
    local_var_40 = 0;
    local_var_78 = 1;
    GenericFunction_1801a3620(lStackX_10,&local_var_88);
    if (*(int64_t *)(lStackX_10 + 0x60b80) == 0) {
      GenericFunction_1801aaf60(lStackX_10,*(int8_t *)(lStackX_10 + 0x2960));
      *(int8_t *)(lStackX_10 + 0xa8) = 0;
      SystemCore_FileSystem(system_context_ptr);
      if (*(int *)(lStackX_10 + 0x60a10) == 1) {
        uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x1e0,8,3);
        uVar6 = DataStructure_ca920(uVar6);
        *(uint64_t *)(lStackX_10 + 0x358) = uVar6;
      }
      else {
        RenderingSystem_b6f20(*(uint64_t *)(lStackX_10 + 0x60b80));
      }
      SystemCore_FileSystem(system_context_ptr);
      GenericFunction_1801b0a40(lStackX_10,1);
      lVar7 = lStackX_10;
      uVar8 = *(int64_t *)(lStackX_10 + 0x60b28) - *(int64_t *)(lStackX_10 + 0x60b20) >> 3;
      uVar2 = *(int32_t *)(lStackX_10 + 0x3054);
      if (*(int64_t *)(lStackX_10 + 0x448) == 0) {
        uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
        RenderingSystem_73a60(uVar6,lVar7);
      }
      uVar6 = CONCAT44(uVar14,uVar2);
      RenderingSystem_9cb40();
      lVar4 = lStackX_10;
      lVar7 = *(int64_t *)(lStackX_10 + 0x448);
      if (lVar7 == 0) {
        uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3,uVar6);
        lVar7 = RenderingSystem_73a60(uVar6,lVar4);
      }
      lVar4 = lStackX_10;
      RenderingSystem_7fb10(lVar7 + 0x21e0,*(uint64_t *)(lVar7 + 0x21e8),
                    *(uint64_t *)(lStackX_10 + 0x81b0),*(uint64_t *)(lStackX_10 + 0x81b8));
      lVar4 = *(int64_t *)(lVar4 + 0x81b8) - *(int64_t *)(lVar4 + 0x81b0) >> 3;
      *(int *)(lVar7 + 0x2368) = *(int *)(lVar7 + 0x2368) + (int)lVar4;
      plocal_var_a0 = &processed_var_7120_ptr;
      pcStack_98 = UISystem_55de0;
      plStack_b0 = &lStackX_10;
      SystemCore_DataTransformer(lVar4,0,uVar8 & 0xffffffff,1,0xffffffffffffffff,&plStack_b0);
      lVar4 = lStackX_10;
      lVar7 = *(int64_t *)(lStackX_10 + 0x448);
      if (lVar7 == 0) {
        uVar6 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x2370,8,3);
        lVar7 = RenderingSystem_73a60(uVar6,lVar4);
      }
      RenderingSystem_786b0(lVar7,*(uint64_t *)(lStackX_10 + 0x60b80),uVar8 & 0xffffffff);
      lVar4 = lStackX_10;
      lVar7 = *(int64_t *)(lStackX_10 + 0x448);
      if (lVar7 != 0) {
        *(int32_t *)(lVar7 + 0x2150) = *(int32_t *)(*(int64_t *)(lVar7 + 0x2148) + 0x3054);
        RenderingSystem_79810(lVar7);
        RenderingSystem_769d0(lVar7);
        SystemCore_Controller(*(int64_t *)(lVar4 + 0x448) + 0x21e0);
        SystemCore_Controller(lVar4 + 0x81b0);
      }
      *(int *)(lStackX_10 + 0x28b4) = *(int *)(lStackX_10 + 0x28b4) + 1;
      RenderingSystem_b07c0(*(uint64_t *)(lStackX_10 + 0x60b80));
      GenericFunction_1801b48a0(lStackX_10);
      GenericFunction_1801ac240(lStackX_10);
      if (*(char *)(lStackX_10 + 0x2a60) != '\0') {
        RenderingSystem_898a0(lStackX_10 + 0x29a0);
      }
    }
    CoreEngine_SystemInitializer(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
    plVar9 = (int64_t *)(system_message_buffer + 0x20);
    local_var_a8 = local_var_a8 & 0xffffffffffffff00;
    plStack_b0 = plVar9;
    iVar3 = _Mtx_lock(plVar9);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    local_var_a8 = CONCAT71(local_var_a8._1_7_,1);
    iVar3 = _Mtx_unlock(plVar9);
    if (iVar3 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar3);
    }
    UISystem_508a0(param_1);
    if (lStack_60 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}