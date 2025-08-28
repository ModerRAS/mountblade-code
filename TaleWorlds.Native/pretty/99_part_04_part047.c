#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part047.c - 7 个函数

// 函数: void FUN_1802b4390(int64_t param_1)
void FUN_1802b4390(int64_t param_1)

{
  int64_t *plVar1;
  
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xf9;
  *(int16_t *)(param_1 + 0x80) = 0xffff;
  *(int32_t *)(param_1 + 0x68) = 0;
  *(int32_t *)(param_1 + 0x7c) = 0;
  *(int32_t *)(param_1 + 0x84) = 0;
  *(uint64_t *)(param_1 + 0xf70) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0xf78) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0xf80) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0xf88) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x88) = 0x3f800000;
  *(int32_t *)(param_1 + 0x90) = 0x3f800000;
  *(uint64_t *)(param_1 + 0xf90) = 0;
  *(uint64_t *)(param_1 + 0xf98) = 0;
  *(uint64_t *)(param_1 + 4000) = 0;
  *(uint64_t *)(param_1 + 0xfa8) = 0;
  *(uint64_t *)(param_1 + 0xfb0) = 0;
  *(uint64_t *)(param_1 + 0xfb8) = 0x7f7fffff3f800000;
  *(int32_t *)(param_1 + 0xfc0) = 0;
  *(int32_t *)(param_1 + 0x70) = 0;
  *(int32_t *)(param_1 + 0xf8) = 0;
  *(uint64_t *)(param_1 + 0x108) = 0;
  *(int32_t *)(param_1 + 0xfc4) = 1;
  *(int32_t *)(param_1 + 0xfc8) = 1;
  *(uint64_t *)(param_1 + 0x9c) = 0;
  *(uint64_t *)(param_1 + 0xa4) = 0;
  *(uint64_t *)(param_1 + 0xac) = 0;
  *(uint64_t *)(param_1 + 200) = 0;
  *(int32_t *)(param_1 + 0xd8) = 0x3f800000;
  *(int32_t *)(param_1 + 0xdc) = 0x3f800000;
  *(int32_t *)(param_1 + 0xe0) = 0x3f800000;
  *(int32_t *)(param_1 + 0xe4) = 0x3f800000;
  *(uint64_t *)(param_1 + 0xe8) = 0;
  *(uint64_t *)(param_1 + 0xf0) = 0;
  *(uint64_t *)(param_1 + 0x1050) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x1058) = 0;
  *(int32_t *)(param_1 + 0xb4) = 0x3f800000;
  *(int32_t *)(param_1 + 0xb8) = 0x3f800000;
  *(int32_t *)(param_1 + 0xd4) = 0;
  *(uint64_t *)(param_1 + 0xbc) = 0x3f800000;
  *(uint64_t *)(param_1 + 0xfcc) = 1;
  *(int32_t *)(param_1 + 0x98) = 0;
  *(int32_t *)(param_1 + 0xc4) = 0;
  plVar1 = *(int64_t **)(param_1 + 0x18);
  *(uint64_t *)(param_1 + 0x18) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(uint64_t *)(param_1 + 0xbe8) = 1;
  *(int32_t *)(param_1 + 0x6c) = 0;
  *(uint64_t *)(param_1 + 0x1040) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x1048) = 0x3f8000003f800000;
  *(uint64_t *)(param_1 + 0x1060) = 0xffffffffffffffff;
  *(uint64_t *)(param_1 + 0x1070) = 0x3f800000;
  *(int32_t *)(param_1 + 0x94) = 0;
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | 1;
  return;
}



uint64_t * FUN_1802b4570(uint64_t *param_1)

