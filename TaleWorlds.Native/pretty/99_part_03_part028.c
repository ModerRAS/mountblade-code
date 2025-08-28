#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part028.c - 4 个函数
// 函数: void function_1e6b90(int64_t param_1,int64_t *param_2)
void function_1e6b90(int64_t param_1,int64_t *param_2)
{
  char cVar1;
  char *pcVar2;
  int64_t lVar3;
  int8_t uVar4;
  int32_t uVar5;
  int iVar6;
  uint uVar7;
  int64_t *plVar8;
  int64_t *plVar9;
  int8_t *puVar10;
  int64_t *plVar11;
  int64_t lVar12;
  uint *puVar13;
  uint64_t *puVar14;
  int64_t *plVar15;
  int64_t *plVar16;
  char *pcVar17;
  int iVar18;
  char cVar19;
  uint *puVar20;
  int64_t *plVar21;
  uint *puVar22;
  void *puVar23;
  int iVar24;
  int32_t extraout_XMM0_Da;
  int8_t stack_array_1c8 [32];
  uint *plocal_var_1a8;
  uint *plocal_var_1a0;
  uint *plocal_var_198;
  int32_t local_var_190;
  int iStack_188;
  int64_t lStack_180;
  int64_t *plStack_178;
  char cStack_168;
  byte bStack_167;
  uint local_var_164;
  uint *plocal_var_160;
  uint *plocal_var_158;
  int64_t *plStack_150;
  int8_t local_var_148;
  void *plocal_var_140;
  int8_t *plocal_var_138;
  int iStack_130;
  uint64_t local_var_128;
  void *plocal_var_120;
  int8_t *plocal_var_118;
  int iStack_110;
  uint64_t local_var_108;
  int32_t local_var_100;
  int iStack_fc;
  uint stack_array_f8 [2];
  int64_t *plStack_f0;
  void *plocal_var_e8;
  int64_t *plStack_e0;
  uint local_var_d8;
  uint64_t local_var_d0;
  int32_t local_var_c8;
  int64_t lStack_c0;
  uint *plocal_var_b8;
  int8_t local_var_b0;
  uint local_var_a8;
  int64_t *plStack_a0;
  uint *plocal_var_98;
  int8_t local_var_90;
  uint8_t local_var_8f;
  uint stack_array_88 [2];
  int64_t lStack_80;
  int32_t local_var_78;
  int32_t local_var_74;
  int8_t local_var_70;
  int32_t local_var_6c;
  uint64_t local_var_68;
  uint local_var_60;
  int32_t local_var_5c;
  int32_t local_var_58;
  int32_t local_var_54;
  int16_t local_var_50;
  int8_t local_var_4e;
  uint64_t local_var_48;
  local_var_68 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1c8;
  plVar21 = (int64_t *)0x0;
  local_var_100 = 0;
  bStack_167 = *(byte *)((int64_t)param_2 + 0x14);
  local_var_c8 = (int32_t)param_2[2];
  plocal_var_b8 = (uint *)param_2[1];
  iVar24 = *(int *)((int64_t)param_2 + 0xa4);
  plocal_var_e8 = &system_data_buffer_ptr;
  local_var_d0 = 0;
  plStack_e0 = (int64_t *)0x0;
  local_var_d8 = 0;
  lVar12 = param_2[4];
  plVar15 = plVar21;
  iStack_fc = iVar24;
  lStack_c0 = param_1;
  if (lVar12 != 0) {
    uVar7 = *(uint *)(lVar12 + 0x2c0);
    plVar15 = (int64_t *)(uint64_t)uVar7;
    plVar8 = plVar21;
    if (*(int64_t *)(lVar12 + 0x2b8) == 0) {
LAB_1801e6c80:
      if (uVar7 != 0) {
// WARNING: Subroutine does not return
        memcpy(plVar8,*(uint64_t *)(lVar12 + 0x2b8),plVar15);
      }
    }
    else if (uVar7 != 0) {
      iVar18 = uVar7 + 1;
      if ((int)(uVar7 + 1) < 0x10) {
        iVar18 = 0x10;
      }
      plVar8 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar18,0x13);
      *(int8_t *)plVar8 = 0;
      plStack_e0 = plVar8;
      uVar5 = CoreEngineSystemCleanup(plVar8);
      local_var_d0 = CONCAT44(local_var_d0._4_4_,uVar5);
      goto LAB_1801e6c80;
    }
    if (plVar8 != (int64_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)plVar8) = 0;
    }
    local_var_d0 = CONCAT44(*(int32_t *)(lVar12 + 0x2cc),(int32_t)local_var_d0);
    local_var_d8 = uVar7;
  }
  lStack_80 = -1;
  local_var_78 = 0xffffffff;
  local_var_74 = CONCAT22(local_var_74._2_2_,0xffff);
  uVar7 = 0xffffffff;
  local_var_a8 = 0xffffffff;
  plStack_f0 = (int64_t *)0x0;
  plStack_a0 = (int64_t *)0x0;
  iVar18 = (int)plVar15;
  cVar19 = 0 < iVar18;
  pcVar2 = *(char **)(*param_2 + 0x18);
  cStack_168 = cVar19;
  if (iVar18 < 1) {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar1 = *pcVar17;
    local_var_60 = 0x1505;
    while (cVar1 != '\0') {
      pcVar17 = pcVar17 + 1;
      local_var_60 = local_var_60 * 0x21 + (int)cVar1;
      cVar1 = *pcVar17;
    }
    lVar12 = param_2[1];
    local_var_5c = (int32_t)((uint64_t)lVar12 >> 0x20);
    local_var_58 = (int32_t)lVar12;
    local_var_54 = (int32_t)param_2[2];
    local_var_50 = *(int16_t *)((int64_t)param_2 + 0x14);
    local_var_4e = *(int8_t *)((int64_t)param_2 + 0xa4);
    puVar20 = (uint *)function_1c7390(lVar12,&plocal_var_98,&local_var_60);
    uVar7 = *puVar20;
    plVar21 = *(int64_t **)(puVar20 + 2);
    puVar20[2] = 0;
    puVar20[3] = 0;
    plStack_150 = (int64_t *)0x0;
    uVar5 = extraout_XMM0_Da;
    plStack_f0 = plVar21;
    local_var_a8 = uVar7;
    plStack_a0 = plVar21;
    if ((int64_t *)CONCAT71(local_var_8f,local_var_90) != (int64_t *)0x0) {
      uVar5 = (**(code **)(*(int64_t *)CONCAT71(local_var_8f,local_var_90) + 0x38))();
    }
  }
  else {
    pcVar17 = "";
    if (pcVar2 != (char *)0x0) {
      pcVar17 = pcVar2;
    }
    cVar19 = *pcVar17;
    stack_array_88[0] = 0x1505;
    while (cVar19 != '\0') {
      pcVar17 = pcVar17 + 1;
      stack_array_88[0] = stack_array_88[0] * 0x21 + (int)cVar19;
      cVar19 = *pcVar17;
    }
    lStack_80 = param_2[1];
    local_var_78 = (int32_t)param_2[2];
    local_var_74 = *(int32_t *)((int64_t)param_2 + 0x14);
    local_var_70 = *(int8_t *)((int64_t)param_2 + 0xa4);
    local_var_6c = (int32_t)param_2[0x14];
    puVar20 = (uint *)(param_2[4] + 0x360);
    plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
    plocal_var_160 = puVar20;
    AcquireSRWLockShared(puVar20);
    function_1e1020(param_2[4] + 0x328,&plStack_150,stack_array_88);
    if (plStack_150 != (int64_t *)(param_2[4] + 0x328)) {
      uVar7 = *(uint *)(plStack_150 + 8);
      local_var_a8 = uVar7;
    }
    uVar5 = ReleaseSRWLockShared(puVar20);
    cVar19 = cStack_168;
  }
  stack_array_f8[0] = uVar7;
  if (uVar7 == 0xffffffff) {
LAB_1801e7356:
    if ((*(int *)(system_module_state + 0x620) == 0) && (*(int *)(system_module_state + 0x690) != 0)) {
      function_1c7500(uVar5,param_2);
    }
    if (*(char *)(system_main_module_state + 0x60) == '\0') {
      lStack_180 = *param_2;
      puVar23 = &system_buffer_ptr;
      if ((void *)param_2[0x11] != (void *)0x0) {
        puVar23 = (void *)param_2[0x11];
      }
      plStack_178 = param_2 + 5;
      local_var_190 = 0xffffffff;
      plocal_var_198 = &local_var_164;
      plocal_var_1a0 = plocal_var_b8;
      plocal_var_1a8 = (uint *)CONCAT44(plocal_var_1a8._4_4_,local_var_c8);
      iStack_188 = iVar24;
      lVar12 = function_0a6420(system_message_buffer,param_2 + 0xc,puVar23,bStack_167);
      if (lVar12 != 0) {
        plocal_var_1a0 = stack_array_88;
        plocal_var_1a8 = &local_var_60;
        function_1e7b70(param_1,param_2,lVar12,local_var_164);
      }
    }
    else {
      (**(code **)(*(int64_t *)*system_global_data_ptr + 0x40))((int64_t *)*system_global_data_ptr,param_2);
    }
    goto LAB_1801e760f;
  }
  puVar20 = *(uint **)(param_1 + 0x10);
  if (cVar19 != '\0') {
    plVar21 = (int64_t *)param_2[4];
  }
  plVar8 = plVar21 + (int64_t)iVar24 * 0xe + 2;
  puVar22 = (uint *)(plVar21 + (int64_t)iVar24 * 0xe + 0xe);
  plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
  plocal_var_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar11 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
  plVar16 = plVar8;
  if (plVar11 != (int64_t *)0x0) {
    do {
      if ((int)plVar11[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar11;
      }
      else {
        plVar9 = (int64_t *)plVar11[1];
        plVar16 = plVar11;
      }
      plVar11 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((((plVar16 != plVar8) && ((int)plVar16[4] <= (int)uVar7)) &&
        (lVar12 = plVar16[5], lVar12 != 0)) && (*(char *)(lVar12 + 0x81) != '\0')) {
      puVar13 = *(uint **)(lVar12 + 0x10);
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      ReleaseSRWLockShared(puVar22);
      goto LAB_1801e760f;
    }
  }
  uVar5 = ReleaseSRWLockShared();
  plocal_var_160 = (uint *)0x0;
  if ((cStack_168 == '\0') && (plStack_f0 == (int64_t *)system_global_data_ptr[10])) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
  }
  plocal_var_1a8 = (uint *)CONCAT71(plocal_var_1a8._1_7_,uVar4);
  function_1c6b50(uVar5,&plocal_var_140,iStack_fc,uVar7);
  puVar13 = (uint *)0x0;
  if (cStack_168 != '\0') {
    puVar10 = (int8_t *)0x0;
    plocal_var_120 = &system_data_buffer_ptr;
    plStack_150 = (int64_t *)0x0;
    plocal_var_118 = (int8_t *)0x0;
    iStack_110 = 0;
    local_var_108 = 0;
    local_var_100 = 1;
    if (plStack_e0 == (int64_t *)0x0) {
LAB_1801e6fd8:
      if (iVar18 != 0) {
// WARNING: Subroutine does not return
        memcpy(puVar10,plStack_e0,plVar15);
      }
    }
    else if (iVar18 != 0) {
      iVar6 = iVar18 + 1;
      if (iVar6 < 0x10) {
        iVar6 = 0x10;
      }
      puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar6,0x13);
      *puVar10 = 0;
      plocal_var_118 = puVar10;
      plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
      local_var_108 = CONCAT44(local_var_108._4_4_,(int)plStack_150);
      goto LAB_1801e6fd8;
    }
    if (puVar10 != (int8_t *)0x0) {
      *(int8_t *)((int64_t)plVar15 + (int64_t)puVar10) = 0;
    }
    local_var_108 = CONCAT44(local_var_d0._4_4_,(int32_t)local_var_108);
    iStack_110 = iVar18;
    if (0 < iStack_130) {
      local_var_164 = iVar18 + iStack_130;
      if (local_var_164 != 0) {
        uVar7 = local_var_164 + 1;
        if (puVar10 == (int8_t *)0x0) {
          if ((int)uVar7 < 0x10) {
            uVar7 = 0x10;
          }
          puVar10 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar7,0x13);
          *puVar10 = 0;
        }
        else {
          if (uVar7 <= (uint)plStack_150) goto LAB_1801e707e;
          plocal_var_1a8 = (uint *)CONCAT71(plocal_var_1a8._1_7_,0x13);
          puVar10 = (int8_t *)DataValidator(system_memory_pool_ptr,puVar10,uVar7,0x10);
        }
        plocal_var_118 = puVar10;
        plStack_150 = (int64_t *)CoreEngineSystemCleanup(puVar10);
        local_var_108 = CONCAT44(local_var_108._4_4_,(int)plStack_150);
      }
LAB_1801e707e:
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)plVar15 + (int64_t)puVar10),plocal_var_138,
             (int64_t)(iStack_130 + 1));
    }
    if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    local_var_128 = CONCAT44(local_var_d0._4_4_,(uint)plStack_150);
    iStack_110 = 0;
    local_var_100 = 0;
    plocal_var_118 = (int8_t *)0x0;
    local_var_108 = 0;
    plocal_var_120 = &system_state_ptr;
    puVar13 = plocal_var_160;
    plocal_var_138 = puVar10;
    iStack_130 = iVar18;
  }
  plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
  plocal_var_160 = puVar22;
  AcquireSRWLockShared(puVar22);
  plVar15 = plVar21 + (int64_t)iVar24 * 0xe + 8;
  plVar11 = plVar15;
  plVar16 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10];
  if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 10] == (int64_t *)0x0) {
LAB_1801e7148:
    plVar11 = plVar15;
  }
  else {
    do {
      if ((int)plVar16[4] < (int)uVar7) {
        plVar9 = (int64_t *)*plVar16;
      }
      else {
        plVar9 = (int64_t *)plVar16[1];
        plVar11 = plVar16;
      }
      plVar16 = plVar9;
    } while (plVar9 != (int64_t *)0x0);
    if ((plVar11 == plVar15) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e7148;
  }
  if (plVar11 != plVar15) {
    puVar13 = (uint *)plVar11[5];
  }
  uVar5 = ReleaseSRWLockShared(puVar22);
  if (puVar13 == (uint *)0x0) {
    lVar12 = function_1c6d60(uVar5,&plocal_var_140,&local_var_164);
    plVar15 = plStack_f0;
    if (lVar12 == 0) {
      local_var_148 = 0;
      if (cStack_168 == '\0') {
        plVar21 = plStack_f0 + 0x6c;
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        local_var_148 = 1;
        puVar20 = (uint *)plVar15[99];
        function_1e6940(puVar20,&plocal_var_160,&local_var_60);
        puVar22 = plocal_var_160;
        if (plocal_var_160 != puVar20) {
          *(int64_t *)(puVar20 + 8) = *(int64_t *)(puVar20 + 8) + -1;
          SystemFunction_00018066bd70(plocal_var_160);
          RenderingSystem_BufferHandler(puVar22,puVar20);
        }
      }
      else {
        plVar21 = (int64_t *)(param_2[4] + 0x360);
        plStack_150 = plVar21;
        AcquireSRWLockExclusive(plVar21);
        local_var_148 = 1;
        lVar12 = param_2[4];
        puVar22 = (uint *)(lVar12 + 0x328);
        function_1e1020(puVar22,&plocal_var_160,stack_array_88);
        puVar20 = plocal_var_160;
        if (plocal_var_160 != puVar22) {
          plVar15 = (int64_t *)(lVar12 + 0x348);
          *plVar15 = *plVar15 + -1;
          SystemFunction_00018066bd70(plocal_var_160);
          RenderingSystem_BufferHandler(puVar20,puVar22);
          if (puVar20 != (uint *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner(puVar20);
          }
        }
      }
      uVar5 = ReleaseSRWLockExclusive(plVar21);
      plocal_var_140 = &system_data_buffer_ptr;
      if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_138 = (int8_t *)0x0;
      local_var_128 = local_var_128 & 0xffffffff00000000;
      plocal_var_140 = &system_state_ptr;
      param_1 = lStack_c0;
      iVar24 = iStack_fc;
      goto LAB_1801e7356;
    }
    *puVar20 = uVar7;
    puVar13 = (uint *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,3);
    puVar13[5] = (uint)bStack_167;
    *(int64_t *)puVar13 = lVar12;
    puVar13[4] = local_var_164;
    puVar13[6] = uVar7;
    local_var_b0 = 0;
    plocal_var_b8 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    local_var_b0 = 1;
    plocal_var_160 = (uint *)CONCAT44(plocal_var_160._4_4_,uVar7);
    plocal_var_158 = puVar13;
    function_1e8ce0(plVar21 + (int64_t)iVar24 * 0xe + 8,&plocal_var_98,&plocal_var_160);
    uVar5 = ReleaseSRWLockExclusive(puVar22);
  }
  lVar3 = lStack_c0;
  puVar20[4] = puVar13[4];
  lVar12 = *(int64_t *)puVar13;
  *(int64_t *)(puVar20 + 2) = lVar12;
  *puVar20 = uVar7;
  if (lVar12 == 0) {
    lVar12 = function_1c70b0(uVar5,puVar13,param_2[4],plStack_f0);
    local_var_90 = 1;
    plocal_var_98 = puVar22;
    AcquireSRWLockShared(puVar22);
    plVar15 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    plVar11 = plVar8;
    if ((int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4] == (int64_t *)0x0) {
LAB_1801e73b6:
      plVar11 = plVar8;
    }
    else {
      do {
        if ((int)plVar15[4] < (int)uVar7) {
          plVar16 = (int64_t *)*plVar15;
        }
        else {
          plVar16 = (int64_t *)plVar15[1];
          plVar11 = plVar15;
        }
        plVar15 = plVar16;
      } while (plVar16 != (int64_t *)0x0);
      if ((plVar11 == plVar8) || ((int)uVar7 < (int)plVar11[4])) goto LAB_1801e73b6;
    }
    if (plVar11 != plVar8) {
      puVar13 = *(uint **)(plVar11[5] + 0x10);
      *(uint64_t *)(puVar20 + 6) = *(uint64_t *)(puVar13 + 6);
      *(uint64_t *)(puVar20 + 2) = *(uint64_t *)(puVar13 + 2);
      *puVar20 = *puVar13;
      puVar20[1] = puVar13[1];
      puVar20[4] = puVar13[4];
      *(uint64_t *)(puVar20 + 10) = *(uint64_t *)(puVar13 + 10);
      puVar20[8] = puVar13[8];
    }
    ReleaseSRWLockShared(puVar22);
    lVar3 = lStack_c0;
    if (plVar11 == plVar8) {
      function_1de690(system_global_data_ptr,lStack_c0,*(int32_t *)((int64_t)param_2 + 0xa4),lVar12);
      plocal_var_158 = (uint *)((uint64_t)plocal_var_158 & 0xffffffffffffff00);
      plocal_var_160 = puVar22;
      AcquireSRWLockExclusive(puVar22);
      plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
      plVar15 = plVar8;
      plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
      while (plVar21 != (int64_t *)0x0) {
        if ((int)plVar21[4] < (int)uVar7) {
          plVar21 = (int64_t *)*plVar21;
        }
        else {
          plVar15 = plVar21;
          plVar21 = (int64_t *)plVar21[1];
        }
      }
      if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
        plocal_var_1a8 = stack_array_f8;
        puVar14 = (uint64_t *)function_179aa0(plVar8,&plocal_var_b8);
        plVar15 = (int64_t *)*puVar14;
      }
      plVar15[5] = lVar3;
      ReleaseSRWLockExclusive(puVar22);
    }
    if (lVar12 != 0) {
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar12);
    }
  }
  else {
    function_1de690(system_global_data_ptr,lStack_c0,*(int32_t *)((int64_t)param_2 + 0xa4));
    plocal_var_158 = (uint *)((uint64_t)plocal_var_158 & 0xffffffffffffff00);
    plocal_var_160 = puVar22;
    AcquireSRWLockExclusive(puVar22);
    plocal_var_158 = (uint *)CONCAT71(plocal_var_158._1_7_,1);
    plVar15 = plVar8;
    plVar21 = (int64_t *)plVar21[(int64_t)iVar24 * 0xe + 4];
    while (plVar21 != (int64_t *)0x0) {
      if ((int)plVar21[4] < (int)uVar7) {
        plVar21 = (int64_t *)*plVar21;
      }
      else {
        plVar15 = plVar21;
        plVar21 = (int64_t *)plVar21[1];
      }
    }
    if ((plVar15 == plVar8) || ((int)uVar7 < (int)plVar15[4])) {
      plocal_var_1a8 = stack_array_f8;
      puVar14 = (uint64_t *)function_179aa0(plVar8,&plocal_var_b8);
      plVar15 = (int64_t *)*puVar14;
    }
    plVar15[5] = lVar3;
    ReleaseSRWLockExclusive(puVar22);
  }
  plocal_var_140 = &system_data_buffer_ptr;
  if (plocal_var_138 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  plocal_var_138 = (int8_t *)0x0;
  local_var_128 = local_var_128 & 0xffffffff00000000;
  plocal_var_140 = &system_state_ptr;
LAB_1801e760f:
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  plocal_var_e8 = &system_data_buffer_ptr;
  if (plStack_e0 == (int64_t *)0x0) {
    plStack_e0 = (int64_t *)0x0;
    local_var_d0 = local_var_d0 & 0xffffffff00000000;
    plocal_var_e8 = &system_state_ptr;
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1c8);
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(plStack_e0);
}
int64_t * function_1e7680(int64_t *param_1)
{
  int8_t uVar1;
  uVar1 = _widen___basic_ios_DU__char_traits_D_std___std__QEBADD_Z
                    ((int64_t)*(int *)(*param_1 + 4) + (int64_t)param_1,10);
  _put___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_D_Z(param_1,uVar1);
  _flush___basic_ostream_DU__char_traits_D_std___std__QEAAAEAV12_XZ(param_1);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
int64_t * function_1e76c0(int64_t param_1,int64_t *param_2,uint64_t param_3)
{
  byte bVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t lVar4;
  byte *pbVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char acStackX_8 [8];
  lVar3 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x40,*(int8_t *)(param_1 + 0x28));
  SystemCore_EncryptionEngine0(lVar3 + 0x20,param_3);
  lVar4 = SystemCore_SecurityValidator(param_1,acStackX_8,lVar3 + 0x20);
  if (acStackX_8[0] == '\0') {
    function_05d1f0();
    *param_2 = lVar4;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
  if (lVar4 != param_1) {
    if (*(int *)(lVar4 + 0x30) == 0) {
LAB_1801e7757:
      uVar7 = 1;
      goto LAB_1801e7762;
    }
    if (*(int *)(lVar3 + 0x30) != 0) {
      pbVar5 = *(byte **)(lVar4 + 0x28);
      lVar6 = *(int64_t *)(lVar3 + 0x28) - (int64_t)pbVar5;
      do {
        bVar1 = *pbVar5;
        uVar2 = (uint)pbVar5[lVar6];
        if (bVar1 != uVar2) break;
        pbVar5 = pbVar5 + 1;
      } while (uVar2 != 0);
      if ((int)(bVar1 - uVar2) < 1) goto LAB_1801e7757;
    }
  }
  uVar7 = 0;
LAB_1801e7762:
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar3,lVar4,param_1,uVar7);
}
// 函数: void function_1e77b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void function_1e77b0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  function_1e85e0(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_1e77d0(uint64_t *param_1,uint64_t *param_2)
{
  int32_t uVar1;
  int32_t uVar2;
  int32_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uVar4 = *param_2;
  uVar1 = *(int32_t *)(param_2 + 3);
  uVar5 = param_2[2];
  uVar2 = *(int32_t *)((int64_t)param_2 + 0x24);
  uVar3 = *(int32_t *)(param_2 + 4);
  *(int32_t *)(param_2 + 3) = 0;
  param_2[2] = 0;
  param_2[4] = 0;
  param_1[2] = function_1eb3d0;
  param_1[3] = function_1eb320;
  puVar6 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x28,8,system_allocation_flags,0xfffffffffffffffe);
  *puVar6 = uVar4;
  puVar6[1] = &system_state_ptr;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 0;
  puVar6[1] = &system_data_buffer_ptr;
  puVar6[4] = 0;
  puVar6[2] = 0;
  *(int32_t *)(puVar6 + 3) = 0;
  *(int32_t *)(puVar6 + 3) = uVar1;
  puVar6[2] = uVar5;
  *(int32_t *)((int64_t)puVar6 + 0x24) = uVar2;
  *(int32_t *)(puVar6 + 4) = uVar3;
  *param_1 = puVar6;
  param_2[1] = &system_data_buffer_ptr;
  if (param_2[2] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_2[2] = 0;
  *(int32_t *)(param_2 + 4) = 0;
  param_2[1] = &system_state_ptr;
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t * function_1e7940(uint64_t *param_1,uint64_t *param_2,uint64_t *param_3)
{
  uint64_t uVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  bool bVar6;
  uVar1 = *param_3;
  bVar6 = true;
  puVar3 = (uint64_t *)param_1[2];
  puVar2 = param_1;
  while (puVar3 != (uint64_t *)0x0) {
    bVar6 = uVar1 < (uint64_t)puVar3[4];
    puVar2 = puVar3;
    if (bVar6) {
      puVar3 = (uint64_t *)puVar3[1];
    }
    else {
      puVar3 = (uint64_t *)*puVar3;
    }
  }
  puVar3 = puVar2;
  if (bVar6) {
    if (puVar2 == (uint64_t *)param_1[1]) goto LAB_1801e79ad;
    puVar3 = (uint64_t *)SystemFunction_00018066b9a0(puVar2);
  }
  if (uVar1 <= (uint64_t)puVar3[4]) {
    *param_2 = puVar3;
    *(int8_t *)(param_2 + 1) = 0;
    return param_2;
  }
LAB_1801e79ad:
  lVar4 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x28,*(int8_t *)(param_1 + 5));
  *(uint64_t *)(lVar4 + 0x20) = *param_3;
  if ((puVar2 == param_1) || (uVar1 < (uint64_t)puVar2[4])) {
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
// WARNING: Subroutine does not return
  SystemNetworkHandler(lVar4,puVar2,param_1,uVar5);
}
// 函数: void function_1e7a20(int64_t *param_1)
void function_1e7a20(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x68) {
    function_09e960(lVar2 + 8);
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_1e7a90(uint64_t *param_1,uint64_t *param_2)
void function_1e7a90(uint64_t *param_1,uint64_t *param_2)
{
  uint64_t *puVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t *puVar4;
  puVar1 = (uint64_t *)param_1[1];
  if (puVar1 < (uint64_t *)param_1[2]) {
    param_1[1] = (uint64_t)(puVar1 + 1);
    *puVar1 = *param_2;
    return;
  }
  puVar2 = (uint64_t *)*param_1;
  lVar3 = (int64_t)puVar1 - (int64_t)puVar2 >> 3;
  if (lVar3 == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = lVar3 * 2;
    if (lVar3 == 0) {
      puVar4 = (uint64_t *)0x0;
      goto LAB_1801e7b16;
    }
  }
  puVar4 = (uint64_t *)((int64_t)param_1 + param_1[0x43] + 0x18);
  param_1[0x43] = param_1[0x43] + lVar3 * 8;
LAB_1801e7b16:
  if (puVar2 != puVar1) {
// WARNING: Subroutine does not return
    memmove(puVar4,puVar2,(int64_t)puVar1 - (int64_t)puVar2);
  }
  *puVar4 = *param_2;
  param_1[1] = (uint64_t)(puVar4 + 1);
  *param_1 = (uint64_t)puVar4;
  param_1[2] = (uint64_t)(puVar4 + lVar3);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address