#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part247_sub002_sub002.c - 1 个函数

// 函数: void FUN_180408850(uint64_t param_1,int64_t param_2)
void FUN_180408850(uint64_t param_1,int64_t param_2)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  int64_t lVar6;
  uint64_t uVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int64_t lVar11;
  int iVar12;
  int64_t lVar13;
  int8_t *puVar14;
  void *puVar15;
  int8_t *puVar16;
  int64_t *plVar17;
  int32_t *puVar18;
  int64_t lVar19;
  uint64_t *puVar20;
  int *piVar21;
  int64_t lVar22;
  char *pcVar23;
  uint64_t *puVar24;
  char *pcVar25;
  char *pcVar26;
  bool bVar27;
  float extraout_XMM0_Da;
  float fVar28;
  float extraout_XMM0_Da_00;
  int32_t uVar29;
  float extraout_XMM0_Da_01;
  int8_t auStack_458 [32];
  int iStack_438;
  int iStack_434;
  int iStack_430;
  uint64_t *puStack_428;
  uint64_t *puStack_420;
  void *puStack_418;
  int64_t lStack_410;
  uint uStack_408;
  uint64_t uStack_400;
  void *puStack_3f8;
  int64_t lStack_3f0;
  uint uStack_3e8;
  uint64_t uStack_3e0;
  void *puStack_3d8;
  void *puStack_3d0;
  int iStack_3c8;
  uint64_t uStack_3c0;
  void *puStack_3b8;
  int8_t *puStack_3b0;
  uint uStack_3a8;
  uint64_t uStack_3a0;
  void *puStack_398;
  void *puStack_390;
  int32_t uStack_388;
  uint64_t uStack_380;
  int iStack_378;
  float afStack_374 [3];
  int64_t lStack_368;
  uint64_t uStack_360;
  void *puStack_358;
  int8_t *puStack_350;
  int iStack_348;
  int8_t auStack_340 [72];
  void *puStack_2f8;
  void *puStack_2f0;
  int iStack_2e8;
  uint8_t auStack_2e0 [72];
  void *puStack_298;
  int8_t *puStack_290;
  int iStack_288;
  int8_t auStack_280 [72];
  void *puStack_238;
  int8_t *puStack_230;
  int iStack_228;
  int8_t auStack_220 [72];
  void *puStack_1d8;
  int8_t *puStack_1d0;
  int iStack_1c8;
  int8_t auStack_1c0 [72];
  void *puStack_178;
  int8_t *puStack_170;
  int iStack_168;
  int8_t auStack_160 [72];
  void *puStack_118;
  int8_t *puStack_110;
  int32_t uStack_108;
  int8_t auStack_100 [72];
  void *puStack_b8;
  int8_t *puStack_b0;
  int32_t uStack_a8;
  int8_t auStack_a0 [72];
  uint64_t uStack_58;
  
  uStack_360 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_458;
  iVar4 = *(int *)(render_system_data_memory[5] + 100);
  pcVar23 = "monster";
  do {
    pcVar26 = pcVar23;
    pcVar23 = pcVar26 + 1;
  } while (*pcVar23 != '\0');
  puStack_420 = *(uint64_t **)(param_2 + 0x30);
  iStack_430 = iVar4;
  if (puStack_420 != (uint64_t *)0x0) {
    do {
      pcVar23 = (char *)*puStack_420;
      if (pcVar23 == (char *)0x0) {
        pcVar23 = (char *)0x180d48d24;
        pcVar25 = (char *)0x0;
      }
      else {
        pcVar25 = (char *)puStack_420[2];
      }
      if (pcVar25 == pcVar26 + -0x180a2722f) {
        pcVar25 = pcVar25 + (int64_t)pcVar23;
        if (pcVar25 <= pcVar23) goto LAB_180408950;
        lVar13 = (int64_t)&unknown_var_7008_ptr - (int64_t)pcVar23;
        while (*pcVar23 == pcVar23[lVar13]) {
          pcVar23 = pcVar23 + 1;
          if (pcVar25 <= pcVar23) goto LAB_180408950;
        }
      }
      puStack_420 = (uint64_t *)puStack_420[0xb];
    } while (puStack_420 != (uint64_t *)0x0);
  }
