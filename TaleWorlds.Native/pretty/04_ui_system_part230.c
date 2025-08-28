#define SystemInitializer System_Initializer2  // 系统初始化器
#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 04_ui_system_part230.c - 4 个函数
// 函数: void SystemCore_9cda0(int64_t param_1)
void SystemCore_9cda0(int64_t param_1)
{
  int64_t lVar1;
  lVar1 = *(int64_t *)(param_1 + 8);
  if (*(int64_t *)(lVar1 + 0xb0) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0xb0),0,(int64_t)(*(int *)(lVar1 + 0xac) << 3) << 2);
  }
  if (*(int64_t *)(lVar1 + 0x108) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x108),0,(int64_t)(*(int *)(lVar1 + 0x104) << 3) << 2);
  }
  if (*(int64_t *)(lVar1 + 0x160) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x160),0,(int64_t)(*(int *)(lVar1 + 0x15c) << 3) << 2);
  }
  if (*(int64_t *)(lVar1 + 0x1b8) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x1b8),0,(int64_t)(*(int *)(lVar1 + 0x1b4) << 3) << 2);
  }
  if (*(int64_t *)(lVar1 + 0x210) != 0) {
// WARNING: Subroutine does not return
    memset(*(int64_t *)(lVar1 + 0x210),0,(int64_t)(*(int *)(lVar1 + 0x20c) << 3) << 2);
  }
  *(int32_t *)(lVar1 + 0xb8) = 0;
  return;
}
uint64_t SystemCore_9cfc0(int64_t param_1,int param_2)
{
  float *pfVar1;
  int iVar2;
  int64_t lVar3;
  code *pcVar4;
  uint64_t uVar5;
  code *pcVar6;
  int64_t *plVar7;
  int32_t *puVar8;
  int64_t lVar9;
  lVar9 = 0;
  puVar8 = (int32_t *)(*(int64_t *)(param_1 + 8) + 0xc);
  plVar7 = (int64_t *)(*(int64_t *)(param_1 + 8) + 0xb0);
  do {
    if (*(int *)((int64_t)plVar7 + -4) != param_2) {
      *(int *)((int64_t)plVar7 + -4) = param_2;
      iVar2 = param_2;
      if (*plVar7 != 0) {
        (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x10))(*plVar7,0,&processed_var_4528_ptr);
        iVar2 = *(int *)((int64_t)plVar7 + -4);
      }
      lVar3 = (*(code *)**(uint64_t **)(param_1 + 0x28))(iVar2 << 5,0,&processed_var_4528_ptr);
      *plVar7 = lVar3;
      if (lVar3 == 0) {
        return 0x26;
      }
    }
    lVar3 = plVar7[1];
    if ((int)lVar3 != puVar8[1]) {
      *(int32_t *)(plVar7 + 1) = puVar8[1];
      iVar2 = puVar8[-3];
      if ((iVar2 == 3) || (iVar2 == 6)) {
        iVar2 = RenderingSystem_ShaderCompiler(0);
        pcVar6 = SystemCore_9c2e0;
        pcVar4 = SystemCore_f9910;
LAB_18079d0af:
        if (iVar2 != 0) {
          pcVar6 = pcVar4;
        }
      }
      else {
        if ((iVar2 == 2) || (iVar2 == 5)) {
          iVar2 = RenderingSystem_ShaderCompiler(0);
          pcVar6 = SystemCore_9bc20;
          pcVar4 = SystemCore_f98c0;
          goto LAB_18079d0af;
        }
        iVar2 = RenderingSystem_ShaderCompiler(0);
        pcVar6 = SystemCore_9b740;
        if (iVar2 != 0) {
          pcVar6 = SystemCore_f9870;
        }
      }
      plVar7[-9] = (int64_t)pcVar6;
      uVar5 = (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x18))(param_1);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      pfVar1 = (float *)(plVar7 + -3);
      SystemCore_9af30(puVar8[-3],puVar8[-2],0,puVar8[-1],*puVar8,pfVar1);
      if ((int)lVar3 == 0) {
        *(float *)(plVar7 + -8) = *pfVar1;
        *(int32_t *)((int64_t)plVar7 + -0x3c) = *(int32_t *)((int64_t)plVar7 + -0x14);
        *(int *)(plVar7 + -7) = (int)plVar7[-2];
        *(int32_t *)((int64_t)plVar7 + -0x34) = *(int32_t *)((int64_t)plVar7 + -0xc);
        *(int *)(plVar7 + -6) = (int)plVar7[-1];
        *(uint64_t *)((int64_t)plVar7 + -0x2c) = 0;
        *(uint64_t *)((int64_t)plVar7 + -0x24) = 0;
        *(int32_t *)((int64_t)plVar7 + -0x1c) = 0;
      }
      else {
        uVar5 = (**(code **)(*(int64_t *)(param_1 + 0x28) + 0x20))();
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        *(float *)((int64_t)plVar7 + -0x2c) = (*pfVar1 - *(float *)(plVar7 + -8)) / 0.0;
        *(float *)(plVar7 + -5) =
             (*(float *)((int64_t)plVar7 + -0x14) - *(float *)((int64_t)plVar7 + -0x3c)) / 0.0;
        *(float *)((int64_t)plVar7 + -0x24) =
             (*(float *)(plVar7 + -2) - *(float *)(plVar7 + -7)) / 0.0;
        *(float *)(plVar7 + -4) =
             (*(float *)((int64_t)plVar7 + -0xc) - *(float *)((int64_t)plVar7 + -0x34)) / 0.0;
        *(float *)((int64_t)plVar7 + -0x1c) =
             (*(float *)(plVar7 + -1) - *(float *)(plVar7 + -6)) / 0.0;
      }
    }
    lVar9 = lVar9 + 1;
    puVar8 = puVar8 + 5;
    plVar7 = plVar7 + 0xb;
    if (4 < lVar9) {
      return 0;
    }
  } while( true );
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_9d1f0(void)
{
  int64_t lVar1;
  lVar1 = *(int64_t *)((int64_t)ThreadLocalStoragePointer + (uint64_t)__tls_index * 8);
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1734);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1734);
    }
  }
  ui_system_buffer_config = 0x180be3470;
  ui_system_buffer_config = CONCAT44(0xc,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_BASE,1);
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1738);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1738);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET1,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_173c);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_173c);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET2,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1740);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1740);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET3,ui_system_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1744);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      uRam0000000180be36bc = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1744);
    }
  }
  ui_system_buffer_config = 0x180be3470;
  ui_system_buffer_config = 0xc;
  ui_system_buffer_config = 0;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1748);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1748);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET4,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_174c);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_174c);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET5,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1750);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1750);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET6,ui_system_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1754);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      uRam0000000180be383c = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1754);
    }
  }
  ui_system_buffer_config = 0x180be3470;
  ui_system_buffer_config = 0xc;
  ui_system_buffer_config = 0;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1758);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1758);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET7,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_175c);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_175c);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET8,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1760);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1760);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET9,ui_system_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1764);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      uRam0000000180be39bc = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1764);
    }
  }
  ui_system_buffer_config = 0x180be3470;
  ui_system_buffer_config = 0xc;
  ui_system_buffer_config = 0;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1768);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1768);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET10,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_176c);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_176c);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET11,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1770);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1770);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET12,ui_system_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1774);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      uRam0000000180be3b3c = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1774);
    }
  }
  ui_system_buffer_config = 0x180be3470;
  ui_system_buffer_config = 0xc;
  ui_system_buffer_config = 0;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1778);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1778);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET13,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_177c);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_177c);
    }
  }
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET14,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  if (*(int *)(lVar1 + 0x48) < ui_system_config) {
    SystemInitializer(&system_ptr_1780);
    if (ui_system_config == -1) {
      ui_system_buffer_config = ui_system_buffer_config;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      ui_system_buffer_config = 0;
      SystemCore_StateController(&system_ptr_1780);
    }
  }
  ui_system_buffer_config = 0x180be3c80;
  ui_system_buffer_config = SystemCore_9b400;
  ui_system_buffer_config = SystemCore_9cd20;
  ui_system_buffer_config = SystemCore_9cda0;
  ui_system_buffer_config = SystemCore_9b600;
  ui_system_buffer_config = &memory_allocator_3648_ptr;
  ui_system_buffer_config = &memory_allocator_3904_ptr;
  ui_system_buffer_config = SystemCore_9b4c0;
  ui_system_buffer_config = SystemCore_9b5a0;
  ui_system_buffer_config = ui_system_buffer_config & 0xffffffff00000000;
  ui_system_buffer_config = CONCAT44(ui_system_buffer_config,ui_system_buffer_config);
  ui_system_buffer_config = CONCAT44(UI_SYSTEM_CONFIG_OFFSET15,ui_system_config);
  ui_system_buffer_config = 0x14;
  return 0x180be3d20;
}
uint64_t SystemCore_9df60(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int iVar4;
  int32_t *puVar5;
  int64_t lVar6;
  int32_t uVar7;
  lVar1 = *param_1;
  iVar4 = 0;
  puVar5 = (int32_t *)(lVar1 + 0x218);
  do {
    uVar7 = cosf((float)iVar4 * 0.0001917476);
    iVar4 = iVar4 + 1;
    *puVar5 = uVar7;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x2000);
  lVar2 = *(int64_t *)(lVar1 + 0xe8);
  iVar4 = 0;
  *(int32_t *)(lVar1 + 0xc220) = 4;
  *(uint64_t *)(lVar1 + 0xc228) = 0;
  *(int32_t *)(lVar1 + 0xc218) = 0x3f800000;
  if (0 < *(int *)(lVar2 + 0x60)) {
    lVar6 = 0;
    do {
      uVar3 = Function_9c6a16e1(lVar1,iVar4,
                                  *(int32_t *)
                                   (*(int64_t *)(*(int64_t *)(lVar2 + 0x68) + lVar6) + 0x38));
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      lVar2 = *(int64_t *)(lVar1 + 0xe8);
      iVar4 = iVar4 + 1;
      lVar6 = lVar6 + 8;
    } while (iVar4 < *(int *)(lVar2 + 0x60));
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t SystemCore_9e030(int64_t *param_1)
{
  if (*(int64_t *)(*param_1 + 0xc228) != 0) {
// WARNING: Subroutine does not return
    SystemInitializer(*(uint64_t *)(SYSTEM_MAIN_CONTROL_BLOCK + 0x1a0),*(int64_t *)(*param_1 + 0xc228),
                  &processed_var_5760_ptr,0x322,1);
  }
  return 0;
}
uint64_t SystemCore_9e080(int64_t *param_1)
{
  int64_t lVar1;
  lVar1 = *param_1;
  if (*(int64_t *)(lVar1 + 0xc228) == 0) {
    return 0;
  }
  if (0 < *(int *)(lVar1 + 0xc234)) {
// WARNING: Subroutine does not return
    memset(*(uint64_t *)(lVar1 + 0xc228),0,0x14020);
  }
  return 0;
}
uint64_t SystemCore_9e097(void)
{
  int64_t unaff_RBX;
  if (0 < *(int *)(unaff_RBX + 0xc234)) {
// WARNING: Subroutine does not return
    memset(*(uint64_t *)(unaff_RBX + 0xc228),0,0x14020);
  }
  return 0;
}
uint64_t SystemCore_9e1a1(void)
{
  return 0;
}
uint64_t SystemCore_9e1b3(void)
{
  return 0;
}
uint64_t
SystemCore_9e1c0(int64_t *param_1,int64_t param_2,uint64_t param_3,int param_4,int param_5,
             int *param_6)
{
  int64_t lVar1;
  uint64_t uVar2;
  uint uVar3;
  uint64_t uVar4;
  uint64_t uVar5;
  if (param_2 == 0) {
    return 0;
  }
  lVar1 = *param_1;
  if ((param_5 <= *(int *)(lVar1 + 0xc234)) && (*(int64_t *)(lVar1 + 0xc228) != 0)) {
    uVar2 = 0;
    uVar4 = uVar2;
    uVar5 = uVar2;
    if (0 < param_5) {
      do {
        *(int32_t *)(*(int64_t *)(lVar1 + 0xc228) + 0x14030 + uVar2) =
             *(int32_t *)(lVar1 + 0xc21c);
        *(int32_t *)(*(int64_t *)(lVar1 + 0xc228) + 0x14034 + uVar2) =
             *(int32_t *)(lVar1 + 0xc238);
        SystemCore_a0c70(*(int64_t *)(lVar1 + 0xc228) + uVar5,*(int32_t *)(lVar1 + 0xc218),param_4,
                      *(int32_t *)(lVar1 + 0xc220),(float)*(int *)(lVar1 + 0xc230),param_2,
                      param_3,(int)uVar4,param_5);
        uVar3 = (int)uVar4 + 1;
        uVar2 = uVar2 + 0x14048;
        uVar4 = (uint64_t)uVar3;
        uVar5 = uVar5 + 0x14048;
      } while ((int)uVar3 < param_5);
    }
    return 0;
  }
// WARNING: Subroutine does not return
  memcpy(param_3,param_2,(uint64_t)(uint)(*param_6 * param_4) << 2);
}
uint64_t SystemCore_9e1df(int64_t *param_1)
{
  int64_t lVar1;
  int64_t in_RAX;
  uint64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t uVar2;
  uint64_t unaff_RSI;
  uint uVar3;
  uint64_t unaff_RDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  uint64_t uVar5;
  int local_buffer_a0;
  uint64_t uVar4;
  *(uint64_t *)(in_RAX + 8) = unaff_RBX;
  lVar1 = *param_1;
  *(uint64_t *)(in_RAX + 0x18) = unaff_RSI;
  if ((local_buffer_a0 <= *(int *)(lVar1 + 0xc234)) && (*(int64_t *)(lVar1 + 0xc228) != 0)) {
    *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
    uVar2 = 0;
    if (0 < local_buffer_a0) {
      *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
      *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
      uVar4 = uVar2;
      uVar5 = uVar2;
      do {
        *(int32_t *)(*(int64_t *)(lVar1 + 0xc228) + 0x14030 + uVar2) =
             *(int32_t *)(lVar1 + 0xc21c);
        *(int32_t *)(*(int64_t *)(lVar1 + 0xc228) + 0x14034 + uVar2) =
             *(int32_t *)(lVar1 + 0xc238);
        SystemCore_a0c70(*(int64_t *)(lVar1 + 0xc228) + uVar5,*(int32_t *)(lVar1 + 0xc218),
                      unaff_R12D,*(int32_t *)(lVar1 + 0xc220),(float)*(int *)(lVar1 + 0xc230));
        uVar3 = (int)uVar4 + 1;
        uVar4 = (uint64_t)uVar3;
        uVar2 = uVar2 + 0x14048;
        uVar5 = uVar5 + 0x14048;
      } while ((int)uVar3 < local_buffer_a0);
    }
    return 0;
  }
// WARNING: Subroutine does not return
  memcpy();
}
uint64_t SystemCore_9e20b(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t uVar1;
  int unaff_ESI;
  uint uVar2;
  uint64_t unaff_RDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  uint64_t uVar4;
  int iStack0000000000000038;
  uint64_t uVar3;
  *(uint64_t *)(in_RAX + -0x20) = unaff_RDI;
  uVar1 = 0;
  if (0 < unaff_ESI) {
    *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
    *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
    uVar3 = uVar1;
    uVar4 = uVar1;
    do {
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0xc228) + 0x14030 + uVar1) =
           *(int32_t *)(unaff_RBX + 0xc21c);
      *(int32_t *)(*(int64_t *)(unaff_RBX + 0xc228) + 0x14034 + uVar1) =
           *(int32_t *)(unaff_RBX + 0xc238);
      iStack0000000000000038 = (int)uVar3;
      SystemCore_a0c70(*(int64_t *)(unaff_RBX + 0xc228) + uVar4,*(int32_t *)(unaff_RBX + 0xc218),
                    unaff_R12D,*(int32_t *)(unaff_RBX + 0xc220),
                    (float)*(int *)(unaff_RBX + 0xc230));
      uVar2 = (int)uVar3 + 1;
      uVar3 = (uint64_t)uVar2;
      uVar1 = uVar1 + 0x14048;
      uVar4 = uVar4 + 0x14048;
    } while ((int)uVar2 < unaff_ESI);
  }
  return 0;
}
uint64_t SystemCore_9e219(void)
{
  int64_t in_RAX;
  int64_t unaff_RBX;
  uint64_t unaff_RBP;
  uint64_t uVar1;
  int unaff_ESI;
  uint unaff_EDI;
  int32_t unaff_R12D;
  uint64_t unaff_R15;
  uint64_t uVar2;
  uint local_buffer_38;
  *(uint64_t *)(in_RAX + 0x10) = unaff_RBP;
  uVar1 = (uint64_t)unaff_EDI;
  *(uint64_t *)(in_RAX + -0x28) = unaff_R15;
  uVar2 = (uint64_t)unaff_EDI;
  do {
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0xc228) + 0x14030 + uVar1) =
         *(int32_t *)(unaff_RBX + 0xc21c);
    *(int32_t *)(*(int64_t *)(unaff_RBX + 0xc228) + 0x14034 + uVar1) =
         *(int32_t *)(unaff_RBX + 0xc238);
    local_buffer_38 = unaff_EDI;
    SystemCore_a0c70(*(int64_t *)(unaff_RBX + 0xc228) + uVar2,*(int32_t *)(unaff_RBX + 0xc218),
                  unaff_R12D,*(int32_t *)(unaff_RBX + 0xc220),(float)*(int *)(unaff_RBX + 0xc230)
                 );
    unaff_EDI = unaff_EDI + 1;
    uVar1 = uVar1 + 0x14048;
    uVar2 = uVar2 + 0x14048;
  } while ((int)unaff_EDI < unaff_ESI);
  return 0;
}
// 函数: void SystemCore_9e2bf(void)
void SystemCore_9e2bf(void)
{
  return;
}
// 函数: void SystemCore_9e2c4(void)
void SystemCore_9e2c4(void)
{
  return;
}
uint64_t SystemCore_9e2df(void)
{
  return 0;
}
// 函数: void SystemCore_9e2e3(void)
void SystemCore_9e2e3(void)
{
// WARNING: Subroutine does not return
  memcpy();
}
uint64_t SystemCore_9e302(void)
{
  return 0;
}
uint64_t SystemCore_9e320(int64_t *param_1,int param_2,float *param_3,int64_t param_4)
{
  int64_t lVar1;
  lVar1 = *param_1;
  if (param_2 == 0) {
    if (param_3 != (float *)0x0) {
      *param_3 = *(float *)(lVar1 + 0xc218);
    }
    if (param_4 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&rendering_buffer_2048_ptr,(double)*(float *)(lVar1 + 0xc218));
    }
  }
  else if (param_2 == 1) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc21c);
    }
    if (param_4 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&processed_var_4576_ptr,*(int32_t *)(lVar1 + 0xc21c));
    }
  }
  else if (param_2 == 2) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc220);
    }
    if (param_4 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&processed_var_4576_ptr,*(int32_t *)(lVar1 + 0xc220));
    }
  }
  else if (param_2 == 3) {
    if (param_3 != (float *)0x0) {
      *param_3 = (float)*(int *)(lVar1 + 0xc224);
    }
    if (param_4 != 0) {
// WARNING: Subroutine does not return
      SystemDataValidator(param_4,0x20,&processed_var_4576_ptr,*(int32_t *)(lVar1 + 0xc224));
    }
  }
  return 0;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address