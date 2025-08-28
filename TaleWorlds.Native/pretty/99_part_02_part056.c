#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"

// 99_part_02_part056.c - 6 个函数

// 函数: void FUN_1801c1af0(int64_t *param_1,int64_t *param_2)
void FUN_1801c1af0(int64_t *param_1,int64_t *param_2)

{
  uint64_t *puVar1;
  int64_t lVar2;
  uint64_t uVar3;
  int64_t lVar4;
  int64_t lVar5;
  int iVar6;
  int64_t lVar7;
  
  iVar6 = 0;
  lVar4 = *param_1;
  if (param_1[1] - lVar4 >> 3 != 0) {
    lVar7 = 0;
    do {
      lVar4 = *(int64_t *)(lVar7 + lVar4);
      lVar5 = param_2[1] - *param_2 >> 3;
      if (lVar5 == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = FUN_18062b420(system_memory_pool_ptr,lVar5 * 8,*(uint *)(param_2 + 3) & 0xff);
      }
      lVar2 = *param_2;
      if (lVar2 != param_2[1]) {
                    // WARNING: Subroutine does not return
        memmove(lVar5,lVar2,param_2[1] - lVar2);
      }
      puVar1 = (uint64_t *)(lVar4 + 8);
      uVar3 = *puVar1;
      *(uint64_t *)(lVar4 + 0x10) = uVar3;
      FUN_180058a20(puVar1,uVar3,lVar5,lVar5);
      if (lVar5 != 0) {
                    // WARNING: Subroutine does not return
        FUN_18064e900();
      }
      iVar6 = iVar6 + 1;
      lVar7 = lVar7 + 8;
      lVar4 = *param_1;
    } while ((uint64_t)(int64_t)iVar6 < (uint64_t)(param_1[1] - lVar4 >> 3));
  }
  if (*param_2 != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  return;
}



uint64_t *
FUN_1801c1c40(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)

{
  int64_t *plVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  uint64_t uVar6;
  uint64_t *puVar7;
  uint64_t *puVar8;
  uint64_t *puVar9;
  uint64_t *puVar10;
  int64_t lVar11;
  int64_t lVar12;
  int64_t *plVar13;
  
  *param_1 = *param_2;
  *(int32_t *)(param_1 + 1) = *(int32_t *)(param_2 + 1);
  plVar13 = (int64_t *)param_2[2];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13,param_2,param_3,param_4,0xfffffffffffffffe);
  }
  plVar1 = (int64_t *)param_1[2];
  param_1[2] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar12 = 2;
  lVar11 = 2;
  puVar7 = param_1 + 4;
  puVar8 = param_2 + 4;
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar9[0x10] = puVar10[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar9[0x12] = puVar10[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar10[0x15];
  puVar9[0x14] = puVar10[0x14];
  puVar9[0x15] = uVar6;
  uVar6 = puVar10[0x17];
  puVar9[0x16] = puVar10[0x16];
  puVar9[0x17] = uVar6;
  uVar6 = param_2[0x2d];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2d] = uVar6;
  uVar6 = param_2[0x2f];
  param_1[0x2e] = param_2[0x2e];
  param_1[0x2f] = uVar6;
  uVar6 = param_2[0x31];
  param_1[0x30] = param_2[0x30];
  param_1[0x31] = uVar6;
  uVar6 = param_2[0x33];
  param_1[0x32] = param_2[0x32];
  param_1[0x33] = uVar6;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x1a4);
  uVar4 = *(int32_t *)(param_2 + 0x35);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x1ac);
  *(int32_t *)(param_1 + 0x34) = *(int32_t *)(param_2 + 0x34);
  *(int32_t *)((int64_t)param_1 + 0x1a4) = uVar3;
  *(int32_t *)(param_1 + 0x35) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x1ac) = uVar5;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x1b4);
  uVar4 = *(int32_t *)(param_2 + 0x37);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x1bc);
  *(int32_t *)(param_1 + 0x36) = *(int32_t *)(param_2 + 0x36);
  *(int32_t *)((int64_t)param_1 + 0x1b4) = uVar3;
  *(int32_t *)(param_1 + 0x37) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x1bc) = uVar5;
  *(int32_t *)(param_1 + 0x38) = *(int32_t *)(param_2 + 0x38);
  plVar13 = (int64_t *)param_2[0x39];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0x39];
  param_1[0x39] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0x3a];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0x3a];
  param_1[0x3a] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0x3b];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0x3b];
  param_1[0x3b] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0x3c];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0x3c];
  param_1[0x3c] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar11 = 2;
  puVar7 = param_1 + 0x3e;
  puVar8 = param_2 + 0x3e;
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar9[0x10] = puVar10[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar9[0x12] = puVar10[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar10[0x15];
  puVar9[0x14] = puVar10[0x14];
  puVar9[0x15] = uVar6;
  uVar6 = puVar10[0x17];
  puVar9[0x16] = puVar10[0x16];
  puVar9[0x17] = uVar6;
  lVar11 = 2;
  puVar7 = param_1 + 0x66;
  puVar8 = param_2 + 0x66;
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar9[0x10] = puVar10[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar9[0x12] = puVar10[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar10[0x15];
  puVar9[0x14] = puVar10[0x14];
  puVar9[0x15] = uVar6;
  uVar6 = puVar10[0x17];
  puVar9[0x16] = puVar10[0x16];
  puVar9[0x17] = uVar6;
  lVar11 = 2;
  puVar7 = param_1 + 0x8e;
  puVar8 = param_2 + 0x8e;
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar11 = lVar11 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar11 != 0);
  uVar6 = puVar10[0x11];
  puVar9[0x10] = puVar10[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar9[0x12] = puVar10[0x12];
  puVar9[0x13] = uVar6;
  uVar6 = puVar10[0x15];
  puVar9[0x14] = puVar10[0x14];
  puVar9[0x15] = uVar6;
  uVar6 = puVar10[0x17];
  puVar9[0x16] = puVar10[0x16];
  puVar9[0x17] = uVar6;
  puVar7 = param_1 + 0xb6;
  puVar8 = param_2 + 0xb6;
  do {
    puVar10 = puVar8;
    puVar9 = puVar7;
    uVar6 = puVar10[1];
    *puVar9 = *puVar10;
    puVar9[1] = uVar6;
    uVar6 = puVar10[3];
    puVar9[2] = puVar10[2];
    puVar9[3] = uVar6;
    uVar6 = puVar10[5];
    puVar9[4] = puVar10[4];
    puVar9[5] = uVar6;
    uVar6 = puVar10[7];
    puVar9[6] = puVar10[6];
    puVar9[7] = uVar6;
    uVar6 = puVar10[9];
    puVar9[8] = puVar10[8];
    puVar9[9] = uVar6;
    uVar6 = puVar10[0xb];
    puVar9[10] = puVar10[10];
    puVar9[0xb] = uVar6;
    uVar6 = puVar10[0xd];
    puVar9[0xc] = puVar10[0xc];
    puVar9[0xd] = uVar6;
    uVar6 = puVar10[0xf];
    puVar9[0xe] = puVar10[0xe];
    puVar9[0xf] = uVar6;
    lVar12 = lVar12 + -1;
    puVar7 = puVar9 + 0x10;
    puVar8 = puVar10 + 0x10;
  } while (lVar12 != 0);
  uVar6 = puVar10[0x11];
  puVar9[0x10] = puVar10[0x10];
  puVar9[0x11] = uVar6;
  uVar6 = puVar10[0x13];
  puVar9[0x12] = puVar10[0x12];
  puVar9[0x13] = uVar6;
  uVar3 = *(int32_t *)((int64_t)puVar10 + 0xa4);
  uVar4 = *(int32_t *)(puVar10 + 0x15);
  uVar5 = *(int32_t *)((int64_t)puVar10 + 0xac);
  *(int32_t *)(puVar9 + 0x14) = *(int32_t *)(puVar10 + 0x14);
  *(int32_t *)((int64_t)puVar9 + 0xa4) = uVar3;
  *(int32_t *)(puVar9 + 0x15) = uVar4;
  *(int32_t *)((int64_t)puVar9 + 0xac) = uVar5;
  uVar6 = puVar10[0x17];
  puVar9[0x16] = puVar10[0x16];
  puVar9[0x17] = uVar6;
  plVar13 = param_1 + 0xde;
  lVar11 = 3;
  do {
    plVar1 = *(int64_t **)(((int64_t)param_2 - (int64_t)param_1) + (int64_t)plVar13);
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x28))(plVar1);
    }
    plVar2 = (int64_t *)*plVar13;
    *plVar13 = (int64_t)plVar1;
    if (plVar2 != (int64_t *)0x0) {
      (**(code **)(*plVar2 + 0x38))();
    }
    plVar13 = plVar13 + 1;
    lVar11 = lVar11 + -1;
  } while (lVar11 != 0);
  plVar13 = (int64_t *)param_2[0xe1];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe1];
  param_1[0xe1] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe2];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe2];
  param_1[0xe2] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe3];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe3];
  param_1[0xe3] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe4];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe4];
  param_1[0xe4] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  param_1[0xe5] = param_2[0xe5];
  plVar13 = (int64_t *)param_2[0xe6];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe6];
  param_1[0xe6] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe7];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe7];
  param_1[0xe7] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe8];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe8];
  param_1[0xe8] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar13 = (int64_t *)param_2[0xe9];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xe9];
  param_1[0xe9] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xea) = *(int32_t *)(param_2 + 0xea);
  *(int8_t *)((int64_t)param_1 + 0x754) = *(int8_t *)((int64_t)param_2 + 0x754);
  *(int8_t *)((int64_t)param_1 + 0x755) = *(int8_t *)((int64_t)param_2 + 0x755);
  *(int32_t *)(param_1 + 0xeb) = *(int32_t *)(param_2 + 0xeb);
  uVar6 = *(uint64_t *)((int64_t)param_2 + 0x764);
  *(uint64_t *)((int64_t)param_1 + 0x75c) = *(uint64_t *)((int64_t)param_2 + 0x75c);
  *(uint64_t *)((int64_t)param_1 + 0x764) = uVar6;
  uVar6 = *(uint64_t *)((int64_t)param_2 + 0x774);
  *(uint64_t *)((int64_t)param_1 + 0x76c) = *(uint64_t *)((int64_t)param_2 + 0x76c);
  *(uint64_t *)((int64_t)param_1 + 0x774) = uVar6;
  uVar3 = *(int32_t *)(param_2 + 0xf0);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x784);
  uVar5 = *(int32_t *)(param_2 + 0xf1);
  *(int32_t *)((int64_t)param_1 + 0x77c) = *(int32_t *)((int64_t)param_2 + 0x77c);
  *(int32_t *)(param_1 + 0xf0) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x784) = uVar4;
  *(int32_t *)(param_1 + 0xf1) = uVar5;
  *(uint64_t *)((int64_t)param_1 + 0x78c) = *(uint64_t *)((int64_t)param_2 + 0x78c);
  *(int32_t *)((int64_t)param_1 + 0x794) = *(int32_t *)((int64_t)param_2 + 0x794);
  plVar13 = (int64_t *)param_2[0xf3];
  if (plVar13 != (int64_t *)0x0) {
    (**(code **)(*plVar13 + 0x28))(plVar13);
  }
  plVar1 = (int64_t *)param_1[0xf3];
  param_1[0xf3] = plVar13;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  *(int32_t *)(param_1 + 0xf4) = *(int32_t *)(param_2 + 0xf4);
  *(int32_t *)((int64_t)param_1 + 0x7a4) = *(int32_t *)((int64_t)param_2 + 0x7a4);
  return param_1;
}