LAB_18040a0c2:
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_58 ^ (uint64_t)auStack_458);
LAB_180408950:
  do {
    puVar20 = puStack_420;
    pcVar26 = (char *)0x0;
    puStack_2f8 = &unknown_var_3480_ptr;
    puStack_2f0 = auStack_2e0;
    iStack_2e8 = 0;
    auStack_2e0[0] = 0;
    pcVar23 = "sound_and_collision_info_class";
    do {
      pcVar25 = pcVar23;
      pcVar23 = pcVar25 + 1;
    } while (*pcVar23 != '\0');
    for (puVar24 = (uint64_t *)puStack_420[8]; puVar24 != (uint64_t *)0x0;
        puVar24 = (uint64_t *)puVar24[6]) {
      pcVar23 = (char *)*puVar24;
      if (pcVar23 == (char *)0x0) {
        pcVar23 = (char *)0x180d48d24;
        pcVar9 = pcVar26;
      }
      else {
        pcVar9 = (char *)puVar24[2];
      }
      if (pcVar9 == pcVar25 + -0x180a27237) {
        pcVar9 = pcVar9 + (int64_t)pcVar23;
        if (pcVar9 <= pcVar23) {
LAB_1804089e4:
          lVar13 = 0x180d48d24;
          if (puVar24[1] != 0) {
            lVar13 = puVar24[1];
          }
          FUN_180049bf0(&puStack_2f8,lVar13);
          break;
        }
        lVar13 = (int64_t)&unknown_var_7016_ptr - (int64_t)pcVar23;
        while (*pcVar23 == pcVar23[lVar13]) {
          pcVar23 = pcVar23 + 1;
          if (pcVar9 <= pcVar23) goto LAB_1804089e4;
        }
      }
    }
    puStack_3b8 = &system_data_buffer_ptr;
    uStack_3a0 = 0;
    puStack_3b0 = (int8_t *)0x0;
    uStack_3a8 = 0;
    CoreMemoryPoolProcessor(&puStack_3b8,iStack_2e8);
    puVar16 = puStack_3b0;
    if (0 < iStack_2e8) {
      puVar15 = &system_buffer_ptr;
      if (puStack_2f0 != (void *)0x0) {
        puVar15 = puStack_2f0;
      }
                    // WARNING: Subroutine does not return
      memcpy(puStack_3b0,puVar15,(int64_t)(iStack_2e8 + 1));
    }
    if (puStack_2f0 == (void *)0x0) {
      pcVar23 = (char *)(uint64_t)uStack_3a8;
    }
    else {
      uStack_3a8 = 0;
      pcVar23 = pcVar26;
      if (puStack_3b0 != (int8_t *)0x0) {
        *puStack_3b0 = 0;
        pcVar23 = (char *)0x0;
      }
    }
    for (lVar13 = *render_system_data_memory; lVar13 != render_system_data_memory[1]; lVar13 = lVar13 + 0x20) {
      iVar2 = *(int *)(lVar13 + 0x10);
      iVar12 = (int)pcVar23;
      if (iVar2 == iVar12) {
        if (iVar2 != 0) {
          pbVar5 = *(byte **)(lVar13 + 8);
          lVar22 = (int64_t)puStack_3b0 - (int64_t)pbVar5;
          do {
            pbVar1 = pbVar5 + lVar22;
            iVar12 = (uint)*pbVar5 - (uint)*pbVar1;
            if (iVar12 != 0) break;
            pbVar5 = pbVar5 + 1;
          } while (*pbVar1 != 0);
        }
LAB_180408ade:
        if (iVar12 == 0) break;
      }
      else if (iVar2 == 0) goto LAB_180408ade;
    }
    if (lVar13 == render_system_data_memory[1]) {
      puVar14 = &system_buffer_ptr;
      if (puStack_3b0 != (int8_t *)0x0) {
        puVar14 = puStack_3b0;
      }
      FUN_180627020(&unknown_var_1648_ptr,puVar14);
      iVar2 = -1;
    }
    else {
      iVar2 = (int)(lVar13 - *render_system_data_memory >> 5);
    }
    puStack_3b8 = &system_data_buffer_ptr;
    if (puVar16 != (int8_t *)0x0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager(puVar16);
    }
    puStack_3b0 = (int8_t *)0x0;
    uStack_3a0 = uStack_3a0 & 0xffffffff00000000;
    puStack_3b8 = &system_state_ptr;
    if (iVar2 == -1) {
      puVar15 = &system_buffer_ptr;
      if (puStack_2f0 != (void *)0x0) {
        puVar15 = puStack_2f0;
      }
      SystemCore_ResourceManager0(&unknown_var_7696_ptr,puVar15);
      puStack_420 = puVar20;
    }
    else {
      pcVar23 = "collision_info";
      do {
        pcVar25 = pcVar23;
        pcVar23 = pcVar25 + 1;
      } while (*pcVar23 != '\0');
      for (puStack_428 = (uint64_t *)puVar20[6]; puStack_428 != (uint64_t *)0x0;
          puStack_428 = (uint64_t *)puStack_428[0xb]) {
        pcVar23 = (char *)*puStack_428;
        if (pcVar23 == (char *)0x0) {
          pcVar23 = (char *)0x180d48d24;
          pcVar9 = pcVar26;
        }
        else {
          pcVar9 = (char *)puStack_428[2];
        }
        if (pcVar9 == pcVar25 + -0x180a2721f) {
          pcVar9 = pcVar23 + (int64_t)pcVar9;
          if (pcVar9 <= pcVar23) goto LAB_180408bc0;
          lVar13 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar23;
          while (*pcVar23 == pcVar23[lVar13]) {
            pcVar23 = pcVar23 + 1;
            if (pcVar9 <= pcVar23) goto LAB_180408bc0;
          }
        }
      }
      puStack_428 = (uint64_t *)0x0;
LAB_180408bc0:
      if (puStack_428 != (uint64_t *)0x0) {
        lVar13 = (int64_t)iVar2;
        lStack_368 = lVar13;
        do {
          puVar20 = puStack_428;
          puStack_358 = &unknown_var_3480_ptr;
          puStack_350 = auStack_340;
          iStack_348 = 0;
          auStack_340[0] = 0;
          pcVar23 = "second_material";
          do {
            pcVar26 = pcVar23;
            pcVar23 = pcVar26 + 1;
          } while (*pcVar23 != '\0');
          puVar24 = (uint64_t *)puStack_428[8];
LAB_180408c11:
          if (puVar24 != (uint64_t *)0x0) {
            pcVar23 = (char *)*puVar24;
            if (pcVar23 == (char *)0x0) {
              pcVar23 = (char *)0x180d48d24;
              pcVar25 = (char *)0x0;
            }
            else {
              pcVar25 = (char *)puVar24[2];
            }
            if (pcVar25 != pcVar26 + -0x180a1683f) goto LAB_180408c9e;
            pcVar25 = pcVar25 + (int64_t)pcVar23;
            if (pcVar23 < pcVar25) {
              lVar22 = (int64_t)&unknown_var_8928_ptr - (int64_t)pcVar23;
              while (*pcVar23 == pcVar23[lVar22]) {
                pcVar23 = pcVar23 + 1;
                if (pcVar25 <= pcVar23) goto LAB_180408c50;
              }
              goto LAB_180408c9e;
            }
LAB_180408c50:
            lVar22 = 0x180d48d24;
            if (puVar24[1] != 0) {
              lVar22 = puVar24[1];
            }
            lVar6 = -1;
            do {
              lVar6 = lVar6 + 1;
            } while (*(char *)(lVar22 + lVar6) != '\0');
            if ((int)lVar6 < 0x40) {
              iStack_348 = (int)lVar6;
              strcpy_s(puStack_350,0x40);
            }
            else {
              SystemCore_ResourceManager0(&unknown_var_616_ptr,0x40,lVar22);
              iStack_348 = 0;
              *puStack_350 = 0;
            }
          }
          iVar2 = FUN_180191c00(render_system_data_memory,&puStack_358);
          iStack_378 = iVar2;
          if (iVar2 == -1) {
            puVar16 = &system_buffer_ptr;
            if (puStack_350 != (int8_t *)0x0) {
              puVar16 = puStack_350;
            }
            SystemCore_ResourceManager0(&unknown_var_6880_ptr,puVar16);
          }
          else {
            puStack_1d8 = &unknown_var_3480_ptr;
            puStack_1d0 = auStack_1c0;
            iStack_1c8 = 0;
            auStack_1c0[0] = 0;
            pcVar23 = "fallback_material_for_effects";
            do {
              pcVar26 = pcVar23;
              pcVar23 = pcVar26 + 1;
            } while (*pcVar23 != '\0');
            for (puVar20 = (uint64_t *)puVar20[8]; fVar28 = extraout_XMM0_Da,
                puVar20 != (uint64_t *)0x0; puVar20 = (uint64_t *)puVar20[6]) {
              pcVar23 = (char *)*puVar20;
              if (pcVar23 == (char *)0x0) {
                pcVar23 = (char *)0x180d48d24;
                pcVar25 = (char *)0x0;
              }
              else {
                pcVar25 = (char *)puVar20[2];
              }
              if (pcVar25 == pcVar26 + -0x180a27257) {
                pcVar25 = pcVar25 + (int64_t)pcVar23;
                if (pcVar25 <= pcVar23) {
LAB_180408d90:
                  lVar22 = 0x180d48d24;
                  if (puVar20[1] != 0) {
                    lVar22 = puVar20[1];
                  }
                  lVar6 = -1;
                  do {
                    lVar6 = lVar6 + 1;
                  } while (*(char *)(lVar22 + lVar6) != '\0');
                  if ((int)lVar6 < 0x40) {
                    iStack_1c8 = (int)lVar6;
                    fVar28 = (float)strcpy_s(puStack_1d0,0x40);
                  }
                  else {
                    fVar28 = (float)SystemCore_ResourceManager0(&unknown_var_616_ptr,0x40,lVar22);
                    iStack_1c8 = 0;
                    *puStack_1d0 = 0;
                  }
                  break;
                }
                lVar22 = (int64_t)&unknown_var_7048_ptr - (int64_t)pcVar23;
                while (*pcVar23 == pcVar23[lVar22]) {
                  pcVar23 = pcVar23 + 1;
                  if (pcVar25 <= pcVar23) goto LAB_180408d90;
                }
              }
            }
            iVar12 = iVar4;
            if ((0 < iStack_1c8) &&
               (iVar12 = FUN_180191c00(render_system_data_memory,&puStack_1d8), fVar28 = extraout_XMM0_Da_00,
               iVar12 == -1)) {
              puVar16 = &system_buffer_ptr;
              if (puStack_1d0 != (int8_t *)0x0) {
                puVar16 = puStack_1d0;
              }
              fVar28 = (float)FUN_180627020(&unknown_var_7080_ptr,puVar16);
              iVar12 = iVar4;
            }
            lVar13 = lVar13 * 0x2c0;
            lVar22 = *(int64_t *)(render_system_memory + (int64_t)iVar2 * 8) + lVar13;
            plVar17 = (int64_t *)(lVar22 + 0x28);
            lVar22 = (*(int64_t *)(render_system_memory + (int64_t)iVar12 * 8) + lVar13) - lVar22;
            lVar6 = 0xb;
            do {
              *(int32_t *)(plVar17 + -5) = *(int32_t *)(lVar22 + -0x28 + (int64_t)plVar17);
              *(int32_t *)((int64_t)plVar17 + -0x24) =
                   *(int32_t *)(lVar22 + -0x24 + (int64_t)plVar17);
              *(int32_t *)(plVar17 + -4) = *(int32_t *)(lVar22 + -0x20 + (int64_t)plVar17);
              *(int32_t *)((int64_t)plVar17 + -0x1c) =
                   *(int32_t *)(lVar22 + -0x1c + (int64_t)plVar17);
              *(int32_t *)(plVar17 + -3) = *(int32_t *)(lVar22 + -0x18 + (int64_t)plVar17);
              *(int8_t *)((int64_t)plVar17 + -0x14) =
                   *(int8_t *)(lVar22 + -0x14 + (int64_t)plVar17);
              *(int8_t *)((int64_t)plVar17 + -0x13) =
                   *(int8_t *)(lVar22 + -0x13 + (int64_t)plVar17);
              *(int32_t *)(plVar17 + -2) = *(int32_t *)(lVar22 + -0x10 + (int64_t)plVar17);
              uVar3 = *(uint *)(lVar22 + 8 + (int64_t)plVar17);
              uVar7 = (uint64_t)uVar3;
              if (*(int64_t *)(lVar22 + (int64_t)plVar17) != 0) {
                fVar28 = (float)CoreMemoryPoolProcessor(plVar17 + -1,uVar7);
              }
              if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
                memcpy(*plVar17,*(uint64_t *)(lVar22 + (int64_t)plVar17),uVar7);
              }
              *(int32_t *)(plVar17 + 1) = 0;
              if (*plVar17 != 0) {
                *(int8_t *)(uVar7 + *plVar17) = 0;
              }
              *(int32_t *)((int64_t)plVar17 + 0x14) =
                   *(int32_t *)(lVar22 + 0x14 + (int64_t)plVar17);
              plVar17 = plVar17 + 8;
              lVar6 = lVar6 + -1;
            } while (lVar6 != 0);
            pcVar23 = "collision_effect";
            do {
              pcVar26 = pcVar23;
              pcVar23 = pcVar26 + 1;
            } while (*pcVar23 != '\0');
            for (pcVar23 = (char *)puStack_428[6]; pcVar23 != (char *)0x0;
                pcVar23 = *(char **)(pcVar23 + 0x58)) {
              pcVar9 = *(char **)pcVar23;
              pcVar25 = (char *)0x0;
              if (pcVar9 == (char *)0x0) {
                pcVar9 = (char *)0x180d48d24;
              }
              else {
                pcVar25 = *(char **)(pcVar23 + 0x10);
              }
              if (pcVar25 == pcVar26 + -0x180a272af) {
                pcVar25 = pcVar25 + (int64_t)pcVar9;
                if (pcVar25 <= pcVar9) goto LAB_180408fa3;
                lVar22 = (int64_t)&unknown_var_7136_ptr - (int64_t)pcVar9;
                while (*pcVar9 == pcVar9[lVar22]) {
                  pcVar9 = pcVar9 + 1;
                  if (pcVar25 <= pcVar9) goto LAB_180408fa3;
                }
              }
            }
            pcVar23 = (char *)0x0;
LAB_180408fa3:
            pcVar26 = (char *)0x0;
            iVar4 = iVar2;
            while (pcVar23 != (char *)0x0) {
              puStack_398 = &system_data_buffer_ptr;
              uStack_380 = 0;
              puStack_390 = (void *)0x0;
              uStack_388 = 0;
              pcVar25 = "effect_type";
              do {
                pcVar9 = pcVar25;
                pcVar25 = pcVar9 + 1;
              } while (*pcVar25 != '\0');
              for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                  puVar20 = (uint64_t *)puVar20[6]) {
                pcVar25 = (char *)*puVar20;
                if (pcVar25 == (char *)0x0) {
                  pcVar25 = (char *)0x180d48d24;
                  pcVar10 = pcVar26;
                }
                else {
                  pcVar10 = (char *)puVar20[2];
                }
                if (pcVar10 == pcVar9 + -0x180a2738f) {
                  pcVar10 = pcVar10 + (int64_t)pcVar25;
                  if (pcVar10 <= pcVar25) {
LAB_180409046:
                    lVar22 = 0x180d48d24;
                    if (puVar20[1] != 0) {
                      lVar22 = puVar20[1];
                    }
                    fVar28 = (float)FUN_180627c50(&puStack_398,lVar22);
                    break;
                  }
                  lVar22 = (int64_t)&unknown_var_7360_ptr - (int64_t)pcVar25;
                  while (*pcVar25 == pcVar25[lVar22]) {
                    pcVar25 = pcVar25 + 1;
                    if (pcVar10 <= pcVar25) goto LAB_180409046;
                  }
                }
              }
              uVar3 = FUN_18040a100(fVar28,&puStack_398);
              if (uVar3 != 0xffffffff) {
                piVar21 = (int *)((int64_t)(int)uVar3 * 0x40 +
                                 *(int64_t *)(render_system_memory + (int64_t)iVar2 * 8) + lVar13);
                puStack_238 = &unknown_var_3480_ptr;
                puStack_230 = auStack_220;
                iStack_228 = 0;
                auStack_220[0] = 0;
                pcVar25 = "particle";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                puVar20 = *(uint64_t **)(pcVar23 + 0x40);
LAB_1804090f0:
                if (puVar20 != (uint64_t *)0x0) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 != pcVar9 + -0x180a272c7) goto LAB_1804091a2;
                  pcVar10 = pcVar25 + (int64_t)pcVar10;
                  if (pcVar25 < pcVar10) {
                    lVar22 = (int64_t)&unknown_var_7160_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_180409142;
                    }
                    goto LAB_1804091a2;
                  }
LAB_180409142:
                  lVar22 = 0x180d48d24;
                  if (puVar20[1] != 0) {
                    lVar22 = puVar20[1];
                  }
                  lVar6 = -1;
                  do {
                    lVar6 = lVar6 + 1;
                  } while (*(char *)(lVar22 + lVar6) != '\0');
                  if ((int)lVar6 < 0x40) {
                    iStack_228 = (int)lVar6;
                    uVar29 = strcpy_s(puStack_230,0x40);
                  }
                  else {
                    uVar29 = SystemCore_ResourceManager0(&unknown_var_616_ptr,0x40,lVar22);
                    iStack_228 = 0;
                    *puStack_230 = 0;
                  }
                  if (iStack_228 == 0) {
                    *piVar21 = -1;
                  }
                  else {
                    iVar4 = FUN_1800c17c0(uVar29,&puStack_238);
                    if (iVar4 == -1) {
                      puVar16 = &system_buffer_ptr;
                      if (puStack_350 != (int8_t *)0x0) {
                        puVar16 = puStack_350;
                      }
                      puVar15 = &system_buffer_ptr;
                      if (puStack_2f0 != (void *)0x0) {
                        puVar15 = puStack_2f0;
                      }
                      puVar14 = &system_buffer_ptr;
                      if (puStack_230 != (int8_t *)0x0) {
                        puVar14 = puStack_230;
                      }
                      SystemCore_ResourceManager0(&unknown_var_7176_ptr,puVar14,puVar15,puVar16);
                      puStack_118 = &unknown_var_3480_ptr;
                      puStack_110 = auStack_100;
                      auStack_100[0] = 0;
                      uStack_108 = 0x1e;
                      uVar29 = strcpy_s(auStack_100,0x40,&unknown_var_7240_ptr);
                      iVar4 = FUN_1800c17c0(uVar29,&puStack_118);
                      puStack_118 = &system_state_ptr;
                    }
                    *piVar21 = iVar4;
                  }
                }
                puStack_298 = &unknown_var_3480_ptr;
                puStack_290 = auStack_280;
                iStack_288 = 0;
                auStack_280[0] = 0;
                pcVar25 = "trail_particle";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a2739f) {
                    pcVar10 = pcVar10 + (int64_t)pcVar25;
                    if (pcVar10 <= pcVar25) {
LAB_180409362:
                      lVar22 = 0x180d48d24;
                      if (puVar20[1] != 0) {
                        lVar22 = puVar20[1];
                      }
                      lVar6 = -1;
                      do {
                        lVar6 = lVar6 + 1;
                      } while (*(char *)(lVar22 + lVar6) != '\0');
                      if ((int)lVar6 < 0x40) {
                        iStack_288 = (int)lVar6;
                        uVar29 = strcpy_s(puStack_290,0x40);
                      }
                      else {
                        uVar29 = SystemCore_ResourceManager0(&unknown_var_616_ptr,0x40,lVar22);
                        iStack_288 = 0;
                        *puStack_290 = 0;
                      }
                      if (iStack_288 == 0) {
                        piVar21[1] = -1;
                      }
                      else {
                        iVar4 = FUN_1800c17c0(uVar29,&puStack_298);
                        if (iVar4 == -1) {
                          puVar16 = &system_buffer_ptr;
                          if (puStack_350 != (int8_t *)0x0) {
                            puVar16 = puStack_350;
                          }
                          puVar15 = &system_buffer_ptr;
                          if (puStack_2f0 != (void *)0x0) {
                            puVar15 = puStack_2f0;
                          }
                          puVar14 = &system_buffer_ptr;
                          if (puStack_290 != (int8_t *)0x0) {
                            puVar14 = puStack_290;
                          }
                          SystemCore_ResourceManager0(&unknown_var_7392_ptr,puVar14,puVar15,puVar16);
                          puStack_b8 = &unknown_var_3480_ptr;
                          puStack_b0 = auStack_a0;
                          auStack_a0[0] = 0;
                          uStack_a8 = 0x1e;
                          uVar29 = strcpy_s(auStack_a0,0x40,&unknown_var_7240_ptr);
                          iVar4 = FUN_1800c17c0(uVar29,&puStack_b8);
                          puStack_b8 = &system_state_ptr;
                          piVar21[1] = iVar4;
                        }
                        else {
                          if (4 < uVar3) {
                            puVar16 = &system_buffer_ptr;
                            if (puStack_350 != (int8_t *)0x0) {
                              puVar16 = puStack_350;
                            }
                            puVar15 = &system_buffer_ptr;
                            if (puStack_2f0 != (void *)0x0) {
                              puVar15 = puStack_2f0;
                            }
                            puVar14 = &system_buffer_ptr;
                            if (puStack_290 != (int8_t *)0x0) {
                              puVar14 = puStack_290;
                            }
                            SystemCore_ResourceManager0(&unknown_var_7472_ptr,puVar14,puVar15,puVar16);
                            iVar4 = -1;
                          }
                          piVar21[1] = iVar4;
                        }
                      }
                      break;
                    }
                    lVar22 = (int64_t)&unknown_var_7376_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_180409362;
                    }
                  }
                }
                iStack_438 = -1;
                pcVar25 = "atlas_start_index";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a27337) {
                    pcVar10 = pcVar10 + (int64_t)pcVar25;
                    if (pcVar10 <= pcVar25) {
LAB_1804095b4:
                      pcVar25 = (char *)0x180d48d24;
                      if ((char *)puVar20[1] != (char *)0x0) {
                        pcVar25 = (char *)puVar20[1];
                      }
                      uVar7 = 0xffffffffffffffff;
                      do {
                        uVar7 = uVar7 + 1;
                      } while (pcVar25[uVar7] != '\0');
                      if (((uVar7 < 3) || (*pcVar25 != '0')) ||
                         (puVar15 = &unknown_var_5412_ptr, (pcVar25[1] + 0xa8U & 0xdf) != 0)) {
                        puVar15 = &unknown_var_2208_ptr;
                      }
                      AdvancedSystemOptimizer(pcVar25,puVar15,&iStack_438);
                      piVar21[2] = iStack_438;
                      break;
                    }
                    lVar22 = (int64_t)&unknown_var_7272_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_1804095b4;
                    }
                  }
                }
                iStack_434 = -1;
                pcVar25 = "atlas_end_index";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a2734f) {
                    pcVar10 = pcVar10 + (int64_t)pcVar25;
                    if (pcVar10 <= pcVar25) {
LAB_180409694:
                      pcVar25 = (char *)0x180d48d24;
                      if ((char *)puVar20[1] != (char *)0x0) {
                        pcVar25 = (char *)puVar20[1];
                      }
                      uVar7 = 0xffffffffffffffff;
                      do {
                        uVar7 = uVar7 + 1;
                      } while (pcVar25[uVar7] != '\0');
                      if (((uVar7 < 3) || (*pcVar25 != '0')) ||
                         (puVar15 = &unknown_var_5412_ptr, (pcVar25[1] + 0xa8U & 0xdf) != 0)) {
                        puVar15 = &unknown_var_2208_ptr;
                      }
                      AdvancedSystemOptimizer(pcVar25,puVar15,&iStack_434);
                      piVar21[3] = iStack_434;
                      break;
                    }
                    lVar22 = (int64_t)&unknown_var_7296_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_180409694;
                    }
                  }
                }
                puStack_178 = &unknown_var_3480_ptr;
                puStack_170 = auStack_160;
                iStack_168 = 0;
                auStack_160[0] = 0;
                pcVar25 = "decal_id";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a2735f) {
                    pcVar10 = pcVar25 + (int64_t)pcVar10;
                    if (pcVar10 <= pcVar25) {
LAB_1804097a6:
                      lVar22 = 0x180d48d24;
                      if (puVar20[1] != 0) {
                        lVar22 = puVar20[1];
                      }
                      lVar6 = -1;
                      do {
                        lVar6 = lVar6 + 1;
                      } while (*(char *)(lVar22 + lVar6) != '\0');
                      if ((int)lVar6 < 0x40) {
                        iStack_168 = (int)lVar6;
                        strcpy_s(puStack_170,0x40);
                      }
                      else {
                        SystemCore_ResourceManager0(&unknown_var_616_ptr,0x40,lVar22);
                        iStack_168 = 0;
                        *puStack_170 = 0;
                      }
                      puVar16 = &system_buffer_ptr;
                      if (puStack_170 != (int8_t *)0x0) {
                        puVar16 = puStack_170;
                      }
                      (**(code **)(*(int64_t *)(piVar21 + 8) + 0x10))(piVar21 + 8,puVar16);
                      break;
                    }
                    lVar22 = (int64_t)&unknown_var_7312_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_1804097a6;
                    }
                  }
                }
                puStack_178 = &system_state_ptr;
                puStack_3d8 = &system_data_buffer_ptr;
                uStack_3c0 = 0;
                puStack_3d0 = (void *)0x0;
                iStack_3c8 = 0;
                pcVar25 = "sound";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                for (puVar20 = *(uint64_t **)(pcVar23 + 0x40); puVar20 != (uint64_t *)0x0;
                    puVar20 = (uint64_t *)puVar20[6]) {
                  pcVar25 = (char *)*puVar20;
                  if (pcVar25 == (char *)0x0) {
                    pcVar25 = (char *)0x180d48d24;
                    pcVar10 = pcVar26;
                  }
                  else {
                    pcVar10 = (char *)puVar20[2];
                  }
                  if (pcVar10 == pcVar9 + -0x180a2767f) {
                    pcVar10 = pcVar10 + (int64_t)pcVar25;
                    if (pcVar10 <= pcVar25) {
LAB_1804098f6:
                      lVar22 = 0x180d48d24;
                      if (puVar20[1] != 0) {
                        lVar22 = puVar20[1];
                      }
                      FUN_180627c50(&puStack_3d8,lVar22);
                      if (iStack_3c8 == 0) {
                        piVar21[4] = -1;
                      }
                      else {
                        iVar4 = (**(code **)(*render_system_data_memory + 0xd0))(render_system_data_memory,&puStack_3d8);
                        if (iVar4 == -1) {
                          puVar15 = &system_buffer_ptr;
                          if (puStack_3d0 != (void *)0x0) {
                            puVar15 = puStack_3d0;
                          }
                          SystemCore_ResourceManager0(&unknown_var_7328_ptr,puVar15);
                        }
                        piVar21[4] = iVar4;
                      }
                      break;
                    }
                    lVar22 = (int64_t)&unknown_var_8112_ptr - (int64_t)pcVar25;
                    while (*pcVar25 == pcVar25[lVar22]) {
                      pcVar25 = pcVar25 + 1;
                      if (pcVar10 <= pcVar25) goto LAB_1804098f6;
                    }
                  }
                }
                puStack_3d8 = &system_data_buffer_ptr;
                if (puStack_3d0 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                  CoreEngine_MemoryPoolManager();
                }
                puStack_3d0 = (void *)0x0;
                uStack_3c0 = uStack_3c0 & 0xffffffff00000000;
                puStack_3d8 = &system_state_ptr;
                puStack_418 = &system_data_buffer_ptr;
                uStack_400 = 0;
                lStack_410 = 0;
                uStack_408 = 0;
                pcVar25 = "one_shot";
                do {
                  pcVar9 = pcVar25;
                  pcVar25 = pcVar9 + 1;
                } while (*pcVar25 != '\0');
                puVar20 = *(uint64_t **)(pcVar23 + 0x40);
