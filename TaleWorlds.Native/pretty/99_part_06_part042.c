#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part042.c - 8 个函数
// 函数: void RenderingSystem_cf700(int64_t param_1)
void RenderingSystem_cf700(int64_t param_1)
{
  uint64_t *puVar1;
  if (*(int64_t *)(param_1 + 0x280) == 0) {
    puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,3,0xfffffffffffffffe);
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    *(int32_t *)(puVar1 + 3) = 3;
    puVar1[4] = param_1;
    *(uint64_t **)(param_1 + 0x280) = puVar1;
  }
  return;
}
uint64_t RenderingSystem_cf770(int64_t param_1,int64_t param_2)
{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  int64_t lVar4;
  bool bVar5;
  bool bVar6;
  int32_t uVar7;
  float *pfVar8;
  uint64_t uVar9;
  int64_t lVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int64_t lStack_78;
  int32_t *plocal_var_70;
  int32_t *plocal_var_68;
  lVar4 = *(int64_t *)(param_1 + 0x10);
  uVar9 = 0;
  bVar1 = *(byte *)(param_1 + 0x2d);
  bVar11 = 0;
  uVar14 = 0;
  if (lVar4 != 0) {
    bVar2 = *(byte *)(lVar4 + 0x2b);
    plocal_var_70 = *(int32_t **)(param_1 + 0x18);
    bVar11 = bVar2 & 1;
    plocal_var_68 = (int32_t *)
                 (*(int64_t *)(param_1 + 0x20) + (uint64_t)*(byte *)(param_1 + 0x2c) * 4);
    lStack_78 = lVar4;
    if ((char)bVar2 < '\0') {
      uVar14 = 0x20;
    }
    else {
      uVar14 = 0x10;
      if ((bVar2 & 2) != 0) {
        uVar14 = 0x40;
      }
    }
  }
  uVar3 = *(ushort *)(param_1 + 0x30);
  uVar15 = 0;
  lVar4 = *(int64_t *)(param_1 + 0x20);
  uVar12 = 0;
  bVar5 = false;
  if (bVar1 != 0) {
    do {
      if (uVar15 != 0) {
        if (uVar12 < *(byte *)(lStack_78 + 0x29)) {
          plocal_var_70 = (int32_t *)
                       ((int64_t)plocal_var_70 +
                       (uint64_t)((*(byte *)(lStack_78 + 0x29) - uVar12) * uVar14));
        }
        lStack_78 = lStack_78 + 0x30;
      }
      uVar15 = uVar15 + 1;
      uVar12 = 0;
      bVar6 = bVar5;
      if (*(char *)(lStack_78 + 0x29) != '\0') {
        do {
          if (bVar5) {
            plocal_var_70 = (int32_t *)((int64_t)plocal_var_70 + (uint64_t)uVar14);
            plocal_var_68 = plocal_var_68 + 1;
          }
          lVar10 = uVar9 * 0x30;
          uVar12 = uVar12 + 1;
          bVar5 = true;
          *(int32_t *)(lVar10 + param_2) = *plocal_var_70;
          *(int32_t *)(lVar10 + 4 + param_2) = plocal_var_70[1];
          *(int32_t *)(lVar10 + 8 + param_2) = plocal_var_70[2];
          *(int32_t *)(lVar10 + 0xc + param_2) = plocal_var_70[3];
          *(int32_t *)(lVar10 + 0x10 + param_2) = *(int32_t *)(lStack_78 + 0x10);
          *(int32_t *)(lVar10 + 0x14 + param_2) = *(int32_t *)(lStack_78 + 0x14);
          *(int32_t *)(lVar10 + 0x18 + param_2) = *(int32_t *)(lStack_78 + 0x18);
          if ((uVar3 & 0x20) == 0) {
            *(int32_t *)(lVar10 + 0x1c + param_2) = 0xffffffff;
            if (bVar11 == 0) goto LAB_1803cf8d1;
            uVar7 = *plocal_var_68;
          }
          else {
            if (bVar11 == 0) {
              uVar7 = 0xffffffff;
            }
            else {
              uVar7 = *plocal_var_68;
            }
            *(int32_t *)(lVar10 + 0x1c + param_2) = uVar7;
LAB_1803cf8d1:
            uVar7 = 0xffffffff;
          }
          *(int32_t *)(lVar10 + 0x2c + param_2) = uVar7;
          if ((uVar3 & 0x10) == 0) {
            fVar17 = 0.0;
            fVar18 = 0.0;
            fVar16 = 0.0;
          }
          else {
            fVar16 = *(float *)(lVar4 + uVar9 * 4);
            fVar17 = fVar16 * *(float *)(lVar10 + 0x18 + param_2);
            fVar18 = fVar16 * *(float *)(lVar10 + 0x14 + param_2);
            fVar16 = fVar16 * *(float *)(lVar10 + 0x10 + param_2);
          }
          uVar13 = (int)uVar9 + 1;
          uVar9 = (uint64_t)uVar13;
          pfVar8 = (float *)(param_2 + 0x20 + lVar10);
          *pfVar8 = fVar16;
          pfVar8[1] = fVar18;
          pfVar8[2] = fVar17;
          if (uVar13 == 8) {
            return 8;
          }
          bVar6 = true;
        } while (uVar12 < *(byte *)(lStack_78 + 0x29));
      }
      bVar5 = bVar6;
    } while (uVar15 < bVar1);
  }
  return uVar9;
}
uint64_t *
RenderingSystem_cf970(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &system_param1_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
uint64_t * RenderingSystem_cf9c0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void RenderingSystem_cfa00(uint64_t *param_1)
void RenderingSystem_cfa00(uint64_t *param_1)
{
  *param_1 = &system_param1_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}
uint64_t * RenderingSystem_cfa30(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4032_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void RenderingSystem_cfa80(uint64_t *param_1)
void RenderingSystem_cfa80(uint64_t *param_1)
{
  *param_1 = &processed_var_4680_ptr;
  param_1[2] = 0;
  *param_1 = &processed_var_4552_ptr;
  return;
}
uint64_t * RenderingSystem_cfac0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x18);
  }
  return param_1;
}
uint64_t *
RenderingSystem_cfb00(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  *param_1 = &processed_var_4680_ptr;
  param_1[2] = 0;
  *param_1 = &processed_var_4552_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}