uint64_t * FUN_1801c2360(int64_t *param_1,uint64_t *param_2)

{
  int64_t lVar1;
  uint64_t uVar2;
  int64_t lVar3;
  uint64_t uVar4;
  uint64_t uStack_18;
  uint64_t uStack_10;
  
  lVar1 = *param_1;
  uVar2 = 0;
  while( true ) {
    lVar3 = (uVar2 & 0xffffffff) * 0x10;
    uVar4 = lVar3 + 8 + lVar1;
    if ((*(uint64_t *)(lVar3 + lVar1) & 0xffffffff00000000) == 0) {
      uVar4 = 0;
    }
    if (uVar4 != 0) break;
    uVar4 = param_1[1];
    if (uVar2 == uVar4) {
      *param_2 = param_1;
      param_2[1] = uVar4;
      param_2[2] = 0;
      param_2[3] = 0;
      if ((*(uint64_t *)(*(int64_t *)*param_2 + (int64_t)*(int *)(param_2 + 1) * 0x10) &
          0xffffffff00000000) == 0) {
        return param_2;
      }
      param_2[3] = *(uint64_t *)(*(int64_t *)*param_2 + 8 + (param_2[1] & 0xffffffff) * 0x10);
      param_2[2] = param_2[1];
      return param_2;
    }
    uVar2 = uVar2 + 1;
  }
  uStack_18 = 0;
  uStack_10 = 0;
  if ((*(uint64_t *)(lVar1 + (int64_t)(int)uVar2 * 0x10) & 0xffffffff00000000) != 0) {
    uStack_10 = *(uint64_t *)(lVar1 + 8 + (uVar2 & 0xffffffff) * 0x10);
    uStack_18 = uVar2;
  }
  *param_2 = param_1;
  param_2[1] = uVar2;
  param_2[2] = uStack_18;
  param_2[3] = uStack_10;
  return param_2;
}






