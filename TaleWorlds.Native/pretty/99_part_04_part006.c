#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_04_part006.c - 7 个函数

// 函数: void FUN_18025b2c0(int64_t *param_1,int64_t param_2,int64_t param_3)
void FUN_18025b2c0(int64_t *param_1,int64_t param_2,int64_t param_3)

{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int64_t lVar5;
  
  lVar5 = param_3 - param_2;
  lVar1 = lVar5 + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(lVar5),8);
  uVar4 = (lVar1 >> 8) - (lVar1 >> 0x3f);
  lVar1 = *param_1;
  lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[2] - lVar1),8) +
          (param_1[2] - lVar1);
  if ((uint64_t)((lVar2 >> 8) - (lVar2 >> 0x3f)) < uVar4) {
    if (uVar4 == 0) {
      lVar1 = 0;
    }
    else {
      lVar1 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,uVar4 * 0x170,(char)param_1[3]);
    }
    FUN_18025b470(param_2,param_3,lVar1);
    lVar2 = param_1[1];
    lVar5 = *param_1;
    if (lVar5 != lVar2) {
      do {
        FUN_180257e50(lVar5);
        lVar5 = lVar5 + 0x170;
      } while (lVar5 != lVar2);
      lVar5 = *param_1;
    }
    if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
      CoreEngineMemoryPoolCleaner(lVar5);
    }
    *param_1 = lVar1;
    lVar1 = uVar4 * 0x170 + lVar1;
    param_1[1] = lVar1;
    param_1[2] = lVar1;
  }
  else {
    lVar2 = SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_1[1] - lVar1),8) +
            (param_1[1] - lVar1);
    uVar3 = (lVar2 >> 8) - (lVar2 >> 0x3f);
    if (uVar3 < uVar4) {
      lVar2 = uVar3 * 0x170 + param_2;
      FUN_18025b7e0(param_2,lVar2,lVar1,lVar5,0xfffffffffffffffe);
      lVar1 = FUN_18025b470(lVar2,param_3,param_1[1]);
      param_1[1] = lVar1;
    }
    else {
      lVar5 = FUN_18025b7e0(param_2,param_3,lVar1,lVar5,0xfffffffffffffffe);
      lVar1 = param_1[1];
      for (lVar2 = lVar5; lVar2 != lVar1; lVar2 = lVar2 + 0x170) {
        FUN_180257e50(lVar2);
      }
      param_1[1] = lVar5;
    }
  }
  return;
}



int64_t FUN_18025b470(int32_t *param_1,int32_t *param_2,int64_t param_3)

{
  int32_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  int64_t lVar5;
  int32_t *puVar6;
  
  if (param_1 != param_2) {
    lVar5 = param_3 - (int64_t)param_1;
    puVar6 = param_1 + 0x55;
    do {
      FUN_18025ac70(param_3,puVar6 + -0x55);
      *(int8_t *)(lVar5 + -4 + (int64_t)puVar6) = *(int8_t *)(puVar6 + -1);
      *(int32_t *)(lVar5 + (int64_t)puVar6) = *puVar6;
      uVar2 = puVar6[2];
      uVar3 = puVar6[3];
      uVar4 = puVar6[4];
      puVar1 = (int32_t *)(lVar5 + 4 + (int64_t)puVar6);
      *puVar1 = puVar6[1];
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
      puVar1[3] = uVar4;
      *(int32_t *)(lVar5 + 0x14 + (int64_t)puVar6) = puVar6[5];
      param_3 = param_3 + 0x170;
      puVar1 = puVar6 + 7;
      puVar6 = puVar6 + 0x5c;
    } while (puVar1 != param_2);
  }
  return param_3;
}



