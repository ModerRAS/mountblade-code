#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part020.c - 1 个函数

// 函数: void FUN_1804ae790(longlong param_1,longlong param_2,longlong param_3,int *param_4)
void FUN_1804ae790(longlong param_1,longlong param_2,longlong param_3,int *param_4)

{
  longlong *plVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  uint64_t uVar5;
  char *pcVar6;
  longlong lVar7;
  void *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  uint uVar11;
  longlong *plVar12;
  uint64_t *puVar13;
  char *pcVar14;
  char *pcVar15;
  longlong *plVar16;
  int8_t auStack_198 [32];
  code *pcStack_178;
  int32_t uStack_168;
  void *puStack_160;
  void *puStack_158;
  int32_t uStack_150;
  ulonglong uStack_148;
  longlong lStack_140;
  void *puStack_138;
  longlong lStack_130;
  int iStack_128;
  ulonglong uStack_120;
  ulonglong uStack_118;
  void *puStack_110;
  longlong lStack_108;
  int32_t uStack_100;
  ulonglong uStack_f8;
  longlong *plStack_f0;
  longlong *plStack_d8;
  longlong lStack_d0;
  int *piStack_c8;
  uint64_t uStack_c0;
  longlong lStack_b8;
  longlong alStack_b0 [7];
  longlong alStack_78 [4];
  ulonglong uStack_58;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_58 = GET_SECURITY_COOKIE() ^ (ulonglong)auStack_198;
  pcVar15 = (char *)0x0;
  uStack_168 = 0;
  pcVar14 = "name";
  do {
    pcVar4 = pcVar14;
    pcVar14 = pcVar4 + 1;
  } while (*pcVar14 != '\0');
  for (puVar13 = *(uint64_t **)(param_2 + 0x40); lStack_140 = param_2, lStack_d0 = param_1,
      piStack_c8 = param_4, puVar13 != (uint64_t *)0x0; puVar13 = (uint64_t *)puVar13[6]) {
    pcVar14 = (char *)*puVar13;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar6 = pcVar15;
    }
    else {
      pcVar6 = (char *)puVar13[2];
    }
    if (pcVar6 == pcVar4 + -0x180a03a83) {
      pcVar6 = pcVar14 + (longlong)pcVar6;
      if (pcVar6 <= pcVar14) {
LAB_1804ae840:
        lVar7 = 0x180d48d24;
        if (puVar13[1] != 0) {
          lVar7 = puVar13[1];
        }
        (**(code **)(*(longlong *)(param_1 + 0x28) + 0x10))(param_1 + 0x28,lVar7);
        break;
      }
      lVar7 = (longlong)&system_data_3a84 - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar7]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar6 <= pcVar14) goto LAB_1804ae840;
      }
    }
  }
  lVar7 = FUN_180631000(param_2,&unknown_var_5832_ptr,param_1 + 0x368);
  if (lVar7 == 0) {
    *(int8_t *)(param_1 + 0x368) = 1;
  }
  pcVar14 = "gender";
  do {
    pcVar4 = pcVar14;
    pcVar14 = pcVar4 + 1;
  } while (*pcVar14 != '\0');
  for (puVar13 = *(uint64_t **)(param_2 + 0x40); pcVar14 = pcVar15, puVar13 != (uint64_t *)0x0;
      puVar13 = (uint64_t *)puVar13[6]) {
    pcVar14 = (char *)*puVar13;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar6 = pcVar15;
    }
    else {
      pcVar6 = (char *)puVar13[2];
    }
    if (pcVar6 == pcVar4 + -0x180a2e2bb) {
      pcVar6 = pcVar6 + (longlong)pcVar14;
      if (pcVar6 <= pcVar14) {
LAB_1804ae8e0:
        pcVar14 = (char *)0x180d48d24;
        if ((char *)puVar13[1] != (char *)0x0) {
          pcVar14 = (char *)puVar13[1];
        }
        break;
      }
      lVar7 = (longlong)&unknown_var_5820_ptr - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar7]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar6 <= pcVar14) goto LAB_1804ae8e0;
      }
    }
  }
  uVar10 = 0xffffffffffffffff;
  if ((param_3 != 0) && (pcVar14 != (char *)0x0)) {
    uVar3 = 0xffffffffffffffff;
    do {
      uVar3 = uVar3 + 1;
    } while (pcVar14[uVar3] != '\0');
    if (((uVar3 < 3) || (*pcVar14 != '0')) ||
       (puVar8 = &unknown_var_5412_ptr, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
      puVar8 = &unknown_var_2208_ptr;
    }
    FUN_18010cbc0(pcVar14,puVar8,param_3);
  }
  uStack_118 = 0;
  pcVar14 = "morph_key";
  do {
    pcVar4 = pcVar14;
    pcVar14 = pcVar4 + 1;
  } while (*pcVar14 != '\0');
  puVar13 = *(uint64_t **)(param_2 + 0x40);
  do {
    if (puVar13 == (uint64_t *)0x0) goto LAB_1804ae9f7;
    pcVar14 = (char *)*puVar13;
    if (pcVar14 == (char *)0x0) {
      pcVar14 = (char *)0x180d48d24;
      pcVar6 = pcVar15;
    }
    else {
      pcVar6 = (char *)puVar13[2];
    }
    if (pcVar6 == pcVar4 + -0x180a2e25f) {
      pcVar6 = pcVar6 + (longlong)pcVar14;
      if (pcVar6 <= pcVar14) {
LAB_1804ae9b4:
        pcVar14 = (char *)0x180d48d24;
        if ((char *)puVar13[1] != (char *)0x0) {
          pcVar14 = (char *)puVar13[1];
        }
        do {
          uVar10 = uVar10 + 1;
        } while (pcVar14[uVar10] != '\0');
        if (((uVar10 < 3) || (*pcVar14 != '0')) ||
           (puVar8 = &unknown_var_5616_ptr, (pcVar14[1] + 0xa8U & 0xdf) != 0)) {
          puVar8 = &unknown_var_2216_ptr;
        }
        FUN_18010cbc0(pcVar14,puVar8,&uStack_118);
LAB_1804ae9f7:
        *(ulonglong *)(param_1 + 0x48) = *(ulonglong *)(param_1 + 0x48) | uStack_118;
        (**(code **)(*(longlong *)(param_1 + 0x50) + 0x10))(param_1 + 0x50,&system_buffer_ptr);
        pcVar14 = "body_mesh_suffix";
        do {
          pcVar4 = pcVar14;
          pcVar14 = pcVar4 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar6 = pcVar15;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e247) {
            pcVar6 = pcVar6 + (longlong)pcVar14;
            if (pcVar6 <= pcVar14) {
LAB_1804aea75:
              lVar7 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar7 = puVar13[1];
              }
              (**(code **)(*(longlong *)(param_1 + 0x50) + 0x10))(param_1 + 0x50,lVar7);
              break;
            }
            lVar7 = (longlong)&unknown_var_5704_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar7]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar6 <= pcVar14) goto LAB_1804aea75;
            }
          }
        }
        pcVar14 = "min_scale";
        do {
          pcVar4 = pcVar14;
          pcVar14 = pcVar4 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar6 = pcVar15;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e27f) {
            pcVar6 = pcVar6 + (longlong)pcVar14;
            if (pcVar6 <= pcVar14) {
LAB_1804aeaf4:
              lVar7 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar7 = puVar13[1];
              }
              FUN_18010cbc0(lVar7,&system_data_6430,param_1);
              break;
            }
            lVar7 = (longlong)&unknown_var_5760_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar7]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar6 <= pcVar14) goto LAB_1804aeaf4;
            }
          }
        }
        puStack_110 = &unknown_var_3456_ptr;
        uStack_f8 = 0;
        lStack_108 = 0;
        uStack_100 = 0;
        pcVar14 = "skeleton";
        do {
          pcVar4 = pcVar14;
          pcVar14 = pcVar4 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar14 = (char *)0x180d48d24;
            pcVar6 = pcVar15;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a19cb7) {
            pcVar6 = pcVar6 + (longlong)pcVar14;
            if (pcVar6 <= pcVar14) {
LAB_1804aeba4:
              lVar7 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar7 = puVar13[1];
              }
              FUN_180627c50(&puStack_110,lVar7);
              break;
            }
            lVar7 = (longlong)&unknown_var_2360_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar7]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar6 <= pcVar14) goto LAB_1804aeba4;
            }
          }
        }
        FUN_1800b3970();
        *(longlong **)(param_1 + 0xa78) = plStack_f0;
        pcStack_178 = FUN_180627b90;
        FUN_1808fc838(&lStack_b8,0x20,3,FUN_180627850);
        (**(code **)(lStack_b8 + 0x10))(&lStack_b8,&unknown_var_5744_ptr);
        (**(code **)(alStack_b0[3] + 0x10))(alStack_b0 + 3,&unknown_var_5960_ptr);
        (**(code **)(alStack_78[0] + 0x10))(alStack_78,&unknown_var_5928_ptr);
        puStack_160 = &unknown_var_3456_ptr;
        uStack_148 = 0;
        puStack_158 = (void *)0x0;
        uStack_150 = 0;
        plVar16 = alStack_b0;
        plVar12 = (longlong *)(param_1 + 0x2a0);
        do {
          puVar8 = &system_buffer_ptr;
          if ((void *)*plVar16 != (void *)0x0) {
            puVar8 = (void *)*plVar16;
          }
          lVar7 = FUN_1800a02a0(param_2,puVar8);
          if (lVar7 != 0) {
            lVar9 = 0x180d48d24;
            if (*(longlong *)(lVar7 + 8) != 0) {
              lVar9 = *(longlong *)(lVar7 + 8);
            }
            (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar9);
            puVar8 = &system_buffer_ptr;
            if (puStack_158 != (void *)0x0) {
              puVar8 = puStack_158;
            }
                    // WARNING: Subroutine does not return
            FUN_180062300(system_message_context,&unknown_var_6024_ptr,puVar8,pcVar15);
          }
          if ((int)pcVar15 != 0) {
            plVar1 = *(longlong **)(param_1 + 0x2a0);
            if (plVar1 != (longlong *)0x0) {
              plStack_d8 = plVar1;
              (**(code **)(*plVar1 + 0x28))(plVar1);
            }
            plStack_d8 = (longlong *)*plVar12;
            *plVar12 = (longlong)plVar1;
            param_2 = lStack_140;
            if (plStack_d8 != (longlong *)0x0) {
              (**(code **)(*plStack_d8 + 0x38))();
              param_2 = lStack_140;
            }
          }
          uVar11 = (int)pcVar15 + 1;
          pcVar15 = (char *)(ulonglong)uVar11;
          plVar12 = plVar12 + 1;
          plVar16 = plVar16 + 4;
        } while ((int)uVar11 < 3);
        pcVar14 = "legs_mesh";
        do {
          pcVar15 = pcVar14;
          pcVar14 = pcVar15 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar14 = (char *)0x180d48d24;
          }
          else {
            pcVar4 = (char *)puVar13[2];
          }
          if (pcVar4 == pcVar15 + -0x180a2e2e7) {
            pcVar4 = pcVar4 + (longlong)pcVar14;
            if (pcVar4 <= pcVar14) {
LAB_1804aee40:
              lVar7 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar7 = puVar13[1];
              }
              (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar7);
              break;
            }
            lVar7 = (longlong)&unknown_var_5864_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar7]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar4 <= pcVar14) goto LAB_1804aee40;
            }
          }
        }
        uVar5 = FUN_1800b6de0(system_resource_state,&puStack_160,1);
        lVar7 = lStack_d0;
        *(uint64_t *)(lStack_d0 + 0x2d0) = uVar5;
        pcVar14 = "hands_mesh";
        do {
          pcVar15 = pcVar14;
          pcVar14 = pcVar15 + 1;
        } while (*pcVar14 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar14 = (char *)*puVar13;
          if (pcVar14 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar14 = (char *)0x180d48d24;
          }
          else {
            pcVar4 = (char *)puVar13[2];
          }
          if (pcVar4 == pcVar15 + -0x180a2e2d7) {
            pcVar4 = pcVar4 + (longlong)pcVar14;
            if (pcVar4 <= pcVar14) {
LAB_1804aeee4:
              lVar9 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar9 = puVar13[1];
              }
              (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar9);
              break;
            }
            lVar9 = (longlong)&unknown_var_5848_ptr - (longlong)pcVar14;
            while (*pcVar14 == pcVar14[lVar9]) {
              pcVar14 = pcVar14 + 1;
              if (pcVar4 <= pcVar14) goto LAB_1804aeee4;
            }
          }
        }
        lVar9 = FUN_1800b6de0(system_resource_state,&puStack_160,1);
        *(longlong *)(lVar7 + 0x2b8) = lVar9;
        pcVar14 = (char *)0x0;
        if ((lVar9 != 0) &&
           (uVar10 = *(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38) >> 4,
           pcVar15 = pcVar14, pcVar4 = pcVar14, uVar10 != 0)) {
          do {
            if ((pcVar15[*(longlong *)(lVar9 + 0x38) + 8] & 1U) != 0) {
              FUN_1801eeb30(uVar10,*(uint64_t *)(pcVar15 + *(longlong *)(lVar9 + 0x38)));
              lVar9 = *(longlong *)(lVar7 + 0x2b8);
            }
            uVar11 = (int)pcVar4 + 1;
            uVar10 = *(longlong *)(lVar9 + 0x40) - *(longlong *)(lVar9 + 0x38) >> 4;
            param_2 = lStack_140;
            pcVar15 = pcVar15 + 0x10;
            pcVar4 = (char *)(ulonglong)uVar11;
          } while ((ulonglong)(longlong)(int)uVar11 < uVar10);
        }
        FUN_180283e70(lVar9);
        pcVar15 = "underwear_bottom_mesh";
        do {
          pcVar4 = pcVar15;
          pcVar15 = pcVar4 + 1;
        } while (*pcVar15 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar15 = (char *)*puVar13;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = pcVar14;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e30f) {
            pcVar6 = pcVar6 + (longlong)pcVar15;
            if (pcVar6 <= pcVar15) {
LAB_1804aeff0:
              lVar9 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar9 = puVar13[1];
              }
              (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar9);
              break;
            }
            lVar9 = (longlong)&unknown_var_5904_ptr - (longlong)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_1804aeff0;
            }
          }
        }
        uVar5 = FUN_1800b6de0(system_resource_state,&puStack_160,1);
        *(uint64_t *)(lVar7 + 0x2c0) = uVar5;
        pcVar15 = "underwear_top_mesh";
        do {
          pcVar4 = pcVar15;
          pcVar15 = pcVar4 + 1;
        } while (*pcVar15 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar15 = (char *)*puVar13;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = pcVar14;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e2f7) {
            pcVar6 = pcVar6 + (longlong)pcVar15;
            if (pcVar6 <= pcVar15) {
LAB_1804af090:
              lVar9 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar9 = puVar13[1];
              }
              (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar9);
              break;
            }
            lVar9 = (longlong)&unknown_var_5880_ptr - (longlong)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_1804af090;
            }
          }
        }
        uVar5 = FUN_1800b6de0(system_resource_state,&puStack_160,1);
        *(uint64_t *)(lVar7 + 0x2c8) = uVar5;
        pcVar15 = "face_meta_mesh";
        do {
          pcVar4 = pcVar15;
          pcVar15 = pcVar4 + 1;
        } while (*pcVar15 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar15 = (char *)*puVar13;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = pcVar14;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e417) {
            pcVar6 = pcVar15 + (longlong)pcVar6;
            if (pcVar6 <= pcVar15) {
LAB_1804af134:
              lVar9 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar9 = puVar13[1];
              }
              (**(code **)(puStack_160 + 0x10))(&puStack_160,lVar9);
              break;
            }
            lVar9 = (longlong)&unknown_var_6168_ptr - (longlong)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_1804af134;
            }
          }
        }
        uVar5 = FUN_1800b6de0(system_resource_state,&puStack_160,1);
        *(uint64_t *)(lVar7 + 0x370) = uVar5;
        FUN_180283e70(uVar5);
        if (*(int *)(*(longlong *)(lVar7 + 0x370) + 0x58) == 0) {
          puVar8 = &system_buffer_ptr;
          if (puStack_158 != (void *)0x0) {
            puVar8 = puStack_158;
          }
          FUN_180626ee0(&unknown_var_6136_ptr,puVar8);
        }
        FUN_1804b6de0(lVar7,param_2);
        FUN_1804b58f0(lVar7,param_2);
        FUN_1804b5ce0(lVar7,param_2);
        FUN_1804b60a0(lVar7,param_2);
        FUN_1804b4e90(lVar7,param_2);
        FUN_1804b9540(lVar7,param_2);
        FUN_1804b8300(lVar7,param_2);
        FUN_1804b8c20(lVar7,param_2);
        FUN_1804b64a0(lVar7,param_2);
        FUN_1804b7440(lVar7,param_2);
        FUN_1804b7da0(lVar7,param_2);
        puStack_138 = &unknown_var_3456_ptr;
        uStack_120 = 0;
        lStack_130 = 0;
        iStack_128 = 0;
        pcVar15 = "mesh_maturity_type";
        do {
          pcVar4 = pcVar15;
          pcVar15 = pcVar4 + 1;
        } while (*pcVar15 != '\0');
        for (puVar13 = *(uint64_t **)(param_2 + 0x40); puVar13 != (uint64_t *)0x0;
            puVar13 = (uint64_t *)puVar13[6]) {
          pcVar15 = (char *)*puVar13;
          if (pcVar15 == (char *)0x0) {
            pcVar15 = (char *)0x180d48d24;
            pcVar6 = pcVar14;
          }
          else {
            pcVar6 = (char *)puVar13[2];
          }
          if (pcVar6 == pcVar4 + -0x180a2e437) {
            pcVar6 = pcVar15 + (longlong)pcVar6;
            if (pcVar6 <= pcVar15) {
LAB_1804af2a8:
              lVar7 = 0x180d48d24;
              if (puVar13[1] != 0) {
                lVar7 = puVar13[1];
              }
              FUN_180627c50(&puStack_138,lVar7);
              break;
            }
            lVar7 = (longlong)&unknown_var_6200_ptr - (longlong)pcVar15;
            while (*pcVar15 == pcVar15[lVar7]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar6 <= pcVar15) goto LAB_1804af2a8;
            }
          }
        }
        pcVar15 = pcVar14;
        if (iStack_128 == 5) {
          while (pcVar4 = pcVar15, pcVar15 = pcVar14, pcVar4[lStack_130] == pcVar4[0x180a367a0]) {
            pcVar15 = pcVar4 + 1;
            if (pcVar4 + 1 == (char *)0x6) {
              iVar2 = (int)pcVar4 + -1;
              goto LAB_1804af38e;
            }
          }
          while (pcVar4 = pcVar15, pcVar4[lStack_130] == pcVar4[0x180a367b0]) {
            pcVar15 = pcVar4 + 1;
            if (pcVar4 + 1 == (char *)0x6) {
              iVar2 = (int)pcVar4 + -4;
              goto LAB_1804af38e;
            }
          }
          while (pcVar15 = pcVar14, pcVar15[lStack_130] == pcVar15[0x180a367a8]) {
            pcVar14 = pcVar15 + 1;
            if (pcVar15 + 1 == (char *)0x6) {
              iVar2 = (int)pcVar15 + -3;
              goto LAB_1804af38e;
            }
          }
        }
        else if (iStack_128 == 7) {
          while (pcVar15 = pcVar14 + 1, pcVar14[lStack_130] == pcVar14[0x180a36798]) {
            pcVar14 = pcVar15;
            if (pcVar15 == &system_data_0008) {
              iVar2 = 0;
              goto LAB_1804af38e;
            }
          }
        }
        iVar2 = 3;
