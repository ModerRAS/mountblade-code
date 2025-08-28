#include "ultra_high_freq_fun_definitions.h"
#include "TaleWorlds.Native.Split.h"

// 03_rendering_part230.c - 1 个函数

// 函数: void FUN_180398bb0(int64_t param_1,int64_t param_2,int64_t param_3)
void FUN_180398bb0(int64_t param_1,int64_t param_2,int64_t param_3)

{
  uint64_t uVar1;
  char *pcVar2;
  char *pcVar3;
  uint64_t uVar4;
  int64_t lVar5;
  void *puVar6;
  int64_t lVar7;
  uint64_t *puVar8;
  int iVar9;
  uint64_t *puVar10;
  char *pcVar11;
  char *pcVar12;
  
  pcVar11 = "terrain";
  do {
    pcVar12 = pcVar11;
    pcVar11 = pcVar12 + 1;
  } while (*pcVar11 != '\0');
  puVar8 = *(uint64_t **)(param_3 + 0x30);
  if (puVar8 == (uint64_t *)0x0) {
LAB_180398ce7:
    *(int8_t *)(param_1 + 0x11c) = 0;
    return;
  }
  pcVar11 = (char *)0x0;
LAB_180398c13:
  pcVar3 = (char *)*puVar8;
  if (pcVar3 == (char *)0x0) {
    pcVar3 = (char *)0x180d48d24;
    pcVar2 = pcVar11;
  }
  else {
    pcVar2 = (char *)puVar8[2];
  }
  if (pcVar2 == pcVar12 + -0x180a1cbef) {
    pcVar2 = pcVar2 + (int64_t)pcVar3;
    if (pcVar2 <= pcVar3) {
LAB_180398c54:
      UltraHighFreq_CacheSystem1(puVar8,&processed_var_5968_ptr,param_1 + 0x11c,&processed_var_4448_ptr,0xfffffffffffffffe);
      if (*(char *)(param_1 + 0x11c) != '\0') {
        FUN_180631330(puVar8,&processed_var_5944_ptr,param_1 + 0x148);
        FUN_180631330(puVar8,&processed_var_5920_ptr,param_1 + 0x14c);
        pcVar12 = "node_size";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a21fbf) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180398d37:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_5904_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180398d37;
            }
          }
        }
        if ((param_1 + 0x150 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x150);
        }
        pcVar12 = "lod_multiplier";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a2203f) {
            pcVar2 = pcVar12 + (int64_t)pcVar2;
            if (pcVar2 <= pcVar12) {
LAB_180398dd0:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6032_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180398dd0;
            }
          }
        }
        if ((param_1 + 0x228 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x228);
        }
        FUN_180631330(puVar8,&processed_var_6008_ptr,param_1 + 0x160);
        pcVar12 = "ao_intensity";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a22017) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180398e80:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_5992_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180398e80;
            }
          }
        }
        if ((param_1 + 0x164 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x164);
        }
        pcVar12 = "max_height";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a22007) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180398f10:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_5976_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180398f10;
            }
          }
        }
        if ((param_1 + 0x16c != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x16c);
        }
        pcVar12 = "min_height";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a22097) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180398fa0:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6120_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180398fa0;
            }
          }
        }
        if ((param_1 + 0x168 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x168);
        }
        pcVar12 = "vista_normalmap";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a22087) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180399040:
              lVar5 = 0x180d48d24;
              if (puVar10[1] != 0) {
                lVar5 = puVar10[1];
              }
              (**(code **)(*(int64_t *)(param_1 + 0x170) + 0x10))(param_1 + 0x170,lVar5);
              break;
            }
            lVar5 = (int64_t)&processed_var_6104_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180399040;
            }
          }
        }
        pcVar12 = "vista_diffuse_name";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a2206f) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_1803990c5:
              lVar5 = 0x180d48d24;
              if (puVar10[1] != 0) {
                lVar5 = puVar10[1];
              }
              (**(code **)(*(int64_t *)(param_1 + 400) + 0x10))(param_1 + 400,lVar5);
              break;
            }
            lVar5 = (int64_t)&processed_var_6080_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_1803990c5;
            }
          }
        }
        pcVar12 = "vista_diffuse_blend_type";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a2204f) {
            pcVar2 = pcVar12 + (int64_t)pcVar2;
            if (pcVar2 <= pcVar12) {
LAB_180399150:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6048_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180399150;
            }
          }
        }
        if ((param_1 + 0x21c != 0) && (pcVar12 != (char *)0x0)) {
          uVar1 = 0xffffffffffffffff;
          do {
            uVar1 = uVar1 + 1;
          } while (pcVar12[uVar1] != '\0');
          if (((uVar1 < 3) || (*pcVar12 != '0')) ||
             (puVar6 = &processed_var_5412_ptr, (pcVar12[1] + 0xa8U & 0xdf) != 0)) {
            puVar6 = &rendering_buffer_2208_ptr;
          }
          AdvancedSystemOptimizer(pcVar12,puVar6,param_1 + 0x21c);
        }
        pcVar12 = "vista_diffuse_blend_amount";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a220ff) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180399211:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6224_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180399211;
            }
          }
        }
        if ((param_1 + 0x220 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x220);
        }
        pcVar12 = "vista_layer_detail_distance";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a220df) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_1803992b0:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6192_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_1803992b0;
            }
          }
        }
        if ((param_1 + 0x210 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x210);
        }
        pcVar12 = "vista_albedo_multiplier";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; pcVar12 = pcVar11, puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a220c7) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180399340:
              pcVar12 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar12 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6168_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180399340;
            }
          }
        }
        if ((param_1 + 0x214 != 0) && (pcVar12 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar12,&system_data_6430,param_1 + 0x214);
        }
        pcVar12 = "vista_detail_albedo_name";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a220a7) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_1803993e0:
              lVar5 = 0x180d48d24;
              if (puVar10[1] != 0) {
                lVar5 = puVar10[1];
              }
              (**(code **)(*(int64_t *)(param_1 + 0x1b0) + 0x10))(param_1 + 0x1b0,lVar5);
              break;
            }
            lVar5 = (int64_t)&processed_var_6136_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_1803993e0;
            }
          }
        }
        pcVar12 = "vista_detail_normal_name";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a2215f) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_180399465:
              lVar5 = 0x180d48d24;
              if (puVar10[1] != 0) {
                lVar5 = puVar10[1];
              }
              (**(code **)(*(int64_t *)(param_1 + 0x1d0) + 0x10))(param_1 + 0x1d0,lVar5);
              break;
            }
            lVar5 = (int64_t)&processed_var_6320_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_180399465;
            }
          }
        }
        pcVar12 = "vista_detail_tile";
        do {
          pcVar3 = pcVar12;
          pcVar12 = pcVar3 + 1;
        } while (*pcVar12 != '\0');
        for (puVar10 = (uint64_t *)puVar8[8]; puVar10 != (uint64_t *)0x0;
            puVar10 = (uint64_t *)puVar10[6]) {
          pcVar12 = (char *)*puVar10;
          if (pcVar12 == (char *)0x0) {
            pcVar12 = (char *)0x180d48d24;
            pcVar2 = pcVar11;
          }
          else {
            pcVar2 = (char *)puVar10[2];
          }
          if (pcVar2 == pcVar3 + -0x180a22147) {
            pcVar2 = pcVar2 + (int64_t)pcVar12;
            if (pcVar2 <= pcVar12) {
LAB_1803994f0:
              pcVar11 = (char *)0x180d48d24;
              if ((char *)puVar10[1] != (char *)0x0) {
                pcVar11 = (char *)puVar10[1];
              }
              break;
            }
            lVar5 = (int64_t)&processed_var_6296_ptr - (int64_t)pcVar12;
            while (*pcVar12 == pcVar12[lVar5]) {
              pcVar12 = pcVar12 + 1;
              if (pcVar2 <= pcVar12) goto LAB_1803994f0;
            }
          }
        }
        if ((param_1 + 0x218 != 0) && (pcVar11 != (char *)0x0)) {
          AdvancedSystemOptimizer(pcVar11,&system_data_6430,param_1 + 0x218);
        }
        lVar5 = SystemCore_DataManager(puVar8,&processed_var_6280_ptr);
        if (lVar5 != 0) {
          lVar7 = 0x180d48d24;
          if (*(int64_t *)(lVar5 + 8) != 0) {
            lVar7 = *(int64_t *)(lVar5 + 8);
          }
          (**(code **)(*(int64_t *)(param_1 + 0x1f0) + 0x10))(param_1 + 0x1f0,lVar7);
        }
        FUN_180631330(puVar8,&processed_var_6256_ptr,param_1 + 0x120);
        FUN_180631330(puVar8,&processed_var_5872_ptr,param_1 + 0x124);
        lVar5 = SystemCore_DataManager(puVar8,&processed_var_6416_ptr);
        if (lVar5 != 0) {
          lVar7 = 0x180d48d24;
          if (*(int64_t *)(lVar5 + 8) != 0) {
            lVar7 = *(int64_t *)(lVar5 + 8);
          }
          (**(code **)(*(int64_t *)(param_1 + 0x128) + 0x10))(param_1 + 0x128,lVar7);
        }
        FUN_18039b3a0(param_1,param_2);
        FUN_180399af0(param_1,puVar8);
        FUN_18039a290(param_1,puVar8,param_2);
        FUN_18039a420(param_1,puVar8);
      }
      FUN_18039b530();
      iVar9 = *(int *)(param_2 + 0x10) + -1;
      uVar1 = (uint64_t)iVar9;
      if (-1 < iVar9) {
        uVar4 = uVar1;
        do {
          if (*(char *)(*(int64_t *)(param_2 + 8) + uVar1) == '/') {
            if ((int)uVar4 != -1) goto LAB_18039967d;
            break;
          }
          uVar4 = (uint64_t)((int)uVar4 - 1);
          uVar1 = uVar1 - 1;
        } while (-1 < (int64_t)uVar1);
      }
      if (-1 < iVar9) {
        lVar5 = (int64_t)iVar9;
        do {
          if (*(char *)(*(int64_t *)(param_2 + 8) + lVar5) == '/') break;
          lVar5 = lVar5 + -1;
        } while (-1 < lVar5);
      }