uint64_t * FUN_18025b520(uint64_t *param_1,uint64_t *param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  uint64_t uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  param_1[2] = &system_state_ptr;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  param_1[2] = &system_data_buffer_ptr;
  param_1[5] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 0;
  *(int32_t *)(param_1 + 4) = *(int32_t *)(param_2 + 4);
  param_1[3] = param_2[3];
  *(int32_t *)((int64_t)param_1 + 0x2c) = *(int32_t *)((int64_t)param_2 + 0x2c);
  *(int32_t *)(param_1 + 5) = *(int32_t *)(param_2 + 5);
  *(int32_t *)(param_2 + 4) = 0;
  param_2[3] = 0;
  param_2[5] = 0;
  *(int32_t *)(param_1 + 6) = *(int32_t *)(param_2 + 6);
  uVar3 = *(uint64_t *)((int64_t)param_2 + 0x3c);
  *(uint64_t *)((int64_t)param_1 + 0x34) = *(uint64_t *)((int64_t)param_2 + 0x34);
  *(uint64_t *)((int64_t)param_1 + 0x3c) = uVar3;
  uVar3 = *(uint64_t *)((int64_t)param_2 + 0x4c);
  *(uint64_t *)((int64_t)param_1 + 0x44) = *(uint64_t *)((int64_t)param_2 + 0x44);
  *(uint64_t *)((int64_t)param_1 + 0x4c) = uVar3;
  uVar3 = *(uint64_t *)((int64_t)param_2 + 0x5c);
  *(uint64_t *)((int64_t)param_1 + 0x54) = *(uint64_t *)((int64_t)param_2 + 0x54);
  *(uint64_t *)((int64_t)param_1 + 0x5c) = uVar3;
  uVar3 = *(uint64_t *)((int64_t)param_2 + 0x6c);
  *(uint64_t *)((int64_t)param_1 + 100) = *(uint64_t *)((int64_t)param_2 + 100);
  *(uint64_t *)((int64_t)param_1 + 0x6c) = uVar3;
  uVar3 = *(uint64_t *)((int64_t)param_2 + 0x7c);
  *(uint64_t *)((int64_t)param_1 + 0x74) = *(uint64_t *)((int64_t)param_2 + 0x74);
  *(uint64_t *)((int64_t)param_1 + 0x7c) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x84) = *(int32_t *)((int64_t)param_2 + 0x84);
  *(int32_t *)(param_1 + 0x11) = *(int32_t *)(param_2 + 0x11);
  *(int32_t *)((int64_t)param_1 + 0x8c) = *(int32_t *)((int64_t)param_2 + 0x8c);
  *(int32_t *)(param_1 + 0x12) = *(int32_t *)(param_2 + 0x12);
  *(int32_t *)((int64_t)param_1 + 0x94) = *(int32_t *)((int64_t)param_2 + 0x94);
  uVar3 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar3;
  uVar3 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar3;
  uVar3 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar3;
  *(int32_t *)(param_1 + 0x19) = *(int32_t *)(param_2 + 0x19);
  *(int32_t *)((int64_t)param_1 + 0xcc) = *(int32_t *)((int64_t)param_2 + 0xcc);
  puVar1 = param_1 + 0x1a;
  *puVar1 = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(param_2 + 0x1d);
  uVar3 = *puVar1;
  *puVar1 = param_2[0x1a];
  param_2[0x1a] = uVar3;
  uVar3 = param_1[0x1b];
  param_1[0x1b] = param_2[0x1b];
  param_2[0x1b] = uVar3;
  uVar3 = param_1[0x1c];
  param_1[0x1c] = param_2[0x1c];
  param_2[0x1c] = uVar3;
  uVar2 = *(int32_t *)(param_1 + 0x1d);
  *(int32_t *)(param_1 + 0x1d) = *(int32_t *)(param_2 + 0x1d);
  *(int32_t *)(param_2 + 0x1d) = uVar2;
  *(int32_t *)(param_1 + 0x1e) = *(int32_t *)(param_2 + 0x1e);
  param_1[0x1f] = &system_state_ptr;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  param_1[0x1f] = &system_data_buffer_ptr;
  param_1[0x22] = 0;
  param_1[0x20] = 0;
  *(int32_t *)(param_1 + 0x21) = 0;
  *(int32_t *)(param_1 + 0x21) = *(int32_t *)(param_2 + 0x21);
  param_1[0x20] = param_2[0x20];
  *(int32_t *)((int64_t)param_1 + 0x114) = *(int32_t *)((int64_t)param_2 + 0x114);
  *(int32_t *)(param_1 + 0x22) = *(int32_t *)(param_2 + 0x22);
  *(int32_t *)(param_2 + 0x21) = 0;
  param_2[0x20] = 0;
  param_2[0x22] = 0;
  *(int32_t *)(param_1 + 0x23) = *(int32_t *)(param_2 + 0x23);
  *(int32_t *)((int64_t)param_1 + 0x11c) = *(int32_t *)((int64_t)param_2 + 0x11c);
  *(int32_t *)(param_1 + 0x24) = *(int32_t *)(param_2 + 0x24);
  *(int32_t *)((int64_t)param_1 + 0x124) = *(int32_t *)((int64_t)param_2 + 0x124);
  *(int32_t *)(param_1 + 0x25) = *(int32_t *)(param_2 + 0x25);
  *(int32_t *)((int64_t)param_1 + 300) = *(int32_t *)((int64_t)param_2 + 300);
  *(int32_t *)(param_1 + 0x26) = *(int32_t *)(param_2 + 0x26);
  *(int32_t *)((int64_t)param_1 + 0x134) = *(int32_t *)((int64_t)param_2 + 0x134);
  *(int32_t *)(param_1 + 0x27) = *(int32_t *)(param_2 + 0x27);
  *(int32_t *)((int64_t)param_1 + 0x13c) = *(int32_t *)((int64_t)param_2 + 0x13c);
  *(int32_t *)(param_1 + 0x28) = *(int32_t *)(param_2 + 0x28);
  *(int32_t *)((int64_t)param_1 + 0x144) = *(int32_t *)((int64_t)param_2 + 0x144);
  *(int8_t *)(param_1 + 0x29) = *(int8_t *)(param_2 + 0x29);
  *(int8_t *)((int64_t)param_1 + 0x149) = *(int8_t *)((int64_t)param_2 + 0x149);
  *(int8_t *)((int64_t)param_1 + 0x14a) = *(int8_t *)((int64_t)param_2 + 0x14a);
  return param_1;
}



