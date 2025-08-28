/* 函数别名定义: RenderingShaderProcessor */
#define RenderingShaderProcessor RenderingShaderProcessor
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part237.c - 13 个函数
// 函数: void DataStructure_06950(uint64_t param_1,int64_t *param_2,int64_t param_3)
void DataStructure_06950(uint64_t param_1,int64_t *param_2,int64_t param_3)
{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int *piVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  void *puVar11;
  int iVar12;
  int8_t stack_array_178 [32];
  int iStack_158;
  int8_t local_var_150;
  byte bStack_148;
  byte bStack_138;
  uint64_t local_var_130;
  uint64_t local_var_128;
  int64_t *plStack_120;
  int *piStack_118;
  int *piStack_110;
  int8_t stack_array_108 [16];
  int64_t *plStack_f8;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  lVar7 = core_system_data_config;
  local_var_128 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  lVar5 = *param_2;
  iVar3 = *(int *)(lVar5 + 0x14);
  bStack_138 = iVar3 == 4;
  cVar2 = *(char *)(lVar5 + 0x18);
  iVar4 = *(int *)(lVar5 + 0x10);
  plStack_120 = param_2;
  piVar8 = (int *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,0x20);
  piVar1 = piVar8 + 2;
  piVar1[0] = -1;
  piVar1[1] = -1;
  piVar8[4] = -1;
  piVar8[5] = 0x10;
  piVar8[6] = 0;
  piVar8[7] = 0;
  *piVar8 = -1;
  *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) & 0xfe;
  *(int8_t *)(piVar8 + 8) = 0;
  bStack_148 = *(byte *)(*param_2 + 0x28) & 1;
  local_var_150 = 1;
  iStack_158 = iVar4;
  piStack_118 = piVar8;
  piStack_110 = piVar1;
  puVar9 = (uint64_t *)DataStructure_04b50(lVar7,stack_array_108,(iVar3 == 4) + '\x0e',cVar2);
  *(uint64_t *)piVar1 = *puVar9;
  piVar8[4] = *(int *)(puVar9 + 1);
  piVar8[5] = *(int *)((int64_t)puVar9 + 0xc);
  uVar6 = puVar9[2];
  puVar9[2] = 0;
  local_var_130 = *(int64_t **)(piVar8 + 6);
  *(uint64_t *)(piVar8 + 6) = uVar6;
  if (local_var_130 != (int64_t *)0x0) {
    (**(code **)(*local_var_130 + 0x38))();
  }
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  *piVar8 = iVar4;
  *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) & 0xfe;
  *(byte *)(piVar8 + 1) = *(byte *)(piVar8 + 1) | bStack_138;
  *(char *)(piVar8 + 8) = cVar2;
  iVar12 = 2;
  if (iVar3 == 4) {
    iVar12 = 4;
  }
  lVar5 = *(int64_t *)(*param_2 + 0x20);
  if (lVar5 != 0) {
    if (cVar2 == '\x01') {
      DataStructure_9b390(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(piVar8 + 6),lVar5);
      plocal_var_e8 = &memory_allocator_3432_ptr;
      plocal_var_e0 = stack_array_d0;
      stack_array_d0[0] = 0;
      local_var_d8 = *(int32_t *)(param_3 + 0x10);
      puVar11 = &system_buffer_ptr;
      if (*(void **)(param_3 + 8) != (void *)0x0) {
        puVar11 = *(void **)(param_3 + 8);
      }
      strcpy_s(stack_array_d0,0x80,puVar11);
      plocal_var_e8 = &system_state_ptr;
      goto LAB_180206c6d;
    }
    iStack_158 = iVar12 * iVar4;
    local_var_150 = 1;
    DataStructure_9b1d0(*(uint64_t *)(system_message_buffer + 0x1cd8),
                  *(uint64_t *)
                   (*(int64_t *)(((int64_t)piVar8[5] + 0x25) * 0x20 + lVar7) + 8 +
                   (int64_t)piVar8[4] * 0x18),*piVar1 * iVar12,lVar5);
  }
  if (cVar2 == '\0') {
    uVar10 = (uint64_t)piVar8 % (uint64_t)*(uint *)(lVar7 + 0x40);
    for (puVar9 = *(uint64_t **)(*(int64_t *)(lVar7 + 0x38) + uVar10 * 8);
        puVar9 != (uint64_t *)0x0; puVar9 = (uint64_t *)puVar9[1]) {
      if (piVar8 == (int *)*puVar9) goto LAB_180206c6d;
    }
    puVar9 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,*(int8_t *)(lVar7 + 0x5c));
    *puVar9 = piVar8;
    puVar9[1] = 0;
    iStack_158 = 1;
    RenderingShaderProcessor0(lVar7 + 0x50,&local_var_130,*(int32_t *)(lVar7 + 0x40),
                  *(int32_t *)(lVar7 + 0x48));
    if ((char)local_var_130 != '\0') {
      uVar10 = (uint64_t)piVar8 % (uint64_t)local_var_130._4_4_;
      DataStructure_07c90(lVar7 + 0x30,local_var_130._4_4_);
    }
    puVar9[1] = *(uint64_t *)(*(int64_t *)(lVar7 + 0x38) + uVar10 * 8);
    *(uint64_t **)(*(int64_t *)(lVar7 + 0x38) + uVar10 * 8) = puVar9;
    *(int64_t *)(lVar7 + 0x48) = *(int64_t *)(lVar7 + 0x48) + 1;
  }
