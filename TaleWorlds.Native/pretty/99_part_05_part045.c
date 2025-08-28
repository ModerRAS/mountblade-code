#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_05_part045.c - 4 个函数

// 函数: void FUN_1802f6cc0(int64_t *param_1,int64_t param_2)
void FUN_1802f6cc0(int64_t *param_1,int64_t param_2)

{
  code *pcVar1;
  uint64_t uVar2;
  char *pcVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint auStackX_8 [2];
  int64_t *aplStackX_18 [2];
  void *puStack_148;
  int64_t lStack_140;
  int iStack_138;
  uint64_t uStack_130;
  void *puStack_128;
  uint64_t uStack_120;
  int32_t uStack_118;
  uint64_t uStack_110;
  int32_t uStack_108;
  int32_t uStack_104;
  int32_t uStack_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t uStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t uStack_bc;
  uint64_t uStack_b8;
  uint64_t uStack_b0;
  int32_t uStack_90;
  int32_t uStack_8c;
  int32_t uStack_88;
  int32_t uStack_84;
  int32_t uStack_80;
  int32_t uStack_7c;
  int32_t uStack_78;
  int32_t uStack_74;
  uint64_t uStack_70;
  uint64_t uStack_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int32_t uStack_54;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  
  uStack_40 = 0xfffffffffffffffe;
  pcVar5 = (char *)0x0;
  puStack_128 = &system_data_buffer_ptr;
  uStack_110 = 0;
  uStack_120 = 0;
  uStack_118 = 0;
  puStack_148 = &system_data_buffer_ptr;
  uStack_130 = 0;
  lStack_140 = 0;
  iStack_138 = 0;
  pcVar7 = "material";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar7 = (char *)*puVar6;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar3 = pcVar5;
    }
    else {
      pcVar3 = (char *)puVar6[2];
    }
    if (pcVar3 == pcVar8 + -0x180a04ebf) {
      pcVar3 = pcVar7 + (int64_t)pcVar3;
      if (pcVar3 <= pcVar7) {
LAB_1802f6db4:
        lVar4 = 0x180d48d24;
        if (puVar6[1] != 0) {
          lVar4 = puVar6[1];
        }
        CoreSystem_ConfigValidator0(&puStack_148,lVar4);
        break;
      }
      lVar4 = (int64_t)&processed_var_6864_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar4]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar3 <= pcVar7) goto LAB_1802f6db4;
      }
    }
  }
  if (0 < iStack_138) {
    pcVar1 = *(code **)(*param_1 + 0x118);
    uVar2 = FUN_1800b30d0(system_resource_state,aplStackX_18,&puStack_148,1);
    (*pcVar1)(param_1,uVar2);
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x38))();
    }
  }
  auStackX_8[0] = 0;
  pcVar7 = "factor";
  do {
    pcVar8 = pcVar7;
    pcVar7 = pcVar8 + 1;
  } while (*pcVar7 != '\0');
  for (puVar6 = *(uint64_t **)(param_2 + 0x40); puVar6 != (uint64_t *)0x0;
      puVar6 = (uint64_t *)puVar6[6]) {
    pcVar7 = (char *)*puVar6;
    if (pcVar7 == (char *)0x0) {
      pcVar7 = (char *)0x180d48d24;
      pcVar3 = pcVar5;
    }
    else {
      pcVar3 = (char *)puVar6[2];
    }
    if (pcVar3 == pcVar8 + -0x180a1674b) {
      pcVar3 = pcVar3 + (int64_t)pcVar7;
      if (pcVar3 <= pcVar7) {
LAB_1802f6e87:
        lVar4 = 0x180d48d24;
        if (puVar6[1] != 0) {
          lVar4 = puVar6[1];
        }
        AdvancedSystemOptimizer(lVar4,&rendering_buffer_2208_ptr,auStackX_8);
        *(float *)((int64_t)param_1 + 0x284) = (float)(auStackX_8[0] >> 0x10 & 0xff) * 0.003921569;
        *(float *)(param_1 + 0x51) = (float)(auStackX_8[0] >> 8 & 0xff) * 0.003921569;
        *(float *)((int64_t)param_1 + 0x28c) = (float)(auStackX_8[0] & 0xff) * 0.003921569;
        *(float *)(param_1 + 0x52) = (float)(auStackX_8[0] >> 0x18) * 0.003921569;
        break;
      }
      lVar4 = (int64_t)&processed_var_8684_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar4]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar3 <= pcVar7) goto LAB_1802f6e87;
      }
    }
  }
  lVar4 = FUN_180631b90(param_2,&processed_var_8832_ptr,&uStack_90);
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 400))(param_1,&uStack_90);
  }
  lVar4 = FUN_180631b90(param_2,&processed_var_8848_ptr,&uStack_90);
  if (lVar4 != 0) {
    *(int32_t *)(param_1 + 0xc) = uStack_90;
    *(int32_t *)((int64_t)param_1 + 100) = uStack_8c;
    *(int32_t *)(param_1 + 0xd) = uStack_88;
    *(int32_t *)((int64_t)param_1 + 0x6c) = uStack_84;
  }
  lVar4 = FUN_180631850(param_2,&processed_var_696_ptr,param_1 + 0x11);
  if (lVar4 != 0) {
    FUN_180631850(param_2,&processed_var_816_ptr,param_1 + 0x12);
    FUN_180631850(param_2,&processed_var_800_ptr,param_1 + 0x13);
    FUN_180631850(param_2,&processed_var_784_ptr,param_1 + 0x14);
    FUN_180631960(param_2,&processed_var_768_ptr,param_1 + 0x15);
    FUN_180631960(param_2,&processed_var_904_ptr,param_1 + 0x17);
    FUN_180631960(param_2,&processed_var_888_ptr,param_1 + 0x19);
    pcVar7 = "width";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a0a23b) {
        pcVar3 = pcVar7 + (int64_t)pcVar3;
        if (pcVar3 <= pcVar7) {
LAB_1802f7070:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_8236_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f7070;
        }
      }
    }
    if ((param_1 + 0x1b != (int64_t *)0x0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,param_1 + 0x1b);
    }
    pcVar7 = "height";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a0a20b) {
        pcVar3 = pcVar3 + (int64_t)pcVar7;
        if (pcVar3 <= pcVar7) {
LAB_1802f7100:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_8188_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f7100;
        }
      }
    }
    if (((int64_t)param_1 + 0xdc != 0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,(int64_t)param_1 + 0xdc);
    }
    pcVar7 = "road_start_offset";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a196df) {
        pcVar3 = pcVar3 + (int64_t)pcVar7;
        if (pcVar3 <= pcVar7) {
LAB_1802f7190:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_864_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f7190;
        }
      }
    }
    if (((int64_t)param_1 + 0xe4 != 0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,(int64_t)param_1 + 0xe4);
    }
    pcVar7 = "road_start_phase";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a196bf) {
        pcVar3 = pcVar3 + (int64_t)pcVar7;
        if (pcVar3 <= pcVar7) {
LAB_1802f7220:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_832_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f7220;
        }
      }
    }
    if ((param_1 + 0x1c != (int64_t *)0x0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,param_1 + 0x1c);
    }
    pcVar7 = "mip_m";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a1975f) {
        pcVar3 = pcVar3 + (int64_t)pcVar7;
        if (pcVar3 <= pcVar7) {
LAB_1802f72b0:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_992_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f72b0;
        }
      }
    }
    if ((param_1 + 0x26 != (int64_t *)0x0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,param_1 + 0x26);
    }
    pcVar7 = "start_fadeout";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); pcVar7 = pcVar5, puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a1974f) {
        pcVar3 = pcVar7 + (int64_t)pcVar3;
        if (pcVar3 <= pcVar7) {
LAB_1802f7340:
          pcVar7 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar7 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_976_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f7340;
        }
      }
    }
    if ((param_1 + 0x25 != (int64_t *)0x0) && (pcVar7 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar7,&system_data_6430,param_1 + 0x25);
    }
    pcVar7 = "end_fadeout";
    do {
      pcVar8 = pcVar7;
      pcVar7 = pcVar8 + 1;
    } while (*pcVar7 != '\0');
    for (puVar6 = *(uint64_t **)(param_2 + 0x40); puVar6 != (uint64_t *)0x0;
        puVar6 = (uint64_t *)puVar6[6]) {
      pcVar7 = (char *)*puVar6;
      if (pcVar7 == (char *)0x0) {
        pcVar7 = (char *)0x180d48d24;
        pcVar3 = pcVar5;
      }
      else {
        pcVar3 = (char *)puVar6[2];
      }
      if (pcVar3 == pcVar8 + -0x180a1973f) {
        pcVar3 = pcVar3 + (int64_t)pcVar7;
        if (pcVar3 <= pcVar7) {
LAB_1802f73d0:
          pcVar5 = (char *)0x180d48d24;
          if ((char *)puVar6[1] != (char *)0x0) {
            pcVar5 = (char *)puVar6[1];
          }
          break;
        }
        lVar4 = (int64_t)&processed_var_960_ptr - (int64_t)pcVar7;
        while (*pcVar7 == pcVar7[lVar4]) {
          pcVar7 = pcVar7 + 1;
          if (pcVar3 <= pcVar7) goto LAB_1802f73d0;
        }
      }
    }
    if (((int64_t)param_1 + 300 != 0) && (pcVar5 != (char *)0x0)) {
      AdvancedSystemOptimizer(pcVar5,&system_data_6430,(int64_t)param_1 + 300);
    }
    FUN_180631f30(param_2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  uStack_80 = (int32_t)param_1[0x36];
  uStack_7c = *(int32_t *)((int64_t)param_1 + 0x1b4);
  uStack_78 = (int32_t)param_1[0x37];
  uStack_74 = *(int32_t *)((int64_t)param_1 + 0x1bc);
  FUN_1801c1720(param_1 + 0x30,&uStack_108);
  FUN_180085020(param_1 + 0x30,&fStack_f8);
  FUN_180631960(param_2,&processed_var_8872_ptr,&uStack_80);
  FUN_180631960(param_2,&processed_var_8888_ptr,&uStack_108);
  FUN_180631960(param_2,&processed_var_8408_ptr,&fStack_f8);
  uStack_b8 = CONCAT44(uStack_7c,uStack_80);
  uStack_b0 = CONCAT44(uStack_74,uStack_78);
  uStack_70 = 0x3f800000;
  uStack_68 = 0;
  fStack_60 = 0.0;
  fStack_5c = 1.0;
  fStack_58 = 0.0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_48 = 0x3f800000;
  FUN_180085c10(&uStack_70,uStack_100);
  FUN_180085970(&uStack_70,uStack_108);
  FUN_180085ac0(&uStack_70,uStack_104);
  uStack_dc = uStack_68._4_4_;
  uStack_cc = uStack_54;
  uStack_bc = uStack_48._4_4_;
  fStack_e8 = (float)uStack_70 * fStack_f8;
  fStack_e4 = uStack_70._4_4_ * fStack_f8;
  fStack_e0 = (float)uStack_68 * fStack_f8;
  fStack_d8 = fStack_60 * fStack_f4;
  fStack_d4 = fStack_5c * fStack_f4;
  fStack_d0 = fStack_58 * fStack_f4;
  fStack_c8 = (float)uStack_50 * fStack_f0;
  fStack_c4 = uStack_50._4_4_ * fStack_f0;
  fStack_c0 = (float)uStack_48 * fStack_f0;
  (**(code **)(*param_1 + 0x148))(param_1,&fStack_e8);
  puStack_148 = &system_data_buffer_ptr;
  if (lStack_140 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}






// 函数: void FUN_1802f75e0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1802f75e0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  int param_5)

{
  uint uVar1;
  uint64_t *puVar2;
  char *pcVar3;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  void *puVar12;
  int32_t uStack_58;
  int32_t uStack_54;
  int32_t uStack_50;
  int32_t uStack_4c;
  int8_t auStack_48 [16];
  int8_t auStack_38 [32];
  char *pcVar4;
  
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "decal_component";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &system_data_9e20;
  puVar2[2] = pcVar4 + -0x180a09e1f;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    puVar7 = param_1 + 0x30;
    if ((void *)*param_1 == &ui_system_data_1008_ptr) {
      puVar5 = &ui_system_data_1008_ptr;
      puVar6 = puVar7;
    }
    else {
      puVar6 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
      puVar5 = (void *)*param_1;
    }
    uStack_58 = *(int32_t *)(puVar6 + 6);
    uStack_54 = *(int32_t *)((int64_t)puVar6 + 0x34);
    uStack_50 = *(int32_t *)(puVar6 + 7);
    uStack_4c = *(int32_t *)((int64_t)puVar6 + 0x3c);
    puVar6 = puVar7;
    if (puVar5 != &ui_system_data_1008_ptr) {
      puVar6 = (uint64_t *)(**(code **)(puVar5 + 0x158))(param_1);
    }
    FUN_1801c1720(puVar6,auStack_48);
    if ((void *)*param_1 != &ui_system_data_1008_ptr) {
      puVar7 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    }
    FUN_180085020(puVar7,auStack_38);
    FUN_18062fb40(param_2,puVar2,&processed_var_8872_ptr,&uStack_58);
    FUN_18062fb40(param_2,puVar2,&processed_var_8888_ptr,auStack_48);
    FUN_18062fb40(param_2,puVar2,&processed_var_8408_ptr,auStack_38);
  }
  if (param_1[0x2b] != 0) {
    puVar5 = *(void **)(param_1[0x2b] + 0x18);
    puVar12 = &system_buffer_ptr;
    if (puVar5 != (void *)0x0) {
      puVar12 = puVar5;
    }
    SystemAllocationProcessor(param_2,puVar2,&processed_var_6864_ptr,puVar12);
  }
  if (((*(float *)(param_1 + 10) != 0.0) || (*(float *)((int64_t)param_1 + 0x54) != 0.0)) ||
     (*(float *)(param_1 + 0xb) != 0.0)) {
    FUN_180630010(param_2,puVar2,&processed_var_8832_ptr);
  }
  if (((*(float *)(param_1 + 0xc) != 0.0) || (*(float *)((int64_t)param_1 + 100) != 0.0)) ||
     (*(float *)(param_1 + 0xd) != 0.0)) {
    FUN_180630010(param_2,puVar2,&processed_var_8848_ptr);
  }
  if (((*(float *)((int64_t)param_1 + 0x284) != 1.0) || (*(float *)(param_1 + 0x51) != 1.0)) ||
     (*(float *)((int64_t)param_1 + 0x28c) != 1.0)) {
    uVar1 = (uint)(int64_t)(*(float *)(param_1 + 0x52) * 256.0);
    uVar11 = 0xff;
    if (uVar1 < 0xff) {
      uVar11 = uVar1;
    }
    uVar8 = (uint)(int64_t)(*(float *)((int64_t)param_1 + 0x284) * 256.0);
    uVar1 = 0xff;
    if (uVar8 < 0xff) {
      uVar1 = uVar8;
    }
    uVar9 = (uint)(int64_t)(*(float *)(param_1 + 0x51) * 256.0);
    uVar8 = 0xff;
    if (uVar9 < 0xff) {
      uVar8 = uVar9;
    }
    uVar10 = (uint)(int64_t)(*(float *)((int64_t)param_1 + 0x28c) * 256.0);
    uVar9 = 0xff;
    if (uVar10 < 0xff) {
      uVar9 = uVar10;
    }
    FUN_18062f640(param_2,puVar2,&processed_var_8684_ptr,((uVar11 << 8 | uVar1) << 8 | uVar8) << 8 | uVar9);
  }
  if (((*(float *)(param_1 + 0x15) != 0.0) || (*(float *)((int64_t)param_1 + 0xac) != 0.0)) ||
     (*(float *)(param_1 + 0x16) != 0.0)) {
    FUN_1806307a0(param_2,puVar2,&processed_var_696_ptr,param_1 + 0x11);
    FUN_1806307a0(param_2,puVar2,&processed_var_816_ptr,param_1 + 0x12);
    FUN_1806307a0(param_2,puVar2,&processed_var_800_ptr,param_1 + 0x13);
    FUN_1806307a0(param_2,puVar2,&processed_var_784_ptr,param_1 + 0x14);
    FUN_18062fb40(param_2,puVar2,&processed_var_768_ptr,param_1 + 0x15);
    FUN_18062fb40(param_2,puVar2,&processed_var_904_ptr,param_1 + 0x17);
    FUN_18062fb40(param_2,puVar2,&processed_var_888_ptr,param_1 + 0x19);
    FUN_18062f990(param_2,puVar2,&processed_var_8236_ptr,*(int32_t *)(param_1 + 0x1b));
    FUN_18062f990(param_2,puVar2,&processed_var_8188_ptr,*(int32_t *)((int64_t)param_1 + 0xdc));
    FUN_18062f990(param_2,puVar2,&processed_var_832_ptr,*(int32_t *)(param_1 + 0x1c));
    FUN_18062f990(param_2,puVar2,&processed_var_864_ptr,*(int32_t *)((int64_t)param_1 + 0xe4));
    FUN_18062f990(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    FUN_18062f990(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    FUN_18062f990(param_2,puVar2,&processed_var_992_ptr,*(int32_t *)(param_1 + 0x26));
    FUN_18062f990(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    FUN_18062f990(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    FUN_180630240(param_2,puVar2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (param_5 != 0) {
      FUN_180630c80(param_2,puVar2,&processed_var_9168_ptr);
    }
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}






// 函数: void FUN_1802f75f0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void FUN_1802f75f0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
                  uint64_t param_5,uint64_t param_6,uint64_t param_7)

{
  uint uVar1;
  int64_t in_RAX;
  uint64_t *puVar2;
  char *pcVar3;
  void *puVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint uVar8;
  uint uVar9;
  uint64_t unaff_RBP;
  uint64_t unaff_RDI;
  uint uVar10;
  uint uVar11;
  void *puVar12;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  int32_t unaff_XMM6_Dd;
  int in_stack_000000b0;
  char *pcVar4;
  
  *(uint64_t *)(in_RAX + 8) = unaff_RBP;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RDI;
  *(int32_t *)(in_RAX + -0x28) = unaff_XMM6_Da;
  *(int32_t *)(in_RAX + -0x24) = unaff_XMM6_Db;
  *(int32_t *)(in_RAX + -0x20) = unaff_XMM6_Dc;
  *(int32_t *)(in_RAX + -0x1c) = unaff_XMM6_Dd;
  puVar2 = (uint64_t *)DataPipelineManager(param_2 + 0x60,0x60);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[4] = 0;
  *(int32_t *)(puVar2 + 5) = 1;
  puVar2[6] = 0;
  puVar2[8] = 0;
  pcVar3 = "decal_component";
  do {
    pcVar4 = pcVar3;
    pcVar3 = pcVar4 + 1;
  } while (*pcVar3 != '\0');
  *puVar2 = &system_data_9e20;
  puVar2[2] = pcVar4 + -0x180a09e1f;
  if (*(char *)(param_1 + 0x2c) == '\0') {
    puVar7 = param_1 + 0x30;
    if ((void *)*param_1 == &ui_system_data_1008_ptr) {
      puVar5 = &ui_system_data_1008_ptr;
      puVar6 = puVar7;
    }
    else {
      puVar6 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
      puVar5 = (void *)*param_1;
    }
    param_6._0_4_ = *(int32_t *)(puVar6 + 6);
    param_6._4_4_ = *(int32_t *)((int64_t)puVar6 + 0x34);
    param_7._0_4_ = *(int32_t *)(puVar6 + 7);
    param_7._4_4_ = *(int32_t *)((int64_t)puVar6 + 0x3c);
    puVar6 = puVar7;
    if (puVar5 != &ui_system_data_1008_ptr) {
      puVar6 = (uint64_t *)(**(code **)(puVar5 + 0x158))(param_1);
    }
    FUN_1801c1720(puVar6,&stack0x00000040);
    if ((void *)*param_1 != &ui_system_data_1008_ptr) {
      puVar7 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    }
    FUN_180085020(puVar7,&stack0x00000050);
    FUN_18062fb40(param_2,puVar2,&processed_var_8872_ptr,&param_6);
    FUN_18062fb40(param_2,puVar2,&processed_var_8888_ptr,&stack0x00000040);
    FUN_18062fb40(param_2,puVar2,&processed_var_8408_ptr,&stack0x00000050);
  }
  if (param_1[0x2b] != 0) {
    puVar5 = *(void **)(param_1[0x2b] + 0x18);
    puVar12 = &system_buffer_ptr;
    if (puVar5 != (void *)0x0) {
      puVar12 = puVar5;
    }
    SystemAllocationProcessor(param_2,puVar2,&processed_var_6864_ptr,puVar12);
  }
  if (((*(float *)(param_1 + 10) != 0.0) || (*(float *)((int64_t)param_1 + 0x54) != 0.0)) ||
     (*(float *)(param_1 + 0xb) != 0.0)) {
    FUN_180630010(param_2,puVar2,&processed_var_8832_ptr);
  }
  if (((*(float *)(param_1 + 0xc) != 0.0) || (*(float *)((int64_t)param_1 + 100) != 0.0)) ||
     (*(float *)(param_1 + 0xd) != 0.0)) {
    FUN_180630010(param_2,puVar2,&processed_var_8848_ptr);
  }
  if (((*(float *)((int64_t)param_1 + 0x284) != 1.0) || (*(float *)(param_1 + 0x51) != 1.0)) ||
     (*(float *)((int64_t)param_1 + 0x28c) != 1.0)) {
    uVar1 = (uint)(int64_t)(*(float *)(param_1 + 0x52) * 256.0);
    uVar11 = 0xff;
    if (uVar1 < 0xff) {
      uVar11 = uVar1;
    }
    uVar8 = (uint)(int64_t)(*(float *)((int64_t)param_1 + 0x284) * 256.0);
    uVar1 = 0xff;
    if (uVar8 < 0xff) {
      uVar1 = uVar8;
    }
    uVar9 = (uint)(int64_t)(*(float *)(param_1 + 0x51) * 256.0);
    uVar8 = 0xff;
    if (uVar9 < 0xff) {
      uVar8 = uVar9;
    }
    uVar10 = (uint)(int64_t)(*(float *)((int64_t)param_1 + 0x28c) * 256.0);
    uVar9 = 0xff;
    if (uVar10 < 0xff) {
      uVar9 = uVar10;
    }
    FUN_18062f640(param_2,puVar2,&processed_var_8684_ptr,((uVar11 << 8 | uVar1) << 8 | uVar8) << 8 | uVar9);
  }
  if (((*(float *)(param_1 + 0x15) != 0.0) || (*(float *)((int64_t)param_1 + 0xac) != 0.0)) ||
     (*(float *)(param_1 + 0x16) != 0.0)) {
    FUN_1806307a0(param_2,puVar2,&processed_var_696_ptr,param_1 + 0x11);
    FUN_1806307a0(param_2,puVar2,&processed_var_816_ptr,param_1 + 0x12);
    FUN_1806307a0(param_2,puVar2,&processed_var_800_ptr,param_1 + 0x13);
    FUN_1806307a0(param_2,puVar2,&processed_var_784_ptr,param_1 + 0x14);
    FUN_18062fb40(param_2,puVar2,&processed_var_768_ptr,param_1 + 0x15);
    FUN_18062fb40(param_2,puVar2,&processed_var_904_ptr,param_1 + 0x17);
    FUN_18062fb40(param_2,puVar2,&processed_var_888_ptr,param_1 + 0x19);
    FUN_18062f990(param_2,puVar2,&processed_var_8236_ptr,*(int32_t *)(param_1 + 0x1b));
    FUN_18062f990(param_2,puVar2,&processed_var_8188_ptr,*(int32_t *)((int64_t)param_1 + 0xdc));
    FUN_18062f990(param_2,puVar2,&processed_var_832_ptr,*(int32_t *)(param_1 + 0x1c));
    FUN_18062f990(param_2,puVar2,&processed_var_864_ptr,*(int32_t *)((int64_t)param_1 + 0xe4));
    FUN_18062f990(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    FUN_18062f990(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    FUN_18062f990(param_2,puVar2,&processed_var_992_ptr,*(int32_t *)(param_1 + 0x26));
    FUN_18062f990(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    FUN_18062f990(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    FUN_180630240(param_2,puVar2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80(param_2,puVar2,&processed_var_9168_ptr);
    }
    if (*(int64_t *)(param_3 + 0x30) == 0) {
      puVar2[10] = 0;
      *(uint64_t **)(param_3 + 0x30) = puVar2;
    }
    else {
      puVar2[10] = *(uint64_t *)(param_3 + 0x38);
      *(uint64_t **)(*(int64_t *)(param_3 + 0x38) + 0x58) = puVar2;
    }
    *(uint64_t **)(param_3 + 0x38) = puVar2;
    puVar2[4] = param_3;
    puVar2[0xb] = 0;
  }
  return;
}






// 函数: void FUN_1802f7671(void)
void FUN_1802f7671(void)

{
  uint uVar1;
  void *in_RAX;
  void *puVar2;
  int64_t lVar3;
  uint uVar4;
  uint uVar5;
  int64_t unaff_RBX;
  int64_t unaff_RBP;
  uint64_t *unaff_RDI;
  uint uVar6;
  uint uVar7;
  int64_t unaff_R14;
  int64_t unaff_R15;
  float fVar8;
  int32_t uStack0000000000000034;
  int32_t uStack000000000000003c;
  int in_stack_000000b0;
  
  if (in_RAX == &ui_system_data_1008_ptr) {
    puVar2 = &ui_system_data_1008_ptr;
    lVar3 = unaff_RBP;
  }
  else {
    lVar3 = (**(code **)(in_RAX + 0x158))();
    puVar2 = (void *)*unaff_RDI;
  }
  uStack0000000000000034 = *(int32_t *)(lVar3 + 0x34);
  uStack000000000000003c = *(int32_t *)(lVar3 + 0x3c);
  lVar3 = unaff_RBP;
  if (puVar2 != &ui_system_data_1008_ptr) {
    lVar3 = (**(code **)(puVar2 + 0x158))();
  }
  FUN_1801c1720(lVar3,&stack0x00000040);
  if ((void *)*unaff_RDI != &ui_system_data_1008_ptr) {
    unaff_RBP = (**(code **)((void *)*unaff_RDI + 0x158))();
  }
  FUN_180085020(unaff_RBP,&stack0x00000050);
  FUN_18062fb40();
  FUN_18062fb40();
  FUN_18062fb40();
  if (unaff_RDI[0x2b] != 0) {
    SystemAllocationProcessor();
  }
  if (((*(float *)(unaff_RDI + 10) != 0.0) || (*(float *)((int64_t)unaff_RDI + 0x54) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xb) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)(unaff_RDI + 0xc) != 0.0) || (*(float *)((int64_t)unaff_RDI + 100) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xd) != 0.0)) {
    FUN_180630010();
  }
  if (((*(float *)((int64_t)unaff_RDI + 0x284) != 1.0) || (*(float *)(unaff_RDI + 0x51) != 1.0)) ||
     (*(float *)((int64_t)unaff_RDI + 0x28c) != 1.0)) {
    uVar1 = (uint)(int64_t)(*(float *)(unaff_RDI + 0x52) * 256.0);
    fVar8 = *(float *)((int64_t)unaff_RDI + 0x284) * 256.0;
    uVar7 = 0xff;
    if (uVar1 < 0xff) {
      uVar7 = uVar1;
    }
    uVar4 = (uint)(int64_t)fVar8;
    uVar1 = 0xff;
    if (uVar4 < 0xff) {
      uVar1 = uVar4;
    }
    uVar5 = (uint)(int64_t)(*(float *)(unaff_RDI + 0x51) * 256.0);
    uVar4 = 0xff;
    if (uVar5 < 0xff) {
      uVar4 = uVar5;
    }
    uVar6 = (uint)(int64_t)(*(float *)((int64_t)unaff_RDI + 0x28c) * 256.0);
    uVar5 = 0xff;
    if (uVar6 < 0xff) {
      uVar5 = uVar6;
    }
    FUN_18062f640(fVar8,*(float *)(unaff_RDI + 0x51) * 256.0,&processed_var_8684_ptr,
                  ((uVar7 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5);
  }
  if (((*(float *)(unaff_RDI + 0x15) != 0.0) || (*(float *)((int64_t)unaff_RDI + 0xac) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x16) != 0.0)) {
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_1806307a0();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062fb40();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_18062f990();
    FUN_180630240();
  }
  if ((*(int64_t *)(unaff_RBX + 0x30) != unaff_R15) ||
     (*(int64_t *)(unaff_RBX + 0x40) != unaff_R15)) {
    if (in_stack_000000b0 != 0) {
      FUN_180630c80();
    }
    if (*(int64_t *)(unaff_R14 + 0x30) == unaff_R15) {
      *(int64_t *)(unaff_RBX + 0x50) = unaff_R15;
      *(int64_t *)(unaff_R14 + 0x30) = unaff_RBX;
    }
    else {
      *(uint64_t *)(unaff_RBX + 0x50) = *(uint64_t *)(unaff_R14 + 0x38);
      *(int64_t *)(*(int64_t *)(unaff_R14 + 0x38) + 0x58) = unaff_RBX;
    }
    *(int64_t *)(unaff_R14 + 0x38) = unaff_RBX;
    *(int64_t *)(unaff_RBX + 0x20) = unaff_R14;
    *(int64_t *)(unaff_RBX + 0x58) = unaff_R15;
  }
  return;
}