// 函数: void FUN_1801c2460(uint64_t param_1,int64_t *param_2,int32_t param_3,uint64_t param_4)
void FUN_1801c2460(uint64_t param_1,int64_t *param_2,int32_t param_3,uint64_t param_4)

{
  FUN_180198980(param_1,*param_2,param_3,param_4,param_3);
  if ((int64_t *)*param_2 != (int64_t *)0x0) {
                    // WARNING: Could not recover jumptable at 0x0001801c2494. Too many branches
                    // WARNING: Treating indirect jump as call
    (**(code **)(*(int64_t *)*param_2 + 0x38))();
    return;
  }
  return;
}



uint64_t FUN_1801c24a0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int8_t auVar5 [16];
  float fVar6;
  float fVar7;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fVar7 = fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3;
  fVar6 = fVar7;
  if (fVar7 <= 1.1754944e-38) {
    fVar6 = 1.1754944e-38;
  }
  auVar5 = rsqrtss(ZEXT416((uint)fVar6),ZEXT416((uint)fVar6));
  fVar4 = auVar5._0_4_;
  fVar6 = fVar4 * 0.5 * (3.0 - fVar6 * fVar4 * fVar4);
  param_1[1] = fVar2 * fVar6;
  param_1[2] = fVar3 * fVar6;
  *param_1 = fVar1 * fVar6;
  return CONCAT44(0x3f000000,fVar6 * fVar7);
}