LAB_180206c6d:
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_06cb0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
void DataStructure_06cb0(uint64_t param_1,uint64_t param_2,int64_t param_3,uint64_t param_4)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  lVar3 = core_system_data_config;
  if ((param_2 != 0) && (*(char *)(param_2 + 0x20) == '\0')) {
    puVar1 = (uint64_t *)
             (*(int64_t *)(core_system_data_config + 0x38) +
             (param_2 % (uint64_t)*(uint *)(core_system_data_config + 0x40)) * 8);
    puVar2 = (uint64_t *)*puVar1;
    while ((puVar2 != (uint64_t *)0x0 && (param_2 != *puVar2))) {
      puVar1 = puVar2 + 1;
      puVar2 = (uint64_t *)*puVar1;
    }
    puVar5 = (uint64_t *)0x0;
    param_3 = lVar3;
    if (puVar2 != (uint64_t *)0x0) {
      do {
        puVar4 = puVar2;
        if (param_2 != *puVar4) break;
        *puVar1 = puVar4[1];
        puVar4[1] = (uint64_t)puVar5;
        *(int64_t *)(lVar3 + 0x48) = *(int64_t *)(lVar3 + 0x48) + -1;
        puVar2 = (uint64_t *)*puVar1;
        puVar5 = puVar4;
      } while ((uint64_t *)*puVar1 != (uint64_t *)0x0);
      if (puVar5 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar5);
      }
    }
  }
  if (param_2 != 0) {
    DataStructure_04e40(core_system_data_config,param_2 + 8,param_3,param_4,0xfffffffffffffffe);
    if (*(int64_t **)(param_2 + 0x18) != (int64_t *)0x0) {
      (**(code **)(**(int64_t **)(param_2 + 0x18) + 0x38))();
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(param_2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_06da0(uint64_t param_1,int64_t param_2,char *param_3,int64_t param_4,
void DataStructure_06da0(uint64_t param_1,int64_t param_2,char *param_3,int64_t param_4,
                  uint64_t param_5,int64_t param_6)
{
  int64_t lVar1;
  int iVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int *piVar7;
  uint64_t *puVar8;
  int8_t stack_array_c8 [32];
  int32_t local_var_a8;
  uint64_t *plocal_var_a0;
  int32_t local_var_98;
  int64_t *plStack_90;
  int64_t *plStack_88;
  int64_t lStack_80;
  int64_t lStack_78;
  uint64_t local_var_70;
  uint64_t stack_array_68 [2];
  char acStack_58 [16];
  uint64_t local_var_48;
  local_var_70 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_c8;
  lVar4 = 0;
  local_var_98 = 0;
  lVar6 = (uint64_t)*(byte *)(param_2 + 0x181) * 0x1c0 + system_message_buffer;
  acStack_58[0] = '\0';
  acStack_58[1] = '\0';
  acStack_58[2] = '\0';
  acStack_58[3] = '\0';
  acStack_58[4] = '\0';
  acStack_58[5] = '\0';
  acStack_58[6] = '\0';
  acStack_58[7] = '\0';
  acStack_58[8] = '\0';
  acStack_58[9] = '\0';
  acStack_58[10] = '\0';
  acStack_58[0xb] = '\0';
  acStack_58[0xc] = '\0';
  acStack_58[0xd] = '\0';
  acStack_58[0xe] = '\0';
  acStack_58[0xf] = '\0';
  if ((*param_3 != '\0') && (*(int *)(lVar6 + 0x78) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x78)] = '\x01';
  }
  if ((param_3[1] != '\0') && (*(int *)(lVar6 + 0x7c) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x7c)] = '\x01';
  }
  if ((param_3[2] != '\0') && (*(int *)(lVar6 + 0x80) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x80)] = '\x01';
  }
  if ((param_3[3] != '\0') && (*(int *)(lVar6 + 0x84) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x84)] = '\x01';
  }
  if ((param_3[4] != '\0') && (*(int *)(lVar6 + 0x88) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x88)] = '\x01';
  }
  if ((param_3[5] != '\0') && (*(int *)(lVar6 + 0x8c) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x8c)] = '\x01';
  }
  if ((param_3[6] != '\0') && (*(int *)(lVar6 + 0x90) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x90)] = '\x01';
  }
  if ((param_3[7] != '\0') && (*(int *)(lVar6 + 0x94) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x94)] = '\x01';
  }
  if ((param_3[8] != '\0') && (*(int *)(lVar6 + 0x98) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x98)] = '\x01';
  }
  if ((param_3[9] != '\0') && (*(int *)(lVar6 + 0x9c) != -1)) {
    acStack_58[*(int *)(lVar6 + 0x9c)] = '\x01';
  }
  if ((param_3[10] != '\0') && (*(int *)(lVar6 + 0xa0) != -1)) {
    acStack_58[*(int *)(lVar6 + 0xa0)] = '\x01';
  }
  if ((param_3[0xb] != '\0') && (*(int *)(lVar6 + 0xa4) != -1)) {
    acStack_58[*(int *)(lVar6 + 0xa4)] = '\x01';
  }
  if ((param_3[0xc] != '\0') && (*(int *)(lVar6 + 0xa8) != -1)) {
    acStack_58[*(int *)(lVar6 + 0xa8)] = '\x01';
  }
  if ((param_3[0xd] != '\0') && (*(int *)(lVar6 + 0xac) != -1)) {
    acStack_58[*(int *)(lVar6 + 0xac)] = '\x01';
  }
  iVar2 = *(int *)(param_2 + 0x184);
  lVar5 = (int64_t)*(int *)(lVar6 + 0x70);
  lStack_78 = param_4;
  if (*(char *)(param_2 + 0x180) == '\x01') {
    if (0 < lVar5) {
      puVar8 = (uint64_t *)(param_6 + 8);
      lVar6 = (param_2 - param_6) + 8;
      lStack_80 = lVar6;
      do {
        if (acStack_58[lVar4] != '\0') {
          lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
          lVar6 = *(int64_t *)(lVar6 + (int64_t)puVar8);
          *(int32_t *)(lVar6 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
          plVar3 = *(int64_t **)(lVar1 + 0x8400);
          plocal_var_a0 = stack_array_68;
          local_var_a8 = 0;
          iVar2 = (**(code **)(*plVar3 + 0x70))(plVar3,*(uint64_t *)(lVar6 + 0x10),0,4);
          if (iVar2 < 0) {
            SystemCore_Loader(iVar2,&ui_system_data_1768_ptr);
          }
          *puVar8 = stack_array_68[0];
          plVar3 = (int64_t *)GenericFunction_1800e81f0();
          plVar3 = (int64_t *)*plVar3;
          if (plVar3 != (int64_t *)0x0) {
            plStack_90 = plVar3;
            (**(code **)(*plVar3 + 0x28))(plVar3);
          }
          plStack_90 = *(int64_t **)(lStack_78 + lVar4 * 8);
          *(int64_t **)(lStack_78 + lVar4 * 8) = plVar3;
          if (plStack_90 != (int64_t *)0x0) {
            (**(code **)(*plStack_90 + 0x38))();
          }
          lVar6 = lStack_80;
          if (plStack_88 != (int64_t *)0x0) {
            (**(code **)(*plStack_88 + 0x38))();
            lVar6 = lStack_80;
          }
        }
        lVar4 = lVar4 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar4 < lVar5);
    }
  }
  else if (0 < lVar5) {
    piVar7 = (int *)(lVar6 + 0xe8);
    do {
      if (acStack_58[lVar4] != '\0') {
        plVar3 = (int64_t *)GenericFunction_180081480(core_system_data_config,&plStack_90,*piVar7 * iVar2);
        local_var_98 = 1;
        plVar3 = (int64_t *)*plVar3;
        if (plVar3 != (int64_t *)0x0) {
          plStack_88 = plVar3;
          (**(code **)(*plVar3 + 0x28))(plVar3);
        }
        plStack_88 = *(int64_t **)(param_4 + lVar4 * 8);
        *(int64_t **)(param_4 + lVar4 * 8) = plVar3;
        if (plStack_88 != (int64_t *)0x0) {
          (**(code **)(*plStack_88 + 0x38))();
        }
        local_var_98 = 0;
        if (plStack_90 != (int64_t *)0x0) {
          (**(code **)(*plStack_90 + 0x38))();
        }
      }
      lVar4 = lVar4 + 1;
      piVar7 = piVar7 + 1;
    } while (lVar4 < lVar5);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_c8);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_07110(uint64_t param_1,int64_t param_2,int64_t param_3)
void DataStructure_07110(uint64_t param_1,int64_t param_2,int64_t param_3)
{
  int iVar1;
  int iVar2;
  int iVar3;
  int64_t lVar4;
  int64_t *plVar5;
  code *pcVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int32_t *puVar9;
  int32_t *puVar10;
  int aiStack_50 [4];
  int64_t *plStack_40;
  iVar1 = *(int *)(param_2 + 0x184);
  uVar7 = 0;
  iVar2 = *(int *)(param_2 + 0x188);
  if (0 < (int64_t)iVar2) {
    puVar10 = (int32_t *)((uint64_t)*(byte *)(param_2 + 0x181) * 0x1c0 + 0x1e8 + system_message_buffer)
    ;
    puVar9 = (int32_t *)(param_2 + 0xc);
    uVar8 = uVar7;
    do {
      if (*(int64_t *)(param_3 + uVar7 * 8) != 0) {
        if (*(char *)(param_2 + 0x180) == '\x01') {
          lVar4 = *(int64_t *)(puVar9 + 1);
          plVar5 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
          pcVar6 = *(code **)(*plVar5 + 0x78);
          *(int32_t *)(lVar4 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
          (*pcVar6)(plVar5,*(uint64_t *)(lVar4 + 0x10),0);
        }
        else {
          iVar3 = puVar10[-0x40];
          DataStructure_04b50(core_system_data_config,aiStack_50,*puVar9,*(char *)(param_2 + 0x180),iVar1,1,1);
          DataStructure_9ea30(*(uint64_t *)(system_message_buffer + 0x1cd8),plStack_40,aiStack_50[0] * iVar3,
                        *(uint64_t *)(*(int64_t *)(param_3 + uVar7 * 8) + 0x10),iVar3 * iVar1,0);
          DataStructure_075c0(param_2,aiStack_50,uVar8,*puVar10,iVar3);
          if (plStack_40 != (int64_t *)0x0) {
            (**(code **)(*plStack_40 + 0x38))();
          }
        }
      }
      uVar8 = (uint64_t)((int)uVar8 + 1);
      uVar7 = uVar7 + 1;
      puVar10 = puVar10 + 1;
      puVar9 = puVar9 + 6;
    } while ((int64_t)uVar7 < (int64_t)iVar2);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_072b0(int64_t *param_1,int *param_2,int64_t *param_3,uint64_t param_4,
void DataStructure_072b0(int64_t *param_1,int *param_2,int64_t *param_3,uint64_t param_4,
                  int64_t param_5)
{
  int64_t lVar1;
  int64_t lVar2;
  int iVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  uint64_t stack_array_18 [2];
  plStackX_8 = param_1;
  if ((char)param_2[8] == '\x01') {
    lVar1 = *(int64_t *)(system_message_buffer + 0x1cd8);
    lVar2 = *(int64_t *)(param_2 + 6);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    plVar4 = *(int64_t **)(lVar1 + 0x8400);
    iVar3 = (**(code **)(*plVar4 + 0x70))
                      (plVar4,*(uint64_t *)(lVar2 + 0x10),0,4,0,stack_array_18,0,0xfffffffffffffffe);
    if (iVar3 < 0) {
      SystemCore_Loader(iVar3,&ui_system_data_1768_ptr);
    }
    *(uint64_t *)(param_5 + 8) = stack_array_18[0];
    plVar4 = (int64_t *)GenericFunction_1800e81f0();
    plVar4 = (int64_t *)*plVar4;
    if (plVar4 != (int64_t *)0x0) {
      plStackX_8 = plVar4;
      (**(code **)(*plVar4 + 0x28))(plVar4);
    }
    plStackX_8 = (int64_t *)*param_3;
    *param_3 = (int64_t)plVar4;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    uVar5 = GenericFunction_180081480(core_system_data_config,&plStackX_8,
                          ((*(byte *)(param_2 + 1) & 1) + 1) * *param_2 * 2);
    CoreEngine_080810(param_3,uVar5);
    plStackX_10 = plStackX_8;
  }
  if (plStackX_10 != (int64_t *)0x0) {
    (**(code **)(*plStackX_10 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_07400(uint64_t param_1,int *param_2,int64_t *param_3)
void DataStructure_07400(uint64_t param_1,int *param_2,int64_t *param_3)
{
  int iVar1;
  int64_t lVar2;
  int64_t *plVar3;
  code *pcVar4;
  uint64_t uVar5;
  int8_t stack_array_20 [16];
  int64_t *plStack_10;
  uVar5 = core_system_data_config;
  if ((char)param_2[8] == '\x01') {
    lVar2 = *(int64_t *)(param_2 + 6);
    plVar3 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
    pcVar4 = *(code **)(*plVar3 + 0x78);
    *(int32_t *)(lVar2 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    (*pcVar4)(plVar3,*(uint64_t *)(lVar2 + 0x10),0);
  }
  else {
    DataStructure_04e40(core_system_data_config,param_2 + 2);
    iVar1 = (*(byte *)(param_2 + 1) & 1) * 2 + 2;
    uVar5 = DataStructure_04b50(uVar5,stack_array_20,(*(byte *)(param_2 + 1) & 1) + 0xe,(char)param_2[8],
                          *param_2,1,1);
    DataStructure_06260(param_2 + 2,uVar5);
    if (plStack_10 != (int64_t *)0x0) {
      (**(code **)(*plStack_10 + 0x38))();
    }
    DataStructure_9ea30(*(uint64_t *)(system_message_buffer + 0x1cd8),*(uint64_t *)(param_2 + 6),
                  param_2[2] * iVar1,*(uint64_t *)(*param_3 + 0x10),*param_2 * iVar1,0);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_07530(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_07530(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  int32_t local_var_50;
  int32_t local_var_4c;
  int32_t local_var_48;
  int32_t local_var_44;
  int32_t local_var_40;
  int32_t local_var_3c;
  int32_t local_var_38;
  int32_t local_var_34;
  int32_t *aplocal_var_30 [2];
  code *pcStack_20;
  code *pcStack_18;
  uVar1 = core_system_data_config;
  pcStack_20 = DataStructure_07bb0;
  pcStack_18 = DataStructure_07a20;
  aplocal_var_30[0] =
       (int32_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags,0xfffffffffffffffe);
  local_var_50 = (int32_t)param_2;
  local_var_4c = (int32_t)((uint64_t)param_2 >> 0x20);
  local_var_48 = (int32_t)param_3;
  local_var_44 = (int32_t)((uint64_t)param_3 >> 0x20);
  *aplocal_var_30[0] = local_var_50;
  aplocal_var_30[0][1] = local_var_4c;
  aplocal_var_30[0][2] = local_var_48;
  aplocal_var_30[0][3] = local_var_44;
  local_var_40 = (int32_t)param_4;
  local_var_3c = (int32_t)((uint64_t)param_4 >> 0x20);
  local_var_38 = (int32_t)uVar1;
  local_var_34 = (int32_t)((uint64_t)uVar1 >> 0x20);
  aplocal_var_30[0][4] = local_var_40;
  aplocal_var_30[0][5] = local_var_3c;
  aplocal_var_30[0][6] = local_var_38;
  aplocal_var_30[0][7] = local_var_34;
  SystemCore_SecurityManager(aplocal_var_30);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_075c0(int64_t param_1,int *param_2,int param_3,int param_4,int param_5)
void DataStructure_075c0(int64_t param_1,int *param_2,int param_3,int param_4,int param_5)
{
  int iVar1;
  int iVar2;
  int64_t lVar3;
  byte bVar4;
  int8_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  lVar7 = (int64_t)param_4;
  lVar6 = param_1 + (int64_t)param_3 * 0x18;
  if (*(int *)(param_1 + (int64_t)param_3 * 0x18) != -1) {
    DataStructure_04e40(core_system_data_config,lVar6);
  }
  DataStructure_062c0(lVar6,param_2);
  lVar6 = system_main_module_state;
  if (param_4 != -1) {
    lVar3 = *(int64_t *)(param_2 + 4);
    *(int32_t *)(lVar3 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
    *(uint64_t *)(param_1 + 0x1a0 + lVar7 * 8) = *(uint64_t *)(lVar3 + 0x10);
    iVar1 = *param_2;
    *(int *)(param_1 + 0x260 + lVar7 * 4) = param_5;
    *(int *)(param_1 + 0x220 + lVar7 * 4) = iVar1 * param_5;
  }
  iVar1 = param_2[3];
  uVar5 = (int8_t)param_3;
  switch(iVar1) {
  case 2:
    lVar7 = *(int64_t *)(param_2 + 4);
    *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    *(uint64_t *)(param_1 + 0x2a8) = *(uint64_t *)(lVar7 + 0x10);
    iVar2 = *param_2;
    *(int *)(param_1 + 700) = param_5;
    *(int *)(param_1 + 0x2b4) = iVar2 * param_5;
    lVar6 = (int64_t)param_2[2];
    *(int8_t *)(param_1 + 0x19d) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 0x193) = uVar5;
    goto code_r0x0001802077e2;
  case 4:
  case 5:
    lVar7 = *(int64_t *)(param_2 + 4);
    *(int32_t *)(lVar7 + 0x16c) = *(int32_t *)(lVar6 + 0x224);
    *(uint64_t *)(param_1 + 0x2a0) = *(uint64_t *)(lVar7 + 0x10);
    iVar2 = *param_2;
    *(int *)(param_1 + 0x2b8) = param_5;
    *(int *)(param_1 + 0x2b0) = iVar2 * param_5;
    lVar6 = (int64_t)param_2[2] + 1;
    *(int8_t *)(param_1 + 0x198) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 400) = uVar5;
    *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x198) | lVar6 << (bVar4 & 0x3f);
    break;
  case 8:
    lVar6 = (int64_t)param_2[2] + 1;
    *(int8_t *)(param_1 + 0x19b) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 0x194) = uVar5;
    *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x198) | lVar6 << (bVar4 & 0x3f);
    break;
  case 9:
    lVar6 = (int64_t)param_2[2] + 1;
    *(int8_t *)(param_1 + 0x19a) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 0x195) = uVar5;
    *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x198) | lVar6 << (bVar4 & 0x3f);
    break;
  case 10:
    lVar6 = (int64_t)param_2[2];
    *(int8_t *)(param_1 + 0x19c) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 0x191) = uVar5;
    goto code_r0x0001802077e2;
  case 0xb:
    lVar6 = (int64_t)param_2[2];
    *(int8_t *)(param_1 + 0x19e) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 0x192) = uVar5;
code_r0x0001802077e2:
    *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x198) | lVar6 + 1 << (bVar4 & 0x3f);
    break;
  case 0xc:
    lVar6 = (int64_t)param_2[2] + 1;
    *(int8_t *)(param_1 + 0x199) = 0;
    bVar4 = SystemFunction_000180207d70(iVar1);
    *(int8_t *)(param_1 + 400) = uVar5;
    *(uint64_t *)(param_1 + 0x198) = *(uint64_t *)(param_1 + 0x198) | lVar6 << (bVar4 & 0x3f);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void DataStructure_07840(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void DataStructure_07840(int64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  lVar5 = param_1[1];
  lVar6 = *param_1;
  lVar7 = (lVar5 - lVar6) / 0x18;
  puVar3 = (uint64_t *)0x0;
  if (lVar7 == 0) {
    lVar7 = 1;
  }
  else {
    lVar7 = lVar7 * 2;
    if (lVar7 == 0) goto LAB_1802078c3;
  }
  puVar3 = (uint64_t *)
           CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar7 * 0x18,(char)param_1[3],param_4,0xfffffffffffffffe);
  lVar5 = param_1[1];
  lVar6 = *param_1;
LAB_1802078c3:
  puVar4 = puVar3;
  if (lVar6 != lVar5) {
    lVar6 = lVar6 - (int64_t)puVar3;
    do {
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = *(uint64_t *)(lVar6 + (int64_t)puVar4);
      plVar1 = *(int64_t **)(lVar6 + 8 + (int64_t)puVar4);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (int64_t *)puVar4[1];
      puVar4[1] = plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      plVar1 = *(int64_t **)(lVar6 + 0x10 + (int64_t)puVar4);
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x28))(plVar1);
      }
      plVar2 = (int64_t *)puVar4[2];
      puVar4[2] = plVar1;
      if (plVar2 != (int64_t *)0x0) {
        (**(code **)(*plVar2 + 0x38))();
      }
      *(uint64_t *)(lVar6 + (int64_t)puVar4) = 0;
      plVar1 = *(int64_t **)(lVar6 + 8 + (int64_t)puVar4);
      *(uint64_t *)(lVar6 + 8 + (int64_t)puVar4) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      plVar1 = *(int64_t **)(lVar6 + 0x10 + (int64_t)puVar4);
      *(uint64_t *)(lVar6 + 0x10 + (int64_t)puVar4) = 0;
      if (plVar1 != (int64_t *)0x0) {
        (**(code **)(*plVar1 + 0x38))();
      }
      puVar4 = puVar4 + 3;
    } while (lVar6 + (int64_t)puVar4 != lVar5);
  }
  DataStructure_04a00(puVar4,param_2);
  lVar5 = param_1[1];
  lVar6 = *param_1;
  if (lVar6 != lVar5) {
    do {
      GenericFunction_18004bf50(lVar6);
      lVar6 = lVar6 + 0x18;
    } while (lVar6 != lVar5);
    lVar6 = *param_1;
  }
  if (lVar6 == 0) {
    *param_1 = (int64_t)puVar3;
    param_1[1] = (int64_t)(puVar4 + 3);
    param_1[2] = (int64_t)(puVar3 + lVar7 * 3);
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(lVar6);
}
// 函数: void DataStructure_07a20(uint64_t *param_1)
void DataStructure_07a20(uint64_t *param_1)
{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int64_t *plVar6;
  int64_t lVar7;
  uint uVar8;
  int64_t lVar9;
  int64_t lVar10;
  int iStackX_8;
  int64_t lStackX_10;
  param_1 = (uint64_t *)*param_1;
  *(int32_t *)*param_1 = 0;
  *(int32_t *)param_1[1] = 0;
  *(int32_t *)param_1[2] = 0;
  iStackX_8 = 0;
  lVar9 = 0x4a0;
  do {
    iVar2 = (int)((*(int64_t *)(lVar9 + 8 + param_1[3]) - *(int64_t *)(lVar9 + param_1[3])) / 0x18
                 );
    lStackX_10 = (int64_t)iVar2;
    if (0 < iVar2) {
      iVar2 = SystemFunction_0001802063e0(iStackX_8);
      lVar10 = 0;
      do {
        piVar1 = *(int **)(lVar10 + *(int64_t *)(lVar9 + param_1[3]));
        iVar3 = _Mtx_lock(piVar1 + 6);
        if (iVar3 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar3);
        }
        plVar6 = *(int64_t **)(piVar1 + 2);
        lVar7 = 0;
        if (plVar6 != (int64_t *)0x0) {
          uVar8 = 0;
          do {
            uVar5 = *(uint *)(plVar6 + 2);
            lVar7 = lVar7 + (int)uVar5;
            plVar6 = (int64_t *)*plVar6;
            if (uVar5 < uVar8) {
              uVar5 = uVar8;
            }
            uVar8 = uVar5;
          } while (plVar6 != (int64_t *)0x0);
        }
        iVar3 = *piVar1;
        iVar4 = _Mtx_unlock(piVar1 + 6);
        if (iVar4 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar4);
        }
        *(int *)param_1[1] = *(int *)param_1[1] + iVar3 * iVar2;
        *(int *)*param_1 = *(int *)*param_1 + (iVar3 - (int)lVar7) * iVar2;
        iVar4 = 0;
        if (iVar3 == lVar7) {
          iVar4 = iVar3;
        }
        *(int *)param_1[2] = *(int *)param_1[2] + iVar4;
        lVar10 = lVar10 + 0x18;
        lStackX_10 = lStackX_10 + -1;
      } while (lStackX_10 != 0);
    }
    iStackX_8 = iStackX_8 + 1;
    lVar9 = lVar9 + 0x20;
  } while (iStackX_8 < 0x10);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t DataStructure_07bb0(int64_t *param_1,int64_t *param_2,int param_3)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  if (param_3 == 3) {
    return 0x180c03890;
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
// 函数: void DataStructure_07c90(int64_t param_1,int64_t param_2)
void DataStructure_07c90(int64_t param_1,int64_t param_2)
{
  uint64_t uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,param_2 * 8 + 8,8,*(int8_t *)(param_1 + 0x2c));
// WARNING: Subroutine does not return
  memset(uVar1,0,param_2 * 8);
}
uint64_t * DataStructure_07e00(uint64_t *param_1)
{
  *param_1 = 0xffffffffffffffff;
  *(int32_t *)(param_1 + 1) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0xc) = 0x10;
  param_1[2] = 0;
  return param_1;
}
// 函数: void DataStructure_07e40(uint64_t *param_1)
void DataStructure_07e40(uint64_t *param_1)
{
  int64_t *plVar1;
  *param_1 = 0xffffffffffffffff;
  plVar1 = (int64_t *)param_1[2];
  param_1[2] = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)((int64_t)param_1 + 0xc) = 0x10;
  *(int32_t *)(param_1 + 1) = 0xffffffff;
  return;
}
// 函数: void DataStructure_07ea0(int64_t *param_1)
void DataStructure_07ea0(int64_t *param_1)
{
  uint *puVar1;
  int64_t lVar2;
  int iVar3;
  int64_t lVar4;
  int64_t lVar5;
  lVar5 = *param_1;
  if ((lVar5 != 0) &&
     (iVar3 = (int)(*(int64_t *)(lVar5 + 0x40) - *(int64_t *)(lVar5 + 0x38) >> 4),
     lVar5 = (int64_t)iVar3, 0 < iVar3)) {
    lVar4 = 0;
    do {
      puVar1 = (uint *)(*(int64_t *)(lVar4 + *(int64_t *)(*param_1 + 0x38)) + 0x100);
      *puVar1 = *puVar1 & 0xfffff7ff;
      lVar2 = *(int64_t *)(lVar4 + *(int64_t *)(*param_1 + 0x38));
      *(uint64_t *)(lVar2 + 0x108) = 0xffffffffffffffff;
      *(int32_t *)(lVar2 + 0x110) = 0xffffffff;
      lVar4 = lVar4 + 0x10;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  if (param_1[0xb] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  if ((int64_t *)*param_1 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_1 + 0x38))();
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x000180207fb0)
// WARNING: Removing unreachable block (ram,0x000180207fcf)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address