LAB_1804099d4:
                if (puVar20 == (uint64_t *)0x0) goto LAB_180409afe;
                pcVar25 = (char *)*puVar20;
                if (pcVar25 == (char *)0x0) {
                  pcVar25 = (char *)0x180d48d24;
                  pcVar10 = pcVar26;
                }
                else {
                  pcVar10 = (char *)puVar20[2];
                }
                if (pcVar10 == pcVar9 + -0x180a2755f) {
                  pcVar10 = pcVar10 + (int64_t)pcVar25;
                  if (pcVar10 <= pcVar25) {
LAB_180409a24:
                    lVar22 = 0x180d48d24;
                    if (puVar20[1] != 0) {
                      lVar22 = puVar20[1];
                    }
                    FUN_180627c50(&puStack_418,lVar22);
                    pcVar25 = pcVar26;
                    pcVar9 = pcVar26;
                    if (uStack_408 != 0) {
                      do {
                        if ((byte)(pcVar25[lStack_410] + 0xbfU) < 0x1a) {
                          pcVar25[lStack_410] = pcVar25[lStack_410] + ' ';
                        }
                        uVar3 = (int)pcVar9 + 1;
                        pcVar25 = pcVar25 + 1;
                        pcVar9 = (char *)(uint64_t)uVar3;
                      } while (uVar3 < uStack_408);
                    }
                    pcVar9 = pcVar26;
                    pcVar25 = pcVar26;
                    if (uStack_408 == 4) {
                      do {
                        pcVar10 = pcVar9 + 1;
                        if (pcVar9[lStack_410] != pcVar9[0x180a06418]) goto LAB_180409b79;
                        pcVar9 = pcVar10;
                      } while (pcVar10 != (char *)0x5);
LAB_180409ba0:
                      do {
                        pcVar9 = pcVar25;
                        bVar27 = pcVar9[lStack_410] == pcVar9[0x180a06418];
                        if (!bVar27) goto LAB_180409afb;
                        pcVar25 = pcVar9 + 1;
                      } while (pcVar9 + 1 != (char *)0x5);
                      bVar27 = pcVar9[lStack_410] == pcVar9[0x180a06418];
                    }
                    else {
                      if (uStack_408 == 5) {
                        do {
                          pcVar10 = pcVar9 + 1;
                          if (pcVar9[lStack_410] != pcVar9[0x180a06420]) goto LAB_180409b79;
                          pcVar9 = pcVar10;
                        } while (pcVar10 != (char *)0x6);
                      }
                      else {
LAB_180409b79:
                        SystemCore_ResourceManager0(&unknown_var_7840_ptr);
                        if (uStack_408 == 4) goto LAB_180409ba0;
                      }
                      bVar27 = false;
                    }
LAB_180409afb:
                    *(bool *)(piVar21 + 5) = bVar27;
                    goto LAB_180409afe;
                  }
                  lVar22 = (int64_t)&unknown_var_7824_ptr - (int64_t)pcVar25;
                  while (*pcVar25 == pcVar25[lVar22]) {
                    pcVar25 = pcVar25 + 1;
                    if (pcVar10 <= pcVar25) goto LAB_180409a24;
                  }
                }
                puVar20 = (uint64_t *)puVar20[6];
                goto LAB_1804099d4;
              }
              puVar15 = &system_buffer_ptr;
              if (puStack_390 != (void *)0x0) {
                puVar15 = puStack_390;
              }
              fVar28 = (float)SystemCore_ResourceManager0(&unknown_var_7672_ptr,puVar15);
