#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MemoryDebugger */
#define MemoryDebugger MemoryDebugger
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 02_core_engine_part014.c - 6 个函数
// 函数: void function_0533d0(uint64_t param_1,uint64_t param_2,int64_t param_3)
void function_0533d0(uint64_t param_1,uint64_t param_2,int64_t param_3)
{
  int64_t lVar1;
  int64_t lVar2;
  int32_t uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int8_t *puVar7;
  uint64_t uVar8;
  void *puVar9;
  int64_t lVar10;
  uint uVar11;
  int8_t stack_array_228 [32];
  int8_t local_var_208;
  int32_t local_var_1f8;
  int32_t local_var_1f4;
  void *plocal_var_1b0;
  int8_t *plocal_var_1a8;
  uint local_var_1a0;
  uint64_t local_var_198;
  void *plocal_var_f0;
  int64_t lStack_e8;
  uint local_var_e0;
  uint64_t local_var_d8;
  uint64_t local_var_d0;
  void *plocal_var_c8;
  uint64_t local_var_c0;
  int32_t local_var_b8;
  uint64_t local_var_b0;
  int8_t stack_array_88 [32];
  uint64_t local_var_68;
  uint64_t local_var_60;
  char acStack_58 [16];
  uint64_t local_var_48;
  local_var_68 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  puVar7 = (int8_t *)0x0;
  local_var_1f8 = 0;
  local_var_d0 = param_2;
  local_var_60 = param_2;
  uVar3 = GetCurrentProcessId();
  plocal_var_f0 = &system_data_buffer_ptr;
  local_var_d8 = 0;
  lStack_e8 = 0;
  local_var_e0 = 0;
  CoreMemoryPoolProcessor(&plocal_var_f0,6);
  lVar1 = lStack_e8;
  uVar8 = (uint64_t)local_var_e0;
  *(int32_t *)(uVar8 + lStack_e8) = 0x44495020;
  *(int16_t *)(uVar8 + 4 + lStack_e8) = 0x203a;
  *(int8_t *)(uVar8 + 6 + lStack_e8) = 0;
  local_var_e0 = 6;
  > MedHighFreq_StateMachine1(acStack_58,&processed_var_4576_ptr,uVar3);
  lVar2 = -1;
  do {
    lVar10 = lVar2;
    lVar2 = lVar10 + 1;
  } while (acStack_58[lVar10 + 1] != '\0');
  if (0 < (int)(lVar10 + 1)) {
    CoreMemoryPoolProcessor(&plocal_var_f0,(int)lVar10 + 7);
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_e0 + lStack_e8,acStack_58,(int64_t)((int)lVar10 + 2));
  }
  puVar9 = &system_data_d128;
  if (system_data_2841 != '\0') {
    puVar9 = &processed_var_6256_ptr;
  }
  CoreMemoryPoolValidator(stack_array_88,puVar9);
  plocal_var_c8 = &system_data_buffer_ptr;
  local_var_b0 = 0;
  local_var_c0 = 0;
  local_var_b8 = 0;
  plocal_var_1b0 = &system_data_buffer_ptr;
  uVar11 = 0;
  local_var_198 = 0;
  plocal_var_1a8 = (int8_t *)0x0;
  local_var_1a0 = 0;
  local_var_1f8 = 2;
  uVar6 = *(uint *)(param_3 + 0x10);
  uVar8 = (uint64_t)uVar6;
  uVar5 = 0;
  if (*(int64_t *)(param_3 + 8) == 0) {
LAB_1800535b0:
    uVar11 = uVar5;
    if (uVar6 != 0) {
// WARNING: Subroutine does not return
      memcpy(puVar7,*(uint64_t *)(param_3 + 8),uVar8);
    }
  }
  else if (uVar6 != 0) {
    iVar4 = uVar6 + 1;
    if (iVar4 < 0x10) {
      iVar4 = 0x10;
    }
    puVar7 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)iVar4,0x13);
    *puVar7 = 0;
    plocal_var_1a8 = puVar7;
    uVar5 = CoreMemoryPoolCleaner(puVar7);
    local_var_198 = CONCAT44(local_var_198._4_4_,uVar5);
    goto LAB_1800535b0;
  }
  if (puVar7 != (int8_t *)0x0) {
    puVar7[uVar8] = 0;
  }
  local_var_1f4 = *(int32_t *)(param_3 + 0x1c);
  local_var_198 = CONCAT44(local_var_1f4,(int32_t)local_var_198);
  local_var_1a0 = uVar6;
  if (uVar6 != 0xfffffffa) {
    uVar6 = uVar6 + 7;
    if (puVar7 == (int8_t *)0x0) {
      if ((int)uVar6 < 0x10) {
        uVar6 = 0x10;
      }
      puVar7 = (int8_t *)CoreEngine_MemoryAllocator(system_memory_pool_ptr,(int64_t)(int)uVar6,0x13);
      *puVar7 = 0;
    }
    else {
      if (uVar6 <= uVar11) goto LAB_18005364c;
      local_var_208 = 0x13;
      puVar7 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar7,uVar6,0x10);
    }
    plocal_var_1a8 = puVar7;
    uVar3 = CoreMemoryPoolCleaner(puVar7);
    local_var_198 = CONCAT44(local_var_198._4_4_,uVar3);
  }
