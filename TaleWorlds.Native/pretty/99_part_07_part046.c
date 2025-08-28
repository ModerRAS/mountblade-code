#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_07_part046.c - 5 个函数

// 函数: void FUN_1804c6710(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
void FUN_1804c6710(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4,
                  float *param_5)

{
  float *pfVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  float fVar4;
  uint64_t uVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  
  lVar7 = param_4 * 2;
  while (lVar6 = lVar7 + 2, lVar6 < param_3) {
    fVar4 = *(float *)(param_1 + lVar6 * 0x28);
    pfVar1 = (float *)(param_1 + -0x28 + lVar6 * 0x28);
    lVar8 = lVar7 + 1;
    if (fVar4 < *pfVar1 || fVar4 == *pfVar1) {
      lVar8 = lVar6;
    }
    *(int32_t *)(param_1 + param_4 * 0x28) = *(int32_t *)(param_1 + lVar8 * 0x28);
    puVar2 = (uint64_t *)(param_1 + 0x18 + lVar8 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 0x18 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (uint64_t *)(param_1 + 8 + lVar8 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 8 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(int32_t *)(param_1 + 4 + param_4 * 0x28) = *(int32_t *)(param_1 + 4 + lVar8 * 0x28);
    param_4 = lVar8;
    lVar7 = lVar8 * 2;
  }
  lVar8 = param_4;
  if (lVar6 == param_3) {
    lVar8 = lVar7 + 1;
    *(int32_t *)(param_1 + param_4 * 0x28) = *(int32_t *)(param_1 + -0x28 + lVar6 * 0x28);
    puVar2 = (uint64_t *)(param_1 + -0x10 + lVar6 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 0x18 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (uint64_t *)(param_1 + -0x20 + lVar6 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 8 + param_4 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(int32_t *)(param_1 + 4 + param_4 * 0x28) = *(int32_t *)(param_1 + -0x24 + lVar6 * 0x28);
  }
  while (param_2 < lVar8) {
    lVar7 = lVar8 + -1 >> 1;
    fVar4 = *(float *)(param_1 + lVar7 * 0x28);
    if (fVar4 < *param_5 || fVar4 == *param_5) break;
    *(float *)(param_1 + lVar8 * 0x28) = fVar4;
    puVar2 = (uint64_t *)(param_1 + 0x18 + lVar7 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 0x18 + lVar8 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    puVar2 = (uint64_t *)(param_1 + 8 + lVar7 * 0x28);
    uVar5 = puVar2[1];
    puVar3 = (uint64_t *)(param_1 + 8 + lVar8 * 0x28);
    *puVar3 = *puVar2;
    puVar3[1] = uVar5;
    *(int32_t *)(param_1 + 4 + lVar8 * 0x28) = *(int32_t *)(param_1 + 4 + lVar7 * 0x28);
    lVar8 = lVar7;
  }
  *(float *)(param_1 + lVar8 * 0x28) = *param_5;
  uVar5 = *(uint64_t *)(param_5 + 8);
  puVar2 = (uint64_t *)(param_1 + 0x18 + lVar8 * 0x28);
  *puVar2 = *(uint64_t *)(param_5 + 6);
  puVar2[1] = uVar5;
  uVar5 = *(uint64_t *)(param_5 + 4);
  puVar2 = (uint64_t *)(param_1 + 8 + lVar8 * 0x28);
  *puVar2 = *(uint64_t *)(param_5 + 2);
  puVar2[1] = uVar5;
  *(float *)(param_1 + 4 + lVar8 * 0x28) = param_5[1];
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c6850(int64_t param_1)
void FUN_1804c6850(int64_t param_1)

{
  uint *puVar1;
  uint64_t uVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  int8_t auStack_1e8 [32];
  int64_t *plStack_1c8;
  int64_t *plStack_1c0;
  int64_t *plStack_1b8;
  int64_t *plStack_1b0;
  int64_t *plStack_1a8;
  int64_t *plStack_1a0;
  int64_t *plStack_198;
  int64_t *plStack_190;
  int64_t *plStack_188;
  uint64_t uStack_180;
  void *puStack_178;
  int8_t *puStack_170;
  int32_t uStack_168;
  int8_t auStack_160 [32];
  void *puStack_140;
  int8_t *puStack_138;
  int32_t uStack_130;
  int8_t auStack_128 [32];
  void *puStack_108;
  int8_t *puStack_100;
  int32_t uStack_f8;
  int8_t auStack_f0 [32];
  void *puStack_d0;
  int8_t *puStack_c8;
  int32_t uStack_c0;
  int8_t auStack_b8 [32];
  void *puStack_98;
  int8_t *puStack_90;
  int32_t uStack_88;
  int8_t auStack_80 [32];
  void *puStack_60;
  int8_t *puStack_58;
  int32_t uStack_50;
  int8_t auStack_48 [32];
  uint64_t uStack_28;
  
  uStack_180 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1e8;
  if (*(int64_t *)(param_1 + 0x70) == 0) {
    puStack_178 = &unknown_var_672_ptr;
    puStack_170 = auStack_160;
    auStack_160[0] = 0;
    uStack_168 = 0xc;
    strcpy_s(auStack_160,0x20,&system_data_f970);
    puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_1b0,&puStack_178,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c8 = *(int64_t **)(param_1 + 0x70);
    *(uint64_t *)(param_1 + 0x70) = uVar2;
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1b0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1b0 + 0x38))();
    }
    puStack_178 = &system_state_ptr;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x70) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int64_t *)(param_1 + 0x78) == 0) {
    puStack_140 = &unknown_var_672_ptr;
    puStack_138 = auStack_128;
    auStack_128[0] = 0;
    uStack_130 = 0xe;
    strcpy_s(auStack_128,0x20,&system_data_f960);
    puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_1a8,&puStack_140,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c8 = *(int64_t **)(param_1 + 0x78);
    *(uint64_t *)(param_1 + 0x78) = uVar2;
    if (plStack_1c8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c8 + 0x38))();
    }
    if (plStack_1a8 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a8 + 0x38))();
    }
    puStack_140 = &system_state_ptr;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x78) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int64_t *)(param_1 + 0x80) == 0) {
    if (*(char *)((int64_t)*(int *)(system_message_buffer + 0x1d40) * 0xd0 + 0xcc +
                 *(int64_t *)(system_message_buffer + 0x1d20)) == '\0') {
      puStack_d0 = &unknown_var_672_ptr;
      puStack_c8 = auStack_b8;
      auStack_b8[0] = 0;
      uStack_c0 = 0xe;
      strcpy_s(auStack_b8,0x20,&unknown_var_1648_ptr);
      puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_1c8,&puStack_d0,1);
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_1b8 = *(int64_t **)(param_1 + 0x80);
      *(uint64_t *)(param_1 + 0x80) = uVar2;
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      puStack_d0 = &system_state_ptr;
    }
    else {
      puStack_108 = &unknown_var_672_ptr;
      puStack_100 = auStack_f0;
      auStack_f0[0] = 0;
      uStack_f8 = 0x12;
      strcpy_s(auStack_f0,0x20,&unknown_var_1664_ptr);
      puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_1b8,&puStack_108,1);
      uVar2 = *puVar3;
      *puVar3 = 0;
      plStack_1c8 = *(int64_t **)(param_1 + 0x80);
      *(uint64_t *)(param_1 + 0x80) = uVar2;
      if (plStack_1c8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1c8 + 0x38))();
      }
      if (plStack_1b8 != (int64_t *)0x0) {
        (**(code **)(*plStack_1b8 + 0x38))();
      }
      puStack_108 = &system_state_ptr;
    }
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x80) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int64_t *)(param_1 + 0x88) == 0) {
    puStack_98 = &unknown_var_672_ptr;
    puStack_90 = auStack_80;
    auStack_80[0] = 0;
    uStack_88 = 0x10;
    strcpy_s(auStack_80,0x20,&unknown_var_1592_ptr);
    puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_1a0,&puStack_98,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(int64_t **)(param_1 + 0x88);
    *(uint64_t *)(param_1 + 0x88) = uVar2;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_1a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1a0 + 0x38))();
    }
    puStack_98 = &system_state_ptr;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x88) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int64_t *)(param_1 + 0x90) == 0) {
    puStack_60 = &unknown_var_672_ptr;
    puStack_58 = auStack_48;
    auStack_48[0] = 0;
    uStack_50 = 0xb;
    strcpy_s(auStack_48,0x20,&unknown_var_248_ptr);
    puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_198,&puStack_60,1);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(int64_t **)(param_1 + 0x90);
    *(uint64_t *)(param_1 + 0x90) = uVar2;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_198 != (int64_t *)0x0) {
      (**(code **)(*plStack_198 + 0x38))();
    }
    puStack_60 = &system_state_ptr;
    puVar1 = (uint *)(*(int64_t *)(param_1 + 0x90) + 0x328);
    *puVar1 = *puVar1 | 0x20000000;
  }
  if (*(int64_t *)(param_1 + 0x98) == 0) {
    puVar3 = (uint64_t *)FUN_1800bf9e0();
    puVar3 = (uint64_t *)FUN_1800763c0(*puVar3,&plStack_190);
    uVar2 = *puVar3;
    *puVar3 = 0;
    plStack_1c0 = *(int64_t **)(param_1 + 0x98);
    *(uint64_t *)(param_1 + 0x98) = uVar2;
    if (plStack_1c0 != (int64_t *)0x0) {
      (**(code **)(*plStack_1c0 + 0x38))();
    }
    if (plStack_190 != (int64_t *)0x0) {
      (**(code **)(*plStack_190 + 0x38))();
    }
    if (plStack_188 != (int64_t *)0x0) {
      (**(code **)(*plStack_188 + 0x38))();
    }
    lVar4 = *(int64_t *)(param_1 + 0x98);
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar4 = func_0x000180085de0(*(uint64_t *)(lVar4 + 0x1b0));
    }
    *(byte *)(lVar4 + 0xfe) = *(byte *)(lVar4 + 0xfe) & 0xfd;
    lVar4 = *(int64_t *)(param_1 + 0x98);
    lVar5 = lVar4;
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar5 = func_0x000180085de0(*(uint64_t *)(lVar4 + 0x1b0));
    }
    if (*(char *)(lVar5 + 0xfa) != '\x01') {
      *(int8_t *)(lVar5 + 0xfa) = 1;
      FUN_180079520(lVar5);
      lVar4 = *(int64_t *)(param_1 + 0x98);
    }
    if ((*(byte *)(lVar4 + 0xfd) & 0x20) == 0) {
      lVar4 = func_0x000180085de0(*(uint64_t *)(lVar4 + 0x1b0));
    }
    if (*(char *)(lVar4 + 0xfb) != '\x01') {
      *(int8_t *)(lVar4 + 0xfb) = 1;
      FUN_180079520(lVar4);
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_28 ^ (uint64_t)auStack_1e8);
}