// 函数: void RenderingSystem_cfb80(int64_t param_1)
void RenderingSystem_cfb80(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(param_1 + 0x18);
  if (plVar1 != (int64_t *)0x0) {
    if (*(code **)(*plVar1 + 0x20) == (code *)&processed_var_7456_ptr) {
// WARNING: Could not recover jumptable at 0x0001803cfbab. Too many branches
// WARNING: Treating indirect jump as call
      (**(code **)(*(int64_t *)plVar1[2] + 0x80))();
      return;
    }
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  return;
}
uint64_t * RenderingSystem_cfbc0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4760_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * RenderingSystem_cfc00(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4848_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * RenderingSystem_cfc40(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_4872_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t *
RenderingSystem_cfc90(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x12;
  strcpy_s(param_2[1],0x80,&processed_var_4992_ptr,param_4,0,0xfffffffffffffffe);
  return param_2;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_cfd10(int64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
void RenderingSystem_cfd10(int64_t param_1,int32_t param_2,int32_t param_3,uint64_t param_4,
                  int64_t param_5,int32_t param_6)
{
  uint64_t uVar1;
  uint uVar2;
  int iVar3;
  int32_t *puVar4;
  int32_t *puVar5;
  uint64_t *puVar6;
  int32_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint uVar10;
  uint64_t uVar11;
  int iVar12;
  int32_t *puVar13;
  int32_t uVar14;
  int8_t stack_array_288 [32];
  int8_t local_var_268;
  void *plocal_var_258;
  int32_t *plocal_var_250;
  int32_t local_var_248;
  int16_t local_var_244;
  int8_t local_var_242;
  int8_t local_var_241;
  uint64_t local_var_240;
  int64_t *plStack_238;
  uint64_t local_var_230;
  void *plocal_var_228;
  int32_t *plocal_var_220;
  int32_t local_var_218;
  uint64_t local_var_210;
  void *plocal_var_208;
  int32_t *plocal_var_200;
  int32_t local_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  int64_t *plStack_1e0;
  int32_t local_var_1d8;
  int32_t local_var_1d4;
  int32_t local_var_1d0;
  int32_t local_var_1cc;
  int32_t local_var_1c8;
  int32_t local_var_1c4;
  int32_t local_var_1c0;
  int32_t local_var_1bc;
  int32_t local_var_1b8;
  int8_t local_var_1b4;
  uint64_t local_var_1b3;
  int32_t local_var_1a8;
  int8_t local_var_1a4;
  int64_t *plStack_1a0;
  uint64_t local_var_198;
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [136];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_198 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  local_var_230 = CONCAT44(local_var_230._4_4_,param_2);
  *(int32_t *)(param_1 + 0x18) = param_2;
  *(int32_t *)(param_1 + 0x1c) = param_3;
  *(int32_t *)(param_1 + 0x24) = 0x19;
  local_var_244 = 0x18a;
  plocal_var_258 = (void *)CONCAT44(param_3,param_3);
  plocal_var_250 = (int32_t *)0x1900000001;
  local_var_242 = *(int8_t *)
                ((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xcb +
                *(int64_t *)(system_message_buffer + 0x1d20));
  local_var_241 = 1;
  local_var_248 = 0x3f800000;
  local_var_240 = CONCAT44(local_var_240._4_4_,param_6);
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  plocal_var_200 = (int32_t *)0x0;
  local_var_1f8 = 0;
  local_var_1e8 = param_3;
  puVar4 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_200 = puVar4;
  uVar2 = CoreEngineSystemCleanup(puVar4);
  *puVar4 = 0x616e7964;
  puVar4[1] = 0x5f63696d;
  puVar4[2] = 0x64617571;
  puVar4[3] = 0x6572745f;
  *(int16_t *)(puVar4 + 4) = 0x5f65;
  *(int8_t *)((int64_t)puVar4 + 0x12) = 0;
  local_var_1f8 = 0x12;
  iVar3 = *(int *)(param_5 + 0x10);
  local_var_1f0._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x12) && (uVar2 < iVar3 + 0x13U)) {
      local_var_268 = 0x13;
      puVar4 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar4,iVar3 + 0x13U,0x10);
      plocal_var_200 = puVar4;
      local_var_1f0._0_4_ = CoreEngineSystemCleanup(puVar4);
      iVar3 = *(int *)(param_5 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar4 + 0x12),*(uint64_t *)(param_5 + 8),
           (int64_t)(iVar3 + 1));
  }
  plocal_var_228 = &system_data_buffer_ptr;
  local_var_210 = 0;
  plocal_var_220 = (int32_t *)0x0;
  local_var_218 = 0;
  puVar5 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x12,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_220 = puVar5;
  uVar2 = CoreEngineSystemCleanup(puVar5);
  *puVar5 = 0x74617473;
  puVar5[1] = 0x715f6369;
  puVar5[2] = 0x5f646175;
  puVar5[3] = 0x65657274;
  *(int16_t *)(puVar5 + 4) = 0x5f;
  local_var_218 = 0x11;
  iVar3 = *(int *)(param_5 + 0x10);
  local_var_210._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x11) && (uVar2 < iVar3 + 0x12U)) {
      local_var_268 = 0x13;
      puVar5 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar5,iVar3 + 0x12U,0x10);
      plocal_var_220 = puVar5;
      local_var_210._0_4_ = CoreEngineSystemCleanup(puVar5);
      iVar3 = *(int *)(param_5 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar5 + 0x11),*(uint64_t *)(param_5 + 8),
           (int64_t)(iVar3 + 1));
  }
  plocal_var_188 = &memory_allocator_3432_ptr;
  plocal_var_180 = stack_array_170;
  stack_array_170[0] = 0;
  local_var_178 = 0x12;
  puVar7 = (int32_t *)&system_buffer_ptr;
  if (puVar4 != (int32_t *)0x0) {
    puVar7 = puVar4;
  }
  uVar14 = strcpy_s(stack_array_170,0x80,puVar7);
  puVar6 = (uint64_t *)GenericFunction_1800b1d80(uVar14,&plStack_1e0,&plocal_var_188,&plocal_var_258);
  uVar1 = *puVar6;
  *puVar6 = 0;
  plStack_238 = *(int64_t **)(param_1 + 0x38);
  *(uint64_t *)(param_1 + 0x38) = uVar1;
  if (plStack_238 != (int64_t *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  if (plStack_1e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1e0 + 0x38))();
  }
  plocal_var_188 = &system_state_ptr;
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = 0x11;
  puVar7 = (int32_t *)&system_buffer_ptr;
  if (puVar5 != (int32_t *)0x0) {
    puVar7 = puVar5;
  }
  uVar14 = strcpy_s(stack_array_d0,0x80,puVar7);
  puVar6 = (uint64_t *)GenericFunction_1800b1d80(uVar14,&plStack_1a0,&plocal_var_e8,&plocal_var_258);
  uVar1 = *puVar6;
  *puVar6 = 0;
  plStack_238 = *(int64_t **)(param_1 + 0x40);
  *(uint64_t *)(param_1 + 0x40) = uVar1;
  if (plStack_238 != (int64_t *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  if (plStack_1a0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1a0 + 0x38))();
  }
  plocal_var_e8 = &system_state_ptr;
  *(int8_t *)(*(int64_t *)(param_1 + 0x38) + 0x357) = 1;
  *(int8_t *)(*(int64_t *)(param_1 + 0x40) + 0x357) = 1;
  plocal_var_258 = &system_data_buffer_ptr;
  local_var_240 = 0;
  plocal_var_250 = (int32_t *)0x0;
  local_var_248 = 0;
  puVar7 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x15,0x13);
  *(int8_t *)puVar7 = 0;
  plocal_var_250 = puVar7;
  uVar2 = CoreEngineSystemCleanup(puVar7);
  *puVar7 = 0x706d6f63;
  puVar7[1] = 0x7469736f;
  puVar7[2] = 0x75715f65;
  puVar7[3] = 0x745f6461;
  puVar7[4] = 0x5f656572;
  *(int8_t *)(puVar7 + 5) = 0;
  local_var_248 = 0x14;
  iVar3 = *(int *)(param_5 + 0x10);
  local_var_240._0_4_ = uVar2;
  if (0 < iVar3) {
    if ((iVar3 != -0x14) && (uVar2 < iVar3 + 0x15U)) {
      local_var_268 = 0x13;
      puVar7 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar7,iVar3 + 0x15U,0x10);
      plocal_var_250 = puVar7;
      local_var_240._0_4_ = CoreEngineSystemCleanup(puVar7);
      iVar3 = *(int *)(param_5 + 0x10);
    }