LAB_1804af38e:
        *piStack_c8 = iVar2;
        puStack_138 = &unknown_var_3456_ptr;
        if (lStack_130 != 0) {
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
        lStack_130 = 0;
        uStack_120 = uStack_120 & 0xffffffff00000000;
        puStack_138 = &unknown_var_720_ptr;
        puStack_160 = &unknown_var_3456_ptr;
        if (puStack_158 == (void *)0x0) {
          puStack_158 = (void *)0x0;
          uStack_148 = uStack_148 & 0xffffffff00000000;
          puStack_160 = &unknown_var_720_ptr;
          FUN_1808fc8a8(&lStack_b8,0x20,3,FUN_180627b90);
          if (plStack_f0 != (longlong *)0x0) {
            (**(code **)(*plStack_f0 + 0x38))();
          }
          puStack_110 = &unknown_var_3456_ptr;
          if (lStack_108 == 0) {
            lStack_108 = 0;
            uStack_f8 = uStack_f8 & 0xffffffff00000000;
            puStack_110 = &unknown_var_720_ptr;
                    // WARNING: Subroutine does not return
            FUN_1808fc050(uStack_58 ^ (ulonglong)auStack_198);
          }
                    // WARNING: Subroutine does not return
          FUN_18064e900();
        }
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      lVar7 = (longlong)&unknown_var_5728_ptr - (longlong)pcVar14;
      while (*pcVar14 == pcVar14[lVar7]) {
        pcVar14 = pcVar14 + 1;
        if (pcVar6 <= pcVar14) goto LAB_1804ae9b4;
      }
    }
    puVar13 = (uint64_t *)puVar13[6];
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