LAB_180409dd3:
              pcVar25 = "collision_effect";
              do {
                pcVar9 = pcVar25;
                pcVar25 = pcVar9 + 1;
              } while (*pcVar25 != '\0');
              for (pcVar25 = *(char **)(pcVar23 + 0x58); pcVar23 = pcVar26, pcVar25 != (char *)0x0;
                  pcVar25 = *(char **)(pcVar25 + 0x58)) {
                pcVar10 = *(char **)pcVar25;
                if (pcVar10 == (char *)0x0) {
                  pcVar10 = (char *)0x180d48d24;
                  pcVar8 = pcVar26;
                }
                else {
                  pcVar8 = *(char **)(pcVar25 + 0x10);
                }
                if (pcVar8 == pcVar9 + -0x180a272af) {
                  pcVar8 = pcVar8 + (int64_t)pcVar10;
                  pcVar23 = pcVar25;
                  if (pcVar8 <= pcVar10) break;
                  lVar22 = (int64_t)&unknown_var_7136_ptr - (int64_t)pcVar10;
                  while (*pcVar10 == pcVar10[lVar22]) {
                    pcVar10 = pcVar10 + 1;
                    if (pcVar8 <= pcVar10) goto LAB_180409e3f;
                  }
                }
              }
LAB_180409e3f:
              puStack_398 = &system_data_buffer_ptr;
              if (puStack_390 != (void *)0x0) {
                    // WARNING: Subroutine does not return
                CoreEngine_MemoryPoolManager();
              }
              puStack_390 = (void *)0x0;
              uStack_380 = uStack_380 & 0xffffffff00000000;
              puStack_398 = &system_state_ptr;
              iVar4 = iStack_378;
            }
            if (iVar4 == iStack_430) {
              lVar22 = render_system_data_memory[8];
              lVar6 = 0;
              if (0 < (int)lVar22) {
                iVar4 = *(int *)(render_system_data_memory[5] + 100);
                do {
                  lVar11 = *(int64_t *)(render_system_memory + lVar6 * 8) + lVar13;
                  puVar18 = (int32_t *)(lVar11 + 4);
                  lVar11 = (*(int64_t *)(render_system_memory + (int64_t)iVar4 * 8) + lVar13) - lVar11;
                  lVar19 = 0xb;
                  do {
                    puVar18[-1] = *(int32_t *)((int64_t)puVar18 + lVar11 + -4);
                    *puVar18 = *(int32_t *)((int64_t)puVar18 + lVar11);
                    puVar18[1] = *(int32_t *)((int64_t)puVar18 + lVar11 + 4);
                    puVar18[2] = *(int32_t *)((int64_t)puVar18 + lVar11 + 8);
                    puVar18[3] = *(int32_t *)((int64_t)puVar18 + lVar11 + 0xc);
                    *(int8_t *)(puVar18 + 4) =
                         *(int8_t *)((int64_t)puVar18 + lVar11 + 0x10);
                    *(int8_t *)((int64_t)puVar18 + 0x11) =
                         *(int8_t *)((int64_t)puVar18 + lVar11 + 0x11);
                    puVar18[5] = *(int32_t *)((int64_t)puVar18 + lVar11 + 0x14);
                    SystemCore_ConfigurationHandler0(puVar18 + 7,lVar11 + 0x1c + (int64_t)puVar18);
                    puVar18 = puVar18 + 0x10;
                    lVar19 = lVar19 + -1;
                  } while (lVar19 != 0);
                  lVar6 = lVar6 + 1;
                } while (lVar6 < (int)lVar22);
              }
            }
            puStack_1d8 = &system_state_ptr;
            puVar20 = puStack_428;
            lVar13 = lStack_368;
            iVar4 = iStack_430;
          }
          pcVar23 = "collision_info";
          do {
            pcVar26 = pcVar23;
            pcVar23 = pcVar26 + 1;
          } while (*pcVar23 != '\0');
          for (puStack_428 = (uint64_t *)puVar20[0xb]; puStack_428 != (uint64_t *)0x0;
              puStack_428 = (uint64_t *)puStack_428[0xb]) {
            pcVar23 = (char *)*puStack_428;
            if (pcVar23 == (char *)0x0) {
              pcVar25 = (char *)0x0;
              pcVar23 = (char *)0x180d48d24;
            }
            else {
              pcVar25 = (char *)puStack_428[2];
            }
            if (pcVar25 == pcVar26 + -0x180a2721f) {
              pcVar25 = pcVar25 + (int64_t)pcVar23;
              if (pcVar25 <= pcVar23) goto LAB_180409ff0;
              lVar22 = (int64_t)&unknown_var_6992_ptr - (int64_t)pcVar23;
              while (*pcVar23 == pcVar23[lVar22]) {
                pcVar23 = pcVar23 + 1;
                if (pcVar25 <= pcVar23) goto LAB_180409ff0;
              }
            }
          }
          puStack_428 = (uint64_t *)0x0;
