#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 03_rendering_part395.c - 9 个函数

// 函数: void FUN_180488a90(int64_t param_1,int64_t param_2)
void FUN_180488a90(int64_t param_1,int64_t param_2)

{
  int *piVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  int iVar9;
  int64_t lVar10;
  int64_t lVar11;
  uint64_t *puVar12;
  uint64_t *puVar13;
  void *puVar14;
  void *puVar15;
  int8_t auStack_2a8 [32];
  uint64_t *puStack_288;
  int64_t *plStack_278;
  int64_t *plStack_270;
  uint64_t uStack_268;
  int32_t uStack_260;
  int16_t uStack_25c;
  uint64_t uStack_258;
  uint64_t uStack_250;
  int32_t uStack_248;
  int8_t uStack_244;
  int32_t uStack_240;
  uint64_t uStack_23c;
  int16_t uStack_234;
  uint64_t uStack_230;
  int32_t uStack_228;
  uint64_t uStack_220;
  int32_t uStack_218;
  int8_t uStack_214;
  uint64_t uStack_200;
  uint64_t uStack_1f8;
  void *puStack_1e8;
  void *puStack_1e0;
  uint uStack_1d8;
  uint8_t auStack_1d0 [72];
  uint64_t auStack_188 [40];
  uint64_t uStack_48;
  
  uStack_1f8 = 0xfffffffffffffffe;
  uStack_48 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_2a8;
  if (*(int64_t *)(param_1 + 0xf0) != 0) {
    if (*(char *)(param_1 + 0x100) != '\0') {
      FUN_1800b6620();
      *(int8_t *)(param_1 + 0x100) = 0;
    }
    lVar10 = FUN_1800daa50();
    puStack_1e8 = &memory_allocator_3480_ptr;
    puStack_1e0 = auStack_1d0;
    auStack_1d0[0] = 0;
    uStack_1d8 = 0xd;
    strcpy_s(auStack_1d0,0x40,&processed_var_7376_ptr);
    puVar15 = *(void **)(*(int64_t *)(param_1 + 0xf0) + 0x18);
    puVar14 = &system_buffer_ptr;
    if (puVar15 != (void *)0x0) {
      puVar14 = puVar15;
    }
    lVar11 = -1;
    do {
      lVar11 = lVar11 + 1;
    } while (puVar14[lVar11] != '\0');
    iVar9 = (int)lVar11;
    if ((0 < iVar9) && (uStack_1d8 + iVar9 < 0x3f)) {
                    // WARNING: Subroutine does not return
      memcpy(puStack_1e0 + uStack_1d8,puVar14,(int64_t)(iVar9 + 1));
    }
    puVar15 = &system_buffer_ptr;
    if (puStack_1e0 != (void *)0x0) {
      puVar15 = puStack_1e0;
    }
    (**(code **)(*(int64_t *)(lVar10 + 0x3520) + 0x10))((int64_t *)(lVar10 + 0x3520),puVar15);
    plVar2 = *(int64_t **)(system_message_buffer + 0x121e0);
    if (plVar2 != (int64_t *)0x0) {
      plStack_278 = plVar2;
      (**(code **)(*plVar2 + 0x28))(plVar2);
    }
    plStack_278 = *(int64_t **)(lVar10 + 0x9690);
    *(int64_t **)(lVar10 + 0x9690) = plVar2;
    if (plStack_278 != (int64_t *)0x0) {
      (**(code **)(*plStack_278 + 0x38))();
    }
    plStack_270 = *(int64_t **)(lVar10 + 0x96a8);
    *(uint64_t *)(lVar10 + 0x96a8) = 0;
    if (plStack_270 != (int64_t *)0x0) {
      (**(code **)(*plStack_270 + 0x38))();
    }
    uVar3 = *(int32_t *)(param_1 + 0x20);
    uVar4 = *(int32_t *)(param_1 + 0x24);
    uVar5 = *(int32_t *)(param_1 + 0x28);
    *(int32_t *)(lVar10 + 0x11c18) = *(int32_t *)(param_1 + 0x1c);
    *(int32_t *)(lVar10 + 0x11c1c) = uVar3;
    *(int32_t *)(lVar10 + 0x11c20) = uVar4;
    *(int32_t *)(lVar10 + 0x11c24) = uVar5;
    *(uint64_t *)(lVar10 + 0x11c28) = *(uint64_t *)(param_1 + 0x2c);
    *(int16_t *)(lVar10 + 0x11c36) = 0x100;
    *(int8_t *)(lVar10 + 0x9a31) = 0;
    *(int32_t *)(lVar10 + 4) = *(int32_t *)(param_1 + 0xcc);
    FUN_180094c20(auStack_188);
    lVar11 = 2;
    puVar7 = (uint64_t *)(lVar10 + 0x30);
    puVar8 = auStack_188;
    do {
      puVar13 = puVar8;
      puVar12 = puVar7;
      uVar6 = puVar13[1];
      *puVar12 = *puVar13;
      puVar12[1] = uVar6;
      uVar6 = puVar13[3];
      puVar12[2] = puVar13[2];
      puVar12[3] = uVar6;
      uVar6 = puVar13[5];
      puVar12[4] = puVar13[4];
      puVar12[5] = uVar6;
      uVar6 = puVar13[7];
      puVar12[6] = puVar13[6];
      puVar12[7] = uVar6;
      uVar6 = puVar13[9];
      puVar12[8] = puVar13[8];
      puVar12[9] = uVar6;
      uVar6 = puVar13[0xb];
      puVar12[10] = puVar13[10];
      puVar12[0xb] = uVar6;
      uVar6 = puVar13[0xd];
      puVar12[0xc] = puVar13[0xc];
      puVar12[0xd] = uVar6;
      uVar6 = puVar13[0xf];
      puVar12[0xe] = puVar13[0xe];
      puVar12[0xf] = uVar6;
      lVar11 = lVar11 + -1;
      puVar7 = puVar12 + 0x10;
      puVar8 = puVar13 + 0x10;
    } while (lVar11 != 0);
    uVar6 = puVar13[0x11];
    puVar12[0x10] = puVar13[0x10];
    puVar12[0x11] = uVar6;
    uVar6 = puVar13[0x13];
    puVar12[0x12] = puVar13[0x12];
    puVar12[0x13] = uVar6;
    uVar3 = *(int32_t *)((int64_t)puVar13 + 0xa4);
    uVar4 = *(int32_t *)(puVar13 + 0x15);
    uVar5 = *(int32_t *)((int64_t)puVar13 + 0xac);
    *(int32_t *)(puVar12 + 0x14) = *(int32_t *)(puVar13 + 0x14);
    *(int32_t *)((int64_t)puVar12 + 0xa4) = uVar3;
    *(int32_t *)(puVar12 + 0x15) = uVar4;
    *(int32_t *)((int64_t)puVar12 + 0xac) = uVar5;
    uVar3 = *(int32_t *)((int64_t)puVar13 + 0xb4);
    uVar4 = *(int32_t *)(puVar13 + 0x17);
    uVar5 = *(int32_t *)((int64_t)puVar13 + 0xbc);
    *(int32_t *)(puVar12 + 0x16) = *(int32_t *)(puVar13 + 0x16);
    *(int32_t *)((int64_t)puVar12 + 0xb4) = uVar3;
    *(int32_t *)(puVar12 + 0x17) = uVar4;
    *(int32_t *)((int64_t)puVar12 + 0xbc) = uVar5;
    FUN_18024b8d0(lVar10);
    if (*(char *)(param_1 + 0xdc) != '\0') {
      *(uint *)(lVar10 + 4) = *(uint *)(lVar10 + 4) | 0x40000;
    }
    *(int32_t *)(lVar10 + 0x11cf0) = 0xff000000;
    *(int32_t *)(lVar10 + 0x9a2c) = *(int32_t *)(param_1 + 0xd8);
    uStack_268 = 0;
    uStack_260 = 0xffffffff;
    uStack_25c = 0xff00;
    uStack_258 = 0;
    uStack_250 = 0xffffffffffffffff;
    uStack_248 = 0xffffffff;
    uStack_244 = 0xff;
    uStack_240 = 0xffffffff;
    uStack_23c = 0;
    uStack_234 = 0x400;
    uStack_230 = 0;
    uStack_228 = 0;
    uStack_220 = 0;
    uStack_218 = 0;
    uStack_214 = 0;
    uStack_200 = 0;
    puStack_288 = &uStack_268;
    FUN_180077750(*(uint64_t *)(param_1 + 0xf8),lVar10,&system_data_0300,0);
    LOCK();
    piVar1 = (int *)(param_2 + 0x11a48);
    iVar9 = *piVar1;
    *piVar1 = *piVar1 + 1;
    UNLOCK();
    *(int64_t *)(param_2 + 0x9a48 + (int64_t)iVar9 * 8) = lVar10;
    uVar3 = *(int32_t *)(param_2 + 0x9a38);
    uVar4 = *(int32_t *)(param_2 + 0x9a3c);
    uVar5 = *(int32_t *)(param_2 + 0x9a40);
    *(int32_t *)(lVar10 + 0x9a34) = *(int32_t *)(param_2 + 0x9a34);
    *(int32_t *)(lVar10 + 0x9a38) = uVar3;
    *(int32_t *)(lVar10 + 0x9a3c) = uVar4;
    *(int32_t *)(lVar10 + 0x9a40) = uVar5;
    puStack_1e8 = &system_state_ptr;
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_48 ^ (uint64_t)auStack_2a8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180488de0(int64_t param_1)
void FUN_180488de0(int64_t param_1)

{
  uint64_t uVar1;
  uint64_t *puVar2;
  int32_t uVar3;
  int8_t auStack_138 [32];
  int32_t uStack_118;
  int64_t *plStack_110;
  int64_t *plStack_108;
  int64_t *plStack_100;
  int64_t *plStack_f8;
  int64_t *plStack_f0;
  uint64_t uStack_e8;
  int32_t uStack_e0;
  int32_t uStack_dc;
  int16_t uStack_d8;
  int8_t uStack_d6;
  int32_t uStack_d4;
  int8_t uStack_d0;
  uint64_t uStack_c8;
  int64_t alStack_c0 [3];
  int32_t uStack_a8;
  uint64_t uStack_a0;
  uint64_t uStack_98;
  void *puStack_88;
  int8_t *puStack_80;
  int32_t uStack_78;
  int8_t auStack_70 [72];
  uint64_t uStack_28;
  
  uVar1 = system_resource_state;
  uStack_98 = 0xfffffffffffffffe;
  uStack_28 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_138;
  uStack_118 = 0;
  puStack_88 = &memory_allocator_3480_ptr;
  puStack_80 = auStack_70;
  auStack_70[0] = 0;
  uStack_78 = 0xc;
  strcpy_s(auStack_70,0x40,&processed_var_7496_ptr);
  FUN_1800b30d0(uVar1,&plStack_100,&puStack_88,1);
  uStack_118 = 1;
  puStack_88 = &system_state_ptr;
  uVar3 = FUN_18022cb40(plStack_100,&plStack_110);
  uStack_118 = 0;
  if (plStack_100 != (int64_t *)0x0) {
    uVar3 = (**(code **)(*plStack_100 + 0x38))();
  }
  puVar2 = (uint64_t *)FUN_1800bf6c0(uVar3,&plStack_108);
  puVar2 = (uint64_t *)FUN_1800763c0(*puVar2,&plStack_f0);
  uVar1 = *puVar2;
  *puVar2 = 0;
  plStack_f8 = *(int64_t **)(param_1 + 0xf8);
  *(uint64_t *)(param_1 + 0xf8) = uVar1;
  if (plStack_f8 != (int64_t *)0x0) {
    (**(code **)(*plStack_f8 + 0x38))();
  }
  if (plStack_f0 != (int64_t *)0x0) {
    (**(code **)(*plStack_f0 + 0x38))();
  }
  if (plStack_108 != (int64_t *)0x0) {
    (**(code **)(*plStack_108 + 0x38))();
  }
  FUN_18022cd30(plStack_110,0,*(uint64_t *)(param_1 + 0xf0));
  FUN_180076910(*(uint64_t *)(param_1 + 0xf8),&plStack_110);
  uStack_e8 = 0;
  uStack_e0 = 0;
  uStack_dc = 0xffffffff;
  uStack_d8 = 1;
  uStack_d6 = 0;
  uStack_d4 = 0xffffffff;
  uStack_d0 = 1;
  uStack_c8 = 0;
  plStack_108 = alStack_c0;
  alStack_c0[0] = 0;
  alStack_c0[1] = 0;
  alStack_c0[2] = 0;
  uStack_a8 = 3;
  uStack_a0 = 0;
  FUN_180076c50(*(uint64_t *)(param_1 + 0xf8),&uStack_e8);
  plStack_108 = alStack_c0;
  if (alStack_c0[0] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  if (plStack_110 != (int64_t *)0x0) {
    (**(code **)(*plStack_110 + 0x38))();
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_28 ^ (uint64_t)auStack_138);
}



uint64_t *
FUN_180489000(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0xf,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x75747865546c6772;
  puVar1[1] = 0x776569765f6572;
  *(int32_t *)(param_2 + 2) = 0xf;
  return param_2;
}



uint64_t * FUN_180489080(uint64_t *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = &system_state_ptr;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[6] = &system_data_buffer_ptr;
  param_1[9] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 0;
  param_1[10] = &system_state_ptr;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[10] = &system_data_buffer_ptr;
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 0;
  param_1[0x13] = 0;
  param_1[0x14] = _guard_check_icall;
  *(int8_t *)((int64_t)param_1 + 0x7c) = 1;
  *(int32_t *)(param_1 + 0x10) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180489130(uint64_t *param_1)
void FUN_180489130(uint64_t *param_1)

{
  int *piVar1;
  int64_t *plVar2;
  void *puVar3;
  int64_t lVar4;
  uint64_t uVar5;
  int64_t *plStack_18;
  int32_t uStack_10;
  
  plVar2 = (int64_t *)param_1[2];
  if (plVar2 == (int64_t *)0x0) {
    uStack_10 = 0xffffffff;
  }
  else {
    uStack_10 = (**(code **)(*plVar2 + 8))(plVar2);
  }
  puVar3 = &system_buffer_ptr;
  if ((void *)param_1[7] != (void *)0x0) {
    puVar3 = (void *)param_1[7];
  }
  plStack_18 = plVar2;
  (**(code **)(render_system_data_memory + 0x218))(puVar3,&plStack_18);
  FUN_18048a0c0(param_1);
  plStack_18 = (int64_t *)0xfffffffffffffffe;
  uVar5 = (uint64_t)param_1 & 0xffffffffffc00000;
  if (uVar5 != 0) {
    lVar4 = uVar5 + 0x80 + ((int64_t)param_1 - uVar5 >> 0x10) * 0x50;
    lVar4 = lVar4 - (uint64_t)*(uint *)(lVar4 + 4);
    if ((*(void ***)(uVar5 + 0x70) == &ExceptionList) && (*(char *)(lVar4 + 0xe) == '\0')) {
      *param_1 = *(uint64_t *)(lVar4 + 0x20);
      *(uint64_t **)(lVar4 + 0x20) = param_1;
      piVar1 = (int *)(lVar4 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        SystemDataCleaner();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar5,CONCAT71(0xff000000,*(void ***)(uVar5 + 0x70) == &ExceptionList));
    }
  }
  return;
}



uint64_t *
FUN_1804891c0(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &memory_allocator_3432_ptr;
  param_2[1] = param_2 + 3;
  *(int8_t *)(param_2 + 3) = 0;
  *(int32_t *)(param_2 + 2) = 0x19;
  strcpy_s(param_2[1],0x80,&system_data_c338,param_4,0,0xfffffffffffffffe);
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180489240(uint64_t *param_1)
void FUN_180489240(uint64_t *param_1)

{
  int64_t *plVar1;
  uint *puVar2;
  uint64_t *puVar3;
  uint uVar4;
  uint64_t uVar6;
  int64_t lVar7;
  int8_t auStack_e8 [32];
  int64_t *plStack_c8;
  int64_t *aplStack_c0 [2];
  uint64_t uStack_b0;
  uint64_t *puStack_a8;
  void *puStack_a0;
  code **ppcStack_98;
  code *pcStack_90;
  code *apcStack_88 [4];
  void *puStack_68;
  int8_t *puStack_60;
  int32_t uStack_58;
  int8_t auStack_50 [32];
  uint64_t uStack_30;
  uint64_t uVar5;
  
  uStack_b0 = 0xfffffffffffffffe;
  uStack_30 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_e8;
  uVar5 = 0;
  puStack_a8 = param_1;
  FUN_180244190();
  *param_1 = &processed_var_7936_ptr;
  puVar3 = param_1 + 0x21;
  param_1[0x24] = 0;
  *(int32_t *)(param_1 + 0x26) = 3;
  *puVar3 = puVar3;
  param_1[0x22] = puVar3;
  param_1[0x23] = 0;
  *(int8_t *)(param_1 + 0x24) = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  *(int32_t *)(param_1 + 0x2a) = 3;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(int32_t *)(param_1 + 0x2e) = 3;
  plStack_c8 = param_1 + 0x2f;
  _Mtx_init_in_situ(plStack_c8,2);
  plVar1 = param_1 + 0x39;
  *plVar1 = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  *(int32_t *)(param_1 + 0x3c) = 3;
  param_1[0x1e] = 0;
  *(int32_t *)((int64_t)param_1 + 0xfc) = 0;
  *(int8_t *)(param_1 + 0x1f) = 0;
  *(int32_t *)(param_1 + 0x20) = 0x3c;
  puStack_a0 = &processed_var_672_ptr;
  ppcStack_98 = apcStack_88;
  apcStack_88[0] = (code *)((uint64_t)apcStack_88[0] & 0xffffffffffffff00);
  pcStack_90 = (code *)CONCAT44(pcStack_90._4_4_,0x15);
  plStack_c8 = plVar1;
  strcpy_s(apcStack_88,0x20,&processed_var_7704_ptr);
  puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,&plStack_c8,&puStack_a0,0);
  aplStack_c0[0] = (int64_t *)*puVar3;
  SystemInitializer(plVar1,aplStack_c0);
  if (plStack_c8 != (int64_t *)0x0) {
    (**(code **)(*plStack_c8 + 0x38))();
  }
  puStack_a0 = &system_state_ptr;
  puStack_68 = &processed_var_672_ptr;
  puStack_60 = auStack_50;
  auStack_50[0] = 0;
  uStack_58 = 0x17;
  strcpy_s(auStack_50,0x20,&processed_var_7728_ptr);
  puVar3 = (uint64_t *)FUN_1800b08e0(system_resource_state,aplStack_c0,&puStack_68,0);
  plStack_c8 = (int64_t *)*puVar3;
  SystemInitializer(plVar1,&plStack_c8);
  if (aplStack_c0[0] != (int64_t *)0x0) {
    (**(code **)(*aplStack_c0[0] + 0x38))();
  }
  puStack_68 = &system_state_ptr;
  lVar7 = *plVar1;
  uVar6 = uVar5;
  if (param_1[0x3a] - lVar7 >> 3 != 0) {
    do {
      lVar7 = *(int64_t *)(lVar7 + uVar6);
      puVar2 = (uint *)(lVar7 + 0x328);
      *puVar2 = *puVar2 | 0x20000000;
      puStack_a0 = (void *)0x0;
      ppcStack_98 = (code **)0x0;
      pcStack_90 = (code *)0x0;
      apcStack_88[0] = _guard_check_icall;
      FUN_18023c450(lVar7,1,0xffffffff,&puStack_a0);
      if (pcStack_90 != (code *)0x0) {
        (*pcStack_90)(&puStack_a0,0,0);
      }
      uVar4 = (int)uVar5 + 1;
      uVar5 = (uint64_t)uVar4;
      lVar7 = *plVar1;
      uVar6 = uVar6 + 8;
    } while ((uint64_t)(int64_t)(int)uVar4 < (uint64_t)(param_1[0x3a] - lVar7 >> 3));
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_30 ^ (uint64_t)auStack_e8);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180489510(uint64_t *param_1,uint64_t param_2)

{
  *param_1 = &processed_var_7936_ptr;
  FUN_18005e630(system_context_ptr);
  FUN_18048c7f0(param_1 + 0x27);
  if (param_1[0x39] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  _Mtx_destroy_in_situ();
  FUN_180253ab0();
  FUN_18048c780(param_1 + 0x27);
  FUN_18048c870(param_1 + 0x21,param_1[0x23]);
  FUN_180244780(param_1);
  if ((param_2 & 1) != 0) {
    free(param_1,0x1e8);
  }
  return param_1;
}





// 函数: void FUN_1804895f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1804895f0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18048c870(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}





// 函数: void FUN_180489620(int64_t *param_1)
void FUN_180489620(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0xa8) {
    FUN_18048a0c0(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}





// 函数: void FUN_180489640(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180489640(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  FUN_18048c870(param_1,*(uint64_t *)(param_1 + 0x10),param_3,param_4,0xfffffffffffffffe);
  return;
}



uint64_t *
FUN_180489670(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  uint64_t *puVar1;
  
  *param_2 = &system_state_ptr;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  *param_2 = &system_data_buffer_ptr;
  param_2[3] = 0;
  param_2[1] = 0;
  *(int32_t *)(param_2 + 2) = 0;
  CoreEngineDataBufferProcessor(param_2,0x19,param_3,param_4,0,0xfffffffffffffffe);
  puVar1 = (uint64_t *)param_2[1];
  *puVar1 = 0x626d7568546c6772;
  puVar1[1] = 0x6572635f6c69616e;
  puVar1[2] = 0x6569765f726f7461;
  *(int16_t *)(puVar1 + 3) = 0x77;
  *(int32_t *)(param_2 + 2) = 0x19;
  return param_2;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180489700(int64_t param_1)
void FUN_180489700(int64_t param_1)

{
  int32_t uVar1;
  int32_t uVar2;
  int64_t lVar3;
  int64_t lVar4;
  char cVar5;
  uint64_t uVar6;
  int64_t *plVar7;
  int32_t uVar8;
  int8_t auStack_108 [32];
  int64_t *plStack_e8;
  int32_t uStack_e0;
  int32_t uStack_d8;
  int64_t *plStack_d0;
  int64_t **pplStack_c8;
  uint64_t uStack_c0;
  int64_t *plStack_b8;
  int64_t alStack_a8 [2];
  int16_t uStack_98;
  int8_t uStack_96;
  uint64_t uStack_94;
  uint64_t uStack_8c;
  uint64_t uStack_84;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  uint64_t uStack_6c;
  uint64_t uStack_64;
  uint64_t uStack_5c;
  uint64_t uStack_54;
  int32_t uStack_4c;
  int16_t uStack_48;
  int32_t uStack_46;
  int8_t uStack_42;
  uint64_t uStack_38;
  
  uStack_c0 = 0xfffffffffffffffe;
  uStack_38 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_108;
  uStack_d8 = 0;
  plVar7 = *(int64_t **)(param_1 + 0x18);
  lVar3 = plVar7[0x65];
  if (*(int *)((int64_t)plVar7 + 0x324) == 1) {
    alStack_a8[0] = 0;
    alStack_a8[1] = 0;
    uStack_98 = 0;
    uStack_96 = 3;
    uStack_46 = 0;
    uStack_54 = 0;
    uStack_4c = 0;
    uStack_48 = 0;
    uStack_42 = 0;
    uStack_94 = 0;
    uStack_8c = 0;
    uStack_84 = 0;
    uStack_7c = 0;
    uStack_74 = 0;
    uStack_6c = 0;
    uStack_64 = 0;
    uStack_5c = 0;
    uVar6 = FUN_18023a940(*(uint64_t *)(param_1 + 0x20));
    cVar5 = FUN_1800a5fc0(system_message_buffer,uVar6,alStack_a8);
    if (cVar5 != '\0') {
      pplStack_c8 = &plStack_d0;
      plStack_d0 = plVar7;
      uVar8 = (**(code **)(*plVar7 + 0x28))(plVar7);
      FUN_1802435e0(uVar8,&plStack_d0);
      *(int32_t *)(plVar7 + 0x65) = 0;
      FUN_18023b050(plVar7,0);
      lVar4 = plVar7[0x3d];
      uStack_54 = CONCAT44(uStack_54._4_4_ | *(uint *)(plVar7 + 0x65),(int32_t)uStack_54);
      plStack_e8 = plVar7;
      uStack_e0 = (int)lVar4;
      cVar5 = FUN_1800a5810(system_message_buffer,alStack_a8,1,0);
      if (cVar5 == '\0') {
        uVar6 = FUN_1800c0100();
        plStack_e8 = plVar7;
        uStack_e0 = (int)lVar4;
        FUN_1800a5810(system_message_buffer,uVar6,1,0);
      }
      lVar4 = *(int64_t *)(param_1 + 0x20);
      uVar6 = *(uint64_t *)(lVar4 + 0x2ec);
      *(uint64_t *)((int64_t)plVar7 + 0x2e4) = *(uint64_t *)(lVar4 + 0x2e4);
      *(uint64_t *)((int64_t)plVar7 + 0x2ec) = uVar6;
      uVar6 = *(uint64_t *)(lVar4 + 0x2fc);
      *(uint64_t *)((int64_t)plVar7 + 0x2f4) = *(uint64_t *)(lVar4 + 0x2f4);
      *(uint64_t *)((int64_t)plVar7 + 0x2fc) = uVar6;
      uVar6 = *(uint64_t *)(lVar4 + 0x30c);
      *(uint64_t *)((int64_t)plVar7 + 0x304) = *(uint64_t *)(lVar4 + 0x304);
      *(uint64_t *)((int64_t)plVar7 + 0x30c) = uVar6;
      uVar6 = *(uint64_t *)(lVar4 + 0x31c);
      *(uint64_t *)((int64_t)plVar7 + 0x314) = *(uint64_t *)(lVar4 + 0x314);
      *(uint64_t *)((int64_t)plVar7 + 0x31c) = uVar6;
      uVar8 = *(int32_t *)(lVar4 + 0x328);
      uVar1 = *(int32_t *)(lVar4 + 0x32c);
      uVar2 = *(int32_t *)(lVar4 + 0x330);
      *(int32_t *)((int64_t)plVar7 + 0x324) = *(int32_t *)(lVar4 + 0x324);
      *(int32_t *)(plVar7 + 0x65) = uVar8;
      *(int32_t *)((int64_t)plVar7 + 0x32c) = uVar1;
      *(int32_t *)(plVar7 + 0x66) = uVar2;
      *(uint64_t *)((int64_t)plVar7 + 0x334) = *(uint64_t *)(lVar4 + 0x334);
      *(int *)(plVar7 + 0x65) = (int)lVar3;
    }
    if (uStack_98._1_1_ == '\0') {
      if (((char)uStack_98 == '\0') && (alStack_a8[0] != 0)) {
                    // WARNING: Subroutine does not return
        CoreEngineMemoryPoolCleaner();
      }
      alStack_a8[0] = 0;
      alStack_a8[1] = 0;
      uStack_98 = 0;
    }
  }
  plVar7 = (int64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0xd0,8,3);
  pplStack_c8 = (int64_t **)plVar7;
  FUN_180049830(plVar7);
  *plVar7 = (int64_t)&processed_var_7792_ptr;
  plVar7[0x18] = (int64_t)FUN_180489130;
  plVar7[0x19] = param_1;
  plStack_b8 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  uVar6 = system_context_ptr;
  uStack_d8 = 1;
  pplStack_c8 = &plStack_d0;
  plStack_d0 = plVar7;
  (**(code **)(*plVar7 + 0x28))(plVar7);
  FUN_18005e300(uVar6,&plStack_d0);
  uStack_d8 = 0;
  (**(code **)(*plVar7 + 0x38))(plVar7);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_38 ^ (uint64_t)auStack_108);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180489990(int64_t param_1)
void FUN_180489990(int64_t param_1)

{
  int64_t lVar1;
  int64_t *plVar2;
  uint64_t uVar3;
  int64_t *plVar4;
  code *pcVar5;
  int64_t lVar6;
  int64_t *plStackX_18;
  uint64_t uVar7;
  int8_t auStack_50 [16];
  code *pcStack_40;
  code *pcStack_38;
  
  uVar7 = 0xfffffffffffffffe;
  lVar1 = *(int64_t *)(param_1 + 0x9658);
  plVar4 = (int64_t *)FUN_180244ff0();
  if (plVar4 != (int64_t *)0x0) {
    (**(code **)(*plVar4 + 0x28))(plVar4);
  }
  plVar2 = *(int64_t **)(lVar1 + 0x18);
  *(int64_t **)(lVar1 + 0x18) = plVar4;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  if (*(int *)((int64_t)plVar4 + 0x324) == 1) {
    uVar3 = *(uint64_t *)(system_message_buffer + 0x1cd8);
    lVar6 = *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x1d8);
    if (lVar6 == 0) {
      lVar6 = 0;
    }
    else if (system_main_module_state != 0) {
      *(int64_t *)(*(int64_t *)(system_message_buffer + 0x121e0) + 0x340) =
           (int64_t)*(int *)(system_main_module_state + 0x224);
    }
    FUN_18029ad30(uVar3,0,lVar6,uVar3,uVar7);
    lVar6 = system_message_buffer;
    *(uint64_t *)(*(int64_t *)(system_message_buffer + 0x1cd8) + 0x83f0) = 0;
    FUN_18029de40(*(uint64_t *)(lVar6 + 0x1cd8),1);
    (**(code **)(*plVar4 + 0x28))(plVar4);
    FUN_1800e44b0();
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x28))(plStackX_18);
    }
    plVar4 = *(int64_t **)(lVar1 + 0x20);
    *(int64_t **)(lVar1 + 0x20) = plStackX_18;
    if (plVar4 != (int64_t *)0x0) {
      (**(code **)(*plVar4 + 0x38))();
    }
    if (plStackX_18 != (int64_t *)0x0) {
      (**(code **)(*plStackX_18 + 0x38))();
    }
  }
  pcStack_40 = (code *)0x0;
  pcStack_38 = _guard_check_icall;
  if (auStack_50 != (int8_t *)(lVar1 + 0x88)) {
    pcVar5 = *(code **)(lVar1 + 0x98);
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(auStack_50,(int8_t *)(lVar1 + 0x88),1);
      pcVar5 = *(code **)(lVar1 + 0x98);
    }
    pcStack_38 = *(code **)(lVar1 + 0xa0);
    pcStack_40 = pcVar5;
  }
  (*pcStack_38)(lVar1,auStack_50);
  if (pcStack_40 != (code *)0x0) {
    (*pcStack_40)(auStack_50,0,0);
  }
  return;
}





