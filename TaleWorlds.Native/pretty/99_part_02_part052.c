#include "TaleWorlds.Native.Split.h"
#include "include/global_constants.h"
// 99_part_02_part052.c - 15 个函数
// 函数: void function_1bd868(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
void function_1bd868(int64_t param_1,int64_t param_2,int64_t param_3,int64_t param_4)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t local_buffer_60;
  lVar1 = param_4 * 2;
  while (lVar2 = lVar1 + 2, lVar2 < param_3) {
    lVar3 = lVar1 + 1;
    if (*(int *)(param_1 + 0x20 + lVar2 * 0x28) <= *(int *)(param_1 + -8 + lVar2 * 0x28)) {
      lVar3 = lVar2;
    }
    lVar1 = param_1 + lVar3 * 0x28;
    lVar2 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar2,lVar1);
    *(int32_t *)(lVar2 + 0x20) = *(int32_t *)(lVar1 + 0x20);
    param_4 = lVar3;
    lVar1 = lVar3 * 2;
  }
  if (lVar2 == param_3) {
    lVar2 = param_1 + lVar2 * 0x28;
    lVar3 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar3,lVar2 + -0x28);
    param_4 = lVar1 + 1;
    *(int32_t *)(lVar3 + 0x20) = *(int32_t *)(lVar2 + -8);
  }
  while (param_2 < param_4) {
    lVar2 = param_4 + -1 >> 1;
    lVar1 = param_1 + lVar2 * 0x28;
    if (*(int *)(lVar1 + 0x20) <= *(int *)(local_buffer_60 + 0x20)) break;
    lVar3 = param_1 + param_4 * 0x28;
    SystemScheduler(lVar3,lVar1);
    *(int32_t *)(lVar3 + 0x20) = *(int32_t *)(lVar1 + 0x20);
    param_4 = lVar2;
  }
  param_1 = param_1 + param_4 * 0x28;
  SystemScheduler(param_1,local_buffer_60);
  *(int32_t *)(param_1 + 0x20) = *(int32_t *)(local_buffer_60 + 0x20);
  return;
}
// 函数: void function_1bd911(void)
void function_1bd911(void)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t unaff_RBP;
  int64_t in_R10;
  int64_t unaff_R12;
  int64_t unaff_R14;
  do {
    lVar3 = in_R10 + -1 >> 1;
    lVar1 = unaff_R14 + lVar3 * 0x28;
    if (*(int *)(lVar1 + 0x20) <= *(int *)(unaff_RBP + 0x20)) break;
    lVar2 = unaff_R14 + in_R10 * 0x28;
    SystemScheduler(lVar2,lVar1);
    *(int32_t *)(lVar2 + 0x20) = *(int32_t *)(lVar1 + 0x20);
    in_R10 = lVar3;
  } while (unaff_R12 < lVar3);
  lVar1 = unaff_R14 + in_R10 * 0x28;
  SystemScheduler(lVar1);
  *(int32_t *)(lVar1 + 0x20) = *(int32_t *)(unaff_RBP + 0x20);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