int32_t * FUN_18025b7e0(int64_t param_1,int64_t param_2,int32_t *param_3)

{
  int64_t *plVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t lVar12;
  int64_t lVar13;
  
  lVar12 = (param_2 - param_1) + SUB168(SEXT816(-0x4de9bd37a6f4de9b) * SEXT816(param_2 - param_1),8)
  ;
  lVar12 = (lVar12 >> 8) - (lVar12 >> 0x3f);
  if (0 < lVar12) {
    lVar13 = param_1 - (int64_t)param_3;
    plVar9 = (int64_t *)(param_3 + 0x40);
    plVar11 = (int64_t *)(param_1 + 0x100);
    do {
      puVar2 = (int32_t *)(lVar13 + -0x100 + (int64_t)plVar9);
      uVar4 = puVar2[1];
      uVar5 = puVar2[2];
      uVar6 = puVar2[3];
      *param_3 = *puVar2;
      param_3[1] = uVar4;
      param_3[2] = uVar5;
      param_3[3] = uVar6;
      uVar3 = *(uint *)(plVar11 + -0x1c);
      uVar10 = (uint64_t)uVar3;
      if (plVar11[-0x1d] != 0) {
        CoreEngineDataBufferProcessor(plVar9 + -0x1e,uVar10);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(plVar9[-0x1d],plVar11[-0x1d],uVar10);
      }
      *(int32_t *)(plVar9 + -0x1c) = 0;
      if (plVar9[-0x1d] != 0) {
        *(int8_t *)(uVar10 + plVar9[-0x1d]) = 0;
      }
      *(int32_t *)((int64_t)plVar9 + -0xd4) = *(int32_t *)((int64_t)plVar11 + -0xd4);
      *(int *)(plVar9 + -0x1a) = (int)plVar11[-0x1a];
      uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xc4);
      *(uint64_t *)((int64_t)plVar9 + -0xcc) = *(uint64_t *)((int64_t)plVar11 + -0xcc);
      *(uint64_t *)((int64_t)plVar9 + -0xc4) = uVar7;
      uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xb4);
      *(uint64_t *)((int64_t)plVar9 + -0xbc) = *(uint64_t *)((int64_t)plVar11 + -0xbc);
      *(uint64_t *)((int64_t)plVar9 + -0xb4) = uVar7;
      uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xa4);
      *(uint64_t *)((int64_t)plVar9 + -0xac) = *(uint64_t *)((int64_t)plVar11 + -0xac);
      *(uint64_t *)((int64_t)plVar9 + -0xa4) = uVar7;
      uVar7 = *(uint64_t *)((int64_t)plVar11 + -0x94);
      *(uint64_t *)((int64_t)plVar9 + -0x9c) = *(uint64_t *)((int64_t)plVar11 + -0x9c);
      *(uint64_t *)((int64_t)plVar9 + -0x94) = uVar7;
      uVar7 = *(uint64_t *)((int64_t)plVar11 + -0x84);
      *(uint64_t *)((int64_t)plVar9 + -0x8c) = *(uint64_t *)((int64_t)plVar11 + -0x8c);
      *(uint64_t *)((int64_t)plVar9 + -0x84) = uVar7;
      *(int32_t *)((int64_t)plVar9 + -0x7c) = *(int32_t *)((int64_t)plVar11 + -0x7c);
      *(int *)(plVar9 + -0xf) = (int)plVar11[-0xf];
      *(int32_t *)((int64_t)plVar9 + -0x74) = *(int32_t *)((int64_t)plVar11 + -0x74);
      *(int *)(plVar9 + -0xe) = (int)plVar11[-0xe];
      *(int32_t *)((int64_t)plVar9 + -0x6c) = *(int32_t *)((int64_t)plVar11 + -0x6c);
      lVar8 = plVar11[-0xc];
      plVar9[-0xd] = plVar11[-0xd];
      plVar9[-0xc] = lVar8;
      uVar4 = *(int32_t *)((int64_t)plVar11 + -0x54);
      lVar8 = plVar11[-10];
      uVar5 = *(int32_t *)((int64_t)plVar11 + -0x4c);
      *(int *)(plVar9 + -0xb) = (int)plVar11[-0xb];
      *(int32_t *)((int64_t)plVar9 + -0x54) = uVar4;
      *(int *)(plVar9 + -10) = (int)lVar8;
      *(int32_t *)((int64_t)plVar9 + -0x4c) = uVar5;
      uVar4 = *(int32_t *)((int64_t)plVar11 + -0x44);
      lVar8 = plVar11[-8];
      uVar5 = *(int32_t *)((int64_t)plVar11 + -0x3c);
      *(int *)(plVar9 + -9) = (int)plVar11[-9];
      *(int32_t *)((int64_t)plVar9 + -0x44) = uVar4;
      *(int *)(plVar9 + -8) = (int)lVar8;
      *(int32_t *)((int64_t)plVar9 + -0x3c) = uVar5;
      *(int *)(plVar9 + -7) = (int)plVar11[-7];
      *(int32_t *)((int64_t)plVar9 + -0x34) = *(int32_t *)((int64_t)plVar11 + -0x34);
      if (plVar9 + -6 != plVar11 + -6) {
        FUN_1800588c0(plVar9 + -6,plVar11[-6],plVar11[-5]);
      }
      *(int *)(plVar9 + -2) = (int)plVar11[-2];
      uVar3 = *(uint *)(plVar11 + 1);
      uVar10 = (uint64_t)uVar3;
      if (*plVar11 != 0) {
        CoreEngineDataBufferProcessor(plVar9 + -1,uVar10);
      }
      if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
        memcpy(*plVar9,*plVar11,uVar10);
      }
      *(int32_t *)(plVar9 + 1) = 0;
      if (*plVar9 != 0) {
        *(int8_t *)(uVar10 + *plVar9) = 0;
      }
      lVar12 = lVar12 + -1;
      *(int32_t *)((int64_t)plVar9 + 0x14) = *(int32_t *)((int64_t)plVar11 + 0x14);
      param_3 = param_3 + 0x5c;
      *(int *)(plVar9 + 3) = (int)plVar11[3];
      *(int32_t *)((int64_t)plVar9 + 0x1c) = *(int32_t *)((int64_t)plVar11 + 0x1c);
      *(int *)(plVar9 + 4) = (int)plVar11[4];
      *(int32_t *)((int64_t)plVar9 + 0x24) = *(int32_t *)((int64_t)plVar11 + 0x24);
      *(int *)(plVar9 + 5) = (int)plVar11[5];
      *(int32_t *)((int64_t)plVar9 + 0x2c) = *(int32_t *)((int64_t)plVar11 + 0x2c);
      *(int *)(plVar9 + 6) = (int)plVar11[6];
      *(int32_t *)((int64_t)plVar9 + 0x34) = *(int32_t *)((int64_t)plVar11 + 0x34);
      *(int *)(plVar9 + 7) = (int)plVar11[7];
      *(int32_t *)((int64_t)plVar9 + 0x3c) = *(int32_t *)((int64_t)plVar11 + 0x3c);
      *(int *)(plVar9 + 8) = (int)plVar11[8];
      *(int32_t *)((int64_t)plVar9 + 0x44) = *(int32_t *)((int64_t)plVar11 + 0x44);
      *(char *)(plVar9 + 9) = (char)plVar11[9];
      *(int8_t *)((int64_t)plVar9 + 0x49) = *(int8_t *)((int64_t)plVar11 + 0x49);
      *(int8_t *)((int64_t)plVar9 + 0x4a) = *(int8_t *)((int64_t)plVar11 + 0x4a);
      *(char *)(plVar9 + 10) = (char)plVar11[10];
      *(int32_t *)((int64_t)plVar9 + 0x54) = *(int32_t *)((int64_t)plVar11 + 0x54);
      lVar8 = plVar11[0xc];
      plVar9[0xb] = plVar11[0xb];
      plVar9[0xc] = lVar8;
      plVar1 = plVar11 + 0xd;
      plVar11 = plVar11 + 0x2e;
      *(int *)(plVar9 + 0xd) = (int)*plVar1;
      plVar9 = plVar9 + 0x2e;
    } while (0 < lVar12);
  }
  return param_3;
}



