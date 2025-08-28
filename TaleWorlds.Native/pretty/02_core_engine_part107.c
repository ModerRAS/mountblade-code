#include "TaleWorlds.Native.Split.h"

// 02_core_engine_part107.c - 9 个函数

// 函数: void FUN_1801231dc(float param_1,float param_2,float param_3,float param_4)
void FUN_1801231dc(float param_1,float param_2,float param_3,float param_4)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  float fVar5;
  bool bVar6;
  longlong lVar7;
  uint uVar8;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar9;
  float unaff_XMM7_Da;
  float fVar10;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  float unaff_XMM14_Da;
  
  fVar10 = unaff_XMM7_Da + param_1;
  fVar9 = unaff_XMM6_Da + param_1;
  param_1 = unaff_XMM8_Da - param_1;
  if ((((unaff_XMM9_Da < param_4) || (param_1 < param_3)) || (param_2 < fVar10)) ||
     (*(float *)(unaff_RBX + 0x234) <= fVar9 && fVar9 != *(float *)(unaff_RBX + 0x234))) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if (!bVar6) {
    FUN_180291b40(*(uint64_t *)(unaff_RBX + 0x2e8),CONCAT44(param_1,unaff_XMM9_Da),
                  CONCAT44(fVar9,fVar10),0);
  }
  lVar7 = _DAT_180c8a9b0;
  uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
  uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
  fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
  *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
  *(int32_t *)(unaff_RBP + -0x55) = uVar3;
  *(int32_t *)(unaff_RBP + -0x51) = uVar4;
  *(float *)(unaff_RBP + -0x4d) = fVar5;
  *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
  uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
  *(float *)(unaff_RBP + 0x77) = unaff_XMM7_Da + 3.0;
  *(float *)(unaff_RBP + 0x7b) = unaff_XMM6_Da + 3.0;
  *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da - 3.0;
  *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + unaff_XMM14_Da;
  if ((uVar8 & 0xff000000) != 0) {
    FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,uVar8);
  }
  if (!bVar6) {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
    *piVar1 = *piVar1 + -1;
    FUN_180291950();
  }
  lVar7 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar5 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar3;
    *(int32_t *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar5;
    *(float *)(unaff_RBP + -0x4d) = fVar5 * *(float *)(lVar7 + 0x1628);
    uVar8 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar8 & 0xff000000) != 0) {
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        fVar10 = fVar10 - 0.49;
        fVar9 = fVar9 - 0.49;
      }
      else {
        fVar10 = fVar10 - 0.5;
        fVar9 = fVar9 - 0.5;
      }
      *(float *)(unaff_RBP + 0x77) = fVar10;
      *(float *)(unaff_RBP + 0x7b) = fVar9;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = param_1 + 0.5;
      FUN_1802939e0(lVar2,unaff_RBP + 0x7f,unaff_RBP + 0x77);
      FUN_1802923e0(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar8,1);
      *(int32_t *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_1801232da(void)
void FUN_1801232da(void)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  int32_t in_EAX;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  char unaff_SIL;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  int32_t uStack0000000000000028;
  int32_t uStack0000000000000030;
  
  uStack0000000000000030 = 0x40000000;
  uStack0000000000000028 = 0xf;
  FUN_180293e80(*(uint64_t *)(unaff_RBX + 0x2e8),unaff_RBP + 0x7f,unaff_RBP + 0x77,in_EAX);
  if (unaff_SIL == '\0') {
    piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
    *piVar1 = *piVar1 + -1;
    FUN_180291950();
  }
  lVar5 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar3;
    *(int32_t *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar7 * *(float *)(lVar5 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar6 & 0xff000000) != 0) {
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        fVar8 = unaff_XMM7_Da - 0.49;
        fVar7 = unaff_XMM6_Da - 0.49;
      }
      else {
        fVar8 = unaff_XMM7_Da - 0.5;
        fVar7 = unaff_XMM6_Da - 0.5;
      }
      *(float *)(unaff_RBP + 0x77) = fVar8;
      *(float *)(unaff_RBP + 0x7b) = fVar7;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da + 0.5;
      FUN_1802939e0(lVar2,unaff_RBP + 0x7f,unaff_RBP + 0x77);
      FUN_1802923e0(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar6,1);
      *(int32_t *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_18012331b(void)
void FUN_18012331b(void)

{
  int *piVar1;
  longlong lVar2;
  int32_t uVar3;
  int32_t uVar4;
  longlong lVar5;
  uint uVar6;
  longlong unaff_RBX;
  longlong unaff_RBP;
  ulonglong unaff_RDI;
  float unaff_XMM6_Da;
  float fVar7;
  float unaff_XMM7_Da;
  float fVar8;
  float unaff_XMM8_Da;
  float unaff_XMM9_Da;
  
  piVar1 = (int *)(*(longlong *)(unaff_RBX + 0x2e8) + 0x60);
  *piVar1 = *piVar1 + -1;
  FUN_180291950();
  lVar5 = _DAT_180c8a9b0;
  if ((unaff_RDI & 2) != 0) {
    lVar2 = *(longlong *)(unaff_RBX + 0x2e8);
    uVar3 = *(int32_t *)(_DAT_180c8a9b0 + 0x19ac);
    uVar4 = *(int32_t *)(_DAT_180c8a9b0 + 0x19b0);
    fVar7 = *(float *)(_DAT_180c8a9b0 + 0x19b4);
    *(int32_t *)(unaff_RBP + -0x59) = *(int32_t *)(_DAT_180c8a9b0 + 0x19a8);
    *(int32_t *)(unaff_RBP + -0x55) = uVar3;
    *(int32_t *)(unaff_RBP + -0x51) = uVar4;
    *(float *)(unaff_RBP + -0x4d) = fVar7;
    *(float *)(unaff_RBP + -0x4d) = fVar7 * *(float *)(lVar5 + 0x1628);
    uVar6 = func_0x000180121e20(unaff_RBP + -0x59);
    if ((uVar6 & 0xff000000) != 0) {
      if ((*(byte *)(lVar2 + 0x30) & 1) == 0) {
        fVar8 = unaff_XMM7_Da - 0.49;
        fVar7 = unaff_XMM6_Da - 0.49;
      }
      else {
        fVar8 = unaff_XMM7_Da - 0.5;
        fVar7 = unaff_XMM6_Da - 0.5;
      }
      *(float *)(unaff_RBP + 0x77) = fVar8;
      *(float *)(unaff_RBP + 0x7b) = fVar7;
      *(float *)(unaff_RBP + 0x7f) = unaff_XMM9_Da + 0.5;
      *(float *)(unaff_RBP + 0x83) = unaff_XMM8_Da + 0.5;
      FUN_1802939e0(lVar2,unaff_RBP + 0x7f,unaff_RBP + 0x77);
      FUN_1802923e0(lVar2,*(uint64_t *)(lVar2 + 0x88),*(int32_t *)(lVar2 + 0x80),uVar6,1);
      *(int32_t *)(lVar2 + 0x80) = 0;
    }
  }
  return;
}





// 函数: void FUN_18012344d(void)
void FUN_18012344d(void)

{
  return;
}





// 函数: void FUN_180123455(void)
void FUN_180123455(void)

{
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint64_t * FUN_180123460(uint64_t *param_1,longlong param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  uint64_t uVar4;
  longlong lVar5;
  uint64_t *puVar6;
  uint uVar7;
  
  *(uint64_t *)((longlong)param_1 + 0x14) = 0;
  *(uint64_t *)((longlong)param_1 + 0x1c) = 0;
  *(int8_t *)((longlong)param_1 + 0x24) = 1;
  *(uint64_t *)((longlong)param_1 + 0x34) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(uint64_t *)((longlong)param_1 + 0x8c) = 0;
  *(uint64_t *)((longlong)param_1 + 0x94) = 0;
  *(uint64_t *)((longlong)param_1 + 0x9c) = 0;
  *(uint64_t *)((longlong)param_1 + 0xa4) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  FUN_180120b10(param_1 + 0x20,param_2,param_3,param_2,0xfffffffffffffffe);
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  *(int32_t *)(param_1 + 0x45) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x22c) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x46) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x234) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x47) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x23c) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x48) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x244) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x49) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x24c) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x4a) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x254) = 0xff7fffff;
  *(int32_t *)(param_1 + 0x4b) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x25c) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x4c) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x264) = 0xff7fffff;
  param_1[0x4d] = 0;
  *(int32_t *)(param_1 + 0x4e) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x274) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x4f) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x27c) = 0xff7fffff;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  FUN_18011fa30(param_1 + 0x5e,param_2 + 0x1a00);
  puVar6 = param_1 + 0x7a;
  lVar5 = 2;
  do {
    func_0x00018010e520(puVar6);
    puVar6 = puVar6 + 2;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  *(int32_t *)(param_1 + 0x84) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x424) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x85) = 0xff7fffff;
  *(int32_t *)((longlong)param_1 + 0x42c) = 0xff7fffff;
  uVar4 = FUN_1801210b0(param_3);
  *param_1 = uVar4;
  uVar7 = 0xffffffff;
  bVar1 = *param_3;
  pbVar2 = param_3 + 1;
  while (bVar1 != 0) {
    if (((bVar1 == 0x23) && (*pbVar2 == 0x23)) && (pbVar2[1] == 0x23)) {
      uVar7 = 0xffffffff;
    }
    uVar7 = *(uint *)(&UNK_18098d290 + ((ulonglong)(uVar7 & 0xff) ^ (ulonglong)bVar1) * 4) ^
            uVar7 >> 8;
    bVar1 = *pbVar2;
    pbVar2 = pbVar2 + 1;
  }
  *(uint *)(param_1 + 1) = ~uVar7;
  FUN_18011d940(param_1 + 0x43);
  *(uint64_t *)((longlong)param_1 + 0xc) = 0;
  param_1[5] = 0;
  *(int32_t *)(param_1 + 6) = 0;
  *(int32_t *)((longlong)param_1 + 0x3c) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x34) = 0x7f7fffff;
  *(int32_t *)(param_1 + 7) = 0x7f7fffff;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  lVar5 = -1;
  do {
    lVar5 = lVar5 + 1;
  } while (param_3[lVar5] != 0);
  *(int *)(param_1 + 0x10) = (int)lVar5 + 1;
  iVar3 = FUN_180121250(&UNK_180a0644c,0,
                        *(int32_t *)(param_1[0x44] + -4 + (longlong)*(int *)(param_1 + 0x43) * 4)
                       );
  lVar5 = _DAT_180c8a9b0;
  if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar3) {
    *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar3;
  }
  if (*(int *)(lVar5 + 0x1b30) == iVar3) {
    *(int8_t *)(lVar5 + 0x1b3f) = 1;
  }
  *(int *)((longlong)param_1 + 0x84) = iVar3;
  param_1[0x11] = 0;
  *(int32_t *)(param_1 + 0x12) = 0;
  *(int32_t *)((longlong)param_1 + 0x94) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x13) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0x9c) = 0x3f000000;
  param_1[0x14] = 0x3f000000;
  param_1[0x15] = 0;
  *(int32_t *)(param_1 + 0x16) = 0;
  *(int16_t *)((longlong)param_1 + 0xb4) = 0;
  *(int32_t *)((longlong)param_1 + 0xb6) = 0;
  *(int32_t *)((longlong)param_1 + 0xba) = 0xffffffff;
  *(int32_t *)(param_1 + 0x18) = 0;
  *(uint64_t *)((longlong)param_1 + 0xc4) = 0xffffffffffffffff;
  *(int8_t *)((longlong)param_1 + 0xcc) = 0;
  *(int32_t *)(param_1 + 0x1a) = 0;
  *(int32_t *)((longlong)param_1 + 0xd4) = 0xffffffff;
  param_1[0x1b] = 0;
  *(int32_t *)((longlong)param_1 + 0xec) = 0xf;
  *(int32_t *)(param_1 + 0x1d) = 0xf;
  *(int32_t *)((longlong)param_1 + 0xe4) = 0xf;
  *(int32_t *)(param_1 + 0x1c) = 0xf;
  *(int32_t *)(param_1 + 0x1f) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0xfc) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x1e) = 0x7f7fffff;
  *(int32_t *)((longlong)param_1 + 0xf4) = 0x7f7fffff;
  *(int32_t *)(param_1 + 0x50) = 0xffffffff;
  *(int32_t *)((longlong)param_1 + 0x284) = 0;
  *(int32_t *)((longlong)param_1 + 0x2dc) = 0x3f800000;
  *(int32_t *)(param_1 + 0x5b) = 0x3f800000;
  *(int32_t *)(param_1 + 0x5c) = 0xffffffff;
  param_1[0x5d] = param_1 + 0x5e;
  param_1[0x66] = *param_1;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0x7f7fffff7f7fffff;
  param_1[0x7d] = 0xff7fffffff7fffff;
  param_1[0x7a] = 0x7f7fffff7f7fffff;
  param_1[0x7b] = 0xff7fffffff7fffff;
  param_1[0x78] = 0;
  param_1[0x7e] = 0xffffffffffffffff;
  *(int32_t *)((longlong)param_1 + 0x3fc) = 0x7fffffff;
  *(int32_t *)(param_1 + 0x7f) = 0x7fffffff;
  *(int32_t *)((longlong)param_1 + 0x404) = 0x7fffffff;
  *(int32_t *)(param_1 + 0x80) = 0x7fffffff;
  param_1[0x82] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  *(int16_t *)(param_1 + 0x86) = 0xffff;
  *(byte *)((longlong)param_1 + 0x432) = *(byte *)((longlong)param_1 + 0x432) & 0xf8;
  return param_1;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123960(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180123960(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0xf0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(param_1 + 0xe0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(param_1 + 0xd0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(param_1 + 0xc0);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar1 = *(longlong *)(param_1 + 0x90);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123a60(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180123a60(longlong *param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint64_t uVar4;
  
  uVar4 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  iVar3 = 0;
  if ((int)param_1[0x59] != 0) {
    lVar2 = 0;
    do {
      lVar1 = *(longlong *)(param_1[0x5a] + lVar2 + 0x38);
      if (lVar1 != 0) {
        if (_DAT_180c8a9b0 != 0) {
          *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
        }
                    // WARNING: Subroutine does not return
        FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
      }
      iVar3 = iVar3 + 1;
      lVar2 = lVar2 + 0x40;
    } while (iVar3 != (int)param_1[0x59]);
  }
  FUN_18011fab0(param_1 + 0x5e);
  lVar2 = param_1[0x5a];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,uVar4);
  }
  lVar2 = param_1[0x58];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,uVar4);
  }
  lVar2 = param_1[0x44];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,uVar4);
  }
  lVar2 = param_1[0x3e];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar2 = param_1[0x3c];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar2 = param_1[0x3a];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar2 = param_1[0x38];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  lVar2 = param_1[0x32];
  if (lVar2 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar2,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123bc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)
