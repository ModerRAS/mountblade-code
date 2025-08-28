#include "ultra_high_freq_fun_definitions.h"
/* SystemCore_Initializer - SystemCore_Initializer */
#define SystemCore_Initializer SystemCore_Initializer
/* SystemCore_BackupSystem - RenderingSystem_ConfigProcessor */
#define RenderingSystem_ConfigProcessor SystemCore_BackupSystem
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_03_part041_sub002_sub002.c - 1 个函数
// 函数: void function_1f37b0(int64_t *param_1,int64_t param_2)
void function_1f37b0(int64_t *param_1,int64_t param_2)
{
  char cVar1;
  void **ppuVar2;
  int iVar3;
  int32_t uVar4;
  uint uVar5;
  uint uVar6;
  uint64_t uVar7;
  void **ppuVar8;
  uint64_t uVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  char *pcVar12;
  char *pcVar13;
  uint64_t uVar14;
  int64_t *plVar15;
  char *pcVar16;
  char *pcVar17;
  int64_t lVar18;
  void *puVar19;
  uint64_t uVar20;
  int64_t lVar21;
  void **ppuVar22;
  char *pcVar23;
  char *pcVar24;
  int64_t *plVar25;
  int32_t extraout_XMM0_Da;
  int32_t extraout_XMM0_Da_00;
  int32_t extraout_XMM0_Da_01;
  int32_t extraout_XMM0_Da_02;
  int64_t *plStackX_8;
  int64_t lStackX_10;
  int aiStackX_18 [2];
  int64_t *plStackX_20;
  void *plocal_var_1c8;
  char *pcStack_1c0;
  int iStack_1b8;
  uint64_t local_var_1b0;
  void *plocal_var_1a8;
  char *pcStack_1a0;
  int iStack_198;
  uint64_t local_var_190;
  void **pplocal_var_188;
  void **pplocal_var_180;
  void **pplocal_var_178;
  int32_t local_var_170;
  void *plocal_var_168;
  int64_t lStack_160;
  int32_t local_var_158;
  uint64_t local_var_150;
  void *plocal_var_148;
  int64_t lStack_140;
  int32_t local_var_138;
  uint64_t local_var_130;
  int32_t local_var_128;
  int32_t local_var_124;
  uint local_var_120;
  void *plocal_var_118;
  int64_t lStack_110;
  int iStack_108;
  uint64_t local_var_100;
  void **pplocal_var_f8;
  void *plocal_var_f0;
  int64_t lStack_e8;
  int32_t local_var_e0;
  uint64_t local_var_d8;
  void *plocal_var_d0;
  int64_t lStack_c8;
  int32_t local_var_c0;
  uint64_t local_var_b8;
  void *plocal_var_b0;
  int64_t lStack_a8;
  int32_t local_var_a0;
  uint64_t local_var_98;
  int64_t lStack_90;
  uint64_t local_var_88;
  uint64_t local_var_80;
  int32_t local_var_78;
  int64_t alStack_70 [4];
  uint64_t local_var_50;
  local_var_50 = 0xfffffffffffffffe;
  pcVar23 = "id";
  do {
    pcVar24 = pcVar23;
    pcVar23 = pcVar24 + 1;
  } while (*pcVar23 != '\0');
  pcVar23 = (char *)0x0;
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); plStackX_8 = param_1, lStackX_10 = param_2,
      puVar10 != (uint64_t *)0x0; puVar10 = (uint64_t *)puVar10[6]) {
    pcVar13 = (char *)*puVar10;
    if (pcVar13 == (char *)0x0) {
      pcVar13 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar24 + -0x180a0ae27) {
      pcVar17 = pcVar17 + (int64_t)pcVar13;
      if (pcVar17 <= pcVar13) {
LAB_1801f3847:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(*param_1 + 0x10))(param_1,lVar18);
        break;
      }
      lVar18 = (int64_t)&ui_system_data_1288_ptr - (int64_t)pcVar13;
      while (*pcVar13 == pcVar13[lVar18]) {
        pcVar13 = pcVar13 + 1;
        if (pcVar17 <= pcVar13) goto LAB_1801f3847;
      }
    }
  }
  pcVar24 = "shader";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a089c3) {
      pcVar17 = pcVar24 + (int64_t)pcVar17;
      if (pcVar17 <= pcVar24) {
LAB_1801f38c5:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(param_1[4] + 0x10))(param_1 + 4,lVar18);
        break;
      }
      lVar18 = (int64_t)&system_config_89c4 - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f38c5;
      }
    }
  }
  pcVar24 = "class";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7df) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3940:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        (**(code **)(param_1[8] + 0x10))(param_1 + 8,lVar18);
        break;
      }
      lVar18 = (int64_t)&processed_var_6064_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3940;
      }
    }
  }
  pcVar24 = "skip_frames";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7e7) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f39c0:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (int64_t)&processed_var_6072_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f39c0;
      }
    }
  }
  if (((int64_t)param_1 + 100 != 0) && (pcVar24 != (char *)0x0)) {
    uVar7 = 0xffffffffffffffff;
    do {
      uVar7 = uVar7 + 1;
    } while (pcVar24[uVar7] != '\0');
    if (((uVar7 < 3) || (*pcVar24 != '0')) ||
       (puVar19 = &processed_var_5412_ptr, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
      puVar19 = &rendering_buffer_2208_ptr;
    }
    AdvancedSystemOptimizer(pcVar24,puVar19,(int64_t)param_1 + 100);
  }
  UltraHighFreq_CacheSystem1(param_2,&processed_var_6040_ptr,(int64_t)param_1 + 0x69);
  plocal_var_1c8 = &system_data_buffer_ptr;
  local_var_1b0 = 0;
  pcStack_1c0 = (char *)0x0;
  iStack_1b8 = 0;
  pcVar24 = "size";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7d7) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3ac0:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_1c8,lVar18);
        break;
      }
      lVar18 = (int64_t)&processed_var_6056_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3ac0;
      }
    }
  }
  pcVar24 = pcStack_1c0;
  if (iStack_1b8 == 8) {
    iVar3 = strcmp(pcStack_1c0,&processed_var_6104_ptr);
    if (iVar3 == 0) {
      *(int8_t *)(param_1 + 0xd) = 1;
    }
    else {
      iVar3 = strcmp(pcVar24,&processed_var_6120_ptr);
      if (iVar3 == 0) {
        *(int8_t *)(param_1 + 0xd) = 0;
      }
    }
  }
  plocal_var_1c8 = &system_data_buffer_ptr;
  if (pcStack_1c0 != (char *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pcStack_1c0 = (char *)0x0;
  local_var_1b0 = local_var_1b0 & 0xffffffff00000000;
  plocal_var_1c8 = &system_state_ptr;
  plocal_var_1a8 = &system_data_buffer_ptr;
  local_var_190 = 0;
  pcStack_1a0 = (char *)0x0;
  iStack_198 = 0;
  pcVar24 = "format";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e7f3) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3bd5:
        lVar18 = 0x180d48d24;
        if (puVar10[1] != 0) {
          lVar18 = puVar10[1];
        }
        CoreSystem_ConfigValidator0(&plocal_var_1a8,lVar18);
        break;
      }
      lVar18 = (int64_t)&processed_var_6084_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3bd5;
      }
    }
  }
  uVar4 = function_225200(&plocal_var_1a8);
  *(int32_t *)((int64_t)param_1 + 0x84) = uVar4;
  plocal_var_1a8 = &system_data_buffer_ptr;
  if (pcStack_1a0 != (char *)0x0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  pcStack_1a0 = (char *)0x0;
  local_var_190 = local_var_190 & 0xffffffff00000000;
  plocal_var_1a8 = &system_state_ptr;
  pcVar24 = "width";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0a23b) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3c88:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (int64_t)&processed_var_8236_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3c88;
      }
    }
  }
  if (((int64_t)param_1 + 0x6c != 0) && (pcVar24 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar24,&system_config_6430,(int64_t)param_1 + 0x6c);
  }
  pcVar24 = "height";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (puVar10 = *(uint64_t **)(param_2 + 0x40); pcVar24 = pcVar23, puVar10 != (uint64_t *)0x0;
      puVar10 = (uint64_t *)puVar10[6]) {
    pcVar24 = (char *)*puVar10;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)puVar10[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0a20b) {
      pcVar17 = pcVar24 + (int64_t)pcVar17;
      if (pcVar17 <= pcVar24) {
LAB_1801f3d20:
        pcVar24 = (char *)0x180d48d24;
        if ((char *)puVar10[1] != (char *)0x0) {
          pcVar24 = (char *)puVar10[1];
        }
        break;
      }
      lVar18 = (int64_t)&processed_var_8188_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3d20;
      }
    }
  }
  if ((param_1 + 0xe != (int64_t *)0x0) && (pcVar24 != (char *)0x0)) {
    AdvancedSystemOptimizer(pcVar24,&system_config_6430,param_1 + 0xe);
  }
  UltraHighFreq_CacheSystem1(param_2,&processed_var_6096_ptr,(int64_t)param_1 + 0x6a);
  function_631330(param_2,&processed_var_6152_ptr,(int64_t)param_1 + 0x7c);
  function_631330(param_2,&processed_var_6176_ptr,param_1 + 0x10);
  pcVar24 = "input";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (plVar25 = *(int64_t **)(param_2 + 0x30); plStackX_20 = plVar25, plVar25 != (int64_t *)0x0;
      plVar25 = (int64_t *)plVar25[0xb]) {
    pcVar24 = (char *)*plVar25;
    if (pcVar24 == (char *)0x0) {
      pcVar24 = (char *)0x180d48d24;
      pcVar17 = pcVar23;
    }
    else {
      pcVar17 = (char *)plVar25[2];
    }
    if (pcVar17 == pcVar13 + -0x180a0e823) {
      pcVar17 = pcVar17 + (int64_t)pcVar24;
      if (pcVar17 <= pcVar24) {
LAB_1801f3e20:
        do {
          pcVar23 = (char *)0x0;
          pcVar24 = "index";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          puVar10 = (uint64_t *)plVar25[8];
LAB_1801f3e41:
          if (puVar10 != (uint64_t *)0x0) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 != pcVar13 + -0x180a0ee37) goto LAB_1801f3fae;
            pcVar17 = pcVar24 + (int64_t)pcVar17;
            if (pcVar24 < pcVar17) {
              lVar18 = (int64_t)&processed_var_7688_ptr - (int64_t)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f3e94;
              }
              goto LAB_1801f3fae;
            }
LAB_1801f3e94:
            pcVar24 = (char *)0x180d48d24;
            if ((char *)puVar10[1] != (char *)0x0) {
              pcVar24 = (char *)puVar10[1];
            }
            uVar7 = 0xffffffffffffffff;
            do {
              uVar7 = uVar7 + 1;
            } while (pcVar24[uVar7] != '\0');
            if (((uVar7 < 3) || (*pcVar24 != '0')) ||
               (puVar19 = &processed_var_5412_ptr, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
              puVar19 = &rendering_buffer_2208_ptr;
            }
            AdvancedSystemOptimizer(pcVar24,puVar19,aiStackX_18);
          }
          plocal_var_168 = &system_data_buffer_ptr;
          local_var_150 = 0;
          lStack_160 = 0;
          local_var_158 = 0;
          pplocal_var_f8 = &plocal_var_148;
          plocal_var_148 = &system_data_buffer_ptr;
          local_var_130 = 0;
          lStack_140 = 0;
          local_var_138 = 0;
          local_var_124 = 0xffffffff;
          local_var_120 = 0;
          CoreSystem_ConfigValidator0(&plocal_var_168,&system_buffer_ptr);
          (**(code **)(plocal_var_148 + 0x10))(&plocal_var_148,&system_buffer_ptr);
          local_var_128 = 0;
          pcVar24 = "type";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0ee2f) {
              pcVar17 = pcVar17 + (int64_t)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f3fe0:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                (**(code **)(plocal_var_168 + 0x10))(&plocal_var_168,lVar18);
                break;
              }
              lVar18 = (int64_t)&processed_var_7680_ptr - (int64_t)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f3fe0;
              }
            }
          }
          pcVar24 = "source";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e82b) {
              pcVar17 = pcVar24 + (int64_t)pcVar17;
              if (pcVar17 <= pcVar24) {
LAB_1801f4060:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                (**(code **)(plocal_var_148 + 0x10))(&plocal_var_148,lVar18);
                break;
              }
              lVar18 = (int64_t)&processed_var_6140_ptr - (int64_t)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f4060;
              }
            }
          }
          pcVar24 = "mrt_index";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e877) {
              pcVar17 = pcVar17 + (int64_t)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f40e4:
                pcVar24 = (char *)0x180d48d24;
                if ((char *)puVar10[1] != (char *)0x0) {
                  pcVar24 = (char *)puVar10[1];
                }
                uVar7 = 0xffffffffffffffff;
                do {
                  uVar7 = uVar7 + 1;
                } while (pcVar24[uVar7] != '\0');
                if (((uVar7 < 3) || (*pcVar24 != '0')) ||
                   (puVar19 = &processed_var_5412_ptr, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
                  puVar19 = &rendering_buffer_2208_ptr;
                }
                AdvancedSystemOptimizer(pcVar24,puVar19,&local_var_128);
                break;
              }
              lVar18 = (int64_t)&processed_var_6216_ptr - (int64_t)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f40e4;
              }
            }
          }
          plocal_var_1c8 = &system_data_buffer_ptr;
          local_var_1b0 = 0;
          pcStack_1c0 = (char *)0x0;
          iStack_1b8 = 0;
          pcVar24 = "include";
          do {
            pcVar13 = pcVar24;
            pcVar24 = pcVar13 + 1;
          } while (*pcVar24 != '\0');
          for (puVar10 = (uint64_t *)plVar25[8]; puVar10 != (uint64_t *)0x0;
              puVar10 = (uint64_t *)puVar10[6]) {
            pcVar24 = (char *)*puVar10;
            if (pcVar24 == (char *)0x0) {
              pcVar24 = (char *)0x180d48d24;
              pcVar17 = pcVar23;
            }
            else {
              pcVar17 = (char *)puVar10[2];
            }
            if (pcVar17 == pcVar13 + -0x180a0e887) {
              pcVar17 = pcVar17 + (int64_t)pcVar24;
              if (pcVar17 <= pcVar24) {
LAB_1801f41d4:
                lVar18 = 0x180d48d24;
                if (puVar10[1] != 0) {
                  lVar18 = puVar10[1];
                }
                CoreSystem_ConfigValidator0(&plocal_var_1c8,lVar18);
                break;
              }
              lVar18 = (int64_t)&processed_var_6232_ptr - (int64_t)pcVar24;
              while (*pcVar24 == pcVar24[lVar18]) {
                pcVar24 = pcVar24 + 1;
                if (pcVar17 <= pcVar24) goto LAB_1801f41d4;
              }
            }
          }
          if (pcStack_1c0 != (char *)0x0) {
            cVar1 = *pcStack_1c0;
            iStack_1b8 = 0;
            pcVar24 = pcVar23;
            pcVar13 = pcVar23;
            while (cVar1 != '\0') {
              if (' ' < pcVar23[(int64_t)pcStack_1c0]) {
                if (pcVar24 != pcVar23) {
                  pcVar24[(int64_t)pcStack_1c0] = pcVar23[(int64_t)pcStack_1c0];
                }
                pcVar13 = (char *)(uint64_t)((int)pcVar13 + 1);
                pcVar24 = pcVar24 + 1;
              }
              iStack_1b8 = (int)pcVar13;
              pcVar23 = pcVar23 + 1;
              cVar1 = pcVar23[(int64_t)pcStack_1c0];
            }
            pcVar24[(int64_t)pcStack_1c0] = '\0';
          }
          pplocal_var_188 = (void **)0x0;
          pplocal_var_180 = (void **)0x0;
          pplocal_var_178 = (void **)0x0;
          local_var_170 = 3;
          if (pcStack_1c0 != (char *)0x0) {
            cVar1 = *pcStack_1c0;
            param_1 = plStackX_8;
            pcVar24 = pcStack_1c0;
            pcVar23 = pcStack_1c0;
            while( true ) {
              plStackX_8 = param_1;
              if (cVar1 == '\0') break;
              ppuVar8 = (void **)0x0;
              lVar18 = strchr(&system_config_d518,(int)*pcVar24);
              if ((lVar18 != 0) && (pcVar23 != pcVar24)) {
                plocal_var_118 = &system_data_buffer_ptr;
                local_var_100 = 0;
                lStack_110 = 0;
                iStack_108 = 0;
                function_628210(&plocal_var_118,pcVar23,(int)pcVar24 - (int)pcVar23);
                ppuVar22 = pplocal_var_180;
                pcVar23 = pcVar24 + 1;
                if (pplocal_var_180 < pplocal_var_178) {
                  pplocal_var_f8 = pplocal_var_180;
                  *pplocal_var_180 = &system_state_ptr;
                  pplocal_var_180[1] = (void *)0x0;
                  *(int32_t *)(pplocal_var_180 + 2) = 0;
                  *pplocal_var_180 = &system_data_buffer_ptr;
                  pplocal_var_180[3] = (void *)0x0;
                  pplocal_var_180[1] = (void *)0x0;
                  *(int32_t *)(pplocal_var_180 + 2) = 0;
                  pplocal_var_180 = pplocal_var_180 + 4;
                  CoreEngineDataBufferProcessor(ppuVar22,iStack_108);
                  if (iStack_108 != 0) {
// WARNING: Subroutine does not return
                    memcpy(ppuVar22[1],lStack_110,iStack_108 + 1);
                  }
                  if (lStack_110 != 0) {
                    *(int32_t *)(ppuVar22 + 2) = 0;
                    if (ppuVar22[1] != (int8_t *)0x0) {
                      *ppuVar22[1] = 0;
                    }
                    *(int32_t *)((int64_t)ppuVar22 + 0x1c) = 0;
                  }
                }
                else {
                  lVar18 = (int64_t)pplocal_var_180 - (int64_t)pplocal_var_188 >> 5;
                  if (lVar18 == 0) {
                    lVar18 = 1;
LAB_1801f439b:
                    ppuVar8 = (void **)
                              CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 << 5,(int8_t)local_var_170);
                  }
                  else {
                    lVar18 = lVar18 * 2;
                    if (lVar18 != 0) goto LAB_1801f439b;
                  }
                  lVar11 = SystemCore_Initializer(pplocal_var_188,pplocal_var_180,ppuVar8);
                  CoreEngineDataTransformer(lVar11,&plocal_var_118);
                  ppuVar2 = pplocal_var_180;
                  for (ppuVar22 = pplocal_var_188; ppuVar22 != ppuVar2; ppuVar22 = ppuVar22 + 4) {
                    (**(code **)*ppuVar22)(ppuVar22,0);
                  }
                  if (pplocal_var_188 != (void **)0x0) {
// WARNING: Subroutine does not return
                    CoreEngineMemoryPoolCleaner(pplocal_var_188);
                  }
                  pplocal_var_178 = ppuVar8 + lVar18 * 4;
                  pplocal_var_188 = ppuVar8;
                  pplocal_var_180 = (void **)(lVar11 + 0x20);
                }
                plocal_var_118 = &system_data_buffer_ptr;
                if (lStack_110 != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                lStack_110 = 0;
                local_var_100 = local_var_100 & 0xffffffff00000000;
                plocal_var_118 = &system_state_ptr;
              }
              pcVar24 = pcVar24 + 1;
              cVar1 = *pcVar24;
              plVar25 = plStackX_20;
              param_1 = plStackX_8;
            }
            ppuVar8 = (void **)0x0;
            if (pcVar23 == pcVar24) goto LAB_1801f45d5;
            plocal_var_f0 = &system_data_buffer_ptr;
            local_var_d8 = 0;
            lStack_e8 = 0;
            local_var_e0 = 0;
            function_628210(&plocal_var_f0,pcVar23,(int)pcVar24 - (int)pcVar23);
            ppuVar22 = pplocal_var_180;
            if (pplocal_var_180 < pplocal_var_178) {
              pplocal_var_180 = pplocal_var_180 + 4;
              CoreEngineDataTransformer(ppuVar22,&plocal_var_f0);
            }
            else {
              lVar18 = (int64_t)pplocal_var_180 - (int64_t)pplocal_var_188 >> 5;
              if (lVar18 == 0) {
                lVar18 = 1;
LAB_1801f44fa:
                ppuVar8 = (void **)
                          CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar18 << 5,(int8_t)local_var_170);
              }
              else {
                lVar18 = lVar18 * 2;
                if (lVar18 != 0) goto LAB_1801f44fa;
              }
              lVar11 = SystemCore_Initializer(pplocal_var_188,pplocal_var_180,ppuVar8);
              CoreEngineDataTransformer(lVar11,&plocal_var_f0);
              ppuVar2 = pplocal_var_180;
              for (ppuVar22 = pplocal_var_188; ppuVar22 != ppuVar2; ppuVar22 = ppuVar22 + 4) {
                (**(code **)*ppuVar22)(ppuVar22,0);
              }
              if (pplocal_var_188 != (void **)0x0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner(pplocal_var_188);
              }
              pplocal_var_178 = ppuVar8 + lVar18 * 4;
              pplocal_var_188 = ppuVar8;
              pplocal_var_180 = (void **)(lVar11 + 0x20);
            }
            plocal_var_f0 = &system_data_buffer_ptr;
            if (lStack_e8 != 0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            lStack_e8 = 0;
            local_var_d8 = local_var_d8 & 0xffffffff00000000;
            plocal_var_f0 = &system_state_ptr;
            param_1 = plStackX_8;
          }