LAB_180409ff0:
          puStack_358 = &system_state_ptr;
          if (puStack_428 == (uint64_t *)0x0) break;
        } while( true );
      }
    }
    pcVar23 = "monster";
    do {
      pcVar26 = pcVar23;
      pcVar23 = pcVar26 + 1;
    } while (*pcVar23 != '\0');
    for (puStack_420 = (uint64_t *)puStack_420[0xb]; puStack_420 != (uint64_t *)0x0;
        puStack_420 = (uint64_t *)puStack_420[0xb]) {
      pcVar23 = (char *)*puStack_420;
      if (pcVar23 == (char *)0x0) {
        pcVar25 = (char *)0x0;
        pcVar23 = (char *)0x180d48d24;
      }
      else {
        pcVar25 = (char *)puStack_420[2];
      }
      if (pcVar25 == pcVar26 + -0x180a2722f) {
        pcVar25 = pcVar25 + (int64_t)pcVar23;
        if (pcVar25 <= pcVar23) goto LAB_18040a0a0;
        lVar13 = (int64_t)&unknown_var_7008_ptr - (int64_t)pcVar23;
        while (*pcVar23 == pcVar23[lVar13]) {
          pcVar23 = pcVar23 + 1;
          if (pcVar25 <= pcVar23) goto LAB_18040a0a0;
        }
      }
    }
    puStack_420 = (uint64_t *)0x0;