// WARNING: Subroutine does not return
    memcpy(puVar7 + 5,*(uint64_t *)(param_5 + 8),(int64_t)(iVar3 + 1));
  }
  local_var_1d0 = 1;
  local_var_1cc = 1;
  local_var_1c4 = 0;
  local_var_1c0 = 0;
  local_var_1bc = 0;
  local_var_1b8 = 0x3f800000;
  local_var_1b3 = 1;
  local_var_1b4 = 0;
  local_var_1a4 = 0;
  local_var_1d8 = local_var_1e8;
  local_var_1d4 = local_var_1e8;
  local_var_1c8 = 0xc;
  local_var_1a8 = param_6;
  puVar6 = (uint64_t *)0x0;
  uVar2 = 0;
  plocal_var_188 = &memory_allocator_3432_ptr;
  plocal_var_180 = stack_array_170;
  stack_array_170[0] = 0;
  local_var_178 = 0x14;
  puVar13 = (int32_t *)&system_buffer_ptr;
  if (puVar7 != (int32_t *)0x0) {
    puVar13 = puVar7;
  }
  strcpy_s(stack_array_170,0x80,puVar13);
  puVar8 = (uint64_t *)SystemInitializer(system_resource_state,&plStack_238,&plocal_var_188,&local_var_1d8);
  uVar1 = *puVar8;
  *puVar8 = 0;
  plStack_1e0 = *(int64_t **)(param_1 + 0x48);
  *(uint64_t *)(param_1 + 0x48) = uVar1;
  if (plStack_1e0 != (int64_t *)0x0) {
    (**(code **)(*plStack_1e0 + 0x38))();
  }
  if (plStack_238 != (int64_t *)0x0) {
    (**(code **)(*plStack_238 + 0x38))();
  }
  plocal_var_188 = &system_state_ptr;
  iVar3 = 1;
  iVar12 = 1;
  puVar8 = puVar6;
  uVar10 = uVar2;
  if (1 < (int)local_var_230) {
    uVar2 = ((int)local_var_230 - 2U >> 1) + 1;
    uVar11 = (uint64_t)uVar2;
    uVar2 = uVar2 * 2;
    puVar9 = puVar6;
    do {
      uVar10 = (int)puVar9 + iVar3 * 4;
      puVar9 = (uint64_t *)(uint64_t)uVar10;
      iVar3 = iVar3 * 0x10;
      puVar8 = (uint64_t *)(uint64_t)(uint)((int)puVar8 + iVar3);
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
  }
  if ((int)uVar2 < (int)local_var_230) {
    iVar12 = iVar3 * 4 + 1;
  }
  iVar12 = iVar12 + (int)puVar8 + uVar10;
  *(int *)(param_1 + 0x20) = iVar12;
  puVar9 = puVar6;
  if (iVar12 != 0) {
    puVar9 = (uint64_t *)
             CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar12 * 0x30,
                           CONCAT71((int7)((uint64_t)puVar8 >> 8),0xc));
    puVar8 = puVar9 + 1;
    do {
      puVar8[-1] = 0;
      *(int32_t *)puVar8 = 0;
      *(int16_t *)((int64_t)puVar8 + 0x25) = 0;
      uVar2 = (int)puVar6 + 1;
      puVar6 = (uint64_t *)(uint64_t)uVar2;
      puVar8 = puVar8 + 6;
    } while ((uint64_t)(int64_t)(int)uVar2 < (uint64_t)(int64_t)iVar12);
  }
  *(uint64_t **)(param_1 + 0x10) = puVar9;
  local_var_230 = 0;
  *puVar9 = 0;
  *(int32_t *)((int64_t)puVar9 + 0x14) = 0;
  *(int32_t *)(param_1 + 0x30) = 1;
  RenderingSystem_d0430(param_1,puVar9,0);
  plocal_var_258 = &system_data_buffer_ptr;
  if (puVar7 == (int32_t *)0x0) {
    plocal_var_250 = (int32_t *)0x0;
    local_var_240 = (uint64_t)local_var_240._4_4_ << 0x20;
    plocal_var_258 = &system_state_ptr;
    plocal_var_228 = &system_data_buffer_ptr;
    if (puVar5 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puVar5);
    }
    plocal_var_220 = (int32_t *)0x0;
    local_var_210 = (uint64_t)local_var_210._4_4_ << 0x20;
    plocal_var_228 = &system_state_ptr;
    plocal_var_208 = &system_data_buffer_ptr;
    if (puVar4 == (int32_t *)0x0) {
      plocal_var_200 = (int32_t *)0x0;
      local_var_1f0 = (uint64_t)local_var_1f0._4_4_ << 0x20;
      plocal_var_208 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_288);
    }
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner(puVar4);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void RenderingSystem_d0430(int64_t param_1,float *param_2,int param_3)
void RenderingSystem_d0430(int64_t param_1,float *param_2,int param_3)
{
  float fVar1;
  uint64_t *puVar2;
  float *pfVar3;
  float *pfVar4;
  int64_t lVar5;
  int8_t stack_array_78 [32];
  float fStack_58;
  float fStack_54;
  float afStack_50 [5];
  int32_t local_var_3c;
  float fStack_38;
  float fStack_34;
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_78;
  param_3 = param_3 + 1;
  pfVar4 = param_2 + 7;
  if (param_3 == *(int *)(param_1 + 0x18)) {
    *pfVar4 = -NAN;
    param_2[8] = -NAN;
    param_2[9] = -NAN;
    param_2[10] = -NAN;
  }
  else {
    pfVar3 = afStack_50;
    afStack_50[0] = 0.0;
    afStack_50[1] = 0.0;
    lVar5 = 4;
    afStack_50[2] = 0.0;
    local_var_3c = 0;
    afStack_50[3] = 1.0 / (float)(uint)(1 << ((byte)param_3 & 0x1f));
    afStack_50[4] = afStack_50[3];
    fStack_38 = afStack_50[3];
    fStack_34 = afStack_50[3];
    do {
      fVar1 = *(float *)(param_1 + 0x30);
      fStack_54 = pfVar3[1];
      *(int *)(param_1 + 0x30) = (int)fVar1 + 1;
      *pfVar4 = fVar1;
      puVar2 = (uint64_t *)((int64_t)(int)fVar1 * 0x30 + *(int64_t *)(param_1 + 0x10));
      *(float *)((int64_t)puVar2 + 0x14) = fVar1;
      *(float *)(puVar2 + 3) = param_2[5];
      fStack_54 = fStack_54 + param_2[1];
      fStack_58 = *param_2 + *pfVar3;
      *puVar2 = CONCAT44(fStack_54,fStack_58);
      RenderingSystem_d0430(param_1,puVar2,param_3);
      pfVar4 = pfVar4 + 1;
      pfVar3 = pfVar3 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_78);
}
// 函数: void RenderingSystem_d0486(byte param_1,float param_2)
void RenderingSystem_d0486(byte param_1,float param_2)
{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_EAX;
  uint64_t *puVar5;
  float *unaff_RBX;
  float *pfVar6;
  int64_t unaff_RSI;
  int32_t unaff_EDI;
  int *unaff_R14;
  int64_t lVar7;
  uint64_t local_buffer_28;
  int32_t local_buffer_30;
  float fStack0000000000000034;
  float fStack0000000000000038;
  int32_t local_buffer_3c;
  float fStack0000000000000040;
  float fStack0000000000000044;
  uint64_t local_var_48;
  pfVar6 = (float *)&local_buffer_00000028;
  local_buffer_28 = 0;
  lVar7 = 4;
  local_buffer_30 = 0;
  local_buffer_3c = 0;
  fStack0000000000000034 = param_2 / (float)(uint)(in_EAX << (param_1 & 0x1f));
  fStack0000000000000038 = fStack0000000000000034;
  fStack0000000000000040 = fStack0000000000000034;
  fStack0000000000000044 = fStack0000000000000034;
  do {
    iVar4 = *(int *)(unaff_RSI + 0x30);
    fVar1 = pfVar6[1];
    *(int *)(unaff_RSI + 0x30) = iVar4 + 1;
    *unaff_R14 = iVar4;
    puVar5 = (uint64_t *)((int64_t)iVar4 * 0x30 + *(int64_t *)(unaff_RSI + 0x10));
    *(int *)((int64_t)puVar5 + 0x14) = iVar4;
    *(float *)(puVar5 + 3) = unaff_RBX[5];
    fVar2 = *unaff_RBX;
    fVar3 = *pfVar6;
    *puVar5 = CONCAT44(fVar1 + unaff_RBX[1],fVar2 + fVar3);
    RenderingSystem_d0430(fVar2 + fVar3,puVar5,unaff_EDI);
    unaff_R14 = unaff_R14 + 1;
    pfVar6 = pfVar6 + 2;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void RenderingSystem_d054f(void)
void RenderingSystem_d054f(void)
{
  uint64_t local_var_48;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)&local_buffer_00000000);
}