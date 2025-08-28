/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_06_part031.c - 3 个函数
// 函数: void function_3c2600(int64_t param_1,uint64_t param_2,uint64_t param_3)
void function_3c2600(int64_t param_1,uint64_t param_2,uint64_t param_3)
{
  byte *pbVar1;
  uint uVar2;
  int64_t lVar3;
  uint *puVar4;
  uint *puVar5;
  byte *pbVar6;
  int64_t lVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  int64_t lVar10;
  uint64_t *puVar11;
  void *puVar12;
  int iVar13;
  int64_t lVar14;
  uint *puVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  uint *puVar21;
  int8_t stack_array_398 [32];
  char acStack_378 [8];
  uint64_t local_var_370;
  int32_t *plocal_var_368;
  uint64_t local_var_360;
  int16_t local_var_358;
  int8_t local_var_356;
  int iStack_350;
  int iStack_34c;
  int iStack_348;
  int64_t lStack_340;
  uint *plocal_var_338;
  uint64_t local_var_330;
  int16_t local_var_328;
  int8_t local_var_326;
  int iStack_320;
  void *plocal_var_318;
  int64_t lStack_310;
  int iStack_308;
  uint64_t local_var_300;
  uint *plocal_var_2f8;
  uint64_t local_var_2f0;
  uint64_t local_var_2e8;
  int32_t *plocal_var_2e0;
  int64_t lStack_2d8;
  uint *plocal_var_2d0;
  uint *plocal_var_2c8;
  uint *plocal_var_2c0;
  int32_t local_var_2b8;
  uint local_var_2b0;
  uint *plocal_var_2a8;
  void *plocal_var_2a0;
  byte *pbStack_298;
  int iStack_290;
  uint64_t local_var_288;
  uint *plocal_var_280;
  uint *plocal_var_278;
  uint *plocal_var_270;
  int32_t local_var_268;
  uint64_t local_var_260;
  int64_t lStack_258;
  int8_t local_var_250;
  void *plocal_var_248;
  void *plocal_var_240;
  uint local_var_238;
  int32_t local_var_230;
  uint64_t local_var_228;
  int iStack_220;
  int32_t local_var_21c;
  uint64_t local_var_218;
  uint64_t local_var_210;
  uint64_t local_var_208;
  void *plocal_var_1f8;
  int8_t *plocal_var_1f0;
  int32_t local_var_1e8;
  int8_t stack_array_1e0 [256];
  int64_t lStack_e0;
  int64_t lStack_d8;
  uint64_t local_var_d0;
  uint64_t local_var_c8;
  uint64_t local_var_c0;
  int8_t local_var_b8;
  int32_t *aplocal_var_b0 [2];
  code *pcStack_a0;
  code *pcStack_98;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  code *pcStack_80;
  code *pcStack_78;
  uint64_t local_var_48;
  local_var_208 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_398;
  puVar19 = (uint *)0x0;
  plocal_var_2a0 = &system_data_buffer_ptr;
  local_var_288 = 0;
  pbStack_298 = (byte *)0x0;
  iStack_290 = 0;
  lStack_2d8 = param_1;
  function_31ed90(param_3,&plocal_var_2a0);
  SystemCore_EncryptionEngine0(&plocal_var_248,param_2);
  iVar13 = local_var_238 + 0xd;
  CoreMemoryPoolProcessor(&plocal_var_248,iVar13);
  puVar11 = (uint64_t *)(plocal_var_240 + local_var_238);
  *puVar11 = 0x7461645f7472702f;
  *(int32_t *)(puVar11 + 1) = 0x69622e61;
  *(int16_t *)((int64_t)puVar11 + 0xc) = 0x6e;
  puVar12 = &system_buffer_ptr;
  if (plocal_var_240 != (void *)0x0) {
    puVar12 = plocal_var_240;
  }
  local_var_260 = 0;
  local_var_250 = 0;
  local_var_238 = iVar13;
  SystemCore_Validator(&local_var_260,puVar12,&processed_var_4880_ptr);
  lVar7 = lStack_258;
  if (lStack_258 != 0) {
    iStack_320 = -1;
    plocal_var_280 = (uint *)0x0;
    plocal_var_278 = (uint *)0x0;
    plocal_var_270 = (uint *)0x0;
    local_var_268 = 3;
    plocal_var_2d0 = (uint *)0x0;
    plocal_var_2c8 = (uint *)0x0;
    plocal_var_2c0 = (uint *)0x0;
    local_var_2b8 = 3;
    iStack_350 = 0;
    *(int32_t *)(*(int64_t *)(param_1 + 8) + 0x60) = 0;
    lStack_340 = 0;
    plocal_var_338 = (uint *)0x0;
    local_var_330 = 0;
    local_var_328 = 0;
    local_var_326 = 0x21;
    fread(&iStack_350,4,1,lStack_258);
    System_BufferManager(&lStack_340,(int64_t)iStack_350);
    lVar14 = lStack_340;
    fread(lStack_340,(int64_t)iStack_350,1,lVar7);
    puVar17 = plocal_var_338 + 1;
    puVar4 = plocal_var_2c8;
    puVar5 = plocal_var_280;
    puVar21 = plocal_var_2d0;
    if (*plocal_var_338 == 0x33545250) {
      local_var_2b0 = *puVar17;
      puVar15 = plocal_var_338 + 2;
      iStack_348 = 0;
      puVar17 = plocal_var_2c8;
      puVar18 = plocal_var_280;
      puVar20 = plocal_var_2d0;
      iVar13 = iStack_320;
      plocal_var_338 = puVar15;
      if (0 < (int)local_var_2b0) {
        do {
          puVar5 = plocal_var_278;
          plocal_var_318 = &system_data_buffer_ptr;
          local_var_300 = 0;
          lStack_310 = 0;
          iStack_308 = 0;
          uVar2 = *puVar15;
          puVar16 = puVar15 + 1;
          local_var_2f0 = puVar16;
          plocal_var_2a8 = plocal_var_278;
          if (uVar2 != 0) {
            plocal_var_338 = puVar16;
            function_628f30(&plocal_var_318,puVar16,uVar2);
            puVar16 = (uint *)((int64_t)local_var_2f0 + (uint64_t)uVar2);
          }
          puVar4 = (uint *)0x0;
          plocal_var_338 = puVar16;
          if (puVar17 < puVar19) {
            puVar4 = puVar17 + 8;
            plocal_var_2c8 = puVar4;
            SystemCore_NetworkHandler0(puVar17);
            puVar21 = puVar20;
          }
          else {
            lVar7 = (int64_t)puVar17 - (int64_t)puVar20 >> 5;
            if (lVar7 == 0) {
              lVar7 = 1;
LAB_1803c29ae:
              puVar4 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar7 << 5,3);
            }
            else {
              lVar7 = lVar7 * 2;
              if (lVar7 != 0) goto LAB_1803c29ae;
            }
            plocal_var_2f8 = puVar4;
            lVar14 = SystemCore_Initializer(puVar20,puVar17,puVar4);
            SystemCore_NetworkHandler0(lVar14);
            puVar4 = (uint *)(lVar14 + 0x20);
            puVar21 = plocal_var_2f8;
            for (puVar19 = puVar20; plocal_var_2f8 = puVar21, local_var_2f0 = puVar4, puVar19 != puVar17;
                puVar19 = puVar19 + 8) {
              (*(code *)**(uint64_t **)puVar19)(puVar19);
              puVar4 = local_var_2f0;
              puVar21 = plocal_var_2f8;
            }
            if (puVar20 != (uint *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(puVar20);
            }
            puVar19 = puVar21 + lVar7 * 8;
            plocal_var_2d0 = puVar21;
            plocal_var_2c8 = puVar4;
            plocal_var_2c0 = puVar19;
          }
          plocal_var_2f8 = (uint *)CONCAT44(plocal_var_2f8._4_4_,*puVar16);
          puVar15 = puVar16 + 1;
          plocal_var_338 = puVar15;
          if (puVar5 < plocal_var_270) {
            plocal_var_2a8 = puVar5 + 1;
            *puVar5 = *puVar16;
            puVar5 = puVar18;
          }
          else {
            plocal_var_2e0 = (int32_t *)((int64_t)puVar5 - (int64_t)puVar18);
            if ((int64_t)plocal_var_2e0 >> 2 == 0) {
              local_var_2f0 = (uint *)0x1;
LAB_1803c2aa0:
              puVar5 = (uint *)CoreMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)local_var_2f0 * 4,3);
            }
            else {
              local_var_2f0 = (uint *)(((int64_t)plocal_var_2e0 >> 2) * 2);
              if (local_var_2f0 != (uint *)0x0) goto LAB_1803c2aa0;
              puVar5 = (uint *)0x0;
            }
            if (puVar18 != plocal_var_2a8) {
// WARNING: Subroutine does not return
              memmove(puVar5,puVar18,plocal_var_2e0);
            }
            *puVar5 = (uint)plocal_var_2f8;
            plocal_var_2a8 = puVar5 + 1;
            if (puVar18 != (uint *)0x0) {
// WARNING: Subroutine does not return
              CoreMemoryPoolInitializer(puVar18);
            }
            plocal_var_270 = puVar5 + (int64_t)local_var_2f0;
            plocal_var_280 = puVar5;
          }
          iVar13 = iStack_308;
          plocal_var_278 = plocal_var_2a8;
          if (iStack_290 == iStack_308) {
            if (iStack_290 != 0) {
              pbVar6 = pbStack_298;
              do {
                pbVar1 = pbVar6 + (lStack_310 - (int64_t)pbStack_298);
                iVar13 = (uint)*pbVar6 - (uint)*pbVar1;
                if (iVar13 != 0) break;
                pbVar6 = pbVar6 + 1;
              } while (*pbVar1 != 0);
            }
LAB_1803c2b4d:
            if (iVar13 == 0) {
              plocal_var_318 = &system_data_buffer_ptr;
              iVar13 = iStack_348;
              if (lStack_310 != 0) {
// WARNING: Subroutine does not return
                CoreMemoryPoolInitializer();
              }
              break;
            }
          }
          else if (iStack_290 == 0) goto LAB_1803c2b4d;
          plocal_var_318 = &system_data_buffer_ptr;
          if (lStack_310 != 0) {
// WARNING: Subroutine does not return
            CoreMemoryPoolInitializer();
          }
          iStack_348 = iStack_348 + 1;
          puVar17 = puVar4;
          puVar18 = puVar5;
          puVar20 = puVar21;
          iVar13 = iStack_320;
        } while (iStack_348 < (int)local_var_2b0);
        local_var_300 = local_var_300 & 0xffffffff00000000;
        lStack_310 = 0;
        plocal_var_318 = &system_state_ptr;
        lVar14 = lStack_340;
        lVar7 = lStack_258;
      }
      if (((char)local_var_328 == '\0') && (lVar14 != 0)) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar14);
      }
      puVar19 = puVar21;
      if (iVar13 != -1) {
        lVar14 = (int64_t)(int)(puVar5[iVar13] + iStack_350 + 4);
        _fseeki64(lVar7,lVar14,0);
        iStack_34c = 0;
        fread(&iStack_34c,4,1,lVar7);
        fclose(lVar7);
        lStack_258 = 0;
        LOCK();
        SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
        UNLOCK();
        local_var_370 = 0;
        plocal_var_368 = (int32_t *)0x0;
        local_var_360 = 0;
        local_var_358 = 0;
        local_var_356 = 0x21;
        System_BufferManager(&local_var_370,(int64_t)iStack_34c);
        acStack_378[0] = '\0';
        acStack_378[1] = 0;
        local_var_228 = &local_var_370;
        iStack_220 = iStack_34c;
        local_var_218 = acStack_378;
        local_var_210 = acStack_378 + 1;
        local_var_2f0 = (uint *)acStack_378;
        local_var_2e8 = acStack_378 + 1;
        plocal_var_1f8 = &rendering_buffer_2008_ptr;
        plocal_var_1f0 = stack_array_1e0;
        local_var_1e8 = 0;
        stack_array_1e0[0] = 0;
        pcStack_a0 = (code *)0x0;
        pcStack_98 = _guard_check_icall;
        plocal_var_2e0 = &local_var_90;
        pcStack_80 = (code *)0x0;
        pcStack_78 = _guard_check_icall;
        local_var_c0 = 0xffffffffffffffff;
        lStack_d8 = 0xffffffffffffffff;
        lStack_e0 = 0xffffffffffffffff;
        local_var_d0 = 0;
        local_var_c8 = 0;
        local_var_b8 = 0;
        puVar12 = &system_buffer_ptr;
        if (plocal_var_240 != (void *)0x0) {
          puVar12 = plocal_var_240;
        }
        function_0693f0(&plocal_var_1f8,puVar12);
        lStack_e0 = lVar14 + 4;
        lStack_d8 = (int64_t)iStack_34c;
        local_var_c8 = 0;
        if (pcStack_a0 != (code *)0x0) {
          (*pcStack_a0)(aplocal_var_b0,0,0);
        }
        pcStack_a0 = function_3c5710;
        pcStack_98 = function_3c56d0;
        aplocal_var_b0[0] = (int32_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x20,8,system_allocation_flags);
        *aplocal_var_b0[0] = (int32_t)local_var_228;
        aplocal_var_b0[0][1] = local_var_228._4_4_;
        aplocal_var_b0[0][2] = iStack_220;
        aplocal_var_b0[0][3] = local_var_21c;
        aplocal_var_b0[0][4] = (int32_t)local_var_218;
        aplocal_var_b0[0][5] = local_var_218._4_4_;
        aplocal_var_b0[0][6] = (int32_t)local_var_210;
        aplocal_var_b0[0][7] = local_var_210._4_4_;
        if (pcStack_80 != (code *)0x0) {
          (*pcStack_80)(&local_var_90,0,0);
        }
        pcStack_80 = (code *)&processed_var_5264_ptr;
        pcStack_78 = (code *)&processed_var_5232_ptr;
        local_var_90 = (int32_t)local_var_2f0;
        local_var_8c = local_var_2f0._4_4_;
        local_var_88 = (int32_t)local_var_2e8;
        local_var_84 = local_var_2e8._4_4_;
        lVar7 = *(int64_t *)(system_system_data_memory + 8);
        lVar14 = function_06d0b0(lVar7 + 200);
        if (lVar14 != 0) {
          function_06d6c0(lVar14,&plocal_var_1f8);
        }
        iVar13 = _Cnd_signal(lVar7 + 0x330);
        if (iVar13 != 0) {
          __Throw_C_error_std__YAXH_Z(iVar13);
        }
        while (lVar7 = lStack_2d8, uVar9 = system_context_ptr, acStack_378[0] == '\0') {
          lVar7 = PerformanceOptimizer(system_context_ptr);
          if (lVar7 != 0) {
            plVar8 = (int64_t *)PerformanceOptimizer(uVar9);
            (**(code **)(*plVar8 + 0x20))(plVar8,0);
          }
        }
        *(int32_t *)(*(int64_t *)(lStack_2d8 + 8) + 0x1e4) = *plocal_var_368;
        *(int32_t *)(*(int64_t *)(lStack_2d8 + 8) + 0x1e8) = plocal_var_368[1];
        *(int32_t *)(*(int64_t *)(lStack_2d8 + 8) + 0x1ec) = plocal_var_368[2];
        lVar14 = *(int64_t *)(lStack_2d8 + 8);
        *(int32_t *)(lVar14 + 0x210) = plocal_var_368[3];
        *(int32_t *)(lVar14 + 0x210) = plocal_var_368[4];
        *(int32_t *)(lVar14 + 0x214) = plocal_var_368[5];
        *(int32_t *)(lVar14 + 0x1f0) = plocal_var_368[6];
        *(int32_t *)(lVar14 + 500) = plocal_var_368[7];
        *(int32_t *)(lVar14 + 0x1f8) = plocal_var_368[8];
        *(int32_t *)(lVar14 + 0x200) = plocal_var_368[9];
        *(int32_t *)(lVar14 + 0x204) = plocal_var_368[10];
        *(int32_t *)(lVar14 + 0x208) = plocal_var_368[0xb];
        *(int32_t *)(lVar14 + 100) = plocal_var_368[0xc];
        plocal_var_368 = plocal_var_368 + 0xd;
        function_3c31c0(lStack_2d8,&local_var_370);
        function_3c3a80(lVar7,&local_var_370);
        function_3c4780(lVar7,&local_var_370);
        lVar14 = *(int64_t *)(lVar7 + 8);
        lVar3 = *(int64_t *)(lVar7 + 0x80);
        lVar7 = *(int64_t *)(lVar7 + 0x88);
        lVar10 = *(int64_t *)(lVar14 + 0x3c8);
        if (lVar10 == 0) {
          *(uint64_t *)(lVar14 + 0x3c8) = 0;
          uVar9 = CoreMemoryPoolReallocator(system_memory_pool_ptr,0xc0,8,0x21);
          lVar10 = function_45f920(uVar9,lVar14);
          *(int64_t *)(lVar14 + 0x3c8) = lVar10;
          lVar7 = (int64_t)(int)(lVar7 - lVar3 >> 4);
          function_080aa0(lVar10 + 0x18,lVar7);
// WARNING: Subroutine does not return
          memcpy(*(uint64_t *)(lVar10 + 0x18),lVar3,lVar7 << 4);
        }
        function_45fb80(lVar10);
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar10);
      }
    }
    else {
      plocal_var_338 = puVar17;
      puVar19 = plocal_var_2d0;
      if (((char)local_var_328 == '\0') && (lVar14 != 0)) {
// WARNING: Subroutine does not return
        CoreMemoryPoolInitializer(lVar14);
      }
    }
    for (; puVar21 != puVar4; puVar21 = puVar21 + 8) {
      (*(code *)**(uint64_t **)puVar21)(puVar21,0);
    }
    if (puVar19 != (uint *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar19);
    }
    if (puVar5 != (uint *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(puVar5);
    }
  }
  if (lStack_258 != 0) {
    fclose(lStack_258);
    lStack_258 = 0;
    LOCK();
    SYSTEM_FILE_COUNTER_ADDR = SYSTEM_FILE_COUNTER_ADDR + -1;
    UNLOCK();
  }
  plocal_var_248 = &system_data_buffer_ptr;
  if (plocal_var_240 == (void *)0x0) {
    plocal_var_240 = (void *)0x0;
    local_var_230 = 0;
    plocal_var_248 = &system_state_ptr;
    plocal_var_2a0 = &system_data_buffer_ptr;
    if (pbStack_298 == (byte *)0x0) {
      pbStack_298 = (byte *)0x0;
      local_var_288 = local_var_288 & 0xffffffff00000000;
      plocal_var_2a0 = &system_state_ptr;
// WARNING: Subroutine does not return
      SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_398);
    }