LAB_18040a0a0:
    puStack_2f8 = &system_state_ptr;
  } while (puStack_420 != (uint64_t *)0x0);
  goto LAB_18040a0c2;
LAB_180408c9e:
  puVar24 = (uint64_t *)puVar24[6];
  goto LAB_180408c11;
LAB_1804091a2:
  puVar20 = (uint64_t *)puVar20[6];
  goto LAB_1804090f0;
LAB_180409afe:
  puStack_418 = &system_data_buffer_ptr;
  if (lStack_410 != 0) {
                    // WARNING: Subroutine does not return
    CoreEngine_MemoryPoolManager();
  }
  lStack_410 = 0;
  uStack_400 = uStack_400 & 0xffffffff00000000;
  puStack_418 = &system_state_ptr;
  puStack_3f8 = &system_data_buffer_ptr;
  uStack_3e0 = 0;
  lStack_3f0 = 0;
  uStack_3e8 = 0;
  pcVar25 = "do_not_send_armor_parameter_to_sound";
  do {
    pcVar9 = pcVar25;
    pcVar25 = pcVar9 + 1;
  } while (*pcVar25 != '\0');
  puVar20 = *(uint64_t **)(pcVar23 + 0x40);
LAB_180409b62:
  if (puVar20 == (uint64_t *)0x0) {
LAB_180409cce:
    puStack_3f8 = &system_data_buffer_ptr;
    if (lStack_3f0 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngine_MemoryPoolManager();
    }
    lStack_3f0 = 0;
    uStack_3e0 = uStack_3e0 & 0xffffffff00000000;
    puStack_3f8 = &system_state_ptr;
    afStack_374[0] = -1.0;
    lVar22 = FUN_1800a02a0(pcVar23,&unknown_var_7560_ptr);
    fVar28 = extraout_XMM0_Da_01;
    if (lVar22 != 0) {
      lVar6 = 0x180d48d24;
      if (*(int64_t *)(lVar22 + 8) != 0) {
        lVar6 = *(int64_t *)(lVar22 + 8);
      }
      AdvancedSystemOptimizer(lVar6,&system_data_6430,afStack_374);
      if (afStack_374[0] <= 0.0) {
        fVar28 = (float)SystemCore_ResourceManager0(&unknown_var_7600_ptr);
      }
      else {
        fVar28 = 1.0 / afStack_374[0];
        piVar21[6] = (int)fVar28;
      }
    }
    puStack_298 = &system_state_ptr;
    puStack_238 = &system_state_ptr;
    goto LAB_180409dd3;
  }
  pcVar25 = (char *)*puVar20;
  if (pcVar25 == (char *)0x0) {
    pcVar25 = (char *)0x180d48d24;
    pcVar10 = pcVar26;
  }
  else {
    pcVar10 = (char *)puVar20[2];
  }
  if (pcVar10 == pcVar9 + -0x180a2759f) {
    pcVar10 = pcVar10 + (int64_t)pcVar25;
    if (pcVar10 <= pcVar25) {
LAB_180409bf4:
      lVar22 = 0x180d48d24;
      if (puVar20[1] != 0) {
        lVar22 = puVar20[1];
      }
      FUN_180627c50(&puStack_3f8,lVar22);
      pcVar25 = pcVar26;
      pcVar9 = pcVar26;
      if (uStack_3e8 != 0) {
        do {
          if ((byte)(pcVar25[lStack_3f0] + 0xbfU) < 0x1a) {
            pcVar25[lStack_3f0] = pcVar25[lStack_3f0] + ' ';
          }
          uVar3 = (int)pcVar9 + 1;
          pcVar25 = pcVar25 + 1;
          pcVar9 = (char *)(uint64_t)uVar3;
        } while (uVar3 < uStack_3e8);
      }
      pcVar9 = pcVar26;
      pcVar25 = pcVar26;
      if (uStack_3e8 == 4) {
        do {
          pcVar10 = pcVar9 + 1;
          if (pcVar9[lStack_3f0] != pcVar9[0x180a06418]) goto LAB_180409d4a;
          pcVar9 = pcVar10;
        } while (pcVar10 != (char *)0x5);
LAB_180409d70:
        do {
          pcVar9 = pcVar25;
          bVar27 = pcVar9[lStack_3f0] == pcVar9[0x180a06418];
          if (!bVar27) goto LAB_180409ccb;
          pcVar25 = pcVar9 + 1;
        } while (pcVar9 + 1 != (char *)0x5);
        bVar27 = pcVar9[lStack_3f0] == pcVar9[0x180a06418];
      }
      else {
        if (uStack_3e8 == 5) {
          do {
            pcVar10 = pcVar9 + 1;
            if (pcVar9[lStack_3f0] != pcVar9[0x180a06420]) goto LAB_180409d4a;
            pcVar9 = pcVar10;
          } while (pcVar10 != (char *)0x6);
        }
        else {
LAB_180409d4a:
          SystemCore_ResourceManager0(&unknown_var_7936_ptr);
          if (uStack_3e8 == 4) goto LAB_180409d70;
        }
        bVar27 = false;
      }
LAB_180409ccb:
      *(bool *)((int64_t)piVar21 + 0x15) = bVar27;
      goto LAB_180409cce;
    }
    lVar22 = (int64_t)&unknown_var_7888_ptr - (int64_t)pcVar25;
    while (*pcVar25 == pcVar25[lVar22]) {
      pcVar25 = pcVar25 + 1;
      if (pcVar10 <= pcVar25) goto LAB_180409bf4;
    }
  }
  puVar20 = (uint64_t *)puVar20[6];
  goto LAB_180409b62;
}



