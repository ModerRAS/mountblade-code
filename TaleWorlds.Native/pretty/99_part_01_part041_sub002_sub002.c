#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// $fun 的语义化别名
#define $alias_name $fun
// 99_part_01_part041_sub002_sub002.c - 1 个函数
// 函数: void function_0ca380(int64_t param_1,int64_t param_2)
void function_0ca380(int64_t param_1,int64_t param_2)
{
  ushort uVar1;
  ushort uVar2;
  int *piVar3;
  int64_t *plVar4;
  code *pcVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  int32_t uVar9;
  uint uVar10;
  int iVar11;
  int64_t lVar12;
  int32_t *puVar13;
  uint64_t *puVar14;
  uint64_t *puVar15;
  uint64_t *puVar16;
  uint64_t *puVar17;
  int64_t *plVar18;
  int64_t lVar19;
  int64_t lVar20;
  uint64_t uVar21;
  uint64_t uVar22;
  int32_t *puVar23;
  uint64_t *puVar24;
  void *puVar25;
  uint *puVar26;
  uint64_t uVar27;
  uint64_t uVar28;
  uint64_t uVar29;
  int iVar30;
  uint64_t uVar31;
  uint64_t extraout_XMM0_Qa;
  int8_t stack_array_a18 [32];
  int32_t local_var_9f8;
  uint64_t local_var_9f0;
  int32_t local_var_9e8;
  int32_t local_var_9e0;
  int32_t local_var_9d8;
  int64_t *plStack_9d0;
  int8_t local_var_9c8;
  int32_t local_var_9c0;
  int64_t *plStack_9b8;
  int64_t *plStack_9b0;
  int iStack_9a8;
  int32_t local_var_9a4;
  void *plocal_var_9a0;
  uint64_t *plocal_var_998;
  int32_t local_var_990;
  uint64_t local_var_988;
  void *plocal_var_980;
  int8_t *plocal_var_978;
  uint local_var_970;
  uint64_t local_var_968;
  void *plocal_var_960;
  uint64_t *plocal_var_958;
  int32_t local_var_950;
  uint64_t local_var_948;
  int iStack_940;
  int32_t local_var_93c;
  int64_t *plStack_938;
  uint64_t local_var_930;
  int32_t local_var_928;
  int32_t local_var_924;
  int32_t local_var_920;
  int32_t local_var_91c;
  int32_t local_var_918;
  uint64_t local_var_914;
  uint64_t local_var_90c;
  int8_t local_var_904;
  int32_t local_var_903;
  int32_t local_var_8ff;
  int32_t local_var_8f8;
  int8_t local_var_8f4;
  void *plocal_var_8f0;
  uint64_t *plocal_var_8e8;
  int32_t local_var_8e0;
  uint64_t local_var_8d8;
  void *plocal_var_8d0;
  uint64_t *plocal_var_8c8;
  int32_t local_var_8c0;
  uint64_t local_var_8b8;
  void *plocal_var_8b0;
  uint64_t *plocal_var_8a8;
  int32_t local_var_8a0;
  uint64_t local_var_898;
  void *plocal_var_890;
  uint64_t *plocal_var_888;
  int32_t local_var_880;
  uint64_t local_var_878;
  void *plocal_var_870;
  int32_t *plocal_var_868;
  int32_t local_var_860;
  uint64_t local_var_858;
  int32_t local_var_850;
  int32_t local_var_84c;
  int64_t *plStack_848;
  uint64_t local_var_840;
  int32_t local_var_838;
  uint64_t local_var_834;
  uint64_t local_var_82c;
  int32_t local_var_824;
  int32_t local_var_820;
  int64_t *plStack_818;
  int32_t local_var_810;
  int8_t local_var_80c;
  uint local_var_808;
  uint local_var_804;
  int32_t local_var_800;
  int32_t local_var_7fc;
  int32_t local_var_7f8;
  int32_t local_var_7f4;
  int32_t local_var_7f0;
  int64_t *plStack_7e8;
  int64_t *plStack_7e0;
  int64_t *plStack_7d8;
  int64_t *plStack_7d0;
  uint64_t local_var_7c8;
  int64_t *plStack_7c0;
  uint64_t stack_array_7b8 [2];
  void *plocal_var_7a8;
  void *plocal_var_7a0;
  int32_t local_var_798;
  uint8_t stack_array_790 [32];
  void *plocal_var_770;
  void *plocal_var_768;
  int32_t local_var_760;
  uint8_t stack_array_758 [32];
  void *plocal_var_738;
  void *plocal_var_730;
  int32_t local_var_728;
  uint8_t stack_array_720 [32];
  void *plocal_var_700;
  int8_t *plocal_var_6f8;
  int32_t local_var_6f0;
  int8_t stack_array_6e8 [32];
  void *plocal_var_6c8;
  int8_t *plocal_var_6c0;
  int32_t local_var_6b8;
  int8_t stack_array_6b0 [40];
  void *plocal_var_688;
  int8_t *plocal_var_680;
  int32_t local_var_678;
  int8_t stack_array_670 [136];
  void *plocal_var_5e8;
  int8_t *plocal_var_5e0;
  int iStack_5d8;
  int8_t stack_array_5d0 [136];
  void *plocal_var_548;
  int8_t *plocal_var_540;
  int32_t local_var_538;
  int8_t stack_array_530 [136];
  void *plocal_var_4a8;
  int8_t *plocal_var_4a0;
  int iStack_498;
  int8_t stack_array_490 [136];
  void *plocal_var_408;
  int8_t *plocal_var_400;
  int32_t local_var_3f8;
  int8_t stack_array_3f0 [136];
  void *plocal_var_368;
  int8_t *plocal_var_360;
  int32_t local_var_358;
  int8_t stack_array_350 [136];
  void *plocal_var_2c8;
  int8_t *plocal_var_2c0;
  int32_t local_var_2b8;
  int8_t stack_array_2b0 [136];
  void *plocal_var_228;
  int8_t *plocal_var_220;
  int32_t local_var_218;
  int8_t stack_array_210 [136];
  void *plocal_var_188;
  int8_t *plocal_var_180;
  int32_t local_var_178;
  int8_t stack_array_170 [136];
  void *plocal_var_e8;
  int8_t *plocal_var_e0;
  int32_t local_var_d8;
  int8_t stack_array_d0 [136];
  uint64_t local_var_48;
  local_var_7c8 = 0xfffffffffffffffe;
  local_var_48 = GET_SECURITY_COOKIE() ^ (uint64_t)stack_array_a18;
  uVar21 = 0;
  uVar8 = 0;
  uVar10 = 0;
  if (*(char *)(param_2 + 0x9a31) != '\0') {
    lVar12 = SystemOptimizer(param_2);
    uVar1 = *(ushort *)(lVar12 + 0x32c);
    lVar12 = SystemOptimizer(param_2);
    uVar2 = *(ushort *)(lVar12 + 0x32e);
    if (((float)uVar1 != *(float *)(system_operation_state + 0x17ec)) ||
       ((float)uVar2 != *(float *)(system_operation_state + 0x17f0))) {
      plocal_var_870 = &system_data_buffer_ptr;
      local_var_858 = 0;
      plocal_var_868 = (int32_t *)0x0;
      local_var_860 = 0;
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar13 = 0;
      plocal_var_868 = puVar13;
      uVar7 = CoreEngineSystemCleanup(puVar13);
      *puVar13 = 0x645f6372;
      *(int16_t *)(puVar13 + 1) = 0x5f73;
      *(int8_t *)((int64_t)puVar13 + 6) = 0;
      local_var_860 = 6;
      iVar11 = *(int *)(param_2 + 0x3530);
      local_var_858._0_4_ = uVar7;
      if (0 < iVar11) {
        if ((iVar11 != -6) && (uVar7 < iVar11 + 7U)) {
          local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
          puVar13 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar13,iVar11 + 7U,0x10);
          plocal_var_868 = puVar13;
          local_var_858._0_4_ = CoreEngineSystemCleanup(puVar13);
          iVar11 = *(int *)(param_2 + 0x3530);
        }
// WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar13 + 6),*(uint64_t *)(param_2 + 0x3528),
               (int64_t)(iVar11 + 1));
      }
      local_var_800 = 1;
      local_var_7f4 = 0x1018a;
      local_var_7f8 = 0;
      local_var_7fc = 0x2f;
      local_var_7f0 = *(int32_t *)(param_2 + 0x1bd4);
      plocal_var_688 = &memory_allocator_3432_ptr;
      plocal_var_680 = stack_array_670;
      stack_array_670[0] = 0;
      local_var_678 = 6;
      puVar23 = (int32_t *)&system_buffer_ptr;
      if (puVar13 != (int32_t *)0x0) {
        puVar23 = puVar13;
      }
      local_var_808 = (uint)uVar1;
      local_var_804 = (uint)uVar2;
      strcpy_s(stack_array_670,0x80,puVar23);
      function_0db370(&plocal_var_688,param_2 + 0x96a8,&local_var_808);
      plocal_var_688 = &system_state_ptr;
      plocal_var_870 = &system_data_buffer_ptr;
      if (puVar13 != (int32_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar13);
      }
      plocal_var_868 = (int32_t *)0x0;
      local_var_858 = (uint64_t)local_var_858._4_4_ << 0x20;
      plocal_var_870 = &system_state_ptr;
    }
  }
  cVar6 = SystemFunction_0001800e2bf0(param_1,param_2);
  if (cVar6 == '\0') {
    uVar7 = uVar10;
    if (*(int *)(param_2 + 8) != -1) {
      uVar7 = *(uint *)(param_2 + 0x18);
    }
    if ((uVar7 & 2) != 0) {
      lVar12 = SystemOptimizer(param_2);
      uVar1 = *(ushort *)(lVar12 + 0x32c);
      lVar12 = SystemOptimizer(param_2);
      local_var_838 = 1;
      local_var_82c = 0;
      local_var_824 = 0;
      local_var_930 = 0;
      plStack_818 = (int64_t *)0x0;
      local_var_80c = 0;
      local_var_840 = (uint64_t)CONCAT24(*(ushort *)(lVar12 + 0x32e) >> 1,(uint)(uVar1 >> 1));
      local_var_834 = 0x500000001;
      local_var_820 = 0x1000001;
      local_var_810 = *(int32_t *)(param_2 + 0x1bd4);
      plocal_var_7a8 = &processed_var_672_ptr;
      plocal_var_7a0 = stack_array_790;
      stack_array_790[0] = 0;
      local_var_798 = 7;
      strcpy_s(stack_array_790,0x20,&rendering_buffer_2456_ptr);
      plocal_var_228 = &memory_allocator_3432_ptr;
      plocal_var_220 = stack_array_210;
      stack_array_210[0] = 0;
      local_var_218 = local_var_798;
      puVar25 = &system_buffer_ptr;
      if (plocal_var_7a0 != (void *)0x0) {
        puVar25 = plocal_var_7a0;
      }
      uVar31 = strcpy_s(stack_array_210,0x80,puVar25);
      puVar14 = (uint64_t *)function_0b2450(uVar31,&local_var_850,&plocal_var_228,&local_var_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_848 = *(int64_t **)(param_2 + 0x98d0);
      *(uint64_t *)(param_2 + 0x98d0) = uVar31;
      if (plStack_848 != (int64_t *)0x0) {
        (**(code **)(*plStack_848 + 0x38))();
      }
      if ((int64_t *)CONCAT44(local_var_84c,local_var_850) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(local_var_84c,local_var_850) + 0x38))();
      }
      plocal_var_228 = &system_state_ptr;
      plocal_var_7a8 = &system_state_ptr;
      plocal_var_770 = &processed_var_672_ptr;
      plocal_var_768 = stack_array_758;
      stack_array_758[0] = 0;
      local_var_760 = 0xb;
      strcpy_s(stack_array_758,0x20,&rendering_buffer_2440_ptr);
      plocal_var_188 = &memory_allocator_3432_ptr;
      plocal_var_180 = stack_array_170;
      stack_array_170[0] = 0;
      local_var_178 = local_var_760;
      puVar25 = &system_buffer_ptr;
      if (plocal_var_768 != (void *)0x0) {
        puVar25 = plocal_var_768;
      }
      uVar31 = strcpy_s(stack_array_170,0x80,puVar25);
      puVar14 = (uint64_t *)function_0b2450(uVar31,&iStack_940,&plocal_var_188,&local_var_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_938 = *(int64_t **)(param_2 + 0x98d8);
      *(uint64_t *)(param_2 + 0x98d8) = uVar31;
      if (plStack_938 != (int64_t *)0x0) {
        (**(code **)(*plStack_938 + 0x38))();
      }
      if ((int64_t *)CONCAT44(local_var_93c,iStack_940) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(local_var_93c,iStack_940) + 0x38))();
      }
      plocal_var_188 = &system_state_ptr;
      plocal_var_770 = &system_state_ptr;
      plocal_var_738 = &processed_var_672_ptr;
      plocal_var_730 = stack_array_720;
      stack_array_720[0] = 0;
      local_var_728 = 0xc;
      strcpy_s(stack_array_720,0x20,&rendering_buffer_2480_ptr);
      plocal_var_e8 = &memory_allocator_3432_ptr;
      plocal_var_e0 = stack_array_d0;
      stack_array_d0[0] = 0;
      local_var_d8 = local_var_728;
      puVar25 = &system_buffer_ptr;
      if (plocal_var_730 != (void *)0x0) {
        puVar25 = plocal_var_730;
      }
      uVar31 = strcpy_s(stack_array_d0,0x80,puVar25);
      puVar14 = (uint64_t *)function_0b2450(uVar31,&iStack_9a8,&plocal_var_e8,&local_var_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_9b0 = *(int64_t **)(param_2 + 0x98e0);
      *(uint64_t *)(param_2 + 0x98e0) = uVar31;
      if (plStack_9b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_9b0 + 0x38))();
      }
      if ((int64_t *)CONCAT44(local_var_9a4,iStack_9a8) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(local_var_9a4,iStack_9a8) + 0x38))();
      }
      plocal_var_e8 = &system_state_ptr;
      plocal_var_738 = &system_state_ptr;
      plocal_var_700 = &processed_var_672_ptr;
      plocal_var_6f8 = stack_array_6e8;
      stack_array_6e8[0] = 0;
      local_var_6f0 = 0xc;
      uVar31 = strcpy_s(stack_array_6e8,0x20,&rendering_buffer_2464_ptr);
      local_var_9c0 = 1;
      local_var_9c8 = 1;
      plStack_9d0 = (int64_t *)0x0;
      local_var_9d8 = 4;
      local_var_9e0 = 4;
      local_var_9e8 = 5;
      local_var_9f0 = (uint64_t *)((uint64_t)local_var_9f0._4_4_ << 0x20);
      local_var_9f8 = 5;
      puVar14 = (uint64_t *)
                SystemCore_ConfigManager(uVar31,&plStack_7e8,*(int32_t *)(param_2 + 0x1bd4),&plocal_var_700);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_9b8 = *(int64_t **)(param_2 + 0x98f0);
      *(uint64_t *)(param_2 + 0x98f0) = uVar31;
      if (plStack_9b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_9b8 + 0x38))();
      }
      if (plStack_7e8 != (int64_t *)0x0) {
        (**(code **)(*plStack_7e8 + 0x38))();
      }
      plocal_var_700 = &system_state_ptr;
      if (plStack_818 != (int64_t *)0x0) {
        (**(code **)(*plStack_818 + 0x38))();
      }
    }
    uVar22 = uVar21;
    uVar28 = uVar21;
    uVar27 = uVar21;
    if ((*(char *)(param_2 + 0x20) != '\0') || (*(char *)(param_2 + 0x21) != '\0')) {
      while( true ) {
        iVar30 = (int)uVar27;
        iVar11 = (int)uVar28;
        if ((uint64_t)*(uint *)(param_2 + 0x1eb8) <= (uint64_t)(int64_t)iVar30) break;
        lVar12 = *(int64_t *)
                  (*(int64_t *)(param_2 + 0x1ec0 + (uVar27 >> 0xb) * 8) + 0x10 +
                  (uint64_t)(uint)(iVar30 + (int)(uVar27 >> 0xb) * -0x800) * 0x18);
        *(int *)(lVar12 + 0x210) = iVar11;
        if ((*(uint *)(lVar12 + 0x2e0) & 0x400) != 0) {
          *(uint *)(lVar12 + 0x21c) = (uint)*(byte *)(lVar12 + 0x321);
        }
        lVar19 = *(int64_t *)(lVar12 + 0x1d8);
        uVar27 = uVar21;
        uVar29 = uVar21;
        if (*(int64_t *)(lVar12 + 0x1e0) - lVar19 >> 2 != 0) {
          do {
            *(int32_t *)(*(int64_t *)(param_1 + 0x2338) + uVar22 * 4) =
                 *(int32_t *)(lVar19 + uVar27);
            uVar7 = (int)uVar28 + 1;
            uVar28 = (uint64_t)uVar7;
            uVar22 = uVar22 + 1;
            if (*(int *)(param_1 + 0x2330) <= (int)uVar7) goto LAB_1800cb83d;
            uVar7 = (int)uVar29 + 1;
            lVar19 = *(int64_t *)(lVar12 + 0x1d8);
            uVar27 = uVar27 + 4;
            uVar29 = (uint64_t)uVar7;
          } while ((uint64_t)(int64_t)(int)uVar7 <
                   (uint64_t)(*(int64_t *)(lVar12 + 0x1e0) - lVar19 >> 2));
        }
        if (*(int *)(param_1 + 0x2330) <= (int)uVar28) goto LAB_1800cb83d;
        uVar27 = (uint64_t)(iVar30 + 1);
      }
      if (iVar11 < *(int *)(param_1 + 0x2330)) {
        lVar12 = (int64_t)iVar11;
        uVar22 = uVar21;
        while (iVar11 = (int)uVar22,
              (uint64_t)(int64_t)iVar11 < (uint64_t)*(uint *)(param_2 + 0x2ee8)) {
          lVar19 = *(int64_t *)
                    (*(int64_t *)(param_2 + 0x2ef0 + (uVar22 >> 0xb) * 8) +
                    (uint64_t)(uint)(iVar11 + (int)(uVar22 >> 0xb) * -0x800) * 8);
          *(int *)(lVar19 + 0x28) = (int)uVar28;
          lVar20 = *(int64_t *)(lVar19 + 8);
          uVar22 = uVar21;
          uVar27 = uVar21;
          if (*(int64_t *)(lVar19 + 0x10) - lVar20 >> 2 != 0) {
            do {
              *(int32_t *)(*(int64_t *)(param_1 + 0x2338) + lVar12 * 4) =
                   *(int32_t *)(lVar20 + uVar22);
              uVar7 = (int)uVar28 + 1;
              uVar28 = (uint64_t)uVar7;
              lVar12 = lVar12 + 1;
              if (*(int *)(param_1 + 0x2330) <= (int)uVar7) goto LAB_1800cb83d;
              uVar7 = (int)uVar27 + 1;
              lVar20 = *(int64_t *)(lVar19 + 8);
              uVar22 = uVar22 + 4;
              uVar27 = (uint64_t)uVar7;
            } while ((uint64_t)(int64_t)(int)uVar7 <
                     (uint64_t)(*(int64_t *)(lVar19 + 0x10) - lVar20 >> 2));
          }
          if (*(int *)(param_1 + 0x2330) <= (int)uVar28) break;
          uVar22 = (uint64_t)(iVar11 + 1);
        }
      }
LAB_1800cb83d:
      plocal_var_980 = &system_data_buffer_ptr;
      local_var_968 = 0;
      plocal_var_978 = (int8_t *)0x0;
      local_var_970 = 0;
      if (*(int *)(param_2 + 0x3530) != 0) {
        iVar11 = *(int *)(param_2 + 0x3530) + 1;
        if (iVar11 < 0x10) {
          iVar11 = 0x10;
        }
        plocal_var_978 = (int8_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar11,
                                    CONCAT71((int7)(uVar28 >> 8),0x13));
        *plocal_var_978 = 0;
        uVar22 = (uint64_t)plocal_var_978 & 0xffffffffffc00000;
        if (uVar22 != 0) {
          lVar12 = ((int64_t)plocal_var_978 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
          puVar26 = (uint *)(lVar12 - (uint64_t)*(uint *)(lVar12 + 4));
          if ((*(byte *)((int64_t)puVar26 + 0xe) & 2) == 0) {
            uVar8 = puVar26[7];
            if (0x3ffffff < uVar8) {
              uVar8 = *puVar26 << 0x10;
            }
          }
          else {
            uVar8 = puVar26[7];
            if (uVar8 < 0x4000000) {
              uVar28 = (uint64_t)uVar8;
            }
            else {
              uVar28 = (uint64_t)*puVar26 << 0x10;
            }
            if (0x3ffffff < uVar8) {
              uVar8 = *puVar26 << 0x10;
            }
            uVar8 = uVar8 - (int)(((int64_t)plocal_var_978 -
                                  (((int64_t)((int64_t)puVar26 + (-0x80 - uVar22)) / 0x50) *
                                   0x10000 + uVar22)) % uVar28);
          }
        }
        local_var_968 = CONCAT44(local_var_968._4_4_,uVar8);
        if (0 < *(int *)(param_2 + 0x3530)) {
          puVar25 = &system_buffer_ptr;
          if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
            puVar25 = *(void **)(param_2 + 0x3528);
          }
// WARNING: Subroutine does not return
          memcpy(plocal_var_978,puVar25,(int64_t)(*(int *)(param_2 + 0x3530) + 1));
        }
      }
      if ((*(int64_t *)(param_2 + 0x3528) != 0) &&
         (local_var_970 = 0, plocal_var_978 != (int8_t *)0x0)) {
        *plocal_var_978 = 0;
      }
      CoreEngineDataBufferProcessor(&plocal_var_980,0x13);
      puVar14 = (uint64_t *)(plocal_var_978 + local_var_970);
      *puVar14 = 0x665f746867696c5f;
      puVar14[1] = 0x6675625f73656361;
      *(int32_t *)(puVar14 + 2) = 0x726566;
      local_var_970 = 0x13;
      plVar18 = (int64_t *)
                function_0e81f0(puVar14,&plStack_7e0,*(uint64_t *)(param_1 + 0x2338),
                              *(int *)(param_1 + 0x2330) << 2);
      plVar18 = (int64_t *)*plVar18;
      uVar31 = extraout_XMM0_Qa;
      plStack_7c0 = plVar18;
      if (plVar18 != (int64_t *)0x0) {
        uVar31 = (**(code **)(*plVar18 + 0x28))(plVar18);
      }
      if (plStack_7e0 != (int64_t *)0x0) {
        uVar31 = (**(code **)(*plStack_7e0 + 0x38))();
      }
      local_var_9d8 = *(int32_t *)(param_1 + 0x2330);
      local_var_9c0 = 1;
      local_var_9c8 = 1;
      local_var_9e0 = 4;
      local_var_9e8 = 5;
      local_var_9f0 = (uint64_t *)CONCAT44(local_var_9f0._4_4_,3);
      local_var_9f8 = 0x21;
      plStack_9d0 = plVar18;
      uVar31 = SystemCore_ConfigManager(uVar31,&plStack_7d8,*(int32_t *)(param_2 + 0x1bd4),&plocal_var_980);
      SystemCore_ChecksumValidator(param_2 + 39000,uVar31);
      if (plStack_7d8 != (int64_t *)0x0) {
        (**(code **)(*plStack_7d8 + 0x38))();
      }
      if (plVar18 != (int64_t *)0x0) {
        (**(code **)(*plVar18 + 0x38))(plVar18);
      }
      plocal_var_980 = &system_data_buffer_ptr;
      if (plocal_var_978 != (int8_t *)0x0) {
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      plocal_var_978 = (int8_t *)0x0;
      local_var_968 = local_var_968 & 0xffffffff00000000;
      plocal_var_980 = &system_state_ptr;
    }
    lVar12 = SystemOptimizer(param_2);
    if (lVar12 != 0) {
      lVar12 = SystemOptimizer(param_2);
      *(int32_t *)(lVar12 + 0x3a8) = *(int32_t *)(param_1 + 0x1500);
    }
    lVar12 = SystemLog_Manager(param_2);
    if (lVar12 != 0) {
      lVar12 = SystemLog_Manager(param_2);
      *(int32_t *)(lVar12 + 0x3a8) = *(int32_t *)(param_1 + 0x1500);
    }
    if ((*(int **)(param_2 + 0x98c8) != (int *)0x0) && (**(int **)(param_2 + 0x98c8) != 0)) {
      piVar3 = *(int **)(param_2 + 0x98c8);
      plocal_var_6c8 = &processed_var_672_ptr;
      plocal_var_6c0 = stack_array_6b0;
      stack_array_6b0[0] = 0;
      local_var_6b8 = 0x14;
      uVar31 = strcpy_s(stack_array_6b0,0x20,&rendering_buffer_2496_ptr);
      local_var_9c0 = 1;
      local_var_9c8 = 1;
      plStack_9d0 = (int64_t *)0x0;
      local_var_9d8 = 0x10000;
      local_var_9e0 = 0x20;
      local_var_9e8 = 0;
      local_var_9f0 = (uint64_t *)CONCAT44(local_var_9f0._4_4_,3);
      local_var_9f8 = 0x61;
      uVar31 = SystemCore_ConfigManager(uVar31,&plStack_7d0,*(int32_t *)(param_2 + 0x1bd4),&plocal_var_6c8);
      plVar18 = (int64_t *)(param_2 + 0x98c0);
      SystemCore_ChecksumValidator(plVar18,uVar31);
      if (plStack_7d0 != (int64_t *)0x0) {
        (**(code **)(*plStack_7d0 + 0x38))();
      }
      plocal_var_6c8 = &system_state_ptr;
      if (*piVar3 != 0) {
        uVar10 = (*piVar3 - 1U >> 0xc) + 1;
      }
      uVar8 = 0x10;
      if (uVar10 < 0x10) {
        uVar8 = uVar10;
      }
      lVar12 = *(int64_t *)(system_message_buffer + 0x1cd8);
      lVar19 = *plVar18;
      *(int32_t *)(lVar19 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      plVar4 = *(int64_t **)(lVar12 + 0x8400);
      local_var_9f0 = stack_array_7b8;
      local_var_9f8 = 0;
      iVar11 = (**(code **)(*plVar4 + 0x70))(plVar4,*(uint64_t *)(lVar19 + 0x10),0,4);
      if (iVar11 < 0) {
        SystemCore_Loader(iVar11,&ui_system_data_1768_ptr);
      }
      if (uVar8 != 0) {
// WARNING: Subroutine does not return
        memcpy(stack_array_7b8[0],*(uint64_t *)(piVar3 + 2),0x20000);
      }
      lVar12 = *plVar18;
      plVar18 = *(int64_t **)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x8400);
      pcVar5 = *(code **)(*plVar18 + 0x78);
      *(int32_t *)(lVar12 + 0x16c) = *(int32_t *)(system_main_module_state + 0x224);
      (*pcVar5)(plVar18,*(uint64_t *)(lVar12 + 0x10),0);
    }
    uVar22 = uVar21;
    if (*(int64_t *)(param_2 + 0x96b8) - *(int64_t *)(param_2 + 0x96b0) >> 3 != 0) {
      do {
        *(int32_t *)(*(int64_t *)(*(int64_t *)(param_2 + 0x96b0) + uVar21) + 0x3a8) =
             *(int32_t *)(param_1 + 0x1500);
        uVar8 = (int)uVar22 + 1;
        uVar21 = uVar21 + 8;
        uVar22 = (uint64_t)uVar8;
      } while ((uint64_t)(int64_t)(int)uVar8 <
               (uint64_t)(*(int64_t *)(param_2 + 0x96b8) - *(int64_t *)(param_2 + 0x96b0) >> 3));
    }
// WARNING: Subroutine does not return
    SystemSecurityChecker(local_var_48 ^ (uint64_t)stack_array_a18);
  }
  local_var_850 = *(int32_t *)(param_2 + 0x3590);
  plStack_848 = (int64_t *)CONCAT44(plStack_848._4_4_,*(int32_t *)(param_2 + 0x3594));
  plocal_var_890 = &system_data_buffer_ptr;
  local_var_878 = 0;
  plocal_var_888 = (uint64_t *)0x0;
  local_var_880 = 0;
  puVar14 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1c,0x13);
  *(int8_t *)puVar14 = 0;
  plocal_var_888 = puVar14;
  uVar8 = CoreEngineSystemCleanup(puVar14);
  *puVar14 = 0x5f72656666756267;
  puVar14[1] = 0x745f6f6465626c61;
  puVar14[2] = 0x7373656e6b636968;
  *(int32_t *)(puVar14 + 3) = 0x293028;
  iStack_940 = 0x1b;
  local_var_880 = 0x1b;
  iVar11 = *(int *)(param_2 + 0x3530);
  local_var_878._0_4_ = uVar8;
  if (0 < iVar11) {
    iStack_940 = iVar11 + 0x1b;
    if ((iStack_940 != 0) && (uVar8 < iVar11 + 0x1cU)) {
      local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
      puVar14 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar14,iVar11 + 0x1cU,0x10);
      plocal_var_888 = puVar14;
      local_var_878._0_4_ = CoreEngineSystemCleanup(puVar14);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar14 + 0x1b),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  plocal_var_8b0 = &system_data_buffer_ptr;
  local_var_898 = 0;
  plocal_var_8a8 = (uint64_t *)0x0;
  local_var_8a0 = 0;
  puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,0x13);
  *(int8_t *)puVar15 = 0;
  plocal_var_8a8 = puVar15;
  uVar8 = CoreEngineSystemCleanup(puVar15);
  *puVar15 = 0x5f72656666756267;
  puVar15[1] = 0x6f6c675f63657073;
  *(int32_t *)(puVar15 + 2) = 0x615f7373;
  *(int32_t *)((int64_t)puVar15 + 0x14) = 0x68735f6f;
  *(int32_t *)(puVar15 + 3) = 0x776f6461;
  *(int32_t *)((int64_t)puVar15 + 0x1c) = 0x293128;
  plStack_938 = (int64_t *)CONCAT44(plStack_938._4_4_,0x1f);
  local_var_8a0 = 0x1f;
  iVar11 = *(int *)(param_2 + 0x3530);
  local_var_898._0_4_ = uVar8;
  if (0 < iVar11) {
    plStack_938 = (int64_t *)CONCAT44(plStack_938._4_4_,iVar11 + 0x1f);
    if ((iVar11 + 0x1f != 0) && (uVar8 < iVar11 + 0x20U)) {
      local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
      puVar15 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar15,iVar11 + 0x20U,0x10);
      plocal_var_8a8 = puVar15;
      local_var_898._0_4_ = CoreEngineSystemCleanup(puVar15);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar15 + 0x1f),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  plocal_var_9a0 = &system_data_buffer_ptr;
  local_var_988 = 0;
  plocal_var_998 = (uint64_t *)0x0;
  local_var_990 = 0;
  puVar16 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar16 = 0;
  plocal_var_998 = puVar16;
  local_var_930 = CoreEngineSystemCleanup(puVar16);
  uVar8 = (uint)local_var_930;
  *puVar16 = 0x5f72656666756267;
  puVar16[1] = 0x28736c616d726f6e;
  *(int16_t *)(puVar16 + 2) = 0x2932;
  *(int8_t *)((int64_t)puVar16 + 0x12) = 0;
  iStack_9a8 = 0x12;
  local_var_990 = 0x12;
  iVar11 = *(int *)(param_2 + 0x3530);
  plStack_9b8._0_4_ = 0x12;
  local_var_988._0_4_ = uVar8;
  if (0 < iVar11) {
    iStack_9a8 = iVar11 + 0x12;
    plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,iStack_9a8);
    if ((iStack_9a8 != 0) && (uVar8 < iVar11 + 0x13U)) {
      local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
      puVar16 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar16,iVar11 + 0x13U,0x10);
      plocal_var_998 = puVar16;
      local_var_930 = CoreEngineSystemCleanup(puVar16);
      local_var_988._0_4_ = (uint)local_var_930;
      iVar11 = *(int *)(param_2 + 0x3530);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar16 + 0x12),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  plocal_var_8d0 = &system_data_buffer_ptr;
  local_var_8b8 = 0;
  plocal_var_8c8 = (uint64_t *)0x0;
  local_var_8c0 = 0;
  plocal_var_8c8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
  *(int8_t *)plocal_var_8c8 = 0;
  uVar9 = CoreEngineSystemCleanup(plocal_var_8c8);
  local_var_8b8 = CONCAT44(local_var_8b8._4_4_,uVar9);
  *plocal_var_8c8 = 0x5f72656666756267;
  plocal_var_8c8[1] = 0x6e5f786574726576;
  plocal_var_8c8[2] = 0x3328736c616d726f;
  *(int16_t *)(plocal_var_8c8 + 3) = 0x29;
  local_var_8c0 = 0x19;
  plStack_9b0._0_4_ = *(int *)(param_2 + 0x3530);
  if ((int)plStack_9b0 < 1) {
    plocal_var_8f0 = &system_data_buffer_ptr;
    local_var_8d8 = 0;
    plocal_var_8e8 = (uint64_t *)0x0;
    local_var_8e0 = 0;
    puVar17 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
    *(int8_t *)puVar17 = 0;
    plocal_var_8e8 = puVar17;
    uVar8 = CoreEngineSystemCleanup(puVar17);
    *puVar17 = 0x5f72656666756267;
    puVar17[1] = 0x765f6e6f69746f6d;
    puVar17[2] = 0x342873726f746365;
    *(int16_t *)(puVar17 + 3) = 0x29;
    plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,0x19);
    local_var_8e0 = 0x19;
    iVar11 = *(int *)(param_2 + 0x3530);
    local_var_8d8._0_4_ = uVar8;
    if (0 < iVar11) {
      plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,iVar11 + 0x19);
      if ((iVar11 + 0x19 != 0) && (uVar8 < iVar11 + 0x1aU)) {
        local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
        puVar17 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar17,iVar11 + 0x1aU,0x10);
        plocal_var_8e8 = puVar17;
        local_var_8d8._0_4_ = CoreEngineSystemCleanup(puVar17);
        iVar11 = *(int *)(param_2 + 0x3530);
      }
// WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar17 + 0x19),*(uint64_t *)(param_2 + 0x3528),
             (int64_t)(iVar11 + 1));
    }
    plocal_var_960 = &system_data_buffer_ptr;
    local_var_948 = 0;
    plocal_var_958 = (uint64_t *)0x0;
    local_var_950 = 0;
    plocal_var_958 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)plocal_var_958 = 0;
    uVar8 = CoreEngineSystemCleanup(plocal_var_958);
    *plocal_var_958 = 0x5f72656666756267;
    plocal_var_958[1] = 0x6c6f7365725f7476;
    *(int32_t *)(plocal_var_958 + 2) = 0x35286576;
    *(int16_t *)((int64_t)plocal_var_958 + 0x14) = 0x29;
    plStack_9b0 = (int64_t *)CONCAT44(plStack_9b0._4_4_,0x15);
    local_var_950 = 0x15;
    iVar11 = *(int *)(param_2 + 0x3530);
    local_var_948._0_4_ = uVar8;
    if (iVar11 < 1) {
      local_var_920 = 1;
      local_var_91c = 1;
      local_var_903 = 1;
      local_var_904 = 0;
      local_var_8ff = 0x101;
      local_var_8f4 = 0;
      local_var_928 = local_var_850;
      local_var_924 = plStack_848._0_4_;
      local_var_8f8 = *(int32_t *)(param_2 + 0x1bd4);
      local_var_918 = 7;
      local_var_914 = 0;
      local_var_90c = 0;
      plocal_var_5e8 = &memory_allocator_3432_ptr;
      plocal_var_5e0 = stack_array_5d0;
      stack_array_5d0[0] = 0;
      iStack_5d8 = iStack_940;
      puVar24 = (uint64_t *)&system_buffer_ptr;
      if (puVar14 != (uint64_t *)0x0) {
        puVar24 = puVar14;
      }
      strcpy_s(stack_array_5d0,0x80,puVar24);
      function_0db220(&plocal_var_5e8,param_2 + 0x96d8,&local_var_928);
      plocal_var_5e8 = &system_state_ptr;
      local_var_918 = 7;
      local_var_914 = 0;
      local_var_90c = 0;
      plocal_var_548 = &memory_allocator_3432_ptr;
      plocal_var_540 = stack_array_530;
      stack_array_530[0] = 0;
      local_var_538 = plStack_938._0_4_;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar15 != (uint64_t *)0x0) {
        puVar14 = puVar15;
      }
      strcpy_s(stack_array_530,0x80,puVar14);
      function_0db220(&plocal_var_548,param_2 + 0x96e0,&local_var_928);
      plocal_var_548 = &system_state_ptr;
      local_var_918 = 4;
      local_var_914 = 0;
      local_var_90c = 0;
      plocal_var_4a8 = &memory_allocator_3432_ptr;
      plocal_var_4a0 = stack_array_490;
      stack_array_490[0] = 0;
      iStack_498 = iStack_9a8;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar16 != (uint64_t *)0x0) {
        puVar14 = puVar16;
      }
      strcpy_s(stack_array_490,0x80,puVar14);
      function_0db220(&plocal_var_4a8,param_2 + 0x96e8,&local_var_928);
      plocal_var_4a8 = &system_state_ptr;
      local_var_918 = 0x31;
      local_var_914 = 0;
      local_var_90c = 0;
      plocal_var_408 = &memory_allocator_3432_ptr;
      plocal_var_400 = stack_array_3f0;
      stack_array_3f0[0] = 0;
      local_var_3f8 = 0x19;
      strcpy_s(stack_array_3f0,0x80,plocal_var_8c8);
      function_0db220(&plocal_var_408,param_2 + 0x96f0,&local_var_928);
      plocal_var_408 = &system_state_ptr;
      local_var_918 = 4;
      local_var_914 = 0;
      local_var_90c = 0;
      plocal_var_368 = &memory_allocator_3432_ptr;
      plocal_var_360 = stack_array_350;
      stack_array_350[0] = 0;
      local_var_358 = (int)plStack_9b8;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar17 != (uint64_t *)0x0) {
        puVar14 = puVar17;
      }
      strcpy_s(stack_array_350,0x80,puVar14);
      function_0db220(&plocal_var_368,param_2 + 0x96d0,&local_var_928);
      plocal_var_368 = &system_state_ptr;
      local_var_918 = 7;
      plocal_var_2c8 = &memory_allocator_3432_ptr;
      plocal_var_2c0 = stack_array_2b0;
      stack_array_2b0[0] = 0;
      local_var_2b8 = (int)plStack_9b0;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (plocal_var_958 != (uint64_t *)0x0) {
        puVar14 = plocal_var_958;
      }
      strcpy_s(stack_array_2b0,0x80,puVar14);
      function_0db220(&plocal_var_2c8,param_2 + 0x96f8,&local_var_928);
      plocal_var_2c8 = &system_state_ptr;
      plocal_var_960 = &system_data_buffer_ptr;
      if (plocal_var_958 == (uint64_t *)0x0) {
        plocal_var_958 = (uint64_t *)0x0;
        local_var_948 = (uint64_t)local_var_948._4_4_ << 0x20;
        plocal_var_960 = &system_state_ptr;
        plocal_var_8f0 = &system_data_buffer_ptr;
        if (puVar17 == (uint64_t *)0x0) {
          plocal_var_8e8 = (uint64_t *)0x0;
          local_var_8d8 = (uint64_t)local_var_8d8._4_4_ << 0x20;
          plocal_var_8f0 = &system_state_ptr;
          plocal_var_8d0 = &system_data_buffer_ptr;
// WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(plocal_var_8c8);
        }
// WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar17);
      }
// WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(plocal_var_958);
    }
    plStack_9b0 = (int64_t *)CONCAT44(plStack_9b0._4_4_,iVar11 + 0x15);
    if ((iVar11 + 0x15 != 0) && (uVar8 < iVar11 + 0x16U)) {
      local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
      plocal_var_958 = (uint64_t *)DataValidator(system_memory_pool_ptr,plocal_var_958,iVar11 + 0x16U,0x10);
      local_var_948._0_4_ = CoreEngineSystemCleanup(plocal_var_958);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
// WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)plocal_var_958 + 0x15),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  if ((int)plStack_9b0 + (int)plStack_9b8 != 0) {
    uVar8 = (int)plStack_9b0 + (int)plStack_9b8 + 1;
    if (puVar16 == (uint64_t *)0x0) {
      if ((int)uVar8 < 0x10) {
        uVar8 = 0x10;
      }
      puVar16 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)(int)uVar8,0x13);
      *(int8_t *)puVar16 = 0;
    }
    else {
      if (uVar8 <= (uint)local_var_930) goto LAB_1800caa4f;
      local_var_9f8 = CONCAT31(local_var_9f8._1_3_,0x13);
      puVar16 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar16,uVar8,0x10);
    }
    plocal_var_998 = puVar16;
    local_var_988._0_4_ = CoreEngineSystemCleanup(puVar16);
  }
LAB_1800caa4f:
// WARNING: Subroutine does not return
  memcpy((int8_t *)((int64_t)puVar16 + 0x12),*(uint64_t *)(param_2 + 0x3528),
         (int64_t)(*(int *)(param_2 + 0x3530) + 1));
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address