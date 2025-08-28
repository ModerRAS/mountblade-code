#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_01_part041_sub002_sub002.c - 1 个函数

// 函数: void FUN_1800ca380(int64_t param_1,int64_t param_2)
void FUN_1800ca380(int64_t param_1,int64_t param_2)

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
  int8_t auStack_a18 [32];
  int32_t uStack_9f8;
  uint64_t uStack_9f0;
  int32_t uStack_9e8;
  int32_t uStack_9e0;
  int32_t uStack_9d8;
  int64_t *plStack_9d0;
  int8_t uStack_9c8;
  int32_t uStack_9c0;
  int64_t *plStack_9b8;
  int64_t *plStack_9b0;
  int iStack_9a8;
  int32_t uStack_9a4;
  void *puStack_9a0;
  uint64_t *puStack_998;
  int32_t uStack_990;
  uint64_t uStack_988;
  void *puStack_980;
  int8_t *puStack_978;
  uint uStack_970;
  uint64_t uStack_968;
  void *puStack_960;
  uint64_t *puStack_958;
  int32_t uStack_950;
  uint64_t uStack_948;
  int iStack_940;
  int32_t uStack_93c;
  int64_t *plStack_938;
  uint64_t uStack_930;
  int32_t uStack_928;
  int32_t uStack_924;
  int32_t uStack_920;
  int32_t uStack_91c;
  int32_t uStack_918;
  uint64_t uStack_914;
  uint64_t uStack_90c;
  int8_t uStack_904;
  int32_t uStack_903;
  int32_t uStack_8ff;
  int32_t uStack_8f8;
  int8_t uStack_8f4;
  void *puStack_8f0;
  uint64_t *puStack_8e8;
  int32_t uStack_8e0;
  uint64_t uStack_8d8;
  void *puStack_8d0;
  uint64_t *puStack_8c8;
  int32_t uStack_8c0;
  uint64_t uStack_8b8;
  void *puStack_8b0;
  uint64_t *puStack_8a8;
  int32_t uStack_8a0;
  uint64_t uStack_898;
  void *puStack_890;
  uint64_t *puStack_888;
  int32_t uStack_880;
  uint64_t uStack_878;
  void *puStack_870;
  int32_t *puStack_868;
  int32_t uStack_860;
  uint64_t uStack_858;
  int32_t uStack_850;
  int32_t uStack_84c;
  int64_t *plStack_848;
  uint64_t uStack_840;
  int32_t uStack_838;
  uint64_t uStack_834;
  uint64_t uStack_82c;
  int32_t uStack_824;
  int32_t uStack_820;
  int64_t *plStack_818;
  int32_t uStack_810;
  int8_t uStack_80c;
  uint uStack_808;
  uint uStack_804;
  int32_t uStack_800;
  int32_t uStack_7fc;
  int32_t uStack_7f8;
  int32_t uStack_7f4;
  int32_t uStack_7f0;
  int64_t *plStack_7e8;
  int64_t *plStack_7e0;
  int64_t *plStack_7d8;
  int64_t *plStack_7d0;
  uint64_t uStack_7c8;
  int64_t *plStack_7c0;
  uint64_t auStack_7b8 [2];
  void *puStack_7a8;
  void *puStack_7a0;
  int32_t uStack_798;
  uint8_t auStack_790 [32];
  void *puStack_770;
  void *puStack_768;
  int32_t uStack_760;
  uint8_t auStack_758 [32];
  void *puStack_738;
  void *puStack_730;
  int32_t uStack_728;
  uint8_t auStack_720 [32];
  void *puStack_700;
  int8_t *puStack_6f8;
  int32_t uStack_6f0;
  int8_t auStack_6e8 [32];
  void *puStack_6c8;
  int8_t *puStack_6c0;
  int32_t uStack_6b8;
  int8_t auStack_6b0 [40];
  void *puStack_688;
  int8_t *puStack_680;
  int32_t uStack_678;
  int8_t auStack_670 [136];
  void *puStack_5e8;
  int8_t *puStack_5e0;
  int iStack_5d8;
  int8_t auStack_5d0 [136];
  void *puStack_548;
  int8_t *puStack_540;
  int32_t uStack_538;
  int8_t auStack_530 [136];
  void *puStack_4a8;
  int8_t *puStack_4a0;
  int iStack_498;
  int8_t auStack_490 [136];
  void *puStack_408;
  int8_t *puStack_400;
  int32_t uStack_3f8;
  int8_t auStack_3f0 [136];
  void *puStack_368;
  int8_t *puStack_360;
  int32_t uStack_358;
  int8_t auStack_350 [136];
  void *puStack_2c8;
  int8_t *puStack_2c0;
  int32_t uStack_2b8;
  int8_t auStack_2b0 [136];
  void *puStack_228;
  int8_t *puStack_220;
  int32_t uStack_218;
  int8_t auStack_210 [136];
  void *puStack_188;
  int8_t *puStack_180;
  int32_t uStack_178;
  int8_t auStack_170 [136];
  void *puStack_e8;
  int8_t *puStack_e0;
  int32_t uStack_d8;
  int8_t auStack_d0 [136];
  uint64_t uStack_48;
  
  uStack_7c8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a18;
  uVar21 = 0;
  uVar8 = 0;
  uVar10 = 0;
  if (*(char *)(param_2 + 0x9a31) != '\0') {
    lVar12 = FUN_180244ff0(param_2);
    uVar1 = *(ushort *)(lVar12 + 0x32c);
    lVar12 = FUN_180244ff0(param_2);
    uVar2 = *(ushort *)(lVar12 + 0x32e);
    if (((float)uVar1 != *(float *)(system_operation_state + 0x17ec)) ||
       ((float)uVar2 != *(float *)(system_operation_state + 0x17f0))) {
      puStack_870 = &system_data_buffer_ptr;
      uStack_858 = 0;
      puStack_868 = (int32_t *)0x0;
      uStack_860 = 0;
      puVar13 = (int32_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar13 = 0;
      puStack_868 = puVar13;
      uVar7 = CoreEngineSystemCleanup(puVar13);
      *puVar13 = 0x645f6372;
      *(int16_t *)(puVar13 + 1) = 0x5f73;
      *(int8_t *)((int64_t)puVar13 + 6) = 0;
      uStack_860 = 6;
      iVar11 = *(int *)(param_2 + 0x3530);
      uStack_858._0_4_ = uVar7;
      if (0 < iVar11) {
        if ((iVar11 != -6) && (uVar7 < iVar11 + 7U)) {
          uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
          puVar13 = (int32_t *)DataValidator(system_memory_pool_ptr,puVar13,iVar11 + 7U,0x10);
          puStack_868 = puVar13;
          uStack_858._0_4_ = CoreEngineSystemCleanup(puVar13);
          iVar11 = *(int *)(param_2 + 0x3530);
        }
                    // WARNING: Subroutine does not return
        memcpy((int8_t *)((int64_t)puVar13 + 6),*(uint64_t *)(param_2 + 0x3528),
               (int64_t)(iVar11 + 1));
      }
      uStack_800 = 1;
      uStack_7f4 = 0x1018a;
      uStack_7f8 = 0;
      uStack_7fc = 0x2f;
      uStack_7f0 = *(int32_t *)(param_2 + 0x1bd4);
      puStack_688 = &memory_allocator_3432_ptr;
      puStack_680 = auStack_670;
      auStack_670[0] = 0;
      uStack_678 = 6;
      puVar23 = (int32_t *)&system_buffer_ptr;
      if (puVar13 != (int32_t *)0x0) {
        puVar23 = puVar13;
      }
      uStack_808 = (uint)uVar1;
      uStack_804 = (uint)uVar2;
      strcpy_s(auStack_670,0x80,puVar23);
      FUN_1800db370(&puStack_688,param_2 + 0x96a8,&uStack_808);
      puStack_688 = &system_state_ptr;
      puStack_870 = &system_data_buffer_ptr;
      if (puVar13 != (int32_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar13);
      }
      puStack_868 = (int32_t *)0x0;
      uStack_858 = (uint64_t)uStack_858._4_4_ << 0x20;
      puStack_870 = &system_state_ptr;
    }
  }
  cVar6 = func_0x0001800e2bf0(param_1,param_2);
  if (cVar6 == '\0') {
    uVar7 = uVar10;
    if (*(int *)(param_2 + 8) != -1) {
      uVar7 = *(uint *)(param_2 + 0x18);
    }
    if ((uVar7 & 2) != 0) {
      lVar12 = FUN_180244ff0(param_2);
      uVar1 = *(ushort *)(lVar12 + 0x32c);
      lVar12 = FUN_180244ff0(param_2);
      uStack_838 = 1;
      uStack_82c = 0;
      uStack_824 = 0;
      uStack_930 = 0;
      plStack_818 = (int64_t *)0x0;
      uStack_80c = 0;
      uStack_840 = (uint64_t)CONCAT24(*(ushort *)(lVar12 + 0x32e) >> 1,(uint)(uVar1 >> 1));
      uStack_834 = 0x500000001;
      uStack_820 = 0x1000001;
      uStack_810 = *(int32_t *)(param_2 + 0x1bd4);
      puStack_7a8 = &processed_var_672_ptr;
      puStack_7a0 = auStack_790;
      auStack_790[0] = 0;
      uStack_798 = 7;
      strcpy_s(auStack_790,0x20,&rendering_buffer_2456_ptr);
      puStack_228 = &memory_allocator_3432_ptr;
      puStack_220 = auStack_210;
      auStack_210[0] = 0;
      uStack_218 = uStack_798;
      puVar25 = &system_buffer_ptr;
      if (puStack_7a0 != (void *)0x0) {
        puVar25 = puStack_7a0;
      }
      uVar31 = strcpy_s(auStack_210,0x80,puVar25);
      puVar14 = (uint64_t *)FUN_1800b2450(uVar31,&uStack_850,&puStack_228,&uStack_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_848 = *(int64_t **)(param_2 + 0x98d0);
      *(uint64_t *)(param_2 + 0x98d0) = uVar31;
      if (plStack_848 != (int64_t *)0x0) {
        (**(code **)(*plStack_848 + 0x38))();
      }
      if ((int64_t *)CONCAT44(uStack_84c,uStack_850) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(uStack_84c,uStack_850) + 0x38))();
      }
      puStack_228 = &system_state_ptr;
      puStack_7a8 = &system_state_ptr;
      puStack_770 = &processed_var_672_ptr;
      puStack_768 = auStack_758;
      auStack_758[0] = 0;
      uStack_760 = 0xb;
      strcpy_s(auStack_758,0x20,&rendering_buffer_2440_ptr);
      puStack_188 = &memory_allocator_3432_ptr;
      puStack_180 = auStack_170;
      auStack_170[0] = 0;
      uStack_178 = uStack_760;
      puVar25 = &system_buffer_ptr;
      if (puStack_768 != (void *)0x0) {
        puVar25 = puStack_768;
      }
      uVar31 = strcpy_s(auStack_170,0x80,puVar25);
      puVar14 = (uint64_t *)FUN_1800b2450(uVar31,&iStack_940,&puStack_188,&uStack_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_938 = *(int64_t **)(param_2 + 0x98d8);
      *(uint64_t *)(param_2 + 0x98d8) = uVar31;
      if (plStack_938 != (int64_t *)0x0) {
        (**(code **)(*plStack_938 + 0x38))();
      }
      if ((int64_t *)CONCAT44(uStack_93c,iStack_940) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(uStack_93c,iStack_940) + 0x38))();
      }
      puStack_188 = &system_state_ptr;
      puStack_770 = &system_state_ptr;
      puStack_738 = &processed_var_672_ptr;
      puStack_730 = auStack_720;
      auStack_720[0] = 0;
      uStack_728 = 0xc;
      strcpy_s(auStack_720,0x20,&rendering_buffer_2480_ptr);
      puStack_e8 = &memory_allocator_3432_ptr;
      puStack_e0 = auStack_d0;
      auStack_d0[0] = 0;
      uStack_d8 = uStack_728;
      puVar25 = &system_buffer_ptr;
      if (puStack_730 != (void *)0x0) {
        puVar25 = puStack_730;
      }
      uVar31 = strcpy_s(auStack_d0,0x80,puVar25);
      puVar14 = (uint64_t *)FUN_1800b2450(uVar31,&iStack_9a8,&puStack_e8,&uStack_840);
      uVar31 = *puVar14;
      *puVar14 = 0;
      plStack_9b0 = *(int64_t **)(param_2 + 0x98e0);
      *(uint64_t *)(param_2 + 0x98e0) = uVar31;
      if (plStack_9b0 != (int64_t *)0x0) {
        (**(code **)(*plStack_9b0 + 0x38))();
      }
      if ((int64_t *)CONCAT44(uStack_9a4,iStack_9a8) != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)CONCAT44(uStack_9a4,iStack_9a8) + 0x38))();
      }
      puStack_e8 = &system_state_ptr;
      puStack_738 = &system_state_ptr;
      puStack_700 = &processed_var_672_ptr;
      puStack_6f8 = auStack_6e8;
      auStack_6e8[0] = 0;
      uStack_6f0 = 0xc;
      uVar31 = strcpy_s(auStack_6e8,0x20,&rendering_buffer_2464_ptr);
      uStack_9c0 = 1;
      uStack_9c8 = 1;
      plStack_9d0 = (int64_t *)0x0;
      uStack_9d8 = 4;
      uStack_9e0 = 4;
      uStack_9e8 = 5;
      uStack_9f0 = (uint64_t *)((uint64_t)uStack_9f0._4_4_ << 0x20);
      uStack_9f8 = 5;
      puVar14 = (uint64_t *)
                FUN_1800b0a10(uVar31,&plStack_7e8,*(int32_t *)(param_2 + 0x1bd4),&puStack_700);
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
      puStack_700 = &system_state_ptr;
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
      puStack_980 = &system_data_buffer_ptr;
      uStack_968 = 0;
      puStack_978 = (int8_t *)0x0;
      uStack_970 = 0;
      if (*(int *)(param_2 + 0x3530) != 0) {
        iVar11 = *(int *)(param_2 + 0x3530) + 1;
        if (iVar11 < 0x10) {
          iVar11 = 0x10;
        }
        puStack_978 = (int8_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,(int64_t)iVar11,
                                    CONCAT71((int7)(uVar28 >> 8),0x13));
        *puStack_978 = 0;
        uVar22 = (uint64_t)puStack_978 & 0xffffffffffc00000;
        if (uVar22 != 0) {
          lVar12 = ((int64_t)puStack_978 - uVar22 >> 0x10) * 0x50 + 0x80 + uVar22;
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
            uVar8 = uVar8 - (int)(((int64_t)puStack_978 -
                                  (((int64_t)((int64_t)puVar26 + (-0x80 - uVar22)) / 0x50) *
                                   0x10000 + uVar22)) % uVar28);
          }
        }
        uStack_968 = CONCAT44(uStack_968._4_4_,uVar8);
        if (0 < *(int *)(param_2 + 0x3530)) {
          puVar25 = &system_buffer_ptr;
          if (*(void **)(param_2 + 0x3528) != (void *)0x0) {
            puVar25 = *(void **)(param_2 + 0x3528);
          }
                    // WARNING: Subroutine does not return
          memcpy(puStack_978,puVar25,(int64_t)(*(int *)(param_2 + 0x3530) + 1));
        }
      }
      if ((*(int64_t *)(param_2 + 0x3528) != 0) &&
         (uStack_970 = 0, puStack_978 != (int8_t *)0x0)) {
        *puStack_978 = 0;
      }
      CoreEngineDataBufferProcessor(&puStack_980,0x13);
      puVar14 = (uint64_t *)(puStack_978 + uStack_970);
      *puVar14 = 0x665f746867696c5f;
      puVar14[1] = 0x6675625f73656361;
      *(int32_t *)(puVar14 + 2) = 0x726566;
      uStack_970 = 0x13;
      plVar18 = (int64_t *)
                FUN_1800e81f0(puVar14,&plStack_7e0,*(uint64_t *)(param_1 + 0x2338),
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
      uStack_9d8 = *(int32_t *)(param_1 + 0x2330);
      uStack_9c0 = 1;
      uStack_9c8 = 1;
      uStack_9e0 = 4;
      uStack_9e8 = 5;
      uStack_9f0 = (uint64_t *)CONCAT44(uStack_9f0._4_4_,3);
      uStack_9f8 = 0x21;
      plStack_9d0 = plVar18;
      uVar31 = FUN_1800b0a10(uVar31,&plStack_7d8,*(int32_t *)(param_2 + 0x1bd4),&puStack_980);
      FUN_180060b80(param_2 + 39000,uVar31);
      if (plStack_7d8 != (int64_t *)0x0) {
        (**(code **)(*plStack_7d8 + 0x38))();
      }
      if (plVar18 != (int64_t *)0x0) {
        (**(code **)(*plVar18 + 0x38))(plVar18);
      }
      puStack_980 = &system_data_buffer_ptr;
      if (puStack_978 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      puStack_978 = (int8_t *)0x0;
      uStack_968 = uStack_968 & 0xffffffff00000000;
      puStack_980 = &system_state_ptr;
    }
    lVar12 = FUN_180244ff0(param_2);
    if (lVar12 != 0) {
      lVar12 = FUN_180244ff0(param_2);
      *(int32_t *)(lVar12 + 0x3a8) = *(int32_t *)(param_1 + 0x1500);
    }
    lVar12 = FUN_180245280(param_2);
    if (lVar12 != 0) {
      lVar12 = FUN_180245280(param_2);
      *(int32_t *)(lVar12 + 0x3a8) = *(int32_t *)(param_1 + 0x1500);
    }
    if ((*(int **)(param_2 + 0x98c8) != (int *)0x0) && (**(int **)(param_2 + 0x98c8) != 0)) {
      piVar3 = *(int **)(param_2 + 0x98c8);
      puStack_6c8 = &processed_var_672_ptr;
      puStack_6c0 = auStack_6b0;
      auStack_6b0[0] = 0;
      uStack_6b8 = 0x14;
      uVar31 = strcpy_s(auStack_6b0,0x20,&rendering_buffer_2496_ptr);
      uStack_9c0 = 1;
      uStack_9c8 = 1;
      plStack_9d0 = (int64_t *)0x0;
      uStack_9d8 = 0x10000;
      uStack_9e0 = 0x20;
      uStack_9e8 = 0;
      uStack_9f0 = (uint64_t *)CONCAT44(uStack_9f0._4_4_,3);
      uStack_9f8 = 0x61;
      uVar31 = FUN_1800b0a10(uVar31,&plStack_7d0,*(int32_t *)(param_2 + 0x1bd4),&puStack_6c8);
      plVar18 = (int64_t *)(param_2 + 0x98c0);
      FUN_180060b80(plVar18,uVar31);
      if (plStack_7d0 != (int64_t *)0x0) {
        (**(code **)(*plStack_7d0 + 0x38))();
      }
      puStack_6c8 = &system_state_ptr;
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
      uStack_9f0 = auStack_7b8;
      uStack_9f8 = 0;
      iVar11 = (**(code **)(*plVar4 + 0x70))(plVar4,*(uint64_t *)(lVar19 + 0x10),0,4);
      if (iVar11 < 0) {
        FUN_180220810(iVar11,&ui_system_data_1768_ptr);
      }
      if (uVar8 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(auStack_7b8[0],*(uint64_t *)(piVar3 + 2),0x20000);
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
    SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_a18);
  }
  uStack_850 = *(int32_t *)(param_2 + 0x3590);
  plStack_848 = (int64_t *)CONCAT44(plStack_848._4_4_,*(int32_t *)(param_2 + 0x3594));
  puStack_890 = &system_data_buffer_ptr;
  uStack_878 = 0;
  puStack_888 = (uint64_t *)0x0;
  uStack_880 = 0;
  puVar14 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1c,0x13);
  *(int8_t *)puVar14 = 0;
  puStack_888 = puVar14;
  uVar8 = CoreEngineSystemCleanup(puVar14);
  *puVar14 = 0x5f72656666756267;
  puVar14[1] = 0x745f6f6465626c61;
  puVar14[2] = 0x7373656e6b636968;
  *(int32_t *)(puVar14 + 3) = 0x293028;
  iStack_940 = 0x1b;
  uStack_880 = 0x1b;
  iVar11 = *(int *)(param_2 + 0x3530);
  uStack_878._0_4_ = uVar8;
  if (0 < iVar11) {
    iStack_940 = iVar11 + 0x1b;
    if ((iStack_940 != 0) && (uVar8 < iVar11 + 0x1cU)) {
      uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
      puVar14 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar14,iVar11 + 0x1cU,0x10);
      puStack_888 = puVar14;
      uStack_878._0_4_ = CoreEngineSystemCleanup(puVar14);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar14 + 0x1b),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  puStack_8b0 = &system_data_buffer_ptr;
  uStack_898 = 0;
  puStack_8a8 = (uint64_t *)0x0;
  uStack_8a0 = 0;
  puVar15 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x20,0x13);
  *(int8_t *)puVar15 = 0;
  puStack_8a8 = puVar15;
  uVar8 = CoreEngineSystemCleanup(puVar15);
  *puVar15 = 0x5f72656666756267;
  puVar15[1] = 0x6f6c675f63657073;
  *(int32_t *)(puVar15 + 2) = 0x615f7373;
  *(int32_t *)((int64_t)puVar15 + 0x14) = 0x68735f6f;
  *(int32_t *)(puVar15 + 3) = 0x776f6461;
  *(int32_t *)((int64_t)puVar15 + 0x1c) = 0x293128;
  plStack_938 = (int64_t *)CONCAT44(plStack_938._4_4_,0x1f);
  uStack_8a0 = 0x1f;
  iVar11 = *(int *)(param_2 + 0x3530);
  uStack_898._0_4_ = uVar8;
  if (0 < iVar11) {
    plStack_938 = (int64_t *)CONCAT44(plStack_938._4_4_,iVar11 + 0x1f);
    if ((iVar11 + 0x1f != 0) && (uVar8 < iVar11 + 0x20U)) {
      uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
      puVar15 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar15,iVar11 + 0x20U,0x10);
      puStack_8a8 = puVar15;
      uStack_898._0_4_ = CoreEngineSystemCleanup(puVar15);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar15 + 0x1f),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  puStack_9a0 = &system_data_buffer_ptr;
  uStack_988 = 0;
  puStack_998 = (uint64_t *)0x0;
  uStack_990 = 0;
  puVar16 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x13,0x13);
  *(int8_t *)puVar16 = 0;
  puStack_998 = puVar16;
  uStack_930 = CoreEngineSystemCleanup(puVar16);
  uVar8 = (uint)uStack_930;
  *puVar16 = 0x5f72656666756267;
  puVar16[1] = 0x28736c616d726f6e;
  *(int16_t *)(puVar16 + 2) = 0x2932;
  *(int8_t *)((int64_t)puVar16 + 0x12) = 0;
  iStack_9a8 = 0x12;
  uStack_990 = 0x12;
  iVar11 = *(int *)(param_2 + 0x3530);
  plStack_9b8._0_4_ = 0x12;
  uStack_988._0_4_ = uVar8;
  if (0 < iVar11) {
    iStack_9a8 = iVar11 + 0x12;
    plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,iStack_9a8);
    if ((iStack_9a8 != 0) && (uVar8 < iVar11 + 0x13U)) {
      uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
      puVar16 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar16,iVar11 + 0x13U,0x10);
      puStack_998 = puVar16;
      uStack_930 = CoreEngineSystemCleanup(puVar16);
      uStack_988._0_4_ = (uint)uStack_930;
      iVar11 = *(int *)(param_2 + 0x3530);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puVar16 + 0x12),*(uint64_t *)(param_2 + 0x3528),
           (int64_t)(iVar11 + 1));
  }
  puStack_8d0 = &system_data_buffer_ptr;
  uStack_8b8 = 0;
  puStack_8c8 = (uint64_t *)0x0;
  uStack_8c0 = 0;
  puStack_8c8 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
  *(int8_t *)puStack_8c8 = 0;
  uVar9 = CoreEngineSystemCleanup(puStack_8c8);
  uStack_8b8 = CONCAT44(uStack_8b8._4_4_,uVar9);
  *puStack_8c8 = 0x5f72656666756267;
  puStack_8c8[1] = 0x6e5f786574726576;
  puStack_8c8[2] = 0x3328736c616d726f;
  *(int16_t *)(puStack_8c8 + 3) = 0x29;
  uStack_8c0 = 0x19;
  plStack_9b0._0_4_ = *(int *)(param_2 + 0x3530);
  if ((int)plStack_9b0 < 1) {
    puStack_8f0 = &system_data_buffer_ptr;
    uStack_8d8 = 0;
    puStack_8e8 = (uint64_t *)0x0;
    uStack_8e0 = 0;
    puVar17 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x1a,0x13);
    *(int8_t *)puVar17 = 0;
    puStack_8e8 = puVar17;
    uVar8 = CoreEngineSystemCleanup(puVar17);
    *puVar17 = 0x5f72656666756267;
    puVar17[1] = 0x765f6e6f69746f6d;
    puVar17[2] = 0x342873726f746365;
    *(int16_t *)(puVar17 + 3) = 0x29;
    plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,0x19);
    uStack_8e0 = 0x19;
    iVar11 = *(int *)(param_2 + 0x3530);
    uStack_8d8._0_4_ = uVar8;
    if (0 < iVar11) {
      plStack_9b8 = (int64_t *)CONCAT44(plStack_9b8._4_4_,iVar11 + 0x19);
      if ((iVar11 + 0x19 != 0) && (uVar8 < iVar11 + 0x1aU)) {
        uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
        puVar17 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar17,iVar11 + 0x1aU,0x10);
        puStack_8e8 = puVar17;
        uStack_8d8._0_4_ = CoreEngineSystemCleanup(puVar17);
        iVar11 = *(int *)(param_2 + 0x3530);
      }
                    // WARNING: Subroutine does not return
      memcpy((int8_t *)((int64_t)puVar17 + 0x19),*(uint64_t *)(param_2 + 0x3528),
             (int64_t)(iVar11 + 1));
    }
    puStack_960 = &system_data_buffer_ptr;
    uStack_948 = 0;
    puStack_958 = (uint64_t *)0x0;
    uStack_950 = 0;
    puStack_958 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x16,0x13);
    *(int8_t *)puStack_958 = 0;
    uVar8 = CoreEngineSystemCleanup(puStack_958);
    *puStack_958 = 0x5f72656666756267;
    puStack_958[1] = 0x6c6f7365725f7476;
    *(int32_t *)(puStack_958 + 2) = 0x35286576;
    *(int16_t *)((int64_t)puStack_958 + 0x14) = 0x29;
    plStack_9b0 = (int64_t *)CONCAT44(plStack_9b0._4_4_,0x15);
    uStack_950 = 0x15;
    iVar11 = *(int *)(param_2 + 0x3530);
    uStack_948._0_4_ = uVar8;
    if (iVar11 < 1) {
      uStack_920 = 1;
      uStack_91c = 1;
      uStack_903 = 1;
      uStack_904 = 0;
      uStack_8ff = 0x101;
      uStack_8f4 = 0;
      uStack_928 = uStack_850;
      uStack_924 = plStack_848._0_4_;
      uStack_8f8 = *(int32_t *)(param_2 + 0x1bd4);
      uStack_918 = 7;
      uStack_914 = 0;
      uStack_90c = 0;
      puStack_5e8 = &memory_allocator_3432_ptr;
      puStack_5e0 = auStack_5d0;
      auStack_5d0[0] = 0;
      iStack_5d8 = iStack_940;
      puVar24 = (uint64_t *)&system_buffer_ptr;
      if (puVar14 != (uint64_t *)0x0) {
        puVar24 = puVar14;
      }
      strcpy_s(auStack_5d0,0x80,puVar24);
      FUN_1800db220(&puStack_5e8,param_2 + 0x96d8,&uStack_928);
      puStack_5e8 = &system_state_ptr;
      uStack_918 = 7;
      uStack_914 = 0;
      uStack_90c = 0;
      puStack_548 = &memory_allocator_3432_ptr;
      puStack_540 = auStack_530;
      auStack_530[0] = 0;
      uStack_538 = plStack_938._0_4_;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar15 != (uint64_t *)0x0) {
        puVar14 = puVar15;
      }
      strcpy_s(auStack_530,0x80,puVar14);
      FUN_1800db220(&puStack_548,param_2 + 0x96e0,&uStack_928);
      puStack_548 = &system_state_ptr;
      uStack_918 = 4;
      uStack_914 = 0;
      uStack_90c = 0;
      puStack_4a8 = &memory_allocator_3432_ptr;
      puStack_4a0 = auStack_490;
      auStack_490[0] = 0;
      iStack_498 = iStack_9a8;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar16 != (uint64_t *)0x0) {
        puVar14 = puVar16;
      }
      strcpy_s(auStack_490,0x80,puVar14);
      FUN_1800db220(&puStack_4a8,param_2 + 0x96e8,&uStack_928);
      puStack_4a8 = &system_state_ptr;
      uStack_918 = 0x31;
      uStack_914 = 0;
      uStack_90c = 0;
      puStack_408 = &memory_allocator_3432_ptr;
      puStack_400 = auStack_3f0;
      auStack_3f0[0] = 0;
      uStack_3f8 = 0x19;
      strcpy_s(auStack_3f0,0x80,puStack_8c8);
      FUN_1800db220(&puStack_408,param_2 + 0x96f0,&uStack_928);
      puStack_408 = &system_state_ptr;
      uStack_918 = 4;
      uStack_914 = 0;
      uStack_90c = 0;
      puStack_368 = &memory_allocator_3432_ptr;
      puStack_360 = auStack_350;
      auStack_350[0] = 0;
      uStack_358 = (int)plStack_9b8;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puVar17 != (uint64_t *)0x0) {
        puVar14 = puVar17;
      }
      strcpy_s(auStack_350,0x80,puVar14);
      FUN_1800db220(&puStack_368,param_2 + 0x96d0,&uStack_928);
      puStack_368 = &system_state_ptr;
      uStack_918 = 7;
      puStack_2c8 = &memory_allocator_3432_ptr;
      puStack_2c0 = auStack_2b0;
      auStack_2b0[0] = 0;
      uStack_2b8 = (int)plStack_9b0;
      puVar14 = (uint64_t *)&system_buffer_ptr;
      if (puStack_958 != (uint64_t *)0x0) {
        puVar14 = puStack_958;
      }
      strcpy_s(auStack_2b0,0x80,puVar14);
      FUN_1800db220(&puStack_2c8,param_2 + 0x96f8,&uStack_928);
      puStack_2c8 = &system_state_ptr;
      puStack_960 = &system_data_buffer_ptr;
      if (puStack_958 == (uint64_t *)0x0) {
        puStack_958 = (uint64_t *)0x0;
        uStack_948 = (uint64_t)uStack_948._4_4_ << 0x20;
        puStack_960 = &system_state_ptr;
        puStack_8f0 = &system_data_buffer_ptr;
        if (puVar17 == (uint64_t *)0x0) {
          puStack_8e8 = (uint64_t *)0x0;
          uStack_8d8 = (uint64_t)uStack_8d8._4_4_ << 0x20;
          puStack_8f0 = &system_state_ptr;
          puStack_8d0 = &system_data_buffer_ptr;
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(puStack_8c8);
        }
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner(puVar17);
      }
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(puStack_958);
    }
    plStack_9b0 = (int64_t *)CONCAT44(plStack_9b0._4_4_,iVar11 + 0x15);
    if ((iVar11 + 0x15 != 0) && (uVar8 < iVar11 + 0x16U)) {
      uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
      puStack_958 = (uint64_t *)DataValidator(system_memory_pool_ptr,puStack_958,iVar11 + 0x16U,0x10);
      uStack_948._0_4_ = CoreEngineSystemCleanup(puStack_958);
      iVar11 = *(int *)(param_2 + 0x3530);
    }
                    // WARNING: Subroutine does not return
    memcpy((int8_t *)((int64_t)puStack_958 + 0x15),*(uint64_t *)(param_2 + 0x3528),
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
      if (uVar8 <= (uint)uStack_930) goto LAB_1800caa4f;
      uStack_9f8 = CONCAT31(uStack_9f8._1_3_,0x13);
      puVar16 = (uint64_t *)DataValidator(system_memory_pool_ptr,puVar16,uVar8,0x10);
    }
    puStack_998 = puVar16;
    uStack_988._0_4_ = CoreEngineSystemCleanup(puVar16);
  }
LAB_1800caa4f:
                    // WARNING: Subroutine does not return
  memcpy((int8_t *)((int64_t)puVar16 + 0x12),*(uint64_t *)(param_2 + 0x3528),
         (int64_t)(*(int *)(param_2 + 0x3530) + 1));
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address