uint64_t FUN_18040a100(uint64_t param_1,int64_t param_2)

{
  int iVar1;
  int iVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  
  iVar2 = *(int *)(param_2 + 0x10);
  uVar5 = 0;
  if (iVar2 == 6) {
    uVar4 = uVar5;
    do {
      uVar3 = uVar4 + 1;
      if (*(char *)(*(int64_t *)(param_2 + 8) + uVar4) != (&unknown_var_8044_ptr)[uVar4]) {
        uVar4 = uVar5;
        while (uVar3 = uVar4,
              *(char *)(*(int64_t *)(param_2 + 8) + uVar3) == (&unknown_var_8052_ptr)[uVar3]) {
          uVar4 = uVar3 + 1;
          if (uVar3 + 1 == 7) {
            return (uint64_t)((int)uVar3 - 5);
          }
        }
        uVar4 = uVar5;
        while (uVar3 = uVar4,
              *(char *)(*(int64_t *)(param_2 + 8) + uVar3) == (&unknown_var_8060_ptr)[uVar3]) {
          uVar4 = uVar3 + 1;
          if (uVar3 + 1 == 7) {
            return (uint64_t)((int)uVar3 - 4);
          }
        }
        uVar4 = uVar5;
        while (uVar3 = uVar4,
              *(char *)(*(int64_t *)(param_2 + 8) + uVar3) == (&unknown_var_8068_ptr)[uVar3]) {
          uVar4 = uVar3 + 1;
          if (uVar3 + 1 == 7) {
            return (uint64_t)((int)uVar3 - 3);
          }
        }
        uVar4 = uVar5;
        while (uVar3 = uVar4,
              *(char *)(*(int64_t *)(param_2 + 8) + uVar3) == (&unknown_var_8008_ptr)[uVar3]) {
          uVar4 = uVar3 + 1;
          if (uVar3 + 1 == 7) {
            return (uint64_t)((int)uVar3 - 2);
          }
        }
        goto LAB_18040a22c;
      }
      uVar4 = uVar3;
    } while (uVar3 != 7);
  }
  else {
LAB_18040a22c:
    if (iVar2 == 4) {
      uVar4 = uVar5;
      do {
        uVar3 = uVar4 + 1;
        if (*(char *)(*(int64_t *)(param_2 + 8) + uVar4) != (&unknown_var_8016_ptr)[uVar4]) {
          uVar4 = uVar5;
          while (uVar3 = uVar4,
                *(char *)(*(int64_t *)(param_2 + 8) + uVar3) == (&unknown_var_8024_ptr)[uVar3]) {
            uVar4 = uVar3 + 1;
            if (uVar3 + 1 == 5) {
              return (uint64_t)((int)uVar3 + 2);
            }
          }
          goto LAB_18040a28c;
        }
        uVar4 = uVar3;
      } while (uVar3 != 5);
      uVar5 = 5;
    }
    else {
LAB_18040a28c:
      if ((iVar2 == 8) && (iVar1 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_8032_ptr), iVar1 == 0))
      {
        uVar5 = 7;
      }
      else if (iVar2 == 5) {
        uVar4 = uVar5;
        do {
          uVar3 = uVar4;
          if (*(char *)(*(int64_t *)(param_2 + 8) + uVar3) != (&unknown_var_8076_ptr)[uVar3]) {
            while (uVar4 = uVar5,
                  *(char *)(*(int64_t *)(param_2 + 8) + uVar4) == (&unknown_var_8084_ptr)[uVar4]) {
              uVar5 = uVar4 + 1;
              if (uVar4 + 1 == 6) {
                return (uint64_t)((int)uVar4 + 4);
              }
            }
            goto LAB_18040a308;
          }
          uVar4 = uVar3 + 1;
        } while (uVar3 + 1 != 6);
        uVar5 = (uint64_t)((int)uVar3 + 3);
      }
      else {
LAB_18040a308:
        uVar5 = 0xffffffff;
        if (iVar2 == 0xc) {
          iVar2 = strcmp(*(uint64_t *)(param_2 + 8),&unknown_var_8096_ptr);
          uVar5 = 0xffffffff;
          if (iVar2 == 0) {
            uVar5 = 10;
          }
        }
      }
    }
  }
  return uVar5;
}



// WARNING: Removing unreachable block (ram,0x00018040aa90)
// WARNING: Removing unreachable block (ram,0x00018040ab3a)
// WARNING: Removing unreachable block (ram,0x00018040aae2)
// WARNING: Removing unreachable block (ram,0x00018040aaeb)
// WARNING: Removing unreachable block (ram,0x00018040aaf1)
// WARNING: Removing unreachable block (ram,0x00018040ab32)
// WARNING: Removing unreachable block (ram,0x00018040ab0b)
// WARNING: Removing unreachable block (ram,0x00018040ab10)
// WARNING: Removing unreachable block (ram,0x00018040ab57)
// WARNING: Removing unreachable block (ram,0x00018040ab66)
// WARNING: Removing unreachable block (ram,0x00018040abaf)
// WARNING: Removing unreachable block (ram,0x00018040abb3)
// WARNING: Removing unreachable block (ram,0x00018040abdf)
// WARNING: Removing unreachable block (ram,0x00018040abd7)
// WARNING: Globals starting with '_' overlap smaller symbols at the same address