uint64_t * FUN_1804c6e20(uint64_t *param_1)

{
  *param_1 = &unknown_var_1752_ptr;
  *param_1 = &unknown_var_1696_ptr;
  param_1[4] = 0;
  *(int32_t *)(param_1 + 5) = 0x1060101;
  *(int32_t *)((int64_t)param_1 + 0x2c) = 0xff000000;
  *(int32_t *)(param_1 + 6) = 0x40300ff;
  *(uint64_t *)((int64_t)param_1 + 0x34) = 0x30503;
  *(uint64_t *)((int64_t)param_1 + 0x3c) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x44) = 0;
  *(uint64_t *)((int64_t)param_1 + 0x4c) = 0;
  *(int32_t *)((int64_t)param_1 + 0x54) = 0;
  param_1[0xb] = 0x900;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  FUN_1808fc838(param_1 + 0xe,8,2,&SUB_18005d5f0,FUN_180045af0);
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(int32_t *)(param_1 + 0x17) = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  *(int8_t *)(param_1 + 3) = 1;
  return param_1;
}



uint64_t * FUN_1804c6f10(uint64_t *param_1,uint64_t param_2)

{
  FUN_18005d580();
  if ((int64_t *)param_1[0x13] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x13] + 0x38))();
  }
  if ((int64_t *)param_1[0x12] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x12] + 0x38))();
  }
  if ((int64_t *)param_1[0x11] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x11] + 0x38))();
  }
  if ((int64_t *)param_1[0x10] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0x10] + 0x38))();
  }
  FUN_1808fc8a8(param_1 + 0xe,8,2,FUN_180045af0);
  if ((int64_t *)param_1[0xd] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xd] + 0x38))();
  }
  if ((int64_t *)param_1[0xc] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[0xc] + 0x38))();
  }
  *param_1 = &unknown_var_1752_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0xc0);
  }
  return param_1;
}