void FUN_180123bc0(longlong param_1,uint64_t param_2,uint64_t param_3,uint64_t param_4)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 != 0) {
    if (_DAT_180c8a9b0 != 0) {
      *(int *)(_DAT_180c8a9b0 + 0x3a8) = *(int *)(_DAT_180c8a9b0 + 0x3a8) + -1;
    }
                    // WARNING: Subroutine does not return
    FUN_180059ba0(lVar1,_DAT_180c8a9a8,param_3,param_4,0xfffffffffffffffe);
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



// 函数: void FUN_180123c00(longlong param_1,uint64_t param_2)
void FUN_180123c00(longlong param_1,uint64_t param_2)

{
  longlong lVar1;
  int iVar2;
  
  iVar2 = FUN_180121250(param_2,0,
                        *(int32_t *)
                         (*(longlong *)(param_1 + 0x220) + -4 +
                         (longlong)*(int *)(param_1 + 0x218) * 4));
  lVar1 = _DAT_180c8a9b0;
  if (*(int *)(_DAT_180c8a9b0 + 0x1b2c) == iVar2) {
    *(int *)(_DAT_180c8a9b0 + 0x1b34) = iVar2;
  }
  if (*(int *)(lVar1 + 0x1b30) == iVar2) {
    *(int8_t *)(lVar1 + 0x1b3f) = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address