{
  *param_1 = &system_handler1_ptr;
  *param_1 = &system_handler2_ptr;
  *(int32_t *)(param_1 + 1) = 0;
  *param_1 = &processed_var_6432_ptr;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)((int64_t)param_1 + 0x34) = 0;
  *(int32_t *)(param_1 + 7) = 0;
  *(int32_t *)((int64_t)param_1 + 0x3c) = 0;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[9] = &system_state_ptr;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[9] = &system_data_buffer_ptr;
  param_1[0xc] = 0;
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x74) = 0;
  param_1[0x20] = 0;
  FUN_1802b6b00(param_1 + 0x22);
  param_1[0x39] = 0;
  FUN_1802b6c00(param_1 + 0x3a);
  param_1[0x39] = 0;
  param_1[0x50] = 0;
  FUN_1802b6c00(param_1 + 0x51);
  *(int32_t *)((int64_t)param_1 + 0x284) = 0x3f800000;
  *(int32_t *)(param_1 + 0x50) = 0;
  param_1[0x67] = 0;
  FUN_1802b6c00(param_1 + 0x68);
  *(int32_t *)((int64_t)param_1 + 0x33c) = 0x3f800000;
  *(int32_t *)(param_1 + 0x67) = 0;
  param_1[0x7e] = 0;
  FUN_1802b6c00(param_1 + 0x7f);
  *(int32_t *)((int64_t)param_1 + 0x3f4) = 0x3f800000;
  *(int32_t *)(param_1 + 0x7e) = 0;
  param_1[0x95] = 0;
  FUN_1802b6c00(param_1 + 0x96);
  *(int32_t *)((int64_t)param_1 + 0x4ac) = 0x3f800000;
  *(int32_t *)(param_1 + 0x95) = 0;
  *(int32_t *)(param_1 + 0xac) = 0;
  *(int32_t *)((int64_t)param_1 + 0x564) = 0x3f800000;
  FUN_1802b6c00(param_1 + 0xad);
  FUN_1802b6c00(param_1 + 0xc3);
  param_1[0xd9] = 0;
  FUN_1802b6c00(param_1 + 0xda);
  *(int32_t *)((int64_t)param_1 + 0x6cc) = 0x40800000;
  *(int32_t *)(param_1 + 0xd9) = 0;
  param_1[0xf0] = 0;
  FUN_1802b6c00(param_1 + 0xf1);
  param_1[0xf0] = 0;
  param_1[0x107] = 0;
  FUN_1802b6c00(param_1 + 0x108);
  param_1[0x107] = 0;
  param_1[0x11e] = 0;
  FUN_1802b6c00(param_1 + 0x11f);
  param_1[0x11e] = 0;
  param_1[0x135] = 0;
  FUN_1802b6c00(param_1 + 0x136);
  param_1[0x135] = 0;
  param_1[0x14c] = 0;
  FUN_1802b6c00(param_1 + 0x14d);
  *(int32_t *)((int64_t)param_1 + 0xa64) = 0x3f800000;
  *(int32_t *)(param_1 + 0x14c) = 0;
  FUN_1802b6b00(param_1 + 0x163);
  param_1[0x17a] = 0;
  param_1[0x17b] = 0;
  param_1[0x17c] = 0;
  FUN_1802705c0(param_1 + 0x17e);
  param_1[0x1ea] = 0;
  param_1[0x1eb] = 0;
  param_1[0x1ec] = 0;
  *(int32_t *)(param_1 + 0x1ed) = 3;
  param_1[0x203] = 0;
  param_1[0x204] = 0;
  param_1[0x205] = 0;
  *(int32_t *)(param_1 + 0x206) = 3;
  param_1[0x207] = 0;
  param_1[0x208] = 0;
  param_1[0x209] = 0;
  param_1[0x20a] = 0;
  param_1[0x20b] = 0;
  FUN_1802b4390(param_1);
  *(int32_t *)(param_1 + 6) = 0;
  param_1[5] = 0;
  *(int8_t *)(param_1 + 4) = 0;
  return param_1;
}



uint64_t FUN_1802b4850(uint64_t param_1,uint64_t param_2)

{
  FUN_1802b4890();
  if ((param_2 & 1) != 0) {
    free(param_1,0x1078);
  }
  return param_1;
}






// 函数: void FUN_1802b4890(uint64_t *param_1)
void FUN_1802b4890(uint64_t *param_1)