// WARNING: Subroutine does not return
    CoreMemoryPoolInitializer();
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3c31c0(uint64_t param_1,int64_t param_2)
void function_3c31c0(uint64_t param_1,int64_t param_2)
{
  int64_t lVar1;
  int8_t stack_array_228 [104];
  int32_t local_var_1c0;
  uint64_t local_var_1b8;
  int8_t stack_array_170 [24];
  uint64_t local_var_158;
  uint64_t local_var_150;
  uint64_t local_var_148;
  int32_t local_var_140;
  uint64_t local_var_e0;
  uint64_t local_var_58;
  local_var_e0 = 0xfffffffffffffffe;
  local_var_58 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_228;
  local_var_1c0 = **(int32_t **)(param_2 + 8);
  *(int32_t **)(param_2 + 8) = *(int32_t **)(param_2 + 8) + 1;
  local_var_1b8 = param_1;
  function_3c51c0(local_var_1c0,stack_array_170,local_var_1c0);
  local_var_158 = 0;
  local_var_150 = 0;
  local_var_148 = 0;
  local_var_140 = 3;
  lVar1 = (int64_t)**(int **)(param_2 + 8);
  *(int **)(param_2 + 8) = *(int **)(param_2 + 8) + 1;
  function_0f6ad0(&local_var_158,lVar1);
// WARNING: Subroutine does not return
  memcpy(local_var_158,*(uint64_t *)(param_2 + 8),lVar1);
}
// WARNING: Type propagation algorithm not settling
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_3c3a80(int64_t param_1,int64_t *param_2)
void function_3c3a80(int64_t param_1,int64_t *param_2)
{
  uint64_t *puVar1;
  uint *puVar2;
  uint64_t uVar3;
  int iVar4;
  int64_t lVar5;
  int8_t stack_array_1a8 [32];
  uint64_t local_var_188;
  int64_t **pplStack_180;
  int16_t stack_array_178 [4];
  uint64_t *plocal_var_170;
  uint64_t *plocal_var_168;
  uint64_t *plocal_var_160;
  int32_t local_var_158;
  int32_t local_var_150;
  int aiStack_14c [3];
  uint64_t **pplocal_var_140;
  int64_t lStack_138;
  int32_t *plocal_var_130;
  int *piStack_128;
  uint64_t local_var_120;
  uint64_t local_var_118;
  int *piStack_110;
  int64_t *aplStack_108 [2];
  code *pcStack_f8;
  void *plocal_var_f0;
  uint64_t local_var_e8;
  int64_t **pplStack_e0;
  uint64_t stack_array_d8 [6];
  uint64_t stack_array_a8 [6];
  uint64_t stack_array_78 [2];
  int32_t local_var_68;
  int32_t local_var_64;
  uint64_t local_var_60;
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  uint64_t local_var_48;
  local_var_e8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_1a8;
  param_2[1] = param_2[1] + 4;
  aiStack_14c[1] = 0xc0000000;
  aiStack_14c[2] = 0x40800000;
  stack_array_178[0] = 40000;
  local_var_150 = 0x38d1b717;
  aiStack_14c[0] = *(int *)(*(int64_t *)(param_1 + 8) + 0x1e4) * 6;
  plocal_var_170 = (uint64_t *)0x0;
  plocal_var_168 = (uint64_t *)0x0;
  plocal_var_160 = (uint64_t *)0x0;
  local_var_158 = 0x21;
  lVar5 = (int64_t)*(int *)(*(int64_t *)(param_1 + 8) + 0x1ec);
  if (lVar5 != 0) {
    if (lVar5 == 0) {
      puVar1 = (uint64_t *)0x0;
    }
    else {
      puVar1 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x90,0x21);
    }
    if (plocal_var_170 != plocal_var_168) {
// WARNING: Subroutine does not return
      memmove(puVar1,plocal_var_170,(int64_t)plocal_var_168 - (int64_t)plocal_var_170);
    }
    if (plocal_var_170 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
      CoreMemoryPoolInitializer(plocal_var_170);
    }
    plocal_var_160 = puVar1 + lVar5 * 0x12;
    plocal_var_168 = puVar1;
  }
  iVar4 = 0;
  plocal_var_170 = plocal_var_168;
  if (0 < *(int *)(*(int64_t *)(param_1 + 8) + 0x1ec)) {
    do {
      lVar5 = 0;
      puVar2 = (uint *)param_2[1];
      do {
        uVar3 = (uint64_t)*puVar2;
        puVar2 = puVar2 + 1;
        param_2[1] = (int64_t)puVar2;
        stack_array_a8[lVar5] = (uint64_t)puVar2;
        stack_array_d8[lVar5] = uVar3;
        if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) <= uVar3) {
          System_BufferManager(param_2,(int64_t)puVar2 + (uVar3 - *param_2));
          puVar2 = (uint *)param_2[1];
        }
        puVar2 = (uint *)((int64_t)puVar2 + uVar3);
        param_2[1] = (int64_t)puVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 6);
      lVar5 = 0;
      do {
        uVar3 = (uint64_t)*puVar2;
        puVar2 = puVar2 + 1;
        param_2[1] = (int64_t)puVar2;
        (&local_var_60)[lVar5] = puVar2;
        stack_array_78[lVar5] = uVar3;
        if ((uint64_t)((param_2[2] - (int64_t)puVar2) + *param_2) <= uVar3) {
          System_BufferManager(param_2,(int64_t)puVar2 + (uVar3 - *param_2));
          puVar2 = (uint *)param_2[1];
        }
        puVar2 = (uint *)((int64_t)puVar2 + uVar3);
        param_2[1] = (int64_t)puVar2;
        lVar5 = lVar5 + 1;
      } while (lVar5 < 3);
      if (plocal_var_168 < plocal_var_160) {
        *plocal_var_168 = stack_array_d8[0];
        plocal_var_168[1] = stack_array_d8[1];
        plocal_var_168[2] = stack_array_d8[2];
        plocal_var_168[3] = stack_array_d8[3];
        plocal_var_168[4] = stack_array_d8[4];
        plocal_var_168[5] = stack_array_d8[5];
        plocal_var_168[6] = stack_array_a8[0];
        plocal_var_168[7] = stack_array_a8[1];
        plocal_var_168[8] = stack_array_a8[2];
        plocal_var_168[9] = stack_array_a8[3];
        plocal_var_168[10] = stack_array_a8[4];
        plocal_var_168[0xb] = stack_array_a8[5];
        plocal_var_168[0xc] = stack_array_78[0];
        plocal_var_168[0xd] = stack_array_78[1];
        plocal_var_168[0xe] = CONCAT44(local_var_64,local_var_68);
        plocal_var_168[0xf] = CONCAT44(local_var_60._4_4_,(int32_t)local_var_60);
        *(int32_t *)(plocal_var_168 + 0x10) = local_var_58;
        *(int32_t *)((int64_t)plocal_var_168 + 0x84) = local_var_54;
        *(int32_t *)(plocal_var_168 + 0x11) = local_var_50;
        *(int32_t *)((int64_t)plocal_var_168 + 0x8c) = local_var_4c;
        puVar1 = plocal_var_168;
      }
      else {
        lVar5 = ((int64_t)plocal_var_168 - (int64_t)plocal_var_170) / 0x90;
        if (lVar5 == 0) {
          lVar5 = 1;
LAB_1803c3d6b:
          puVar1 = (uint64_t *)CoreMemoryPoolAllocator(system_memory_pool_ptr,lVar5 * 0x90,(int8_t)local_var_158);
        }
        else {
          lVar5 = lVar5 * 2;
          if (lVar5 != 0) goto LAB_1803c3d6b;
          puVar1 = (uint64_t *)0x0;
        }
        if (plocal_var_170 != plocal_var_168) {
// WARNING: Subroutine does not return
          memmove(puVar1,plocal_var_170,(int64_t)plocal_var_168 - (int64_t)plocal_var_170);
        }
        *puVar1 = stack_array_d8[0];
        puVar1[1] = stack_array_d8[1];
        puVar1[2] = stack_array_d8[2];
        puVar1[3] = stack_array_d8[3];
        puVar1[4] = stack_array_d8[4];
        puVar1[5] = stack_array_d8[5];
        puVar1[6] = stack_array_a8[0];
        puVar1[7] = stack_array_a8[1];
        puVar1[8] = stack_array_a8[2];
        puVar1[9] = stack_array_a8[3];
        puVar1[10] = stack_array_a8[4];
        puVar1[0xb] = stack_array_a8[5];
        puVar1[0xc] = stack_array_78[0];
        puVar1[0xd] = stack_array_78[1];
        *(int32_t *)(puVar1 + 0xe) = local_var_68;
        *(int32_t *)((int64_t)puVar1 + 0x74) = local_var_64;
        *(int32_t *)(puVar1 + 0xf) = (int32_t)local_var_60;
        *(int32_t *)((int64_t)puVar1 + 0x7c) = local_var_60._4_4_;
        *(int32_t *)(puVar1 + 0x10) = local_var_58;
        *(int32_t *)((int64_t)puVar1 + 0x84) = local_var_54;
        *(int32_t *)(puVar1 + 0x11) = local_var_50;
        *(int32_t *)((int64_t)puVar1 + 0x8c) = local_var_4c;
        if (plocal_var_170 != (uint64_t *)0x0) {
// WARNING: Subroutine does not return
          CoreMemoryPoolInitializer();
        }
        plocal_var_160 = puVar1 + lVar5 * 0x12;
        plocal_var_170 = puVar1;
      }
      plocal_var_168 = puVar1 + 0x12;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(*(int64_t *)(param_1 + 8) + 0x1ec));
  }
  pplStack_e0 = aplStack_108;
  pplocal_var_140 = &plocal_var_170;
  plocal_var_130 = &local_var_150;
  piStack_128 = aiStack_14c;
  local_var_120 = aiStack_14c + 1;
  local_var_118 = stack_array_178;
  piStack_110 = aiStack_14c + 2;
  pcStack_f8 = function_3c5580;
  plocal_var_f0 = &processed_var_4976_ptr;
  lStack_138 = param_1;
  aplStack_108[0] = (int64_t *)CoreMemoryPoolReallocator(system_memory_pool_ptr,0x38,8,system_allocation_flags);
  *aplStack_108[0] = (int64_t)pplocal_var_140;
  aplStack_108[0][1] = lStack_138;
  aplStack_108[0][2] = (int64_t)plocal_var_130;
  aplStack_108[0][3] = (int64_t)piStack_128;
  *(int32_t *)(aplStack_108[0] + 4) = (int32_t)local_var_120;
  *(int32_t *)((int64_t)aplStack_108[0] + 0x24) = local_var_120._4_4_;
  *(int32_t *)(aplStack_108[0] + 5) = (int32_t)local_var_118;
  *(int32_t *)((int64_t)aplStack_108[0] + 0x2c) = local_var_118._4_4_;
  aplStack_108[0][6] = (int64_t)piStack_110;
  pplStack_180 = aplStack_108;
  local_var_188 = 0xffffffffffffffff;
  SystemCore_DataTransformer((int32_t)local_var_120,0,*(int32_t *)(*(int64_t *)(param_1 + 8) + 0x1ec),1);
  if (plocal_var_170 == (uint64_t *)0x0) {
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_1a8);
  }
// WARNING: Subroutine does not return
  CoreMemoryPoolInitializer();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address