int32_t * FUN_18025b81e(int64_t param_1,uint64_t param_2,int64_t param_3)

{
  int64_t *plVar1;
  int32_t *puVar2;
  uint uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t *plVar9;
  int32_t *unaff_RBP;
  uint64_t uVar10;
  int64_t *plVar11;
  int64_t unaff_R14;
  int64_t unaff_R15;
  
  plVar9 = (int64_t *)(param_3 + 0x100);
  plVar11 = (int64_t *)(param_1 + 0x100);
  while( true ) {
    puVar2 = (int32_t *)((unaff_R15 - param_3) + -0x100 + (int64_t)plVar9);
    uVar4 = puVar2[1];
    uVar5 = puVar2[2];
    uVar6 = puVar2[3];
    *unaff_RBP = *puVar2;
    unaff_RBP[1] = uVar4;
    unaff_RBP[2] = uVar5;
    unaff_RBP[3] = uVar6;
    uVar3 = *(uint *)(plVar11 + -0x1c);
    uVar10 = (uint64_t)uVar3;
    if (plVar11[-0x1d] != 0) {
      CoreEngineDataBufferProcessor(plVar9 + -0x1e,uVar10);
    }
    if (uVar3 != 0) {
                    // WARNING: Subroutine does not return
      memcpy(plVar9[-0x1d],plVar11[-0x1d],uVar10);
    }
    *(int32_t *)(plVar9 + -0x1c) = 0;
    if (plVar9[-0x1d] != 0) {
      *(int8_t *)(uVar10 + plVar9[-0x1d]) = 0;
    }
    *(int32_t *)((int64_t)plVar9 + -0xd4) = *(int32_t *)((int64_t)plVar11 + -0xd4);
    *(int *)(plVar9 + -0x1a) = (int)plVar11[-0x1a];
    uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xc4);
    *(uint64_t *)((int64_t)plVar9 + -0xcc) = *(uint64_t *)((int64_t)plVar11 + -0xcc);
    *(uint64_t *)((int64_t)plVar9 + -0xc4) = uVar7;
    uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xb4);
    *(uint64_t *)((int64_t)plVar9 + -0xbc) = *(uint64_t *)((int64_t)plVar11 + -0xbc);
    *(uint64_t *)((int64_t)plVar9 + -0xb4) = uVar7;
    uVar7 = *(uint64_t *)((int64_t)plVar11 + -0xa4);
    *(uint64_t *)((int64_t)plVar9 + -0xac) = *(uint64_t *)((int64_t)plVar11 + -0xac);
    *(uint64_t *)((int64_t)plVar9 + -0xa4) = uVar7;
    uVar7 = *(uint64_t *)((int64_t)plVar11 + -0x94);
    *(uint64_t *)((int64_t)plVar9 + -0x9c) = *(uint64_t *)((int64_t)plVar11 + -0x9c);
    *(uint64_t *)((int64_t)plVar9 + -0x94) = uVar7;
    uVar7 = *(uint64_t *)((int64_t)plVar11 + -0x84);
    *(uint64_t *)((int64_t)plVar9 + -0x8c) = *(uint64_t *)((int64_t)plVar11 + -0x8c);
    *(uint64_t *)((int64_t)plVar9 + -0x84) = uVar7;
    *(int32_t *)((int64_t)plVar9 + -0x7c) = *(int32_t *)((int64_t)plVar11 + -0x7c);
    *(int *)(plVar9 + -0xf) = (int)plVar11[-0xf];
    *(int32_t *)((int64_t)plVar9 + -0x74) = *(int32_t *)((int64_t)plVar11 + -0x74);
    *(int *)(plVar9 + -0xe) = (int)plVar11[-0xe];
    *(int32_t *)((int64_t)plVar9 + -0x6c) = *(int32_t *)((int64_t)plVar11 + -0x6c);
    lVar8 = plVar11[-0xc];
    plVar9[-0xd] = plVar11[-0xd];
    plVar9[-0xc] = lVar8;
    uVar4 = *(int32_t *)((int64_t)plVar11 + -0x54);
    lVar8 = plVar11[-10];
    uVar5 = *(int32_t *)((int64_t)plVar11 + -0x4c);
    *(int *)(plVar9 + -0xb) = (int)plVar11[-0xb];
    *(int32_t *)((int64_t)plVar9 + -0x54) = uVar4;
    *(int *)(plVar9 + -10) = (int)lVar8;
    *(int32_t *)((int64_t)plVar9 + -0x4c) = uVar5;
    uVar4 = *(int32_t *)((int64_t)plVar11 + -0x44);
    lVar8 = plVar11[-8];
    uVar5 = *(int32_t *)((int64_t)plVar11 + -0x3c);
    *(int *)(plVar9 + -9) = (int)plVar11[-9];
    *(int32_t *)((int64_t)plVar9 + -0x44) = uVar4;
    *(int *)(plVar9 + -8) = (int)lVar8;
    *(int32_t *)((int64_t)plVar9 + -0x3c) = uVar5;
    *(int *)(plVar9 + -7) = (int)plVar11[-7];
    *(int32_t *)((int64_t)plVar9 + -0x34) = *(int32_t *)((int64_t)plVar11 + -0x34);
    if (plVar9 + -6 != plVar11 + -6) {
      FUN_1800588c0(plVar9 + -6,plVar11[-6],plVar11[-5]);
    }
    *(int *)(plVar9 + -2) = (int)plVar11[-2];
    uVar3 = *(uint *)(plVar11 + 1);
    uVar10 = (uint64_t)uVar3;
    if (*plVar11 != 0) {
      CoreEngineDataBufferProcessor(plVar9 + -1,uVar10);
    }
    if (uVar3 != 0) break;
    *(int32_t *)(plVar9 + 1) = 0;
    if (*plVar9 != 0) {
      *(int8_t *)(uVar10 + *plVar9) = 0;
    }
    unaff_R14 = unaff_R14 + -1;
    *(int32_t *)((int64_t)plVar9 + 0x14) = *(int32_t *)((int64_t)plVar11 + 0x14);
    unaff_RBP = unaff_RBP + 0x5c;
    *(int *)(plVar9 + 3) = (int)plVar11[3];
    *(int32_t *)((int64_t)plVar9 + 0x1c) = *(int32_t *)((int64_t)plVar11 + 0x1c);
    *(int *)(plVar9 + 4) = (int)plVar11[4];
    *(int32_t *)((int64_t)plVar9 + 0x24) = *(int32_t *)((int64_t)plVar11 + 0x24);
    *(int *)(plVar9 + 5) = (int)plVar11[5];
    *(int32_t *)((int64_t)plVar9 + 0x2c) = *(int32_t *)((int64_t)plVar11 + 0x2c);
    *(int *)(plVar9 + 6) = (int)plVar11[6];
    *(int32_t *)((int64_t)plVar9 + 0x34) = *(int32_t *)((int64_t)plVar11 + 0x34);
    *(int *)(plVar9 + 7) = (int)plVar11[7];
    *(int32_t *)((int64_t)plVar9 + 0x3c) = *(int32_t *)((int64_t)plVar11 + 0x3c);
    *(int *)(plVar9 + 8) = (int)plVar11[8];
    *(int32_t *)((int64_t)plVar9 + 0x44) = *(int32_t *)((int64_t)plVar11 + 0x44);
    *(char *)(plVar9 + 9) = (char)plVar11[9];
    *(int8_t *)((int64_t)plVar9 + 0x49) = *(int8_t *)((int64_t)plVar11 + 0x49);
    *(int8_t *)((int64_t)plVar9 + 0x4a) = *(int8_t *)((int64_t)plVar11 + 0x4a);
    *(char *)(plVar9 + 10) = (char)plVar11[10];
    *(int32_t *)((int64_t)plVar9 + 0x54) = *(int32_t *)((int64_t)plVar11 + 0x54);
    lVar8 = plVar11[0xc];
    plVar9[0xb] = plVar11[0xb];
    plVar9[0xc] = lVar8;
    plVar1 = plVar11 + 0xd;
    plVar11 = plVar11 + 0x2e;
    *(int *)(plVar9 + 0xd) = (int)*plVar1;
    plVar9 = plVar9 + 0x2e;
    if (unaff_R14 < 1) {
      return unaff_RBP;
    }
  }
                    // WARNING: Subroutine does not return
  memcpy(*plVar9,*plVar11,uVar10);
}






