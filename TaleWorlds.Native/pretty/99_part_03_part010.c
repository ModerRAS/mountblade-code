// $fun 的语义化别名
#define $alias_name $fun
/* 函数别名定义: DataEncryptionHandler */
#define DataEncryptionHandler DataEncryptionHandler
/* 函数别名定义: RenderingSystemProcessor */
#define RenderingSystemProcessor RenderingSystemProcessor
// 99_part_03_part010.c - 3 个函数
// 函数: void function_1d0510(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_1d0510(int64_t param_1,int64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  int64_t *plVar1;
  int iVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  int64_t lVar5;
  int64_t *plVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uVar9 = 0xfffffffffffffffe;
  iVar2 = _Mtx_lock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  if (param_2 != (int64_t *)0x0) {
    (**(code **)(*param_2 + 0x28))(param_2);
  }
  puVar7 = *(uint64_t **)(param_1 + 0xe0);
  puVar3 = (uint64_t *)0x0;
  if (puVar7 < *(uint64_t **)(param_1 + 0xe8)) {
    *(uint64_t **)(param_1 + 0xe0) = puVar7 + 1;
    *puVar7 = param_2;
    goto LAB_1801d0679;
  }
  puVar4 = *(uint64_t **)(param_1 + 0xd8);
  lVar5 = (int64_t)puVar7 - (int64_t)puVar4 >> 3;
  if (lVar5 == 0) {
    lVar5 = 1;
LAB_1801d05c0:
    puVar3 = (uint64_t *)
             CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 8,*(int8_t *)(param_1 + 0xf0),param_4,uVar9);
    puVar7 = *(uint64_t **)(param_1 + 0xe0);
    puVar4 = *(uint64_t **)(param_1 + 0xd8);
    puVar8 = puVar3;
  }
  else {
    lVar5 = lVar5 * 2;
    puVar8 = puVar3;
    if (lVar5 != 0) goto LAB_1801d05c0;
  }
  for (; puVar4 != puVar7; puVar4 = puVar4 + 1) {
    *puVar3 = *puVar4;
    *puVar4 = 0;
    puVar3 = puVar3 + 1;
  }
  *puVar3 = param_2;
  plVar1 = *(int64_t **)(param_1 + 0xe0);
  plVar6 = *(int64_t **)(param_1 + 0xd8);
  if (plVar6 != plVar1) {
    do {
      if ((int64_t *)*plVar6 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar6 + 0x38))();
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar1);
    plVar6 = *(int64_t **)(param_1 + 0xd8);
  }
  if (plVar6 != (int64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(plVar6);
  }
  *(uint64_t **)(param_1 + 0xd8) = puVar8;
  *(uint64_t **)(param_1 + 0xe0) = puVar3 + 1;
  *(uint64_t **)(param_1 + 0xe8) = puVar8 + lVar5;
LAB_1801d0679:
  iVar2 = _Mtx_unlock(param_1 + 0x88);
  if (iVar2 != 0) {
    __Throw_C_error_std__YAXH_Z(iVar2);
  }
  return;
}
int64_t *
function_1d06b0(uint64_t param_1,int64_t *param_2,int64_t param_3,int32_t param_4,
             int32_t param_5,uint64_t param_6,int64_t param_7)
{
  int64_t lVar1;
  uint64_t uVar2;
  void *puVar3;
  int iVar4;
  void *plocal_var_38;
  int64_t lStack_30;
  int iStack_28;
  *param_2 = (int64_t)&system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = (int64_t)&system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  puVar3 = &system_buffer_ptr;
  if (*(void **)(param_3 + 8) != (void *)0x0) {
    puVar3 = *(void **)(param_3 + 8);
  }
  (**(code **)(*param_2 + 0x10))
            (param_2,puVar3,*(code **)(*param_2 + 0x10),param_4,1,0xfffffffffffffffe);
  uVar2 = function_0ade00(*(int32_t *)(param_7 + 0xa4));
  CoreMemoryPoolValidator(&plocal_var_38,uVar2);
  CoreMemoryPoolProcessor(param_2,(int)param_2[2] + 1);
  *(int8_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((uint64_t)((int)param_2[2] + 1) + param_2[1]) = 0;
  lVar1 = param_2[2];
  iVar4 = (int)lVar1 + 1;
  *(int *)(param_2 + 2) = iVar4;
  if (0 < iStack_28) {
    CoreMemoryPoolProcessor(param_2,iVar4 + iStack_28);
// WARNING: Subroutine does not return
    memcpy((uint64_t)*(uint *)(param_2 + 2) + param_2[1],lStack_30,(int64_t)(iStack_28 + 1));
  }
  CoreMemoryPoolProcessor(param_2,(int)lVar1 + 2);
  *(int8_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((uint64_t)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  function_628420(param_2,param_5);
  CoreMemoryPoolProcessor(param_2,(int)param_2[2] + 1);
  *(int8_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((uint64_t)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  function_628570(param_2,param_6);
  CoreMemoryPoolProcessor(param_2,(int)param_2[2] + 1);
  *(int8_t *)((uint64_t)*(uint *)(param_2 + 2) + param_2[1]) = 0x2e;
  *(int8_t *)((uint64_t)((int)param_2[2] + 1) + param_2[1]) = 0;
  *(int *)(param_2 + 2) = (int)param_2[2] + 1;
  RenderingSystem_CameraController(param_2,param_4);
  plocal_var_38 = &system_data_buffer_ptr;
  if (lStack_30 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  return param_2;
}
uint64_t
function_1d0890(int64_t param_1,int32_t *param_2,int64_t *param_3,uint64_t param_4,
             int32_t *param_5,int16_t *param_6,int32_t *param_7,uint64_t *param_8)
{
  char *pcVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  void *puVar5;
  uint64_t uVar6;
  int16_t stack_array_68 [4];
  int16_t stack_array_60 [4];
  int32_t stack_array_58 [2];
  int32_t stack_array_50 [2];
  uint64_t local_var_48;
  uint64_t local_var_40;
  uint64_t *plocal_var_38;
  uint64_t *plocal_var_30;
  uint64_t local_var_28;
  int32_t local_var_20;
  local_var_40 = 0xfffffffffffffffe;
  plocal_var_38 = (uint64_t *)0x0;
  plocal_var_30 = (uint64_t *)0x0;
  local_var_28 = 0;
  local_var_20 = 3;
  stack_array_68[0] = 0x2e;
  if (*(int64_t *)(param_1 + 8) != 0) {
    CoreSystem_DataCollector(0,&plocal_var_38,stack_array_68);
  }
  puVar4 = plocal_var_30;
  puVar3 = plocal_var_38;
  puVar2 = puVar3;
  if (((int64_t)plocal_var_30 - (int64_t)plocal_var_38 & 0xffffffffffffffe0U) == 0xe0) {
    puVar5 = &system_buffer_ptr;
    if ((void *)plocal_var_38[1] != (void *)0x0) {
      puVar5 = (void *)plocal_var_38[1];
    }
    (**(code **)(*param_3 + 0x10))(param_3,puVar5);
    if (*(int *)(puVar3 + 6) == 2) {
      pcVar1 = (char *)puVar3[5];
      if (((*pcVar1 == 'v') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
        *param_2 = 0;
      }
      else {
        pcVar1 = (char *)puVar3[5];
        if (((*pcVar1 == 'p') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
          *param_2 = 1;
        }
        else {
          pcVar1 = (char *)puVar3[5];
          if (((*pcVar1 == 'd') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
            *param_2 = 2;
          }
          else {
            pcVar1 = (char *)puVar3[5];
            if (((*pcVar1 == 'h') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
              *param_2 = 3;
            }
            else {
              pcVar1 = (char *)puVar3[5];
              if (((*pcVar1 == 'g') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                *param_2 = 5;
              }
              else {
                pcVar1 = (char *)puVar3[5];
                if (((*pcVar1 == 'c') && (pcVar1[1] == 's')) && (pcVar1[2] == '\0')) {
                  *param_2 = 4;
                }
              }
            }
          }
        }
      }
    }
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[9] != (void *)0x0) {
      puVar5 = (void *)puVar3[9];
    }
    AdvancedSystemOptimizer(puVar5,&processed_var_7284_ptr,stack_array_60);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0xd] != (void *)0x0) {
      puVar5 = (void *)puVar3[0xd];
    }
    AdvancedSystemOptimizer(puVar5,&processed_var_7284_ptr,param_4);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x11] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x11];
    }
    AdvancedSystemOptimizer(puVar5,&processed_var_7284_ptr,stack_array_58);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x15] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x15];
    }
    AdvancedSystemOptimizer(puVar5,&processed_var_7284_ptr,stack_array_50);
    puVar5 = &system_buffer_ptr;
    if ((void *)puVar3[0x19] != (void *)0x0) {
      puVar5 = (void *)puVar3[0x19];
    }
    AdvancedSystemOptimizer(puVar5,&processed_var_7284_ptr,&local_var_48);
    *param_6 = stack_array_60[0];
    *param_5 = stack_array_58[0];
    *param_7 = stack_array_50[0];
    *param_8 = local_var_48;
    uVar6 = 1;
  }
  else {
    uVar6 = 0;
  }
  for (; puVar2 != puVar4; puVar2 = puVar2 + 4) {
    (**(code **)*puVar2)(puVar2,0);
  }
  if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager(puVar3);
  }
  return uVar6;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1d0bb0(void)
void function_1d0bb0(void)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int32_t uVar4;
  uint64_t *puVar5;
  int64_t *plVar6;
  uint64_t uVar7;
  uint64_t uVar8;
  uint64_t *puVar9;
  uint64_t uVar10;
  int8_t stack_array_2b8 [52];
  int iStack_284;
  void *plocal_var_280;
  uint64_t *plocal_var_278;
  int32_t local_var_270;
  uint64_t local_var_268;
  void *plocal_var_260;
  uint64_t *plocal_var_258;
  int32_t local_var_250;
  uint64_t local_var_248;
  int64_t lStack_240;
  uint64_t local_var_238;
  uint64_t *plocal_var_230;
  uint64_t *plocal_var_228;
  uint64_t *plocal_var_220;
  int32_t local_var_218;
  int64_t lStack_1f0;
  uint64_t *plocal_var_1e0;
  uint64_t *plocal_var_1d8;
  uint64_t *plocal_var_1d0;
  uint64_t local_var_1c8;
  int32_t local_var_1c0;
  int64_t *plStack_1b0;
  uint64_t local_var_1a8;
  uint64_t local_var_160;
  void *plocal_var_158;
  int8_t *plocal_var_150;
  int32_t local_var_148;
  int8_t stack_array_140 [72];
  void *plocal_var_f8;
  int8_t *plocal_var_f0;
  int32_t local_var_e8;
  int8_t stack_array_e0 [72];
  void *plocal_var_98;
  int8_t *plocal_var_90;
  int32_t local_var_88;
  int8_t stack_array_80 [72];
  uint64_t local_var_38;
  local_var_160 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_2b8;
  uVar10 = 0;
  plocal_var_1d8 = (uint64_t *)0x0;
  plocal_var_1d0 = (uint64_t *)0x0;
  local_var_1c8 = 0;
  local_var_1c0 = 3;
  plocal_var_260 = &system_data_buffer_ptr;
  local_var_248 = 0;
  plocal_var_258 = (uint64_t *)0x0;
  local_var_250 = 0;
  puVar5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_258 = puVar5;
  uVar4 = CoreMemoryPoolCleaner(puVar5);
  *puVar5 = 0x5f65737566666964;
  *(int32_t *)(puVar5 + 1) = 0x656b6162;
  *(int8_t *)((int64_t)puVar5 + 0xc) = 0;
  local_var_250 = 0xc;
  local_var_248._0_4_ = uVar4;
  DataEncryptionHandler0(&plocal_var_1d8,&plocal_var_260);
  plocal_var_260 = &system_data_buffer_ptr;
  if (plocal_var_258 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_258 = (uint64_t *)0x0;
  local_var_248 = (uint64_t)local_var_248._4_4_ << 0x20;
  plocal_var_260 = &system_state_ptr;
  plocal_var_280 = &system_data_buffer_ptr;
  local_var_268 = 0;
  plocal_var_278 = (uint64_t *)0x0;
  local_var_270 = 0;
  puVar5 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar5 = 0;
  plocal_var_278 = puVar5;
  uVar4 = CoreMemoryPoolCleaner(puVar5);
  *puVar5 = 0x625f6c616d726f6e;
  *(int32_t *)(puVar5 + 1) = 0x656b61;
  local_var_270 = 0xb;
  local_var_268._0_4_ = uVar4;
  DataEncryptionHandler0(&plocal_var_1d8,&plocal_var_280);
  puVar5 = plocal_var_1d8;
  plocal_var_280 = &system_data_buffer_ptr;
  if (plocal_var_278 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_278 = (uint64_t *)0x0;
  local_var_268 = (uint64_t)local_var_268._4_4_ << 0x20;
  plocal_var_280 = &system_state_ptr;
  iStack_284 = 0;
  local_var_1a8 = (int64_t)plocal_var_1d0 - (int64_t)plocal_var_1d8 >> 5;
  puVar9 = puVar5;
  puVar2 = plocal_var_1d0;
  if (local_var_1a8 != 0) {
    do {
      plVar6 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_1b0,puVar5 + uVar10 * 4,0);
      lVar1 = *plVar6;
      lStack_240 = lVar1;
      lStack_1f0 = lVar1;
      if (plStack_1b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b0 + 0x38))();
      }
      if (lVar1 != 0) {
        plocal_var_158 = &memory_allocator_3480_ptr;
        plocal_var_150 = stack_array_140;
        stack_array_140[0] = 0;
        local_var_148 = 10;
        strcpy_s(stack_array_140,0x40,&system_data_d648);
        uVar7 = SystemCore_LoggingSystem0(lVar1,&plocal_var_158,0);
        plocal_var_158 = &system_state_ptr;
        plocal_var_f8 = &memory_allocator_3480_ptr;
        plocal_var_f0 = stack_array_e0;
        stack_array_e0[0] = 0;
        local_var_e8 = 0x13;
        strcpy_s(stack_array_e0,0x40,&ui_system_data_1576_ptr);
        uVar8 = SystemCore_LoggingSystem0(lVar1,&plocal_var_f8,0);
        plocal_var_f8 = &system_state_ptr;
        plocal_var_98 = &memory_allocator_3480_ptr;
        plocal_var_90 = stack_array_80;
        stack_array_80[0] = 0;
        local_var_88 = 0x1c;
        strcpy_s(stack_array_80,0x40,&ui_system_data_1504_ptr);
        local_var_238 = SystemCore_LoggingSystem0(lVar1,&plocal_var_98,0);
        plocal_var_98 = &system_state_ptr;
        plocal_var_230 = (uint64_t *)0x0;
        plocal_var_228 = (uint64_t *)0x0;
        plocal_var_220 = (uint64_t *)0x0;
        local_var_218 = 3;
        puVar9 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,8,3);
        *puVar9 = uVar7;
        puVar5 = puVar9 + 1;
        plocal_var_230 = puVar9;
        plocal_var_228 = puVar5;
        plocal_var_220 = puVar5;
        plocal_var_1e0 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x10,3);
        if (puVar9 == puVar5) {
          *plocal_var_1e0 = uVar8;
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar9);
        }
// WARNING: Subroutine does not return
        memmove(plocal_var_1e0,puVar9,8);
      }
      iStack_284 = iStack_284 + 1;
      uVar10 = (uint64_t)iStack_284;
      puVar2 = plocal_var_1d0;
    } while (uVar10 < local_var_1a8);
  }
  for (; puVar3 = plocal_var_1d0, puVar9 != plocal_var_1d0; puVar9 = puVar9 + 4) {
    plocal_var_1d0 = puVar2;
    (**(code **)*puVar9)(puVar9,0);
    puVar2 = plocal_var_1d0;
    plocal_var_1d0 = puVar3;
  }
  if (puVar5 == (uint64_t *)0x0) {
    plocal_var_1d0 = puVar2;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_38 ^ (uint64_t)stack_array_2b8);
  }
  plocal_var_1d0 = puVar2;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar5);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1d1390(uint64_t param_1,uint64_t param_2)