{
  if ((int64_t *)param_1[0x207] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x207] + 0x38))();
  }
  FUN_180057830();
  FUN_180057830();
  if (param_1[0x1e6] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (param_1[0x1e2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x164] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x165);
  if (param_1[0x165] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x14d] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x14e);
  if (param_1[0x14e] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x136] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x137);
  if (param_1[0x137] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x11f] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x120);
  if (param_1[0x120] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x108] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x109);
  if (param_1[0x109] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xf1] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0xf2);
  if (param_1[0xf2] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0xda] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0xdb);
  if (param_1[0xdb] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  FUN_18026c1c0(param_1 + 0xac);
  param_1[0x96] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x97);
  if (param_1[0x97] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x7f] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x80);
  if (param_1[0x80] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x68] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x69);
  if (param_1[0x69] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x51] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x52);
  if (param_1[0x52] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x3a] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x3b);
  if (param_1[0x3b] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[0x23] = &processed_var_7440_ptr;
  FUN_1802708b0(param_1 + 0x24);
  if (param_1[0x24] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if ((int64_t *)param_1[0x20] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x20] + 0x38))();
  }
  param_1[9] = &system_data_buffer_ptr;
  if (param_1[10] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[10] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[9] = &system_state_ptr;
  if ((int64_t *)param_1[3] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[3] + 0x38))();
  }
  if ((int64_t *)param_1[2] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[2] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}






// 函数: void FUN_1802b4c70(int64_t param_1,int64_t *param_2)
void FUN_1802b4c70(int64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  int64_t *plVar2;
  
  plVar1 = (int64_t *)*param_2;
  if (*(int64_t **)(param_1 + 0x10) != plVar1) {
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = *(int64_t **)(param_1 + 0x10);
    *(int64_t **)(param_1 + 0x10) = plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    FUN_1802b4e70(param_1);
  }
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b4cf0(int64_t param_1,int64_t param_2)
void FUN_1802b4cf0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  uint64_t uVar2;
  int64_t *plVar3;
  uint64_t uVar4;
  int64_t lVar5;
  int64_t lVar6;
  byte bVar7;
  
  if (param_2 == 0) {
    plVar3 = *(int64_t **)(param_1 + 0x18);
    *(uint64_t *)(param_1 + 0x18) = 0;
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x38))();
    }
  }
  else {
    uVar2 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3d0,8,0x16,0,0xfffffffffffffffe);
    plVar3 = (int64_t *)FUN_180275090(uVar2);
    if (plVar3 != (int64_t *)0x0) {
      (**(code **)(*plVar3 + 0x28))(plVar3);
    }
    FUN_180275a60(param_2,plVar3,1);
    plVar1 = *(int64_t **)(param_1 + 0x18);
    *(int64_t **)(param_1 + 0x18) = plVar3;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  bVar7 = 1;
  if (((*(int64_t *)(param_1 + 0x18) == 0) && (lVar5 = *(int64_t *)(param_1 + 0x10), lVar5 != 0))
     && (*(int64_t *)(lVar5 + 0x1e0) == *(int64_t *)(system_system_data_config + 0x160))) {
    lVar6 = system_system_data_config;
    uVar4 = func_0x00018026dab0();
    uVar4 = uVar4 | *(uint64_t *)(lVar5 + 0x140);
    if ((*(uint64_t *)(lVar6 + 0xf8) & uVar4) == 0) {
      if ((*(uint64_t *)(lVar6 + 0x100) & uVar4) == 0) {
        bVar7 = 0;
      }
      *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
      *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | bVar7;
      return;
    }
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  *(int8_t *)(param_1 + 0x21) = *(int8_t *)(param_1 + 0x21);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b4dd0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t *param_4)
void FUN_1802b4dd0(int64_t param_1,int64_t param_2,int64_t param_3,uint64_t *param_4)

