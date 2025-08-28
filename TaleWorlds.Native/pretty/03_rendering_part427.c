#include "ultra_high_freq_fun_definitions.h"
n//  的语义化别名
#define SystemCore_SyncController
// $fun 的语义化别名
#define $alias_name $fun
/* SystemCore_ConfigValidator - SystemCore_ConfigValidator */
#define SystemCore_ConfigValidator SystemCore_ConfigValidator
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
// 03_rendering_part427.c - 13 个函数
// 函数: void UISystem_9cc80(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
void UISystem_9cc80(int64_t param_1,uint64_t param_2,int32_t param_3,int32_t param_4,
                  uint64_t param_5,uint param_6,int64_t param_7,int64_t param_8,int64_t param_9
                  ,int64_t param_10,char param_11,uint param_12)
{
  uint64_t *puVar1;
  float *pfVar2;
  uint uVar3;
  int iVar4;
  uint64_t uVar5;
  uint64_t uVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  int iVar9;
  int64_t lVar10;
  int iVar11;
  int *piVar12;
  int iVar13;
  int64_t lVar14;
  uint uVar15;
  int iVar16;
  int64_t lVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int64_t lVar23;
  int aiStack_88 [2];
  int64_t lStack_80;
  int64_t lStack_78;
  int64_t lStack_70;
  int64_t lStack_68;
  uint64_t local_var_60;
  uint64_t local_var_58;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  uint64_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)aiStack_88;
  uVar15 = 0;
  lStack_70 = 8;
  lStack_68 = param_10;
  do {
    lVar17 = *(int64_t *)(param_1 + 0x28 + (uint64_t)param_12 * 8);
    lVar14 = *(int64_t *)(*(int64_t *)(param_1 + 8) + 0x68);
    puVar1 = (uint64_t *)(lVar17 + (uint64_t)*(uint *)(lStack_70 + -4 + lVar14) * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    if (param_11 == '\0') {
      pfVar2 = (float *)(lVar17 + (uint64_t)*(uint *)(lStack_70 + lVar14) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lVar14 + 4 + lStack_70);
    }
    else {
      pfVar2 = (float *)(lVar17 + (uint64_t)*(uint *)(lVar14 + 4 + lStack_70) * 0x10);
      fStack_50 = *pfVar2;
      fStack_4c = pfVar2[1];
      fStack_48 = pfVar2[2];
      fStack_44 = pfVar2[3];
      uVar3 = *(uint *)(lStack_70 + lVar14);
    }
    local_var_60._4_4_ = (float)((uint64_t)uVar5 >> 0x20);
    puVar1 = (uint64_t *)(lVar17 + (uint64_t)uVar3 * 0x10);
    uVar7 = *puVar1;
    uVar8 = puVar1[1];
    local_var_60._0_4_ = (float)uVar5;
    iVar13 = (int)(local_var_60._4_4_ + 0.5);
    iVar18 = (int)((float)local_var_60 + 0.5);
    iVar20 = (int)(fStack_4c + 0.5);
    local_var_40._4_4_ = (float)((uint64_t)uVar7 >> 0x20);
    iVar16 = (int)(fStack_50 + 0.5);
    local_var_40._0_4_ = (float)uVar7;
    iVar19 = (int)(local_var_40._4_4_ + 0.5);
    iVar11 = (int)((float)local_var_40 + 0.5);
    iVar22 = (iVar19 - iVar13) * (iVar16 - iVar18) - (iVar13 - iVar20) * (iVar18 - iVar11);
    iVar9 = iVar16;
    if (iVar18 < iVar16) {
      iVar9 = iVar18;
    }
    iVar4 = iVar11;
    if (iVar9 < iVar11) {
      iVar4 = iVar9;
    }
    aiStack_88[0] = 0;
    if (0 < iVar4) {
      aiStack_88[0] = iVar4;
    }
    if (iVar16 < iVar18) {
      iVar16 = iVar18;
    }
    if (iVar11 < iVar16) {
      iVar11 = iVar16;
    }
    iVar16 = 0x27f;
    if (iVar11 < 0x27f) {
      iVar16 = iVar11;
    }
    iVar9 = iVar20;
    if (iVar13 < iVar20) {
      iVar9 = iVar13;
    }
    iVar11 = iVar19;
    if (iVar9 < iVar19) {
      iVar11 = iVar9;
    }
    iVar9 = 0;
    if (0 < iVar11) {
      iVar9 = iVar11;
    }
    lStack_80 = CONCAT44(lStack_80._4_4_,iVar9);
    if (iVar20 < iVar13) {
      iVar20 = iVar13;
    }
    if (iVar19 < iVar20) {
      iVar19 = iVar20;
    }
    iVar11 = 0x167;
    if (iVar19 < 0x167) {
      iVar11 = iVar19;
    }
    if ((*(byte *)(param_1 + 0x14) & 4) == 0) {
      if (0 < iVar22) goto LAB_18049ce60;
    }
    else if (iVar22 != 0) {
LAB_18049ce60:
      if ((((aiStack_88[0] <= iVar16) && (iVar9 <= iVar11)) &&
          (local_var_58._4_4_ = (float)((uint64_t)uVar6 >> 0x20), 0.0 < local_var_58._4_4_)) &&
         ((0.0 < fStack_44 &&
          (local_var_38._4_4_ = (float)((uint64_t)uVar8 >> 0x20), 0.0 < local_var_38._4_4_)))) {
        iVar19 = aiStack_88[0] / 0x50;
        aiStack_88[0] = 0;
        if (0 < iVar19) {
          aiStack_88[0] = iVar19;
        }
        iVar19 = 0;
        if (0 < iVar9 / 0x60) {
          iVar19 = iVar9 / 0x60;
        }
        iVar9 = 7;
        if (iVar16 / 0x50 < 7) {
          iVar9 = iVar16 / 0x50;
        }
        lVar17 = (int64_t)iVar19;
        lStack_80 = (int64_t)iVar9;
        iVar16 = 3;
        if (iVar11 / 0x60 < 3) {
          iVar16 = iVar11 / 0x60;
        }
        if (lVar17 <= iVar16) {
          lVar23 = (int64_t)aiStack_88[0];
          iVar19 = iVar19 << 0x11;
          lVar14 = (iVar16 - lVar17) + 1;
          piVar21 = (int *)(param_10 + (lVar17 * 8 + lVar23) * 4);
          do {
            if (lVar23 <= lStack_80) {
              iVar16 = aiStack_88[0] << 0xe;
              lVar17 = (lStack_80 - lVar23) + 1;
              piVar12 = piVar21;
              do {
                iVar9 = iVar19 + iVar16;
                iVar16 = iVar16 + 0x4000;
                lVar10 = (int64_t)(iVar9 + *piVar12);
                *(uint *)(param_7 + lVar10 * 4) = uVar15;
                *(int32_t *)(param_8 + lVar10 * 4) = param_3;
                *(int32_t *)(param_9 + lVar10 * 4) = param_4;
                *piVar12 = *piVar12 + 1;
                lVar17 = lVar17 + -1;
                piVar12 = piVar12 + 1;
              } while (lVar17 != 0);
            }
            iVar19 = iVar19 + 0x20000;
            piVar21 = piVar21 + 8;
            lVar14 = lVar14 + -1;
          } while (lVar14 != 0);
        }
      }
    }
    uVar15 = uVar15 + 1;
    lStack_70 = lStack_70 + 0x18;
    if (param_6 < uVar15) {
      lStack_78 = param_1;
      local_var_60 = uVar5;
      local_var_58 = uVar6;
      local_var_40 = uVar7;
      local_var_38 = uVar8;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_30 ^ (uint64_t)aiStack_88);
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d010(uint64_t param_1,uint64_t param_2)
void UISystem_9d010(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &rendering_buffer_2720_ptr;
  *(int32_t *)(puVar3 + 0xe) = 0x1f;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x20726574736c6f48;
  *(int32_t *)(puVar3 + 1) = 0x65646e49;
  *(int16_t *)((int64_t)puVar3 + 0xc) = 0x78;
  local_var_30 = 0xd;
  SystemNetwork_Processor(puVar2,&plocal_var_40,puVar2 + 0xe,4);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d150(uint64_t param_1)
void UISystem_9d150(uint64_t param_1)
{
  int8_t stack_array_198 [32];
  int32_t local_var_178;
  uint64_t local_var_170;
  void **applocal_var_168 [2];
  void *plocal_var_158;
  int8_t *plocal_var_150;
  int32_t local_var_148;
  int8_t stack_array_140 [136];
  void *aplocal_var_b8 [19];
  int32_t local_var_20;
  uint64_t local_var_18;
  local_var_170 = 0xfffffffffffffffe;
  local_var_18 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_198;
  local_var_178 = 0;
  plocal_var_158 = &memory_allocator_3432_ptr;
  plocal_var_150 = stack_array_140;
  stack_array_140[0] = 0;
  local_var_148 = 0xd;
  strcpy_s(stack_array_140,0x80,&system_data_ca38);
  SystemCore_EventHandler(aplocal_var_b8,&plocal_var_158);
  local_var_20 = 4;
  local_var_178 = 1;
  RenderingSystem_617c0(param_1,applocal_var_168,aplocal_var_b8);
  local_var_178 = 0;
  applocal_var_168[0] = aplocal_var_b8;
  aplocal_var_b8[0] = &system_state_ptr;
  plocal_var_158 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_18 ^ (uint64_t)stack_array_198);
}
uint64_t *
UISystem_9d260(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &rendering_buffer_2720_ptr;
  UIComponent_Manager();
  if ((param_2 & 1) != 0) {
    free(param_1,0x78,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d2b0(uint64_t param_1,uint64_t param_2)
void UISystem_9d2b0(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t uVar5;
  void *plocal_var_a0;
  uint64_t *plocal_var_98;
  int32_t local_var_90;
  uint64_t local_var_88;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x118,8,3);
  uVar5 = 0xfffffffffffffffe;
  puVar4 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar4 = &processed_var_4296_ptr;
  puVar4[0xe] = &system_state_ptr;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar4[0xe] = &system_data_buffer_ptr;
  puVar4[0x11] = 0;
  puVar4[0xf] = 0;
  *(int32_t *)(puVar4 + 0x10) = 0;
  puVar2[0x12] = &system_state_ptr;
  puVar2[0x13] = 0;
  *(int32_t *)(puVar2 + 0x14) = 0;
  puVar2[0x12] = &system_data_buffer_ptr;
  puVar2[0x15] = 0;
  puVar2[0x13] = 0;
  *(int32_t *)(puVar2 + 0x14) = 0;
  puVar4 = puVar2 + 0x16;
  *puVar4 = &system_state_ptr;
  puVar2[0x17] = 0;
  *(int32_t *)(puVar2 + 0x18) = 0;
  *puVar4 = &system_data_buffer_ptr;
  puVar2[0x19] = 0;
  puVar2[0x17] = 0;
  *(int32_t *)(puVar2 + 0x18) = 0;
  puVar2[0x1a] = &system_state_ptr;
  puVar2[0x1b] = 0;
  *(int32_t *)(puVar2 + 0x1c) = 0;
  puVar2[0x1a] = &system_data_buffer_ptr;
  puVar2[0x1d] = 0;
  puVar2[0x1b] = 0;
  *(int32_t *)(puVar2 + 0x1c) = 0;
  puVar2[0x1e] = &system_state_ptr;
  puVar2[0x1f] = 0;
  *(int32_t *)(puVar2 + 0x20) = 0;
  puVar2[0x1e] = &system_data_buffer_ptr;
  puVar2[0x21] = 0;
  puVar2[0x1f] = 0;
  *(int32_t *)(puVar2 + 0x20) = 0;
  plocal_var_a0 = &system_data_buffer_ptr;
  local_var_88 = 0;
  plocal_var_98 = (uint64_t *)0x0;
  local_var_90 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_98 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_88 = CONCAT44(local_var_88._4_4_,uVar1);
  *puVar3 = 0x656d614e6873654d;
  *(int8_t *)(puVar3 + 1) = 0;
  local_var_90 = 8;
  SystemNetwork_Processor(puVar2,&plocal_var_a0,puVar4,0,uVar5);
  plocal_var_a0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d300(uint64_t param_1,uint64_t param_2)
void UISystem_9d300(uint64_t param_1,uint64_t param_2)
{
  int32_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  puVar2 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x78,8,3,0xfffffffffffffffe);
  puVar3 = puVar2;
  SystemCore_SyncController(puVar2,param_2,param_1);
  *puVar3 = &processed_var_4704_ptr;
  plocal_var_40 = &system_data_buffer_ptr;
  local_var_28 = 0;
  plocal_var_38 = (uint64_t *)0x0;
  local_var_30 = 0;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar3 = 0;
  plocal_var_38 = puVar3;
  uVar1 = CoreEngineSystemCleanup(puVar3);
  local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
  *puVar3 = 0x20646c6975626552;
  *(int32_t *)(puVar3 + 1) = 0x64697247;
  *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
  local_var_30 = 0xc;
  SystemNetwork_Processor(puVar2,&plocal_var_40,0,0xb);
  plocal_var_40 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(puVar3);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * UISystem_9d430(uint64_t param_1,int32_t param_2)
{
  uint64_t *puVar1;
  puVar1 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xb8,8,0x1a,0xfffffffffffffffe);
  DataStructure_565b0(puVar1,param_1,param_2);
  *puVar1 = &rendering_buffer_2496_ptr;
  puVar1[0x16] = 0;
  return puVar1;
}
uint64_t UISystem_9d4e0(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  DataStructure_566c0();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8,param_3,param_4,uVar1);
  }
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d530(uint64_t *param_1)
void UISystem_9d530(uint64_t *param_1)
{
  void *puVar1;
  uint uVar2;
  uint uVar3;
  int8_t stack_array_b8 [32];
  code *pcStack_98;
  void *plocal_var_88;
  int8_t *plocal_var_80;
  uint local_var_78;
  uint64_t local_var_70;
  int32_t local_var_68;
  uint64_t local_var_60;
  uint64_t *plocal_var_58;
  void *plocal_var_50;
  void *plocal_var_48;
  int iStack_40;
  uint8_t stack_array_38 [16];
  uint64_t local_var_28;
  local_var_60 = 0xfffffffffffffffe;
  local_var_28 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_b8;
  local_var_68 = 0;
  *param_1 = &processed_var_4416_ptr;
  *param_1 = &rendering_buffer_2120_ptr;
  pcStack_98 = SystemValidator;
  plocal_var_58 = param_1;
  DataStructureManager(param_1 + 2,0x20,0x20,UtilitiesSystem_27850);
  param_1[0x83] = 0;
  *(int32_t *)(param_1 + 0x82) = 0xffffffff;
  UISystem_9dc80();
  (**(code **)(render_system_memory + 0x10))(&system_data_24d0,&system_data_d128);
  *(int32_t *)(param_1 + 1) = 0;
  plocal_var_50 = &system_config_ptr;
  plocal_var_48 = stack_array_38;
  stack_array_38[0] = 0;
  iStack_40 = 6;
  strcpy_s(stack_array_38,0x10,&rendering_buffer_2588_ptr);
  local_var_68 = 1;
  plocal_var_88 = &system_data_buffer_ptr;
  local_var_70 = 0;
  plocal_var_80 = (int8_t *)0x0;
  local_var_78 = 0;
  CoreEngineDataBufferProcessor(&plocal_var_88,iStack_40);
  if (0 < iStack_40) {
    puVar1 = &system_buffer_ptr;
    if (plocal_var_48 != (void *)0x0) {
      puVar1 = plocal_var_48;
    }
// WARNING: Subroutine does not return
    memcpy(plocal_var_80,puVar1,(int64_t)(iStack_40 + 1));
  }
  if (plocal_var_48 != (void *)0x0) {
    local_var_78 = 0;
    if (plocal_var_80 != (int8_t *)0x0) {
      *plocal_var_80 = 0;
    }
  }
  uVar3 = local_var_78;
  local_var_68 = 0;
  plocal_var_50 = &system_state_ptr;
  uVar2 = local_var_78 + 8;
  CoreEngineDataBufferProcessor(&plocal_var_88,uVar2);
  *(uint64_t *)(plocal_var_80 + local_var_78) = 0x2f73656c75646f4d;
  *(int8_t *)((int64_t)(plocal_var_80 + local_var_78) + 8) = 0;
  local_var_78 = uVar2;
  if (0 < render_system_memory) {
    CoreEngineDataBufferProcessor(&plocal_var_88,uVar2 + render_system_memory);
// WARNING: Subroutine does not return
    memcpy(plocal_var_80 + local_var_78,render_system_memory,(int64_t)(render_system_memory + 1));
  }
  uVar3 = uVar3 + 9;
  CoreEngineDataBufferProcessor(&plocal_var_88,(uint64_t)uVar3);
  *(int16_t *)(plocal_var_80 + local_var_78) = 0x2f;
  local_var_78 = uVar3;
  if (plocal_var_80 != (int8_t *)0x0) {
    CoreEngineDataBufferProcessor(&system_data_24f0,uVar3);
  }
  if (uVar3 != 0) {
// WARNING: Subroutine does not return
    memcpy(render_system_memory,plocal_var_80,uVar3);
  }
  render_system_memory = uVar3;
  if (render_system_memory != 0) {
    *(int8_t *)((uint64_t)uVar3 + render_system_memory) = 0;
  }
  render_system_memory = local_var_70._4_4_;
  *(int32_t *)(param_1 + 0x84) = 0;
  plocal_var_88 = &system_data_buffer_ptr;
  if (plocal_var_80 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_80 = (int8_t *)0x0;
  local_var_70 = (uint64_t)local_var_70._4_4_ << 0x20;
  plocal_var_88 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_28 ^ (uint64_t)stack_array_b8,0);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9d800(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void UISystem_9d800(uint64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int32_t uVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  uint64_t uVar4;
  void *plocal_var_60;
  uint64_t *plocal_var_58;
  int32_t local_var_50;
  uint64_t local_var_48;
  void *plocal_var_40;
  uint64_t *plocal_var_38;
  int32_t local_var_30;
  uint64_t local_var_28;
  uVar4 = 0xfffffffffffffffe;
  SystemCore_ConfigValidator(param_2);
  GenericFunction_180052200(system_main_module_state,param_2);
  if ((param_2[1] - *param_2 & 0xffffffffffffffe0U) == 0) {
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar2 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13,param_4,uVar4);
    *(int8_t *)puVar2 = 0;
    plocal_var_58 = (uint64_t *)puVar2;
    uVar1 = CoreEngineSystemCleanup(puVar2);
    *puVar2 = 0x6974614e;
    *(int16_t *)(puVar2 + 1) = 0x6576;
    *(int8_t *)((int64_t)puVar2 + 6) = 0;
    local_var_50 = 6;
    local_var_48._0_4_ = uVar1;
    DataEncryptionHandler0(param_2,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_38 = puVar3;
    uVar1 = CoreEngineSystemCleanup(puVar3);
    *puVar3 = 0x616c7069746c754d;
    *(int32_t *)(puVar3 + 1) = 0x726579;
    local_var_30 = 0xb;
    local_var_28._0_4_ = uVar1;
    DataEncryptionHandler0(param_2,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_38 = (uint64_t *)0x0;
    local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
    plocal_var_40 = &system_state_ptr;
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_58 = puVar3;
    uVar1 = CoreEngineSystemCleanup(puVar3);
    *puVar3 = 0x43786f42646e6153;
    *(int32_t *)(puVar3 + 1) = 0x65726f;
    local_var_50 = 0xb;
    local_var_48._0_4_ = uVar1;
    DataEncryptionHandler0(param_2,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_38 = puVar3;
    uVar1 = CoreEngineSystemCleanup(puVar3);
    *puVar3 = 0x786f42646e6153;
    local_var_30 = 7;
    local_var_28._0_4_ = uVar1;
    DataEncryptionHandler0(param_2,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_38 = (uint64_t *)0x0;
    local_var_28 = (uint64_t)local_var_28._4_4_ << 0x20;
    plocal_var_40 = &system_state_ptr;
    plocal_var_60 = &system_data_buffer_ptr;
    local_var_48 = 0;
    plocal_var_58 = (uint64_t *)0x0;
    local_var_50 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_58 = puVar3;
    uVar1 = CoreEngineSystemCleanup(puVar3);
    *puVar3 = 0x61426d6f74737543;
    *(int32_t *)(puVar3 + 1) = 0x656c7474;
    *(int8_t *)((int64_t)puVar3 + 0xc) = 0;
    local_var_50 = 0xc;
    local_var_48._0_4_ = uVar1;
    DataEncryptionHandler0(param_2,&plocal_var_60);
    plocal_var_60 = &system_data_buffer_ptr;
    if (plocal_var_58 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    plocal_var_58 = (uint64_t *)0x0;
    local_var_48 = (uint64_t)local_var_48._4_4_ << 0x20;
    plocal_var_60 = &system_state_ptr;
    plocal_var_40 = &system_data_buffer_ptr;
    local_var_28 = 0;
    plocal_var_38 = (uint64_t *)0x0;
    local_var_30 = 0;
    puVar3 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar3 = 0;
    plocal_var_38 = puVar3;
    uVar1 = CoreEngineSystemCleanup(puVar3);
    local_var_28 = CONCAT44(local_var_28._4_4_,uVar1);
    *puVar3 = 0x646f4d79726f7453;
    *(int16_t *)(puVar3 + 1) = 0x65;
    local_var_30 = 9;
    DataEncryptionHandler0(param_2,&plocal_var_40);
    plocal_var_40 = &system_data_buffer_ptr;
    if (plocal_var_38 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018033383a)
// WARNING: Removing unreachable block (ram,0x0001803338cb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9dbc0(void)
void UISystem_9dbc0(void)
{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int *piVar9;
  char cVar10;
  float fVar11;
  int64_t *aplStackX_8 [2];
  int64_t *plStackX_18;
  int64_t *plStackX_20;
  uint64_t uVar12;
  if ((((system_data_6098 != '\0') && (render_system_memory != 0)) &&
      (*(int *)(render_system_memory + 0x87b7a8) == 2)) && (*(char *)(render_system_memory + 0x87b750) != '\0'))
  {
    lVar5 = *(int64_t *)(system_main_module_state + 0x3d8);
    fVar11 = *(float *)(system_main_module_state + 0x220) + *(float *)(lVar5 + 0x144);
    *(float *)(lVar5 + 0x144) = fVar11;
    if (*(float *)(lVar5 + 0x13c) <= fVar11) {
      *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
      RenderingSystem_224b0(lVar5);
      RenderingSystem_277f0(lVar5);
      *(int64_t *)(lVar5 + 0x150) = *(int64_t *)(lVar5 + 0x150) + 1;
      *(int64_t *)(lVar5 + 0x160) = *(int64_t *)(lVar5 + 0x160) + 1;
      uVar12 = 0xfffffffffffffffe;
      piVar9 = *(int **)(lVar5 + 0x230);
      lVar7 = *(int64_t *)(lVar5 + 0x238) - (int64_t)piVar9;
      while( true ) {
        if ((uint64_t)(lVar7 >> 2) < 0xb) {
          return;
        }
        iVar2 = *piVar9;
        puVar3 = *(uint64_t **)(lVar5 + 0x148);
        if (puVar3 != (uint64_t *)0x0) {
          if ((void *)*puVar3 == &processed_var_8024_ptr) {
            cVar10 = *(char *)(puVar3 + 2) != '\0';
          }
          else {
            cVar10 = (**(code **)((void *)*puVar3 + 0x68))();
          }
          uVar6 = system_context_ptr;
          if (cVar10 == '\0') {
            aplStackX_8[0] = *(int64_t **)(lVar5 + 0x148);
            if (aplStackX_8[0] != (int64_t *)0x0) {
              (**(code **)(*aplStackX_8[0] + 0x28))();
            }
            SystemCore_ErrorHandler(uVar6,aplStackX_8,0);
          }
        }
        plVar8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,uVar12);
        plStackX_18 = plVar8;
        UltraHighFreq_PerformanceMonitor1(plVar8);
        *plVar8 = (int64_t)&processed_var_8024_ptr;
        *(int *)(plVar8 + 0x18) = iVar2;
        plVar8[0x19] = lVar5;
        plStackX_20 = plVar8;
        (**(code **)(*plVar8 + 0x28))(plVar8);
        plStackX_20 = *(int64_t **)(lVar5 + 0x148);
        *(int64_t **)(lVar5 + 0x148) = plVar8;
        if (plStackX_20 != (int64_t *)0x0) {
          (**(code **)(*plStackX_20 + 0x38))();
        }
        uVar6 = system_context_ptr;
        plStackX_18 = *(int64_t **)(lVar5 + 0x148);
        if (plStackX_18 != (int64_t *)0x0) {
          (**(code **)(*plStackX_18 + 0x28))();
        }
        SystemCore_TimerManager(uVar6,&plStackX_18);
        piVar4 = *(int **)(lVar5 + 0x238);
        for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
            piVar9 = piVar9 + 1) {
        }
        piVar1 = piVar9 + 1;
        if (piVar1 < piVar4) break;
        *(int **)(lVar5 + 0x238) = piVar4 + -1;
        piVar9 = *(int **)(lVar5 + 0x230);
        lVar7 = (int64_t)(piVar4 + -1) - (int64_t)piVar9;
      }
// WARNING: Subroutine does not return
      memmove(piVar9,piVar1,(int64_t)piVar4 - (int64_t)piVar1);
    }
  }
  return;
}
// WARNING: Removing unreachable block (ram,0x00018033383a)
// WARNING: Removing unreachable block (ram,0x0001803338cb)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9dbfe(void)
void UISystem_9dbfe(void)
{
  int *piVar1;
  int iVar2;
  uint64_t *puVar3;
  int *piVar4;
  int64_t lVar5;
  uint64_t uVar6;
  int64_t lVar7;
  int64_t *plVar8;
  int64_t in_RAX;
  int *piVar9;
  char cVar10;
  float fVar11;
  int64_t *local_var_30;
  uint64_t local_var_38;
  int64_t *local_var_40;
  int64_t *local_var_48;
  uint64_t uVar12;
  lVar5 = *(int64_t *)(in_RAX + 0x3d8);
  fVar11 = *(float *)(in_RAX + 0x220) + *(float *)(lVar5 + 0x144);
  *(float *)(lVar5 + 0x144) = fVar11;
  if (fVar11 < *(float *)(lVar5 + 0x13c)) {
    return;
  }
  *(float *)(lVar5 + 0x144) = fVar11 - *(float *)(lVar5 + 0x13c);
  RenderingSystem_224b0(lVar5);
  RenderingSystem_277f0(lVar5);
  *(int64_t *)(lVar5 + 0x150) = *(int64_t *)(lVar5 + 0x150) + 1;
  *(int64_t *)(lVar5 + 0x160) = *(int64_t *)(lVar5 + 0x160) + 1;
  uVar12 = 0xfffffffffffffffe;
  piVar9 = *(int **)(lVar5 + 0x230);
  lVar7 = *(int64_t *)(lVar5 + 0x238) - (int64_t)piVar9;
  while( true ) {
    if ((uint64_t)(lVar7 >> 2) < 0xb) {
      return;
    }
    iVar2 = *piVar9;
    puVar3 = *(uint64_t **)(lVar5 + 0x148);
    if (puVar3 != (uint64_t *)0x0) {
      if ((void *)*puVar3 == &processed_var_8024_ptr) {
        cVar10 = *(char *)(puVar3 + 2) != '\0';
      }
      else {
        cVar10 = (**(code **)((void *)*puVar3 + 0x68))();
      }
      uVar6 = system_context_ptr;
      if (cVar10 == '\0') {
        local_var_30 = *(int64_t **)(lVar5 + 0x148);
        if (local_var_30 != (int64_t *)0x0) {
          (**(code **)(*local_var_30 + 0x28))();
        }
        SystemCore_ErrorHandler(uVar6,&local_buffer_00000030,0);
      }
    }
    plVar8 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3,uVar12);
    local_var_40 = plVar8;
    UltraHighFreq_PerformanceMonitor1(plVar8);
    *plVar8 = (int64_t)&processed_var_8024_ptr;
    *(int *)(plVar8 + 0x18) = iVar2;
    plVar8[0x19] = lVar5;
    local_var_48 = plVar8;
    (**(code **)(*plVar8 + 0x28))(plVar8);
    local_var_48 = *(int64_t **)(lVar5 + 0x148);
    *(int64_t **)(lVar5 + 0x148) = plVar8;
    if (local_var_48 != (int64_t *)0x0) {
      (**(code **)(*local_var_48 + 0x38))();
    }
    uVar6 = system_context_ptr;
    local_var_40 = *(int64_t **)(lVar5 + 0x148);
    if (local_var_40 != (int64_t *)0x0) {
      (**(code **)(*local_var_40 + 0x28))();
    }
    SystemCore_TimerManager(uVar6,&local_buffer_00000040);
    piVar4 = *(int **)(lVar5 + 0x238);
    for (piVar9 = *(int **)(lVar5 + 0x230); (piVar9 != piVar4 && (*piVar9 != iVar2));
        piVar9 = piVar9 + 1) {
    }
    piVar1 = piVar9 + 1;
    if (piVar1 < piVar4) break;
    *(int **)(lVar5 + 0x238) = piVar4 + -1;
    piVar9 = *(int **)(lVar5 + 0x230);
    lVar7 = (int64_t)(piVar4 + -1) - (int64_t)piVar9;
  }
// WARNING: Subroutine does not return
  memmove(piVar9,piVar1,(int64_t)piVar4 - (int64_t)piVar1);
}
// 函数: void UISystem_9dc6c(void)
void UISystem_9dc6c(void)
{
  return;
}
// 函数: void UISystem_9dc71(void)
void UISystem_9dc71(void)
{
  return;
}
// WARNING: Removing unreachable block (ram,0x00018049e162)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UISystem_9dc80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void UISystem_9dc80(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uVar3 = 0xfffffffffffffffe;
  render_system_memory = 0;
  uRam0000000180c95f00 = 0;
  render_system_memory = 0;
  render_system_memory = 3;
  render_system_memory = 0xffffffff;
  render_system_memory = 0;
// 函数: void UISystem_9e190(void)
void UISystem_9e190(void)
{
  uint64_t *puVar1;
  int32_t *puVar2;
  uint64_t *puVar3;
  DataStructure_567b0(render_system_data_memory[0x15],&system_data_d688,&processed_var_9616_ptr,UISystem_9d430,0xfffffffffffffffe)
  ;
  puVar2 = (int32_t *)GenericFunction_18008d660(render_system_data_memory + 0x1c,&system_data_d688);
  *puVar2 = 1;
  puVar3 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,3);
  puVar3[1] = 0;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[6] = 0;
  *puVar3 = &rendering_buffer_2096_ptr;
  *puVar3 = &rendering_buffer_2072_ptr;
  puVar1 = puVar3 + 1;
  puVar3[4] = 0;
  *(int32_t *)(puVar3 + 6) = 3;
  *puVar1 = puVar1;
  puVar3[2] = puVar1;
  puVar3[3] = 0;
  *(int8_t *)(puVar3 + 4) = 0;
  puVar3[5] = 0;
  *render_system_data_memory = puVar3;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address