uint64_t *
function_1bd980(uint64_t *param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  uint uVar1;
  int64_t *plVar2;
  int32_t uVar3;
  int32_t uVar4;
  int32_t uVar5;
  int32_t uVar6;
  uint64_t uVar7;
  int64_t lVar8;
  int64_t lVar9;
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  uVar7 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar7;
  uVar7 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar7;
  uVar7 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar7;
  uVar7 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar7;
  uVar7 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar7;
  uVar7 = param_2[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar7;
  uVar7 = param_2[0xd];
  param_1[0xc] = param_2[0xc];
  param_1[0xd] = uVar7;
  uVar7 = param_2[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar7;
  *(int32_t *)(param_1 + 0x10) = *(int32_t *)(param_2 + 0x10);
  uVar7 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x12] = uVar7;
  uVar7 = param_2[0x14];
  param_1[0x13] = param_2[0x13];
  param_1[0x14] = uVar7;
  uVar7 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x16] = uVar7;
  uVar7 = param_2[0x18];
  param_1[0x17] = param_2[0x17];
  param_1[0x18] = uVar7;
  uVar7 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x1a] = uVar7;
  uVar7 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar7;
  uVar7 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1e] = uVar7;
  uVar7 = param_2[0x20];
  param_1[0x1f] = param_2[0x1f];
  param_1[0x20] = uVar7;
  uVar7 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x22] = uVar7;
  uVar7 = param_2[0x24];
  param_1[0x23] = param_2[0x23];
  param_1[0x24] = uVar7;
  uVar7 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x26] = uVar7;
  uVar7 = param_2[0x28];
  param_1[0x27] = param_2[0x27];
  param_1[0x28] = uVar7;
  uVar7 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x2a] = uVar7;
  uVar7 = param_2[0x2c];
  param_1[0x2b] = param_2[0x2b];
  param_1[0x2c] = uVar7;
  uVar7 = param_2[0x2e];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2e] = uVar7;
  uVar7 = param_2[0x30];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x30] = uVar7;
  uVar7 = param_2[0x32];
  param_1[0x31] = param_2[0x31];
  param_1[0x32] = uVar7;
  uVar3 = *(int32_t *)((int64_t)param_2 + 0x19c);
  uVar4 = *(int32_t *)(param_2 + 0x34);
  uVar5 = *(int32_t *)((int64_t)param_2 + 0x1a4);
  *(int32_t *)(param_1 + 0x33) = *(int32_t *)(param_2 + 0x33);
  *(int32_t *)((int64_t)param_1 + 0x19c) = uVar3;
  *(int32_t *)(param_1 + 0x34) = uVar4;
  *(int32_t *)((int64_t)param_1 + 0x1a4) = uVar5;
  uVar3 = *(int32_t *)(param_2 + 0x35);
  uVar4 = *(int32_t *)((int64_t)param_2 + 0x1ac);
  uVar5 = *(int32_t *)(param_2 + 0x36);
  uVar6 = *(int32_t *)((int64_t)param_2 + 0x1b4);
  *(int32_t *)(param_1 + 0x35) = uVar3;
  *(int32_t *)((int64_t)param_1 + 0x1ac) = uVar4;
  *(int32_t *)(param_1 + 0x36) = uVar5;
  *(int32_t *)((int64_t)param_1 + 0x1b4) = uVar6;
  plVar2 = (int64_t *)param_2[0x37];
  param_1[0x37] = plVar2;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x28))(plVar2,uVar3,param_3,param_4,0xfffffffffffffffe);
  }
  param_1[0x38] = param_2[0x38];
  *(int32_t *)(param_1 + 0x39) = *(int32_t *)(param_2 + 0x39);
  *(int32_t *)((int64_t)param_1 + 0x1cc) = *(int32_t *)((int64_t)param_2 + 0x1cc);
  *(int32_t *)(param_1 + 0x3a) = *(int32_t *)(param_2 + 0x3a);
  *(int8_t *)((int64_t)param_1 + 0x1d4) = *(int8_t *)((int64_t)param_2 + 0x1d4);
  lVar9 = (int64_t)(param_2[0x3c] - param_2[0x3b]) >> 2;
  uVar1 = *(uint *)(param_2 + 0x3e);
  *(uint *)(param_1 + 0x3e) = uVar1;
  if (lVar9 == 0) {
    lVar8 = 0;
  }
  else {
    lVar8 = CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar9 * 4,uVar1 & 0xff);
  }
  param_1[0x3b] = lVar8;
  param_1[0x3c] = lVar8;
  param_1[0x3d] = lVar8 + lVar9 * 4;
  lVar9 = param_1[0x3b];
  lVar8 = param_2[0x3b];
  if (lVar8 != param_2[0x3c]) {
// WARNING: Subroutine does not return
    memmove(lVar9,lVar8,param_2[0x3c] - lVar8);
  }
  param_1[0x3c] = lVar9;
  param_1[0x3f] = param_2[0x3f];
  param_1[0x40] = param_2[0x40];
  param_1[0x41] = param_2[0x41];
  uVar7 = param_2[0x43];
  param_1[0x42] = param_2[0x42];
  param_1[0x43] = uVar7;
  uVar7 = param_2[0x45];
  param_1[0x44] = param_2[0x44];
  param_1[0x45] = uVar7;
  uVar7 = param_2[0x47];
  param_1[0x46] = param_2[0x46];
  param_1[0x47] = uVar7;
  uVar7 = param_2[0x49];
  param_1[0x48] = param_2[0x48];
  param_1[0x49] = uVar7;
  uVar7 = param_2[0x4b];
  param_1[0x4a] = param_2[0x4a];
  param_1[0x4b] = uVar7;
  uVar7 = param_2[0x4d];
  param_1[0x4c] = param_2[0x4c];
  param_1[0x4d] = uVar7;
  uVar7 = param_2[0x4f];
  param_1[0x4e] = param_2[0x4e];
  param_1[0x4f] = uVar7;
  param_1[0x50] = param_2[0x50];
  param_1[0x51] = param_2[0x51];
  param_1[0x52] = param_2[0x52];
  param_1[0x53] = param_2[0x53];
  param_1[0x54] = param_2[0x54];
  uVar7 = param_2[0x56];
  param_1[0x55] = param_2[0x55];
  param_1[0x56] = uVar7;
  param_1[0x57] = param_2[0x57];
  param_1[0x58] = param_2[0x58];
  param_1[0x59] = param_2[0x59];
  *(int32_t *)(param_1 + 0x5a) = *(int32_t *)(param_2 + 0x5a);
  *(int32_t *)(param_1 + 0x5a) = *(int32_t *)(param_2 + 0x5a);
  *(int32_t *)((int64_t)param_1 + 0x2d4) = *(int32_t *)((int64_t)param_2 + 0x2d4);
  *(int32_t *)(param_1 + 0x5b) = *(int32_t *)(param_2 + 0x5b);
  *(int32_t *)((int64_t)param_1 + 0x2dc) = *(int32_t *)((int64_t)param_2 + 0x2dc);
  *(int32_t *)(param_1 + 0x5c) = *(int32_t *)(param_2 + 0x5c);
  *(int32_t *)((int64_t)param_1 + 0x2e4) = *(int32_t *)((int64_t)param_2 + 0x2e4);
  *(int32_t *)(param_1 + 0x5d) = *(int32_t *)(param_2 + 0x5d);
  *(int32_t *)((int64_t)param_1 + 0x2ec) = *(int32_t *)((int64_t)param_2 + 0x2ec);
  *(int32_t *)(param_1 + 0x5e) = *(int32_t *)(param_2 + 0x5e);
  *(int32_t *)((int64_t)param_1 + 0x2f4) = *(int32_t *)((int64_t)param_2 + 0x2f4);
  *(int32_t *)(param_1 + 0x5f) = *(int32_t *)(param_2 + 0x5f);
  *(int32_t *)((int64_t)param_1 + 0x2fc) = *(int32_t *)((int64_t)param_2 + 0x2fc);
  *(int32_t *)(param_1 + 0x60) = *(int32_t *)(param_2 + 0x60);
  *(int32_t *)((int64_t)param_1 + 0x304) = *(int32_t *)((int64_t)param_2 + 0x304);
  *(int32_t *)(param_1 + 0x61) = *(int32_t *)(param_2 + 0x61);
  *(int32_t *)((int64_t)param_1 + 0x30c) = *(int32_t *)((int64_t)param_2 + 0x30c);
  *(int32_t *)(param_1 + 0x62) = *(int32_t *)(param_2 + 0x62);
  *(int32_t *)((int64_t)param_1 + 0x314) = *(int32_t *)((int64_t)param_2 + 0x314);
  *(int32_t *)(param_1 + 99) = *(int32_t *)(param_2 + 99);
  *(int32_t *)((int64_t)param_1 + 0x31c) = *(int32_t *)((int64_t)param_2 + 0x31c);
  *(int8_t *)(param_1 + 100) = *(int8_t *)(param_2 + 100);
  *(int8_t *)((int64_t)param_1 + 0x321) = *(int8_t *)((int64_t)param_2 + 0x321);
  *(int8_t *)((int64_t)param_1 + 0x322) = *(int8_t *)((int64_t)param_2 + 0x322);
  return param_1;
}
uint64_t * function_1bde50(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_6232_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x10);
  }
  return param_1;
}
uint64_t function_1bde80(uint64_t param_1,uint64_t param_2)
{
  function_1c2640();
  if ((param_2 & 1) != 0) {
    free(param_1,0xb8);
  }
  return param_1;
}
uint64_t * function_1bdec0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_7888_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
uint64_t * function_1bdef0(uint64_t *param_1,uint64_t param_2)
{
  *param_1 = &processed_var_8736_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,8);
  }
  return param_1;
}
// 函数: void function_1bdf20(int64_t param_1)
void function_1bdf20(int64_t param_1)
{
  int *piVar1;
  uint64_t *puVar2;
  int64_t lVar3;
  uint64_t uVar4;
  function_0ba100(param_1 + 0x10);
  if ((1 < *(uint64_t *)(param_1 + 0x20)) &&
     (puVar2 = *(uint64_t **)(param_1 + 0x18), puVar2 != (uint64_t *)0x0)) {
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
          SystemDataCleaner();
          return;
        }
      }
      else {
        SystemFunction_00018064e870(uVar4,CONCAT71(0xff000000,*(void ***)(uVar4 + 0x70) == &ExceptionList),
                            puVar2,uVar4,0xfffffffffffffffe);
      }
    }
    return;
  }
  return;
}
// 函数: void function_1bdf70(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
void function_1bdf70(uint64_t param_1,uint64_t *param_2,uint64_t param_3,uint64_t param_4)
{
  if (param_2 == (uint64_t *)0x0) {
    return;
  }
  function_1bdf70(param_1,*param_2,param_3,param_4,0xfffffffffffffffe);
  function_0ba100(param_2 + 6);
  if ((1 < (uint64_t)param_2[8]) && (param_2[7] != 0)) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner(param_2);
}
int32_t * function_1be080(int32_t *param_1,int32_t *param_2)
{
  int64_t *plVar1;
  int64_t *plVar2;
  param_1[4] = param_2[4];
  plVar1 = *(int64_t **)(param_2 + 2);
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x28))(plVar1);
  }
  plVar2 = *(int64_t **)(param_1 + 2);
  *(int64_t **)(param_1 + 2) = plVar1;
  if (plVar2 != (int64_t *)0x0) {
    (**(code **)(*plVar2 + 0x38))();
  }
  *param_1 = *param_2;
  return param_1;
}
uint64_t function_1be0f0(float *param_1)
{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int8_t auVar6 [16];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  fVar7 = param_1[4];
  fVar10 = param_1[5];
  fVar8 = param_1[6];
  fVar9 = *param_1;
  fVar11 = param_1[1];
  fVar5 = param_1[2];
  fVar1 = param_1[8];
  fVar2 = param_1[9];
  fVar3 = param_1[10];
  fVar4 = fVar11 * fVar11 + fVar9 * fVar9 + fVar5 * fVar5;
  auVar6 = rsqrtss(ZEXT416((uint)fVar4),ZEXT416((uint)fVar4));
  fVar12 = auVar6._0_4_;
  fVar12 = fVar12 * 0.5 * (3.0 - fVar4 * fVar12 * fVar12);
  fVar11 = fVar11 * fVar12;
  fVar9 = fVar9 * fVar12;
  fVar12 = fVar12 * fVar5;
  fVar5 = fVar10 * fVar10 + fVar7 * fVar7 + fVar8 * fVar8;
  auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar4 = auVar6._0_4_;
  fVar5 = fVar4 * 0.5 * (3.0 - fVar5 * fVar4 * fVar4);
  fVar7 = fVar7 * fVar5;
  fVar10 = fVar10 * fVar5;
  fVar8 = fVar8 * fVar5;
  fVar5 = fVar2 * fVar2 + fVar1 * fVar1 + fVar3 * fVar3;
  auVar6 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar4 = auVar6._0_4_;
  fVar4 = fVar4 * 0.5 * (3.0 - fVar5 * fVar4 * fVar4);
  fVar5 = fVar10 * fVar11 + fVar7 * fVar9 + fVar8 * fVar12;
  if ((0.01 < fVar5) || (fVar5 < -0.01)) {
    return 0;
  }
  fVar5 = fVar8 * fVar11 - fVar10 * fVar12;
  fVar10 = fVar10 * fVar9 - fVar7 * fVar11;
  fVar7 = fVar7 * fVar12 - fVar8 * fVar9;
  if (0.0 <= (param_1[2] * param_1[4] - *param_1 * param_1[6]) * param_1[9] +
             (param_1[1] * param_1[6] - param_1[2] * param_1[5]) * param_1[8] +
             (*param_1 * param_1[5] - param_1[1] * param_1[4]) * param_1[10]) {
    if (0.01 <= ABS(fVar1 * fVar4 - fVar5)) {
      return 0;
    }
    if (0.01 <= ABS(fVar2 * fVar4 - fVar7)) {
      return 0;
    }
    fVar10 = fVar3 * fVar4 - fVar10;
  }
  else {
    if (0.01 <= ABS(fVar5 + fVar1 * fVar4)) {
      return 0;
    }
    if (0.01 <= ABS(fVar7 + fVar2 * fVar4)) {
      return 0;
    }
    fVar10 = fVar10 + fVar3 * fVar4;
  }
  if (0.01 <= ABS(fVar10)) {
    return 0;
  }
  return 1;
}
int8_t function_1be2e6(float param_1,uint64_t param_2,float param_3)
{
  int64_t lVar1;
  int8_t in_AL;
  uint8_t in_register_00000001;
  float *in_RCX;
  float in_XMM5_Da;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  float unaff_XMM8_Da;
  float fVar2;
  float unaff_XMM9_Da;
  float fVar3;
  int32_t unaff_XMM10_Da;
  int32_t unaff_XMM10_Db;
  int32_t unaff_XMM10_Dc;
  int32_t unaff_XMM10_Dd;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  float unaff_XMM15_Da;
  float unaff_retaddr;
  lVar1 = CONCAT71(in_register_00000001,in_AL);
  *(int32_t *)(lVar1 + -0x58) = unaff_XMM10_Da;
  *(int32_t *)(lVar1 + -0x54) = unaff_XMM10_Db;
  *(int32_t *)(lVar1 + -0x50) = unaff_XMM10_Dc;
  *(int32_t *)(lVar1 + -0x4c) = unaff_XMM10_Dd;
  param_1 = unaff_XMM6_Da * unaff_XMM9_Da - param_1;
  fVar2 = unaff_XMM8_Da - in_XMM5_Da * unaff_retaddr;
  fVar3 = in_XMM5_Da * unaff_XMM15_Da - unaff_XMM6_Da * unaff_XMM7_Da;
  if (0.0 <= (param_3 * in_RCX[4] - *in_RCX * in_RCX[6]) * in_RCX[9] +
             (in_RCX[1] * in_RCX[6] - param_3 * in_RCX[5]) * in_RCX[8] +
             (*in_RCX * in_RCX[5] - in_RCX[1] * in_RCX[4]) * in_RCX[10]) {
    if (unaff_XMM14_Da <= ABS(unaff_XMM13_Da - param_1)) {
      return 0;
    }
    if (unaff_XMM14_Da <= ABS(unaff_XMM12_Da - fVar3)) {
      return 0;
    }
    fVar2 = unaff_XMM11_Da - fVar2;
  }
  else {
    if (unaff_XMM14_Da <= ABS(param_1 + unaff_XMM13_Da)) {
      return 0;
    }
    if (unaff_XMM14_Da <= ABS(fVar3 + unaff_XMM12_Da)) {
      return 0;
    }
    fVar2 = fVar2 + unaff_XMM11_Da;
  }
  if (unaff_XMM14_Da <= ABS(fVar2)) {
    return 0;
  }
  return 1;
}
// 函数: void function_1be3b5(void)
void function_1be3b5(void)
{
  return;
}
int8_t function_1be3f1(uint param_1)
{
  int8_t uVar1;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM10_Da;
  float unaff_XMM11_Da;
  float unaff_XMM12_Da;
  float unaff_XMM13_Da;
  float unaff_XMM14_Da;
  if (((unaff_XMM14_Da <= (float)((uint)(unaff_XMM13_Da - unaff_XMM10_Da) & param_1)) ||
      (unaff_XMM14_Da <= (float)((uint)(unaff_XMM12_Da - unaff_XMM9_Da) & param_1))) ||
     (unaff_XMM14_Da <= (float)((uint)(unaff_XMM11_Da - unaff_XMM8_Da) & param_1))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}
int8_t thunk_function_1be3b5(void)
{
  return 0;
}
uint64_t function_1be430(float *param_1)
{
  float fVar1;
  float fVar2;
  int8_t auVar3 [16];
  float fVar4;
  float fVar5;
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar5 = fVar1 * fVar1 + fVar2 * fVar2;
  fVar5 = fVar5 + (float)(fVar5 <= 1.1754944e-38) * 1.1754944e-38;
  auVar3 = rsqrtss(ZEXT416((uint)fVar5),ZEXT416((uint)fVar5));
  fVar4 = auVar3._0_4_;
  fVar4 = fVar4 * 0.5 * (3.0 - fVar5 * fVar4 * fVar4);
  param_1[1] = fVar2 * fVar4;
  *param_1 = fVar1 * fVar4;
  return CONCAT44(0x3f000000,fVar4 * fVar5);
}
// 函数: void function_1be4d0(int64_t param_1)
void function_1be4d0(int64_t param_1)
{
  int64_t *plVar1;
  plVar1 = *(int64_t **)(param_1 + 0x68);
  *(uint64_t *)(param_1 + 0x68) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  plVar1 = *(int64_t **)(param_1 + 0x70);
  *(uint64_t *)(param_1 + 0x70) = 0;
  if (plVar1 != (int64_t *)0x0) {
    (**(code **)(*plVar1 + 0x38))();
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1be530(uint64_t *param_1,uint64_t param_2)
void function_1be530(uint64_t *param_1,uint64_t param_2)
{
  int64_t lVar1;
  uint64_t *puVar2;
  uint64_t *puVar3;
  uint64_t *puVar4;
  puVar4 = (uint64_t *)param_1[1];
  if (puVar4 < (uint64_t *)param_1[2]) {
    param_1[1] = (uint64_t)(puVar4 + 1);
    *puVar4 = param_2;
    return;
  }
  puVar3 = (uint64_t *)*param_1;
  lVar1 = (int64_t)puVar4 - (int64_t)puVar3 >> 3;
  if (lVar1 == 0) {
    lVar1 = 1;
  }
  else {
    lVar1 = lVar1 * 2;
    if (lVar1 == 0) {
      puVar2 = (uint64_t *)0x0;
      goto LAB_1801be5bd;
    }
  }
  puVar2 = (uint64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar1 * 8,(char)param_1[3]);
  puVar3 = (uint64_t *)*param_1;
  puVar4 = (uint64_t *)param_1[1];
LAB_1801be5bd:
  if (puVar3 != puVar4) {
// WARNING: Subroutine does not return
    memmove(puVar2,puVar3,(int64_t)puVar4 - (int64_t)puVar3);
  }
  *puVar2 = param_2;
  if (*param_1 != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  *param_1 = (uint64_t)puVar2;
  param_1[1] = (uint64_t)(puVar2 + 1);
  param_1[2] = (uint64_t)(puVar2 + lVar1);
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1be620(int64_t *param_1,int64_t *param_2,int64_t *param_3,byte param_4,byte param_5)
void function_1be620(int64_t *param_1,int64_t *param_2,int64_t *param_3,byte param_4,byte param_5)
{
  int64_t lVar1;
  int iVar2;
  int iVar3;
  param_1[1] = *param_2;
  param_1[2] = *param_3;
  *(int *)(param_1 + 4) = 1 << (param_4 & 0x1f);
  iVar2 = 1 << (param_5 & 0x1f);
  *(int *)((int64_t)param_1 + 0x24) = iVar2;
  lVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,(int64_t)(int)param_1[4] * (int64_t)iVar2 * 0x28,0x10,0x10,
                        0xfffffffffffffffe);
  *param_1 = lVar1;
  iVar2 = (int)param_1[4];
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar2 = 0;
      if (0 < *(int *)((int64_t)param_1 + 0x24)) {
        do {
          lVar1 = *param_1 + (int64_t)(iVar3 * *(int *)((int64_t)param_1 + 0x24) + iVar2) * 0x28;
          *(uint64_t *)(lVar1 + 8) = 0;
          *(uint64_t *)(lVar1 + 0x10) = 0;
          *(uint64_t *)(lVar1 + 0x18) = 0;
          *(int32_t *)(lVar1 + 0x20) = 3;
          *(int32_t *)
           (*param_1 + (int64_t)(iVar3 * *(int *)((int64_t)param_1 + 0x24) + iVar2) * 0x28) = 0;
          iVar2 = iVar2 + 1;
        } while (iVar2 < *(int *)((int64_t)param_1 + 0x24));
      }
      iVar3 = iVar3 + 1;
      iVar2 = (int)param_1[4];
    } while (iVar3 < iVar2);
  }
  *(float *)(param_1 + 3) = (*(float *)(param_1 + 2) - *(float *)(param_1 + 1)) / (float)iVar2;
  *(float *)((int64_t)param_1 + 0x1c) =
       (*(float *)((int64_t)param_1 + 0x14) - *(float *)((int64_t)param_1 + 0xc)) /
       (float)*(int *)((int64_t)param_1 + 0x24);
  return;
}
uint64_t *
function_1be7f0(uint64_t *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
{
  uint64_t uVar1;
  uVar1 = 0xfffffffffffffffe;
  *param_1 = &processed_var_6304_ptr;
  if (param_1[7] != 0) {
    SystemCore_NetworkHandler(param_1[7],0,param_3,param_4,0xfffffffffffffffe);
  }
  if (param_1[8] != 0) {
    SystemCore_NetworkHandler(param_1[8],0,param_3,param_4,uVar1);
  }
  if (param_1[9] != 0) {
    SystemCore_NetworkHandler(param_1[9],0,param_3,param_4,uVar1);
  }
  if (param_1[2] != 0) {
// WARNING: Subroutine does not return
    CoreEngineMemoryPoolCleaner();
  }
  param_1[2] = 0;
  if ((int64_t *)param_1[9] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[9] + 0x38))();
  }
  if ((int64_t *)param_1[8] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[8] + 0x38))();
  }
  if ((int64_t *)param_1[7] != (int64_t *)0x0) {
    (**(code **)(*(int64_t *)param_1[7] + 0x38))();
  }
  *param_1 = &system_handler2_ptr;
  *param_1 = &system_handler1_ptr;
  if ((param_2 & 1) != 0) {
    free(param_1,0x50);
  }
  return param_1;
}
int64_t * function_1be910(int64_t param_1,int64_t *param_2)
{
  int64_t lVar1;
  int64_t lVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  uint64_t local_var_18;
  int64_t lStack_10;
  lVar1 = *(int64_t *)(param_1 + 0x50);
  uVar4 = 0;
  while( true ) {
    lVar2 = (uVar4 & 0xffffffff) * 0x10;
    uVar3 = lVar2 + 8 + lVar1;
    if ((*(uint64_t *)(lVar2 + lVar1) & 0xffffffff00000000) == 0) {
      uVar3 = 0;
    }
    if (uVar3 != 0) break;
    if (uVar4 == *(uint64_t *)(param_1 + 0x58)) {
      param_2[1] = *(uint64_t *)(param_1 + 0x58);
      *param_2 = param_1 + 0x50;
      param_2[2] = 0;
      param_2[3] = 0;
      if ((*(uint64_t *)(*(int64_t *)*param_2 + (int64_t)(int)param_2[1] * 0x10) &
          0xffffffff00000000) == 0) {
        return param_2;
      }
      param_2[3] = *(int64_t *)(*(int64_t *)*param_2 + 8 + (param_2[1] & 0xffffffffU) * 0x10);
      param_2[2] = param_2[1];
      return param_2;
    }
    uVar4 = uVar4 + 1;
  }
  local_var_18 = 0;
  lStack_10 = 0;
  if ((*(uint64_t *)(lVar1 + (int64_t)(int)uVar4 * 0x10) & 0xffffffff00000000) != 0) {
    lStack_10 = *(int64_t *)(lVar1 + 8 + (uVar4 & 0xffffffff) * 0x10);
    local_var_18 = uVar4;
  }
  *param_2 = param_1 + 0x50;
  param_2[1] = uVar4;
  param_2[2] = local_var_18;
  param_2[3] = lStack_10;
  return param_2;
}
// 函数: void function_1be9f0(int64_t param_1,int param_2)
void function_1be9f0(int64_t param_1,int param_2)
{
  int64_t *plVar1;
  if (param_2 != *(int *)(param_1 + 0x10c)) {
    *(int *)(param_1 + 0x10c) = param_2;
    plVar1 = *(int64_t **)(param_1 + 0x48);
    *(uint64_t *)(param_1 + 0x48) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
    plVar1 = *(int64_t **)(param_1 + 0x50);
    *(uint64_t *)(param_1 + 0x50) = 0;
    if (plVar1 != (int64_t *)0x0) {
      (**(code **)(*plVar1 + 0x38))();
    }
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1bea60(int64_t param_1)
void function_1bea60(int64_t param_1)
{
  uint64_t uVar1;
  if (*(int64_t *)(param_1 + 0x250) == 0) {
    uVar1 = CoreEngineMemoryPoolReallocator(system_memory_pool_ptr,0x6c00,4,3);
// WARNING: Subroutine does not return
    memset(uVar1,0,0x6c00);
  }
  return;
}
// 函数: void function_1bea80(uint64_t param_1,uint64_t param_2,uint64_t param_3)
void function_1bea80(uint64_t param_1,uint64_t param_2,uint64_t param_3)
{
  uint64_t uVar1;
  uVar1 = CoreEngineMemoryPoolReallocator(param_1,0x6c00,param_3,3);
// WARNING: Subroutine does not return
  memset(uVar1,0,0x6c00);
}
// 函数: void function_1beae2(void)
void function_1beae2(void)
{
  return;
}
// 函数: void function_1beaf0(int64_t *param_1)
void function_1beaf0(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    function_1bf1f0();
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// 函数: void function_1beb60(int64_t *param_1)
void function_1beb60(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  lVar1 = param_1[1];
  for (lVar2 = *param_1; lVar2 != lVar1; lVar2 = lVar2 + 0x28) {
    function_1bf1f0();
  }
  if (*param_1 == 0) {
    return;
  }
// WARNING: Subroutine does not return
  CoreEngineMemoryPoolCleaner();
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address
// 函数: void function_1beb80(int64_t *param_1)
void function_1beb80(int64_t *param_1)
{
  int64_t lVar1;
  int64_t lVar2;
  int64_t *plVar3;
  int64_t lVar4;
  int64_t *plVar5;
  int64_t *plVar6;
  int64_t *plVar7;
  int64_t *plVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  int64_t *plVar11;
  lVar1 = param_1[1];
  lVar4 = *param_1;
  if (lVar4 != lVar1) {
    plVar8 = (int64_t *)(lVar4 + 0x10);
    do {
      uVar9 = 0;
      plVar11 = (int64_t *)plVar8[3];
      uVar10 = (plVar8[4] - (int64_t)plVar11) + 7U >> 3;
      if ((int64_t *)plVar8[4] < plVar11) {
        uVar10 = uVar9;
      }
      if (uVar10 != 0) {
        do {
          plVar3 = (int64_t *)0x0;
          for (plVar6 = (int64_t *)*param_1; plVar6 != (int64_t *)param_1[1];
              plVar6 = plVar6 + 0xf) {
            if (*plVar11 == *plVar6) {
              plVar7 = (int64_t *)*plVar8;
              if (plVar7 < (int64_t *)plVar8[1]) {
                *plVar8 = (int64_t)(plVar7 + 1);
                *plVar7 = *plVar6;
              }
              else {
                plVar5 = (int64_t *)plVar8[-1];
                lVar2 = (int64_t)plVar7 - (int64_t)plVar5 >> 3;
                if (lVar2 == 0) {
                  lVar2 = 1;
LAB_1801bec67:
                  plVar3 = (int64_t *)CoreEngineMemoryPoolAllocator(system_memory_pool_ptr,lVar2 * 8);
                  plVar5 = (int64_t *)plVar8[-1];
                  plVar7 = (int64_t *)*plVar8;
                }
                else {
                  lVar2 = lVar2 * 2;
                  if (lVar2 != 0) goto LAB_1801bec67;
                }
                if (plVar5 != plVar7) {
// WARNING: Subroutine does not return
                  memmove(plVar3,plVar5,(int64_t)plVar7 - (int64_t)plVar5);
                }
                *plVar3 = *plVar6;
                if (plVar8[-1] != 0) {
// WARNING: Subroutine does not return
                  CoreEngineMemoryPoolCleaner();
                }
                plVar8[1] = (int64_t)(plVar3 + lVar2);
                plVar8[-1] = (int64_t)plVar3;
                *plVar8 = (int64_t)(plVar3 + 1);
              }
              break;
            }
          }
          plVar11 = plVar11 + 1;
          uVar9 = uVar9 + 1;
        } while (uVar9 != uVar10);
      }
      lVar4 = lVar4 + 0x78;
      plVar8 = plVar8 + 0xf;
    } while (lVar4 != lVar1);
  }
  return;
}
// WARNING: Globals starting with '_' overlap smaller symbols at the same address