void function_1d1390(uint64_t param_1,uint64_t param_2)
{
  uint uVar1;
  int64_t lVar2;
  int32_t uVar3;
  int32_t *puVar4;
  int64_t *plVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  int iVar8;
  uint *puVar9;
  uint64_t uVar10;
  int8_t stack_array_288 [32];
  int64_t lStack_268;
  int aiStack_258 [2];
  int64_t *plStack_250;
  void *plocal_var_248;
  int32_t *plocal_var_240;
  int32_t local_var_238;
  uint64_t local_var_230;
  int64_t alStack_228 [3];
  int32_t local_var_210;
  int64_t lStack_200;
  uint64_t local_var_1f8;
  uint local_var_1f0;
  int16_t local_var_1ec;
  uint64_t *plocal_var_1e8;
  int64_t lStack_1e0;
  uint64_t local_var_1d8;
  int32_t local_var_1d0;
  uint *plocal_var_1c8;
  int64_t lStack_1c0;
  uint64_t local_var_1b8;
  int32_t local_var_1b0;
  int64_t alStack_1a8 [3];
  int32_t local_var_190;
  uint64_t local_var_188;
  void *plocal_var_178;
  int8_t *plocal_var_170;
  int32_t local_var_168;
  int8_t stack_array_160 [136];
  void *plocal_var_d8;
  int8_t *plocal_var_d0;
  int32_t local_var_c8;
  int8_t stack_array_c0 [136];
  uint64_t local_var_38;
  local_var_188 = 0xfffffffffffffffe;
  local_var_38 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_288;
  plocal_var_248 = &system_data_buffer_ptr;
  local_var_230 = 0;
  plocal_var_240 = (int32_t *)0x0;
  local_var_238 = 0;
  puVar4 = (int32_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,0x18,0x13);
  *(int8_t *)puVar4 = 0;
  plocal_var_240 = puVar4;
  uVar3 = CoreMemoryPoolCleaner(puVar4);
  local_var_230 = CONCAT44(local_var_230._4_4_,uVar3);
  *puVar4 = 0x726f6c66;
  puVar4[1] = 0x69625f61;
  puVar4[2] = 0x6f626c6c;
  puVar4[3] = 0x5f647261;
  *(uint64_t *)(puVar4 + 4) = 0x72656666756267;
  local_var_238 = 0x17;
  plVar5 = (int64_t *)SystemCore_EncryptionManager(system_resource_state,&plStack_250,&plocal_var_248,0);
  lVar2 = *plVar5;
  lStack_200 = lVar2;
  if (plStack_250 != (int64_t *)0x0) {
    (**(code **)(*plStack_250 + 0x38))();
  }
  if (lVar2 != 0) {
    alStack_228[0] = 0;
    alStack_228[1] = 0;
    alStack_228[2] = 0;
    local_var_210 = 3;
    aiStack_258[0] = 8;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 0x8000;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 2;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 0x80;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 0x400;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 0x200;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    aiStack_258[0] = 0x800000;
    SystemDatabaseProcessor(alStack_228,aiStack_258);
    alStack_1a8[0] = 0;
    alStack_1a8[1] = 0;
    alStack_1a8[2] = 0;
    local_var_190 = 3;
    plocal_var_178 = &memory_allocator_3432_ptr;
    plocal_var_170 = stack_array_160;
    stack_array_160[0] = 0;
    local_var_168 = 0x1c;
    strcpy_s(stack_array_160,0x80,&ui_system_data_1504_ptr);
    plStack_250 = (int64_t *)SystemCore_LoggingSystem0(lVar2,&plocal_var_178,0);
    SystemSecurity_Manager(alStack_1a8,&plStack_250);
    plocal_var_178 = &system_state_ptr;
    plocal_var_d8 = &memory_allocator_3432_ptr;
    plocal_var_d0 = stack_array_c0;
    stack_array_c0[0] = 0;
    local_var_c8 = 10;
    strcpy_s(stack_array_c0,0x80,&system_data_d648);
    plStack_250 = (int64_t *)SystemCore_LoggingSystem0(lVar2,&plocal_var_d8,0);
    SystemSecurity_Manager(alStack_1a8,&plStack_250);
    plocal_var_d8 = &system_state_ptr;
    plocal_var_1c8 = (uint *)0x0;
    lStack_1c0 = 0;
    local_var_1b8 = 0;
    local_var_1b0 = 3;
    lStack_268 = lVar2;
    function_1d7910(0,0,&plocal_var_1c8,alStack_228);
    plocal_var_1e8 = (uint64_t *)0x0;
    lStack_1e0 = 0;
    local_var_1d8 = 0;
    local_var_1d0 = 3;
    lStack_268 = lVar2;
    function_1d7ad0(0,0,&plocal_var_1e8,alStack_1a8);
    plVar5 = (int64_t *)(lStack_1c0 - (int64_t)plocal_var_1c8 >> 2);
    aiStack_258[0] = 0;
    puVar6 = plocal_var_1e8;
    plStack_250 = plVar5;
    if (plVar5 != (int64_t *)0x0) {
      uVar10 = lStack_1e0 - (int64_t)plocal_var_1e8 >> 3;
      puVar9 = plocal_var_1c8;
      do {
        iVar8 = 0;
        uVar1 = *puVar9;
        puVar7 = puVar6;
        if (uVar10 != 0) {
          do {
            local_var_1f8 = *puVar7;
            local_var_1ec = 0;
            local_var_1f0 = uVar1 & 0xffc78f;
            SystemCore_SecurityValidator(param_2,&lStack_200);
            iVar8 = iVar8 + 1;
            puVar6 = plocal_var_1e8;
            plVar5 = plStack_250;
            puVar7 = puVar7 + 1;
          } while ((uint64_t)(int64_t)iVar8 < uVar10);
        }
        aiStack_258[0] = aiStack_258[0] + 1;
        puVar9 = puVar9 + 1;
        puVar4 = plocal_var_240;
      } while ((int64_t *)(int64_t)aiStack_258[0] < plVar5);
    }
    if (puVar6 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    if (plocal_var_1c8 != (uint *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(plocal_var_1c8);
    }
    if (alStack_1a8[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    if (alStack_228[0] != 0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
  }
  plocal_var_248 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager(puVar4);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address