// 函数: void FUN_1801c2610(int64_t param_1)
void FUN_1801c2610(int64_t param_1)

{
  if (*(int64_t *)(param_1 + 8) != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  *(uint64_t *)(param_1 + 8) = 0;
  return;
}






// 函数: void FUN_1801c2640(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_1801c2640(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  
  *param_1 = &unknown_var_7504_ptr;
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1 + 0x12,0,0,param_4,0xfffffffffffffffe);
  }
  if (param_1[0xd] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[9] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  if (param_1[5] != 0) {
                    // WARNING: Subroutine does not return
    FUN_18064e900();
  }
  puVar2 = (uint64_t *)param_1[1];
  if (puVar2 == (uint64_t *)0x0) {
    return;
  }
  uVar4 = (uint64_t)puVar2 & 0xffffffffffc00000;
  if (uVar4 != 0) {
    lVar3 = uVar4 + 0x80 + ((int64_t)puVar2 - uVar4 >> 0x10) * 0x50;
    lVar3 = lVar3 - (uint64_t)*(uint *)(lVar3 + 4);
    if ((*(void ***)(uVar4 + 0x70) == &ExceptionList) && (*(char *)(lVar3 + 0xe) == '\0')) {
      *puVar2 = *(uint64_t *)(lVar3 + 0x20);
      *(uint64_t **)(lVar3 + 0x20) = puVar2;
      piVar1 = (int *)(lVar3 + 0x18);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FUN_18064d630();
        return;
      }
    }
    else {
      func_0x00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                          puVar2,uVar4,0xfffffffffffffffe);
    }
  }
  return;
}



uint64_t *
FUN_1801c26f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_7504_ptr;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(int32_t *)(param_1 + 4) = 3;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(int32_t *)(param_1 + 8) = 3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(int32_t *)(param_1 + 0xc) = 3;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  param_1[0x14] = 0;
  param_1[0x15] = _guard_check_icall;
  *(int8_t *)(param_1 + 0x11) = 0;
  *(int32_t *)((int64_t)param_1 + 0x8c) = 0;
  *(int16_t *)(param_1 + 0x16) = 0;
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1 + 0x12,0,0,param_4,0xfffffffffffffffe);
  }
  param_1[0x14] = 0;
  param_1[0x15] = _guard_check_icall;
  return param_1;
}






// 函数: void FUN_1801c27f0(uint64_t *param_1)
void FUN_1801c27f0(uint64_t *param_1)

{
  *param_1 = &unknown_var_8336_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  return;
}



uint64_t *
FUN_1801c2830(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  *param_1 = &unknown_var_8336_ptr;
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x28,param_3,param_4,0xfffffffffffffffe);
  }
  return param_1;
}



uint64_t * FUN_1801c2890(uint64_t *param_1)

{
  *param_1 = &system_state_ptr;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *param_1 = &system_data_buffer_ptr;
  param_1[3] = 0;
  param_1[1] = 0;
  *(int32_t *)(param_1 + 2) = 0;
  *(int32_t *)(param_1 + 4) = 0xffffffff;
  *(int32_t *)((int64_t)param_1 + 0x24) = 0;
  *(int8_t *)(param_1 + 5) = 0;
  return param_1;
}



int64_t FUN_1801c28f0(int64_t param_1)

