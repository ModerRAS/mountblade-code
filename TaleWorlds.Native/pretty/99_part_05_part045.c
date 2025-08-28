#include "ultra_high_freq_fun_definitions.h"
/* 函数别名定义: MemoryDeallocationHandler */
#define MemoryDeallocationHandler MemoryDeallocationHandler
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_05_part045.c - 4 个函数
// 函数: void DataStructure_f6cc0(int64_t *param_1,int64_t param_2)
void DataStructure_f6cc0(int64_t *param_1,int64_t param_2)
{
  code *pcVar1;
  uint64_t uVar2;
  char *pcVar3;
  int64_t lVar4;
  char *pcVar5;
  uint64_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  uint astack_special_x_8 [2];
  int64_t *aplStackX_18 [2];
  void *plocal_var_148;
  int64_t lStack_140;
  int iStack_138;
  uint64_t local_var_130;
  void *plocal_var_128;
  uint64_t local_var_120;
  int32_t local_var_118;
  uint64_t local_var_110;
  int32_t local_var_108;
  int32_t local_var_104;
  int32_t local_var_100;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  int32_t local_var_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  int32_t local_var_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  int32_t local_var_bc;
  uint64_t local_var_b8;
  uint64_t local_var_b0;
  int32_t local_var_90;
  int32_t local_var_8c;
  int32_t local_var_88;
  int32_t local_var_84;
  int32_t local_var_80;
  int32_t local_var_7c;
  int32_t local_var_78;
  int32_t local_var_74;
  uint64_t local_var_70;
  uint64_t local_var_68;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  int32_t local_var_54;
  uint64_t local_var_50;
  uint64_t local_var_48;
  uint64_t local_var_40;
  local_var_40 = 0xfffffffffffffffe;
  pcVar5 = (char *)0x0;
  plocal_var_128 = &system_data_buffer_ptr;
  local_var_110 = 0;
  local_var_120 = 0;
  local_var_118 = 0;
  plocal_var_148 = &system_data_buffer_ptr;
  local_var_130 = 0;
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
        CoreSystem_ConfigValidator0(&plocal_var_148,lVar4);
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
    uVar2 = SystemCore_PerformanceMonitor(system_resource_state,aplStackX_18,&plocal_var_148,1);
    (*pcVar1)(param_1,uVar2);
    if (aplStackX_18[0] != (int64_t *)0x0) {
      (**(code **)(*aplStackX_18[0] + 0x38))();
    }
  }
  astack_special_x_8[0] = 0;
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
        AdvancedSystemOptimizer(lVar4,&rendering_buffer_2208_ptr,astack_special_x_8);
        *(float *)((int64_t)param_1 + 0x284) = (float)(astack_special_x_8[0] >> 0x10 & 0xff) * 0.003921569;
        *(float *)(param_1 + 0x51) = (float)(astack_special_x_8[0] >> 8 & 0xff) * 0.003921569;
        *(float *)((int64_t)param_1 + 0x28c) = (float)(astack_special_x_8[0] & 0xff) * 0.003921569;
        *(float *)(param_1 + 0x52) = (float)(astack_special_x_8[0] >> 0x18) * 0.003921569;
        break;
      }
      lVar4 = (int64_t)&processed_var_8684_ptr - (int64_t)pcVar7;
      while (*pcVar7 == pcVar7[lVar4]) {
        pcVar7 = pcVar7 + 1;
        if (pcVar3 <= pcVar7) goto LAB_1802f6e87;
      }
    }
  }
  lVar4 = UtilitiesSystem_31b90(param_2,&processed_var_8832_ptr,&local_var_90);
  if (lVar4 != 0) {
    (**(code **)(*param_1 + 400))(param_1,&local_var_90);
  }
  lVar4 = UtilitiesSystem_31b90(param_2,&processed_var_8848_ptr,&local_var_90);
  if (lVar4 != 0) {
    *(int32_t *)(param_1 + 0xc) = local_var_90;
    *(int32_t *)((int64_t)param_1 + 100) = local_var_8c;
    *(int32_t *)(param_1 + 0xd) = local_var_88;
    *(int32_t *)((int64_t)param_1 + 0x6c) = local_var_84;
  }
  lVar4 = SystemManager_Controller(param_2,&processed_var_696_ptr,param_1 + 0x11);
  if (lVar4 != 0) {
    SystemManager_Controller(param_2,&processed_var_816_ptr,param_1 + 0x12);
    SystemManager_Controller(param_2,&processed_var_800_ptr,param_1 + 0x13);
    SystemManager_Controller(param_2,&processed_var_784_ptr,param_1 + 0x14);
    StringProcessor(param_2,&processed_var_768_ptr,param_1 + 0x15);
    StringProcessor(param_2,&processed_var_904_ptr,param_1 + 0x17);
    StringProcessor(param_2,&processed_var_888_ptr,param_1 + 0x19);
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
    UtilitiesSystem_31f30(param_2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  local_var_80 = (int32_t)param_1[0x36];
  local_var_7c = *(int32_t *)((int64_t)param_1 + 0x1b4);
  local_var_78 = (int32_t)param_1[0x37];
  local_var_74 = *(int32_t *)((int64_t)param_1 + 0x1bc);
  CoreEngine_1C1720(param_1 + 0x30,&local_var_108);
  RenderingSystem_LightSystem(param_1 + 0x30,&fStack_f8);
  StringProcessor(param_2,&processed_var_8872_ptr,&local_var_80);
  StringProcessor(param_2,&processed_var_8888_ptr,&local_var_108);
  StringProcessor(param_2,&processed_var_8408_ptr,&fStack_f8);
  local_var_b8 = CONCAT44(local_var_7c,local_var_80);
  local_var_b0 = CONCAT44(local_var_74,local_var_78);
  local_var_70 = 0x3f800000;
  local_var_68 = 0;
  fStack_60 = 0.0;
  fStack_5c = 1.0;
  fStack_58 = 0.0;
  local_var_54 = 0;
  local_var_50 = 0;
  local_var_48 = 0x3f800000;
  GenericFunction_180085c10(&local_var_70,local_var_100);
  GenericFunction_180085970(&local_var_70,local_var_108);
  GenericFunction_180085ac0(&local_var_70,local_var_104);
  local_var_dc = local_var_68._4_4_;
  local_var_cc = local_var_54;
  local_var_bc = local_var_48._4_4_;
  fStack_e8 = (float)local_var_70 * fStack_f8;
  fStack_e4 = local_var_70._4_4_ * fStack_f8;
  fStack_e0 = (float)local_var_68 * fStack_f8;
  fStack_d8 = fStack_60 * fStack_f4;
  fStack_d4 = fStack_5c * fStack_f4;
  fStack_d0 = fStack_58 * fStack_f4;
  fStack_c8 = (float)local_var_50 * fStack_f0;
  fStack_c4 = local_var_50._4_4_ * fStack_f0;
  fStack_c0 = (float)local_var_48 * fStack_f0;
  (**(code **)(*param_1 + 0x148))(param_1,&fStack_e8);
  plocal_var_148 = &system_data_buffer_ptr;
  if (lStack_140 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngine_MemoryPoolManager();
}
// 函数: void DataStructure_f75e0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void DataStructure_f75e0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
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
  int32_t local_var_58;
  int32_t local_var_54;
  int32_t local_var_50;
  int32_t local_var_4c;
  int8_t stack_array_48 [16];
  int8_t stack_array_38 [32];
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
    local_var_58 = *(int32_t *)(puVar6 + 6);
    local_var_54 = *(int32_t *)((int64_t)puVar6 + 0x34);
    local_var_50 = *(int32_t *)(puVar6 + 7);
    local_var_4c = *(int32_t *)((int64_t)puVar6 + 0x3c);
    puVar6 = puVar7;
    if (puVar5 != &ui_system_data_1008_ptr) {
      puVar6 = (uint64_t *)(**(code **)(puVar5 + 0x158))(param_1);
    }
    CoreEngine_1C1720(puVar6,stack_array_48);
    if ((void *)*param_1 != &ui_system_data_1008_ptr) {
      puVar7 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    }
    RenderingSystem_LightSystem(puVar7,stack_array_38);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8872_ptr,&local_var_58);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8888_ptr,stack_array_48);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8408_ptr,stack_array_38);
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
    UtilitiesSystem_30010(param_2,puVar2,&processed_var_8832_ptr);
  }
  if (((*(float *)(param_1 + 0xc) != 0.0) || (*(float *)((int64_t)param_1 + 100) != 0.0)) ||
     (*(float *)(param_1 + 0xd) != 0.0)) {
    UtilitiesSystem_30010(param_2,puVar2,&processed_var_8848_ptr);
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
    UtilitiesSystem_2f640(param_2,puVar2,&processed_var_8684_ptr,((uVar11 << 8 | uVar1) << 8 | uVar8) << 8 | uVar9);
  }
  if (((*(float *)(param_1 + 0x15) != 0.0) || (*(float *)((int64_t)param_1 + 0xac) != 0.0)) ||
     (*(float *)(param_1 + 0x16) != 0.0)) {
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_696_ptr,param_1 + 0x11);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_816_ptr,param_1 + 0x12);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_800_ptr,param_1 + 0x13);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_784_ptr,param_1 + 0x14);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_768_ptr,param_1 + 0x15);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_904_ptr,param_1 + 0x17);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_888_ptr,param_1 + 0x19);
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_8236_ptr,*(int32_t *)(param_1 + 0x1b));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_8188_ptr,*(int32_t *)((int64_t)param_1 + 0xdc));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_832_ptr,*(int32_t *)(param_1 + 0x1c));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_864_ptr,*(int32_t *)((int64_t)param_1 + 0xe4));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_992_ptr,*(int32_t *)(param_1 + 0x26));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    UtilitiesSystem_30240(param_2,puVar2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (param_5 != 0) {
      UtilitiesSystem_30c80(param_2,puVar2,&processed_var_9168_ptr);
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
// 函数: void DataStructure_f75f0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
void DataStructure_f75f0(uint64_t *param_1,int64_t param_2,int64_t param_3,uint64_t param_4,
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
  int local_buffer_b0;
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
    CoreEngine_1C1720(puVar6,&local_buffer_00000040);
    if ((void *)*param_1 != &ui_system_data_1008_ptr) {
      puVar7 = (uint64_t *)(**(code **)((void *)*param_1 + 0x158))(param_1);
    }
    RenderingSystem_LightSystem(puVar7,&local_buffer_00000050);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8872_ptr,&param_6);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8888_ptr,&local_buffer_00000040);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_8408_ptr,&local_buffer_00000050);
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
    UtilitiesSystem_30010(param_2,puVar2,&processed_var_8832_ptr);
  }
  if (((*(float *)(param_1 + 0xc) != 0.0) || (*(float *)((int64_t)param_1 + 100) != 0.0)) ||
     (*(float *)(param_1 + 0xd) != 0.0)) {
    UtilitiesSystem_30010(param_2,puVar2,&processed_var_8848_ptr);
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
    UtilitiesSystem_2f640(param_2,puVar2,&processed_var_8684_ptr,((uVar11 << 8 | uVar1) << 8 | uVar8) << 8 | uVar9);
  }
  if (((*(float *)(param_1 + 0x15) != 0.0) || (*(float *)((int64_t)param_1 + 0xac) != 0.0)) ||
     (*(float *)(param_1 + 0x16) != 0.0)) {
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_696_ptr,param_1 + 0x11);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_816_ptr,param_1 + 0x12);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_800_ptr,param_1 + 0x13);
    NetworkSystem_PacketProcessor(param_2,puVar2,&processed_var_784_ptr,param_1 + 0x14);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_768_ptr,param_1 + 0x15);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_904_ptr,param_1 + 0x17);
    UltraHighFreq_NetworkHandler1(param_2,puVar2,&processed_var_888_ptr,param_1 + 0x19);
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_8236_ptr,*(int32_t *)(param_1 + 0x1b));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_8188_ptr,*(int32_t *)((int64_t)param_1 + 0xdc));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_832_ptr,*(int32_t *)(param_1 + 0x1c));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_864_ptr,*(int32_t *)((int64_t)param_1 + 0xe4));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_992_ptr,*(int32_t *)(param_1 + 0x26));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_976_ptr,*(int32_t *)(param_1 + 0x25));
    MemoryDeallocationHandler0(param_2,puVar2,&processed_var_960_ptr,*(int32_t *)((int64_t)param_1 + 300));
    UtilitiesSystem_30240(param_2,puVar2,&processed_var_928_ptr,param_1 + 0x1d);
  }
  if ((puVar2[6] != 0) || (puVar2[8] != 0)) {
    if (local_buffer_b0 != 0) {
      UtilitiesSystem_30c80(param_2,puVar2,&processed_var_9168_ptr);
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
// 函数: void DataStructure_f7671(void)
void DataStructure_f7671(void)
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
  int32_t local_buffer_34;
  int32_t local_buffer_3c;
  int local_buffer_b0;
  if (in_RAX == &ui_system_data_1008_ptr) {
    puVar2 = &ui_system_data_1008_ptr;
    lVar3 = unaff_RBP;
  }
  else {
    lVar3 = (**(code **)(in_RAX + 0x158))();
    puVar2 = (void *)*unaff_RDI;
  }
  local_buffer_34 = *(int32_t *)(lVar3 + 0x34);
  local_buffer_3c = *(int32_t *)(lVar3 + 0x3c);
  lVar3 = unaff_RBP;
  if (puVar2 != &ui_system_data_1008_ptr) {
    lVar3 = (**(code **)(puVar2 + 0x158))();
  }
  CoreEngine_1C1720(lVar3,&local_buffer_00000040);
  if ((void *)*unaff_RDI != &ui_system_data_1008_ptr) {
    unaff_RBP = (**(code **)((void *)*unaff_RDI + 0x158))();
  }
  RenderingSystem_LightSystem(unaff_RBP,&local_buffer_00000050);
  UltraHighFreq_NetworkHandler1();
  UltraHighFreq_NetworkHandler1();
  UltraHighFreq_NetworkHandler1();
  if (unaff_RDI[0x2b] != 0) {
    SystemAllocationProcessor();
  }
  if (((*(float *)(unaff_RDI + 10) != 0.0) || (*(float *)((int64_t)unaff_RDI + 0x54) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xb) != 0.0)) {
    UtilitiesSystem_30010();
  }
  if (((*(float *)(unaff_RDI + 0xc) != 0.0) || (*(float *)((int64_t)unaff_RDI + 100) != 0.0)) ||
     (*(float *)(unaff_RDI + 0xd) != 0.0)) {
    UtilitiesSystem_30010();
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
    UtilitiesSystem_2f640(fVar8,*(float *)(unaff_RDI + 0x51) * 256.0,&processed_var_8684_ptr,
                  ((uVar7 << 8 | uVar1) << 8 | uVar4) << 8 | uVar5);
  }
  if (((*(float *)(unaff_RDI + 0x15) != 0.0) || (*(float *)((int64_t)unaff_RDI + 0xac) != 0.0)) ||
     (*(float *)(unaff_RDI + 0x16) != 0.0)) {
    NetworkSystem_PacketProcessor();
    NetworkSystem_PacketProcessor();
    NetworkSystem_PacketProcessor();
    NetworkSystem_PacketProcessor();
    UltraHighFreq_NetworkHandler1();
    UltraHighFreq_NetworkHandler1();
    UltraHighFreq_NetworkHandler1();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    MemoryDeallocationHandler0();
    UtilitiesSystem_30240();
  }
  if ((*(int64_t *)(unaff_RBX + 0x30) != unaff_R15) ||
     (*(int64_t *)(unaff_RBX + 0x40) != unaff_R15)) {
    if (local_buffer_b0 != 0) {
      UtilitiesSystem_30c80();
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