LAB_18005364c:
// WARNING: Subroutine does not return
  memcpy(puVar7 + uVar8,lVar1,7);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t
function_054120(uint64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  char cVar1;
  char cVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  uint64_t *puVar5;
  int64_t lVar6;
  char *pcVar7;
  uint uVar8;
  int *piVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  int64_t lVar15;
  uint64_t *puVar16;
  uint64_t uVar17;
  void *plocal_var_70;
  int8_t *plocal_var_68;
  uint local_var_60;
  uint64_t local_var_58;
  uint64_t *plocal_var_50;
  uint64_t *plocal_var_48;
  uint64_t local_var_40;
  int32_t local_var_38;
  uint64_t uVar9;
  plocal_var_50 = (uint64_t *)0x0;
  plocal_var_48 = (uint64_t *)0x0;
  uVar17 = 0;
  local_var_40 = 0;
  local_var_38 = 3;
  function_052200(system_main_module_state,&plocal_var_50,param_3,param_4,0xfffffffffffffffe);
  puVar5 = plocal_var_48;
  puVar4 = plocal_var_50;
  uVar11 = (int64_t)plocal_var_48 - (int64_t)plocal_var_50 >> 5;
  puVar3 = puVar4;
  if (uVar11 == 0) {
LAB_180054302:
    uVar12 = 0;
joined_r0x00018005430b:
    for (; puVar3 != puVar5; puVar3 = puVar3 + 4) {
      (**(code **)*puVar3)(puVar3,0);
    }
    if (puVar4 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar4);
    }
    return uVar12;
  }
  piVar10 = (int *)(plocal_var_50 + 2);
  uVar13 = uVar17;