{
  FUN_1808fc838(param_1,0x30,4,FUN_1801c2890,FUN_18004a130);
  *(int32_t *)(param_1 + 0xc0) = 0;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_1801c2940(uint64_t *param_1)

{
  int64_t *plVar1;
  int64_t *plVar2;
  uint64_t *puVar3;
  int64_t lVar4;
  int64_t lVar5;
  uint64_t uVar6;
  
  uVar6 = 0xfffffffffffffffe;
  puVar3 = param_1 + 2;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 7) = 3;
  *puVar3 = puVar3;
  param_1[3] = puVar3;
  param_1[4] = 0;
  *(int8_t *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  puVar3 = param_1 + 0xb;
  param_1[0xe] = 0;
  *(int32_t *)(param_1 + 0x10) = 3;
  *puVar3 = puVar3;
  param_1[0xc] = puVar3;
  param_1[0xd] = 0;
  *(int8_t *)(param_1 + 0xe) = 0;
  param_1[0xf] = 0;
  lVar5 = 0x10;
  do {
    func_0x0001801ece00();
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  puVar3 = param_1 + 99;
  param_1[0x66] = 0;
  *(int32_t *)(param_1 + 0x68) = 3;
  *puVar3 = puVar3;
  param_1[100] = puVar3;
  param_1[0x65] = 0;
  *(int8_t *)(param_1 + 0x66) = 0;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  *(int32_t *)(param_1 + 0x6c) = 3;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(int32_t *)(param_1 + 0x70) = 3;
  puVar3 = param_1 + 0x71;
  param_1[0x74] = 0;
  *(int32_t *)(param_1 + 0x76) = 3;
  *puVar3 = puVar3;
  param_1[0x72] = puVar3;
  param_1[0x73] = 0;
  *(int8_t *)(param_1 + 0x74) = 0;
  param_1[0x75] = 0;
  puVar3 = param_1 + 0x77;
  param_1[0x7a] = 0;
  *(int32_t *)(param_1 + 0x7c) = 3;
  *puVar3 = puVar3;
  param_1[0x78] = puVar3;
  param_1[0x79] = 0;
  *(int8_t *)(param_1 + 0x7a) = 0;
  param_1[0x7b] = 0;
  _Mtx_init_in_situ(param_1 + 0x7d,2);
  uVar6 = FUN_18062b1e0(system_memory_pool_ptr,0x398,8,3,uVar6);
  plVar2 = (int64_t *)FUN_1801ecc70(uVar6);
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2);
  }
  plVar1 = (int64_t *)param_1[10];
  param_1[10] = plVar2;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  lVar5 = param_1[10];
  puVar3 = (uint64_t *)FUN_18062b1e0(system_memory_pool_ptr,0x18,8,3);
  *puVar3 = 0;
  uVar6 = FUN_18062b420(system_memory_pool_ptr,0x2800000,0x11);
  *puVar3 = uVar6;
  LOCK();
  puVar3[1] = 0;
  UNLOCK();
  *(int32_t *)(puVar3 + 2) = 0;
  *(uint64_t **)(lVar5 + 0x310) = puVar3;
  lVar4 = FUN_18062b1e0(system_memory_pool_ptr,0x30,8,3);
  *(int32_t *)(lVar4 + 0x19) = 0;
  *(int16_t *)(lVar4 + 0x1d) = 0;
  *(int8_t *)(lVar4 + 0x1f) = 0;
  *(uint64_t **)(lVar4 + 0x28) = puVar3;
  *(int64_t *)lVar4 = lVar4;
  *(int64_t *)(lVar4 + 8) = lVar4;
  *(uint64_t *)(lVar4 + 0x10) = 0;
  *(int8_t *)(lVar4 + 0x18) = 0;
  *(uint64_t *)(lVar4 + 0x20) = 0;
  *(int64_t *)(lVar5 + 0x318) = lVar4;
  *(uint64_t *)(lVar5 + 800) = 0;
  *param_1 = 0;
  LOCK();
  *(int32_t *)((int64_t)param_1 + 0x30c) = 0;
  UNLOCK();
  *(int16_t *)((int64_t)param_1 + 9) = 0x100;
  *(int8_t *)(param_1 + 0x62) = 1;
  *(int16_t *)(param_1 + 0x61) = 0;
  return param_1;
}






// 函数: void FUN_1801c2bc0(int64_t *param_1)
void FUN_1801c2bc0(int64_t *param_1)

{
  int64_t lVar1;
  int64_t lVar2;
  
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x50) {
    FUN_1801c5b20(lVar2);
  }
  if (*param_1 == 0) {
    return;
  }
                    // WARNING: Subroutine does not return
  FUN_18064e900();
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address