LAB_18039967d:
      SystemCore_ConfigurationHandler0(param_1,param_2);
      return;
    }
    lVar5 = (int64_t)&processed_var_4448_ptr - (int64_t)pcVar3;
    while (*pcVar3 == pcVar3[lVar5]) {
      pcVar3 = pcVar3 + 1;
      if (pcVar2 <= pcVar3) goto LAB_180398c54;
    }
  }
  puVar8 = (uint64_t *)puVar8[0xb];
  if (puVar8 == (uint64_t *)0x0) goto LAB_180398ce7;
  goto LAB_180398c13;
}



int64_t * FUN_1803996b0(int64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int64_t *plVar3;
  int64_t *plVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  
  *param_1 = (int64_t)&system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = (int64_t)&system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  plVar1 = param_1 + 4;
  *plVar1 = (int64_t)&system_state_ptr;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *plVar1 = (int64_t)&system_data_buffer_ptr;
  param_1[7] = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  plVar2 = param_1 + 9;
  *plVar2 = (int64_t)&system_state_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  *plVar2 = (int64_t)&system_data_buffer_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  plVar3 = param_1 + 0xd;
  *plVar3 = (int64_t)&system_state_ptr;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  *plVar3 = (int64_t)&system_data_buffer_ptr;
  param_1[0x10] = 0;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0xf) = 0;
  plVar4 = param_1 + 0x11;
  *plVar4 = (int64_t)&system_state_ptr;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  *plVar4 = (int64_t)&system_data_buffer_ptr;
  param_1[0x14] = 0;
  param_1[0x12] = 0;
  *(int32_t *)(param_1 + 0x13) = 0;
  plVar5 = param_1 + 0x15;
  *plVar5 = (int64_t)&system_state_ptr;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  *plVar5 = (int64_t)&system_data_buffer_ptr;
  param_1[0x18] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 0;
  plVar6 = param_1 + 0x19;
  *plVar6 = (int64_t)&system_state_ptr;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  *plVar6 = (int64_t)&system_data_buffer_ptr;
  param_1[0x1c] = 0;
  param_1[0x1a] = 0;
  *(int32_t *)(param_1 + 0x1b) = 0;
  plVar7 = param_1 + 0x1d;
  *plVar7 = (int64_t)&system_state_ptr;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  *plVar7 = (int64_t)&system_data_buffer_ptr;
  param_1[0x20] = 0;
  param_1[0x1e] = 0;
  *(int32_t *)(param_1 + 0x1f) = 0;
  param_1[0x25] = (int64_t)&system_state_ptr;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x27) = 0;
  param_1[0x25] = (int64_t)&system_data_buffer_ptr;
  param_1[0x28] = 0;
  param_1[0x26] = 0;
  *(int32_t *)(param_1 + 0x27) = 0;
  param_1[0x2b] = 0;
  param_1[0x2e] = (int64_t)&system_state_ptr;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x2e] = (int64_t)&system_data_buffer_ptr;
  param_1[0x31] = 0;
  param_1[0x2f] = 0;
  *(int32_t *)(param_1 + 0x30) = 0;
  param_1[0x32] = (int64_t)&system_state_ptr;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  param_1[0x32] = (int64_t)&system_data_buffer_ptr;
  param_1[0x35] = 0;
  param_1[0x33] = 0;
  *(int32_t *)(param_1 + 0x34) = 0;
  param_1[0x36] = (int64_t)&system_state_ptr;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  param_1[0x36] = (int64_t)&system_data_buffer_ptr;
  param_1[0x39] = 0;
  param_1[0x37] = 0;
  *(int32_t *)(param_1 + 0x38) = 0;
  param_1[0x3a] = (int64_t)&system_state_ptr;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x3c) = 0;
  param_1[0x3a] = (int64_t)&system_data_buffer_ptr;
  param_1[0x3d] = 0;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x3c) = 0;
  param_1[0x3e] = (int64_t)&system_state_ptr;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  param_1[0x3e] = (int64_t)&system_data_buffer_ptr;
  param_1[0x41] = 0;
  param_1[0x3f] = 0;
  *(int32_t *)(param_1 + 0x40) = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  *(int32_t *)(param_1 + 0x49) = 3;
  param_1[0x4a] = 0;
  *(int8_t *)((int64_t)param_1 + 0x11c) = 0;
  plVar8 = (int64_t *)param_1[0x2b];
  param_1[0x2b] = 0;
  if (plVar8 != (int64_t *)0x0) {
    (**(code **)(*plVar8 + 0x38))();
  }
  *(int32_t *)(param_1 + 0x45) = 0x3f800000;
  (**(code **)(*plVar1 + 0x10))(plVar1,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0x2c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x164) = 0x40800000;
  *(int32_t *)(param_1 + 0x2d) = 0xc2c80000;
  *(int32_t *)((int64_t)param_1 + 0x16c) = 0x43fa0000;
  (**(code **)(*plVar2 + 0x10))(plVar2,&system_buffer_ptr);
  (**(code **)(*plVar3 + 0x10))(plVar3,&system_buffer_ptr);
  (**(code **)(*plVar4 + 0x10))(plVar4,&system_buffer_ptr);
  (**(code **)(*plVar5 + 0x10))(plVar5,&system_buffer_ptr);
  (**(code **)(*plVar6 + 0x10))(plVar6,&system_buffer_ptr);
  (**(code **)(*plVar7 + 0x10))(plVar7,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0x21) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x10c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x22) = 0x3f800000;
  *(int32_t *)((int64_t)param_1 + 0x114) = 0x3f800000;
  *(int32_t *)(param_1 + 0x23) = 0x3f800000;
  (**(code **)(*param_1 + 0x10))(param_1,&system_buffer_ptr);
  *(int32_t *)((int64_t)param_1 + 0x224) = 1;
  (**(code **)(param_1[0x2e] + 0x10))(param_1 + 0x2e,&system_buffer_ptr);
  (**(code **)(param_1[0x32] + 0x10))(param_1 + 0x32,&system_buffer_ptr);
  (**(code **)(param_1[0x3a] + 0x10))(param_1 + 0x3a,&system_buffer_ptr);
  (**(code **)(param_1[0x36] + 0x10))(param_1 + 0x36,&system_buffer_ptr);
  (**(code **)(param_1[0x3e] + 0x10))(param_1 + 0x3e,&system_buffer_ptr);
  *(int32_t *)(param_1 + 0x42) = 0x420c0000;
  *(int32_t *)((int64_t)param_1 + 0x214) = 0x3f2b851f;
  param_1[0x43] = 0x41a00000;
  *(int32_t *)(param_1 + 0x44) = 0;
  param_1[0x24] = 0;
  (**(code **)(param_1[0x25] + 0x10))(param_1 + 0x25,&system_buffer_ptr);
  return param_1;
}





