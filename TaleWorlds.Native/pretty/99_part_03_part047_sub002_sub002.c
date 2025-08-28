#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_03_part047_sub002_sub002.c - 1 个函数

// 函数: void FUN_1801fa810(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4)
void FUN_1801fa810(int64_t param_1,int64_t param_2,int64_t param_3,uint param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  bool bVar3;
  int32_t uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint64_t *puVar9;
  int16_t *puVar10;
  int8_t *puVar11;
  int8_t *puVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  char *pcVar15;
  int *piVar16;
  uint64_t *puVar17;
  char *pcVar18;
  char *pcVar19;
  int64_t lVar20;
  int64_t lVar21;
  void *puVar22;
  void *puVar23;
  uint64_t *puVar24;
  uint64_t *puVar25;
  char *pcVar26;
  char *pcVar27;
  uint64_t uVar28;
  bool bVar29;
  int64_t lStackX_10;
  int64_t lStackX_18;
  uint auStackX_20 [2];
  uint64_t uStack_210;
  uint64_t uStack_208;
  int iStack_200;
  uint64_t uStack_1f8;
  void *puStack_1f0;
  uint64_t *puStack_1e8;
  uint uStack_1e0;
  uint64_t uStack_1d8;
  void *puStack_1d0;
  uint64_t *puStack_1c8;
  int32_t uStack_1c0;
  uint64_t uStack_1b8;
  void *puStack_1b0;
  int8_t *puStack_1a8;
  int iStack_1a0;
  uint64_t uStack_198;
  void *puStack_190;
  void *puStack_188;
  int32_t uStack_180;
  uint64_t uStack_178;
  void *puStack_170;
  uint64_t *puStack_168;
  int32_t uStack_160;
  uint64_t uStack_158;
  void *puStack_150;
  int64_t lStack_148;
  int32_t uStack_140;
  uint64_t uStack_138;
  void *puStack_130;
  int64_t lStack_128;
  uint uStack_120;
  uint64_t uStack_118;
  void *puStack_110;
  int64_t lStack_108;
  int32_t uStack_100;
  uint64_t uStack_f8;
  void *puStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  uint64_t uStack_d8;
  void *puStack_d0;
  uint64_t uStack_c8;
  int32_t uStack_c0;
  uint64_t uStack_b8;
  void *puStack_b0;
  uint64_t uStack_a8;
  int32_t uStack_a0;
  uint64_t uStack_98;
  int64_t *plStack_90;
  uint64_t uStack_88;
  
  uStack_88 = 0xfffffffffffffffe;
  lStackX_10 = param_2;
  lStackX_18 = param_3;
  auStackX_20[0] = param_4;
  FUN_180631000(param_3,&unknown_var_8344_ptr,param_1 + 0x380);
  uStack_210 = (int64_t *)(param_1 + 0x388);
  pcVar26 = "name";
  do {
    pcVar27 = pcVar26;
    pcVar26 = pcVar27 + 1;
  } while (*pcVar26 != '\0');
  for (puVar9 = *(uint64_t **)(param_3 + 0x40); puVar9 != (uint64_t *)0x0;
      puVar9 = (uint64_t *)puVar9[6]) {
    pcVar26 = (char *)*puVar9;
    if (pcVar26 == (char *)0x0) {
      pcVar26 = (char *)0x180d48d24;
      pcVar18 = (char *)0x0;
    }
    else {
      pcVar18 = (char *)puVar9[2];
    }
    if (pcVar18 == pcVar27 + -0x180a03a83) {
      pcVar18 = pcVar18 + (int64_t)pcVar26;
      if (pcVar18 <= pcVar26) {
LAB_1801fa8f4:
        lVar21 = 0x180d48d24;
        if (puVar9[1] != 0) {
          lVar21 = puVar9[1];
        }
        (**(code **)(*uStack_210 + 0x10))(uStack_210,lVar21);
        break;
      }
      lVar21 = (int64_t)&system_flag_3a84 - (int64_t)pcVar26;
      while (*pcVar26 == pcVar26[lVar21]) {
        pcVar26 = pcVar26 + 1;
        if (pcVar18 <= pcVar26) goto LAB_1801fa8f4;
      }
    }
  }
  puStack_170 = &system_data_buffer_ptr;
  uStack_158 = 0;
  puStack_168 = (uint64_t *)0x0;
  uStack_160 = 0;
  puVar9 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
  *(int8_t *)puVar9 = 0;
  puStack_168 = puVar9;
  uVar4 = CoreEngineSystemCleanup(puVar9);
  uStack_158 = CONCAT44(uStack_158._4_4_,uVar4);
  *puVar9 = 0x73656c75646f4d2f;
  *(int16_t *)(puVar9 + 1) = 0x2f;
  uStack_160 = 9;
  iVar5 = FUN_180628d60(param_2,&puStack_170);
  if (iVar5 < 0) {
    plVar1 = (int64_t *)*system_main_module_state;
    auStackX_20[0] = 0;
    plStack_90 = plVar1;
    if (plVar1[1] - *plVar1 >> 5 != 0) {
      puVar12 = (int8_t *)0x0;
      puStack_1d0 = &system_data_buffer_ptr;
      uStack_1b8 = 0;
      puStack_1c8 = (uint64_t *)0x0;
      uStack_1c0 = 0;
      puVar10 = (int16_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *(int8_t *)puVar10 = 0;
      puStack_1c8 = (uint64_t *)puVar10;
      uVar4 = CoreEngineSystemCleanup(puVar10);
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,uVar4);
      *puVar10 = 0x2f;
      uStack_1c0 = 1;
      lVar21 = *plVar1;
      puStack_1f0 = &system_data_buffer_ptr;
      uStack_1d8 = 0;
      puStack_1e8 = (uint64_t *)0x0;
      uStack_1e0 = 0;
      puVar11 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
      *puVar11 = 0;
      puStack_1e8 = (uint64_t *)puVar11;
      uVar6 = CoreEngineSystemCleanup(puVar11);
      *puVar11 = *(int8_t *)puVar10;
      uStack_1e0 = 1;
      puVar11[1] = 0;
      uStack_1d8 = (uint64_t)uVar6;
      iVar5 = *(int *)(lVar21 + 0x10);
      if (iVar5 < 1) {
        puStack_1b0 = &system_data_buffer_ptr;
        uStack_198 = 0;
        puStack_1a8 = (int8_t *)0x0;
        iStack_1a0 = 0;
        if (puVar11 != (int8_t *)0x0) {
          puVar12 = (int8_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,0x10,0x13);
          *puVar12 = 0;
          puStack_1a8 = puVar12;
          uVar4 = CoreEngineSystemCleanup(puVar12);
          uStack_198 = CONCAT44(uStack_198._4_4_,uVar4);
        }
                    // WARNING: Subroutine does not return
        memcpy(puVar12,puVar11,1);
      }
      if ((iVar5 != -1) && (uVar6 < iVar5 + 2U)) {
        puVar11 = (int8_t *)FUN_18062b8b0(system_memory_pool_ptr,puVar11,iVar5 + 2U,0x10,0x13);
        puStack_1e8 = (uint64_t *)puVar11;
        uVar4 = CoreEngineSystemCleanup(puVar11);
        uStack_1d8 = CONCAT44(uStack_1d8._4_4_,uVar4);
        iVar5 = *(int *)(lVar21 + 0x10);
      }
                    // WARNING: Subroutine does not return
      memcpy(puVar11 + 1,*(uint64_t *)(lVar21 + 8),(int64_t)(iVar5 + 1));
    }
  }
  uVar6 = iVar5 + 9;
  if ((int)uVar6 < *(int *)(param_2 + 0x10)) {
    do {
      if (*(char *)((uint64_t)uVar6 + *(int64_t *)(param_2 + 8)) == '/') {
        uVar13 = FUN_180629a40(param_2,&puStack_150,0,uVar6 + 1);
        bVar3 = true;
        bVar29 = false;
        goto LAB_1801fad86;
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < *(int *)(param_2 + 0x10));
  }
  uVar13 = FUN_180627e10(param_2,&puStack_190,&system_flag_e2c8);
  bVar3 = false;
  bVar29 = true;
LAB_1801fad86:
  FUN_18005d190(param_1 + 0x3a8,uVar13);
  if (bVar29) {
    puStack_190 = &system_data_buffer_ptr;
    if (puStack_188 != (void *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    puStack_188 = (void *)0x0;
    uStack_178 = uStack_178 & 0xffffffff00000000;
    puStack_190 = &system_state_ptr;
  }
  pcVar26 = (char *)0x0;
  uVar4 = 0;
  if (bVar3) {
    puStack_150 = &system_data_buffer_ptr;
    if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner();
    }
    lStack_148 = 0;
    uStack_138 = uStack_138 & 0xffffffff00000000;
    puStack_150 = &system_state_ptr;
  }
  lVar21 = FUN_180631960(param_3,&unknown_var_8360_ptr,&uStack_210);
  if (lVar21 != 0) {
    *(int32_t *)(param_1 + 0x300) = (int32_t)uStack_210;
    *(int32_t *)(param_1 + 0x304) = uStack_210._4_4_;
    *(int32_t *)(param_1 + 0x308) = (int32_t)uStack_208;
    *(int32_t *)(param_1 + 0x30c) = uStack_208._4_4_;
    *(int8_t *)(param_1 + 800) = 1;
  }
  lStackX_10 = 0;
  lVar21 = FUN_180631850(param_3,&unknown_var_8408_ptr,&lStackX_10);
  if (lVar21 != 0) {
    *(int64_t *)(param_1 + 0x324) = lStackX_10;
    *(int8_t *)(param_1 + 0x334) = 1;
  }
  lStackX_10 = 0;
  lVar21 = FUN_180631850(param_3,&unknown_var_8416_ptr,&lStackX_10);
  if (lVar21 != 0) {
    *(int64_t *)(param_1 + 0x338) = lStackX_10;
    *(int8_t *)(param_1 + 0x348) = 1;
  }
  lStackX_10 = 0;
  lVar21 = FUN_180631850(param_3,&unknown_var_8376_ptr,&lStackX_10);
  if (lVar21 != 0) {
    *(int64_t *)(param_1 + 0x34c) = lStackX_10;
    *(int8_t *)(param_1 + 0x35c) = 1;
  }
  auStackX_20[0] = auStackX_20[0] & 0xffffff00;
  FUN_180631000(param_3,&unknown_var_8392_ptr,auStackX_20);
  *(int8_t *)(param_1 + 0x381) = (int8_t)auStackX_20[0];
  auStackX_20[0] = auStackX_20[0] & 0xffffff00;
  FUN_180631000(param_3,&unknown_var_8456_ptr,auStackX_20);
  *(int8_t *)(param_1 + 0x382) = (int8_t)auStackX_20[0];
  puStack_130 = &system_data_buffer_ptr;
  uStack_118 = 0;
  lStack_128 = 0;
  uStack_120 = 0;
  pcVar27 = "physics_material";
  do {
    pcVar18 = pcVar27;
    pcVar27 = pcVar18 + 1;
  } while (*pcVar27 != '\0');
  puVar9 = *(uint64_t **)(param_3 + 0x40);
  for (puVar17 = puVar9; puVar17 != (uint64_t *)0x0; puVar17 = (uint64_t *)puVar17[6]) {
    pcVar27 = (char *)*puVar17;
    if (pcVar27 == (char *)0x0) {
      pcVar27 = (char *)0x180d48d24;
      pcVar19 = pcVar26;
    }
    else {
      pcVar19 = (char *)puVar17[2];
    }
    if (pcVar19 == pcVar18 + -0x180a0afff) {
      pcVar19 = pcVar27 + (int64_t)pcVar19;
      if (pcVar19 <= pcVar27) {
LAB_1801faff0:
        lVar21 = puVar17[1];
        goto LAB_1801fb064;
      }
      lVar21 = (int64_t)&unknown_var_1760_ptr - (int64_t)pcVar27;
      while (*pcVar27 == pcVar27[lVar21]) {
        pcVar27 = pcVar27 + 1;
        if (pcVar19 <= pcVar27) goto LAB_1801faff0;
      }
    }
  }
  pcVar27 = "material";
  do {
    pcVar18 = pcVar27;
    pcVar27 = pcVar18 + 1;
  } while (*pcVar27 != '\0');
  do {
    if (puVar9 == (uint64_t *)0x0) goto LAB_1801fb07d;
    pcVar27 = (char *)*puVar9;
    if (pcVar27 == (char *)0x0) {
      pcVar27 = (char *)0x180d48d24;
      pcVar19 = pcVar26;
    }
    else {
      pcVar19 = (char *)puVar9[2];
    }
    if (pcVar19 == pcVar18 + -0x180a04ebf) {
      pcVar19 = pcVar27 + (int64_t)pcVar19;
      if (pcVar19 <= pcVar27) {
LAB_1801fb060:
        lVar21 = puVar9[1];
LAB_1801fb064:
        lVar20 = 0x180d48d24;
        if (lVar21 != 0) {
          lVar20 = lVar21;
        }
        FUN_180627c50(&puStack_130,lVar20);
LAB_1801fb07d:
        uVar6 = uStack_120;
        uVar14 = (uint64_t)uStack_120;
        if (0 < (int)uStack_120) {
          pcVar27 = pcVar26;
          if (uStack_120 == 4) {
            while (pcVar18 = pcVar27 + 1, pcVar27[lStack_128] == pcVar27[0x180a0b57c]) {
              pcVar27 = pcVar18;
              if (pcVar18 == (char *)0x5) goto LAB_1801fb10a;
            }
          }
          if (lStack_128 != 0) {
            CoreEngineDataBufferProcessor(param_1 + 0x1f8,uStack_120);
          }
          if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
            memcpy(*(uint64_t *)(param_1 + 0x200),lStack_128,uVar14);
          }
          *(int32_t *)(param_1 + 0x208) = 0;
          if (*(int64_t *)(param_1 + 0x200) != 0) {
            *(int8_t *)(uVar14 + *(int64_t *)(param_1 + 0x200)) = 0;
          }
          *(int32_t *)(param_1 + 0x214) = uStack_118._4_4_;
          *(int8_t *)(param_1 + 0x238) = 1;
        }
LAB_1801fb10a:
        pcVar27 = "detail_level_adjustment";
        do {
          pcVar18 = pcVar27;
          pcVar27 = pcVar18 + 1;
        } while (*pcVar27 != '\0');
        for (puVar9 = *(uint64_t **)(param_3 + 0x40); puVar9 != (uint64_t *)0x0;
            puVar9 = (uint64_t *)puVar9[6]) {
          pcVar27 = (char *)*puVar9;
          if (pcVar27 == (char *)0x0) {
            pcVar27 = (char *)0x180d48d24;
            pcVar19 = pcVar26;
          }
          else {
            pcVar19 = (char *)puVar9[2];
          }
          if (pcVar19 == pcVar18 + -0x180a0f14f) {
            pcVar19 = pcVar19 + (int64_t)pcVar27;
            if (pcVar19 <= pcVar27) {
LAB_1801fb174:
              pcVar27 = (char *)0x180d48d24;
              if ((char *)puVar9[1] != (char *)0x0) {
                pcVar27 = (char *)puVar9[1];
              }
              uVar14 = 0xffffffffffffffff;
              do {
                uVar14 = uVar14 + 1;
              } while (pcVar27[uVar14] != '\0');
              if (((uVar14 < 3) || (*pcVar27 != '0')) ||
                 (puVar22 = &unknown_var_5412_ptr, (pcVar27[1] + 0xa8U & 0xdf) != 0)) {
                puVar22 = &unknown_var_2208_ptr;
              }
              FUN_18010cbc0(pcVar27,puVar22,auStackX_20);
              *(uint *)(param_1 + 0x294) = auStackX_20[0];
              *(int8_t *)(param_1 + 0x29c) = 1;
              break;
            }
            lVar21 = (int64_t)&unknown_var_8480_ptr - (int64_t)pcVar27;
            while (*pcVar27 == pcVar27[lVar21]) {
              pcVar27 = pcVar27 + 1;
              if (pcVar19 <= pcVar27) goto LAB_1801fb174;
            }
          }
        }
        puStack_190 = &system_data_buffer_ptr;
        uStack_178 = 0;
        puStack_188 = (void *)0x0;
        uStack_180 = 0;
        puStack_150 = &system_data_buffer_ptr;
        uStack_138 = 0;
        lStack_148 = 0;
        uStack_140 = 0;
        puStack_110 = &system_data_buffer_ptr;
        uStack_f8 = 0;
        lStack_108 = 0;
        uStack_100 = 0;
        puStack_b0 = &system_data_buffer_ptr;
        uStack_98 = 0;
        uStack_a8 = 0;
        uStack_a0 = 0;
        puStack_d0 = &system_data_buffer_ptr;
        uStack_b8 = 0;
        uStack_c8 = 0;
        uStack_c0 = 0;
        puStack_f0 = &system_data_buffer_ptr;
        uStack_d8 = 0;
        uStack_e8 = 0;
        uStack_e0 = 0;
        puStack_1d0 = &system_data_buffer_ptr;
        uStack_1b8 = 0;
        puStack_1c8 = (uint64_t *)0x0;
        uStack_1c0 = 0;
        lVar21 = FUN_18005d4b0(param_3,&unknown_var_8424_ptr,0);
        if (lVar21 != 0) {
          puStack_1b0 = &system_data_buffer_ptr;
          uStack_198 = 0;
          puStack_1a8 = (void *)0x0;
          iStack_1a0 = 0;
          puVar9 = (uint64_t *)FUN_18005d4b0(lVar21,&system_flag_e8a0,0);
          if (puVar9 != (uint64_t *)0x0) {
LAB_1801fb350:
            lVar21 = FUN_1800a02a0(puVar9,&unknown_var_7680_ptr);
            if (lVar21 != 0) {
              lVar20 = 0x180d48d24;
              if (*(int64_t *)(lVar21 + 8) != 0) {
                lVar20 = *(int64_t *)(lVar21 + 8);
              }
              (**(code **)(puStack_1b0 + 0x10))(&puStack_1b0,lVar20);
            }
            puVar11 = puStack_1a8;
            if (iStack_1a0 == 10) {
              iVar5 = strcmp(puStack_1a8,&unknown_var_8440_ptr);
              pcVar27 = pcVar26;
              if (iVar5 != 0) goto LAB_1801fb543;
LAB_1801fb471:
              pcVar27 = pcVar27 + param_1;
              puStack_1f0 = &system_data_buffer_ptr;
              uStack_1d8 = 0;
              puStack_1e8 = (uint64_t *)0x0;
              uStack_1e0 = 0;
              lVar21 = FUN_1800a02a0(puVar9,&system_flag_3a84);
              if (lVar21 != 0) {
                lVar20 = 0x180d48d24;
                if (*(int64_t *)(lVar21 + 8) != 0) {
                  lVar20 = *(int64_t *)(lVar21 + 8);
                }
                (**(code **)(puStack_1f0 + 0x10))(&puStack_1f0,lVar20);
                uVar6 = uStack_1e0;
                uVar14 = (uint64_t)uStack_1e0;
                if (puStack_1e8 != (uint64_t *)0x0) {
                  CoreEngineDataBufferProcessor(pcVar27,uVar14);
                }
                if (uVar6 != 0) {
                    // WARNING: Subroutine does not return
                  memcpy(*(uint64_t *)(pcVar27 + 8),puStack_1e8,uVar14);
                }
                pcVar27[0x10] = '\0';
                pcVar27[0x11] = '\0';
                pcVar27[0x12] = '\0';
                pcVar27[0x13] = '\0';
                if (*(int64_t *)(pcVar27 + 8) != 0) {
                  *(int8_t *)(uVar14 + *(int64_t *)(pcVar27 + 8)) = 0;
                }
                *(int32_t *)(pcVar27 + 0x1c) = uStack_1d8._4_4_;
                pcVar27[0x40] = '\x01';
              }
              puStack_1f0 = &system_data_buffer_ptr;
              if (puStack_1e8 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              puStack_1e8 = (uint64_t *)0x0;
              uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
              puStack_1f0 = &system_state_ptr;
            }
            else {
              pcVar27 = pcVar26;
              if (iStack_1a0 == 7) {
                do {
                  pcVar18 = pcVar27;
                  if (pcVar18[(int64_t)puStack_1a8] != pcVar18[0x180a0f188]) goto LAB_1801fb543;
                  pcVar27 = pcVar18 + 1;
                } while (pcVar18 + 1 != &system_flag_0008);
                pcVar27 = (char *)(uint64_t)((int)pcVar18 + 0x41);
                goto LAB_1801fb471;
              }
              if (iStack_1a0 == 9) {
                iVar5 = strcmp(puStack_1a8,&unknown_var_8544_ptr);
                if (iVar5 != 0) goto LAB_1801fb543;
                pcVar27 = (char *)0x90;
                goto LAB_1801fb471;
              }
              if (iStack_1a0 == 0xb) {
                iVar5 = strcmp(puStack_1a8,&unknown_var_8504_ptr);
                if (iVar5 != 0) goto LAB_1801fb543;
                pcVar27 = (char *)0xd8;
                goto LAB_1801fb471;
              }
              if (iStack_1a0 != 0xc) {
                if ((iStack_1a0 != 0xf) || (iVar5 = strcmp(puStack_1a8,&unknown_var_8592_ptr), iVar5 != 0))
                goto LAB_1801fb543;
                pcVar27 = (char *)0x1b0;
                goto LAB_1801fb471;
              }
              iVar5 = strcmp(puStack_1a8,&unknown_var_8520_ptr);
              if (iVar5 == 0) {
                pcVar27 = (char *)0x120;
                goto LAB_1801fb471;
              }
LAB_1801fb543:
              puVar22 = &system_buffer_ptr;
              if (*(void **)(param_1 + 0x390) != (void *)0x0) {
                puVar22 = *(void **)(param_1 + 0x390);
              }
              puVar23 = &system_buffer_ptr;
              if (puVar11 != (void *)0x0) {
                puVar23 = puVar11;
              }
              SystemDataInitializer(&unknown_var_8608_ptr,puVar23,puVar22);
            }
            pcVar27 = "texture";
            do {
              pcVar18 = pcVar27;
              pcVar27 = pcVar18 + 1;
            } while (*pcVar27 != '\0');
            puVar9 = (uint64_t *)puVar9[0xb];
            param_3 = lStackX_18;
            if (puVar9 != (uint64_t *)0x0) {
              do {
                pcVar27 = (char *)*puVar9;
                if (pcVar27 == (char *)0x0) {
                  pcVar27 = (char *)0x180d48d24;
                  pcVar19 = pcVar26;
                }
                else {
                  pcVar19 = (char *)puVar9[2];
                }
                if (pcVar19 == pcVar18 + -0x180a0e89f) {
                  pcVar19 = pcVar19 + (int64_t)pcVar27;
                  if (pcVar19 <= pcVar27) goto LAB_1801fb350;
                  lVar21 = (int64_t)&system_flag_e8a0 - (int64_t)pcVar27;
                  while (*pcVar27 == pcVar27[lVar21]) {
                    pcVar27 = pcVar27 + 1;
                    if (pcVar19 <= pcVar27) goto LAB_1801fb350;
                  }
                }
                puVar9 = (uint64_t *)puVar9[0xb];
                if (puVar9 == (uint64_t *)0x0) break;
              } while( true );
            }
          }
          puStack_1b0 = &system_data_buffer_ptr;
          if (puStack_1a8 != (void *)0x0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          puStack_1a8 = (int8_t *)0x0;
          uStack_198 = uStack_198 & 0xffffffff00000000;
          puStack_1b0 = &system_state_ptr;
        }
        lVar21 = FUN_18005d4b0(param_3,&unknown_var_8560_ptr,0);
        if (lVar21 != 0) {
          uStack_210 = (int64_t *)&system_data_buffer_ptr;
          uStack_1f8 = 0;
          uStack_208 = 0;
          iStack_200 = 0;
          puVar9 = (uint64_t *)FUN_18005d4b0(lVar21,&unknown_var_4260_ptr,0);
          pcVar27 = pcVar26;
          iVar5 = iStack_200;
          if (puVar9 != (uint64_t *)0x0) {
LAB_1801fb690:
            lVar21 = FUN_1800a02a0(puVar9,&system_flag_3a84);
            if (lVar21 != 0) {
              lVar20 = 0x180d48d24;
              if (*(int64_t *)(lVar21 + 8) != 0) {
                lVar20 = *(int64_t *)(lVar21 + 8);
              }
              (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
              iVar5 = iStack_200;
            }
            uVar6 = (uint)pcVar27;
            if (iVar5 == 0xc) {
              iVar7 = strcmp(uStack_208,&unknown_var_8576_ptr);
              if ((iVar7 == 0) && (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
                lVar20 = 0x180d48d24;
                if (*(int64_t *)(lVar21 + 8) != 0) {
                  lVar20 = *(int64_t *)(lVar21 + 8);
                }
                (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                pcVar18 = pcVar26;
                iVar5 = iStack_200;
                if (iStack_200 == 4) {
                  do {
                    pcVar27 = pcVar18;
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                    if (!bVar29) goto LAB_1801fb759;
                    pcVar18 = pcVar27 + 1;
                  } while (pcVar27 + 1 != (char *)0x5);
                  bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fb759:
                  uVar8 = uVar6 | 2;
                  if (!bVar29) {
                    uVar8 = uVar6;
                  }
                  pcVar27 = (char *)(uint64_t)uVar8;
                }
              }
            }
            else if (iVar5 == 0x18) {
              iVar7 = strcmp(uStack_208,&unknown_var_8736_ptr);
              if (iVar7 == 0) {
                lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr);
                if (lVar21 != 0) {
                  lVar20 = 0x180d48d24;
                  if (*(int64_t *)(lVar21 + 8) != 0) {
                    lVar20 = *(int64_t *)(lVar21 + 8);
                  }
                  (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                  pcVar18 = pcVar26;
                  iVar5 = iStack_200;
                  if (iStack_200 == 4) {
                    do {
                      pcVar27 = pcVar18;
                      bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                      if (!bVar29) goto LAB_1801fb809;
                      pcVar18 = pcVar27 + 1;
                    } while (pcVar27 + 1 != (char *)0x5);
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fb809:
                    uVar8 = uVar6 | 4;
                    if (!bVar29) {
                      uVar8 = uVar6;
                    }
                    pcVar27 = (char *)(uint64_t)uVar8;
                  }
                }
              }
              else {
                iVar7 = strcmp(uStack_208,&unknown_var_8768_ptr);
                if ((iVar7 == 0) && (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
                  lVar20 = 0x180d48d24;
                  if (*(int64_t *)(lVar21 + 8) != 0) {
                    lVar20 = *(int64_t *)(lVar21 + 8);
                  }
                  (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                  pcVar18 = pcVar26;
                  iVar5 = iStack_200;
                  if (iStack_200 == 4) {
                    do {
                      pcVar27 = pcVar18;
                      bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                      if (!bVar29) goto LAB_1801fb8b9;
                      pcVar18 = pcVar27 + 1;
                    } while (pcVar27 + 1 != (char *)0x5);
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fb8b9:
                    uVar8 = uVar6 | 0x40;
                    if (!bVar29) {
                      uVar8 = uVar6;
                    }
                    pcVar27 = (char *)(uint64_t)uVar8;
                  }
                }
              }
            }
            else if (iVar5 == 0x21) {
              iVar7 = strcmp(uStack_208,&unknown_var_8656_ptr);
              if ((iVar7 == 0) && (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
                lVar20 = 0x180d48d24;
                if (*(int64_t *)(lVar21 + 8) != 0) {
                  lVar20 = *(int64_t *)(lVar21 + 8);
                }
                (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                pcVar18 = pcVar26;
                iVar5 = iStack_200;
                if (iStack_200 == 4) {
                  do {
                    pcVar27 = pcVar18;
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                    if (!bVar29) goto LAB_1801fb969;
                    pcVar18 = pcVar27 + 1;
                  } while (pcVar27 + 1 != (char *)0x5);
                  bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fb969:
                  uVar8 = uVar6 | 0x20;
                  if (!bVar29) {
                    uVar8 = uVar6;
                  }
                  pcVar27 = (char *)(uint64_t)uVar8;
                }
              }
            }
            else if (iVar5 == 0x20) {
              iVar7 = strcmp(uStack_208,&unknown_var_8696_ptr);
              if ((iVar7 == 0) && (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
                lVar20 = 0x180d48d24;
                if (*(int64_t *)(lVar21 + 8) != 0) {
                  lVar20 = *(int64_t *)(lVar21 + 8);
                }
                (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                pcVar18 = pcVar26;
                iVar5 = iStack_200;
                if (iStack_200 == 4) {
                  do {
                    pcVar27 = pcVar18;
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                    if (!bVar29) goto LAB_1801fba19;
                    pcVar18 = pcVar27 + 1;
                  } while (pcVar27 + 1 != (char *)0x5);
                  bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fba19:
                  uVar8 = uVar6 | 0x10;
                  if (!bVar29) {
                    uVar8 = uVar6;
                  }
                  pcVar27 = (char *)(uint64_t)uVar8;
                }
              }
            }
            else if (iVar5 == 0xf) {
              iVar7 = strcmp(uStack_208,&unknown_var_8848_ptr);
              if ((iVar7 == 0) && (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
                lVar20 = 0x180d48d24;
                if (*(int64_t *)(lVar21 + 8) != 0) {
                  lVar20 = *(int64_t *)(lVar21 + 8);
                }
                (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
                pcVar18 = pcVar26;
                iVar5 = iStack_200;
                if (iStack_200 == 4) {
                  do {
                    pcVar27 = pcVar18;
                    bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
                    if (!bVar29) goto LAB_1801fbac9;
                    pcVar18 = pcVar27 + 1;
                  } while (pcVar27 + 1 != (char *)0x5);
                  bVar29 = pcVar27[uStack_208] == pcVar27[0x180a06418];
LAB_1801fbac9:
                  uVar8 = uVar6 | 0x80;
                  if (!bVar29) {
                    uVar8 = uVar6;
                  }
                  pcVar27 = (char *)(uint64_t)uVar8;
                }
              }
            }
            else if (((iVar5 == 0x17) && (iVar7 = strcmp(uStack_208,&unknown_var_8864_ptr), iVar7 == 0)) &&
                    (lVar21 = FUN_1800a02a0(puVar9,&unknown_var_3692_ptr), lVar21 != 0)) {
              lVar20 = 0x180d48d24;
              if (*(int64_t *)(lVar21 + 8) != 0) {
                lVar20 = *(int64_t *)(lVar21 + 8);
              }
              (**(code **)((int64_t)uStack_210 + 0x10))(&uStack_210,lVar20);
              pcVar18 = pcVar26;
              iVar5 = iStack_200;
              if (iStack_200 == 4) {
                do {
                  pcVar19 = pcVar18 + 1;
                  if (pcVar18[uStack_208] != pcVar18[0x180a06418]) goto LAB_1801fbb78;
                  pcVar18 = pcVar19;
                } while (pcVar19 != (char *)0x5);
                pcVar27 = (char *)(uint64_t)(uVar6 | 0x200);
              }
            }
LAB_1801fbb78:
            uVar4 = SUB84(pcVar27,0);
            pcVar18 = "flag";
            do {
              pcVar19 = pcVar18;
              pcVar18 = pcVar19 + 1;
            } while (*pcVar18 != '\0');
            puVar9 = (uint64_t *)puVar9[0xb];
            if (puVar9 != (uint64_t *)0x0) {
              do {
                pcVar18 = (char *)*puVar9;
                if (pcVar18 == (char *)0x0) {
                  pcVar18 = (char *)0x180d48d24;
                  pcVar15 = pcVar26;
                }
                else {
                  pcVar15 = (char *)puVar9[2];
                }
                if (pcVar15 == pcVar19 + -0x180a06ba3) {
                  pcVar15 = pcVar18 + (int64_t)pcVar15;
                  if (pcVar15 <= pcVar18) goto LAB_1801fb690;
                  lVar21 = (int64_t)&unknown_var_4260_ptr - (int64_t)pcVar18;
                  while (*pcVar18 == pcVar18[lVar21]) {
                    pcVar18 = pcVar18 + 1;
                    if (pcVar15 <= pcVar18) goto LAB_1801fb690;
                  }
                }
                puVar9 = (uint64_t *)puVar9[0xb];
                if (puVar9 == (uint64_t *)0x0) break;
              } while( true );
            }
          }
          *(int32_t *)(param_1 + 0x288) = uVar4;
          *(int8_t *)(param_1 + 0x290) = 1;
          uStack_210 = (int64_t *)&system_data_buffer_ptr;
          if (uStack_208 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          uStack_208 = 0;
          uStack_1f8 = uStack_1f8 & 0xffffffff00000000;
          uStack_210 = (int64_t *)&system_state_ptr;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8800_ptr);
        if (lVar21 != 0) {
          pcVar26 = (char *)0x180d48d24;
          if (*(char **)(lVar21 + 8) != (char *)0x0) {
            pcVar26 = *(char **)(lVar21 + 8);
          }
          uVar14 = 0xffffffffffffffff;
          do {
            uVar14 = uVar14 + 1;
          } while (pcVar26[uVar14] != '\0');
          if (((uVar14 < 3) || (*pcVar26 != '0')) ||
             (puVar22 = &unknown_var_5412_ptr, (pcVar26[1] + 0xa8U & 0xdf) != 0)) {
            puVar22 = &unknown_var_2208_ptr;
          }
          FUN_18010cbc0(pcVar26,puVar22,auStackX_20);
          *(uint *)(param_1 + 0x240) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x248) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8824_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x24c) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x254) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8936_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x2a0) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x2a8) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8960_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x2ac) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x2b4) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8888_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x2b8) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x2c0) = 1;
        }
        lVar21 = FUN_180631960(param_3,&unknown_var_8912_ptr,&uStack_210);
        if (lVar21 != 0) {
          *(int32_t *)(param_1 + 0x2d0) = (int32_t)uStack_210;
          *(int32_t *)(param_1 + 0x2d4) = uStack_210._4_4_;
          *(int32_t *)(param_1 + 0x2d8) = (int32_t)uStack_208;
          *(int32_t *)(param_1 + 0x2dc) = uStack_208._4_4_;
          *(int8_t *)(param_1 + 0x2f0) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_9024_ptr);
        if (lVar21 != 0) {
          pcVar26 = (char *)0x180d48d24;
          if (*(char **)(lVar21 + 8) != (char *)0x0) {
            pcVar26 = *(char **)(lVar21 + 8);
          }
          uVar14 = 0xffffffffffffffff;
          do {
            uVar14 = uVar14 + 1;
          } while (pcVar26[uVar14] != '\0');
          if (((uVar14 < 3) || (*pcVar26 != '0')) ||
             (puVar22 = &unknown_var_5412_ptr, (pcVar26[1] + 0xa8U & 0xdf) != 0)) {
            puVar22 = &unknown_var_2208_ptr;
          }
          FUN_18010cbc0(pcVar26,puVar22,auStackX_20);
          *(uint *)(param_1 + 0x2f4) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x2fc) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_9048_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x2c4) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x2cc) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8976_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 600) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x260) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_9000_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x264) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x26c) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_8976_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x270) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x278) = 1;
        }
        lVar21 = FUN_1800a02a0(param_3,&unknown_var_9000_ptr);
        if (lVar21 != 0) {
          lVar20 = 0x180d48d24;
          if (*(int64_t *)(lVar21 + 8) != 0) {
            lVar20 = *(int64_t *)(lVar21 + 8);
          }
          FUN_18010cbc0(lVar20,&system_flag_6430,auStackX_20);
          *(uint *)(param_1 + 0x27c) = auStackX_20[0];
          *(int8_t *)(param_1 + 0x284) = 1;
        }
        puStack_1c8 = (uint64_t *)0x0;
        uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
        puStack_1d0 = &system_state_ptr;
        uStack_e8 = 0;
        uStack_d8 = uStack_d8 & 0xffffffff00000000;
        puStack_f0 = &system_state_ptr;
        uStack_c8 = 0;
        uStack_b8 = uStack_b8 & 0xffffffff00000000;
        puStack_d0 = &system_state_ptr;
        uStack_a8 = 0;
        uStack_98 = uStack_98 & 0xffffffff00000000;
        puStack_b0 = &system_state_ptr;
        lStack_108 = 0;
        uStack_f8 = uStack_f8 & 0xffffffff00000000;
        puStack_110 = &system_state_ptr;
        lStack_148 = 0;
        uStack_138 = uStack_138 & 0xffffffff00000000;
        puStack_150 = &system_state_ptr;
        puStack_188 = (void *)0x0;
        uStack_178 = uStack_178 & 0xffffffff00000000;
        puStack_190 = &system_state_ptr;
        puStack_130 = &system_data_buffer_ptr;
        if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_128 = 0;
        uStack_118 = uStack_118 & 0xffffffff00000000;
        puStack_130 = &system_state_ptr;
        puStack_170 = &system_data_buffer_ptr;
        if (puStack_168 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        puStack_168 = (uint64_t *)0x0;
        uStack_158 = uStack_158 & 0xffffffff00000000;
        puStack_170 = &system_state_ptr;
        lVar21 = FUN_18005d4b0(param_3,&unknown_var_9136_ptr,0);
        if (lVar21 == 0) {
          return;
        }
        uVar13 = FUN_180628ca0();
        CoreEngineDataTransformer(&puStack_190,uVar13);
        puVar9 = (uint64_t *)FUN_18005d4b0(lVar21,&unknown_var_9144_ptr,0);
        if (puVar9 == (uint64_t *)0x0) goto LAB_1801fc30e;
LAB_1801fc140:
        puVar17 = (uint64_t *)0x0;
        piVar16 = (int *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x48,4,3);
        *piVar16 = -1;
        piVar16[1] = -0x40800000;
        piVar16[2] = 0;
        piVar16[3] = 0x43480000;
        piVar16[4] = 0x3e99999a;
        piVar16[6] = 0x3f266666;
        piVar16[7] = 0x3f266666;
        piVar16[8] = 0x3f266666;
        piVar16[9] = 0x7f7fffff;
        piVar16[10] = 0x3fc66666;
        piVar16[0xb] = 0x3fc66666;
        piVar16[0xc] = 0x3fe00000;
        piVar16[0xd] = 0x7f7fffff;
        piVar16[5] = 0x3f000000;
        piVar16[0xe] = 0x3f800000;
        piVar16[0xf] = 0x3f800000;
        piVar16[0x10] = 0x3f800000;
        piVar16[0x11] = 0x7f7fffff;
        FUN_18037dc60(piVar16,puVar9);
        if ((*piVar16 < 0) ||
           ((int)(*(int64_t *)(system_system_data_memory + 0xd0) - *(int64_t *)(system_system_data_memory + 200) >> 3)
            <= *piVar16)) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner(piVar16);
        }
        puVar25 = *(uint64_t **)(param_1 + 0x368);
        if (puVar25 < *(uint64_t **)(param_1 + 0x370)) {
          *(uint64_t **)(param_1 + 0x368) = puVar25 + 1;
          *puVar25 = piVar16;
        }
        else {
          puVar24 = *(uint64_t **)(param_1 + 0x360);
          lVar21 = (int64_t)puVar25 - (int64_t)puVar24 >> 3;
          if (lVar21 == 0) {
            lVar21 = 1;
LAB_1801fc20e:
            puVar17 = (uint64_t *)
                      CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar21 * 8,*(int8_t *)(param_1 + 0x378));
            puVar25 = *(uint64_t **)(param_1 + 0x368);
            puVar24 = *(uint64_t **)(param_1 + 0x360);
          }
          else {
            lVar21 = lVar21 * 2;
            if (lVar21 != 0) goto LAB_1801fc20e;
          }
          if (puVar24 != puVar25) {
                    // WARNING: Subroutine does not return
            memmove(puVar17,puVar24,(int64_t)puVar25 - (int64_t)puVar24);
          }
          *puVar17 = piVar16;
          if (*(int64_t *)(param_1 + 0x360) != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          *(uint64_t **)(param_1 + 0x360) = puVar17;
          *(uint64_t **)(param_1 + 0x368) = puVar17 + 1;
          *(uint64_t **)(param_1 + 0x370) = puVar17 + lVar21;
        }
        pcVar26 = "mesh";
        do {
          pcVar27 = pcVar26;
          pcVar26 = pcVar27 + 1;
        } while (*pcVar26 != '\0');
        puVar9 = (uint64_t *)puVar9[0xb];
        if (puVar9 != (uint64_t *)0x0) {
          do {
            pcVar26 = (char *)*puVar9;
            if (pcVar26 == (char *)0x0) {
              pcVar18 = (char *)0x0;
              pcVar26 = (char *)0x180d48d24;
            }
            else {
              pcVar18 = (char *)puVar9[2];
            }
            if (pcVar18 == pcVar27 + -0x180a0f3e7) {
              pcVar18 = pcVar26 + (int64_t)pcVar18;
              if (pcVar18 <= pcVar26) goto LAB_1801fc140;
              lVar21 = (int64_t)&unknown_var_9144_ptr - (int64_t)pcVar26;
              while (*pcVar26 == pcVar26[lVar21]) {
                pcVar26 = pcVar26 + 1;
                if (pcVar18 <= pcVar26) goto LAB_1801fc140;
              }
            }
            puVar9 = (uint64_t *)puVar9[0xb];
            if (puVar9 == (uint64_t *)0x0) break;
          } while( true );
        }
LAB_1801fc30e:
        uVar14 = 0;
        puStack_190 = &system_data_buffer_ptr;
        if (puStack_188 != (void *)0x0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        uStack_178 = uStack_178 & 0xffffffff00000000;
        plVar1 = (int64_t *)(param_1 + 0x360);
        lVar21 = *plVar1;
        uVar28 = uVar14;
        if (*(int64_t *)(param_1 + 0x368) - lVar21 >> 3 != 0) {
          do {
            puStack_188 = (void *)0x0;
            puStack_190 = &system_state_ptr;
            iVar5 = (int)uVar28;
            if (**(int **)(lVar21 + uVar14) < 0) {
              puStack_1f0 = &system_data_buffer_ptr;
              uStack_1d8 = 0;
              puStack_1e8 = (uint64_t *)0x0;
              uStack_1e0 = 0;
              CoreEngineDataBufferProcessor(&puStack_1f0,0x28);
              puVar9 = puStack_1e8;
              *puStack_1e8 = 0x6c61766e69206e41;
              puStack_1e8[1] = 0x61726f6c66206469;
              *(int32_t *)(puStack_1e8 + 2) = 0x70797420;
              *(int32_t *)((int64_t)puStack_1e8 + 0x14) = 0x73692065;
              *(int32_t *)(puStack_1e8 + 3) = 0x756f6620;
              *(int32_t *)((int64_t)puStack_1e8 + 0x1c) = 0x6f20646e;
              puStack_1e8[4] = 0x20726579616c206e;
              *(int8_t *)(puStack_1e8 + 5) = 0;
              uStack_1e0 = 0x28;
              uVar13 = CoreEngineDataTransformer(&puStack_110,param_1 + 0x388);
              uVar13 = FUN_180627ce0(&puStack_1f0,&puStack_150,uVar13);
              puStack_1d0 = &system_data_buffer_ptr;
              uStack_1b8 = 0;
              puStack_1c8 = (uint64_t *)0x0;
              uStack_1c0 = 0;
              CoreEngineDataBufferProcessor(&puStack_1d0,0xc);
              puVar17 = puStack_1c8;
              *puStack_1c8 = 0x6574656c6544202e;
              *(int32_t *)(puStack_1c8 + 1) = 0x3f746920;
              *(int8_t *)((int64_t)puStack_1c8 + 0xc) = 0;
              uStack_1c0 = 0xc;
              FUN_180627ce0(uVar13,&puStack_190,&puStack_1d0);
              puStack_1d0 = &system_data_buffer_ptr;
              if (puVar17 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puVar17);
              }
              puStack_1c8 = (uint64_t *)0x0;
              uStack_1b8 = uStack_1b8 & 0xffffffff00000000;
              puStack_1d0 = &system_state_ptr;
              puStack_150 = &system_data_buffer_ptr;
              if (lStack_148 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_148 = 0;
              uStack_138 = uStack_138 & 0xffffffff00000000;
              puStack_150 = &system_state_ptr;
              puStack_110 = &system_data_buffer_ptr;
              if (lStack_108 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_108 = 0;
              uStack_f8 = uStack_f8 & 0xffffffff00000000;
              puStack_110 = &system_state_ptr;
              puStack_1f0 = &system_data_buffer_ptr;
              if (puVar9 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(puVar9);
              }
              puStack_1e8 = (uint64_t *)0x0;
              uStack_1d8 = uStack_1d8 & 0xffffffff00000000;
              puStack_1f0 = &system_state_ptr;
              puVar22 = &system_buffer_ptr;
              if (puStack_188 != (void *)0x0) {
                puVar22 = puStack_188;
              }
              iVar7 = FUN_1800f93e0(0,puVar22,&unknown_var_9248_ptr,0x20);
              if (iVar7 == 4) {
                plVar2 = (int64_t *)*plVar1;
                if ((*(int64_t *)(param_1 + 0x368) - (int64_t)plVar2 & 0xfffffffffffffff8U) == 8)
                {
                  if (*plVar2 != 0) {
                    // WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner();
                  }
                  *(uint64_t *)*plVar1 = 0;
                  *(int64_t *)(param_1 + 0x368) = *plVar1;
                  puStack_190 = &system_data_buffer_ptr;
                  if (puStack_188 == (void *)0x0) {
                    return;
                  }
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                if (*(int64_t *)(uVar14 + (int64_t)plVar2) != 0) {
                    // WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                *(uint64_t *)((int64_t)plVar2 + uVar14) = 0;
                lVar21 = *plVar1;
                *(uint64_t *)(uVar14 + lVar21) =
                     *(uint64_t *)
                      (lVar21 + -8 + (*(int64_t *)(param_1 + 0x368) - lVar21 >> 3) * 8);
                FUN_180057340(plVar1,(*(int64_t *)(param_1 + 0x368) - *plVar1 >> 3) + -1);
                iVar5 = iVar5 + -1;
                uVar14 = uVar14 - 8;
              }
              puStack_190 = &system_data_buffer_ptr;
              if (puStack_188 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              uStack_178 = uStack_178 & 0xffffffff00000000;
            }
            uVar28 = (uint64_t)(iVar5 + 1U);
            uVar14 = uVar14 + 8;
            lVar21 = *plVar1;
          } while ((uint64_t)(int64_t)(int)(iVar5 + 1U) <
                   (uint64_t)(*(int64_t *)(param_1 + 0x368) - lVar21 >> 3));
        }
        return;
      }
      lVar21 = (int64_t)&unknown_var_6864_ptr - (int64_t)pcVar27;
      while (*pcVar27 == pcVar27[lVar21]) {
        pcVar27 = pcVar27 + 1;
        if (pcVar19 <= pcVar27) goto LAB_1801fb060;
      }
    }
    puVar9 = (uint64_t *)puVar9[6];
  } while( true );
}



uint64_t FUN_1801fc650(int64_t param_1,uint64_t param_2,int param_3)

{
  if (*(char *)(param_1 + (int64_t)param_3 * 0x48 + 0x40) == '\0') {
    if (*(int64_t *)(param_1 + 0x3c8) == 0) {
      CoreEngineDataTransformer(param_2);
    }
    else {
      FUN_1801fc650(*(int64_t *)(param_1 + 0x3c8),param_2,param_3,(int64_t)param_3 * 9,0,
                    0xfffffffffffffffe);
    }
  }
  else {
    CoreEngineDataTransformer(param_2);
  }
  return param_2;
}



uint64_t FUN_1801fc6c0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  if (*(char *)(param_1 + 0x238) == '\0') {
    if (*(int64_t *)(param_1 + 0x3c8) == 0) {
      CoreEngineDataTransformer(param_2,param_1 + 0x1f8,param_3,param_4,0,0xfffffffffffffffe);
    }
    else {
      FUN_1801fc6c0(*(int64_t *)(param_1 + 0x3c8));
    }
  }
  else {
    CoreEngineDataTransformer(param_2,param_1 + 0x1f8,param_3,param_4,0,0xfffffffffffffffe);
  }
  return param_2;
}



uint64_t * FUN_1801fc900(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if ((*(char *)(param_1 + 800) == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc900(*(int64_t *)(param_1 + 0x3c8));
    return param_2;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x308);
  *param_2 = *(uint64_t *)(param_1 + 0x300);
  param_2[1] = uVar1;
  return param_2;
}



uint64_t * FUN_1801fc950(int64_t param_1,uint64_t *param_2)

{
  if ((*(char *)(param_1 + 0x334) == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc950(*(int64_t *)(param_1 + 0x3c8));
    return param_2;
  }
  *param_2 = *(uint64_t *)(param_1 + 0x324);
  return param_2;
}



uint64_t * FUN_1801fc9a0(int64_t param_1,uint64_t *param_2)

{
  if ((*(char *)(param_1 + 0x348) == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9a0(*(int64_t *)(param_1 + 0x3c8));
    return param_2;
  }
  *param_2 = *(uint64_t *)(param_1 + 0x338);
  return param_2;
}



uint64_t * FUN_1801fc9f0(int64_t param_1,uint64_t *param_2)

{
  if ((*(char *)(param_1 + 0x35c) == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fc9f0(*(int64_t *)(param_1 + 0x3c8));
    return param_2;
  }
  *param_2 = *(uint64_t *)(param_1 + 0x34c);
  return param_2;
}



uint64_t * FUN_1801fca40(int64_t param_1,uint64_t *param_2)

{
  uint64_t uVar1;
  
  if ((*(char *)(param_1 + 0x2f0) == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
    FUN_1801fca40(*(int64_t *)(param_1 + 0x3c8));
    return param_2;
  }
  uVar1 = *(uint64_t *)(param_1 + 0x2d8);
  *param_2 = *(uint64_t *)(param_1 + 0x2d0);
  param_2[1] = uVar1;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801fcbc0(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  uint uVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  uint64_t *puVar5;
  char cVar6;
  int iVar7;
  int64_t *plStackX_8;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  cVar6 = *(char *)(param_1 + 0x290);
  if (cVar6 == '\0') {
    if (*(int64_t *)(param_1 + 0x3c8) == 0) {
      uVar2 = *(uint *)(param_1 + 0x288);
    }
    else {
      uVar2 = func_0x0001801fc7a0();
    }
  }
  else {
    uVar2 = *(uint *)(param_1 + 0x288);
  }
  if ((uVar2 & 0x20) == 0) {
    if ((cVar6 == '\0') && (*(int64_t *)(param_1 + 0x3c8) != 0)) {
      uVar2 = func_0x0001801fc7a0();
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x288);
    }
    if ((uVar2 & 0x10) == 0) {
      uVar3 = FUN_1801fc650(param_1,&puStack_48,0);
      plVar4 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStackX_8,uVar3,0);
      lVar1 = *plVar4;
      if (plStackX_8 != (int64_t *)0x0) {
        (**(code **)(*plStackX_8 + 0x38))();
      }
      puStack_48 = &system_data_buffer_ptr;
      if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      lStack_40 = 0;
      uStack_30 = 0;
      puStack_48 = &system_state_ptr;
      if (lVar1 == 0) {
        if (param_2 == 0) {
          return 0;
        }
        iVar7 = *(int *)(param_2 + 0x10) + 0x24;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar5 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar5 = 0x687320726579614c;
        puVar5[1] = 0x76616820646c756f;
        puVar5[2] = 0x6666696420612065;
        puVar5[3] = 0x7478657420657375;
        *(int32_t *)(puVar5 + 4) = 0x2e657275;
        *(int8_t *)((int64_t)puVar5 + 0x24) = 0;
      }
      else if (*(int *)(lVar1 + 0x324) == 0xe) {
        if ((*(short *)(lVar1 + 0x32c) == 0x800) && (*(short *)(lVar1 + 0x32e) == 0x800)) {
          uVar3 = FUN_1801fc650(param_1,&puStack_48,2);
          plVar4 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStackX_8,uVar3,0);
          lVar1 = *plVar4;
          if (plStackX_8 != (int64_t *)0x0) {
            (**(code **)(*plStackX_8 + 0x38))();
          }
          puStack_48 = &system_data_buffer_ptr;
          if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_40 = 0;
          uStack_30 = 0;
          puStack_48 = &system_state_ptr;
          if (lVar1 == 0) {
            if (param_2 == 0) {
              return 0;
            }
            iVar7 = *(int *)(param_2 + 0x10) + 0x23;
            CoreEngineDataBufferProcessor(param_2,iVar7);
            puVar5 = (uint64_t *)
                     ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
            *puVar5 = 0x687320726579614c;
            puVar5[1] = 0x76616820646c756f;
            puVar5[2] = 0x6d726f6e20612065;
            puVar5[3] = 0x7574786574206c61;
            *(int32_t *)(puVar5 + 4) = 0x2e6572;
          }
          else if (*(int *)(lVar1 + 0x324) == 0x14) {
            if ((*(short *)(lVar1 + 0x32c) == 0x800) && (*(short *)(lVar1 + 0x32e) == 0x800)) {
              uVar3 = FUN_1801fc650(param_1,&puStack_48,3);
              plVar4 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStackX_8,uVar3,0);
              lVar1 = *plVar4;
              if (plStackX_8 != (int64_t *)0x0) {
                (**(code **)(*plStackX_8 + 0x38))();
              }
              puStack_48 = &system_data_buffer_ptr;
              if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_40 = 0;
              uStack_30 = 0;
              puStack_48 = &system_state_ptr;
              if (lVar1 == 0) {
                if (param_2 == 0) {
                  return 0;
                }
                iVar7 = *(int *)(param_2 + 0x10) + 0x25;
                CoreEngineDataBufferProcessor(param_2,iVar7);
                puVar5 = (uint64_t *)
                         ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
                *puVar5 = 0x687320726579614c;
                puVar5[1] = 0x76616820646c756f;
                puVar5[2] = 0x6365707320612065;
                puVar5[3] = 0x7865742072616c75;
                *(int32_t *)(puVar5 + 4) = 0x65727574;
                *(int16_t *)((int64_t)puVar5 + 0x24) = 0x2e;
              }
              else if (*(int *)(lVar1 + 0x324) == 0xe) {
                if ((*(short *)(lVar1 + 0x32c) == 0x800) && (*(short *)(lVar1 + 0x32e) == 0x800)) {
                  return 1;
                }
                if (param_2 == 0) {
                  return 0;
                }
                iVar7 = *(int *)(param_2 + 0x10) + 0x3c;
                CoreEngineDataBufferProcessor(param_2,iVar7);
                puVar5 = (uint64_t *)
                         ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
                *puVar5 = 0x207327726579614c;
                puVar5[1] = 0x72616c7563657073;
                puVar5[2] = 0x6572757478657420;
                puVar5[3] = 0x20646c756f687320;
                puVar5[4] = 0x3032282065766168;
                puVar5[5] = 0x29383430322c3834;
                puVar5[6] = 0x74756c6f73657220;
                *(int32_t *)(puVar5 + 7) = 0x2e6e6f69;
                *(int8_t *)((int64_t)puVar5 + 0x3c) = 0;
              }
              else {
                if (param_2 == 0) {
                  return 0;
                }
                iVar7 = *(int *)(param_2 + 0x10) + 0x35;
                CoreEngineDataBufferProcessor(param_2,iVar7);
                puVar5 = (uint64_t *)
                         ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
                *puVar5 = 0x207327726579614c;
                puVar5[1] = 0x72616c7563657073;
                puVar5[2] = 0x6572757478657420;
                puVar5[3] = 0x20646c756f687320;
                puVar5[4] = 0x3543422065766168;
                puVar5[5] = 0x736572706d6f6320;
                *(int32_t *)(puVar5 + 6) = 0x6e6f6973;
                *(int16_t *)((int64_t)puVar5 + 0x34) = 0x2e;
              }
            }
            else {
              if (param_2 == 0) {
                return 0;
              }
              iVar7 = *(int *)(param_2 + 0x10) + 0x3a;
              CoreEngineDataBufferProcessor(param_2,iVar7);
              puVar5 = (uint64_t *)
                       ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
              *puVar5 = 0x207327726579614c;
              puVar5[1] = 0x74206c616d726f6e;
              puVar5[2] = 0x7320657275747865;
              puVar5[3] = 0x616820646c756f68;
              puVar5[4] = 0x3834303228206576;
              puVar5[5] = 0x722029383430322c;
              puVar5[6] = 0x6f6974756c6f7365;
              *(int16_t *)(puVar5 + 7) = 0x2e6e;
              *(int8_t *)((int64_t)puVar5 + 0x3a) = 0;
            }
          }
          else {
            if (param_2 == 0) {
              return 0;
            }
            iVar7 = *(int *)(param_2 + 0x10) + 0x33;
            CoreEngineDataBufferProcessor(param_2,iVar7);
            puVar5 = (uint64_t *)
                     ((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
            *puVar5 = 0x207327726579614c;
            puVar5[1] = 0x74206c616d726f6e;
            puVar5[2] = 0x7320657275747865;
            puVar5[3] = 0x616820646c756f68;
            puVar5[4] = 0x6320354342206576;
            puVar5[5] = 0x6973736572706d6f;
            *(int32_t *)(puVar5 + 6) = 0x2e6e6f;
          }
        }
        else {
          if (param_2 == 0) {
            return 0;
          }
          iVar7 = *(int *)(param_2 + 0x10) + 0x3b;
          CoreEngineDataBufferProcessor(param_2,iVar7);
          puVar5 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8))
          ;
          *puVar5 = 0x207327726579614c;
          puVar5[1] = 0x2065737566666964;
          puVar5[2] = 0x2065727574786574;
          puVar5[3] = 0x6820646c756f6873;
          puVar5[4] = 0x3430322820657661;
          puVar5[5] = 0x2029383430322c38;
          puVar5[6] = 0x6974756c6f736572;
          *(int32_t *)(puVar5 + 7) = 0x2e6e6f;
        }
      }
      else {
        if (param_2 == 0) {
          return 0;
        }
        iVar7 = *(int *)(param_2 + 0x10) + 0x35;
        CoreEngineDataBufferProcessor(param_2,iVar7);
        puVar5 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
        *puVar5 = 0x207327726579614c;
        puVar5[1] = 0x2065737566666964;
        puVar5[2] = 0x2065727574786574;
        puVar5[3] = 0x6820646c756f6873;
        puVar5[4] = 0x3154584420657661;
        puVar5[5] = 0x736572706d6f6320;
        *(int32_t *)(puVar5 + 6) = 0x6e6f6973;
        *(int16_t *)((int64_t)puVar5 + 0x34) = 0x2e;
      }
      goto LAB_1801fd139;
    }
  }
  if (param_2 == 0) {
    return 0;
  }
  iVar7 = *(int *)(param_2 + 0x10) + 0x34;
  CoreEngineDataBufferProcessor(param_2,iVar7);
  puVar5 = (uint64_t *)((uint64_t)*(uint *)(param_2 + 0x10) + *(int64_t *)(param_2 + 8));
  *puVar5 = 0x687320726579614c;
  puVar5[1] = 0x746f6e20646c756f;
  puVar5[2] = 0x6964206576616820;
  puVar5[3] = 0x6c61206573756666;
  puVar5[4] = 0x6720726f20616870;
  puVar5[5] = 0x6c7320646e756f72;
  *(int32_t *)(puVar5 + 6) = 0x2e65706f;
  *(int8_t *)((int64_t)puVar5 + 0x34) = 0;
LAB_1801fd139:
  *(int *)(param_2 + 0x10) = iVar7;
  return 0;
}



uint64_t *
FUN_1801fd160(uint64_t *param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  switch(param_2) {
  case 0:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,7,param_3,param_4,0,0xfffffffffffffffe);
    *(uint64_t *)param_1[1] = 0x65737566666964;
    *(int32_t *)(param_1 + 2) = 7;
    break;
  case 1:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,7,param_3,param_4,0,0xfffffffffffffffe);
    *(uint64_t *)param_1[1] = 0x70616d61657261;
    *(int32_t *)(param_1 + 2) = 7;
    break;
  case 2:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,9,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_1[1];
    *puVar1 = 0x616d6c616d726f6e;
    *(int16_t *)(puVar1 + 1) = 0x70;
    *(int32_t *)(param_1 + 2) = 9;
    break;
  case 3:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,0xb,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_1[1];
    *puVar1 = 0x72616c7563657073;
    *(int32_t *)(puVar1 + 1) = 0x70616d;
    *(int32_t *)(param_1 + 2) = 0xb;
    break;
  case 4:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,0xd,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_1[1];
    *puVar1 = 0x6e697474616c7073;
    *(int32_t *)(puVar1 + 1) = 0x616d5f67;
    *(int16_t *)((int64_t)puVar1 + 0xc) = 0x70;
    *(int32_t *)(param_1 + 2) = 0xd;
    break;
  case 5:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,0xb,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_1[1];
    *puVar1 = 0x6c6169726574616d;
    *(int32_t *)(puVar1 + 1) = 0x70616d;
    *(int32_t *)(param_1 + 2) = 0xb;
    break;
  case 6:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,9,param_3,param_4,0,0xfffffffffffffffe);
    puVar1 = (uint64_t *)param_1[1];
    *puVar1 = 0x616d746867696568;
    *(int16_t *)(puVar1 + 1) = 0x70;
    *(int32_t *)(param_1 + 2) = 9;
    break;
  default:
    *param_1 = &system_state_ptr;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    *param_1 = &system_data_buffer_ptr;
    param_1[3] = 0;
    param_1[1] = 0;
    *(int32_t *)(param_1 + 2) = 0;
    CoreEngineDataBufferProcessor(param_1,0,param_3,param_4,0,0xfffffffffffffffe);
    *(int32_t *)(param_1 + 2) = 0;
    if ((int8_t *)param_1[1] != (int8_t *)0x0) {
      *(int8_t *)param_1[1] = 0;
    }
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

int64_t FUN_1801fd480(int64_t param_1,int32_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  int64_t *plVar2;
  int64_t lVar3;
  void *puVar4;
  void *puVar5;
  void *puVar6;
  int64_t lVar7;
  int64_t *plStackX_20;
  void *puStack_88;
  void *puStack_80;
  int iStack_78;
  void *puStack_68;
  int64_t lStack_60;
  int32_t uStack_50;
  void *puStack_48;
  int64_t lStack_40;
  int32_t uStack_30;
  
  lVar3 = 0;
  FUN_1801fc650(param_1,&puStack_88,param_2,param_4,0,0xfffffffffffffffe);
  lVar7 = lVar3;
  if (0 < iStack_78) {
    if (iStack_78 == 4) {
      do {
        lVar1 = lVar3 + 1;
        if (puStack_80[lVar3] != (&system_flag_b57c)[lVar3]) goto LAB_1801fd519;
        lVar3 = lVar1;
        lVar7 = 0;
      } while (lVar1 != 5);
    }
    else {
LAB_1801fd519:
      plVar2 = (int64_t *)FUN_1800b08e0(system_resource_state,&plStackX_20,&puStack_88,0);
      lVar7 = *plVar2;
      if (plStackX_20 != (int64_t *)0x0) {
        (**(code **)(*plStackX_20 + 0x38))();
      }
      if (lVar7 == 0) {
        lVar3 = FUN_1801fd160(&puStack_48,param_2);
        puVar4 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 8) != (void *)0x0) {
          puVar4 = *(void **)(lVar3 + 8);
        }
        puVar5 = &system_buffer_ptr;
        if (puStack_80 != (void *)0x0) {
          puVar5 = puStack_80;
        }
        lVar3 = CoreEngineDataTransformer(&puStack_68,param_1 + 0x388);
        puVar6 = &system_buffer_ptr;
        if (*(void **)(lVar3 + 8) != (void *)0x0) {
          puVar6 = *(void **)(lVar3 + 8);
        }
        SystemDataInitializer(&unknown_var_9728_ptr,puVar6,puVar5,puVar4,4);
        puStack_68 = &system_data_buffer_ptr;
        if (lStack_60 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_60 = 0;
        uStack_50 = 0;
        puStack_68 = &system_state_ptr;
        puStack_48 = &system_data_buffer_ptr;
        if (lStack_40 != 0) {
                    // WARNING: Subroutine does not return
          CoreEngineMemoryPoolCleaner();
        }
        lStack_40 = 0;
        uStack_30 = 0;
        puStack_48 = &system_state_ptr;
      }
    }
  }
  puStack_88 = &system_data_buffer_ptr;
  if (puStack_80 == (void *)0x0) {
    return lVar7;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t FUN_1801fd650(uint64_t param_1,int32_t param_2)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int64_t *aplStackX_18 [2];
  void *puStack_28;
  int64_t lStack_20;
  
  FUN_1801fc650(param_1,&puStack_28,param_2);
  puVar2 = (uint64_t *)FUN_1800b08e0(system_resource_state,aplStackX_18,&puStack_28,0);
  uVar1 = *puVar2;
  if (aplStackX_18[0] != (int64_t *)0x0) {
    (**(code **)(*aplStackX_18[0] + 0x38))();
  }
  puStack_28 = &system_data_buffer_ptr;
  if (lStack_20 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  return uVar1;
}