LAB_1801f45d5:
          uVar14 = 0;
          iVar3 = 0;
          uVar7 = uVar14;
          uVar20 = uVar14;
          if ((int64_t)pplocal_var_180 - (int64_t)pplocal_var_188 >> 5 != 0) {
            do {
              plStackX_20 = alStack_70;
              uVar9 = CoreEngineDataTransformer(alStack_70,pplocal_var_188 + uVar7 * 4);
              uVar5 = function_1f2390(extraout_XMM0_Da,uVar9);
              uVar20 = (uint64_t)((uint)uVar20 | uVar5);
              iVar3 = iVar3 + 1;
              uVar7 = (int64_t)iVar3;
            } while ((uint64_t)(int64_t)iVar3 <
                     (uint64_t)((int64_t)pplocal_var_180 - (int64_t)pplocal_var_188 >> 5));
          }
          if (((int64_t)pplocal_var_180 - (int64_t)pplocal_var_188 & 0xffffffffffffffe0U) != 0) {
            local_var_124 = (int32_t)uVar20;
          }
          plocal_var_1a8 = &system_data_buffer_ptr;
          local_var_190 = 0;
          pcStack_1a0 = (char *)0x0;
          iStack_198 = 0;
          lVar18 = SystemCore_DataManager(plVar25,&processed_var_6200_ptr);
          if (lVar18 != 0) {
            lVar11 = 0x180d48d24;
            if (*(int64_t *)(lVar18 + 8) != 0) {
              lVar11 = *(int64_t *)(lVar18 + 8);
            }
            (**(code **)(plocal_var_1a8 + 0x10))(&plocal_var_1a8,lVar11);
          }
          if (pcStack_1a0 != (char *)0x0) {
            iStack_198 = 0;
            cVar1 = *pcStack_1a0;
            uVar7 = uVar14;
            uVar20 = uVar14;
            while (cVar1 != '\0') {
              if (' ' < pcStack_1a0[uVar7]) {
                if (uVar20 != uVar7) {
                  pcStack_1a0[uVar20] = pcStack_1a0[uVar7];
                }
                iStack_198 = iStack_198 + 1;
                uVar20 = uVar20 + 1;
              }
              uVar7 = uVar7 + 1;
              cVar1 = pcStack_1a0[uVar7];
            }
            pcStack_1a0[uVar20] = '\0';
          }
          lStack_90 = 0;
          local_var_88 = 0;
          local_var_80 = 0;
          local_var_78 = 3;
          if (pcStack_1a0 != (char *)0x0) {
            cVar1 = *pcStack_1a0;
            pcVar24 = pcStack_1a0;
            pcVar23 = pcStack_1a0;
            while( true ) {
              if (cVar1 == '\0') break;
              lVar18 = strchr(&system_config_d518,(int)*pcVar24);
              if ((lVar18 != 0) && (pcVar23 != pcVar24)) {
                plocal_var_d0 = &system_data_buffer_ptr;
                local_var_b8 = 0;
                lStack_c8 = 0;
                local_var_c0 = 0;
                function_628210(&plocal_var_d0,pcVar23,(int)pcVar24 - (int)pcVar23);
                pcVar23 = pcVar24 + 1;
                if (local_var_88 < local_var_80) {
                  local_var_88 = local_var_88 + 0x20;
                  CoreEngineDataTransformer();
                }
                else {
                  RenderingSystem_ConfigProcessor(&lStack_90,&plocal_var_d0);
                }
                plocal_var_d0 = &system_data_buffer_ptr;
                if (lStack_c8 != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                lStack_c8 = 0;
                local_var_b8 = local_var_b8 & 0xffffffff00000000;
                plocal_var_d0 = &system_state_ptr;
              }
              pcVar24 = pcVar24 + 1;
              cVar1 = *pcVar24;
            }
            if (pcVar23 != pcVar24) {
              plocal_var_b0 = &system_data_buffer_ptr;
              local_var_98 = 0;
              lStack_a8 = 0;
              local_var_a0 = 0;
              function_628210(&plocal_var_b0,pcVar23,(int)pcVar24 - (int)pcVar23);
              if (local_var_88 < local_var_80) {
                local_var_88 = local_var_88 + 0x20;
                CoreEngineDataTransformer();
              }
              else {
                RenderingSystem_ConfigProcessor(&lStack_90,&plocal_var_b0);
              }
              plocal_var_b0 = &system_data_buffer_ptr;
              if (lStack_a8 != 0) {
// WARNING: Subroutine does not return
                CoreEngineMemoryPoolCleaner();
              }
              lStack_a8 = 0;
              local_var_98 = local_var_98 & 0xffffffff00000000;
              plocal_var_b0 = &system_state_ptr;
            }
          }
          uVar5 = 0;
          iVar3 = 0;
          if ((int64_t)(local_var_88 - lStack_90) >> 5 != 0) {
            do {
              plStackX_20 = alStack_70;
              uVar9 = CoreEngineDataTransformer(alStack_70,lStack_90 + uVar14 * 0x20);
              uVar6 = function_1f2390(extraout_XMM0_Da_00,uVar9);
              uVar5 = uVar5 | uVar6;
              iVar3 = iVar3 + 1;
              uVar14 = (uint64_t)iVar3;
            } while (uVar14 < (uint64_t)((int64_t)(local_var_88 - lStack_90) >> 5));
          }
          if ((local_var_88 - lStack_90 & 0xffffffffffffffe0) != 0) {
            local_var_120 = uVar5;
          }
          plVar15 = param_1 + (int64_t)aiStackX_18[0] * 4 + 0x11;
          uVar7 = plVar15[1];
          if (uVar7 < (uint64_t)plVar15[2]) {
            plVar15[1] = uVar7 + 0x50;
            plStackX_20 = (int64_t *)uVar7;
            CoreEngineDataTransformer(uVar7);
            CoreEngineDataTransformer(uVar7 + 0x20,&plocal_var_148);
            *(int32_t *)(uVar7 + 0x40) = local_var_128;
            *(int32_t *)(uVar7 + 0x44) = local_var_124;
            *(uint *)(uVar7 + 0x48) = local_var_120;
          }
          else {
            function_1f9e20(plVar15,&plocal_var_168);
          }
          pcVar23 = "input";
          do {
            pcVar24 = pcVar23;
            pcVar23 = pcVar24 + 1;
          } while (*pcVar23 != '\0');
          for (plStackX_20 = (int64_t *)plVar25[0xb]; plStackX_20 != (int64_t *)0x0;
              plStackX_20 = (int64_t *)plStackX_20[0xb]) {
            pcVar23 = (char *)*plStackX_20;
            if (pcVar23 == (char *)0x0) {
              pcVar13 = (char *)0x0;
              pcVar23 = (char *)0x180d48d24;
            }
            else {
              pcVar13 = (char *)plStackX_20[2];
            }
            if (pcVar13 == pcVar24 + -0x180a0e823) {
              pcVar13 = pcVar13 + (int64_t)pcVar23;
              if (pcVar13 <= pcVar23) goto LAB_1801f49dd;
              lVar18 = (int64_t)&processed_var_6132_ptr - (int64_t)pcVar23;
              while (*pcVar23 == pcVar23[lVar18]) {
                pcVar23 = pcVar23 + 1;
                if (pcVar13 <= pcVar23) goto LAB_1801f49dd;
              }
            }
          }
          plStackX_20 = (int64_t *)0x0;
LAB_1801f49dd:
          plVar25 = plStackX_20;
          DataSerializationEngine(&lStack_90);
          plocal_var_1a8 = &system_data_buffer_ptr;
          if (pcStack_1a0 != (char *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pcStack_1a0 = (char *)0x0;
          local_var_190 = local_var_190 & 0xffffffff00000000;
          plocal_var_1a8 = &system_state_ptr;
          DataSerializationEngine(&pplocal_var_188);
          plocal_var_1c8 = &system_data_buffer_ptr;
          if (pcStack_1c0 != (char *)0x0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          pcStack_1c0 = (char *)0x0;
          local_var_1b0 = local_var_1b0 & 0xffffffff00000000;
          plocal_var_1c8 = &system_state_ptr;
          pplocal_var_f8 = &plocal_var_148;
          plocal_var_148 = &system_data_buffer_ptr;
          if (lStack_140 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_140 = 0;
          local_var_130 = local_var_130 & 0xffffffff00000000;
          plocal_var_148 = &system_state_ptr;
          pplocal_var_f8 = &plocal_var_168;
          plocal_var_168 = &system_data_buffer_ptr;
          if (lStack_160 != 0) {
// WARNING: Subroutine does not return
            CoreEngineMemoryPoolCleaner();
          }
          lStack_160 = 0;
          local_var_150 = local_var_150 & 0xffffffff00000000;
          plocal_var_168 = &system_state_ptr;
          param_2 = lStackX_10;
          if (plVar25 == (int64_t *)0x0) goto LAB_1801f4ab7;
        } while( true );
      }
      lVar18 = (int64_t)&processed_var_6132_ptr - (int64_t)pcVar24;
      while (*pcVar24 == pcVar24[lVar18]) {
        pcVar24 = pcVar24 + 1;
        if (pcVar17 <= pcVar24) goto LAB_1801f3e20;
      }
    }
  }
LAB_1801f4ab7:
  pcVar23 = (char *)0x0;
  puVar10 = (uint64_t *)function_05d4b0(param_2,&processed_var_6208_ptr,0);
  if (puVar10 != (uint64_t *)0x0) {
LAB_1801f4ae0:
    lVar18 = SystemCore_DataManager(puVar10,&processed_var_7688_ptr);
    if (lVar18 != 0) {
      pcVar24 = (char *)0x180d48d24;
      if (*(char **)(lVar18 + 8) != (char *)0x0) {
        pcVar24 = *(char **)(lVar18 + 8);
      }
      uVar7 = 0xffffffffffffffff;
      do {
        uVar7 = uVar7 + 1;
      } while (pcVar24[uVar7] != '\0');
      if (((uVar7 < 3) || (*pcVar24 != '0')) ||
         (puVar19 = &processed_var_5412_ptr, (pcVar24[1] + 0xa8U & 0xdf) != 0)) {
        puVar19 = &rendering_buffer_2208_ptr;
      }
      AdvancedSystemOptimizer(pcVar24,puVar19,&plStackX_8);
    }
    lVar18 = (int64_t)(int)plStackX_8;
    lVar11 = SystemCore_DataManager(puVar10,&processed_var_7680_ptr);
    if (lVar11 != 0) {
      lVar21 = 0x180d48d24;
      if (*(int64_t *)(lVar11 + 8) != 0) {
        lVar21 = *(int64_t *)(lVar11 + 8);
      }
      (**(code **)(param_1[lVar18 * 0xb + 0x51] + 0x10))(param_1 + lVar18 * 0xb + 0x51,lVar21);
    }
    lVar18 = (int64_t)(int)plStackX_8;
    lVar11 = SystemCore_DataManager(puVar10,&system_config_3a84);
    if (lVar11 != 0) {
      lVar21 = 0x180d48d24;
      if (*(int64_t *)(lVar11 + 8) != 0) {
        lVar21 = *(int64_t *)(lVar11 + 8);
      }
      (**(code **)(param_1[lVar18 * 0xb + 0x7d] + 0x10))(param_1 + lVar18 * 0xb + 0x7d,lVar21);
    }
    pcVar24 = "output";
    do {
      pcVar13 = pcVar24;
      pcVar24 = pcVar13 + 1;
    } while (*pcVar24 != '\0');
    puVar10 = (uint64_t *)puVar10[0xb];
    param_2 = lStackX_10;
    if (puVar10 != (uint64_t *)0x0) {
      do {
        pcVar24 = (char *)*puVar10;
        if (pcVar24 == (char *)0x0) {
          pcVar24 = (char *)0x180d48d24;
          pcVar17 = pcVar23;
        }
        else {
          pcVar17 = (char *)puVar10[2];
        }
        if (pcVar17 == pcVar13 + -0x180a0e86f) {
          pcVar17 = pcVar17 + (int64_t)pcVar24;
          if (pcVar17 <= pcVar24) goto LAB_1801f4ae0;
          lVar18 = (int64_t)&processed_var_6208_ptr - (int64_t)pcVar24;
          while (*pcVar24 == pcVar24[lVar18]) {
            pcVar24 = pcVar24 + 1;
            if (pcVar17 <= pcVar24) goto LAB_1801f4ae0;
          }
        }
        puVar10 = (uint64_t *)puVar10[0xb];
        if (puVar10 == (uint64_t *)0x0) break;
      } while( true );
    }
  }
  pcVar24 = "preconditions";
  do {
    pcVar13 = pcVar24;
    pcVar24 = pcVar13 + 1;
  } while (*pcVar24 != '\0');
  for (pcVar24 = *(char **)(param_2 + 0x30); pcVar17 = pcVar23, pcVar24 != (char *)0x0;
      pcVar24 = *(char **)(pcVar24 + 0x58)) {
    pcVar16 = *(char **)pcVar24;
    if (pcVar16 == (char *)0x0) {
      pcVar16 = (char *)0x180d48d24;
      pcVar12 = pcVar23;
    }
    else {
      pcVar12 = *(char **)(pcVar24 + 0x10);
    }
    if (pcVar12 == pcVar13 + -0x180a0e8a7) {
      pcVar12 = pcVar16 + (int64_t)pcVar12;
      pcVar17 = pcVar24;
      if (pcVar12 <= pcVar16) break;
      lVar18 = (int64_t)&processed_var_6264_ptr - (int64_t)pcVar16;
      while (*pcVar16 == pcVar16[lVar18]) {
        pcVar16 = pcVar16 + 1;
        if (pcVar12 <= pcVar16) goto LAB_1801f4cae;
      }
    }
  }
LAB_1801f4cae:
  *(int32_t *)((int64_t)param_1 + 0x74) = 0xffffffff;
  *(int32_t *)(param_1 + 0xf) = 0;
  if (pcVar17 != (char *)0x0) {
    *(int32_t *)((int64_t)param_1 + 0x74) = 0;
    pcVar24 = "config";
    do {
      pcVar13 = pcVar24;
      pcVar24 = pcVar13 + 1;
    } while (*pcVar24 != '\0');
    for (pcVar24 = *(char **)(pcVar17 + 0x30); pcVar24 != (char *)0x0;
        pcVar24 = *(char **)(pcVar24 + 0x58)) {
      pcVar17 = *(char **)pcVar24;
      if (pcVar17 == (char *)0x0) {
        pcVar17 = (char *)0x180d48d24;
        pcVar16 = pcVar23;
      }
      else {
        pcVar16 = *(char **)(pcVar24 + 0x10);
      }
      if (pcVar16 == pcVar13 + -0x180a083b3) {
        pcVar16 = pcVar17 + (int64_t)pcVar16;
        if (pcVar16 <= pcVar17) {
LAB_1801f4d50:
          do {
            plocal_var_1c8 = &system_data_buffer_ptr;
            local_var_1b0 = 0;
            pcStack_1c0 = (char *)0x0;
            iStack_1b8 = 0;
            lVar18 = SystemCore_DataManager(pcVar24,&system_config_3a84);
            if (lVar18 != 0) {
              lVar11 = 0x180d48d24;
              if (*(int64_t *)(lVar18 + 8) != 0) {
                lVar11 = *(int64_t *)(lVar18 + 8);
              }
              (**(code **)(plocal_var_1c8 + 0x10))(&plocal_var_1c8,lVar11);
            }
            plStackX_8 = (int64_t *)CONCAT71(plStackX_8._1_7_,1);
            UltraHighFreq_CacheSystem1(pcVar24,&memory_allocator_3692_ptr,&plStackX_8);
            plStackX_8 = alStack_70;
            if ((char)plStackX_8 == '\0') {
              uVar9 = CoreEngineDataTransformer(alStack_70,&plocal_var_1c8);
              uVar5 = function_1f2390(extraout_XMM0_Da_02,uVar9);
              *(uint *)(param_1 + 0xf) = *(uint *)(param_1 + 0xf) | uVar5;
            }
            else {
              uVar9 = CoreEngineDataTransformer(alStack_70,&plocal_var_1c8);
              uVar5 = function_1f2390(extraout_XMM0_Da_01,uVar9);
              *(uint *)((int64_t)param_1 + 0x74) = *(uint *)((int64_t)param_1 + 0x74) | uVar5;
            }
            pcVar13 = "config";
            do {
              pcVar17 = pcVar13;
              pcVar13 = pcVar17 + 1;
            } while (*pcVar13 != '\0');
            for (pcVar13 = *(char **)(pcVar24 + 0x58); pcVar24 = pcVar23, pcVar13 != (char *)0x0;
                pcVar13 = *(char **)(pcVar13 + 0x58)) {
              pcVar16 = *(char **)pcVar13;
              if (pcVar16 == (char *)0x0) {
                pcVar16 = (char *)0x180d48d24;
                pcVar12 = pcVar23;
              }
              else {
                pcVar12 = *(char **)(pcVar13 + 0x10);
              }
              if (pcVar12 == pcVar17 + -0x180a083b3) {
                pcVar12 = pcVar12 + (int64_t)pcVar16;
                pcVar24 = pcVar13;
                if (pcVar12 <= pcVar16) break;
                lVar18 = (int64_t)&system_config_83b4 - (int64_t)pcVar16;
                while (*pcVar16 == pcVar16[lVar18]) {
                  pcVar16 = pcVar16 + 1;
                  if (pcVar12 <= pcVar16) goto LAB_1801f4e6e;
                }
              }
            }
LAB_1801f4e6e:
            plocal_var_1c8 = &system_data_buffer_ptr;
            if (pcStack_1c0 != (char *)0x0) {
// WARNING: Subroutine does not return
              CoreEngineMemoryPoolCleaner();
            }
            if (pcVar24 == (char *)0x0) {
              return;
            }
          } while( true );
        }
        lVar18 = (int64_t)&system_config_83b4 - (int64_t)pcVar17;
        while (*pcVar17 == pcVar17[lVar18]) {
          pcVar17 = pcVar17 + 1;
          if (pcVar16 <= pcVar17) goto LAB_1801f4d50;
        }
      }
    }
  }
  return;
LAB_1801f3fae:
  puVar10 = (uint64_t *)puVar10[6];
  goto LAB_1801f3e41;
}
int64_t * function_1f4eb0(int64_t *param_1)
{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t lVar3;
  int64_t *plVar4;
  *param_1 = (int64_t)&system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (int64_t)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  plVar4 = param_1 + 4;
  *plVar4 = (int64_t)&system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *plVar4 = (int64_t)&system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  plVar1 = param_1 + 8;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *(int32_t *)(param_1 + 10) = 0;
  DataStructureManager(param_1 + 0x11,0x20,0x10,function_1f9cf0,function_059620);
  lVar3 = 4;
  DataStructureManager(param_1 + 0x51,0x58,4,function_049cd0,CoreSystem_MessageHandler);
  plVar2 = param_1 + 0x7d;
  DataStructureManager(plVar2,0x58,4,function_049cd0,CoreSystem_MessageHandler);
  *(int8_t *)(param_1 + 0xc) = 0;
  (**(code **)(*param_1 + 0x10))(param_1,&system_buffer_ptr);
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  (**(code **)(*plVar4 + 0x10))(plVar4,&system_buffer_ptr);
  *(int16_t *)(param_1 + 0xd) = 1;
  *(int32_t *)((int64_t)param_1 + 100) = 0;
  *(int32_t *)((int64_t)param_1 + 0x6c) = 0x3f800000;
  *(int32_t *)(param_1 + 0xe) = 0x40000000;
  *(int32_t *)((int64_t)param_1 + 0x7c) = 1;
  *(int8_t *)((int64_t)param_1 + 0x6a) = 0;
  plVar4 = plVar2;
  do {
    (**(code **)(plVar2[-0x2c] + 0x10))(plVar4 + -0x2c,&system_buffer_ptr);
    (**(code **)(*plVar2 + 0x10))(plVar4,&system_buffer_ptr);
    plVar4 = plVar4 + 0xb;
    plVar2 = plVar2 + 0xb;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return param_1;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address