// 函数: void FUN_1804c7000(int64_t param_1)
void FUN_1804c7000(int64_t param_1)

{
  int64_t lVar1;
  char cVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uStack_30;
  uint64_t uStack_28;
  code *pcStack_20;
  code *pcStack_18;
  
  uVar4 = 0xfffffffffffffffe;
  FUN_1804c6850();
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x70 + (uint64_t)*(byte *)(param_1 + 0x18) * 8),0,
                0xffffffff,&uStack_30,uVar4);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x80),0,0xffffffff,&uStack_30,uVar4);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x88),0,0xffffffff,&uStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  uStack_30 = 0;
  uStack_28 = 0;
  pcStack_20 = (code *)0x0;
  pcStack_18 = _guard_check_icall;
  FUN_18023c450(*(uint64_t *)(param_1 + 0x90),0,0xffffffff,&uStack_30);
  if (pcStack_20 != (code *)0x0) {
    (*pcStack_20)(&uStack_30,0,0);
  }
  lVar1 = *(int64_t *)(param_1 + 0x98);
  lVar3 = *(int64_t *)(lVar1 + 0x1b8);
  cVar2 = *(char *)(lVar3 + 0x38c);
  if (cVar2 == '\t') {
    cVar2 = func_0x00018022d300();
    *(char *)(lVar3 + 0x38c) = cVar2;
  }
  cVar2 = FUN_18007b240(lVar1,lVar1 + 0x1e8,cVar2,1);
  if (cVar2 == '\0') {
    *(byte *)(lVar1 + 0xfe) = *(byte *)(lVar1 + 0xfe) & 0xfb;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c71d0(int64_t param_1)
void FUN_1804c71d0(int64_t param_1)

{
  uint64_t uVar1;
  int32_t uVar2;
  uint64_t *puVar3;
  int8_t auStack_d8 [32];
  int64_t *plStack_b8;
  int64_t *plStack_a8;
  int64_t *plStack_a0;
  uint64_t uStack_98;
  void *puStack_90;
  code **ppcStack_88;
  uint64_t uStack_80;
  code *apcStack_78 [4];
  void *puStack_58;
  int8_t *puStack_50;
  int32_t uStack_48;
  int8_t auStack_40 [32];
  uint64_t uStack_20;
  
  uStack_98 = 0xfffffffffffffffe;
  uStack_20 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_d8;
  puStack_90 = &unknown_var_672_ptr;
  ppcStack_88 = apcStack_78;
  apcStack_78[0] = (code *)((uint64_t)apcStack_78[0] & 0xffffffffffffff00);
  uStack_80 = (code *)CONCAT44((int)((uint64_t)uStack_80 >> 0x20),0xf);
  strcpy_s(apcStack_78,0x20,&unknown_var_1176_ptr);
  puVar3 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_a8,&puStack_90,0);
  uVar1 = *puVar3;
  *puVar3 = 0;
  plStack_b8 = *(int64_t **)(param_1 + 0x60);
  *(uint64_t *)(param_1 + 0x60) = uVar1;
  if (plStack_b8 != (int64_t *)0x0) {
    (**(code **)(*plStack_b8 + 0x38))();
  }
  if (plStack_a8 != (int64_t *)0x0) {
    (**(code **)(*plStack_a8 + 0x38))();
  }
  puStack_90 = &system_state_ptr;
  if (*(int64_t *)(param_1 + 0x60) != 0) {
    puStack_58 = &unknown_var_672_ptr;
    puStack_50 = auStack_40;
    auStack_40[0] = 0;
    uStack_48 = 0x16;
    strcpy_s(auStack_40,0x20,&unknown_var_1192_ptr);
    puVar3 = (uint64_t *)FUN_1800b31f0(system_resource_state,&plStack_a0,&puStack_58,0);
    uVar1 = *puVar3;
    *puVar3 = 0;
    plStack_b8 = *(int64_t **)(param_1 + 0x68);
    *(uint64_t *)(param_1 + 0x68) = uVar1;
    if (plStack_b8 != (int64_t *)0x0) {
      (**(code **)(*plStack_b8 + 0x38))();
    }
    if (plStack_a0 != (int64_t *)0x0) {
      (**(code **)(*plStack_a0 + 0x38))();
    }
    puStack_58 = &system_state_ptr;
    if (*(int64_t *)(param_1 + 0x68) != 0) {
      *(int32_t *)(param_1 + 0x34) = 0x4000300;
      *(int8_t *)(param_1 + 0x59) = 4;
      *(int16_t *)(param_1 + 0x32) = 0;
      *(int32_t *)(param_1 + 0x5c) = 1;
      uVar2 = func_0x0001800aada0(*(int32_t *)(system_message_buffer + 0x1d80));
      *(int32_t *)(param_1 + 0x3c) = uVar2;
      FUN_1804c6850(param_1);
      puStack_90 = (void *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(param_1 + 0x70 + (uint64_t)*(byte *)(param_1 + 0x18) * 8),1,
                    0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (void *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(param_1 + 0x80),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (void *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(param_1 + 0x88),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      puStack_90 = (void *)0x0;
      ppcStack_88 = (code **)0x0;
      uStack_80 = (code *)0x0;
      apcStack_78[0] = _guard_check_icall;
      FUN_18023c450(*(uint64_t *)(param_1 + 0x90),1,0xffffffff,&puStack_90);
      if (uStack_80 != (code *)0x0) {
        (*uStack_80)(&puStack_90,0,0);
      }
      *(int32_t *)(param_1 + 8) = 0;
      *(int32_t *)(param_1 + 0x10) = 0;
      *(int8_t *)(param_1 + 0x19) = 1;
    }
  }
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_20 ^ (uint64_t)auStack_d8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_1804c74c0(int64_t ***param_1)
void FUN_1804c74c0(int64_t ***param_1)

{
  byte bVar1;
  void *puVar2;
  code *pcVar3;
  bool bVar4;
  int64_t *plVar5;
  int32_t uVar6;
  int64_t **pplVar7;
  uint64_t *puVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t ***ppplVar11;
  char *pcVar12;
  int64_t **pplVar13;
  int64_t **pplVar14;
  int64_t **pplVar15;
  int64_t *plVar16;
  int64_t ***ppplVar17;
  int64_t lVar18;
  void *puVar19;
  int64_t ***ppplVar20;
  int64_t ***ppplVar21;
  int64_t *plVar22;
  int8_t auStack_1b8 [32];
  void *puStack_198;
  uint64_t *puStack_190;
  uint uStack_188;
  uint64_t uStack_180;
  int64_t ***ppplStack_178;
  int64_t ***ppplStack_170;
  int64_t **pplStack_168;
  uint64_t *puStack_160;
  uint64_t uStack_158;
  uint64_t uStack_150;
  int32_t uStack_148;
  uint64_t uStack_140;
  int64_t ***ppplStack_138;
  void *puStack_130;
  int64_t lStack_128;
  int iStack_120;
  int32_t uStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  uint64_t uStack_100;
  int32_t uStack_f8;
  uint64_t uStack_f0;
  int64_t ***ppplStack_e8;
  int64_t ****pppplStack_e0;
  void *puStack_d8;
  char *pcStack_d0;
  uint uStack_c8;
  char acStack_c0 [136];
  uint64_t uStack_38;
  
  uStack_f0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_1b8;
  ppplVar20 = (int64_t ***)0x0;
  *(int32_t *)(param_1 + 1) = 0;
  *(int32_t *)(param_1 + 2) = 0;
  ppplVar11 = param_1 + 0x14;
  ppplStack_178 = param_1;
  if (*ppplVar11 == param_1[0x15]) {
    plStack_110 = (int64_t *)0x0;
    plStack_108 = (int64_t *)0x0;
    uStack_100 = 0;
    uStack_f8 = 3;
    FUN_1800b6b20(0,&plStack_110);
    ppplVar17 = (int64_t ***)((int64_t)plStack_108 - (int64_t)plStack_110 >> 3);
    ppplVar21 = param_1;
    plVar22 = plStack_110;
    ppplStack_170 = ppplVar17;
    if (ppplVar17 != (int64_t ***)0x0) {
      do {
        pplVar7 = (int64_t **)0x0;
        puStack_d8 = &unknown_var_3432_ptr;
        pcStack_d0 = acStack_c0;
        acStack_c0[0] = '\0';
        uStack_c8 = *(uint *)(plVar22[(int64_t)ppplVar20] + 0x20);
        puVar2 = *(void **)(plVar22[(int64_t)ppplVar20] + 0x18);
        puVar19 = &system_buffer_ptr;
        if (puVar2 != (void *)0x0) {
          puVar19 = puVar2;
        }
        strcpy_s(acStack_c0,0x80,puVar19);
        if (uStack_c8 < 0xb) {
LAB_1804c75fa:
          bVar4 = false;
        }
        else {
          pcVar12 = pcStack_d0;
          do {
            if (*pcVar12 != pcVar12[(int64_t)&unknown_var_1576_ptr + -(int64_t)pcStack_d0])
            goto LAB_1804c75fa;
            pcVar12 = pcVar12 + 1;
          } while (-(int64_t)pcStack_d0 + (int64_t)pcVar12 < 0xb);
          bVar4 = true;
        }
        if (bVar4) {
          puStack_198 = &system_data_buffer_ptr;
          uStack_180 = 0;
          puStack_190 = (int64_t *)0x0;
          uStack_188 = 0;
          FUN_1806277c0(&puStack_198,uStack_c8);
          puVar8 = puStack_190;
          if (0 < (int)uStack_c8) {
            pcVar12 = "";
            if (pcStack_d0 != (char *)0x0) {
              pcVar12 = pcStack_d0;
            }
                    // WARNING: Subroutine does not return
            memcpy(puStack_190,pcVar12,(int64_t)(int)(uStack_c8 + 1));
          }
          if (pcStack_d0 == (char *)0x0) {
            pplVar15 = (int64_t **)(uint64_t)uStack_188;
          }
          else {
            uStack_188 = 0;
            pplVar15 = pplVar7;
            if (puStack_190 != (int64_t *)0x0) {
              *(int8_t *)puStack_190 = 0;
              pplVar15 = (int64_t **)0x0;
            }
          }
          pplVar14 = param_1[0x15];
          if (pplVar14 < param_1[0x16]) {
            param_1[0x15] = pplVar14 + 4;
            *pplVar14 = (int64_t *)&system_state_ptr;
            pplVar14[1] = (int64_t *)0x0;
            *(int32_t *)(pplVar14 + 2) = 0;
            *pplVar14 = (int64_t *)&system_data_buffer_ptr;
            *(int *)(pplVar14 + 2) = (int)pplVar15;
            pplVar14[1] = puStack_190;
            *(uint *)((int64_t)pplVar14 + 0x1c) = uStack_180._4_4_;
            *(int32_t *)(pplVar14 + 3) = (int32_t)uStack_180;
            uStack_188 = 0;
            uStack_180 = 0;
            ppplStack_138 = (int64_t ***)pplVar14;
          }
          else {
            pplVar13 = *ppplVar11;
            lVar18 = (int64_t)pplVar14 - (int64_t)pplVar13 >> 5;
            if (lVar18 == 0) {
              lVar18 = 1;
LAB_1804c7711:
              pplVar7 = (int64_t **)
                        FUN_18062b420(system_memory_pool_ptr,lVar18 << 5,*(int8_t *)(param_1 + 0x17));
              pplVar14 = param_1[0x15];
              pplVar13 = *ppplVar11;
            }
            else {
              lVar18 = lVar18 * 2;
              if (lVar18 != 0) goto LAB_1804c7711;
            }
            ppplStack_138 = (int64_t ***)FUN_180059780(pplVar13,pplVar14,pplVar7);
            *ppplStack_138 = (int64_t **)&system_state_ptr;
            ((int64_t **)ppplStack_138)[1] = (int64_t *)0x0;
            *(int32_t *)((int64_t **)ppplStack_138 + 2) = 0;
            *ppplStack_138 = (int64_t **)&system_data_buffer_ptr;
            *(int *)((int64_t **)ppplStack_138 + 2) = (int)pplVar15;
            ((int64_t **)ppplStack_138)[1] = puVar8;
            *(uint *)((int64_t)ppplStack_138 + 0x1c) = uStack_180._4_4_;
            *(int32_t *)((int64_t **)ppplStack_138 + 3) = (int32_t)uStack_180;
            uStack_188 = 0;
            puStack_190 = (uint64_t *)0x0;
            uStack_180 = 0;
            pplVar13 = (int64_t **)ppplStack_138 + 4;
            pplVar15 = param_1[0x15];
            pplVar14 = *ppplVar11;
            if (pplVar14 != pplVar15) {
              do {
                (*(code *)**pplVar14)(pplVar14,0);
                pplVar14 = pplVar14 + 4;
              } while (pplVar14 != pplVar15);
              pplVar14 = *ppplVar11;
            }
            if (pplVar14 != (int64_t **)0x0) {
                    // WARNING: Subroutine does not return
              FUN_18064e900(pplVar14);
            }
            *ppplVar11 = pplVar7;
            param_1[0x15] = pplVar13;
            param_1[0x16] = pplVar7 + lVar18 * 4;
            ppplVar17 = ppplStack_170;
            plVar22 = plStack_110;
          }
          puStack_190 = (uint64_t *)0x0;
          uStack_180 = uStack_180 & 0xffffffff00000000;
          puStack_198 = &system_state_ptr;
        }
        puStack_d8 = &system_state_ptr;
        ppplVar20 = (int64_t ***)(uint64_t)((int)ppplVar20 + 1);
        ppplVar21 = ppplStack_178;
      } while (ppplVar20 < ppplVar17);
    }
    plVar5 = plStack_108;
    puStack_198 = &system_data_buffer_ptr;
    uStack_180 = 0;
    puStack_190 = (uint64_t *)0x0;
    uStack_188 = 0;
    puVar8 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_190 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    *puVar8 = 0x616f6c5f65726f63;
    *(int32_t *)(puVar8 + 1) = 0x676e6964;
    *(int8_t *)((int64_t)puVar8 + 0xc) = 0;
    uStack_188 = 0xc;
    uStack_180._0_4_ = uVar6;
    FUN_180066df0(ppplVar11,&puStack_198);
    puStack_198 = &system_data_buffer_ptr;
    if (puStack_190 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_190 = (uint64_t *)0x0;
    uStack_180 = (uint64_t)uStack_180._4_4_ << 0x20;
    puStack_198 = &system_state_ptr;
    pplStack_168 = (int64_t **)&system_data_buffer_ptr;
    uStack_150 = (int8_t *)0x0;
    puStack_160 = (uint64_t *)0x0;
    uStack_158 = (void *)((uint64_t)uStack_158._4_4_ << 0x20);
    puVar8 = (uint64_t *)FUN_18062b420(system_memory_pool_ptr,0x10,0x13);
    *(int8_t *)puVar8 = 0;
    puStack_160 = puVar8;
    uVar6 = FUN_18064e990(puVar8);
    *puVar8 = 0x616f6c5f65726f63;
    *(int32_t *)(puVar8 + 1) = 0x676e6964;
    *(int16_t *)((int64_t)puVar8 + 0xc) = 0x325f;
    *(int8_t *)((int64_t)puVar8 + 0xe) = 0;
    uStack_158 = (void *)CONCAT44(uStack_158._4_4_,0xe);
    uStack_150._0_4_ = uVar6;
    FUN_180066df0(ppplVar11,&pplStack_168);
    pplStack_168 = (int64_t **)&system_data_buffer_ptr;
    if (puStack_160 != (uint64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900();
    }
    puStack_160 = (uint64_t *)0x0;
    uStack_150 = (int8_t *)((uint64_t)uStack_150._4_4_ << 0x20);
    pplStack_168 = (int64_t **)&system_state_ptr;
    for (plVar16 = plVar22; plVar16 != plVar5; plVar16 = plVar16 + 1) {
      if ((int64_t *)*plVar16 != (int64_t *)0x0) {
        (**(code **)(*(int64_t *)*plVar16 + 0x38))();
      }
    }
    param_1 = ppplVar21;
    if (plVar22 != (int64_t *)0x0) {
                    // WARNING: Subroutine does not return
      FUN_18064e900(plVar22);
    }
  }
  bVar1 = *(byte *)(param_1 + 3);
  FUN_1804c9480(param_1,&puStack_130);
  uVar9 = FUN_18062b1e0(system_memory_pool_ptr,0xe0,8,3);
  ppplStack_138 = (int64_t ***)&plStack_110;
  ppplStack_170 = &pplStack_168;
  puStack_160 = (uint64_t *)CONCAT44(puStack_160._4_4_,(uint)bVar1);
  ppplStack_178 = (int64_t ***)&uStack_158;
  uStack_158 = &system_data_buffer_ptr;
  uStack_140 = 0;
  uStack_150 = (int8_t *)0x0;
  uStack_148 = 0;
  pplStack_168 = (int64_t **)param_1;
  FUN_1806277c0(&uStack_158,iStack_120);
  if (iStack_120 != 0) {
                    // WARNING: Subroutine does not return
    memcpy(uStack_150,lStack_128,iStack_120 + 1);
  }
  if (lStack_128 != 0) {
    uStack_148 = 0;
    if (uStack_150 != (int8_t *)0x0) {
      *uStack_150 = 0;
    }
    uStack_140 = uStack_140 & 0xffffffff;
  }
  uVar10 = FUN_1804c9650(&plStack_110,&pplStack_168);
  ppplVar11 = (int64_t ***)FUN_18006b640(uVar9,uVar10);
  ppplStack_138 = ppplVar11;
  if (ppplVar11 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar11)[5])(ppplVar11);
  }
  lVar18 = system_context_ptr;
  ppplStack_170 = (int64_t ***)&ppplStack_178;
  ppplStack_178 = ppplVar11;
  if (ppplVar11 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar11)[5])(ppplVar11);
  }
  ppplStack_e8 = (int64_t ***)&ppplStack_178;
  puVar8 = (uint64_t *)**(uint64_t **)(lVar18 + 8);
  pcVar3 = *(code **)*puVar8;
  pppplStack_e0 = &ppplStack_170;
  ppplStack_170 = ppplStack_178;
  if (ppplStack_178 != (int64_t ***)0x0) {
    (*(code *)(*ppplStack_178)[5])();
  }
  (*pcVar3)(puVar8,&ppplStack_170);
  if (ppplStack_178 != (int64_t ***)0x0) {
    (*(code *)(*ppplStack_178)[7])();
  }
  *(bool *)(param_1 + 3) = *(char *)(param_1 + 3) == '\0';
  if (ppplVar11 != (int64_t ***)0x0) {
    (*(code *)(*ppplVar11)[7])(ppplVar11);
  }
  puStack_130 = &system_data_buffer_ptr;
  if (lStack_128 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  lStack_128 = 0;
  uStack_118 = 0;
  puStack_130 = &system_state_ptr;
                    // WARNING: Subroutine does not return
  FUN_1808fc050(uStack_38 ^ (uint64_t)auStack_1b8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