LAB_18005419d:
  plocal_var_70 = &system_data_buffer_ptr;
  local_var_58 = 0;
  plocal_var_68 = (int8_t *)0x0;
  local_var_60 = 0;
  CoreMemoryPoolProcessor(&plocal_var_70,*piVar10);
  if (*piVar10 != 0) {
// WARNING: Subroutine does not return
    memcpy(plocal_var_68,*(uint64_t *)(piVar10 + -2),*piVar10 + 1);
  }
  if (*(int64_t *)(piVar10 + -2) != 0) {
    local_var_60 = 0;
    if (plocal_var_68 != (int8_t *)0x0) {
      *plocal_var_68 = 0;
    }
    local_var_58 = local_var_58 & 0xffffffff;
  }
  uVar9 = uVar17;
  uVar14 = uVar17;
  if (local_var_60 != 0) {
    do {
      if ((byte)(plocal_var_68[uVar14] + 0xbf) < 0x1a) {
        plocal_var_68[uVar14] = plocal_var_68[uVar14] + ' ';
      }
      uVar8 = (int)uVar9 + 1;
      uVar9 = (uint64_t)uVar8;
      uVar14 = uVar14 + 1;
    } while (uVar8 < local_var_60);
  }
  lVar6 = Function_d8ef3c57(&plocal_var_70);
  puVar16 = (uint64_t *)&processed_var_8064_ptr;
  do {
    pcVar7 = (char *)*puVar16;
    lVar15 = lVar6 - (int64_t)pcVar7;
    do {
      cVar1 = *pcVar7;
      cVar2 = pcVar7[lVar15];
      if (cVar1 != cVar2) break;
      pcVar7 = pcVar7 + 1;
    } while (cVar2 != '\0');
    if (cVar1 == cVar2) break;
    puVar16 = puVar16 + 1;
    if (0x1809fde87 < (int64_t)puVar16) {
      plocal_var_70 = &system_data_buffer_ptr;
      if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngine_MemoryPoolManager();
      }
      plocal_var_68 = (int8_t *)0x0;
      local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
      plocal_var_70 = &system_state_ptr;
      uVar12 = 1;
      goto joined_r0x00018005430b;
    }
  } while( true );
  plocal_var_70 = &system_data_buffer_ptr;
  if (plocal_var_68 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  plocal_var_68 = (int8_t *)0x0;
  local_var_58 = (uint64_t)local_var_58._4_4_ << 0x20;
  plocal_var_70 = &system_state_ptr;
  uVar8 = (int)uVar13 + 1;
  uVar13 = (uint64_t)uVar8;
  piVar10 = piVar10 + 8;
  if (uVar11 <= (uint64_t)(int64_t)(int)uVar8) goto LAB_180054302;
  goto LAB_18005419d;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_054360(int64_t *param_1,int64_t param_2)
void function_054360(int64_t *param_1,int64_t param_2)
{
  uint uVar1;
  int iVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  void *puVar5;
  int64_t lVar6;
  uint64_t uVar7;
  int8_t stack_array_238 [32];
  int32_t local_var_218;
  void *plocal_var_208;
  int64_t lStack_200;
  uint local_var_1f8;
  uint64_t local_var_1f0;
  int32_t local_var_1e8;
  void *plocal_var_1e0;
  int64_t lStack_1d8;
  uint local_var_1d0;
  uint64_t local_var_1c8;
  void *plocal_var_1c0;
  int64_t lStack_1b8;
  int32_t local_var_1b0;
  uint64_t local_var_1a8;
  int32_t local_var_1a0;
  uint local_var_19c;
  int8_t local_var_198;
  int32_t local_var_194;
  void *plocal_var_190;
  int64_t lStack_188;
  int iStack_180;
  int32_t local_var_178;
  void **pplocal_var_170;
  void *plocal_var_168;
  int64_t lStack_160;
  int32_t local_var_150;
  int32_t local_var_148;
  int32_t local_var_144;
  int32_t local_var_140;
  int32_t local_var_13c;
  int32_t local_var_138;
  int32_t local_var_134;
  int32_t local_var_130;
  int32_t local_var_12c;
  int32_t local_var_128;
  int32_t local_var_124;
  int32_t local_var_120;
  int32_t local_var_11c;
  int32_t local_var_118;
  int32_t local_var_114;
  int32_t local_var_110;
  int32_t local_var_10c;
  int8_t local_var_108;
  int32_t local_var_107;
  int32_t local_var_103;
  uint64_t local_var_f8;
  void **pplocal_var_f0;
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_f8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_238;
  local_var_1e8 = 0;
  pplocal_var_f0 = &plocal_var_1c0;
  plocal_var_1c0 = &system_data_buffer_ptr;
  local_var_1a8 = 0;
  lStack_1b8 = 0;
  local_var_1b0 = 0;
  local_var_19c = 0x100;
  local_var_198 = 0;
  local_var_194 = 0;
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  CoreSystem_ConfigValidator0(&plocal_var_1c0,puVar5);
  local_var_1a0 = 0;
  local_var_19c = local_var_19c & 0xffffff00;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x60d30,0x10,0x1f);
  plVar4 = (int64_t *)function_1954d0(uVar3,&plocal_var_1c0);
  pplocal_var_170 = (void **)plVar4;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  local_var_148 = 0x3f800000;
  local_var_144 = 0;
  local_var_140 = 0;
  local_var_13c = 0;
  local_var_138 = 0;
  local_var_134 = 0x3f800000;
  local_var_130 = 0;
  local_var_12c = 0;
  local_var_128 = 0;
  local_var_124 = 0;
  local_var_120 = 0x3f800000;
  local_var_11c = 0;
  local_var_118 = 0;
  local_var_114 = 0;
  local_var_110 = 0;
  local_var_10c = 0x3f800000;
  local_var_107 = 0x1010101;
  local_var_103 = 1;
  local_var_108 = 1;
  plocal_var_e8 = &memory_allocator_3432_ptr;
  plocal_var_e0 = stack_array_d0;
  stack_array_d0[0] = 0;
  local_var_d8 = *(int32_t *)(param_2 + 0x10);
  puVar5 = &system_buffer_ptr;
  if (*(void **)(param_2 + 8) != (void *)0x0) {
    puVar5 = *(void **)(param_2 + 8);
  }
  strcpy_s(stack_array_d0,0x80,puVar5);
  function_19e140(&plocal_var_190,&plocal_var_e8);
  plocal_var_e8 = &system_state_ptr;
  plocal_var_1e0 = &system_data_buffer_ptr;
  local_var_1c8 = 0;
  lStack_1d8 = 0;
  local_var_1d0 = 0;
  lVar6 = *param_1;
  SystemCore_EncryptionEngine0(&plocal_var_168,param_2);
  iVar2 = function_1426a0(lVar6,&plocal_var_168);
  plocal_var_168 = &system_data_buffer_ptr;
  if (lStack_160 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_160 = 0;
  local_var_150 = 0;
  plocal_var_168 = &system_state_ptr;
  if ((iVar2 < 0) ||
     (lVar6 = *(int64_t *)(*param_1 + 0x888),
     (uint64_t)(*(int64_t *)(*param_1 + 0x890) - lVar6 >> 5) <= (uint64_t)(int64_t)iVar2)) {
    lVar6 = MemoryDebugger0();
  }
  else {
    lVar6 = (int64_t)iVar2 * 0x20 + lVar6;
  }
  plocal_var_208 = &system_data_buffer_ptr;
  local_var_1f0 = 0;
  lStack_200 = 0;
  local_var_1f8 = 0;
  local_var_1e8 = 1;
  uVar1 = *(uint *)(lVar6 + 0x10);
  uVar7 = (uint64_t)uVar1;
  if (*(int64_t *)(lVar6 + 8) != 0) {
    CoreMemoryPoolProcessor(&plocal_var_208,uVar7);
  }
  if (uVar1 != 0) {
// WARNING: Subroutine does not return
    memcpy(lStack_200,*(uint64_t *)(lVar6 + 8),uVar7);
  }
  if (lStack_200 != 0) {
    *(int8_t *)(uVar7 + lStack_200) = 0;
  }
  local_var_1f0 = CONCAT44(*(uint *)(lVar6 + 0x1c),(int32_t)local_var_1f0);
  if (0 < iStack_180) {
    local_var_1f8 = uVar1;
    CoreMemoryPoolProcessor(&plocal_var_208,iStack_180);
// WARNING: Subroutine does not return
    memcpy((uint64_t)local_var_1f8 + lStack_200,lStack_188,(int64_t)(iStack_180 + 1));
  }
  lStack_1d8 = lStack_200;
  local_var_1c8._0_4_ = (int32_t)local_var_1f0;
  local_var_1f8 = 0;
  local_var_1e8 = 0;
  lStack_200 = 0;
  local_var_1f0 = 0;
  plocal_var_208 = &system_state_ptr;
  local_var_218 = 0xffffffff;
  local_var_1d0 = uVar1;
  local_var_1c8._4_4_ = *(uint *)(lVar6 + 0x1c);
  function_1a6440(plVar4,core_system_data_memory,&plocal_var_1e0,&local_var_148);
  function_19e260(plVar4);
  (**(code **)(*(int64_t *)param_1[0x56] + 0x138))((int64_t *)param_1[0x56],plVar4);
  function_199500(plVar4,0x3d072b02,1);
  function_1a2ea0(plVar4);
  (**(code **)(*(int64_t *)param_1[0x56] + 0x140))((int64_t *)param_1[0x56],plVar4);
  Sleep(1000);
  plocal_var_1e0 = &system_data_buffer_ptr;
  if (lStack_1d8 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_1d8 = 0;
  local_var_1c8 = (uint64_t)local_var_1c8._4_4_ << 0x20;
  plocal_var_1e0 = &system_state_ptr;
  plocal_var_190 = &system_data_buffer_ptr;
  if (lStack_188 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_188 = 0;
  local_var_178 = 0;
  plocal_var_190 = &system_state_ptr;
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x38))(plVar4);
  }
  pplocal_var_170 = &plocal_var_1c0;
  plocal_var_1c0 = &system_data_buffer_ptr;
  if (lStack_1b8 != 0) {
// WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_1b8 = 0;
  local_var_1a8 = local_var_1a8 & 0xffffffff00000000;
  plocal_var_1c0 = &system_state_ptr;
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_238);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_0547b0(void)
void function_0547b0(void)
{
  uint uVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  char cVar4;
  uint64_t *puVar5;
  int8_t *puVar6;
  int32_t *puVar7;
  int iVar8;
  int iVar9;
  int64_t lVar10;
  uint64_t uVar11;
  uint64_t *puVar12;
  int iVar13;
  int64_t lVar14;
  uint *puVar15;
  void *puVar16;
  int32_t uVar17;
  int8_t stack_array_178 [32];
  void *plocal_var_158;
  int8_t *plocal_var_150;
  uint local_var_148;
  uint64_t local_var_140;
  void *plocal_var_138;
  int8_t *plocal_var_130;
  uint local_var_128;
  uint64_t local_var_120;
  void *plocal_var_118;
  int8_t *plocal_var_110;
  int32_t local_var_108;
  uint64_t local_var_100;
  int iStack_f8;
  void *plocal_var_f0;
  int8_t *plocal_var_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int iStack_c0;
  int32_t local_var_b8;
  int64_t *plStack_a8;
  int64_t lStack_a0;
  void *plocal_var_98;
  void *plocal_var_90;
  int32_t local_var_80;
  void *plocal_var_78;
  int64_t lStack_70;
  int32_t local_var_60;
  uint64_t *plocal_var_58;
  uint64_t *plocal_var_50;
  uint64_t local_var_48;
  int32_t local_var_40;
  uint64_t local_var_38;
  uint64_t local_var_30;
  local_var_38 = 0xfffffffffffffffe;
  local_var_30 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_178;
  plStack_a8 = system_main_module_state;
  lVar14 = *(int64_t *)(*system_main_module_state + 0x890) - *(int64_t *)(*system_main_module_state + 0x888) >> 5;
  iStack_f8 = 0;
  lStack_a0 = lVar14;
  if (0 < (int)lVar14) {
    do {
      iVar9 = iStack_f8;
      iVar13 = 0;
      if (iStack_f8 < 0) {
LAB_18005485e:
        lVar10 = MemoryDebugger0();
      }
      else {
        lVar10 = *(int64_t *)(*system_main_module_state + 0x888);
        if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x890) - lVar10 >> 5) <=
            (uint64_t)(int64_t)iStack_f8) goto LAB_18005485e;
        lVar10 = (int64_t)iStack_f8 * 0x20 + lVar10;
      }
      plocal_var_138 = &system_data_buffer_ptr;
      local_var_120 = 0;
      plocal_var_130 = (int8_t *)0x0;
      local_var_128 = 0;
      CoreMemoryPoolProcessor(&plocal_var_138,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_130,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar10 + 8) != 0) {
        local_var_128 = 0;
        if (plocal_var_130 != (int8_t *)0x0) {
          *plocal_var_130 = 0;
        }
        local_var_120 = local_var_120 & 0xffffffff;
      }
      if (iVar9 < 0) {
LAB_180054912:
        lVar10 = MemoryDebugger0();
      }
      else {
        lVar10 = *(int64_t *)(*system_main_module_state + 0x8a8);
        if ((uint64_t)(*(int64_t *)(*system_main_module_state + 0x8b0) - lVar10 >> 5) <
            (uint64_t)(int64_t)iVar9) goto LAB_180054912;
        lVar10 = (int64_t)iVar9 * 0x20 + lVar10;
      }
      plocal_var_118 = &system_data_buffer_ptr;
      local_var_100 = 0;
      plocal_var_110 = (int8_t *)0x0;
      local_var_108 = 0;
      CoreMemoryPoolProcessor(&plocal_var_118,*(int32_t *)(lVar10 + 0x10));
      if (*(int *)(lVar10 + 0x10) != 0) {
// WARNING: Subroutine does not return
        memcpy(plocal_var_110,*(uint64_t *)(lVar10 + 8),*(int *)(lVar10 + 0x10) + 1);
      }
      if (*(int64_t *)(lVar10 + 8) != 0) {
        local_var_108 = 0;
        if (plocal_var_110 != (int8_t *)0x0) {
          *plocal_var_110 = 0;
        }
        local_var_100 = local_var_100 & 0xffffffff;
      }
      iVar8 = local_var_128 + 8;
      CoreMemoryPoolProcessor(&plocal_var_138,iVar8);
      *(uint64_t *)(plocal_var_130 + local_var_128) = 0x6a624f656e656353;
      *(int8_t *)((int64_t)(plocal_var_130 + local_var_128) + 8) = 0;
      local_var_128 = iVar8;
      cVar4 = UltraHighFreq_LogManager1(&plocal_var_138);
      if (cVar4 == '\0') {
        plocal_var_118 = &system_data_buffer_ptr;
        if (plocal_var_110 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plocal_var_110 = (int8_t *)0x0;
        local_var_100 = local_var_100 & 0xffffffff00000000;
        plocal_var_118 = &system_state_ptr;
        plocal_var_138 = &system_data_buffer_ptr;
        if (plocal_var_130 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
      }
      else {
        plocal_var_58 = (uint64_t *)0x0;
        plocal_var_50 = (uint64_t *)0x0;
        local_var_48 = 0;
        local_var_40 = 3;
        function_62c5f0(&plocal_var_138,&plocal_var_58);
        puVar5 = plocal_var_50;
        puVar3 = plocal_var_58;
        lVar10 = (int64_t)plocal_var_50 - (int64_t)plocal_var_58;
        function_04b100(&plocal_var_d0);
        puVar6 = &system_buffer_ptr;
        if (plocal_var_110 != (int8_t *)0x0) {
          puVar6 = plocal_var_110;
        }
        System_DataHandler(&plocal_var_d0,&processed_var_6404_ptr,puVar6);
        cVar4 = UltraHighFreq_LogManager1(&plocal_var_d0);
        if (cVar4 == '\0') {
          SystemManager_Processor(&plocal_var_d0);
        }
        plVar2 = plStack_a8;
        iVar8 = (int)(lVar10 >> 5);
        lVar10 = (int64_t)iVar8;
        if (0 < iVar8) {
          puVar15 = (uint *)(puVar3 + 2);
          do {
            function_061db0();
            function_061be0();
            plocal_var_158 = &system_data_buffer_ptr;
            local_var_140._0_4_ = 0;
            local_var_140._4_4_ = 0;
            plocal_var_150 = (int8_t *)0x0;
            local_var_148 = 0;
            CoreMemoryPoolProcessor(&plocal_var_158,*puVar15);
            if (*puVar15 != 0) {
// WARNING: Subroutine does not return
              memcpy(plocal_var_150,*(uint64_t *)(puVar15 + -2),*puVar15 + 1);
            }
            if (*(int64_t *)(puVar15 + -2) != 0) {
              local_var_148 = 0;
              if (plocal_var_150 != (int8_t *)0x0) {
                *plocal_var_150 = 0;
              }
              local_var_140._4_4_ = 0;
            }
            iVar9 = local_var_148 + 0xd;
            CoreMemoryPoolProcessor(&plocal_var_158,iVar9);
            puVar5 = (uint64_t *)(plocal_var_150 + local_var_148);
            *puVar5 = 0x782e656e6563732f;
            *(int32_t *)(puVar5 + 1) = 0x6e656373;
            *(int16_t *)((int64_t)puVar5 + 0xc) = 0x65;
            puVar6 = &system_buffer_ptr;
            if (plocal_var_150 != (int8_t *)0x0) {
              puVar6 = plocal_var_150;
            }
            local_var_148 = iVar9;
            lVar14 = strstr(puVar6,&processed_var_6424_ptr);
            if (lVar14 == 0) {
              puVar6 = &system_buffer_ptr;
              if (plocal_var_150 != (int8_t *)0x0) {
                puVar6 = plocal_var_150;
              }
              lVar14 = strstr(puVar6,&processed_var_6456_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (plocal_var_150 != (int8_t *)0x0) {
                puVar6 = plocal_var_150;
              }
              lVar14 = strstr(puVar6,&processed_var_6480_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (plocal_var_150 != (int8_t *)0x0) {
                puVar6 = plocal_var_150;
              }
              lVar14 = strstr(puVar6,&processed_var_6504_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              puVar6 = &system_buffer_ptr;
              if (plocal_var_150 != (int8_t *)0x0) {
                puVar6 = plocal_var_150;
              }
              lVar14 = strstr(puVar6,&processed_var_6536_ptr);
              if (lVar14 != 0) goto LAB_180054ec9;
              cVar4 = RenderingSystem_RenderQueue(&plocal_var_158);
              if (cVar4 == '\0') {
                local_var_148 = 0;
                if (plocal_var_150 != (int8_t *)0x0) {
                  *plocal_var_150 = 0;
                }
                uVar1 = *puVar15;
                uVar11 = (uint64_t)uVar1;
                if (*(int64_t *)(puVar15 + -2) != 0) {
                  CoreMemoryPoolProcessor(&plocal_var_158,uVar11);
                }
                if (uVar1 != 0) {
// WARNING: Subroutine does not return
                  memcpy(plocal_var_150,*(uint64_t *)(puVar15 + -2),uVar11);
                }
                if (plocal_var_150 != (int8_t *)0x0) {
                  plocal_var_150[uVar11] = 0;
                }
                local_var_140._4_4_ = puVar15[3];
                local_var_148 = uVar1;
                CoreMemoryPoolProcessor(&plocal_var_158,0x12);
                puVar7 = (int32_t *)(plocal_var_150 + local_var_148);
                *puVar7 = 0x6563732f;
                puVar7[1] = 0x782e656e;
                puVar7[2] = 0x2e6f6373;
                puVar7[3] = 0x65637378;
                *(int16_t *)(puVar7 + 4) = 0x656e;
                *(int8_t *)((int64_t)puVar7 + 0x12) = 0;
                local_var_148 = 0x12;
                cVar4 = RenderingSystem_RenderQueue(&plocal_var_158);
                if (cVar4 != '\0') goto LAB_180054d28;
                plocal_var_158 = &system_data_buffer_ptr;
                if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
              }
              else {
LAB_180054d28:
                iVar9 = *puVar15 - 1;
                if (-1 < iVar9) {
                  lVar14 = (int64_t)iVar9;
                  do {
                    if (*(char *)(lVar14 + *(int64_t *)(puVar15 + -2)) == '/') goto LAB_180054d57;
                    iVar9 = iVar9 + -1;
                    lVar14 = lVar14 + -1;
                  } while (-1 < lVar14);
                }
                iVar9 = -1;
LAB_180054d57:
                NetworkSystem_ProtocolParser(puVar3 + (int64_t)iVar13 * 4,&plocal_var_98,iVar9 + 1,0xffffffff);
                uVar17 = function_054360(plVar2,&plocal_var_98);
                if (core_system_data_memory != 0) {
                  function_05c1c0(uVar17,&plocal_var_78);
                  plocal_var_f0 = &system_data_buffer_ptr;
                  local_var_d8 = 0;
                  plocal_var_e8 = (int8_t *)0x0;
                  local_var_e0 = 0;
                  CoreMemoryPoolProcessor(&plocal_var_f0,iStack_c0);
                  if (iStack_c0 != 0) {
// WARNING: Subroutine does not return
                    memcpy(plocal_var_e8,lStack_c8,iStack_c0 + 1);
                  }
                  if (lStack_c8 != 0) {
                    local_var_e0 = 0;
                    if (plocal_var_e8 != (int8_t *)0x0) {
                      *plocal_var_e8 = 0;
                    }
                    local_var_d8 = local_var_d8 & 0xffffffff;
                  }
                  puVar16 = &system_buffer_ptr;
                  if (plocal_var_90 != (void *)0x0) {
                    puVar16 = plocal_var_90;
                  }
                  System_DataHandler(&plocal_var_f0,&processed_var_6576_ptr,puVar16);
                  function_62db60(&plocal_var_f0,&plocal_var_78);
                  core_system_data_memory = 0;
                  plocal_var_f0 = &system_data_buffer_ptr;
                  if (plocal_var_e8 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  plocal_var_e8 = (int8_t *)0x0;
                  local_var_d8 = local_var_d8 & 0xffffffff00000000;
                  plocal_var_f0 = &system_state_ptr;
                  plocal_var_78 = &system_data_buffer_ptr;
                  if (lStack_70 != 0) {
// WARNING: Subroutine does not return
                    CoreEngine_MemoryPoolManager();
                  }
                  lStack_70 = 0;
                  local_var_60 = 0;
                  plocal_var_78 = &system_state_ptr;
                }
                plocal_var_98 = &system_data_buffer_ptr;
                if (plocal_var_90 != (void *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                plocal_var_90 = (void *)0x0;
                local_var_80 = 0;
                plocal_var_98 = &system_state_ptr;
                plocal_var_158 = &system_data_buffer_ptr;
                if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
              }
            }
            else {
LAB_180054ec9:
              plocal_var_158 = &system_data_buffer_ptr;
              if (plocal_var_150 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager();
              }
              local_var_140 = (uint64_t)local_var_140._4_4_ << 0x20;
            }
            plocal_var_150 = (int8_t *)0x0;
            plocal_var_158 = &system_state_ptr;
            iVar13 = iVar13 + 1;
            puVar15 = puVar15 + 8;
            lVar10 = lVar10 + -1;
            lVar14 = lStack_a0;
            puVar5 = plocal_var_50;
            iVar9 = iStack_f8;
          } while (lVar10 != 0);
        }
        plocal_var_d0 = &system_data_buffer_ptr;
        if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        lStack_c8 = 0;
        local_var_b8 = 0;
        plocal_var_d0 = &system_state_ptr;
        for (puVar12 = puVar3; puVar12 != puVar5; puVar12 = puVar12 + 4) {
          (**(code **)*puVar12)(puVar12,0);
        }
        if (puVar3 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager(puVar3);
        }
        plocal_var_118 = &system_data_buffer_ptr;
        if (plocal_var_110 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
        plocal_var_110 = (int8_t *)0x0;
        local_var_100 = local_var_100 & 0xffffffff00000000;
        plocal_var_118 = &system_state_ptr;
        plocal_var_138 = &system_data_buffer_ptr;
        if (plocal_var_130 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
          CoreEngine_MemoryPoolManager();
        }
      }
      plocal_var_110 = (int8_t *)0x0;
      plocal_var_118 = &system_state_ptr;
      local_var_120 = local_var_120 & 0xffffffff00000000;
      plocal_var_130 = (int8_t *)0x0;
      plocal_var_138 = &system_state_ptr;
      iStack_f8 = iVar9 + 1;
    } while (iStack_f8 < (int)lVar14);
  }
// WARNING: Subroutine does not return
  SystemSecurityChecker(local_var_30 ^ (uint64_t)stack_array_178);
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_055050(void)
void function_055050(void)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  uint64_t uVar3;
  int64_t lVar4;
  puVar2 = (uint64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x198,8,3);
  puVar1 = puVar2 + 4;
  function_637560(puVar1);
  *puVar1 = &processed_var_6384_ptr;
  *(int16_t *)(puVar2 + 0x1a) = 1;
  *(int32_t *)(puVar2 + 9) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x54) = 0;
  *puVar1 = &rendering_buffer_264_ptr;
  puVar1 = puVar2 + 0x1b;
  function_637560(puVar1);
  *puVar1 = &processed_var_6384_ptr;
  *(int16_t *)(puVar2 + 0x31) = 1;
  *(int32_t *)(puVar2 + 0x20) = 0;
  *(int8_t *)((int64_t)puVar2 + 0x10c) = 0;
  *puVar1 = &rendering_buffer_264_ptr;
  *puVar2 = 0;
  *(int8_t *)(puVar2 + 3) = 0;
  puVar2[2] = 0xffffffff00000000;
  *(int32_t *)(puVar2 + 1) = 0xe;
  system_message_context = puVar2;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x480,8,3);
  core_system_data_memory = function_04bd10(uVar3);
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x10420,8,3);
  core_system_data_memory = function_05c090(uVar3);
  core_system_data_memory = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(core_system_data_memory + 0x19) = 0;
  *(int16_t *)(core_system_data_memory + 0x1d) = 0;
  *(int8_t *)(core_system_data_memory + 0x1f) = 0;
  *(int32_t *)(core_system_data_memory + 0x28) = 3;
  *(int64_t *)core_system_data_memory = core_system_data_memory;
  *(int64_t *)(core_system_data_memory + 8) = core_system_data_memory;
  *(uint64_t *)(core_system_data_memory + 0x10) = 0;
  *(int8_t *)(core_system_data_memory + 0x18) = 0;
  *(uint64_t *)(core_system_data_memory + 0x20) = 0;
  core_system_data_memory = CoreMemoryPoolReallocator(system_memory_pool_ptr,8,4,3);
  *(int32_t *)(core_system_data_memory + 4) = 0;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x80,8,3);
  core_system_data_memory = function_15c450(uVar3);
  lVar4 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xe8,8,3);
  _Mtx_init_in_situ(lVar4,2);
  _Mtx_init_in_situ(lVar4 + 0x50,2);
  *(uint64_t *)(lVar4 + 0xa0) = 0;
  *(uint64_t *)(lVar4 + 0xa8) = 0;
  *(uint64_t *)(lVar4 + 0xb0) = 0;
  *(int32_t *)(lVar4 + 0xb8) = 3;
  *(uint64_t *)(lVar4 + 0xc0) = 0;
  *(uint64_t *)(lVar4 + 200) = 0;
  *(uint64_t *)(lVar4 + 0xd0) = 0;
  *(int32_t *)(lVar4 + 0xd8) = 0x20;
  *(int32_t *)(lVar4 + 0xe0) = 0;
  core_system_data_memory = lVar4;
  uVar3 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0x70,8,3);
// WARNING: Subroutine does not return
  memset(uVar3,0,0x70);
}
// 函数: void function_055e10(int64_t *param_1)
void function_055e10(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x48) {
    function_058c20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void function_055e30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_055e30(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_058210(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}