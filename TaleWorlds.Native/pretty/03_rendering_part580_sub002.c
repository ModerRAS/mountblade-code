#include "TaleWorlds.Native.Split.h"
// 03_rendering_part580_sub002.c - 1 个函数
// 函数: void function_587b91(uint64_t *param_1,uint64_t param_2,float param_3)
void function_587b91(uint64_t *param_1,uint64_t param_2,float param_3)
{
  float fVar1;
  int32_t uVar2;
  int32_t uVar3;
  int32_t uVar4;
  uint64_t uVar5;
  uint64_t *puVar6;
  uint64_t *puVar7;
  uint64_t *unaff_RBX;
  uint64_t *unaff_RBP;
  int64_t unaff_RSI;
  int64_t unaff_RDI;
  int64_t unaff_R14;
  int32_t unaff_XMM6_Da;
  int32_t unaff_XMM6_Db;
  int32_t unaff_XMM6_Dc;
  float unaff_XMM6_Dd;
  int32_t unaff_XMM7_Da;
  int32_t unaff_XMM7_Db;
  int32_t unaff_XMM7_Dc;
  int32_t unaff_XMM7_Dd;
  int32_t unaff_XMM8_Da;
  int32_t unaff_XMM8_Db;
  int32_t unaff_XMM8_Dc;
  int32_t unaff_XMM8_Dd;
  int32_t unaff_XMM9_Da;
  int32_t unaff_XMM9_Db;
  int32_t unaff_XMM9_Dc;
  int32_t unaff_XMM9_Dd;
  while( true ) {
    fVar1 = *(float *)(unaff_R14 + -0x54 + unaff_RSI);
    puVar7 = (uint64_t *)(unaff_RSI + -0x40 + unaff_RDI);
    while (puVar6 = puVar7, param_3 < fVar1) {
      uVar5 = puVar6[1];
      *param_1 = *puVar6;
      param_1[1] = uVar5;
      uVar5 = puVar6[3];
      param_1[2] = puVar6[2];
      param_1[3] = uVar5;
      uVar2 = *(int32_t *)((int64_t)puVar6 + 0x24);
      uVar3 = *(int32_t *)(puVar6 + 5);
      uVar4 = *(int32_t *)((int64_t)puVar6 + 0x2c);
      *(int32_t *)(param_1 + 4) = *(int32_t *)(puVar6 + 4);
      *(int32_t *)((int64_t)param_1 + 0x24) = uVar2;
      *(int32_t *)(param_1 + 5) = uVar3;
      *(int32_t *)((int64_t)param_1 + 0x2c) = uVar4;
      uVar2 = *(int32_t *)((int64_t)puVar6 + 0x34);
      uVar3 = *(int32_t *)(puVar6 + 7);
      uVar4 = *(int32_t *)((int64_t)puVar6 + 0x3c);
      *(int32_t *)(param_1 + 6) = *(int32_t *)(puVar6 + 6);
      *(int32_t *)((int64_t)param_1 + 0x34) = uVar2;
      *(int32_t *)(param_1 + 7) = uVar3;
      *(int32_t *)((int64_t)param_1 + 0x3c) = uVar4;
      puVar7 = puVar6 + -8;
      param_1 = puVar6;
      fVar1 = *(float *)((int64_t)puVar6 + -0x14);
    }
    *(int32_t *)param_1 = unaff_XMM7_Da;
    *(int32_t *)((int64_t)param_1 + 4) = unaff_XMM7_Db;
    *(int32_t *)(param_1 + 1) = unaff_XMM7_Dc;
    *(int32_t *)((int64_t)param_1 + 0xc) = unaff_XMM7_Dd;
    *(int32_t *)(param_1 + 2) = unaff_XMM8_Da;
    *(int32_t *)((int64_t)param_1 + 0x14) = unaff_XMM8_Db;
    *(int32_t *)(param_1 + 3) = unaff_XMM8_Dc;
    *(int32_t *)((int64_t)param_1 + 0x1c) = unaff_XMM8_Dd;
    *(int32_t *)(param_1 + 4) = unaff_XMM6_Da;
    *(int32_t *)((int64_t)param_1 + 0x24) = unaff_XMM6_Db;
    *(int32_t *)(param_1 + 5) = unaff_XMM6_Dc;
    *(float *)((int64_t)param_1 + 0x2c) = unaff_XMM6_Dd;
    *(int32_t *)(param_1 + 6) = unaff_XMM9_Da;
    *(int32_t *)((int64_t)param_1 + 0x34) = unaff_XMM9_Db;
    *(int32_t *)(param_1 + 7) = unaff_XMM9_Dc;
    *(int32_t *)((int64_t)param_1 + 0x3c) = unaff_XMM9_Dd;
    param_1 = unaff_RBX + 8;
    unaff_RSI = unaff_RSI + 0x40;
    if (param_1 == unaff_RBP) break;
    unaff_XMM6_Da = *(int32_t *)(unaff_RBX + 0xc);
    unaff_XMM6_Db = *(int32_t *)((int64_t)unaff_RBX + 100);
    unaff_XMM6_Dc = *(int32_t *)(unaff_RBX + 0xd);
    param_3 = *(float *)((int64_t)unaff_RBX + 0x6c);
    unaff_XMM7_Da = *(int32_t *)param_1;
    unaff_XMM7_Db = *(int32_t *)((int64_t)unaff_RBX + 0x44);
    unaff_XMM7_Dc = *(int32_t *)(unaff_RBX + 9);
    unaff_XMM7_Dd = *(int32_t *)((int64_t)unaff_RBX + 0x4c);
    unaff_XMM8_Da = *(int32_t *)(unaff_RBX + 10);
    unaff_XMM8_Db = *(int32_t *)((int64_t)unaff_RBX + 0x54);
    unaff_XMM8_Dc = *(int32_t *)(unaff_RBX + 0xb);
    unaff_XMM8_Dd = *(int32_t *)((int64_t)unaff_RBX + 0x5c);
    unaff_XMM9_Da = *(int32_t *)(unaff_RBX + 0xe);
    unaff_XMM9_Db = *(int32_t *)((int64_t)unaff_RBX + 0x74);
    unaff_XMM9_Dc = *(int32_t *)(unaff_RBX + 0xf);
    unaff_XMM9_Dd = *(int32_t *)((int64_t)unaff_RBX + 0x7c);
    unaff_RBX = param_1;
    unaff_XMM6_Dd = param_3;
    if (param_3 < *(float *)(unaff_RDI + 0x2c)) {
      Function_c0557ad8(&local_buffer_000000e0);
// WARNING: Subroutine does not return
      memmove();
    }
  }
  return;
}