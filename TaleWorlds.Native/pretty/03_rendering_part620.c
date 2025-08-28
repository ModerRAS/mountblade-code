#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 03_rendering_part620.c - 13 个函数
// 函数: void RenderingSystemBuffer(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
void RenderingSystemBuffer(uint64_t param_1,int param_2,uint64_t param_3,uint64_t param_4)
{
  void *puVar1;
  char cVar2;
  int aiStackX_10 [6];
  void *plocal_var_30;
  int64_t lStack_28;
  SystemCore_CacheManager(&plocal_var_30,param_1,param_3,param_4,0xfffffffffffffffe);
  aiStackX_10[0] = -1;
  if (param_2 != 0) {
    aiStackX_10[0] = param_2;
  }
  puVar1 = *(void **)*render_system_data_memory;
  if (puVar1 == &processed_var_424_ptr) {
    cVar2 = *(int *)(render_system_data_memory + 0xc40) != 0;
  }
  else {
    cVar2 = (**(code **)(puVar1 + 0x50))((uint64_t *)*render_system_data_memory);
  }
  if (cVar2 == '\0') {
    (**(code **)(*(int64_t *)render_system_data_memory[1] + 0x18))
              ((int64_t *)render_system_data_memory[1],&plocal_var_30,aiStackX_10);
  }
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_0f4f0(int param_1)
void UtilitiesSystem_0f4f0(int param_1)
{
  uint64_t *puVar1;
  int64_t lVar2;
  int aiStackX_8 [2];
  uint64_t *pstack_special_x_10;
  int *piStackX_18;
  int *piStackX_20;
  puVar1 = (uint64_t *)CoreSystem_LoggingManager0(system_memory_pool_ptr,0x10,8,3,0xfffffffffffffffe);
  piStackX_18 = aiStackX_8;
  aiStackX_8[0] = param_1;
  pstack_special_x_10 = puVar1;
  if ((param_1 != 0) && (system_cache_buffer != 0)) {
    (**(code **)(system_cache_buffer + 0x30))(param_1);
  }
  lVar2 = system_cache_buffer;
  piStackX_20 = aiStackX_8;
  *puVar1 = &rendering_buffer_2168_ptr;
  *(int32_t *)(puVar1 + 1) = 0;
  if ((*(int *)(puVar1 + 1) != 0) && (lVar2 != 0)) {
    (**(code **)(lVar2 + 0x18))();
    lVar2 = system_cache_buffer;
  }
  *(int *)(puVar1 + 1) = aiStackX_8[0];
  if ((aiStackX_8[0] != 0) && (lVar2 != 0)) {
    (**(code **)(lVar2 + 0x30))(aiStackX_8[0]);
    lVar2 = system_cache_buffer;
  }
  if ((aiStackX_8[0] != 0) && (lVar2 != 0)) {
    (**(code **)(lVar2 + 0x18))();
  }
  if (*(int64_t *)(render_system_data_memory + 8) != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *(uint64_t **)(render_system_data_memory + 8) = puVar1;
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_0f5e0(void)
void UtilitiesSystem_0f5e0(void)
{
  int iVar1;
  int64_t lVar2;
  int64_t lVar3;
  while (lVar3 = render_system_data_memory, render_system_data_memory != 0) {
    lVar2 = GenericFunction_18006eec0(render_system_data_memory);
    if (lVar2 == 0) {
      lVar2 = GenericFunction_18006eec0(lVar3 + 0x78);
      if (lVar2 == 0) {
        lVar3 = GenericFunction_18006eec0(lVar3 + 0xf0);
        if (lVar3 == 0) break;
      }
    }
    CoreEngine_SystemInitializer(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
    lVar3 = system_message_buffer + 0x20;
    iVar1 = _Mtx_lock(lVar3);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_unlock(lVar3);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    if (render_system_data_memory != 0) {
      GenericFunction_18006eb30();
    }
    CoreEngine_SystemInitializer(*(uint64_t *)(*(int64_t *)(system_context_ptr + 8) + 8));
    lVar3 = system_message_buffer + 0x20;
    iVar1 = _Mtx_lock(lVar3);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
    iVar1 = _Mtx_unlock(lVar3);
    if (iVar1 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar1);
    }
  }
  SystemCore_FileSystem(system_context_ptr);
  *(int32_t *)(render_system_data_memory + 0x60) = 1;
  return;
}
// 函数: void UtilitiesSystem_0f7c0(int64_t param_1)
void UtilitiesSystem_0f7c0(int64_t param_1)
{
  int64_t *plVar1;
  int iVar2;
  int64_t lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  plVar1 = (int64_t *)(param_1 + 0x87b768);
  *(int32_t *)(param_1 + 0x87b760) = 0;
  if (*plVar1 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  *plVar1 = 0;
  *(int32_t *)(param_1 + 0x87b770) = 0;
  iVar2 = *(int *)(param_1 + 0x87b770);
  if (iVar2 < 8) {
    lVar3 = *plVar1;
    NetworkSystem_b3190();
    if (lVar3 != 0) {
      iVar4 = 0;
      if (0 < iVar2) {
        uVar7 = 0;
        do {
          if (iVar4 < iVar2) {
            iVar5 = iVar4;
            uVar6 = uVar7;
            do {
              NetworkSystem_b31e0(plVar1,iVar4,iVar5,
                            ((&processed_var_8808_ptr)[uVar6 & 7] &
                            *(byte *)(((iVar5 >> 3) + (iVar2 >> 3) * iVar4) + lVar3)) != 0);
              iVar5 = iVar5 + 1;
              uVar6 = uVar6 + 1;
            } while (iVar5 < iVar2);
          }
          uVar7 = uVar7 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar2);
      }
      if (lVar3 != 0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager(lVar3);
      }
    }
  }
  return;
}
int UtilitiesSystem_0f810(int64_t param_1)
{
  uint uVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  *(int *)(param_1 + 0x87b760) = *(int *)(param_1 + 0x87b760) + 1;
  iVar3 = *(int *)(param_1 + 0x87b760);
  if (*(int *)(param_1 + 0x87b770) < iVar3) {
    NetworkSystem_b30a0(param_1 + 0x87b768,*(int *)(param_1 + 0x87b770) * 2);
    iVar3 = *(int *)(param_1 + 0x87b760);
  }
  uVar4 = 0;
  if (0 < iVar3) {
    do {
      pbVar2 = (byte *)((int64_t)
                        (int)((*(int *)(param_1 + 0x87b770) >> 3) * uVar4 + (iVar3 + -1 >> 3)) +
                       *(int64_t *)(param_1 + 0x87b768));
      *pbVar2 = *pbVar2 & (&processed_var_5168_ptr)[iVar3 - 1U & 7];
      uVar1 = uVar4 & 7;
      pbVar2 = (byte *)((int64_t)
                        ((*(int *)(param_1 + 0x87b770) >> 3) * (iVar3 + -1) + ((int)uVar4 >> 3)) +
                       *(int64_t *)(param_1 + 0x87b768));
      uVar4 = uVar4 + 1;
      *pbVar2 = *pbVar2 & (&processed_var_5168_ptr)[uVar1];
      iVar3 = *(int *)(param_1 + 0x87b760);
    } while ((int)uVar4 < iVar3);
  }
  return iVar3 + -1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_0f8e0(int64_t param_1,float *param_2,int32_t *param_3,int param_4,float *param_5,
void UtilitiesSystem_0f8e0(int64_t param_1,float *param_2,int32_t *param_3,int param_4,float *param_5,
                  int8_t *param_6)
{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char cVar5;
  int64_t lVar6;
  int64_t lVar7;
  int8_t stack_array_d08 [32];
  int64_t lStack_ce8;
  uint64_t local_var_cd8;
  uint64_t local_var_cd0;
  uint64_t local_var_cc8;
  uint64_t local_var_cc0;
  int8_t local_var_cb8;
  int32_t local_var_cb4;
  float fStack_cb0;
  float fStack_cac;
  float fStack_ca8;
  float fStack_ca4;
  int32_t local_var_ca0;
  int32_t local_var_c9c;
  int32_t local_var_c98;
  int32_t local_var_c94;
  float fStack_c90;
  int32_t local_var_c68;
  int8_t local_var_c58;
  char cStack_c57;
  int8_t stack_array_c54 [3076];
  int64_t lStack_50;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d08;
  if (-1 < param_4) {
    fStack_cb0 = *param_2;
    fStack_cac = param_2[1];
    fStack_ca8 = param_2[2];
    fStack_ca4 = param_2[3];
    local_var_ca0 = *param_3;
    local_var_c9c = param_3[1];
    local_var_c98 = param_3[2];
    local_var_c94 = param_3[3];
    local_var_cb4 = 0x7f7fffff;
    local_var_c68 = 0x38d1b717;
    lVar7 = param_1 + 0x30a0 + (int64_t)param_4 * 0xa60;
    local_var_cd8 = 0;
    local_var_cd0 = 0;
    local_var_cc8 = 0;
    local_var_cc0 = 0;
    local_var_c58 = 0;
    local_var_cb8 = 0xff;
    lVar6 = *(int64_t *)(*(int64_t *)(lVar7 + 0x6d8) + 0x8a8) + 0x70;
    fStack_c90 = 0.0001;
    lStack_50 = lVar7;
    NetworkSystem_353a0(&fStack_cb0,lVar6);
    cVar5 = '\0';
    fStack_c90 = 0.0001 / *(float *)(*(int64_t *)(lVar7 + 0x6d8) + 0x8c0);
    if ('\0' < cStack_c57) {
      do {
        lStack_ce8 = lVar6;
        cVar4 = NetworkSystem_31700((int64_t)cVar5 * 0x30,stack_array_c54 + (int64_t)cVar5 * 0x30,
                              &fStack_cb0,&local_var_cd8);
        if (cVar4 != '\0') {
          fVar1 = param_2[2];
          fVar2 = *param_2;
          fVar3 = param_2[1];
          *param_6 = local_var_cb8;
          *param_5 = SQRT((fVar3 - local_var_cd8._4_4_) * (fVar3 - local_var_cd8._4_4_) +
                          (fVar2 - (float)local_var_cd8) * (fVar2 - (float)local_var_cd8) +
                          (fVar1 - (float)local_var_cd0) * (fVar1 - (float)local_var_cd0));
          break;
        }
        cVar5 = cVar5 + '\x01';
      } while (cVar5 < cStack_c57);
    }
  }
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_48 ^ (uint64_t)stack_array_d08);
}
// 函数: void UtilitiesSystem_0f956(int32_t param_1,int64_t param_2,int32_t param_3,int64_t param_4)
void UtilitiesSystem_0f956(int32_t param_1,int64_t param_2,int32_t param_3,int64_t param_4)
{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  uint64_t in_RCX;
  char cVar5;
  int64_t unaff_RBP;
  int64_t lVar6;
  char unaff_DIL;
  int8_t *unaff_R12;
  float *unaff_R14;
  float *unaff_R15;
  int32_t in_XMM1_Da;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float fStack0000000000000038;
  uint64_t local_buffer_40;
  uint64_t local_buffer_48;
  int8_t local_buffer_50;
  int32_t local_buffer_54;
  int32_t local_buffer_58;
  int32_t local_buffer_68;
  float fStack0000000000000078;
  *(int32_t *)(unaff_RBP + -0x60) = 0x38d1b717;
  param_4 = param_4 + param_2;
  _fStack0000000000000030 = 0;
  _fStack0000000000000038 = 0;
  local_buffer_40 = 0;
  local_buffer_48 = 0;
  lVar6 = *(int64_t *)(param_4 + 0x6d8);
  *(int64_t *)(unaff_RBP + 3000) = param_4;
  *(int8_t *)(unaff_RBP + -0x50) = 0;
  local_buffer_50 = 0xff;
  fStack0000000000000078 = *(float *)(unaff_RBP + -0x60);
  lVar6 = *(int64_t *)(lVar6 + 0x8a8) + 0x70;
  local_buffer_54 = param_1;
  local_buffer_58 = param_3;
  local_buffer_68 = in_XMM1_Da;
  NetworkSystem_353a0(in_RCX,lVar6);
  cVar5 = '\0';
  fStack0000000000000078 = 0.0001 / *(float *)(*(int64_t *)(param_4 + 0x6d8) + 0x8c0);
  if ('\0' < unaff_DIL) {
    do {
      cVar4 = NetworkSystem_31700((int64_t)cVar5 * 0x30,unaff_RBP + -0x4c + (int64_t)cVar5 * 0x30,
                            &local_buffer_00000058,&local_buffer_00000030,lVar6);
      if (cVar4 != '\0') {
        fVar1 = unaff_R14[2];
        fVar2 = *unaff_R14;
        fVar3 = unaff_R14[1];
        *unaff_R12 = local_buffer_50;
        *unaff_R15 = SQRT((fVar3 - fStack0000000000000034) * (fVar3 - fStack0000000000000034) +
                          (fVar2 - fStack0000000000000030) * (fVar2 - fStack0000000000000030) +
                          (fVar1 - fStack0000000000000038) * (fVar1 - fStack0000000000000038));
        break;
      }
      cVar5 = cVar5 + '\x01';
    } while (cVar5 < unaff_DIL);
  }
// WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0xbc0) ^ (uint64_t)&local_buffer_00000000);
}
// 函数: void UtilitiesSystem_0f9f0(void)
void UtilitiesSystem_0f9f0(void)
{
  float fVar1;
  float fVar2;
  float fVar3;
  char cVar4;
  char unaff_BL;
  int64_t unaff_RBP;
  char unaff_DIL;
  int8_t *unaff_R12;
  float *unaff_R14;
  float *unaff_R15;
  float fStack0000000000000030;
  float fStack0000000000000034;
  float local_var_38;
  int8_t local_buffer_50;
  do {
    cVar4 = NetworkSystem_31700((int64_t)unaff_BL * 0x30,unaff_RBP + -0x4c + (int64_t)unaff_BL * 0x30,
                          &local_buffer_00000058,&local_buffer_00000030);
    if (cVar4 != '\0') {
      fVar1 = unaff_R14[2];
      fVar2 = *unaff_R14;
      fVar3 = unaff_R14[1];
      *unaff_R12 = local_buffer_50;
      *unaff_R15 = SQRT((fVar3 - fStack0000000000000034) * (fVar3 - fStack0000000000000034) +
                        (fVar2 - fStack0000000000000030) * (fVar2 - fStack0000000000000030) +
                        (fVar1 - local_var_38) * (fVar1 - local_var_38));
      break;
    }
    unaff_BL = unaff_BL + '\x01';
  } while (unaff_BL < unaff_DIL);
// WARNING: Subroutine does not return
  CoreSystemConfigManager(*(uint64_t *)(unaff_RBP + 0xbc0) ^ (uint64_t)&local_buffer_00000000);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_0faa0(int64_t param_1,float *param_2,uint64_t *param_3,int param_4,float *param_5,
void UtilitiesSystem_0faa0(int64_t param_1,float *param_2,uint64_t *param_3,int param_4,float *param_5,
                  int32_t *param_6,int8_t *param_7)
{
  uint uVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  uint64_t uVar5;
  int *piVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint64_t uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  int8_t stack_array_d18 [32];
  int64_t lStack_cf8;
  uint64_t local_var_ce8;
  uint64_t local_var_ce0;
  uint64_t local_var_cd8;
  uint64_t local_var_cd0;
  int8_t local_var_cc8;
  int32_t local_var_cc4;
  float *pfStack_cc0;
  int32_t *plocal_var_cb8;
  int8_t *plocal_var_cb0;
  uint64_t local_var_ca8;
  uint64_t local_var_ca0;
  uint64_t local_var_c98;
  uint64_t local_var_c90;
  float fStack_c88;
  int32_t local_var_c80;
  int32_t local_var_c7c;
  int32_t local_var_c78;
  int32_t local_var_c74;
  int32_t local_var_c70;
  int32_t local_var_c6c;
  int32_t local_var_c68;
  int32_t local_var_c64;
  float fStack_c60;
  int8_t local_var_c58;
  char cStack_c57;
  int8_t stack_array_c54 [3076];
  uint64_t local_var_50;
  uint64_t local_var_48;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_d18;
  uVar9 = 0;
  local_var_ca8 = *(uint64_t *)param_2;
  local_var_ca0 = *(uint64_t *)(param_2 + 2);
  uVar1 = *(uint *)(param_1 + 0x52ed94);
  local_var_c98 = *param_3;
  local_var_c90 = param_3[1];
  pfStack_cc0 = param_5;
  fVar13 = 3.4028235e+38;
  plocal_var_cb8 = param_6;
  plocal_var_cb0 = param_7;
  fStack_c88 = 0.0001;
  if (0 < (int)uVar1) {
    piVar6 = (int *)(param_1 + 0x30b0);
    uVar5 = uVar9;
    uVar7 = uVar9;
    do {
      if (-1 < *piVar6) goto LAB_18060fb60;
      uVar5 = (uint64_t)((int)uVar5 + 1);
      uVar7 = uVar7 + 1;
      piVar6 = piVar6 + 0x298;
    } while ((int64_t)uVar7 < (int64_t)(int)uVar1);
  }
  uVar5 = (uint64_t)uVar1;
LAB_18060fb60:
  if ((int)uVar5 < (int)uVar1) {
    do {
      uVar7 = param_1 + 0x30a0 + (int64_t)(int)uVar5 * 0xa60;
      if ((*(int *)(uVar7 + 0x10) != param_4) &&
         (cVar2 = UtilitiesSystem_147b0(uVar7,&local_var_ca8), cVar2 != '\0')) {
        lVar8 = *(int64_t *)(uVar7 + 0x20);
        fVar11 = *(float *)(lVar8 + 0xc) - *param_2;
        fVar12 = *(float *)(lVar8 + 0x10) - param_2[1];
        fVar10 = *(float *)(lVar8 + 0x14) - param_2[2];
        fVar10 = fVar12 * fVar12 + fVar11 * fVar11 + fVar10 * fVar10;
        if (fVar10 < fVar13) {
          uVar9 = uVar7;
          fVar13 = fVar10;
        }
      }
      uVar4 = (uint)*(short *)(param_1 + 0x52dda0 + (int64_t)(int)uVar5 * 2);
      uVar5 = (uint64_t)uVar4;
    } while ((int)uVar4 < (int)uVar1);
    if (uVar9 != 0) {
      local_var_ce8 = 0;
      local_var_ce0 = 0;
      local_var_cd8 = 0;
      local_var_cd0 = 0;
      local_var_c58 = 0;
      local_var_cc8 = 0xff;
      lVar8 = *(int64_t *)(*(int64_t *)(uVar9 + 0x6d8) + 0x8a8) + 0x70;
      local_var_cc4 = 0x7f7fffff;
      local_var_c80 = (int32_t)local_var_ca8;
      local_var_c7c = local_var_ca8._4_4_;
      local_var_c78 = (int32_t)local_var_ca0;
      local_var_c74 = local_var_ca0._4_4_;
      fStack_c60 = fStack_c88;
      local_var_c70 = (int32_t)local_var_c98;
      local_var_c6c = local_var_c98._4_4_;
      local_var_c68 = (int32_t)local_var_c90;
      local_var_c64 = local_var_c90._4_4_;
      local_var_50 = uVar9;
      NetworkSystem_353a0(&local_var_c80,lVar8);
      cVar2 = '\0';
      fStack_c60 = fStack_c88 / *(float *)(*(int64_t *)(uVar9 + 0x6d8) + 0x8c0);
      if ('\0' < cStack_c57) {
        do {
          lStack_cf8 = lVar8;
          cVar3 = NetworkSystem_31700((int64_t)cVar2 * 0x30,stack_array_c54 + (int64_t)cVar2 * 0x30,
                                &local_var_c80,&local_var_ce8);
          if (cVar3 != '\0') {
            *pfStack_cc0 = SQRT((local_var_ce8._4_4_ - param_2[1]) * (local_var_ce8._4_4_ - param_2[1]) +
                                ((float)local_var_ce8 - *param_2) * ((float)local_var_ce8 - *param_2) +
                                ((float)local_var_ce0 - param_2[2]) * ((float)local_var_ce0 - param_2[2]))
            ;
            *plocal_var_cb8 = *(int32_t *)(uVar9 + 0x10);
            *plocal_var_cb0 = local_var_cc8;
            break;
          }
          cVar2 = cVar2 + '\x01';
        } while (cVar2 < cStack_c57);
      }
    }
  }
// WARNING: Subroutine does not return
  CoreSystemConfigManager(local_var_48 ^ (uint64_t)stack_array_d18);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int UtilitiesSystem_0fd90(int64_t param_1)
{
  int64_t lVar1;
  int iVar2;
  iVar2 = 0;
  lVar1 = (**(code **)(**(int64_t **)(param_1 + 0x98d250) + 0x28))();
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x18) != 0)) {
    iVar2 = *(int *)(lVar1 + 0x18);
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x30))(iVar2);
    }
    if ((iVar2 != 0) && (system_cache_buffer != 0)) {
      (**(code **)(system_cache_buffer + 0x18))(iVar2);
      return iVar2;
    }
  }
  return iVar2;
}
// 函数: void UtilitiesSystem_0fe60(uint64_t param_1,uint64_t param_2)
void UtilitiesSystem_0fe60(uint64_t param_1,uint64_t param_2)
{
  uint64_t astack_special_x_8 [4];
  astack_special_x_8[0] = param_2;
  UISystem_f6190(param_1,astack_special_x_8);
  return;
}
uint64_t UtilitiesSystem_0fe80(int64_t param_1,uint64_t param_2)
{
  char cVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t astack_special_x_8 [4];
  puVar2 = *(uint64_t **)(*(int64_t *)(param_1 + 0x18) + 0x2f60);
  puVar3 = *(uint64_t **)(*(int64_t *)(param_1 + 0x18) + 0x2f68);
  astack_special_x_8[0] = param_2;
  if (puVar2 != puVar3) {
    do {
      cVar1 = SystemCore_PerformanceMonitor(*puVar2,astack_special_x_8);
      if (cVar1 != '\0') {
        return 1;
      }
      puVar2 = puVar2 + 2;
    } while (puVar2 != puVar3);
  }
  return 0;
}
uint64_t *
UtilitiesSystem_0fed0(uint64_t *param_1,uint64_t param_2,uint64_t *param_3,uint64_t *param_4,
             float *param_5)
{
  char cVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  uint64_t uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint64_t stack_special_x_8;
  uint64_t local_var_138;
  int64_t lStack_130;
  uint64_t local_var_128;
  uint64_t local_var_100;
  int iStack_f8;
  int32_t local_var_f4;
  uint64_t local_var_e8;
  int64_t lStack_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int32_t local_var_c4;
  uint64_t local_var_c0;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int iStack_a8;
  fVar3 = (float)GenericFunction_1801be430(param_3);
  fVar3 = fVar3 * 0.1;
  iVar2 = 4;
  fVar10 = fVar3 * 0.25;
  stack_special_x_8._4_4_ = (float)((uint64_t)*param_3 >> 0x20);
  stack_special_x_8._0_4_ = (float)*param_3;
  fVar8 = stack_special_x_8._4_4_;
  fVar6 = (float)stack_special_x_8;
  do {
    fVar9 = *(float *)(param_4 + 3);
    local_var_d0 = param_4[3];
    local_var_c8 = *(int32_t *)(param_4 + 4);
    local_var_c4 = *(int32_t *)((int64_t)param_4 + 0x24);
    local_var_e8 = *param_4;
    local_var_c0 = param_4[5];
    local_var_b8 = param_4[6];
    lStack_e0 = param_4[1];
    local_var_d8 = param_4[2];
    local_var_b0 = param_4[7];
    iStack_a8 = *(int *)(param_4 + 8);
    fVar4 = fVar6 * fVar3 + fVar9;
    fVar7 = fVar8 * fVar3 + *(float *)((int64_t)param_4 + 0x1c);
    stack_special_x_8 = CONCAT44(fVar7,fVar4);
    if ((fVar9 != fVar4) || (*(float *)((int64_t)param_4 + 0x1c) != fVar7)) {
      if (iStack_a8 != 0) {
        iStack_a8 = 0;
      }
      local_var_d0 = stack_special_x_8;
    }
    SystemCore_Validator(&local_var_e8,2);
    iStack_f8 = iStack_a8;
    lStack_130 = lStack_e0;
    if ((1 < iStack_a8) && (lStack_e0 != 0)) {
      cVar1 = UISystem_f6190(param_2,&local_var_d0);
      if (cVar1 != '\0') {
        uVar5 = CONCAT44(local_var_c4,local_var_c8);
        *param_5 = 1.0 - (float)iVar2 * 0.05;
        local_var_138 = local_var_e8;
        local_var_128 = local_var_d8;
        local_var_100 = local_var_b0;
        goto LAB_1806100a9;
      }
    }
    fVar3 = fVar3 + fVar10;
    iVar2 = iVar2 + 1;
    fVar9 = fVar6 * 1.0;
    fVar6 = fVar6 * -4.371139e-08 - fVar8 * 1.0;
    fVar8 = fVar9 - fVar8 * 4.371139e-08;
  } while (iVar2 < 0x14);
  *param_5 = 0.0;
  local_var_138 = *param_4;
  local_var_d0 = param_4[3];
  uVar5 = param_4[4];
  lStack_130 = param_4[1];
  local_var_c0._0_4_ = *(int32_t *)(param_4 + 5);
  local_var_c0._4_4_ = *(int32_t *)((int64_t)param_4 + 0x2c);
  local_var_b8._0_4_ = *(int32_t *)(param_4 + 6);
  local_var_b8._4_4_ = *(int32_t *)((int64_t)param_4 + 0x34);
  local_var_128 = param_4[2];
  local_var_100 = param_4[7];
  iStack_f8 = *(int *)(param_4 + 8);
LAB_1806100a9:
  *param_1 = local_var_138;
  param_1[1] = lStack_130;
  param_1[2] = local_var_128;
  param_1[3] = local_var_d0;
  param_1[4] = uVar5;
  param_1[5] = CONCAT44(local_var_c0._4_4_,(int32_t)local_var_c0);
  param_1[6] = CONCAT44(local_var_b8._4_4_,(int32_t)local_var_b8);
  param_1[7] = local_var_100;
  param_1[8] = CONCAT44(local_var_f4,iStack_f8);
  return param_1;
}
// 函数: void UtilitiesSystem_10190(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
void UtilitiesSystem_10190(int64_t param_1,int64_t param_2,uint64_t param_3,uint64_t param_4)
{
  void *plocal_var_30;
  int64_t lStack_28;
  if (*(char *)(param_1 + 0x98d92c) != '\0') {
    SystemCore_CacheManager(&plocal_var_30,param_2 + 0x1c,param_3,param_4,0xfffffffffffffffe);
    UISystem_f6330(param_1,&plocal_var_30,param_2);
    plocal_var_30 = &system_data_buffer_ptr;
    if (lStack_28 != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void UtilitiesSystem_10210(int64_t *param_1)
void UtilitiesSystem_10210(int64_t *param_1)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int iVar6;
  uint64_t uVar7;
  int64_t lVar8;
  uint uVar9;
  uint64_t uVar10;
  int64_t *plStackX_8;
  int64_t *plStackX_10;
  int64_t **pplStackX_18;
  uVar4 = system_context_ptr;
  uVar7 = 0;
  if ((render_system_data_memory != 0) &&
     (plVar3 = *(int64_t **)(render_system_data_memory + 0x228), plVar3 != (int64_t *)0x0)) {
    pplStackX_18 = &plStackX_8;
    plStackX_8 = plVar3;
    (**(code **)(*plVar3 + 0x28))();
    SystemCore_ErrorHandler(uVar4,&plStackX_8,0);
    plStackX_10 = *(int64_t **)(render_system_data_memory + 0x228);
    *(uint64_t *)(render_system_data_memory + 0x228) = 0;
    if (plStackX_10 != (int64_t *)0x0) {
      (**(code **)(*plStackX_10 + 0x38))();
    }
  }
  *(int8_t *)((int64_t)param_1 + 0x98d92c) = 1;
  lVar8 = system_main_module_state;
  if ((char)param_1[0x10f6ea] != '\0') {
    *(int8_t *)(system_main_module_state + 0x264) = 0;
    lVar8 = *(int64_t *)(lVar8 + 0x3d8);
    RenderingSystem_33810(lVar8,1);
    *(int32_t *)(lVar8 + 0x9b8) = 1;
    *(uint64_t *)(lVar8 + 0x158) = 0xffffffffffffffff;
    *(uint64_t *)(lVar8 + 0x150) = 0;
    *(int32_t *)(lVar8 + 0x144) = 0;
    lVar5 = render_system_data_memory;
    if (*(code **)(render_system_data_memory + 0x18) != (code *)0x0) {
      (**(code **)(render_system_data_memory + 0x18))(render_system_data_memory + 8,0,0);
    }
    *(uint64_t *)(lVar5 + 0x18) = 0;
    *(code **)(lVar5 + 0x20) = _guard_check_icall;
    plVar3 = (int64_t *)(lVar8 + 0x358);
    plStackX_8 = plVar3;
    iVar6 = _Mtx_lock(plVar3);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    RenderingSystem_CameraController0(lVar8 + 0x328);
    iVar6 = _Mtx_unlock(plVar3);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    plVar3 = (int64_t *)(lVar8 + 0x3d8);
    plStackX_8 = plVar3;
    iVar6 = _Mtx_lock(plVar3);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    RenderingSystem_CameraController0(lVar8 + 0x3a8);
    iVar6 = _Mtx_unlock(plVar3);
    if (iVar6 != 0) {
      __Throw_C_error_std__YAXH_Z(iVar6);
    }
    *(int32_t *)(lVar8 + 0x110) = 0;
    lVar8 = system_operation_state;
    if (*(char *)(system_operation_state + 0x1609) != '\x01') {
      CoreEngine_1723A0(*(uint64_t *)(system_main_module_state + 8),*(char *)(render_system_data_memory + 0x2028) != '\0',
                    *(int32_t *)(system_operation_state + 0x160c));
      *(int8_t *)(lVar8 + 0x1609) = 1;
    }
  }
  UISystem_f3d00(param_1);
  uVar10 = uVar7;
  if ((int64_t)render_system_memory - render_system_memory >> 3 != 0) {
    do {
      if (*(int64_t **)(render_system_memory + uVar7) == param_1) {
        puVar2 = (uint64_t *)(render_system_memory + (int64_t)(int)uVar10 * 8);
        plVar3 = puVar2 + 1;
        if (plVar3 < render_system_memory) {
          for (lVar8 = (int64_t)render_system_memory - (int64_t)plVar3 >> 3; 0 < lVar8;
              lVar8 = lVar8 + -1) {
            puVar1 = puVar2 + 1;
            uVar4 = *puVar1;
            *puVar1 = 0;
            plStackX_8 = (int64_t *)*puVar2;
            *puVar2 = uVar4;
            if (plStackX_8 != (int64_t *)0x0) {
              (**(code **)(*plStackX_8 + 0x38))();
            }
            puVar2 = puVar1;
          }
        }
        render_system_memory = render_system_memory + -1;
        if ((int64_t *)*render_system_memory != (int64_t *)0x0) {
          (**(code **)(*(int64_t *)*render_system_memory + 0x38))();
        }
        break;
      }
      uVar9 = (int)uVar10 + 1;
      uVar7 = uVar7 + 8;
      uVar10 = (uint64_t)uVar9;
    } while ((uint64_t)(int64_t)(int)uVar9 <
             (uint64_t)((int64_t)render_system_memory - render_system_memory >> 3));
  }
  plVar3 = render_system_memory;
  if (render_system_memory == param_1) {
    plStackX_8 = render_system_memory;
    render_system_memory = (int64_t *)0x0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
    GenericFunction_1800dabf0();
  }
  return;
}
uint UtilitiesSystem_10560(int64_t param_1,char param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6,int32_t param_7,uint64_t *param_8,
                  uint64_t *param_9,uint64_t param_10,int32_t param_11,int32_t param_12)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t *local_var_88;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  local_var_28 = *param_9;
  local_var_20 = param_9[1];
  local_var_18 = *param_8;
  local_var_10 = param_8[1];
  uVar2 = UISystem_e88b0(param_12,param_11,&local_var_18,&local_var_28,param_10,param_3,param_11,param_12,
                        param_4,param_5,param_6,param_7);
  if (param_2 == '\0') {
    plVar1 = *(int64_t **)
              ((uint64_t)(uVar2 & 0xf) * 0xbe0 +
               *(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar2 >> 4) * 8) +
              0x100);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    *local_var_88 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  else {
    *local_var_88 = 0;
  }
  return uVar2;
}
uint UtilitiesSystem_106f0(int64_t param_1,char param_2,int32_t param_3,uint64_t param_4,
                  uint64_t param_5,int32_t param_6,uint64_t *param_7,uint64_t *param_8,
                  uint64_t param_9,int32_t param_10,int32_t param_11)
{
  int64_t *plVar1;
  uint uVar2;
  int64_t *local_var_80;
  uint64_t local_var_28;
  uint64_t local_var_20;
  uint64_t local_var_18;
  uint64_t local_var_10;
  local_var_28 = *param_8;
  local_var_20 = param_8[1];
  local_var_18 = *param_7;
  local_var_10 = param_7[1];
  uVar2 = UISystem_e88b0(param_11,param_10,&local_var_18,&local_var_28,param_9,param_3,param_10,param_11,
                        param_4,param_5,1,param_6);
  if (param_2 == '\0') {
    plVar1 = *(int64_t **)
              ((uint64_t)(uVar2 & 0xf) * 0xbe0 +
               *(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(uVar2 >> 4) * 8) +
              0x100);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    *local_var_80 = (int64_t)plVar1;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1);
    }
  }
  else {
    *local_var_80 = 0;
  }
  return uVar2;
}
uint64_t UtilitiesSystem_108a0(int32_t *param_1,uint64_t param_2)
{
  uint64_t *puVar1;
  uint64_t uVar2;
  int8_t stack_array_28 [16];
  int32_t local_var_18;
  int32_t local_var_14;
  int32_t local_var_10;
  int32_t local_var_c;
  local_var_18 = *param_1;
  local_var_14 = param_1[1];
  local_var_10 = param_1[2];
  local_var_c = param_1[3];
  puVar1 = (uint64_t *)NetworkSystem_a6ff0(stack_array_28,param_2,&local_var_18);
  if ((float)*puVar1 < 1.0) {
// WARNING: Could not recover jumptable at 0x0001808ffcb3. Too many branches
// WARNING: Treating indirect jump as call
    uVar2 = asinf(local_var_10);
    return uVar2;
  }
  return 0x40490fdb;
}
// 函数: void UtilitiesSystem_10900(int64_t param_1,uint param_2)
void UtilitiesSystem_10900(int64_t param_1,uint param_2)
{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t lVar3;
  code *pcVar4;
  int32_t uVar5;
  uint64_t uVar6;
  int8_t stack_array_50 [72];
  uVar6 = 0xfffffffffffffffe;
  lVar3 = (uint64_t)(param_2 & 0xf) * 0xbe0 +
          *(int64_t *)(*(int64_t *)(param_1 + 0x87b340) + (uint64_t)(param_2 >> 4) * 8);
  plVar1 = *(int64_t **)(*(int64_t *)(*(int64_t *)(lVar3 + 0xf0) + 0xf8) + 0x58);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  pcVar4 = *(code **)(*plVar1 + 0x148);
  uVar2 = Function_0a79f938(*(uint64_t *)(lVar3 + 0xf0),stack_array_50);
  (*pcVar4)(plVar1,uVar2);
  (**(code **)(*plVar1 + 0x38))(plVar1);
  lVar3 = *(int64_t *)(lVar3 + 0xf0);
  if ((*(byte *)((int64_t)*(int *)(lVar3 + 0xf0) * 0xa0 + 0x50 + *(int64_t *)(lVar3 + 0xd0)) >> 1
      & 1) != 0) {
    if (*(short *)(lVar3 + 10) < 1) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0x3f800000;
    }
    if (*(int64_t *)(lVar3 + 0xf8) != 0) {
      *(int32_t *)(*(int64_t *)(lVar3 + 0xf8) + 0x90) = uVar5;
    }
  }
  if (*(int64_t *)(lVar3 + 0xf8) != 0) {
    NetworkSystem_ec620(*(int64_t *)(lVar3 + 0xf8),0,0,0,0,0,uVar6);
  }
  return;
}
// 函数: void UtilitiesSystem_10a30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
void UtilitiesSystem_10a30(uint64_t param_1,uint64_t param_2,uint64_t param_3,int8_t param_4)
{
  int32_t uVar1;
  uint64_t uVar2;
  void *plocal_var_30;
  int64_t lStack_28;
  uVar2 = 0xfffffffffffffffe;
  SystemCore_CacheManager(&plocal_var_30);
  uVar1 = GenericFunction_1800c17c0();
  UISystem_ebb80(param_1,uVar1,param_3,param_4,uVar2);
  plocal_var_30 = &system_data_buffer_ptr;
  if (lStack_28 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address