// 函数: void FUN_18025ba3d(void)
void FUN_18025ba3d(void)

{
  return;
}



uint64_t *
FUN_18025ba50(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &memory_allocator_3584_ptr;
  if (param_1[0xe] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[8] = &system_data_buffer_ptr;
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[9] = 0;
  *(int32_t *)(param_1 + 0xb) = 0;
  param_1[8] = &system_state_ptr;
  *param_1 = &processed_var_5192_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x90,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_18025bb00(uint64_t param_1,int64_t param_2)

{
  uint64_t *puVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  
  puVar6 = (uint64_t *)CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x90,8,0x1a,0xfffffffffffffffe);
  *puVar6 = &processed_var_5192_ptr;
  *puVar6 = &memory_allocator_3584_ptr;
  puVar6[4] = 0;
  puVar6[5] = 0;
  puVar6[6] = 0;
  *(int8_t *)(puVar6 + 7) = 0;
  puVar1 = puVar6 + 8;
  *puVar1 = &system_state_ptr;
  puVar6[9] = 0;
  *(int32_t *)(puVar6 + 10) = 0;
  *puVar1 = &system_data_buffer_ptr;
  puVar6[0xb] = 0;
  puVar6[9] = 0;
  *(int32_t *)(puVar6 + 10) = 0;
  puVar6[0xe] = 0;
  puVar6[0xf] = 0;
  puVar6[0x10] = 0;
  *(int32_t *)(puVar6 + 0x11) = 3;
  *(int32_t *)(puVar6 + 3) = 0;
  *(int32_t *)((int64_t)puVar6 + 0x3c) = 1;
  puVar6[0xc] = 0;
  *(int8_t *)((int64_t)puVar6 + 0x1c) = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[0xd] = 0;
  if (param_2 != 0) {
    uVar5 = *(uint64_t *)(param_2 + 0x10);
    puVar6[1] = *(uint64_t *)(param_2 + 8);
    puVar6[2] = uVar5;
    *(int32_t *)(puVar6 + 3) = *(int32_t *)(param_2 + 0x18);
    *(int8_t *)((int64_t)puVar6 + 0x1c) = *(int8_t *)(param_2 + 0x1c);
    uVar2 = *(int32_t *)(param_2 + 0x24);
    uVar3 = *(int32_t *)(param_2 + 0x28);
    uVar4 = *(int32_t *)(param_2 + 0x2c);
    *(int32_t *)(puVar6 + 4) = *(int32_t *)(param_2 + 0x20);
    *(int32_t *)((int64_t)puVar6 + 0x24) = uVar2;
    *(int32_t *)(puVar6 + 5) = uVar3;
    *(int32_t *)((int64_t)puVar6 + 0x2c) = uVar4;
    puVar6[6] = *(uint64_t *)(param_2 + 0x30);
    *(int32_t *)(puVar6 + 7) = *(int32_t *)(param_2 + 0x38);
    *(int32_t *)((int64_t)puVar6 + 0x3c) = *(int32_t *)(param_2 + 0x3c);
    SystemEventProcessor(puVar1,param_2 + 0x40);
    puVar6[0xc] = *(uint64_t *)(param_2 + 0x60);
    puVar6[0xd] = *(uint64_t *)(param_2 + 0x68);
    FUN_18014e160(puVar6 + 0xe,param_2 + 0x70);
  }
  return puVar6;
}






// 函数: void FUN_18025bc40(int64_t param_1,int64_t param_2)
void FUN_18025bc40(int64_t param_1,int64_t param_2)

{
  int64_t *plVar1;
  int64_t *plStackX_8;
  int64_t **pplStackX_10;
  
  if (*(int64_t *)(param_2 + 0xb0) == 0) {
    plVar1 = *(int64_t **)(param_1 + 0xb0);
    if (plVar1 != (int64_t *)0x0) {
      plStackX_8 = plVar1;
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plStackX_8 = *(int64_t **)(param_2 + 0xb0);
    *(int64_t **)(param_2 + 0xb0) = plVar1;
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x38))();
    }
  }
  else {
    pplStackX_10 = &plStackX_8;
    plStackX_8 = *(int64_t **)(param_1 + 0xb0);
    if (plStackX_8 != (int64_t *)0x0) {
      (**(code **)(*plStackX_8 + 0x28))();
    }
    FUN_1800b55b0();
  }
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    *(int64_t *)(*(int64_t *)(param_1 + 0xb0) + 0xa8) = param_2;
    FUN_18023ccc0(*(uint64_t *)(param_1 + 0xb0));
  }
  plStackX_8 = *(int64_t **)(param_1 + 0xb0);
  *(uint64_t *)(param_1 + 0xb0) = 0;
  if (plStackX_8 != (int64_t *)0x0) {
    (**(code **)(*plStackX_8 + 0x38))();
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025bd30(int64_t param_1)
void FUN_18025bd30(int64_t param_1)

{
  int64_t *plVar1;
  int64_t lVar2;
  int iVar3;
  uint64_t uVar4;
  int64_t *plVar5;
  void *puVar6;
  
  if (*(int64_t *)(param_1 + 0xb0) == 0) {
    uVar4 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x3b0,0x10,5,0,0xfffffffffffffffe);
    plVar5 = (int64_t *)FUN_18023a2e0(uVar4,0);
    if (plVar5 != (int64_t *)0x0) {
      (**(code **)(*plVar5 + 0x28))(plVar5);
    }
    plVar5[0x15] = param_1;
    puVar6 = &system_buffer_ptr;
    if (*(void **)(param_1 + 0x70) != (void *)0x0) {
      puVar6 = *(void **)(param_1 + 0x70);
    }
    (**(code **)(plVar5[2] + 0x10))(plVar5 + 2,puVar6);
    plVar1 = *(int64_t **)(param_1 + 0xb0);
    *(int64_t **)(param_1 + 0xb0) = plVar5;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    *(int8_t *)(*(int64_t *)(param_1 + 0xb0) + 0xb1) = 1;
    FUN_18023ccc0(*(uint64_t *)(param_1 + 0xb0));
    lVar2 = system_resource_state;
    plVar5 = *(int64_t **)(param_1 + 0xb0);
    iVar3 = (**(code **)(*plVar5 + 0x60))(plVar5);
    *(int8_t *)((int64_t)plVar5 + 0xb2) = 1;
    FUN_1802abe00((int64_t)iVar3 * 0x98 + lVar2 + 8,plVar5);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025be60(int64_t param_1)
void FUN_18025be60(int64_t param_1)

{
  uint64_t uVar1;
  int8_t auStack_88 [32];
  int64_t *plStack_68;
  int64_t **pplStack_60;
  uint64_t uStack_58;
  void *puStack_50;
  int8_t *puStack_48;
  int32_t uStack_40;
  int8_t auStack_38 [32];
  uint64_t uStack_18;
  
  uStack_58 = 0xfffffffffffffffe;
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_88;
  if (*(int64_t *)(param_1 + 0xb0) != 0) {
    puStack_50 = &processed_var_672_ptr;
    puStack_48 = auStack_38;
    auStack_38[0] = 0;
    uStack_40 = 0x10;
    strcpy_s(auStack_38,0x20,&processed_var_9256_ptr);
    uVar1 = FUN_180086e40(system_system_data_config,&ui_system_data_1168_ptr,&puStack_50);
    *(uint64_t *)(*(int64_t *)(param_1 + 0xb0) + 0xa8) = uVar1;
    puStack_50 = &system_state_ptr;
    FUN_18023ccc0(*(uint64_t *)(param_1 + 0xb0));
    pplStack_60 = &plStack_68;
    plStack_68 = *(int64_t **)(param_1 + 0xb0);
    if (plStack_68 != (int64_t *)0x0) {
      (**(code **)(*plStack_68 + 0x28))();
    }
    FUN_1800b55b0();
    pplStack_60 = *(int64_t ***)(param_1 + 0xb0);
    *(uint64_t *)(param_1 + 0xb0) = 0;
    if (pplStack_60 != (int64_t **)0x0) {
      (**(code **)((int64_t)*pplStack_60 + 0x38))();
    }
  }
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_88);
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025bfa0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_18025bfa0(int64_t param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t lVar1;
  char cVar2;
  void *puStackX_18;
  uint64_t uStackX_20;
  
  lVar1 = *(int64_t *)(param_1 + 0x20);
  cVar2 = FUN_180624af0(lVar1 + 0x40);
  if (cVar2 != '\0') {
    cVar2 = FUN_18062da70(lVar1 + 0x40);
    if (cVar2 == '\0') {
      puStackX_18 = &system_buffer_ptr;
      if (*(void **)(lVar1 + 0x48) != (void *)0x0) {
        puStackX_18 = *(void **)(lVar1 + 0x48);
      }
      uStackX_20 = param_4;
      FUN_180061f80(system_message_context,0,0xffffffff00000000,0xd,&system_param1_ptr,&puStackX_18);
      return;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




// 函数: void FUN_18025c000(uint64_t param_1,int32_t param_2,uint64_t param_3)
void FUN_18025c000(uint64_t param_1,int32_t param_2,uint64_t param_3)

{
  int8_t auStack_a8 [32];
  uint64_t uStack_88;
  int32_t uStack_80;
  uint64_t uStack_7c;
  uint64_t uStack_74;
  int32_t uStack_6c;
  uint64_t uStack_68;
  uint64_t uStack_60;
  uint64_t uStack_58;
  uint64_t uStack_50;
  uint64_t uStack_48;
  uint64_t uStack_40;
  uint64_t uStack_38;
  uint64_t uStack_30;
  int32_t uStack_28;
  uint64_t uStack_24;
  uint64_t uStack_18;
  
  uStack_18 = GET_SECURITY_COOKIE() ^ (uint64_t)auStack_a8;
  uStack_88 = 0;
  uStack_80 = 0;
  uStack_7c = 0;
  uStack_74 = 0;
  uStack_6c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  uStack_68 = 0;
  uStack_60 = 0;
  uStack_58 = 0;
  uStack_50 = 0;
  uStack_48 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = 0;
  FUN_18025c3e0(&uStack_88,param_1,param_2);
  FUN_18025c090(&uStack_88,param_3);
                    // WARNING: Subroutine does not return
  SystemSecurityChecker(uStack_18 ^ (uint64_t)auStack_a8);
}