{
  uint uVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  
  lVar2 = system_system_data_config;
  if (*(int64_t *)(param_2 + 0x1e0) == *(int64_t *)(system_system_data_config + 0x160)) {
    uVar4 = *(uint64_t *)(param_2 + 0x140);
    if ((param_3 != 0) && (*(int *)(param_3 + 0x9a3c) == 0)) {
      uVar4 = uVar4 & ~*(uint64_t *)(param_2 + 0x390);
    }
    *param_4 = uVar4;
    uVar3 = 0;
    uVar4 = *(uint64_t *)(lVar2 + 0xd8) | uVar4;
    *param_4 = uVar4;
    uVar1 = *(uint *)(param_1 + 0x68);
    if ((uVar1 >> 0x1a & 1) != 0) {
      uVar3 = *(uint64_t *)(lVar2 + 0x110);
    }
    if ((uVar1 >> 0x17 & 1) != 0) {
      uVar3 = uVar3 | *(uint64_t *)(lVar2 + 0xf0);
    }
    if ((uVar1 >> 0x16 & 1) != 0) {
      uVar3 = uVar3 | *(uint64_t *)(lVar2 + 0xe8);
    }
    uVar4 = uVar4 | uVar3;
    *param_4 = uVar4;
    if ((*(byte *)(param_1 + 0x21) & 1) != 0) {
      *param_4 = *(uint64_t *)(lVar2 + 0xe0) | uVar4;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b4e70(int64_t param_1)
void FUN_1802b4e70(int64_t param_1)

{
  uint64_t uVar1;
  int64_t lVar2;
  int64_t lVar3;
  byte bVar4;
  
  bVar4 = 1;
  if (((*(int64_t *)(param_1 + 0x18) == 0) && (lVar2 = *(int64_t *)(param_1 + 0x10), lVar2 != 0))
     && (*(int64_t *)(lVar2 + 0x1e0) == *(int64_t *)(system_system_data_config + 0x160))) {
    lVar3 = system_system_data_config;
    uVar1 = func_0x00018026dab0();
    uVar1 = uVar1 | *(uint64_t *)(lVar2 + 0x140);
    if ((*(uint64_t *)(lVar3 + 0xf8) & uVar1) == 0) {
      if ((*(uint64_t *)(lVar3 + 0x100) & uVar1) == 0) {
        bVar4 = 0;
      }
      *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
      *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) | bVar4;
      return;
    }
  }
  *(byte *)(param_1 + 0x21) = *(byte *)(param_1 + 0x21) & 0xfe;
  *(int8_t *)(param_1 + 0x21) = *(int8_t *)(param_1 + 0x21);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1802b4ef0(int64_t param_1,int64_t param_2)
void FUN_1802b4ef0(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t lVar2;
  char cVar3;
  char *pcVar4;
  int64_t *plVar5;
  uint64_t uVar6;
  int iVar7;
  int64_t *plVar8;
  int64_t lVar9;
  void *puVar10;
  uint64_t *puVar11;
  uint64_t *puVar12;
  char *pcVar13;
  void *puVar14;
  char *pcVar15;
  int8_t auStack_78 [32];
  int aiStack_58 [2];
  int8_t auStack_50 [16];
  int32_t uStack_40;
  int32_t uStack_3c;
  int32_t uStack_38;
  int32_t uStack_34;
  uint64_t uStack_30;
  
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_78;
  pcVar15 = "sound_code";
  do {
    pcVar13 = pcVar15;
    pcVar15 = pcVar13 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = *(uint64_t **)(param_2 + 0x40); puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[6]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar15 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar11[2];
    }
    if (pcVar4 == pcVar13 + -0x180a18087) {
      pcVar4 = pcVar4 + (int64_t)pcVar15;
      if (pcVar4 <= pcVar15) {
LAB_1802b4f77:
        lVar9 = 0x180d48d24;
        if (puVar11[1] != 0) {
          lVar9 = puVar11[1];
        }
        (**(code **)(*(int64_t *)(param_1 + 0xa8) + 0x10))((int64_t *)(param_1 + 0xa8),lVar9);
        break;
      }
      lVar9 = (int64_t)&processed_var_5144_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar4 <= pcVar15) goto LAB_1802b4f77;
      }
    }
  }
  pcVar15 = "emitter_overrides";
  do {
    pcVar13 = pcVar15;
    pcVar15 = pcVar13 + 1;
  } while (*pcVar15 != '\0');
  for (puVar11 = *(uint64_t **)(param_2 + 0x30); puVar11 != (uint64_t *)0x0;
      puVar11 = (uint64_t *)puVar11[0xb]) {
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar15 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar11[2];
    }
    if (pcVar4 == pcVar13 + -0x180a18097) {
      pcVar4 = pcVar15 + (int64_t)pcVar4;
      if (pcVar4 <= pcVar15) {
LAB_1802b5007:
        pcVar15 = "emitter";
        do {
          pcVar13 = pcVar15;
          pcVar15 = pcVar13 + 1;
        } while (*pcVar15 != '\0');
        for (puVar11 = (uint64_t *)puVar11[6]; puVar11 != (uint64_t *)0x0;
            puVar11 = (uint64_t *)puVar11[0xb]) {
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar15 = (char *)0x180d48d24;
          }
          else {
            pcVar4 = (char *)puVar11[2];
          }
          if (pcVar4 == pcVar13 + -0x180a18047) {
            pcVar4 = pcVar4 + (int64_t)pcVar15;
            if (pcVar4 <= pcVar15) {
LAB_1802b50e0:
              pcVar15 = "guid";
              do {
                pcVar13 = pcVar15;
                pcVar15 = pcVar13 + 1;
              } while (*pcVar15 != '\0');
              for (puVar12 = (uint64_t *)puVar11[8]; puVar12 != (uint64_t *)0x0;
                  puVar12 = (uint64_t *)puVar12[6]) {
                pcVar15 = (char *)*puVar12;
                if (pcVar15 == (char *)0x0) {
                  pcVar4 = (char *)0x0;
                  pcVar15 = (char *)0x180d48d24;
                }
                else {
                  pcVar4 = (char *)puVar12[2];
                }
                if (pcVar4 == pcVar13 + -0x180a04c43) {
                  pcVar4 = pcVar4 + (int64_t)pcVar15;
                  if (pcVar4 <= pcVar15) {
LAB_1802b5141:
                    lVar9 = 0x180d48d24;
                    if (puVar12[1] != 0) {
                      lVar9 = puVar12[1];
                    }
                    goto LAB_1802b515c;
                  }
                  lVar9 = (int64_t)&processed_var_6228_ptr - (int64_t)pcVar15;
                  while (*pcVar15 == pcVar15[lVar9]) {
                    pcVar15 = pcVar15 + 1;
                    if (pcVar4 <= pcVar15) goto LAB_1802b5141;
                  }
                }
              }
              lVar9 = 0;
LAB_1802b515c:
              plVar5 = (int64_t *)FUN_1802c0460(auStack_50,lVar9);
              plVar1 = *(int64_t **)(param_1 + 200);
              uStack_40 = (int32_t)*plVar5;
              uStack_3c = *(int32_t *)((int64_t)plVar5 + 4);
              uStack_38 = (int32_t)plVar5[1];
              uStack_34 = *(int32_t *)((int64_t)plVar5 + 0xc);
              lVar9 = 0;
              iVar7 = (int)(*(int64_t *)(param_1 + 0xd0) - (int64_t)plVar1 >> 3);
              if (0 < iVar7) {
                plVar8 = plVar1;
                do {
                  if ((*(int64_t *)*plVar8 == *plVar5) && (((int64_t *)*plVar8)[1] == plVar5[1]))
                  {
                    if (plVar1[lVar9] != 0) {
                      FUN_180264330();
                    }
                    break;
                  }
                  lVar9 = lVar9 + 1;
                  plVar8 = plVar8 + 1;
                } while (lVar9 < iVar7);
              }
              pcVar15 = "emitter";
              do {
                pcVar13 = pcVar15;
                pcVar15 = pcVar13 + 1;
              } while (*pcVar15 != '\0');
              puVar11 = (uint64_t *)puVar11[0xb];
              if (puVar11 != (uint64_t *)0x0) {
                do {
                  pcVar15 = (char *)*puVar11;
                  if (pcVar15 == (char *)0x0) {
                    pcVar4 = (char *)0x0;
                    pcVar15 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar4 = (char *)puVar11[2];
                  }
                  if (pcVar4 == pcVar13 + -0x180a18047) {
                    pcVar4 = pcVar4 + (int64_t)pcVar15;
                    if (pcVar4 <= pcVar15) goto LAB_1802b50e0;
                    lVar9 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar9]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802b50e0;
                    }
                  }
                  puVar11 = (uint64_t *)puVar11[0xb];
                  if (puVar11 == (uint64_t *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar9 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar4 <= pcVar15) goto LAB_1802b50e0;
            }
          }
        }
        goto FUN_1802b54b3;
      }
      lVar9 = (int64_t)&processed_var_5160_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar4 <= pcVar15) goto LAB_1802b5007;
      }
    }
  }
  cVar3 = FUN_1802b61b0(*(uint64_t *)(param_1 + 0x68),param_2);
  if (cVar3 == '\0') {
    puVar10 = *(void **)(*(int64_t *)(param_1 + 0x68) + 0x50);
    puVar14 = &system_buffer_ptr;
    if (puVar10 != (void *)0x0) {
      puVar14 = puVar10;
    }
    puVar10 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x50) != (void *)0x0) {
      puVar10 = *(void **)(param_1 + 0x50);
    }
                    // WARNING: Subroutine does not return
    FUN_180062300(system_message_context,&processed_var_5104_ptr,puVar10,puVar14);
  }
  pcVar15 = "emitters";
  do {
    pcVar13 = pcVar15;
    pcVar15 = pcVar13 + 1;
  } while (*pcVar15 != '\0');
  puVar11 = *(uint64_t **)(param_2 + 0x30);
  do {
    if (puVar11 == (uint64_t *)0x0) goto FUN_1802b54b3;
    pcVar15 = (char *)*puVar11;
    if (pcVar15 == (char *)0x0) {
      pcVar4 = (char *)0x0;
      pcVar15 = (char *)0x180d48d24;
    }
    else {
      pcVar4 = (char *)puVar11[2];
    }
    if (pcVar4 == pcVar13 + -0x180a1804f) {
      pcVar4 = pcVar15 + (int64_t)pcVar4;
      if (pcVar4 <= pcVar15) {
LAB_1802b5270:
        pcVar15 = "emitter";
        do {
          pcVar13 = pcVar15;
          pcVar15 = pcVar13 + 1;
        } while (*pcVar15 != '\0');
        for (puVar11 = (uint64_t *)puVar11[6]; puVar11 != (uint64_t *)0x0;
            puVar11 = (uint64_t *)puVar11[0xb]) {
          pcVar15 = (char *)*puVar11;
          if (pcVar15 == (char *)0x0) {
            pcVar4 = (char *)0x0;
            pcVar15 = (char *)0x180d48d24;
          }
          else {
            pcVar4 = (char *)puVar11[2];
          }
          if (pcVar4 == pcVar13 + -0x180a18047) {
            pcVar4 = pcVar4 + (int64_t)pcVar15;
            if (pcVar4 <= pcVar15) {
LAB_1802b5304:
              pcVar15 = "_index_";
              do {
                pcVar13 = pcVar15;
                pcVar15 = pcVar13 + 1;
              } while (*pcVar15 != '\0');
              puVar12 = (uint64_t *)puVar11[8];
              if (puVar12 != (uint64_t *)0x0) {
LAB_1802b5320:
                pcVar15 = (char *)*puVar12;
                if (pcVar15 == (char *)0x0) {
                  pcVar4 = (char *)0x0;
                  pcVar15 = (char *)0x180d48d24;
                }
                else {
                  pcVar4 = (char *)puVar12[2];
                }
                if (pcVar4 != pcVar13 + -0x180a1692f) goto LAB_1802b545e;
                pcVar4 = pcVar4 + (int64_t)pcVar15;
                if (pcVar15 < pcVar4) {
                  lVar9 = (int64_t)&processed_var_9168_ptr - (int64_t)pcVar15;
                  while (*pcVar15 == pcVar15[lVar9]) {
                    pcVar15 = pcVar15 + 1;
                    if (pcVar4 <= pcVar15) goto LAB_1802b5374;
                  }
                  goto LAB_1802b545e;
                }
LAB_1802b5374:
                pcVar15 = (char *)0x180d48d24;
                if ((char *)puVar12[1] != (char *)0x0) {
                  pcVar15 = (char *)puVar12[1];
                }
                uVar6 = 0xffffffffffffffff;
                do {
                  uVar6 = uVar6 + 1;
                } while (pcVar15[uVar6] != '\0');
                if (((uVar6 < 3) || (*pcVar15 != '0')) ||
                   (puVar10 = &processed_var_5412_ptr, (pcVar15[1] + 0xa8U & 0xdf) != 0)) {
                  puVar10 = &rendering_buffer_2208_ptr;
                }
                AdvancedSystemOptimizer(pcVar15,puVar10,aiStack_58);
                if ((uint64_t)(int64_t)aiStack_58[0] <
                    (uint64_t)(*(int64_t *)(param_1 + 0xd0) - *(int64_t *)(param_1 + 200) >> 3))
                {
                  FUN_180264330(*(uint64_t *)
                                 (*(int64_t *)(param_1 + 200) + (int64_t)aiStack_58[0] * 8),
                                puVar11);
                  lVar9 = *(int64_t *)(param_1 + 200);
                  lVar2 = *(int64_t *)(lVar9 + (int64_t)aiStack_58[0] * 8);
                  *(float *)(lVar2 + 0x8c) = *(float *)(lVar2 + 0x8c) * 0.0016666667;
                  lVar9 = *(int64_t *)(lVar9 + (int64_t)aiStack_58[0] * 8);
                  *(float *)(lVar9 + 0x90) = *(float *)(lVar9 + 0x90) * 0.0016666667;
                }
              }
LAB_1802b5432:
              pcVar15 = "emitter";
              do {
                pcVar13 = pcVar15;
                pcVar15 = pcVar13 + 1;
              } while (*pcVar15 != '\0');
              puVar11 = (uint64_t *)puVar11[0xb];
              if (puVar11 != (uint64_t *)0x0) {
                do {
                  pcVar15 = (char *)*puVar11;
                  if (pcVar15 == (char *)0x0) {
                    pcVar4 = (char *)0x0;
                    pcVar15 = (char *)0x180d48d24;
                  }
                  else {
                    pcVar4 = (char *)puVar11[2];
                  }
                  if (pcVar4 == pcVar13 + -0x180a18047) {
                    pcVar4 = pcVar4 + (int64_t)pcVar15;
                    if (pcVar4 <= pcVar15) goto LAB_1802b5304;
                    lVar9 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar15;
                    while (*pcVar15 == pcVar15[lVar9]) {
                      pcVar15 = pcVar15 + 1;
                      if (pcVar4 <= pcVar15) goto LAB_1802b5304;
                    }
                  }
                  puVar11 = (uint64_t *)puVar11[0xb];
                  if (puVar11 == (uint64_t *)0x0) break;
                } while( true );
              }
              break;
            }
            lVar9 = (int64_t)&processed_var_5080_ptr - (int64_t)pcVar15;
            while (*pcVar15 == pcVar15[lVar9]) {
              pcVar15 = pcVar15 + 1;
              if (pcVar4 <= pcVar15) goto LAB_1802b5304;
            }
          }
        }
FUN_1802b54b3:
        FUN_18026a670(param_1,param_1 + 0xa8);
        *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 2;
                    // WARNING: Subroutine does not return
        SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_78);
      }
      lVar9 = (int64_t)&processed_var_5088_ptr - (int64_t)pcVar15;
      while (*pcVar15 == pcVar15[lVar9]) {
        pcVar15 = pcVar15 + 1;
        if (pcVar4 <= pcVar15) goto LAB_1802b5270;
      }
    }
    puVar11 = (uint64_t *)puVar11[0xb];
  } while( true );
LAB_1802b545e:
  puVar12 = (uint64_t *)puVar12[6];
  if (puVar12 == (uint64_t *)0x0) goto LAB_1802b5432;
  goto LAB_1802b5320;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




